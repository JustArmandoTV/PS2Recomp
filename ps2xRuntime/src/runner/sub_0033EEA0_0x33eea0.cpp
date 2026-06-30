#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033EEA0
// Address: 0x33eea0 - 0x33fa40
void sub_0033EEA0_0x33eea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EEA0_0x33eea0");
#endif

    switch (ctx->pc) {
        case 0x33eea0u: goto label_33eea0;
        case 0x33eea4u: goto label_33eea4;
        case 0x33eea8u: goto label_33eea8;
        case 0x33eeacu: goto label_33eeac;
        case 0x33eeb0u: goto label_33eeb0;
        case 0x33eeb4u: goto label_33eeb4;
        case 0x33eeb8u: goto label_33eeb8;
        case 0x33eebcu: goto label_33eebc;
        case 0x33eec0u: goto label_33eec0;
        case 0x33eec4u: goto label_33eec4;
        case 0x33eec8u: goto label_33eec8;
        case 0x33eeccu: goto label_33eecc;
        case 0x33eed0u: goto label_33eed0;
        case 0x33eed4u: goto label_33eed4;
        case 0x33eed8u: goto label_33eed8;
        case 0x33eedcu: goto label_33eedc;
        case 0x33eee0u: goto label_33eee0;
        case 0x33eee4u: goto label_33eee4;
        case 0x33eee8u: goto label_33eee8;
        case 0x33eeecu: goto label_33eeec;
        case 0x33eef0u: goto label_33eef0;
        case 0x33eef4u: goto label_33eef4;
        case 0x33eef8u: goto label_33eef8;
        case 0x33eefcu: goto label_33eefc;
        case 0x33ef00u: goto label_33ef00;
        case 0x33ef04u: goto label_33ef04;
        case 0x33ef08u: goto label_33ef08;
        case 0x33ef0cu: goto label_33ef0c;
        case 0x33ef10u: goto label_33ef10;
        case 0x33ef14u: goto label_33ef14;
        case 0x33ef18u: goto label_33ef18;
        case 0x33ef1cu: goto label_33ef1c;
        case 0x33ef20u: goto label_33ef20;
        case 0x33ef24u: goto label_33ef24;
        case 0x33ef28u: goto label_33ef28;
        case 0x33ef2cu: goto label_33ef2c;
        case 0x33ef30u: goto label_33ef30;
        case 0x33ef34u: goto label_33ef34;
        case 0x33ef38u: goto label_33ef38;
        case 0x33ef3cu: goto label_33ef3c;
        case 0x33ef40u: goto label_33ef40;
        case 0x33ef44u: goto label_33ef44;
        case 0x33ef48u: goto label_33ef48;
        case 0x33ef4cu: goto label_33ef4c;
        case 0x33ef50u: goto label_33ef50;
        case 0x33ef54u: goto label_33ef54;
        case 0x33ef58u: goto label_33ef58;
        case 0x33ef5cu: goto label_33ef5c;
        case 0x33ef60u: goto label_33ef60;
        case 0x33ef64u: goto label_33ef64;
        case 0x33ef68u: goto label_33ef68;
        case 0x33ef6cu: goto label_33ef6c;
        case 0x33ef70u: goto label_33ef70;
        case 0x33ef74u: goto label_33ef74;
        case 0x33ef78u: goto label_33ef78;
        case 0x33ef7cu: goto label_33ef7c;
        case 0x33ef80u: goto label_33ef80;
        case 0x33ef84u: goto label_33ef84;
        case 0x33ef88u: goto label_33ef88;
        case 0x33ef8cu: goto label_33ef8c;
        case 0x33ef90u: goto label_33ef90;
        case 0x33ef94u: goto label_33ef94;
        case 0x33ef98u: goto label_33ef98;
        case 0x33ef9cu: goto label_33ef9c;
        case 0x33efa0u: goto label_33efa0;
        case 0x33efa4u: goto label_33efa4;
        case 0x33efa8u: goto label_33efa8;
        case 0x33efacu: goto label_33efac;
        case 0x33efb0u: goto label_33efb0;
        case 0x33efb4u: goto label_33efb4;
        case 0x33efb8u: goto label_33efb8;
        case 0x33efbcu: goto label_33efbc;
        case 0x33efc0u: goto label_33efc0;
        case 0x33efc4u: goto label_33efc4;
        case 0x33efc8u: goto label_33efc8;
        case 0x33efccu: goto label_33efcc;
        case 0x33efd0u: goto label_33efd0;
        case 0x33efd4u: goto label_33efd4;
        case 0x33efd8u: goto label_33efd8;
        case 0x33efdcu: goto label_33efdc;
        case 0x33efe0u: goto label_33efe0;
        case 0x33efe4u: goto label_33efe4;
        case 0x33efe8u: goto label_33efe8;
        case 0x33efecu: goto label_33efec;
        case 0x33eff0u: goto label_33eff0;
        case 0x33eff4u: goto label_33eff4;
        case 0x33eff8u: goto label_33eff8;
        case 0x33effcu: goto label_33effc;
        case 0x33f000u: goto label_33f000;
        case 0x33f004u: goto label_33f004;
        case 0x33f008u: goto label_33f008;
        case 0x33f00cu: goto label_33f00c;
        case 0x33f010u: goto label_33f010;
        case 0x33f014u: goto label_33f014;
        case 0x33f018u: goto label_33f018;
        case 0x33f01cu: goto label_33f01c;
        case 0x33f020u: goto label_33f020;
        case 0x33f024u: goto label_33f024;
        case 0x33f028u: goto label_33f028;
        case 0x33f02cu: goto label_33f02c;
        case 0x33f030u: goto label_33f030;
        case 0x33f034u: goto label_33f034;
        case 0x33f038u: goto label_33f038;
        case 0x33f03cu: goto label_33f03c;
        case 0x33f040u: goto label_33f040;
        case 0x33f044u: goto label_33f044;
        case 0x33f048u: goto label_33f048;
        case 0x33f04cu: goto label_33f04c;
        case 0x33f050u: goto label_33f050;
        case 0x33f054u: goto label_33f054;
        case 0x33f058u: goto label_33f058;
        case 0x33f05cu: goto label_33f05c;
        case 0x33f060u: goto label_33f060;
        case 0x33f064u: goto label_33f064;
        case 0x33f068u: goto label_33f068;
        case 0x33f06cu: goto label_33f06c;
        case 0x33f070u: goto label_33f070;
        case 0x33f074u: goto label_33f074;
        case 0x33f078u: goto label_33f078;
        case 0x33f07cu: goto label_33f07c;
        case 0x33f080u: goto label_33f080;
        case 0x33f084u: goto label_33f084;
        case 0x33f088u: goto label_33f088;
        case 0x33f08cu: goto label_33f08c;
        case 0x33f090u: goto label_33f090;
        case 0x33f094u: goto label_33f094;
        case 0x33f098u: goto label_33f098;
        case 0x33f09cu: goto label_33f09c;
        case 0x33f0a0u: goto label_33f0a0;
        case 0x33f0a4u: goto label_33f0a4;
        case 0x33f0a8u: goto label_33f0a8;
        case 0x33f0acu: goto label_33f0ac;
        case 0x33f0b0u: goto label_33f0b0;
        case 0x33f0b4u: goto label_33f0b4;
        case 0x33f0b8u: goto label_33f0b8;
        case 0x33f0bcu: goto label_33f0bc;
        case 0x33f0c0u: goto label_33f0c0;
        case 0x33f0c4u: goto label_33f0c4;
        case 0x33f0c8u: goto label_33f0c8;
        case 0x33f0ccu: goto label_33f0cc;
        case 0x33f0d0u: goto label_33f0d0;
        case 0x33f0d4u: goto label_33f0d4;
        case 0x33f0d8u: goto label_33f0d8;
        case 0x33f0dcu: goto label_33f0dc;
        case 0x33f0e0u: goto label_33f0e0;
        case 0x33f0e4u: goto label_33f0e4;
        case 0x33f0e8u: goto label_33f0e8;
        case 0x33f0ecu: goto label_33f0ec;
        case 0x33f0f0u: goto label_33f0f0;
        case 0x33f0f4u: goto label_33f0f4;
        case 0x33f0f8u: goto label_33f0f8;
        case 0x33f0fcu: goto label_33f0fc;
        case 0x33f100u: goto label_33f100;
        case 0x33f104u: goto label_33f104;
        case 0x33f108u: goto label_33f108;
        case 0x33f10cu: goto label_33f10c;
        case 0x33f110u: goto label_33f110;
        case 0x33f114u: goto label_33f114;
        case 0x33f118u: goto label_33f118;
        case 0x33f11cu: goto label_33f11c;
        case 0x33f120u: goto label_33f120;
        case 0x33f124u: goto label_33f124;
        case 0x33f128u: goto label_33f128;
        case 0x33f12cu: goto label_33f12c;
        case 0x33f130u: goto label_33f130;
        case 0x33f134u: goto label_33f134;
        case 0x33f138u: goto label_33f138;
        case 0x33f13cu: goto label_33f13c;
        case 0x33f140u: goto label_33f140;
        case 0x33f144u: goto label_33f144;
        case 0x33f148u: goto label_33f148;
        case 0x33f14cu: goto label_33f14c;
        case 0x33f150u: goto label_33f150;
        case 0x33f154u: goto label_33f154;
        case 0x33f158u: goto label_33f158;
        case 0x33f15cu: goto label_33f15c;
        case 0x33f160u: goto label_33f160;
        case 0x33f164u: goto label_33f164;
        case 0x33f168u: goto label_33f168;
        case 0x33f16cu: goto label_33f16c;
        case 0x33f170u: goto label_33f170;
        case 0x33f174u: goto label_33f174;
        case 0x33f178u: goto label_33f178;
        case 0x33f17cu: goto label_33f17c;
        case 0x33f180u: goto label_33f180;
        case 0x33f184u: goto label_33f184;
        case 0x33f188u: goto label_33f188;
        case 0x33f18cu: goto label_33f18c;
        case 0x33f190u: goto label_33f190;
        case 0x33f194u: goto label_33f194;
        case 0x33f198u: goto label_33f198;
        case 0x33f19cu: goto label_33f19c;
        case 0x33f1a0u: goto label_33f1a0;
        case 0x33f1a4u: goto label_33f1a4;
        case 0x33f1a8u: goto label_33f1a8;
        case 0x33f1acu: goto label_33f1ac;
        case 0x33f1b0u: goto label_33f1b0;
        case 0x33f1b4u: goto label_33f1b4;
        case 0x33f1b8u: goto label_33f1b8;
        case 0x33f1bcu: goto label_33f1bc;
        case 0x33f1c0u: goto label_33f1c0;
        case 0x33f1c4u: goto label_33f1c4;
        case 0x33f1c8u: goto label_33f1c8;
        case 0x33f1ccu: goto label_33f1cc;
        case 0x33f1d0u: goto label_33f1d0;
        case 0x33f1d4u: goto label_33f1d4;
        case 0x33f1d8u: goto label_33f1d8;
        case 0x33f1dcu: goto label_33f1dc;
        case 0x33f1e0u: goto label_33f1e0;
        case 0x33f1e4u: goto label_33f1e4;
        case 0x33f1e8u: goto label_33f1e8;
        case 0x33f1ecu: goto label_33f1ec;
        case 0x33f1f0u: goto label_33f1f0;
        case 0x33f1f4u: goto label_33f1f4;
        case 0x33f1f8u: goto label_33f1f8;
        case 0x33f1fcu: goto label_33f1fc;
        case 0x33f200u: goto label_33f200;
        case 0x33f204u: goto label_33f204;
        case 0x33f208u: goto label_33f208;
        case 0x33f20cu: goto label_33f20c;
        case 0x33f210u: goto label_33f210;
        case 0x33f214u: goto label_33f214;
        case 0x33f218u: goto label_33f218;
        case 0x33f21cu: goto label_33f21c;
        case 0x33f220u: goto label_33f220;
        case 0x33f224u: goto label_33f224;
        case 0x33f228u: goto label_33f228;
        case 0x33f22cu: goto label_33f22c;
        case 0x33f230u: goto label_33f230;
        case 0x33f234u: goto label_33f234;
        case 0x33f238u: goto label_33f238;
        case 0x33f23cu: goto label_33f23c;
        case 0x33f240u: goto label_33f240;
        case 0x33f244u: goto label_33f244;
        case 0x33f248u: goto label_33f248;
        case 0x33f24cu: goto label_33f24c;
        case 0x33f250u: goto label_33f250;
        case 0x33f254u: goto label_33f254;
        case 0x33f258u: goto label_33f258;
        case 0x33f25cu: goto label_33f25c;
        case 0x33f260u: goto label_33f260;
        case 0x33f264u: goto label_33f264;
        case 0x33f268u: goto label_33f268;
        case 0x33f26cu: goto label_33f26c;
        case 0x33f270u: goto label_33f270;
        case 0x33f274u: goto label_33f274;
        case 0x33f278u: goto label_33f278;
        case 0x33f27cu: goto label_33f27c;
        case 0x33f280u: goto label_33f280;
        case 0x33f284u: goto label_33f284;
        case 0x33f288u: goto label_33f288;
        case 0x33f28cu: goto label_33f28c;
        case 0x33f290u: goto label_33f290;
        case 0x33f294u: goto label_33f294;
        case 0x33f298u: goto label_33f298;
        case 0x33f29cu: goto label_33f29c;
        case 0x33f2a0u: goto label_33f2a0;
        case 0x33f2a4u: goto label_33f2a4;
        case 0x33f2a8u: goto label_33f2a8;
        case 0x33f2acu: goto label_33f2ac;
        case 0x33f2b0u: goto label_33f2b0;
        case 0x33f2b4u: goto label_33f2b4;
        case 0x33f2b8u: goto label_33f2b8;
        case 0x33f2bcu: goto label_33f2bc;
        case 0x33f2c0u: goto label_33f2c0;
        case 0x33f2c4u: goto label_33f2c4;
        case 0x33f2c8u: goto label_33f2c8;
        case 0x33f2ccu: goto label_33f2cc;
        case 0x33f2d0u: goto label_33f2d0;
        case 0x33f2d4u: goto label_33f2d4;
        case 0x33f2d8u: goto label_33f2d8;
        case 0x33f2dcu: goto label_33f2dc;
        case 0x33f2e0u: goto label_33f2e0;
        case 0x33f2e4u: goto label_33f2e4;
        case 0x33f2e8u: goto label_33f2e8;
        case 0x33f2ecu: goto label_33f2ec;
        case 0x33f2f0u: goto label_33f2f0;
        case 0x33f2f4u: goto label_33f2f4;
        case 0x33f2f8u: goto label_33f2f8;
        case 0x33f2fcu: goto label_33f2fc;
        case 0x33f300u: goto label_33f300;
        case 0x33f304u: goto label_33f304;
        case 0x33f308u: goto label_33f308;
        case 0x33f30cu: goto label_33f30c;
        case 0x33f310u: goto label_33f310;
        case 0x33f314u: goto label_33f314;
        case 0x33f318u: goto label_33f318;
        case 0x33f31cu: goto label_33f31c;
        case 0x33f320u: goto label_33f320;
        case 0x33f324u: goto label_33f324;
        case 0x33f328u: goto label_33f328;
        case 0x33f32cu: goto label_33f32c;
        case 0x33f330u: goto label_33f330;
        case 0x33f334u: goto label_33f334;
        case 0x33f338u: goto label_33f338;
        case 0x33f33cu: goto label_33f33c;
        case 0x33f340u: goto label_33f340;
        case 0x33f344u: goto label_33f344;
        case 0x33f348u: goto label_33f348;
        case 0x33f34cu: goto label_33f34c;
        case 0x33f350u: goto label_33f350;
        case 0x33f354u: goto label_33f354;
        case 0x33f358u: goto label_33f358;
        case 0x33f35cu: goto label_33f35c;
        case 0x33f360u: goto label_33f360;
        case 0x33f364u: goto label_33f364;
        case 0x33f368u: goto label_33f368;
        case 0x33f36cu: goto label_33f36c;
        case 0x33f370u: goto label_33f370;
        case 0x33f374u: goto label_33f374;
        case 0x33f378u: goto label_33f378;
        case 0x33f37cu: goto label_33f37c;
        case 0x33f380u: goto label_33f380;
        case 0x33f384u: goto label_33f384;
        case 0x33f388u: goto label_33f388;
        case 0x33f38cu: goto label_33f38c;
        case 0x33f390u: goto label_33f390;
        case 0x33f394u: goto label_33f394;
        case 0x33f398u: goto label_33f398;
        case 0x33f39cu: goto label_33f39c;
        case 0x33f3a0u: goto label_33f3a0;
        case 0x33f3a4u: goto label_33f3a4;
        case 0x33f3a8u: goto label_33f3a8;
        case 0x33f3acu: goto label_33f3ac;
        case 0x33f3b0u: goto label_33f3b0;
        case 0x33f3b4u: goto label_33f3b4;
        case 0x33f3b8u: goto label_33f3b8;
        case 0x33f3bcu: goto label_33f3bc;
        case 0x33f3c0u: goto label_33f3c0;
        case 0x33f3c4u: goto label_33f3c4;
        case 0x33f3c8u: goto label_33f3c8;
        case 0x33f3ccu: goto label_33f3cc;
        case 0x33f3d0u: goto label_33f3d0;
        case 0x33f3d4u: goto label_33f3d4;
        case 0x33f3d8u: goto label_33f3d8;
        case 0x33f3dcu: goto label_33f3dc;
        case 0x33f3e0u: goto label_33f3e0;
        case 0x33f3e4u: goto label_33f3e4;
        case 0x33f3e8u: goto label_33f3e8;
        case 0x33f3ecu: goto label_33f3ec;
        case 0x33f3f0u: goto label_33f3f0;
        case 0x33f3f4u: goto label_33f3f4;
        case 0x33f3f8u: goto label_33f3f8;
        case 0x33f3fcu: goto label_33f3fc;
        case 0x33f400u: goto label_33f400;
        case 0x33f404u: goto label_33f404;
        case 0x33f408u: goto label_33f408;
        case 0x33f40cu: goto label_33f40c;
        case 0x33f410u: goto label_33f410;
        case 0x33f414u: goto label_33f414;
        case 0x33f418u: goto label_33f418;
        case 0x33f41cu: goto label_33f41c;
        case 0x33f420u: goto label_33f420;
        case 0x33f424u: goto label_33f424;
        case 0x33f428u: goto label_33f428;
        case 0x33f42cu: goto label_33f42c;
        case 0x33f430u: goto label_33f430;
        case 0x33f434u: goto label_33f434;
        case 0x33f438u: goto label_33f438;
        case 0x33f43cu: goto label_33f43c;
        case 0x33f440u: goto label_33f440;
        case 0x33f444u: goto label_33f444;
        case 0x33f448u: goto label_33f448;
        case 0x33f44cu: goto label_33f44c;
        case 0x33f450u: goto label_33f450;
        case 0x33f454u: goto label_33f454;
        case 0x33f458u: goto label_33f458;
        case 0x33f45cu: goto label_33f45c;
        case 0x33f460u: goto label_33f460;
        case 0x33f464u: goto label_33f464;
        case 0x33f468u: goto label_33f468;
        case 0x33f46cu: goto label_33f46c;
        case 0x33f470u: goto label_33f470;
        case 0x33f474u: goto label_33f474;
        case 0x33f478u: goto label_33f478;
        case 0x33f47cu: goto label_33f47c;
        case 0x33f480u: goto label_33f480;
        case 0x33f484u: goto label_33f484;
        case 0x33f488u: goto label_33f488;
        case 0x33f48cu: goto label_33f48c;
        case 0x33f490u: goto label_33f490;
        case 0x33f494u: goto label_33f494;
        case 0x33f498u: goto label_33f498;
        case 0x33f49cu: goto label_33f49c;
        case 0x33f4a0u: goto label_33f4a0;
        case 0x33f4a4u: goto label_33f4a4;
        case 0x33f4a8u: goto label_33f4a8;
        case 0x33f4acu: goto label_33f4ac;
        case 0x33f4b0u: goto label_33f4b0;
        case 0x33f4b4u: goto label_33f4b4;
        case 0x33f4b8u: goto label_33f4b8;
        case 0x33f4bcu: goto label_33f4bc;
        case 0x33f4c0u: goto label_33f4c0;
        case 0x33f4c4u: goto label_33f4c4;
        case 0x33f4c8u: goto label_33f4c8;
        case 0x33f4ccu: goto label_33f4cc;
        case 0x33f4d0u: goto label_33f4d0;
        case 0x33f4d4u: goto label_33f4d4;
        case 0x33f4d8u: goto label_33f4d8;
        case 0x33f4dcu: goto label_33f4dc;
        case 0x33f4e0u: goto label_33f4e0;
        case 0x33f4e4u: goto label_33f4e4;
        case 0x33f4e8u: goto label_33f4e8;
        case 0x33f4ecu: goto label_33f4ec;
        case 0x33f4f0u: goto label_33f4f0;
        case 0x33f4f4u: goto label_33f4f4;
        case 0x33f4f8u: goto label_33f4f8;
        case 0x33f4fcu: goto label_33f4fc;
        case 0x33f500u: goto label_33f500;
        case 0x33f504u: goto label_33f504;
        case 0x33f508u: goto label_33f508;
        case 0x33f50cu: goto label_33f50c;
        case 0x33f510u: goto label_33f510;
        case 0x33f514u: goto label_33f514;
        case 0x33f518u: goto label_33f518;
        case 0x33f51cu: goto label_33f51c;
        case 0x33f520u: goto label_33f520;
        case 0x33f524u: goto label_33f524;
        case 0x33f528u: goto label_33f528;
        case 0x33f52cu: goto label_33f52c;
        case 0x33f530u: goto label_33f530;
        case 0x33f534u: goto label_33f534;
        case 0x33f538u: goto label_33f538;
        case 0x33f53cu: goto label_33f53c;
        case 0x33f540u: goto label_33f540;
        case 0x33f544u: goto label_33f544;
        case 0x33f548u: goto label_33f548;
        case 0x33f54cu: goto label_33f54c;
        case 0x33f550u: goto label_33f550;
        case 0x33f554u: goto label_33f554;
        case 0x33f558u: goto label_33f558;
        case 0x33f55cu: goto label_33f55c;
        case 0x33f560u: goto label_33f560;
        case 0x33f564u: goto label_33f564;
        case 0x33f568u: goto label_33f568;
        case 0x33f56cu: goto label_33f56c;
        case 0x33f570u: goto label_33f570;
        case 0x33f574u: goto label_33f574;
        case 0x33f578u: goto label_33f578;
        case 0x33f57cu: goto label_33f57c;
        case 0x33f580u: goto label_33f580;
        case 0x33f584u: goto label_33f584;
        case 0x33f588u: goto label_33f588;
        case 0x33f58cu: goto label_33f58c;
        case 0x33f590u: goto label_33f590;
        case 0x33f594u: goto label_33f594;
        case 0x33f598u: goto label_33f598;
        case 0x33f59cu: goto label_33f59c;
        case 0x33f5a0u: goto label_33f5a0;
        case 0x33f5a4u: goto label_33f5a4;
        case 0x33f5a8u: goto label_33f5a8;
        case 0x33f5acu: goto label_33f5ac;
        case 0x33f5b0u: goto label_33f5b0;
        case 0x33f5b4u: goto label_33f5b4;
        case 0x33f5b8u: goto label_33f5b8;
        case 0x33f5bcu: goto label_33f5bc;
        case 0x33f5c0u: goto label_33f5c0;
        case 0x33f5c4u: goto label_33f5c4;
        case 0x33f5c8u: goto label_33f5c8;
        case 0x33f5ccu: goto label_33f5cc;
        case 0x33f5d0u: goto label_33f5d0;
        case 0x33f5d4u: goto label_33f5d4;
        case 0x33f5d8u: goto label_33f5d8;
        case 0x33f5dcu: goto label_33f5dc;
        case 0x33f5e0u: goto label_33f5e0;
        case 0x33f5e4u: goto label_33f5e4;
        case 0x33f5e8u: goto label_33f5e8;
        case 0x33f5ecu: goto label_33f5ec;
        case 0x33f5f0u: goto label_33f5f0;
        case 0x33f5f4u: goto label_33f5f4;
        case 0x33f5f8u: goto label_33f5f8;
        case 0x33f5fcu: goto label_33f5fc;
        case 0x33f600u: goto label_33f600;
        case 0x33f604u: goto label_33f604;
        case 0x33f608u: goto label_33f608;
        case 0x33f60cu: goto label_33f60c;
        case 0x33f610u: goto label_33f610;
        case 0x33f614u: goto label_33f614;
        case 0x33f618u: goto label_33f618;
        case 0x33f61cu: goto label_33f61c;
        case 0x33f620u: goto label_33f620;
        case 0x33f624u: goto label_33f624;
        case 0x33f628u: goto label_33f628;
        case 0x33f62cu: goto label_33f62c;
        case 0x33f630u: goto label_33f630;
        case 0x33f634u: goto label_33f634;
        case 0x33f638u: goto label_33f638;
        case 0x33f63cu: goto label_33f63c;
        case 0x33f640u: goto label_33f640;
        case 0x33f644u: goto label_33f644;
        case 0x33f648u: goto label_33f648;
        case 0x33f64cu: goto label_33f64c;
        case 0x33f650u: goto label_33f650;
        case 0x33f654u: goto label_33f654;
        case 0x33f658u: goto label_33f658;
        case 0x33f65cu: goto label_33f65c;
        case 0x33f660u: goto label_33f660;
        case 0x33f664u: goto label_33f664;
        case 0x33f668u: goto label_33f668;
        case 0x33f66cu: goto label_33f66c;
        case 0x33f670u: goto label_33f670;
        case 0x33f674u: goto label_33f674;
        case 0x33f678u: goto label_33f678;
        case 0x33f67cu: goto label_33f67c;
        case 0x33f680u: goto label_33f680;
        case 0x33f684u: goto label_33f684;
        case 0x33f688u: goto label_33f688;
        case 0x33f68cu: goto label_33f68c;
        case 0x33f690u: goto label_33f690;
        case 0x33f694u: goto label_33f694;
        case 0x33f698u: goto label_33f698;
        case 0x33f69cu: goto label_33f69c;
        case 0x33f6a0u: goto label_33f6a0;
        case 0x33f6a4u: goto label_33f6a4;
        case 0x33f6a8u: goto label_33f6a8;
        case 0x33f6acu: goto label_33f6ac;
        case 0x33f6b0u: goto label_33f6b0;
        case 0x33f6b4u: goto label_33f6b4;
        case 0x33f6b8u: goto label_33f6b8;
        case 0x33f6bcu: goto label_33f6bc;
        case 0x33f6c0u: goto label_33f6c0;
        case 0x33f6c4u: goto label_33f6c4;
        case 0x33f6c8u: goto label_33f6c8;
        case 0x33f6ccu: goto label_33f6cc;
        case 0x33f6d0u: goto label_33f6d0;
        case 0x33f6d4u: goto label_33f6d4;
        case 0x33f6d8u: goto label_33f6d8;
        case 0x33f6dcu: goto label_33f6dc;
        case 0x33f6e0u: goto label_33f6e0;
        case 0x33f6e4u: goto label_33f6e4;
        case 0x33f6e8u: goto label_33f6e8;
        case 0x33f6ecu: goto label_33f6ec;
        case 0x33f6f0u: goto label_33f6f0;
        case 0x33f6f4u: goto label_33f6f4;
        case 0x33f6f8u: goto label_33f6f8;
        case 0x33f6fcu: goto label_33f6fc;
        case 0x33f700u: goto label_33f700;
        case 0x33f704u: goto label_33f704;
        case 0x33f708u: goto label_33f708;
        case 0x33f70cu: goto label_33f70c;
        case 0x33f710u: goto label_33f710;
        case 0x33f714u: goto label_33f714;
        case 0x33f718u: goto label_33f718;
        case 0x33f71cu: goto label_33f71c;
        case 0x33f720u: goto label_33f720;
        case 0x33f724u: goto label_33f724;
        case 0x33f728u: goto label_33f728;
        case 0x33f72cu: goto label_33f72c;
        case 0x33f730u: goto label_33f730;
        case 0x33f734u: goto label_33f734;
        case 0x33f738u: goto label_33f738;
        case 0x33f73cu: goto label_33f73c;
        case 0x33f740u: goto label_33f740;
        case 0x33f744u: goto label_33f744;
        case 0x33f748u: goto label_33f748;
        case 0x33f74cu: goto label_33f74c;
        case 0x33f750u: goto label_33f750;
        case 0x33f754u: goto label_33f754;
        case 0x33f758u: goto label_33f758;
        case 0x33f75cu: goto label_33f75c;
        case 0x33f760u: goto label_33f760;
        case 0x33f764u: goto label_33f764;
        case 0x33f768u: goto label_33f768;
        case 0x33f76cu: goto label_33f76c;
        case 0x33f770u: goto label_33f770;
        case 0x33f774u: goto label_33f774;
        case 0x33f778u: goto label_33f778;
        case 0x33f77cu: goto label_33f77c;
        case 0x33f780u: goto label_33f780;
        case 0x33f784u: goto label_33f784;
        case 0x33f788u: goto label_33f788;
        case 0x33f78cu: goto label_33f78c;
        case 0x33f790u: goto label_33f790;
        case 0x33f794u: goto label_33f794;
        case 0x33f798u: goto label_33f798;
        case 0x33f79cu: goto label_33f79c;
        case 0x33f7a0u: goto label_33f7a0;
        case 0x33f7a4u: goto label_33f7a4;
        case 0x33f7a8u: goto label_33f7a8;
        case 0x33f7acu: goto label_33f7ac;
        case 0x33f7b0u: goto label_33f7b0;
        case 0x33f7b4u: goto label_33f7b4;
        case 0x33f7b8u: goto label_33f7b8;
        case 0x33f7bcu: goto label_33f7bc;
        case 0x33f7c0u: goto label_33f7c0;
        case 0x33f7c4u: goto label_33f7c4;
        case 0x33f7c8u: goto label_33f7c8;
        case 0x33f7ccu: goto label_33f7cc;
        case 0x33f7d0u: goto label_33f7d0;
        case 0x33f7d4u: goto label_33f7d4;
        case 0x33f7d8u: goto label_33f7d8;
        case 0x33f7dcu: goto label_33f7dc;
        case 0x33f7e0u: goto label_33f7e0;
        case 0x33f7e4u: goto label_33f7e4;
        case 0x33f7e8u: goto label_33f7e8;
        case 0x33f7ecu: goto label_33f7ec;
        case 0x33f7f0u: goto label_33f7f0;
        case 0x33f7f4u: goto label_33f7f4;
        case 0x33f7f8u: goto label_33f7f8;
        case 0x33f7fcu: goto label_33f7fc;
        case 0x33f800u: goto label_33f800;
        case 0x33f804u: goto label_33f804;
        case 0x33f808u: goto label_33f808;
        case 0x33f80cu: goto label_33f80c;
        case 0x33f810u: goto label_33f810;
        case 0x33f814u: goto label_33f814;
        case 0x33f818u: goto label_33f818;
        case 0x33f81cu: goto label_33f81c;
        case 0x33f820u: goto label_33f820;
        case 0x33f824u: goto label_33f824;
        case 0x33f828u: goto label_33f828;
        case 0x33f82cu: goto label_33f82c;
        case 0x33f830u: goto label_33f830;
        case 0x33f834u: goto label_33f834;
        case 0x33f838u: goto label_33f838;
        case 0x33f83cu: goto label_33f83c;
        case 0x33f840u: goto label_33f840;
        case 0x33f844u: goto label_33f844;
        case 0x33f848u: goto label_33f848;
        case 0x33f84cu: goto label_33f84c;
        case 0x33f850u: goto label_33f850;
        case 0x33f854u: goto label_33f854;
        case 0x33f858u: goto label_33f858;
        case 0x33f85cu: goto label_33f85c;
        case 0x33f860u: goto label_33f860;
        case 0x33f864u: goto label_33f864;
        case 0x33f868u: goto label_33f868;
        case 0x33f86cu: goto label_33f86c;
        case 0x33f870u: goto label_33f870;
        case 0x33f874u: goto label_33f874;
        case 0x33f878u: goto label_33f878;
        case 0x33f87cu: goto label_33f87c;
        case 0x33f880u: goto label_33f880;
        case 0x33f884u: goto label_33f884;
        case 0x33f888u: goto label_33f888;
        case 0x33f88cu: goto label_33f88c;
        case 0x33f890u: goto label_33f890;
        case 0x33f894u: goto label_33f894;
        case 0x33f898u: goto label_33f898;
        case 0x33f89cu: goto label_33f89c;
        case 0x33f8a0u: goto label_33f8a0;
        case 0x33f8a4u: goto label_33f8a4;
        case 0x33f8a8u: goto label_33f8a8;
        case 0x33f8acu: goto label_33f8ac;
        case 0x33f8b0u: goto label_33f8b0;
        case 0x33f8b4u: goto label_33f8b4;
        case 0x33f8b8u: goto label_33f8b8;
        case 0x33f8bcu: goto label_33f8bc;
        case 0x33f8c0u: goto label_33f8c0;
        case 0x33f8c4u: goto label_33f8c4;
        case 0x33f8c8u: goto label_33f8c8;
        case 0x33f8ccu: goto label_33f8cc;
        case 0x33f8d0u: goto label_33f8d0;
        case 0x33f8d4u: goto label_33f8d4;
        case 0x33f8d8u: goto label_33f8d8;
        case 0x33f8dcu: goto label_33f8dc;
        case 0x33f8e0u: goto label_33f8e0;
        case 0x33f8e4u: goto label_33f8e4;
        case 0x33f8e8u: goto label_33f8e8;
        case 0x33f8ecu: goto label_33f8ec;
        case 0x33f8f0u: goto label_33f8f0;
        case 0x33f8f4u: goto label_33f8f4;
        case 0x33f8f8u: goto label_33f8f8;
        case 0x33f8fcu: goto label_33f8fc;
        case 0x33f900u: goto label_33f900;
        case 0x33f904u: goto label_33f904;
        case 0x33f908u: goto label_33f908;
        case 0x33f90cu: goto label_33f90c;
        case 0x33f910u: goto label_33f910;
        case 0x33f914u: goto label_33f914;
        case 0x33f918u: goto label_33f918;
        case 0x33f91cu: goto label_33f91c;
        case 0x33f920u: goto label_33f920;
        case 0x33f924u: goto label_33f924;
        case 0x33f928u: goto label_33f928;
        case 0x33f92cu: goto label_33f92c;
        case 0x33f930u: goto label_33f930;
        case 0x33f934u: goto label_33f934;
        case 0x33f938u: goto label_33f938;
        case 0x33f93cu: goto label_33f93c;
        case 0x33f940u: goto label_33f940;
        case 0x33f944u: goto label_33f944;
        case 0x33f948u: goto label_33f948;
        case 0x33f94cu: goto label_33f94c;
        case 0x33f950u: goto label_33f950;
        case 0x33f954u: goto label_33f954;
        case 0x33f958u: goto label_33f958;
        case 0x33f95cu: goto label_33f95c;
        case 0x33f960u: goto label_33f960;
        case 0x33f964u: goto label_33f964;
        case 0x33f968u: goto label_33f968;
        case 0x33f96cu: goto label_33f96c;
        case 0x33f970u: goto label_33f970;
        case 0x33f974u: goto label_33f974;
        case 0x33f978u: goto label_33f978;
        case 0x33f97cu: goto label_33f97c;
        case 0x33f980u: goto label_33f980;
        case 0x33f984u: goto label_33f984;
        case 0x33f988u: goto label_33f988;
        case 0x33f98cu: goto label_33f98c;
        case 0x33f990u: goto label_33f990;
        case 0x33f994u: goto label_33f994;
        case 0x33f998u: goto label_33f998;
        case 0x33f99cu: goto label_33f99c;
        case 0x33f9a0u: goto label_33f9a0;
        case 0x33f9a4u: goto label_33f9a4;
        case 0x33f9a8u: goto label_33f9a8;
        case 0x33f9acu: goto label_33f9ac;
        case 0x33f9b0u: goto label_33f9b0;
        case 0x33f9b4u: goto label_33f9b4;
        case 0x33f9b8u: goto label_33f9b8;
        case 0x33f9bcu: goto label_33f9bc;
        case 0x33f9c0u: goto label_33f9c0;
        case 0x33f9c4u: goto label_33f9c4;
        case 0x33f9c8u: goto label_33f9c8;
        case 0x33f9ccu: goto label_33f9cc;
        case 0x33f9d0u: goto label_33f9d0;
        case 0x33f9d4u: goto label_33f9d4;
        case 0x33f9d8u: goto label_33f9d8;
        case 0x33f9dcu: goto label_33f9dc;
        case 0x33f9e0u: goto label_33f9e0;
        case 0x33f9e4u: goto label_33f9e4;
        case 0x33f9e8u: goto label_33f9e8;
        case 0x33f9ecu: goto label_33f9ec;
        case 0x33f9f0u: goto label_33f9f0;
        case 0x33f9f4u: goto label_33f9f4;
        case 0x33f9f8u: goto label_33f9f8;
        case 0x33f9fcu: goto label_33f9fc;
        case 0x33fa00u: goto label_33fa00;
        case 0x33fa04u: goto label_33fa04;
        case 0x33fa08u: goto label_33fa08;
        case 0x33fa0cu: goto label_33fa0c;
        case 0x33fa10u: goto label_33fa10;
        case 0x33fa14u: goto label_33fa14;
        case 0x33fa18u: goto label_33fa18;
        case 0x33fa1cu: goto label_33fa1c;
        case 0x33fa20u: goto label_33fa20;
        case 0x33fa24u: goto label_33fa24;
        case 0x33fa28u: goto label_33fa28;
        case 0x33fa2cu: goto label_33fa2c;
        case 0x33fa30u: goto label_33fa30;
        case 0x33fa34u: goto label_33fa34;
        case 0x33fa38u: goto label_33fa38;
        case 0x33fa3cu: goto label_33fa3c;
        default: break;
    }

    ctx->pc = 0x33eea0u;

