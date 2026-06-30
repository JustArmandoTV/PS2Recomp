#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046EDE0
// Address: 0x46ede0 - 0x46fb80
void sub_0046EDE0_0x46ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046EDE0_0x46ede0");
#endif

    switch (ctx->pc) {
        case 0x46ede0u: goto label_46ede0;
        case 0x46ede4u: goto label_46ede4;
        case 0x46ede8u: goto label_46ede8;
        case 0x46edecu: goto label_46edec;
        case 0x46edf0u: goto label_46edf0;
        case 0x46edf4u: goto label_46edf4;
        case 0x46edf8u: goto label_46edf8;
        case 0x46edfcu: goto label_46edfc;
        case 0x46ee00u: goto label_46ee00;
        case 0x46ee04u: goto label_46ee04;
        case 0x46ee08u: goto label_46ee08;
        case 0x46ee0cu: goto label_46ee0c;
        case 0x46ee10u: goto label_46ee10;
        case 0x46ee14u: goto label_46ee14;
        case 0x46ee18u: goto label_46ee18;
        case 0x46ee1cu: goto label_46ee1c;
        case 0x46ee20u: goto label_46ee20;
        case 0x46ee24u: goto label_46ee24;
        case 0x46ee28u: goto label_46ee28;
        case 0x46ee2cu: goto label_46ee2c;
        case 0x46ee30u: goto label_46ee30;
        case 0x46ee34u: goto label_46ee34;
        case 0x46ee38u: goto label_46ee38;
        case 0x46ee3cu: goto label_46ee3c;
        case 0x46ee40u: goto label_46ee40;
        case 0x46ee44u: goto label_46ee44;
        case 0x46ee48u: goto label_46ee48;
        case 0x46ee4cu: goto label_46ee4c;
        case 0x46ee50u: goto label_46ee50;
        case 0x46ee54u: goto label_46ee54;
        case 0x46ee58u: goto label_46ee58;
        case 0x46ee5cu: goto label_46ee5c;
        case 0x46ee60u: goto label_46ee60;
        case 0x46ee64u: goto label_46ee64;
        case 0x46ee68u: goto label_46ee68;
        case 0x46ee6cu: goto label_46ee6c;
        case 0x46ee70u: goto label_46ee70;
        case 0x46ee74u: goto label_46ee74;
        case 0x46ee78u: goto label_46ee78;
        case 0x46ee7cu: goto label_46ee7c;
        case 0x46ee80u: goto label_46ee80;
        case 0x46ee84u: goto label_46ee84;
        case 0x46ee88u: goto label_46ee88;
        case 0x46ee8cu: goto label_46ee8c;
        case 0x46ee90u: goto label_46ee90;
        case 0x46ee94u: goto label_46ee94;
        case 0x46ee98u: goto label_46ee98;
        case 0x46ee9cu: goto label_46ee9c;
        case 0x46eea0u: goto label_46eea0;
        case 0x46eea4u: goto label_46eea4;
        case 0x46eea8u: goto label_46eea8;
        case 0x46eeacu: goto label_46eeac;
        case 0x46eeb0u: goto label_46eeb0;
        case 0x46eeb4u: goto label_46eeb4;
        case 0x46eeb8u: goto label_46eeb8;
        case 0x46eebcu: goto label_46eebc;
        case 0x46eec0u: goto label_46eec0;
        case 0x46eec4u: goto label_46eec4;
        case 0x46eec8u: goto label_46eec8;
        case 0x46eeccu: goto label_46eecc;
        case 0x46eed0u: goto label_46eed0;
        case 0x46eed4u: goto label_46eed4;
        case 0x46eed8u: goto label_46eed8;
        case 0x46eedcu: goto label_46eedc;
        case 0x46eee0u: goto label_46eee0;
        case 0x46eee4u: goto label_46eee4;
        case 0x46eee8u: goto label_46eee8;
        case 0x46eeecu: goto label_46eeec;
        case 0x46eef0u: goto label_46eef0;
        case 0x46eef4u: goto label_46eef4;
        case 0x46eef8u: goto label_46eef8;
        case 0x46eefcu: goto label_46eefc;
        case 0x46ef00u: goto label_46ef00;
        case 0x46ef04u: goto label_46ef04;
        case 0x46ef08u: goto label_46ef08;
        case 0x46ef0cu: goto label_46ef0c;
        case 0x46ef10u: goto label_46ef10;
        case 0x46ef14u: goto label_46ef14;
        case 0x46ef18u: goto label_46ef18;
        case 0x46ef1cu: goto label_46ef1c;
        case 0x46ef20u: goto label_46ef20;
        case 0x46ef24u: goto label_46ef24;
        case 0x46ef28u: goto label_46ef28;
        case 0x46ef2cu: goto label_46ef2c;
        case 0x46ef30u: goto label_46ef30;
        case 0x46ef34u: goto label_46ef34;
        case 0x46ef38u: goto label_46ef38;
        case 0x46ef3cu: goto label_46ef3c;
        case 0x46ef40u: goto label_46ef40;
        case 0x46ef44u: goto label_46ef44;
        case 0x46ef48u: goto label_46ef48;
        case 0x46ef4cu: goto label_46ef4c;
        case 0x46ef50u: goto label_46ef50;
        case 0x46ef54u: goto label_46ef54;
        case 0x46ef58u: goto label_46ef58;
        case 0x46ef5cu: goto label_46ef5c;
        case 0x46ef60u: goto label_46ef60;
        case 0x46ef64u: goto label_46ef64;
        case 0x46ef68u: goto label_46ef68;
        case 0x46ef6cu: goto label_46ef6c;
        case 0x46ef70u: goto label_46ef70;
        case 0x46ef74u: goto label_46ef74;
        case 0x46ef78u: goto label_46ef78;
        case 0x46ef7cu: goto label_46ef7c;
        case 0x46ef80u: goto label_46ef80;
        case 0x46ef84u: goto label_46ef84;
        case 0x46ef88u: goto label_46ef88;
        case 0x46ef8cu: goto label_46ef8c;
        case 0x46ef90u: goto label_46ef90;
        case 0x46ef94u: goto label_46ef94;
        case 0x46ef98u: goto label_46ef98;
        case 0x46ef9cu: goto label_46ef9c;
        case 0x46efa0u: goto label_46efa0;
        case 0x46efa4u: goto label_46efa4;
        case 0x46efa8u: goto label_46efa8;
        case 0x46efacu: goto label_46efac;
        case 0x46efb0u: goto label_46efb0;
        case 0x46efb4u: goto label_46efb4;
        case 0x46efb8u: goto label_46efb8;
        case 0x46efbcu: goto label_46efbc;
        case 0x46efc0u: goto label_46efc0;
        case 0x46efc4u: goto label_46efc4;
        case 0x46efc8u: goto label_46efc8;
        case 0x46efccu: goto label_46efcc;
        case 0x46efd0u: goto label_46efd0;
        case 0x46efd4u: goto label_46efd4;
        case 0x46efd8u: goto label_46efd8;
        case 0x46efdcu: goto label_46efdc;
        case 0x46efe0u: goto label_46efe0;
        case 0x46efe4u: goto label_46efe4;
        case 0x46efe8u: goto label_46efe8;
        case 0x46efecu: goto label_46efec;
        case 0x46eff0u: goto label_46eff0;
        case 0x46eff4u: goto label_46eff4;
        case 0x46eff8u: goto label_46eff8;
        case 0x46effcu: goto label_46effc;
        case 0x46f000u: goto label_46f000;
        case 0x46f004u: goto label_46f004;
        case 0x46f008u: goto label_46f008;
        case 0x46f00cu: goto label_46f00c;
        case 0x46f010u: goto label_46f010;
        case 0x46f014u: goto label_46f014;
        case 0x46f018u: goto label_46f018;
        case 0x46f01cu: goto label_46f01c;
        case 0x46f020u: goto label_46f020;
        case 0x46f024u: goto label_46f024;
        case 0x46f028u: goto label_46f028;
        case 0x46f02cu: goto label_46f02c;
        case 0x46f030u: goto label_46f030;
        case 0x46f034u: goto label_46f034;
        case 0x46f038u: goto label_46f038;
        case 0x46f03cu: goto label_46f03c;
        case 0x46f040u: goto label_46f040;
        case 0x46f044u: goto label_46f044;
        case 0x46f048u: goto label_46f048;
        case 0x46f04cu: goto label_46f04c;
        case 0x46f050u: goto label_46f050;
        case 0x46f054u: goto label_46f054;
        case 0x46f058u: goto label_46f058;
        case 0x46f05cu: goto label_46f05c;
        case 0x46f060u: goto label_46f060;
        case 0x46f064u: goto label_46f064;
        case 0x46f068u: goto label_46f068;
        case 0x46f06cu: goto label_46f06c;
        case 0x46f070u: goto label_46f070;
        case 0x46f074u: goto label_46f074;
        case 0x46f078u: goto label_46f078;
        case 0x46f07cu: goto label_46f07c;
        case 0x46f080u: goto label_46f080;
        case 0x46f084u: goto label_46f084;
        case 0x46f088u: goto label_46f088;
        case 0x46f08cu: goto label_46f08c;
        case 0x46f090u: goto label_46f090;
        case 0x46f094u: goto label_46f094;
        case 0x46f098u: goto label_46f098;
        case 0x46f09cu: goto label_46f09c;
        case 0x46f0a0u: goto label_46f0a0;
        case 0x46f0a4u: goto label_46f0a4;
        case 0x46f0a8u: goto label_46f0a8;
        case 0x46f0acu: goto label_46f0ac;
        case 0x46f0b0u: goto label_46f0b0;
        case 0x46f0b4u: goto label_46f0b4;
        case 0x46f0b8u: goto label_46f0b8;
        case 0x46f0bcu: goto label_46f0bc;
        case 0x46f0c0u: goto label_46f0c0;
        case 0x46f0c4u: goto label_46f0c4;
        case 0x46f0c8u: goto label_46f0c8;
        case 0x46f0ccu: goto label_46f0cc;
        case 0x46f0d0u: goto label_46f0d0;
        case 0x46f0d4u: goto label_46f0d4;
        case 0x46f0d8u: goto label_46f0d8;
        case 0x46f0dcu: goto label_46f0dc;
        case 0x46f0e0u: goto label_46f0e0;
        case 0x46f0e4u: goto label_46f0e4;
        case 0x46f0e8u: goto label_46f0e8;
        case 0x46f0ecu: goto label_46f0ec;
        case 0x46f0f0u: goto label_46f0f0;
        case 0x46f0f4u: goto label_46f0f4;
        case 0x46f0f8u: goto label_46f0f8;
        case 0x46f0fcu: goto label_46f0fc;
        case 0x46f100u: goto label_46f100;
        case 0x46f104u: goto label_46f104;
        case 0x46f108u: goto label_46f108;
        case 0x46f10cu: goto label_46f10c;
        case 0x46f110u: goto label_46f110;
        case 0x46f114u: goto label_46f114;
        case 0x46f118u: goto label_46f118;
        case 0x46f11cu: goto label_46f11c;
        case 0x46f120u: goto label_46f120;
        case 0x46f124u: goto label_46f124;
        case 0x46f128u: goto label_46f128;
        case 0x46f12cu: goto label_46f12c;
        case 0x46f130u: goto label_46f130;
        case 0x46f134u: goto label_46f134;
        case 0x46f138u: goto label_46f138;
        case 0x46f13cu: goto label_46f13c;
        case 0x46f140u: goto label_46f140;
        case 0x46f144u: goto label_46f144;
        case 0x46f148u: goto label_46f148;
        case 0x46f14cu: goto label_46f14c;
        case 0x46f150u: goto label_46f150;
        case 0x46f154u: goto label_46f154;
        case 0x46f158u: goto label_46f158;
        case 0x46f15cu: goto label_46f15c;
        case 0x46f160u: goto label_46f160;
        case 0x46f164u: goto label_46f164;
        case 0x46f168u: goto label_46f168;
        case 0x46f16cu: goto label_46f16c;
        case 0x46f170u: goto label_46f170;
        case 0x46f174u: goto label_46f174;
        case 0x46f178u: goto label_46f178;
        case 0x46f17cu: goto label_46f17c;
        case 0x46f180u: goto label_46f180;
        case 0x46f184u: goto label_46f184;
        case 0x46f188u: goto label_46f188;
        case 0x46f18cu: goto label_46f18c;
        case 0x46f190u: goto label_46f190;
        case 0x46f194u: goto label_46f194;
        case 0x46f198u: goto label_46f198;
        case 0x46f19cu: goto label_46f19c;
        case 0x46f1a0u: goto label_46f1a0;
        case 0x46f1a4u: goto label_46f1a4;
        case 0x46f1a8u: goto label_46f1a8;
        case 0x46f1acu: goto label_46f1ac;
        case 0x46f1b0u: goto label_46f1b0;
        case 0x46f1b4u: goto label_46f1b4;
        case 0x46f1b8u: goto label_46f1b8;
        case 0x46f1bcu: goto label_46f1bc;
        case 0x46f1c0u: goto label_46f1c0;
        case 0x46f1c4u: goto label_46f1c4;
        case 0x46f1c8u: goto label_46f1c8;
        case 0x46f1ccu: goto label_46f1cc;
        case 0x46f1d0u: goto label_46f1d0;
        case 0x46f1d4u: goto label_46f1d4;
        case 0x46f1d8u: goto label_46f1d8;
        case 0x46f1dcu: goto label_46f1dc;
        case 0x46f1e0u: goto label_46f1e0;
        case 0x46f1e4u: goto label_46f1e4;
        case 0x46f1e8u: goto label_46f1e8;
        case 0x46f1ecu: goto label_46f1ec;
        case 0x46f1f0u: goto label_46f1f0;
        case 0x46f1f4u: goto label_46f1f4;
        case 0x46f1f8u: goto label_46f1f8;
        case 0x46f1fcu: goto label_46f1fc;
        case 0x46f200u: goto label_46f200;
        case 0x46f204u: goto label_46f204;
        case 0x46f208u: goto label_46f208;
        case 0x46f20cu: goto label_46f20c;
        case 0x46f210u: goto label_46f210;
        case 0x46f214u: goto label_46f214;
        case 0x46f218u: goto label_46f218;
        case 0x46f21cu: goto label_46f21c;
        case 0x46f220u: goto label_46f220;
        case 0x46f224u: goto label_46f224;
        case 0x46f228u: goto label_46f228;
        case 0x46f22cu: goto label_46f22c;
        case 0x46f230u: goto label_46f230;
        case 0x46f234u: goto label_46f234;
        case 0x46f238u: goto label_46f238;
        case 0x46f23cu: goto label_46f23c;
        case 0x46f240u: goto label_46f240;
        case 0x46f244u: goto label_46f244;
        case 0x46f248u: goto label_46f248;
        case 0x46f24cu: goto label_46f24c;
        case 0x46f250u: goto label_46f250;
        case 0x46f254u: goto label_46f254;
        case 0x46f258u: goto label_46f258;
        case 0x46f25cu: goto label_46f25c;
        case 0x46f260u: goto label_46f260;
        case 0x46f264u: goto label_46f264;
        case 0x46f268u: goto label_46f268;
        case 0x46f26cu: goto label_46f26c;
        case 0x46f270u: goto label_46f270;
        case 0x46f274u: goto label_46f274;
        case 0x46f278u: goto label_46f278;
        case 0x46f27cu: goto label_46f27c;
        case 0x46f280u: goto label_46f280;
        case 0x46f284u: goto label_46f284;
        case 0x46f288u: goto label_46f288;
        case 0x46f28cu: goto label_46f28c;
        case 0x46f290u: goto label_46f290;
        case 0x46f294u: goto label_46f294;
        case 0x46f298u: goto label_46f298;
        case 0x46f29cu: goto label_46f29c;
        case 0x46f2a0u: goto label_46f2a0;
        case 0x46f2a4u: goto label_46f2a4;
        case 0x46f2a8u: goto label_46f2a8;
        case 0x46f2acu: goto label_46f2ac;
        case 0x46f2b0u: goto label_46f2b0;
        case 0x46f2b4u: goto label_46f2b4;
        case 0x46f2b8u: goto label_46f2b8;
        case 0x46f2bcu: goto label_46f2bc;
        case 0x46f2c0u: goto label_46f2c0;
        case 0x46f2c4u: goto label_46f2c4;
        case 0x46f2c8u: goto label_46f2c8;
        case 0x46f2ccu: goto label_46f2cc;
        case 0x46f2d0u: goto label_46f2d0;
        case 0x46f2d4u: goto label_46f2d4;
        case 0x46f2d8u: goto label_46f2d8;
        case 0x46f2dcu: goto label_46f2dc;
        case 0x46f2e0u: goto label_46f2e0;
        case 0x46f2e4u: goto label_46f2e4;
        case 0x46f2e8u: goto label_46f2e8;
        case 0x46f2ecu: goto label_46f2ec;
        case 0x46f2f0u: goto label_46f2f0;
        case 0x46f2f4u: goto label_46f2f4;
        case 0x46f2f8u: goto label_46f2f8;
        case 0x46f2fcu: goto label_46f2fc;
        case 0x46f300u: goto label_46f300;
        case 0x46f304u: goto label_46f304;
        case 0x46f308u: goto label_46f308;
        case 0x46f30cu: goto label_46f30c;
        case 0x46f310u: goto label_46f310;
        case 0x46f314u: goto label_46f314;
        case 0x46f318u: goto label_46f318;
        case 0x46f31cu: goto label_46f31c;
        case 0x46f320u: goto label_46f320;
        case 0x46f324u: goto label_46f324;
        case 0x46f328u: goto label_46f328;
        case 0x46f32cu: goto label_46f32c;
        case 0x46f330u: goto label_46f330;
        case 0x46f334u: goto label_46f334;
        case 0x46f338u: goto label_46f338;
        case 0x46f33cu: goto label_46f33c;
        case 0x46f340u: goto label_46f340;
        case 0x46f344u: goto label_46f344;
        case 0x46f348u: goto label_46f348;
        case 0x46f34cu: goto label_46f34c;
        case 0x46f350u: goto label_46f350;
        case 0x46f354u: goto label_46f354;
        case 0x46f358u: goto label_46f358;
        case 0x46f35cu: goto label_46f35c;
        case 0x46f360u: goto label_46f360;
        case 0x46f364u: goto label_46f364;
        case 0x46f368u: goto label_46f368;
        case 0x46f36cu: goto label_46f36c;
        case 0x46f370u: goto label_46f370;
        case 0x46f374u: goto label_46f374;
        case 0x46f378u: goto label_46f378;
        case 0x46f37cu: goto label_46f37c;
        case 0x46f380u: goto label_46f380;
        case 0x46f384u: goto label_46f384;
        case 0x46f388u: goto label_46f388;
        case 0x46f38cu: goto label_46f38c;
        case 0x46f390u: goto label_46f390;
        case 0x46f394u: goto label_46f394;
        case 0x46f398u: goto label_46f398;
        case 0x46f39cu: goto label_46f39c;
        case 0x46f3a0u: goto label_46f3a0;
        case 0x46f3a4u: goto label_46f3a4;
        case 0x46f3a8u: goto label_46f3a8;
        case 0x46f3acu: goto label_46f3ac;
        case 0x46f3b0u: goto label_46f3b0;
        case 0x46f3b4u: goto label_46f3b4;
        case 0x46f3b8u: goto label_46f3b8;
        case 0x46f3bcu: goto label_46f3bc;
        case 0x46f3c0u: goto label_46f3c0;
        case 0x46f3c4u: goto label_46f3c4;
        case 0x46f3c8u: goto label_46f3c8;
        case 0x46f3ccu: goto label_46f3cc;
        case 0x46f3d0u: goto label_46f3d0;
        case 0x46f3d4u: goto label_46f3d4;
        case 0x46f3d8u: goto label_46f3d8;
        case 0x46f3dcu: goto label_46f3dc;
        case 0x46f3e0u: goto label_46f3e0;
        case 0x46f3e4u: goto label_46f3e4;
        case 0x46f3e8u: goto label_46f3e8;
        case 0x46f3ecu: goto label_46f3ec;
        case 0x46f3f0u: goto label_46f3f0;
        case 0x46f3f4u: goto label_46f3f4;
        case 0x46f3f8u: goto label_46f3f8;
        case 0x46f3fcu: goto label_46f3fc;
        case 0x46f400u: goto label_46f400;
        case 0x46f404u: goto label_46f404;
        case 0x46f408u: goto label_46f408;
        case 0x46f40cu: goto label_46f40c;
        case 0x46f410u: goto label_46f410;
        case 0x46f414u: goto label_46f414;
        case 0x46f418u: goto label_46f418;
        case 0x46f41cu: goto label_46f41c;
        case 0x46f420u: goto label_46f420;
        case 0x46f424u: goto label_46f424;
        case 0x46f428u: goto label_46f428;
        case 0x46f42cu: goto label_46f42c;
        case 0x46f430u: goto label_46f430;
        case 0x46f434u: goto label_46f434;
        case 0x46f438u: goto label_46f438;
        case 0x46f43cu: goto label_46f43c;
        case 0x46f440u: goto label_46f440;
        case 0x46f444u: goto label_46f444;
        case 0x46f448u: goto label_46f448;
        case 0x46f44cu: goto label_46f44c;
        case 0x46f450u: goto label_46f450;
        case 0x46f454u: goto label_46f454;
        case 0x46f458u: goto label_46f458;
        case 0x46f45cu: goto label_46f45c;
        case 0x46f460u: goto label_46f460;
        case 0x46f464u: goto label_46f464;
        case 0x46f468u: goto label_46f468;
        case 0x46f46cu: goto label_46f46c;
        case 0x46f470u: goto label_46f470;
        case 0x46f474u: goto label_46f474;
        case 0x46f478u: goto label_46f478;
        case 0x46f47cu: goto label_46f47c;
        case 0x46f480u: goto label_46f480;
        case 0x46f484u: goto label_46f484;
        case 0x46f488u: goto label_46f488;
        case 0x46f48cu: goto label_46f48c;
        case 0x46f490u: goto label_46f490;
        case 0x46f494u: goto label_46f494;
        case 0x46f498u: goto label_46f498;
        case 0x46f49cu: goto label_46f49c;
        case 0x46f4a0u: goto label_46f4a0;
        case 0x46f4a4u: goto label_46f4a4;
        case 0x46f4a8u: goto label_46f4a8;
        case 0x46f4acu: goto label_46f4ac;
        case 0x46f4b0u: goto label_46f4b0;
        case 0x46f4b4u: goto label_46f4b4;
        case 0x46f4b8u: goto label_46f4b8;
        case 0x46f4bcu: goto label_46f4bc;
        case 0x46f4c0u: goto label_46f4c0;
        case 0x46f4c4u: goto label_46f4c4;
        case 0x46f4c8u: goto label_46f4c8;
        case 0x46f4ccu: goto label_46f4cc;
        case 0x46f4d0u: goto label_46f4d0;
        case 0x46f4d4u: goto label_46f4d4;
        case 0x46f4d8u: goto label_46f4d8;
        case 0x46f4dcu: goto label_46f4dc;
        case 0x46f4e0u: goto label_46f4e0;
        case 0x46f4e4u: goto label_46f4e4;
        case 0x46f4e8u: goto label_46f4e8;
        case 0x46f4ecu: goto label_46f4ec;
        case 0x46f4f0u: goto label_46f4f0;
        case 0x46f4f4u: goto label_46f4f4;
        case 0x46f4f8u: goto label_46f4f8;
        case 0x46f4fcu: goto label_46f4fc;
        case 0x46f500u: goto label_46f500;
        case 0x46f504u: goto label_46f504;
        case 0x46f508u: goto label_46f508;
        case 0x46f50cu: goto label_46f50c;
        case 0x46f510u: goto label_46f510;
        case 0x46f514u: goto label_46f514;
        case 0x46f518u: goto label_46f518;
        case 0x46f51cu: goto label_46f51c;
        case 0x46f520u: goto label_46f520;
        case 0x46f524u: goto label_46f524;
        case 0x46f528u: goto label_46f528;
        case 0x46f52cu: goto label_46f52c;
        case 0x46f530u: goto label_46f530;
        case 0x46f534u: goto label_46f534;
        case 0x46f538u: goto label_46f538;
        case 0x46f53cu: goto label_46f53c;
        case 0x46f540u: goto label_46f540;
        case 0x46f544u: goto label_46f544;
        case 0x46f548u: goto label_46f548;
        case 0x46f54cu: goto label_46f54c;
        case 0x46f550u: goto label_46f550;
        case 0x46f554u: goto label_46f554;
        case 0x46f558u: goto label_46f558;
        case 0x46f55cu: goto label_46f55c;
        case 0x46f560u: goto label_46f560;
        case 0x46f564u: goto label_46f564;
        case 0x46f568u: goto label_46f568;
        case 0x46f56cu: goto label_46f56c;
        case 0x46f570u: goto label_46f570;
        case 0x46f574u: goto label_46f574;
        case 0x46f578u: goto label_46f578;
        case 0x46f57cu: goto label_46f57c;
        case 0x46f580u: goto label_46f580;
        case 0x46f584u: goto label_46f584;
        case 0x46f588u: goto label_46f588;
        case 0x46f58cu: goto label_46f58c;
        case 0x46f590u: goto label_46f590;
        case 0x46f594u: goto label_46f594;
        case 0x46f598u: goto label_46f598;
        case 0x46f59cu: goto label_46f59c;
        case 0x46f5a0u: goto label_46f5a0;
        case 0x46f5a4u: goto label_46f5a4;
        case 0x46f5a8u: goto label_46f5a8;
        case 0x46f5acu: goto label_46f5ac;
        case 0x46f5b0u: goto label_46f5b0;
        case 0x46f5b4u: goto label_46f5b4;
        case 0x46f5b8u: goto label_46f5b8;
        case 0x46f5bcu: goto label_46f5bc;
        case 0x46f5c0u: goto label_46f5c0;
        case 0x46f5c4u: goto label_46f5c4;
        case 0x46f5c8u: goto label_46f5c8;
        case 0x46f5ccu: goto label_46f5cc;
        case 0x46f5d0u: goto label_46f5d0;
        case 0x46f5d4u: goto label_46f5d4;
        case 0x46f5d8u: goto label_46f5d8;
        case 0x46f5dcu: goto label_46f5dc;
        case 0x46f5e0u: goto label_46f5e0;
        case 0x46f5e4u: goto label_46f5e4;
        case 0x46f5e8u: goto label_46f5e8;
        case 0x46f5ecu: goto label_46f5ec;
        case 0x46f5f0u: goto label_46f5f0;
        case 0x46f5f4u: goto label_46f5f4;
        case 0x46f5f8u: goto label_46f5f8;
        case 0x46f5fcu: goto label_46f5fc;
        case 0x46f600u: goto label_46f600;
        case 0x46f604u: goto label_46f604;
        case 0x46f608u: goto label_46f608;
        case 0x46f60cu: goto label_46f60c;
        case 0x46f610u: goto label_46f610;
        case 0x46f614u: goto label_46f614;
        case 0x46f618u: goto label_46f618;
        case 0x46f61cu: goto label_46f61c;
        case 0x46f620u: goto label_46f620;
        case 0x46f624u: goto label_46f624;
        case 0x46f628u: goto label_46f628;
        case 0x46f62cu: goto label_46f62c;
        case 0x46f630u: goto label_46f630;
        case 0x46f634u: goto label_46f634;
        case 0x46f638u: goto label_46f638;
        case 0x46f63cu: goto label_46f63c;
        case 0x46f640u: goto label_46f640;
        case 0x46f644u: goto label_46f644;
        case 0x46f648u: goto label_46f648;
        case 0x46f64cu: goto label_46f64c;
        case 0x46f650u: goto label_46f650;
        case 0x46f654u: goto label_46f654;
        case 0x46f658u: goto label_46f658;
        case 0x46f65cu: goto label_46f65c;
        case 0x46f660u: goto label_46f660;
        case 0x46f664u: goto label_46f664;
        case 0x46f668u: goto label_46f668;
        case 0x46f66cu: goto label_46f66c;
        case 0x46f670u: goto label_46f670;
        case 0x46f674u: goto label_46f674;
        case 0x46f678u: goto label_46f678;
        case 0x46f67cu: goto label_46f67c;
        case 0x46f680u: goto label_46f680;
        case 0x46f684u: goto label_46f684;
        case 0x46f688u: goto label_46f688;
        case 0x46f68cu: goto label_46f68c;
        case 0x46f690u: goto label_46f690;
        case 0x46f694u: goto label_46f694;
        case 0x46f698u: goto label_46f698;
        case 0x46f69cu: goto label_46f69c;
        case 0x46f6a0u: goto label_46f6a0;
        case 0x46f6a4u: goto label_46f6a4;
        case 0x46f6a8u: goto label_46f6a8;
        case 0x46f6acu: goto label_46f6ac;
        case 0x46f6b0u: goto label_46f6b0;
        case 0x46f6b4u: goto label_46f6b4;
        case 0x46f6b8u: goto label_46f6b8;
        case 0x46f6bcu: goto label_46f6bc;
        case 0x46f6c0u: goto label_46f6c0;
        case 0x46f6c4u: goto label_46f6c4;
        case 0x46f6c8u: goto label_46f6c8;
        case 0x46f6ccu: goto label_46f6cc;
        case 0x46f6d0u: goto label_46f6d0;
        case 0x46f6d4u: goto label_46f6d4;
        case 0x46f6d8u: goto label_46f6d8;
        case 0x46f6dcu: goto label_46f6dc;
        case 0x46f6e0u: goto label_46f6e0;
        case 0x46f6e4u: goto label_46f6e4;
        case 0x46f6e8u: goto label_46f6e8;
        case 0x46f6ecu: goto label_46f6ec;
        case 0x46f6f0u: goto label_46f6f0;
        case 0x46f6f4u: goto label_46f6f4;
        case 0x46f6f8u: goto label_46f6f8;
        case 0x46f6fcu: goto label_46f6fc;
        case 0x46f700u: goto label_46f700;
        case 0x46f704u: goto label_46f704;
        case 0x46f708u: goto label_46f708;
        case 0x46f70cu: goto label_46f70c;
        case 0x46f710u: goto label_46f710;
        case 0x46f714u: goto label_46f714;
        case 0x46f718u: goto label_46f718;
        case 0x46f71cu: goto label_46f71c;
        case 0x46f720u: goto label_46f720;
        case 0x46f724u: goto label_46f724;
        case 0x46f728u: goto label_46f728;
        case 0x46f72cu: goto label_46f72c;
        case 0x46f730u: goto label_46f730;
        case 0x46f734u: goto label_46f734;
        case 0x46f738u: goto label_46f738;
        case 0x46f73cu: goto label_46f73c;
        case 0x46f740u: goto label_46f740;
        case 0x46f744u: goto label_46f744;
        case 0x46f748u: goto label_46f748;
        case 0x46f74cu: goto label_46f74c;
        case 0x46f750u: goto label_46f750;
        case 0x46f754u: goto label_46f754;
        case 0x46f758u: goto label_46f758;
        case 0x46f75cu: goto label_46f75c;
        case 0x46f760u: goto label_46f760;
        case 0x46f764u: goto label_46f764;
        case 0x46f768u: goto label_46f768;
        case 0x46f76cu: goto label_46f76c;
        case 0x46f770u: goto label_46f770;
        case 0x46f774u: goto label_46f774;
        case 0x46f778u: goto label_46f778;
        case 0x46f77cu: goto label_46f77c;
        case 0x46f780u: goto label_46f780;
        case 0x46f784u: goto label_46f784;
        case 0x46f788u: goto label_46f788;
        case 0x46f78cu: goto label_46f78c;
        case 0x46f790u: goto label_46f790;
        case 0x46f794u: goto label_46f794;
        case 0x46f798u: goto label_46f798;
        case 0x46f79cu: goto label_46f79c;
        case 0x46f7a0u: goto label_46f7a0;
        case 0x46f7a4u: goto label_46f7a4;
        case 0x46f7a8u: goto label_46f7a8;
        case 0x46f7acu: goto label_46f7ac;
        case 0x46f7b0u: goto label_46f7b0;
        case 0x46f7b4u: goto label_46f7b4;
        case 0x46f7b8u: goto label_46f7b8;
        case 0x46f7bcu: goto label_46f7bc;
        case 0x46f7c0u: goto label_46f7c0;
        case 0x46f7c4u: goto label_46f7c4;
        case 0x46f7c8u: goto label_46f7c8;
        case 0x46f7ccu: goto label_46f7cc;
        case 0x46f7d0u: goto label_46f7d0;
        case 0x46f7d4u: goto label_46f7d4;
        case 0x46f7d8u: goto label_46f7d8;
        case 0x46f7dcu: goto label_46f7dc;
        case 0x46f7e0u: goto label_46f7e0;
        case 0x46f7e4u: goto label_46f7e4;
        case 0x46f7e8u: goto label_46f7e8;
        case 0x46f7ecu: goto label_46f7ec;
        case 0x46f7f0u: goto label_46f7f0;
        case 0x46f7f4u: goto label_46f7f4;
        case 0x46f7f8u: goto label_46f7f8;
        case 0x46f7fcu: goto label_46f7fc;
        case 0x46f800u: goto label_46f800;
        case 0x46f804u: goto label_46f804;
        case 0x46f808u: goto label_46f808;
        case 0x46f80cu: goto label_46f80c;
        case 0x46f810u: goto label_46f810;
        case 0x46f814u: goto label_46f814;
        case 0x46f818u: goto label_46f818;
        case 0x46f81cu: goto label_46f81c;
        case 0x46f820u: goto label_46f820;
        case 0x46f824u: goto label_46f824;
        case 0x46f828u: goto label_46f828;
        case 0x46f82cu: goto label_46f82c;
        case 0x46f830u: goto label_46f830;
        case 0x46f834u: goto label_46f834;
        case 0x46f838u: goto label_46f838;
        case 0x46f83cu: goto label_46f83c;
        case 0x46f840u: goto label_46f840;
        case 0x46f844u: goto label_46f844;
        case 0x46f848u: goto label_46f848;
        case 0x46f84cu: goto label_46f84c;
        case 0x46f850u: goto label_46f850;
        case 0x46f854u: goto label_46f854;
        case 0x46f858u: goto label_46f858;
        case 0x46f85cu: goto label_46f85c;
        case 0x46f860u: goto label_46f860;
        case 0x46f864u: goto label_46f864;
        case 0x46f868u: goto label_46f868;
        case 0x46f86cu: goto label_46f86c;
        case 0x46f870u: goto label_46f870;
        case 0x46f874u: goto label_46f874;
        case 0x46f878u: goto label_46f878;
        case 0x46f87cu: goto label_46f87c;
        case 0x46f880u: goto label_46f880;
        case 0x46f884u: goto label_46f884;
        case 0x46f888u: goto label_46f888;
        case 0x46f88cu: goto label_46f88c;
        case 0x46f890u: goto label_46f890;
        case 0x46f894u: goto label_46f894;
        case 0x46f898u: goto label_46f898;
        case 0x46f89cu: goto label_46f89c;
        case 0x46f8a0u: goto label_46f8a0;
        case 0x46f8a4u: goto label_46f8a4;
        case 0x46f8a8u: goto label_46f8a8;
        case 0x46f8acu: goto label_46f8ac;
        case 0x46f8b0u: goto label_46f8b0;
        case 0x46f8b4u: goto label_46f8b4;
        case 0x46f8b8u: goto label_46f8b8;
        case 0x46f8bcu: goto label_46f8bc;
        case 0x46f8c0u: goto label_46f8c0;
        case 0x46f8c4u: goto label_46f8c4;
        case 0x46f8c8u: goto label_46f8c8;
        case 0x46f8ccu: goto label_46f8cc;
        case 0x46f8d0u: goto label_46f8d0;
        case 0x46f8d4u: goto label_46f8d4;
        case 0x46f8d8u: goto label_46f8d8;
        case 0x46f8dcu: goto label_46f8dc;
        case 0x46f8e0u: goto label_46f8e0;
        case 0x46f8e4u: goto label_46f8e4;
        case 0x46f8e8u: goto label_46f8e8;
        case 0x46f8ecu: goto label_46f8ec;
        case 0x46f8f0u: goto label_46f8f0;
        case 0x46f8f4u: goto label_46f8f4;
        case 0x46f8f8u: goto label_46f8f8;
        case 0x46f8fcu: goto label_46f8fc;
        case 0x46f900u: goto label_46f900;
        case 0x46f904u: goto label_46f904;
        case 0x46f908u: goto label_46f908;
        case 0x46f90cu: goto label_46f90c;
        case 0x46f910u: goto label_46f910;
        case 0x46f914u: goto label_46f914;
        case 0x46f918u: goto label_46f918;
        case 0x46f91cu: goto label_46f91c;
        case 0x46f920u: goto label_46f920;
        case 0x46f924u: goto label_46f924;
        case 0x46f928u: goto label_46f928;
        case 0x46f92cu: goto label_46f92c;
        case 0x46f930u: goto label_46f930;
        case 0x46f934u: goto label_46f934;
        case 0x46f938u: goto label_46f938;
        case 0x46f93cu: goto label_46f93c;
        case 0x46f940u: goto label_46f940;
        case 0x46f944u: goto label_46f944;
        case 0x46f948u: goto label_46f948;
        case 0x46f94cu: goto label_46f94c;
        case 0x46f950u: goto label_46f950;
        case 0x46f954u: goto label_46f954;
        case 0x46f958u: goto label_46f958;
        case 0x46f95cu: goto label_46f95c;
        case 0x46f960u: goto label_46f960;
        case 0x46f964u: goto label_46f964;
        case 0x46f968u: goto label_46f968;
        case 0x46f96cu: goto label_46f96c;
        case 0x46f970u: goto label_46f970;
        case 0x46f974u: goto label_46f974;
        case 0x46f978u: goto label_46f978;
        case 0x46f97cu: goto label_46f97c;
        case 0x46f980u: goto label_46f980;
        case 0x46f984u: goto label_46f984;
        case 0x46f988u: goto label_46f988;
        case 0x46f98cu: goto label_46f98c;
        case 0x46f990u: goto label_46f990;
        case 0x46f994u: goto label_46f994;
        case 0x46f998u: goto label_46f998;
        case 0x46f99cu: goto label_46f99c;
        case 0x46f9a0u: goto label_46f9a0;
        case 0x46f9a4u: goto label_46f9a4;
        case 0x46f9a8u: goto label_46f9a8;
        case 0x46f9acu: goto label_46f9ac;
        case 0x46f9b0u: goto label_46f9b0;
        case 0x46f9b4u: goto label_46f9b4;
        case 0x46f9b8u: goto label_46f9b8;
        case 0x46f9bcu: goto label_46f9bc;
        case 0x46f9c0u: goto label_46f9c0;
        case 0x46f9c4u: goto label_46f9c4;
        case 0x46f9c8u: goto label_46f9c8;
        case 0x46f9ccu: goto label_46f9cc;
        case 0x46f9d0u: goto label_46f9d0;
        case 0x46f9d4u: goto label_46f9d4;
        case 0x46f9d8u: goto label_46f9d8;
        case 0x46f9dcu: goto label_46f9dc;
        case 0x46f9e0u: goto label_46f9e0;
        case 0x46f9e4u: goto label_46f9e4;
        case 0x46f9e8u: goto label_46f9e8;
        case 0x46f9ecu: goto label_46f9ec;
        case 0x46f9f0u: goto label_46f9f0;
        case 0x46f9f4u: goto label_46f9f4;
        case 0x46f9f8u: goto label_46f9f8;
        case 0x46f9fcu: goto label_46f9fc;
        case 0x46fa00u: goto label_46fa00;
        case 0x46fa04u: goto label_46fa04;
        case 0x46fa08u: goto label_46fa08;
        case 0x46fa0cu: goto label_46fa0c;
        case 0x46fa10u: goto label_46fa10;
        case 0x46fa14u: goto label_46fa14;
        case 0x46fa18u: goto label_46fa18;
        case 0x46fa1cu: goto label_46fa1c;
        case 0x46fa20u: goto label_46fa20;
        case 0x46fa24u: goto label_46fa24;
        case 0x46fa28u: goto label_46fa28;
        case 0x46fa2cu: goto label_46fa2c;
        case 0x46fa30u: goto label_46fa30;
        case 0x46fa34u: goto label_46fa34;
        case 0x46fa38u: goto label_46fa38;
        case 0x46fa3cu: goto label_46fa3c;
        case 0x46fa40u: goto label_46fa40;
        case 0x46fa44u: goto label_46fa44;
        case 0x46fa48u: goto label_46fa48;
        case 0x46fa4cu: goto label_46fa4c;
        case 0x46fa50u: goto label_46fa50;
        case 0x46fa54u: goto label_46fa54;
        case 0x46fa58u: goto label_46fa58;
        case 0x46fa5cu: goto label_46fa5c;
        case 0x46fa60u: goto label_46fa60;
        case 0x46fa64u: goto label_46fa64;
        case 0x46fa68u: goto label_46fa68;
        case 0x46fa6cu: goto label_46fa6c;
        case 0x46fa70u: goto label_46fa70;
        case 0x46fa74u: goto label_46fa74;
        case 0x46fa78u: goto label_46fa78;
        case 0x46fa7cu: goto label_46fa7c;
        case 0x46fa80u: goto label_46fa80;
        case 0x46fa84u: goto label_46fa84;
        case 0x46fa88u: goto label_46fa88;
        case 0x46fa8cu: goto label_46fa8c;
        case 0x46fa90u: goto label_46fa90;
        case 0x46fa94u: goto label_46fa94;
        case 0x46fa98u: goto label_46fa98;
        case 0x46fa9cu: goto label_46fa9c;
        case 0x46faa0u: goto label_46faa0;
        case 0x46faa4u: goto label_46faa4;
        case 0x46faa8u: goto label_46faa8;
        case 0x46faacu: goto label_46faac;
        case 0x46fab0u: goto label_46fab0;
        case 0x46fab4u: goto label_46fab4;
        case 0x46fab8u: goto label_46fab8;
        case 0x46fabcu: goto label_46fabc;
        case 0x46fac0u: goto label_46fac0;
        case 0x46fac4u: goto label_46fac4;
        case 0x46fac8u: goto label_46fac8;
        case 0x46faccu: goto label_46facc;
        case 0x46fad0u: goto label_46fad0;
        case 0x46fad4u: goto label_46fad4;
        case 0x46fad8u: goto label_46fad8;
        case 0x46fadcu: goto label_46fadc;
        case 0x46fae0u: goto label_46fae0;
        case 0x46fae4u: goto label_46fae4;
        case 0x46fae8u: goto label_46fae8;
        case 0x46faecu: goto label_46faec;
        case 0x46faf0u: goto label_46faf0;
        case 0x46faf4u: goto label_46faf4;
        case 0x46faf8u: goto label_46faf8;
        case 0x46fafcu: goto label_46fafc;
        case 0x46fb00u: goto label_46fb00;
        case 0x46fb04u: goto label_46fb04;
        case 0x46fb08u: goto label_46fb08;
        case 0x46fb0cu: goto label_46fb0c;
        case 0x46fb10u: goto label_46fb10;
        case 0x46fb14u: goto label_46fb14;
        case 0x46fb18u: goto label_46fb18;
        case 0x46fb1cu: goto label_46fb1c;
        case 0x46fb20u: goto label_46fb20;
        case 0x46fb24u: goto label_46fb24;
        case 0x46fb28u: goto label_46fb28;
        case 0x46fb2cu: goto label_46fb2c;
        case 0x46fb30u: goto label_46fb30;
        case 0x46fb34u: goto label_46fb34;
        case 0x46fb38u: goto label_46fb38;
        case 0x46fb3cu: goto label_46fb3c;
        case 0x46fb40u: goto label_46fb40;
        case 0x46fb44u: goto label_46fb44;
        case 0x46fb48u: goto label_46fb48;
        case 0x46fb4cu: goto label_46fb4c;
        case 0x46fb50u: goto label_46fb50;
        case 0x46fb54u: goto label_46fb54;
        case 0x46fb58u: goto label_46fb58;
        case 0x46fb5cu: goto label_46fb5c;
        case 0x46fb60u: goto label_46fb60;
        case 0x46fb64u: goto label_46fb64;
        case 0x46fb68u: goto label_46fb68;
        case 0x46fb6cu: goto label_46fb6c;
        case 0x46fb70u: goto label_46fb70;
        case 0x46fb74u: goto label_46fb74;
        case 0x46fb78u: goto label_46fb78;
        case 0x46fb7cu: goto label_46fb7c;
        default: break;
    }

    ctx->pc = 0x46ede0u;

