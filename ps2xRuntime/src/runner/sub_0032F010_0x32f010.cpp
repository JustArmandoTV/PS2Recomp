#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032F010
// Address: 0x32f010 - 0x32fb50
void sub_0032F010_0x32f010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F010_0x32f010");
#endif

    switch (ctx->pc) {
        case 0x32f010u: goto label_32f010;
        case 0x32f014u: goto label_32f014;
        case 0x32f018u: goto label_32f018;
        case 0x32f01cu: goto label_32f01c;
        case 0x32f020u: goto label_32f020;
        case 0x32f024u: goto label_32f024;
        case 0x32f028u: goto label_32f028;
        case 0x32f02cu: goto label_32f02c;
        case 0x32f030u: goto label_32f030;
        case 0x32f034u: goto label_32f034;
        case 0x32f038u: goto label_32f038;
        case 0x32f03cu: goto label_32f03c;
        case 0x32f040u: goto label_32f040;
        case 0x32f044u: goto label_32f044;
        case 0x32f048u: goto label_32f048;
        case 0x32f04cu: goto label_32f04c;
        case 0x32f050u: goto label_32f050;
        case 0x32f054u: goto label_32f054;
        case 0x32f058u: goto label_32f058;
        case 0x32f05cu: goto label_32f05c;
        case 0x32f060u: goto label_32f060;
        case 0x32f064u: goto label_32f064;
        case 0x32f068u: goto label_32f068;
        case 0x32f06cu: goto label_32f06c;
        case 0x32f070u: goto label_32f070;
        case 0x32f074u: goto label_32f074;
        case 0x32f078u: goto label_32f078;
        case 0x32f07cu: goto label_32f07c;
        case 0x32f080u: goto label_32f080;
        case 0x32f084u: goto label_32f084;
        case 0x32f088u: goto label_32f088;
        case 0x32f08cu: goto label_32f08c;
        case 0x32f090u: goto label_32f090;
        case 0x32f094u: goto label_32f094;
        case 0x32f098u: goto label_32f098;
        case 0x32f09cu: goto label_32f09c;
        case 0x32f0a0u: goto label_32f0a0;
        case 0x32f0a4u: goto label_32f0a4;
        case 0x32f0a8u: goto label_32f0a8;
        case 0x32f0acu: goto label_32f0ac;
        case 0x32f0b0u: goto label_32f0b0;
        case 0x32f0b4u: goto label_32f0b4;
        case 0x32f0b8u: goto label_32f0b8;
        case 0x32f0bcu: goto label_32f0bc;
        case 0x32f0c0u: goto label_32f0c0;
        case 0x32f0c4u: goto label_32f0c4;
        case 0x32f0c8u: goto label_32f0c8;
        case 0x32f0ccu: goto label_32f0cc;
        case 0x32f0d0u: goto label_32f0d0;
        case 0x32f0d4u: goto label_32f0d4;
        case 0x32f0d8u: goto label_32f0d8;
        case 0x32f0dcu: goto label_32f0dc;
        case 0x32f0e0u: goto label_32f0e0;
        case 0x32f0e4u: goto label_32f0e4;
        case 0x32f0e8u: goto label_32f0e8;
        case 0x32f0ecu: goto label_32f0ec;
        case 0x32f0f0u: goto label_32f0f0;
        case 0x32f0f4u: goto label_32f0f4;
        case 0x32f0f8u: goto label_32f0f8;
        case 0x32f0fcu: goto label_32f0fc;
        case 0x32f100u: goto label_32f100;
        case 0x32f104u: goto label_32f104;
        case 0x32f108u: goto label_32f108;
        case 0x32f10cu: goto label_32f10c;
        case 0x32f110u: goto label_32f110;
        case 0x32f114u: goto label_32f114;
        case 0x32f118u: goto label_32f118;
        case 0x32f11cu: goto label_32f11c;
        case 0x32f120u: goto label_32f120;
        case 0x32f124u: goto label_32f124;
        case 0x32f128u: goto label_32f128;
        case 0x32f12cu: goto label_32f12c;
        case 0x32f130u: goto label_32f130;
        case 0x32f134u: goto label_32f134;
        case 0x32f138u: goto label_32f138;
        case 0x32f13cu: goto label_32f13c;
        case 0x32f140u: goto label_32f140;
        case 0x32f144u: goto label_32f144;
        case 0x32f148u: goto label_32f148;
        case 0x32f14cu: goto label_32f14c;
        case 0x32f150u: goto label_32f150;
        case 0x32f154u: goto label_32f154;
        case 0x32f158u: goto label_32f158;
        case 0x32f15cu: goto label_32f15c;
        case 0x32f160u: goto label_32f160;
        case 0x32f164u: goto label_32f164;
        case 0x32f168u: goto label_32f168;
        case 0x32f16cu: goto label_32f16c;
        case 0x32f170u: goto label_32f170;
        case 0x32f174u: goto label_32f174;
        case 0x32f178u: goto label_32f178;
        case 0x32f17cu: goto label_32f17c;
        case 0x32f180u: goto label_32f180;
        case 0x32f184u: goto label_32f184;
        case 0x32f188u: goto label_32f188;
        case 0x32f18cu: goto label_32f18c;
        case 0x32f190u: goto label_32f190;
        case 0x32f194u: goto label_32f194;
        case 0x32f198u: goto label_32f198;
        case 0x32f19cu: goto label_32f19c;
        case 0x32f1a0u: goto label_32f1a0;
        case 0x32f1a4u: goto label_32f1a4;
        case 0x32f1a8u: goto label_32f1a8;
        case 0x32f1acu: goto label_32f1ac;
        case 0x32f1b0u: goto label_32f1b0;
        case 0x32f1b4u: goto label_32f1b4;
        case 0x32f1b8u: goto label_32f1b8;
        case 0x32f1bcu: goto label_32f1bc;
        case 0x32f1c0u: goto label_32f1c0;
        case 0x32f1c4u: goto label_32f1c4;
        case 0x32f1c8u: goto label_32f1c8;
        case 0x32f1ccu: goto label_32f1cc;
        case 0x32f1d0u: goto label_32f1d0;
        case 0x32f1d4u: goto label_32f1d4;
        case 0x32f1d8u: goto label_32f1d8;
        case 0x32f1dcu: goto label_32f1dc;
        case 0x32f1e0u: goto label_32f1e0;
        case 0x32f1e4u: goto label_32f1e4;
        case 0x32f1e8u: goto label_32f1e8;
        case 0x32f1ecu: goto label_32f1ec;
        case 0x32f1f0u: goto label_32f1f0;
        case 0x32f1f4u: goto label_32f1f4;
        case 0x32f1f8u: goto label_32f1f8;
        case 0x32f1fcu: goto label_32f1fc;
        case 0x32f200u: goto label_32f200;
        case 0x32f204u: goto label_32f204;
        case 0x32f208u: goto label_32f208;
        case 0x32f20cu: goto label_32f20c;
        case 0x32f210u: goto label_32f210;
        case 0x32f214u: goto label_32f214;
        case 0x32f218u: goto label_32f218;
        case 0x32f21cu: goto label_32f21c;
        case 0x32f220u: goto label_32f220;
        case 0x32f224u: goto label_32f224;
        case 0x32f228u: goto label_32f228;
        case 0x32f22cu: goto label_32f22c;
        case 0x32f230u: goto label_32f230;
        case 0x32f234u: goto label_32f234;
        case 0x32f238u: goto label_32f238;
        case 0x32f23cu: goto label_32f23c;
        case 0x32f240u: goto label_32f240;
        case 0x32f244u: goto label_32f244;
        case 0x32f248u: goto label_32f248;
        case 0x32f24cu: goto label_32f24c;
        case 0x32f250u: goto label_32f250;
        case 0x32f254u: goto label_32f254;
        case 0x32f258u: goto label_32f258;
        case 0x32f25cu: goto label_32f25c;
        case 0x32f260u: goto label_32f260;
        case 0x32f264u: goto label_32f264;
        case 0x32f268u: goto label_32f268;
        case 0x32f26cu: goto label_32f26c;
        case 0x32f270u: goto label_32f270;
        case 0x32f274u: goto label_32f274;
        case 0x32f278u: goto label_32f278;
        case 0x32f27cu: goto label_32f27c;
        case 0x32f280u: goto label_32f280;
        case 0x32f284u: goto label_32f284;
        case 0x32f288u: goto label_32f288;
        case 0x32f28cu: goto label_32f28c;
        case 0x32f290u: goto label_32f290;
        case 0x32f294u: goto label_32f294;
        case 0x32f298u: goto label_32f298;
        case 0x32f29cu: goto label_32f29c;
        case 0x32f2a0u: goto label_32f2a0;
        case 0x32f2a4u: goto label_32f2a4;
        case 0x32f2a8u: goto label_32f2a8;
        case 0x32f2acu: goto label_32f2ac;
        case 0x32f2b0u: goto label_32f2b0;
        case 0x32f2b4u: goto label_32f2b4;
        case 0x32f2b8u: goto label_32f2b8;
        case 0x32f2bcu: goto label_32f2bc;
        case 0x32f2c0u: goto label_32f2c0;
        case 0x32f2c4u: goto label_32f2c4;
        case 0x32f2c8u: goto label_32f2c8;
        case 0x32f2ccu: goto label_32f2cc;
        case 0x32f2d0u: goto label_32f2d0;
        case 0x32f2d4u: goto label_32f2d4;
        case 0x32f2d8u: goto label_32f2d8;
        case 0x32f2dcu: goto label_32f2dc;
        case 0x32f2e0u: goto label_32f2e0;
        case 0x32f2e4u: goto label_32f2e4;
        case 0x32f2e8u: goto label_32f2e8;
        case 0x32f2ecu: goto label_32f2ec;
        case 0x32f2f0u: goto label_32f2f0;
        case 0x32f2f4u: goto label_32f2f4;
        case 0x32f2f8u: goto label_32f2f8;
        case 0x32f2fcu: goto label_32f2fc;
        case 0x32f300u: goto label_32f300;
        case 0x32f304u: goto label_32f304;
        case 0x32f308u: goto label_32f308;
        case 0x32f30cu: goto label_32f30c;
        case 0x32f310u: goto label_32f310;
        case 0x32f314u: goto label_32f314;
        case 0x32f318u: goto label_32f318;
        case 0x32f31cu: goto label_32f31c;
        case 0x32f320u: goto label_32f320;
        case 0x32f324u: goto label_32f324;
        case 0x32f328u: goto label_32f328;
        case 0x32f32cu: goto label_32f32c;
        case 0x32f330u: goto label_32f330;
        case 0x32f334u: goto label_32f334;
        case 0x32f338u: goto label_32f338;
        case 0x32f33cu: goto label_32f33c;
        case 0x32f340u: goto label_32f340;
        case 0x32f344u: goto label_32f344;
        case 0x32f348u: goto label_32f348;
        case 0x32f34cu: goto label_32f34c;
        case 0x32f350u: goto label_32f350;
        case 0x32f354u: goto label_32f354;
        case 0x32f358u: goto label_32f358;
        case 0x32f35cu: goto label_32f35c;
        case 0x32f360u: goto label_32f360;
        case 0x32f364u: goto label_32f364;
        case 0x32f368u: goto label_32f368;
        case 0x32f36cu: goto label_32f36c;
        case 0x32f370u: goto label_32f370;
        case 0x32f374u: goto label_32f374;
        case 0x32f378u: goto label_32f378;
        case 0x32f37cu: goto label_32f37c;
        case 0x32f380u: goto label_32f380;
        case 0x32f384u: goto label_32f384;
        case 0x32f388u: goto label_32f388;
        case 0x32f38cu: goto label_32f38c;
        case 0x32f390u: goto label_32f390;
        case 0x32f394u: goto label_32f394;
        case 0x32f398u: goto label_32f398;
        case 0x32f39cu: goto label_32f39c;
        case 0x32f3a0u: goto label_32f3a0;
        case 0x32f3a4u: goto label_32f3a4;
        case 0x32f3a8u: goto label_32f3a8;
        case 0x32f3acu: goto label_32f3ac;
        case 0x32f3b0u: goto label_32f3b0;
        case 0x32f3b4u: goto label_32f3b4;
        case 0x32f3b8u: goto label_32f3b8;
        case 0x32f3bcu: goto label_32f3bc;
        case 0x32f3c0u: goto label_32f3c0;
        case 0x32f3c4u: goto label_32f3c4;
        case 0x32f3c8u: goto label_32f3c8;
        case 0x32f3ccu: goto label_32f3cc;
        case 0x32f3d0u: goto label_32f3d0;
        case 0x32f3d4u: goto label_32f3d4;
        case 0x32f3d8u: goto label_32f3d8;
        case 0x32f3dcu: goto label_32f3dc;
        case 0x32f3e0u: goto label_32f3e0;
        case 0x32f3e4u: goto label_32f3e4;
        case 0x32f3e8u: goto label_32f3e8;
        case 0x32f3ecu: goto label_32f3ec;
        case 0x32f3f0u: goto label_32f3f0;
        case 0x32f3f4u: goto label_32f3f4;
        case 0x32f3f8u: goto label_32f3f8;
        case 0x32f3fcu: goto label_32f3fc;
        case 0x32f400u: goto label_32f400;
        case 0x32f404u: goto label_32f404;
        case 0x32f408u: goto label_32f408;
        case 0x32f40cu: goto label_32f40c;
        case 0x32f410u: goto label_32f410;
        case 0x32f414u: goto label_32f414;
        case 0x32f418u: goto label_32f418;
        case 0x32f41cu: goto label_32f41c;
        case 0x32f420u: goto label_32f420;
        case 0x32f424u: goto label_32f424;
        case 0x32f428u: goto label_32f428;
        case 0x32f42cu: goto label_32f42c;
        case 0x32f430u: goto label_32f430;
        case 0x32f434u: goto label_32f434;
        case 0x32f438u: goto label_32f438;
        case 0x32f43cu: goto label_32f43c;
        case 0x32f440u: goto label_32f440;
        case 0x32f444u: goto label_32f444;
        case 0x32f448u: goto label_32f448;
        case 0x32f44cu: goto label_32f44c;
        case 0x32f450u: goto label_32f450;
        case 0x32f454u: goto label_32f454;
        case 0x32f458u: goto label_32f458;
        case 0x32f45cu: goto label_32f45c;
        case 0x32f460u: goto label_32f460;
        case 0x32f464u: goto label_32f464;
        case 0x32f468u: goto label_32f468;
        case 0x32f46cu: goto label_32f46c;
        case 0x32f470u: goto label_32f470;
        case 0x32f474u: goto label_32f474;
        case 0x32f478u: goto label_32f478;
        case 0x32f47cu: goto label_32f47c;
        case 0x32f480u: goto label_32f480;
        case 0x32f484u: goto label_32f484;
        case 0x32f488u: goto label_32f488;
        case 0x32f48cu: goto label_32f48c;
        case 0x32f490u: goto label_32f490;
        case 0x32f494u: goto label_32f494;
        case 0x32f498u: goto label_32f498;
        case 0x32f49cu: goto label_32f49c;
        case 0x32f4a0u: goto label_32f4a0;
        case 0x32f4a4u: goto label_32f4a4;
        case 0x32f4a8u: goto label_32f4a8;
        case 0x32f4acu: goto label_32f4ac;
        case 0x32f4b0u: goto label_32f4b0;
        case 0x32f4b4u: goto label_32f4b4;
        case 0x32f4b8u: goto label_32f4b8;
        case 0x32f4bcu: goto label_32f4bc;
        case 0x32f4c0u: goto label_32f4c0;
        case 0x32f4c4u: goto label_32f4c4;
        case 0x32f4c8u: goto label_32f4c8;
        case 0x32f4ccu: goto label_32f4cc;
        case 0x32f4d0u: goto label_32f4d0;
        case 0x32f4d4u: goto label_32f4d4;
        case 0x32f4d8u: goto label_32f4d8;
        case 0x32f4dcu: goto label_32f4dc;
        case 0x32f4e0u: goto label_32f4e0;
        case 0x32f4e4u: goto label_32f4e4;
        case 0x32f4e8u: goto label_32f4e8;
        case 0x32f4ecu: goto label_32f4ec;
        case 0x32f4f0u: goto label_32f4f0;
        case 0x32f4f4u: goto label_32f4f4;
        case 0x32f4f8u: goto label_32f4f8;
        case 0x32f4fcu: goto label_32f4fc;
        case 0x32f500u: goto label_32f500;
        case 0x32f504u: goto label_32f504;
        case 0x32f508u: goto label_32f508;
        case 0x32f50cu: goto label_32f50c;
        case 0x32f510u: goto label_32f510;
        case 0x32f514u: goto label_32f514;
        case 0x32f518u: goto label_32f518;
        case 0x32f51cu: goto label_32f51c;
        case 0x32f520u: goto label_32f520;
        case 0x32f524u: goto label_32f524;
        case 0x32f528u: goto label_32f528;
        case 0x32f52cu: goto label_32f52c;
        case 0x32f530u: goto label_32f530;
        case 0x32f534u: goto label_32f534;
        case 0x32f538u: goto label_32f538;
        case 0x32f53cu: goto label_32f53c;
        case 0x32f540u: goto label_32f540;
        case 0x32f544u: goto label_32f544;
        case 0x32f548u: goto label_32f548;
        case 0x32f54cu: goto label_32f54c;
        case 0x32f550u: goto label_32f550;
        case 0x32f554u: goto label_32f554;
        case 0x32f558u: goto label_32f558;
        case 0x32f55cu: goto label_32f55c;
        case 0x32f560u: goto label_32f560;
        case 0x32f564u: goto label_32f564;
        case 0x32f568u: goto label_32f568;
        case 0x32f56cu: goto label_32f56c;
        case 0x32f570u: goto label_32f570;
        case 0x32f574u: goto label_32f574;
        case 0x32f578u: goto label_32f578;
        case 0x32f57cu: goto label_32f57c;
        case 0x32f580u: goto label_32f580;
        case 0x32f584u: goto label_32f584;
        case 0x32f588u: goto label_32f588;
        case 0x32f58cu: goto label_32f58c;
        case 0x32f590u: goto label_32f590;
        case 0x32f594u: goto label_32f594;
        case 0x32f598u: goto label_32f598;
        case 0x32f59cu: goto label_32f59c;
        case 0x32f5a0u: goto label_32f5a0;
        case 0x32f5a4u: goto label_32f5a4;
        case 0x32f5a8u: goto label_32f5a8;
        case 0x32f5acu: goto label_32f5ac;
        case 0x32f5b0u: goto label_32f5b0;
        case 0x32f5b4u: goto label_32f5b4;
        case 0x32f5b8u: goto label_32f5b8;
        case 0x32f5bcu: goto label_32f5bc;
        case 0x32f5c0u: goto label_32f5c0;
        case 0x32f5c4u: goto label_32f5c4;
        case 0x32f5c8u: goto label_32f5c8;
        case 0x32f5ccu: goto label_32f5cc;
        case 0x32f5d0u: goto label_32f5d0;
        case 0x32f5d4u: goto label_32f5d4;
        case 0x32f5d8u: goto label_32f5d8;
        case 0x32f5dcu: goto label_32f5dc;
        case 0x32f5e0u: goto label_32f5e0;
        case 0x32f5e4u: goto label_32f5e4;
        case 0x32f5e8u: goto label_32f5e8;
        case 0x32f5ecu: goto label_32f5ec;
        case 0x32f5f0u: goto label_32f5f0;
        case 0x32f5f4u: goto label_32f5f4;
        case 0x32f5f8u: goto label_32f5f8;
        case 0x32f5fcu: goto label_32f5fc;
        case 0x32f600u: goto label_32f600;
        case 0x32f604u: goto label_32f604;
        case 0x32f608u: goto label_32f608;
        case 0x32f60cu: goto label_32f60c;
        case 0x32f610u: goto label_32f610;
        case 0x32f614u: goto label_32f614;
        case 0x32f618u: goto label_32f618;
        case 0x32f61cu: goto label_32f61c;
        case 0x32f620u: goto label_32f620;
        case 0x32f624u: goto label_32f624;
        case 0x32f628u: goto label_32f628;
        case 0x32f62cu: goto label_32f62c;
        case 0x32f630u: goto label_32f630;
        case 0x32f634u: goto label_32f634;
        case 0x32f638u: goto label_32f638;
        case 0x32f63cu: goto label_32f63c;
        case 0x32f640u: goto label_32f640;
        case 0x32f644u: goto label_32f644;
        case 0x32f648u: goto label_32f648;
        case 0x32f64cu: goto label_32f64c;
        case 0x32f650u: goto label_32f650;
        case 0x32f654u: goto label_32f654;
        case 0x32f658u: goto label_32f658;
        case 0x32f65cu: goto label_32f65c;
        case 0x32f660u: goto label_32f660;
        case 0x32f664u: goto label_32f664;
        case 0x32f668u: goto label_32f668;
        case 0x32f66cu: goto label_32f66c;
        case 0x32f670u: goto label_32f670;
        case 0x32f674u: goto label_32f674;
        case 0x32f678u: goto label_32f678;
        case 0x32f67cu: goto label_32f67c;
        case 0x32f680u: goto label_32f680;
        case 0x32f684u: goto label_32f684;
        case 0x32f688u: goto label_32f688;
        case 0x32f68cu: goto label_32f68c;
        case 0x32f690u: goto label_32f690;
        case 0x32f694u: goto label_32f694;
        case 0x32f698u: goto label_32f698;
        case 0x32f69cu: goto label_32f69c;
        case 0x32f6a0u: goto label_32f6a0;
        case 0x32f6a4u: goto label_32f6a4;
        case 0x32f6a8u: goto label_32f6a8;
        case 0x32f6acu: goto label_32f6ac;
        case 0x32f6b0u: goto label_32f6b0;
        case 0x32f6b4u: goto label_32f6b4;
        case 0x32f6b8u: goto label_32f6b8;
        case 0x32f6bcu: goto label_32f6bc;
        case 0x32f6c0u: goto label_32f6c0;
        case 0x32f6c4u: goto label_32f6c4;
        case 0x32f6c8u: goto label_32f6c8;
        case 0x32f6ccu: goto label_32f6cc;
        case 0x32f6d0u: goto label_32f6d0;
        case 0x32f6d4u: goto label_32f6d4;
        case 0x32f6d8u: goto label_32f6d8;
        case 0x32f6dcu: goto label_32f6dc;
        case 0x32f6e0u: goto label_32f6e0;
        case 0x32f6e4u: goto label_32f6e4;
        case 0x32f6e8u: goto label_32f6e8;
        case 0x32f6ecu: goto label_32f6ec;
        case 0x32f6f0u: goto label_32f6f0;
        case 0x32f6f4u: goto label_32f6f4;
        case 0x32f6f8u: goto label_32f6f8;
        case 0x32f6fcu: goto label_32f6fc;
        case 0x32f700u: goto label_32f700;
        case 0x32f704u: goto label_32f704;
        case 0x32f708u: goto label_32f708;
        case 0x32f70cu: goto label_32f70c;
        case 0x32f710u: goto label_32f710;
        case 0x32f714u: goto label_32f714;
        case 0x32f718u: goto label_32f718;
        case 0x32f71cu: goto label_32f71c;
        case 0x32f720u: goto label_32f720;
        case 0x32f724u: goto label_32f724;
        case 0x32f728u: goto label_32f728;
        case 0x32f72cu: goto label_32f72c;
        case 0x32f730u: goto label_32f730;
        case 0x32f734u: goto label_32f734;
        case 0x32f738u: goto label_32f738;
        case 0x32f73cu: goto label_32f73c;
        case 0x32f740u: goto label_32f740;
        case 0x32f744u: goto label_32f744;
        case 0x32f748u: goto label_32f748;
        case 0x32f74cu: goto label_32f74c;
        case 0x32f750u: goto label_32f750;
        case 0x32f754u: goto label_32f754;
        case 0x32f758u: goto label_32f758;
        case 0x32f75cu: goto label_32f75c;
        case 0x32f760u: goto label_32f760;
        case 0x32f764u: goto label_32f764;
        case 0x32f768u: goto label_32f768;
        case 0x32f76cu: goto label_32f76c;
        case 0x32f770u: goto label_32f770;
        case 0x32f774u: goto label_32f774;
        case 0x32f778u: goto label_32f778;
        case 0x32f77cu: goto label_32f77c;
        case 0x32f780u: goto label_32f780;
        case 0x32f784u: goto label_32f784;
        case 0x32f788u: goto label_32f788;
        case 0x32f78cu: goto label_32f78c;
        case 0x32f790u: goto label_32f790;
        case 0x32f794u: goto label_32f794;
        case 0x32f798u: goto label_32f798;
        case 0x32f79cu: goto label_32f79c;
        case 0x32f7a0u: goto label_32f7a0;
        case 0x32f7a4u: goto label_32f7a4;
        case 0x32f7a8u: goto label_32f7a8;
        case 0x32f7acu: goto label_32f7ac;
        case 0x32f7b0u: goto label_32f7b0;
        case 0x32f7b4u: goto label_32f7b4;
        case 0x32f7b8u: goto label_32f7b8;
        case 0x32f7bcu: goto label_32f7bc;
        case 0x32f7c0u: goto label_32f7c0;
        case 0x32f7c4u: goto label_32f7c4;
        case 0x32f7c8u: goto label_32f7c8;
        case 0x32f7ccu: goto label_32f7cc;
        case 0x32f7d0u: goto label_32f7d0;
        case 0x32f7d4u: goto label_32f7d4;
        case 0x32f7d8u: goto label_32f7d8;
        case 0x32f7dcu: goto label_32f7dc;
        case 0x32f7e0u: goto label_32f7e0;
        case 0x32f7e4u: goto label_32f7e4;
        case 0x32f7e8u: goto label_32f7e8;
        case 0x32f7ecu: goto label_32f7ec;
        case 0x32f7f0u: goto label_32f7f0;
        case 0x32f7f4u: goto label_32f7f4;
        case 0x32f7f8u: goto label_32f7f8;
        case 0x32f7fcu: goto label_32f7fc;
        case 0x32f800u: goto label_32f800;
        case 0x32f804u: goto label_32f804;
        case 0x32f808u: goto label_32f808;
        case 0x32f80cu: goto label_32f80c;
        case 0x32f810u: goto label_32f810;
        case 0x32f814u: goto label_32f814;
        case 0x32f818u: goto label_32f818;
        case 0x32f81cu: goto label_32f81c;
        case 0x32f820u: goto label_32f820;
        case 0x32f824u: goto label_32f824;
        case 0x32f828u: goto label_32f828;
        case 0x32f82cu: goto label_32f82c;
        case 0x32f830u: goto label_32f830;
        case 0x32f834u: goto label_32f834;
        case 0x32f838u: goto label_32f838;
        case 0x32f83cu: goto label_32f83c;
        case 0x32f840u: goto label_32f840;
        case 0x32f844u: goto label_32f844;
        case 0x32f848u: goto label_32f848;
        case 0x32f84cu: goto label_32f84c;
        case 0x32f850u: goto label_32f850;
        case 0x32f854u: goto label_32f854;
        case 0x32f858u: goto label_32f858;
        case 0x32f85cu: goto label_32f85c;
        case 0x32f860u: goto label_32f860;
        case 0x32f864u: goto label_32f864;
        case 0x32f868u: goto label_32f868;
        case 0x32f86cu: goto label_32f86c;
        case 0x32f870u: goto label_32f870;
        case 0x32f874u: goto label_32f874;
        case 0x32f878u: goto label_32f878;
        case 0x32f87cu: goto label_32f87c;
        case 0x32f880u: goto label_32f880;
        case 0x32f884u: goto label_32f884;
        case 0x32f888u: goto label_32f888;
        case 0x32f88cu: goto label_32f88c;
        case 0x32f890u: goto label_32f890;
        case 0x32f894u: goto label_32f894;
        case 0x32f898u: goto label_32f898;
        case 0x32f89cu: goto label_32f89c;
        case 0x32f8a0u: goto label_32f8a0;
        case 0x32f8a4u: goto label_32f8a4;
        case 0x32f8a8u: goto label_32f8a8;
        case 0x32f8acu: goto label_32f8ac;
        case 0x32f8b0u: goto label_32f8b0;
        case 0x32f8b4u: goto label_32f8b4;
        case 0x32f8b8u: goto label_32f8b8;
        case 0x32f8bcu: goto label_32f8bc;
        case 0x32f8c0u: goto label_32f8c0;
        case 0x32f8c4u: goto label_32f8c4;
        case 0x32f8c8u: goto label_32f8c8;
        case 0x32f8ccu: goto label_32f8cc;
        case 0x32f8d0u: goto label_32f8d0;
        case 0x32f8d4u: goto label_32f8d4;
        case 0x32f8d8u: goto label_32f8d8;
        case 0x32f8dcu: goto label_32f8dc;
        case 0x32f8e0u: goto label_32f8e0;
        case 0x32f8e4u: goto label_32f8e4;
        case 0x32f8e8u: goto label_32f8e8;
        case 0x32f8ecu: goto label_32f8ec;
        case 0x32f8f0u: goto label_32f8f0;
        case 0x32f8f4u: goto label_32f8f4;
        case 0x32f8f8u: goto label_32f8f8;
        case 0x32f8fcu: goto label_32f8fc;
        case 0x32f900u: goto label_32f900;
        case 0x32f904u: goto label_32f904;
        case 0x32f908u: goto label_32f908;
        case 0x32f90cu: goto label_32f90c;
        case 0x32f910u: goto label_32f910;
        case 0x32f914u: goto label_32f914;
        case 0x32f918u: goto label_32f918;
        case 0x32f91cu: goto label_32f91c;
        case 0x32f920u: goto label_32f920;
        case 0x32f924u: goto label_32f924;
        case 0x32f928u: goto label_32f928;
        case 0x32f92cu: goto label_32f92c;
        case 0x32f930u: goto label_32f930;
        case 0x32f934u: goto label_32f934;
        case 0x32f938u: goto label_32f938;
        case 0x32f93cu: goto label_32f93c;
        case 0x32f940u: goto label_32f940;
        case 0x32f944u: goto label_32f944;
        case 0x32f948u: goto label_32f948;
        case 0x32f94cu: goto label_32f94c;
        case 0x32f950u: goto label_32f950;
        case 0x32f954u: goto label_32f954;
        case 0x32f958u: goto label_32f958;
        case 0x32f95cu: goto label_32f95c;
        case 0x32f960u: goto label_32f960;
        case 0x32f964u: goto label_32f964;
        case 0x32f968u: goto label_32f968;
        case 0x32f96cu: goto label_32f96c;
        case 0x32f970u: goto label_32f970;
        case 0x32f974u: goto label_32f974;
        case 0x32f978u: goto label_32f978;
        case 0x32f97cu: goto label_32f97c;
        case 0x32f980u: goto label_32f980;
        case 0x32f984u: goto label_32f984;
        case 0x32f988u: goto label_32f988;
        case 0x32f98cu: goto label_32f98c;
        case 0x32f990u: goto label_32f990;
        case 0x32f994u: goto label_32f994;
        case 0x32f998u: goto label_32f998;
        case 0x32f99cu: goto label_32f99c;
        case 0x32f9a0u: goto label_32f9a0;
        case 0x32f9a4u: goto label_32f9a4;
        case 0x32f9a8u: goto label_32f9a8;
        case 0x32f9acu: goto label_32f9ac;
        case 0x32f9b0u: goto label_32f9b0;
        case 0x32f9b4u: goto label_32f9b4;
        case 0x32f9b8u: goto label_32f9b8;
        case 0x32f9bcu: goto label_32f9bc;
        case 0x32f9c0u: goto label_32f9c0;
        case 0x32f9c4u: goto label_32f9c4;
        case 0x32f9c8u: goto label_32f9c8;
        case 0x32f9ccu: goto label_32f9cc;
        case 0x32f9d0u: goto label_32f9d0;
        case 0x32f9d4u: goto label_32f9d4;
        case 0x32f9d8u: goto label_32f9d8;
        case 0x32f9dcu: goto label_32f9dc;
        case 0x32f9e0u: goto label_32f9e0;
        case 0x32f9e4u: goto label_32f9e4;
        case 0x32f9e8u: goto label_32f9e8;
        case 0x32f9ecu: goto label_32f9ec;
        case 0x32f9f0u: goto label_32f9f0;
        case 0x32f9f4u: goto label_32f9f4;
        case 0x32f9f8u: goto label_32f9f8;
        case 0x32f9fcu: goto label_32f9fc;
        case 0x32fa00u: goto label_32fa00;
        case 0x32fa04u: goto label_32fa04;
        case 0x32fa08u: goto label_32fa08;
        case 0x32fa0cu: goto label_32fa0c;
        case 0x32fa10u: goto label_32fa10;
        case 0x32fa14u: goto label_32fa14;
        case 0x32fa18u: goto label_32fa18;
        case 0x32fa1cu: goto label_32fa1c;
        case 0x32fa20u: goto label_32fa20;
        case 0x32fa24u: goto label_32fa24;
        case 0x32fa28u: goto label_32fa28;
        case 0x32fa2cu: goto label_32fa2c;
        case 0x32fa30u: goto label_32fa30;
        case 0x32fa34u: goto label_32fa34;
        case 0x32fa38u: goto label_32fa38;
        case 0x32fa3cu: goto label_32fa3c;
        case 0x32fa40u: goto label_32fa40;
        case 0x32fa44u: goto label_32fa44;
        case 0x32fa48u: goto label_32fa48;
        case 0x32fa4cu: goto label_32fa4c;
        case 0x32fa50u: goto label_32fa50;
        case 0x32fa54u: goto label_32fa54;
        case 0x32fa58u: goto label_32fa58;
        case 0x32fa5cu: goto label_32fa5c;
        case 0x32fa60u: goto label_32fa60;
        case 0x32fa64u: goto label_32fa64;
        case 0x32fa68u: goto label_32fa68;
        case 0x32fa6cu: goto label_32fa6c;
        case 0x32fa70u: goto label_32fa70;
        case 0x32fa74u: goto label_32fa74;
        case 0x32fa78u: goto label_32fa78;
        case 0x32fa7cu: goto label_32fa7c;
        case 0x32fa80u: goto label_32fa80;
        case 0x32fa84u: goto label_32fa84;
        case 0x32fa88u: goto label_32fa88;
        case 0x32fa8cu: goto label_32fa8c;
        case 0x32fa90u: goto label_32fa90;
        case 0x32fa94u: goto label_32fa94;
        case 0x32fa98u: goto label_32fa98;
        case 0x32fa9cu: goto label_32fa9c;
        case 0x32faa0u: goto label_32faa0;
        case 0x32faa4u: goto label_32faa4;
        case 0x32faa8u: goto label_32faa8;
        case 0x32faacu: goto label_32faac;
        case 0x32fab0u: goto label_32fab0;
        case 0x32fab4u: goto label_32fab4;
        case 0x32fab8u: goto label_32fab8;
        case 0x32fabcu: goto label_32fabc;
        case 0x32fac0u: goto label_32fac0;
        case 0x32fac4u: goto label_32fac4;
        case 0x32fac8u: goto label_32fac8;
        case 0x32faccu: goto label_32facc;
        case 0x32fad0u: goto label_32fad0;
        case 0x32fad4u: goto label_32fad4;
        case 0x32fad8u: goto label_32fad8;
        case 0x32fadcu: goto label_32fadc;
        case 0x32fae0u: goto label_32fae0;
        case 0x32fae4u: goto label_32fae4;
        case 0x32fae8u: goto label_32fae8;
        case 0x32faecu: goto label_32faec;
        case 0x32faf0u: goto label_32faf0;
        case 0x32faf4u: goto label_32faf4;
        case 0x32faf8u: goto label_32faf8;
        case 0x32fafcu: goto label_32fafc;
        case 0x32fb00u: goto label_32fb00;
        case 0x32fb04u: goto label_32fb04;
        case 0x32fb08u: goto label_32fb08;
        case 0x32fb0cu: goto label_32fb0c;
        case 0x32fb10u: goto label_32fb10;
        case 0x32fb14u: goto label_32fb14;
        case 0x32fb18u: goto label_32fb18;
        case 0x32fb1cu: goto label_32fb1c;
        case 0x32fb20u: goto label_32fb20;
        case 0x32fb24u: goto label_32fb24;
        case 0x32fb28u: goto label_32fb28;
        case 0x32fb2cu: goto label_32fb2c;
        case 0x32fb30u: goto label_32fb30;
        case 0x32fb34u: goto label_32fb34;
        case 0x32fb38u: goto label_32fb38;
        case 0x32fb3cu: goto label_32fb3c;
        case 0x32fb40u: goto label_32fb40;
        case 0x32fb44u: goto label_32fb44;
        case 0x32fb48u: goto label_32fb48;
        case 0x32fb4cu: goto label_32fb4c;
        default: break;
    }

    ctx->pc = 0x32f010u;