label_33eea0:
    // 0x33eea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33eea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_33eea4:
    // 0x33eea4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33eea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33eea8:
    // 0x33eea8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33eea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_33eeac:
    // 0x33eeac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33eeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_33eeb0:
    // 0x33eeb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33eeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33eeb4:
    // 0x33eeb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33eeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33eeb8:
    // 0x33eeb8: 0x8c830cb4  lw          $v1, 0xCB4($a0)
    ctx->pc = 0x33eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3252)));
label_33eebc:
    // 0x33eebc: 0xac830cb8  sw          $v1, 0xCB8($a0)
    ctx->pc = 0x33eebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3256), GPR_U32(ctx, 3));
label_33eec0:
    // 0x33eec0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x33eec0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_33eec4:
    // 0x33eec4: 0x10a60235  beq         $a1, $a2, . + 4 + (0x235 << 2)
label_33eec8:
    if (ctx->pc == 0x33EEC8u) {
        ctx->pc = 0x33EEC8u;
            // 0x33eec8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33EECCu;
        goto label_33eecc;
    }
    ctx->pc = 0x33EEC4u;
    {
        const bool branch_taken_0x33eec4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x33EEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33EEC4u;
            // 0x33eec8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eec4) {
            ctx->pc = 0x33F79Cu;
            goto label_33f79c;
        }
    }
    ctx->pc = 0x33EECCu;
