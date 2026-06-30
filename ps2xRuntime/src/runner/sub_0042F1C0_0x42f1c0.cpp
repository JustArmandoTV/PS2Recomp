#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042F1C0
// Address: 0x42f1c0 - 0x42fc90
void sub_0042F1C0_0x42f1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042F1C0_0x42f1c0");
#endif

    switch (ctx->pc) {
        case 0x42f1c0u: goto label_42f1c0;
        case 0x42f1c4u: goto label_42f1c4;
        case 0x42f1c8u: goto label_42f1c8;
        case 0x42f1ccu: goto label_42f1cc;
        case 0x42f1d0u: goto label_42f1d0;
        case 0x42f1d4u: goto label_42f1d4;
        case 0x42f1d8u: goto label_42f1d8;
        case 0x42f1dcu: goto label_42f1dc;
        case 0x42f1e0u: goto label_42f1e0;
        case 0x42f1e4u: goto label_42f1e4;
        case 0x42f1e8u: goto label_42f1e8;
        case 0x42f1ecu: goto label_42f1ec;
        case 0x42f1f0u: goto label_42f1f0;
        case 0x42f1f4u: goto label_42f1f4;
        case 0x42f1f8u: goto label_42f1f8;
        case 0x42f1fcu: goto label_42f1fc;
        case 0x42f200u: goto label_42f200;
        case 0x42f204u: goto label_42f204;
        case 0x42f208u: goto label_42f208;
        case 0x42f20cu: goto label_42f20c;
        case 0x42f210u: goto label_42f210;
        case 0x42f214u: goto label_42f214;
        case 0x42f218u: goto label_42f218;
        case 0x42f21cu: goto label_42f21c;
        case 0x42f220u: goto label_42f220;
        case 0x42f224u: goto label_42f224;
        case 0x42f228u: goto label_42f228;
        case 0x42f22cu: goto label_42f22c;
        case 0x42f230u: goto label_42f230;
        case 0x42f234u: goto label_42f234;
        case 0x42f238u: goto label_42f238;
        case 0x42f23cu: goto label_42f23c;
        case 0x42f240u: goto label_42f240;
        case 0x42f244u: goto label_42f244;
        case 0x42f248u: goto label_42f248;
        case 0x42f24cu: goto label_42f24c;
        case 0x42f250u: goto label_42f250;
        case 0x42f254u: goto label_42f254;
        case 0x42f258u: goto label_42f258;
        case 0x42f25cu: goto label_42f25c;
        case 0x42f260u: goto label_42f260;
        case 0x42f264u: goto label_42f264;
        case 0x42f268u: goto label_42f268;
        case 0x42f26cu: goto label_42f26c;
        case 0x42f270u: goto label_42f270;
        case 0x42f274u: goto label_42f274;
        case 0x42f278u: goto label_42f278;
        case 0x42f27cu: goto label_42f27c;
        case 0x42f280u: goto label_42f280;
        case 0x42f284u: goto label_42f284;
        case 0x42f288u: goto label_42f288;
        case 0x42f28cu: goto label_42f28c;
        case 0x42f290u: goto label_42f290;
        case 0x42f294u: goto label_42f294;
        case 0x42f298u: goto label_42f298;
        case 0x42f29cu: goto label_42f29c;
        case 0x42f2a0u: goto label_42f2a0;
        case 0x42f2a4u: goto label_42f2a4;
        case 0x42f2a8u: goto label_42f2a8;
        case 0x42f2acu: goto label_42f2ac;
        case 0x42f2b0u: goto label_42f2b0;
        case 0x42f2b4u: goto label_42f2b4;
        case 0x42f2b8u: goto label_42f2b8;
        case 0x42f2bcu: goto label_42f2bc;
        case 0x42f2c0u: goto label_42f2c0;
        case 0x42f2c4u: goto label_42f2c4;
        case 0x42f2c8u: goto label_42f2c8;
        case 0x42f2ccu: goto label_42f2cc;
        case 0x42f2d0u: goto label_42f2d0;
        case 0x42f2d4u: goto label_42f2d4;
        case 0x42f2d8u: goto label_42f2d8;
        case 0x42f2dcu: goto label_42f2dc;
        case 0x42f2e0u: goto label_42f2e0;
        case 0x42f2e4u: goto label_42f2e4;
        case 0x42f2e8u: goto label_42f2e8;
        case 0x42f2ecu: goto label_42f2ec;
        case 0x42f2f0u: goto label_42f2f0;
        case 0x42f2f4u: goto label_42f2f4;
        case 0x42f2f8u: goto label_42f2f8;
        case 0x42f2fcu: goto label_42f2fc;
        case 0x42f300u: goto label_42f300;
        case 0x42f304u: goto label_42f304;
        case 0x42f308u: goto label_42f308;
        case 0x42f30cu: goto label_42f30c;
        case 0x42f310u: goto label_42f310;
        case 0x42f314u: goto label_42f314;
        case 0x42f318u: goto label_42f318;
        case 0x42f31cu: goto label_42f31c;
        case 0x42f320u: goto label_42f320;
        case 0x42f324u: goto label_42f324;
        case 0x42f328u: goto label_42f328;
        case 0x42f32cu: goto label_42f32c;
        case 0x42f330u: goto label_42f330;
        case 0x42f334u: goto label_42f334;
        case 0x42f338u: goto label_42f338;
        case 0x42f33cu: goto label_42f33c;
        case 0x42f340u: goto label_42f340;
        case 0x42f344u: goto label_42f344;
        case 0x42f348u: goto label_42f348;
        case 0x42f34cu: goto label_42f34c;
        case 0x42f350u: goto label_42f350;
        case 0x42f354u: goto label_42f354;
        case 0x42f358u: goto label_42f358;
        case 0x42f35cu: goto label_42f35c;
        case 0x42f360u: goto label_42f360;
        case 0x42f364u: goto label_42f364;
        case 0x42f368u: goto label_42f368;
        case 0x42f36cu: goto label_42f36c;
        case 0x42f370u: goto label_42f370;
        case 0x42f374u: goto label_42f374;
        case 0x42f378u: goto label_42f378;
        case 0x42f37cu: goto label_42f37c;
        case 0x42f380u: goto label_42f380;
        case 0x42f384u: goto label_42f384;
        case 0x42f388u: goto label_42f388;
        case 0x42f38cu: goto label_42f38c;
        case 0x42f390u: goto label_42f390;
        case 0x42f394u: goto label_42f394;
        case 0x42f398u: goto label_42f398;
        case 0x42f39cu: goto label_42f39c;
        case 0x42f3a0u: goto label_42f3a0;
        case 0x42f3a4u: goto label_42f3a4;
        case 0x42f3a8u: goto label_42f3a8;
        case 0x42f3acu: goto label_42f3ac;
        case 0x42f3b0u: goto label_42f3b0;
        case 0x42f3b4u: goto label_42f3b4;
        case 0x42f3b8u: goto label_42f3b8;
        case 0x42f3bcu: goto label_42f3bc;
        case 0x42f3c0u: goto label_42f3c0;
        case 0x42f3c4u: goto label_42f3c4;
        case 0x42f3c8u: goto label_42f3c8;
        case 0x42f3ccu: goto label_42f3cc;
        case 0x42f3d0u: goto label_42f3d0;
        case 0x42f3d4u: goto label_42f3d4;
        case 0x42f3d8u: goto label_42f3d8;
        case 0x42f3dcu: goto label_42f3dc;
        case 0x42f3e0u: goto label_42f3e0;
        case 0x42f3e4u: goto label_42f3e4;
        case 0x42f3e8u: goto label_42f3e8;
        case 0x42f3ecu: goto label_42f3ec;
        case 0x42f3f0u: goto label_42f3f0;
        case 0x42f3f4u: goto label_42f3f4;
        case 0x42f3f8u: goto label_42f3f8;
        case 0x42f3fcu: goto label_42f3fc;
        case 0x42f400u: goto label_42f400;
        case 0x42f404u: goto label_42f404;
        case 0x42f408u: goto label_42f408;
        case 0x42f40cu: goto label_42f40c;
        case 0x42f410u: goto label_42f410;
        case 0x42f414u: goto label_42f414;
        case 0x42f418u: goto label_42f418;
        case 0x42f41cu: goto label_42f41c;
        case 0x42f420u: goto label_42f420;
        case 0x42f424u: goto label_42f424;
        case 0x42f428u: goto label_42f428;
        case 0x42f42cu: goto label_42f42c;
        case 0x42f430u: goto label_42f430;
        case 0x42f434u: goto label_42f434;
        case 0x42f438u: goto label_42f438;
        case 0x42f43cu: goto label_42f43c;
        case 0x42f440u: goto label_42f440;
        case 0x42f444u: goto label_42f444;
        case 0x42f448u: goto label_42f448;
        case 0x42f44cu: goto label_42f44c;
        case 0x42f450u: goto label_42f450;
        case 0x42f454u: goto label_42f454;
        case 0x42f458u: goto label_42f458;
        case 0x42f45cu: goto label_42f45c;
        case 0x42f460u: goto label_42f460;
        case 0x42f464u: goto label_42f464;
        case 0x42f468u: goto label_42f468;
        case 0x42f46cu: goto label_42f46c;
        case 0x42f470u: goto label_42f470;
        case 0x42f474u: goto label_42f474;
        case 0x42f478u: goto label_42f478;
        case 0x42f47cu: goto label_42f47c;
        case 0x42f480u: goto label_42f480;
        case 0x42f484u: goto label_42f484;
        case 0x42f488u: goto label_42f488;
        case 0x42f48cu: goto label_42f48c;
        case 0x42f490u: goto label_42f490;
        case 0x42f494u: goto label_42f494;
        case 0x42f498u: goto label_42f498;
        case 0x42f49cu: goto label_42f49c;
        case 0x42f4a0u: goto label_42f4a0;
        case 0x42f4a4u: goto label_42f4a4;
        case 0x42f4a8u: goto label_42f4a8;
        case 0x42f4acu: goto label_42f4ac;
        case 0x42f4b0u: goto label_42f4b0;
        case 0x42f4b4u: goto label_42f4b4;
        case 0x42f4b8u: goto label_42f4b8;
        case 0x42f4bcu: goto label_42f4bc;
        case 0x42f4c0u: goto label_42f4c0;
        case 0x42f4c4u: goto label_42f4c4;
        case 0x42f4c8u: goto label_42f4c8;
        case 0x42f4ccu: goto label_42f4cc;
        case 0x42f4d0u: goto label_42f4d0;
        case 0x42f4d4u: goto label_42f4d4;
        case 0x42f4d8u: goto label_42f4d8;
        case 0x42f4dcu: goto label_42f4dc;
        case 0x42f4e0u: goto label_42f4e0;
        case 0x42f4e4u: goto label_42f4e4;
        case 0x42f4e8u: goto label_42f4e8;
        case 0x42f4ecu: goto label_42f4ec;
        case 0x42f4f0u: goto label_42f4f0;
        case 0x42f4f4u: goto label_42f4f4;
        case 0x42f4f8u: goto label_42f4f8;
        case 0x42f4fcu: goto label_42f4fc;
        case 0x42f500u: goto label_42f500;
        case 0x42f504u: goto label_42f504;
        case 0x42f508u: goto label_42f508;
        case 0x42f50cu: goto label_42f50c;
        case 0x42f510u: goto label_42f510;
        case 0x42f514u: goto label_42f514;
        case 0x42f518u: goto label_42f518;
        case 0x42f51cu: goto label_42f51c;
        case 0x42f520u: goto label_42f520;
        case 0x42f524u: goto label_42f524;
        case 0x42f528u: goto label_42f528;
        case 0x42f52cu: goto label_42f52c;
        case 0x42f530u: goto label_42f530;
        case 0x42f534u: goto label_42f534;
        case 0x42f538u: goto label_42f538;
        case 0x42f53cu: goto label_42f53c;
        case 0x42f540u: goto label_42f540;
        case 0x42f544u: goto label_42f544;
        case 0x42f548u: goto label_42f548;
        case 0x42f54cu: goto label_42f54c;
        case 0x42f550u: goto label_42f550;
        case 0x42f554u: goto label_42f554;
        case 0x42f558u: goto label_42f558;
        case 0x42f55cu: goto label_42f55c;
        case 0x42f560u: goto label_42f560;
        case 0x42f564u: goto label_42f564;
        case 0x42f568u: goto label_42f568;
        case 0x42f56cu: goto label_42f56c;
        case 0x42f570u: goto label_42f570;
        case 0x42f574u: goto label_42f574;
        case 0x42f578u: goto label_42f578;
        case 0x42f57cu: goto label_42f57c;
        case 0x42f580u: goto label_42f580;
        case 0x42f584u: goto label_42f584;
        case 0x42f588u: goto label_42f588;
        case 0x42f58cu: goto label_42f58c;
        case 0x42f590u: goto label_42f590;
        case 0x42f594u: goto label_42f594;
        case 0x42f598u: goto label_42f598;
        case 0x42f59cu: goto label_42f59c;
        case 0x42f5a0u: goto label_42f5a0;
        case 0x42f5a4u: goto label_42f5a4;
        case 0x42f5a8u: goto label_42f5a8;
        case 0x42f5acu: goto label_42f5ac;
        case 0x42f5b0u: goto label_42f5b0;
        case 0x42f5b4u: goto label_42f5b4;
        case 0x42f5b8u: goto label_42f5b8;
        case 0x42f5bcu: goto label_42f5bc;
        case 0x42f5c0u: goto label_42f5c0;
        case 0x42f5c4u: goto label_42f5c4;
        case 0x42f5c8u: goto label_42f5c8;
        case 0x42f5ccu: goto label_42f5cc;
        case 0x42f5d0u: goto label_42f5d0;
        case 0x42f5d4u: goto label_42f5d4;
        case 0x42f5d8u: goto label_42f5d8;
        case 0x42f5dcu: goto label_42f5dc;
        case 0x42f5e0u: goto label_42f5e0;
        case 0x42f5e4u: goto label_42f5e4;
        case 0x42f5e8u: goto label_42f5e8;
        case 0x42f5ecu: goto label_42f5ec;
        case 0x42f5f0u: goto label_42f5f0;
        case 0x42f5f4u: goto label_42f5f4;
        case 0x42f5f8u: goto label_42f5f8;
        case 0x42f5fcu: goto label_42f5fc;
        case 0x42f600u: goto label_42f600;
        case 0x42f604u: goto label_42f604;
        case 0x42f608u: goto label_42f608;
        case 0x42f60cu: goto label_42f60c;
        case 0x42f610u: goto label_42f610;
        case 0x42f614u: goto label_42f614;
        case 0x42f618u: goto label_42f618;
        case 0x42f61cu: goto label_42f61c;
        case 0x42f620u: goto label_42f620;
        case 0x42f624u: goto label_42f624;
        case 0x42f628u: goto label_42f628;
        case 0x42f62cu: goto label_42f62c;
        case 0x42f630u: goto label_42f630;
        case 0x42f634u: goto label_42f634;
        case 0x42f638u: goto label_42f638;
        case 0x42f63cu: goto label_42f63c;
        case 0x42f640u: goto label_42f640;
        case 0x42f644u: goto label_42f644;
        case 0x42f648u: goto label_42f648;
        case 0x42f64cu: goto label_42f64c;
        case 0x42f650u: goto label_42f650;
        case 0x42f654u: goto label_42f654;
        case 0x42f658u: goto label_42f658;
        case 0x42f65cu: goto label_42f65c;
        case 0x42f660u: goto label_42f660;
        case 0x42f664u: goto label_42f664;
        case 0x42f668u: goto label_42f668;
        case 0x42f66cu: goto label_42f66c;
        case 0x42f670u: goto label_42f670;
        case 0x42f674u: goto label_42f674;
        case 0x42f678u: goto label_42f678;
        case 0x42f67cu: goto label_42f67c;
        case 0x42f680u: goto label_42f680;
        case 0x42f684u: goto label_42f684;
        case 0x42f688u: goto label_42f688;
        case 0x42f68cu: goto label_42f68c;
        case 0x42f690u: goto label_42f690;
        case 0x42f694u: goto label_42f694;
        case 0x42f698u: goto label_42f698;
        case 0x42f69cu: goto label_42f69c;
        case 0x42f6a0u: goto label_42f6a0;
        case 0x42f6a4u: goto label_42f6a4;
        case 0x42f6a8u: goto label_42f6a8;
        case 0x42f6acu: goto label_42f6ac;
        case 0x42f6b0u: goto label_42f6b0;
        case 0x42f6b4u: goto label_42f6b4;
        case 0x42f6b8u: goto label_42f6b8;
        case 0x42f6bcu: goto label_42f6bc;
        case 0x42f6c0u: goto label_42f6c0;
        case 0x42f6c4u: goto label_42f6c4;
        case 0x42f6c8u: goto label_42f6c8;
        case 0x42f6ccu: goto label_42f6cc;
        case 0x42f6d0u: goto label_42f6d0;
        case 0x42f6d4u: goto label_42f6d4;
        case 0x42f6d8u: goto label_42f6d8;
        case 0x42f6dcu: goto label_42f6dc;
        case 0x42f6e0u: goto label_42f6e0;
        case 0x42f6e4u: goto label_42f6e4;
        case 0x42f6e8u: goto label_42f6e8;
        case 0x42f6ecu: goto label_42f6ec;
        case 0x42f6f0u: goto label_42f6f0;
        case 0x42f6f4u: goto label_42f6f4;
        case 0x42f6f8u: goto label_42f6f8;
        case 0x42f6fcu: goto label_42f6fc;
        case 0x42f700u: goto label_42f700;
        case 0x42f704u: goto label_42f704;
        case 0x42f708u: goto label_42f708;
        case 0x42f70cu: goto label_42f70c;
        case 0x42f710u: goto label_42f710;
        case 0x42f714u: goto label_42f714;
        case 0x42f718u: goto label_42f718;
        case 0x42f71cu: goto label_42f71c;
        case 0x42f720u: goto label_42f720;
        case 0x42f724u: goto label_42f724;
        case 0x42f728u: goto label_42f728;
        case 0x42f72cu: goto label_42f72c;
        case 0x42f730u: goto label_42f730;
        case 0x42f734u: goto label_42f734;
        case 0x42f738u: goto label_42f738;
        case 0x42f73cu: goto label_42f73c;
        case 0x42f740u: goto label_42f740;
        case 0x42f744u: goto label_42f744;
        case 0x42f748u: goto label_42f748;
        case 0x42f74cu: goto label_42f74c;
        case 0x42f750u: goto label_42f750;
        case 0x42f754u: goto label_42f754;
        case 0x42f758u: goto label_42f758;
        case 0x42f75cu: goto label_42f75c;
        case 0x42f760u: goto label_42f760;
        case 0x42f764u: goto label_42f764;
        case 0x42f768u: goto label_42f768;
        case 0x42f76cu: goto label_42f76c;
        case 0x42f770u: goto label_42f770;
        case 0x42f774u: goto label_42f774;
        case 0x42f778u: goto label_42f778;
        case 0x42f77cu: goto label_42f77c;
        case 0x42f780u: goto label_42f780;
        case 0x42f784u: goto label_42f784;
        case 0x42f788u: goto label_42f788;
        case 0x42f78cu: goto label_42f78c;
        case 0x42f790u: goto label_42f790;
        case 0x42f794u: goto label_42f794;
        case 0x42f798u: goto label_42f798;
        case 0x42f79cu: goto label_42f79c;
        case 0x42f7a0u: goto label_42f7a0;
        case 0x42f7a4u: goto label_42f7a4;
        case 0x42f7a8u: goto label_42f7a8;
        case 0x42f7acu: goto label_42f7ac;
        case 0x42f7b0u: goto label_42f7b0;
        case 0x42f7b4u: goto label_42f7b4;
        case 0x42f7b8u: goto label_42f7b8;
        case 0x42f7bcu: goto label_42f7bc;
        case 0x42f7c0u: goto label_42f7c0;
        case 0x42f7c4u: goto label_42f7c4;
        case 0x42f7c8u: goto label_42f7c8;
        case 0x42f7ccu: goto label_42f7cc;
        case 0x42f7d0u: goto label_42f7d0;
        case 0x42f7d4u: goto label_42f7d4;
        case 0x42f7d8u: goto label_42f7d8;
        case 0x42f7dcu: goto label_42f7dc;
        case 0x42f7e0u: goto label_42f7e0;
        case 0x42f7e4u: goto label_42f7e4;
        case 0x42f7e8u: goto label_42f7e8;
        case 0x42f7ecu: goto label_42f7ec;
        case 0x42f7f0u: goto label_42f7f0;
        case 0x42f7f4u: goto label_42f7f4;
        case 0x42f7f8u: goto label_42f7f8;
        case 0x42f7fcu: goto label_42f7fc;
        case 0x42f800u: goto label_42f800;
        case 0x42f804u: goto label_42f804;
        case 0x42f808u: goto label_42f808;
        case 0x42f80cu: goto label_42f80c;
        case 0x42f810u: goto label_42f810;
        case 0x42f814u: goto label_42f814;
        case 0x42f818u: goto label_42f818;
        case 0x42f81cu: goto label_42f81c;
        case 0x42f820u: goto label_42f820;
        case 0x42f824u: goto label_42f824;
        case 0x42f828u: goto label_42f828;
        case 0x42f82cu: goto label_42f82c;
        case 0x42f830u: goto label_42f830;
        case 0x42f834u: goto label_42f834;
        case 0x42f838u: goto label_42f838;
        case 0x42f83cu: goto label_42f83c;
        case 0x42f840u: goto label_42f840;
        case 0x42f844u: goto label_42f844;
        case 0x42f848u: goto label_42f848;
        case 0x42f84cu: goto label_42f84c;
        case 0x42f850u: goto label_42f850;
        case 0x42f854u: goto label_42f854;
        case 0x42f858u: goto label_42f858;
        case 0x42f85cu: goto label_42f85c;
        case 0x42f860u: goto label_42f860;
        case 0x42f864u: goto label_42f864;
        case 0x42f868u: goto label_42f868;
        case 0x42f86cu: goto label_42f86c;
        case 0x42f870u: goto label_42f870;
        case 0x42f874u: goto label_42f874;
        case 0x42f878u: goto label_42f878;
        case 0x42f87cu: goto label_42f87c;
        case 0x42f880u: goto label_42f880;
        case 0x42f884u: goto label_42f884;
        case 0x42f888u: goto label_42f888;
        case 0x42f88cu: goto label_42f88c;
        case 0x42f890u: goto label_42f890;
        case 0x42f894u: goto label_42f894;
        case 0x42f898u: goto label_42f898;
        case 0x42f89cu: goto label_42f89c;
        case 0x42f8a0u: goto label_42f8a0;
        case 0x42f8a4u: goto label_42f8a4;
        case 0x42f8a8u: goto label_42f8a8;
        case 0x42f8acu: goto label_42f8ac;
        case 0x42f8b0u: goto label_42f8b0;
        case 0x42f8b4u: goto label_42f8b4;
        case 0x42f8b8u: goto label_42f8b8;
        case 0x42f8bcu: goto label_42f8bc;
        case 0x42f8c0u: goto label_42f8c0;
        case 0x42f8c4u: goto label_42f8c4;
        case 0x42f8c8u: goto label_42f8c8;
        case 0x42f8ccu: goto label_42f8cc;
        case 0x42f8d0u: goto label_42f8d0;
        case 0x42f8d4u: goto label_42f8d4;
        case 0x42f8d8u: goto label_42f8d8;
        case 0x42f8dcu: goto label_42f8dc;
        case 0x42f8e0u: goto label_42f8e0;
        case 0x42f8e4u: goto label_42f8e4;
        case 0x42f8e8u: goto label_42f8e8;
        case 0x42f8ecu: goto label_42f8ec;
        case 0x42f8f0u: goto label_42f8f0;
        case 0x42f8f4u: goto label_42f8f4;
        case 0x42f8f8u: goto label_42f8f8;
        case 0x42f8fcu: goto label_42f8fc;
        case 0x42f900u: goto label_42f900;
        case 0x42f904u: goto label_42f904;
        case 0x42f908u: goto label_42f908;
        case 0x42f90cu: goto label_42f90c;
        case 0x42f910u: goto label_42f910;
        case 0x42f914u: goto label_42f914;
        case 0x42f918u: goto label_42f918;
        case 0x42f91cu: goto label_42f91c;
        case 0x42f920u: goto label_42f920;
        case 0x42f924u: goto label_42f924;
        case 0x42f928u: goto label_42f928;
        case 0x42f92cu: goto label_42f92c;
        case 0x42f930u: goto label_42f930;
        case 0x42f934u: goto label_42f934;
        case 0x42f938u: goto label_42f938;
        case 0x42f93cu: goto label_42f93c;
        case 0x42f940u: goto label_42f940;
        case 0x42f944u: goto label_42f944;
        case 0x42f948u: goto label_42f948;
        case 0x42f94cu: goto label_42f94c;
        case 0x42f950u: goto label_42f950;
        case 0x42f954u: goto label_42f954;
        case 0x42f958u: goto label_42f958;
        case 0x42f95cu: goto label_42f95c;
        case 0x42f960u: goto label_42f960;
        case 0x42f964u: goto label_42f964;
        case 0x42f968u: goto label_42f968;
        case 0x42f96cu: goto label_42f96c;
        case 0x42f970u: goto label_42f970;
        case 0x42f974u: goto label_42f974;
        case 0x42f978u: goto label_42f978;
        case 0x42f97cu: goto label_42f97c;
        case 0x42f980u: goto label_42f980;
        case 0x42f984u: goto label_42f984;
        case 0x42f988u: goto label_42f988;
        case 0x42f98cu: goto label_42f98c;
        case 0x42f990u: goto label_42f990;
        case 0x42f994u: goto label_42f994;
        case 0x42f998u: goto label_42f998;
        case 0x42f99cu: goto label_42f99c;
        case 0x42f9a0u: goto label_42f9a0;
        case 0x42f9a4u: goto label_42f9a4;
        case 0x42f9a8u: goto label_42f9a8;
        case 0x42f9acu: goto label_42f9ac;
        case 0x42f9b0u: goto label_42f9b0;
        case 0x42f9b4u: goto label_42f9b4;
        case 0x42f9b8u: goto label_42f9b8;
        case 0x42f9bcu: goto label_42f9bc;
        case 0x42f9c0u: goto label_42f9c0;
        case 0x42f9c4u: goto label_42f9c4;
        case 0x42f9c8u: goto label_42f9c8;
        case 0x42f9ccu: goto label_42f9cc;
        case 0x42f9d0u: goto label_42f9d0;
        case 0x42f9d4u: goto label_42f9d4;
        case 0x42f9d8u: goto label_42f9d8;
        case 0x42f9dcu: goto label_42f9dc;
        case 0x42f9e0u: goto label_42f9e0;
        case 0x42f9e4u: goto label_42f9e4;
        case 0x42f9e8u: goto label_42f9e8;
        case 0x42f9ecu: goto label_42f9ec;
        case 0x42f9f0u: goto label_42f9f0;
        case 0x42f9f4u: goto label_42f9f4;
        case 0x42f9f8u: goto label_42f9f8;
        case 0x42f9fcu: goto label_42f9fc;
        case 0x42fa00u: goto label_42fa00;
        case 0x42fa04u: goto label_42fa04;
        case 0x42fa08u: goto label_42fa08;
        case 0x42fa0cu: goto label_42fa0c;
        case 0x42fa10u: goto label_42fa10;
        case 0x42fa14u: goto label_42fa14;
        case 0x42fa18u: goto label_42fa18;
        case 0x42fa1cu: goto label_42fa1c;
        case 0x42fa20u: goto label_42fa20;
        case 0x42fa24u: goto label_42fa24;
        case 0x42fa28u: goto label_42fa28;
        case 0x42fa2cu: goto label_42fa2c;
        case 0x42fa30u: goto label_42fa30;
        case 0x42fa34u: goto label_42fa34;
        case 0x42fa38u: goto label_42fa38;
        case 0x42fa3cu: goto label_42fa3c;
        case 0x42fa40u: goto label_42fa40;
        case 0x42fa44u: goto label_42fa44;
        case 0x42fa48u: goto label_42fa48;
        case 0x42fa4cu: goto label_42fa4c;
        case 0x42fa50u: goto label_42fa50;
        case 0x42fa54u: goto label_42fa54;
        case 0x42fa58u: goto label_42fa58;
        case 0x42fa5cu: goto label_42fa5c;
        case 0x42fa60u: goto label_42fa60;
        case 0x42fa64u: goto label_42fa64;
        case 0x42fa68u: goto label_42fa68;
        case 0x42fa6cu: goto label_42fa6c;
        case 0x42fa70u: goto label_42fa70;
        case 0x42fa74u: goto label_42fa74;
        case 0x42fa78u: goto label_42fa78;
        case 0x42fa7cu: goto label_42fa7c;
        case 0x42fa80u: goto label_42fa80;
        case 0x42fa84u: goto label_42fa84;
        case 0x42fa88u: goto label_42fa88;
        case 0x42fa8cu: goto label_42fa8c;
        case 0x42fa90u: goto label_42fa90;
        case 0x42fa94u: goto label_42fa94;
        case 0x42fa98u: goto label_42fa98;
        case 0x42fa9cu: goto label_42fa9c;
        case 0x42faa0u: goto label_42faa0;
        case 0x42faa4u: goto label_42faa4;
        case 0x42faa8u: goto label_42faa8;
        case 0x42faacu: goto label_42faac;
        case 0x42fab0u: goto label_42fab0;
        case 0x42fab4u: goto label_42fab4;
        case 0x42fab8u: goto label_42fab8;
        case 0x42fabcu: goto label_42fabc;
        case 0x42fac0u: goto label_42fac0;
        case 0x42fac4u: goto label_42fac4;
        case 0x42fac8u: goto label_42fac8;
        case 0x42faccu: goto label_42facc;
        case 0x42fad0u: goto label_42fad0;
        case 0x42fad4u: goto label_42fad4;
        case 0x42fad8u: goto label_42fad8;
        case 0x42fadcu: goto label_42fadc;
        case 0x42fae0u: goto label_42fae0;
        case 0x42fae4u: goto label_42fae4;
        case 0x42fae8u: goto label_42fae8;
        case 0x42faecu: goto label_42faec;
        case 0x42faf0u: goto label_42faf0;
        case 0x42faf4u: goto label_42faf4;
        case 0x42faf8u: goto label_42faf8;
        case 0x42fafcu: goto label_42fafc;
        case 0x42fb00u: goto label_42fb00;
        case 0x42fb04u: goto label_42fb04;
        case 0x42fb08u: goto label_42fb08;
        case 0x42fb0cu: goto label_42fb0c;
        case 0x42fb10u: goto label_42fb10;
        case 0x42fb14u: goto label_42fb14;
        case 0x42fb18u: goto label_42fb18;
        case 0x42fb1cu: goto label_42fb1c;
        case 0x42fb20u: goto label_42fb20;
        case 0x42fb24u: goto label_42fb24;
        case 0x42fb28u: goto label_42fb28;
        case 0x42fb2cu: goto label_42fb2c;
        case 0x42fb30u: goto label_42fb30;
        case 0x42fb34u: goto label_42fb34;
        case 0x42fb38u: goto label_42fb38;
        case 0x42fb3cu: goto label_42fb3c;
        case 0x42fb40u: goto label_42fb40;
        case 0x42fb44u: goto label_42fb44;
        case 0x42fb48u: goto label_42fb48;
        case 0x42fb4cu: goto label_42fb4c;
        case 0x42fb50u: goto label_42fb50;
        case 0x42fb54u: goto label_42fb54;
        case 0x42fb58u: goto label_42fb58;
        case 0x42fb5cu: goto label_42fb5c;
        case 0x42fb60u: goto label_42fb60;
        case 0x42fb64u: goto label_42fb64;
        case 0x42fb68u: goto label_42fb68;
        case 0x42fb6cu: goto label_42fb6c;
        case 0x42fb70u: goto label_42fb70;
        case 0x42fb74u: goto label_42fb74;
        case 0x42fb78u: goto label_42fb78;
        case 0x42fb7cu: goto label_42fb7c;
        case 0x42fb80u: goto label_42fb80;
        case 0x42fb84u: goto label_42fb84;
        case 0x42fb88u: goto label_42fb88;
        case 0x42fb8cu: goto label_42fb8c;
        case 0x42fb90u: goto label_42fb90;
        case 0x42fb94u: goto label_42fb94;
        case 0x42fb98u: goto label_42fb98;
        case 0x42fb9cu: goto label_42fb9c;
        case 0x42fba0u: goto label_42fba0;
        case 0x42fba4u: goto label_42fba4;
        case 0x42fba8u: goto label_42fba8;
        case 0x42fbacu: goto label_42fbac;
        case 0x42fbb0u: goto label_42fbb0;
        case 0x42fbb4u: goto label_42fbb4;
        case 0x42fbb8u: goto label_42fbb8;
        case 0x42fbbcu: goto label_42fbbc;
        case 0x42fbc0u: goto label_42fbc0;
        case 0x42fbc4u: goto label_42fbc4;
        case 0x42fbc8u: goto label_42fbc8;
        case 0x42fbccu: goto label_42fbcc;
        case 0x42fbd0u: goto label_42fbd0;
        case 0x42fbd4u: goto label_42fbd4;
        case 0x42fbd8u: goto label_42fbd8;
        case 0x42fbdcu: goto label_42fbdc;
        case 0x42fbe0u: goto label_42fbe0;
        case 0x42fbe4u: goto label_42fbe4;
        case 0x42fbe8u: goto label_42fbe8;
        case 0x42fbecu: goto label_42fbec;
        case 0x42fbf0u: goto label_42fbf0;
        case 0x42fbf4u: goto label_42fbf4;
        case 0x42fbf8u: goto label_42fbf8;
        case 0x42fbfcu: goto label_42fbfc;
        case 0x42fc00u: goto label_42fc00;
        case 0x42fc04u: goto label_42fc04;
        case 0x42fc08u: goto label_42fc08;
        case 0x42fc0cu: goto label_42fc0c;
        case 0x42fc10u: goto label_42fc10;
        case 0x42fc14u: goto label_42fc14;
        case 0x42fc18u: goto label_42fc18;
        case 0x42fc1cu: goto label_42fc1c;
        case 0x42fc20u: goto label_42fc20;
        case 0x42fc24u: goto label_42fc24;
        case 0x42fc28u: goto label_42fc28;
        case 0x42fc2cu: goto label_42fc2c;
        case 0x42fc30u: goto label_42fc30;
        case 0x42fc34u: goto label_42fc34;
        case 0x42fc38u: goto label_42fc38;
        case 0x42fc3cu: goto label_42fc3c;
        case 0x42fc40u: goto label_42fc40;
        case 0x42fc44u: goto label_42fc44;
        case 0x42fc48u: goto label_42fc48;
        case 0x42fc4cu: goto label_42fc4c;
        case 0x42fc50u: goto label_42fc50;
        case 0x42fc54u: goto label_42fc54;
        case 0x42fc58u: goto label_42fc58;
        case 0x42fc5cu: goto label_42fc5c;
        case 0x42fc60u: goto label_42fc60;
        case 0x42fc64u: goto label_42fc64;
        case 0x42fc68u: goto label_42fc68;
        case 0x42fc6cu: goto label_42fc6c;
        case 0x42fc70u: goto label_42fc70;
        case 0x42fc74u: goto label_42fc74;
        case 0x42fc78u: goto label_42fc78;
        case 0x42fc7cu: goto label_42fc7c;
        case 0x42fc80u: goto label_42fc80;
        case 0x42fc84u: goto label_42fc84;
        case 0x42fc88u: goto label_42fc88;
        case 0x42fc8cu: goto label_42fc8c;
        default: break;
    }

    ctx->pc = 0x42f1c0u;

