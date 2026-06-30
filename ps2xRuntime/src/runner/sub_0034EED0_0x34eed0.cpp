#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034EED0
// Address: 0x34eed0 - 0x34f9b0
void sub_0034EED0_0x34eed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EED0_0x34eed0");
#endif

    switch (ctx->pc) {
        case 0x34eed0u: goto label_34eed0;
        case 0x34eed4u: goto label_34eed4;
        case 0x34eed8u: goto label_34eed8;
        case 0x34eedcu: goto label_34eedc;
        case 0x34eee0u: goto label_34eee0;
        case 0x34eee4u: goto label_34eee4;
        case 0x34eee8u: goto label_34eee8;
        case 0x34eeecu: goto label_34eeec;
        case 0x34eef0u: goto label_34eef0;
        case 0x34eef4u: goto label_34eef4;
        case 0x34eef8u: goto label_34eef8;
        case 0x34eefcu: goto label_34eefc;
        case 0x34ef00u: goto label_34ef00;
        case 0x34ef04u: goto label_34ef04;
        case 0x34ef08u: goto label_34ef08;
        case 0x34ef0cu: goto label_34ef0c;
        case 0x34ef10u: goto label_34ef10;
        case 0x34ef14u: goto label_34ef14;
        case 0x34ef18u: goto label_34ef18;
        case 0x34ef1cu: goto label_34ef1c;
        case 0x34ef20u: goto label_34ef20;
        case 0x34ef24u: goto label_34ef24;
        case 0x34ef28u: goto label_34ef28;
        case 0x34ef2cu: goto label_34ef2c;
        case 0x34ef30u: goto label_34ef30;
        case 0x34ef34u: goto label_34ef34;
        case 0x34ef38u: goto label_34ef38;
        case 0x34ef3cu: goto label_34ef3c;
        case 0x34ef40u: goto label_34ef40;
        case 0x34ef44u: goto label_34ef44;
        case 0x34ef48u: goto label_34ef48;
        case 0x34ef4cu: goto label_34ef4c;
        case 0x34ef50u: goto label_34ef50;
        case 0x34ef54u: goto label_34ef54;
        case 0x34ef58u: goto label_34ef58;
        case 0x34ef5cu: goto label_34ef5c;
        case 0x34ef60u: goto label_34ef60;
        case 0x34ef64u: goto label_34ef64;
        case 0x34ef68u: goto label_34ef68;
        case 0x34ef6cu: goto label_34ef6c;
        case 0x34ef70u: goto label_34ef70;
        case 0x34ef74u: goto label_34ef74;
        case 0x34ef78u: goto label_34ef78;
        case 0x34ef7cu: goto label_34ef7c;
        case 0x34ef80u: goto label_34ef80;
        case 0x34ef84u: goto label_34ef84;
        case 0x34ef88u: goto label_34ef88;
        case 0x34ef8cu: goto label_34ef8c;
        case 0x34ef90u: goto label_34ef90;
        case 0x34ef94u: goto label_34ef94;
        case 0x34ef98u: goto label_34ef98;
        case 0x34ef9cu: goto label_34ef9c;
        case 0x34efa0u: goto label_34efa0;
        case 0x34efa4u: goto label_34efa4;
        case 0x34efa8u: goto label_34efa8;
        case 0x34efacu: goto label_34efac;
        case 0x34efb0u: goto label_34efb0;
        case 0x34efb4u: goto label_34efb4;
        case 0x34efb8u: goto label_34efb8;
        case 0x34efbcu: goto label_34efbc;
        case 0x34efc0u: goto label_34efc0;
        case 0x34efc4u: goto label_34efc4;
        case 0x34efc8u: goto label_34efc8;
        case 0x34efccu: goto label_34efcc;
        case 0x34efd0u: goto label_34efd0;
        case 0x34efd4u: goto label_34efd4;
        case 0x34efd8u: goto label_34efd8;
        case 0x34efdcu: goto label_34efdc;
        case 0x34efe0u: goto label_34efe0;
        case 0x34efe4u: goto label_34efe4;
        case 0x34efe8u: goto label_34efe8;
        case 0x34efecu: goto label_34efec;
        case 0x34eff0u: goto label_34eff0;
        case 0x34eff4u: goto label_34eff4;
        case 0x34eff8u: goto label_34eff8;
        case 0x34effcu: goto label_34effc;
        case 0x34f000u: goto label_34f000;
        case 0x34f004u: goto label_34f004;
        case 0x34f008u: goto label_34f008;
        case 0x34f00cu: goto label_34f00c;
        case 0x34f010u: goto label_34f010;
        case 0x34f014u: goto label_34f014;
        case 0x34f018u: goto label_34f018;
        case 0x34f01cu: goto label_34f01c;
        case 0x34f020u: goto label_34f020;
        case 0x34f024u: goto label_34f024;
        case 0x34f028u: goto label_34f028;
        case 0x34f02cu: goto label_34f02c;
        case 0x34f030u: goto label_34f030;
        case 0x34f034u: goto label_34f034;
        case 0x34f038u: goto label_34f038;
        case 0x34f03cu: goto label_34f03c;
        case 0x34f040u: goto label_34f040;
        case 0x34f044u: goto label_34f044;
        case 0x34f048u: goto label_34f048;
        case 0x34f04cu: goto label_34f04c;
        case 0x34f050u: goto label_34f050;
        case 0x34f054u: goto label_34f054;
        case 0x34f058u: goto label_34f058;
        case 0x34f05cu: goto label_34f05c;
        case 0x34f060u: goto label_34f060;
        case 0x34f064u: goto label_34f064;
        case 0x34f068u: goto label_34f068;
        case 0x34f06cu: goto label_34f06c;
        case 0x34f070u: goto label_34f070;
        case 0x34f074u: goto label_34f074;
        case 0x34f078u: goto label_34f078;
        case 0x34f07cu: goto label_34f07c;
        case 0x34f080u: goto label_34f080;
        case 0x34f084u: goto label_34f084;
        case 0x34f088u: goto label_34f088;
        case 0x34f08cu: goto label_34f08c;
        case 0x34f090u: goto label_34f090;
        case 0x34f094u: goto label_34f094;
        case 0x34f098u: goto label_34f098;
        case 0x34f09cu: goto label_34f09c;
        case 0x34f0a0u: goto label_34f0a0;
        case 0x34f0a4u: goto label_34f0a4;
        case 0x34f0a8u: goto label_34f0a8;
        case 0x34f0acu: goto label_34f0ac;
        case 0x34f0b0u: goto label_34f0b0;
        case 0x34f0b4u: goto label_34f0b4;
        case 0x34f0b8u: goto label_34f0b8;
        case 0x34f0bcu: goto label_34f0bc;
        case 0x34f0c0u: goto label_34f0c0;
        case 0x34f0c4u: goto label_34f0c4;
        case 0x34f0c8u: goto label_34f0c8;
        case 0x34f0ccu: goto label_34f0cc;
        case 0x34f0d0u: goto label_34f0d0;
        case 0x34f0d4u: goto label_34f0d4;
        case 0x34f0d8u: goto label_34f0d8;
        case 0x34f0dcu: goto label_34f0dc;
        case 0x34f0e0u: goto label_34f0e0;
        case 0x34f0e4u: goto label_34f0e4;
        case 0x34f0e8u: goto label_34f0e8;
        case 0x34f0ecu: goto label_34f0ec;
        case 0x34f0f0u: goto label_34f0f0;
        case 0x34f0f4u: goto label_34f0f4;
        case 0x34f0f8u: goto label_34f0f8;
        case 0x34f0fcu: goto label_34f0fc;
        case 0x34f100u: goto label_34f100;
        case 0x34f104u: goto label_34f104;
        case 0x34f108u: goto label_34f108;
        case 0x34f10cu: goto label_34f10c;
        case 0x34f110u: goto label_34f110;
        case 0x34f114u: goto label_34f114;
        case 0x34f118u: goto label_34f118;
        case 0x34f11cu: goto label_34f11c;
        case 0x34f120u: goto label_34f120;
        case 0x34f124u: goto label_34f124;
        case 0x34f128u: goto label_34f128;
        case 0x34f12cu: goto label_34f12c;
        case 0x34f130u: goto label_34f130;
        case 0x34f134u: goto label_34f134;
        case 0x34f138u: goto label_34f138;
        case 0x34f13cu: goto label_34f13c;
        case 0x34f140u: goto label_34f140;
        case 0x34f144u: goto label_34f144;
        case 0x34f148u: goto label_34f148;
        case 0x34f14cu: goto label_34f14c;
        case 0x34f150u: goto label_34f150;
        case 0x34f154u: goto label_34f154;
        case 0x34f158u: goto label_34f158;
        case 0x34f15cu: goto label_34f15c;
        case 0x34f160u: goto label_34f160;
        case 0x34f164u: goto label_34f164;
        case 0x34f168u: goto label_34f168;
        case 0x34f16cu: goto label_34f16c;
        case 0x34f170u: goto label_34f170;
        case 0x34f174u: goto label_34f174;
        case 0x34f178u: goto label_34f178;
        case 0x34f17cu: goto label_34f17c;
        case 0x34f180u: goto label_34f180;
        case 0x34f184u: goto label_34f184;
        case 0x34f188u: goto label_34f188;
        case 0x34f18cu: goto label_34f18c;
        case 0x34f190u: goto label_34f190;
        case 0x34f194u: goto label_34f194;
        case 0x34f198u: goto label_34f198;
        case 0x34f19cu: goto label_34f19c;
        case 0x34f1a0u: goto label_34f1a0;
        case 0x34f1a4u: goto label_34f1a4;
        case 0x34f1a8u: goto label_34f1a8;
        case 0x34f1acu: goto label_34f1ac;
        case 0x34f1b0u: goto label_34f1b0;
        case 0x34f1b4u: goto label_34f1b4;
        case 0x34f1b8u: goto label_34f1b8;
        case 0x34f1bcu: goto label_34f1bc;
        case 0x34f1c0u: goto label_34f1c0;
        case 0x34f1c4u: goto label_34f1c4;
        case 0x34f1c8u: goto label_34f1c8;
        case 0x34f1ccu: goto label_34f1cc;
        case 0x34f1d0u: goto label_34f1d0;
        case 0x34f1d4u: goto label_34f1d4;
        case 0x34f1d8u: goto label_34f1d8;
        case 0x34f1dcu: goto label_34f1dc;
        case 0x34f1e0u: goto label_34f1e0;
        case 0x34f1e4u: goto label_34f1e4;
        case 0x34f1e8u: goto label_34f1e8;
        case 0x34f1ecu: goto label_34f1ec;
        case 0x34f1f0u: goto label_34f1f0;
        case 0x34f1f4u: goto label_34f1f4;
        case 0x34f1f8u: goto label_34f1f8;
        case 0x34f1fcu: goto label_34f1fc;
        case 0x34f200u: goto label_34f200;
        case 0x34f204u: goto label_34f204;
        case 0x34f208u: goto label_34f208;
        case 0x34f20cu: goto label_34f20c;
        case 0x34f210u: goto label_34f210;
        case 0x34f214u: goto label_34f214;
        case 0x34f218u: goto label_34f218;
        case 0x34f21cu: goto label_34f21c;
        case 0x34f220u: goto label_34f220;
        case 0x34f224u: goto label_34f224;
        case 0x34f228u: goto label_34f228;
        case 0x34f22cu: goto label_34f22c;
        case 0x34f230u: goto label_34f230;
        case 0x34f234u: goto label_34f234;
        case 0x34f238u: goto label_34f238;
        case 0x34f23cu: goto label_34f23c;
        case 0x34f240u: goto label_34f240;
        case 0x34f244u: goto label_34f244;
        case 0x34f248u: goto label_34f248;
        case 0x34f24cu: goto label_34f24c;
        case 0x34f250u: goto label_34f250;
        case 0x34f254u: goto label_34f254;
        case 0x34f258u: goto label_34f258;
        case 0x34f25cu: goto label_34f25c;
        case 0x34f260u: goto label_34f260;
        case 0x34f264u: goto label_34f264;
        case 0x34f268u: goto label_34f268;
        case 0x34f26cu: goto label_34f26c;
        case 0x34f270u: goto label_34f270;
        case 0x34f274u: goto label_34f274;
        case 0x34f278u: goto label_34f278;
        case 0x34f27cu: goto label_34f27c;
        case 0x34f280u: goto label_34f280;
        case 0x34f284u: goto label_34f284;
        case 0x34f288u: goto label_34f288;
        case 0x34f28cu: goto label_34f28c;
        case 0x34f290u: goto label_34f290;
        case 0x34f294u: goto label_34f294;
        case 0x34f298u: goto label_34f298;
        case 0x34f29cu: goto label_34f29c;
        case 0x34f2a0u: goto label_34f2a0;
        case 0x34f2a4u: goto label_34f2a4;
        case 0x34f2a8u: goto label_34f2a8;
        case 0x34f2acu: goto label_34f2ac;
        case 0x34f2b0u: goto label_34f2b0;
        case 0x34f2b4u: goto label_34f2b4;
        case 0x34f2b8u: goto label_34f2b8;
        case 0x34f2bcu: goto label_34f2bc;
        case 0x34f2c0u: goto label_34f2c0;
        case 0x34f2c4u: goto label_34f2c4;
        case 0x34f2c8u: goto label_34f2c8;
        case 0x34f2ccu: goto label_34f2cc;
        case 0x34f2d0u: goto label_34f2d0;
        case 0x34f2d4u: goto label_34f2d4;
        case 0x34f2d8u: goto label_34f2d8;
        case 0x34f2dcu: goto label_34f2dc;
        case 0x34f2e0u: goto label_34f2e0;
        case 0x34f2e4u: goto label_34f2e4;
        case 0x34f2e8u: goto label_34f2e8;
        case 0x34f2ecu: goto label_34f2ec;
        case 0x34f2f0u: goto label_34f2f0;
        case 0x34f2f4u: goto label_34f2f4;
        case 0x34f2f8u: goto label_34f2f8;
        case 0x34f2fcu: goto label_34f2fc;
        case 0x34f300u: goto label_34f300;
        case 0x34f304u: goto label_34f304;
        case 0x34f308u: goto label_34f308;
        case 0x34f30cu: goto label_34f30c;
        case 0x34f310u: goto label_34f310;
        case 0x34f314u: goto label_34f314;
        case 0x34f318u: goto label_34f318;
        case 0x34f31cu: goto label_34f31c;
        case 0x34f320u: goto label_34f320;
        case 0x34f324u: goto label_34f324;
        case 0x34f328u: goto label_34f328;
        case 0x34f32cu: goto label_34f32c;
        case 0x34f330u: goto label_34f330;
        case 0x34f334u: goto label_34f334;
        case 0x34f338u: goto label_34f338;
        case 0x34f33cu: goto label_34f33c;
        case 0x34f340u: goto label_34f340;
        case 0x34f344u: goto label_34f344;
        case 0x34f348u: goto label_34f348;
        case 0x34f34cu: goto label_34f34c;
        case 0x34f350u: goto label_34f350;
        case 0x34f354u: goto label_34f354;
        case 0x34f358u: goto label_34f358;
        case 0x34f35cu: goto label_34f35c;
        case 0x34f360u: goto label_34f360;
        case 0x34f364u: goto label_34f364;
        case 0x34f368u: goto label_34f368;
        case 0x34f36cu: goto label_34f36c;
        case 0x34f370u: goto label_34f370;
        case 0x34f374u: goto label_34f374;
        case 0x34f378u: goto label_34f378;
        case 0x34f37cu: goto label_34f37c;
        case 0x34f380u: goto label_34f380;
        case 0x34f384u: goto label_34f384;
        case 0x34f388u: goto label_34f388;
        case 0x34f38cu: goto label_34f38c;
        case 0x34f390u: goto label_34f390;
        case 0x34f394u: goto label_34f394;
        case 0x34f398u: goto label_34f398;
        case 0x34f39cu: goto label_34f39c;
        case 0x34f3a0u: goto label_34f3a0;
        case 0x34f3a4u: goto label_34f3a4;
        case 0x34f3a8u: goto label_34f3a8;
        case 0x34f3acu: goto label_34f3ac;
        case 0x34f3b0u: goto label_34f3b0;
        case 0x34f3b4u: goto label_34f3b4;
        case 0x34f3b8u: goto label_34f3b8;
        case 0x34f3bcu: goto label_34f3bc;
        case 0x34f3c0u: goto label_34f3c0;
        case 0x34f3c4u: goto label_34f3c4;
        case 0x34f3c8u: goto label_34f3c8;
        case 0x34f3ccu: goto label_34f3cc;
        case 0x34f3d0u: goto label_34f3d0;
        case 0x34f3d4u: goto label_34f3d4;
        case 0x34f3d8u: goto label_34f3d8;
        case 0x34f3dcu: goto label_34f3dc;
        case 0x34f3e0u: goto label_34f3e0;
        case 0x34f3e4u: goto label_34f3e4;
        case 0x34f3e8u: goto label_34f3e8;
        case 0x34f3ecu: goto label_34f3ec;
        case 0x34f3f0u: goto label_34f3f0;
        case 0x34f3f4u: goto label_34f3f4;
        case 0x34f3f8u: goto label_34f3f8;
        case 0x34f3fcu: goto label_34f3fc;
        case 0x34f400u: goto label_34f400;
        case 0x34f404u: goto label_34f404;
        case 0x34f408u: goto label_34f408;
        case 0x34f40cu: goto label_34f40c;
        case 0x34f410u: goto label_34f410;
        case 0x34f414u: goto label_34f414;
        case 0x34f418u: goto label_34f418;
        case 0x34f41cu: goto label_34f41c;
        case 0x34f420u: goto label_34f420;
        case 0x34f424u: goto label_34f424;
        case 0x34f428u: goto label_34f428;
        case 0x34f42cu: goto label_34f42c;
        case 0x34f430u: goto label_34f430;
        case 0x34f434u: goto label_34f434;
        case 0x34f438u: goto label_34f438;
        case 0x34f43cu: goto label_34f43c;
        case 0x34f440u: goto label_34f440;
        case 0x34f444u: goto label_34f444;
        case 0x34f448u: goto label_34f448;
        case 0x34f44cu: goto label_34f44c;
        case 0x34f450u: goto label_34f450;
        case 0x34f454u: goto label_34f454;
        case 0x34f458u: goto label_34f458;
        case 0x34f45cu: goto label_34f45c;
        case 0x34f460u: goto label_34f460;
        case 0x34f464u: goto label_34f464;
        case 0x34f468u: goto label_34f468;
        case 0x34f46cu: goto label_34f46c;
        case 0x34f470u: goto label_34f470;
        case 0x34f474u: goto label_34f474;
        case 0x34f478u: goto label_34f478;
        case 0x34f47cu: goto label_34f47c;
        case 0x34f480u: goto label_34f480;
        case 0x34f484u: goto label_34f484;
        case 0x34f488u: goto label_34f488;
        case 0x34f48cu: goto label_34f48c;
        case 0x34f490u: goto label_34f490;
        case 0x34f494u: goto label_34f494;
        case 0x34f498u: goto label_34f498;
        case 0x34f49cu: goto label_34f49c;
        case 0x34f4a0u: goto label_34f4a0;
        case 0x34f4a4u: goto label_34f4a4;
        case 0x34f4a8u: goto label_34f4a8;
        case 0x34f4acu: goto label_34f4ac;
        case 0x34f4b0u: goto label_34f4b0;
        case 0x34f4b4u: goto label_34f4b4;
        case 0x34f4b8u: goto label_34f4b8;
        case 0x34f4bcu: goto label_34f4bc;
        case 0x34f4c0u: goto label_34f4c0;
        case 0x34f4c4u: goto label_34f4c4;
        case 0x34f4c8u: goto label_34f4c8;
        case 0x34f4ccu: goto label_34f4cc;
        case 0x34f4d0u: goto label_34f4d0;
        case 0x34f4d4u: goto label_34f4d4;
        case 0x34f4d8u: goto label_34f4d8;
        case 0x34f4dcu: goto label_34f4dc;
        case 0x34f4e0u: goto label_34f4e0;
        case 0x34f4e4u: goto label_34f4e4;
        case 0x34f4e8u: goto label_34f4e8;
        case 0x34f4ecu: goto label_34f4ec;
        case 0x34f4f0u: goto label_34f4f0;
        case 0x34f4f4u: goto label_34f4f4;
        case 0x34f4f8u: goto label_34f4f8;
        case 0x34f4fcu: goto label_34f4fc;
        case 0x34f500u: goto label_34f500;
        case 0x34f504u: goto label_34f504;
        case 0x34f508u: goto label_34f508;
        case 0x34f50cu: goto label_34f50c;
        case 0x34f510u: goto label_34f510;
        case 0x34f514u: goto label_34f514;
        case 0x34f518u: goto label_34f518;
        case 0x34f51cu: goto label_34f51c;
        case 0x34f520u: goto label_34f520;
        case 0x34f524u: goto label_34f524;
        case 0x34f528u: goto label_34f528;
        case 0x34f52cu: goto label_34f52c;
        case 0x34f530u: goto label_34f530;
        case 0x34f534u: goto label_34f534;
        case 0x34f538u: goto label_34f538;
        case 0x34f53cu: goto label_34f53c;
        case 0x34f540u: goto label_34f540;
        case 0x34f544u: goto label_34f544;
        case 0x34f548u: goto label_34f548;
        case 0x34f54cu: goto label_34f54c;
        case 0x34f550u: goto label_34f550;
        case 0x34f554u: goto label_34f554;
        case 0x34f558u: goto label_34f558;
        case 0x34f55cu: goto label_34f55c;
        case 0x34f560u: goto label_34f560;
        case 0x34f564u: goto label_34f564;
        case 0x34f568u: goto label_34f568;
        case 0x34f56cu: goto label_34f56c;
        case 0x34f570u: goto label_34f570;
        case 0x34f574u: goto label_34f574;
        case 0x34f578u: goto label_34f578;
        case 0x34f57cu: goto label_34f57c;
        case 0x34f580u: goto label_34f580;
        case 0x34f584u: goto label_34f584;
        case 0x34f588u: goto label_34f588;
        case 0x34f58cu: goto label_34f58c;
        case 0x34f590u: goto label_34f590;
        case 0x34f594u: goto label_34f594;
        case 0x34f598u: goto label_34f598;
        case 0x34f59cu: goto label_34f59c;
        case 0x34f5a0u: goto label_34f5a0;
        case 0x34f5a4u: goto label_34f5a4;
        case 0x34f5a8u: goto label_34f5a8;
        case 0x34f5acu: goto label_34f5ac;
        case 0x34f5b0u: goto label_34f5b0;
        case 0x34f5b4u: goto label_34f5b4;
        case 0x34f5b8u: goto label_34f5b8;
        case 0x34f5bcu: goto label_34f5bc;
        case 0x34f5c0u: goto label_34f5c0;
        case 0x34f5c4u: goto label_34f5c4;
        case 0x34f5c8u: goto label_34f5c8;
        case 0x34f5ccu: goto label_34f5cc;
        case 0x34f5d0u: goto label_34f5d0;
        case 0x34f5d4u: goto label_34f5d4;
        case 0x34f5d8u: goto label_34f5d8;
        case 0x34f5dcu: goto label_34f5dc;
        case 0x34f5e0u: goto label_34f5e0;
        case 0x34f5e4u: goto label_34f5e4;
        case 0x34f5e8u: goto label_34f5e8;
        case 0x34f5ecu: goto label_34f5ec;
        case 0x34f5f0u: goto label_34f5f0;
        case 0x34f5f4u: goto label_34f5f4;
        case 0x34f5f8u: goto label_34f5f8;
        case 0x34f5fcu: goto label_34f5fc;
        case 0x34f600u: goto label_34f600;
        case 0x34f604u: goto label_34f604;
        case 0x34f608u: goto label_34f608;
        case 0x34f60cu: goto label_34f60c;
        case 0x34f610u: goto label_34f610;
        case 0x34f614u: goto label_34f614;
        case 0x34f618u: goto label_34f618;
        case 0x34f61cu: goto label_34f61c;
        case 0x34f620u: goto label_34f620;
        case 0x34f624u: goto label_34f624;
        case 0x34f628u: goto label_34f628;
        case 0x34f62cu: goto label_34f62c;
        case 0x34f630u: goto label_34f630;
        case 0x34f634u: goto label_34f634;
        case 0x34f638u: goto label_34f638;
        case 0x34f63cu: goto label_34f63c;
        case 0x34f640u: goto label_34f640;
        case 0x34f644u: goto label_34f644;
        case 0x34f648u: goto label_34f648;
        case 0x34f64cu: goto label_34f64c;
        case 0x34f650u: goto label_34f650;
        case 0x34f654u: goto label_34f654;
        case 0x34f658u: goto label_34f658;
        case 0x34f65cu: goto label_34f65c;
        case 0x34f660u: goto label_34f660;
        case 0x34f664u: goto label_34f664;
        case 0x34f668u: goto label_34f668;
        case 0x34f66cu: goto label_34f66c;
        case 0x34f670u: goto label_34f670;
        case 0x34f674u: goto label_34f674;
        case 0x34f678u: goto label_34f678;
        case 0x34f67cu: goto label_34f67c;
        case 0x34f680u: goto label_34f680;
        case 0x34f684u: goto label_34f684;
        case 0x34f688u: goto label_34f688;
        case 0x34f68cu: goto label_34f68c;
        case 0x34f690u: goto label_34f690;
        case 0x34f694u: goto label_34f694;
        case 0x34f698u: goto label_34f698;
        case 0x34f69cu: goto label_34f69c;
        case 0x34f6a0u: goto label_34f6a0;
        case 0x34f6a4u: goto label_34f6a4;
        case 0x34f6a8u: goto label_34f6a8;
        case 0x34f6acu: goto label_34f6ac;
        case 0x34f6b0u: goto label_34f6b0;
        case 0x34f6b4u: goto label_34f6b4;
        case 0x34f6b8u: goto label_34f6b8;
        case 0x34f6bcu: goto label_34f6bc;
        case 0x34f6c0u: goto label_34f6c0;
        case 0x34f6c4u: goto label_34f6c4;
        case 0x34f6c8u: goto label_34f6c8;
        case 0x34f6ccu: goto label_34f6cc;
        case 0x34f6d0u: goto label_34f6d0;
        case 0x34f6d4u: goto label_34f6d4;
        case 0x34f6d8u: goto label_34f6d8;
        case 0x34f6dcu: goto label_34f6dc;
        case 0x34f6e0u: goto label_34f6e0;
        case 0x34f6e4u: goto label_34f6e4;
        case 0x34f6e8u: goto label_34f6e8;
        case 0x34f6ecu: goto label_34f6ec;
        case 0x34f6f0u: goto label_34f6f0;
        case 0x34f6f4u: goto label_34f6f4;
        case 0x34f6f8u: goto label_34f6f8;
        case 0x34f6fcu: goto label_34f6fc;
        case 0x34f700u: goto label_34f700;
        case 0x34f704u: goto label_34f704;
        case 0x34f708u: goto label_34f708;
        case 0x34f70cu: goto label_34f70c;
        case 0x34f710u: goto label_34f710;
        case 0x34f714u: goto label_34f714;
        case 0x34f718u: goto label_34f718;
        case 0x34f71cu: goto label_34f71c;
        case 0x34f720u: goto label_34f720;
        case 0x34f724u: goto label_34f724;
        case 0x34f728u: goto label_34f728;
        case 0x34f72cu: goto label_34f72c;
        case 0x34f730u: goto label_34f730;
        case 0x34f734u: goto label_34f734;
        case 0x34f738u: goto label_34f738;
        case 0x34f73cu: goto label_34f73c;
        case 0x34f740u: goto label_34f740;
        case 0x34f744u: goto label_34f744;
        case 0x34f748u: goto label_34f748;
        case 0x34f74cu: goto label_34f74c;
        case 0x34f750u: goto label_34f750;
        case 0x34f754u: goto label_34f754;
        case 0x34f758u: goto label_34f758;
        case 0x34f75cu: goto label_34f75c;
        case 0x34f760u: goto label_34f760;
        case 0x34f764u: goto label_34f764;
        case 0x34f768u: goto label_34f768;
        case 0x34f76cu: goto label_34f76c;
        case 0x34f770u: goto label_34f770;
        case 0x34f774u: goto label_34f774;
        case 0x34f778u: goto label_34f778;
        case 0x34f77cu: goto label_34f77c;
        case 0x34f780u: goto label_34f780;
        case 0x34f784u: goto label_34f784;
        case 0x34f788u: goto label_34f788;
        case 0x34f78cu: goto label_34f78c;
        case 0x34f790u: goto label_34f790;
        case 0x34f794u: goto label_34f794;
        case 0x34f798u: goto label_34f798;
        case 0x34f79cu: goto label_34f79c;
        case 0x34f7a0u: goto label_34f7a0;
        case 0x34f7a4u: goto label_34f7a4;
        case 0x34f7a8u: goto label_34f7a8;
        case 0x34f7acu: goto label_34f7ac;
        case 0x34f7b0u: goto label_34f7b0;
        case 0x34f7b4u: goto label_34f7b4;
        case 0x34f7b8u: goto label_34f7b8;
        case 0x34f7bcu: goto label_34f7bc;
        case 0x34f7c0u: goto label_34f7c0;
        case 0x34f7c4u: goto label_34f7c4;
        case 0x34f7c8u: goto label_34f7c8;
        case 0x34f7ccu: goto label_34f7cc;
        case 0x34f7d0u: goto label_34f7d0;
        case 0x34f7d4u: goto label_34f7d4;
        case 0x34f7d8u: goto label_34f7d8;
        case 0x34f7dcu: goto label_34f7dc;
        case 0x34f7e0u: goto label_34f7e0;
        case 0x34f7e4u: goto label_34f7e4;
        case 0x34f7e8u: goto label_34f7e8;
        case 0x34f7ecu: goto label_34f7ec;
        case 0x34f7f0u: goto label_34f7f0;
        case 0x34f7f4u: goto label_34f7f4;
        case 0x34f7f8u: goto label_34f7f8;
        case 0x34f7fcu: goto label_34f7fc;
        case 0x34f800u: goto label_34f800;
        case 0x34f804u: goto label_34f804;
        case 0x34f808u: goto label_34f808;
        case 0x34f80cu: goto label_34f80c;
        case 0x34f810u: goto label_34f810;
        case 0x34f814u: goto label_34f814;
        case 0x34f818u: goto label_34f818;
        case 0x34f81cu: goto label_34f81c;
        case 0x34f820u: goto label_34f820;
        case 0x34f824u: goto label_34f824;
        case 0x34f828u: goto label_34f828;
        case 0x34f82cu: goto label_34f82c;
        case 0x34f830u: goto label_34f830;
        case 0x34f834u: goto label_34f834;
        case 0x34f838u: goto label_34f838;
        case 0x34f83cu: goto label_34f83c;
        case 0x34f840u: goto label_34f840;
        case 0x34f844u: goto label_34f844;
        case 0x34f848u: goto label_34f848;
        case 0x34f84cu: goto label_34f84c;
        case 0x34f850u: goto label_34f850;
        case 0x34f854u: goto label_34f854;
        case 0x34f858u: goto label_34f858;
        case 0x34f85cu: goto label_34f85c;
        case 0x34f860u: goto label_34f860;
        case 0x34f864u: goto label_34f864;
        case 0x34f868u: goto label_34f868;
        case 0x34f86cu: goto label_34f86c;
        case 0x34f870u: goto label_34f870;
        case 0x34f874u: goto label_34f874;
        case 0x34f878u: goto label_34f878;
        case 0x34f87cu: goto label_34f87c;
        case 0x34f880u: goto label_34f880;
        case 0x34f884u: goto label_34f884;
        case 0x34f888u: goto label_34f888;
        case 0x34f88cu: goto label_34f88c;
        case 0x34f890u: goto label_34f890;
        case 0x34f894u: goto label_34f894;
        case 0x34f898u: goto label_34f898;
        case 0x34f89cu: goto label_34f89c;
        case 0x34f8a0u: goto label_34f8a0;
        case 0x34f8a4u: goto label_34f8a4;
        case 0x34f8a8u: goto label_34f8a8;
        case 0x34f8acu: goto label_34f8ac;
        case 0x34f8b0u: goto label_34f8b0;
        case 0x34f8b4u: goto label_34f8b4;
        case 0x34f8b8u: goto label_34f8b8;
        case 0x34f8bcu: goto label_34f8bc;
        case 0x34f8c0u: goto label_34f8c0;
        case 0x34f8c4u: goto label_34f8c4;
        case 0x34f8c8u: goto label_34f8c8;
        case 0x34f8ccu: goto label_34f8cc;
        case 0x34f8d0u: goto label_34f8d0;
        case 0x34f8d4u: goto label_34f8d4;
        case 0x34f8d8u: goto label_34f8d8;
        case 0x34f8dcu: goto label_34f8dc;
        case 0x34f8e0u: goto label_34f8e0;
        case 0x34f8e4u: goto label_34f8e4;
        case 0x34f8e8u: goto label_34f8e8;
        case 0x34f8ecu: goto label_34f8ec;
        case 0x34f8f0u: goto label_34f8f0;
        case 0x34f8f4u: goto label_34f8f4;
        case 0x34f8f8u: goto label_34f8f8;
        case 0x34f8fcu: goto label_34f8fc;
        case 0x34f900u: goto label_34f900;
        case 0x34f904u: goto label_34f904;
        case 0x34f908u: goto label_34f908;
        case 0x34f90cu: goto label_34f90c;
        case 0x34f910u: goto label_34f910;
        case 0x34f914u: goto label_34f914;
        case 0x34f918u: goto label_34f918;
        case 0x34f91cu: goto label_34f91c;
        case 0x34f920u: goto label_34f920;
        case 0x34f924u: goto label_34f924;
        case 0x34f928u: goto label_34f928;
        case 0x34f92cu: goto label_34f92c;
        case 0x34f930u: goto label_34f930;
        case 0x34f934u: goto label_34f934;
        case 0x34f938u: goto label_34f938;
        case 0x34f93cu: goto label_34f93c;
        case 0x34f940u: goto label_34f940;
        case 0x34f944u: goto label_34f944;
        case 0x34f948u: goto label_34f948;
        case 0x34f94cu: goto label_34f94c;
        case 0x34f950u: goto label_34f950;
        case 0x34f954u: goto label_34f954;
        case 0x34f958u: goto label_34f958;
        case 0x34f95cu: goto label_34f95c;
        case 0x34f960u: goto label_34f960;
        case 0x34f964u: goto label_34f964;
        case 0x34f968u: goto label_34f968;
        case 0x34f96cu: goto label_34f96c;
        case 0x34f970u: goto label_34f970;
        case 0x34f974u: goto label_34f974;
        case 0x34f978u: goto label_34f978;
        case 0x34f97cu: goto label_34f97c;
        case 0x34f980u: goto label_34f980;
        case 0x34f984u: goto label_34f984;
        case 0x34f988u: goto label_34f988;
        case 0x34f98cu: goto label_34f98c;
        case 0x34f990u: goto label_34f990;
        case 0x34f994u: goto label_34f994;
        case 0x34f998u: goto label_34f998;
        case 0x34f99cu: goto label_34f99c;
        case 0x34f9a0u: goto label_34f9a0;
        case 0x34f9a4u: goto label_34f9a4;
        case 0x34f9a8u: goto label_34f9a8;
        case 0x34f9acu: goto label_34f9ac;
        default: break;
    }

    ctx->pc = 0x34eed0u;