label_46ede0:
    // 0x46ede0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x46ede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_46ede4:
    // 0x46ede4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x46ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_46ede8:
    // 0x46ede8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x46ede8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_46edec:
    // 0x46edec: 0x24420820  addiu       $v0, $v0, 0x820
    ctx->pc = 0x46edecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2080));
label_46edf0:
    // 0x46edf0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x46edf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_46edf4:
    // 0x46edf4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x46edf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_46edf8:
    // 0x46edf8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x46edf8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46edfc:
    // 0x46edfc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x46edfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_46ee00:
    // 0x46ee00: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x46ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_46ee04:
    // 0x46ee04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x46ee04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_46ee08:
    // 0x46ee08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x46ee08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_46ee0c:
    // 0x46ee0c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x46ee0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46ee10:
    // 0x46ee10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46ee10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_46ee14:
    // 0x46ee14: 0x1e2040  sll         $a0, $fp, 1
    ctx->pc = 0x46ee14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_46ee18:
    // 0x46ee18: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x46ee18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46ee1c:
    // 0x46ee1c: 0x9e2821  addu        $a1, $a0, $fp
    ctx->pc = 0x46ee1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
label_46ee20:
    // 0x46ee20: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x46ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_46ee24:
    // 0x46ee24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46ee24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46ee28:
    // 0x46ee28: 0x5e2023  subu        $a0, $v0, $fp
    ctx->pc = 0x46ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_46ee2c:
    // 0x46ee2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46ee2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46ee30:
    // 0x46ee30: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x46ee30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_46ee34:
    // 0x46ee34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46ee34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46ee38:
    // 0x46ee38: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x46ee38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_46ee3c:
    // 0x46ee3c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x46ee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_46ee40:
    // 0x46ee40: 0x24940070  addiu       $s4, $a0, 0x70
    ctx->pc = 0x46ee40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_46ee44:
    // 0x46ee44: 0x2463e990  addiu       $v1, $v1, -0x1670
    ctx->pc = 0x46ee44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961552));