label_42f1c0:
    // 0x42f1c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x42f1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_42f1c4:
    // 0x42f1c4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x42f1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42f1c8:
    // 0x42f1c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42f1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_42f1cc:
    // 0x42f1cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42f1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42f1d0:
    // 0x42f1d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42f1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42f1d4:
    // 0x42f1d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x42f1d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42f1d8:
    // 0x42f1d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42f1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42f1dc:
    // 0x42f1dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42f1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42f1e0:
    // 0x42f1e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x42f1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42f1e4:
    // 0x42f1e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x42f1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_42f1e8:
    // 0x42f1e8: 0xc10ca68  jal         func_4329A0
label_42f1ec:
    if (ctx->pc == 0x42F1ECu) {
        ctx->pc = 0x42F1ECu;
            // 0x42f1ec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x42F1F0u;
        goto label_42f1f0;
    }
    ctx->pc = 0x42F1E8u;
    SET_GPR_U32(ctx, 31, 0x42F1F0u);
    ctx->pc = 0x42F1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F1E8u;
            // 0x42f1ec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F1F0u; }
        if (ctx->pc != 0x42F1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F1F0u; }
        if (ctx->pc != 0x42F1F0u) { return; }
    }
    ctx->pc = 0x42F1F0u;
label_42f1f0:
    // 0x42f1f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x42f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_42f1f4:
    // 0x42f1f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42f1f8:
    // 0x42f1f8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x42f1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_42f1fc:
    // 0x42f1fc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x42f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_42f200:
    // 0x42f200: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x42f200u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_42f204:
    // 0x42f204: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x42f204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_42f208:
    // 0x42f208: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x42f208u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_42f20c:
    // 0x42f20c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x42f20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_42f210:
    // 0x42f210: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x42f210u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_42f214:
    // 0x42f214: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42f214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42f218:
    // 0x42f218: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x42f218u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_42f21c:
    // 0x42f21c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x42f21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_42f220:
    // 0x42f220: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x42f220u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_42f224:
    // 0x42f224: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x42f224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_42f228:
    // 0x42f228: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x42f228u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_42f22c:
    // 0x42f22c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x42f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_42f230:
    // 0x42f230: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x42f230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_42f234:
    // 0x42f234: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x42f234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_42f238:
    // 0x42f238: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x42f238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_42f23c:
    // 0x42f23c: 0xc0582cc  jal         func_160B30