label_34eed0:
    // 0x34eed0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x34eed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_34eed4:
    // 0x34eed4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34eed8:
    // 0x34eed8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x34eed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_34eedc:
    // 0x34eedc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x34eedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_34eee0:
    // 0x34eee0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x34eee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_34eee4:
    // 0x34eee4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x34eee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_34eee8:
    // 0x34eee8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x34eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_34eeec:
    // 0x34eeec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x34eeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_34eef0:
    // 0x34eef0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x34eef0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34eef4:
    // 0x34eef4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x34eef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_34eef8:
    // 0x34eef8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x34eef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_34eefc:
    // 0x34eefc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x34eefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_34ef00:
    // 0x34ef00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x34ef00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_34ef04:
    // 0x34ef04: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x34ef04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_34ef08:
    // 0x34ef08: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x34ef08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_34ef0c:
    // 0x34ef0c: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x34ef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_34ef10:
    // 0x34ef10: 0x508300d3  beql        $a0, $v1, . + 4 + (0xD3 << 2)
label_34ef14:
    if (ctx->pc == 0x34EF14u) {
        ctx->pc = 0x34EF14u;
            // 0x34ef14: 0x92a300a4  lbu         $v1, 0xA4($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 164)));
        ctx->pc = 0x34EF18u;
        goto label_34ef18;
    }
    ctx->pc = 0x34EF10u;
    {
        const bool branch_taken_0x34ef10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34ef10) {
            ctx->pc = 0x34EF14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34EF10u;
            // 0x34ef14: 0x92a300a4  lbu         $v1, 0xA4($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F260u;
            goto label_34f260;
        }
    }
    ctx->pc = 0x34EF18u;