label_46ee48:
    // 0x46ee48: 0x90840071  lbu         $a0, 0x71($a0)
    ctx->pc = 0x46ee48u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 113)));
label_46ee4c:
    // 0x46ee4c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x46ee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46ee50:
    // 0x46ee50: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x46ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_46ee54:
    // 0x46ee54: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x46ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_46ee58:
    // 0x46ee58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x46ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46ee5c:
    // 0x46ee5c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46ee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46ee60:
    // 0x46ee60: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_46ee64:
    if (ctx->pc == 0x46EE64u) {
        ctx->pc = 0x46EE64u;
            // 0x46ee64: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->pc = 0x46EE68u;
        goto label_46ee68;
    }
    ctx->pc = 0x46EE60u;
    {
        const bool branch_taken_0x46ee60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x46EE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46EE60u;
            // 0x46ee64: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ee60) {
            ctx->pc = 0x46EE84u;
            goto label_46ee84;
        }
    }
    ctx->pc = 0x46EE68u;
label_46ee68:
    // 0x46ee68: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x46ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_46ee6c:
    // 0x46ee6c: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_46ee70:
    if (ctx->pc == 0x46EE70u) {
        ctx->pc = 0x46EE70u;
            // 0x46ee70: 0xa2600001  sb          $zero, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x46EE74u;
        goto label_46ee74;
    }
    ctx->pc = 0x46EE6Cu;
    {
        const bool branch_taken_0x46ee6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46ee6c) {
            ctx->pc = 0x46EE70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46EE6Cu;
            // 0x46ee70: 0xa2600001  sb          $zero, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46EE88u;
            goto label_46ee88;
        }
    }
    ctx->pc = 0x46EE74u;
label_46ee74:
    // 0x46ee74: 0x8ea60054  lw          $a2, 0x54($s5)
    ctx->pc = 0x46ee74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_46ee78:
    // 0x46ee78: 0x30c20006  andi        $v0, $a2, 0x6
    ctx->pc = 0x46ee78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)6);
label_46ee7c:
    // 0x46ee7c: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_46ee80:
    if (ctx->pc == 0x46EE80u) {
        ctx->pc = 0x46EE84u;
        goto label_46ee84;
    }
    ctx->pc = 0x46EE7Cu;
    {
        const bool branch_taken_0x46ee7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ee7c) {
            ctx->pc = 0x46F000u;
            goto label_46f000;
        }
    }
    ctx->pc = 0x46EE84u;
label_46ee84:
    // 0x46ee84: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x46ee84u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
label_46ee88:
    // 0x46ee88: 0xc11bb74  jal         func_46EDD0
label_46ee8c:
    if (ctx->pc == 0x46EE8Cu) {
        ctx->pc = 0x46EE90u;
        goto label_46ee90;
    }
    ctx->pc = 0x46EE88u;
    SET_GPR_U32(ctx, 31, 0x46EE90u);
    ctx->pc = 0x46EDD0u;
    if (runtime->hasFunction(0x46EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46EE90u; }
        if (ctx->pc != 0x46EE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDD0_0x46edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46EE90u; }
        if (ctx->pc != 0x46EE90u) { return; }
    }
    ctx->pc = 0x46EE90u;
label_46ee90:
    // 0x46ee90: 0xc11bb70  jal         func_46EDC0
label_46ee94:
    if (ctx->pc == 0x46EE94u) {
        ctx->pc = 0x46EE94u;
            // 0x46ee94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46EE98u;
        goto label_46ee98;
    }
    ctx->pc = 0x46EE90u;
    SET_GPR_U32(ctx, 31, 0x46EE98u);
    ctx->pc = 0x46EE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46EE90u;
            // 0x46ee94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDC0u;
    if (runtime->hasFunction(0x46EDC0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46EE98u; }
        if (ctx->pc != 0x46EE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDC0_0x46edc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46EE98u; }
        if (ctx->pc != 0x46EE98u) { return; }
    }
    ctx->pc = 0x46EE98u;
label_46ee98:
    // 0x46ee98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x46ee98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46ee9c:
    // 0x46ee9c: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x46ee9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46eea0:
    // 0x46eea0: 0x2842003f  slti        $v0, $v0, 0x3F
    ctx->pc = 0x46eea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)63) ? 1 : 0);
label_46eea4:
    // 0x46eea4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_46eea8:
    if (ctx->pc == 0x46EEA8u) {
        ctx->pc = 0x46EEA8u;
            // 0x46eea8: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->pc = 0x46EEACu;
        goto label_46eeac;
    }
    ctx->pc = 0x46EEA4u;
    {
        const bool branch_taken_0x46eea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46eea4) {
            ctx->pc = 0x46EEA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46EEA4u;
            // 0x46eea8: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46EEB4u;
            goto label_46eeb4;
        }
    }
    ctx->pc = 0x46EEACu;
label_46eeac:
    // 0x46eeac: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x46eeacu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
label_46eeb0:
    // 0x46eeb0: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x46eeb0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46eeb4:
    // 0x46eeb4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x46eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_46eeb8:
    // 0x46eeb8: 0x24421490  addiu       $v0, $v0, 0x1490
    ctx->pc = 0x46eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
label_46eebc:
    // 0x46eebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x46eebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46eec0:
    // 0x46eec0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x46eec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_46eec4:
    // 0x46eec4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x46eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_46eec8:
    // 0x46eec8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x46eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_46eecc:
    // 0x46eecc: 0xc11bb6c  jal         func_46EDB0
label_46eed0:
    if (ctx->pc == 0x46EED0u) {
        ctx->pc = 0x46EED0u;
            // 0x46eed0: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x46EED4u;
        goto label_46eed4;
    }
    ctx->pc = 0x46EECCu;
    SET_GPR_U32(ctx, 31, 0x46EED4u);
    ctx->pc = 0x46EED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46EECCu;
            // 0x46eed0: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDB0u;
    if (runtime->hasFunction(0x46EDB0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46EED4u; }
        if (ctx->pc != 0x46EED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDB0_0x46edb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46EED4u; }
        if (ctx->pc != 0x46EED4u) { return; }
    }
    ctx->pc = 0x46EED4u;
label_46eed4:
    // 0x46eed4: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x46eed4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46eed8:
    // 0x46eed8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x46eed8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46eedc:
    // 0x46eedc: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x46eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_46eee0:
    // 0x46eee0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_46eee4:
    if (ctx->pc == 0x46EEE4u) {
        ctx->pc = 0x46EEE8u;
        goto label_46eee8;
    }
    ctx->pc = 0x46EEE0u;
    {
        const bool branch_taken_0x46eee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x46eee0) {
            ctx->pc = 0x46EF08u;
            goto label_46ef08;
        }
    }
    ctx->pc = 0x46EEE8u;
label_46eee8:
    // 0x46eee8: 0xc0775b0  jal         func_1DD6C0
label_46eeec:
    if (ctx->pc == 0x46EEECu) {
        ctx->pc = 0x46EEF0u;
        goto label_46eef0;
    }
    ctx->pc = 0x46EEE8u;
    SET_GPR_U32(ctx, 31, 0x46EEF0u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46EEF0u; }
        if (ctx->pc != 0x46EEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46EEF0u; }
        if (ctx->pc != 0x46EEF0u) { return; }
    }
    ctx->pc = 0x46EEF0u;
label_46eef0:
    // 0x46eef0: 0xc11bb68  jal         func_46EDA0
label_46eef4:
    if (ctx->pc == 0x46EEF4u) {
        ctx->pc = 0x46EEF4u;
            // 0x46eef4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46EEF8u;
        goto label_46eef8;
    }
    ctx->pc = 0x46EEF0u;
    SET_GPR_U32(ctx, 31, 0x46EEF8u);
    ctx->pc = 0x46EEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46EEF0u;
            // 0x46eef4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDA0u;
    if (runtime->hasFunction(0x46EDA0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46EEF8u; }
        if (ctx->pc != 0x46EEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDA0_0x46eda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46EEF8u; }
        if (ctx->pc != 0x46EEF8u) { return; }
    }
    ctx->pc = 0x46EEF8u;
label_46eef8:
    // 0x46eef8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x46eef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_46eefc:
    // 0x46eefc: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_46ef00:
    if (ctx->pc == 0x46EF00u) {
        ctx->pc = 0x46EF04u;
        goto label_46ef04;
    }
    ctx->pc = 0x46EEFCu;
    {
        const bool branch_taken_0x46eefc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x46eefc) {
            ctx->pc = 0x46EF08u;
            goto label_46ef08;
        }
    }
    ctx->pc = 0x46EF04u;
label_46ef04:
    // 0x46ef04: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x46ef04u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_46ef08:
    // 0x46ef08: 0x12200033  beqz        $s1, . + 4 + (0x33 << 2)
label_46ef0c:
    if (ctx->pc == 0x46EF0Cu) {
        ctx->pc = 0x46EF10u;
        goto label_46ef10;
    }
    ctx->pc = 0x46EF08u;
    {
        const bool branch_taken_0x46ef08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ef08) {
            ctx->pc = 0x46EFD8u;
            goto label_46efd8;
        }
    }
    ctx->pc = 0x46EF10u;
label_46ef10:
    // 0x46ef10: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x46ef10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46ef14:
    // 0x46ef14: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x46ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_46ef18:
    // 0x46ef18: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
label_46ef1c:
    if (ctx->pc == 0x46EF1Cu) {
        ctx->pc = 0x46EF20u;
        goto label_46ef20;
    }
    ctx->pc = 0x46EF18u;
    {
        const bool branch_taken_0x46ef18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x46ef18) {
            ctx->pc = 0x46EF70u;
            goto label_46ef70;
        }
    }
    ctx->pc = 0x46EF20u;
label_46ef20:
    // 0x46ef20: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x46ef20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_46ef24:
    // 0x46ef24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46ef24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46ef28:
    // 0x46ef28: 0x24c60820  addiu       $a2, $a2, 0x820
    ctx->pc = 0x46ef28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2080));
label_46ef2c:
    // 0x46ef2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x46ef2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_46ef30:
    // 0x46ef30: 0x90a20070  lbu         $v0, 0x70($a1)
    ctx->pc = 0x46ef30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 112)));
label_46ef34:
    // 0x46ef34: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x46ef34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_46ef38:
    // 0x46ef38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_46ef3c:
    if (ctx->pc == 0x46EF3Cu) {
        ctx->pc = 0x46EF40u;
        goto label_46ef40;
    }
    ctx->pc = 0x46EF38u;
    {
        const bool branch_taken_0x46ef38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46ef38) {
            ctx->pc = 0x46EF58u;
            goto label_46ef58;
        }
    }
    ctx->pc = 0x46EF40u;
label_46ef40:
    // 0x46ef40: 0x12660005  beq         $s3, $a2, . + 4 + (0x5 << 2)
label_46ef44:
    if (ctx->pc == 0x46EF44u) {
        ctx->pc = 0x46EF48u;
        goto label_46ef48;
    }
    ctx->pc = 0x46EF40u;
    {
        const bool branch_taken_0x46ef40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 6));
        if (branch_taken_0x46ef40) {
            ctx->pc = 0x46EF58u;
            goto label_46ef58;
        }
    }
    ctx->pc = 0x46EF48u;
label_46ef48:
    // 0x46ef48: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x46ef48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_46ef4c:
    // 0x46ef4c: 0x10430022  beq         $v0, $v1, . + 4 + (0x22 << 2)
label_46ef50:
    if (ctx->pc == 0x46EF50u) {
        ctx->pc = 0x46EF54u;
        goto label_46ef54;
    }
    ctx->pc = 0x46EF4Cu;
    {
        const bool branch_taken_0x46ef4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x46ef4c) {
            ctx->pc = 0x46EFD8u;
            goto label_46efd8;
        }
    }
    ctx->pc = 0x46EF54u;
label_46ef54:
    // 0x46ef54: 0x0  nop
    ctx->pc = 0x46ef54u;
    // NOP
label_46ef58:
    // 0x46ef58: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x46ef58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_46ef5c:
    // 0x46ef5c: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x46ef5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
label_46ef60:
    // 0x46ef60: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x46ef60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_46ef64:
    // 0x46ef64: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_46ef68:
    if (ctx->pc == 0x46EF68u) {
        ctx->pc = 0x46EF68u;
            // 0x46ef68: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->pc = 0x46EF6Cu;
        goto label_46ef6c;
    }
    ctx->pc = 0x46EF64u;
    {
        const bool branch_taken_0x46ef64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46EF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46EF64u;
            // 0x46ef68: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ef64) {
            ctx->pc = 0x46EF30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46ef30;
        }
    }
    ctx->pc = 0x46EF6Cu;
label_46ef6c:
    // 0x46ef6c: 0x0  nop
    ctx->pc = 0x46ef6cu;
    // NOP
label_46ef70:
    // 0x46ef70: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x46ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_46ef74:
    // 0x46ef74: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_46ef78:
    if (ctx->pc == 0x46EF78u) {
        ctx->pc = 0x46EF7Cu;
        goto label_46ef7c;
    }
    ctx->pc = 0x46EF74u;
    {
        const bool branch_taken_0x46ef74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x46ef74) {
            ctx->pc = 0x46EFA0u;
            goto label_46efa0;
        }
    }
    ctx->pc = 0x46EF7Cu;
label_46ef7c:
    // 0x46ef7c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x46ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_46ef80:
    // 0x46ef80: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_46ef84:
    if (ctx->pc == 0x46EF84u) {
        ctx->pc = 0x46EF88u;
        goto label_46ef88;
    }
    ctx->pc = 0x46EF80u;
    {
        const bool branch_taken_0x46ef80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x46ef80) {
            ctx->pc = 0x46EFA0u;
            goto label_46efa0;
        }
    }
    ctx->pc = 0x46EF88u;
label_46ef88:
    // 0x46ef88: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x46ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_46ef8c:
    // 0x46ef8c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_46ef90:
    if (ctx->pc == 0x46EF90u) {
        ctx->pc = 0x46EF94u;
        goto label_46ef94;
    }
    ctx->pc = 0x46EF8Cu;
    {
        const bool branch_taken_0x46ef8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x46ef8c) {
            ctx->pc = 0x46EFA0u;
            goto label_46efa0;
        }
    }
    ctx->pc = 0x46EF94u;
label_46ef94:
    // 0x46ef94: 0x10000008  b           . + 4 + (0x8 << 2)
label_46ef98:
    if (ctx->pc == 0x46EF98u) {
        ctx->pc = 0x46EF9Cu;
        goto label_46ef9c;
    }
    ctx->pc = 0x46EF94u;
    {
        const bool branch_taken_0x46ef94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ef94) {
            ctx->pc = 0x46EFB8u;
            goto label_46efb8;
        }
    }
    ctx->pc = 0x46EF9Cu;
label_46ef9c:
    // 0x46ef9c: 0x0  nop
    ctx->pc = 0x46ef9cu;
    // NOP
label_46efa0:
    // 0x46efa0: 0xc0c8f80  jal         func_323E00
label_46efa4:
    if (ctx->pc == 0x46EFA4u) {
        ctx->pc = 0x46EFA4u;
            // 0x46efa4: 0x8ea40068  lw          $a0, 0x68($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
        ctx->pc = 0x46EFA8u;
        goto label_46efa8;
    }
    ctx->pc = 0x46EFA0u;
    SET_GPR_U32(ctx, 31, 0x46EFA8u);
    ctx->pc = 0x46EFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46EFA0u;
            // 0x46efa4: 0x8ea40068  lw          $a0, 0x68($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323E00u;
    if (runtime->hasFunction(0x323E00u)) {
        auto targetFn = runtime->lookupFunction(0x323E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46EFA8u; }
        if (ctx->pc != 0x46EFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323E00_0x323e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46EFA8u; }
        if (ctx->pc != 0x46EFA8u) { return; }
    }
    ctx->pc = 0x46EFA8u;