label_32f010:
    // 0x32f010: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x32f010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_32f014:
    // 0x32f014: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32f014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_32f018:
    // 0x32f018: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32f018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_32f01c:
    // 0x32f01c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32f01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_32f020:
    // 0x32f020: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32f020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32f024:
    // 0x32f024: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32f024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32f028:
    // 0x32f028: 0x90820c77  lbu         $v0, 0xC77($a0)
    ctx->pc = 0x32f028u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3191)));
label_32f02c:
    // 0x32f02c: 0x104001b1  beqz        $v0, . + 4 + (0x1B1 << 2)
label_32f030:
    if (ctx->pc == 0x32F030u) {
        ctx->pc = 0x32F030u;
            // 0x32f030: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32F034u;
        goto label_32f034;
    }
    ctx->pc = 0x32F02Cu;
    {
        const bool branch_taken_0x32f02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F02Cu;
            // 0x32f030: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f02c) {
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F034u;
label_32f034:
    // 0x32f034: 0x8e420c98  lw          $v0, 0xC98($s2)
    ctx->pc = 0x32f034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3224)));
label_32f038:
    // 0x32f038: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x32f038u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_32f03c:
    // 0x32f03c: 0x102001ad  beqz        $at, . + 4 + (0x1AD << 2)
label_32f040:
    if (ctx->pc == 0x32F040u) {
        ctx->pc = 0x32F044u;
        goto label_32f044;
    }
    ctx->pc = 0x32F03Cu;
    {
        const bool branch_taken_0x32f03c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f03c) {
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F044u;
label_32f044:
    // 0x32f044: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x32f044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_32f048:
    // 0x32f048: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32f048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_32f04c:
    // 0x32f04c: 0x2463d2c0  addiu       $v1, $v1, -0x2D40
    ctx->pc = 0x32f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955712));