label_42f240:
    if (ctx->pc == 0x42F240u) {
        ctx->pc = 0x42F240u;
            // 0x42f240: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x42F244u;
        goto label_42f244;
    }
    ctx->pc = 0x42F23Cu;
    SET_GPR_U32(ctx, 31, 0x42F244u);
    ctx->pc = 0x42F240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F23Cu;
            // 0x42f240: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F244u; }
        if (ctx->pc != 0x42F244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F244u; }
        if (ctx->pc != 0x42F244u) { return; }
    }
    ctx->pc = 0x42F244u;
label_42f244:
    // 0x42f244: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42f244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42f248:
    // 0x42f248: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x42f248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_42f24c:
    // 0x42f24c: 0x2463c6e0  addiu       $v1, $v1, -0x3920
    ctx->pc = 0x42f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952672));
label_42f250:
    // 0x42f250: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x42f250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_42f254:
    // 0x42f254: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x42f254u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_42f258:
    // 0x42f258: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42f258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42f25c:
    // 0x42f25c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42f260:
    // 0x42f260: 0xac446ed8  sw          $a0, 0x6ED8($v0)
    ctx->pc = 0x42f260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28376), GPR_U32(ctx, 4));
label_42f264:
    // 0x42f264: 0x2463c6f0  addiu       $v1, $v1, -0x3910
    ctx->pc = 0x42f264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952688));
label_42f268:
    // 0x42f268: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42f268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_42f26c:
    // 0x42f26c: 0x2442c728  addiu       $v0, $v0, -0x38D8
    ctx->pc = 0x42f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952744));
label_42f270:
    // 0x42f270: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x42f270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_42f274:
    // 0x42f274: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x42f274u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_42f278:
    // 0x42f278: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x42f278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_42f27c:
    // 0x42f27c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x42f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_42f280:
    // 0x42f280: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x42f280u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_42f284:
    // 0x42f284: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x42f284u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_42f288:
    // 0x42f288: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x42f288u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_42f28c:
    // 0x42f28c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x42f28cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_42f290:
    // 0x42f290: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x42f290u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_42f294:
    // 0x42f294: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x42f294u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_42f298:
    // 0x42f298: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x42f298u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_42f29c:
    // 0x42f29c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x42f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_42f2a0:
    // 0x42f2a0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x42f2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_42f2a4:
    // 0x42f2a4: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_42f2a8:
    if (ctx->pc == 0x42F2A8u) {
        ctx->pc = 0x42F2ACu;
        goto label_42f2ac;
    }
    ctx->pc = 0x42F2A4u;
    {
        const bool branch_taken_0x42f2a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x42f2a4) {
            ctx->pc = 0x42F340u;
            goto label_42f340;
        }
    }
    ctx->pc = 0x42F2ACu;
label_42f2ac:
    // 0x42f2ac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x42f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_42f2b0:
    // 0x42f2b0: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x42f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_42f2b4:
    // 0x42f2b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x42f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42f2b8:
    // 0x42f2b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x42f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_42f2bc:
    // 0x42f2bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x42f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_42f2c0:
    // 0x42f2c0: 0xc040138  jal         func_1004E0
label_42f2c4:
    if (ctx->pc == 0x42F2C4u) {
        ctx->pc = 0x42F2C4u;
            // 0x42f2c4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x42F2C8u;
        goto label_42f2c8;
    }
    ctx->pc = 0x42F2C0u;
    SET_GPR_U32(ctx, 31, 0x42F2C8u);
    ctx->pc = 0x42F2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F2C0u;
            // 0x42f2c4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F2C8u; }
        if (ctx->pc != 0x42F2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F2C8u; }
        if (ctx->pc != 0x42F2C8u) { return; }
    }
    ctx->pc = 0x42F2C8u;
label_42f2c8:
    // 0x42f2c8: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42f2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_42f2cc:
    // 0x42f2cc: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x42f2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
label_42f2d0:
    // 0x42f2d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42f2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42f2d4:
    // 0x42f2d4: 0x24a5f360  addiu       $a1, $a1, -0xCA0
    ctx->pc = 0x42f2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964064));
label_42f2d8:
    // 0x42f2d8: 0x24c6e430  addiu       $a2, $a2, -0x1BD0
    ctx->pc = 0x42f2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960176));
label_42f2dc:
    // 0x42f2dc: 0x24070190  addiu       $a3, $zero, 0x190
    ctx->pc = 0x42f2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_42f2e0:
    // 0x42f2e0: 0xc040840  jal         func_102100
label_42f2e4:
    if (ctx->pc == 0x42F2E4u) {
        ctx->pc = 0x42F2E4u;
            // 0x42f2e4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42F2E8u;
        goto label_42f2e8;
    }
    ctx->pc = 0x42F2E0u;
    SET_GPR_U32(ctx, 31, 0x42F2E8u);
    ctx->pc = 0x42F2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F2E0u;
            // 0x42f2e4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F2E8u; }
        if (ctx->pc != 0x42F2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F2E8u; }
        if (ctx->pc != 0x42F2E8u) { return; }
    }
    ctx->pc = 0x42F2E8u;
label_42f2e8:
    // 0x42f2e8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x42f2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_42f2ec:
    // 0x42f2ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x42f2ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42f2f0:
    // 0x42f2f0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x42f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_42f2f4:
    // 0x42f2f4: 0xc0788fc  jal         func_1E23F0
label_42f2f8:
    if (ctx->pc == 0x42F2F8u) {
        ctx->pc = 0x42F2F8u;
            // 0x42f2f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42F2FCu;
        goto label_42f2fc;
    }
    ctx->pc = 0x42F2F4u;
    SET_GPR_U32(ctx, 31, 0x42F2FCu);
    ctx->pc = 0x42F2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F2F4u;
            // 0x42f2f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F2FCu; }
        if (ctx->pc != 0x42F2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F2FCu; }
        if (ctx->pc != 0x42F2FCu) { return; }
    }
    ctx->pc = 0x42F2FCu;
label_42f2fc:
    // 0x42f2fc: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x42f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_42f300:
    // 0x42f300: 0xc0788fc  jal         func_1E23F0
label_42f304:
    if (ctx->pc == 0x42F304u) {
        ctx->pc = 0x42F304u;
            // 0x42f304: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42F308u;
        goto label_42f308;
    }
    ctx->pc = 0x42F300u;
    SET_GPR_U32(ctx, 31, 0x42F308u);
    ctx->pc = 0x42F304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F300u;
            // 0x42f304: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F308u; }
        if (ctx->pc != 0x42F308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F308u; }
        if (ctx->pc != 0x42F308u) { return; }
    }
    ctx->pc = 0x42F308u;
label_42f308:
    // 0x42f308: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x42f308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42f30c:
    // 0x42f30c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x42f30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_42f310:
    // 0x42f310: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x42f310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_42f314:
    // 0x42f314: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x42f314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_42f318:
    // 0x42f318: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42f318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42f31c:
    // 0x42f31c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x42f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_42f320:
    // 0x42f320: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x42f320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_42f324:
    // 0x42f324: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42f324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42f328:
    // 0x42f328: 0xc0a997c  jal         func_2A65F0
label_42f32c:
    if (ctx->pc == 0x42F32Cu) {
        ctx->pc = 0x42F32Cu;
            // 0x42f32c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x42F330u;
        goto label_42f330;
    }
    ctx->pc = 0x42F328u;
    SET_GPR_U32(ctx, 31, 0x42F330u);
    ctx->pc = 0x42F32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F328u;
            // 0x42f32c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F330u; }
        if (ctx->pc != 0x42F330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F330u; }
        if (ctx->pc != 0x42F330u) { return; }
    }
    ctx->pc = 0x42F330u;
label_42f330:
    // 0x42f330: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x42f330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_42f334:
    // 0x42f334: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x42f334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_42f338:
    // 0x42f338: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_42f33c:
    if (ctx->pc == 0x42F33Cu) {
        ctx->pc = 0x42F33Cu;
            // 0x42f33c: 0x26520190  addiu       $s2, $s2, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
        ctx->pc = 0x42F340u;
        goto label_42f340;
    }
    ctx->pc = 0x42F338u;
    {
        const bool branch_taken_0x42f338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42F33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42F338u;
            // 0x42f33c: 0x26520190  addiu       $s2, $s2, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f338) {
            ctx->pc = 0x42F30Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42f30c;
        }
    }
    ctx->pc = 0x42F340u;
label_42f340:
    // 0x42f340: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x42f340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42f344:
    // 0x42f344: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42f344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_42f348:
    // 0x42f348: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42f348u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42f34c:
    // 0x42f34c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42f34cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42f350:
    // 0x42f350: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42f350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42f354:
    // 0x42f354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42f354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42f358:
    // 0x42f358: 0x3e00008  jr          $ra
label_42f35c:
    if (ctx->pc == 0x42F35Cu) {
        ctx->pc = 0x42F35Cu;
            // 0x42f35c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x42F360u;
        goto label_42f360;
    }
    ctx->pc = 0x42F358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42F358u;
            // 0x42f35c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42F360u;
label_42f360:
    // 0x42f360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42f360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_42f364:
    // 0x42f364: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42f364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42f368:
    // 0x42f368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42f368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42f36c:
    // 0x42f36c: 0xc0aeebc  jal         func_2BBAF0
label_42f370:
    if (ctx->pc == 0x42F370u) {
        ctx->pc = 0x42F370u;
            // 0x42f370: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42F374u;
        goto label_42f374;
    }
    ctx->pc = 0x42F36Cu;
    SET_GPR_U32(ctx, 31, 0x42F374u);
    ctx->pc = 0x42F370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F36Cu;
            // 0x42f370: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F374u; }
        if (ctx->pc != 0x42F374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F374u; }
        if (ctx->pc != 0x42F374u) { return; }
    }
    ctx->pc = 0x42F374u;
label_42f374:
    // 0x42f374: 0xc0aeeb4  jal         func_2BBAD0
label_42f378:
    if (ctx->pc == 0x42F378u) {
        ctx->pc = 0x42F378u;
            // 0x42f378: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x42F37Cu;
        goto label_42f37c;
    }
    ctx->pc = 0x42F374u;
    SET_GPR_U32(ctx, 31, 0x42F37Cu);
    ctx->pc = 0x42F378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F374u;
            // 0x42f378: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F37Cu; }
        if (ctx->pc != 0x42F37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F37Cu; }
        if (ctx->pc != 0x42F37Cu) { return; }
    }
    ctx->pc = 0x42F37Cu;