label_34ef18:
    // 0x34ef18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34ef18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34ef1c:
    // 0x34ef1c: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
label_34ef20:
    if (ctx->pc == 0x34EF20u) {
        ctx->pc = 0x34EF24u;
        goto label_34ef24;
    }
    ctx->pc = 0x34EF1Cu;
    {
        const bool branch_taken_0x34ef1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34ef1c) {
            ctx->pc = 0x34F004u;
            goto label_34f004;
        }
    }
    ctx->pc = 0x34EF24u;
label_34ef24:
    // 0x34ef24: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_34ef28:
    if (ctx->pc == 0x34EF28u) {
        ctx->pc = 0x34EF28u;
            // 0x34ef28: 0x8ea5003c  lw          $a1, 0x3C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
        ctx->pc = 0x34EF2Cu;
        goto label_34ef2c;
    }
    ctx->pc = 0x34EF24u;
    {
        const bool branch_taken_0x34ef24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ef24) {
            ctx->pc = 0x34EF28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34EF24u;
            // 0x34ef28: 0x8ea5003c  lw          $a1, 0x3C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34EF34u;
            goto label_34ef34;
        }
    }
    ctx->pc = 0x34EF2Cu;
label_34ef2c:
    // 0x34ef2c: 0x1000028f  b           . + 4 + (0x28F << 2)
label_34ef30:
    if (ctx->pc == 0x34EF30u) {
        ctx->pc = 0x34EF30u;
            // 0x34ef30: 0xa2a000a4  sb          $zero, 0xA4($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 164), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x34EF34u;
        goto label_34ef34;
    }
    ctx->pc = 0x34EF2Cu;
    {
        const bool branch_taken_0x34ef2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EF2Cu;
            // 0x34ef30: 0xa2a000a4  sb          $zero, 0xA4($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 164), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ef2c) {
            ctx->pc = 0x34F96Cu;
            goto label_34f96c;
        }
    }
    ctx->pc = 0x34EF34u;
label_34ef34:
    // 0x34ef34: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x34ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_34ef38:
    // 0x34ef38: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x34ef38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_34ef3c:
    // 0x34ef3c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x34ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_34ef40:
    // 0x34ef40: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x34ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_34ef44:
    // 0x34ef44: 0x24631650  addiu       $v1, $v1, 0x1650
    ctx->pc = 0x34ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5712));
label_34ef48:
    // 0x34ef48: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x34ef48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34ef4c:
    // 0x34ef4c: 0x3444f000  ori         $a0, $v0, 0xF000
    ctx->pc = 0x34ef4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_34ef50:
    // 0x34ef50: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34ef50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_34ef54:
    // 0x34ef54: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_34ef58:
    // 0x34ef58: 0x244234f0  addiu       $v0, $v0, 0x34F0
    ctx->pc = 0x34ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13552));
label_34ef5c:
    // 0x34ef5c: 0xe6a0009c  swc1        $f0, 0x9C($s5)
    ctx->pc = 0x34ef5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 156), bits); }
label_34ef60:
    // 0x34ef60: 0xc6a00030  lwc1        $f0, 0x30($s5)
    ctx->pc = 0x34ef60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34ef64:
    // 0x34ef64: 0xe6a00084  swc1        $f0, 0x84($s5)
    ctx->pc = 0x34ef64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 132), bits); }
label_34ef68:
    // 0x34ef68: 0xc6a00034  lwc1        $f0, 0x34($s5)
    ctx->pc = 0x34ef68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34ef6c:
    // 0x34ef6c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x34ef6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_34ef70:
    // 0x34ef70: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x34ef70u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_34ef74:
    // 0x34ef74: 0xe6a0008c  swc1        $f0, 0x8C($s5)
    ctx->pc = 0x34ef74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 140), bits); }
label_34ef78:
    // 0x34ef78: 0xc6a00038  lwc1        $f0, 0x38($s5)
    ctx->pc = 0x34ef78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34ef7c:
    // 0x34ef7c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x34ef7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_34ef80:
    // 0x34ef80: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x34ef80u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_34ef84:
    // 0x34ef84: 0xe6a00094  swc1        $f0, 0x94($s5)
    ctx->pc = 0x34ef84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 148), bits); }
label_34ef88:
    // 0x34ef88: 0x8ea50040  lw          $a1, 0x40($s5)
    ctx->pc = 0x34ef88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_34ef8c:
    // 0x34ef8c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x34ef8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_34ef90:
    // 0x34ef90: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x34ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_34ef94:
    // 0x34ef94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x34ef94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_34ef98:
    // 0x34ef98: 0xaea30060  sw          $v1, 0x60($s5)
    ctx->pc = 0x34ef98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 3));
label_34ef9c:
    // 0x34ef9c: 0x8ea30040  lw          $v1, 0x40($s5)
    ctx->pc = 0x34ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_34efa0:
    // 0x34efa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_34efa4:
    // 0x34efa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34efa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34efa8:
    // 0x34efa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34efac:
    // 0x34efac: 0xa2a200a1  sb          $v0, 0xA1($s5)
    ctx->pc = 0x34efacu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 161), (uint8_t)GPR_U32(ctx, 2));
label_34efb0:
    // 0x34efb0: 0x82a300a2  lb          $v1, 0xA2($s5)
    ctx->pc = 0x34efb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 162)));
label_34efb4:
    // 0x34efb4: 0x8ea20060  lw          $v0, 0x60($s5)
    ctx->pc = 0x34efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_34efb8:
    // 0x34efb8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x34efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_34efbc:
    // 0x34efbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34efc0:
    // 0x34efc0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x34efc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34efc4:
    // 0x34efc4: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x34efc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_34efc8:
    // 0x34efc8: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x34efc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_34efcc:
    // 0x34efcc: 0xc04cbd8  jal         func_132F60
label_34efd0:
    if (ctx->pc == 0x34EFD0u) {
        ctx->pc = 0x34EFD0u;
            // 0x34efd0: 0x26a40010  addiu       $a0, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x34EFD4u;
        goto label_34efd4;
    }
    ctx->pc = 0x34EFCCu;
    SET_GPR_U32(ctx, 31, 0x34EFD4u);
    ctx->pc = 0x34EFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EFCCu;
            // 0x34efd0: 0x26a40010  addiu       $a0, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EFD4u; }
        if (ctx->pc != 0x34EFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EFD4u; }
        if (ctx->pc != 0x34EFD4u) { return; }
    }
    ctx->pc = 0x34EFD4u;
label_34efd4:
    // 0x34efd4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x34efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_34efd8:
    // 0x34efd8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x34efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_34efdc:
    // 0x34efdc: 0x8c850e84  lw          $a1, 0xE84($a0)
    ctx->pc = 0x34efdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3716)));
label_34efe0:
    // 0x34efe0: 0xaea5005c  sw          $a1, 0x5C($s5)
    ctx->pc = 0x34efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 5));
label_34efe4:
    // 0x34efe4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34efe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34efe8:
    // 0x34efe8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x34efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_34efec:
    // 0x34efec: 0x8c630780  lw          $v1, 0x780($v1)
    ctx->pc = 0x34efecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1920)));
label_34eff0:
    // 0x34eff0: 0xa2a300a3  sb          $v1, 0xA3($s5)
    ctx->pc = 0x34eff0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 163), (uint8_t)GPR_U32(ctx, 3));
label_34eff4:
    // 0x34eff4: 0xaea40080  sw          $a0, 0x80($s5)
    ctx->pc = 0x34eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 4));
label_34eff8:
    // 0x34eff8: 0xaea00088  sw          $zero, 0x88($s5)
    ctx->pc = 0x34eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 136), GPR_U32(ctx, 0));
label_34effc:
    // 0x34effc: 0x1000025a  b           . + 4 + (0x25A << 2)
label_34f000:
    if (ctx->pc == 0x34F000u) {
        ctx->pc = 0x34F000u;
            // 0x34f000: 0xaea00090  sw          $zero, 0x90($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 144), GPR_U32(ctx, 0));
        ctx->pc = 0x34F004u;
        goto label_34f004;
    }
    ctx->pc = 0x34EFFCu;
    {
        const bool branch_taken_0x34effc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EFFCu;
            // 0x34f000: 0xaea00090  sw          $zero, 0x90($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34effc) {
            ctx->pc = 0x34F968u;
            goto label_34f968;
        }
    }
    ctx->pc = 0x34F004u;
label_34f004:
    // 0x34f004: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34f004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_34f008:
    // 0x34f008: 0x26b40010  addiu       $s4, $s5, 0x10
    ctx->pc = 0x34f008u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_34f00c:
    // 0x34f00c: 0x8c5389e8  lw          $s3, -0x7618($v0)
    ctx->pc = 0x34f00cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_34f010:
    // 0x34f010: 0x26b20054  addiu       $s2, $s5, 0x54
    ctx->pc = 0x34f010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 84));
label_34f014:
    // 0x34f014: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34f014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f018:
    // 0x34f018: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34f018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f01c:
    // 0x34f01c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x34f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_34f020:
    // 0x34f020: 0x8c56d120  lw          $s6, -0x2EE0($v0)
    ctx->pc = 0x34f020u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_34f024:
    // 0x34f024: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34f024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_34f028:
    // 0x34f028: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x34f028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_34f02c:
    // 0x34f02c: 0x805e007a  lb          $fp, 0x7A($v0)
    ctx->pc = 0x34f02cu;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_34f030:
    // 0x34f030: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x34f030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_34f034:
    // 0x34f034: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x34f034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34f038:
    // 0x34f038: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34f038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_34f03c:
    // 0x34f03c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34f040:
    // 0x34f040: 0xc04cc34  jal         func_1330D0
label_34f044:
    if (ctx->pc == 0x34F044u) {
        ctx->pc = 0x34F044u;
            // 0x34f044: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x34F048u;
        goto label_34f048;
    }
    ctx->pc = 0x34F040u;
    SET_GPR_U32(ctx, 31, 0x34F048u);
    ctx->pc = 0x34F044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F040u;
            // 0x34f044: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F048u; }
        if (ctx->pc != 0x34F048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F048u; }
        if (ctx->pc != 0x34F048u) { return; }
    }
    ctx->pc = 0x34F048u;
label_34f048:
    // 0x34f048: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x34f048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_34f04c:
    // 0x34f04c: 0xc4611680  lwc1        $f1, 0x1680($v1)
    ctx->pc = 0x34f04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34f050:
    // 0x34f050: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34f050u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34f054:
    // 0x34f054: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_34f058:
    if (ctx->pc == 0x34F058u) {
        ctx->pc = 0x34F05Cu;
        goto label_34f05c;
    }
    ctx->pc = 0x34F054u;
    {
        const bool branch_taken_0x34f054 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f054) {
            ctx->pc = 0x34F0C8u;
            goto label_34f0c8;
        }
    }
    ctx->pc = 0x34F05Cu;
label_34f05c:
    // 0x34f05c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x34f05cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_34f060:
    // 0x34f060: 0x4610029  bgez        $v1, . + 4 + (0x29 << 2)
label_34f064:
    if (ctx->pc == 0x34F064u) {
        ctx->pc = 0x34F068u;
        goto label_34f068;
    }
    ctx->pc = 0x34F060u;
    {
        const bool branch_taken_0x34f060 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x34f060) {
            ctx->pc = 0x34F108u;
            goto label_34f108;
        }
    }
    ctx->pc = 0x34F068u;
label_34f068:
    // 0x34f068: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x34f068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_34f06c:
    // 0x34f06c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x34f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_34f070:
    // 0x34f070: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34f070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34f074:
    // 0x34f074: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x34f074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_34f078:
    // 0x34f078: 0x320f809  jalr        $t9
label_34f07c:
    if (ctx->pc == 0x34F07Cu) {
        ctx->pc = 0x34F07Cu;
            // 0x34f07c: 0x34450bae  ori         $a1, $v0, 0xBAE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2990);
        ctx->pc = 0x34F080u;
        goto label_34f080;
    }
    ctx->pc = 0x34F078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34F080u);
        ctx->pc = 0x34F07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F078u;
            // 0x34f07c: 0x34450bae  ori         $a1, $v0, 0xBAE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2990);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34F080u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34F080u; }
            if (ctx->pc != 0x34F080u) { return; }
        }
        }
    }
    ctx->pc = 0x34F080u;
label_34f080:
    // 0x34f080: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x34f080u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_34f084:
    // 0x34f084: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x34f084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
label_34f088:
    // 0x34f088: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x34f088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_34f08c:
    // 0x34f08c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_34f090:
    // 0x34f090: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34f090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_34f094:
    // 0x34f094: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x34f094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_34f098:
    // 0x34f098: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x34f098u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_34f09c:
    // 0x34f09c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34f09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34f0a0:
    // 0x34f0a0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x34f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_34f0a4:
    // 0x34f0a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x34f0a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34f0a8:
    // 0x34f0a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_34f0ac:
    // 0x34f0ac: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x34f0acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34f0b0:
    // 0x34f0b0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x34f0b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_34f0b4:
    // 0x34f0b4: 0x320f809  jalr        $t9
label_34f0b8:
    if (ctx->pc == 0x34F0B8u) {
        ctx->pc = 0x34F0B8u;
            // 0x34f0b8: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x34F0BCu;
        goto label_34f0bc;
    }
    ctx->pc = 0x34F0B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34F0BCu);
        ctx->pc = 0x34F0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F0B4u;
            // 0x34f0b8: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34F0BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34F0BCu; }
            if (ctx->pc != 0x34F0BCu) { return; }
        }
        }
    }
    ctx->pc = 0x34F0BCu;
label_34f0bc:
    // 0x34f0bc: 0x10000012  b           . + 4 + (0x12 << 2)
label_34f0c0:
    if (ctx->pc == 0x34F0C0u) {
        ctx->pc = 0x34F0C4u;
        goto label_34f0c4;
    }
    ctx->pc = 0x34F0BCu;
    {
        const bool branch_taken_0x34f0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f0bc) {
            ctx->pc = 0x34F108u;
            goto label_34f108;
        }
    }
    ctx->pc = 0x34F0C4u;
label_34f0c4:
    // 0x34f0c4: 0x0  nop
    ctx->pc = 0x34f0c4u;
    // NOP
label_34f0c8:
    // 0x34f0c8: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x34f0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
label_34f0cc:
    // 0x34f0cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x34f0ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_34f0d0:
    // 0x34f0d0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x34f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_34f0d4:
    // 0x34f0d4: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x34f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_34f0d8:
    // 0x34f0d8: 0x84650054  lh          $a1, 0x54($v1)
    ctx->pc = 0x34f0d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 84)));