label_46efa8:
    // 0x46efa8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x46efa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_46efac:
    // 0x46efac: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_46efb0:
    if (ctx->pc == 0x46EFB0u) {
        ctx->pc = 0x46EFB4u;
        goto label_46efb4;
    }
    ctx->pc = 0x46EFACu;
    {
        const bool branch_taken_0x46efac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x46efac) {
            ctx->pc = 0x46EFD8u;
            goto label_46efd8;
        }
    }
    ctx->pc = 0x46EFB4u;
label_46efb4:
    // 0x46efb4: 0x0  nop
    ctx->pc = 0x46efb4u;
    // NOP
label_46efb8:
    // 0x46efb8: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x46efb8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_46efbc:
    // 0x46efbc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x46efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_46efc0:
    // 0x46efc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46efc4:
    // 0x46efc4: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x46efc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_46efc8:
    // 0x46efc8: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x46efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_46efcc:
    // 0x46efcc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x46efccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_46efd0:
    // 0x46efd0: 0x544002b2  bnel        $v0, $zero, . + 4 + (0x2B2 << 2)
label_46efd4:
    if (ctx->pc == 0x46EFD4u) {
        ctx->pc = 0x46EFD4u;
            // 0x46efd4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x46EFD8u;
        goto label_46efd8;
    }
    ctx->pc = 0x46EFD0u;
    {
        const bool branch_taken_0x46efd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46efd0) {
            ctx->pc = 0x46EFD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46EFD0u;
            // 0x46efd4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46FA9Cu;
            goto label_46fa9c;
        }
    }
    ctx->pc = 0x46EFD8u;
label_46efd8:
    // 0x46efd8: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x46efd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46efdc:
    // 0x46efdc: 0x2841003e  slti        $at, $v0, 0x3E
    ctx->pc = 0x46efdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)62) ? 1 : 0);
label_46efe0:
    // 0x46efe0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_46efe4:
    if (ctx->pc == 0x46EFE4u) {
        ctx->pc = 0x46EFE8u;
        goto label_46efe8;
    }
    ctx->pc = 0x46EFE0u;
    {
        const bool branch_taken_0x46efe0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46efe0) {
            ctx->pc = 0x46EFF8u;
            goto label_46eff8;
        }
    }
    ctx->pc = 0x46EFE8u;
label_46efe8:
    // 0x46efe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46efec:
    // 0x46efec: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
label_46eff0:
    if (ctx->pc == 0x46EFF0u) {
        ctx->pc = 0x46EFF0u;
            // 0x46eff0: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46EFF4u;
        goto label_46eff4;
    }
    ctx->pc = 0x46EFECu;
    {
        const bool branch_taken_0x46efec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46EFECu;
            // 0x46eff0: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46efec) {
            ctx->pc = 0x46EEB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46eeb0;
        }
    }
    ctx->pc = 0x46EFF4u;
label_46eff4:
    // 0x46eff4: 0x0  nop
    ctx->pc = 0x46eff4u;
    // NOP
label_46eff8:
    // 0x46eff8: 0x1000ffad  b           . + 4 + (-0x53 << 2)
label_46effc:
    if (ctx->pc == 0x46EFFCu) {
        ctx->pc = 0x46EFFCu;
            // 0x46effc: 0xa2600001  sb          $zero, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x46F000u;
        goto label_46f000;
    }
    ctx->pc = 0x46EFF8u;
    {
        const bool branch_taken_0x46eff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46EFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46EFF8u;
            // 0x46effc: 0xa2600001  sb          $zero, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46eff8) {
            ctx->pc = 0x46EEB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46eeb0;
        }
    }
    ctx->pc = 0x46F000u;
label_46f000:
    // 0x46f000: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x46f000u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_46f004:
    // 0x46f004: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x46f004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_46f008:
    // 0x46f008: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_46f00c:
    if (ctx->pc == 0x46F00Cu) {
        ctx->pc = 0x46F010u;
        goto label_46f010;
    }
    ctx->pc = 0x46F008u;
    {
        const bool branch_taken_0x46f008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f008) {
            ctx->pc = 0x46F0B0u;
            goto label_46f0b0;
        }
    }
    ctx->pc = 0x46F010u;
label_46f010:
    // 0x46f010: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x46f010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46f014:
    // 0x46f014: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46f014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46f018:
    // 0x46f018: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46f018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46f01c:
    // 0x46f01c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46f020:
    // 0x46f020: 0x8c4400e8  lw          $a0, 0xE8($v0)
    ctx->pc = 0x46f020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_46f024:
    // 0x46f024: 0xc12512c  jal         func_4944B0
label_46f028:
    if (ctx->pc == 0x46F028u) {
        ctx->pc = 0x46F028u;
            // 0x46f028: 0x24a5ed88  addiu       $a1, $a1, -0x1278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962568));
        ctx->pc = 0x46F02Cu;
        goto label_46f02c;
    }
    ctx->pc = 0x46F024u;
    SET_GPR_U32(ctx, 31, 0x46F02Cu);
    ctx->pc = 0x46F028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F024u;
            // 0x46f028: 0x24a5ed88  addiu       $a1, $a1, -0x1278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F02Cu; }
        if (ctx->pc != 0x46F02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F02Cu; }
        if (ctx->pc != 0x46F02Cu) { return; }
    }
    ctx->pc = 0x46F02Cu;
label_46f02c:
    // 0x46f02c: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x46f02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46f030:
    // 0x46f030: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46f030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46f034:
    // 0x46f034: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46f034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46f038:
    // 0x46f038: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x46f038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f03c:
    // 0x46f03c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46f040:
    // 0x46f040: 0x8c4400e8  lw          $a0, 0xE8($v0)
    ctx->pc = 0x46f040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_46f044:
    // 0x46f044: 0xc12512c  jal         func_4944B0
label_46f048:
    if (ctx->pc == 0x46F048u) {
        ctx->pc = 0x46F048u;
            // 0x46f048: 0x24a5ed90  addiu       $a1, $a1, -0x1270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
        ctx->pc = 0x46F04Cu;
        goto label_46f04c;
    }
    ctx->pc = 0x46F044u;
    SET_GPR_U32(ctx, 31, 0x46F04Cu);
    ctx->pc = 0x46F048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F044u;
            // 0x46f048: 0x24a5ed90  addiu       $a1, $a1, -0x1270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F04Cu; }
        if (ctx->pc != 0x46F04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F04Cu; }
        if (ctx->pc != 0x46F04Cu) { return; }
    }
    ctx->pc = 0x46F04Cu;
label_46f04c:
    // 0x46f04c: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x46f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46f050:
    // 0x46f050: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x46f050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_46f054:
    // 0x46f054: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46f054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46f058:
    // 0x46f058: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x46f058u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_46f05c:
    // 0x46f05c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x46f05cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_46f060:
    // 0x46f060: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_46f064:
    if (ctx->pc == 0x46F064u) {
        ctx->pc = 0x46F064u;
            // 0x46f064: 0x96820002  lhu         $v0, 0x2($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->pc = 0x46F068u;
        goto label_46f068;
    }
    ctx->pc = 0x46F060u;
    {
        const bool branch_taken_0x46f060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f060) {
            ctx->pc = 0x46F064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46F060u;
            // 0x46f064: 0x96820002  lhu         $v0, 0x2($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46F07Cu;
            goto label_46f07c;
        }
    }
    ctx->pc = 0x46F068u;
label_46f068:
    // 0x46f068: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x46f068u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_46f06c:
    // 0x46f06c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x46f06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_46f070:
    // 0x46f070: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x46f070u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_46f074:
    // 0x46f074: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x46f074u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
label_46f078:
    // 0x46f078: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x46f078u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_46f07c:
    // 0x46f07c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x46f07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_46f080:
    // 0x46f080: 0x504002b1  beql        $v0, $zero, . + 4 + (0x2B1 << 2)
label_46f084:
    if (ctx->pc == 0x46F084u) {
        ctx->pc = 0x46F084u;
            // 0x46f084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46F088u;
        goto label_46f088;
    }
    ctx->pc = 0x46F080u;
    {
        const bool branch_taken_0x46f080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f080) {
            ctx->pc = 0x46F084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46F080u;
            // 0x46f084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46FB48u;
            goto label_46fb48;
        }
    }
    ctx->pc = 0x46F088u;
label_46f088:
    // 0x46f088: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x46f088u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_46f08c:
    // 0x46f08c: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x46f08cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_46f090:
    // 0x46f090: 0x3042ffdf  andi        $v0, $v0, 0xFFDF
    ctx->pc = 0x46f090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65503);
label_46f094:
    // 0x46f094: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x46f094u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_46f098:
    // 0x46f098: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x46f098u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_46f09c:
    // 0x46f09c: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x46f09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
label_46f0a0:
    // 0x46f0a0: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x46f0a0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_46f0a4:
    // 0x46f0a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46f0a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46f0a8:
    // 0x46f0a8: 0x100002a7  b           . + 4 + (0x2A7 << 2)
label_46f0ac:
    if (ctx->pc == 0x46F0ACu) {
        ctx->pc = 0x46F0B0u;
        goto label_46f0b0;
    }
    ctx->pc = 0x46F0A8u;
    {
        const bool branch_taken_0x46f0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f0a8) {
            ctx->pc = 0x46FB48u;
            goto label_46fb48;
        }
    }
    ctx->pc = 0x46F0B0u;
label_46f0b0:
    // 0x46f0b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x46f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_46f0b4:
    // 0x46f0b4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x46f0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_46f0b8:
    // 0x46f0b8: 0x24429764  addiu       $v0, $v0, -0x689C
    ctx->pc = 0x46f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940516));
label_46f0bc:
    // 0x46f0bc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x46f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_46f0c0:
    // 0x46f0c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x46f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_46f0c4:
    // 0x46f0c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46f0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f0c8:
    // 0x46f0c8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x46f0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_46f0cc:
    // 0x46f0cc: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x46f0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_46f0d0:
    // 0x46f0d0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_46f0d4:
    if (ctx->pc == 0x46F0D4u) {
        ctx->pc = 0x46F0D4u;
            // 0x46f0d4: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x46F0D8u;
        goto label_46f0d8;
    }
    ctx->pc = 0x46F0D0u;
    {
        const bool branch_taken_0x46f0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f0d0) {
            ctx->pc = 0x46F0D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46F0D0u;
            // 0x46f0d4: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x46F0F4u;
            goto label_46f0f4;
        }
    }
    ctx->pc = 0x46F0D8u;
label_46f0d8:
    // 0x46f0d8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x46f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_46f0dc:
    // 0x46f0dc: 0x346400a9  ori         $a0, $v1, 0xA9
    ctx->pc = 0x46f0dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)169);
label_46f0e0:
    // 0x46f0e0: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x46f0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_46f0e4:
    // 0x46f0e4: 0xc073234  jal         func_1CC8D0
label_46f0e8:
    if (ctx->pc == 0x46F0E8u) {
        ctx->pc = 0x46F0E8u;
            // 0x46f0e8: 0xae80000c  sw          $zero, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x46F0ECu;
        goto label_46f0ec;
    }
    ctx->pc = 0x46F0E4u;
    SET_GPR_U32(ctx, 31, 0x46F0ECu);
    ctx->pc = 0x46F0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F0E4u;
            // 0x46f0e8: 0xae80000c  sw          $zero, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F0ECu; }
        if (ctx->pc != 0x46F0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F0ECu; }
        if (ctx->pc != 0x46F0ECu) { return; }
    }
    ctx->pc = 0x46F0ECu;
label_46f0ec:
    // 0x46f0ec: 0x10000296  b           . + 4 + (0x296 << 2)
label_46f0f0:
    if (ctx->pc == 0x46F0F0u) {
        ctx->pc = 0x46F0F0u;
            // 0x46f0f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46F0F4u;
        goto label_46f0f4;
    }
    ctx->pc = 0x46F0ECu;
    {
        const bool branch_taken_0x46f0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F0ECu;
            // 0x46f0f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f0ec) {
            ctx->pc = 0x46FB48u;
            goto label_46fb48;
        }
    }
    ctx->pc = 0x46F0F4u;
label_46f0f4:
    // 0x46f0f4: 0x10400117  beqz        $v0, . + 4 + (0x117 << 2)
label_46f0f8:
    if (ctx->pc == 0x46F0F8u) {
        ctx->pc = 0x46F0FCu;
        goto label_46f0fc;
    }
    ctx->pc = 0x46F0F4u;
    {
        const bool branch_taken_0x46f0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f0f4) {
            ctx->pc = 0x46F554u;
            goto label_46f554;
        }
    }
    ctx->pc = 0x46F0FCu;
label_46f0fc:
    // 0x46f0fc: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x46f0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_46f100:
    // 0x46f100: 0x504000d2  beql        $v0, $zero, . + 4 + (0xD2 << 2)
label_46f104:
    if (ctx->pc == 0x46F104u) {
        ctx->pc = 0x46F104u;
            // 0x46f104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46F108u;
        goto label_46f108;
    }
    ctx->pc = 0x46F100u;
    {
        const bool branch_taken_0x46f100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f100) {
            ctx->pc = 0x46F104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46F100u;
            // 0x46f104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46F44Cu;
            goto label_46f44c;
        }
    }
    ctx->pc = 0x46F108u;
label_46f108:
    // 0x46f108: 0x8ea30058  lw          $v1, 0x58($s5)
    ctx->pc = 0x46f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_46f10c:
    // 0x46f10c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x46f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46f110:
    // 0x46f110: 0x50620055  beql        $v1, $v0, . + 4 + (0x55 << 2)
label_46f114:
    if (ctx->pc == 0x46F114u) {
        ctx->pc = 0x46F114u;
            // 0x46f114: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x46F118u;
        goto label_46f118;
    }
    ctx->pc = 0x46F110u;
    {
        const bool branch_taken_0x46f110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46f110) {
            ctx->pc = 0x46F114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46F110u;
            // 0x46f114: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46F268u;
            goto label_46f268;
        }
    }
    ctx->pc = 0x46F118u;
label_46f118:
    // 0x46f118: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x46f118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46f11c:
    // 0x46f11c: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_46f120:
    if (ctx->pc == 0x46F120u) {
        ctx->pc = 0x46F120u;
            // 0x46f120: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46F124u;
        goto label_46f124;
    }
    ctx->pc = 0x46F11Cu;
    {
        const bool branch_taken_0x46f11c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46f11c) {
            ctx->pc = 0x46F120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46F11Cu;
            // 0x46f120: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46F13Cu;
            goto label_46f13c;
        }
    }
    ctx->pc = 0x46F124u;
label_46f124:
    // 0x46f124: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x46f124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46f128:
    // 0x46f128: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_46f12c:
    if (ctx->pc == 0x46F12Cu) {
        ctx->pc = 0x46F130u;
        goto label_46f130;
    }
    ctx->pc = 0x46F128u;
    {
        const bool branch_taken_0x46f128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46f128) {
            ctx->pc = 0x46F138u;
            goto label_46f138;
        }
    }
    ctx->pc = 0x46F130u;
label_46f130:
    // 0x46f130: 0x10000104  b           . + 4 + (0x104 << 2)
label_46f134:
    if (ctx->pc == 0x46F134u) {
        ctx->pc = 0x46F134u;
            // 0x46f134: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x46F138u;
        goto label_46f138;
    }
    ctx->pc = 0x46F130u;
    {
        const bool branch_taken_0x46f130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F130u;
            // 0x46f134: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f130) {
            ctx->pc = 0x46F544u;
            goto label_46f544;
        }
    }
    ctx->pc = 0x46F138u;
label_46f138:
    // 0x46f138: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x46f138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46f13c:
    // 0x46f13c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x46f13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_46f140:
    // 0x46f140: 0x92230070  lbu         $v1, 0x70($s1)
    ctx->pc = 0x46f140u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_46f144:
    // 0x46f144: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x46f144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46f148:
    // 0x46f148: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_46f14c:
    if (ctx->pc == 0x46F14Cu) {
        ctx->pc = 0x46F14Cu;
            // 0x46f14c: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x46F150u;
        goto label_46f150;
    }
    ctx->pc = 0x46F148u;
    {
        const bool branch_taken_0x46f148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x46F14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F148u;
            // 0x46f14c: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f148) {
            ctx->pc = 0x46F1C8u;
            goto label_46f1c8;
        }
    }
    ctx->pc = 0x46F150u;
label_46f150:
    // 0x46f150: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x46f150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46f154:
    // 0x46f154: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x46f154u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46f158:
    // 0x46f158: 0x8c740004  lw          $s4, 0x4($v1)
    ctx->pc = 0x46f158u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f15c:
    // 0x46f15c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x46f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_46f160:
    // 0x46f160: 0x29880  sll         $s3, $v0, 2
    ctx->pc = 0x46f160u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46f164:
    // 0x46f164: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x46f164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_46f168:
    // 0x46f168: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x46f168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_46f16c:
    // 0x46f16c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46f16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f170:
    // 0x46f170: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46f170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46f174:
    // 0x46f174: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46f174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46f178:
    // 0x46f178: 0x320f809  jalr        $t9
label_46f17c:
    if (ctx->pc == 0x46F17Cu) {
        ctx->pc = 0x46F17Cu;
            // 0x46f17c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46F180u;
        goto label_46f180;
    }
    ctx->pc = 0x46F178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46F180u);
        ctx->pc = 0x46F17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F178u;
            // 0x46f17c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46F180u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46F180u; }
            if (ctx->pc != 0x46F180u) { return; }
        }
        }
    }
    ctx->pc = 0x46F180u;
label_46f180:
    // 0x46f180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f184:
    // 0x46f184: 0xa282007c  sb          $v0, 0x7C($s4)
    ctx->pc = 0x46f184u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 124), (uint8_t)GPR_U32(ctx, 2));
label_46f188:
    // 0x46f188: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x46f188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_46f18c:
    // 0x46f18c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x46f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_46f190:
    // 0x46f190: 0xc123848  jal         func_48E120
label_46f194:
    if (ctx->pc == 0x46F194u) {
        ctx->pc = 0x46F194u;
            // 0x46f194: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46F198u;
        goto label_46f198;
    }
    ctx->pc = 0x46F190u;
    SET_GPR_U32(ctx, 31, 0x46F198u);
    ctx->pc = 0x46F194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F190u;
            // 0x46f194: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F198u; }
        if (ctx->pc != 0x46F198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F198u; }
        if (ctx->pc != 0x46F198u) { return; }
    }
    ctx->pc = 0x46F198u;
label_46f198:
    // 0x46f198: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x46f198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_46f19c:
    // 0x46f19c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46f1a0:
    // 0x46f1a0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x46f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_46f1a4:
    // 0x46f1a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f1a8:
    // 0x46f1a8: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46f1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46f1ac:
    // 0x46f1ac: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x46f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46f1b0:
    // 0x46f1b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46f1b4:
    // 0x46f1b4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46f1b8:
    // 0x46f1b8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x46f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_46f1bc:
    // 0x46f1bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f1c0:
    // 0x46f1c0: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x46f1c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_46f1c4:
    // 0x46f1c4: 0x0  nop
    ctx->pc = 0x46f1c4u;
    // NOP
label_46f1c8:
    // 0x46f1c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f1cc:
    // 0x46f1cc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x46f1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_46f1d0:
    // 0x46f1d0: 0x26420024  addiu       $v0, $s2, 0x24
    ctx->pc = 0x46f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_46f1d4:
    // 0x46f1d4: 0x29880  sll         $s3, $v0, 2
    ctx->pc = 0x46f1d4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46f1d8:
    // 0x46f1d8: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x46f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46f1dc:
    // 0x46f1dc: 0x8c540004  lw          $s4, 0x4($v0)
    ctx->pc = 0x46f1dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46f1e0:
    // 0x46f1e0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x46f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_46f1e4:
    // 0x46f1e4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x46f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_46f1e8:
    // 0x46f1e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46f1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f1ec:
    // 0x46f1ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46f1ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46f1f0:
    // 0x46f1f0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46f1f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46f1f4:
    // 0x46f1f4: 0x320f809  jalr        $t9
label_46f1f8:
    if (ctx->pc == 0x46F1F8u) {
        ctx->pc = 0x46F1F8u;
            // 0x46f1f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46F1FCu;
        goto label_46f1fc;
    }
    ctx->pc = 0x46F1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46F1FCu);
        ctx->pc = 0x46F1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F1F4u;
            // 0x46f1f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46F1FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46F1FCu; }
            if (ctx->pc != 0x46F1FCu) { return; }
        }
        }
    }
    ctx->pc = 0x46F1FCu;
label_46f1fc:
    // 0x46f1fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f200:
    // 0x46f200: 0xa282007c  sb          $v0, 0x7C($s4)
    ctx->pc = 0x46f200u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 124), (uint8_t)GPR_U32(ctx, 2));
label_46f204:
    // 0x46f204: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x46f204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_46f208:
    // 0x46f208: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x46f208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_46f20c:
    // 0x46f20c: 0xc123848  jal         func_48E120