label_33eecc:
    // 0x33eecc: 0x50a0022e  beql        $a1, $zero, . + 4 + (0x22E << 2)
label_33eed0:
    if (ctx->pc == 0x33EED0u) {
        ctx->pc = 0x33EED0u;
            // 0x33eed0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x33EED4u;
        goto label_33eed4;
    }
    ctx->pc = 0x33EECCu;
    {
        const bool branch_taken_0x33eecc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33eecc) {
            ctx->pc = 0x33EED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33EECCu;
            // 0x33eed0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F788u;
            goto label_33f788;
        }
    }
    ctx->pc = 0x33EED4u;
label_33eed4:
    // 0x33eed4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x33eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_33eed8:
    // 0x33eed8: 0x50a301eb  beql        $a1, $v1, . + 4 + (0x1EB << 2)
label_33eedc:
    if (ctx->pc == 0x33EEDCu) {
        ctx->pc = 0x33EEDCu;
            // 0x33eedc: 0x8e230ca8  lw          $v1, 0xCA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3240)));
        ctx->pc = 0x33EEE0u;
        goto label_33eee0;
    }
    ctx->pc = 0x33EED8u;
    {
        const bool branch_taken_0x33eed8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33eed8) {
            ctx->pc = 0x33EEDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33EED8u;
            // 0x33eedc: 0x8e230ca8  lw          $v1, 0xCA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F688u;
            goto label_33f688;
        }
    }
    ctx->pc = 0x33EEE0u;
label_33eee0:
    // 0x33eee0: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x33eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_33eee4:
    // 0x33eee4: 0x10a301c7  beq         $a1, $v1, . + 4 + (0x1C7 << 2)
label_33eee8:
    if (ctx->pc == 0x33EEE8u) {
        ctx->pc = 0x33EEECu;
        goto label_33eeec;
    }
    ctx->pc = 0x33EEE4u;
    {
        const bool branch_taken_0x33eee4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33eee4) {
            ctx->pc = 0x33F604u;
            goto label_33f604;
        }
    }
    ctx->pc = 0x33EEECu;
label_33eeec:
    // 0x33eeec: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x33eeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_33eef0:
    // 0x33eef0: 0x50a301bb  beql        $a1, $v1, . + 4 + (0x1BB << 2)
label_33eef4:
    if (ctx->pc == 0x33EEF4u) {
        ctx->pc = 0x33EEF4u;
            // 0x33eef4: 0x92230cc2  lbu         $v1, 0xCC2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3266)));
        ctx->pc = 0x33EEF8u;
        goto label_33eef8;
    }
    ctx->pc = 0x33EEF0u;
    {
        const bool branch_taken_0x33eef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33eef0) {
            ctx->pc = 0x33EEF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33EEF0u;
            // 0x33eef4: 0x92230cc2  lbu         $v1, 0xCC2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3266)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F5E0u;
            goto label_33f5e0;
        }
    }
    ctx->pc = 0x33EEF8u;
label_33eef8:
    // 0x33eef8: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x33eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_33eefc:
    // 0x33eefc: 0x10a301b7  beq         $a1, $v1, . + 4 + (0x1B7 << 2)
label_33ef00:
    if (ctx->pc == 0x33EF00u) {
        ctx->pc = 0x33EF04u;
        goto label_33ef04;
    }
    ctx->pc = 0x33EEFCu;
    {
        const bool branch_taken_0x33eefc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33eefc) {
            ctx->pc = 0x33F5DCu;
            goto label_33f5dc;
        }
    }
    ctx->pc = 0x33EF04u;
label_33ef04:
    // 0x33ef04: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x33ef04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_33ef08:
    // 0x33ef08: 0x50a301af  beql        $a1, $v1, . + 4 + (0x1AF << 2)
label_33ef0c:
    if (ctx->pc == 0x33EF0Cu) {
        ctx->pc = 0x33EF0Cu;
            // 0x33ef0c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x33EF10u;
        goto label_33ef10;
    }
    ctx->pc = 0x33EF08u;
    {
        const bool branch_taken_0x33ef08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ef08) {
            ctx->pc = 0x33EF0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33EF08u;
            // 0x33ef0c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F5C8u;
            goto label_33f5c8;
        }
    }
    ctx->pc = 0x33EF10u;
label_33ef10:
    // 0x33ef10: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x33ef10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_33ef14:
    // 0x33ef14: 0x50a301a0  beql        $a1, $v1, . + 4 + (0x1A0 << 2)
label_33ef18:
    if (ctx->pc == 0x33EF18u) {
        ctx->pc = 0x33EF18u;
            // 0x33ef18: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x33EF1Cu;
        goto label_33ef1c;
    }
    ctx->pc = 0x33EF14u;
    {
        const bool branch_taken_0x33ef14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ef14) {
            ctx->pc = 0x33EF18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33EF14u;
            // 0x33ef18: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F598u;
            goto label_33f598;
        }
    }
    ctx->pc = 0x33EF1Cu;
label_33ef1c:
    // 0x33ef1c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x33ef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_33ef20:
    // 0x33ef20: 0x10a30164  beq         $a1, $v1, . + 4 + (0x164 << 2)
label_33ef24:
    if (ctx->pc == 0x33EF24u) {
        ctx->pc = 0x33EF28u;
        goto label_33ef28;
    }
    ctx->pc = 0x33EF20u;
    {
        const bool branch_taken_0x33ef20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ef20) {
            ctx->pc = 0x33F4B4u;
            goto label_33f4b4;
        }
    }
    ctx->pc = 0x33EF28u;
label_33ef28:
    // 0x33ef28: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x33ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_33ef2c:
    // 0x33ef2c: 0x50a3014c  beql        $a1, $v1, . + 4 + (0x14C << 2)
label_33ef30:
    if (ctx->pc == 0x33EF30u) {
        ctx->pc = 0x33EF30u;
            // 0x33ef30: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x33EF34u;
        goto label_33ef34;
    }
    ctx->pc = 0x33EF2Cu;
    {
        const bool branch_taken_0x33ef2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ef2c) {
            ctx->pc = 0x33EF30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33EF2Cu;
            // 0x33ef30: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F460u;
            goto label_33f460;
        }
    }
    ctx->pc = 0x33EF34u;
label_33ef34:
    // 0x33ef34: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x33ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_33ef38:
    // 0x33ef38: 0x50a30119  beql        $a1, $v1, . + 4 + (0x119 << 2)
label_33ef3c:
    if (ctx->pc == 0x33EF3Cu) {
        ctx->pc = 0x33EF3Cu;
            // 0x33ef3c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x33EF40u;
        goto label_33ef40;
    }
    ctx->pc = 0x33EF38u;
    {
        const bool branch_taken_0x33ef38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ef38) {
            ctx->pc = 0x33EF3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33EF38u;
            // 0x33ef3c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F3A0u;
            goto label_33f3a0;
        }
    }
    ctx->pc = 0x33EF40u;
label_33ef40:
    // 0x33ef40: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x33ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33ef44:
    // 0x33ef44: 0x50a300ba  beql        $a1, $v1, . + 4 + (0xBA << 2)
label_33ef48:
    if (ctx->pc == 0x33EF48u) {
        ctx->pc = 0x33EF48u;
            // 0x33ef48: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x33EF4Cu;
        goto label_33ef4c;
    }
    ctx->pc = 0x33EF44u;
    {
        const bool branch_taken_0x33ef44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ef44) {
            ctx->pc = 0x33EF48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33EF44u;
            // 0x33ef48: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F230u;
            goto label_33f230;
        }
    }
    ctx->pc = 0x33EF4Cu;
label_33ef4c:
    // 0x33ef4c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x33ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_33ef50:
    // 0x33ef50: 0x50a3008d  beql        $a1, $v1, . + 4 + (0x8D << 2)
label_33ef54:
    if (ctx->pc == 0x33EF54u) {
        ctx->pc = 0x33EF54u;
            // 0x33ef54: 0x92230d11  lbu         $v1, 0xD11($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3345)));
        ctx->pc = 0x33EF58u;
        goto label_33ef58;
    }
    ctx->pc = 0x33EF50u;
    {
        const bool branch_taken_0x33ef50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ef50) {
            ctx->pc = 0x33EF54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33EF50u;
            // 0x33ef54: 0x92230d11  lbu         $v1, 0xD11($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3345)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F188u;
            goto label_33f188;
        }
    }
    ctx->pc = 0x33EF58u;
label_33ef58:
    // 0x33ef58: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33ef5c:
    // 0x33ef5c: 0x50a3007b  beql        $a1, $v1, . + 4 + (0x7B << 2)
label_33ef60:
    if (ctx->pc == 0x33EF60u) {
        ctx->pc = 0x33EF60u;
            // 0x33ef60: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x33EF64u;
        goto label_33ef64;
    }
    ctx->pc = 0x33EF5Cu;
    {
        const bool branch_taken_0x33ef5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ef5c) {
            ctx->pc = 0x33EF60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33EF5Cu;
            // 0x33ef60: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F14Cu;
            goto label_33f14c;
        }
    }
    ctx->pc = 0x33EF64u;
label_33ef64:
    // 0x33ef64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33ef68:
    // 0x33ef68: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_33ef6c:
    if (ctx->pc == 0x33EF6Cu) {
        ctx->pc = 0x33EF70u;
        goto label_33ef70;
    }
    ctx->pc = 0x33EF68u;
    {
        const bool branch_taken_0x33ef68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ef68) {
            ctx->pc = 0x33EF78u;
            goto label_33ef78;
        }
    }
    ctx->pc = 0x33EF70u;
label_33ef70:
    // 0x33ef70: 0x10000211  b           . + 4 + (0x211 << 2)
label_33ef74:
    if (ctx->pc == 0x33EF74u) {
        ctx->pc = 0x33EF78u;
        goto label_33ef78;
    }
    ctx->pc = 0x33EF70u;
    {
        const bool branch_taken_0x33ef70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ef70) {
            ctx->pc = 0x33F7B8u;
            goto label_33f7b8;
        }
    }
    ctx->pc = 0x33EF78u;
label_33ef78:
    // 0x33ef78: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x33ef78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_33ef7c:
    // 0x33ef7c: 0x8c653e80  lw          $a1, 0x3E80($v1)
    ctx->pc = 0x33ef7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16000)));
label_33ef80:
    // 0x33ef80: 0x50a00210  beql        $a1, $zero, . + 4 + (0x210 << 2)
label_33ef84:
    if (ctx->pc == 0x33EF84u) {
        ctx->pc = 0x33EF84u;
            // 0x33ef84: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x33EF88u;
        goto label_33ef88;
    }
    ctx->pc = 0x33EF80u;
    {
        const bool branch_taken_0x33ef80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ef80) {
            ctx->pc = 0x33EF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33EF80u;
            // 0x33ef84: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F7C4u;
            goto label_33f7c4;
        }
    }
    ctx->pc = 0x33EF88u;
label_33ef88:
    // 0x33ef88: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33ef88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33ef8c:
    // 0x33ef8c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x33ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_33ef90:
    // 0x33ef90: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x33ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_33ef94:
    // 0x33ef94: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x33ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_33ef98:
    // 0x33ef98: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_33ef9c:
    if (ctx->pc == 0x33EF9Cu) {
        ctx->pc = 0x33EFA0u;
        goto label_33efa0;
    }
    ctx->pc = 0x33EF98u;
    {
        const bool branch_taken_0x33ef98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x33ef98) {
            ctx->pc = 0x33EFB0u;
            goto label_33efb0;
        }
    }
    ctx->pc = 0x33EFA0u;
label_33efa0:
    // 0x33efa0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x33efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_33efa4:
    // 0x33efa4: 0x8c633e88  lw          $v1, 0x3E88($v1)
    ctx->pc = 0x33efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16008)));
label_33efa8:
    // 0x33efa8: 0x10600205  beqz        $v1, . + 4 + (0x205 << 2)
label_33efac:
    if (ctx->pc == 0x33EFACu) {
        ctx->pc = 0x33EFB0u;
        goto label_33efb0;
    }
    ctx->pc = 0x33EFA8u;
    {
        const bool branch_taken_0x33efa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33efa8) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33EFB0u;
label_33efb0:
    // 0x33efb0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33efb4:
    // 0x33efb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33efb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33efb8:
    // 0x33efb8: 0x8c500ed0  lw          $s0, 0xED0($v0)
    ctx->pc = 0x33efb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_33efbc:
    // 0x33efbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33efbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33efc0:
    // 0x33efc0: 0xc0ab89c  jal         func_2AE270
label_33efc4:
    if (ctx->pc == 0x33EFC4u) {
        ctx->pc = 0x33EFC4u;
            // 0x33efc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33EFC8u;
        goto label_33efc8;
    }
    ctx->pc = 0x33EFC0u;
    SET_GPR_U32(ctx, 31, 0x33EFC8u);
    ctx->pc = 0x33EFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33EFC0u;
            // 0x33efc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EFC8u; }
        if (ctx->pc != 0x33EFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EFC8u; }
        if (ctx->pc != 0x33EFC8u) { return; }
    }
    ctx->pc = 0x33EFC8u;
label_33efc8:
    // 0x33efc8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33efcc:
    // 0x33efcc: 0x8c453e88  lw          $a1, 0x3E88($v0)
    ctx->pc = 0x33efccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16008)));
label_33efd0:
    // 0x33efd0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_33efd4:
    if (ctx->pc == 0x33EFD4u) {
        ctx->pc = 0x33EFD8u;
        goto label_33efd8;
    }
    ctx->pc = 0x33EFD0u;
    {
        const bool branch_taken_0x33efd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33efd0) {
            ctx->pc = 0x33EFE8u;
            goto label_33efe8;
        }
    }
    ctx->pc = 0x33EFD8u;
label_33efd8:
    // 0x33efd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33efd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33efdc:
    // 0x33efdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33efdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33efe0:
    // 0x33efe0: 0xc0ab89c  jal         func_2AE270
label_33efe4:
    if (ctx->pc == 0x33EFE4u) {
        ctx->pc = 0x33EFE4u;
            // 0x33efe4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33EFE8u;
        goto label_33efe8;
    }
    ctx->pc = 0x33EFE0u;
    SET_GPR_U32(ctx, 31, 0x33EFE8u);
    ctx->pc = 0x33EFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33EFE0u;
            // 0x33efe4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EFE8u; }
        if (ctx->pc != 0x33EFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33EFE8u; }
        if (ctx->pc != 0x33EFE8u) { return; }
    }
    ctx->pc = 0x33EFE8u;
label_33efe8:
    // 0x33efe8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33efec:
    // 0x33efec: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x33efecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_33eff0:
    // 0x33eff0: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x33eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_33eff4:
    // 0x33eff4: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x33eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_33eff8:
    // 0x33eff8: 0x5443004d  bnel        $v0, $v1, . + 4 + (0x4D << 2)
label_33effc:
    if (ctx->pc == 0x33EFFCu) {
        ctx->pc = 0x33EFFCu;
            // 0x33effc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33F000u;
        goto label_33f000;
    }
    ctx->pc = 0x33EFF8u;
    {
        const bool branch_taken_0x33eff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33eff8) {
            ctx->pc = 0x33EFFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33EFF8u;
            // 0x33effc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F130u;
            goto label_33f130;
        }
    }
    ctx->pc = 0x33F000u;
label_33f000:
    // 0x33f000: 0xa2200d11  sb          $zero, 0xD11($s1)
    ctx->pc = 0x33f000u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3345), (uint8_t)GPR_U32(ctx, 0));
label_33f004:
    // 0x33f004: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33f004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33f008:
    // 0x33f008: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x33f008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_33f00c:
    // 0x33f00c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x33f00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33f010:
    // 0x33f010: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x33f010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_33f014:
    // 0x33f014: 0xc0b90e0  jal         func_2E4380
label_33f018:
    if (ctx->pc == 0x33F018u) {
        ctx->pc = 0x33F018u;
            // 0x33f018: 0x24440060  addiu       $a0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->pc = 0x33F01Cu;
        goto label_33f01c;
    }
    ctx->pc = 0x33F014u;
    SET_GPR_U32(ctx, 31, 0x33F01Cu);
    ctx->pc = 0x33F018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F014u;
            // 0x33f018: 0x24440060  addiu       $a0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F01Cu; }
        if (ctx->pc != 0x33F01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F01Cu; }
        if (ctx->pc != 0x33F01Cu) { return; }
    }
    ctx->pc = 0x33F01Cu;
label_33f01c:
    // 0x33f01c: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_33f020:
    if (ctx->pc == 0x33F020u) {
        ctx->pc = 0x33F020u;
            // 0x33f020: 0x240400d4  addiu       $a0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->pc = 0x33F024u;
        goto label_33f024;
    }
    ctx->pc = 0x33F01Cu;
    {
        const bool branch_taken_0x33f01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f01c) {
            ctx->pc = 0x33F020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33F01Cu;
            // 0x33f020: 0x240400d4  addiu       $a0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F09Cu;
            goto label_33f09c;
        }
    }
    ctx->pc = 0x33F024u;
label_33f024:
    // 0x33f024: 0xc040180  jal         func_100600
label_33f028:
    if (ctx->pc == 0x33F028u) {
        ctx->pc = 0x33F028u;
            // 0x33f028: 0x240400d4  addiu       $a0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->pc = 0x33F02Cu;
        goto label_33f02c;
    }
    ctx->pc = 0x33F024u;
    SET_GPR_U32(ctx, 31, 0x33F02Cu);
    ctx->pc = 0x33F028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F024u;
            // 0x33f028: 0x240400d4  addiu       $a0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F02Cu; }
        if (ctx->pc != 0x33F02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F02Cu; }
        if (ctx->pc != 0x33F02Cu) { return; }
    }
    ctx->pc = 0x33F02Cu;
label_33f02c:
    // 0x33f02c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_33f030:
    if (ctx->pc == 0x33F030u) {
        ctx->pc = 0x33F030u;
            // 0x33f030: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F034u;
        goto label_33f034;
    }
    ctx->pc = 0x33F02Cu;
    {
        const bool branch_taken_0x33f02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F02Cu;
            // 0x33f030: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f02c) {
            ctx->pc = 0x33F10Cu;
            goto label_33f10c;
        }
    }
    ctx->pc = 0x33F034u;
label_33f034:
    // 0x33f034: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33f034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33f038:
    // 0x33f038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f03c:
    // 0x33f03c: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x33f03cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_33f040:
    // 0x33f040: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33f040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33f044:
    // 0x33f044: 0xc10ca68  jal         func_4329A0
label_33f048:
    if (ctx->pc == 0x33F048u) {
        ctx->pc = 0x33F048u;
            // 0x33f048: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33F04Cu;
        goto label_33f04c;
    }
    ctx->pc = 0x33F044u;
    SET_GPR_U32(ctx, 31, 0x33F04Cu);
    ctx->pc = 0x33F048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F044u;
            // 0x33f048: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F04Cu; }
        if (ctx->pc != 0x33F04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F04Cu; }
        if (ctx->pc != 0x33F04Cu) { return; }
    }
    ctx->pc = 0x33F04Cu;
label_33f04c:
    // 0x33f04c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33f050:
    // 0x33f050: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x33f050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_33f054:
    // 0x33f054: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33f054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33f058:
    // 0x33f058: 0xc148880  jal         func_522200
label_33f05c:
    if (ctx->pc == 0x33F05Cu) {
        ctx->pc = 0x33F05Cu;
            // 0x33f05c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33F060u;
        goto label_33f060;
    }
    ctx->pc = 0x33F058u;
    SET_GPR_U32(ctx, 31, 0x33F060u);
    ctx->pc = 0x33F05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F058u;
            // 0x33f05c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F060u; }
        if (ctx->pc != 0x33F060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F060u; }
        if (ctx->pc != 0x33F060u) { return; }
    }
    ctx->pc = 0x33F060u;