label_32f050:
    // 0x32f050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32f050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32f054:
    // 0x32f054: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32f054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_32f058:
    // 0x32f058: 0x400008  jr          $v0
label_32f05c:
    if (ctx->pc == 0x32F05Cu) {
        ctx->pc = 0x32F060u;
        goto label_32f060;
    }
    ctx->pc = 0x32F058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x32F060u: goto label_32f060;
            case 0x32F150u: goto label_32f150;
            case 0x32F24Cu: goto label_32f24c;
            case 0x32F3F0u: goto label_32f3f0;
            case 0x32F430u: goto label_32f430;
            case 0x32F480u: goto label_32f480;
            case 0x32F534u: goto label_32f534;
            default: break;
        }
        return;
    }
    ctx->pc = 0x32F060u;
label_32f060:
    // 0x32f060: 0xc64009cc  lwc1        $f0, 0x9CC($s2)
    ctx->pc = 0x32f060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32f064:
    // 0x32f064: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x32f064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_32f068:
    // 0x32f068: 0x0  nop
    ctx->pc = 0x32f068u;
    // NOP
label_32f06c:
    // 0x32f06c: 0x46007832  c.eq.s      $f15, $f0
    ctx->pc = 0x32f06cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[15], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32f070:
    // 0x32f070: 0x45020035  bc1fl       . + 4 + (0x35 << 2)
label_32f074:
    if (ctx->pc == 0x32F074u) {
        ctx->pc = 0x32F074u;
            // 0x32f074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32F078u;
        goto label_32f078;
    }
    ctx->pc = 0x32F070u;
    {
        const bool branch_taken_0x32f070 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f070) {
            ctx->pc = 0x32F074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F070u;
            // 0x32f074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F148u;
            goto label_32f148;
        }
    }
    ctx->pc = 0x32F078u;
label_32f078:
    // 0x32f078: 0x3c02c16c  lui         $v0, 0xC16C
    ctx->pc = 0x32f078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49516 << 16));
label_32f07c:
    // 0x32f07c: 0x3c03c242  lui         $v1, 0xC242
    ctx->pc = 0x32f07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49730 << 16));
label_32f080:
    // 0x32f080: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32f080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_32f084:
    // 0x32f084: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x32f084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32f088:
    // 0x32f088: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x32f088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_32f08c:
    // 0x32f08c: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x32f08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_32f090:
    // 0x32f090: 0x3c02c398  lui         $v0, 0xC398
    ctx->pc = 0x32f090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50072 << 16));
label_32f094:
    // 0x32f094: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x32f094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32f098:
    // 0x32f098: 0x34420ccd  ori         $v0, $v0, 0xCCD
    ctx->pc = 0x32f098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3277);
label_32f09c:
    // 0x32f09c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x32f09cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32f0a0:
    // 0x32f0a0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x32f0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_32f0a4:
    // 0x32f0a4: 0x0  nop
    ctx->pc = 0x32f0a4u;
    // NOP
label_32f0a8:
    // 0x32f0a8: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x32f0a8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_32f0ac:
    // 0x32f0ac: 0xc0bafb8  jal         func_2EBEE0
label_32f0b0:
    if (ctx->pc == 0x32F0B0u) {
        ctx->pc = 0x32F0B0u;
            // 0x32f0b0: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x32F0B4u;
        goto label_32f0b4;
    }
    ctx->pc = 0x32F0ACu;
    SET_GPR_U32(ctx, 31, 0x32F0B4u);
    ctx->pc = 0x32F0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F0ACu;
            // 0x32f0b0: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F0B4u; }
        if (ctx->pc != 0x32F0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F0B4u; }
        if (ctx->pc != 0x32F0B4u) { return; }
    }
    ctx->pc = 0x32F0B4u;
label_32f0b4:
    // 0x32f0b4: 0x8e450c8c  lw          $a1, 0xC8C($s2)
    ctx->pc = 0x32f0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3212)));
label_32f0b8:
    // 0x32f0b8: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_32f0bc:
    if (ctx->pc == 0x32F0BCu) {
        ctx->pc = 0x32F0BCu;
            // 0x32f0bc: 0x8e440c90  lw          $a0, 0xC90($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3216)));
        ctx->pc = 0x32F0C0u;
        goto label_32f0c0;
    }
    ctx->pc = 0x32F0B8u;
    {
        const bool branch_taken_0x32f0b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f0b8) {
            ctx->pc = 0x32F0BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F0B8u;
            // 0x32f0bc: 0x8e440c90  lw          $a0, 0xC90($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F0D8u;
            goto label_32f0d8;
        }
    }
    ctx->pc = 0x32F0C0u;
label_32f0c0:
    // 0x32f0c0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x32f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_32f0c4:
    // 0x32f0c4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x32f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_32f0c8:
    // 0x32f0c8: 0xc057b7c  jal         func_15EDF0
label_32f0cc:
    if (ctx->pc == 0x32F0CCu) {
        ctx->pc = 0x32F0CCu;
            // 0x32f0cc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x32F0D0u;
        goto label_32f0d0;
    }
    ctx->pc = 0x32F0C8u;
    SET_GPR_U32(ctx, 31, 0x32F0D0u);
    ctx->pc = 0x32F0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F0C8u;
            // 0x32f0cc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F0D0u; }
        if (ctx->pc != 0x32F0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F0D0u; }
        if (ctx->pc != 0x32F0D0u) { return; }
    }
    ctx->pc = 0x32F0D0u;
label_32f0d0:
    // 0x32f0d0: 0xae400c8c  sw          $zero, 0xC8C($s2)
    ctx->pc = 0x32f0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3212), GPR_U32(ctx, 0));
label_32f0d4:
    // 0x32f0d4: 0x8e440c90  lw          $a0, 0xC90($s2)
    ctx->pc = 0x32f0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3216)));
label_32f0d8:
    // 0x32f0d8: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_32f0dc:
    if (ctx->pc == 0x32F0DCu) {
        ctx->pc = 0x32F0DCu;
            // 0x32f0dc: 0x8e440c94  lw          $a0, 0xC94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3220)));
        ctx->pc = 0x32F0E0u;
        goto label_32f0e0;
    }
    ctx->pc = 0x32F0D8u;
    {
        const bool branch_taken_0x32f0d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f0d8) {
            ctx->pc = 0x32F0DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F0D8u;
            // 0x32f0dc: 0x8e440c94  lw          $a0, 0xC94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F108u;
            goto label_32f108;
        }
    }
    ctx->pc = 0x32F0E0u;
label_32f0e0:
    // 0x32f0e0: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x32f0e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_32f0e4:
    // 0x32f0e4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x32f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_32f0e8:
    // 0x32f0e8: 0x34630180  ori         $v1, $v1, 0x180
    ctx->pc = 0x32f0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)384);
label_32f0ec:
    // 0x32f0ec: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x32f0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_32f0f0:
    // 0x32f0f0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x32f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_32f0f4:
    // 0x32f0f4: 0x8e450c90  lw          $a1, 0xC90($s2)
    ctx->pc = 0x32f0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3216)));
label_32f0f8:
    // 0x32f0f8: 0xc057b7c  jal         func_15EDF0
label_32f0fc:
    if (ctx->pc == 0x32F0FCu) {
        ctx->pc = 0x32F0FCu;
            // 0x32f0fc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x32F100u;
        goto label_32f100;
    }
    ctx->pc = 0x32F0F8u;
    SET_GPR_U32(ctx, 31, 0x32F100u);
    ctx->pc = 0x32F0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F0F8u;
            // 0x32f0fc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F100u; }
        if (ctx->pc != 0x32F100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F100u; }
        if (ctx->pc != 0x32F100u) { return; }
    }
    ctx->pc = 0x32F100u;
label_32f100:
    // 0x32f100: 0xae400c90  sw          $zero, 0xC90($s2)
    ctx->pc = 0x32f100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3216), GPR_U32(ctx, 0));
label_32f104:
    // 0x32f104: 0x8e440c94  lw          $a0, 0xC94($s2)
    ctx->pc = 0x32f104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3220)));
label_32f108:
    // 0x32f108: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_32f10c:
    if (ctx->pc == 0x32F10Cu) {
        ctx->pc = 0x32F110u;
        goto label_32f110;
    }
    ctx->pc = 0x32F108u;
    {
        const bool branch_taken_0x32f108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f108) {
            ctx->pc = 0x32F124u;
            goto label_32f124;
        }
    }
    ctx->pc = 0x32F110u;
label_32f110:
    // 0x32f110: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32f110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32f114:
    // 0x32f114: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32f114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_32f118:
    // 0x32f118: 0x320f809  jalr        $t9
label_32f11c:
    if (ctx->pc == 0x32F11Cu) {
        ctx->pc = 0x32F11Cu;
            // 0x32f11c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32F120u;
        goto label_32f120;
    }
    ctx->pc = 0x32F118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32F120u);
        ctx->pc = 0x32F11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F118u;
            // 0x32f11c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32F120u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32F120u; }
            if (ctx->pc != 0x32F120u) { return; }
        }
        }
    }
    ctx->pc = 0x32F120u;
label_32f120:
    // 0x32f120: 0xae400c94  sw          $zero, 0xC94($s2)
    ctx->pc = 0x32f120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3220), GPR_U32(ctx, 0));
label_32f124:
    // 0x32f124: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32f124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32f128:
    // 0x32f128: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x32f128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
label_32f12c:
    // 0x32f12c: 0x8c420e84  lw          $v0, 0xE84($v0)
    ctx->pc = 0x32f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
label_32f130:
    // 0x32f130: 0x8c440d60  lw          $a0, 0xD60($v0)
    ctx->pc = 0x32f130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
label_32f134:
    // 0x32f134: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x32f134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_32f138:
    // 0x32f138: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x32f138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_32f13c:
    // 0x32f13c: 0x320f809  jalr        $t9
label_32f140:
    if (ctx->pc == 0x32F140u) {
        ctx->pc = 0x32F140u;
            // 0x32f140: 0x346501a9  ori         $a1, $v1, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x32F144u;
        goto label_32f144;
    }
    ctx->pc = 0x32F13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32F144u);
        ctx->pc = 0x32F140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F13Cu;
            // 0x32f140: 0x346501a9  ori         $a1, $v1, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32F144u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32F144u; }
            if (ctx->pc != 0x32F144u) { return; }
        }
        }
    }
    ctx->pc = 0x32F144u;
label_32f144:
    // 0x32f144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32f148:
    // 0x32f148: 0x1000016a  b           . + 4 + (0x16A << 2)
label_32f14c:
    if (ctx->pc == 0x32F14Cu) {
        ctx->pc = 0x32F14Cu;
            // 0x32f14c: 0xae420c98  sw          $v0, 0xC98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3224), GPR_U32(ctx, 2));
        ctx->pc = 0x32F150u;
        goto label_32f150;
    }
    ctx->pc = 0x32F148u;
    {
        const bool branch_taken_0x32f148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F148u;
            // 0x32f14c: 0xae420c98  sw          $v0, 0xC98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f148) {
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F150u;
label_32f150:
    // 0x32f150: 0xc64109cc  lwc1        $f1, 0x9CC($s2)
    ctx->pc = 0x32f150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32f154:
    // 0x32f154: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32f154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_32f158:
    // 0x32f158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f15c:
    // 0x32f15c: 0x0  nop
    ctx->pc = 0x32f15cu;
    // NOP
label_32f160:
    // 0x32f160: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32f160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32f164:
    // 0x32f164: 0x45010163  bc1t        . + 4 + (0x163 << 2)
label_32f168:
    if (ctx->pc == 0x32F168u) {
        ctx->pc = 0x32F16Cu;
        goto label_32f16c;
    }
    ctx->pc = 0x32F164u;
    {
        const bool branch_taken_0x32f164 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f164) {
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F16Cu;
label_32f16c:
    // 0x32f16c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32f170:
    // 0x32f170: 0x8c420e84  lw          $v0, 0xE84($v0)
    ctx->pc = 0x32f170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
label_32f174:
    // 0x32f174: 0x8c440d70  lw          $a0, 0xD70($v0)
    ctx->pc = 0x32f174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
label_32f178:
    // 0x32f178: 0xc0bd740  jal         func_2F5D00
label_32f17c:
    if (ctx->pc == 0x32F17Cu) {
        ctx->pc = 0x32F17Cu;
            // 0x32f17c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32F180u;
        goto label_32f180;
    }
    ctx->pc = 0x32F178u;
    SET_GPR_U32(ctx, 31, 0x32F180u);
    ctx->pc = 0x32F17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F178u;
            // 0x32f17c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5D00u;
    if (runtime->hasFunction(0x2F5D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F180u; }
        if (ctx->pc != 0x32F180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5D00_0x2f5d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F180u; }
        if (ctx->pc != 0x32F180u) { return; }
    }
    ctx->pc = 0x32F180u;
label_32f180:
    // 0x32f180: 0x92420c77  lbu         $v0, 0xC77($s2)
    ctx->pc = 0x32f180u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3191)));
label_32f184:
    // 0x32f184: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_32f188:
    if (ctx->pc == 0x32F188u) {
        ctx->pc = 0x32F18Cu;
        goto label_32f18c;
    }
    ctx->pc = 0x32F184u;
    {
        const bool branch_taken_0x32f184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f184) {
            ctx->pc = 0x32F218u;
            goto label_32f218;
        }
    }
    ctx->pc = 0x32F18Cu;
label_32f18c:
    // 0x32f18c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32f190:
    // 0x32f190: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x32f190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_32f194:
    // 0x32f194: 0xc4400720  lwc1        $f0, 0x720($v0)
    ctx->pc = 0x32f194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32f198:
    // 0x32f198: 0xc4620724  lwc1        $f2, 0x724($v1)
    ctx->pc = 0x32f198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32f19c:
    // 0x32f19c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x32f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_32f1a0:
    // 0x32f1a0: 0xc4410728  lwc1        $f1, 0x728($v0)
    ctx->pc = 0x32f1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32f1a4:
    // 0x32f1a4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x32f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_32f1a8:
    // 0x32f1a8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x32f1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_32f1ac:
    // 0x32f1ac: 0xc460072c  lwc1        $f0, 0x72C($v1)
    ctx->pc = 0x32f1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32f1b0:
    // 0x32f1b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32f1b4:
    // 0x32f1b4: 0x8c500e84  lw          $s0, 0xE84($v0)
    ctx->pc = 0x32f1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
label_32f1b8:
    // 0x32f1b8: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x32f1b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_32f1bc:
    // 0x32f1bc: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x32f1bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_32f1c0:
    // 0x32f1c0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x32f1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_32f1c4:
    // 0x32f1c4: 0x260402d0  addiu       $a0, $s0, 0x2D0
    ctx->pc = 0x32f1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
label_32f1c8:
    // 0x32f1c8: 0xc04cc04  jal         func_133010
label_32f1cc:
    if (ctx->pc == 0x32F1CCu) {
        ctx->pc = 0x32F1CCu;
            // 0x32f1cc: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x32F1D0u;
        goto label_32f1d0;
    }
    ctx->pc = 0x32F1C8u;
    SET_GPR_U32(ctx, 31, 0x32F1D0u);
    ctx->pc = 0x32F1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F1C8u;
            // 0x32f1cc: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F1D0u; }
        if (ctx->pc != 0x32F1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F1D0u; }
        if (ctx->pc != 0x32F1D0u) { return; }
    }
    ctx->pc = 0x32F1D0u;
label_32f1d0:
    // 0x32f1d0: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x32f1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_32f1d4:
    // 0x32f1d4: 0xc04cc04  jal         func_133010
label_32f1d8:
    if (ctx->pc == 0x32F1D8u) {
        ctx->pc = 0x32F1D8u;
            // 0x32f1d8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x32F1DCu;
        goto label_32f1dc;
    }
    ctx->pc = 0x32F1D4u;
    SET_GPR_U32(ctx, 31, 0x32F1DCu);
    ctx->pc = 0x32F1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F1D4u;
            // 0x32f1d8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F1DCu; }
        if (ctx->pc != 0x32F1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F1DCu; }
        if (ctx->pc != 0x32F1DCu) { return; }
    }
    ctx->pc = 0x32F1DCu;
label_32f1dc:
    // 0x32f1dc: 0x8e100d74  lw          $s0, 0xD74($s0)
    ctx->pc = 0x32f1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_32f1e0:
    // 0x32f1e0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x32f1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32f1e4:
    // 0x32f1e4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x32f1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32f1e8:
    // 0x32f1e8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x32f1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_32f1ec:
    // 0x32f1ec: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x32f1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_32f1f0:
    // 0x32f1f0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x32f1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32f1f4:
    // 0x32f1f4: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x32f1f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_32f1f8:
    // 0x32f1f8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x32f1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_32f1fc:
    // 0x32f1fc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32f200:
    // 0x32f200: 0xc0a5444  jal         func_295110
label_32f204:
    if (ctx->pc == 0x32F204u) {
        ctx->pc = 0x32F204u;
            // 0x32f204: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x32F208u;
        goto label_32f208;
    }
    ctx->pc = 0x32F200u;
    SET_GPR_U32(ctx, 31, 0x32F208u);
    ctx->pc = 0x32F204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F200u;
            // 0x32f204: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F208u; }
        if (ctx->pc != 0x32F208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F208u; }
        if (ctx->pc != 0x32F208u) { return; }
    }
    ctx->pc = 0x32F208u;
label_32f208:
    // 0x32f208: 0xae0002d0  sw          $zero, 0x2D0($s0)
    ctx->pc = 0x32f208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 0));
label_32f20c:
    // 0x32f20c: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x32f20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
label_32f210:
    // 0x32f210: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x32f210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
label_32f214:
    // 0x32f214: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x32f214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
label_32f218:
    // 0x32f218: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32f218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32f21c:
    // 0x32f21c: 0x8c420e84  lw          $v0, 0xE84($v0)
    ctx->pc = 0x32f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
label_32f220:
    // 0x32f220: 0x8c440550  lw          $a0, 0x550($v0)
    ctx->pc = 0x32f220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
label_32f224:
    // 0x32f224: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x32f224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_32f228:
    // 0x32f228: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32f228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_32f22c:
    // 0x32f22c: 0x320f809  jalr        $t9
label_32f230:
    if (ctx->pc == 0x32F230u) {
        ctx->pc = 0x32F234u;
        goto label_32f234;
    }
    ctx->pc = 0x32F22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32F234u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32F234u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32F234u; }
            if (ctx->pc != 0x32F234u) { return; }
        }
        }
    }
    ctx->pc = 0x32F234u;
label_32f234:
    // 0x32f234: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32f234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32f238:
    // 0x32f238: 0xc07619c  jal         func_1D8670
label_32f23c:
    if (ctx->pc == 0x32F23Cu) {
        ctx->pc = 0x32F23Cu;
            // 0x32f23c: 0x8c440e84  lw          $a0, 0xE84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
        ctx->pc = 0x32F240u;
        goto label_32f240;
    }
    ctx->pc = 0x32F238u;
    SET_GPR_U32(ctx, 31, 0x32F240u);
    ctx->pc = 0x32F23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F238u;
            // 0x32f23c: 0x8c440e84  lw          $a0, 0xE84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8670u;
    if (runtime->hasFunction(0x1D8670u)) {
        auto targetFn = runtime->lookupFunction(0x1D8670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F240u; }
        if (ctx->pc != 0x32F240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8670_0x1d8670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F240u; }
        if (ctx->pc != 0x32F240u) { return; }
    }
    ctx->pc = 0x32F240u;