label_42f37c:
    // 0x42f37c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x42f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_42f380:
    // 0x42f380: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42f380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42f384:
    // 0x42f384: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x42f384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_42f388:
    // 0x42f388: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x42f388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_42f38c:
    // 0x42f38c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42f38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_42f390:
    // 0x42f390: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x42f390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_42f394:
    // 0x42f394: 0xc0aeea4  jal         func_2BBA90
label_42f398:
    if (ctx->pc == 0x42F398u) {
        ctx->pc = 0x42F398u;
            // 0x42f398: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x42F39Cu;
        goto label_42f39c;
    }
    ctx->pc = 0x42F394u;
    SET_GPR_U32(ctx, 31, 0x42F39Cu);
    ctx->pc = 0x42F398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F394u;
            // 0x42f398: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F39Cu; }
        if (ctx->pc != 0x42F39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F39Cu; }
        if (ctx->pc != 0x42F39Cu) { return; }
    }
    ctx->pc = 0x42F39Cu;
label_42f39c:
    // 0x42f39c: 0xc0aee8c  jal         func_2BBA30
label_42f3a0:
    if (ctx->pc == 0x42F3A0u) {
        ctx->pc = 0x42F3A0u;
            // 0x42f3a0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x42F3A4u;
        goto label_42f3a4;
    }
    ctx->pc = 0x42F39Cu;
    SET_GPR_U32(ctx, 31, 0x42F3A4u);
    ctx->pc = 0x42F3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F39Cu;
            // 0x42f3a0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F3A4u; }
        if (ctx->pc != 0x42F3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F3A4u; }
        if (ctx->pc != 0x42F3A4u) { return; }
    }
    ctx->pc = 0x42F3A4u;
label_42f3a4:
    // 0x42f3a4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x42f3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_42f3a8:
    // 0x42f3a8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x42f3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_42f3ac:
    // 0x42f3ac: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x42f3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_42f3b0:
    // 0x42f3b0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x42f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_42f3b4:
    // 0x42f3b4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x42f3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_42f3b8:
    // 0x42f3b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42f3bc:
    // 0x42f3bc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x42f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_42f3c0:
    // 0x42f3c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_42f3c4:
    // 0x42f3c4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x42f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_42f3c8:
    // 0x42f3c8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x42f3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_42f3cc:
    // 0x42f3cc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x42f3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_42f3d0:
    // 0x42f3d0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x42f3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_42f3d4:
    // 0x42f3d4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x42f3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_42f3d8:
    // 0x42f3d8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x42f3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_42f3dc:
    // 0x42f3dc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x42f3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_42f3e0:
    // 0x42f3e0: 0xc0775b8  jal         func_1DD6E0
label_42f3e4:
    if (ctx->pc == 0x42F3E4u) {
        ctx->pc = 0x42F3E4u;
            // 0x42f3e4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x42F3E8u;
        goto label_42f3e8;
    }
    ctx->pc = 0x42F3E0u;
    SET_GPR_U32(ctx, 31, 0x42F3E8u);
    ctx->pc = 0x42F3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F3E0u;
            // 0x42f3e4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F3E8u; }
        if (ctx->pc != 0x42F3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F3E8u; }
        if (ctx->pc != 0x42F3E8u) { return; }
    }
    ctx->pc = 0x42F3E8u;
label_42f3e8:
    // 0x42f3e8: 0xc077314  jal         func_1DCC50
label_42f3ec:
    if (ctx->pc == 0x42F3ECu) {
        ctx->pc = 0x42F3ECu;
            // 0x42f3ec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x42F3F0u;
        goto label_42f3f0;
    }
    ctx->pc = 0x42F3E8u;
    SET_GPR_U32(ctx, 31, 0x42F3F0u);
    ctx->pc = 0x42F3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F3E8u;
            // 0x42f3ec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F3F0u; }
        if (ctx->pc != 0x42F3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F3F0u; }
        if (ctx->pc != 0x42F3F0u) { return; }
    }
    ctx->pc = 0x42F3F0u;
label_42f3f0:
    // 0x42f3f0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x42f3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_42f3f4:
    // 0x42f3f4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x42f3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_42f3f8:
    // 0x42f3f8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x42f3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_42f3fc:
    // 0x42f3fc: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x42f3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_42f400:
    // 0x42f400: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x42f400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_42f404:
    // 0x42f404: 0x2484c640  addiu       $a0, $a0, -0x39C0
    ctx->pc = 0x42f404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952512));
label_42f408:
    // 0x42f408: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x42f408u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_42f40c:
    // 0x42f40c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42f410:
    // 0x42f410: 0x2463c680  addiu       $v1, $v1, -0x3980
    ctx->pc = 0x42f410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952576));
label_42f414:
    // 0x42f414: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x42f414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_42f418:
    // 0x42f418: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x42f418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_42f41c:
    // 0x42f41c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x42f41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_42f420:
    // 0x42f420: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x42f420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_42f424:
    // 0x42f424: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x42f424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_42f428:
    // 0x42f428: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x42f428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_42f42c:
    // 0x42f42c: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x42f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
label_42f430:
    // 0x42f430: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x42f430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_42f434:
    // 0x42f434: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x42f434u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_42f438:
    // 0x42f438: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x42f438u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_42f43c:
    // 0x42f43c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_42f440:
    if (ctx->pc == 0x42F440u) {
        ctx->pc = 0x42F444u;
        goto label_42f444;
    }
    ctx->pc = 0x42F43Cu;
    {
        const bool branch_taken_0x42f43c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x42f43c) {
            ctx->pc = 0x42F454u;
            goto label_42f454;
        }
    }
    ctx->pc = 0x42F444u;
label_42f444:
    // 0x42f444: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x42f444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_42f448:
    // 0x42f448: 0xc440cbd0  lwc1        $f0, -0x3430($v0)
    ctx->pc = 0x42f448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42f44c:
    // 0x42f44c: 0x10000004  b           . + 4 + (0x4 << 2)
label_42f450:
    if (ctx->pc == 0x42F450u) {
        ctx->pc = 0x42F450u;
            // 0x42f450: 0xe6000100  swc1        $f0, 0x100($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
        ctx->pc = 0x42F454u;
        goto label_42f454;
    }
    ctx->pc = 0x42F44Cu;
    {
        const bool branch_taken_0x42f44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42F44Cu;
            // 0x42f450: 0xe6000100  swc1        $f0, 0x100($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f44c) {
            ctx->pc = 0x42F460u;
            goto label_42f460;
        }
    }
    ctx->pc = 0x42F454u;
label_42f454:
    // 0x42f454: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x42f454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_42f458:
    // 0x42f458: 0xc440cbc8  lwc1        $f0, -0x3438($v0)
    ctx->pc = 0x42f458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42f45c:
    // 0x42f45c: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x42f45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
label_42f460:
    // 0x42f460: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x42f460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_42f464:
    // 0x42f464: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x42f464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_42f468:
    // 0x42f468: 0xc04cce8  jal         func_1333A0
label_42f46c:
    if (ctx->pc == 0x42F46Cu) {
        ctx->pc = 0x42F46Cu;
            // 0x42f46c: 0x24a5cc20  addiu       $a1, $a1, -0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954016));
        ctx->pc = 0x42F470u;
        goto label_42f470;
    }
    ctx->pc = 0x42F468u;
    SET_GPR_U32(ctx, 31, 0x42F470u);
    ctx->pc = 0x42F46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F468u;
            // 0x42f46c: 0x24a5cc20  addiu       $a1, $a1, -0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F470u; }
        if (ctx->pc != 0x42F470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F470u; }
        if (ctx->pc != 0x42F470u) { return; }
    }
    ctx->pc = 0x42F470u;
label_42f470:
    // 0x42f470: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42f470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42f474:
    // 0x42f474: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42f474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42f478:
    // 0x42f478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42f478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42f47c:
    // 0x42f47c: 0x3e00008  jr          $ra
label_42f480:
    if (ctx->pc == 0x42F480u) {
        ctx->pc = 0x42F480u;
            // 0x42f480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x42F484u;
        goto label_42f484;
    }
    ctx->pc = 0x42F47Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42F47Cu;
            // 0x42f480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42F484u;
label_42f484:
    // 0x42f484: 0x0  nop
    ctx->pc = 0x42f484u;
    // NOP
label_42f488:
    // 0x42f488: 0x0  nop
    ctx->pc = 0x42f488u;
    // NOP
label_42f48c:
    // 0x42f48c: 0x0  nop
    ctx->pc = 0x42f48cu;
    // NOP
label_42f490:
    // 0x42f490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42f490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42f494:
    // 0x42f494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42f494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_42f498:
    // 0x42f498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42f498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42f49c:
    // 0x42f49c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42f49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42f4a0:
    // 0x42f4a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42f4a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42f4a4:
    // 0x42f4a4: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x42f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_42f4a8:
    // 0x42f4a8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_42f4ac:
    if (ctx->pc == 0x42F4ACu) {
        ctx->pc = 0x42F4ACu;
            // 0x42f4ac: 0xae2000d0  sw          $zero, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x42F4B0u;
        goto label_42f4b0;
    }
    ctx->pc = 0x42F4A8u;
    {
        const bool branch_taken_0x42f4a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42f4a8) {
            ctx->pc = 0x42F4ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42F4A8u;
            // 0x42f4ac: 0xae2000d0  sw          $zero, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42F4C4u;
            goto label_42f4c4;
        }
    }
    ctx->pc = 0x42F4B0u;
label_42f4b0:
    // 0x42f4b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42f4b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42f4b4:
    // 0x42f4b4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x42f4b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_42f4b8:
    // 0x42f4b8: 0x320f809  jalr        $t9
label_42f4bc:
    if (ctx->pc == 0x42F4BCu) {
        ctx->pc = 0x42F4BCu;
            // 0x42f4bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42F4C0u;
        goto label_42f4c0;
    }
    ctx->pc = 0x42F4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42F4C0u);
        ctx->pc = 0x42F4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42F4B8u;
            // 0x42f4bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42F4C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42F4C0u; }
            if (ctx->pc != 0x42F4C0u) { return; }
        }
        }
    }
    ctx->pc = 0x42F4C0u;
label_42f4c0:
    // 0x42f4c0: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x42f4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
label_42f4c4:
    // 0x42f4c4: 0x8e30009c  lw          $s0, 0x9C($s1)
    ctx->pc = 0x42f4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_42f4c8:
    // 0x42f4c8: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_42f4cc:
    if (ctx->pc == 0x42F4CCu) {
        ctx->pc = 0x42F4CCu;
            // 0x42f4cc: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x42F4D0u;
        goto label_42f4d0;
    }
    ctx->pc = 0x42F4C8u;
    {
        const bool branch_taken_0x42f4c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x42f4c8) {
            ctx->pc = 0x42F4CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42F4C8u;
            // 0x42f4cc: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42F504u;
            goto label_42f504;
        }
    }
    ctx->pc = 0x42F4D0u;
label_42f4d0:
    // 0x42f4d0: 0xc04008c  jal         func_100230
label_42f4d4:
    if (ctx->pc == 0x42F4D4u) {
        ctx->pc = 0x42F4D4u;
            // 0x42f4d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x42F4D8u;
        goto label_42f4d8;
    }
    ctx->pc = 0x42F4D0u;
    SET_GPR_U32(ctx, 31, 0x42F4D8u);
    ctx->pc = 0x42F4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F4D0u;
            // 0x42f4d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F4D8u; }
        if (ctx->pc != 0x42F4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F4D8u; }
        if (ctx->pc != 0x42F4D8u) { return; }
    }
    ctx->pc = 0x42F4D8u;
label_42f4d8:
    // 0x42f4d8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x42f4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_42f4dc:
    // 0x42f4dc: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x42f4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_42f4e0:
    // 0x42f4e0: 0xc0407c0  jal         func_101F00
label_42f4e4:
    if (ctx->pc == 0x42F4E4u) {
        ctx->pc = 0x42F4E4u;
            // 0x42f4e4: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x42F4E8u;
        goto label_42f4e8;
    }
    ctx->pc = 0x42F4E0u;
    SET_GPR_U32(ctx, 31, 0x42F4E8u);
    ctx->pc = 0x42F4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F4E0u;
            // 0x42f4e4: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F4E8u; }
        if (ctx->pc != 0x42F4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F4E8u; }
        if (ctx->pc != 0x42F4E8u) { return; }
    }
    ctx->pc = 0x42F4E8u;
label_42f4e8:
    // 0x42f4e8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x42f4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_42f4ec:
    // 0x42f4ec: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x42f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_42f4f0:
    // 0x42f4f0: 0xc0407c0  jal         func_101F00
label_42f4f4:
    if (ctx->pc == 0x42F4F4u) {
        ctx->pc = 0x42F4F4u;
            // 0x42f4f4: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x42F4F8u;
        goto label_42f4f8;
    }
    ctx->pc = 0x42F4F0u;
    SET_GPR_U32(ctx, 31, 0x42F4F8u);
    ctx->pc = 0x42F4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F4F0u;
            // 0x42f4f4: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F4F8u; }
        if (ctx->pc != 0x42F4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F4F8u; }
        if (ctx->pc != 0x42F4F8u) { return; }
    }
    ctx->pc = 0x42F4F8u;
label_42f4f8:
    // 0x42f4f8: 0xc0400a8  jal         func_1002A0
label_42f4fc:
    if (ctx->pc == 0x42F4FCu) {
        ctx->pc = 0x42F4FCu;
            // 0x42f4fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42F500u;
        goto label_42f500;
    }
    ctx->pc = 0x42F4F8u;
    SET_GPR_U32(ctx, 31, 0x42F500u);
    ctx->pc = 0x42F4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F4F8u;
            // 0x42f4fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F500u; }
        if (ctx->pc != 0x42F500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F500u; }
        if (ctx->pc != 0x42F500u) { return; }
    }
    ctx->pc = 0x42F500u;
label_42f500:
    // 0x42f500: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x42f500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_42f504:
    // 0x42f504: 0x8e230180  lw          $v1, 0x180($s1)
    ctx->pc = 0x42f504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_42f508:
    // 0x42f508: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_42f50c:
    if (ctx->pc == 0x42F50Cu) {
        ctx->pc = 0x42F50Cu;
            // 0x42f50c: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x42F510u;
        goto label_42f510;
    }
    ctx->pc = 0x42F508u;
    {
        const bool branch_taken_0x42f508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x42f508) {
            ctx->pc = 0x42F50Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42F508u;
            // 0x42f50c: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42F530u;
            goto label_42f530;
        }
    }
    ctx->pc = 0x42F510u;
label_42f510:
    // 0x42f510: 0xa0600060  sb          $zero, 0x60($v1)
    ctx->pc = 0x42f510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 96), (uint8_t)GPR_U32(ctx, 0));
label_42f514:
    // 0x42f514: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x42f514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_42f518:
    // 0x42f518: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x42f518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_42f51c:
    // 0x42f51c: 0x8e250180  lw          $a1, 0x180($s1)
    ctx->pc = 0x42f51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_42f520:
    // 0x42f520: 0xc057b7c  jal         func_15EDF0
label_42f524:
    if (ctx->pc == 0x42F524u) {
        ctx->pc = 0x42F524u;
            // 0x42f524: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x42F528u;
        goto label_42f528;
    }
    ctx->pc = 0x42F520u;
    SET_GPR_U32(ctx, 31, 0x42F528u);
    ctx->pc = 0x42F524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F520u;
            // 0x42f524: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F528u; }
        if (ctx->pc != 0x42F528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F528u; }
        if (ctx->pc != 0x42F528u) { return; }
    }
    ctx->pc = 0x42F528u;
label_42f528:
    // 0x42f528: 0xae200180  sw          $zero, 0x180($s1)
    ctx->pc = 0x42f528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 0));
label_42f52c:
    // 0x42f52c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x42f52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_42f530:
    // 0x42f530: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_42f534:
    if (ctx->pc == 0x42F534u) {
        ctx->pc = 0x42F534u;
            // 0x42f534: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x42F538u;
        goto label_42f538;
    }
    ctx->pc = 0x42F530u;
    {
        const bool branch_taken_0x42f530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42f530) {
            ctx->pc = 0x42F534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42F530u;
            // 0x42f534: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42F54Cu;
            goto label_42f54c;
        }
    }
    ctx->pc = 0x42F538u;