label_33f060:
    // 0x33f060: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33f060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33f064:
    // 0x33f064: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33f064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33f068:
    // 0x33f068: 0x24635580  addiu       $v1, $v1, 0x5580
    ctx->pc = 0x33f068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21888));
label_33f06c:
    // 0x33f06c: 0x244255b0  addiu       $v0, $v0, 0x55B0
    ctx->pc = 0x33f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21936));
label_33f070:
    // 0x33f070: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33f070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_33f074:
    // 0x33f074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f078:
    // 0x33f078: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x33f078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_33f07c:
    // 0x33f07c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x33f07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_33f080:
    // 0x33f080: 0x26220d11  addiu       $v0, $s1, 0xD11
    ctx->pc = 0x33f080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3345));
label_33f084:
    // 0x33f084: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x33f084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
label_33f088:
    // 0x33f088: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x33f088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_33f08c:
    // 0x33f08c: 0xc156828  jal         func_55A0A0
label_33f090:
    if (ctx->pc == 0x33F090u) {
        ctx->pc = 0x33F090u;
            // 0x33f090: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x33F094u;
        goto label_33f094;
    }
    ctx->pc = 0x33F08Cu;
    SET_GPR_U32(ctx, 31, 0x33F094u);
    ctx->pc = 0x33F090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F08Cu;
            // 0x33f090: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55A0A0u;
    if (runtime->hasFunction(0x55A0A0u)) {
        auto targetFn = runtime->lookupFunction(0x55A0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F094u; }
        if (ctx->pc != 0x33F094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055A0A0_0x55a0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F094u; }
        if (ctx->pc != 0x33F094u) { return; }
    }
    ctx->pc = 0x33F094u;
label_33f094:
    // 0x33f094: 0x1000001d  b           . + 4 + (0x1D << 2)
label_33f098:
    if (ctx->pc == 0x33F098u) {
        ctx->pc = 0x33F09Cu;
        goto label_33f09c;
    }
    ctx->pc = 0x33F094u;
    {
        const bool branch_taken_0x33f094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f094) {
            ctx->pc = 0x33F10Cu;
            goto label_33f10c;
        }
    }
    ctx->pc = 0x33F09Cu;
label_33f09c:
    // 0x33f09c: 0xc040180  jal         func_100600
label_33f0a0:
    if (ctx->pc == 0x33F0A0u) {
        ctx->pc = 0x33F0A4u;
        goto label_33f0a4;
    }
    ctx->pc = 0x33F09Cu;
    SET_GPR_U32(ctx, 31, 0x33F0A4u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F0A4u; }
        if (ctx->pc != 0x33F0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F0A4u; }
        if (ctx->pc != 0x33F0A4u) { return; }
    }
    ctx->pc = 0x33F0A4u;
label_33f0a4:
    // 0x33f0a4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_33f0a8:
    if (ctx->pc == 0x33F0A8u) {
        ctx->pc = 0x33F0A8u;
            // 0x33f0a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F0ACu;
        goto label_33f0ac;
    }
    ctx->pc = 0x33F0A4u;
    {
        const bool branch_taken_0x33f0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F0A4u;
            // 0x33f0a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f0a4) {
            ctx->pc = 0x33F10Cu;
            goto label_33f10c;
        }
    }
    ctx->pc = 0x33F0ACu;
label_33f0ac:
    // 0x33f0ac: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33f0b0:
    // 0x33f0b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f0b4:
    // 0x33f0b4: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x33f0b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_33f0b8:
    // 0x33f0b8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33f0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33f0bc:
    // 0x33f0bc: 0xc10ca68  jal         func_4329A0
label_33f0c0:
    if (ctx->pc == 0x33F0C0u) {
        ctx->pc = 0x33F0C0u;
            // 0x33f0c0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33F0C4u;
        goto label_33f0c4;
    }
    ctx->pc = 0x33F0BCu;
    SET_GPR_U32(ctx, 31, 0x33F0C4u);
    ctx->pc = 0x33F0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F0BCu;
            // 0x33f0c0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F0C4u; }
        if (ctx->pc != 0x33F0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F0C4u; }
        if (ctx->pc != 0x33F0C4u) { return; }
    }
    ctx->pc = 0x33F0C4u;
label_33f0c4:
    // 0x33f0c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33f0c8:
    // 0x33f0c8: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x33f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_33f0cc:
    // 0x33f0cc: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33f0d0:
    // 0x33f0d0: 0xc148880  jal         func_522200
label_33f0d4:
    if (ctx->pc == 0x33F0D4u) {
        ctx->pc = 0x33F0D4u;
            // 0x33f0d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33F0D8u;
        goto label_33f0d8;
    }
    ctx->pc = 0x33F0D0u;
    SET_GPR_U32(ctx, 31, 0x33F0D8u);
    ctx->pc = 0x33F0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F0D0u;
            // 0x33f0d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F0D8u; }
        if (ctx->pc != 0x33F0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F0D8u; }
        if (ctx->pc != 0x33F0D8u) { return; }
    }
    ctx->pc = 0x33F0D8u;
label_33f0d8:
    // 0x33f0d8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33f0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33f0dc:
    // 0x33f0dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33f0e0:
    // 0x33f0e0: 0x24635580  addiu       $v1, $v1, 0x5580
    ctx->pc = 0x33f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21888));
label_33f0e4:
    // 0x33f0e4: 0x244255b0  addiu       $v0, $v0, 0x55B0
    ctx->pc = 0x33f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21936));
label_33f0e8:
    // 0x33f0e8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33f0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_33f0ec:
    // 0x33f0ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f0f0:
    // 0x33f0f0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x33f0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_33f0f4:
    // 0x33f0f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33f0f8:
    // 0x33f0f8: 0x26220d11  addiu       $v0, $s1, 0xD11
    ctx->pc = 0x33f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3345));
label_33f0fc:
    // 0x33f0fc: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x33f0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
label_33f100:
    // 0x33f100: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x33f100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_33f104:
    // 0x33f104: 0xc156828  jal         func_55A0A0
label_33f108:
    if (ctx->pc == 0x33F108u) {
        ctx->pc = 0x33F108u;
            // 0x33f108: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x33F10Cu;
        goto label_33f10c;
    }
    ctx->pc = 0x33F104u;
    SET_GPR_U32(ctx, 31, 0x33F10Cu);
    ctx->pc = 0x33F108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F104u;
            // 0x33f108: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55A0A0u;
    if (runtime->hasFunction(0x55A0A0u)) {
        auto targetFn = runtime->lookupFunction(0x55A0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F10Cu; }
        if (ctx->pc != 0x33F10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055A0A0_0x55a0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F10Cu; }
        if (ctx->pc != 0x33F10Cu) { return; }
    }
    ctx->pc = 0x33F10Cu;
label_33f10c:
    // 0x33f10c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33f110:
    // 0x33f110: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x33f110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_33f114:
    // 0x33f114: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x33f114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_33f118:
    // 0x33f118: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33f118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33f11c:
    // 0x33f11c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x33f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_33f120:
    // 0x33f120: 0xc0ca4b0  jal         func_3292C0
label_33f124:
    if (ctx->pc == 0x33F124u) {
        ctx->pc = 0x33F124u;
            // 0x33f124: 0x24440060  addiu       $a0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->pc = 0x33F128u;
        goto label_33f128;
    }
    ctx->pc = 0x33F120u;
    SET_GPR_U32(ctx, 31, 0x33F128u);
    ctx->pc = 0x33F124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F120u;
            // 0x33f124: 0x24440060  addiu       $a0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F128u; }
        if (ctx->pc != 0x33F128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F128u; }
        if (ctx->pc != 0x33F128u) { return; }
    }
    ctx->pc = 0x33F128u;
label_33f128:
    // 0x33f128: 0x10000003  b           . + 4 + (0x3 << 2)
label_33f12c:
    if (ctx->pc == 0x33F12Cu) {
        ctx->pc = 0x33F12Cu;
            // 0x33f12c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x33F130u;
        goto label_33f130;
    }
    ctx->pc = 0x33F128u;
    {
        const bool branch_taken_0x33f128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F128u;
            // 0x33f12c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f128) {
            ctx->pc = 0x33F138u;
            goto label_33f138;
        }
    }
    ctx->pc = 0x33F130u;
label_33f130:
    // 0x33f130: 0xa2220d11  sb          $v0, 0xD11($s1)
    ctx->pc = 0x33f130u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3345), (uint8_t)GPR_U32(ctx, 2));
label_33f134:
    // 0x33f134: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33f134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f138:
    // 0x33f138: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x33f138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_33f13c:
    // 0x33f13c: 0x320f809  jalr        $t9
label_33f140:
    if (ctx->pc == 0x33F140u) {
        ctx->pc = 0x33F140u;
            // 0x33f140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F144u;
        goto label_33f144;
    }
    ctx->pc = 0x33F13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F144u);
        ctx->pc = 0x33F140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F13Cu;
            // 0x33f140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F144u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F144u; }
            if (ctx->pc != 0x33F144u) { return; }
        }
        }
    }
    ctx->pc = 0x33F144u;
label_33f144:
    // 0x33f144: 0x1000019e  b           . + 4 + (0x19E << 2)
label_33f148:
    if (ctx->pc == 0x33F148u) {
        ctx->pc = 0x33F14Cu;
        goto label_33f14c;
    }
    ctx->pc = 0x33F144u;
    {
        const bool branch_taken_0x33f144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f144) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F14Cu;
label_33f14c:
    // 0x33f14c: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x33f14cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_33f150:
    // 0x33f150: 0x320f809  jalr        $t9
label_33f154:
    if (ctx->pc == 0x33F154u) {
        ctx->pc = 0x33F158u;
        goto label_33f158;
    }
    ctx->pc = 0x33F150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F158u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F158u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F158u; }
            if (ctx->pc != 0x33F158u) { return; }
        }
        }
    }
    ctx->pc = 0x33F158u;
label_33f158:
    // 0x33f158: 0x10400199  beqz        $v0, . + 4 + (0x199 << 2)
label_33f15c:
    if (ctx->pc == 0x33F15Cu) {
        ctx->pc = 0x33F160u;
        goto label_33f160;
    }
    ctx->pc = 0x33F158u;
    {
        const bool branch_taken_0x33f158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f158) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F160u;
label_33f160:
    // 0x33f160: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33f160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f164:
    // 0x33f164: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x33f164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_33f168:
    // 0x33f168: 0x320f809  jalr        $t9
label_33f16c:
    if (ctx->pc == 0x33F16Cu) {
        ctx->pc = 0x33F16Cu;
            // 0x33f16c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F170u;
        goto label_33f170;
    }
    ctx->pc = 0x33F168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F170u);
        ctx->pc = 0x33F16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F168u;
            // 0x33f16c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F170u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F170u; }
            if (ctx->pc != 0x33F170u) { return; }
        }
        }
    }
    ctx->pc = 0x33F170u;
label_33f170:
    // 0x33f170: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33f170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f174:
    // 0x33f174: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x33f174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_33f178:
    // 0x33f178: 0x320f809  jalr        $t9
label_33f17c:
    if (ctx->pc == 0x33F17Cu) {
        ctx->pc = 0x33F17Cu;
            // 0x33f17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F180u;
        goto label_33f180;
    }
    ctx->pc = 0x33F178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F180u);
        ctx->pc = 0x33F17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F178u;
            // 0x33f17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F180u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F180u; }
            if (ctx->pc != 0x33F180u) { return; }
        }
        }
    }
    ctx->pc = 0x33F180u;
label_33f180:
    // 0x33f180: 0x1000018f  b           . + 4 + (0x18F << 2)
label_33f184:
    if (ctx->pc == 0x33F184u) {
        ctx->pc = 0x33F188u;
        goto label_33f188;
    }
    ctx->pc = 0x33F180u;
    {
        const bool branch_taken_0x33f180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f180) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F188u;
label_33f188:
    // 0x33f188: 0x1060018d  beqz        $v1, . + 4 + (0x18D << 2)
label_33f18c:
    if (ctx->pc == 0x33F18Cu) {
        ctx->pc = 0x33F190u;
        goto label_33f190;
    }
    ctx->pc = 0x33F188u;
    {
        const bool branch_taken_0x33f188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f188) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F190u;
label_33f190:
    // 0x33f190: 0xc040180  jal         func_100600
label_33f194:
    if (ctx->pc == 0x33F194u) {
        ctx->pc = 0x33F194u;
            // 0x33f194: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x33F198u;
        goto label_33f198;
    }
    ctx->pc = 0x33F190u;
    SET_GPR_U32(ctx, 31, 0x33F198u);
    ctx->pc = 0x33F194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F190u;
            // 0x33f194: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F198u; }
        if (ctx->pc != 0x33F198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F198u; }
        if (ctx->pc != 0x33F198u) { return; }
    }
    ctx->pc = 0x33F198u;
label_33f198:
    // 0x33f198: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_33f19c:
    if (ctx->pc == 0x33F19Cu) {
        ctx->pc = 0x33F19Cu;
            // 0x33f19c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F1A0u;
        goto label_33f1a0;
    }
    ctx->pc = 0x33F198u;
    {
        const bool branch_taken_0x33f198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F198u;
            // 0x33f19c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f198) {
            ctx->pc = 0x33F208u;
            goto label_33f208;
        }
    }
    ctx->pc = 0x33F1A0u;
label_33f1a0:
    // 0x33f1a0: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33f1a4:
    // 0x33f1a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f1a8:
    // 0x33f1a8: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x33f1a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_33f1ac:
    // 0x33f1ac: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33f1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33f1b0:
    // 0x33f1b0: 0xc10ca68  jal         func_4329A0
label_33f1b4:
    if (ctx->pc == 0x33F1B4u) {
        ctx->pc = 0x33F1B4u;
            // 0x33f1b4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33F1B8u;
        goto label_33f1b8;
    }
    ctx->pc = 0x33F1B0u;
    SET_GPR_U32(ctx, 31, 0x33F1B8u);
    ctx->pc = 0x33F1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F1B0u;
            // 0x33f1b4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F1B8u; }
        if (ctx->pc != 0x33F1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F1B8u; }
        if (ctx->pc != 0x33F1B8u) { return; }
    }
    ctx->pc = 0x33F1B8u;
label_33f1b8:
    // 0x33f1b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33f1bc:
    // 0x33f1bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33f1c0:
    // 0x33f1c0: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x33f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_33f1c4:
    // 0x33f1c4: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x33f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
label_33f1c8:
    // 0x33f1c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33f1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_33f1cc:
    // 0x33f1cc: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x33f1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_33f1d0:
    // 0x33f1d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33f1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_33f1d4:
    // 0x33f1d4: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x33f1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
label_33f1d8:
    // 0x33f1d8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x33f1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_33f1dc:
    // 0x33f1dc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x33f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_33f1e0:
    // 0x33f1e0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x33f1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_33f1e4:
    // 0x33f1e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33f1e8:
    // 0x33f1e8: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x33f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_33f1ec:
    // 0x33f1ec: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x33f1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
label_33f1f0:
    // 0x33f1f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33f1f4:
    // 0x33f1f4: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x33f1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_33f1f8:
    // 0x33f1f8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x33f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_33f1fc:
    // 0x33f1fc: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x33f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_33f200:
    // 0x33f200: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x33f200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_33f204:
    // 0x33f204: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x33f204u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
label_33f208:
    // 0x33f208: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33f208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f20c:
    // 0x33f20c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x33f20cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_33f210:
    // 0x33f210: 0x320f809  jalr        $t9
label_33f214:
    if (ctx->pc == 0x33F214u) {
        ctx->pc = 0x33F214u;
            // 0x33f214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F218u;
        goto label_33f218;
    }
    ctx->pc = 0x33F210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F218u);
        ctx->pc = 0x33F214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F210u;
            // 0x33f214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F218u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F218u; }
            if (ctx->pc != 0x33F218u) { return; }
        }
        }
    }
    ctx->pc = 0x33F218u;
label_33f218:
    // 0x33f218: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33f218u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f21c:
    // 0x33f21c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x33f21cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_33f220:
    // 0x33f220: 0x320f809  jalr        $t9
label_33f224:
    if (ctx->pc == 0x33F224u) {
        ctx->pc = 0x33F224u;
            // 0x33f224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F228u;
        goto label_33f228;
    }
    ctx->pc = 0x33F220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F228u);
        ctx->pc = 0x33F224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F220u;
            // 0x33f224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F228u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F228u; }
            if (ctx->pc != 0x33F228u) { return; }
        }
        }
    }
    ctx->pc = 0x33F228u;
label_33f228:
    // 0x33f228: 0x10000165  b           . + 4 + (0x165 << 2)
label_33f22c:
    if (ctx->pc == 0x33F22Cu) {
        ctx->pc = 0x33F230u;
        goto label_33f230;
    }
    ctx->pc = 0x33F228u;
    {
        const bool branch_taken_0x33f228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f228) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F230u;
label_33f230:
    // 0x33f230: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x33f230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_33f234:
    // 0x33f234: 0x320f809  jalr        $t9
label_33f238:
    if (ctx->pc == 0x33F238u) {
        ctx->pc = 0x33F23Cu;
        goto label_33f23c;
    }
    ctx->pc = 0x33F234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F23Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F23Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F23Cu; }
            if (ctx->pc != 0x33F23Cu) { return; }
        }
        }
    }
    ctx->pc = 0x33F23Cu;
label_33f23c:
    // 0x33f23c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33f23cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f240:
    // 0x33f240: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x33f240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_33f244:
    // 0x33f244: 0x320f809  jalr        $t9
label_33f248:
    if (ctx->pc == 0x33F248u) {
        ctx->pc = 0x33F248u;
            // 0x33f248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F24Cu;
        goto label_33f24c;
    }
    ctx->pc = 0x33F244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F24Cu);
        ctx->pc = 0x33F248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F244u;
            // 0x33f248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F24Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F24Cu; }
            if (ctx->pc != 0x33F24Cu) { return; }
        }
        }
    }
    ctx->pc = 0x33F24Cu;
label_33f24c:
    // 0x33f24c: 0x92220ce5  lbu         $v0, 0xCE5($s1)
    ctx->pc = 0x33f24cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3301)));
label_33f250:
    // 0x33f250: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_33f254:
    if (ctx->pc == 0x33F254u) {
        ctx->pc = 0x33F254u;
            // 0x33f254: 0xa2200cc3  sb          $zero, 0xCC3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3267), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x33F258u;
        goto label_33f258;
    }
    ctx->pc = 0x33F250u;
    {
        const bool branch_taken_0x33f250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f250) {
            ctx->pc = 0x33F254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33F250u;
            // 0x33f254: 0xa2200cc3  sb          $zero, 0xCC3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3267), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F2ECu;
            goto label_33f2ec;
        }
    }
    ctx->pc = 0x33F258u;
label_33f258:
    // 0x33f258: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x33f258u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_33f25c:
    // 0x33f25c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x33f25cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33f260:
    // 0x33f260: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x33f260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_33f264:
    // 0x33f264: 0xc0761d4  jal         func_1D8750
label_33f268:
    if (ctx->pc == 0x33F268u) {
        ctx->pc = 0x33F268u;
            // 0x33f268: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x33F26Cu;
        goto label_33f26c;
    }
    ctx->pc = 0x33F264u;
    SET_GPR_U32(ctx, 31, 0x33F26Cu);
    ctx->pc = 0x33F268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F264u;
            // 0x33f268: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8750u;
    if (runtime->hasFunction(0x1D8750u)) {
        auto targetFn = runtime->lookupFunction(0x1D8750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F26Cu; }
        if (ctx->pc != 0x33F26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8750_0x1d8750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F26Cu; }
        if (ctx->pc != 0x33F26Cu) { return; }
    }
    ctx->pc = 0x33F26Cu;