label_32f240:
    // 0x32f240: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32f240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32f244:
    // 0x32f244: 0x1000012b  b           . + 4 + (0x12B << 2)
label_32f248:
    if (ctx->pc == 0x32F248u) {
        ctx->pc = 0x32F248u;
            // 0x32f248: 0xae420c98  sw          $v0, 0xC98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3224), GPR_U32(ctx, 2));
        ctx->pc = 0x32F24Cu;
        goto label_32f24c;
    }
    ctx->pc = 0x32F244u;
    {
        const bool branch_taken_0x32f244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F244u;
            // 0x32f248: 0xae420c98  sw          $v0, 0xC98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f244) {
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F24Cu;
label_32f24c:
    // 0x32f24c: 0xc64109cc  lwc1        $f1, 0x9CC($s2)
    ctx->pc = 0x32f24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32f250:
    // 0x32f250: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x32f250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_32f254:
    // 0x32f254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f258:
    // 0x32f258: 0x0  nop
    ctx->pc = 0x32f258u;
    // NOP
label_32f25c:
    // 0x32f25c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32f25cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32f260:
    // 0x32f260: 0x45010124  bc1t        . + 4 + (0x124 << 2)
label_32f264:
    if (ctx->pc == 0x32F264u) {
        ctx->pc = 0x32F268u;
        goto label_32f268;
    }
    ctx->pc = 0x32F260u;
    {
        const bool branch_taken_0x32f260 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f260) {
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F268u;
label_32f268:
    // 0x32f268: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32f268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32f26c:
    // 0x32f26c: 0x8e430c8c  lw          $v1, 0xC8C($s2)
    ctx->pc = 0x32f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3212)));
label_32f270:
    // 0x32f270: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_32f274:
    if (ctx->pc == 0x32F274u) {
        ctx->pc = 0x32F274u;
            // 0x32f274: 0x8c500e84  lw          $s0, 0xE84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
        ctx->pc = 0x32F278u;
        goto label_32f278;
    }
    ctx->pc = 0x32F270u;
    {
        const bool branch_taken_0x32f270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F270u;
            // 0x32f274: 0x8c500e84  lw          $s0, 0xE84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f270) {
            ctx->pc = 0x32F2C0u;
            goto label_32f2c0;
        }
    }
    ctx->pc = 0x32F278u;
label_32f278:
    // 0x32f278: 0xc040180  jal         func_100600
label_32f27c:
    if (ctx->pc == 0x32F27Cu) {
        ctx->pc = 0x32F27Cu;
            // 0x32f27c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x32F280u;
        goto label_32f280;
    }
    ctx->pc = 0x32F278u;
    SET_GPR_U32(ctx, 31, 0x32F280u);
    ctx->pc = 0x32F27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F278u;
            // 0x32f27c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F280u; }
        if (ctx->pc != 0x32F280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F280u; }
        if (ctx->pc != 0x32F280u) { return; }
    }
    ctx->pc = 0x32F280u;
label_32f280:
    // 0x32f280: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_32f284:
    if (ctx->pc == 0x32F284u) {
        ctx->pc = 0x32F284u;
            // 0x32f284: 0xae420c8c  sw          $v0, 0xC8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3212), GPR_U32(ctx, 2));
        ctx->pc = 0x32F288u;
        goto label_32f288;
    }
    ctx->pc = 0x32F280u;
    {
        const bool branch_taken_0x32f280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f280) {
            ctx->pc = 0x32F284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F280u;
            // 0x32f284: 0xae420c8c  sw          $v0, 0xC8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F2C0u;
            goto label_32f2c0;
        }
    }
    ctx->pc = 0x32F288u;
label_32f288:
    // 0x32f288: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x32f288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_32f28c:
    // 0x32f28c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32f28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32f290:
    // 0x32f290: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x32f290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_32f294:
    // 0x32f294: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x32f294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_32f298:
    // 0x32f298: 0x820911aa  lb          $t1, 0x11AA($s0)
    ctx->pc = 0x32f298u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_32f29c:
    // 0x32f29c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32f29cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32f2a0:
    // 0x32f2a0: 0x8e0a0d98  lw          $t2, 0xD98($s0)
    ctx->pc = 0x32f2a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_32f2a4:
    // 0x32f2a4: 0x3445ab92  ori         $a1, $v0, 0xAB92
    ctx->pc = 0x32f2a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43922);
label_32f2a8:
    // 0x32f2a8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x32f2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_32f2ac:
    // 0x32f2ac: 0x24670418  addiu       $a3, $v1, 0x418
    ctx->pc = 0x32f2acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1048));
label_32f2b0:
    // 0x32f2b0: 0x24082095  addiu       $t0, $zero, 0x2095
    ctx->pc = 0x32f2b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8341));
label_32f2b4:
    // 0x32f2b4: 0xc0b9404  jal         func_2E5010
label_32f2b8:
    if (ctx->pc == 0x32F2B8u) {
        ctx->pc = 0x32F2B8u;
            // 0x32f2b8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32F2BCu;
        goto label_32f2bc;
    }
    ctx->pc = 0x32F2B4u;
    SET_GPR_U32(ctx, 31, 0x32F2BCu);
    ctx->pc = 0x32F2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F2B4u;
            // 0x32f2b8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F2BCu; }
        if (ctx->pc != 0x32F2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F2BCu; }
        if (ctx->pc != 0x32F2BCu) { return; }
    }
    ctx->pc = 0x32F2BCu;
label_32f2bc:
    // 0x32f2bc: 0xae420c8c  sw          $v0, 0xC8C($s2)
    ctx->pc = 0x32f2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3212), GPR_U32(ctx, 2));
label_32f2c0:
    // 0x32f2c0: 0x8e420c90  lw          $v0, 0xC90($s2)
    ctx->pc = 0x32f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3216)));
label_32f2c4:
    // 0x32f2c4: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_32f2c8:
    if (ctx->pc == 0x32F2C8u) {
        ctx->pc = 0x32F2C8u;
            // 0x32f2c8: 0x8e420c94  lw          $v0, 0xC94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3220)));
        ctx->pc = 0x32F2CCu;
        goto label_32f2cc;
    }
    ctx->pc = 0x32F2C4u;
    {
        const bool branch_taken_0x32f2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f2c4) {
            ctx->pc = 0x32F2C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F2C4u;
            // 0x32f2c8: 0x8e420c94  lw          $v0, 0xC94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F320u;
            goto label_32f320;
        }
    }
    ctx->pc = 0x32F2CCu;
label_32f2cc:
    // 0x32f2cc: 0xc040180  jal         func_100600
label_32f2d0:
    if (ctx->pc == 0x32F2D0u) {
        ctx->pc = 0x32F2D0u;
            // 0x32f2d0: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->pc = 0x32F2D4u;
        goto label_32f2d4;
    }
    ctx->pc = 0x32F2CCu;
    SET_GPR_U32(ctx, 31, 0x32F2D4u);
    ctx->pc = 0x32F2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F2CCu;
            // 0x32f2d0: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F2D4u; }
        if (ctx->pc != 0x32F2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F2D4u; }
        if (ctx->pc != 0x32F2D4u) { return; }
    }
    ctx->pc = 0x32F2D4u;
label_32f2d4:
    // 0x32f2d4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_32f2d8:
    if (ctx->pc == 0x32F2D8u) {
        ctx->pc = 0x32F2D8u;
            // 0x32f2d8: 0xae420c90  sw          $v0, 0xC90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3216), GPR_U32(ctx, 2));
        ctx->pc = 0x32F2DCu;
        goto label_32f2dc;
    }
    ctx->pc = 0x32F2D4u;
    {
        const bool branch_taken_0x32f2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f2d4) {
            ctx->pc = 0x32F2D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F2D4u;
            // 0x32f2d8: 0xae420c90  sw          $v0, 0xC90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F2F8u;
            goto label_32f2f8;
        }
    }
    ctx->pc = 0x32F2DCu;
label_32f2dc:
    // 0x32f2dc: 0x8e070d98  lw          $a3, 0xD98($s0)
    ctx->pc = 0x32f2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_32f2e0:
    // 0x32f2e0: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x32f2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_32f2e4:
    // 0x32f2e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32f2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32f2e8:
    // 0x32f2e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x32f2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32f2ec:
    // 0x32f2ec: 0xc0c3f60  jal         func_30FD80
label_32f2f0:
    if (ctx->pc == 0x32F2F0u) {
        ctx->pc = 0x32F2F0u;
            // 0x32f2f0: 0x24c6d200  addiu       $a2, $a2, -0x2E00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955520));
        ctx->pc = 0x32F2F4u;
        goto label_32f2f4;
    }
    ctx->pc = 0x32F2ECu;
    SET_GPR_U32(ctx, 31, 0x32F2F4u);
    ctx->pc = 0x32F2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F2ECu;
            // 0x32f2f0: 0x24c6d200  addiu       $a2, $a2, -0x2E00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F2F4u; }
        if (ctx->pc != 0x32F2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F2F4u; }
        if (ctx->pc != 0x32F2F4u) { return; }
    }
    ctx->pc = 0x32F2F4u;
label_32f2f4:
    // 0x32f2f4: 0xae420c90  sw          $v0, 0xC90($s2)
    ctx->pc = 0x32f2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3216), GPR_U32(ctx, 2));
label_32f2f8:
    // 0x32f2f8: 0x26050ed0  addiu       $a1, $s0, 0xED0
    ctx->pc = 0x32f2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3792));
label_32f2fc:
    // 0x32f2fc: 0x94460064  lhu         $a2, 0x64($v0)
    ctx->pc = 0x32f2fcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 100)));
label_32f300:
    // 0x32f300: 0x26040ec0  addiu       $a0, $s0, 0xEC0
    ctx->pc = 0x32f300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3776));
label_32f304:
    // 0x32f304: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x32f304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_32f308:
    // 0x32f308: 0x34c60200  ori         $a2, $a2, 0x200
    ctx->pc = 0x32f308u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
label_32f30c:
    // 0x32f30c: 0xa4460064  sh          $a2, 0x64($v0)
    ctx->pc = 0x32f30cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 100), (uint16_t)GPR_U32(ctx, 6));
label_32f310:
    // 0x32f310: 0xac4500c0  sw          $a1, 0xC0($v0)
    ctx->pc = 0x32f310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 5));
label_32f314:
    // 0x32f314: 0xac4400c4  sw          $a0, 0xC4($v0)
    ctx->pc = 0x32f314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 4));
label_32f318:
    // 0x32f318: 0xac4300c8  sw          $v1, 0xC8($v0)
    ctx->pc = 0x32f318u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 3));
label_32f31c:
    // 0x32f31c: 0x8e420c94  lw          $v0, 0xC94($s2)
    ctx->pc = 0x32f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3220)));
label_32f320:
    // 0x32f320: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_32f324:
    if (ctx->pc == 0x32F324u) {
        ctx->pc = 0x32F324u;
            // 0x32f324: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x32F328u;
        goto label_32f328;
    }
    ctx->pc = 0x32F320u;
    {
        const bool branch_taken_0x32f320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f320) {
            ctx->pc = 0x32F324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F320u;
            // 0x32f324: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F370u;
            goto label_32f370;
        }
    }
    ctx->pc = 0x32F328u;
label_32f328:
    // 0x32f328: 0xc040180  jal         func_100600
label_32f32c:
    if (ctx->pc == 0x32F32Cu) {
        ctx->pc = 0x32F32Cu;
            // 0x32f32c: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->pc = 0x32F330u;
        goto label_32f330;
    }
    ctx->pc = 0x32F328u;
    SET_GPR_U32(ctx, 31, 0x32F330u);
    ctx->pc = 0x32F32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F328u;
            // 0x32f32c: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F330u; }
        if (ctx->pc != 0x32F330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F330u; }
        if (ctx->pc != 0x32F330u) { return; }
    }
    ctx->pc = 0x32F330u;
label_32f330:
    // 0x32f330: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_32f334:
    if (ctx->pc == 0x32F334u) {
        ctx->pc = 0x32F334u;
            // 0x32f334: 0xae420c94  sw          $v0, 0xC94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3220), GPR_U32(ctx, 2));
        ctx->pc = 0x32F338u;
        goto label_32f338;
    }
    ctx->pc = 0x32F330u;
    {
        const bool branch_taken_0x32f330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f330) {
            ctx->pc = 0x32F334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F330u;
            // 0x32f334: 0xae420c94  sw          $v0, 0xC94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F36Cu;
            goto label_32f36c;
        }
    }
    ctx->pc = 0x32F338u;
label_32f338:
    // 0x32f338: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x32f338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_32f33c:
    // 0x32f33c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32f33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32f340:
    // 0x32f340: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x32f340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_32f344:
    // 0x32f344: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x32f344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_32f348:
    // 0x32f348: 0x820911aa  lb          $t1, 0x11AA($s0)
    ctx->pc = 0x32f348u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_32f34c:
    // 0x32f34c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x32f34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_32f350:
    // 0x32f350: 0x8e0a0d98  lw          $t2, 0xD98($s0)
    ctx->pc = 0x32f350u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_32f354:
    // 0x32f354: 0x3445abb0  ori         $a1, $v0, 0xABB0
    ctx->pc = 0x32f354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43952);
label_32f358:
    // 0x32f358: 0x2408208b  addiu       $t0, $zero, 0x208B
    ctx->pc = 0x32f358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8331));
label_32f35c:
    // 0x32f35c: 0x246703f8  addiu       $a3, $v1, 0x3F8
    ctx->pc = 0x32f35cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1016));
label_32f360:
    // 0x32f360: 0xc0ca5d0  jal         func_329740
label_32f364:
    if (ctx->pc == 0x32F364u) {
        ctx->pc = 0x32F364u;
            // 0x32f364: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32F368u;
        goto label_32f368;
    }
    ctx->pc = 0x32F360u;
    SET_GPR_U32(ctx, 31, 0x32F368u);
    ctx->pc = 0x32F364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F360u;
            // 0x32f364: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329740u;
    if (runtime->hasFunction(0x329740u)) {
        auto targetFn = runtime->lookupFunction(0x329740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F368u; }
        if (ctx->pc != 0x32F368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329740_0x329740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F368u; }
        if (ctx->pc != 0x32F368u) { return; }
    }
    ctx->pc = 0x32F368u;
label_32f368:
    // 0x32f368: 0xae420c94  sw          $v0, 0xC94($s2)
    ctx->pc = 0x32f368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3220), GPR_U32(ctx, 2));
label_32f36c:
    // 0x32f36c: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x32f36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_32f370:
    // 0x32f370: 0xc040180  jal         func_100600
label_32f374:
    if (ctx->pc == 0x32F374u) {
        ctx->pc = 0x32F374u;
            // 0x32f374: 0x26530058  addiu       $s3, $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
        ctx->pc = 0x32F378u;
        goto label_32f378;
    }
    ctx->pc = 0x32F370u;
    SET_GPR_U32(ctx, 31, 0x32F378u);
    ctx->pc = 0x32F374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F370u;
            // 0x32f374: 0x26530058  addiu       $s3, $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F378u; }
        if (ctx->pc != 0x32F378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F378u; }
        if (ctx->pc != 0x32F378u) { return; }
    }
    ctx->pc = 0x32F378u;
label_32f378:
    // 0x32f378: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_32f37c:
    if (ctx->pc == 0x32F37Cu) {
        ctx->pc = 0x32F380u;
        goto label_32f380;
    }
    ctx->pc = 0x32F378u;
    {
        const bool branch_taken_0x32f378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f378) {
            ctx->pc = 0x32F3ACu;
            goto label_32f3ac;
        }
    }
    ctx->pc = 0x32F380u;
label_32f380:
    // 0x32f380: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32f380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32f384:
    // 0x32f384: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x32f384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32f388:
    // 0x32f388: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x32f388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_32f38c:
    // 0x32f38c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x32f38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_32f390:
    // 0x32f390: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32f390u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_32f394:
    // 0x32f394: 0x3445cc18  ori         $a1, $v0, 0xCC18
    ctx->pc = 0x32f394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52248);
label_32f398:
    // 0x32f398: 0x24080081  addiu       $t0, $zero, 0x81
    ctx->pc = 0x32f398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_32f39c:
    // 0x32f39c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32f39cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32f3a0:
    // 0x32f3a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32f3a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32f3a4:
    // 0x32f3a4: 0xc0b9404  jal         func_2E5010
label_32f3a8:
    if (ctx->pc == 0x32F3A8u) {
        ctx->pc = 0x32F3A8u;
            // 0x32f3a8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32F3ACu;
        goto label_32f3ac;
    }
    ctx->pc = 0x32F3A4u;
    SET_GPR_U32(ctx, 31, 0x32F3ACu);
    ctx->pc = 0x32F3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F3A4u;
            // 0x32f3a8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F3ACu; }
        if (ctx->pc != 0x32F3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F3ACu; }
        if (ctx->pc != 0x32F3ACu) { return; }
    }
    ctx->pc = 0x32F3ACu;
label_32f3ac:
    // 0x32f3ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32f3b0:
    // 0x32f3b0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x32f3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_32f3b4:
    // 0x32f3b4: 0x8c433e58  lw          $v1, 0x3E58($v0)
    ctx->pc = 0x32f3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15960)));
label_32f3b8:
    // 0x32f3b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32f3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32f3bc:
    // 0x32f3bc: 0x8e060d98  lw          $a2, 0xD98($s0)
    ctx->pc = 0x32f3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_32f3c0:
    // 0x32f3c0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x32f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_32f3c4:
    // 0x32f3c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32f3c8:
    // 0x32f3c8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x32f3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_32f3cc:
    // 0x32f3cc: 0xa06400b0  sb          $a0, 0xB0($v1)
    ctx->pc = 0x32f3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 176), (uint8_t)GPR_U32(ctx, 4));
label_32f3d0:
    // 0x32f3d0: 0xa06000b4  sb          $zero, 0xB4($v1)
    ctx->pc = 0x32f3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 180), (uint8_t)GPR_U32(ctx, 0));
label_32f3d4:
    // 0x32f3d4: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x32f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_32f3d8:
    // 0x32f3d8: 0x8c44018c  lw          $a0, 0x18C($v0)
    ctx->pc = 0x32f3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 396)));
label_32f3dc:
    // 0x32f3dc: 0xc05d85a  jal         func_176168
label_32f3e0:
    if (ctx->pc == 0x32F3E0u) {
        ctx->pc = 0x32F3E0u;
            // 0x32f3e0: 0x24a5d2b0  addiu       $a1, $a1, -0x2D50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955696));
        ctx->pc = 0x32F3E4u;
        goto label_32f3e4;
    }
    ctx->pc = 0x32F3DCu;
    SET_GPR_U32(ctx, 31, 0x32F3E4u);
    ctx->pc = 0x32F3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F3DCu;
            // 0x32f3e0: 0x24a5d2b0  addiu       $a1, $a1, -0x2D50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F3E4u; }
        if (ctx->pc != 0x32F3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F3E4u; }
        if (ctx->pc != 0x32F3E4u) { return; }
    }
    ctx->pc = 0x32F3E4u;