label_42f538:
    // 0x42f538: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42f538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42f53c:
    // 0x42f53c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x42f53cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_42f540:
    // 0x42f540: 0x320f809  jalr        $t9
label_42f544:
    if (ctx->pc == 0x42F544u) {
        ctx->pc = 0x42F544u;
            // 0x42f544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42F548u;
        goto label_42f548;
    }
    ctx->pc = 0x42F540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42F548u);
        ctx->pc = 0x42F544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42F540u;
            // 0x42f544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42F548u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42F548u; }
            if (ctx->pc != 0x42F548u) { return; }
        }
        }
    }
    ctx->pc = 0x42F548u;
label_42f548:
    // 0x42f548: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x42f548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_42f54c:
    // 0x42f54c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42f54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42f550:
    // 0x42f550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42f550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42f554:
    // 0x42f554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42f554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42f558:
    // 0x42f558: 0x3e00008  jr          $ra
label_42f55c:
    if (ctx->pc == 0x42F55Cu) {
        ctx->pc = 0x42F55Cu;
            // 0x42f55c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42F560u;
        goto label_42f560;
    }
    ctx->pc = 0x42F558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42F558u;
            // 0x42f55c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42F560u;
label_42f560:
    // 0x42f560: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x42f560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_42f564:
    // 0x42f564: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x42f564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_42f568:
    // 0x42f568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42f568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42f56c:
    // 0x42f56c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42f56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42f570:
    // 0x42f570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42f570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42f574:
    // 0x42f574: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42f574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42f578:
    // 0x42f578: 0xc0892d0  jal         func_224B40
label_42f57c:
    if (ctx->pc == 0x42F57Cu) {
        ctx->pc = 0x42F57Cu;
            // 0x42f57c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x42F580u;
        goto label_42f580;
    }
    ctx->pc = 0x42F578u;
    SET_GPR_U32(ctx, 31, 0x42F580u);
    ctx->pc = 0x42F57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F578u;
            // 0x42f57c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F580u; }
        if (ctx->pc != 0x42F580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F580u; }
        if (ctx->pc != 0x42F580u) { return; }
    }
    ctx->pc = 0x42F580u;
label_42f580:
    // 0x42f580: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42f580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42f584:
    // 0x42f584: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x42f584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_42f588:
    // 0x42f588: 0x8c426ed8  lw          $v0, 0x6ED8($v0)
    ctx->pc = 0x42f588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28376)));
label_42f58c:
    // 0x42f58c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x42f58cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_42f590:
    // 0x42f590: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x42f590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_42f594:
    // 0x42f594: 0xc0b6e68  jal         func_2DB9A0
label_42f598:
    if (ctx->pc == 0x42F598u) {
        ctx->pc = 0x42F598u;
            // 0x42f598: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x42F59Cu;
        goto label_42f59c;
    }
    ctx->pc = 0x42F594u;
    SET_GPR_U32(ctx, 31, 0x42F59Cu);
    ctx->pc = 0x42F598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F594u;
            // 0x42f598: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F59Cu; }
        if (ctx->pc != 0x42F59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F59Cu; }
        if (ctx->pc != 0x42F59Cu) { return; }
    }
    ctx->pc = 0x42F59Cu;
label_42f59c:
    // 0x42f59c: 0xc0b6dac  jal         func_2DB6B0
label_42f5a0:
    if (ctx->pc == 0x42F5A0u) {
        ctx->pc = 0x42F5A0u;
            // 0x42f5a0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x42F5A4u;
        goto label_42f5a4;
    }
    ctx->pc = 0x42F59Cu;
    SET_GPR_U32(ctx, 31, 0x42F5A4u);
    ctx->pc = 0x42F5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F59Cu;
            // 0x42f5a0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F5A4u; }
        if (ctx->pc != 0x42F5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F5A4u; }
        if (ctx->pc != 0x42F5A4u) { return; }
    }
    ctx->pc = 0x42F5A4u;
label_42f5a4:
    // 0x42f5a4: 0xc0cac94  jal         func_32B250
label_42f5a8:
    if (ctx->pc == 0x42F5A8u) {
        ctx->pc = 0x42F5A8u;
            // 0x42f5a8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x42F5ACu;
        goto label_42f5ac;
    }
    ctx->pc = 0x42F5A4u;
    SET_GPR_U32(ctx, 31, 0x42F5ACu);
    ctx->pc = 0x42F5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F5A4u;
            // 0x42f5a8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F5ACu; }
        if (ctx->pc != 0x42F5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F5ACu; }
        if (ctx->pc != 0x42F5ACu) { return; }
    }
    ctx->pc = 0x42F5ACu;
label_42f5ac:
    // 0x42f5ac: 0xc0cac84  jal         func_32B210
label_42f5b0:
    if (ctx->pc == 0x42F5B0u) {
        ctx->pc = 0x42F5B0u;
            // 0x42f5b0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x42F5B4u;
        goto label_42f5b4;
    }
    ctx->pc = 0x42F5ACu;
    SET_GPR_U32(ctx, 31, 0x42F5B4u);
    ctx->pc = 0x42F5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F5ACu;
            // 0x42f5b0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F5B4u; }
        if (ctx->pc != 0x42F5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F5B4u; }
        if (ctx->pc != 0x42F5B4u) { return; }
    }
    ctx->pc = 0x42F5B4u;
label_42f5b4:
    // 0x42f5b4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x42f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_42f5b8:
    // 0x42f5b8: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x42f5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_42f5bc:
    // 0x42f5bc: 0xc44dc910  lwc1        $f13, -0x36F0($v0)
    ctx->pc = 0x42f5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_42f5c0:
    // 0x42f5c0: 0xc0a562c  jal         func_2958B0
label_42f5c4:
    if (ctx->pc == 0x42F5C4u) {
        ctx->pc = 0x42F5C4u;
            // 0x42f5c4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x42F5C8u;
        goto label_42f5c8;
    }
    ctx->pc = 0x42F5C0u;
    SET_GPR_U32(ctx, 31, 0x42F5C8u);
    ctx->pc = 0x42F5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F5C0u;
            // 0x42f5c4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F5C8u; }
        if (ctx->pc != 0x42F5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F5C8u; }
        if (ctx->pc != 0x42F5C8u) { return; }
    }
    ctx->pc = 0x42F5C8u;
label_42f5c8:
    // 0x42f5c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42f5cc:
    // 0x42f5cc: 0x3c0b42c8  lui         $t3, 0x42C8
    ctx->pc = 0x42f5ccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17096 << 16));
label_42f5d0:
    // 0x42f5d0: 0x8c436ed8  lw          $v1, 0x6ED8($v0)
    ctx->pc = 0x42f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28376)));
label_42f5d4:
    // 0x42f5d4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x42f5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42f5d8:
    // 0x42f5d8: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x42f5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42f5dc:
    // 0x42f5dc: 0x3c0a43fa  lui         $t2, 0x43FA
    ctx->pc = 0x42f5dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17402 << 16));
label_42f5e0:
    // 0x42f5e0: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x42f5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42f5e4:
    // 0x42f5e4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x42f5e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42f5e8:
    // 0x42f5e8: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x42f5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_42f5ec:
    // 0x42f5ec: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x42f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_42f5f0:
    // 0x42f5f0: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x42f5f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_42f5f4:
    // 0x42f5f4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x42f5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_42f5f8:
    // 0x42f5f8: 0xc7a60080  lwc1        $f6, 0x80($sp)
    ctx->pc = 0x42f5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_42f5fc:
    // 0x42f5fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42f600:
    // 0x42f600: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x42f600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
label_42f604:
    // 0x42f604: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x42f604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_42f608:
    // 0x42f608: 0xc6290018  lwc1        $f9, 0x18($s1)
    ctx->pc = 0x42f608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_42f60c:
    // 0x42f60c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x42f60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_42f610:
    // 0x42f610: 0xc6280014  lwc1        $f8, 0x14($s1)
    ctx->pc = 0x42f610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_42f614:
    // 0x42f614: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x42f614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_42f618:
    // 0x42f618: 0xc6270010  lwc1        $f7, 0x10($s1)
    ctx->pc = 0x42f618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_42f61c:
    // 0x42f61c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x42f61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_42f620:
    // 0x42f620: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x42f620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_42f624:
    // 0x42f624: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x42f624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_42f628:
    // 0x42f628: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x42f628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_42f62c:
    // 0x42f62c: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x42f62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_42f630:
    // 0x42f630: 0xafab0158  sw          $t3, 0x158($sp)
    ctx->pc = 0x42f630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 11));
label_42f634:
    // 0x42f634: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x42f634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42f638:
    // 0x42f638: 0xafaa0154  sw          $t2, 0x154($sp)
    ctx->pc = 0x42f638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 10));
label_42f63c:
    // 0x42f63c: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x42f63cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_42f640:
    // 0x42f640: 0xa3a90160  sb          $t1, 0x160($sp)
    ctx->pc = 0x42f640u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 352), (uint8_t)GPR_U32(ctx, 9));
label_42f644:
    // 0x42f644: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x42f644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_42f648:
    // 0x42f648: 0xafa8015c  sw          $t0, 0x15C($sp)
    ctx->pc = 0x42f648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 8));
label_42f64c:
    // 0x42f64c: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x42f64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_42f650:
    // 0x42f650: 0xa3a70162  sb          $a3, 0x162($sp)
    ctx->pc = 0x42f650u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 354), (uint8_t)GPR_U32(ctx, 7));
label_42f654:
    // 0x42f654: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x42f654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42f658:
    // 0x42f658: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x42f658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_42f65c:
    // 0x42f65c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x42f65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42f660:
    // 0x42f660: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x42f660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_42f664:
    // 0x42f664: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x42f664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42f668:
    // 0x42f668: 0xe7a2011c  swc1        $f2, 0x11C($sp)
    ctx->pc = 0x42f668u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_42f66c:
    // 0x42f66c: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x42f66cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_42f670:
    // 0x42f670: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x42f670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_42f674:
    // 0x42f674: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x42f674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42f678:
    // 0x42f678: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x42f678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42f67c:
    // 0x42f67c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x42f67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42f680:
    // 0x42f680: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x42f680u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_42f684:
    // 0x42f684: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x42f684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_42f688:
    // 0x42f688: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x42f688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_42f68c:
    // 0x42f68c: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x42f68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42f690:
    // 0x42f690: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x42f690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42f694:
    // 0x42f694: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x42f694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42f698:
    // 0x42f698: 0xe7a700c0  swc1        $f7, 0xC0($sp)
    ctx->pc = 0x42f698u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_42f69c:
    // 0x42f69c: 0xe7a800c4  swc1        $f8, 0xC4($sp)
    ctx->pc = 0x42f69cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_42f6a0:
    // 0x42f6a0: 0xe7a900c8  swc1        $f9, 0xC8($sp)
    ctx->pc = 0x42f6a0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_42f6a4:
    // 0x42f6a4: 0xe7a60100  swc1        $f6, 0x100($sp)
    ctx->pc = 0x42f6a4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_42f6a8:
    // 0x42f6a8: 0xe7a50104  swc1        $f5, 0x104($sp)
    ctx->pc = 0x42f6a8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_42f6ac:
    // 0x42f6ac: 0xe7a40108  swc1        $f4, 0x108($sp)
    ctx->pc = 0x42f6acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_42f6b0:
    // 0x42f6b0: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x42f6b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_42f6b4:
    // 0x42f6b4: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x42f6b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_42f6b8:
    // 0x42f6b8: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x42f6b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_42f6bc:
    // 0x42f6bc: 0xc0a7a88  jal         func_29EA20
label_42f6c0:
    if (ctx->pc == 0x42F6C0u) {
        ctx->pc = 0x42F6C0u;
            // 0x42f6c0: 0xe7a00140  swc1        $f0, 0x140($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->pc = 0x42F6C4u;
        goto label_42f6c4;
    }
    ctx->pc = 0x42F6BCu;
    SET_GPR_U32(ctx, 31, 0x42F6C4u);
    ctx->pc = 0x42F6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F6BCu;
            // 0x42f6c0: 0xe7a00140  swc1        $f0, 0x140($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F6C4u; }
        if (ctx->pc != 0x42F6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F6C4u; }
        if (ctx->pc != 0x42F6C4u) { return; }
    }
    ctx->pc = 0x42F6C4u;
label_42f6c4:
    // 0x42f6c4: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x42f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_42f6c8:
    // 0x42f6c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42f6c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42f6cc:
    // 0x42f6cc: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_42f6d0:
    if (ctx->pc == 0x42F6D0u) {
        ctx->pc = 0x42F6D0u;
            // 0x42f6d0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x42F6D4u;
        goto label_42f6d4;
    }
    ctx->pc = 0x42F6CCu;
    {
        const bool branch_taken_0x42f6cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42F6CCu;
            // 0x42f6d0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f6cc) {
            ctx->pc = 0x42F71Cu;
            goto label_42f71c;
        }
    }
    ctx->pc = 0x42F6D4u;
label_42f6d4:
    // 0x42f6d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42f6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42f6d8:
    // 0x42f6d8: 0xc088ef4  jal         func_223BD0
label_42f6dc:
    if (ctx->pc == 0x42F6DCu) {
        ctx->pc = 0x42F6DCu;
            // 0x42f6dc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x42F6E0u;
        goto label_42f6e0;
    }
    ctx->pc = 0x42F6D8u;
    SET_GPR_U32(ctx, 31, 0x42F6E0u);
    ctx->pc = 0x42F6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F6D8u;
            // 0x42f6dc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F6E0u; }
        if (ctx->pc != 0x42F6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F6E0u; }
        if (ctx->pc != 0x42F6E0u) { return; }
    }
    ctx->pc = 0x42F6E0u;
label_42f6e0:
    // 0x42f6e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42f6e4:
    // 0x42f6e4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x42f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_42f6e8:
    // 0x42f6e8: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x42f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_42f6ec:
    // 0x42f6ec: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x42f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_42f6f0:
    // 0x42f6f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x42f6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_42f6f4:
    // 0x42f6f4: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x42f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_42f6f8:
    // 0x42f6f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42f6fc:
    // 0x42f6fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_42f700:
    // 0x42f700: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x42f700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_42f704:
    // 0x42f704: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x42f704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_42f708:
    // 0x42f708: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x42f708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_42f70c:
    // 0x42f70c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x42f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_42f710:
    // 0x42f710: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x42f710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_42f714:
    // 0x42f714: 0xc088b38  jal         func_222CE0
label_42f718:
    if (ctx->pc == 0x42F718u) {
        ctx->pc = 0x42F718u;
            // 0x42f718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42F71Cu;
        goto label_42f71c;
    }
    ctx->pc = 0x42F714u;
    SET_GPR_U32(ctx, 31, 0x42F71Cu);
    ctx->pc = 0x42F718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F714u;
            // 0x42f718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F71Cu; }
        if (ctx->pc != 0x42F71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F71Cu; }
        if (ctx->pc != 0x42F71Cu) { return; }
    }
    ctx->pc = 0x42F71Cu;
label_42f71c:
    // 0x42f71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42f71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42f720:
    // 0x42f720: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x42f720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_42f724:
    // 0x42f724: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42f724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42f728:
    // 0x42f728: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42f728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42f72c:
    // 0x42f72c: 0xc08914c  jal         func_224530
label_42f730:
    if (ctx->pc == 0x42F730u) {
        ctx->pc = 0x42F730u;
            // 0x42f730: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x42F734u;
        goto label_42f734;
    }
    ctx->pc = 0x42F72Cu;
    SET_GPR_U32(ctx, 31, 0x42F734u);
    ctx->pc = 0x42F730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F72Cu;
            // 0x42f730: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F734u; }
        if (ctx->pc != 0x42F734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F734u; }
        if (ctx->pc != 0x42F734u) { return; }
    }
    ctx->pc = 0x42F734u;