label_33f26c:
    // 0x33f26c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x33f26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33f270:
    // 0x33f270: 0xc07626c  jal         func_1D89B0
label_33f274:
    if (ctx->pc == 0x33F274u) {
        ctx->pc = 0x33F274u;
            // 0x33f274: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33F278u;
        goto label_33f278;
    }
    ctx->pc = 0x33F270u;
    SET_GPR_U32(ctx, 31, 0x33F278u);
    ctx->pc = 0x33F274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F270u;
            // 0x33f274: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F278u; }
        if (ctx->pc != 0x33F278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F278u; }
        if (ctx->pc != 0x33F278u) { return; }
    }
    ctx->pc = 0x33F278u;
label_33f278:
    // 0x33f278: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x33f278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33f27c:
    // 0x33f27c: 0xc07626c  jal         func_1D89B0
label_33f280:
    if (ctx->pc == 0x33F280u) {
        ctx->pc = 0x33F280u;
            // 0x33f280: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x33F284u;
        goto label_33f284;
    }
    ctx->pc = 0x33F27Cu;
    SET_GPR_U32(ctx, 31, 0x33F284u);
    ctx->pc = 0x33F280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F27Cu;
            // 0x33f280: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F284u; }
        if (ctx->pc != 0x33F284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F284u; }
        if (ctx->pc != 0x33F284u) { return; }
    }
    ctx->pc = 0x33F284u;
label_33f284:
    // 0x33f284: 0x8e22077c  lw          $v0, 0x77C($s1)
    ctx->pc = 0x33f284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1916)));
label_33f288:
    // 0x33f288: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33f288u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_33f28c:
    // 0x33f28c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x33f28cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_33f290:
    // 0x33f290: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_33f294:
    if (ctx->pc == 0x33F294u) {
        ctx->pc = 0x33F294u;
            // 0x33f294: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x33F298u;
        goto label_33f298;
    }
    ctx->pc = 0x33F290u;
    {
        const bool branch_taken_0x33f290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F290u;
            // 0x33f294: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f290) {
            ctx->pc = 0x33F264u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33f264;
        }
    }
    ctx->pc = 0x33F298u;
label_33f298:
    // 0x33f298: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33f298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33f29c:
    // 0x33f29c: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x33f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_33f2a0:
    // 0x33f2a0: 0x8c440144  lw          $a0, 0x144($v0)
    ctx->pc = 0x33f2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_33f2a4:
    // 0x33f2a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33f2a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33f2a8:
    // 0x33f2a8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x33f2a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_33f2ac:
    // 0x33f2ac: 0x320f809  jalr        $t9
label_33f2b0:
    if (ctx->pc == 0x33F2B0u) {
        ctx->pc = 0x33F2B4u;
        goto label_33f2b4;
    }
    ctx->pc = 0x33F2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F2B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F2B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F2B4u; }
            if (ctx->pc != 0x33F2B4u) { return; }
        }
        }
    }
    ctx->pc = 0x33F2B4u;
label_33f2b4:
    // 0x33f2b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33f2b8:
    // 0x33f2b8: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x33f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_33f2bc:
    // 0x33f2bc: 0x8c440148  lw          $a0, 0x148($v0)
    ctx->pc = 0x33f2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
label_33f2c0:
    // 0x33f2c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33f2c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33f2c4:
    // 0x33f2c4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x33f2c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_33f2c8:
    // 0x33f2c8: 0x320f809  jalr        $t9
label_33f2cc:
    if (ctx->pc == 0x33F2CCu) {
        ctx->pc = 0x33F2D0u;
        goto label_33f2d0;
    }
    ctx->pc = 0x33F2C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F2D0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F2D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F2D0u; }
            if (ctx->pc != 0x33F2D0u) { return; }
        }
        }
    }
    ctx->pc = 0x33F2D0u;
label_33f2d0:
    // 0x33f2d0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33f2d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f2d4:
    // 0x33f2d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33f2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33f2d8:
    // 0x33f2d8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x33f2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_33f2dc:
    // 0x33f2dc: 0x320f809  jalr        $t9
label_33f2e0:
    if (ctx->pc == 0x33F2E0u) {
        ctx->pc = 0x33F2E0u;
            // 0x33f2e0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x33F2E4u;
        goto label_33f2e4;
    }
    ctx->pc = 0x33F2DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F2E4u);
        ctx->pc = 0x33F2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F2DCu;
            // 0x33f2e0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F2E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F2E4u; }
            if (ctx->pc != 0x33F2E4u) { return; }
        }
        }
    }
    ctx->pc = 0x33F2E4u;
label_33f2e4:
    // 0x33f2e4: 0x10000136  b           . + 4 + (0x136 << 2)
label_33f2e8:
    if (ctx->pc == 0x33F2E8u) {
        ctx->pc = 0x33F2ECu;
        goto label_33f2ec;
    }
    ctx->pc = 0x33F2E4u;
    {
        const bool branch_taken_0x33f2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f2e4) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F2ECu;
label_33f2ec:
    // 0x33f2ec: 0x8e220d0c  lw          $v0, 0xD0C($s1)
    ctx->pc = 0x33f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3340)));
label_33f2f0:
    // 0x33f2f0: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
label_33f2f4:
    if (ctx->pc == 0x33F2F4u) {
        ctx->pc = 0x33F2F4u;
            // 0x33f2f4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x33F2F8u;
        goto label_33f2f8;
    }
    ctx->pc = 0x33F2F0u;
    {
        const bool branch_taken_0x33f2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f2f0) {
            ctx->pc = 0x33F2F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33F2F0u;
            // 0x33f2f4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F378u;
            goto label_33f378;
        }
    }
    ctx->pc = 0x33F2F8u;
label_33f2f8:
    // 0x33f2f8: 0xc040180  jal         func_100600
label_33f2fc:
    if (ctx->pc == 0x33F2FCu) {
        ctx->pc = 0x33F2FCu;
            // 0x33f2fc: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x33F300u;
        goto label_33f300;
    }
    ctx->pc = 0x33F2F8u;
    SET_GPR_U32(ctx, 31, 0x33F300u);
    ctx->pc = 0x33F2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F2F8u;
            // 0x33f2fc: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F300u; }
        if (ctx->pc != 0x33F300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F300u; }
        if (ctx->pc != 0x33F300u) { return; }
    }
    ctx->pc = 0x33F300u;
label_33f300:
    // 0x33f300: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_33f304:
    if (ctx->pc == 0x33F304u) {
        ctx->pc = 0x33F304u;
            // 0x33f304: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F308u;
        goto label_33f308;
    }
    ctx->pc = 0x33F300u;
    {
        const bool branch_taken_0x33f300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F300u;
            // 0x33f304: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f300) {
            ctx->pc = 0x33F370u;
            goto label_33f370;
        }
    }
    ctx->pc = 0x33F308u;
label_33f308:
    // 0x33f308: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33f308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33f30c:
    // 0x33f30c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f310:
    // 0x33f310: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x33f310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_33f314:
    // 0x33f314: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33f314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33f318:
    // 0x33f318: 0xc10ca68  jal         func_4329A0
label_33f31c:
    if (ctx->pc == 0x33F31Cu) {
        ctx->pc = 0x33F31Cu;
            // 0x33f31c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33F320u;
        goto label_33f320;
    }
    ctx->pc = 0x33F318u;
    SET_GPR_U32(ctx, 31, 0x33F320u);
    ctx->pc = 0x33F31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F318u;
            // 0x33f31c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F320u; }
        if (ctx->pc != 0x33F320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F320u; }
        if (ctx->pc != 0x33F320u) { return; }
    }
    ctx->pc = 0x33F320u;
label_33f320:
    // 0x33f320: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33f320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33f324:
    // 0x33f324: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33f324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33f328:
    // 0x33f328: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33f328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33f32c:
    // 0x33f32c: 0x24635550  addiu       $v1, $v1, 0x5550
    ctx->pc = 0x33f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21840));
label_33f330:
    // 0x33f330: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33f330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_33f334:
    // 0x33f334: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33f334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_33f338:
    // 0x33f338: 0x26220cc3  addiu       $v0, $s1, 0xCC3
    ctx->pc = 0x33f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3267));
label_33f33c:
    // 0x33f33c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x33f33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_33f340:
    // 0x33f340: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x33f340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_33f344:
    // 0x33f344: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x33f344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_33f348:
    // 0x33f348: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x33f348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_33f34c:
    // 0x33f34c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x33f34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_33f350:
    // 0x33f350: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x33f350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_33f354:
    // 0x33f354: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x33f354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_33f358:
    // 0x33f358: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x33f358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_33f35c:
    // 0x33f35c: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x33f35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_33f360:
    // 0x33f360: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x33f360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_33f364:
    // 0x33f364: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x33f364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_33f368:
    // 0x33f368: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x33f368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_33f36c:
    // 0x33f36c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x33f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_33f370:
    // 0x33f370: 0xae300d0c  sw          $s0, 0xD0C($s1)
    ctx->pc = 0x33f370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3340), GPR_U32(ctx, 16));
label_33f374:
    // 0x33f374: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33f374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f378:
    // 0x33f378: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x33f378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_33f37c:
    // 0x33f37c: 0x320f809  jalr        $t9
label_33f380:
    if (ctx->pc == 0x33F380u) {
        ctx->pc = 0x33F380u;
            // 0x33f380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F384u;
        goto label_33f384;
    }
    ctx->pc = 0x33F37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F384u);
        ctx->pc = 0x33F380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F37Cu;
            // 0x33f380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F384u; }
            if (ctx->pc != 0x33F384u) { return; }
        }
        }
    }
    ctx->pc = 0x33F384u;
label_33f384:
    // 0x33f384: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33f384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f388:
    // 0x33f388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33f388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33f38c:
    // 0x33f38c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x33f38cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_33f390:
    // 0x33f390: 0x320f809  jalr        $t9
label_33f394:
    if (ctx->pc == 0x33F394u) {
        ctx->pc = 0x33F394u;
            // 0x33f394: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x33F398u;
        goto label_33f398;
    }
    ctx->pc = 0x33F390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F398u);
        ctx->pc = 0x33F394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F390u;
            // 0x33f394: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F398u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F398u; }
            if (ctx->pc != 0x33F398u) { return; }
        }
        }
    }
    ctx->pc = 0x33F398u;
label_33f398:
    // 0x33f398: 0x10000109  b           . + 4 + (0x109 << 2)
label_33f39c:
    if (ctx->pc == 0x33F39Cu) {
        ctx->pc = 0x33F3A0u;
        goto label_33f3a0;
    }
    ctx->pc = 0x33F398u;
    {
        const bool branch_taken_0x33f398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f398) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F3A0u;
label_33f3a0:
    // 0x33f3a0: 0xae230cb4  sw          $v1, 0xCB4($s1)
    ctx->pc = 0x33f3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3252), GPR_U32(ctx, 3));
label_33f3a4:
    // 0x33f3a4: 0x8e250cac  lw          $a1, 0xCAC($s1)
    ctx->pc = 0x33f3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3244)));
label_33f3a8:
    // 0x33f3a8: 0x54a0000c  bnel        $a1, $zero, . + 4 + (0xC << 2)
label_33f3ac:
    if (ctx->pc == 0x33F3ACu) {
        ctx->pc = 0x33F3ACu;
            // 0x33f3ac: 0x90a30010  lbu         $v1, 0x10($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->pc = 0x33F3B0u;
        goto label_33f3b0;
    }
    ctx->pc = 0x33F3A8u;
    {
        const bool branch_taken_0x33f3a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f3a8) {
            ctx->pc = 0x33F3ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33F3A8u;
            // 0x33f3ac: 0x90a30010  lbu         $v1, 0x10($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F3DCu;
            goto label_33f3dc;
        }
    }
    ctx->pc = 0x33F3B0u;
label_33f3b0:
    // 0x33f3b0: 0xc040180  jal         func_100600
label_33f3b4:
    if (ctx->pc == 0x33F3B4u) {
        ctx->pc = 0x33F3B4u;
            // 0x33f3b4: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->pc = 0x33F3B8u;
        goto label_33f3b8;
    }
    ctx->pc = 0x33F3B0u;
    SET_GPR_U32(ctx, 31, 0x33F3B8u);
    ctx->pc = 0x33F3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F3B0u;
            // 0x33f3b4: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F3B8u; }
        if (ctx->pc != 0x33F3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F3B8u; }
        if (ctx->pc != 0x33F3B8u) { return; }
    }
    ctx->pc = 0x33F3B8u;
label_33f3b8:
    // 0x33f3b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33f3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33f3bc:
    // 0x33f3bc: 0x50800100  beql        $a0, $zero, . + 4 + (0x100 << 2)
label_33f3c0:
    if (ctx->pc == 0x33F3C0u) {
        ctx->pc = 0x33F3C0u;
            // 0x33f3c0: 0xae240cac  sw          $a0, 0xCAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3244), GPR_U32(ctx, 4));
        ctx->pc = 0x33F3C4u;
        goto label_33f3c4;
    }
    ctx->pc = 0x33F3BCu;
    {
        const bool branch_taken_0x33f3bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f3bc) {
            ctx->pc = 0x33F3C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33F3BCu;
            // 0x33f3c0: 0xae240cac  sw          $a0, 0xCAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3244), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F3C4u;
label_33f3c4:
    // 0x33f3c4: 0xc126fc0  jal         func_49BF00
label_33f3c8:
    if (ctx->pc == 0x33F3C8u) {
        ctx->pc = 0x33F3CCu;
        goto label_33f3cc;
    }
    ctx->pc = 0x33F3C4u;
    SET_GPR_U32(ctx, 31, 0x33F3CCu);
    ctx->pc = 0x49BF00u;
    if (runtime->hasFunction(0x49BF00u)) {
        auto targetFn = runtime->lookupFunction(0x49BF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F3CCu; }
        if (ctx->pc != 0x33F3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049BF00_0x49bf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F3CCu; }
        if (ctx->pc != 0x33F3CCu) { return; }
    }
    ctx->pc = 0x33F3CCu;
label_33f3cc:
    // 0x33f3cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33f3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33f3d0:
    // 0x33f3d0: 0xae240cac  sw          $a0, 0xCAC($s1)
    ctx->pc = 0x33f3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3244), GPR_U32(ctx, 4));
label_33f3d4:
    // 0x33f3d4: 0x100000fa  b           . + 4 + (0xFA << 2)
label_33f3d8:
    if (ctx->pc == 0x33F3D8u) {
        ctx->pc = 0x33F3DCu;
        goto label_33f3dc;
    }
    ctx->pc = 0x33F3D4u;
    {
        const bool branch_taken_0x33f3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f3d4) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F3DCu;
label_33f3dc:
    // 0x33f3dc: 0x146600f8  bne         $v1, $a2, . + 4 + (0xF8 << 2)
label_33f3e0:
    if (ctx->pc == 0x33F3E0u) {
        ctx->pc = 0x33F3E4u;
        goto label_33f3e4;
    }
    ctx->pc = 0x33F3DCu;
    {
        const bool branch_taken_0x33f3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x33f3dc) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F3E4u;
label_33f3e4:
    // 0x33f3e4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x33f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_33f3e8:
    // 0x33f3e8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x33f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_33f3ec:
    // 0x33f3ec: 0xc057b7c  jal         func_15EDF0
label_33f3f0:
    if (ctx->pc == 0x33F3F0u) {
        ctx->pc = 0x33F3F0u;
            // 0x33f3f0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x33F3F4u;
        goto label_33f3f4;
    }
    ctx->pc = 0x33F3ECu;
    SET_GPR_U32(ctx, 31, 0x33F3F4u);
    ctx->pc = 0x33F3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F3ECu;
            // 0x33f3f0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F3F4u; }
        if (ctx->pc != 0x33F3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F3F4u; }
        if (ctx->pc != 0x33F3F4u) { return; }
    }
    ctx->pc = 0x33F3F4u;
label_33f3f4:
    // 0x33f3f4: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x33f3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_33f3f8:
    // 0x33f3f8: 0xc040180  jal         func_100600
label_33f3fc:
    if (ctx->pc == 0x33F3FCu) {
        ctx->pc = 0x33F3FCu;
            // 0x33f3fc: 0xae200cac  sw          $zero, 0xCAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3244), GPR_U32(ctx, 0));
        ctx->pc = 0x33F400u;
        goto label_33f400;
    }
    ctx->pc = 0x33F3F8u;
    SET_GPR_U32(ctx, 31, 0x33F400u);
    ctx->pc = 0x33F3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F3F8u;
            // 0x33f3fc: 0xae200cac  sw          $zero, 0xCAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F400u; }
        if (ctx->pc != 0x33F400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F400u; }
        if (ctx->pc != 0x33F400u) { return; }
    }
    ctx->pc = 0x33F400u;
label_33f400:
    // 0x33f400: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_33f404:
    if (ctx->pc == 0x33F404u) {
        ctx->pc = 0x33F408u;
        goto label_33f408;
    }
    ctx->pc = 0x33F400u;
    {
        const bool branch_taken_0x33f400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f400) {
            ctx->pc = 0x33F410u;
            goto label_33f410;
        }
    }
    ctx->pc = 0x33F408u;
label_33f408:
    // 0x33f408: 0xc0f1f64  jal         func_3C7D90
label_33f40c:
    if (ctx->pc == 0x33F40Cu) {
        ctx->pc = 0x33F40Cu;
            // 0x33f40c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F410u;
        goto label_33f410;
    }
    ctx->pc = 0x33F408u;
    SET_GPR_U32(ctx, 31, 0x33F410u);
    ctx->pc = 0x33F40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F408u;
            // 0x33f40c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C7D90u;
    if (runtime->hasFunction(0x3C7D90u)) {
        auto targetFn = runtime->lookupFunction(0x3C7D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F410u; }
        if (ctx->pc != 0x33F410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C7D90_0x3c7d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F410u; }
        if (ctx->pc != 0x33F410u) { return; }
    }
    ctx->pc = 0x33F410u;
label_33f410:
    // 0x33f410: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x33f410u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_33f414:
    // 0x33f414: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x33f414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33f418:
    // 0x33f418: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x33f418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_33f41c:
    // 0x33f41c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x33f41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33f420:
    // 0x33f420: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33f420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33f424:
    // 0x33f424: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x33f424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_33f428:
    // 0x33f428: 0x320f809  jalr        $t9
label_33f42c:
    if (ctx->pc == 0x33F42Cu) {
        ctx->pc = 0x33F42Cu;
            // 0x33f42c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33F430u;
        goto label_33f430;
    }
    ctx->pc = 0x33F428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F430u);
        ctx->pc = 0x33F42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F428u;
            // 0x33f42c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F430u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F430u; }
            if (ctx->pc != 0x33F430u) { return; }
        }
        }
    }
    ctx->pc = 0x33F430u;
label_33f430:
    // 0x33f430: 0x8e22077c  lw          $v0, 0x77C($s1)
    ctx->pc = 0x33f430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1916)));
label_33f434:
    // 0x33f434: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33f434u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_33f438:
    // 0x33f438: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x33f438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_33f43c:
    // 0x33f43c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_33f440:
    if (ctx->pc == 0x33F440u) {
        ctx->pc = 0x33F440u;
            // 0x33f440: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x33F444u;
        goto label_33f444;
    }
    ctx->pc = 0x33F43Cu;
    {
        const bool branch_taken_0x33f43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F43Cu;
            // 0x33f440: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f43c) {
            ctx->pc = 0x33F41Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33f41c;
        }
    }
    ctx->pc = 0x33F444u;
label_33f444:
    // 0x33f444: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33f444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f448:
    // 0x33f448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33f448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33f44c:
    // 0x33f44c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x33f44cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_33f450:
    // 0x33f450: 0x320f809  jalr        $t9