label_32f3e4:
    // 0x32f3e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32f3e8:
    // 0x32f3e8: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_32f3ec:
    if (ctx->pc == 0x32F3ECu) {
        ctx->pc = 0x32F3ECu;
            // 0x32f3ec: 0xae420c98  sw          $v0, 0xC98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3224), GPR_U32(ctx, 2));
        ctx->pc = 0x32F3F0u;
        goto label_32f3f0;
    }
    ctx->pc = 0x32F3E8u;
    {
        const bool branch_taken_0x32f3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F3E8u;
            // 0x32f3ec: 0xae420c98  sw          $v0, 0xC98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f3e8) {
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F3F0u;
label_32f3f0:
    // 0x32f3f0: 0xc64109cc  lwc1        $f1, 0x9CC($s2)
    ctx->pc = 0x32f3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32f3f4:
    // 0x32f3f4: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x32f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_32f3f8:
    // 0x32f3f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f3fc:
    // 0x32f3fc: 0x0  nop
    ctx->pc = 0x32f3fcu;
    // NOP
label_32f400:
    // 0x32f400: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32f400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32f404:
    // 0x32f404: 0x450100bb  bc1t        . + 4 + (0xBB << 2)
label_32f408:
    if (ctx->pc == 0x32F408u) {
        ctx->pc = 0x32F40Cu;
        goto label_32f40c;
    }
    ctx->pc = 0x32F404u;
    {
        const bool branch_taken_0x32f404 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f404) {
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F40Cu;
label_32f40c:
    // 0x32f40c: 0x8e4309d8  lw          $v1, 0x9D8($s2)
    ctx->pc = 0x32f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2520)));
label_32f410:
    // 0x32f410: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_32f414:
    if (ctx->pc == 0x32F414u) {
        ctx->pc = 0x32F414u;
            // 0x32f414: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x32F418u;
        goto label_32f418;
    }
    ctx->pc = 0x32F410u;
    {
        const bool branch_taken_0x32f410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f410) {
            ctx->pc = 0x32F414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F410u;
            // 0x32f414: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F428u;
            goto label_32f428;
        }
    }
    ctx->pc = 0x32F418u;
label_32f418:
    // 0x32f418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32f41c:
    // 0x32f41c: 0xa0620058  sb          $v0, 0x58($v1)
    ctx->pc = 0x32f41cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 88), (uint8_t)GPR_U32(ctx, 2));
label_32f420:
    // 0x32f420: 0xae4009d8  sw          $zero, 0x9D8($s2)
    ctx->pc = 0x32f420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2520), GPR_U32(ctx, 0));
label_32f424:
    // 0x32f424: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32f424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32f428:
    // 0x32f428: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_32f42c:
    if (ctx->pc == 0x32F42Cu) {
        ctx->pc = 0x32F42Cu;
            // 0x32f42c: 0xae420c98  sw          $v0, 0xC98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3224), GPR_U32(ctx, 2));
        ctx->pc = 0x32F430u;
        goto label_32f430;
    }
    ctx->pc = 0x32F428u;
    {
        const bool branch_taken_0x32f428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F428u;
            // 0x32f42c: 0xae420c98  sw          $v0, 0xC98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f428) {
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F430u;
label_32f430:
    // 0x32f430: 0xc64209cc  lwc1        $f2, 0x9CC($s2)
    ctx->pc = 0x32f430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32f434:
    // 0x32f434: 0x3c0242ce  lui         $v0, 0x42CE
    ctx->pc = 0x32f434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17102 << 16));
label_32f438:
    // 0x32f438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f43c:
    // 0x32f43c: 0x0  nop
    ctx->pc = 0x32f43cu;
    // NOP
label_32f440:
    // 0x32f440: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x32f440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32f444:
    // 0x32f444: 0x450100ab  bc1t        . + 4 + (0xAB << 2)
label_32f448:
    if (ctx->pc == 0x32F448u) {
        ctx->pc = 0x32F44Cu;
        goto label_32f44c;
    }
    ctx->pc = 0x32F444u;
    {
        const bool branch_taken_0x32f444 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f444) {
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F44Cu;
label_32f44c:
    // 0x32f44c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32f450:
    // 0x32f450: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x32f450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_32f454:
    // 0x32f454: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x32f454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_32f458:
    // 0x32f458: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32f458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f45c:
    // 0x32f45c: 0x0  nop
    ctx->pc = 0x32f45cu;
    // NOP
label_32f460:
    // 0x32f460: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x32f460u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_32f464:
    // 0x32f464: 0xc64109d4  lwc1        $f1, 0x9D4($s2)
    ctx->pc = 0x32f464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32f468:
    // 0x32f468: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x32f468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32f46c:
    // 0x32f46c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32f470:
    // 0x32f470: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x32f470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_32f474:
    // 0x32f474: 0xe64009cc  swc1        $f0, 0x9CC($s2)
    ctx->pc = 0x32f474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2508), bits); }
label_32f478:
    // 0x32f478: 0x100001ab  b           . + 4 + (0x1AB << 2)
label_32f47c:
    if (ctx->pc == 0x32F47Cu) {
        ctx->pc = 0x32F47Cu;
            // 0x32f47c: 0xae430c98  sw          $v1, 0xC98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3224), GPR_U32(ctx, 3));
        ctx->pc = 0x32F480u;
        goto label_32f480;
    }
    ctx->pc = 0x32F478u;
    {
        const bool branch_taken_0x32f478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F478u;
            // 0x32f47c: 0xae430c98  sw          $v1, 0xC98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f478) {
            ctx->pc = 0x32FB28u;
            goto label_32fb28;
        }
    }
    ctx->pc = 0x32F480u;
label_32f480:
    // 0x32f480: 0xc64109cc  lwc1        $f1, 0x9CC($s2)
    ctx->pc = 0x32f480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32f484:
    // 0x32f484: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x32f484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
label_32f488:
    // 0x32f488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f48c:
    // 0x32f48c: 0x0  nop
    ctx->pc = 0x32f48cu;
    // NOP
label_32f490:
    // 0x32f490: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32f490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32f494:
    // 0x32f494: 0x45010097  bc1t        . + 4 + (0x97 << 2)
label_32f498:
    if (ctx->pc == 0x32F498u) {
        ctx->pc = 0x32F49Cu;
        goto label_32f49c;
    }
    ctx->pc = 0x32F494u;
    {
        const bool branch_taken_0x32f494 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f494) {
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F49Cu;
label_32f49c:
    // 0x32f49c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32f4a0:
    // 0x32f4a0: 0x8e450c8c  lw          $a1, 0xC8C($s2)
    ctx->pc = 0x32f4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3212)));
label_32f4a4:
    // 0x32f4a4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_32f4a8:
    if (ctx->pc == 0x32F4A8u) {
        ctx->pc = 0x32F4A8u;
            // 0x32f4a8: 0x8c500e84  lw          $s0, 0xE84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
        ctx->pc = 0x32F4ACu;
        goto label_32f4ac;
    }
    ctx->pc = 0x32F4A4u;
    {
        const bool branch_taken_0x32f4a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F4A4u;
            // 0x32f4a8: 0x8c500e84  lw          $s0, 0xE84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f4a4) {
            ctx->pc = 0x32F4C0u;
            goto label_32f4c0;
        }
    }
    ctx->pc = 0x32F4ACu;
label_32f4ac:
    // 0x32f4ac: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x32f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_32f4b0:
    // 0x32f4b0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x32f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_32f4b4:
    // 0x32f4b4: 0xc057b7c  jal         func_15EDF0
label_32f4b8:
    if (ctx->pc == 0x32F4B8u) {
        ctx->pc = 0x32F4B8u;
            // 0x32f4b8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x32F4BCu;
        goto label_32f4bc;
    }
    ctx->pc = 0x32F4B4u;
    SET_GPR_U32(ctx, 31, 0x32F4BCu);
    ctx->pc = 0x32F4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F4B4u;
            // 0x32f4b8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F4BCu; }
        if (ctx->pc != 0x32F4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F4BCu; }
        if (ctx->pc != 0x32F4BCu) { return; }
    }
    ctx->pc = 0x32F4BCu;
label_32f4bc:
    // 0x32f4bc: 0xae400c8c  sw          $zero, 0xC8C($s2)
    ctx->pc = 0x32f4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3212), GPR_U32(ctx, 0));
label_32f4c0:
    // 0x32f4c0: 0x8e440c90  lw          $a0, 0xC90($s2)
    ctx->pc = 0x32f4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3216)));
label_32f4c4:
    // 0x32f4c4: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_32f4c8:
    if (ctx->pc == 0x32F4C8u) {
        ctx->pc = 0x32F4C8u;
            // 0x32f4c8: 0x8e440c94  lw          $a0, 0xC94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3220)));
        ctx->pc = 0x32F4CCu;
        goto label_32f4cc;
    }
    ctx->pc = 0x32F4C4u;
    {
        const bool branch_taken_0x32f4c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f4c4) {
            ctx->pc = 0x32F4C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F4C4u;
            // 0x32f4c8: 0x8e440c94  lw          $a0, 0xC94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F4F4u;
            goto label_32f4f4;
        }
    }
    ctx->pc = 0x32F4CCu;
label_32f4cc:
    // 0x32f4cc: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x32f4ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_32f4d0:
    // 0x32f4d0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x32f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_32f4d4:
    // 0x32f4d4: 0x34630180  ori         $v1, $v1, 0x180
    ctx->pc = 0x32f4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)384);
label_32f4d8:
    // 0x32f4d8: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x32f4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_32f4dc:
    // 0x32f4dc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x32f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_32f4e0:
    // 0x32f4e0: 0x8e450c90  lw          $a1, 0xC90($s2)
    ctx->pc = 0x32f4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3216)));
label_32f4e4:
    // 0x32f4e4: 0xc057b7c  jal         func_15EDF0
label_32f4e8:
    if (ctx->pc == 0x32F4E8u) {
        ctx->pc = 0x32F4E8u;
            // 0x32f4e8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x32F4ECu;
        goto label_32f4ec;
    }
    ctx->pc = 0x32F4E4u;
    SET_GPR_U32(ctx, 31, 0x32F4ECu);
    ctx->pc = 0x32F4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F4E4u;
            // 0x32f4e8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F4ECu; }
        if (ctx->pc != 0x32F4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F4ECu; }
        if (ctx->pc != 0x32F4ECu) { return; }
    }
    ctx->pc = 0x32F4ECu;
label_32f4ec:
    // 0x32f4ec: 0xae400c90  sw          $zero, 0xC90($s2)
    ctx->pc = 0x32f4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3216), GPR_U32(ctx, 0));
label_32f4f0:
    // 0x32f4f0: 0x8e440c94  lw          $a0, 0xC94($s2)
    ctx->pc = 0x32f4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3220)));
label_32f4f4:
    // 0x32f4f4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_32f4f8:
    if (ctx->pc == 0x32F4F8u) {
        ctx->pc = 0x32F4F8u;
            // 0x32f4f8: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x32F4FCu;
        goto label_32f4fc;
    }
    ctx->pc = 0x32F4F4u;
    {
        const bool branch_taken_0x32f4f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f4f4) {
            ctx->pc = 0x32F4F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F4F4u;
            // 0x32f4f8: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F514u;
            goto label_32f514;
        }
    }
    ctx->pc = 0x32F4FCu;
label_32f4fc:
    // 0x32f4fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32f4fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32f500:
    // 0x32f500: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32f500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_32f504:
    // 0x32f504: 0x320f809  jalr        $t9
label_32f508:
    if (ctx->pc == 0x32F508u) {
        ctx->pc = 0x32F508u;
            // 0x32f508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32F50Cu;
        goto label_32f50c;
    }
    ctx->pc = 0x32F504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32F50Cu);
        ctx->pc = 0x32F508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F504u;
            // 0x32f508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32F50Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32F50Cu; }
            if (ctx->pc != 0x32F50Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32F50Cu;
label_32f50c:
    // 0x32f50c: 0xae400c94  sw          $zero, 0xC94($s2)
    ctx->pc = 0x32f50cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3220), GPR_U32(ctx, 0));
label_32f510:
    // 0x32f510: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x32f510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32f514:
    // 0x32f514: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32f514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32f518:
    // 0x32f518: 0xae430c98  sw          $v1, 0xC98($s2)
    ctx->pc = 0x32f518u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3224), GPR_U32(ctx, 3));
label_32f51c:
    // 0x32f51c: 0xa2400c9c  sb          $zero, 0xC9C($s2)
    ctx->pc = 0x32f51cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3228), (uint8_t)GPR_U32(ctx, 0));
label_32f520:
    // 0x32f520: 0x8e030d98  lw          $v1, 0xD98($s0)
    ctx->pc = 0x32f520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_32f524:
    // 0x32f524: 0x8c423e58  lw          $v0, 0x3E58($v0)
    ctx->pc = 0x32f524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15960)));
label_32f528:
    // 0x32f528: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x32f528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32f52c:
    // 0x32f52c: 0x10000071  b           . + 4 + (0x71 << 2)
label_32f530:
    if (ctx->pc == 0x32F530u) {
        ctx->pc = 0x32F530u;
            // 0x32f530: 0xa04000c0  sb          $zero, 0xC0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 192), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x32F534u;
        goto label_32f534;
    }
    ctx->pc = 0x32F52Cu;
    {
        const bool branch_taken_0x32f52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F52Cu;
            // 0x32f530: 0xa04000c0  sb          $zero, 0xC0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 192), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f52c) {
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F534u;
label_32f534:
    // 0x32f534: 0xc64109cc  lwc1        $f1, 0x9CC($s2)
    ctx->pc = 0x32f534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32f538:
    // 0x32f538: 0x3c024371  lui         $v0, 0x4371
    ctx->pc = 0x32f538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17265 << 16));
label_32f53c:
    // 0x32f53c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f540:
    // 0x32f540: 0x0  nop
    ctx->pc = 0x32f540u;
    // NOP
label_32f544:
    // 0x32f544: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32f544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32f548:
    // 0x32f548: 0x45030034  bc1tl       . + 4 + (0x34 << 2)
label_32f54c:
    if (ctx->pc == 0x32F54Cu) {
        ctx->pc = 0x32F54Cu;
            // 0x32f54c: 0x3c024326  lui         $v0, 0x4326 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17190 << 16));
        ctx->pc = 0x32F550u;
        goto label_32f550;
    }
    ctx->pc = 0x32F548u;
    {
        const bool branch_taken_0x32f548 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f548) {
            ctx->pc = 0x32F54Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F548u;
            // 0x32f54c: 0x3c024326  lui         $v0, 0x4326 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17190 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F61Cu;
            goto label_32f61c;
        }
    }
    ctx->pc = 0x32F550u;
label_32f550:
    // 0x32f550: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32f550u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_32f554:
    // 0x32f554: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x32f554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_32f558:
    // 0x32f558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f55c:
    // 0x32f55c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32f55cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_32f560:
    // 0x32f560: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32f560u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32f564:
    // 0x32f564: 0x0  nop
    ctx->pc = 0x32f564u;
    // NOP
label_32f568:
    // 0x32f568: 0x0  nop
    ctx->pc = 0x32f568u;
    // NOP
label_32f56c:
    // 0x32f56c: 0x0  nop
    ctx->pc = 0x32f56cu;
    // NOP
label_32f570:
    // 0x32f570: 0x4500fffa  bc1f        . + 4 + (-0x6 << 2)
label_32f574:
    if (ctx->pc == 0x32F574u) {
        ctx->pc = 0x32F578u;
        goto label_32f578;
    }
    ctx->pc = 0x32F570u;
    {
        const bool branch_taken_0x32f570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f570) {
            ctx->pc = 0x32F55Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32f55c;
        }
    }
    ctx->pc = 0x32F578u;
label_32f578:
    // 0x32f578: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x32f578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_32f57c:
    // 0x32f57c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f580:
    // 0x32f580: 0x0  nop
    ctx->pc = 0x32f580u;
    // NOP
label_32f584:
    // 0x32f584: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32f584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32f588:
    // 0x32f588: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_32f58c:
    if (ctx->pc == 0x32F58Cu) {
        ctx->pc = 0x32F58Cu;
            // 0x32f58c: 0x3c0240e0  lui         $v0, 0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
        ctx->pc = 0x32F590u;
        goto label_32f590;
    }
    ctx->pc = 0x32F588u;
    {
        const bool branch_taken_0x32f588 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f588) {
            ctx->pc = 0x32F58Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F588u;
            // 0x32f58c: 0x3c0240e0  lui         $v0, 0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F5ACu;
            goto label_32f5ac;
        }
    }
    ctx->pc = 0x32F590u;
label_32f590:
    // 0x32f590: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x32f590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_32f594:
    // 0x32f594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f598:
    // 0x32f598: 0x0  nop
    ctx->pc = 0x32f598u;
    // NOP
label_32f59c:
    // 0x32f59c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32f59cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32f5a0:
    // 0x32f5a0: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_32f5a4:
    if (ctx->pc == 0x32F5A4u) {
        ctx->pc = 0x32F5A4u;
            // 0x32f5a4: 0x92420c9c  lbu         $v0, 0xC9C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3228)));
        ctx->pc = 0x32F5A8u;
        goto label_32f5a8;
    }
    ctx->pc = 0x32F5A0u;
    {
        const bool branch_taken_0x32f5a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f5a0) {
            ctx->pc = 0x32F5A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F5A0u;
            // 0x32f5a4: 0x92420c9c  lbu         $v0, 0xC9C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3228)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F5DCu;
            goto label_32f5dc;
        }
    }
    ctx->pc = 0x32F5A8u;
label_32f5a8:
    // 0x32f5a8: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x32f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_32f5ac:
    // 0x32f5ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f5b0:
    // 0x32f5b0: 0x0  nop
    ctx->pc = 0x32f5b0u;
    // NOP
label_32f5b4:
    // 0x32f5b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32f5b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32f5b8:
    // 0x32f5b8: 0x4503004e  bc1tl       . + 4 + (0x4E << 2)
label_32f5bc:
    if (ctx->pc == 0x32F5BCu) {
        ctx->pc = 0x32F5BCu;
            // 0x32f5bc: 0xa2400c9c  sb          $zero, 0xC9C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3228), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x32F5C0u;
        goto label_32f5c0;
    }
    ctx->pc = 0x32F5B8u;
    {
        const bool branch_taken_0x32f5b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f5b8) {
            ctx->pc = 0x32F5BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F5B8u;
            // 0x32f5bc: 0xa2400c9c  sb          $zero, 0xC9C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3228), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F5C0u;
label_32f5c0:
    // 0x32f5c0: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x32f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
label_32f5c4:
    // 0x32f5c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f5c8:
    // 0x32f5c8: 0x0  nop
    ctx->pc = 0x32f5c8u;
    // NOP
label_32f5cc:
    // 0x32f5cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32f5ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32f5d0:
    // 0x32f5d0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_32f5d4:
    if (ctx->pc == 0x32F5D4u) {
        ctx->pc = 0x32F5D8u;
        goto label_32f5d8;
    }
    ctx->pc = 0x32F5D0u;
    {
        const bool branch_taken_0x32f5d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f5d0) {
            ctx->pc = 0x32F610u;
            goto label_32f610;
        }
    }
    ctx->pc = 0x32F5D8u;
label_32f5d8:
    // 0x32f5d8: 0x92420c9c  lbu         $v0, 0xC9C($s2)
    ctx->pc = 0x32f5d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3228)));