label_42f734:
    // 0x42f734: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x42f734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42f738:
    // 0x42f738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42f738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42f73c:
    // 0x42f73c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x42f73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42f740:
    // 0x42f740: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x42f740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_42f744:
    // 0x42f744: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x42f744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42f748:
    // 0x42f748: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x42f748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_42f74c:
    // 0x42f74c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x42f74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_42f750:
    // 0x42f750: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x42f750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_42f754:
    // 0x42f754: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x42f754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_42f758:
    // 0x42f758: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x42f758u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_42f75c:
    // 0x42f75c: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x42f75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_42f760:
    // 0x42f760: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x42f760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42f764:
    // 0x42f764: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x42f764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42f768:
    // 0x42f768: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x42f768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42f76c:
    // 0x42f76c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x42f76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_42f770:
    // 0x42f770: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x42f770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_42f774:
    // 0x42f774: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x42f774u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_42f778:
    // 0x42f778: 0xc0892b0  jal         func_224AC0
label_42f77c:
    if (ctx->pc == 0x42F77Cu) {
        ctx->pc = 0x42F77Cu;
            // 0x42f77c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x42F780u;
        goto label_42f780;
    }
    ctx->pc = 0x42F778u;
    SET_GPR_U32(ctx, 31, 0x42F780u);
    ctx->pc = 0x42F77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F778u;
            // 0x42f77c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F780u; }
        if (ctx->pc != 0x42F780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F780u; }
        if (ctx->pc != 0x42F780u) { return; }
    }
    ctx->pc = 0x42F780u;
label_42f780:
    // 0x42f780: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42f780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42f784:
    // 0x42f784: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42f784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42f788:
    // 0x42f788: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x42f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_42f78c:
    // 0x42f78c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42f78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42f790:
    // 0x42f790: 0xc08c164  jal         func_230590
label_42f794:
    if (ctx->pc == 0x42F794u) {
        ctx->pc = 0x42F794u;
            // 0x42f794: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42F798u;
        goto label_42f798;
    }
    ctx->pc = 0x42F790u;
    SET_GPR_U32(ctx, 31, 0x42F798u);
    ctx->pc = 0x42F794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F790u;
            // 0x42f794: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F798u; }
        if (ctx->pc != 0x42F798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F798u; }
        if (ctx->pc != 0x42F798u) { return; }
    }
    ctx->pc = 0x42F798u;
label_42f798:
    // 0x42f798: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x42f798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_42f79c:
    // 0x42f79c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42f7a0:
    // 0x42f7a0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x42f7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_42f7a4:
    // 0x42f7a4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x42f7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_42f7a8:
    // 0x42f7a8: 0xc0a7a88  jal         func_29EA20
label_42f7ac:
    if (ctx->pc == 0x42F7ACu) {
        ctx->pc = 0x42F7ACu;
            // 0x42f7ac: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x42F7B0u;
        goto label_42f7b0;
    }
    ctx->pc = 0x42F7A8u;
    SET_GPR_U32(ctx, 31, 0x42F7B0u);
    ctx->pc = 0x42F7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F7A8u;
            // 0x42f7ac: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F7B0u; }
        if (ctx->pc != 0x42F7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F7B0u; }
        if (ctx->pc != 0x42F7B0u) { return; }
    }
    ctx->pc = 0x42F7B0u;
label_42f7b0:
    // 0x42f7b0: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x42f7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_42f7b4:
    // 0x42f7b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x42f7b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42f7b8:
    // 0x42f7b8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_42f7bc:
    if (ctx->pc == 0x42F7BCu) {
        ctx->pc = 0x42F7BCu;
            // 0x42f7bc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x42F7C0u;
        goto label_42f7c0;
    }
    ctx->pc = 0x42F7B8u;
    {
        const bool branch_taken_0x42f7b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x42F7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42F7B8u;
            // 0x42f7bc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f7b8) {
            ctx->pc = 0x42F7DCu;
            goto label_42f7dc;
        }
    }
    ctx->pc = 0x42F7C0u;
label_42f7c0:
    // 0x42f7c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x42f7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42f7c4:
    // 0x42f7c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42f7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42f7c8:
    // 0x42f7c8: 0xc0869d0  jal         func_21A740
label_42f7cc:
    if (ctx->pc == 0x42F7CCu) {
        ctx->pc = 0x42F7CCu;
            // 0x42f7cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42F7D0u;
        goto label_42f7d0;
    }
    ctx->pc = 0x42F7C8u;
    SET_GPR_U32(ctx, 31, 0x42F7D0u);
    ctx->pc = 0x42F7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F7C8u;
            // 0x42f7cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F7D0u; }
        if (ctx->pc != 0x42F7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F7D0u; }
        if (ctx->pc != 0x42F7D0u) { return; }
    }
    ctx->pc = 0x42F7D0u;
label_42f7d0:
    // 0x42f7d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x42f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_42f7d4:
    // 0x42f7d4: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x42f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_42f7d8:
    // 0x42f7d8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x42f7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_42f7dc:
    // 0x42f7dc: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x42f7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_42f7e0:
    // 0x42f7e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42f7e4:
    // 0x42f7e4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x42f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_42f7e8:
    // 0x42f7e8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42f7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42f7ec:
    // 0x42f7ec: 0xc08c650  jal         func_231940
label_42f7f0:
    if (ctx->pc == 0x42F7F0u) {
        ctx->pc = 0x42F7F0u;
            // 0x42f7f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42F7F4u;
        goto label_42f7f4;
    }
    ctx->pc = 0x42F7ECu;
    SET_GPR_U32(ctx, 31, 0x42F7F4u);
    ctx->pc = 0x42F7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F7ECu;
            // 0x42f7f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F7F4u; }
        if (ctx->pc != 0x42F7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F7F4u; }
        if (ctx->pc != 0x42F7F4u) { return; }
    }
    ctx->pc = 0x42F7F4u;
label_42f7f4:
    // 0x42f7f4: 0xc040180  jal         func_100600
label_42f7f8:
    if (ctx->pc == 0x42F7F8u) {
        ctx->pc = 0x42F7F8u;
            // 0x42f7f8: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x42F7FCu;
        goto label_42f7fc;
    }
    ctx->pc = 0x42F7F4u;
    SET_GPR_U32(ctx, 31, 0x42F7FCu);
    ctx->pc = 0x42F7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F7F4u;
            // 0x42f7f8: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F7FCu; }
        if (ctx->pc != 0x42F7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F7FCu; }
        if (ctx->pc != 0x42F7FCu) { return; }
    }
    ctx->pc = 0x42F7FCu;
label_42f7fc:
    // 0x42f7fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42f7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42f800:
    // 0x42f800: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_42f804:
    if (ctx->pc == 0x42F804u) {
        ctx->pc = 0x42F808u;
        goto label_42f808;
    }
    ctx->pc = 0x42F800u;
    {
        const bool branch_taken_0x42f800 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x42f800) {
            ctx->pc = 0x42F880u;
            goto label_42f880;
        }
    }
    ctx->pc = 0x42F808u;
label_42f808:
    // 0x42f808: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x42f808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_42f80c:
    // 0x42f80c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x42f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_42f810:
    // 0x42f810: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x42f810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_42f814:
    // 0x42f814: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x42f814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_42f818:
    // 0x42f818: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x42f818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_42f81c:
    // 0x42f81c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x42f81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_42f820:
    // 0x42f820: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x42f820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_42f824:
    // 0x42f824: 0xc040138  jal         func_1004E0
label_42f828:
    if (ctx->pc == 0x42F828u) {
        ctx->pc = 0x42F828u;
            // 0x42f828: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x42F82Cu;
        goto label_42f82c;
    }
    ctx->pc = 0x42F824u;
    SET_GPR_U32(ctx, 31, 0x42F82Cu);
    ctx->pc = 0x42F828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F824u;
            // 0x42f828: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F82Cu; }
        if (ctx->pc != 0x42F82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F82Cu; }
        if (ctx->pc != 0x42F82Cu) { return; }
    }
    ctx->pc = 0x42F82Cu;
label_42f82c:
    // 0x42f82c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x42f82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_42f830:
    // 0x42f830: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x42f830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42f834:
    // 0x42f834: 0xc040138  jal         func_1004E0
label_42f838:
    if (ctx->pc == 0x42F838u) {
        ctx->pc = 0x42F838u;
            // 0x42f838: 0x240401f0  addiu       $a0, $zero, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
        ctx->pc = 0x42F83Cu;
        goto label_42f83c;
    }
    ctx->pc = 0x42F834u;
    SET_GPR_U32(ctx, 31, 0x42F83Cu);
    ctx->pc = 0x42F838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F834u;
            // 0x42f838: 0x240401f0  addiu       $a0, $zero, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F83Cu; }
        if (ctx->pc != 0x42F83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F83Cu; }
        if (ctx->pc != 0x42F83Cu) { return; }
    }
    ctx->pc = 0x42F83Cu;
label_42f83c:
    // 0x42f83c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x42f83cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_42f840:
    // 0x42f840: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x42f840u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_42f844:
    // 0x42f844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42f844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42f848:
    // 0x42f848: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x42f848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_42f84c:
    // 0x42f84c: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x42f84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_42f850:
    // 0x42f850: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x42f850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_42f854:
    // 0x42f854: 0xc040840  jal         func_102100
label_42f858:
    if (ctx->pc == 0x42F858u) {
        ctx->pc = 0x42F858u;
            // 0x42f858: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x42F85Cu;
        goto label_42f85c;
    }
    ctx->pc = 0x42F854u;
    SET_GPR_U32(ctx, 31, 0x42F85Cu);
    ctx->pc = 0x42F858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F854u;
            // 0x42f858: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F85Cu; }
        if (ctx->pc != 0x42F85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F85Cu; }
        if (ctx->pc != 0x42F85Cu) { return; }
    }
    ctx->pc = 0x42F85Cu;
label_42f85c:
    // 0x42f85c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x42f85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_42f860:
    // 0x42f860: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x42f860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42f864:
    // 0x42f864: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x42f864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_42f868:
    // 0x42f868: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x42f868u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_42f86c:
    // 0x42f86c: 0x28830005  slti        $v1, $a0, 0x5
    ctx->pc = 0x42f86cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_42f870:
    // 0x42f870: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x42f870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_42f874:
    // 0x42f874: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x42f874u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_42f878:
    // 0x42f878: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_42f87c:
    if (ctx->pc == 0x42F87Cu) {
        ctx->pc = 0x42F880u;
        goto label_42f880;
    }
    ctx->pc = 0x42F878u;
    {
        const bool branch_taken_0x42f878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x42f878) {
            ctx->pc = 0x42F864u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42f864;
        }
    }
    ctx->pc = 0x42F880u;
label_42f880:
    // 0x42f880: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x42f880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_42f884:
    // 0x42f884: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x42f884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42f888:
    // 0x42f888: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x42f888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_42f88c:
    // 0x42f88c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x42f88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42f890:
    // 0x42f890: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x42f890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42f894:
    // 0x42f894: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42f894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42f898:
    // 0x42f898: 0xc0e7d2c  jal         func_39F4B0
label_42f89c:
    if (ctx->pc == 0x42F89Cu) {
        ctx->pc = 0x42F89Cu;
            // 0x42f89c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42F8A0u;
        goto label_42f8a0;
    }
    ctx->pc = 0x42F898u;
    SET_GPR_U32(ctx, 31, 0x42F8A0u);
    ctx->pc = 0x42F89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F898u;
            // 0x42f89c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F8A0u; }
        if (ctx->pc != 0x42F8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F8A0u; }
        if (ctx->pc != 0x42F8A0u) { return; }
    }
    ctx->pc = 0x42F8A0u;
label_42f8a0:
    // 0x42f8a0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x42f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_42f8a4:
    // 0x42f8a4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x42f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_42f8a8:
    // 0x42f8a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x42f8a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42f8ac:
    // 0x42f8ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x42f8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_42f8b0:
    // 0x42f8b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x42f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42f8b4:
    // 0x42f8b4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x42f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_42f8b8:
    // 0x42f8b8: 0xc0e7d2c  jal         func_39F4B0
label_42f8bc:
    if (ctx->pc == 0x42F8BCu) {
        ctx->pc = 0x42F8BCu;
            // 0x42f8bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42F8C0u;
        goto label_42f8c0;
    }
    ctx->pc = 0x42F8B8u;
    SET_GPR_U32(ctx, 31, 0x42F8C0u);
    ctx->pc = 0x42F8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F8B8u;
            // 0x42f8bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F8C0u; }
        if (ctx->pc != 0x42F8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F8C0u; }
        if (ctx->pc != 0x42F8C0u) { return; }
    }
    ctx->pc = 0x42F8C0u;
label_42f8c0:
    // 0x42f8c0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x42f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_42f8c4:
    // 0x42f8c4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x42f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_42f8c8:
    // 0x42f8c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x42f8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42f8cc:
    // 0x42f8cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x42f8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42f8d0:
    // 0x42f8d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x42f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42f8d4:
    // 0x42f8d4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x42f8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_42f8d8:
    // 0x42f8d8: 0xc0e7d2c  jal         func_39F4B0
label_42f8dc:
    if (ctx->pc == 0x42F8DCu) {
        ctx->pc = 0x42F8DCu;
            // 0x42f8dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42F8E0u;
        goto label_42f8e0;
    }
    ctx->pc = 0x42F8D8u;
    SET_GPR_U32(ctx, 31, 0x42F8E0u);
    ctx->pc = 0x42F8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F8D8u;
            // 0x42f8dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F8E0u; }
        if (ctx->pc != 0x42F8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F8E0u; }
        if (ctx->pc != 0x42F8E0u) { return; }
    }
    ctx->pc = 0x42F8E0u;
label_42f8e0:
    // 0x42f8e0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x42f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_42f8e4:
    // 0x42f8e4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x42f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_42f8e8:
    // 0x42f8e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x42f8e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42f8ec:
    // 0x42f8ec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x42f8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_42f8f0:
    // 0x42f8f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x42f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42f8f4:
    // 0x42f8f4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x42f8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_42f8f8:
    // 0x42f8f8: 0xc0e7d2c  jal         func_39F4B0
label_42f8fc:
    if (ctx->pc == 0x42F8FCu) {
        ctx->pc = 0x42F8FCu;
            // 0x42f8fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42F900u;
        goto label_42f900;
    }
    ctx->pc = 0x42F8F8u;
    SET_GPR_U32(ctx, 31, 0x42F900u);
    ctx->pc = 0x42F8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F8F8u;
            // 0x42f8fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F900u; }
        if (ctx->pc != 0x42F900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F900u; }
        if (ctx->pc != 0x42F900u) { return; }
    }
    ctx->pc = 0x42F900u;
label_42f900:
    // 0x42f900: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x42f900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_42f904:
    // 0x42f904: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x42f904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_42f908:
    // 0x42f908: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x42f908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42f90c:
    // 0x42f90c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x42f90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_42f910:
    // 0x42f910: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x42f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42f914:
    // 0x42f914: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x42f914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_42f918:
    // 0x42f918: 0xc0e7d2c  jal         func_39F4B0
label_42f91c:
    if (ctx->pc == 0x42F91Cu) {
        ctx->pc = 0x42F91Cu;
            // 0x42f91c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42F920u;
        goto label_42f920;
    }
    ctx->pc = 0x42F918u;
    SET_GPR_U32(ctx, 31, 0x42F920u);
    ctx->pc = 0x42F91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F918u;
            // 0x42f91c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F920u; }
        if (ctx->pc != 0x42F920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F920u; }
        if (ctx->pc != 0x42F920u) { return; }
    }
    ctx->pc = 0x42F920u;
label_42f920:
    // 0x42f920: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x42f920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_42f924:
    // 0x42f924: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x42f924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_42f928:
    // 0x42f928: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x42f928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42f92c:
    // 0x42f92c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x42f92cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_42f930:
    // 0x42f930: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x42f930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42f934:
    // 0x42f934: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x42f934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
label_42f938:
    // 0x42f938: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x42f938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_42f93c:
    // 0x42f93c: 0x34880008  ori         $t0, $a0, 0x8
    ctx->pc = 0x42f93cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_42f940:
    // 0x42f940: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x42f940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_42f944:
    // 0x42f944: 0xae2800b0  sw          $t0, 0xB0($s1)
    ctx->pc = 0x42f944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 8));
label_42f948:
    // 0x42f948: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x42f948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_42f94c:
    // 0x42f94c: 0xa2270064  sb          $a3, 0x64($s1)
    ctx->pc = 0x42f94cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 7));