label_33f454:
    if (ctx->pc == 0x33F454u) {
        ctx->pc = 0x33F454u;
            // 0x33f454: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x33F458u;
        goto label_33f458;
    }
    ctx->pc = 0x33F450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F458u);
        ctx->pc = 0x33F454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F450u;
            // 0x33f454: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F458u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F458u; }
            if (ctx->pc != 0x33F458u) { return; }
        }
        }
    }
    ctx->pc = 0x33F458u;
label_33f458:
    // 0x33f458: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_33f45c:
    if (ctx->pc == 0x33F45Cu) {
        ctx->pc = 0x33F460u;
        goto label_33f460;
    }
    ctx->pc = 0x33F458u;
    {
        const bool branch_taken_0x33f458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f458) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F460u;
label_33f460:
    // 0x33f460: 0xae220cb4  sw          $v0, 0xCB4($s1)
    ctx->pc = 0x33f460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3252), GPR_U32(ctx, 2));
label_33f464:
    // 0x33f464: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33f464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33f468:
    // 0x33f468: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x33f468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_33f46c:
    // 0x33f46c: 0x320f809  jalr        $t9
label_33f470:
    if (ctx->pc == 0x33F470u) {
        ctx->pc = 0x33F474u;
        goto label_33f474;
    }
    ctx->pc = 0x33F46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F474u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F474u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F474u; }
            if (ctx->pc != 0x33F474u) { return; }
        }
        }
    }
    ctx->pc = 0x33F474u;
label_33f474:
    // 0x33f474: 0xc0cc87c  jal         func_3321F0
label_33f478:
    if (ctx->pc == 0x33F478u) {
        ctx->pc = 0x33F478u;
            // 0x33f478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F47Cu;
        goto label_33f47c;
    }
    ctx->pc = 0x33F474u;
    SET_GPR_U32(ctx, 31, 0x33F47Cu);
    ctx->pc = 0x33F478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F474u;
            // 0x33f478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3321F0u;
    if (runtime->hasFunction(0x3321F0u)) {
        auto targetFn = runtime->lookupFunction(0x3321F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F47Cu; }
        if (ctx->pc != 0x33F47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003321F0_0x3321f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F47Cu; }
        if (ctx->pc != 0x33F47Cu) { return; }
    }
    ctx->pc = 0x33F47Cu;
label_33f47c:
    // 0x33f47c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_33f480:
    if (ctx->pc == 0x33F480u) {
        ctx->pc = 0x33F480u;
            // 0x33f480: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x33F484u;
        goto label_33f484;
    }
    ctx->pc = 0x33F47Cu;
    {
        const bool branch_taken_0x33f47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f47c) {
            ctx->pc = 0x33F480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33F47Cu;
            // 0x33f480: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F49Cu;
            goto label_33f49c;
        }
    }
    ctx->pc = 0x33F484u;
label_33f484:
    // 0x33f484: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33f484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f488:
    // 0x33f488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33f488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33f48c:
    // 0x33f48c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x33f48cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_33f490:
    // 0x33f490: 0x320f809  jalr        $t9
label_33f494:
    if (ctx->pc == 0x33F494u) {
        ctx->pc = 0x33F494u;
            // 0x33f494: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x33F498u;
        goto label_33f498;
    }
    ctx->pc = 0x33F490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F498u);
        ctx->pc = 0x33F494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F490u;
            // 0x33f494: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F498u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F498u; }
            if (ctx->pc != 0x33F498u) { return; }
        }
        }
    }
    ctx->pc = 0x33F498u;
label_33f498:
    // 0x33f498: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33f498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f49c:
    // 0x33f49c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33f49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33f4a0:
    // 0x33f4a0: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x33f4a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_33f4a4:
    // 0x33f4a4: 0x320f809  jalr        $t9
label_33f4a8:
    if (ctx->pc == 0x33F4A8u) {
        ctx->pc = 0x33F4A8u;
            // 0x33f4a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F4ACu;
        goto label_33f4ac;
    }
    ctx->pc = 0x33F4A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F4ACu);
        ctx->pc = 0x33F4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F4A4u;
            // 0x33f4a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F4ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F4ACu; }
            if (ctx->pc != 0x33F4ACu) { return; }
        }
        }
    }
    ctx->pc = 0x33F4ACu;
label_33f4ac:
    // 0x33f4ac: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_33f4b0:
    if (ctx->pc == 0x33F4B0u) {
        ctx->pc = 0x33F4B4u;
        goto label_33f4b4;
    }
    ctx->pc = 0x33F4ACu;
    {
        const bool branch_taken_0x33f4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f4ac) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F4B4u;
label_33f4b4:
    // 0x33f4b4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x33f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_33f4b8:
    // 0x33f4b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33f4b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33f4bc:
    // 0x33f4bc: 0x8c630ea4  lw          $v1, 0xEA4($v1)
    ctx->pc = 0x33f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
label_33f4c0:
    // 0x33f4c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33f4c4:
    // 0x33f4c4: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x33f4c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_33f4c8:
    // 0x33f4c8: 0x8c70012c  lw          $s0, 0x12C($v1)
    ctx->pc = 0x33f4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
label_33f4cc:
    // 0x33f4cc: 0x320f809  jalr        $t9
label_33f4d0:
    if (ctx->pc == 0x33F4D0u) {
        ctx->pc = 0x33F4D0u;
            // 0x33f4d0: 0x8c520e84  lw          $s2, 0xE84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
        ctx->pc = 0x33F4D4u;
        goto label_33f4d4;
    }
    ctx->pc = 0x33F4CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F4D4u);
        ctx->pc = 0x33F4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F4CCu;
            // 0x33f4d0: 0x8c520e84  lw          $s2, 0xE84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F4D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F4D4u; }
            if (ctx->pc != 0x33F4D4u) { return; }
        }
        }
    }
    ctx->pc = 0x33F4D4u;
label_33f4d4:
    // 0x33f4d4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x33f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_33f4d8:
    // 0x33f4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f4dc:
    // 0x33f4dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33f4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33f4e0:
    // 0x33f4e0: 0xc0c5ed0  jal         func_317B40
label_33f4e4:
    if (ctx->pc == 0x33F4E4u) {
        ctx->pc = 0x33F4E4u;
            // 0x33f4e4: 0xae220cb4  sw          $v0, 0xCB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3252), GPR_U32(ctx, 2));
        ctx->pc = 0x33F4E8u;
        goto label_33f4e8;
    }
    ctx->pc = 0x33F4E0u;
    SET_GPR_U32(ctx, 31, 0x33F4E8u);
    ctx->pc = 0x33F4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F4E0u;
            // 0x33f4e4: 0xae220cb4  sw          $v0, 0xCB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317B40u;
    if (runtime->hasFunction(0x317B40u)) {
        auto targetFn = runtime->lookupFunction(0x317B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F4E8u; }
        if (ctx->pc != 0x33F4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00317B40_0x317b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F4E8u; }
        if (ctx->pc != 0x33F4E8u) { return; }
    }
    ctx->pc = 0x33F4E8u;
label_33f4e8:
    // 0x33f4e8: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_33f4ec:
    if (ctx->pc == 0x33F4ECu) {
        ctx->pc = 0x33F4ECu;
            // 0x33f4ec: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x33F4F0u;
        goto label_33f4f0;
    }
    ctx->pc = 0x33F4E8u;
    {
        const bool branch_taken_0x33f4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f4e8) {
            ctx->pc = 0x33F4ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33F4E8u;
            // 0x33f4ec: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F580u;
            goto label_33f580;
        }
    }
    ctx->pc = 0x33F4F0u;
label_33f4f0:
    // 0x33f4f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33f4f4:
    // 0x33f4f4: 0x240400d4  addiu       $a0, $zero, 0xD4
    ctx->pc = 0x33f4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
label_33f4f8:
    // 0x33f4f8: 0xa2220cc3  sb          $v0, 0xCC3($s1)
    ctx->pc = 0x33f4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3267), (uint8_t)GPR_U32(ctx, 2));
label_33f4fc:
    // 0x33f4fc: 0xc040180  jal         func_100600
label_33f500:
    if (ctx->pc == 0x33F500u) {
        ctx->pc = 0x33F500u;
            // 0x33f500: 0xae200d0c  sw          $zero, 0xD0C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3340), GPR_U32(ctx, 0));
        ctx->pc = 0x33F504u;
        goto label_33f504;
    }
    ctx->pc = 0x33F4FCu;
    SET_GPR_U32(ctx, 31, 0x33F504u);
    ctx->pc = 0x33F500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F4FCu;
            // 0x33f500: 0xae200d0c  sw          $zero, 0xD0C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F504u; }
        if (ctx->pc != 0x33F504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F504u; }
        if (ctx->pc != 0x33F504u) { return; }
    }
    ctx->pc = 0x33F504u;
label_33f504:
    // 0x33f504: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_33f508:
    if (ctx->pc == 0x33F508u) {
        ctx->pc = 0x33F508u;
            // 0x33f508: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F50Cu;
        goto label_33f50c;
    }
    ctx->pc = 0x33F504u;
    {
        const bool branch_taken_0x33f504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F504u;
            // 0x33f508: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f504) {
            ctx->pc = 0x33F568u;
            goto label_33f568;
        }
    }
    ctx->pc = 0x33F50Cu;
label_33f50c:
    // 0x33f50c: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33f510:
    // 0x33f510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f514:
    // 0x33f514: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x33f514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_33f518:
    // 0x33f518: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33f518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33f51c:
    // 0x33f51c: 0xc10ca68  jal         func_4329A0
label_33f520:
    if (ctx->pc == 0x33F520u) {
        ctx->pc = 0x33F520u;
            // 0x33f520: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33F524u;
        goto label_33f524;
    }
    ctx->pc = 0x33F51Cu;
    SET_GPR_U32(ctx, 31, 0x33F524u);
    ctx->pc = 0x33F520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F51Cu;
            // 0x33f520: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F524u; }
        if (ctx->pc != 0x33F524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F524u; }
        if (ctx->pc != 0x33F524u) { return; }
    }
    ctx->pc = 0x33F524u;
label_33f524:
    // 0x33f524: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33f524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33f528:
    // 0x33f528: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x33f528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_33f52c:
    // 0x33f52c: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33f530:
    // 0x33f530: 0xc148880  jal         func_522200
label_33f534:
    if (ctx->pc == 0x33F534u) {
        ctx->pc = 0x33F534u;
            // 0x33f534: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33F538u;
        goto label_33f538;
    }
    ctx->pc = 0x33F530u;
    SET_GPR_U32(ctx, 31, 0x33F538u);
    ctx->pc = 0x33F534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F530u;
            // 0x33f534: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F538u; }
        if (ctx->pc != 0x33F538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F538u; }
        if (ctx->pc != 0x33F538u) { return; }
    }
    ctx->pc = 0x33F538u;
label_33f538:
    // 0x33f538: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33f538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33f53c:
    // 0x33f53c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33f540:
    // 0x33f540: 0x24425580  addiu       $v0, $v0, 0x5580
    ctx->pc = 0x33f540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21888));
label_33f544:
    // 0x33f544: 0x246355b0  addiu       $v1, $v1, 0x55B0
    ctx->pc = 0x33f544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21936));
label_33f548:
    // 0x33f548: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33f548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_33f54c:
    // 0x33f54c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f550:
    // 0x33f550: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33f550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33f554:
    // 0x33f554: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x33f554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_33f558:
    // 0x33f558: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x33f558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
label_33f55c:
    // 0x33f55c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x33f55cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_33f560:
    // 0x33f560: 0xc156828  jal         func_55A0A0
label_33f564:
    if (ctx->pc == 0x33F564u) {
        ctx->pc = 0x33F564u;
            // 0x33f564: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x33F568u;
        goto label_33f568;
    }
    ctx->pc = 0x33F560u;
    SET_GPR_U32(ctx, 31, 0x33F568u);
    ctx->pc = 0x33F564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F560u;
            // 0x33f564: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55A0A0u;
    if (runtime->hasFunction(0x55A0A0u)) {
        auto targetFn = runtime->lookupFunction(0x55A0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F568u; }
        if (ctx->pc != 0x33F568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055A0A0_0x55a0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F568u; }
        if (ctx->pc != 0x33F568u) { return; }
    }
    ctx->pc = 0x33F568u;
label_33f568:
    // 0x33f568: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33f568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f56c:
    // 0x33f56c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33f56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33f570:
    // 0x33f570: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x33f570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_33f574:
    // 0x33f574: 0x320f809  jalr        $t9
label_33f578:
    if (ctx->pc == 0x33F578u) {
        ctx->pc = 0x33F578u;
            // 0x33f578: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x33F57Cu;
        goto label_33f57c;
    }
    ctx->pc = 0x33F574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F57Cu);
        ctx->pc = 0x33F578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F574u;
            // 0x33f578: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F57Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F57Cu; }
            if (ctx->pc != 0x33F57Cu) { return; }
        }
        }
    }
    ctx->pc = 0x33F57Cu;
label_33f57c:
    // 0x33f57c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33f57cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f580:
    // 0x33f580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33f580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33f584:
    // 0x33f584: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x33f584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_33f588:
    // 0x33f588: 0x320f809  jalr        $t9
label_33f58c:
    if (ctx->pc == 0x33F58Cu) {
        ctx->pc = 0x33F58Cu;
            // 0x33f58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F590u;
        goto label_33f590;
    }
    ctx->pc = 0x33F588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F590u);
        ctx->pc = 0x33F58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F588u;
            // 0x33f58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F590u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F590u; }
            if (ctx->pc != 0x33F590u) { return; }
        }
        }
    }
    ctx->pc = 0x33F590u;
label_33f590:
    // 0x33f590: 0x1000008b  b           . + 4 + (0x8B << 2)
label_33f594:
    if (ctx->pc == 0x33F594u) {
        ctx->pc = 0x33F598u;
        goto label_33f598;
    }
    ctx->pc = 0x33F590u;
    {
        const bool branch_taken_0x33f590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f590) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F598u;
label_33f598:
    // 0x33f598: 0xae220cb4  sw          $v0, 0xCB4($s1)
    ctx->pc = 0x33f598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3252), GPR_U32(ctx, 2));
label_33f59c:
    // 0x33f59c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33f59cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33f5a0:
    // 0x33f5a0: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x33f5a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_33f5a4:
    // 0x33f5a4: 0x320f809  jalr        $t9
label_33f5a8:
    if (ctx->pc == 0x33F5A8u) {
        ctx->pc = 0x33F5ACu;
        goto label_33f5ac;
    }
    ctx->pc = 0x33F5A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F5ACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F5ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F5ACu; }
            if (ctx->pc != 0x33F5ACu) { return; }
        }
        }
    }
    ctx->pc = 0x33F5ACu;
label_33f5ac:
    // 0x33f5ac: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33f5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f5b0:
    // 0x33f5b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33f5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33f5b4:
    // 0x33f5b4: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x33f5b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_33f5b8:
    // 0x33f5b8: 0x320f809  jalr        $t9
label_33f5bc:
    if (ctx->pc == 0x33F5BCu) {
        ctx->pc = 0x33F5BCu;
            // 0x33f5bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F5C0u;
        goto label_33f5c0;
    }
    ctx->pc = 0x33F5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F5C0u);
        ctx->pc = 0x33F5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F5B8u;
            // 0x33f5bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F5C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F5C0u; }
            if (ctx->pc != 0x33F5C0u) { return; }
        }
        }
    }
    ctx->pc = 0x33F5C0u;
label_33f5c0:
    // 0x33f5c0: 0x1000007f  b           . + 4 + (0x7F << 2)
label_33f5c4:
    if (ctx->pc == 0x33F5C4u) {
        ctx->pc = 0x33F5C8u;
        goto label_33f5c8;
    }
    ctx->pc = 0x33F5C0u;
    {
        const bool branch_taken_0x33f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f5c0) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F5C8u;
label_33f5c8:
    // 0x33f5c8: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x33f5c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_33f5cc:
    // 0x33f5cc: 0x320f809  jalr        $t9
label_33f5d0:
    if (ctx->pc == 0x33F5D0u) {
        ctx->pc = 0x33F5D0u;
            // 0x33f5d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F5D4u;
        goto label_33f5d4;
    }
    ctx->pc = 0x33F5CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F5D4u);
        ctx->pc = 0x33F5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F5CCu;
            // 0x33f5d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F5D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F5D4u; }
            if (ctx->pc != 0x33F5D4u) { return; }
        }
        }
    }
    ctx->pc = 0x33F5D4u;
label_33f5d4:
    // 0x33f5d4: 0x1000007a  b           . + 4 + (0x7A << 2)
label_33f5d8:
    if (ctx->pc == 0x33F5D8u) {
        ctx->pc = 0x33F5DCu;
        goto label_33f5dc;
    }
    ctx->pc = 0x33F5D4u;
    {
        const bool branch_taken_0x33f5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f5d4) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F5DCu;
label_33f5dc:
    // 0x33f5dc: 0x92230cc2  lbu         $v1, 0xCC2($s1)
    ctx->pc = 0x33f5dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3266)));
label_33f5e0:
    // 0x33f5e0: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
label_33f5e4:
    if (ctx->pc == 0x33F5E4u) {
        ctx->pc = 0x33F5E8u;
        goto label_33f5e8;
    }
    ctx->pc = 0x33F5E0u;
    {
        const bool branch_taken_0x33f5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f5e0) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F5E8u;
label_33f5e8:
    // 0x33f5e8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33f5e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f5ec:
    // 0x33f5ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33f5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33f5f0:
    // 0x33f5f0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x33f5f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_33f5f4:
    // 0x33f5f4: 0x320f809  jalr        $t9
label_33f5f8:
    if (ctx->pc == 0x33F5F8u) {
        ctx->pc = 0x33F5F8u;
            // 0x33f5f8: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->pc = 0x33F5FCu;
        goto label_33f5fc;
    }
    ctx->pc = 0x33F5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F5FCu);
        ctx->pc = 0x33F5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F5F4u;
            // 0x33f5f8: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F5FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F5FCu; }
            if (ctx->pc != 0x33F5FCu) { return; }
        }
        }
    }
    ctx->pc = 0x33F5FCu;
label_33f5fc:
    // 0x33f5fc: 0x10000070  b           . + 4 + (0x70 << 2)
label_33f600:
    if (ctx->pc == 0x33F600u) {
        ctx->pc = 0x33F604u;
        goto label_33f604;
    }
    ctx->pc = 0x33F5FCu;
    {
        const bool branch_taken_0x33f5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f5fc) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F604u;
label_33f604:
    // 0x33f604: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33f604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33f608:
    // 0x33f608: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x33f608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_33f60c:
    // 0x33f60c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x33f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_33f610:
    // 0x33f610: 0xc040180  jal         func_100600
label_33f614:
    if (ctx->pc == 0x33F614u) {
        ctx->pc = 0x33F614u;
            // 0x33f614: 0xa0460082  sb          $a2, 0x82($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 130), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x33F618u;
        goto label_33f618;
    }
    ctx->pc = 0x33F610u;
    SET_GPR_U32(ctx, 31, 0x33F618u);
    ctx->pc = 0x33F614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F610u;
            // 0x33f614: 0xa0460082  sb          $a2, 0x82($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 130), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F618u; }
        if (ctx->pc != 0x33F618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F618u; }
        if (ctx->pc != 0x33F618u) { return; }
    }
    ctx->pc = 0x33F618u;
label_33f618:
    // 0x33f618: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_33f61c:
    if (ctx->pc == 0x33F61Cu) {
        ctx->pc = 0x33F61Cu;
            // 0x33f61c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F620u;
        goto label_33f620;
    }
    ctx->pc = 0x33F618u;
    {
        const bool branch_taken_0x33f618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F618u;
            // 0x33f61c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f618) {
            ctx->pc = 0x33F66Cu;
            goto label_33f66c;
        }
    }
    ctx->pc = 0x33F620u;