label_34f0dc:
    // 0x34f0dc: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_34f0e0:
    if (ctx->pc == 0x34F0E0u) {
        ctx->pc = 0x34F0E0u;
            // 0x34f0e0: 0x24770054  addiu       $s7, $v1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
        ctx->pc = 0x34F0E4u;
        goto label_34f0e4;
    }
    ctx->pc = 0x34F0DCu;
    {
        const bool branch_taken_0x34f0dc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x34F0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F0DCu;
            // 0x34f0e0: 0x24770054  addiu       $s7, $v1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f0dc) {
            ctx->pc = 0x34F108u;
            goto label_34f108;
        }
    }
    ctx->pc = 0x34F0E4u;
label_34f0e4:
    // 0x34f0e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_34f0e8:
    // 0x34f0e8: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x34f0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_34f0ec:
    // 0x34f0ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x34f0ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34f0f0:
    // 0x34f0f0: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x34f0f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_34f0f4:
    // 0x34f0f4: 0x320f809  jalr        $t9
label_34f0f8:
    if (ctx->pc == 0x34F0F8u) {
        ctx->pc = 0x34F0FCu;
        goto label_34f0fc;
    }
    ctx->pc = 0x34F0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34F0FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x34F0FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34F0FCu; }
            if (ctx->pc != 0x34F0FCu) { return; }
        }
        }
    }
    ctx->pc = 0x34F0FCu;
label_34f0fc:
    // 0x34f0fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34f100:
    // 0x34f100: 0xa6e30000  sh          $v1, 0x0($s7)
    ctx->pc = 0x34f100u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 3));
label_34f104:
    // 0x34f104: 0x0  nop
    ctx->pc = 0x34f104u;
    // NOP
label_34f108:
    // 0x34f108: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x34f108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_34f10c:
    // 0x34f10c: 0x23e182b  sltu        $v1, $s1, $fp
    ctx->pc = 0x34f10cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_34f110:
    // 0x34f110: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x34f110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_34f114:
    // 0x34f114: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
label_34f118:
    if (ctx->pc == 0x34F118u) {
        ctx->pc = 0x34F118u;
            // 0x34f118: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x34F11Cu;
        goto label_34f11c;
    }
    ctx->pc = 0x34F114u;
    {
        const bool branch_taken_0x34f114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F114u;
            // 0x34f118: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f114) {
            ctx->pc = 0x34F030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34f030;
        }
    }
    ctx->pc = 0x34F11Cu;
label_34f11c:
    // 0x34f11c: 0x92a300a4  lbu         $v1, 0xA4($s5)
    ctx->pc = 0x34f11cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 164)));
label_34f120:
    // 0x34f120: 0x50600213  beql        $v1, $zero, . + 4 + (0x213 << 2)
label_34f124:
    if (ctx->pc == 0x34F124u) {
        ctx->pc = 0x34F124u;
            // 0x34f124: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x34F128u;
        goto label_34f128;
    }
    ctx->pc = 0x34F120u;
    {
        const bool branch_taken_0x34f120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f120) {
            ctx->pc = 0x34F124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F120u;
            // 0x34f124: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F970u;
            goto label_34f970;
        }
    }
    ctx->pc = 0x34F128u;
label_34f128:
    // 0x34f128: 0xc6a10094  lwc1        $f1, 0x94($s5)
    ctx->pc = 0x34f128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34f12c:
    // 0x34f12c: 0xc6a00090  lwc1        $f0, 0x90($s5)
    ctx->pc = 0x34f12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34f130:
    // 0x34f130: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34f130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_34f134:
    // 0x34f134: 0xe6a00090  swc1        $f0, 0x90($s5)
    ctx->pc = 0x34f134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 144), bits); }
label_34f138:
    // 0x34f138: 0xc6a2008c  lwc1        $f2, 0x8C($s5)
    ctx->pc = 0x34f138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34f13c:
    // 0x34f13c: 0xc6a30090  lwc1        $f3, 0x90($s5)
    ctx->pc = 0x34f13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_34f140:
    // 0x34f140: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x34f140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34f144:
    // 0x34f144: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_34f148:
    if (ctx->pc == 0x34F148u) {
        ctx->pc = 0x34F148u;
            // 0x34f148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34F14Cu;
        goto label_34f14c;
    }
    ctx->pc = 0x34F144u;
    {
        const bool branch_taken_0x34f144 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F144u;
            // 0x34f148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f144) {
            ctx->pc = 0x34F150u;
            goto label_34f150;
        }
    }
    ctx->pc = 0x34F14Cu;
label_34f14c:
    // 0x34f14c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34f14cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f150:
    // 0x34f150: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_34f154:
    if (ctx->pc == 0x34F154u) {
        ctx->pc = 0x34F154u;
            // 0x34f154: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x34F158u;
        goto label_34f158;
    }
    ctx->pc = 0x34F150u;
    {
        const bool branch_taken_0x34f150 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x34f150) {
            ctx->pc = 0x34F154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F150u;
            // 0x34f154: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F164u;
            goto label_34f164;
        }
    }
    ctx->pc = 0x34F158u;
label_34f158:
    // 0x34f158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f15c:
    // 0x34f15c: 0x10000007  b           . + 4 + (0x7 << 2)
label_34f160:
    if (ctx->pc == 0x34F160u) {
        ctx->pc = 0x34F160u;
            // 0x34f160: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x34F164u;
        goto label_34f164;
    }
    ctx->pc = 0x34F15Cu;
    {
        const bool branch_taken_0x34f15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F15Cu;
            // 0x34f160: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f15c) {
            ctx->pc = 0x34F17Cu;
            goto label_34f17c;
        }
    }
    ctx->pc = 0x34F164u;
label_34f164:
    // 0x34f164: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34f164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_34f168:
    // 0x34f168: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34f168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34f16c:
    // 0x34f16c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34f16cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f170:
    // 0x34f170: 0x0  nop
    ctx->pc = 0x34f170u;
    // NOP
label_34f174:
    // 0x34f174: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34f174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_34f178:
    // 0x34f178: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34f178u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_34f17c:
    // 0x34f17c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x34f17cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34f180:
    // 0x34f180: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_34f184:
    if (ctx->pc == 0x34F184u) {
        ctx->pc = 0x34F184u;
            // 0x34f184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34F188u;
        goto label_34f188;
    }
    ctx->pc = 0x34F180u;
    {
        const bool branch_taken_0x34f180 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F180u;
            // 0x34f184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f180) {
            ctx->pc = 0x34F18Cu;
            goto label_34f18c;
        }
    }
    ctx->pc = 0x34F188u;
label_34f188:
    // 0x34f188: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34f188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f18c:
    // 0x34f18c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_34f190:
    if (ctx->pc == 0x34F190u) {
        ctx->pc = 0x34F190u;
            // 0x34f190: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x34F194u;
        goto label_34f194;
    }
    ctx->pc = 0x34F18Cu;
    {
        const bool branch_taken_0x34f18c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x34f18c) {
            ctx->pc = 0x34F190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F18Cu;
            // 0x34f190: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F1A0u;
            goto label_34f1a0;
        }
    }
    ctx->pc = 0x34F194u;
label_34f194:
    // 0x34f194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f198:
    // 0x34f198: 0x10000007  b           . + 4 + (0x7 << 2)
label_34f19c:
    if (ctx->pc == 0x34F19Cu) {
        ctx->pc = 0x34F19Cu;
            // 0x34f19c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x34F1A0u;
        goto label_34f1a0;
    }
    ctx->pc = 0x34F198u;
    {
        const bool branch_taken_0x34f198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F198u;
            // 0x34f19c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f198) {
            ctx->pc = 0x34F1B8u;
            goto label_34f1b8;
        }
    }
    ctx->pc = 0x34F1A0u;
label_34f1a0:
    // 0x34f1a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34f1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_34f1a4:
    // 0x34f1a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34f1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34f1a8:
    // 0x34f1a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34f1a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f1ac:
    // 0x34f1ac: 0x0  nop
    ctx->pc = 0x34f1acu;
    // NOP
label_34f1b0:
    // 0x34f1b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34f1b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_34f1b4:
    // 0x34f1b4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34f1b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_34f1b8:
    // 0x34f1b8: 0x4600181a  mula.s      $f3, $f0
    ctx->pc = 0x34f1b8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_34f1bc:
    // 0x34f1bc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x34f1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_34f1c0:
    // 0x34f1c0: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x34f1c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_34f1c4:
    // 0x34f1c4: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x34f1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_34f1c8:
    // 0x34f1c8: 0xe6a00090  swc1        $f0, 0x90($s5)
    ctx->pc = 0x34f1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 144), bits); }
label_34f1cc:
    // 0x34f1cc: 0xc6ac0090  lwc1        $f12, 0x90($s5)
    ctx->pc = 0x34f1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34f1d0:
    // 0x34f1d0: 0xc04cc7c  jal         func_1331F0
label_34f1d4:
    if (ctx->pc == 0x34F1D4u) {
        ctx->pc = 0x34F1D4u;
            // 0x34f1d4: 0x26a60070  addiu       $a2, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->pc = 0x34F1D8u;
        goto label_34f1d8;
    }
    ctx->pc = 0x34F1D0u;
    SET_GPR_U32(ctx, 31, 0x34F1D8u);
    ctx->pc = 0x34F1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F1D0u;
            // 0x34f1d4: 0x26a60070  addiu       $a2, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F1D8u; }
        if (ctx->pc != 0x34F1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F1D8u; }
        if (ctx->pc != 0x34F1D8u) { return; }
    }
    ctx->pc = 0x34F1D8u;
label_34f1d8:
    // 0x34f1d8: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x34f1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34f1dc:
    // 0x34f1dc: 0xc7ad00d4  lwc1        $f13, 0xD4($sp)
    ctx->pc = 0x34f1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_34f1e0:
    // 0x34f1e0: 0xc7ae00d8  lwc1        $f14, 0xD8($sp)
    ctx->pc = 0x34f1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_34f1e4:
    // 0x34f1e4: 0xc04cbd8  jal         func_132F60
label_34f1e8:
    if (ctx->pc == 0x34F1E8u) {
        ctx->pc = 0x34F1E8u;
            // 0x34f1e8: 0x26a40010  addiu       $a0, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x34F1ECu;
        goto label_34f1ec;
    }
    ctx->pc = 0x34F1E4u;
    SET_GPR_U32(ctx, 31, 0x34F1ECu);
    ctx->pc = 0x34F1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F1E4u;
            // 0x34f1e8: 0x26a40010  addiu       $a0, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F1ECu; }
        if (ctx->pc != 0x34F1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F1ECu; }
        if (ctx->pc != 0x34F1ECu) { return; }
    }
    ctx->pc = 0x34F1ECu;
label_34f1ec:
    // 0x34f1ec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x34f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_34f1f0:
    // 0x34f1f0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x34f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_34f1f4:
    // 0x34f1f4: 0xc6a10088  lwc1        $f1, 0x88($s5)
    ctx->pc = 0x34f1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34f1f8:
    // 0x34f1f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34f1f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f1fc:
    // 0x34f1fc: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x34f1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34f200:
    // 0x34f200: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x34f200u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_34f204:
    // 0x34f204: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34f204u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34f208:
    // 0x34f208: 0x450001d7  bc1f        . + 4 + (0x1D7 << 2)
label_34f20c:
    if (ctx->pc == 0x34F20Cu) {
        ctx->pc = 0x34F20Cu;
            // 0x34f20c: 0xe6a10088  swc1        $f1, 0x88($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 136), bits); }
        ctx->pc = 0x34F210u;
        goto label_34f210;
    }
    ctx->pc = 0x34F208u;
    {
        const bool branch_taken_0x34f208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F208u;
            // 0x34f20c: 0xe6a10088  swc1        $f1, 0x88($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f208) {
            ctx->pc = 0x34F968u;
            goto label_34f968;
        }
    }
    ctx->pc = 0x34F210u;
label_34f210:
    // 0x34f210: 0xe6a00088  swc1        $f0, 0x88($s5)
    ctx->pc = 0x34f210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 136), bits); }
label_34f214:
    // 0x34f214: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x34f214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_34f218:
    // 0x34f218: 0x8c7289e8  lw          $s2, -0x7618($v1)
    ctx->pc = 0x34f218u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_34f21c:
    // 0x34f21c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x34f21cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_34f220:
    // 0x34f220: 0x26b00054  addiu       $s0, $s5, 0x54
    ctx->pc = 0x34f220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 84));
label_34f224:
    // 0x34f224: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x34f224u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_34f228:
    // 0x34f228: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
label_34f22c:
    if (ctx->pc == 0x34F22Cu) {
        ctx->pc = 0x34F230u;
        goto label_34f230;
    }
    ctx->pc = 0x34F228u;
    {
        const bool branch_taken_0x34f228 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x34f228) {
            ctx->pc = 0x34F248u;
            goto label_34f248;
        }
    }
    ctx->pc = 0x34F230u;
label_34f230:
    // 0x34f230: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x34f230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_34f234:
    // 0x34f234: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x34f234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_34f238:
    // 0x34f238: 0x320f809  jalr        $t9
label_34f23c:
    if (ctx->pc == 0x34F23Cu) {
        ctx->pc = 0x34F23Cu;
            // 0x34f23c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34F240u;
        goto label_34f240;
    }
    ctx->pc = 0x34F238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34F240u);
        ctx->pc = 0x34F23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F238u;
            // 0x34f23c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34F240u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34F240u; }
            if (ctx->pc != 0x34F240u) { return; }
        }
        }
    }
    ctx->pc = 0x34F240u;
label_34f240:
    // 0x34f240: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34f240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34f244:
    // 0x34f244: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x34f244u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_34f248:
    // 0x34f248: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x34f248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_34f24c:
    // 0x34f24c: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
label_34f250:
    if (ctx->pc == 0x34F250u) {
        ctx->pc = 0x34F250u;
            // 0x34f250: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x34F254u;
        goto label_34f254;
    }
    ctx->pc = 0x34F24Cu;
    {
        const bool branch_taken_0x34f24c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F24Cu;
            // 0x34f250: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f24c) {
            ctx->pc = 0x34F224u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34f224;
        }
    }
    ctx->pc = 0x34F254u;
label_34f254:
    // 0x34f254: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34f254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34f258:
    // 0x34f258: 0x100001c3  b           . + 4 + (0x1C3 << 2)
label_34f25c:
    if (ctx->pc == 0x34F25Cu) {
        ctx->pc = 0x34F25Cu;
            // 0x34f25c: 0xaea30080  sw          $v1, 0x80($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 3));
        ctx->pc = 0x34F260u;
        goto label_34f260;
    }
    ctx->pc = 0x34F258u;
    {
        const bool branch_taken_0x34f258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F258u;
            // 0x34f25c: 0xaea30080  sw          $v1, 0x80($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f258) {
            ctx->pc = 0x34F968u;
            goto label_34f968;
        }
    }
    ctx->pc = 0x34F260u;
label_34f260:
    // 0x34f260: 0x106001c2  beqz        $v1, . + 4 + (0x1C2 << 2)
label_34f264:
    if (ctx->pc == 0x34F264u) {
        ctx->pc = 0x34F268u;
        goto label_34f268;
    }
    ctx->pc = 0x34F260u;
    {
        const bool branch_taken_0x34f260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f260) {
            ctx->pc = 0x34F96Cu;
            goto label_34f96c;
        }
    }
    ctx->pc = 0x34F268u;
label_34f268:
    // 0x34f268: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x34f268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_34f26c:
    // 0x34f26c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x34f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_34f270:
    // 0x34f270: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x34f270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_34f274:
    // 0x34f274: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x34f274u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_34f278:
    // 0x34f278: 0x146001bb  bnez        $v1, . + 4 + (0x1BB << 2)
label_34f27c:
    if (ctx->pc == 0x34F27Cu) {
        ctx->pc = 0x34F280u;
        goto label_34f280;
    }
    ctx->pc = 0x34F278u;
    {
        const bool branch_taken_0x34f278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f278) {
            ctx->pc = 0x34F968u;
            goto label_34f968;
        }
    }
    ctx->pc = 0x34F280u;
label_34f280:
    // 0x34f280: 0xc0775b8  jal         func_1DD6E0
label_34f284:
    if (ctx->pc == 0x34F284u) {
        ctx->pc = 0x34F288u;
        goto label_34f288;
    }
    ctx->pc = 0x34F280u;
    SET_GPR_U32(ctx, 31, 0x34F288u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F288u; }
        if (ctx->pc != 0x34F288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F288u; }
        if (ctx->pc != 0x34F288u) { return; }
    }
    ctx->pc = 0x34F288u;
label_34f288:
    // 0x34f288: 0xc077244  jal         func_1DC910
label_34f28c:
    if (ctx->pc == 0x34F28Cu) {
        ctx->pc = 0x34F28Cu;
            // 0x34f28c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x34F290u;
        goto label_34f290;
    }
    ctx->pc = 0x34F288u;
    SET_GPR_U32(ctx, 31, 0x34F290u);
    ctx->pc = 0x34F28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F288u;
            // 0x34f28c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC910u;
    if (runtime->hasFunction(0x1DC910u)) {
        auto targetFn = runtime->lookupFunction(0x1DC910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F290u; }
        if (ctx->pc != 0x34F290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC910_0x1dc910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F290u; }
        if (ctx->pc != 0x34F290u) { return; }
    }
    ctx->pc = 0x34F290u;
label_34f290:
    // 0x34f290: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x34f290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_34f294:
    // 0x34f294: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_34f298:
    if (ctx->pc == 0x34F298u) {
        ctx->pc = 0x34F298u;
            // 0x34f298: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x34F29Cu;
        goto label_34f29c;
    }
    ctx->pc = 0x34F294u;
    {
        const bool branch_taken_0x34f294 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x34f294) {
            ctx->pc = 0x34F298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F294u;
            // 0x34f298: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F2A8u;
            goto label_34f2a8;
        }
    }
    ctx->pc = 0x34F29Cu;