label_46f210:
    if (ctx->pc == 0x46F210u) {
        ctx->pc = 0x46F210u;
            // 0x46f210: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46F214u;
        goto label_46f214;
    }
    ctx->pc = 0x46F20Cu;
    SET_GPR_U32(ctx, 31, 0x46F214u);
    ctx->pc = 0x46F210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F20Cu;
            // 0x46f210: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F214u; }
        if (ctx->pc != 0x46F214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F214u; }
        if (ctx->pc != 0x46F214u) { return; }
    }
    ctx->pc = 0x46F214u;
label_46f214:
    // 0x46f214: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x46f214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_46f218:
    // 0x46f218: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x46f218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46f21c:
    // 0x46f21c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f220:
    // 0x46f220: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x46f220u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_46f224:
    // 0x46f224: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x46f224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_46f228:
    // 0x46f228: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46f228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46f22c:
    // 0x46f22c: 0xa4640046  sh          $a0, 0x46($v1)
    ctx->pc = 0x46f22cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 4));
label_46f230:
    // 0x46f230: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x46f230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46f234:
    // 0x46f234: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x46f234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f238:
    // 0x46f238: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x46f238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_46f23c:
    // 0x46f23c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x46f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_46f240:
    // 0x46f240: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46f240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46f244:
    // 0x46f244: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x46f244u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
label_46f248:
    // 0x46f248: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x46f248u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
label_46f24c:
    // 0x46f24c: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x46f24cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_46f250:
    // 0x46f250: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x46f250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_46f254:
    // 0x46f254: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x46f254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46f258:
    // 0x46f258: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
label_46f25c:
    if (ctx->pc == 0x46F25Cu) {
        ctx->pc = 0x46F25Cu;
            // 0x46f25c: 0x2631005c  addiu       $s1, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->pc = 0x46F260u;
        goto label_46f260;
    }
    ctx->pc = 0x46F258u;
    {
        const bool branch_taken_0x46f258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46F25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F258u;
            // 0x46f25c: 0x2631005c  addiu       $s1, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f258) {
            ctx->pc = 0x46F140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46f140;
        }
    }
    ctx->pc = 0x46F260u;
label_46f260:
    // 0x46f260: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_46f264:
    if (ctx->pc == 0x46F264u) {
        ctx->pc = 0x46F268u;
        goto label_46f268;
    }
    ctx->pc = 0x46F260u;
    {
        const bool branch_taken_0x46f260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f260) {
            ctx->pc = 0x46F540u;
            goto label_46f540;
        }
    }
    ctx->pc = 0x46F268u;
label_46f268:
    // 0x46f268: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x46f268u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_46f26c:
    // 0x46f26c: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x46f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46f270:
    // 0x46f270: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x46f270u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_46f274:
    // 0x46f274: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x46f274u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f278:
    // 0x46f278: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x46f278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_46f27c:
    // 0x46f27c: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x46f27cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46f280:
    // 0x46f280: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46f280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46f284:
    // 0x46f284: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46f284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46f288:
    // 0x46f288: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46f288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f28c:
    // 0x46f28c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46f28cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46f290:
    // 0x46f290: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46f290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46f294:
    // 0x46f294: 0x320f809  jalr        $t9
label_46f298:
    if (ctx->pc == 0x46F298u) {
        ctx->pc = 0x46F298u;
            // 0x46f298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46F29Cu;
        goto label_46f29c;
    }
    ctx->pc = 0x46F294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46F29Cu);
        ctx->pc = 0x46F298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F294u;
            // 0x46f298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46F29Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46F29Cu; }
            if (ctx->pc != 0x46F29Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46F29Cu;
label_46f29c:
    // 0x46f29c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f2a0:
    // 0x46f2a0: 0xa202007c  sb          $v0, 0x7C($s0)
    ctx->pc = 0x46f2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
label_46f2a4:
    // 0x46f2a4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46f2a8:
    // 0x46f2a8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46f2ac:
    // 0x46f2ac: 0xc123848  jal         func_48E120
label_46f2b0:
    if (ctx->pc == 0x46F2B0u) {
        ctx->pc = 0x46F2B0u;
            // 0x46f2b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46F2B4u;
        goto label_46f2b4;
    }
    ctx->pc = 0x46F2ACu;
    SET_GPR_U32(ctx, 31, 0x46F2B4u);
    ctx->pc = 0x46F2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F2ACu;
            // 0x46f2b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F2B4u; }
        if (ctx->pc != 0x46F2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F2B4u; }
        if (ctx->pc != 0x46F2B4u) { return; }
    }
    ctx->pc = 0x46F2B4u;
label_46f2b4:
    // 0x46f2b4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x46f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46f2b8:
    // 0x46f2b8: 0x27c20024  addiu       $v0, $fp, 0x24
    ctx->pc = 0x46f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 36));
label_46f2bc:
    // 0x46f2bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x46f2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46f2c0:
    // 0x46f2c0: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x46f2c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46f2c4:
    // 0x46f2c4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x46f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_46f2c8:
    // 0x46f2c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f2cc:
    // 0x46f2cc: 0xa4440046  sh          $a0, 0x46($v0)
    ctx->pc = 0x46f2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 4));
label_46f2d0:
    // 0x46f2d0: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x46f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46f2d4:
    // 0x46f2d4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46f2d8:
    // 0x46f2d8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46f2dc:
    // 0x46f2dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46f2e0:
    // 0x46f2e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f2e4:
    // 0x46f2e4: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x46f2e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_46f2e8:
    // 0x46f2e8: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x46f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46f2ec:
    // 0x46f2ec: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x46f2ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46f2f0:
    // 0x46f2f0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46f2f4:
    // 0x46f2f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46f2f8:
    // 0x46f2f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f2fc:
    // 0x46f2fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46f2fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46f300:
    // 0x46f300: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46f300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46f304:
    // 0x46f304: 0x320f809  jalr        $t9
label_46f308:
    if (ctx->pc == 0x46F308u) {
        ctx->pc = 0x46F308u;
            // 0x46f308: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46F30Cu;
        goto label_46f30c;
    }
    ctx->pc = 0x46F304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46F30Cu);
        ctx->pc = 0x46F308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F304u;
            // 0x46f308: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46F30Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46F30Cu; }
            if (ctx->pc != 0x46F30Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46F30Cu;
label_46f30c:
    // 0x46f30c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f310:
    // 0x46f310: 0xa222007c  sb          $v0, 0x7C($s1)
    ctx->pc = 0x46f310u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 2));
label_46f314:
    // 0x46f314: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46f318:
    // 0x46f318: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46f318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46f31c:
    // 0x46f31c: 0xc123848  jal         func_48E120
label_46f320:
    if (ctx->pc == 0x46F320u) {
        ctx->pc = 0x46F320u;
            // 0x46f320: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46F324u;
        goto label_46f324;
    }
    ctx->pc = 0x46F31Cu;
    SET_GPR_U32(ctx, 31, 0x46F324u);
    ctx->pc = 0x46F320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F31Cu;
            // 0x46f320: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F324u; }
        if (ctx->pc != 0x46F324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F324u; }
        if (ctx->pc != 0x46F324u) { return; }
    }
    ctx->pc = 0x46F324u;
label_46f324:
    // 0x46f324: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x46f324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46f328:
    // 0x46f328: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x46f328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46f32c:
    // 0x46f32c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f330:
    // 0x46f330: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x46f330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_46f334:
    // 0x46f334: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46f334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46f338:
    // 0x46f338: 0xa4640046  sh          $a0, 0x46($v1)
    ctx->pc = 0x46f338u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 4));
label_46f33c:
    // 0x46f33c: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x46f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46f340:
    // 0x46f340: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x46f340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f344:
    // 0x46f344: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x46f344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_46f348:
    // 0x46f348: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x46f348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_46f34c:
    // 0x46f34c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46f34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46f350:
    // 0x46f350: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x46f350u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
label_46f354:
    // 0x46f354: 0xa6800004  sh          $zero, 0x4($s4)
    ctx->pc = 0x46f354u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 0));
label_46f358:
    // 0x46f358: 0x13c40020  beq         $fp, $a0, . + 4 + (0x20 << 2)
label_46f35c:
    if (ctx->pc == 0x46F35Cu) {
        ctx->pc = 0x46F35Cu;
            // 0x46f35c: 0xa6820006  sh          $v0, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46F360u;
        goto label_46f360;
    }
    ctx->pc = 0x46F358u;
    {
        const bool branch_taken_0x46f358 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 4));
        ctx->pc = 0x46F35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F358u;
            // 0x46f35c: 0xa6820006  sh          $v0, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f358) {
            ctx->pc = 0x46F3DCu;
            goto label_46f3dc;
        }
    }
    ctx->pc = 0x46F360u;
label_46f360:
    // 0x46f360: 0x53c00003  beql        $fp, $zero, . + 4 + (0x3 << 2)
label_46f364:
    if (ctx->pc == 0x46F364u) {
        ctx->pc = 0x46F364u;
            // 0x46f364: 0xa2a200cc  sb          $v0, 0xCC($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46F368u;
        goto label_46f368;
    }
    ctx->pc = 0x46F360u;
    {
        const bool branch_taken_0x46f360 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f360) {
            ctx->pc = 0x46F364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46F360u;
            // 0x46f364: 0xa2a200cc  sb          $v0, 0xCC($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46F370u;
            goto label_46f370;
        }
    }
    ctx->pc = 0x46F368u;
label_46f368:
    // 0x46f368: 0x10000075  b           . + 4 + (0x75 << 2)
label_46f36c:
    if (ctx->pc == 0x46F36Cu) {
        ctx->pc = 0x46F370u;
        goto label_46f370;
    }
    ctx->pc = 0x46F368u;
    {
        const bool branch_taken_0x46f368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f368) {
            ctx->pc = 0x46F540u;
            goto label_46f540;
        }
    }
    ctx->pc = 0x46F370u;
label_46f370:
    // 0x46f370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46f370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46f374:
    // 0x46f374: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x46f374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46f378:
    // 0x46f378: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x46f378u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46f37c:
    // 0x46f37c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46f380:
    // 0x46f380: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x46f380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_46f384:
    // 0x46f384: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46f384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46f388:
    // 0x46f388: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46f388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46f38c:
    // 0x46f38c: 0x320f809  jalr        $t9
label_46f390:
    if (ctx->pc == 0x46F390u) {
        ctx->pc = 0x46F390u;
            // 0x46f390: 0x26b000cc  addiu       $s0, $s5, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 204));
        ctx->pc = 0x46F394u;
        goto label_46f394;
    }
    ctx->pc = 0x46F38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46F394u);
        ctx->pc = 0x46F390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F38Cu;
            // 0x46f390: 0x26b000cc  addiu       $s0, $s5, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 204));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46F394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46F394u; }
            if (ctx->pc != 0x46F394u) { return; }
        }
        }
    }
    ctx->pc = 0x46F394u;
label_46f394:
    // 0x46f394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f398:
    // 0x46f398: 0xa222007c  sb          $v0, 0x7C($s1)
    ctx->pc = 0x46f398u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 2));
label_46f39c:
    // 0x46f39c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46f3a0:
    // 0x46f3a0: 0xc123848  jal         func_48E120
label_46f3a4:
    if (ctx->pc == 0x46F3A4u) {
        ctx->pc = 0x46F3A4u;
            // 0x46f3a4: 0x8c440094  lw          $a0, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->pc = 0x46F3A8u;
        goto label_46f3a8;
    }
    ctx->pc = 0x46F3A0u;
    SET_GPR_U32(ctx, 31, 0x46F3A8u);
    ctx->pc = 0x46F3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F3A0u;
            // 0x46f3a4: 0x8c440094  lw          $a0, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F3A8u; }
        if (ctx->pc != 0x46F3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F3A8u; }
        if (ctx->pc != 0x46F3A8u) { return; }
    }
    ctx->pc = 0x46F3A8u;
label_46f3a8:
    // 0x46f3a8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x46f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46f3ac:
    // 0x46f3ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x46f3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46f3b0:
    // 0x46f3b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f3b4:
    // 0x46f3b4: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x46f3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_46f3b8:
    // 0x46f3b8: 0xa4640046  sh          $a0, 0x46($v1)
    ctx->pc = 0x46f3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 4));
label_46f3bc:
    // 0x46f3bc: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x46f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46f3c0:
    // 0x46f3c0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x46f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f3c4:
    // 0x46f3c4: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x46f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_46f3c8:
    // 0x46f3c8: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x46f3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_46f3cc:
    // 0x46f3cc: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x46f3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
label_46f3d0:
    // 0x46f3d0: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x46f3d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
label_46f3d4:
    // 0x46f3d4: 0x1000005a  b           . + 4 + (0x5A << 2)
label_46f3d8:
    if (ctx->pc == 0x46F3D8u) {
        ctx->pc = 0x46F3D8u;
            // 0x46f3d8: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46F3DCu;
        goto label_46f3dc;
    }
    ctx->pc = 0x46F3D4u;
    {
        const bool branch_taken_0x46f3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F3D4u;
            // 0x46f3d8: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f3d4) {
            ctx->pc = 0x46F540u;
            goto label_46f540;
        }
    }
    ctx->pc = 0x46F3DCu;
label_46f3dc:
    // 0x46f3dc: 0xa2a20184  sb          $v0, 0x184($s5)
    ctx->pc = 0x46f3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 388), (uint8_t)GPR_U32(ctx, 2));
label_46f3e0:
    // 0x46f3e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46f3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46f3e4:
    // 0x46f3e4: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x46f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46f3e8:
    // 0x46f3e8: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x46f3e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46f3ec:
    // 0x46f3ec: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46f3f0:
    // 0x46f3f0: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x46f3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_46f3f4:
    // 0x46f3f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46f3f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46f3f8:
    // 0x46f3f8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46f3f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46f3fc:
    // 0x46f3fc: 0x320f809  jalr        $t9
label_46f400:
    if (ctx->pc == 0x46F400u) {
        ctx->pc = 0x46F400u;
            // 0x46f400: 0x26b00184  addiu       $s0, $s5, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 388));
        ctx->pc = 0x46F404u;
        goto label_46f404;
    }
    ctx->pc = 0x46F3FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46F404u);
        ctx->pc = 0x46F400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F3FCu;
            // 0x46f400: 0x26b00184  addiu       $s0, $s5, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 388));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46F404u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46F404u; }
            if (ctx->pc != 0x46F404u) { return; }
        }
        }
    }
    ctx->pc = 0x46F404u;
label_46f404:
    // 0x46f404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f408:
    // 0x46f408: 0xa222007c  sb          $v0, 0x7C($s1)
    ctx->pc = 0x46f408u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 2));
label_46f40c:
    // 0x46f40c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46f410:
    // 0x46f410: 0xc123848  jal         func_48E120
label_46f414:
    if (ctx->pc == 0x46F414u) {
        ctx->pc = 0x46F414u;
            // 0x46f414: 0x8c44009c  lw          $a0, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->pc = 0x46F418u;
        goto label_46f418;
    }
    ctx->pc = 0x46F410u;
    SET_GPR_U32(ctx, 31, 0x46F418u);
    ctx->pc = 0x46F414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F410u;
            // 0x46f414: 0x8c44009c  lw          $a0, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F418u; }
        if (ctx->pc != 0x46F418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F418u; }
        if (ctx->pc != 0x46F418u) { return; }
    }
    ctx->pc = 0x46F418u;
label_46f418:
    // 0x46f418: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x46f418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46f41c:
    // 0x46f41c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x46f41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46f420:
    // 0x46f420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f424:
    // 0x46f424: 0x8c63009c  lw          $v1, 0x9C($v1)
    ctx->pc = 0x46f424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_46f428:
    // 0x46f428: 0xa4640046  sh          $a0, 0x46($v1)
    ctx->pc = 0x46f428u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 4));
label_46f42c:
    // 0x46f42c: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x46f42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46f430:
    // 0x46f430: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x46f430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f434:
    // 0x46f434: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x46f434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_46f438:
    // 0x46f438: 0x8c63009c  lw          $v1, 0x9C($v1)
    ctx->pc = 0x46f438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_46f43c:
    // 0x46f43c: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x46f43cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
label_46f440:
    // 0x46f440: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x46f440u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
label_46f444:
    // 0x46f444: 0x1000003e  b           . + 4 + (0x3E << 2)
label_46f448:
    if (ctx->pc == 0x46F448u) {
        ctx->pc = 0x46F448u;
            // 0x46f448: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46F44Cu;
        goto label_46f44c;
    }
    ctx->pc = 0x46F444u;
    {
        const bool branch_taken_0x46f444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F444u;
            // 0x46f448: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f444) {
            ctx->pc = 0x46F540u;
            goto label_46f540;
        }
    }
    ctx->pc = 0x46F44Cu;
label_46f44c:
    // 0x46f44c: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x46f44cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_46f450:
    // 0x46f450: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x46f450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46f454:
    // 0x46f454: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x46f454u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_46f458:
    // 0x46f458: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x46f458u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f45c:
    // 0x46f45c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x46f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_46f460:
    // 0x46f460: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x46f460u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46f464:
    // 0x46f464: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46f464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46f468:
    // 0x46f468: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46f468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46f46c:
    // 0x46f46c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f470:
    // 0x46f470: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46f470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46f474:
    // 0x46f474: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46f474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46f478:
    // 0x46f478: 0x320f809  jalr        $t9
label_46f47c:
    if (ctx->pc == 0x46F47Cu) {
        ctx->pc = 0x46F47Cu;
            // 0x46f47c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46F480u;
        goto label_46f480;
    }
    ctx->pc = 0x46F478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46F480u);
        ctx->pc = 0x46F47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F478u;
            // 0x46f47c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46F480u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46F480u; }
            if (ctx->pc != 0x46F480u) { return; }
        }
        }
    }
    ctx->pc = 0x46F480u;
label_46f480:
    // 0x46f480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f484:
    // 0x46f484: 0xa202007c  sb          $v0, 0x7C($s0)
    ctx->pc = 0x46f484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
label_46f488:
    // 0x46f488: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46f488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46f48c:
    // 0x46f48c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46f490:
    // 0x46f490: 0xc123848  jal         func_48E120
label_46f494:
    if (ctx->pc == 0x46F494u) {
        ctx->pc = 0x46F494u;
            // 0x46f494: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46F498u;
        goto label_46f498;
    }
    ctx->pc = 0x46F490u;
    SET_GPR_U32(ctx, 31, 0x46F498u);
    ctx->pc = 0x46F494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F490u;
            // 0x46f494: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F498u; }
        if (ctx->pc != 0x46F498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F498u; }
        if (ctx->pc != 0x46F498u) { return; }
    }
    ctx->pc = 0x46F498u;
label_46f498:
    // 0x46f498: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x46f498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46f49c:
    // 0x46f49c: 0x27c20024  addiu       $v0, $fp, 0x24
    ctx->pc = 0x46f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 36));
label_46f4a0:
    // 0x46f4a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x46f4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46f4a4:
    // 0x46f4a4: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x46f4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46f4a8:
    // 0x46f4a8: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x46f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_46f4ac:
    // 0x46f4ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f4b0:
    // 0x46f4b0: 0xa4440046  sh          $a0, 0x46($v0)
    ctx->pc = 0x46f4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 4));
label_46f4b4:
    // 0x46f4b4: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x46f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46f4b8:
    // 0x46f4b8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46f4bc:
    // 0x46f4bc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46f4c0:
    // 0x46f4c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46f4c4:
    // 0x46f4c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f4c8:
    // 0x46f4c8: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x46f4c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_46f4cc:
    // 0x46f4cc: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x46f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46f4d0:
    // 0x46f4d0: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x46f4d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46f4d4:
    // 0x46f4d4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46f4d8:
    // 0x46f4d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46f4dc:
    // 0x46f4dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46f4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46f4e0:
    // 0x46f4e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46f4e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46f4e4:
    // 0x46f4e4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46f4e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46f4e8:
    // 0x46f4e8: 0x320f809  jalr        $t9
label_46f4ec:
    if (ctx->pc == 0x46F4ECu) {
        ctx->pc = 0x46F4ECu;
            // 0x46f4ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46F4F0u;
        goto label_46f4f0;
    }
    ctx->pc = 0x46F4E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46F4F0u);
        ctx->pc = 0x46F4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F4E8u;
            // 0x46f4ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46F4F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46F4F0u; }
            if (ctx->pc != 0x46F4F0u) { return; }
        }
        }
    }
    ctx->pc = 0x46F4F0u;
label_46f4f0:
    // 0x46f4f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f4f4:
    // 0x46f4f4: 0xa222007c  sb          $v0, 0x7C($s1)
    ctx->pc = 0x46f4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 2));
label_46f4f8:
    // 0x46f4f8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46f4fc:
    // 0x46f4fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46f500:
    // 0x46f500: 0xc123848  jal         func_48E120
label_46f504:
    if (ctx->pc == 0x46F504u) {
        ctx->pc = 0x46F504u;
            // 0x46f504: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46F508u;
        goto label_46f508;
    }
    ctx->pc = 0x46F500u;
    SET_GPR_U32(ctx, 31, 0x46F508u);
    ctx->pc = 0x46F504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F500u;
            // 0x46f504: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F508u; }
        if (ctx->pc != 0x46F508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F508u; }
        if (ctx->pc != 0x46F508u) { return; }
    }
    ctx->pc = 0x46F508u;