label_33f620:
    // 0x33f620: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33f620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33f624:
    // 0x33f624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f628:
    // 0x33f628: 0x3445d570  ori         $a1, $v0, 0xD570
    ctx->pc = 0x33f628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
label_33f62c:
    // 0x33f62c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33f62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33f630:
    // 0x33f630: 0xc10ca68  jal         func_4329A0
label_33f634:
    if (ctx->pc == 0x33F634u) {
        ctx->pc = 0x33F634u;
            // 0x33f634: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F638u;
        goto label_33f638;
    }
    ctx->pc = 0x33F630u;
    SET_GPR_U32(ctx, 31, 0x33F638u);
    ctx->pc = 0x33F634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F630u;
            // 0x33f634: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F638u; }
        if (ctx->pc != 0x33F638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F638u; }
        if (ctx->pc != 0x33F638u) { return; }
    }
    ctx->pc = 0x33F638u;
label_33f638:
    // 0x33f638: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33f638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33f63c:
    // 0x33f63c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33f640:
    // 0x33f640: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x33f640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_33f644:
    // 0x33f644: 0x24425650  addiu       $v0, $v0, 0x5650
    ctx->pc = 0x33f644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22096));
label_33f648:
    // 0x33f648: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33f648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_33f64c:
    // 0x33f64c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33f64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_33f650:
    // 0x33f650: 0x26230ca8  addiu       $v1, $s1, 0xCA8
    ctx->pc = 0x33f650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3240));
label_33f654:
    // 0x33f654: 0xa2000054  sb          $zero, 0x54($s0)
    ctx->pc = 0x33f654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
label_33f658:
    // 0x33f658: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x33f658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_33f65c:
    // 0x33f65c: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x33f65cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
label_33f660:
    // 0x33f660: 0xa202005c  sb          $v0, 0x5C($s0)
    ctx->pc = 0x33f660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 2));
label_33f664:
    // 0x33f664: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x33f664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_33f668:
    // 0x33f668: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x33f668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_33f66c:
    // 0x33f66c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x33f66cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33f670:
    // 0x33f670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33f670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33f674:
    // 0x33f674: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x33f674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_33f678:
    // 0x33f678: 0x320f809  jalr        $t9
label_33f67c:
    if (ctx->pc == 0x33F67Cu) {
        ctx->pc = 0x33F67Cu;
            // 0x33f67c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x33F680u;
        goto label_33f680;
    }
    ctx->pc = 0x33F678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F680u);
        ctx->pc = 0x33F67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F678u;
            // 0x33f67c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F680u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F680u; }
            if (ctx->pc != 0x33F680u) { return; }
        }
        }
    }
    ctx->pc = 0x33F680u;
label_33f680:
    // 0x33f680: 0x1000004f  b           . + 4 + (0x4F << 2)
label_33f684:
    if (ctx->pc == 0x33F684u) {
        ctx->pc = 0x33F688u;
        goto label_33f688;
    }
    ctx->pc = 0x33F680u;
    {
        const bool branch_taken_0x33f680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f680) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F688u;
label_33f688:
    // 0x33f688: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
label_33f68c:
    if (ctx->pc == 0x33F68Cu) {
        ctx->pc = 0x33F690u;
        goto label_33f690;
    }
    ctx->pc = 0x33F688u;
    {
        const bool branch_taken_0x33f688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f688) {
            ctx->pc = 0x33F73Cu;
            goto label_33f73c;
        }
    }
    ctx->pc = 0x33F690u;
label_33f690:
    // 0x33f690: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33f690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33f694:
    // 0x33f694: 0xae220cb4  sw          $v0, 0xCB4($s1)
    ctx->pc = 0x33f694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3252), GPR_U32(ctx, 2));
label_33f698:
    // 0x33f698: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33f698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33f69c:
    // 0x33f69c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x33f69cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_33f6a0:
    // 0x33f6a0: 0x320f809  jalr        $t9
label_33f6a4:
    if (ctx->pc == 0x33F6A4u) {
        ctx->pc = 0x33F6A4u;
            // 0x33f6a4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x33F6A8u;
        goto label_33f6a8;
    }
    ctx->pc = 0x33F6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F6A8u);
        ctx->pc = 0x33F6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F6A0u;
            // 0x33f6a4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F6A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F6A8u; }
            if (ctx->pc != 0x33F6A8u) { return; }
        }
        }
    }
    ctx->pc = 0x33F6A8u;
label_33f6a8:
    // 0x33f6a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33f6ac:
    // 0x33f6ac: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x33f6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_33f6b0:
    // 0x33f6b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33f6b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33f6b4:
    // 0x33f6b4: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x33f6b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_33f6b8:
    // 0x33f6b8: 0x320f809  jalr        $t9
label_33f6bc:
    if (ctx->pc == 0x33F6BCu) {
        ctx->pc = 0x33F6C0u;
        goto label_33f6c0;
    }
    ctx->pc = 0x33F6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F6C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F6C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F6C0u; }
            if (ctx->pc != 0x33F6C0u) { return; }
        }
        }
    }
    ctx->pc = 0x33F6C0u;
label_33f6c0:
    // 0x33f6c0: 0xc040180  jal         func_100600
label_33f6c4:
    if (ctx->pc == 0x33F6C4u) {
        ctx->pc = 0x33F6C4u;
            // 0x33f6c4: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x33F6C8u;
        goto label_33f6c8;
    }
    ctx->pc = 0x33F6C0u;
    SET_GPR_U32(ctx, 31, 0x33F6C8u);
    ctx->pc = 0x33F6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F6C0u;
            // 0x33f6c4: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F6C8u; }
        if (ctx->pc != 0x33F6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F6C8u; }
        if (ctx->pc != 0x33F6C8u) { return; }
    }
    ctx->pc = 0x33F6C8u;
label_33f6c8:
    // 0x33f6c8: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_33f6cc:
    if (ctx->pc == 0x33F6CCu) {
        ctx->pc = 0x33F6CCu;
            // 0x33f6cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F6D0u;
        goto label_33f6d0;
    }
    ctx->pc = 0x33F6C8u;
    {
        const bool branch_taken_0x33f6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F6C8u;
            // 0x33f6cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f6c8) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F6D0u;
label_33f6d0:
    // 0x33f6d0: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x33f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_33f6d4:
    // 0x33f6d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33f6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f6d8:
    // 0x33f6d8: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x33f6d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_33f6dc:
    // 0x33f6dc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33f6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33f6e0:
    // 0x33f6e0: 0xc10ca68  jal         func_4329A0
label_33f6e4:
    if (ctx->pc == 0x33F6E4u) {
        ctx->pc = 0x33F6E4u;
            // 0x33f6e4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x33F6E8u;
        goto label_33f6e8;
    }
    ctx->pc = 0x33F6E0u;
    SET_GPR_U32(ctx, 31, 0x33F6E8u);
    ctx->pc = 0x33F6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F6E0u;
            // 0x33f6e4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F6E8u; }
        if (ctx->pc != 0x33F6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F6E8u; }
        if (ctx->pc != 0x33F6E8u) { return; }
    }
    ctx->pc = 0x33F6E8u;
label_33f6e8:
    // 0x33f6e8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x33f6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_33f6ec:
    // 0x33f6ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33f6f0:
    // 0x33f6f0: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x33f6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_33f6f4:
    // 0x33f6f4: 0x24634f60  addiu       $v1, $v1, 0x4F60
    ctx->pc = 0x33f6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20320));
label_33f6f8:
    // 0x33f6f8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x33f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_33f6fc:
    // 0x33f6fc: 0x3c05437f  lui         $a1, 0x437F
    ctx->pc = 0x33f6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17279 << 16));
label_33f700:
    // 0x33f700: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33f700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_33f704:
    // 0x33f704: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x33f704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_33f708:
    // 0x33f708: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x33f708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_33f70c:
    // 0x33f70c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x33f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_33f710:
    // 0x33f710: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x33f710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_33f714:
    // 0x33f714: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33f714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33f718:
    // 0x33f718: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x33f718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
label_33f71c:
    // 0x33f71c: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x33f71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_33f720:
    // 0x33f720: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33f720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33f724:
    // 0x33f724: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x33f724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
label_33f728:
    // 0x33f728: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x33f728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_33f72c:
    // 0x33f72c: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x33f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_33f730:
    // 0x33f730: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x33f730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_33f734:
    // 0x33f734: 0x10000022  b           . + 4 + (0x22 << 2)
label_33f738:
    if (ctx->pc == 0x33F738u) {
        ctx->pc = 0x33F738u;
            // 0x33f738: 0xa200006c  sb          $zero, 0x6C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x33F73Cu;
        goto label_33f73c;
    }
    ctx->pc = 0x33F734u;
    {
        const bool branch_taken_0x33f734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F734u;
            // 0x33f738: 0xa200006c  sb          $zero, 0x6C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f734) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F73Cu;
label_33f73c:
    // 0x33f73c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33f740:
    // 0x33f740: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x33f740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33f744:
    // 0x33f744: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x33f744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_33f748:
    // 0x33f748: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x33f748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_33f74c:
    // 0x33f74c: 0x8c640818  lw          $a0, 0x818($v1)
    ctx->pc = 0x33f74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2072)));
label_33f750:
    // 0x33f750: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x33f750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_33f754:
    // 0x33f754: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x33f754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_33f758:
    // 0x33f758: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_33f75c:
    if (ctx->pc == 0x33F75Cu) {
        ctx->pc = 0x33F75Cu;
            // 0x33f75c: 0x24a70004  addiu       $a3, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x33F760u;
        goto label_33f760;
    }
    ctx->pc = 0x33F758u;
    {
        const bool branch_taken_0x33f758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F758u;
            // 0x33f75c: 0x24a70004  addiu       $a3, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f758) {
            ctx->pc = 0x33F770u;
            goto label_33f770;
        }
    }
    ctx->pc = 0x33F760u;
label_33f760:
    // 0x33f760: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x33f760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_33f764:
    // 0x33f764: 0x8c630810  lw          $v1, 0x810($v1)
    ctx->pc = 0x33f764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2064)));
label_33f768:
    // 0x33f768: 0x601827  not         $v1, $v1
    ctx->pc = 0x33f768u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_33f76c:
    // 0x33f76c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x33f76cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_33f770:
    // 0x33f770: 0x8ce30034  lw          $v1, 0x34($a3)
    ctx->pc = 0x33f770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_33f774:
    // 0x33f774: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x33f774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
label_33f778:
    // 0x33f778: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x33f778u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_33f77c:
    // 0x33f77c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33f77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_33f780:
    // 0x33f780: 0x1000000f  b           . + 4 + (0xF << 2)
label_33f784:
    if (ctx->pc == 0x33F784u) {
        ctx->pc = 0x33F784u;
            // 0x33f784: 0xace30034  sw          $v1, 0x34($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 3));
        ctx->pc = 0x33F788u;
        goto label_33f788;
    }
    ctx->pc = 0x33F780u;
    {
        const bool branch_taken_0x33f780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F780u;
            // 0x33f784: 0xace30034  sw          $v1, 0x34($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f780) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F788u;
label_33f788:
    // 0x33f788: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x33f788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_33f78c:
    // 0x33f78c: 0x320f809  jalr        $t9
label_33f790:
    if (ctx->pc == 0x33F790u) {
        ctx->pc = 0x33F794u;
        goto label_33f794;
    }
    ctx->pc = 0x33F78Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33F794u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33F794u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33F794u; }
            if (ctx->pc != 0x33F794u) { return; }
        }
        }
    }
    ctx->pc = 0x33F794u;
label_33f794:
    // 0x33f794: 0x1000000a  b           . + 4 + (0xA << 2)
label_33f798:
    if (ctx->pc == 0x33F798u) {
        ctx->pc = 0x33F79Cu;
        goto label_33f79c;
    }
    ctx->pc = 0x33F794u;
    {
        const bool branch_taken_0x33f794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f794) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F79Cu;
label_33f79c:
    // 0x33f79c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x33f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_33f7a0:
    // 0x33f7a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33f7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33f7a4:
    // 0x33f7a4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x33f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_33f7a8:
    // 0x33f7a8: 0xc057b7c  jal         func_15EDF0
label_33f7ac:
    if (ctx->pc == 0x33F7ACu) {
        ctx->pc = 0x33F7ACu;
            // 0x33f7ac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x33F7B0u;
        goto label_33f7b0;
    }
    ctx->pc = 0x33F7A8u;
    SET_GPR_U32(ctx, 31, 0x33F7B0u);
    ctx->pc = 0x33F7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F7A8u;
            // 0x33f7ac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F7B0u; }
        if (ctx->pc != 0x33F7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F7B0u; }
        if (ctx->pc != 0x33F7B0u) { return; }
    }
    ctx->pc = 0x33F7B0u;
label_33f7b0:
    // 0x33f7b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_33f7b4:
    if (ctx->pc == 0x33F7B4u) {
        ctx->pc = 0x33F7B8u;
        goto label_33f7b8;
    }
    ctx->pc = 0x33F7B0u;
    {
        const bool branch_taken_0x33f7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f7b0) {
            ctx->pc = 0x33F7C0u;
            goto label_33f7c0;
        }
    }
    ctx->pc = 0x33F7B8u;
label_33f7b8:
    // 0x33f7b8: 0xc0cb834  jal         func_32E0D0
label_33f7bc:
    if (ctx->pc == 0x33F7BCu) {
        ctx->pc = 0x33F7C0u;
        goto label_33f7c0;
    }
    ctx->pc = 0x33F7B8u;
    SET_GPR_U32(ctx, 31, 0x33F7C0u);
    ctx->pc = 0x32E0D0u;
    if (runtime->hasFunction(0x32E0D0u)) {
        auto targetFn = runtime->lookupFunction(0x32E0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F7C0u; }
        if (ctx->pc != 0x33F7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032E0D0_0x32e0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F7C0u; }
        if (ctx->pc != 0x33F7C0u) { return; }
    }
    ctx->pc = 0x33F7C0u;
label_33f7c0:
    // 0x33f7c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33f7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_33f7c4:
    // 0x33f7c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33f7c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33f7c8:
    // 0x33f7c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33f7c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33f7cc:
    // 0x33f7cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33f7ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33f7d0:
    // 0x33f7d0: 0x3e00008  jr          $ra
label_33f7d4:
    if (ctx->pc == 0x33F7D4u) {
        ctx->pc = 0x33F7D4u;
            // 0x33f7d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x33F7D8u;
        goto label_33f7d8;
    }
    ctx->pc = 0x33F7D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F7D0u;
            // 0x33f7d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33F7D8u;
label_33f7d8:
    // 0x33f7d8: 0x0  nop
    ctx->pc = 0x33f7d8u;
    // NOP
label_33f7dc:
    // 0x33f7dc: 0x0  nop
    ctx->pc = 0x33f7dcu;
    // NOP
label_33f7e0:
    // 0x33f7e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x33f7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_33f7e4:
    // 0x33f7e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33f7e8:
    // 0x33f7e8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x33f7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_33f7ec:
    // 0x33f7ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x33f7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_33f7f0:
    // 0x33f7f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33f7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_33f7f4:
    // 0x33f7f4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x33f7f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33f7f8:
    // 0x33f7f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33f7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_33f7fc:
    // 0x33f7fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33f7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_33f800:
    // 0x33f800: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33f800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_33f804:
    // 0x33f804: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33f804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33f808:
    // 0x33f808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33f808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33f80c:
    // 0x33f80c: 0x8c450ec8  lw          $a1, 0xEC8($v0)
    ctx->pc = 0x33f80cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_33f810:
    // 0x33f810: 0x8c830968  lw          $v1, 0x968($a0)
    ctx->pc = 0x33f810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_33f814:
    // 0x33f814: 0x8c820cc4  lw          $v0, 0xCC4($a0)
    ctx->pc = 0x33f814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3268)));
label_33f818:
    // 0x33f818: 0x8cb10008  lw          $s1, 0x8($a1)
    ctx->pc = 0x33f818u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_33f81c:
    // 0x33f81c: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x33f81cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_33f820:
    // 0x33f820: 0x2e810004  sltiu       $at, $s4, 0x4
    ctx->pc = 0x33f820u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_33f824:
    // 0x33f824: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
label_33f828:
    if (ctx->pc == 0x33F828u) {
        ctx->pc = 0x33F828u;
            // 0x33f828: 0x2475ffff  addiu       $s5, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->pc = 0x33F82Cu;
        goto label_33f82c;
    }
    ctx->pc = 0x33F824u;
    {
        const bool branch_taken_0x33f824 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F824u;
            // 0x33f828: 0x2475ffff  addiu       $s5, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f824) {
            ctx->pc = 0x33F8A4u;
            goto label_33f8a4;
        }
    }
    ctx->pc = 0x33F82Cu;
label_33f82c:
    // 0x33f82c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x33f82cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33f830:
    // 0x33f830: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x33f830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33f834:
    // 0x33f834: 0x1580c0  sll         $s0, $s5, 3
    ctx->pc = 0x33f834u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_33f838:
    // 0x33f838: 0x12540007  beq         $s2, $s4, . + 4 + (0x7 << 2)
label_33f83c:
    if (ctx->pc == 0x33F83Cu) {
        ctx->pc = 0x33F840u;
        goto label_33f840;
    }
    ctx->pc = 0x33F838u;
    {
        const bool branch_taken_0x33f838 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        if (branch_taken_0x33f838) {
            ctx->pc = 0x33F858u;
            goto label_33f858;
        }
    }
    ctx->pc = 0x33F840u;
label_33f840:
    // 0x33f840: 0x2502821  addu        $a1, $s2, $s0
    ctx->pc = 0x33f840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_33f844:
    // 0x33f844: 0xc0b90e0  jal         func_2E4380
label_33f848:
    if (ctx->pc == 0x33F848u) {
        ctx->pc = 0x33F848u;
            // 0x33f848: 0x2624003c  addiu       $a0, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->pc = 0x33F84Cu;
        goto label_33f84c;
    }
    ctx->pc = 0x33F844u;
    SET_GPR_U32(ctx, 31, 0x33F84Cu);
    ctx->pc = 0x33F848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F844u;
            // 0x33f848: 0x2624003c  addiu       $a0, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F84Cu; }
        if (ctx->pc != 0x33F84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F84Cu; }
        if (ctx->pc != 0x33F84Cu) { return; }
    }
    ctx->pc = 0x33F84Cu;
label_33f84c:
    // 0x33f84c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_33f850:
    if (ctx->pc == 0x33F850u) {
        ctx->pc = 0x33F854u;
        goto label_33f854;
    }
    ctx->pc = 0x33F84Cu;
    {
        const bool branch_taken_0x33f84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f84c) {
            ctx->pc = 0x33F858u;
            goto label_33f858;
        }
    }
    ctx->pc = 0x33F854u;
label_33f854:
    // 0x33f854: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x33f854u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_33f858:
    // 0x33f858: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33f858u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_33f85c:
    // 0x33f85c: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x33f85cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_33f860:
    // 0x33f860: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_33f864:
    if (ctx->pc == 0x33F864u) {
        ctx->pc = 0x33F868u;
        goto label_33f868;
    }
    ctx->pc = 0x33F860u;
    {
        const bool branch_taken_0x33f860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f860) {
            ctx->pc = 0x33F838u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33f838;
        }
    }
    ctx->pc = 0x33F868u;
label_33f868:
    // 0x33f868: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33f868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33f86c:
    // 0x33f86c: 0x5662001e  bnel        $s3, $v0, . + 4 + (0x1E << 2)
label_33f870:
    if (ctx->pc == 0x33F870u) {
        ctx->pc = 0x33F870u;
            // 0x33f870: 0x82c70cc1  lb          $a3, 0xCC1($s6) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 3265)));
        ctx->pc = 0x33F874u;
        goto label_33f874;
    }
    ctx->pc = 0x33F86Cu;
    {
        const bool branch_taken_0x33f86c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x33f86c) {
            ctx->pc = 0x33F870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33F86Cu;
            // 0x33f870: 0x82c70cc1  lb          $a3, 0xCC1($s6) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 3265)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F8E8u;
            goto label_33f8e8;
        }
    }
    ctx->pc = 0x33F874u;