label_32f5dc:
    // 0x32f5dc: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_32f5e0:
    if (ctx->pc == 0x32F5E0u) {
        ctx->pc = 0x32F5E4u;
        goto label_32f5e4;
    }
    ctx->pc = 0x32F5DCu;
    {
        const bool branch_taken_0x32f5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f5dc) {
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F5E4u;
label_32f5e4:
    // 0x32f5e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32f5e8:
    // 0x32f5e8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x32f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_32f5ec:
    // 0x32f5ec: 0x8c420e84  lw          $v0, 0xE84($v0)
    ctx->pc = 0x32f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
label_32f5f0:
    // 0x32f5f0: 0x8c440d60  lw          $a0, 0xD60($v0)
    ctx->pc = 0x32f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
label_32f5f4:
    // 0x32f5f4: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x32f5f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_32f5f8:
    // 0x32f5f8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x32f5f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_32f5fc:
    // 0x32f5fc: 0x320f809  jalr        $t9
label_32f600:
    if (ctx->pc == 0x32F600u) {
        ctx->pc = 0x32F600u;
            // 0x32f600: 0x346501a9  ori         $a1, $v1, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x32F604u;
        goto label_32f604;
    }
    ctx->pc = 0x32F5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32F604u);
        ctx->pc = 0x32F600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F5FCu;
            // 0x32f600: 0x346501a9  ori         $a1, $v1, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32F604u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32F604u; }
            if (ctx->pc != 0x32F604u) { return; }
        }
        }
    }
    ctx->pc = 0x32F604u;
label_32f604:
    // 0x32f604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32f608:
    // 0x32f608: 0x1000003a  b           . + 4 + (0x3A << 2)
label_32f60c:
    if (ctx->pc == 0x32F60Cu) {
        ctx->pc = 0x32F60Cu;
            // 0x32f60c: 0xa2420c9c  sb          $v0, 0xC9C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3228), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x32F610u;
        goto label_32f610;
    }
    ctx->pc = 0x32F608u;
    {
        const bool branch_taken_0x32f608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F608u;
            // 0x32f60c: 0xa2420c9c  sb          $v0, 0xC9C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3228), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f608) {
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F610u;
label_32f610:
    // 0x32f610: 0xa2400c9c  sb          $zero, 0xC9C($s2)
    ctx->pc = 0x32f610u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3228), (uint8_t)GPR_U32(ctx, 0));
label_32f614:
    // 0x32f614: 0x10000037  b           . + 4 + (0x37 << 2)
label_32f618:
    if (ctx->pc == 0x32F618u) {
        ctx->pc = 0x32F61Cu;
        goto label_32f61c;
    }
    ctx->pc = 0x32F614u;
    {
        const bool branch_taken_0x32f614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f614) {
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F61Cu;
label_32f61c:
    // 0x32f61c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f620:
    // 0x32f620: 0x0  nop
    ctx->pc = 0x32f620u;
    // NOP
label_32f624:
    // 0x32f624: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32f624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32f628:
    // 0x32f628: 0x45010032  bc1t        . + 4 + (0x32 << 2)
label_32f62c:
    if (ctx->pc == 0x32F62Cu) {
        ctx->pc = 0x32F630u;
        goto label_32f630;
    }
    ctx->pc = 0x32F628u;
    {
        const bool branch_taken_0x32f628 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f628) {
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F630u;
label_32f630:
    // 0x32f630: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32f630u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_32f634:
    // 0x32f634: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x32f634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
label_32f638:
    // 0x32f638: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f63c:
    // 0x32f63c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32f63cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_32f640:
    // 0x32f640: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32f640u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32f644:
    // 0x32f644: 0x0  nop
    ctx->pc = 0x32f644u;
    // NOP
label_32f648:
    // 0x32f648: 0x0  nop
    ctx->pc = 0x32f648u;
    // NOP
label_32f64c:
    // 0x32f64c: 0x0  nop
    ctx->pc = 0x32f64cu;
    // NOP
label_32f650:
    // 0x32f650: 0x4500fffa  bc1f        . + 4 + (-0x6 << 2)
label_32f654:
    if (ctx->pc == 0x32F654u) {
        ctx->pc = 0x32F658u;
        goto label_32f658;
    }
    ctx->pc = 0x32F650u;
    {
        const bool branch_taken_0x32f650 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f650) {
            ctx->pc = 0x32F63Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32f63c;
        }
    }
    ctx->pc = 0x32F658u;
label_32f658:
    // 0x32f658: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x32f658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_32f65c:
    // 0x32f65c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f65cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f660:
    // 0x32f660: 0x0  nop
    ctx->pc = 0x32f660u;
    // NOP
label_32f664:
    // 0x32f664: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32f664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32f668:
    // 0x32f668: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_32f66c:
    if (ctx->pc == 0x32F66Cu) {
        ctx->pc = 0x32F66Cu;
            // 0x32f66c: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->pc = 0x32F670u;
        goto label_32f670;
    }
    ctx->pc = 0x32F668u;
    {
        const bool branch_taken_0x32f668 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f668) {
            ctx->pc = 0x32F66Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F668u;
            // 0x32f66c: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F68Cu;
            goto label_32f68c;
        }
    }
    ctx->pc = 0x32F670u;
label_32f670:
    // 0x32f670: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x32f670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_32f674:
    // 0x32f674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f678:
    // 0x32f678: 0x0  nop
    ctx->pc = 0x32f678u;
    // NOP
label_32f67c:
    // 0x32f67c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32f67cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32f680:
    // 0x32f680: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_32f684:
    if (ctx->pc == 0x32F684u) {
        ctx->pc = 0x32F684u;
            // 0x32f684: 0x92420c9c  lbu         $v0, 0xC9C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3228)));
        ctx->pc = 0x32F688u;
        goto label_32f688;
    }
    ctx->pc = 0x32F680u;
    {
        const bool branch_taken_0x32f680 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f680) {
            ctx->pc = 0x32F684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F680u;
            // 0x32f684: 0x92420c9c  lbu         $v0, 0xC9C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3228)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F6BCu;
            goto label_32f6bc;
        }
    }
    ctx->pc = 0x32F688u;
label_32f688:
    // 0x32f688: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x32f688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_32f68c:
    // 0x32f68c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f68cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f690:
    // 0x32f690: 0x0  nop
    ctx->pc = 0x32f690u;
    // NOP
label_32f694:
    // 0x32f694: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32f694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32f698:
    // 0x32f698: 0x45030016  bc1tl       . + 4 + (0x16 << 2)
label_32f69c:
    if (ctx->pc == 0x32F69Cu) {
        ctx->pc = 0x32F69Cu;
            // 0x32f69c: 0xa2400c9c  sb          $zero, 0xC9C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3228), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x32F6A0u;
        goto label_32f6a0;
    }
    ctx->pc = 0x32F698u;
    {
        const bool branch_taken_0x32f698 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f698) {
            ctx->pc = 0x32F69Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F698u;
            // 0x32f69c: 0xa2400c9c  sb          $zero, 0xC9C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3228), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F6A0u;
label_32f6a0:
    // 0x32f6a0: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x32f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
label_32f6a4:
    // 0x32f6a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f6a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f6a8:
    // 0x32f6a8: 0x0  nop
    ctx->pc = 0x32f6a8u;
    // NOP
label_32f6ac:
    // 0x32f6ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32f6acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32f6b0:
    // 0x32f6b0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_32f6b4:
    if (ctx->pc == 0x32F6B4u) {
        ctx->pc = 0x32F6B8u;
        goto label_32f6b8;
    }
    ctx->pc = 0x32F6B0u;
    {
        const bool branch_taken_0x32f6b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f6b0) {
            ctx->pc = 0x32F6F0u;
            goto label_32f6f0;
        }
    }
    ctx->pc = 0x32F6B8u;
label_32f6b8:
    // 0x32f6b8: 0x92420c9c  lbu         $v0, 0xC9C($s2)
    ctx->pc = 0x32f6b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3228)));
label_32f6bc:
    // 0x32f6bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_32f6c0:
    if (ctx->pc == 0x32F6C0u) {
        ctx->pc = 0x32F6C4u;
        goto label_32f6c4;
    }
    ctx->pc = 0x32F6BCu;
    {
        const bool branch_taken_0x32f6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f6bc) {
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F6C4u;
label_32f6c4:
    // 0x32f6c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32f6c8:
    // 0x32f6c8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x32f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_32f6cc:
    // 0x32f6cc: 0x8c420e84  lw          $v0, 0xE84($v0)
    ctx->pc = 0x32f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
label_32f6d0:
    // 0x32f6d0: 0x8c440d60  lw          $a0, 0xD60($v0)
    ctx->pc = 0x32f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
label_32f6d4:
    // 0x32f6d4: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x32f6d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_32f6d8:
    // 0x32f6d8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x32f6d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_32f6dc:
    // 0x32f6dc: 0x320f809  jalr        $t9
label_32f6e0:
    if (ctx->pc == 0x32F6E0u) {
        ctx->pc = 0x32F6E0u;
            // 0x32f6e0: 0x346501a9  ori         $a1, $v1, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x32F6E4u;
        goto label_32f6e4;
    }
    ctx->pc = 0x32F6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32F6E4u);
        ctx->pc = 0x32F6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F6DCu;
            // 0x32f6e0: 0x346501a9  ori         $a1, $v1, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32F6E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32F6E4u; }
            if (ctx->pc != 0x32F6E4u) { return; }
        }
        }
    }
    ctx->pc = 0x32F6E4u;
label_32f6e4:
    // 0x32f6e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32f6e8:
    // 0x32f6e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_32f6ec:
    if (ctx->pc == 0x32F6ECu) {
        ctx->pc = 0x32F6ECu;
            // 0x32f6ec: 0xa2420c9c  sb          $v0, 0xC9C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3228), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x32F6F0u;
        goto label_32f6f0;
    }
    ctx->pc = 0x32F6E8u;
    {
        const bool branch_taken_0x32f6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F6E8u;
            // 0x32f6ec: 0xa2420c9c  sb          $v0, 0xC9C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3228), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f6e8) {
            ctx->pc = 0x32F6F4u;
            goto label_32f6f4;
        }
    }
    ctx->pc = 0x32F6F0u;
label_32f6f0:
    // 0x32f6f0: 0xa2400c9c  sb          $zero, 0xC9C($s2)
    ctx->pc = 0x32f6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3228), (uint8_t)GPR_U32(ctx, 0));
label_32f6f4:
    // 0x32f6f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32f6f8:
    // 0x32f6f8: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x32f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_32f6fc:
    // 0x32f6fc: 0xc64109cc  lwc1        $f1, 0x9CC($s2)
    ctx->pc = 0x32f6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32f700:
    // 0x32f700: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32f700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f704:
    // 0x32f704: 0xc64209d4  lwc1        $f2, 0x9D4($s2)
    ctx->pc = 0x32f704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32f708:
    // 0x32f708: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x32f708u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_32f70c:
    // 0x32f70c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x32f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_32f710:
    // 0x32f710: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x32f710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32f714:
    // 0x32f714: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x32f714u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_32f718:
    // 0x32f718: 0xe64009cc  swc1        $f0, 0x9CC($s2)
    ctx->pc = 0x32f718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2508), bits); }
label_32f71c:
    // 0x32f71c: 0x8c42a140  lw          $v0, -0x5EC0($v0)
    ctx->pc = 0x32f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943040)));
label_32f720:
    // 0x32f720: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x32f720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_32f724:
    // 0x32f724: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x32f724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_32f728:
    // 0x32f728: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_32f72c:
    if (ctx->pc == 0x32F72Cu) {
        ctx->pc = 0x32F72Cu;
            // 0x32f72c: 0x8e440ca4  lw          $a0, 0xCA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3236)));
        ctx->pc = 0x32F730u;
        goto label_32f730;
    }
    ctx->pc = 0x32F728u;
    {
        const bool branch_taken_0x32f728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f728) {
            ctx->pc = 0x32F72Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F728u;
            // 0x32f72c: 0x8e440ca4  lw          $a0, 0xCA4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3236)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F774u;
            goto label_32f774;
        }
    }
    ctx->pc = 0x32F730u;
label_32f730:
    // 0x32f730: 0x92420c77  lbu         $v0, 0xC77($s2)
    ctx->pc = 0x32f730u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3191)));
label_32f734:
    // 0x32f734: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_32f738:
    if (ctx->pc == 0x32F738u) {
        ctx->pc = 0x32F73Cu;
        goto label_32f73c;
    }
    ctx->pc = 0x32F734u;
    {
        const bool branch_taken_0x32f734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f734) {
            ctx->pc = 0x32F770u;
            goto label_32f770;
        }
    }
    ctx->pc = 0x32F73Cu;
label_32f73c:
    // 0x32f73c: 0xc64109d0  lwc1        $f1, 0x9D0($s2)
    ctx->pc = 0x32f73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32f740:
    // 0x32f740: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32f740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_32f744:
    // 0x32f744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32f748:
    // 0x32f748: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32f748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32f74c:
    // 0x32f74c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32f74cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_32f750:
    // 0x32f750: 0xe64009cc  swc1        $f0, 0x9CC($s2)
    ctx->pc = 0x32f750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2508), bits); }
label_32f754:
    // 0x32f754: 0xae420998  sw          $v0, 0x998($s2)
    ctx->pc = 0x32f754u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2456), GPR_U32(ctx, 2));
label_32f758:
    // 0x32f758: 0x8e4309d8  lw          $v1, 0x9D8($s2)
    ctx->pc = 0x32f758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2520)));
label_32f75c:
    // 0x32f75c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_32f760:
    if (ctx->pc == 0x32F760u) {
        ctx->pc = 0x32F764u;
        goto label_32f764;
    }
    ctx->pc = 0x32F75Cu;
    {
        const bool branch_taken_0x32f75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f75c) {
            ctx->pc = 0x32F770u;
            goto label_32f770;
        }
    }
    ctx->pc = 0x32F764u;
label_32f764:
    // 0x32f764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32f768:
    // 0x32f768: 0xa0620058  sb          $v0, 0x58($v1)
    ctx->pc = 0x32f768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 88), (uint8_t)GPR_U32(ctx, 2));
label_32f76c:
    // 0x32f76c: 0xae4009d8  sw          $zero, 0x9D8($s2)
    ctx->pc = 0x32f76cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2520), GPR_U32(ctx, 0));
label_32f770:
    // 0x32f770: 0x8e440ca4  lw          $a0, 0xCA4($s2)
    ctx->pc = 0x32f770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3236)));
label_32f774:
    // 0x32f774: 0x50800019  beql        $a0, $zero, . + 4 + (0x19 << 2)
label_32f778:
    if (ctx->pc == 0x32F778u) {
        ctx->pc = 0x32F778u;
            // 0x32f778: 0xc64109cc  lwc1        $f1, 0x9CC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x32F77Cu;
        goto label_32f77c;
    }
    ctx->pc = 0x32F774u;
    {
        const bool branch_taken_0x32f774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f774) {
            ctx->pc = 0x32F778u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F774u;
            // 0x32f778: 0xc64109cc  lwc1        $f1, 0x9CC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F7DCu;
            goto label_32f7dc;
        }
    }
    ctx->pc = 0x32F77Cu;
label_32f77c:
    // 0x32f77c: 0x8e430998  lw          $v1, 0x998($s2)
    ctx->pc = 0x32f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2456)));
label_32f780:
    // 0x32f780: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32f780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32f784:
    // 0x32f784: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_32f788:
    if (ctx->pc == 0x32F788u) {
        ctx->pc = 0x32F78Cu;
        goto label_32f78c;
    }
    ctx->pc = 0x32F784u;
    {
        const bool branch_taken_0x32f784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32f784) {
            ctx->pc = 0x32F7D0u;
            goto label_32f7d0;
        }
    }
    ctx->pc = 0x32F78Cu;
label_32f78c:
    // 0x32f78c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32f790:
    // 0x32f790: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_32f794:
    if (ctx->pc == 0x32F794u) {
        ctx->pc = 0x32F798u;
        goto label_32f798;
    }
    ctx->pc = 0x32F790u;
    {
        const bool branch_taken_0x32f790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32f790) {
            ctx->pc = 0x32F7D0u;
            goto label_32f7d0;
        }
    }
    ctx->pc = 0x32F798u;
label_32f798:
    // 0x32f798: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32f798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32f79c:
    // 0x32f79c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_32f7a0:
    if (ctx->pc == 0x32F7A0u) {
        ctx->pc = 0x32F7A4u;
        goto label_32f7a4;
    }
    ctx->pc = 0x32F79Cu;
    {
        const bool branch_taken_0x32f79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32f79c) {
            ctx->pc = 0x32F7D0u;
            goto label_32f7d0;
        }
    }
    ctx->pc = 0x32F7A4u;
label_32f7a4:
    // 0x32f7a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32f7a8:
    // 0x32f7a8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_32f7ac:
    if (ctx->pc == 0x32F7ACu) {
        ctx->pc = 0x32F7B0u;
        goto label_32f7b0;
    }
    ctx->pc = 0x32F7A8u;
    {
        const bool branch_taken_0x32f7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32f7a8) {
            ctx->pc = 0x32F7C0u;
            goto label_32f7c0;
        }
    }
    ctx->pc = 0x32F7B0u;
label_32f7b0:
    // 0x32f7b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_32f7b4:
    if (ctx->pc == 0x32F7B4u) {
        ctx->pc = 0x32F7B8u;
        goto label_32f7b8;
    }
    ctx->pc = 0x32F7B0u;
    {
        const bool branch_taken_0x32f7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f7b0) {
            ctx->pc = 0x32F7C0u;
            goto label_32f7c0;
        }
    }
    ctx->pc = 0x32F7B8u;
label_32f7b8:
    // 0x32f7b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_32f7bc:
    if (ctx->pc == 0x32F7BCu) {
        ctx->pc = 0x32F7C0u;
        goto label_32f7c0;
    }
    ctx->pc = 0x32F7B8u;
    {
        const bool branch_taken_0x32f7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f7b8) {
            ctx->pc = 0x32F7D0u;
            goto label_32f7d0;
        }
    }
    ctx->pc = 0x32F7C0u;
label_32f7c0:
    // 0x32f7c0: 0xc10c9d8  jal         func_432760
label_32f7c4:
    if (ctx->pc == 0x32F7C4u) {
        ctx->pc = 0x32F7C8u;
        goto label_32f7c8;
    }
    ctx->pc = 0x32F7C0u;
    SET_GPR_U32(ctx, 31, 0x32F7C8u);
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F7C8u; }
        if (ctx->pc != 0x32F7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F7C8u; }
        if (ctx->pc != 0x32F7C8u) { return; }
    }
    ctx->pc = 0x32F7C8u;
label_32f7c8:
    // 0x32f7c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_32f7cc:
    if (ctx->pc == 0x32F7CCu) {
        ctx->pc = 0x32F7D0u;
        goto label_32f7d0;
    }
    ctx->pc = 0x32F7C8u;
    {
        const bool branch_taken_0x32f7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f7c8) {
            ctx->pc = 0x32F7D8u;
            goto label_32f7d8;
        }
    }
    ctx->pc = 0x32F7D0u;
label_32f7d0:
    // 0x32f7d0: 0xc10c9b4  jal         func_4326D0