label_46f508:
    // 0x46f508: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x46f508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46f50c:
    // 0x46f50c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x46f50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46f510:
    // 0x46f510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f514:
    // 0x46f514: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x46f514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_46f518:
    // 0x46f518: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46f518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46f51c:
    // 0x46f51c: 0xa4640046  sh          $a0, 0x46($v1)
    ctx->pc = 0x46f51cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 4));
label_46f520:
    // 0x46f520: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x46f520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46f524:
    // 0x46f524: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x46f524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46f528:
    // 0x46f528: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x46f528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_46f52c:
    // 0x46f52c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x46f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_46f530:
    // 0x46f530: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46f530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46f534:
    // 0x46f534: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x46f534u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
label_46f538:
    // 0x46f538: 0xa6800004  sh          $zero, 0x4($s4)
    ctx->pc = 0x46f538u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 0));
label_46f53c:
    // 0x46f53c: 0xa6820006  sh          $v0, 0x6($s4)
    ctx->pc = 0x46f53cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 2));
label_46f540:
    // 0x46f540: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x46f540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_46f544:
    // 0x46f544: 0xc073234  jal         func_1CC8D0
label_46f548:
    if (ctx->pc == 0x46F548u) {
        ctx->pc = 0x46F548u;
            // 0x46f548: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x46F54Cu;
        goto label_46f54c;
    }
    ctx->pc = 0x46F544u;
    SET_GPR_U32(ctx, 31, 0x46F54Cu);
    ctx->pc = 0x46F548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F544u;
            // 0x46f548: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F54Cu; }
        if (ctx->pc != 0x46F54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F54Cu; }
        if (ctx->pc != 0x46F54Cu) { return; }
    }
    ctx->pc = 0x46F54Cu;
label_46f54c:
    // 0x46f54c: 0x1000017e  b           . + 4 + (0x17E << 2)
label_46f550:
    if (ctx->pc == 0x46F550u) {
        ctx->pc = 0x46F550u;
            // 0x46f550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46F554u;
        goto label_46f554;
    }
    ctx->pc = 0x46F54Cu;
    {
        const bool branch_taken_0x46f54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F54Cu;
            // 0x46f550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f54c) {
            ctx->pc = 0x46FB48u;
            goto label_46fb48;
        }
    }
    ctx->pc = 0x46F554u;
label_46f554:
    // 0x46f554: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x46f554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_46f558:
    // 0x46f558: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x46f558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_46f55c:
    // 0x46f55c: 0x2463976c  addiu       $v1, $v1, -0x6894
    ctx->pc = 0x46f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940524));
label_46f560:
    // 0x46f560: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x46f560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_46f564:
    // 0x46f564: 0x65b021  addu        $s6, $v1, $a1
    ctx->pc = 0x46f564u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_46f568:
    // 0x46f568: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x46f568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_46f56c:
    // 0x46f56c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x46f56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_46f570:
    // 0x46f570: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x46f570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46f574:
    // 0x46f574: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
label_46f578:
    if (ctx->pc == 0x46F578u) {
        ctx->pc = 0x46F57Cu;
        goto label_46f57c;
    }
    ctx->pc = 0x46F574u;
    {
        const bool branch_taken_0x46f574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f574) {
            ctx->pc = 0x46F7A8u;
            goto label_46f7a8;
        }
    }
    ctx->pc = 0x46F57Cu;
label_46f57c:
    // 0x46f57c: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x46f57cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46f580:
    // 0x46f580: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46f580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46f584:
    // 0x46f584: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x46f584u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_46f588:
    // 0x46f588: 0xc11bb74  jal         func_46EDD0
label_46f58c:
    if (ctx->pc == 0x46F58Cu) {
        ctx->pc = 0x46F58Cu;
            // 0x46f58c: 0x8e910018  lw          $s1, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->pc = 0x46F590u;
        goto label_46f590;
    }
    ctx->pc = 0x46F588u;
    SET_GPR_U32(ctx, 31, 0x46F590u);
    ctx->pc = 0x46F58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F588u;
            // 0x46f58c: 0x8e910018  lw          $s1, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDD0u;
    if (runtime->hasFunction(0x46EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F590u; }
        if (ctx->pc != 0x46F590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDD0_0x46edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F590u; }
        if (ctx->pc != 0x46F590u) { return; }
    }
    ctx->pc = 0x46F590u;
label_46f590:
    // 0x46f590: 0xc11bb70  jal         func_46EDC0
label_46f594:
    if (ctx->pc == 0x46F594u) {
        ctx->pc = 0x46F594u;
            // 0x46f594: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46F598u;
        goto label_46f598;
    }
    ctx->pc = 0x46F590u;
    SET_GPR_U32(ctx, 31, 0x46F598u);
    ctx->pc = 0x46F594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F590u;
            // 0x46f594: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDC0u;
    if (runtime->hasFunction(0x46EDC0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F598u; }
        if (ctx->pc != 0x46F598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDC0_0x46edc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F598u; }
        if (ctx->pc != 0x46F598u) { return; }
    }
    ctx->pc = 0x46F598u;
label_46f598:
    // 0x46f598: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x46f598u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46f59c:
    // 0x46f59c: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x46f59cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46f5a0:
    // 0x46f5a0: 0x2842003f  slti        $v0, $v0, 0x3F
    ctx->pc = 0x46f5a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)63) ? 1 : 0);
label_46f5a4:
    // 0x46f5a4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_46f5a8:
    if (ctx->pc == 0x46F5A8u) {
        ctx->pc = 0x46F5A8u;
            // 0x46f5a8: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->pc = 0x46F5ACu;
        goto label_46f5ac;
    }
    ctx->pc = 0x46F5A4u;
    {
        const bool branch_taken_0x46f5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f5a4) {
            ctx->pc = 0x46F5A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46F5A4u;
            // 0x46f5a8: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46F5B4u;
            goto label_46f5b4;
        }
    }
    ctx->pc = 0x46F5ACu;
label_46f5ac:
    // 0x46f5ac: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x46f5acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
label_46f5b0:
    // 0x46f5b0: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x46f5b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46f5b4:
    // 0x46f5b4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x46f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_46f5b8:
    // 0x46f5b8: 0x24421490  addiu       $v0, $v0, 0x1490
    ctx->pc = 0x46f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
label_46f5bc:
    // 0x46f5bc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x46f5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_46f5c0:
    // 0x46f5c0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x46f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_46f5c4:
    // 0x46f5c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x46f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_46f5c8:
    // 0x46f5c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x46f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_46f5cc:
    // 0x46f5cc: 0xc11bb6c  jal         func_46EDB0
label_46f5d0:
    if (ctx->pc == 0x46F5D0u) {
        ctx->pc = 0x46F5D0u;
            // 0x46f5d0: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x46F5D4u;
        goto label_46f5d4;
    }
    ctx->pc = 0x46F5CCu;
    SET_GPR_U32(ctx, 31, 0x46F5D4u);
    ctx->pc = 0x46F5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F5CCu;
            // 0x46f5d0: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDB0u;
    if (runtime->hasFunction(0x46EDB0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F5D4u; }
        if (ctx->pc != 0x46F5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDB0_0x46edb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F5D4u; }
        if (ctx->pc != 0x46F5D4u) { return; }
    }
    ctx->pc = 0x46F5D4u;
label_46f5d4:
    // 0x46f5d4: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x46f5d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46f5d8:
    // 0x46f5d8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x46f5d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46f5dc:
    // 0x46f5dc: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x46f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_46f5e0:
    // 0x46f5e0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_46f5e4:
    if (ctx->pc == 0x46F5E4u) {
        ctx->pc = 0x46F5E8u;
        goto label_46f5e8;
    }
    ctx->pc = 0x46F5E0u;
    {
        const bool branch_taken_0x46f5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x46f5e0) {
            ctx->pc = 0x46F608u;
            goto label_46f608;
        }
    }
    ctx->pc = 0x46F5E8u;
label_46f5e8:
    // 0x46f5e8: 0xc0775b0  jal         func_1DD6C0
label_46f5ec:
    if (ctx->pc == 0x46F5ECu) {
        ctx->pc = 0x46F5F0u;
        goto label_46f5f0;
    }
    ctx->pc = 0x46F5E8u;
    SET_GPR_U32(ctx, 31, 0x46F5F0u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F5F0u; }
        if (ctx->pc != 0x46F5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F5F0u; }
        if (ctx->pc != 0x46F5F0u) { return; }
    }
    ctx->pc = 0x46F5F0u;
label_46f5f0:
    // 0x46f5f0: 0xc11bb68  jal         func_46EDA0
label_46f5f4:
    if (ctx->pc == 0x46F5F4u) {
        ctx->pc = 0x46F5F4u;
            // 0x46f5f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46F5F8u;
        goto label_46f5f8;
    }
    ctx->pc = 0x46F5F0u;
    SET_GPR_U32(ctx, 31, 0x46F5F8u);
    ctx->pc = 0x46F5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F5F0u;
            // 0x46f5f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDA0u;
    if (runtime->hasFunction(0x46EDA0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F5F8u; }
        if (ctx->pc != 0x46F5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDA0_0x46eda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F5F8u; }
        if (ctx->pc != 0x46F5F8u) { return; }
    }
    ctx->pc = 0x46F5F8u;
label_46f5f8:
    // 0x46f5f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x46f5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_46f5fc:
    // 0x46f5fc: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_46f600:
    if (ctx->pc == 0x46F600u) {
        ctx->pc = 0x46F604u;
        goto label_46f604;
    }
    ctx->pc = 0x46F5FCu;
    {
        const bool branch_taken_0x46f5fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x46f5fc) {
            ctx->pc = 0x46F608u;
            goto label_46f608;
        }
    }
    ctx->pc = 0x46F604u;
label_46f604:
    // 0x46f604: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x46f604u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_46f608:
    // 0x46f608: 0x1240005d  beqz        $s2, . + 4 + (0x5D << 2)
label_46f60c:
    if (ctx->pc == 0x46F60Cu) {
        ctx->pc = 0x46F610u;
        goto label_46f610;
    }
    ctx->pc = 0x46F608u;
    {
        const bool branch_taken_0x46f608 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f608) {
            ctx->pc = 0x46F780u;
            goto label_46f780;
        }
    }
    ctx->pc = 0x46F610u;
label_46f610:
    // 0x46f610: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x46f610u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46f614:
    // 0x46f614: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x46f614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_46f618:
    // 0x46f618: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
label_46f61c:
    if (ctx->pc == 0x46F61Cu) {
        ctx->pc = 0x46F620u;
        goto label_46f620;
    }
    ctx->pc = 0x46F618u;
    {
        const bool branch_taken_0x46f618 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x46f618) {
            ctx->pc = 0x46F670u;
            goto label_46f670;
        }
    }
    ctx->pc = 0x46F620u;
label_46f620:
    // 0x46f620: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x46f620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_46f624:
    // 0x46f624: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46f624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46f628:
    // 0x46f628: 0x24c60820  addiu       $a2, $a2, 0x820
    ctx->pc = 0x46f628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2080));
label_46f62c:
    // 0x46f62c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x46f62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_46f630:
    // 0x46f630: 0x90a20070  lbu         $v0, 0x70($a1)
    ctx->pc = 0x46f630u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 112)));
label_46f634:
    // 0x46f634: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x46f634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_46f638:
    // 0x46f638: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_46f63c:
    if (ctx->pc == 0x46F63Cu) {
        ctx->pc = 0x46F640u;
        goto label_46f640;
    }
    ctx->pc = 0x46F638u;
    {
        const bool branch_taken_0x46f638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f638) {
            ctx->pc = 0x46F658u;
            goto label_46f658;
        }
    }
    ctx->pc = 0x46F640u;
label_46f640:
    // 0x46f640: 0x12660005  beq         $s3, $a2, . + 4 + (0x5 << 2)
label_46f644:
    if (ctx->pc == 0x46F644u) {
        ctx->pc = 0x46F648u;
        goto label_46f648;
    }
    ctx->pc = 0x46F640u;
    {
        const bool branch_taken_0x46f640 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 6));
        if (branch_taken_0x46f640) {
            ctx->pc = 0x46F658u;
            goto label_46f658;
        }
    }
    ctx->pc = 0x46F648u;
label_46f648:
    // 0x46f648: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x46f648u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_46f64c:
    // 0x46f64c: 0x1043004c  beq         $v0, $v1, . + 4 + (0x4C << 2)
label_46f650:
    if (ctx->pc == 0x46F650u) {
        ctx->pc = 0x46F654u;
        goto label_46f654;
    }
    ctx->pc = 0x46F64Cu;
    {
        const bool branch_taken_0x46f64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x46f64c) {
            ctx->pc = 0x46F780u;
            goto label_46f780;
        }
    }
    ctx->pc = 0x46F654u;
label_46f654:
    // 0x46f654: 0x0  nop
    ctx->pc = 0x46f654u;
    // NOP
label_46f658:
    // 0x46f658: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x46f658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_46f65c:
    // 0x46f65c: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x46f65cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
label_46f660:
    // 0x46f660: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x46f660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_46f664:
    // 0x46f664: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_46f668:
    if (ctx->pc == 0x46F668u) {
        ctx->pc = 0x46F668u;
            // 0x46f668: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->pc = 0x46F66Cu;
        goto label_46f66c;
    }
    ctx->pc = 0x46F664u;
    {
        const bool branch_taken_0x46f664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46F668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F664u;
            // 0x46f668: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f664) {
            ctx->pc = 0x46F630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46f630;
        }
    }
    ctx->pc = 0x46F66Cu;
label_46f66c:
    // 0x46f66c: 0x0  nop
    ctx->pc = 0x46f66cu;
    // NOP
label_46f670:
    // 0x46f670: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x46f670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_46f674:
    // 0x46f674: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_46f678:
    if (ctx->pc == 0x46F678u) {
        ctx->pc = 0x46F67Cu;
        goto label_46f67c;
    }
    ctx->pc = 0x46F674u;
    {
        const bool branch_taken_0x46f674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x46f674) {
            ctx->pc = 0x46F6A0u;
            goto label_46f6a0;
        }
    }
    ctx->pc = 0x46F67Cu;
label_46f67c:
    // 0x46f67c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x46f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_46f680:
    // 0x46f680: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_46f684:
    if (ctx->pc == 0x46F684u) {
        ctx->pc = 0x46F688u;
        goto label_46f688;
    }
    ctx->pc = 0x46F680u;
    {
        const bool branch_taken_0x46f680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x46f680) {
            ctx->pc = 0x46F6A0u;
            goto label_46f6a0;
        }
    }
    ctx->pc = 0x46F688u;
label_46f688:
    // 0x46f688: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x46f688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_46f68c:
    // 0x46f68c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_46f690:
    if (ctx->pc == 0x46F690u) {
        ctx->pc = 0x46F694u;
        goto label_46f694;
    }
    ctx->pc = 0x46F68Cu;
    {
        const bool branch_taken_0x46f68c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x46f68c) {
            ctx->pc = 0x46F6A0u;
            goto label_46f6a0;
        }
    }
    ctx->pc = 0x46F694u;
label_46f694:
    // 0x46f694: 0x10000008  b           . + 4 + (0x8 << 2)
label_46f698:
    if (ctx->pc == 0x46F698u) {
        ctx->pc = 0x46F69Cu;
        goto label_46f69c;
    }
    ctx->pc = 0x46F694u;
    {
        const bool branch_taken_0x46f694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f694) {
            ctx->pc = 0x46F6B8u;
            goto label_46f6b8;
        }
    }
    ctx->pc = 0x46F69Cu;
label_46f69c:
    // 0x46f69c: 0x0  nop
    ctx->pc = 0x46f69cu;
    // NOP
label_46f6a0:
    // 0x46f6a0: 0xc0c8f80  jal         func_323E00
label_46f6a4:
    if (ctx->pc == 0x46F6A4u) {
        ctx->pc = 0x46F6A4u;
            // 0x46f6a4: 0x8ea40068  lw          $a0, 0x68($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
        ctx->pc = 0x46F6A8u;
        goto label_46f6a8;
    }
    ctx->pc = 0x46F6A0u;
    SET_GPR_U32(ctx, 31, 0x46F6A8u);
    ctx->pc = 0x46F6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F6A0u;
            // 0x46f6a4: 0x8ea40068  lw          $a0, 0x68($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323E00u;
    if (runtime->hasFunction(0x323E00u)) {
        auto targetFn = runtime->lookupFunction(0x323E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F6A8u; }
        if (ctx->pc != 0x46F6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323E00_0x323e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F6A8u; }
        if (ctx->pc != 0x46F6A8u) { return; }
    }
    ctx->pc = 0x46F6A8u;
label_46f6a8:
    // 0x46f6a8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x46f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_46f6ac:
    // 0x46f6ac: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
label_46f6b0:
    if (ctx->pc == 0x46F6B0u) {
        ctx->pc = 0x46F6B4u;
        goto label_46f6b4;
    }
    ctx->pc = 0x46F6ACu;
    {
        const bool branch_taken_0x46f6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x46f6ac) {
            ctx->pc = 0x46F780u;
            goto label_46f780;
        }
    }
    ctx->pc = 0x46F6B4u;
label_46f6b4:
    // 0x46f6b4: 0x0  nop
    ctx->pc = 0x46f6b4u;
    // NOP
label_46f6b8:
    // 0x46f6b8: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
label_46f6bc:
    if (ctx->pc == 0x46F6BCu) {
        ctx->pc = 0x46F6C0u;
        goto label_46f6c0;
    }
    ctx->pc = 0x46F6B8u;
    {
        const bool branch_taken_0x46f6b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f6b8) {
            ctx->pc = 0x46F6E8u;
            goto label_46f6e8;
        }
    }
    ctx->pc = 0x46F6C0u;
label_46f6c0:
    // 0x46f6c0: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x46f6c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_46f6c4:
    // 0x46f6c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f6c8:
    // 0x46f6c8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x46f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_46f6cc:
    // 0x46f6cc: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x46f6ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_46f6d0:
    // 0x46f6d0: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x46f6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_46f6d4:
    // 0x46f6d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x46f6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_46f6d8:
    // 0x46f6d8: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_46f6dc:
    if (ctx->pc == 0x46F6DCu) {
        ctx->pc = 0x46F6E0u;
        goto label_46f6e0;
    }
    ctx->pc = 0x46F6D8u;
    {
        const bool branch_taken_0x46f6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f6d8) {
            ctx->pc = 0x46F7A8u;
            goto label_46f7a8;
        }
    }
    ctx->pc = 0x46F6E0u;
label_46f6e0:
    // 0x46f6e0: 0x10000027  b           . + 4 + (0x27 << 2)
label_46f6e4:
    if (ctx->pc == 0x46F6E4u) {
        ctx->pc = 0x46F6E8u;
        goto label_46f6e8;
    }
    ctx->pc = 0x46F6E0u;
    {
        const bool branch_taken_0x46f6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f6e0) {
            ctx->pc = 0x46F780u;
            goto label_46f780;
        }
    }
    ctx->pc = 0x46F6E8u;
label_46f6e8:
    // 0x46f6e8: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x46f6e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46f6ec:
    // 0x46f6ec: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x46f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_46f6f0:
    // 0x46f6f0: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_46f6f4:
    if (ctx->pc == 0x46F6F4u) {
        ctx->pc = 0x46F6F8u;
        goto label_46f6f8;
    }
    ctx->pc = 0x46F6F0u;
    {
        const bool branch_taken_0x46f6f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46f6f0) {
            ctx->pc = 0x46F780u;
            goto label_46f780;
        }
    }
    ctx->pc = 0x46F6F8u;
label_46f6f8:
    // 0x46f6f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x46f6f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46f6fc:
    // 0x46f6fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x46f6fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46f700:
    // 0x46f700: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x46f700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46f704:
    // 0x46f704: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x46f704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46f708:
    // 0x46f708: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x46f708u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_46f70c:
    // 0x46f70c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x46f70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_46f710:
    // 0x46f710: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x46f710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f714:
    // 0x46f714: 0x0  nop
    ctx->pc = 0x46f714u;
    // NOP
label_46f718:
    // 0x46f718: 0x15400017  bnez        $t2, . + 4 + (0x17 << 2)
label_46f71c:
    if (ctx->pc == 0x46F71Cu) {
        ctx->pc = 0x46F720u;
        goto label_46f720;
    }
    ctx->pc = 0x46F718u;
    {
        const bool branch_taken_0x46f718 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f718) {
            ctx->pc = 0x46F778u;
            goto label_46f778;
        }
    }
    ctx->pc = 0x46F720u;
label_46f720:
    // 0x46f720: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x46f720u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_46f724:
    // 0x46f724: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x46f724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_46f728:
    // 0x46f728: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