label_33f874:
    // 0x33f874: 0x2902821  addu        $a1, $s4, $s0
    ctx->pc = 0x33f874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_33f878:
    // 0x33f878: 0xc0b90e0  jal         func_2E4380
label_33f87c:
    if (ctx->pc == 0x33F87Cu) {
        ctx->pc = 0x33F87Cu;
            // 0x33f87c: 0x2624003c  addiu       $a0, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->pc = 0x33F880u;
        goto label_33f880;
    }
    ctx->pc = 0x33F878u;
    SET_GPR_U32(ctx, 31, 0x33F880u);
    ctx->pc = 0x33F87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F878u;
            // 0x33f87c: 0x2624003c  addiu       $a0, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F880u; }
        if (ctx->pc != 0x33F880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F880u; }
        if (ctx->pc != 0x33F880u) { return; }
    }
    ctx->pc = 0x33F880u;
label_33f880:
    // 0x33f880: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_33f884:
    if (ctx->pc == 0x33F884u) {
        ctx->pc = 0x33F888u;
        goto label_33f888;
    }
    ctx->pc = 0x33F880u;
    {
        const bool branch_taken_0x33f880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f880) {
            ctx->pc = 0x33F8E4u;
            goto label_33f8e4;
        }
    }
    ctx->pc = 0x33F888u;
label_33f888:
    // 0x33f888: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33f888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33f88c:
    // 0x33f88c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33f88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33f890:
    // 0x33f890: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x33f890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_33f894:
    // 0x33f894: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x33f894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_33f898:
    // 0x33f898: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33f898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33f89c:
    // 0x33f89c: 0x10000011  b           . + 4 + (0x11 << 2)
label_33f8a0:
    if (ctx->pc == 0x33F8A0u) {
        ctx->pc = 0x33F8A0u;
            // 0x33f8a0: 0xa0440096  sb          $a0, 0x96($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 150), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x33F8A4u;
        goto label_33f8a4;
    }
    ctx->pc = 0x33F89Cu;
    {
        const bool branch_taken_0x33f89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33F89Cu;
            // 0x33f8a0: 0xa0440096  sb          $a0, 0x96($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 150), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f89c) {
            ctx->pc = 0x33F8E4u;
            goto label_33f8e4;
        }
    }
    ctx->pc = 0x33F8A4u;
label_33f8a4:
    // 0x33f8a4: 0x2e810006  sltiu       $at, $s4, 0x6
    ctx->pc = 0x33f8a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_33f8a8:
    // 0x33f8a8: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_33f8ac:
    if (ctx->pc == 0x33F8ACu) {
        ctx->pc = 0x33F8B0u;
        goto label_33f8b0;
    }
    ctx->pc = 0x33F8A8u;
    {
        const bool branch_taken_0x33f8a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f8a8) {
            ctx->pc = 0x33F8E4u;
            goto label_33f8e4;
        }
    }
    ctx->pc = 0x33F8B0u;
label_33f8b0:
    // 0x33f8b0: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x33f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_33f8b4:
    // 0x33f8b4: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x33f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_33f8b8:
    // 0x33f8b8: 0xc0b90e0  jal         func_2E4380
label_33f8bc:
    if (ctx->pc == 0x33F8BCu) {
        ctx->pc = 0x33F8BCu;
            // 0x33f8bc: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->pc = 0x33F8C0u;
        goto label_33f8c0;
    }
    ctx->pc = 0x33F8B8u;
    SET_GPR_U32(ctx, 31, 0x33F8C0u);
    ctx->pc = 0x33F8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F8B8u;
            // 0x33f8bc: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F8C0u; }
        if (ctx->pc != 0x33F8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F8C0u; }
        if (ctx->pc != 0x33F8C0u) { return; }
    }
    ctx->pc = 0x33F8C0u;
label_33f8c0:
    // 0x33f8c0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_33f8c4:
    if (ctx->pc == 0x33F8C4u) {
        ctx->pc = 0x33F8C8u;
        goto label_33f8c8;
    }
    ctx->pc = 0x33F8C0u;
    {
        const bool branch_taken_0x33f8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f8c0) {
            ctx->pc = 0x33F8E4u;
            goto label_33f8e4;
        }
    }
    ctx->pc = 0x33F8C8u;
label_33f8c8:
    // 0x33f8c8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33f8cc:
    // 0x33f8cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33f8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33f8d0:
    // 0x33f8d0: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x33f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_33f8d4:
    // 0x33f8d4: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x33f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_33f8d8:
    // 0x33f8d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33f8dc:
    // 0x33f8dc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x33f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_33f8e0:
    // 0x33f8e0: 0xa0440093  sb          $a0, 0x93($v0)
    ctx->pc = 0x33f8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 147), (uint8_t)GPR_U32(ctx, 4));
label_33f8e4:
    // 0x33f8e4: 0x82c70cc1  lb          $a3, 0xCC1($s6)
    ctx->pc = 0x33f8e4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 3265)));
label_33f8e8:
    // 0x33f8e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x33f8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33f8ec:
    // 0x33f8ec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x33f8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33f8f0:
    // 0x33f8f0: 0xc1204e4  jal         func_481390
label_33f8f4:
    if (ctx->pc == 0x33F8F4u) {
        ctx->pc = 0x33F8F4u;
            // 0x33f8f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33F8F8u;
        goto label_33f8f8;
    }
    ctx->pc = 0x33F8F0u;
    SET_GPR_U32(ctx, 31, 0x33F8F8u);
    ctx->pc = 0x33F8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F8F0u;
            // 0x33f8f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481390u;
    if (runtime->hasFunction(0x481390u)) {
        auto targetFn = runtime->lookupFunction(0x481390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F8F8u; }
        if (ctx->pc != 0x33F8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481390_0x481390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F8F8u; }
        if (ctx->pc != 0x33F8F8u) { return; }
    }
    ctx->pc = 0x33F8F8u;
label_33f8f8:
    // 0x33f8f8: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x33f8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_33f8fc:
    // 0x33f8fc: 0xc0b90e0  jal         func_2E4380
label_33f900:
    if (ctx->pc == 0x33F900u) {
        ctx->pc = 0x33F900u;
            // 0x33f900: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x33F904u;
        goto label_33f904;
    }
    ctx->pc = 0x33F8FCu;
    SET_GPR_U32(ctx, 31, 0x33F904u);
    ctx->pc = 0x33F900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F8FCu;
            // 0x33f900: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F904u; }
        if (ctx->pc != 0x33F904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F904u; }
        if (ctx->pc != 0x33F904u) { return; }
    }
    ctx->pc = 0x33F904u;
label_33f904:
    // 0x33f904: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
label_33f908:
    if (ctx->pc == 0x33F908u) {
        ctx->pc = 0x33F908u;
            // 0x33f908: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x33F90Cu;
        goto label_33f90c;
    }
    ctx->pc = 0x33F904u;
    {
        const bool branch_taken_0x33f904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f904) {
            ctx->pc = 0x33F908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33F904u;
            // 0x33f908: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FA10u;
            goto label_33fa10;
        }
    }
    ctx->pc = 0x33F90Cu;
label_33f90c:
    // 0x33f90c: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x33f90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_33f910:
    // 0x33f910: 0xc0b90e0  jal         func_2E4380
label_33f914:
    if (ctx->pc == 0x33F914u) {
        ctx->pc = 0x33F914u;
            // 0x33f914: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x33F918u;
        goto label_33f918;
    }
    ctx->pc = 0x33F910u;
    SET_GPR_U32(ctx, 31, 0x33F918u);
    ctx->pc = 0x33F914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F910u;
            // 0x33f914: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F918u; }
        if (ctx->pc != 0x33F918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F918u; }
        if (ctx->pc != 0x33F918u) { return; }
    }
    ctx->pc = 0x33F918u;
label_33f918:
    // 0x33f918: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_33f91c:
    if (ctx->pc == 0x33F91Cu) {
        ctx->pc = 0x33F91Cu;
            // 0x33f91c: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = 0x33F920u;
        goto label_33f920;
    }
    ctx->pc = 0x33F918u;
    {
        const bool branch_taken_0x33f918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f918) {
            ctx->pc = 0x33F91Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33F918u;
            // 0x33f91c: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F94Cu;
            goto label_33f94c;
        }
    }
    ctx->pc = 0x33F920u;
label_33f920:
    // 0x33f920: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33f920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33f924:
    // 0x33f924: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33f924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33f928:
    // 0x33f928: 0x8c4489d0  lw          $a0, -0x7630($v0)
    ctx->pc = 0x33f928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_33f92c:
    // 0x33f92c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33f930:
    // 0x33f930: 0xa08500ec  sb          $a1, 0xEC($a0)
    ctx->pc = 0x33f930u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 236), (uint8_t)GPR_U32(ctx, 5));
label_33f934:
    // 0x33f934: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33f934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33f938:
    // 0x33f938: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x33f938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_33f93c:
    // 0x33f93c: 0xa06500ed  sb          $a1, 0xED($v1)
    ctx->pc = 0x33f93cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 237), (uint8_t)GPR_U32(ctx, 5));
label_33f940:
    // 0x33f940: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x33f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_33f944:
    // 0x33f944: 0xa04500ee  sb          $a1, 0xEE($v0)
    ctx->pc = 0x33f944u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 238), (uint8_t)GPR_U32(ctx, 5));
label_33f948:
    // 0x33f948: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x33f948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_33f94c:
    // 0x33f94c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33f94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33f950:
    // 0x33f950: 0xc0ca4b0  jal         func_3292C0
label_33f954:
    if (ctx->pc == 0x33F954u) {
        ctx->pc = 0x33F954u;
            // 0x33f954: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33F958u;
        goto label_33f958;
    }
    ctx->pc = 0x33F950u;
    SET_GPR_U32(ctx, 31, 0x33F958u);
    ctx->pc = 0x33F954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F950u;
            // 0x33f954: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F958u; }
        if (ctx->pc != 0x33F958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F958u; }
        if (ctx->pc != 0x33F958u) { return; }
    }
    ctx->pc = 0x33F958u;
label_33f958:
    // 0x33f958: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x33f958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_33f95c:
    // 0x33f95c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x33f95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_33f960:
    // 0x33f960: 0xc0ca4b0  jal         func_3292C0
label_33f964:
    if (ctx->pc == 0x33F964u) {
        ctx->pc = 0x33F964u;
            // 0x33f964: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33F968u;
        goto label_33f968;
    }
    ctx->pc = 0x33F960u;
    SET_GPR_U32(ctx, 31, 0x33F968u);
    ctx->pc = 0x33F964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F960u;
            // 0x33f964: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F968u; }
        if (ctx->pc != 0x33F968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F968u; }
        if (ctx->pc != 0x33F968u) { return; }
    }
    ctx->pc = 0x33F968u;
label_33f968:
    // 0x33f968: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x33f968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_33f96c:
    // 0x33f96c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x33f96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_33f970:
    // 0x33f970: 0xc0ca4b0  jal         func_3292C0
label_33f974:
    if (ctx->pc == 0x33F974u) {
        ctx->pc = 0x33F974u;
            // 0x33f974: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33F978u;
        goto label_33f978;
    }
    ctx->pc = 0x33F970u;
    SET_GPR_U32(ctx, 31, 0x33F978u);
    ctx->pc = 0x33F974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F970u;
            // 0x33f974: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F978u; }
        if (ctx->pc != 0x33F978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F978u; }
        if (ctx->pc != 0x33F978u) { return; }
    }
    ctx->pc = 0x33F978u;
label_33f978:
    // 0x33f978: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x33f978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_33f97c:
    // 0x33f97c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x33f97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_33f980:
    // 0x33f980: 0xc0ca4b0  jal         func_3292C0
label_33f984:
    if (ctx->pc == 0x33F984u) {
        ctx->pc = 0x33F984u;
            // 0x33f984: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33F988u;
        goto label_33f988;
    }
    ctx->pc = 0x33F980u;
    SET_GPR_U32(ctx, 31, 0x33F988u);
    ctx->pc = 0x33F984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F980u;
            // 0x33f984: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F988u; }
        if (ctx->pc != 0x33F988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F988u; }
        if (ctx->pc != 0x33F988u) { return; }
    }
    ctx->pc = 0x33F988u;
label_33f988:
    // 0x33f988: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x33f988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_33f98c:
    // 0x33f98c: 0xc0b90e0  jal         func_2E4380
label_33f990:
    if (ctx->pc == 0x33F990u) {
        ctx->pc = 0x33F990u;
            // 0x33f990: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->pc = 0x33F994u;
        goto label_33f994;
    }
    ctx->pc = 0x33F98Cu;
    SET_GPR_U32(ctx, 31, 0x33F994u);
    ctx->pc = 0x33F990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F98Cu;
            // 0x33f990: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F994u; }
        if (ctx->pc != 0x33F994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F994u; }
        if (ctx->pc != 0x33F994u) { return; }
    }
    ctx->pc = 0x33F994u;
label_33f994:
    // 0x33f994: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_33f998:
    if (ctx->pc == 0x33F998u) {
        ctx->pc = 0x33F998u;
            // 0x33f998: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->pc = 0x33F99Cu;
        goto label_33f99c;
    }
    ctx->pc = 0x33F994u;
    {
        const bool branch_taken_0x33f994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f994) {
            ctx->pc = 0x33F998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33F994u;
            // 0x33f998: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33F9B4u;
            goto label_33f9b4;
        }
    }
    ctx->pc = 0x33F99Cu;
label_33f99c:
    // 0x33f99c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33f9a0:
    // 0x33f9a0: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x33f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_33f9a4:
    // 0x33f9a4: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x33f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_33f9a8:
    // 0x33f9a8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x33f9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_33f9ac:
    // 0x33f9ac: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x33f9acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
label_33f9b0:
    // 0x33f9b0: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x33f9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_33f9b4:
    // 0x33f9b4: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x33f9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_33f9b8:
    // 0x33f9b8: 0xc0ca4b0  jal         func_3292C0
label_33f9bc:
    if (ctx->pc == 0x33F9BCu) {
        ctx->pc = 0x33F9BCu;
            // 0x33f9bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33F9C0u;
        goto label_33f9c0;
    }
    ctx->pc = 0x33F9B8u;
    SET_GPR_U32(ctx, 31, 0x33F9C0u);
    ctx->pc = 0x33F9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F9B8u;
            // 0x33f9bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F9C0u; }
        if (ctx->pc != 0x33F9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F9C0u; }
        if (ctx->pc != 0x33F9C0u) { return; }
    }
    ctx->pc = 0x33F9C0u;
label_33f9c0:
    // 0x33f9c0: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x33f9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_33f9c4:
    // 0x33f9c4: 0xc0b90e0  jal         func_2E4380
label_33f9c8:
    if (ctx->pc == 0x33F9C8u) {
        ctx->pc = 0x33F9C8u;
            // 0x33f9c8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x33F9CCu;
        goto label_33f9cc;
    }
    ctx->pc = 0x33F9C4u;
    SET_GPR_U32(ctx, 31, 0x33F9CCu);
    ctx->pc = 0x33F9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F9C4u;
            // 0x33f9c8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F9CCu; }
        if (ctx->pc != 0x33F9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F9CCu; }
        if (ctx->pc != 0x33F9CCu) { return; }
    }
    ctx->pc = 0x33F9CCu;
label_33f9cc:
    // 0x33f9cc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_33f9d0:
    if (ctx->pc == 0x33F9D0u) {
        ctx->pc = 0x33F9D4u;
        goto label_33f9d4;
    }
    ctx->pc = 0x33F9CCu;
    {
        const bool branch_taken_0x33f9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f9cc) {
            ctx->pc = 0x33FA0Cu;
            goto label_33fa0c;
        }
    }
    ctx->pc = 0x33F9D4u;
label_33f9d4:
    // 0x33f9d4: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x33f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_33f9d8:
    // 0x33f9d8: 0xc0b90e0  jal         func_2E4380
label_33f9dc:
    if (ctx->pc == 0x33F9DCu) {
        ctx->pc = 0x33F9DCu;
            // 0x33f9dc: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x33F9E0u;
        goto label_33f9e0;
    }
    ctx->pc = 0x33F9D8u;
    SET_GPR_U32(ctx, 31, 0x33F9E0u);
    ctx->pc = 0x33F9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33F9D8u;
            // 0x33f9dc: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F9E0u; }
        if (ctx->pc != 0x33F9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33F9E0u; }
        if (ctx->pc != 0x33F9E0u) { return; }
    }
    ctx->pc = 0x33F9E0u;
label_33f9e0:
    // 0x33f9e0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_33f9e4:
    if (ctx->pc == 0x33F9E4u) {
        ctx->pc = 0x33F9E4u;
            // 0x33f9e4: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->pc = 0x33F9E8u;
        goto label_33f9e8;
    }
    ctx->pc = 0x33F9E0u;
    {
        const bool branch_taken_0x33f9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f9e0) {
            ctx->pc = 0x33F9E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33F9E0u;
            // 0x33f9e4: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33FA00u;
            goto label_33fa00;
        }
    }
    ctx->pc = 0x33F9E8u;
label_33f9e8:
    // 0x33f9e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33f9ec:
    // 0x33f9ec: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x33f9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_33f9f0:
    // 0x33f9f0: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x33f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_33f9f4:
    // 0x33f9f4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x33f9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_33f9f8:
    // 0x33f9f8: 0xac620088  sw          $v0, 0x88($v1)
    ctx->pc = 0x33f9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 2));
label_33f9fc:
    // 0x33f9fc: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x33f9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_33fa00:
    // 0x33fa00: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x33fa00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_33fa04:
    // 0x33fa04: 0xc0ca4b0  jal         func_3292C0
label_33fa08:
    if (ctx->pc == 0x33FA08u) {
        ctx->pc = 0x33FA08u;
            // 0x33fa08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33FA0Cu;
        goto label_33fa0c;
    }
    ctx->pc = 0x33FA04u;
    SET_GPR_U32(ctx, 31, 0x33FA0Cu);
    ctx->pc = 0x33FA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33FA04u;
            // 0x33fa08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3292C0u;
    if (runtime->hasFunction(0x3292C0u)) {
        auto targetFn = runtime->lookupFunction(0x3292C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FA0Cu; }
        if (ctx->pc != 0x33FA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003292C0_0x3292c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33FA0Cu; }
        if (ctx->pc != 0x33FA0Cu) { return; }
    }
    ctx->pc = 0x33FA0Cu;
label_33fa0c:
    // 0x33fa0c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x33fa0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_33fa10:
    // 0x33fa10: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x33fa10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_33fa14:
    // 0x33fa14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33fa14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33fa18:
    // 0x33fa18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33fa18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33fa1c:
    // 0x33fa1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33fa1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33fa20:
    // 0x33fa20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33fa20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33fa24:
    // 0x33fa24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33fa24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33fa28:
    // 0x33fa28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33fa28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33fa2c:
    // 0x33fa2c: 0x3e00008  jr          $ra
label_33fa30:
    if (ctx->pc == 0x33FA30u) {
        ctx->pc = 0x33FA30u;
            // 0x33fa30: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x33FA34u;
        goto label_33fa34;
    }
    ctx->pc = 0x33FA2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33FA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33FA2Cu;
            // 0x33fa30: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33FA34u;
label_33fa34:
    // 0x33fa34: 0x0  nop
    ctx->pc = 0x33fa34u;
    // NOP
label_33fa38:
    // 0x33fa38: 0x0  nop
    ctx->pc = 0x33fa38u;
    // NOP
label_33fa3c:
    // 0x33fa3c: 0x0  nop
    ctx->pc = 0x33fa3cu;
    // NOP
}