label_42f950:
    // 0x42f950: 0xa2260065  sb          $a2, 0x65($s1)
    ctx->pc = 0x42f950u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 6));
label_42f954:
    // 0x42f954: 0xae25008c  sw          $a1, 0x8C($s1)
    ctx->pc = 0x42f954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 5));
label_42f958:
    // 0x42f958: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x42f958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_42f95c:
    // 0x42f95c: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x42f95cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
label_42f960:
    // 0x42f960: 0xc040180  jal         func_100600
label_42f964:
    if (ctx->pc == 0x42F964u) {
        ctx->pc = 0x42F964u;
            // 0x42f964: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x42F968u;
        goto label_42f968;
    }
    ctx->pc = 0x42F960u;
    SET_GPR_U32(ctx, 31, 0x42F968u);
    ctx->pc = 0x42F964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F960u;
            // 0x42f964: 0xae220080  sw          $v0, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F968u; }
        if (ctx->pc != 0x42F968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F968u; }
        if (ctx->pc != 0x42F968u) { return; }
    }
    ctx->pc = 0x42F968u;
label_42f968:
    // 0x42f968: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42f968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42f96c:
    // 0x42f96c: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_42f970:
    if (ctx->pc == 0x42F970u) {
        ctx->pc = 0x42F970u;
            // 0x42f970: 0x3c024845  lui         $v0, 0x4845 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18501 << 16));
        ctx->pc = 0x42F974u;
        goto label_42f974;
    }
    ctx->pc = 0x42F96Cu;
    {
        const bool branch_taken_0x42f96c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x42f96c) {
            ctx->pc = 0x42F970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42F96Cu;
            // 0x42f970: 0x3c024845  lui         $v0, 0x4845 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18501 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42F9ACu;
            goto label_42f9ac;
        }
    }
    ctx->pc = 0x42F974u;
label_42f974:
    // 0x42f974: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x42f974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_42f978:
    // 0x42f978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42f978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42f97c:
    // 0x42f97c: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x42f97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_42f980:
    // 0x42f980: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x42f980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_42f984:
    // 0x42f984: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42f984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_42f988:
    // 0x42f988: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x42f988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_42f98c:
    // 0x42f98c: 0xc040138  jal         func_1004E0
label_42f990:
    if (ctx->pc == 0x42F990u) {
        ctx->pc = 0x42F990u;
            // 0x42f990: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x42F994u;
        goto label_42f994;
    }
    ctx->pc = 0x42F98Cu;
    SET_GPR_U32(ctx, 31, 0x42F994u);
    ctx->pc = 0x42F990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F98Cu;
            // 0x42f990: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F994u; }
        if (ctx->pc != 0x42F994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F994u; }
        if (ctx->pc != 0x42F994u) { return; }
    }
    ctx->pc = 0x42F994u;
label_42f994:
    // 0x42f994: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x42f994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_42f998:
    // 0x42f998: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x42f998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_42f99c:
    // 0x42f99c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42f99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42f9a0:
    // 0x42f9a0: 0xc04a576  jal         func_1295D8
label_42f9a4:
    if (ctx->pc == 0x42F9A4u) {
        ctx->pc = 0x42F9A4u;
            // 0x42f9a4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x42F9A8u;
        goto label_42f9a8;
    }
    ctx->pc = 0x42F9A0u;
    SET_GPR_U32(ctx, 31, 0x42F9A8u);
    ctx->pc = 0x42F9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F9A0u;
            // 0x42f9a4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F9A8u; }
        if (ctx->pc != 0x42F9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F9A8u; }
        if (ctx->pc != 0x42F9A8u) { return; }
    }
    ctx->pc = 0x42F9A8u;
label_42f9a8:
    // 0x42f9a8: 0x3c024845  lui         $v0, 0x4845
    ctx->pc = 0x42f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18501 << 16));
label_42f9ac:
    // 0x42f9ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x42f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_42f9b0:
    // 0x42f9b0: 0x3442c100  ori         $v0, $v0, 0xC100
    ctx->pc = 0x42f9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49408);
label_42f9b4:
    // 0x42f9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42f9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42f9b8:
    // 0x42f9b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x42f9b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42f9bc:
    // 0x42f9bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42f9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42f9c0:
    // 0x42f9c0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x42f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_42f9c4:
    // 0x42f9c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42f9c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42f9c8:
    // 0x42f9c8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x42f9c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_42f9cc:
    // 0x42f9cc: 0x344601ae  ori         $a2, $v0, 0x1AE
    ctx->pc = 0x42f9ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
label_42f9d0:
    // 0x42f9d0: 0xc122cd8  jal         func_48B360
label_42f9d4:
    if (ctx->pc == 0x42F9D4u) {
        ctx->pc = 0x42F9D4u;
            // 0x42f9d4: 0xae3000d0  sw          $s0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 16));
        ctx->pc = 0x42F9D8u;
        goto label_42f9d8;
    }
    ctx->pc = 0x42F9D0u;
    SET_GPR_U32(ctx, 31, 0x42F9D8u);
    ctx->pc = 0x42F9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F9D0u;
            // 0x42f9d4: 0xae3000d0  sw          $s0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F9D8u; }
        if (ctx->pc != 0x42F9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42F9D8u; }
        if (ctx->pc != 0x42F9D8u) { return; }
    }
    ctx->pc = 0x42F9D8u;
label_42f9d8:
    // 0x42f9d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x42f9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_42f9dc:
    // 0x42f9dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42f9dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42f9e0:
    // 0x42f9e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42f9e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42f9e4:
    // 0x42f9e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42f9e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42f9e8:
    // 0x42f9e8: 0x3e00008  jr          $ra
label_42f9ec:
    if (ctx->pc == 0x42F9ECu) {
        ctx->pc = 0x42F9ECu;
            // 0x42f9ec: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x42F9F0u;
        goto label_42f9f0;
    }
    ctx->pc = 0x42F9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42F9E8u;
            // 0x42f9ec: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42F9F0u;
label_42f9f0:
    // 0x42f9f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42f9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_42f9f4:
    // 0x42f9f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42f9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42f9f8:
    // 0x42f9f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42f9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42f9fc:
    // 0x42f9fc: 0xc0e3580  jal         func_38D600
label_42fa00:
    if (ctx->pc == 0x42FA00u) {
        ctx->pc = 0x42FA00u;
            // 0x42fa00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42FA04u;
        goto label_42fa04;
    }
    ctx->pc = 0x42F9FCu;
    SET_GPR_U32(ctx, 31, 0x42FA04u);
    ctx->pc = 0x42FA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42F9FCu;
            // 0x42fa00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FA04u; }
        if (ctx->pc != 0x42FA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FA04u; }
        if (ctx->pc != 0x42FA04u) { return; }
    }
    ctx->pc = 0x42FA04u;
label_42fa04:
    // 0x42fa04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42fa08:
    // 0x42fa08: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x42fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
label_42fa0c:
    // 0x42fa0c: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x42fa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_42fa10:
    // 0x42fa10: 0x2405f9ff  addiu       $a1, $zero, -0x601
    ctx->pc = 0x42fa10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_42fa14:
    // 0x42fa14: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x42fa14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_42fa18:
    // 0x42fa18: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x42fa18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
label_42fa1c:
    // 0x42fa1c: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x42fa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_42fa20:
    // 0x42fa20: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x42fa20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_42fa24:
    // 0x42fa24: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x42fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42fa28:
    // 0x42fa28: 0x8e0600b0  lw          $a2, 0xB0($s0)
    ctx->pc = 0x42fa28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_42fa2c:
    // 0x42fa2c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x42fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_42fa30:
    // 0x42fa30: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x42fa30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_42fa34:
    // 0x42fa34: 0x34a50600  ori         $a1, $a1, 0x600
    ctx->pc = 0x42fa34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1536);
label_42fa38:
    // 0x42fa38: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x42fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_42fa3c:
    // 0x42fa3c: 0xa2040064  sb          $a0, 0x64($s0)
    ctx->pc = 0x42fa3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 4));
label_42fa40:
    // 0x42fa40: 0xa2030065  sb          $v1, 0x65($s0)
    ctx->pc = 0x42fa40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 3));
label_42fa44:
    // 0x42fa44: 0xa2030066  sb          $v1, 0x66($s0)
    ctx->pc = 0x42fa44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 3));
label_42fa48:
    // 0x42fa48: 0xa2030067  sb          $v1, 0x67($s0)
    ctx->pc = 0x42fa48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 3));
label_42fa4c:
    // 0x42fa4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42fa4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42fa50:
    // 0x42fa50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42fa50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42fa54:
    // 0x42fa54: 0x3e00008  jr          $ra
label_42fa58:
    if (ctx->pc == 0x42FA58u) {
        ctx->pc = 0x42FA58u;
            // 0x42fa58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x42FA5Cu;
        goto label_42fa5c;
    }
    ctx->pc = 0x42FA54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42FA54u;
            // 0x42fa58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42FA5Cu;
label_42fa5c:
    // 0x42fa5c: 0x0  nop
    ctx->pc = 0x42fa5cu;
    // NOP
label_42fa60:
    // 0x42fa60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42fa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_42fa64:
    // 0x42fa64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42fa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_42fa68:
    // 0x42fa68: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x42fa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_42fa6c:
    // 0x42fa6c: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x42fa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_42fa70:
    // 0x42fa70: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x42fa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_42fa74:
    // 0x42fa74: 0xc04cbd8  jal         func_132F60
label_42fa78:
    if (ctx->pc == 0x42FA78u) {
        ctx->pc = 0x42FA78u;
            // 0x42fa78: 0x24840150  addiu       $a0, $a0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
        ctx->pc = 0x42FA7Cu;
        goto label_42fa7c;
    }
    ctx->pc = 0x42FA74u;
    SET_GPR_U32(ctx, 31, 0x42FA7Cu);
    ctx->pc = 0x42FA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FA74u;
            // 0x42fa78: 0x24840150  addiu       $a0, $a0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FA7Cu; }
        if (ctx->pc != 0x42FA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FA7Cu; }
        if (ctx->pc != 0x42FA7Cu) { return; }
    }
    ctx->pc = 0x42FA7Cu;
label_42fa7c:
    // 0x42fa7c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x42fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_42fa80:
    // 0x42fa80: 0xc073234  jal         func_1CC8D0
label_42fa84:
    if (ctx->pc == 0x42FA84u) {
        ctx->pc = 0x42FA84u;
            // 0x42fa84: 0x344418a9  ori         $a0, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->pc = 0x42FA88u;
        goto label_42fa88;
    }
    ctx->pc = 0x42FA80u;
    SET_GPR_U32(ctx, 31, 0x42FA88u);
    ctx->pc = 0x42FA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FA80u;
            // 0x42fa84: 0x344418a9  ori         $a0, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FA88u; }
        if (ctx->pc != 0x42FA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FA88u; }
        if (ctx->pc != 0x42FA88u) { return; }
    }
    ctx->pc = 0x42FA88u;
label_42fa88:
    // 0x42fa88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42fa88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42fa8c:
    // 0x42fa8c: 0x3e00008  jr          $ra
label_42fa90:
    if (ctx->pc == 0x42FA90u) {
        ctx->pc = 0x42FA90u;
            // 0x42fa90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x42FA94u;
        goto label_42fa94;
    }
    ctx->pc = 0x42FA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42FA8Cu;
            // 0x42fa90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42FA94u;
label_42fa94:
    // 0x42fa94: 0x0  nop
    ctx->pc = 0x42fa94u;
    // NOP
label_42fa98:
    // 0x42fa98: 0x0  nop
    ctx->pc = 0x42fa98u;
    // NOP
label_42fa9c:
    // 0x42fa9c: 0x0  nop
    ctx->pc = 0x42fa9cu;
    // NOP
label_42faa0:
    // 0x42faa0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x42faa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_42faa4:
    // 0x42faa4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x42faa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_42faa8:
    // 0x42faa8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x42faa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_42faac:
    // 0x42faac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x42faacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_42fab0:
    // 0x42fab0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42fab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42fab4:
    // 0x42fab4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42fab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42fab8:
    // 0x42fab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42fab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42fabc:
    // 0x42fabc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42fabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42fac0:
    // 0x42fac0: 0x8c830180  lw          $v1, 0x180($a0)
    ctx->pc = 0x42fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
label_42fac4:
    // 0x42fac4: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
label_42fac8:
    if (ctx->pc == 0x42FAC8u) {
        ctx->pc = 0x42FAC8u;
            // 0x42fac8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42FACCu;
        goto label_42facc;
    }
    ctx->pc = 0x42FAC4u;
    {
        const bool branch_taken_0x42fac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42FAC4u;
            // 0x42fac8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fac4) {
            ctx->pc = 0x42FC6Cu;
            goto label_42fc6c;
        }
    }
    ctx->pc = 0x42FACCu;
label_42facc:
    // 0x42facc: 0x8ea200b4  lw          $v0, 0xB4($s5)
    ctx->pc = 0x42faccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 180)));
label_42fad0:
    // 0x42fad0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x42fad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42fad4:
    // 0x42fad4: 0x50450003  beql        $v0, $a1, . + 4 + (0x3 << 2)
label_42fad8:
    if (ctx->pc == 0x42FAD8u) {
        ctx->pc = 0x42FAD8u;
            // 0x42fad8: 0x26a40010  addiu       $a0, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x42FADCu;
        goto label_42fadc;
    }
    ctx->pc = 0x42FAD4u;
    {
        const bool branch_taken_0x42fad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x42fad4) {
            ctx->pc = 0x42FAD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42FAD4u;
            // 0x42fad8: 0x26a40010  addiu       $a0, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42FAE4u;
            goto label_42fae4;
        }
    }
    ctx->pc = 0x42FADCu;
label_42fadc:
    // 0x42fadc: 0x10000005  b           . + 4 + (0x5 << 2)
label_42fae0:
    if (ctx->pc == 0x42FAE0u) {
        ctx->pc = 0x42FAE0u;
            // 0x42fae0: 0x26a40110  addiu       $a0, $s5, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
        ctx->pc = 0x42FAE4u;
        goto label_42fae4;
    }
    ctx->pc = 0x42FADCu;
    {
        const bool branch_taken_0x42fadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42FADCu;
            // 0x42fae0: 0x26a40110  addiu       $a0, $s5, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fadc) {
            ctx->pc = 0x42FAF4u;
            goto label_42faf4;
        }
    }
    ctx->pc = 0x42FAE4u;
label_42fae4:
    // 0x42fae4: 0xc0ba938  jal         func_2EA4E0
label_42fae8:
    if (ctx->pc == 0x42FAE8u) {
        ctx->pc = 0x42FAECu;
        goto label_42faec;
    }
    ctx->pc = 0x42FAE4u;
    SET_GPR_U32(ctx, 31, 0x42FAECu);
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FAECu; }
        if (ctx->pc != 0x42FAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FAECu; }
        if (ctx->pc != 0x42FAECu) { return; }
    }
    ctx->pc = 0x42FAECu;
label_42faec:
    // 0x42faec: 0x10000020  b           . + 4 + (0x20 << 2)
label_42faf0:
    if (ctx->pc == 0x42FAF0u) {
        ctx->pc = 0x42FAF0u;
            // 0x42faf0: 0x8ea20180  lw          $v0, 0x180($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
        ctx->pc = 0x42FAF4u;
        goto label_42faf4;
    }
    ctx->pc = 0x42FAECu;
    {
        const bool branch_taken_0x42faec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42FAECu;
            // 0x42faf0: 0x8ea20180  lw          $v0, 0x180($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42faec) {
            ctx->pc = 0x42FB70u;
            goto label_42fb70;
        }
    }
    ctx->pc = 0x42FAF4u;
label_42faf4:
    // 0x42faf4: 0xc04f278  jal         func_13C9E0
label_42faf8:
    if (ctx->pc == 0x42FAF8u) {
        ctx->pc = 0x42FAF8u;
            // 0x42faf8: 0x26a50170  addiu       $a1, $s5, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 368));
        ctx->pc = 0x42FAFCu;
        goto label_42fafc;
    }
    ctx->pc = 0x42FAF4u;
    SET_GPR_U32(ctx, 31, 0x42FAFCu);
    ctx->pc = 0x42FAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FAF4u;
            // 0x42faf8: 0x26a50170  addiu       $a1, $s5, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FAFCu; }
        if (ctx->pc != 0x42FAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FAFCu; }
        if (ctx->pc != 0x42FAFCu) { return; }
    }
    ctx->pc = 0x42FAFCu;