label_34f29c:
    // 0x34f29c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f2a0:
    // 0x34f2a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_34f2a4:
    if (ctx->pc == 0x34F2A4u) {
        ctx->pc = 0x34F2A4u;
            // 0x34f2a4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x34F2A8u;
        goto label_34f2a8;
    }
    ctx->pc = 0x34F2A0u;
    {
        const bool branch_taken_0x34f2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F2A0u;
            // 0x34f2a4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f2a0) {
            ctx->pc = 0x34F2C0u;
            goto label_34f2c0;
        }
    }
    ctx->pc = 0x34F2A8u;
label_34f2a8:
    // 0x34f2a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34f2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_34f2ac:
    // 0x34f2ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34f2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34f2b0:
    // 0x34f2b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34f2b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f2b4:
    // 0x34f2b4: 0x0  nop
    ctx->pc = 0x34f2b4u;
    // NOP
label_34f2b8:
    // 0x34f2b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34f2b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_34f2bc:
    // 0x34f2bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34f2bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_34f2c0:
    // 0x34f2c0: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x34f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_34f2c4:
    // 0x34f2c4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x34f2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_34f2c8:
    // 0x34f2c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f2c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f2cc:
    // 0x34f2cc: 0xc0477a8  jal         func_11DEA0
label_34f2d0:
    if (ctx->pc == 0x34F2D0u) {
        ctx->pc = 0x34F2D0u;
            // 0x34f2d0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x34F2D4u;
        goto label_34f2d4;
    }
    ctx->pc = 0x34F2CCu;
    SET_GPR_U32(ctx, 31, 0x34F2D4u);
    ctx->pc = 0x34F2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F2CCu;
            // 0x34f2d0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F2D4u; }
        if (ctx->pc != 0x34F2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F2D4u; }
        if (ctx->pc != 0x34F2D4u) { return; }
    }
    ctx->pc = 0x34F2D4u;
label_34f2d4:
    // 0x34f2d4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x34f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_34f2d8:
    // 0x34f2d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x34f2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_34f2dc:
    // 0x34f2dc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x34f2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_34f2e0:
    // 0x34f2e0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x34f2e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_34f2e4:
    // 0x34f2e4: 0xc0d1c10  jal         func_347040
label_34f2e8:
    if (ctx->pc == 0x34F2E8u) {
        ctx->pc = 0x34F2E8u;
            // 0x34f2e8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x34F2ECu;
        goto label_34f2ec;
    }
    ctx->pc = 0x34F2E4u;
    SET_GPR_U32(ctx, 31, 0x34F2ECu);
    ctx->pc = 0x34F2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F2E4u;
            // 0x34f2e8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F2ECu; }
        if (ctx->pc != 0x34F2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F2ECu; }
        if (ctx->pc != 0x34F2ECu) { return; }
    }
    ctx->pc = 0x34F2ECu;
label_34f2ec:
    // 0x34f2ec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x34f2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34f2f0:
    // 0x34f2f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x34f2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_34f2f4:
    // 0x34f2f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34f2f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f2f8:
    // 0x34f2f8: 0x0  nop
    ctx->pc = 0x34f2f8u;
    // NOP
label_34f2fc:
    // 0x34f2fc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x34f2fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_34f300:
    // 0x34f300: 0xc0d1c10  jal         func_347040
label_34f304:
    if (ctx->pc == 0x34F304u) {
        ctx->pc = 0x34F304u;
            // 0x34f304: 0x4615a51c  madd.s      $f20, $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[21]));
        ctx->pc = 0x34F308u;
        goto label_34f308;
    }
    ctx->pc = 0x34F300u;
    SET_GPR_U32(ctx, 31, 0x34F308u);
    ctx->pc = 0x34F304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F300u;
            // 0x34f304: 0x4615a51c  madd.s      $f20, $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[21]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F308u; }
        if (ctx->pc != 0x34F308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F308u; }
        if (ctx->pc != 0x34F308u) { return; }
    }
    ctx->pc = 0x34F308u;
label_34f308:
    // 0x34f308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34f308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34f30c:
    // 0x34f30c: 0xc0d1c10  jal         func_347040
label_34f310:
    if (ctx->pc == 0x34F310u) {
        ctx->pc = 0x34F310u;
            // 0x34f310: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34F314u;
        goto label_34f314;
    }
    ctx->pc = 0x34F30Cu;
    SET_GPR_U32(ctx, 31, 0x34F314u);
    ctx->pc = 0x34F310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F30Cu;
            // 0x34f310: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F314u; }
        if (ctx->pc != 0x34F314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F314u; }
        if (ctx->pc != 0x34F314u) { return; }
    }
    ctx->pc = 0x34F314u;
label_34f314:
    // 0x34f314: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x34f314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34f318:
    // 0x34f318: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x34f318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_34f31c:
    // 0x34f31c: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x34f31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_34f320:
    // 0x34f320: 0xc0d3f08  jal         func_34FC20
label_34f324:
    if (ctx->pc == 0x34F324u) {
        ctx->pc = 0x34F324u;
            // 0x34f324: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x34F328u;
        goto label_34f328;
    }
    ctx->pc = 0x34F320u;
    SET_GPR_U32(ctx, 31, 0x34F328u);
    ctx->pc = 0x34F324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F320u;
            // 0x34f324: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FC20u;
    if (runtime->hasFunction(0x34FC20u)) {
        auto targetFn = runtime->lookupFunction(0x34FC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F328u; }
        if (ctx->pc != 0x34F328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FC20_0x34fc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F328u; }
        if (ctx->pc != 0x34F328u) { return; }
    }
    ctx->pc = 0x34F328u;
label_34f328:
    // 0x34f328: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x34f328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_34f32c:
    // 0x34f32c: 0xc0b6e44  jal         func_2DB910
label_34f330:
    if (ctx->pc == 0x34F330u) {
        ctx->pc = 0x34F330u;
            // 0x34f330: 0x24843550  addiu       $a0, $a0, 0x3550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13648));
        ctx->pc = 0x34F334u;
        goto label_34f334;
    }
    ctx->pc = 0x34F32Cu;
    SET_GPR_U32(ctx, 31, 0x34F334u);
    ctx->pc = 0x34F330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F32Cu;
            // 0x34f330: 0x24843550  addiu       $a0, $a0, 0x3550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB910u;
    if (runtime->hasFunction(0x2DB910u)) {
        auto targetFn = runtime->lookupFunction(0x2DB910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F334u; }
        if (ctx->pc != 0x34F334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB910_0x2db910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F334u; }
        if (ctx->pc != 0x34F334u) { return; }
    }
    ctx->pc = 0x34F334u;
label_34f334:
    // 0x34f334: 0x3c024b18  lui         $v0, 0x4B18
    ctx->pc = 0x34f334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19224 << 16));
label_34f338:
    // 0x34f338: 0x8eb2005c  lw          $s2, 0x5C($s5)
    ctx->pc = 0x34f338u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
label_34f33c:
    // 0x34f33c: 0x3442967f  ori         $v0, $v0, 0x967F
    ctx->pc = 0x34f33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38527);
label_34f340:
    // 0x34f340: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34f340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f344:
    // 0x34f344: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x34f344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_34f348:
    // 0x34f348: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34f348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f34c:
    // 0x34f34c: 0xc077264  jal         func_1DC990
label_34f350:
    if (ctx->pc == 0x34F350u) {
        ctx->pc = 0x34F350u;
            // 0x34f350: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34F354u;
        goto label_34f354;
    }
    ctx->pc = 0x34F34Cu;
    SET_GPR_U32(ctx, 31, 0x34F354u);
    ctx->pc = 0x34F350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F34Cu;
            // 0x34f350: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F354u; }
        if (ctx->pc != 0x34F354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F354u; }
        if (ctx->pc != 0x34F354u) { return; }
    }
    ctx->pc = 0x34F354u;
label_34f354:
    // 0x34f354: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x34f354u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34f358:
    // 0x34f358: 0xc0d1c10  jal         func_347040
label_34f35c:
    if (ctx->pc == 0x34F35Cu) {
        ctx->pc = 0x34F35Cu;
            // 0x34f35c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34F360u;
        goto label_34f360;
    }
    ctx->pc = 0x34F358u;
    SET_GPR_U32(ctx, 31, 0x34F360u);
    ctx->pc = 0x34F35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F358u;
            // 0x34f35c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F360u; }
        if (ctx->pc != 0x34F360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F360u; }
        if (ctx->pc != 0x34F360u) { return; }
    }
    ctx->pc = 0x34F360u;
label_34f360:
    // 0x34f360: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x34f360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_34f364:
    // 0x34f364: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x34f364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34f368:
    // 0x34f368: 0xc04cc90  jal         func_133240
label_34f36c:
    if (ctx->pc == 0x34F36Cu) {
        ctx->pc = 0x34F36Cu;
            // 0x34f36c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x34F370u;
        goto label_34f370;
    }
    ctx->pc = 0x34F368u;
    SET_GPR_U32(ctx, 31, 0x34F370u);
    ctx->pc = 0x34F36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F368u;
            // 0x34f36c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F370u; }
        if (ctx->pc != 0x34F370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F370u; }
        if (ctx->pc != 0x34F370u) { return; }
    }
    ctx->pc = 0x34F370u;
label_34f370:
    // 0x34f370: 0xc04cc2c  jal         func_1330B0
label_34f374:
    if (ctx->pc == 0x34F374u) {
        ctx->pc = 0x34F374u;
            // 0x34f374: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x34F378u;
        goto label_34f378;
    }
    ctx->pc = 0x34F370u;
    SET_GPR_U32(ctx, 31, 0x34F378u);
    ctx->pc = 0x34F374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F370u;
            // 0x34f374: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F378u; }
        if (ctx->pc != 0x34F378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F378u; }
        if (ctx->pc != 0x34F378u) { return; }
    }
    ctx->pc = 0x34F378u;
label_34f378:
    // 0x34f378: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x34f378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34f37c:
    // 0x34f37c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_34f380:
    if (ctx->pc == 0x34F380u) {
        ctx->pc = 0x34F384u;
        goto label_34f384;
    }
    ctx->pc = 0x34F37Cu;
    {
        const bool branch_taken_0x34f37c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f37c) {
            ctx->pc = 0x34F390u;
            goto label_34f390;
        }
    }
    ctx->pc = 0x34F384u;
label_34f384:
    // 0x34f384: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x34f384u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_34f388:
    // 0x34f388: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x34f388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34f38c:
    // 0x34f38c: 0x0  nop
    ctx->pc = 0x34f38cu;
    // NOP
label_34f390:
    // 0x34f390: 0x82a200a3  lb          $v0, 0xA3($s5)
    ctx->pc = 0x34f390u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 163)));
label_34f394:
    // 0x34f394: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x34f394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_34f398:
    // 0x34f398: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x34f398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_34f39c:
    // 0x34f39c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_34f3a0:
    if (ctx->pc == 0x34F3A0u) {
        ctx->pc = 0x34F3A0u;
            // 0x34f3a0: 0x26521240  addiu       $s2, $s2, 0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4672));
        ctx->pc = 0x34F3A4u;
        goto label_34f3a4;
    }
    ctx->pc = 0x34F39Cu;
    {
        const bool branch_taken_0x34f39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F39Cu;
            // 0x34f3a0: 0x26521240  addiu       $s2, $s2, 0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f39c) {
            ctx->pc = 0x34F34Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34f34c;
        }
    }
    ctx->pc = 0x34F3A4u;
label_34f3a4:
    // 0x34f3a4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x34f3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_34f3a8:
    // 0x34f3a8: 0x8ea2005c  lw          $v0, 0x5C($s5)
    ctx->pc = 0x34f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
label_34f3ac:
    // 0x34f3ac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x34f3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_34f3b0:
    // 0x34f3b0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x34f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_34f3b4:
    // 0x34f3b4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x34f3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_34f3b8:
    // 0x34f3b8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x34f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_34f3bc:
    // 0x34f3bc: 0xc077264  jal         func_1DC990
label_34f3c0:
    if (ctx->pc == 0x34F3C0u) {
        ctx->pc = 0x34F3C0u;
            // 0x34f3c0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x34F3C4u;
        goto label_34f3c4;
    }
    ctx->pc = 0x34F3BCu;
    SET_GPR_U32(ctx, 31, 0x34F3C4u);
    ctx->pc = 0x34F3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F3BCu;
            // 0x34f3c0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F3C4u; }
        if (ctx->pc != 0x34F3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F3C4u; }
        if (ctx->pc != 0x34F3C4u) { return; }
    }
    ctx->pc = 0x34F3C4u;
label_34f3c4:
    // 0x34f3c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34f3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34f3c8:
    // 0x34f3c8: 0xc0d1c10  jal         func_347040
label_34f3cc:
    if (ctx->pc == 0x34F3CCu) {
        ctx->pc = 0x34F3CCu;
            // 0x34f3cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34F3D0u;
        goto label_34f3d0;
    }
    ctx->pc = 0x34F3C8u;
    SET_GPR_U32(ctx, 31, 0x34F3D0u);
    ctx->pc = 0x34F3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F3C8u;
            // 0x34f3cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F3D0u; }
        if (ctx->pc != 0x34F3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F3D0u; }
        if (ctx->pc != 0x34F3D0u) { return; }
    }
    ctx->pc = 0x34F3D0u;
label_34f3d0:
    // 0x34f3d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34f3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34f3d4:
    // 0x34f3d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x34f3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34f3d8:
    // 0x34f3d8: 0xc04cc90  jal         func_133240
label_34f3dc:
    if (ctx->pc == 0x34F3DCu) {
        ctx->pc = 0x34F3DCu;
            // 0x34f3dc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x34F3E0u;
        goto label_34f3e0;
    }
    ctx->pc = 0x34F3D8u;
    SET_GPR_U32(ctx, 31, 0x34F3E0u);
    ctx->pc = 0x34F3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F3D8u;
            // 0x34f3dc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F3E0u; }
        if (ctx->pc != 0x34F3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F3E0u; }
        if (ctx->pc != 0x34F3E0u) { return; }
    }
    ctx->pc = 0x34F3E0u;
label_34f3e0:
    // 0x34f3e0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x34f3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_34f3e4:
    // 0x34f3e4: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x34f3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_34f3e8:
    // 0x34f3e8: 0xc04cc44  jal         func_133110
label_34f3ec:
    if (ctx->pc == 0x34F3ECu) {
        ctx->pc = 0x34F3ECu;
            // 0x34f3ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34F3F0u;
        goto label_34f3f0;
    }
    ctx->pc = 0x34F3E8u;
    SET_GPR_U32(ctx, 31, 0x34F3F0u);
    ctx->pc = 0x34F3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F3E8u;
            // 0x34f3ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F3F0u; }
        if (ctx->pc != 0x34F3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F3F0u; }
        if (ctx->pc != 0x34F3F0u) { return; }
    }
    ctx->pc = 0x34F3F0u;
label_34f3f0:
    // 0x34f3f0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x34f3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_34f3f4:
    // 0x34f3f4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x34f3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_34f3f8:
    // 0x34f3f8: 0xc0d3ee0  jal         func_34FB80
label_34f3fc:
    if (ctx->pc == 0x34F3FCu) {
        ctx->pc = 0x34F3FCu;
            // 0x34f3fc: 0x24a53590  addiu       $a1, $a1, 0x3590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13712));
        ctx->pc = 0x34F400u;
        goto label_34f400;
    }
    ctx->pc = 0x34F3F8u;
    SET_GPR_U32(ctx, 31, 0x34F400u);
    ctx->pc = 0x34F3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F3F8u;
            // 0x34f3fc: 0x24a53590  addiu       $a1, $a1, 0x3590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FB80u;
    if (runtime->hasFunction(0x34FB80u)) {
        auto targetFn = runtime->lookupFunction(0x34FB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F400u; }
        if (ctx->pc != 0x34F400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FB80_0x34fb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F400u; }
        if (ctx->pc != 0x34F400u) { return; }
    }
    ctx->pc = 0x34F400u;
label_34f400:
    // 0x34f400: 0x3c024265  lui         $v0, 0x4265
    ctx->pc = 0x34f400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16997 << 16));
label_34f404:
    // 0x34f404: 0x34432ee1  ori         $v1, $v0, 0x2EE1
    ctx->pc = 0x34f404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12001);
label_34f408:
    // 0x34f408: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34f408u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_34f40c:
    // 0x34f40c: 0x0  nop
    ctx->pc = 0x34f40cu;
    // NOP
label_34f410:
    // 0x34f410: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x34f410u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_34f414:
    // 0x34f414: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x34f414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_34f418:
    // 0x34f418: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34f418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f41c:
    // 0x34f41c: 0x0  nop
    ctx->pc = 0x34f41cu;
    // NOP
label_34f420:
    // 0x34f420: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x34f420u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34f424:
    // 0x34f424: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_34f428:
    if (ctx->pc == 0x34F428u) {
        ctx->pc = 0x34F428u;
            // 0x34f428: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34F42Cu;
        goto label_34f42c;
    }
    ctx->pc = 0x34F424u;
    {
        const bool branch_taken_0x34f424 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F424u;
            // 0x34f428: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f424) {
            ctx->pc = 0x34F430u;
            goto label_34f430;
        }
    }
    ctx->pc = 0x34F42Cu;