label_32f7d4:
    if (ctx->pc == 0x32F7D4u) {
        ctx->pc = 0x32F7D8u;
        goto label_32f7d8;
    }
    ctx->pc = 0x32F7D0u;
    SET_GPR_U32(ctx, 31, 0x32F7D8u);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F7D8u; }
        if (ctx->pc != 0x32F7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F7D8u; }
        if (ctx->pc != 0x32F7D8u) { return; }
    }
    ctx->pc = 0x32F7D8u;
label_32f7d8:
    // 0x32f7d8: 0xc64109cc  lwc1        $f1, 0x9CC($s2)
    ctx->pc = 0x32f7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32f7dc:
    // 0x32f7dc: 0xc64009d0  lwc1        $f0, 0x9D0($s2)
    ctx->pc = 0x32f7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32f7e0:
    // 0x32f7e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x32f7e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32f7e4:
    // 0x32f7e4: 0x450300ad  bc1tl       . + 4 + (0xAD << 2)
label_32f7e8:
    if (ctx->pc == 0x32F7E8u) {
        ctx->pc = 0x32F7E8u;
            // 0x32f7e8: 0x92420c77  lbu         $v0, 0xC77($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3191)));
        ctx->pc = 0x32F7ECu;
        goto label_32f7ec;
    }
    ctx->pc = 0x32F7E4u;
    {
        const bool branch_taken_0x32f7e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f7e4) {
            ctx->pc = 0x32F7E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F7E4u;
            // 0x32f7e8: 0x92420c77  lbu         $v0, 0xC77($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3191)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32FA9Cu;
            goto label_32fa9c;
        }
    }
    ctx->pc = 0x32F7ECu;
label_32f7ec:
    // 0x32f7ec: 0x92420c77  lbu         $v0, 0xC77($s2)
    ctx->pc = 0x32f7ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3191)));
label_32f7f0:
    // 0x32f7f0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_32f7f4:
    if (ctx->pc == 0x32F7F4u) {
        ctx->pc = 0x32F7F4u;
            // 0x32f7f4: 0x8e440998  lw          $a0, 0x998($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2456)));
        ctx->pc = 0x32F7F8u;
        goto label_32f7f8;
    }
    ctx->pc = 0x32F7F0u;
    {
        const bool branch_taken_0x32f7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f7f0) {
            ctx->pc = 0x32F7F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F7F0u;
            // 0x32f7f4: 0x8e440998  lw          $a0, 0x998($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2456)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F834u;
            goto label_32f834;
        }
    }
    ctx->pc = 0x32F7F8u;
label_32f7f8:
    // 0x32f7f8: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x32f7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_32f7fc:
    // 0x32f7fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32f7fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32f800:
    // 0x32f800: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x32f800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_32f804:
    // 0x32f804: 0xc0761d4  jal         func_1D8750
label_32f808:
    if (ctx->pc == 0x32F808u) {
        ctx->pc = 0x32F808u;
            // 0x32f808: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x32F80Cu;
        goto label_32f80c;
    }
    ctx->pc = 0x32F804u;
    SET_GPR_U32(ctx, 31, 0x32F80Cu);
    ctx->pc = 0x32F808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F804u;
            // 0x32f808: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8750u;
    if (runtime->hasFunction(0x1D8750u)) {
        auto targetFn = runtime->lookupFunction(0x1D8750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F80Cu; }
        if (ctx->pc != 0x32F80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8750_0x1d8750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F80Cu; }
        if (ctx->pc != 0x32F80Cu) { return; }
    }
    ctx->pc = 0x32F80Cu;
label_32f80c:
    // 0x32f80c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32f80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32f810:
    // 0x32f810: 0xc07626c  jal         func_1D89B0
label_32f814:
    if (ctx->pc == 0x32F814u) {
        ctx->pc = 0x32F814u;
            // 0x32f814: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x32F818u;
        goto label_32f818;
    }
    ctx->pc = 0x32F810u;
    SET_GPR_U32(ctx, 31, 0x32F818u);
    ctx->pc = 0x32F814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F810u;
            // 0x32f814: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F818u; }
        if (ctx->pc != 0x32F818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F818u; }
        if (ctx->pc != 0x32F818u) { return; }
    }
    ctx->pc = 0x32F818u;
label_32f818:
    // 0x32f818: 0x8e42077c  lw          $v0, 0x77C($s2)
    ctx->pc = 0x32f818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1916)));
label_32f81c:
    // 0x32f81c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32f81cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32f820:
    // 0x32f820: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x32f820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32f824:
    // 0x32f824: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_32f828:
    if (ctx->pc == 0x32F828u) {
        ctx->pc = 0x32F828u;
            // 0x32f828: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x32F82Cu;
        goto label_32f82c;
    }
    ctx->pc = 0x32F824u;
    {
        const bool branch_taken_0x32f824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F824u;
            // 0x32f828: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f824) {
            ctx->pc = 0x32F804u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32f804;
        }
    }
    ctx->pc = 0x32F82Cu;
label_32f82c:
    // 0x32f82c: 0x100000be  b           . + 4 + (0xBE << 2)
label_32f830:
    if (ctx->pc == 0x32F830u) {
        ctx->pc = 0x32F830u;
            // 0x32f830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32F834u;
        goto label_32f834;
    }
    ctx->pc = 0x32F82Cu;
    {
        const bool branch_taken_0x32f82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F82Cu;
            // 0x32f830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f82c) {
            ctx->pc = 0x32FB28u;
            goto label_32fb28;
        }
    }
    ctx->pc = 0x32F834u;
label_32f834:
    // 0x32f834: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32f834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32f838:
    // 0x32f838: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x32f838u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_32f83c:
    // 0x32f83c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x32f83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_32f840:
    // 0x32f840: 0x10a20054  beq         $a1, $v0, . + 4 + (0x54 << 2)
label_32f844:
    if (ctx->pc == 0x32F844u) {
        ctx->pc = 0x32F844u;
            // 0x32f844: 0xae450998  sw          $a1, 0x998($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2456), GPR_U32(ctx, 5));
        ctx->pc = 0x32F848u;
        goto label_32f848;
    }
    ctx->pc = 0x32F840u;
    {
        const bool branch_taken_0x32f840 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x32F844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F840u;
            // 0x32f844: 0xae450998  sw          $a1, 0x998($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2456), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f840) {
            ctx->pc = 0x32F994u;
            goto label_32f994;
        }
    }
    ctx->pc = 0x32F848u;
label_32f848:
    // 0x32f848: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32f848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32f84c:
    // 0x32f84c: 0x10a20045  beq         $a1, $v0, . + 4 + (0x45 << 2)
label_32f850:
    if (ctx->pc == 0x32F850u) {
        ctx->pc = 0x32F854u;
        goto label_32f854;
    }
    ctx->pc = 0x32F84Cu;
    {
        const bool branch_taken_0x32f84c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x32f84c) {
            ctx->pc = 0x32F964u;
            goto label_32f964;
        }
    }
    ctx->pc = 0x32F854u;
label_32f854:
    // 0x32f854: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32f854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32f858:
    // 0x32f858: 0x50a20003  beql        $a1, $v0, . + 4 + (0x3 << 2)
label_32f85c:
    if (ctx->pc == 0x32F85Cu) {
        ctx->pc = 0x32F85Cu;
            // 0x32f85c: 0x8e4209d8  lw          $v0, 0x9D8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2520)));
        ctx->pc = 0x32F860u;
        goto label_32f860;
    }
    ctx->pc = 0x32F858u;
    {
        const bool branch_taken_0x32f858 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x32f858) {
            ctx->pc = 0x32F85Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F858u;
            // 0x32f85c: 0x8e4209d8  lw          $v0, 0x9D8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2520)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F868u;
            goto label_32f868;
        }
    }
    ctx->pc = 0x32F860u;
label_32f860:
    // 0x32f860: 0x1000007c  b           . + 4 + (0x7C << 2)
label_32f864:
    if (ctx->pc == 0x32F864u) {
        ctx->pc = 0x32F864u;
            // 0x32f864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32F868u;
        goto label_32f868;
    }
    ctx->pc = 0x32F860u;
    {
        const bool branch_taken_0x32f860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F860u;
            // 0x32f864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f860) {
            ctx->pc = 0x32FA54u;
            goto label_32fa54;
        }
    }
    ctx->pc = 0x32F868u;
label_32f868:
    // 0x32f868: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32f868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32f86c:
    // 0x32f86c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32f86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32f870:
    // 0x32f870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32f870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32f874:
    // 0x32f874: 0xa0430058  sb          $v1, 0x58($v0)
    ctx->pc = 0x32f874u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 88), (uint8_t)GPR_U32(ctx, 3));
label_32f878:
    // 0x32f878: 0xc0cbed4  jal         func_32FB50
label_32f87c:
    if (ctx->pc == 0x32F87Cu) {
        ctx->pc = 0x32F87Cu;
            // 0x32f87c: 0xae4009d8  sw          $zero, 0x9D8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2520), GPR_U32(ctx, 0));
        ctx->pc = 0x32F880u;
        goto label_32f880;
    }
    ctx->pc = 0x32F878u;
    SET_GPR_U32(ctx, 31, 0x32F880u);
    ctx->pc = 0x32F87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F878u;
            // 0x32f87c: 0xae4009d8  sw          $zero, 0x9D8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FB50u;
    if (runtime->hasFunction(0x32FB50u)) {
        auto targetFn = runtime->lookupFunction(0x32FB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F880u; }
        if (ctx->pc != 0x32F880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FB50_0x32fb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F880u; }
        if (ctx->pc != 0x32F880u) { return; }
    }
    ctx->pc = 0x32F880u;
label_32f880:
    // 0x32f880: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32f880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32f884:
    // 0x32f884: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x32f884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_32f888:
    // 0x32f888: 0x8042007b  lb          $v0, 0x7B($v0)
    ctx->pc = 0x32f888u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 123)));
label_32f88c:
    // 0x32f88c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x32f88cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_32f890:
    // 0x32f890: 0x14200023  bnez        $at, . + 4 + (0x23 << 2)
label_32f894:
    if (ctx->pc == 0x32F894u) {
        ctx->pc = 0x32F898u;
        goto label_32f898;
    }
    ctx->pc = 0x32F890u;
    {
        const bool branch_taken_0x32f890 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f890) {
            ctx->pc = 0x32F920u;
            goto label_32f920;
        }
    }
    ctx->pc = 0x32F898u;
label_32f898:
    // 0x32f898: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32f898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32f89c:
    // 0x32f89c: 0x8c420e88  lw          $v0, 0xE88($v0)
    ctx->pc = 0x32f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3720)));
label_32f8a0:
    // 0x32f8a0: 0x8c440550  lw          $a0, 0x550($v0)
    ctx->pc = 0x32f8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
label_32f8a4:
    // 0x32f8a4: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x32f8a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_32f8a8:
    // 0x32f8a8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32f8a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_32f8ac:
    // 0x32f8ac: 0x320f809  jalr        $t9
label_32f8b0:
    if (ctx->pc == 0x32F8B0u) {
        ctx->pc = 0x32F8B4u;
        goto label_32f8b4;
    }
    ctx->pc = 0x32F8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32F8B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32F8B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32F8B4u; }
            if (ctx->pc != 0x32F8B4u) { return; }
        }
        }
    }
    ctx->pc = 0x32F8B4u;
label_32f8b4:
    // 0x32f8b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32f8b8:
    // 0x32f8b8: 0xc07619c  jal         func_1D8670
label_32f8bc:
    if (ctx->pc == 0x32F8BCu) {
        ctx->pc = 0x32F8BCu;
            // 0x32f8bc: 0x8c440e88  lw          $a0, 0xE88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3720)));
        ctx->pc = 0x32F8C0u;
        goto label_32f8c0;
    }
    ctx->pc = 0x32F8B8u;
    SET_GPR_U32(ctx, 31, 0x32F8C0u);
    ctx->pc = 0x32F8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F8B8u;
            // 0x32f8bc: 0x8c440e88  lw          $a0, 0xE88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3720)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8670u;
    if (runtime->hasFunction(0x1D8670u)) {
        auto targetFn = runtime->lookupFunction(0x1D8670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F8C0u; }
        if (ctx->pc != 0x32F8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8670_0x1d8670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F8C0u; }
        if (ctx->pc != 0x32F8C0u) { return; }
    }
    ctx->pc = 0x32F8C0u;
label_32f8c0:
    // 0x32f8c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32f8c4:
    // 0x32f8c4: 0x8c420e8c  lw          $v0, 0xE8C($v0)
    ctx->pc = 0x32f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3724)));
label_32f8c8:
    // 0x32f8c8: 0x8c440550  lw          $a0, 0x550($v0)
    ctx->pc = 0x32f8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
label_32f8cc:
    // 0x32f8cc: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x32f8ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_32f8d0:
    // 0x32f8d0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32f8d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_32f8d4:
    // 0x32f8d4: 0x320f809  jalr        $t9
label_32f8d8:
    if (ctx->pc == 0x32F8D8u) {
        ctx->pc = 0x32F8DCu;
        goto label_32f8dc;
    }
    ctx->pc = 0x32F8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32F8DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32F8DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32F8DCu; }
            if (ctx->pc != 0x32F8DCu) { return; }
        }
        }
    }
    ctx->pc = 0x32F8DCu;
label_32f8dc:
    // 0x32f8dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32f8e0:
    // 0x32f8e0: 0xc07619c  jal         func_1D8670
label_32f8e4:
    if (ctx->pc == 0x32F8E4u) {
        ctx->pc = 0x32F8E4u;
            // 0x32f8e4: 0x8c440e8c  lw          $a0, 0xE8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3724)));
        ctx->pc = 0x32F8E8u;
        goto label_32f8e8;
    }
    ctx->pc = 0x32F8E0u;
    SET_GPR_U32(ctx, 31, 0x32F8E8u);
    ctx->pc = 0x32F8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F8E0u;
            // 0x32f8e4: 0x8c440e8c  lw          $a0, 0xE8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3724)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8670u;
    if (runtime->hasFunction(0x1D8670u)) {
        auto targetFn = runtime->lookupFunction(0x1D8670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F8E8u; }
        if (ctx->pc != 0x32F8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8670_0x1d8670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F8E8u; }
        if (ctx->pc != 0x32F8E8u) { return; }
    }
    ctx->pc = 0x32F8E8u;
label_32f8e8:
    // 0x32f8e8: 0x8e430780  lw          $v1, 0x780($s2)
    ctx->pc = 0x32f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1920)));
label_32f8ec:
    // 0x32f8ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_32f8f0:
    // 0x32f8f0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_32f8f4:
    if (ctx->pc == 0x32F8F4u) {
        ctx->pc = 0x32F8F8u;
        goto label_32f8f8;
    }
    ctx->pc = 0x32F8F0u;
    {
        const bool branch_taken_0x32f8f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32f8f0) {
            ctx->pc = 0x32F920u;
            goto label_32f920;
        }
    }
    ctx->pc = 0x32F8F8u;
label_32f8f8:
    // 0x32f8f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32f8fc:
    // 0x32f8fc: 0x8c420e90  lw          $v0, 0xE90($v0)
    ctx->pc = 0x32f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3728)));
label_32f900:
    // 0x32f900: 0x8c440550  lw          $a0, 0x550($v0)
    ctx->pc = 0x32f900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
label_32f904:
    // 0x32f904: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x32f904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_32f908:
    // 0x32f908: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x32f908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_32f90c:
    // 0x32f90c: 0x320f809  jalr        $t9
label_32f910:
    if (ctx->pc == 0x32F910u) {
        ctx->pc = 0x32F914u;
        goto label_32f914;
    }
    ctx->pc = 0x32F90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32F914u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32F914u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32F914u; }
            if (ctx->pc != 0x32F914u) { return; }
        }
        }
    }
    ctx->pc = 0x32F914u;
label_32f914:
    // 0x32f914: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32f914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32f918:
    // 0x32f918: 0xc07619c  jal         func_1D8670
label_32f91c:
    if (ctx->pc == 0x32F91Cu) {
        ctx->pc = 0x32F91Cu;
            // 0x32f91c: 0x8c440e90  lw          $a0, 0xE90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3728)));
        ctx->pc = 0x32F920u;
        goto label_32f920;
    }
    ctx->pc = 0x32F918u;
    SET_GPR_U32(ctx, 31, 0x32F920u);
    ctx->pc = 0x32F91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F918u;
            // 0x32f91c: 0x8c440e90  lw          $a0, 0xE90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8670u;
    if (runtime->hasFunction(0x1D8670u)) {
        auto targetFn = runtime->lookupFunction(0x1D8670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F920u; }
        if (ctx->pc != 0x32F920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8670_0x1d8670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F920u; }
        if (ctx->pc != 0x32F920u) { return; }
    }
    ctx->pc = 0x32F920u;
label_32f920:
    // 0x32f920: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x32f920u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_32f924:
    // 0x32f924: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x32f924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32f928:
    // 0x32f928: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x32f928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_32f92c:
    // 0x32f92c: 0xc0761d4  jal         func_1D8750
label_32f930:
    if (ctx->pc == 0x32F930u) {
        ctx->pc = 0x32F930u;
            // 0x32f930: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x32F934u;
        goto label_32f934;
    }
    ctx->pc = 0x32F92Cu;
    SET_GPR_U32(ctx, 31, 0x32F934u);
    ctx->pc = 0x32F930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F92Cu;
            // 0x32f930: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8750u;
    if (runtime->hasFunction(0x1D8750u)) {
        auto targetFn = runtime->lookupFunction(0x1D8750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F934u; }
        if (ctx->pc != 0x32F934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8750_0x1d8750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F934u; }
        if (ctx->pc != 0x32F934u) { return; }
    }
    ctx->pc = 0x32F934u;
label_32f934:
    // 0x32f934: 0x8e42077c  lw          $v0, 0x77C($s2)
    ctx->pc = 0x32f934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1916)));
label_32f938:
    // 0x32f938: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x32f938u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_32f93c:
    // 0x32f93c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x32f93cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32f940:
    // 0x32f940: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_32f944:
    if (ctx->pc == 0x32F944u) {
        ctx->pc = 0x32F944u;
            // 0x32f944: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x32F948u;
        goto label_32f948;
    }
    ctx->pc = 0x32F940u;
    {
        const bool branch_taken_0x32f940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F940u;
            // 0x32f944: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f940) {
            ctx->pc = 0x32F92Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32f92c;
        }
    }
    ctx->pc = 0x32F948u;
label_32f948:
    // 0x32f948: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x32f948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_32f94c:
    // 0x32f94c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32f94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32f950:
    // 0x32f950: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x32f950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_32f954:
    // 0x32f954: 0x320f809  jalr        $t9
label_32f958:
    if (ctx->pc == 0x32F958u) {
        ctx->pc = 0x32F958u;
            // 0x32f958: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32F95Cu;
        goto label_32f95c;
    }
    ctx->pc = 0x32F954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32F95Cu);
        ctx->pc = 0x32F958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F954u;
            // 0x32f958: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x32F95Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32F95Cu; }
            if (ctx->pc != 0x32F95Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32F95Cu;
label_32f95c:
    // 0x32f95c: 0x10000040  b           . + 4 + (0x40 << 2)
label_32f960:
    if (ctx->pc == 0x32F960u) {
        ctx->pc = 0x32F964u;
        goto label_32f964;
    }
    ctx->pc = 0x32F95Cu;
    {
        const bool branch_taken_0x32f95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f95c) {
            ctx->pc = 0x32FA60u;
            goto label_32fa60;
        }
    }
    ctx->pc = 0x32F964u;