label_46f72c:
    if (ctx->pc == 0x46F72Cu) {
        ctx->pc = 0x46F730u;
        goto label_46f730;
    }
    ctx->pc = 0x46F728u;
    {
        const bool branch_taken_0x46f728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x46f728) {
            ctx->pc = 0x46F738u;
            goto label_46f738;
        }
    }
    ctx->pc = 0x46F730u;
label_46f730:
    // 0x46f730: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x46f730u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46f734:
    // 0x46f734: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x46f734u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46f738:
    // 0x46f738: 0x441804  sllv        $v1, $a0, $v0
    ctx->pc = 0x46f738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_46f73c:
    // 0x46f73c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x46f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_46f740:
    // 0x46f740: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x46f740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_46f744:
    // 0x46f744: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_46f748:
    if (ctx->pc == 0x46F748u) {
        ctx->pc = 0x46F74Cu;
        goto label_46f74c;
    }
    ctx->pc = 0x46F744u;
    {
        const bool branch_taken_0x46f744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f744) {
            ctx->pc = 0x46F768u;
            goto label_46f768;
        }
    }
    ctx->pc = 0x46F74Cu;
label_46f74c:
    // 0x46f74c: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
label_46f750:
    if (ctx->pc == 0x46F750u) {
        ctx->pc = 0x46F754u;
        goto label_46f754;
    }
    ctx->pc = 0x46F74Cu;
    {
        const bool branch_taken_0x46f74c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f74c) {
            ctx->pc = 0x46F760u;
            goto label_46f760;
        }
    }
    ctx->pc = 0x46F754u;
label_46f754:
    // 0x46f754: 0x10000008  b           . + 4 + (0x8 << 2)
label_46f758:
    if (ctx->pc == 0x46F758u) {
        ctx->pc = 0x46F758u;
            // 0x46f758: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46F75Cu;
        goto label_46f75c;
    }
    ctx->pc = 0x46F754u;
    {
        const bool branch_taken_0x46f754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F754u;
            // 0x46f758: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f754) {
            ctx->pc = 0x46F778u;
            goto label_46f778;
        }
    }
    ctx->pc = 0x46F75Cu;
label_46f75c:
    // 0x46f75c: 0x0  nop
    ctx->pc = 0x46f75cu;
    // NOP
label_46f760:
    // 0x46f760: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x46f760u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_46f764:
    // 0x46f764: 0x0  nop
    ctx->pc = 0x46f764u;
    // NOP
label_46f768:
    // 0x46f768: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x46f768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_46f76c:
    // 0x46f76c: 0x111102b  sltu        $v0, $t0, $s1
    ctx->pc = 0x46f76cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_46f770:
    // 0x46f770: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_46f774:
    if (ctx->pc == 0x46F774u) {
        ctx->pc = 0x46F774u;
            // 0x46f774: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x46F778u;
        goto label_46f778;
    }
    ctx->pc = 0x46F770u;
    {
        const bool branch_taken_0x46f770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46F774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F770u;
            // 0x46f774: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f770) {
            ctx->pc = 0x46F718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46f718;
        }
    }
    ctx->pc = 0x46F778u;
label_46f778:
    // 0x46f778: 0x1520000b  bnez        $t1, . + 4 + (0xB << 2)
label_46f77c:
    if (ctx->pc == 0x46F77Cu) {
        ctx->pc = 0x46F780u;
        goto label_46f780;
    }
    ctx->pc = 0x46F778u;
    {
        const bool branch_taken_0x46f778 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f778) {
            ctx->pc = 0x46F7A8u;
            goto label_46f7a8;
        }
    }
    ctx->pc = 0x46F780u;
label_46f780:
    // 0x46f780: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x46f780u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46f784:
    // 0x46f784: 0x2841003e  slti        $at, $v0, 0x3E
    ctx->pc = 0x46f784u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)62) ? 1 : 0);
label_46f788:
    // 0x46f788: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_46f78c:
    if (ctx->pc == 0x46F78Cu) {
        ctx->pc = 0x46F790u;
        goto label_46f790;
    }
    ctx->pc = 0x46F788u;
    {
        const bool branch_taken_0x46f788 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f788) {
            ctx->pc = 0x46F7A0u;
            goto label_46f7a0;
        }
    }
    ctx->pc = 0x46F790u;
label_46f790:
    // 0x46f790: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46f790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46f794:
    // 0x46f794: 0x1000ff86  b           . + 4 + (-0x7A << 2)
label_46f798:
    if (ctx->pc == 0x46F798u) {
        ctx->pc = 0x46F798u;
            // 0x46f798: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46F79Cu;
        goto label_46f79c;
    }
    ctx->pc = 0x46F794u;
    {
        const bool branch_taken_0x46f794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F794u;
            // 0x46f798: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f794) {
            ctx->pc = 0x46F5B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46f5b0;
        }
    }
    ctx->pc = 0x46F79Cu;
label_46f79c:
    // 0x46f79c: 0x0  nop
    ctx->pc = 0x46f79cu;
    // NOP
label_46f7a0:
    // 0x46f7a0: 0x1000ff83  b           . + 4 + (-0x7D << 2)
label_46f7a4:
    if (ctx->pc == 0x46F7A4u) {
        ctx->pc = 0x46F7A4u;
            // 0x46f7a4: 0xa2600001  sb          $zero, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x46F7A8u;
        goto label_46f7a8;
    }
    ctx->pc = 0x46F7A0u;
    {
        const bool branch_taken_0x46f7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F7A0u;
            // 0x46f7a4: 0xa2600001  sb          $zero, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f7a0) {
            ctx->pc = 0x46F5B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46f5b0;
        }
    }
    ctx->pc = 0x46F7A8u;
label_46f7a8:
    // 0x46f7a8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x46f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_46f7ac:
    // 0x46f7ac: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x46f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_46f7b0:
    // 0x46f7b0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x46f7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_46f7b4:
    // 0x46f7b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x46f7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_46f7b8:
    // 0x46f7b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x46f7b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46f7bc:
    // 0x46f7bc: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
label_46f7c0:
    if (ctx->pc == 0x46F7C0u) {
        ctx->pc = 0x46F7C4u;
        goto label_46f7c4;
    }
    ctx->pc = 0x46F7BCu;
    {
        const bool branch_taken_0x46f7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f7bc) {
            ctx->pc = 0x46FA10u;
            goto label_46fa10;
        }
    }
    ctx->pc = 0x46F7C4u;
label_46f7c4:
    // 0x46f7c4: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x46f7c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46f7c8:
    // 0x46f7c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46f7cc:
    // 0x46f7cc: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x46f7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_46f7d0:
    // 0x46f7d0: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x46f7d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46f7d4:
    // 0x46f7d4: 0x2842003f  slti        $v0, $v0, 0x3F
    ctx->pc = 0x46f7d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)63) ? 1 : 0);
label_46f7d8:
    // 0x46f7d8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_46f7dc:
    if (ctx->pc == 0x46F7DCu) {
        ctx->pc = 0x46F7DCu;
            // 0x46f7dc: 0x8e910018  lw          $s1, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->pc = 0x46F7E0u;
        goto label_46f7e0;
    }
    ctx->pc = 0x46F7D8u;
    {
        const bool branch_taken_0x46f7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f7d8) {
            ctx->pc = 0x46F7DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46F7D8u;
            // 0x46f7dc: 0x8e910018  lw          $s1, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46F7ECu;
            goto label_46f7ec;
        }
    }
    ctx->pc = 0x46F7E0u;
label_46f7e0:
    // 0x46f7e0: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x46f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_46f7e4:
    // 0x46f7e4: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x46f7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_46f7e8:
    // 0x46f7e8: 0x8e910018  lw          $s1, 0x18($s4)
    ctx->pc = 0x46f7e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_46f7ec:
    // 0x46f7ec: 0xc11bb74  jal         func_46EDD0
label_46f7f0:
    if (ctx->pc == 0x46F7F0u) {
        ctx->pc = 0x46F7F4u;
        goto label_46f7f4;
    }
    ctx->pc = 0x46F7ECu;
    SET_GPR_U32(ctx, 31, 0x46F7F4u);
    ctx->pc = 0x46EDD0u;
    if (runtime->hasFunction(0x46EDD0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F7F4u; }
        if (ctx->pc != 0x46F7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDD0_0x46edd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F7F4u; }
        if (ctx->pc != 0x46F7F4u) { return; }
    }
    ctx->pc = 0x46F7F4u;
label_46f7f4:
    // 0x46f7f4: 0xc11bb70  jal         func_46EDC0
label_46f7f8:
    if (ctx->pc == 0x46F7F8u) {
        ctx->pc = 0x46F7F8u;
            // 0x46f7f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46F7FCu;
        goto label_46f7fc;
    }
    ctx->pc = 0x46F7F4u;
    SET_GPR_U32(ctx, 31, 0x46F7FCu);
    ctx->pc = 0x46F7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F7F4u;
            // 0x46f7f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDC0u;
    if (runtime->hasFunction(0x46EDC0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F7FCu; }
        if (ctx->pc != 0x46F7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDC0_0x46edc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F7FCu; }
        if (ctx->pc != 0x46F7FCu) { return; }
    }
    ctx->pc = 0x46F7FCu;
label_46f7fc:
    // 0x46f7fc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x46f7fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46f800:
    // 0x46f800: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x46f800u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46f804:
    // 0x46f804: 0x2842003f  slti        $v0, $v0, 0x3F
    ctx->pc = 0x46f804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)63) ? 1 : 0);
label_46f808:
    // 0x46f808: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_46f80c:
    if (ctx->pc == 0x46F80Cu) {
        ctx->pc = 0x46F80Cu;
            // 0x46f80c: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->pc = 0x46F810u;
        goto label_46f810;
    }
    ctx->pc = 0x46F808u;
    {
        const bool branch_taken_0x46f808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f808) {
            ctx->pc = 0x46F80Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46F808u;
            // 0x46f80c: 0x92650001  lbu         $a1, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46F818u;
            goto label_46f818;
        }
    }
    ctx->pc = 0x46F810u;
label_46f810:
    // 0x46f810: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x46f810u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
label_46f814:
    // 0x46f814: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x46f814u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46f818:
    // 0x46f818: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x46f818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_46f81c:
    // 0x46f81c: 0x24421490  addiu       $v0, $v0, 0x1490
    ctx->pc = 0x46f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
label_46f820:
    // 0x46f820: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x46f820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_46f824:
    // 0x46f824: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x46f824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_46f828:
    // 0x46f828: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x46f828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_46f82c:
    // 0x46f82c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x46f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_46f830:
    // 0x46f830: 0xc11bb6c  jal         func_46EDB0
label_46f834:
    if (ctx->pc == 0x46F834u) {
        ctx->pc = 0x46F834u;
            // 0x46f834: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x46F838u;
        goto label_46f838;
    }
    ctx->pc = 0x46F830u;
    SET_GPR_U32(ctx, 31, 0x46F838u);
    ctx->pc = 0x46F834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F830u;
            // 0x46f834: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDB0u;
    if (runtime->hasFunction(0x46EDB0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F838u; }
        if (ctx->pc != 0x46F838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDB0_0x46edb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F838u; }
        if (ctx->pc != 0x46F838u) { return; }
    }
    ctx->pc = 0x46F838u;
label_46f838:
    // 0x46f838: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x46f838u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46f83c:
    // 0x46f83c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x46f83cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46f840:
    // 0x46f840: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x46f840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_46f844:
    // 0x46f844: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_46f848:
    if (ctx->pc == 0x46F848u) {
        ctx->pc = 0x46F84Cu;
        goto label_46f84c;
    }
    ctx->pc = 0x46F844u;
    {
        const bool branch_taken_0x46f844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x46f844) {
            ctx->pc = 0x46F870u;
            goto label_46f870;
        }
    }
    ctx->pc = 0x46F84Cu;
label_46f84c:
    // 0x46f84c: 0xc0775b0  jal         func_1DD6C0
label_46f850:
    if (ctx->pc == 0x46F850u) {
        ctx->pc = 0x46F854u;
        goto label_46f854;
    }
    ctx->pc = 0x46F84Cu;
    SET_GPR_U32(ctx, 31, 0x46F854u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F854u; }
        if (ctx->pc != 0x46F854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F854u; }
        if (ctx->pc != 0x46F854u) { return; }
    }
    ctx->pc = 0x46F854u;
label_46f854:
    // 0x46f854: 0xc11bb68  jal         func_46EDA0
label_46f858:
    if (ctx->pc == 0x46F858u) {
        ctx->pc = 0x46F858u;
            // 0x46f858: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46F85Cu;
        goto label_46f85c;
    }
    ctx->pc = 0x46F854u;
    SET_GPR_U32(ctx, 31, 0x46F85Cu);
    ctx->pc = 0x46F858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F854u;
            // 0x46f858: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x46EDA0u;
    if (runtime->hasFunction(0x46EDA0u)) {
        auto targetFn = runtime->lookupFunction(0x46EDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F85Cu; }
        if (ctx->pc != 0x46F85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0046EDA0_0x46eda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F85Cu; }
        if (ctx->pc != 0x46F85Cu) { return; }
    }
    ctx->pc = 0x46F85Cu;
label_46f85c:
    // 0x46f85c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x46f85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_46f860:
    // 0x46f860: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_46f864:
    if (ctx->pc == 0x46F864u) {
        ctx->pc = 0x46F868u;
        goto label_46f868;
    }
    ctx->pc = 0x46F860u;
    {
        const bool branch_taken_0x46f860 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x46f860) {
            ctx->pc = 0x46F870u;
            goto label_46f870;
        }
    }
    ctx->pc = 0x46F868u;
label_46f868:
    // 0x46f868: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x46f868u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_46f86c:
    // 0x46f86c: 0x0  nop
    ctx->pc = 0x46f86cu;
    // NOP
label_46f870:
    // 0x46f870: 0x1240005d  beqz        $s2, . + 4 + (0x5D << 2)
label_46f874:
    if (ctx->pc == 0x46F874u) {
        ctx->pc = 0x46F878u;
        goto label_46f878;
    }
    ctx->pc = 0x46F870u;
    {
        const bool branch_taken_0x46f870 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f870) {
            ctx->pc = 0x46F9E8u;
            goto label_46f9e8;
        }
    }
    ctx->pc = 0x46F878u;
label_46f878:
    // 0x46f878: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x46f878u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46f87c:
    // 0x46f87c: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x46f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_46f880:
    // 0x46f880: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
label_46f884:
    if (ctx->pc == 0x46F884u) {
        ctx->pc = 0x46F888u;
        goto label_46f888;
    }
    ctx->pc = 0x46F880u;
    {
        const bool branch_taken_0x46f880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x46f880) {
            ctx->pc = 0x46F8D8u;
            goto label_46f8d8;
        }
    }
    ctx->pc = 0x46F888u;
label_46f888:
    // 0x46f888: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x46f888u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_46f88c:
    // 0x46f88c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46f88cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46f890:
    // 0x46f890: 0x24c60820  addiu       $a2, $a2, 0x820
    ctx->pc = 0x46f890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2080));
label_46f894:
    // 0x46f894: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x46f894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_46f898:
    // 0x46f898: 0x90a20070  lbu         $v0, 0x70($a1)
    ctx->pc = 0x46f898u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 112)));
label_46f89c:
    // 0x46f89c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x46f89cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_46f8a0:
    // 0x46f8a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_46f8a4:
    if (ctx->pc == 0x46F8A4u) {
        ctx->pc = 0x46F8A8u;
        goto label_46f8a8;
    }
    ctx->pc = 0x46F8A0u;
    {
        const bool branch_taken_0x46f8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f8a0) {
            ctx->pc = 0x46F8C0u;
            goto label_46f8c0;
        }
    }
    ctx->pc = 0x46F8A8u;
label_46f8a8:
    // 0x46f8a8: 0x12660005  beq         $s3, $a2, . + 4 + (0x5 << 2)
label_46f8ac:
    if (ctx->pc == 0x46F8ACu) {
        ctx->pc = 0x46F8B0u;
        goto label_46f8b0;
    }
    ctx->pc = 0x46F8A8u;
    {
        const bool branch_taken_0x46f8a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 6));
        if (branch_taken_0x46f8a8) {
            ctx->pc = 0x46F8C0u;
            goto label_46f8c0;
        }
    }
    ctx->pc = 0x46F8B0u;
label_46f8b0:
    // 0x46f8b0: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x46f8b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_46f8b4:
    // 0x46f8b4: 0x1043004c  beq         $v0, $v1, . + 4 + (0x4C << 2)
label_46f8b8:
    if (ctx->pc == 0x46F8B8u) {
        ctx->pc = 0x46F8BCu;
        goto label_46f8bc;
    }
    ctx->pc = 0x46F8B4u;
    {
        const bool branch_taken_0x46f8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x46f8b4) {
            ctx->pc = 0x46F9E8u;
            goto label_46f9e8;
        }
    }
    ctx->pc = 0x46F8BCu;
label_46f8bc:
    // 0x46f8bc: 0x0  nop
    ctx->pc = 0x46f8bcu;
    // NOP
label_46f8c0:
    // 0x46f8c0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x46f8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_46f8c4:
    // 0x46f8c4: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x46f8c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
label_46f8c8:
    // 0x46f8c8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x46f8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_46f8cc:
    // 0x46f8cc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_46f8d0:
    if (ctx->pc == 0x46F8D0u) {
        ctx->pc = 0x46F8D0u;
            // 0x46f8d0: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->pc = 0x46F8D4u;
        goto label_46f8d4;
    }
    ctx->pc = 0x46F8CCu;
    {
        const bool branch_taken_0x46f8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46F8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F8CCu;
            // 0x46f8d0: 0x24a5005c  addiu       $a1, $a1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f8cc) {
            ctx->pc = 0x46F898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46f898;
        }
    }
    ctx->pc = 0x46F8D4u;
label_46f8d4:
    // 0x46f8d4: 0x0  nop
    ctx->pc = 0x46f8d4u;
    // NOP
label_46f8d8:
    // 0x46f8d8: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x46f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_46f8dc:
    // 0x46f8dc: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_46f8e0:
    if (ctx->pc == 0x46F8E0u) {
        ctx->pc = 0x46F8E4u;
        goto label_46f8e4;
    }
    ctx->pc = 0x46F8DCu;
    {
        const bool branch_taken_0x46f8dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x46f8dc) {
            ctx->pc = 0x46F908u;
            goto label_46f908;
        }
    }
    ctx->pc = 0x46F8E4u;
label_46f8e4:
    // 0x46f8e4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x46f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_46f8e8:
    // 0x46f8e8: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_46f8ec:
    if (ctx->pc == 0x46F8ECu) {
        ctx->pc = 0x46F8F0u;
        goto label_46f8f0;
    }
    ctx->pc = 0x46F8E8u;
    {
        const bool branch_taken_0x46f8e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x46f8e8) {
            ctx->pc = 0x46F908u;
            goto label_46f908;
        }
    }
    ctx->pc = 0x46F8F0u;
label_46f8f0:
    // 0x46f8f0: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x46f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_46f8f4:
    // 0x46f8f4: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_46f8f8:
    if (ctx->pc == 0x46F8F8u) {
        ctx->pc = 0x46F8FCu;
        goto label_46f8fc;
    }
    ctx->pc = 0x46F8F4u;
    {
        const bool branch_taken_0x46f8f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x46f8f4) {
            ctx->pc = 0x46F908u;
            goto label_46f908;
        }
    }
    ctx->pc = 0x46F8FCu;
label_46f8fc:
    // 0x46f8fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_46f900:
    if (ctx->pc == 0x46F900u) {
        ctx->pc = 0x46F904u;
        goto label_46f904;
    }
    ctx->pc = 0x46F8FCu;
    {
        const bool branch_taken_0x46f8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f8fc) {
            ctx->pc = 0x46F920u;
            goto label_46f920;
        }
    }
    ctx->pc = 0x46F904u;
label_46f904:
    // 0x46f904: 0x0  nop
    ctx->pc = 0x46f904u;
    // NOP
label_46f908:
    // 0x46f908: 0xc0c8f80  jal         func_323E00
label_46f90c:
    if (ctx->pc == 0x46F90Cu) {
        ctx->pc = 0x46F90Cu;
            // 0x46f90c: 0x8ea40068  lw          $a0, 0x68($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
        ctx->pc = 0x46F910u;
        goto label_46f910;
    }
    ctx->pc = 0x46F908u;
    SET_GPR_U32(ctx, 31, 0x46F910u);
    ctx->pc = 0x46F90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46F908u;
            // 0x46f90c: 0x8ea40068  lw          $a0, 0x68($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323E00u;
    if (runtime->hasFunction(0x323E00u)) {
        auto targetFn = runtime->lookupFunction(0x323E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F910u; }
        if (ctx->pc != 0x46F910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323E00_0x323e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46F910u; }
        if (ctx->pc != 0x46F910u) { return; }
    }
    ctx->pc = 0x46F910u;
label_46f910:
    // 0x46f910: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x46f910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_46f914:
    // 0x46f914: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