label_34f42c:
    // 0x34f42c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34f42cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f430:
    // 0x34f430: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_34f434:
    if (ctx->pc == 0x34F434u) {
        ctx->pc = 0x34F434u;
            // 0x34f434: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x34F438u;
        goto label_34f438;
    }
    ctx->pc = 0x34F430u;
    {
        const bool branch_taken_0x34f430 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x34f430) {
            ctx->pc = 0x34F434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F430u;
            // 0x34f434: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F444u;
            goto label_34f444;
        }
    }
    ctx->pc = 0x34F438u;
label_34f438:
    // 0x34f438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f43c:
    // 0x34f43c: 0x10000007  b           . + 4 + (0x7 << 2)
label_34f440:
    if (ctx->pc == 0x34F440u) {
        ctx->pc = 0x34F440u;
            // 0x34f440: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x34F444u;
        goto label_34f444;
    }
    ctx->pc = 0x34F43Cu;
    {
        const bool branch_taken_0x34f43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F43Cu;
            // 0x34f440: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f43c) {
            ctx->pc = 0x34F45Cu;
            goto label_34f45c;
        }
    }
    ctx->pc = 0x34F444u;
label_34f444:
    // 0x34f444: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34f444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_34f448:
    // 0x34f448: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34f448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34f44c:
    // 0x34f44c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34f44cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f450:
    // 0x34f450: 0x0  nop
    ctx->pc = 0x34f450u;
    // NOP
label_34f454:
    // 0x34f454: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x34f454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_34f458:
    // 0x34f458: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x34f458u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_34f45c:
    // 0x34f45c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34f45cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f460:
    // 0x34f460: 0x0  nop
    ctx->pc = 0x34f460u;
    // NOP
label_34f464:
    // 0x34f464: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x34f464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34f468:
    // 0x34f468: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_34f46c:
    if (ctx->pc == 0x34F46Cu) {
        ctx->pc = 0x34F46Cu;
            // 0x34f46c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34F470u;
        goto label_34f470;
    }
    ctx->pc = 0x34F468u;
    {
        const bool branch_taken_0x34f468 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F468u;
            // 0x34f46c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f468) {
            ctx->pc = 0x34F474u;
            goto label_34f474;
        }
    }
    ctx->pc = 0x34F470u;
label_34f470:
    // 0x34f470: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34f470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f474:
    // 0x34f474: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_34f478:
    if (ctx->pc == 0x34F478u) {
        ctx->pc = 0x34F478u;
            // 0x34f478: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x34F47Cu;
        goto label_34f47c;
    }
    ctx->pc = 0x34F474u;
    {
        const bool branch_taken_0x34f474 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x34f474) {
            ctx->pc = 0x34F478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F474u;
            // 0x34f478: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F488u;
            goto label_34f488;
        }
    }
    ctx->pc = 0x34F47Cu;
label_34f47c:
    // 0x34f47c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f480:
    // 0x34f480: 0x10000007  b           . + 4 + (0x7 << 2)
label_34f484:
    if (ctx->pc == 0x34F484u) {
        ctx->pc = 0x34F484u;
            // 0x34f484: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x34F488u;
        goto label_34f488;
    }
    ctx->pc = 0x34F480u;
    {
        const bool branch_taken_0x34f480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F480u;
            // 0x34f484: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f480) {
            ctx->pc = 0x34F4A0u;
            goto label_34f4a0;
        }
    }
    ctx->pc = 0x34F488u;
label_34f488:
    // 0x34f488: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34f488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_34f48c:
    // 0x34f48c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34f48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34f490:
    // 0x34f490: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34f490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f494:
    // 0x34f494: 0x0  nop
    ctx->pc = 0x34f494u;
    // NOP
label_34f498:
    // 0x34f498: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34f498u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_34f49c:
    // 0x34f49c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34f49cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_34f4a0:
    // 0x34f4a0: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x34f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_34f4a4:
    // 0x34f4a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f4a8:
    // 0x34f4a8: 0x0  nop
    ctx->pc = 0x34f4a8u;
    // NOP
label_34f4ac:
    // 0x34f4ac: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x34f4acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_34f4b0:
    // 0x34f4b0: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x34f4b0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_34f4b4:
    // 0x34f4b4: 0xc6a00098  lwc1        $f0, 0x98($s5)
    ctx->pc = 0x34f4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34f4b8:
    // 0x34f4b8: 0x4602205c  madd.s      $f1, $f4, $f2
    ctx->pc = 0x34f4b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_34f4bc:
    // 0x34f4bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34f4bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34f4c0:
    // 0x34f4c0: 0x45010033  bc1t        . + 4 + (0x33 << 2)
label_34f4c4:
    if (ctx->pc == 0x34F4C4u) {
        ctx->pc = 0x34F4C8u;
        goto label_34f4c8;
    }
    ctx->pc = 0x34F4C0u;
    {
        const bool branch_taken_0x34f4c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f4c0) {
            ctx->pc = 0x34F590u;
            goto label_34f590;
        }
    }
    ctx->pc = 0x34F4C8u;
label_34f4c8:
    // 0x34f4c8: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x34f4c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_34f4cc:
    // 0x34f4cc: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x34f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_34f4d0:
    // 0x34f4d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f4d4:
    // 0x34f4d4: 0x0  nop
    ctx->pc = 0x34f4d4u;
    // NOP
label_34f4d8:
    // 0x34f4d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34f4d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34f4dc:
    // 0x34f4dc: 0xc6a4009c  lwc1        $f4, 0x9C($s5)
    ctx->pc = 0x34f4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_34f4e0:
    // 0x34f4e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_34f4e4:
    if (ctx->pc == 0x34F4E4u) {
        ctx->pc = 0x34F4E4u;
            // 0x34f4e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34F4E8u;
        goto label_34f4e8;
    }
    ctx->pc = 0x34F4E0u;
    {
        const bool branch_taken_0x34f4e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F4E0u;
            // 0x34f4e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f4e0) {
            ctx->pc = 0x34F4ECu;
            goto label_34f4ec;
        }
    }
    ctx->pc = 0x34F4E8u;
label_34f4e8:
    // 0x34f4e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34f4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f4ec:
    // 0x34f4ec: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_34f4f0:
    if (ctx->pc == 0x34F4F0u) {
        ctx->pc = 0x34F4F0u;
            // 0x34f4f0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x34F4F4u;
        goto label_34f4f4;
    }
    ctx->pc = 0x34F4ECu;
    {
        const bool branch_taken_0x34f4ec = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x34f4ec) {
            ctx->pc = 0x34F4F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F4ECu;
            // 0x34f4f0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F500u;
            goto label_34f500;
        }
    }
    ctx->pc = 0x34F4F4u;
label_34f4f4:
    // 0x34f4f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34f4f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f4f8:
    // 0x34f4f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_34f4fc:
    if (ctx->pc == 0x34F4FCu) {
        ctx->pc = 0x34F4FCu;
            // 0x34f4fc: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x34F500u;
        goto label_34f500;
    }
    ctx->pc = 0x34F4F8u;
    {
        const bool branch_taken_0x34f4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F4F8u;
            // 0x34f4fc: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f4f8) {
            ctx->pc = 0x34F518u;
            goto label_34f518;
        }
    }
    ctx->pc = 0x34F500u;
label_34f500:
    // 0x34f500: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x34f500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_34f504:
    // 0x34f504: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34f504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34f508:
    // 0x34f508: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34f508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f50c:
    // 0x34f50c: 0x0  nop
    ctx->pc = 0x34f50cu;
    // NOP
label_34f510:
    // 0x34f510: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x34f510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_34f514:
    // 0x34f514: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x34f514u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_34f518:
    // 0x34f518: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x34f518u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34f51c:
    // 0x34f51c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34f51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_34f520:
    // 0x34f520: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x34f520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_34f524:
    // 0x34f524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34f528:
    // 0x34f528: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34f528u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_34f52c:
    // 0x34f52c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34f52cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f530:
    // 0x34f530: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x34f530u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_34f534:
    // 0x34f534: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x34f534u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_34f538:
    // 0x34f538: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_34f53c:
    if (ctx->pc == 0x34F53Cu) {
        ctx->pc = 0x34F53Cu;
            // 0x34f53c: 0x460310dc  madd.s      $f3, $f2, $f3 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->pc = 0x34F540u;
        goto label_34f540;
    }
    ctx->pc = 0x34F538u;
    {
        const bool branch_taken_0x34f538 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F538u;
            // 0x34f53c: 0x460310dc  madd.s      $f3, $f2, $f3 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f538) {
            ctx->pc = 0x34F544u;
            goto label_34f544;
        }
    }
    ctx->pc = 0x34F540u;
label_34f540:
    // 0x34f540: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34f540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f544:
    // 0x34f544: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_34f548:
    if (ctx->pc == 0x34F548u) {
        ctx->pc = 0x34F548u;
            // 0x34f548: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x34F54Cu;
        goto label_34f54c;
    }
    ctx->pc = 0x34F544u;
    {
        const bool branch_taken_0x34f544 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x34f544) {
            ctx->pc = 0x34F548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F544u;
            // 0x34f548: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F558u;
            goto label_34f558;
        }
    }
    ctx->pc = 0x34F54Cu;
label_34f54c:
    // 0x34f54c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f54cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f550:
    // 0x34f550: 0x10000007  b           . + 4 + (0x7 << 2)
label_34f554:
    if (ctx->pc == 0x34F554u) {
        ctx->pc = 0x34F554u;
            // 0x34f554: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x34F558u;
        goto label_34f558;
    }
    ctx->pc = 0x34F550u;
    {
        const bool branch_taken_0x34f550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F550u;
            // 0x34f554: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f550) {
            ctx->pc = 0x34F570u;
            goto label_34f570;
        }
    }
    ctx->pc = 0x34F558u;
label_34f558:
    // 0x34f558: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34f558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_34f55c:
    // 0x34f55c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34f55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34f560:
    // 0x34f560: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34f560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f564:
    // 0x34f564: 0x0  nop
    ctx->pc = 0x34f564u;
    // NOP
label_34f568:
    // 0x34f568: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34f568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_34f56c:
    // 0x34f56c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34f56cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_34f570:
    // 0x34f570: 0x46002082  mul.s       $f2, $f4, $f0
    ctx->pc = 0x34f570u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_34f574:
    // 0x34f574: 0xc6a10098  lwc1        $f1, 0x98($s5)
    ctx->pc = 0x34f574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34f578:
    // 0x34f578: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34f578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f57c:
    // 0x34f57c: 0x0  nop
    ctx->pc = 0x34f57cu;
    // NOP
label_34f580:
    // 0x34f580: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x34f580u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_34f584:
    // 0x34f584: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x34f584u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_34f588:
    // 0x34f588: 0x10000035  b           . + 4 + (0x35 << 2)
label_34f58c:
    if (ctx->pc == 0x34F58Cu) {
        ctx->pc = 0x34F58Cu;
            // 0x34f58c: 0xe6a00098  swc1        $f0, 0x98($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 152), bits); }
        ctx->pc = 0x34F590u;
        goto label_34f590;
    }
    ctx->pc = 0x34F588u;
    {
        const bool branch_taken_0x34f588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F588u;
            // 0x34f58c: 0xe6a00098  swc1        $f0, 0x98($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f588) {
            ctx->pc = 0x34F660u;
            goto label_34f660;
        }
    }
    ctx->pc = 0x34F590u;
label_34f590:
    // 0x34f590: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34f590u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34f594:
    // 0x34f594: 0x45020033  bc1fl       . + 4 + (0x33 << 2)
label_34f598:
    if (ctx->pc == 0x34F598u) {
        ctx->pc = 0x34F598u;
            // 0x34f598: 0xc6a10098  lwc1        $f1, 0x98($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x34F59Cu;
        goto label_34f59c;
    }
    ctx->pc = 0x34F594u;
    {
        const bool branch_taken_0x34f594 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34f594) {
            ctx->pc = 0x34F598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F594u;
            // 0x34f598: 0xc6a10098  lwc1        $f1, 0x98($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F664u;
            goto label_34f664;
        }
    }
    ctx->pc = 0x34F59Cu;
label_34f59c:
    // 0x34f59c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34f59cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_34f5a0:
    // 0x34f5a0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x34f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_34f5a4:
    // 0x34f5a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f5a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f5a8:
    // 0x34f5a8: 0x0  nop
    ctx->pc = 0x34f5a8u;
    // NOP
label_34f5ac:
    // 0x34f5ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34f5acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34f5b0:
    // 0x34f5b0: 0xc6a4009c  lwc1        $f4, 0x9C($s5)
    ctx->pc = 0x34f5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_34f5b4:
    // 0x34f5b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_34f5b8:
    if (ctx->pc == 0x34F5B8u) {
        ctx->pc = 0x34F5B8u;
            // 0x34f5b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34F5BCu;
        goto label_34f5bc;
    }
    ctx->pc = 0x34F5B4u;
    {
        const bool branch_taken_0x34f5b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F5B4u;
            // 0x34f5b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f5b4) {
            ctx->pc = 0x34F5C0u;
            goto label_34f5c0;
        }
    }
    ctx->pc = 0x34F5BCu;
label_34f5bc:
    // 0x34f5bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34f5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f5c0:
    // 0x34f5c0: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_34f5c4:
    if (ctx->pc == 0x34F5C4u) {
        ctx->pc = 0x34F5C4u;
            // 0x34f5c4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x34F5C8u;
        goto label_34f5c8;
    }
    ctx->pc = 0x34F5C0u;
    {
        const bool branch_taken_0x34f5c0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x34f5c0) {
            ctx->pc = 0x34F5C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F5C0u;
            // 0x34f5c4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F5D4u;
            goto label_34f5d4;
        }
    }
    ctx->pc = 0x34F5C8u;
label_34f5c8:
    // 0x34f5c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34f5c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f5cc:
    // 0x34f5cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_34f5d0:
    if (ctx->pc == 0x34F5D0u) {
        ctx->pc = 0x34F5D0u;
            // 0x34f5d0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x34F5D4u;
        goto label_34f5d4;
    }
    ctx->pc = 0x34F5CCu;
    {
        const bool branch_taken_0x34f5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F5CCu;
            // 0x34f5d0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f5cc) {
            ctx->pc = 0x34F5ECu;
            goto label_34f5ec;
        }
    }
    ctx->pc = 0x34F5D4u;
label_34f5d4:
    // 0x34f5d4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x34f5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_34f5d8:
    // 0x34f5d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34f5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34f5dc:
    // 0x34f5dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34f5dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f5e0:
    // 0x34f5e0: 0x0  nop
    ctx->pc = 0x34f5e0u;
    // NOP
label_34f5e4:
    // 0x34f5e4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x34f5e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_34f5e8:
    // 0x34f5e8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x34f5e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_34f5ec:
    // 0x34f5ec: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x34f5ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34f5f0:
    // 0x34f5f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_34f5f4:
    // 0x34f5f4: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x34f5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_34f5f8:
    // 0x34f5f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34f5fc:
    // 0x34f5fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34f5fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_34f600:
    // 0x34f600: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34f600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f604:
    // 0x34f604: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x34f604u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_34f608:
    // 0x34f608: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x34f608u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_34f60c:
    // 0x34f60c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_34f610:
    if (ctx->pc == 0x34F610u) {
        ctx->pc = 0x34F610u;
            // 0x34f610: 0x460310dc  madd.s      $f3, $f2, $f3 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->pc = 0x34F614u;
        goto label_34f614;
    }
    ctx->pc = 0x34F60Cu;
    {
        const bool branch_taken_0x34f60c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F60Cu;
            // 0x34f610: 0x460310dc  madd.s      $f3, $f2, $f3 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f60c) {
            ctx->pc = 0x34F618u;
            goto label_34f618;
        }
    }
    ctx->pc = 0x34F614u;
label_34f614:
    // 0x34f614: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34f614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f618:
    // 0x34f618: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_34f61c:
    if (ctx->pc == 0x34F61Cu) {
        ctx->pc = 0x34F61Cu;
            // 0x34f61c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x34F620u;
        goto label_34f620;
    }
    ctx->pc = 0x34F618u;
    {
        const bool branch_taken_0x34f618 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x34f618) {
            ctx->pc = 0x34F61Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F618u;
            // 0x34f61c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F62Cu;
            goto label_34f62c;
        }
    }
    ctx->pc = 0x34F620u;
label_34f620:
    // 0x34f620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f624:
    // 0x34f624: 0x10000007  b           . + 4 + (0x7 << 2)
label_34f628:
    if (ctx->pc == 0x34F628u) {
        ctx->pc = 0x34F628u;
            // 0x34f628: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x34F62Cu;
        goto label_34f62c;
    }
    ctx->pc = 0x34F624u;
    {
        const bool branch_taken_0x34f624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F624u;
            // 0x34f628: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f624) {
            ctx->pc = 0x34F644u;
            goto label_34f644;
        }
    }
    ctx->pc = 0x34F62Cu;
label_34f62c:
    // 0x34f62c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34f62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_34f630:
    // 0x34f630: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34f630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34f634:
    // 0x34f634: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34f634u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f638:
    // 0x34f638: 0x0  nop
    ctx->pc = 0x34f638u;
    // NOP