label_42fafc:
    // 0x42fafc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x42fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_42fb00:
    // 0x42fb00: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x42fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_42fb04:
    // 0x42fb04: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x42fb04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42fb08:
    // 0x42fb08: 0x26a40110  addiu       $a0, $s5, 0x110
    ctx->pc = 0x42fb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
label_42fb0c:
    // 0x42fb0c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x42fb0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_42fb10:
    // 0x42fb10: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x42fb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42fb14:
    // 0x42fb14: 0xc04ce50  jal         func_133940
label_42fb18:
    if (ctx->pc == 0x42FB18u) {
        ctx->pc = 0x42FB18u;
            // 0x42fb18: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x42FB1Cu;
        goto label_42fb1c;
    }
    ctx->pc = 0x42FB14u;
    SET_GPR_U32(ctx, 31, 0x42FB1Cu);
    ctx->pc = 0x42FB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FB14u;
            // 0x42fb18: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FB1Cu; }
        if (ctx->pc != 0x42FB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FB1Cu; }
        if (ctx->pc != 0x42FB1Cu) { return; }
    }
    ctx->pc = 0x42FB1Cu;
label_42fb1c:
    // 0x42fb1c: 0x26a40110  addiu       $a0, $s5, 0x110
    ctx->pc = 0x42fb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
label_42fb20:
    // 0x42fb20: 0xc04ce80  jal         func_133A00
label_42fb24:
    if (ctx->pc == 0x42FB24u) {
        ctx->pc = 0x42FB24u;
            // 0x42fb24: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x42FB28u;
        goto label_42fb28;
    }
    ctx->pc = 0x42FB20u;
    SET_GPR_U32(ctx, 31, 0x42FB28u);
    ctx->pc = 0x42FB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FB20u;
            // 0x42fb24: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FB28u; }
        if (ctx->pc != 0x42FB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FB28u; }
        if (ctx->pc != 0x42FB28u) { return; }
    }
    ctx->pc = 0x42FB28u;
label_42fb28:
    // 0x42fb28: 0xc040180  jal         func_100600
label_42fb2c:
    if (ctx->pc == 0x42FB2Cu) {
        ctx->pc = 0x42FB2Cu;
            // 0x42fb2c: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x42FB30u;
        goto label_42fb30;
    }
    ctx->pc = 0x42FB28u;
    SET_GPR_U32(ctx, 31, 0x42FB30u);
    ctx->pc = 0x42FB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FB28u;
            // 0x42fb2c: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FB30u; }
        if (ctx->pc != 0x42FB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FB30u; }
        if (ctx->pc != 0x42FB30u) { return; }
    }
    ctx->pc = 0x42FB30u;
label_42fb30:
    // 0x42fb30: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_42fb34:
    if (ctx->pc == 0x42FB34u) {
        ctx->pc = 0x42FB38u;
        goto label_42fb38;
    }
    ctx->pc = 0x42FB30u;
    {
        const bool branch_taken_0x42fb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42fb30) {
            ctx->pc = 0x42FB6Cu;
            goto label_42fb6c;
        }
    }
    ctx->pc = 0x42FB38u;
label_42fb38:
    // 0x42fb38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42fb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42fb3c:
    // 0x42fb3c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x42fb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_42fb40:
    // 0x42fb40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42fb44:
    // 0x42fb44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x42fb44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42fb48:
    // 0x42fb48: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x42fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_42fb4c:
    // 0x42fb4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x42fb4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42fb50:
    // 0x42fb50: 0x26a90150  addiu       $t1, $s5, 0x150
    ctx->pc = 0x42fb50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
label_42fb54:
    // 0x42fb54: 0x26aa0110  addiu       $t2, $s5, 0x110
    ctx->pc = 0x42fb54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 272));
label_42fb58:
    // 0x42fb58: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x42fb58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42fb5c:
    // 0x42fb5c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x42fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_42fb60:
    // 0x42fb60: 0x24670598  addiu       $a3, $v1, 0x598
    ctx->pc = 0x42fb60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1432));
label_42fb64:
    // 0x42fb64: 0xc13d944  jal         func_4F6510
label_42fb68:
    if (ctx->pc == 0x42FB68u) {
        ctx->pc = 0x42FB68u;
            // 0x42fb68: 0x3445abd8  ori         $a1, $v0, 0xABD8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43992);
        ctx->pc = 0x42FB6Cu;
        goto label_42fb6c;
    }
    ctx->pc = 0x42FB64u;
    SET_GPR_U32(ctx, 31, 0x42FB6Cu);
    ctx->pc = 0x42FB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FB64u;
            // 0x42fb68: 0x3445abd8  ori         $a1, $v0, 0xABD8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43992);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6510u;
    if (runtime->hasFunction(0x4F6510u)) {
        auto targetFn = runtime->lookupFunction(0x4F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FB6Cu; }
        if (ctx->pc != 0x42FB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6510_0x4f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FB6Cu; }
        if (ctx->pc != 0x42FB6Cu) { return; }
    }
    ctx->pc = 0x42FB6Cu;
label_42fb6c:
    // 0x42fb6c: 0x8ea20180  lw          $v0, 0x180($s5)
    ctx->pc = 0x42fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
label_42fb70:
    // 0x42fb70: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_42fb74:
    if (ctx->pc == 0x42FB74u) {
        ctx->pc = 0x42FB78u;
        goto label_42fb78;
    }
    ctx->pc = 0x42FB70u;
    {
        const bool branch_taken_0x42fb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42fb70) {
            ctx->pc = 0x42FB94u;
            goto label_42fb94;
        }
    }
    ctx->pc = 0x42FB78u;
label_42fb78:
    // 0x42fb78: 0xa0400060  sb          $zero, 0x60($v0)
    ctx->pc = 0x42fb78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 0));
label_42fb7c:
    // 0x42fb7c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x42fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_42fb80:
    // 0x42fb80: 0x8ea50180  lw          $a1, 0x180($s5)
    ctx->pc = 0x42fb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
label_42fb84:
    // 0x42fb84: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x42fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_42fb88:
    // 0x42fb88: 0xc057b7c  jal         func_15EDF0
label_42fb8c:
    if (ctx->pc == 0x42FB8Cu) {
        ctx->pc = 0x42FB8Cu;
            // 0x42fb8c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x42FB90u;
        goto label_42fb90;
    }
    ctx->pc = 0x42FB88u;
    SET_GPR_U32(ctx, 31, 0x42FB90u);
    ctx->pc = 0x42FB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FB88u;
            // 0x42fb8c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FB90u; }
        if (ctx->pc != 0x42FB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FB90u; }
        if (ctx->pc != 0x42FB90u) { return; }
    }
    ctx->pc = 0x42FB90u;
label_42fb90:
    // 0x42fb90: 0xaea00180  sw          $zero, 0x180($s5)
    ctx->pc = 0x42fb90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 384), GPR_U32(ctx, 0));
label_42fb94:
    // 0x42fb94: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42fb98:
    // 0x42fb98: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x42fb98u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
label_42fb9c:
    // 0x42fb9c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x42fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_42fba0:
    // 0x42fba0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x42fba0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42fba4:
    // 0x42fba4: 0x26730e80  addiu       $s3, $s3, 0xE80
    ctx->pc = 0x42fba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3712));
label_42fba8:
    // 0x42fba8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42fba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42fbac:
    // 0x42fbac: 0x8c510780  lw          $s1, 0x780($v0)
    ctx->pc = 0x42fbacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1920)));
label_42fbb0:
    // 0x42fbb0: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x42fbb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_42fbb4:
    // 0x42fbb4: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x42fbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_42fbb8:
    // 0x42fbb8: 0xc04cc1c  jal         func_133070
label_42fbbc:
    if (ctx->pc == 0x42FBBCu) {
        ctx->pc = 0x42FBBCu;
            // 0x42fbbc: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x42FBC0u;
        goto label_42fbc0;
    }
    ctx->pc = 0x42FBB8u;
    SET_GPR_U32(ctx, 31, 0x42FBC0u);
    ctx->pc = 0x42FBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FBB8u;
            // 0x42fbbc: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FBC0u; }
        if (ctx->pc != 0x42FBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FBC0u; }
        if (ctx->pc != 0x42FBC0u) { return; }
    }
    ctx->pc = 0x42FBC0u;
label_42fbc0:
    // 0x42fbc0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x42fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_42fbc4:
    // 0x42fbc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x42fbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_42fbc8:
    // 0x42fbc8: 0x0  nop
    ctx->pc = 0x42fbc8u;
    // NOP
label_42fbcc:
    // 0x42fbcc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x42fbccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42fbd0:
    // 0x42fbd0: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_42fbd4:
    if (ctx->pc == 0x42FBD4u) {
        ctx->pc = 0x42FBD8u;
        goto label_42fbd8;
    }
    ctx->pc = 0x42FBD0u;
    {
        const bool branch_taken_0x42fbd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x42fbd0) {
            ctx->pc = 0x42FC48u;
            goto label_42fc48;
        }
    }
    ctx->pc = 0x42FBD8u;
label_42fbd8:
    // 0x42fbd8: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x42fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_42fbdc:
    // 0x42fbdc: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x42fbdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_42fbe0:
    // 0x42fbe0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x42fbe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_42fbe4:
    // 0x42fbe4: 0x320f809  jalr        $t9
label_42fbe8:
    if (ctx->pc == 0x42FBE8u) {
        ctx->pc = 0x42FBE8u;
            // 0x42fbe8: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x42FBECu;
        goto label_42fbec;
    }
    ctx->pc = 0x42FBE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42FBECu);
        ctx->pc = 0x42FBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42FBE4u;
            // 0x42fbe8: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42FBECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42FBECu; }
            if (ctx->pc != 0x42FBECu) { return; }
        }
        }
    }
    ctx->pc = 0x42FBECu;
label_42fbec:
    // 0x42fbec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x42fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_42fbf0:
    // 0x42fbf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42fbf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42fbf4:
    // 0x42fbf4: 0xc04a576  jal         func_1295D8
label_42fbf8:
    if (ctx->pc == 0x42FBF8u) {
        ctx->pc = 0x42FBF8u;
            // 0x42fbf8: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x42FBFCu;
        goto label_42fbfc;
    }
    ctx->pc = 0x42FBF4u;
    SET_GPR_U32(ctx, 31, 0x42FBFCu);
    ctx->pc = 0x42FBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FBF4u;
            // 0x42fbf8: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FBFCu; }
        if (ctx->pc != 0x42FBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FBFCu; }
        if (ctx->pc != 0x42FBFCu) { return; }
    }
    ctx->pc = 0x42FBFCu;
label_42fbfc:
    // 0x42fbfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42fc00:
    // 0x42fc00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x42fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42fc04:
    // 0x42fc04: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x42fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
label_42fc08:
    // 0x42fc08: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x42fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_42fc0c:
    // 0x42fc0c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x42fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_42fc10:
    // 0x42fc10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42fc14:
    // 0x42fc14: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x42fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_42fc18:
    // 0x42fc18: 0x8c43e400  lw          $v1, -0x1C00($v0)
    ctx->pc = 0x42fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_42fc1c:
    // 0x42fc1c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x42fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_42fc20:
    // 0x42fc20: 0x282082b  sltu        $at, $s4, $v0
    ctx->pc = 0x42fc20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_42fc24:
    // 0x42fc24: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_42fc28:
    if (ctx->pc == 0x42FC28u) {
        ctx->pc = 0x42FC28u;
            // 0x42fc28: 0x8c620060  lw          $v0, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->pc = 0x42FC2Cu;
        goto label_42fc2c;
    }
    ctx->pc = 0x42FC24u;
    {
        const bool branch_taken_0x42fc24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x42fc24) {
            ctx->pc = 0x42FC28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42FC24u;
            // 0x42fc28: 0x8c620060  lw          $v0, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42FC34u;
            goto label_42fc34;
        }
    }
    ctx->pc = 0x42FC2Cu;
label_42fc2c:
    // 0x42fc2c: 0x10000003  b           . + 4 + (0x3 << 2)
label_42fc30:
    if (ctx->pc == 0x42FC30u) {
        ctx->pc = 0x42FC30u;
            // 0x42fc30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42FC34u;
        goto label_42fc34;
    }
    ctx->pc = 0x42FC2Cu;
    {
        const bool branch_taken_0x42fc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42FC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42FC2Cu;
            // 0x42fc30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fc2c) {
            ctx->pc = 0x42FC3Cu;
            goto label_42fc3c;
        }
    }
    ctx->pc = 0x42FC34u;
label_42fc34:
    // 0x42fc34: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x42fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_42fc38:
    // 0x42fc38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x42fc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42fc3c:
    // 0x42fc3c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x42fc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_42fc40:
    // 0x42fc40: 0xc0b79e8  jal         func_2DE7A0
label_42fc44:
    if (ctx->pc == 0x42FC44u) {
        ctx->pc = 0x42FC44u;
            // 0x42fc44: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x42FC48u;
        goto label_42fc48;
    }
    ctx->pc = 0x42FC40u;
    SET_GPR_U32(ctx, 31, 0x42FC48u);
    ctx->pc = 0x42FC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FC40u;
            // 0x42fc44: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7A0u;
    if (runtime->hasFunction(0x2DE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FC48u; }
        if (ctx->pc != 0x42FC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DE7A0_0x2de7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FC48u; }
        if (ctx->pc != 0x42FC48u) { return; }
    }
    ctx->pc = 0x42FC48u;
label_42fc48:
    // 0x42fc48: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x42fc48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_42fc4c:
    // 0x42fc4c: 0x291102b  sltu        $v0, $s4, $s1
    ctx->pc = 0x42fc4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_42fc50:
    // 0x42fc50: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x42fc50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_42fc54:
    // 0x42fc54: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_42fc58:
    if (ctx->pc == 0x42FC58u) {
        ctx->pc = 0x42FC58u;
            // 0x42fc58: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x42FC5Cu;
        goto label_42fc5c;
    }
    ctx->pc = 0x42FC54u;
    {
        const bool branch_taken_0x42fc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42FC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42FC54u;
            // 0x42fc58: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42fc54) {
            ctx->pc = 0x42FBB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42fbb0;
        }
    }
    ctx->pc = 0x42FC5Cu;
label_42fc5c:
    // 0x42fc5c: 0x8ea400d0  lw          $a0, 0xD0($s5)
    ctx->pc = 0x42fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
label_42fc60:
    // 0x42fc60: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x42fc60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_42fc64:
    // 0x42fc64: 0xc122d2c  jal         func_48B4B0
label_42fc68:
    if (ctx->pc == 0x42FC68u) {
        ctx->pc = 0x42FC68u;
            // 0x42fc68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42FC6Cu;
        goto label_42fc6c;
    }
    ctx->pc = 0x42FC64u;
    SET_GPR_U32(ctx, 31, 0x42FC6Cu);
    ctx->pc = 0x42FC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42FC64u;
            // 0x42fc68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FC6Cu; }
        if (ctx->pc != 0x42FC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42FC6Cu; }
        if (ctx->pc != 0x42FC6Cu) { return; }
    }
    ctx->pc = 0x42FC6Cu;
label_42fc6c:
    // 0x42fc6c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x42fc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_42fc70:
    // 0x42fc70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x42fc70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_42fc74:
    // 0x42fc74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x42fc74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_42fc78:
    // 0x42fc78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42fc78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42fc7c:
    // 0x42fc7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42fc7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42fc80:
    // 0x42fc80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42fc80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42fc84:
    // 0x42fc84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42fc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42fc88:
    // 0x42fc88: 0x3e00008  jr          $ra
label_42fc8c:
    if (ctx->pc == 0x42FC8Cu) {
        ctx->pc = 0x42FC8Cu;
            // 0x42fc8c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x42FC90u;
        goto label_fallthrough_0x42fc88;
    }
    ctx->pc = 0x42FC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42FC88u;
            // 0x42fc8c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x42fc88:
    ctx->pc = 0x42FC90u;
}