label_46f918:
    if (ctx->pc == 0x46F918u) {
        ctx->pc = 0x46F91Cu;
        goto label_46f91c;
    }
    ctx->pc = 0x46F914u;
    {
        const bool branch_taken_0x46f914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x46f914) {
            ctx->pc = 0x46F9E8u;
            goto label_46f9e8;
        }
    }
    ctx->pc = 0x46F91Cu;
label_46f91c:
    // 0x46f91c: 0x0  nop
    ctx->pc = 0x46f91cu;
    // NOP
label_46f920:
    // 0x46f920: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
label_46f924:
    if (ctx->pc == 0x46F924u) {
        ctx->pc = 0x46F928u;
        goto label_46f928;
    }
    ctx->pc = 0x46F920u;
    {
        const bool branch_taken_0x46f920 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f920) {
            ctx->pc = 0x46F950u;
            goto label_46f950;
        }
    }
    ctx->pc = 0x46F928u;
label_46f928:
    // 0x46f928: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x46f928u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_46f92c:
    // 0x46f92c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f930:
    // 0x46f930: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x46f930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_46f934:
    // 0x46f934: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x46f934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_46f938:
    // 0x46f938: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x46f938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_46f93c:
    // 0x46f93c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x46f93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_46f940:
    // 0x46f940: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_46f944:
    if (ctx->pc == 0x46F944u) {
        ctx->pc = 0x46F948u;
        goto label_46f948;
    }
    ctx->pc = 0x46F940u;
    {
        const bool branch_taken_0x46f940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f940) {
            ctx->pc = 0x46FA10u;
            goto label_46fa10;
        }
    }
    ctx->pc = 0x46F948u;
label_46f948:
    // 0x46f948: 0x10000027  b           . + 4 + (0x27 << 2)
label_46f94c:
    if (ctx->pc == 0x46F94Cu) {
        ctx->pc = 0x46F950u;
        goto label_46f950;
    }
    ctx->pc = 0x46F948u;
    {
        const bool branch_taken_0x46f948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f948) {
            ctx->pc = 0x46F9E8u;
            goto label_46f9e8;
        }
    }
    ctx->pc = 0x46F950u;
label_46f950:
    // 0x46f950: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x46f950u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46f954:
    // 0x46f954: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x46f954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_46f958:
    // 0x46f958: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_46f95c:
    if (ctx->pc == 0x46F95Cu) {
        ctx->pc = 0x46F960u;
        goto label_46f960;
    }
    ctx->pc = 0x46F958u;
    {
        const bool branch_taken_0x46f958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46f958) {
            ctx->pc = 0x46F9E8u;
            goto label_46f9e8;
        }
    }
    ctx->pc = 0x46F960u;
label_46f960:
    // 0x46f960: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x46f960u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46f964:
    // 0x46f964: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x46f964u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46f968:
    // 0x46f968: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x46f968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46f96c:
    // 0x46f96c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x46f96cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46f970:
    // 0x46f970: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x46f970u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_46f974:
    // 0x46f974: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x46f974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_46f978:
    // 0x46f978: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x46f978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f97c:
    // 0x46f97c: 0x0  nop
    ctx->pc = 0x46f97cu;
    // NOP
label_46f980:
    // 0x46f980: 0x15400017  bnez        $t2, . + 4 + (0x17 << 2)
label_46f984:
    if (ctx->pc == 0x46F984u) {
        ctx->pc = 0x46F988u;
        goto label_46f988;
    }
    ctx->pc = 0x46F980u;
    {
        const bool branch_taken_0x46f980 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f980) {
            ctx->pc = 0x46F9E0u;
            goto label_46f9e0;
        }
    }
    ctx->pc = 0x46F988u;
label_46f988:
    // 0x46f988: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x46f988u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_46f98c:
    // 0x46f98c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x46f98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_46f990:
    // 0x46f990: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
label_46f994:
    if (ctx->pc == 0x46F994u) {
        ctx->pc = 0x46F998u;
        goto label_46f998;
    }
    ctx->pc = 0x46F990u;
    {
        const bool branch_taken_0x46f990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x46f990) {
            ctx->pc = 0x46F9A0u;
            goto label_46f9a0;
        }
    }
    ctx->pc = 0x46F998u;
label_46f998:
    // 0x46f998: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x46f998u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46f99c:
    // 0x46f99c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x46f99cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46f9a0:
    // 0x46f9a0: 0x441804  sllv        $v1, $a0, $v0
    ctx->pc = 0x46f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_46f9a4:
    // 0x46f9a4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x46f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_46f9a8:
    // 0x46f9a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x46f9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_46f9ac:
    // 0x46f9ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_46f9b0:
    if (ctx->pc == 0x46F9B0u) {
        ctx->pc = 0x46F9B4u;
        goto label_46f9b4;
    }
    ctx->pc = 0x46F9ACu;
    {
        const bool branch_taken_0x46f9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f9ac) {
            ctx->pc = 0x46F9D0u;
            goto label_46f9d0;
        }
    }
    ctx->pc = 0x46F9B4u;
label_46f9b4:
    // 0x46f9b4: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
label_46f9b8:
    if (ctx->pc == 0x46F9B8u) {
        ctx->pc = 0x46F9BCu;
        goto label_46f9bc;
    }
    ctx->pc = 0x46F9B4u;
    {
        const bool branch_taken_0x46f9b4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f9b4) {
            ctx->pc = 0x46F9C8u;
            goto label_46f9c8;
        }
    }
    ctx->pc = 0x46F9BCu;
label_46f9bc:
    // 0x46f9bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_46f9c0:
    if (ctx->pc == 0x46F9C0u) {
        ctx->pc = 0x46F9C0u;
            // 0x46f9c0: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46F9C4u;
        goto label_46f9c4;
    }
    ctx->pc = 0x46F9BCu;
    {
        const bool branch_taken_0x46f9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F9BCu;
            // 0x46f9c0: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f9bc) {
            ctx->pc = 0x46F9E0u;
            goto label_46f9e0;
        }
    }
    ctx->pc = 0x46F9C4u;
label_46f9c4:
    // 0x46f9c4: 0x0  nop
    ctx->pc = 0x46f9c4u;
    // NOP
label_46f9c8:
    // 0x46f9c8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x46f9c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_46f9cc:
    // 0x46f9cc: 0x0  nop
    ctx->pc = 0x46f9ccu;
    // NOP
label_46f9d0:
    // 0x46f9d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x46f9d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_46f9d4:
    // 0x46f9d4: 0x111102b  sltu        $v0, $t0, $s1
    ctx->pc = 0x46f9d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_46f9d8:
    // 0x46f9d8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_46f9dc:
    if (ctx->pc == 0x46F9DCu) {
        ctx->pc = 0x46F9DCu;
            // 0x46f9dc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x46F9E0u;
        goto label_46f9e0;
    }
    ctx->pc = 0x46F9D8u;
    {
        const bool branch_taken_0x46f9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46F9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F9D8u;
            // 0x46f9dc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f9d8) {
            ctx->pc = 0x46F980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46f980;
        }
    }
    ctx->pc = 0x46F9E0u;
label_46f9e0:
    // 0x46f9e0: 0x1520000b  bnez        $t1, . + 4 + (0xB << 2)
label_46f9e4:
    if (ctx->pc == 0x46F9E4u) {
        ctx->pc = 0x46F9E8u;
        goto label_46f9e8;
    }
    ctx->pc = 0x46F9E0u;
    {
        const bool branch_taken_0x46f9e0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f9e0) {
            ctx->pc = 0x46FA10u;
            goto label_46fa10;
        }
    }
    ctx->pc = 0x46F9E8u;
label_46f9e8:
    // 0x46f9e8: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x46f9e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46f9ec:
    // 0x46f9ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_46f9f0:
    if (ctx->pc == 0x46F9F0u) {
        ctx->pc = 0x46F9F4u;
        goto label_46f9f4;
    }
    ctx->pc = 0x46F9ECu;
    {
        const bool branch_taken_0x46f9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f9ec) {
            ctx->pc = 0x46FA00u;
            goto label_46fa00;
        }
    }
    ctx->pc = 0x46F9F4u;
label_46f9f4:
    // 0x46f9f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_46f9f8:
    // 0x46f9f8: 0x1000ff86  b           . + 4 + (-0x7A << 2)
label_46f9fc:
    if (ctx->pc == 0x46F9FCu) {
        ctx->pc = 0x46F9FCu;
            // 0x46f9fc: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46FA00u;
        goto label_46fa00;
    }
    ctx->pc = 0x46F9F8u;
    {
        const bool branch_taken_0x46f9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46F9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46F9F8u;
            // 0x46f9fc: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46f9f8) {
            ctx->pc = 0x46F814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46f814;
        }
    }
    ctx->pc = 0x46FA00u;
label_46fa00:
    // 0x46fa00: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x46fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_46fa04:
    // 0x46fa04: 0x1000ff83  b           . + 4 + (-0x7D << 2)
label_46fa08:
    if (ctx->pc == 0x46FA08u) {
        ctx->pc = 0x46FA08u;
            // 0x46fa08: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46FA0Cu;
        goto label_46fa0c;
    }
    ctx->pc = 0x46FA04u;
    {
        const bool branch_taken_0x46fa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46FA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FA04u;
            // 0x46fa08: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46fa04) {
            ctx->pc = 0x46F814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46f814;
        }
    }
    ctx->pc = 0x46FA0Cu;
label_46fa0c:
    // 0x46fa0c: 0x0  nop
    ctx->pc = 0x46fa0cu;
    // NOP
label_46fa10:
    // 0x46fa10: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x46fa10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46fa14:
    // 0x46fa14: 0x93a200bd  lbu         $v0, 0xBD($sp)
    ctx->pc = 0x46fa14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 189)));
label_46fa18:
    // 0x46fa18: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_46fa1c:
    if (ctx->pc == 0x46FA1Cu) {
        ctx->pc = 0x46FA1Cu;
            // 0x46fa1c: 0x92640001  lbu         $a0, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->pc = 0x46FA20u;
        goto label_46fa20;
    }
    ctx->pc = 0x46FA18u;
    {
        const bool branch_taken_0x46fa18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46fa18) {
            ctx->pc = 0x46FA1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46FA18u;
            // 0x46fa1c: 0x92640001  lbu         $a0, 0x1($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46FA30u;
            goto label_46fa30;
        }
    }
    ctx->pc = 0x46FA20u;
label_46fa20:
    // 0x46fa20: 0xc073234  jal         func_1CC8D0
label_46fa24:
    if (ctx->pc == 0x46FA24u) {
        ctx->pc = 0x46FA24u;
            // 0x46fa24: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->pc = 0x46FA28u;
        goto label_46fa28;
    }
    ctx->pc = 0x46FA20u;
    SET_GPR_U32(ctx, 31, 0x46FA28u);
    ctx->pc = 0x46FA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46FA20u;
            // 0x46fa24: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FA28u; }
        if (ctx->pc != 0x46FA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FA28u; }
        if (ctx->pc != 0x46FA28u) { return; }
    }
    ctx->pc = 0x46FA28u;
label_46fa28:
    // 0x46fa28: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x46fa28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_46fa2c:
    // 0x46fa2c: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x46fa2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46fa30:
    // 0x46fa30: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x46fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_46fa34:
    // 0x46fa34: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46fa34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46fa38:
    // 0x46fa38: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x46fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46fa3c:
    // 0x46fa3c: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x46fa3cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_46fa40:
    // 0x46fa40: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x46fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46fa44:
    // 0x46fa44: 0x0  nop
    ctx->pc = 0x46fa44u;
    // NOP
label_46fa48:
    // 0x46fa48: 0x1810  mfhi        $v1
    ctx->pc = 0x46fa48u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_46fa4c:
    // 0x46fa4c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46fa50:
    // 0x46fa50: 0x2463003b  addiu       $v1, $v1, 0x3B
    ctx->pc = 0x46fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 59));
label_46fa54:
    // 0x46fa54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x46fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_46fa58:
    // 0x46fa58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46fa5c:
    // 0x46fa5c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46fa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46fa60:
    // 0x46fa60: 0xc12512c  jal         func_4944B0
label_46fa64:
    if (ctx->pc == 0x46FA64u) {
        ctx->pc = 0x46FA64u;
            // 0x46fa64: 0x24a5f1b8  addiu       $a1, $a1, -0xE48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963640));
        ctx->pc = 0x46FA68u;
        goto label_46fa68;
    }
    ctx->pc = 0x46FA60u;
    SET_GPR_U32(ctx, 31, 0x46FA68u);
    ctx->pc = 0x46FA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46FA60u;
            // 0x46fa64: 0x24a5f1b8  addiu       $a1, $a1, -0xE48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FA68u; }
        if (ctx->pc != 0x46FA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FA68u; }
        if (ctx->pc != 0x46FA68u) { return; }
    }
    ctx->pc = 0x46FA68u;
label_46fa68:
    // 0x46fa68: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x46fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_46fa6c:
    // 0x46fa6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x46fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_46fa70:
    // 0x46fa70: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x46fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_46fa74:
    // 0x46fa74: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x46fa74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46fa78:
    // 0x46fa78: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_46fa7c:
    if (ctx->pc == 0x46FA7Cu) {
        ctx->pc = 0x46FA7Cu;
            // 0x46fa7c: 0x7ba200a0  lq          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x46FA80u;
        goto label_46fa80;
    }
    ctx->pc = 0x46FA78u;
    {
        const bool branch_taken_0x46fa78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46fa78) {
            ctx->pc = 0x46FA7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46FA78u;
            // 0x46fa7c: 0x7ba200a0  lq          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46FA88u;
            goto label_46fa88;
        }
    }
    ctx->pc = 0x46FA80u;
label_46fa80:
    // 0x46fa80: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x46fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_46fa84:
    // 0x46fa84: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x46fa84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_46fa88:
    // 0x46fa88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46fa8c:
    // 0x46fa8c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x46fa8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_46fa90:
    // 0x46fa90: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
label_46fa94:
    if (ctx->pc == 0x46FA94u) {
        ctx->pc = 0x46FA94u;
            // 0x46fa94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46FA98u;
        goto label_46fa98;
    }
    ctx->pc = 0x46FA90u;
    {
        const bool branch_taken_0x46fa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46fa90) {
            ctx->pc = 0x46FA94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46FA90u;
            // 0x46fa94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46FB48u;
            goto label_46fb48;
        }
    }
    ctx->pc = 0x46FA98u;
label_46fa98:
    // 0x46fa98: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x46fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_46fa9c:
    // 0x46fa9c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46fa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46faa0:
    // 0x46faa0: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x46faa0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_46faa4:
    // 0x46faa4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x46faa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_46faa8:
    // 0x46faa8: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x46faa8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_46faac:
    // 0x46faac: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x46faacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46fab0:
    // 0x46fab0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x46fab0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_46fab4:
    // 0x46fab4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46fab8:
    // 0x46fab8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46fabc:
    // 0x46fabc: 0x1810  mfhi        $v1
    ctx->pc = 0x46fabcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_46fac0:
    // 0x46fac0: 0x2463003b  addiu       $v1, $v1, 0x3B
    ctx->pc = 0x46fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 59));
label_46fac4:
    // 0x46fac4: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x46fac4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_46fac8:
    // 0x46fac8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46facc:
    // 0x46facc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46faccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46fad0:
    // 0x46fad0: 0xc12512c  jal         func_4944B0
label_46fad4:
    if (ctx->pc == 0x46FAD4u) {
        ctx->pc = 0x46FAD4u;
            // 0x46fad4: 0x24a5f1b0  addiu       $a1, $a1, -0xE50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963632));
        ctx->pc = 0x46FAD8u;
        goto label_46fad8;
    }
    ctx->pc = 0x46FAD0u;
    SET_GPR_U32(ctx, 31, 0x46FAD8u);
    ctx->pc = 0x46FAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46FAD0u;
            // 0x46fad4: 0x24a5f1b0  addiu       $a1, $a1, -0xE50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FAD8u; }
        if (ctx->pc != 0x46FAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FAD8u; }
        if (ctx->pc != 0x46FAD8u) { return; }
    }
    ctx->pc = 0x46FAD8u;
label_46fad8:
    // 0x46fad8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46fad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46fadc:
    // 0x46fadc: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x46fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_46fae0:
    // 0x46fae0: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x46fae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46fae4:
    // 0x46fae4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46fae8:
    // 0x46fae8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46faec:
    // 0x46faec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46faecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46faf0:
    // 0x46faf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46faf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46faf4:
    // 0x46faf4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46faf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46faf8:
    // 0x46faf8: 0x320f809  jalr        $t9
label_46fafc:
    if (ctx->pc == 0x46FAFCu) {
        ctx->pc = 0x46FB00u;
        goto label_46fb00;
    }
    ctx->pc = 0x46FAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46FB00u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46FB00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46FB00u; }
            if (ctx->pc != 0x46FB00u) { return; }
        }
        }
    }
    ctx->pc = 0x46FB00u;
label_46fb00:
    // 0x46fb00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46fb04:
    // 0x46fb04: 0xa202007c  sb          $v0, 0x7C($s0)
    ctx->pc = 0x46fb04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
label_46fb08:
    // 0x46fb08: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46fb0c:
    // 0x46fb0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46fb10:
    // 0x46fb10: 0xc123848  jal         func_48E120
label_46fb14:
    if (ctx->pc == 0x46FB14u) {
        ctx->pc = 0x46FB14u;
            // 0x46fb14: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46FB18u;
        goto label_46fb18;
    }
    ctx->pc = 0x46FB10u;
    SET_GPR_U32(ctx, 31, 0x46FB18u);
    ctx->pc = 0x46FB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46FB10u;
            // 0x46fb14: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FB18u; }
        if (ctx->pc != 0x46FB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FB18u; }
        if (ctx->pc != 0x46FB18u) { return; }
    }
    ctx->pc = 0x46FB18u;
label_46fb18:
    // 0x46fb18: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46fb1c:
    // 0x46fb1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46fb20:
    // 0x46fb20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x46fb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_46fb24:
    // 0x46fb24: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x46fb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_46fb28:
    // 0x46fb28: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46fb2c:
    // 0x46fb2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46fb30:
    // 0x46fb30: 0xc11c710  jal         func_471C40
label_46fb34:
    if (ctx->pc == 0x46FB34u) {
        ctx->pc = 0x46FB34u;
            // 0x46fb34: 0xa4430046  sh          $v1, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x46FB38u;
        goto label_46fb38;
    }
    ctx->pc = 0x46FB30u;
    SET_GPR_U32(ctx, 31, 0x46FB38u);
    ctx->pc = 0x46FB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46FB30u;
            // 0x46fb34: 0xa4430046  sh          $v1, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471C40u;
    if (runtime->hasFunction(0x471C40u)) {
        auto targetFn = runtime->lookupFunction(0x471C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FB38u; }
        if (ctx->pc != 0x46FB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471C40_0x471c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FB38u; }
        if (ctx->pc != 0x46FB38u) { return; }
    }
    ctx->pc = 0x46FB38u;
label_46fb38:
    // 0x46fb38: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x46fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_46fb3c:
    // 0x46fb3c: 0xc073234  jal         func_1CC8D0
label_46fb40:
    if (ctx->pc == 0x46FB40u) {
        ctx->pc = 0x46FB40u;
            // 0x46fb40: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x46FB44u;
        goto label_46fb44;
    }
    ctx->pc = 0x46FB3Cu;
    SET_GPR_U32(ctx, 31, 0x46FB44u);
    ctx->pc = 0x46FB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46FB3Cu;
            // 0x46fb40: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FB44u; }
        if (ctx->pc != 0x46FB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46FB44u; }
        if (ctx->pc != 0x46FB44u) { return; }
    }
    ctx->pc = 0x46FB44u;
label_46fb44:
    // 0x46fb44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46fb44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46fb48:
    // 0x46fb48: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x46fb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_46fb4c:
    // 0x46fb4c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x46fb4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_46fb50:
    // 0x46fb50: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x46fb50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46fb54:
    // 0x46fb54: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x46fb54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46fb58:
    // 0x46fb58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x46fb58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46fb5c:
    // 0x46fb5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x46fb5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46fb60:
    // 0x46fb60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46fb60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46fb64:
    // 0x46fb64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46fb64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46fb68:
    // 0x46fb68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46fb68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46fb6c:
    // 0x46fb6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46fb6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46fb70:
    // 0x46fb70: 0x3e00008  jr          $ra
label_46fb74:
    if (ctx->pc == 0x46FB74u) {
        ctx->pc = 0x46FB74u;
            // 0x46fb74: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x46FB78u;
        goto label_46fb78;
    }
    ctx->pc = 0x46FB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46FB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46FB70u;
            // 0x46fb74: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46FB78u;
label_46fb78:
    // 0x46fb78: 0x0  nop
    ctx->pc = 0x46fb78u;
    // NOP
label_46fb7c:
    // 0x46fb7c: 0x0  nop
    ctx->pc = 0x46fb7cu;
    // NOP
}