label_34f63c:
    // 0x34f63c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34f63cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_34f640:
    // 0x34f640: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34f640u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_34f644:
    // 0x34f644: 0x46002082  mul.s       $f2, $f4, $f0
    ctx->pc = 0x34f644u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_34f648:
    // 0x34f648: 0xc6a10098  lwc1        $f1, 0x98($s5)
    ctx->pc = 0x34f648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34f64c:
    // 0x34f64c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34f64cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f650:
    // 0x34f650: 0x0  nop
    ctx->pc = 0x34f650u;
    // NOP
label_34f654:
    // 0x34f654: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x34f654u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_34f658:
    // 0x34f658: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x34f658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_34f65c:
    // 0x34f65c: 0xe6a00098  swc1        $f0, 0x98($s5)
    ctx->pc = 0x34f65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 152), bits); }
label_34f660:
    // 0x34f660: 0xc6a10098  lwc1        $f1, 0x98($s5)
    ctx->pc = 0x34f660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34f664:
    // 0x34f664: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x34f664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
label_34f668:
    // 0x34f668: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34f668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f66c:
    // 0x34f66c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34f670:
    // 0x34f670: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x34f670u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_34f674:
    // 0x34f674: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x34f674u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_34f678:
    // 0x34f678: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x34f678u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_34f67c:
    // 0x34f67c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34f67cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_34f680:
    // 0x34f680: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34f680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_34f684:
    // 0x34f684: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x34f684u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_34f688:
    // 0x34f688: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34f688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34f68c:
    // 0x34f68c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_34f690:
    if (ctx->pc == 0x34F690u) {
        ctx->pc = 0x34F690u;
            // 0x34f690: 0xe6a10098  swc1        $f1, 0x98($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 152), bits); }
        ctx->pc = 0x34F694u;
        goto label_34f694;
    }
    ctx->pc = 0x34F68Cu;
    {
        const bool branch_taken_0x34f68c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F68Cu;
            // 0x34f690: 0xe6a10098  swc1        $f1, 0x98($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f68c) {
            ctx->pc = 0x34F698u;
            goto label_34f698;
        }
    }
    ctx->pc = 0x34F694u;
label_34f694:
    // 0x34f694: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34f694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f698:
    // 0x34f698: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_34f69c:
    if (ctx->pc == 0x34F69Cu) {
        ctx->pc = 0x34F69Cu;
            // 0x34f69c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x34F6A0u;
        goto label_34f6a0;
    }
    ctx->pc = 0x34F698u;
    {
        const bool branch_taken_0x34f698 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x34f698) {
            ctx->pc = 0x34F69Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F698u;
            // 0x34f69c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F6ACu;
            goto label_34f6ac;
        }
    }
    ctx->pc = 0x34F6A0u;
label_34f6a0:
    // 0x34f6a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f6a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f6a4:
    // 0x34f6a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_34f6a8:
    if (ctx->pc == 0x34F6A8u) {
        ctx->pc = 0x34F6A8u;
            // 0x34f6a8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x34F6ACu;
        goto label_34f6ac;
    }
    ctx->pc = 0x34F6A4u;
    {
        const bool branch_taken_0x34f6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F6A4u;
            // 0x34f6a8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f6a4) {
            ctx->pc = 0x34F6C4u;
            goto label_34f6c4;
        }
    }
    ctx->pc = 0x34F6ACu;
label_34f6ac:
    // 0x34f6ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34f6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_34f6b0:
    // 0x34f6b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34f6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34f6b4:
    // 0x34f6b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34f6b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f6b8:
    // 0x34f6b8: 0x0  nop
    ctx->pc = 0x34f6b8u;
    // NOP
label_34f6bc:
    // 0x34f6bc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x34f6bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_34f6c0:
    // 0x34f6c0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x34f6c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_34f6c4:
    // 0x34f6c4: 0xc6a00098  lwc1        $f0, 0x98($s5)
    ctx->pc = 0x34f6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34f6c8:
    // 0x34f6c8: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x34f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_34f6cc:
    // 0x34f6cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x34f6ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_34f6d0:
    // 0x34f6d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x34f6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_34f6d4:
    // 0x34f6d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34f6d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_34f6d8:
    // 0x34f6d8: 0x0  nop
    ctx->pc = 0x34f6d8u;
    // NOP
label_34f6dc:
    // 0x34f6dc: 0x46006018  adda.s      $f12, $f0
    ctx->pc = 0x34f6dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_34f6e0:
    // 0x34f6e0: 0x46020b5c  madd.s      $f13, $f1, $f2
    ctx->pc = 0x34f6e0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_34f6e4:
    // 0x34f6e4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x34f6e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_34f6e8:
    // 0x34f6e8: 0xc0d3eb0  jal         func_34FAC0
label_34f6ec:
    if (ctx->pc == 0x34F6ECu) {
        ctx->pc = 0x34F6ECu;
            // 0x34f6ec: 0xe6ad0098  swc1        $f13, 0x98($s5) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 152), bits); }
        ctx->pc = 0x34F6F0u;
        goto label_34f6f0;
    }
    ctx->pc = 0x34F6E8u;
    SET_GPR_U32(ctx, 31, 0x34F6F0u);
    ctx->pc = 0x34F6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F6E8u;
            // 0x34f6ec: 0xe6ad0098  swc1        $f13, 0x98($s5) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 152), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FAC0u;
    if (runtime->hasFunction(0x34FAC0u)) {
        auto targetFn = runtime->lookupFunction(0x34FAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F6F0u; }
        if (ctx->pc != 0x34F6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FAC0_0x34fac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F6F0u; }
        if (ctx->pc != 0x34F6F0u) { return; }
    }
    ctx->pc = 0x34F6F0u;
label_34f6f0:
    // 0x34f6f0: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x34f6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_34f6f4:
    // 0x34f6f4: 0xc0b6de0  jal         func_2DB780
label_34f6f8:
    if (ctx->pc == 0x34F6F8u) {
        ctx->pc = 0x34F6F8u;
            // 0x34f6f8: 0x24843530  addiu       $a0, $a0, 0x3530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13616));
        ctx->pc = 0x34F6FCu;
        goto label_34f6fc;
    }
    ctx->pc = 0x34F6F4u;
    SET_GPR_U32(ctx, 31, 0x34F6FCu);
    ctx->pc = 0x34F6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F6F4u;
            // 0x34f6f8: 0x24843530  addiu       $a0, $a0, 0x3530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB780u;
    if (runtime->hasFunction(0x2DB780u)) {
        auto targetFn = runtime->lookupFunction(0x2DB780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F6FCu; }
        if (ctx->pc != 0x34F6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB780_0x2db780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F6FCu; }
        if (ctx->pc != 0x34F6FCu) { return; }
    }
    ctx->pc = 0x34F6FCu;
label_34f6fc:
    // 0x34f6fc: 0xc6a10088  lwc1        $f1, 0x88($s5)
    ctx->pc = 0x34f6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34f700:
    // 0x34f700: 0xc6a00084  lwc1        $f0, 0x84($s5)
    ctx->pc = 0x34f700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34f704:
    // 0x34f704: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34f704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34f708:
    // 0x34f708: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_34f70c:
    if (ctx->pc == 0x34F70Cu) {
        ctx->pc = 0x34F70Cu;
            // 0x34f70c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34F710u;
        goto label_34f710;
    }
    ctx->pc = 0x34F708u;
    {
        const bool branch_taken_0x34f708 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F708u;
            // 0x34f70c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f708) {
            ctx->pc = 0x34F714u;
            goto label_34f714;
        }
    }
    ctx->pc = 0x34F710u;
label_34f710:
    // 0x34f710: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x34f710u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f714:
    // 0x34f714: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x34f714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_34f718:
    // 0x34f718: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x34f718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_34f71c:
    // 0x34f71c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x34f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_34f720:
    // 0x34f720: 0xc6a00088  lwc1        $f0, 0x88($s5)
    ctx->pc = 0x34f720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34f724:
    // 0x34f724: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x34f724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34f728:
    // 0x34f728: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34f728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_34f72c:
    // 0x34f72c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_34f730:
    if (ctx->pc == 0x34F730u) {
        ctx->pc = 0x34F730u;
            // 0x34f730: 0xe6a00088  swc1        $f0, 0x88($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 136), bits); }
        ctx->pc = 0x34F734u;
        goto label_34f734;
    }
    ctx->pc = 0x34F72Cu;
    {
        const bool branch_taken_0x34f72c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x34F730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F72Cu;
            // 0x34f730: 0xe6a00088  swc1        $f0, 0x88($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f72c) {
            ctx->pc = 0x34F740u;
            goto label_34f740;
        }
    }
    ctx->pc = 0x34F734u;
label_34f734:
    // 0x34f734: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x34f734u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f738:
    // 0x34f738: 0x10000008  b           . + 4 + (0x8 << 2)
label_34f73c:
    if (ctx->pc == 0x34F73Cu) {
        ctx->pc = 0x34F73Cu;
            // 0x34f73c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x34F740u;
        goto label_34f740;
    }
    ctx->pc = 0x34F738u;
    {
        const bool branch_taken_0x34f738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F738u;
            // 0x34f73c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f738) {
            ctx->pc = 0x34F75Cu;
            goto label_34f75c;
        }
    }
    ctx->pc = 0x34F740u;
label_34f740:
    // 0x34f740: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x34f740u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_34f744:
    // 0x34f744: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x34f744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_34f748:
    // 0x34f748: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x34f748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_34f74c:
    // 0x34f74c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34f74cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f750:
    // 0x34f750: 0x0  nop
    ctx->pc = 0x34f750u;
    // NOP
label_34f754:
    // 0x34f754: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34f754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_34f758:
    // 0x34f758: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34f758u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_34f75c:
    // 0x34f75c: 0xc6a00088  lwc1        $f0, 0x88($s5)
    ctx->pc = 0x34f75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34f760:
    // 0x34f760: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x34f760u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_34f764:
    // 0x34f764: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x34f764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_34f768:
    // 0x34f768: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34f768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_34f76c:
    // 0x34f76c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34f76cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_34f770:
    // 0x34f770: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
label_34f774:
    if (ctx->pc == 0x34F774u) {
        ctx->pc = 0x34F774u;
            // 0x34f774: 0xe6a00088  swc1        $f0, 0x88($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 136), bits); }
        ctx->pc = 0x34F778u;
        goto label_34f778;
    }
    ctx->pc = 0x34F770u;
    {
        const bool branch_taken_0x34f770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F770u;
            // 0x34f774: 0xe6a00088  swc1        $f0, 0x88($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f770) {
            ctx->pc = 0x34F968u;
            goto label_34f968;
        }
    }
    ctx->pc = 0x34F778u;
label_34f778:
    // 0x34f778: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34f778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_34f77c:
    // 0x34f77c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x34f77cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_34f780:
    // 0x34f780: 0x8c5289e8  lw          $s2, -0x7618($v0)
    ctx->pc = 0x34f780u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_34f784:
    // 0x34f784: 0x26b00054  addiu       $s0, $s5, 0x54
    ctx->pc = 0x34f784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 84));
label_34f788:
    // 0x34f788: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x34f788u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_34f78c:
    // 0x34f78c: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
label_34f790:
    if (ctx->pc == 0x34F790u) {
        ctx->pc = 0x34F794u;
        goto label_34f794;
    }
    ctx->pc = 0x34F78Cu;
    {
        const bool branch_taken_0x34f78c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x34f78c) {
            ctx->pc = 0x34F7B0u;
            goto label_34f7b0;
        }
    }
    ctx->pc = 0x34F794u;
label_34f794:
    // 0x34f794: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x34f794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_34f798:
    // 0x34f798: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x34f798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_34f79c:
    // 0x34f79c: 0x320f809  jalr        $t9
label_34f7a0:
    if (ctx->pc == 0x34F7A0u) {
        ctx->pc = 0x34F7A0u;
            // 0x34f7a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34F7A4u;
        goto label_34f7a4;
    }
    ctx->pc = 0x34F79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34F7A4u);
        ctx->pc = 0x34F7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F79Cu;
            // 0x34f7a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34F7A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34F7A4u; }
            if (ctx->pc != 0x34F7A4u) { return; }
        }
        }
    }
    ctx->pc = 0x34F7A4u;
label_34f7a4:
    // 0x34f7a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34f7a8:
    // 0x34f7a8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x34f7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_34f7ac:
    // 0x34f7ac: 0x0  nop
    ctx->pc = 0x34f7acu;
    // NOP
label_34f7b0:
    // 0x34f7b0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x34f7b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_34f7b4:
    // 0x34f7b4: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
label_34f7b8:
    if (ctx->pc == 0x34F7B8u) {
        ctx->pc = 0x34F7B8u;
            // 0x34f7b8: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x34F7BCu;
        goto label_34f7bc;
    }
    ctx->pc = 0x34F7B4u;
    {
        const bool branch_taken_0x34f7b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F7B4u;
            // 0x34f7b8: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f7b4) {
            ctx->pc = 0x34F788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34f788;
        }
    }
    ctx->pc = 0x34F7BCu;
label_34f7bc:
    // 0x34f7bc: 0xc0d3eac  jal         func_34FAB0
label_34f7c0:
    if (ctx->pc == 0x34F7C0u) {
        ctx->pc = 0x34F7C0u;
            // 0x34f7c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34F7C4u;
        goto label_34f7c4;
    }
    ctx->pc = 0x34F7BCu;
    SET_GPR_U32(ctx, 31, 0x34F7C4u);
    ctx->pc = 0x34F7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F7BCu;
            // 0x34f7c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FAB0u;
    if (runtime->hasFunction(0x34FAB0u)) {
        auto targetFn = runtime->lookupFunction(0x34FAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F7C4u; }
        if (ctx->pc != 0x34F7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FAB0_0x34fab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F7C4u; }
        if (ctx->pc != 0x34F7C4u) { return; }
    }
    ctx->pc = 0x34F7C4u;
label_34f7c4:
    // 0x34f7c4: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x34f7c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
label_34f7c8:
    // 0x34f7c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x34f7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_34f7cc:
    // 0x34f7cc: 0xc0d3e94  jal         func_34FA50
label_34f7d0:
    if (ctx->pc == 0x34F7D0u) {
        ctx->pc = 0x34F7D0u;
            // 0x34f7d0: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->pc = 0x34F7D4u;
        goto label_34f7d4;
    }
    ctx->pc = 0x34F7CCu;
    SET_GPR_U32(ctx, 31, 0x34F7D4u);
    ctx->pc = 0x34F7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F7CCu;
            // 0x34f7d0: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FA50u;
    if (runtime->hasFunction(0x34FA50u)) {
        auto targetFn = runtime->lookupFunction(0x34FA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F7D4u; }
        if (ctx->pc != 0x34F7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FA50_0x34fa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F7D4u; }
        if (ctx->pc != 0x34F7D4u) { return; }
    }
    ctx->pc = 0x34F7D4u;
label_34f7d4:
    // 0x34f7d4: 0xc0d3e74  jal         func_34F9D0
label_34f7d8:
    if (ctx->pc == 0x34F7D8u) {
        ctx->pc = 0x34F7D8u;
            // 0x34f7d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34F7DCu;
        goto label_34f7dc;
    }
    ctx->pc = 0x34F7D4u;
    SET_GPR_U32(ctx, 31, 0x34F7DCu);
    ctx->pc = 0x34F7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F7D4u;
            // 0x34f7d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34F9D0u;
    if (runtime->hasFunction(0x34F9D0u)) {
        auto targetFn = runtime->lookupFunction(0x34F9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F7DCu; }
        if (ctx->pc != 0x34F7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034F9D0_0x34f9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F7DCu; }
        if (ctx->pc != 0x34F7DCu) { return; }
    }
    ctx->pc = 0x34F7DCu;
label_34f7dc:
    // 0x34f7dc: 0xc0d3eac  jal         func_34FAB0
label_34f7e0:
    if (ctx->pc == 0x34F7E0u) {
        ctx->pc = 0x34F7E0u;
            // 0x34f7e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34F7E4u;
        goto label_34f7e4;
    }
    ctx->pc = 0x34F7DCu;
    SET_GPR_U32(ctx, 31, 0x34F7E4u);
    ctx->pc = 0x34F7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F7DCu;
            // 0x34f7e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FAB0u;
    if (runtime->hasFunction(0x34FAB0u)) {
        auto targetFn = runtime->lookupFunction(0x34FAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F7E4u; }
        if (ctx->pc != 0x34F7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FAB0_0x34fab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F7E4u; }
        if (ctx->pc != 0x34F7E4u) { return; }
    }
    ctx->pc = 0x34F7E4u;
label_34f7e4:
    // 0x34f7e4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x34f7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_34f7e8:
    // 0x34f7e8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x34f7e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_34f7ec:
    // 0x34f7ec: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
label_34f7f0:
    if (ctx->pc == 0x34F7F0u) {
        ctx->pc = 0x34F7F0u;
            // 0x34f7f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34F7F4u;
        goto label_34f7f4;
    }
    ctx->pc = 0x34F7ECu;
    {
        const bool branch_taken_0x34f7ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x34f7ec) {
            ctx->pc = 0x34F7F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F7ECu;
            // 0x34f7f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F808u;
            goto label_34f808;
        }
    }
    ctx->pc = 0x34F7F4u;
label_34f7f4:
    // 0x34f7f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x34f7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_34f7f8:
    // 0x34f7f8: 0xc0d3e70  jal         func_34F9C0