label_32f964:
    // 0x32f964: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32f964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32f968:
    // 0x32f968: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32f968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32f96c:
    // 0x32f96c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x32f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_32f970:
    // 0x32f970: 0x8042007b  lb          $v0, 0x7B($v0)
    ctx->pc = 0x32f970u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 123)));
label_32f974:
    // 0x32f974: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_32f978:
    if (ctx->pc == 0x32F978u) {
        ctx->pc = 0x32F978u;
            // 0x32f978: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x32F97Cu;
        goto label_32f97c;
    }
    ctx->pc = 0x32F974u;
    {
        const bool branch_taken_0x32f974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32f974) {
            ctx->pc = 0x32F978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32F974u;
            // 0x32f978: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32F990u;
            goto label_32f990;
        }
    }
    ctx->pc = 0x32F97Cu;
label_32f97c:
    // 0x32f97c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32f97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32f980:
    // 0x32f980: 0xc0cbed4  jal         func_32FB50
label_32f984:
    if (ctx->pc == 0x32F984u) {
        ctx->pc = 0x32F984u;
            // 0x32f984: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32F988u;
        goto label_32f988;
    }
    ctx->pc = 0x32F980u;
    SET_GPR_U32(ctx, 31, 0x32F988u);
    ctx->pc = 0x32F984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F980u;
            // 0x32f984: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FB50u;
    if (runtime->hasFunction(0x32FB50u)) {
        auto targetFn = runtime->lookupFunction(0x32FB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F988u; }
        if (ctx->pc != 0x32F988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FB50_0x32fb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F988u; }
        if (ctx->pc != 0x32F988u) { return; }
    }
    ctx->pc = 0x32F988u;
label_32f988:
    // 0x32f988: 0x10000035  b           . + 4 + (0x35 << 2)
label_32f98c:
    if (ctx->pc == 0x32F98Cu) {
        ctx->pc = 0x32F990u;
        goto label_32f990;
    }
    ctx->pc = 0x32F988u;
    {
        const bool branch_taken_0x32f988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f988) {
            ctx->pc = 0x32FA60u;
            goto label_32fa60;
        }
    }
    ctx->pc = 0x32F990u;
label_32f990:
    // 0x32f990: 0xae420998  sw          $v0, 0x998($s2)
    ctx->pc = 0x32f990u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2456), GPR_U32(ctx, 2));
label_32f994:
    // 0x32f994: 0xc040180  jal         func_100600
label_32f998:
    if (ctx->pc == 0x32F998u) {
        ctx->pc = 0x32F998u;
            // 0x32f998: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x32F99Cu;
        goto label_32f99c;
    }
    ctx->pc = 0x32F994u;
    SET_GPR_U32(ctx, 31, 0x32F99Cu);
    ctx->pc = 0x32F998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F994u;
            // 0x32f998: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F99Cu; }
        if (ctx->pc != 0x32F99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F99Cu; }
        if (ctx->pc != 0x32F99Cu) { return; }
    }
    ctx->pc = 0x32F99Cu;
label_32f99c:
    // 0x32f99c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_32f9a0:
    if (ctx->pc == 0x32F9A0u) {
        ctx->pc = 0x32F9A0u;
            // 0x32f9a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32F9A4u;
        goto label_32f9a4;
    }
    ctx->pc = 0x32F99Cu;
    {
        const bool branch_taken_0x32f99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F99Cu;
            // 0x32f9a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f99c) {
            ctx->pc = 0x32FA0Cu;
            goto label_32fa0c;
        }
    }
    ctx->pc = 0x32F9A4u;
label_32f9a4:
    // 0x32f9a4: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x32f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_32f9a8:
    // 0x32f9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32f9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32f9ac:
    // 0x32f9ac: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x32f9acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
label_32f9b0:
    // 0x32f9b0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x32f9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_32f9b4:
    // 0x32f9b4: 0xc10ca68  jal         func_4329A0
label_32f9b8:
    if (ctx->pc == 0x32F9B8u) {
        ctx->pc = 0x32F9B8u;
            // 0x32f9b8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x32F9BCu;
        goto label_32f9bc;
    }
    ctx->pc = 0x32F9B4u;
    SET_GPR_U32(ctx, 31, 0x32F9BCu);
    ctx->pc = 0x32F9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F9B4u;
            // 0x32f9b8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F9BCu; }
        if (ctx->pc != 0x32F9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F9BCu; }
        if (ctx->pc != 0x32F9BCu) { return; }
    }
    ctx->pc = 0x32F9BCu;
label_32f9bc:
    // 0x32f9bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x32f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_32f9c0:
    // 0x32f9c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_32f9c4:
    // 0x32f9c4: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x32f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_32f9c8:
    // 0x32f9c8: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x32f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
label_32f9cc:
    // 0x32f9cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x32f9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_32f9d0:
    // 0x32f9d0: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x32f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_32f9d4:
    // 0x32f9d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32f9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_32f9d8:
    // 0x32f9d8: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x32f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_32f9dc:
    // 0x32f9dc: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x32f9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_32f9e0:
    // 0x32f9e0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x32f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_32f9e4:
    // 0x32f9e4: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x32f9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_32f9e8:
    // 0x32f9e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32f9ec:
    // 0x32f9ec: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x32f9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_32f9f0:
    // 0x32f9f0: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x32f9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
label_32f9f4:
    // 0x32f9f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32f9f8:
    // 0x32f9f8: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x32f9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_32f9fc:
    // 0x32f9fc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x32f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_32fa00:
    // 0x32fa00: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x32fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_32fa04:
    // 0x32fa04: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x32fa04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_32fa08:
    // 0x32fa08: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x32fa08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
label_32fa0c:
    // 0x32fa0c: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x32fa0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_32fa10:
    // 0x32fa10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x32fa10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32fa14:
    // 0x32fa14: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x32fa14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_32fa18:
    // 0x32fa18: 0xc0761d4  jal         func_1D8750
label_32fa1c:
    if (ctx->pc == 0x32FA1Cu) {
        ctx->pc = 0x32FA1Cu;
            // 0x32fa1c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x32FA20u;
        goto label_32fa20;
    }
    ctx->pc = 0x32FA18u;
    SET_GPR_U32(ctx, 31, 0x32FA20u);
    ctx->pc = 0x32FA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32FA18u;
            // 0x32fa1c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8750u;
    if (runtime->hasFunction(0x1D8750u)) {
        auto targetFn = runtime->lookupFunction(0x1D8750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FA20u; }
        if (ctx->pc != 0x32FA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8750_0x1d8750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FA20u; }
        if (ctx->pc != 0x32FA20u) { return; }
    }
    ctx->pc = 0x32FA20u;
label_32fa20:
    // 0x32fa20: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x32fa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32fa24:
    // 0x32fa24: 0xc07626c  jal         func_1D89B0
label_32fa28:
    if (ctx->pc == 0x32FA28u) {
        ctx->pc = 0x32FA28u;
            // 0x32fa28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32FA2Cu;
        goto label_32fa2c;
    }
    ctx->pc = 0x32FA24u;
    SET_GPR_U32(ctx, 31, 0x32FA2Cu);
    ctx->pc = 0x32FA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32FA24u;
            // 0x32fa28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FA2Cu; }
        if (ctx->pc != 0x32FA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FA2Cu; }
        if (ctx->pc != 0x32FA2Cu) { return; }
    }
    ctx->pc = 0x32FA2Cu;
label_32fa2c:
    // 0x32fa2c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x32fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_32fa30:
    // 0x32fa30: 0xc07626c  jal         func_1D89B0
label_32fa34:
    if (ctx->pc == 0x32FA34u) {
        ctx->pc = 0x32FA34u;
            // 0x32fa34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x32FA38u;
        goto label_32fa38;
    }
    ctx->pc = 0x32FA30u;
    SET_GPR_U32(ctx, 31, 0x32FA38u);
    ctx->pc = 0x32FA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32FA30u;
            // 0x32fa34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FA38u; }
        if (ctx->pc != 0x32FA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FA38u; }
        if (ctx->pc != 0x32FA38u) { return; }
    }
    ctx->pc = 0x32FA38u;
label_32fa38:
    // 0x32fa38: 0x8e42077c  lw          $v0, 0x77C($s2)
    ctx->pc = 0x32fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1916)));
label_32fa3c:
    // 0x32fa3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32fa3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_32fa40:
    // 0x32fa40: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x32fa40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_32fa44:
    // 0x32fa44: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_32fa48:
    if (ctx->pc == 0x32FA48u) {
        ctx->pc = 0x32FA48u;
            // 0x32fa48: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x32FA4Cu;
        goto label_32fa4c;
    }
    ctx->pc = 0x32FA44u;
    {
        const bool branch_taken_0x32fa44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32FA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32FA44u;
            // 0x32fa48: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fa44) {
            ctx->pc = 0x32FA18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32fa18;
        }
    }
    ctx->pc = 0x32FA4Cu;
label_32fa4c:
    // 0x32fa4c: 0x10000036  b           . + 4 + (0x36 << 2)
label_32fa50:
    if (ctx->pc == 0x32FA50u) {
        ctx->pc = 0x32FA50u;
            // 0x32fa50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32FA54u;
        goto label_32fa54;
    }
    ctx->pc = 0x32FA4Cu;
    {
        const bool branch_taken_0x32fa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32FA4Cu;
            // 0x32fa50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fa4c) {
            ctx->pc = 0x32FB28u;
            goto label_32fb28;
        }
    }
    ctx->pc = 0x32FA54u;
label_32fa54:
    // 0x32fa54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32fa54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32fa58:
    // 0x32fa58: 0xc0cc050  jal         func_330140
label_32fa5c:
    if (ctx->pc == 0x32FA5Cu) {
        ctx->pc = 0x32FA5Cu;
            // 0x32fa5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32FA60u;
        goto label_32fa60;
    }
    ctx->pc = 0x32FA58u;
    SET_GPR_U32(ctx, 31, 0x32FA60u);
    ctx->pc = 0x32FA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32FA58u;
            // 0x32fa5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x330140u;
    if (runtime->hasFunction(0x330140u)) {
        auto targetFn = runtime->lookupFunction(0x330140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FA60u; }
        if (ctx->pc != 0x32FA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330140_0x330140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FA60u; }
        if (ctx->pc != 0x32FA60u) { return; }
    }
    ctx->pc = 0x32FA60u;
label_32fa60:
    // 0x32fa60: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32fa64:
    // 0x32fa64: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x32fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_32fa68:
    // 0x32fa68: 0x8c440144  lw          $a0, 0x144($v0)
    ctx->pc = 0x32fa68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_32fa6c:
    // 0x32fa6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32fa6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32fa70:
    // 0x32fa70: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x32fa70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_32fa74:
    // 0x32fa74: 0x320f809  jalr        $t9
label_32fa78:
    if (ctx->pc == 0x32FA78u) {
        ctx->pc = 0x32FA7Cu;
        goto label_32fa7c;
    }
    ctx->pc = 0x32FA74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32FA7Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32FA7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32FA7Cu; }
            if (ctx->pc != 0x32FA7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x32FA7Cu;
label_32fa7c:
    // 0x32fa7c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32fa80:
    // 0x32fa80: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x32fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_32fa84:
    // 0x32fa84: 0x8c440148  lw          $a0, 0x148($v0)
    ctx->pc = 0x32fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
label_32fa88:
    // 0x32fa88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x32fa88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32fa8c:
    // 0x32fa8c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x32fa8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_32fa90:
    // 0x32fa90: 0x320f809  jalr        $t9
label_32fa94:
    if (ctx->pc == 0x32FA94u) {
        ctx->pc = 0x32FA98u;
        goto label_32fa98;
    }
    ctx->pc = 0x32FA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x32FA98u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x32FA98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x32FA98u; }
            if (ctx->pc != 0x32FA98u) { return; }
        }
        }
    }
    ctx->pc = 0x32FA98u;
label_32fa98:
    // 0x32fa98: 0x92420c77  lbu         $v0, 0xC77($s2)
    ctx->pc = 0x32fa98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3191)));
label_32fa9c:
    // 0x32fa9c: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_32faa0:
    if (ctx->pc == 0x32FAA0u) {
        ctx->pc = 0x32FAA0u;
            // 0x32faa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x32FAA4u;
        goto label_32faa4;
    }
    ctx->pc = 0x32FA9Cu;
    {
        const bool branch_taken_0x32fa9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32fa9c) {
            ctx->pc = 0x32FAA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32FA9Cu;
            // 0x32faa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32FB28u;
            goto label_32fb28;
        }
    }
    ctx->pc = 0x32FAA4u;
label_32faa4:
    // 0x32faa4: 0xc642099c  lwc1        $f2, 0x99C($s2)
    ctx->pc = 0x32faa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_32faa8:
    // 0x32faa8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x32faa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_32faac:
    // 0x32faac: 0x0  nop
    ctx->pc = 0x32faacu;
    // NOP
label_32fab0:
    // 0x32fab0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x32fab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32fab4:
    // 0x32fab4: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_32fab8:
    if (ctx->pc == 0x32FAB8u) {
        ctx->pc = 0x32FABCu;
        goto label_32fabc;
    }
    ctx->pc = 0x32FAB4u;
    {
        const bool branch_taken_0x32fab4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32fab4) {
            ctx->pc = 0x32FB24u;
            goto label_32fb24;
        }
    }
    ctx->pc = 0x32FABCu;
label_32fabc:
    // 0x32fabc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32fac0:
    // 0x32fac0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x32fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_32fac4:
    // 0x32fac4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x32fac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_32fac8:
    // 0x32fac8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x32fac8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_32facc:
    // 0x32facc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32faccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32fad0:
    // 0x32fad0: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_32fad4:
    if (ctx->pc == 0x32FAD4u) {
        ctx->pc = 0x32FAD4u;
            // 0x32fad4: 0xe640099c  swc1        $f0, 0x99C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2460), bits); }
        ctx->pc = 0x32FAD8u;
        goto label_32fad8;
    }
    ctx->pc = 0x32FAD0u;
    {
        const bool branch_taken_0x32fad0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x32FAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32FAD0u;
            // 0x32fad4: 0xe640099c  swc1        $f0, 0x99C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fad0) {
            ctx->pc = 0x32FB24u;
            goto label_32fb24;
        }
    }
    ctx->pc = 0x32FAD8u;
label_32fad8:
    // 0x32fad8: 0x8e430998  lw          $v1, 0x998($s2)
    ctx->pc = 0x32fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2456)));
label_32fadc:
    // 0x32fadc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32fae0:
    // 0x32fae0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_32fae4:
    if (ctx->pc == 0x32FAE4u) {
        ctx->pc = 0x32FAE8u;
        goto label_32fae8;
    }
    ctx->pc = 0x32FAE0u;
    {
        const bool branch_taken_0x32fae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32fae0) {
            ctx->pc = 0x32FB08u;
            goto label_32fb08;
        }
    }
    ctx->pc = 0x32FAE8u;
label_32fae8:
    // 0x32fae8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32faec:
    // 0x32faec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_32faf0:
    if (ctx->pc == 0x32FAF0u) {
        ctx->pc = 0x32FAF4u;
        goto label_32faf4;
    }
    ctx->pc = 0x32FAECu;
    {
        const bool branch_taken_0x32faec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32faec) {
            ctx->pc = 0x32FAFCu;
            goto label_32fafc;
        }
    }
    ctx->pc = 0x32FAF4u;
label_32faf4:
    // 0x32faf4: 0x10000007  b           . + 4 + (0x7 << 2)
label_32faf8:
    if (ctx->pc == 0x32FAF8u) {
        ctx->pc = 0x32FAF8u;
            // 0x32faf8: 0x26241150  addiu       $a0, $s1, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4432));
        ctx->pc = 0x32FAFCu;
        goto label_32fafc;
    }
    ctx->pc = 0x32FAF4u;
    {
        const bool branch_taken_0x32faf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32FAF4u;
            // 0x32faf8: 0x26241150  addiu       $a0, $s1, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32faf4) {
            ctx->pc = 0x32FB14u;
            goto label_32fb14;
        }
    }
    ctx->pc = 0x32FAFCu;
label_32fafc:
    // 0x32fafc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32fb00:
    // 0x32fb00: 0x10000003  b           . + 4 + (0x3 << 2)
label_32fb04:
    if (ctx->pc == 0x32FB04u) {
        ctx->pc = 0x32FB04u;
            // 0x32fb04: 0x8c510e84  lw          $s1, 0xE84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
        ctx->pc = 0x32FB08u;
        goto label_32fb08;
    }
    ctx->pc = 0x32FB00u;
    {
        const bool branch_taken_0x32fb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32FB00u;
            // 0x32fb04: 0x8c510e84  lw          $s1, 0xE84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fb00) {
            ctx->pc = 0x32FB10u;
            goto label_32fb10;
        }
    }
    ctx->pc = 0x32FB08u;
label_32fb08:
    // 0x32fb08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_32fb0c:
    // 0x32fb0c: 0x8c510e88  lw          $s1, 0xE88($v0)
    ctx->pc = 0x32fb0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3720)));
label_32fb10:
    // 0x32fb10: 0x26241150  addiu       $a0, $s1, 0x1150
    ctx->pc = 0x32fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4432));
label_32fb14:
    // 0x32fb14: 0xc12ca3c  jal         func_4B28F0
label_32fb18:
    if (ctx->pc == 0x32FB18u) {
        ctx->pc = 0x32FB18u;
            // 0x32fb18: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x32FB1Cu;
        goto label_32fb1c;
    }
    ctx->pc = 0x32FB14u;
    SET_GPR_U32(ctx, 31, 0x32FB1Cu);
    ctx->pc = 0x32FB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32FB14u;
            // 0x32fb18: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FB1Cu; }
        if (ctx->pc != 0x32FB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FB1Cu; }
        if (ctx->pc != 0x32FB1Cu) { return; }
    }
    ctx->pc = 0x32FB1Cu;
label_32fb1c:
    // 0x32fb1c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x32fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_32fb20:
    // 0x32fb20: 0xae42099c  sw          $v0, 0x99C($s2)
    ctx->pc = 0x32fb20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2460), GPR_U32(ctx, 2));
label_32fb24:
    // 0x32fb24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32fb24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32fb28:
    // 0x32fb28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32fb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32fb2c:
    // 0x32fb2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32fb2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32fb30:
    // 0x32fb30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32fb30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32fb34:
    // 0x32fb34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32fb34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32fb38:
    // 0x32fb38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32fb38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_32fb3c:
    // 0x32fb3c: 0x3e00008  jr          $ra
label_32fb40:
    if (ctx->pc == 0x32FB40u) {
        ctx->pc = 0x32FB40u;
            // 0x32fb40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x32FB44u;
        goto label_32fb44;
    }
    ctx->pc = 0x32FB3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32FB3Cu;
            // 0x32fb40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32FB44u;
label_32fb44:
    // 0x32fb44: 0x0  nop
    ctx->pc = 0x32fb44u;
    // NOP
label_32fb48:
    // 0x32fb48: 0x0  nop
    ctx->pc = 0x32fb48u;
    // NOP
label_32fb4c:
    // 0x32fb4c: 0x0  nop
    ctx->pc = 0x32fb4cu;
    // NOP
}