label_34f7fc:
    if (ctx->pc == 0x34F7FCu) {
        ctx->pc = 0x34F7FCu;
            // 0x34f7fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x34F800u;
        goto label_34f800;
    }
    ctx->pc = 0x34F7F8u;
    SET_GPR_U32(ctx, 31, 0x34F800u);
    ctx->pc = 0x34F7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F7F8u;
            // 0x34f7fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34F9C0u;
    if (runtime->hasFunction(0x34F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x34F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F800u; }
        if (ctx->pc != 0x34F800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034F9C0_0x34f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F800u; }
        if (ctx->pc != 0x34F800u) { return; }
    }
    ctx->pc = 0x34F800u;
label_34f800:
    // 0x34f800: 0x10000059  b           . + 4 + (0x59 << 2)
label_34f804:
    if (ctx->pc == 0x34F804u) {
        ctx->pc = 0x34F808u;
        goto label_34f808;
    }
    ctx->pc = 0x34F800u;
    {
        const bool branch_taken_0x34f800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f800) {
            ctx->pc = 0x34F968u;
            goto label_34f968;
        }
    }
    ctx->pc = 0x34F808u;
label_34f808:
    // 0x34f808: 0xc0d3eac  jal         func_34FAB0
label_34f80c:
    if (ctx->pc == 0x34F80Cu) {
        ctx->pc = 0x34F810u;
        goto label_34f810;
    }
    ctx->pc = 0x34F808u;
    SET_GPR_U32(ctx, 31, 0x34F810u);
    ctx->pc = 0x34FAB0u;
    if (runtime->hasFunction(0x34FAB0u)) {
        auto targetFn = runtime->lookupFunction(0x34FAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F810u; }
        if (ctx->pc != 0x34F810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FAB0_0x34fab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F810u; }
        if (ctx->pc != 0x34F810u) { return; }
    }
    ctx->pc = 0x34F810u;
label_34f810:
    // 0x34f810: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x34f810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_34f814:
    // 0x34f814: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x34f814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_34f818:
    // 0x34f818: 0x8ea20060  lw          $v0, 0x60($s5)
    ctx->pc = 0x34f818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_34f81c:
    // 0x34f81c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x34f81cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_34f820:
    // 0x34f820: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x34f820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_34f824:
    // 0x34f824: 0xc0d1c10  jal         func_347040
label_34f828:
    if (ctx->pc == 0x34F828u) {
        ctx->pc = 0x34F828u;
            // 0x34f828: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x34F82Cu;
        goto label_34f82c;
    }
    ctx->pc = 0x34F824u;
    SET_GPR_U32(ctx, 31, 0x34F82Cu);
    ctx->pc = 0x34F828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F824u;
            // 0x34f828: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F82Cu; }
        if (ctx->pc != 0x34F82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F82Cu; }
        if (ctx->pc != 0x34F82Cu) { return; }
    }
    ctx->pc = 0x34F82Cu;
label_34f82c:
    // 0x34f82c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34f82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34f830:
    // 0x34f830: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x34f830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34f834:
    // 0x34f834: 0xc04cc90  jal         func_133240
label_34f838:
    if (ctx->pc == 0x34F838u) {
        ctx->pc = 0x34F838u;
            // 0x34f838: 0x26a40070  addiu       $a0, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->pc = 0x34F83Cu;
        goto label_34f83c;
    }
    ctx->pc = 0x34F834u;
    SET_GPR_U32(ctx, 31, 0x34F83Cu);
    ctx->pc = 0x34F838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F834u;
            // 0x34f838: 0x26a40070  addiu       $a0, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F83Cu; }
        if (ctx->pc != 0x34F83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F83Cu; }
        if (ctx->pc != 0x34F83Cu) { return; }
    }
    ctx->pc = 0x34F83Cu;
label_34f83c:
    // 0x34f83c: 0xc04cc14  jal         func_133050
label_34f840:
    if (ctx->pc == 0x34F840u) {
        ctx->pc = 0x34F840u;
            // 0x34f840: 0x26a40070  addiu       $a0, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->pc = 0x34F844u;
        goto label_34f844;
    }
    ctx->pc = 0x34F83Cu;
    SET_GPR_U32(ctx, 31, 0x34F844u);
    ctx->pc = 0x34F840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F83Cu;
            // 0x34f840: 0x26a40070  addiu       $a0, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F844u; }
        if (ctx->pc != 0x34F844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F844u; }
        if (ctx->pc != 0x34F844u) { return; }
    }
    ctx->pc = 0x34F844u;
label_34f844:
    // 0x34f844: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x34f844u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_34f848:
    // 0x34f848: 0xc0d3e6c  jal         func_34F9B0
label_34f84c:
    if (ctx->pc == 0x34F84Cu) {
        ctx->pc = 0x34F84Cu;
            // 0x34f84c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34F850u;
        goto label_34f850;
    }
    ctx->pc = 0x34F848u;
    SET_GPR_U32(ctx, 31, 0x34F850u);
    ctx->pc = 0x34F84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F848u;
            // 0x34f84c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34F9B0u;
    if (runtime->hasFunction(0x34F9B0u)) {
        auto targetFn = runtime->lookupFunction(0x34F9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F850u; }
        if (ctx->pc != 0x34F850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034F9B0_0x34f9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F850u; }
        if (ctx->pc != 0x34F850u) { return; }
    }
    ctx->pc = 0x34F850u;
label_34f850:
    // 0x34f850: 0x0  nop
    ctx->pc = 0x34f850u;
    // NOP
label_34f854:
    // 0x34f854: 0x0  nop
    ctx->pc = 0x34f854u;
    // NOP
label_34f858:
    // 0x34f858: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x34f858u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
label_34f85c:
    // 0x34f85c: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x34f85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_34f860:
    // 0x34f860: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34f860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34f864:
    // 0x34f864: 0xc04cc44  jal         func_133110
label_34f868:
    if (ctx->pc == 0x34F868u) {
        ctx->pc = 0x34F868u;
            // 0x34f868: 0xe6a00088  swc1        $f0, 0x88($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 136), bits); }
        ctx->pc = 0x34F86Cu;
        goto label_34f86c;
    }
    ctx->pc = 0x34F864u;
    SET_GPR_U32(ctx, 31, 0x34F86Cu);
    ctx->pc = 0x34F868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F864u;
            // 0x34f868: 0xe6a00088  swc1        $f0, 0x88($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F86Cu; }
        if (ctx->pc != 0x34F86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F86Cu; }
        if (ctx->pc != 0x34F86Cu) { return; }
    }
    ctx->pc = 0x34F86Cu;
label_34f86c:
    // 0x34f86c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x34f86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_34f870:
    // 0x34f870: 0xc04cc04  jal         func_133010
label_34f874:
    if (ctx->pc == 0x34F874u) {
        ctx->pc = 0x34F874u;
            // 0x34f874: 0x26a50070  addiu       $a1, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->pc = 0x34F878u;
        goto label_34f878;
    }
    ctx->pc = 0x34F870u;
    SET_GPR_U32(ctx, 31, 0x34F878u);
    ctx->pc = 0x34F874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F870u;
            // 0x34f874: 0x26a50070  addiu       $a1, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F878u; }
        if (ctx->pc != 0x34F878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F878u; }
        if (ctx->pc != 0x34F878u) { return; }
    }
    ctx->pc = 0x34F878u;
label_34f878:
    // 0x34f878: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x34f878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_34f87c:
    // 0x34f87c: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x34f87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_34f880:
    // 0x34f880: 0xc04cc44  jal         func_133110
label_34f884:
    if (ctx->pc == 0x34F884u) {
        ctx->pc = 0x34F884u;
            // 0x34f884: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34F888u;
        goto label_34f888;
    }
    ctx->pc = 0x34F880u;
    SET_GPR_U32(ctx, 31, 0x34F888u);
    ctx->pc = 0x34F884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F880u;
            // 0x34f884: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F888u; }
        if (ctx->pc != 0x34F888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F888u; }
        if (ctx->pc != 0x34F888u) { return; }
    }
    ctx->pc = 0x34F888u;
label_34f888:
    // 0x34f888: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x34f888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_34f88c:
    // 0x34f88c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x34f88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_34f890:
    // 0x34f890: 0xc0d3ee0  jal         func_34FB80
label_34f894:
    if (ctx->pc == 0x34F894u) {
        ctx->pc = 0x34F894u;
            // 0x34f894: 0x24a53590  addiu       $a1, $a1, 0x3590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13712));
        ctx->pc = 0x34F898u;
        goto label_34f898;
    }
    ctx->pc = 0x34F890u;
    SET_GPR_U32(ctx, 31, 0x34F898u);
    ctx->pc = 0x34F894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F890u;
            // 0x34f894: 0x24a53590  addiu       $a1, $a1, 0x3590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FB80u;
    if (runtime->hasFunction(0x34FB80u)) {
        auto targetFn = runtime->lookupFunction(0x34FB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F898u; }
        if (ctx->pc != 0x34F898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FB80_0x34fb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F898u; }
        if (ctx->pc != 0x34F898u) { return; }
    }
    ctx->pc = 0x34F898u;
label_34f898:
    // 0x34f898: 0x3c024265  lui         $v0, 0x4265
    ctx->pc = 0x34f898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16997 << 16));
label_34f89c:
    // 0x34f89c: 0x34432ee1  ori         $v1, $v0, 0x2EE1
    ctx->pc = 0x34f89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12001);
label_34f8a0:
    // 0x34f8a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34f8a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_34f8a4:
    // 0x34f8a4: 0x0  nop
    ctx->pc = 0x34f8a4u;
    // NOP
label_34f8a8:
    // 0x34f8a8: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x34f8a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_34f8ac:
    // 0x34f8ac: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x34f8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_34f8b0:
    // 0x34f8b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34f8b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f8b4:
    // 0x34f8b4: 0x0  nop
    ctx->pc = 0x34f8b4u;
    // NOP
label_34f8b8:
    // 0x34f8b8: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x34f8b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34f8bc:
    // 0x34f8bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_34f8c0:
    if (ctx->pc == 0x34F8C0u) {
        ctx->pc = 0x34F8C0u;
            // 0x34f8c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34F8C4u;
        goto label_34f8c4;
    }
    ctx->pc = 0x34F8BCu;
    {
        const bool branch_taken_0x34f8bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F8BCu;
            // 0x34f8c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f8bc) {
            ctx->pc = 0x34F8C8u;
            goto label_34f8c8;
        }
    }
    ctx->pc = 0x34F8C4u;
label_34f8c4:
    // 0x34f8c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34f8c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f8c8:
    // 0x34f8c8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_34f8cc:
    if (ctx->pc == 0x34F8CCu) {
        ctx->pc = 0x34F8CCu;
            // 0x34f8cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x34F8D0u;
        goto label_34f8d0;
    }
    ctx->pc = 0x34F8C8u;
    {
        const bool branch_taken_0x34f8c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x34f8c8) {
            ctx->pc = 0x34F8CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F8C8u;
            // 0x34f8cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F8DCu;
            goto label_34f8dc;
        }
    }
    ctx->pc = 0x34F8D0u;
label_34f8d0:
    // 0x34f8d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f8d4:
    // 0x34f8d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_34f8d8:
    if (ctx->pc == 0x34F8D8u) {
        ctx->pc = 0x34F8D8u;
            // 0x34f8d8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x34F8DCu;
        goto label_34f8dc;
    }
    ctx->pc = 0x34F8D4u;
    {
        const bool branch_taken_0x34f8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F8D4u;
            // 0x34f8d8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f8d4) {
            ctx->pc = 0x34F8F4u;
            goto label_34f8f4;
        }
    }
    ctx->pc = 0x34F8DCu;
label_34f8dc:
    // 0x34f8dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34f8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_34f8e0:
    // 0x34f8e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34f8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34f8e4:
    // 0x34f8e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34f8e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f8e8:
    // 0x34f8e8: 0x0  nop
    ctx->pc = 0x34f8e8u;
    // NOP
label_34f8ec:
    // 0x34f8ec: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x34f8ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_34f8f0:
    // 0x34f8f0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x34f8f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_34f8f4:
    // 0x34f8f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34f8f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f8f8:
    // 0x34f8f8: 0x0  nop
    ctx->pc = 0x34f8f8u;
    // NOP
label_34f8fc:
    // 0x34f8fc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x34f8fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34f900:
    // 0x34f900: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_34f904:
    if (ctx->pc == 0x34F904u) {
        ctx->pc = 0x34F904u;
            // 0x34f904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34F908u;
        goto label_34f908;
    }
    ctx->pc = 0x34F900u;
    {
        const bool branch_taken_0x34f900 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34F904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F900u;
            // 0x34f904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f900) {
            ctx->pc = 0x34F90Cu;
            goto label_34f90c;
        }
    }
    ctx->pc = 0x34F908u;
label_34f908:
    // 0x34f908: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34f908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f90c:
    // 0x34f90c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_34f910:
    if (ctx->pc == 0x34F910u) {
        ctx->pc = 0x34F910u;
            // 0x34f910: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x34F914u;
        goto label_34f914;
    }
    ctx->pc = 0x34F90Cu;
    {
        const bool branch_taken_0x34f90c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x34f90c) {
            ctx->pc = 0x34F910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F90Cu;
            // 0x34f910: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F920u;
            goto label_34f920;
        }
    }
    ctx->pc = 0x34F914u;
label_34f914:
    // 0x34f914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f918:
    // 0x34f918: 0x10000007  b           . + 4 + (0x7 << 2)
label_34f91c:
    if (ctx->pc == 0x34F91Cu) {
        ctx->pc = 0x34F91Cu;
            // 0x34f91c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x34F920u;
        goto label_34f920;
    }
    ctx->pc = 0x34F918u;
    {
        const bool branch_taken_0x34f918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F918u;
            // 0x34f91c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f918) {
            ctx->pc = 0x34F938u;
            goto label_34f938;
        }
    }
    ctx->pc = 0x34F920u;
label_34f920:
    // 0x34f920: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34f920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_34f924:
    // 0x34f924: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34f924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34f928:
    // 0x34f928: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34f928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f92c:
    // 0x34f92c: 0x0  nop
    ctx->pc = 0x34f92cu;
    // NOP
label_34f930:
    // 0x34f930: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34f930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_34f934:
    // 0x34f934: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34f934u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_34f938:
    // 0x34f938: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x34f938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_34f93c:
    // 0x34f93c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x34f93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_34f940:
    // 0x34f940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34f944:
    // 0x34f944: 0x0  nop
    ctx->pc = 0x34f944u;
    // NOP
label_34f948:
    // 0x34f948: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x34f948u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_34f94c:
    // 0x34f94c: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x34f94cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_34f950:
    // 0x34f950: 0x4602201c  madd.s      $f0, $f4, $f2
    ctx->pc = 0x34f950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
label_34f954:
    // 0x34f954: 0xe6a00098  swc1        $f0, 0x98($s5)
    ctx->pc = 0x34f954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 152), bits); }
label_34f958:
    // 0x34f958: 0xc6ad0098  lwc1        $f13, 0x98($s5)
    ctx->pc = 0x34f958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_34f95c:
    // 0x34f95c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x34f95cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_34f960:
    // 0x34f960: 0xc0d3eb0  jal         func_34FAC0
label_34f964:
    if (ctx->pc == 0x34F964u) {
        ctx->pc = 0x34F964u;
            // 0x34f964: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x34F968u;
        goto label_34f968;
    }
    ctx->pc = 0x34F960u;
    SET_GPR_U32(ctx, 31, 0x34F968u);
    ctx->pc = 0x34F964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F960u;
            // 0x34f964: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FAC0u;
    if (runtime->hasFunction(0x34FAC0u)) {
        auto targetFn = runtime->lookupFunction(0x34FAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F968u; }
        if (ctx->pc != 0x34F968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034FAC0_0x34fac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F968u; }
        if (ctx->pc != 0x34F968u) { return; }
    }
    ctx->pc = 0x34F968u;
label_34f968:
    // 0x34f968: 0xa2a000a4  sb          $zero, 0xA4($s5)
    ctx->pc = 0x34f968u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 164), (uint8_t)GPR_U32(ctx, 0));
label_34f96c:
    // 0x34f96c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x34f96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_34f970:
    // 0x34f970: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x34f970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_34f974:
    // 0x34f974: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x34f974u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_34f978:
    // 0x34f978: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x34f978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_34f97c:
    // 0x34f97c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x34f97cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_34f980:
    // 0x34f980: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x34f980u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_34f984:
    // 0x34f984: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x34f984u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_34f988:
    // 0x34f988: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x34f988u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_34f98c:
    // 0x34f98c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x34f98cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_34f990:
    // 0x34f990: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x34f990u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34f994:
    // 0x34f994: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x34f994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34f998:
    // 0x34f998: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34f998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34f99c:
    // 0x34f99c: 0x3e00008  jr          $ra
label_34f9a0:
    if (ctx->pc == 0x34F9A0u) {
        ctx->pc = 0x34F9A0u;
            // 0x34f9a0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x34F9A4u;
        goto label_34f9a4;
    }
    ctx->pc = 0x34F99Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F99Cu;
            // 0x34f9a0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34F9A4u;
label_34f9a4:
    // 0x34f9a4: 0x0  nop
    ctx->pc = 0x34f9a4u;
    // NOP
label_34f9a8:
    // 0x34f9a8: 0x0  nop
    ctx->pc = 0x34f9a8u;
    // NOP
label_34f9ac:
    // 0x34f9ac: 0x0  nop
    ctx->pc = 0x34f9acu;
    // NOP
}
