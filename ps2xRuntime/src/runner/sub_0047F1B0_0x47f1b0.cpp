#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047F1B0
// Address: 0x47f1b0 - 0x47f910
void sub_0047F1B0_0x47f1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F1B0_0x47f1b0");
#endif

    switch (ctx->pc) {
        case 0x47f1b0u: goto label_47f1b0;
        case 0x47f1b4u: goto label_47f1b4;
        case 0x47f1b8u: goto label_47f1b8;
        case 0x47f1bcu: goto label_47f1bc;
        case 0x47f1c0u: goto label_47f1c0;
        case 0x47f1c4u: goto label_47f1c4;
        case 0x47f1c8u: goto label_47f1c8;
        case 0x47f1ccu: goto label_47f1cc;
        case 0x47f1d0u: goto label_47f1d0;
        case 0x47f1d4u: goto label_47f1d4;
        case 0x47f1d8u: goto label_47f1d8;
        case 0x47f1dcu: goto label_47f1dc;
        case 0x47f1e0u: goto label_47f1e0;
        case 0x47f1e4u: goto label_47f1e4;
        case 0x47f1e8u: goto label_47f1e8;
        case 0x47f1ecu: goto label_47f1ec;
        case 0x47f1f0u: goto label_47f1f0;
        case 0x47f1f4u: goto label_47f1f4;
        case 0x47f1f8u: goto label_47f1f8;
        case 0x47f1fcu: goto label_47f1fc;
        case 0x47f200u: goto label_47f200;
        case 0x47f204u: goto label_47f204;
        case 0x47f208u: goto label_47f208;
        case 0x47f20cu: goto label_47f20c;
        case 0x47f210u: goto label_47f210;
        case 0x47f214u: goto label_47f214;
        case 0x47f218u: goto label_47f218;
        case 0x47f21cu: goto label_47f21c;
        case 0x47f220u: goto label_47f220;
        case 0x47f224u: goto label_47f224;
        case 0x47f228u: goto label_47f228;
        case 0x47f22cu: goto label_47f22c;
        case 0x47f230u: goto label_47f230;
        case 0x47f234u: goto label_47f234;
        case 0x47f238u: goto label_47f238;
        case 0x47f23cu: goto label_47f23c;
        case 0x47f240u: goto label_47f240;
        case 0x47f244u: goto label_47f244;
        case 0x47f248u: goto label_47f248;
        case 0x47f24cu: goto label_47f24c;
        case 0x47f250u: goto label_47f250;
        case 0x47f254u: goto label_47f254;
        case 0x47f258u: goto label_47f258;
        case 0x47f25cu: goto label_47f25c;
        case 0x47f260u: goto label_47f260;
        case 0x47f264u: goto label_47f264;
        case 0x47f268u: goto label_47f268;
        case 0x47f26cu: goto label_47f26c;
        case 0x47f270u: goto label_47f270;
        case 0x47f274u: goto label_47f274;
        case 0x47f278u: goto label_47f278;
        case 0x47f27cu: goto label_47f27c;
        case 0x47f280u: goto label_47f280;
        case 0x47f284u: goto label_47f284;
        case 0x47f288u: goto label_47f288;
        case 0x47f28cu: goto label_47f28c;
        case 0x47f290u: goto label_47f290;
        case 0x47f294u: goto label_47f294;
        case 0x47f298u: goto label_47f298;
        case 0x47f29cu: goto label_47f29c;
        case 0x47f2a0u: goto label_47f2a0;
        case 0x47f2a4u: goto label_47f2a4;
        case 0x47f2a8u: goto label_47f2a8;
        case 0x47f2acu: goto label_47f2ac;
        case 0x47f2b0u: goto label_47f2b0;
        case 0x47f2b4u: goto label_47f2b4;
        case 0x47f2b8u: goto label_47f2b8;
        case 0x47f2bcu: goto label_47f2bc;
        case 0x47f2c0u: goto label_47f2c0;
        case 0x47f2c4u: goto label_47f2c4;
        case 0x47f2c8u: goto label_47f2c8;
        case 0x47f2ccu: goto label_47f2cc;
        case 0x47f2d0u: goto label_47f2d0;
        case 0x47f2d4u: goto label_47f2d4;
        case 0x47f2d8u: goto label_47f2d8;
        case 0x47f2dcu: goto label_47f2dc;
        case 0x47f2e0u: goto label_47f2e0;
        case 0x47f2e4u: goto label_47f2e4;
        case 0x47f2e8u: goto label_47f2e8;
        case 0x47f2ecu: goto label_47f2ec;
        case 0x47f2f0u: goto label_47f2f0;
        case 0x47f2f4u: goto label_47f2f4;
        case 0x47f2f8u: goto label_47f2f8;
        case 0x47f2fcu: goto label_47f2fc;
        case 0x47f300u: goto label_47f300;
        case 0x47f304u: goto label_47f304;
        case 0x47f308u: goto label_47f308;
        case 0x47f30cu: goto label_47f30c;
        case 0x47f310u: goto label_47f310;
        case 0x47f314u: goto label_47f314;
        case 0x47f318u: goto label_47f318;
        case 0x47f31cu: goto label_47f31c;
        case 0x47f320u: goto label_47f320;
        case 0x47f324u: goto label_47f324;
        case 0x47f328u: goto label_47f328;
        case 0x47f32cu: goto label_47f32c;
        case 0x47f330u: goto label_47f330;
        case 0x47f334u: goto label_47f334;
        case 0x47f338u: goto label_47f338;
        case 0x47f33cu: goto label_47f33c;
        case 0x47f340u: goto label_47f340;
        case 0x47f344u: goto label_47f344;
        case 0x47f348u: goto label_47f348;
        case 0x47f34cu: goto label_47f34c;
        case 0x47f350u: goto label_47f350;
        case 0x47f354u: goto label_47f354;
        case 0x47f358u: goto label_47f358;
        case 0x47f35cu: goto label_47f35c;
        case 0x47f360u: goto label_47f360;
        case 0x47f364u: goto label_47f364;
        case 0x47f368u: goto label_47f368;
        case 0x47f36cu: goto label_47f36c;
        case 0x47f370u: goto label_47f370;
        case 0x47f374u: goto label_47f374;
        case 0x47f378u: goto label_47f378;
        case 0x47f37cu: goto label_47f37c;
        case 0x47f380u: goto label_47f380;
        case 0x47f384u: goto label_47f384;
        case 0x47f388u: goto label_47f388;
        case 0x47f38cu: goto label_47f38c;
        case 0x47f390u: goto label_47f390;
        case 0x47f394u: goto label_47f394;
        case 0x47f398u: goto label_47f398;
        case 0x47f39cu: goto label_47f39c;
        case 0x47f3a0u: goto label_47f3a0;
        case 0x47f3a4u: goto label_47f3a4;
        case 0x47f3a8u: goto label_47f3a8;
        case 0x47f3acu: goto label_47f3ac;
        case 0x47f3b0u: goto label_47f3b0;
        case 0x47f3b4u: goto label_47f3b4;
        case 0x47f3b8u: goto label_47f3b8;
        case 0x47f3bcu: goto label_47f3bc;
        case 0x47f3c0u: goto label_47f3c0;
        case 0x47f3c4u: goto label_47f3c4;
        case 0x47f3c8u: goto label_47f3c8;
        case 0x47f3ccu: goto label_47f3cc;
        case 0x47f3d0u: goto label_47f3d0;
        case 0x47f3d4u: goto label_47f3d4;
        case 0x47f3d8u: goto label_47f3d8;
        case 0x47f3dcu: goto label_47f3dc;
        case 0x47f3e0u: goto label_47f3e0;
        case 0x47f3e4u: goto label_47f3e4;
        case 0x47f3e8u: goto label_47f3e8;
        case 0x47f3ecu: goto label_47f3ec;
        case 0x47f3f0u: goto label_47f3f0;
        case 0x47f3f4u: goto label_47f3f4;
        case 0x47f3f8u: goto label_47f3f8;
        case 0x47f3fcu: goto label_47f3fc;
        case 0x47f400u: goto label_47f400;
        case 0x47f404u: goto label_47f404;
        case 0x47f408u: goto label_47f408;
        case 0x47f40cu: goto label_47f40c;
        case 0x47f410u: goto label_47f410;
        case 0x47f414u: goto label_47f414;
        case 0x47f418u: goto label_47f418;
        case 0x47f41cu: goto label_47f41c;
        case 0x47f420u: goto label_47f420;
        case 0x47f424u: goto label_47f424;
        case 0x47f428u: goto label_47f428;
        case 0x47f42cu: goto label_47f42c;
        case 0x47f430u: goto label_47f430;
        case 0x47f434u: goto label_47f434;
        case 0x47f438u: goto label_47f438;
        case 0x47f43cu: goto label_47f43c;
        case 0x47f440u: goto label_47f440;
        case 0x47f444u: goto label_47f444;
        case 0x47f448u: goto label_47f448;
        case 0x47f44cu: goto label_47f44c;
        case 0x47f450u: goto label_47f450;
        case 0x47f454u: goto label_47f454;
        case 0x47f458u: goto label_47f458;
        case 0x47f45cu: goto label_47f45c;
        case 0x47f460u: goto label_47f460;
        case 0x47f464u: goto label_47f464;
        case 0x47f468u: goto label_47f468;
        case 0x47f46cu: goto label_47f46c;
        case 0x47f470u: goto label_47f470;
        case 0x47f474u: goto label_47f474;
        case 0x47f478u: goto label_47f478;
        case 0x47f47cu: goto label_47f47c;
        case 0x47f480u: goto label_47f480;
        case 0x47f484u: goto label_47f484;
        case 0x47f488u: goto label_47f488;
        case 0x47f48cu: goto label_47f48c;
        case 0x47f490u: goto label_47f490;
        case 0x47f494u: goto label_47f494;
        case 0x47f498u: goto label_47f498;
        case 0x47f49cu: goto label_47f49c;
        case 0x47f4a0u: goto label_47f4a0;
        case 0x47f4a4u: goto label_47f4a4;
        case 0x47f4a8u: goto label_47f4a8;
        case 0x47f4acu: goto label_47f4ac;
        case 0x47f4b0u: goto label_47f4b0;
        case 0x47f4b4u: goto label_47f4b4;
        case 0x47f4b8u: goto label_47f4b8;
        case 0x47f4bcu: goto label_47f4bc;
        case 0x47f4c0u: goto label_47f4c0;
        case 0x47f4c4u: goto label_47f4c4;
        case 0x47f4c8u: goto label_47f4c8;
        case 0x47f4ccu: goto label_47f4cc;
        case 0x47f4d0u: goto label_47f4d0;
        case 0x47f4d4u: goto label_47f4d4;
        case 0x47f4d8u: goto label_47f4d8;
        case 0x47f4dcu: goto label_47f4dc;
        case 0x47f4e0u: goto label_47f4e0;
        case 0x47f4e4u: goto label_47f4e4;
        case 0x47f4e8u: goto label_47f4e8;
        case 0x47f4ecu: goto label_47f4ec;
        case 0x47f4f0u: goto label_47f4f0;
        case 0x47f4f4u: goto label_47f4f4;
        case 0x47f4f8u: goto label_47f4f8;
        case 0x47f4fcu: goto label_47f4fc;
        case 0x47f500u: goto label_47f500;
        case 0x47f504u: goto label_47f504;
        case 0x47f508u: goto label_47f508;
        case 0x47f50cu: goto label_47f50c;
        case 0x47f510u: goto label_47f510;
        case 0x47f514u: goto label_47f514;
        case 0x47f518u: goto label_47f518;
        case 0x47f51cu: goto label_47f51c;
        case 0x47f520u: goto label_47f520;
        case 0x47f524u: goto label_47f524;
        case 0x47f528u: goto label_47f528;
        case 0x47f52cu: goto label_47f52c;
        case 0x47f530u: goto label_47f530;
        case 0x47f534u: goto label_47f534;
        case 0x47f538u: goto label_47f538;
        case 0x47f53cu: goto label_47f53c;
        case 0x47f540u: goto label_47f540;
        case 0x47f544u: goto label_47f544;
        case 0x47f548u: goto label_47f548;
        case 0x47f54cu: goto label_47f54c;
        case 0x47f550u: goto label_47f550;
        case 0x47f554u: goto label_47f554;
        case 0x47f558u: goto label_47f558;
        case 0x47f55cu: goto label_47f55c;
        case 0x47f560u: goto label_47f560;
        case 0x47f564u: goto label_47f564;
        case 0x47f568u: goto label_47f568;
        case 0x47f56cu: goto label_47f56c;
        case 0x47f570u: goto label_47f570;
        case 0x47f574u: goto label_47f574;
        case 0x47f578u: goto label_47f578;
        case 0x47f57cu: goto label_47f57c;
        case 0x47f580u: goto label_47f580;
        case 0x47f584u: goto label_47f584;
        case 0x47f588u: goto label_47f588;
        case 0x47f58cu: goto label_47f58c;
        case 0x47f590u: goto label_47f590;
        case 0x47f594u: goto label_47f594;
        case 0x47f598u: goto label_47f598;
        case 0x47f59cu: goto label_47f59c;
        case 0x47f5a0u: goto label_47f5a0;
        case 0x47f5a4u: goto label_47f5a4;
        case 0x47f5a8u: goto label_47f5a8;
        case 0x47f5acu: goto label_47f5ac;
        case 0x47f5b0u: goto label_47f5b0;
        case 0x47f5b4u: goto label_47f5b4;
        case 0x47f5b8u: goto label_47f5b8;
        case 0x47f5bcu: goto label_47f5bc;
        case 0x47f5c0u: goto label_47f5c0;
        case 0x47f5c4u: goto label_47f5c4;
        case 0x47f5c8u: goto label_47f5c8;
        case 0x47f5ccu: goto label_47f5cc;
        case 0x47f5d0u: goto label_47f5d0;
        case 0x47f5d4u: goto label_47f5d4;
        case 0x47f5d8u: goto label_47f5d8;
        case 0x47f5dcu: goto label_47f5dc;
        case 0x47f5e0u: goto label_47f5e0;
        case 0x47f5e4u: goto label_47f5e4;
        case 0x47f5e8u: goto label_47f5e8;
        case 0x47f5ecu: goto label_47f5ec;
        case 0x47f5f0u: goto label_47f5f0;
        case 0x47f5f4u: goto label_47f5f4;
        case 0x47f5f8u: goto label_47f5f8;
        case 0x47f5fcu: goto label_47f5fc;
        case 0x47f600u: goto label_47f600;
        case 0x47f604u: goto label_47f604;
        case 0x47f608u: goto label_47f608;
        case 0x47f60cu: goto label_47f60c;
        case 0x47f610u: goto label_47f610;
        case 0x47f614u: goto label_47f614;
        case 0x47f618u: goto label_47f618;
        case 0x47f61cu: goto label_47f61c;
        case 0x47f620u: goto label_47f620;
        case 0x47f624u: goto label_47f624;
        case 0x47f628u: goto label_47f628;
        case 0x47f62cu: goto label_47f62c;
        case 0x47f630u: goto label_47f630;
        case 0x47f634u: goto label_47f634;
        case 0x47f638u: goto label_47f638;
        case 0x47f63cu: goto label_47f63c;
        case 0x47f640u: goto label_47f640;
        case 0x47f644u: goto label_47f644;
        case 0x47f648u: goto label_47f648;
        case 0x47f64cu: goto label_47f64c;
        case 0x47f650u: goto label_47f650;
        case 0x47f654u: goto label_47f654;
        case 0x47f658u: goto label_47f658;
        case 0x47f65cu: goto label_47f65c;
        case 0x47f660u: goto label_47f660;
        case 0x47f664u: goto label_47f664;
        case 0x47f668u: goto label_47f668;
        case 0x47f66cu: goto label_47f66c;
        case 0x47f670u: goto label_47f670;
        case 0x47f674u: goto label_47f674;
        case 0x47f678u: goto label_47f678;
        case 0x47f67cu: goto label_47f67c;
        case 0x47f680u: goto label_47f680;
        case 0x47f684u: goto label_47f684;
        case 0x47f688u: goto label_47f688;
        case 0x47f68cu: goto label_47f68c;
        case 0x47f690u: goto label_47f690;
        case 0x47f694u: goto label_47f694;
        case 0x47f698u: goto label_47f698;
        case 0x47f69cu: goto label_47f69c;
        case 0x47f6a0u: goto label_47f6a0;
        case 0x47f6a4u: goto label_47f6a4;
        case 0x47f6a8u: goto label_47f6a8;
        case 0x47f6acu: goto label_47f6ac;
        case 0x47f6b0u: goto label_47f6b0;
        case 0x47f6b4u: goto label_47f6b4;
        case 0x47f6b8u: goto label_47f6b8;
        case 0x47f6bcu: goto label_47f6bc;
        case 0x47f6c0u: goto label_47f6c0;
        case 0x47f6c4u: goto label_47f6c4;
        case 0x47f6c8u: goto label_47f6c8;
        case 0x47f6ccu: goto label_47f6cc;
        case 0x47f6d0u: goto label_47f6d0;
        case 0x47f6d4u: goto label_47f6d4;
        case 0x47f6d8u: goto label_47f6d8;
        case 0x47f6dcu: goto label_47f6dc;
        case 0x47f6e0u: goto label_47f6e0;
        case 0x47f6e4u: goto label_47f6e4;
        case 0x47f6e8u: goto label_47f6e8;
        case 0x47f6ecu: goto label_47f6ec;
        case 0x47f6f0u: goto label_47f6f0;
        case 0x47f6f4u: goto label_47f6f4;
        case 0x47f6f8u: goto label_47f6f8;
        case 0x47f6fcu: goto label_47f6fc;
        case 0x47f700u: goto label_47f700;
        case 0x47f704u: goto label_47f704;
        case 0x47f708u: goto label_47f708;
        case 0x47f70cu: goto label_47f70c;
        case 0x47f710u: goto label_47f710;
        case 0x47f714u: goto label_47f714;
        case 0x47f718u: goto label_47f718;
        case 0x47f71cu: goto label_47f71c;
        case 0x47f720u: goto label_47f720;
        case 0x47f724u: goto label_47f724;
        case 0x47f728u: goto label_47f728;
        case 0x47f72cu: goto label_47f72c;
        case 0x47f730u: goto label_47f730;
        case 0x47f734u: goto label_47f734;
        case 0x47f738u: goto label_47f738;
        case 0x47f73cu: goto label_47f73c;
        case 0x47f740u: goto label_47f740;
        case 0x47f744u: goto label_47f744;
        case 0x47f748u: goto label_47f748;
        case 0x47f74cu: goto label_47f74c;
        case 0x47f750u: goto label_47f750;
        case 0x47f754u: goto label_47f754;
        case 0x47f758u: goto label_47f758;
        case 0x47f75cu: goto label_47f75c;
        case 0x47f760u: goto label_47f760;
        case 0x47f764u: goto label_47f764;
        case 0x47f768u: goto label_47f768;
        case 0x47f76cu: goto label_47f76c;
        case 0x47f770u: goto label_47f770;
        case 0x47f774u: goto label_47f774;
        case 0x47f778u: goto label_47f778;
        case 0x47f77cu: goto label_47f77c;
        case 0x47f780u: goto label_47f780;
        case 0x47f784u: goto label_47f784;
        case 0x47f788u: goto label_47f788;
        case 0x47f78cu: goto label_47f78c;
        case 0x47f790u: goto label_47f790;
        case 0x47f794u: goto label_47f794;
        case 0x47f798u: goto label_47f798;
        case 0x47f79cu: goto label_47f79c;
        case 0x47f7a0u: goto label_47f7a0;
        case 0x47f7a4u: goto label_47f7a4;
        case 0x47f7a8u: goto label_47f7a8;
        case 0x47f7acu: goto label_47f7ac;
        case 0x47f7b0u: goto label_47f7b0;
        case 0x47f7b4u: goto label_47f7b4;
        case 0x47f7b8u: goto label_47f7b8;
        case 0x47f7bcu: goto label_47f7bc;
        case 0x47f7c0u: goto label_47f7c0;
        case 0x47f7c4u: goto label_47f7c4;
        case 0x47f7c8u: goto label_47f7c8;
        case 0x47f7ccu: goto label_47f7cc;
        case 0x47f7d0u: goto label_47f7d0;
        case 0x47f7d4u: goto label_47f7d4;
        case 0x47f7d8u: goto label_47f7d8;
        case 0x47f7dcu: goto label_47f7dc;
        case 0x47f7e0u: goto label_47f7e0;
        case 0x47f7e4u: goto label_47f7e4;
        case 0x47f7e8u: goto label_47f7e8;
        case 0x47f7ecu: goto label_47f7ec;
        case 0x47f7f0u: goto label_47f7f0;
        case 0x47f7f4u: goto label_47f7f4;
        case 0x47f7f8u: goto label_47f7f8;
        case 0x47f7fcu: goto label_47f7fc;
        case 0x47f800u: goto label_47f800;
        case 0x47f804u: goto label_47f804;
        case 0x47f808u: goto label_47f808;
        case 0x47f80cu: goto label_47f80c;
        case 0x47f810u: goto label_47f810;
        case 0x47f814u: goto label_47f814;
        case 0x47f818u: goto label_47f818;
        case 0x47f81cu: goto label_47f81c;
        case 0x47f820u: goto label_47f820;
        case 0x47f824u: goto label_47f824;
        case 0x47f828u: goto label_47f828;
        case 0x47f82cu: goto label_47f82c;
        case 0x47f830u: goto label_47f830;
        case 0x47f834u: goto label_47f834;
        case 0x47f838u: goto label_47f838;
        case 0x47f83cu: goto label_47f83c;
        case 0x47f840u: goto label_47f840;
        case 0x47f844u: goto label_47f844;
        case 0x47f848u: goto label_47f848;
        case 0x47f84cu: goto label_47f84c;
        case 0x47f850u: goto label_47f850;
        case 0x47f854u: goto label_47f854;
        case 0x47f858u: goto label_47f858;
        case 0x47f85cu: goto label_47f85c;
        case 0x47f860u: goto label_47f860;
        case 0x47f864u: goto label_47f864;
        case 0x47f868u: goto label_47f868;
        case 0x47f86cu: goto label_47f86c;
        case 0x47f870u: goto label_47f870;
        case 0x47f874u: goto label_47f874;
        case 0x47f878u: goto label_47f878;
        case 0x47f87cu: goto label_47f87c;
        case 0x47f880u: goto label_47f880;
        case 0x47f884u: goto label_47f884;
        case 0x47f888u: goto label_47f888;
        case 0x47f88cu: goto label_47f88c;
        case 0x47f890u: goto label_47f890;
        case 0x47f894u: goto label_47f894;
        case 0x47f898u: goto label_47f898;
        case 0x47f89cu: goto label_47f89c;
        case 0x47f8a0u: goto label_47f8a0;
        case 0x47f8a4u: goto label_47f8a4;
        case 0x47f8a8u: goto label_47f8a8;
        case 0x47f8acu: goto label_47f8ac;
        case 0x47f8b0u: goto label_47f8b0;
        case 0x47f8b4u: goto label_47f8b4;
        case 0x47f8b8u: goto label_47f8b8;
        case 0x47f8bcu: goto label_47f8bc;
        case 0x47f8c0u: goto label_47f8c0;
        case 0x47f8c4u: goto label_47f8c4;
        case 0x47f8c8u: goto label_47f8c8;
        case 0x47f8ccu: goto label_47f8cc;
        case 0x47f8d0u: goto label_47f8d0;
        case 0x47f8d4u: goto label_47f8d4;
        case 0x47f8d8u: goto label_47f8d8;
        case 0x47f8dcu: goto label_47f8dc;
        case 0x47f8e0u: goto label_47f8e0;
        case 0x47f8e4u: goto label_47f8e4;
        case 0x47f8e8u: goto label_47f8e8;
        case 0x47f8ecu: goto label_47f8ec;
        case 0x47f8f0u: goto label_47f8f0;
        case 0x47f8f4u: goto label_47f8f4;
        case 0x47f8f8u: goto label_47f8f8;
        case 0x47f8fcu: goto label_47f8fc;
        case 0x47f900u: goto label_47f900;
        case 0x47f904u: goto label_47f904;
        case 0x47f908u: goto label_47f908;
        case 0x47f90cu: goto label_47f90c;
        default: break;
    }

    ctx->pc = 0x47f1b0u;

label_47f1b0:
    // 0x47f1b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47f1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_47f1b4:
    // 0x47f1b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47f1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_47f1b8:
    // 0x47f1b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47f1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47f1bc:
    // 0x47f1bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47f1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47f1c0:
    // 0x47f1c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47f1c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47f1c4:
    // 0x47f1c4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_47f1c8:
    if (ctx->pc == 0x47F1C8u) {
        ctx->pc = 0x47F1C8u;
            // 0x47f1c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F1CCu;
        goto label_47f1cc;
    }
    ctx->pc = 0x47F1C4u;
    {
        const bool branch_taken_0x47f1c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F1C4u;
            // 0x47f1c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f1c4) {
            ctx->pc = 0x47F1F4u;
            goto label_47f1f4;
        }
    }
    ctx->pc = 0x47F1CCu;
label_47f1cc:
    // 0x47f1cc: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_47f1d0:
    if (ctx->pc == 0x47F1D0u) {
        ctx->pc = 0x47F1D0u;
            // 0x47f1d0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x47F1D4u;
        goto label_47f1d4;
    }
    ctx->pc = 0x47F1CCu;
    {
        const bool branch_taken_0x47f1cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f1cc) {
            ctx->pc = 0x47F1D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47F1CCu;
            // 0x47f1d0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47F1E0u;
            goto label_47f1e0;
        }
    }
    ctx->pc = 0x47F1D4u;
label_47f1d4:
    // 0x47f1d4: 0xc07507c  jal         func_1D41F0
label_47f1d8:
    if (ctx->pc == 0x47F1D8u) {
        ctx->pc = 0x47F1D8u;
            // 0x47f1d8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x47F1DCu;
        goto label_47f1dc;
    }
    ctx->pc = 0x47F1D4u;
    SET_GPR_U32(ctx, 31, 0x47F1DCu);
    ctx->pc = 0x47F1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F1D4u;
            // 0x47f1d8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F1DCu; }
        if (ctx->pc != 0x47F1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F1DCu; }
        if (ctx->pc != 0x47F1DCu) { return; }
    }
    ctx->pc = 0x47F1DCu;
label_47f1dc:
    // 0x47f1dc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x47f1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_47f1e0:
    // 0x47f1e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47f1e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_47f1e4:
    // 0x47f1e4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_47f1e8:
    if (ctx->pc == 0x47F1E8u) {
        ctx->pc = 0x47F1E8u;
            // 0x47f1e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F1ECu;
        goto label_47f1ec;
    }
    ctx->pc = 0x47F1E4u;
    {
        const bool branch_taken_0x47f1e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47f1e4) {
            ctx->pc = 0x47F1E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47F1E4u;
            // 0x47f1e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47F1F8u;
            goto label_47f1f8;
        }
    }
    ctx->pc = 0x47F1ECu;
label_47f1ec:
    // 0x47f1ec: 0xc0400a8  jal         func_1002A0
label_47f1f0:
    if (ctx->pc == 0x47F1F0u) {
        ctx->pc = 0x47F1F0u;
            // 0x47f1f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F1F4u;
        goto label_47f1f4;
    }
    ctx->pc = 0x47F1ECu;
    SET_GPR_U32(ctx, 31, 0x47F1F4u);
    ctx->pc = 0x47F1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F1ECu;
            // 0x47f1f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F1F4u; }
        if (ctx->pc != 0x47F1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F1F4u; }
        if (ctx->pc != 0x47F1F4u) { return; }
    }
    ctx->pc = 0x47F1F4u;
label_47f1f4:
    // 0x47f1f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x47f1f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47f1f8:
    // 0x47f1f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47f1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_47f1fc:
    // 0x47f1fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47f1fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47f200:
    // 0x47f200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47f200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47f204:
    // 0x47f204: 0x3e00008  jr          $ra
label_47f208:
    if (ctx->pc == 0x47F208u) {
        ctx->pc = 0x47F208u;
            // 0x47f208: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x47F20Cu;
        goto label_47f20c;
    }
    ctx->pc = 0x47F204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F204u;
            // 0x47f208: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47F20Cu;
label_47f20c:
    // 0x47f20c: 0x0  nop
    ctx->pc = 0x47f20cu;
    // NOP
label_47f210:
    // 0x47f210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47f210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_47f214:
    // 0x47f214: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47f214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_47f218:
    // 0x47f218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47f218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47f21c:
    // 0x47f21c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47f21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47f220:
    // 0x47f220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47f220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47f224:
    // 0x47f224: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_47f228:
    if (ctx->pc == 0x47F228u) {
        ctx->pc = 0x47F228u;
            // 0x47f228: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F22Cu;
        goto label_47f22c;
    }
    ctx->pc = 0x47F224u;
    {
        const bool branch_taken_0x47f224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F224u;
            // 0x47f228: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f224) {
            ctx->pc = 0x47F29Cu;
            goto label_47f29c;
        }
    }
    ctx->pc = 0x47F22Cu;
label_47f22c:
    // 0x47f22c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_47f230:
    // 0x47f230: 0x2442ef60  addiu       $v0, $v0, -0x10A0
    ctx->pc = 0x47f230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963040));
label_47f234:
    // 0x47f234: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x47f234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_47f238:
    // 0x47f238: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47f238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47f23c:
    // 0x47f23c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x47f23cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_47f240:
    // 0x47f240: 0x320f809  jalr        $t9
label_47f244:
    if (ctx->pc == 0x47F244u) {
        ctx->pc = 0x47F248u;
        goto label_47f248;
    }
    ctx->pc = 0x47F240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47F248u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x47F248u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47F248u; }
            if (ctx->pc != 0x47F248u) { return; }
        }
        }
    }
    ctx->pc = 0x47F248u;
label_47f248:
    // 0x47f248: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x47f248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_47f24c:
    // 0x47f24c: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x47f24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_47f250:
    // 0x47f250: 0x24a5f2c0  addiu       $a1, $a1, -0xD40
    ctx->pc = 0x47f250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
label_47f254:
    // 0x47f254: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x47f254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_47f258:
    // 0x47f258: 0xc0407e8  jal         func_101FA0
label_47f25c:
    if (ctx->pc == 0x47F25Cu) {
        ctx->pc = 0x47F25Cu;
            // 0x47f25c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x47F260u;
        goto label_47f260;
    }
    ctx->pc = 0x47F258u;
    SET_GPR_U32(ctx, 31, 0x47F260u);
    ctx->pc = 0x47F25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F258u;
            // 0x47f25c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F260u; }
        if (ctx->pc != 0x47F260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F260u; }
        if (ctx->pc != 0x47F260u) { return; }
    }
    ctx->pc = 0x47F260u;
label_47f260:
    // 0x47f260: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_47f264:
    if (ctx->pc == 0x47F264u) {
        ctx->pc = 0x47F264u;
            // 0x47f264: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x47F268u;
        goto label_47f268;
    }
    ctx->pc = 0x47F260u;
    {
        const bool branch_taken_0x47f260 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f260) {
            ctx->pc = 0x47F264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47F260u;
            // 0x47f264: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47F288u;
            goto label_47f288;
        }
    }
    ctx->pc = 0x47F268u;
label_47f268:
    // 0x47f268: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x47f268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_47f26c:
    // 0x47f26c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x47f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_47f270:
    // 0x47f270: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_47f274:
    if (ctx->pc == 0x47F274u) {
        ctx->pc = 0x47F274u;
            // 0x47f274: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x47F278u;
        goto label_47f278;
    }
    ctx->pc = 0x47F270u;
    {
        const bool branch_taken_0x47f270 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F270u;
            // 0x47f274: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f270) {
            ctx->pc = 0x47F284u;
            goto label_47f284;
        }
    }
    ctx->pc = 0x47F278u;
label_47f278:
    // 0x47f278: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x47f278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_47f27c:
    // 0x47f27c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x47f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_47f280:
    // 0x47f280: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x47f280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_47f284:
    // 0x47f284: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x47f284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_47f288:
    // 0x47f288: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47f288u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_47f28c:
    // 0x47f28c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_47f290:
    if (ctx->pc == 0x47F290u) {
        ctx->pc = 0x47F290u;
            // 0x47f290: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F294u;
        goto label_47f294;
    }
    ctx->pc = 0x47F28Cu;
    {
        const bool branch_taken_0x47f28c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47f28c) {
            ctx->pc = 0x47F290u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47F28Cu;
            // 0x47f290: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47F2A0u;
            goto label_47f2a0;
        }
    }
    ctx->pc = 0x47F294u;
label_47f294:
    // 0x47f294: 0xc0400a8  jal         func_1002A0
label_47f298:
    if (ctx->pc == 0x47F298u) {
        ctx->pc = 0x47F298u;
            // 0x47f298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F29Cu;
        goto label_47f29c;
    }
    ctx->pc = 0x47F294u;
    SET_GPR_U32(ctx, 31, 0x47F29Cu);
    ctx->pc = 0x47F298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F294u;
            // 0x47f298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F29Cu; }
        if (ctx->pc != 0x47F29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F29Cu; }
        if (ctx->pc != 0x47F29Cu) { return; }
    }
    ctx->pc = 0x47F29Cu;
label_47f29c:
    // 0x47f29c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x47f29cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47f2a0:
    // 0x47f2a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47f2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_47f2a4:
    // 0x47f2a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47f2a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47f2a8:
    // 0x47f2a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47f2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47f2ac:
    // 0x47f2ac: 0x3e00008  jr          $ra
label_47f2b0:
    if (ctx->pc == 0x47F2B0u) {
        ctx->pc = 0x47F2B0u;
            // 0x47f2b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x47F2B4u;
        goto label_47f2b4;
    }
    ctx->pc = 0x47F2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F2ACu;
            // 0x47f2b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47F2B4u;
label_47f2b4:
    // 0x47f2b4: 0x0  nop
    ctx->pc = 0x47f2b4u;
    // NOP
label_47f2b8:
    // 0x47f2b8: 0x0  nop
    ctx->pc = 0x47f2b8u;
    // NOP
label_47f2bc:
    // 0x47f2bc: 0x0  nop
    ctx->pc = 0x47f2bcu;
    // NOP
label_47f2c0:
    // 0x47f2c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47f2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_47f2c4:
    // 0x47f2c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47f2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_47f2c8:
    // 0x47f2c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47f2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47f2cc:
    // 0x47f2cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47f2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47f2d0:
    // 0x47f2d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47f2d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47f2d4:
    // 0x47f2d4: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_47f2d8:
    if (ctx->pc == 0x47F2D8u) {
        ctx->pc = 0x47F2D8u;
            // 0x47f2d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F2DCu;
        goto label_47f2dc;
    }
    ctx->pc = 0x47F2D4u;
    {
        const bool branch_taken_0x47f2d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F2D4u;
            // 0x47f2d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f2d4) {
            ctx->pc = 0x47F388u;
            goto label_47f388;
        }
    }
    ctx->pc = 0x47F2DCu;
label_47f2dc:
    // 0x47f2dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_47f2e0:
    // 0x47f2e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_47f2e4:
    // 0x47f2e4: 0x2463efa0  addiu       $v1, $v1, -0x1060
    ctx->pc = 0x47f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963104));
label_47f2e8:
    // 0x47f2e8: 0x2442efe0  addiu       $v0, $v0, -0x1020
    ctx->pc = 0x47f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963168));
label_47f2ec:
    // 0x47f2ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47f2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_47f2f0:
    // 0x47f2f0: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_47f2f4:
    if (ctx->pc == 0x47F2F4u) {
        ctx->pc = 0x47F2F4u;
            // 0x47f2f4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x47F2F8u;
        goto label_47f2f8;
    }
    ctx->pc = 0x47F2F0u;
    {
        const bool branch_taken_0x47f2f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F2F0u;
            // 0x47f2f4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f2f0) {
            ctx->pc = 0x47F370u;
            goto label_47f370;
        }
    }
    ctx->pc = 0x47F2F8u;
label_47f2f8:
    // 0x47f2f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x47f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_47f2fc:
    // 0x47f2fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x47f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_47f300:
    // 0x47f300: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x47f300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_47f304:
    // 0x47f304: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x47f304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_47f308:
    // 0x47f308: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47f308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_47f30c:
    // 0x47f30c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x47f30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_47f310:
    // 0x47f310: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x47f310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_47f314:
    // 0x47f314: 0xc0aecc4  jal         func_2BB310
label_47f318:
    if (ctx->pc == 0x47F318u) {
        ctx->pc = 0x47F318u;
            // 0x47f318: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47F31Cu;
        goto label_47f31c;
    }
    ctx->pc = 0x47F314u;
    SET_GPR_U32(ctx, 31, 0x47F31Cu);
    ctx->pc = 0x47F318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F314u;
            // 0x47f318: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F31Cu; }
        if (ctx->pc != 0x47F31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F31Cu; }
        if (ctx->pc != 0x47F31Cu) { return; }
    }
    ctx->pc = 0x47F31Cu;
label_47f31c:
    // 0x47f31c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x47f31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_47f320:
    // 0x47f320: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x47f320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_47f324:
    // 0x47f324: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_47f328:
    if (ctx->pc == 0x47F328u) {
        ctx->pc = 0x47F328u;
            // 0x47f328: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x47F32Cu;
        goto label_47f32c;
    }
    ctx->pc = 0x47F324u;
    {
        const bool branch_taken_0x47f324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f324) {
            ctx->pc = 0x47F328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47F324u;
            // 0x47f328: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47F340u;
            goto label_47f340;
        }
    }
    ctx->pc = 0x47F32Cu;
label_47f32c:
    // 0x47f32c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x47f32cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_47f330:
    // 0x47f330: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x47f330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_47f334:
    // 0x47f334: 0x320f809  jalr        $t9
label_47f338:
    if (ctx->pc == 0x47F338u) {
        ctx->pc = 0x47F338u;
            // 0x47f338: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47F33Cu;
        goto label_47f33c;
    }
    ctx->pc = 0x47F334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47F33Cu);
        ctx->pc = 0x47F338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F334u;
            // 0x47f338: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47F33Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47F33Cu; }
            if (ctx->pc != 0x47F33Cu) { return; }
        }
        }
    }
    ctx->pc = 0x47F33Cu;
label_47f33c:
    // 0x47f33c: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x47f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_47f340:
    // 0x47f340: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47f340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47f344:
    // 0x47f344: 0xc0aec9c  jal         func_2BB270
label_47f348:
    if (ctx->pc == 0x47F348u) {
        ctx->pc = 0x47F348u;
            // 0x47f348: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x47F34Cu;
        goto label_47f34c;
    }
    ctx->pc = 0x47F344u;
    SET_GPR_U32(ctx, 31, 0x47F34Cu);
    ctx->pc = 0x47F348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F344u;
            // 0x47f348: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F34Cu; }
        if (ctx->pc != 0x47F34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F34Cu; }
        if (ctx->pc != 0x47F34Cu) { return; }
    }
    ctx->pc = 0x47F34Cu;
label_47f34c:
    // 0x47f34c: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x47f34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_47f350:
    // 0x47f350: 0xc0aec88  jal         func_2BB220
label_47f354:
    if (ctx->pc == 0x47F354u) {
        ctx->pc = 0x47F354u;
            // 0x47f354: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x47F358u;
        goto label_47f358;
    }
    ctx->pc = 0x47F350u;
    SET_GPR_U32(ctx, 31, 0x47F358u);
    ctx->pc = 0x47F354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F350u;
            // 0x47f354: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F358u; }
        if (ctx->pc != 0x47F358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F358u; }
        if (ctx->pc != 0x47F358u) { return; }
    }
    ctx->pc = 0x47F358u;
label_47f358:
    // 0x47f358: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x47f358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_47f35c:
    // 0x47f35c: 0xc0aec0c  jal         func_2BB030
label_47f360:
    if (ctx->pc == 0x47F360u) {
        ctx->pc = 0x47F360u;
            // 0x47f360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F364u;
        goto label_47f364;
    }
    ctx->pc = 0x47F35Cu;
    SET_GPR_U32(ctx, 31, 0x47F364u);
    ctx->pc = 0x47F360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F35Cu;
            // 0x47f360: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F364u; }
        if (ctx->pc != 0x47F364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F364u; }
        if (ctx->pc != 0x47F364u) { return; }
    }
    ctx->pc = 0x47F364u;
label_47f364:
    // 0x47f364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47f364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47f368:
    // 0x47f368: 0xc0aeaa8  jal         func_2BAAA0
label_47f36c:
    if (ctx->pc == 0x47F36Cu) {
        ctx->pc = 0x47F36Cu;
            // 0x47f36c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F370u;
        goto label_47f370;
    }
    ctx->pc = 0x47F368u;
    SET_GPR_U32(ctx, 31, 0x47F370u);
    ctx->pc = 0x47F36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F368u;
            // 0x47f36c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F370u; }
        if (ctx->pc != 0x47F370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F370u; }
        if (ctx->pc != 0x47F370u) { return; }
    }
    ctx->pc = 0x47F370u;
label_47f370:
    // 0x47f370: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x47f370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_47f374:
    // 0x47f374: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47f374u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_47f378:
    // 0x47f378: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_47f37c:
    if (ctx->pc == 0x47F37Cu) {
        ctx->pc = 0x47F37Cu;
            // 0x47f37c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F380u;
        goto label_47f380;
    }
    ctx->pc = 0x47F378u;
    {
        const bool branch_taken_0x47f378 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47f378) {
            ctx->pc = 0x47F37Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47F378u;
            // 0x47f37c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47F38Cu;
            goto label_47f38c;
        }
    }
    ctx->pc = 0x47F380u;
label_47f380:
    // 0x47f380: 0xc0400a8  jal         func_1002A0
label_47f384:
    if (ctx->pc == 0x47F384u) {
        ctx->pc = 0x47F384u;
            // 0x47f384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F388u;
        goto label_47f388;
    }
    ctx->pc = 0x47F380u;
    SET_GPR_U32(ctx, 31, 0x47F388u);
    ctx->pc = 0x47F384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F380u;
            // 0x47f384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F388u; }
        if (ctx->pc != 0x47F388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F388u; }
        if (ctx->pc != 0x47F388u) { return; }
    }
    ctx->pc = 0x47F388u;
label_47f388:
    // 0x47f388: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47f388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47f38c:
    // 0x47f38c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47f38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_47f390:
    // 0x47f390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47f390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47f394:
    // 0x47f394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47f394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47f398:
    // 0x47f398: 0x3e00008  jr          $ra
label_47f39c:
    if (ctx->pc == 0x47F39Cu) {
        ctx->pc = 0x47F39Cu;
            // 0x47f39c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x47F3A0u;
        goto label_47f3a0;
    }
    ctx->pc = 0x47F398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F398u;
            // 0x47f39c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47F3A0u;
label_47f3a0:
    // 0x47f3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47f3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_47f3a4:
    // 0x47f3a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47f3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_47f3a8:
    // 0x47f3a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47f3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47f3ac:
    // 0x47f3ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47f3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47f3b0:
    // 0x47f3b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47f3b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47f3b4:
    // 0x47f3b4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_47f3b8:
    if (ctx->pc == 0x47F3B8u) {
        ctx->pc = 0x47F3B8u;
            // 0x47f3b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F3BCu;
        goto label_47f3bc;
    }
    ctx->pc = 0x47F3B4u;
    {
        const bool branch_taken_0x47f3b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F3B4u;
            // 0x47f3b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f3b4) {
            ctx->pc = 0x47F418u;
            goto label_47f418;
        }
    }
    ctx->pc = 0x47F3BCu;
label_47f3bc:
    // 0x47f3bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_47f3c0:
    // 0x47f3c0: 0x2442f040  addiu       $v0, $v0, -0xFC0
    ctx->pc = 0x47f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963264));
label_47f3c4:
    // 0x47f3c4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_47f3c8:
    if (ctx->pc == 0x47F3C8u) {
        ctx->pc = 0x47F3C8u;
            // 0x47f3c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x47F3CCu;
        goto label_47f3cc;
    }
    ctx->pc = 0x47F3C4u;
    {
        const bool branch_taken_0x47f3c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F3C4u;
            // 0x47f3c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f3c4) {
            ctx->pc = 0x47F400u;
            goto label_47f400;
        }
    }
    ctx->pc = 0x47F3CCu;
label_47f3cc:
    // 0x47f3cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x47f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_47f3d0:
    // 0x47f3d0: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x47f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_47f3d4:
    // 0x47f3d4: 0xc0d37dc  jal         func_34DF70
label_47f3d8:
    if (ctx->pc == 0x47F3D8u) {
        ctx->pc = 0x47F3D8u;
            // 0x47f3d8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x47F3DCu;
        goto label_47f3dc;
    }
    ctx->pc = 0x47F3D4u;
    SET_GPR_U32(ctx, 31, 0x47F3DCu);
    ctx->pc = 0x47F3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F3D4u;
            // 0x47f3d8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F3DCu; }
        if (ctx->pc != 0x47F3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F3DCu; }
        if (ctx->pc != 0x47F3DCu) { return; }
    }
    ctx->pc = 0x47F3DCu;
label_47f3dc:
    // 0x47f3dc: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_47f3e0:
    if (ctx->pc == 0x47F3E0u) {
        ctx->pc = 0x47F3E0u;
            // 0x47f3e0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x47F3E4u;
        goto label_47f3e4;
    }
    ctx->pc = 0x47F3DCu;
    {
        const bool branch_taken_0x47f3dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f3dc) {
            ctx->pc = 0x47F3E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47F3DCu;
            // 0x47f3e0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47F404u;
            goto label_47f404;
        }
    }
    ctx->pc = 0x47F3E4u;
label_47f3e4:
    // 0x47f3e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x47f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_47f3e8:
    // 0x47f3e8: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x47f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_47f3ec:
    // 0x47f3ec: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_47f3f0:
    if (ctx->pc == 0x47F3F0u) {
        ctx->pc = 0x47F3F0u;
            // 0x47f3f0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x47F3F4u;
        goto label_47f3f4;
    }
    ctx->pc = 0x47F3ECu;
    {
        const bool branch_taken_0x47f3ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F3ECu;
            // 0x47f3f0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f3ec) {
            ctx->pc = 0x47F400u;
            goto label_47f400;
        }
    }
    ctx->pc = 0x47F3F4u;
label_47f3f4:
    // 0x47f3f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x47f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_47f3f8:
    // 0x47f3f8: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x47f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_47f3fc:
    // 0x47f3fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x47f3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_47f400:
    // 0x47f400: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x47f400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_47f404:
    // 0x47f404: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47f404u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_47f408:
    // 0x47f408: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_47f40c:
    if (ctx->pc == 0x47F40Cu) {
        ctx->pc = 0x47F40Cu;
            // 0x47f40c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F410u;
        goto label_47f410;
    }
    ctx->pc = 0x47F408u;
    {
        const bool branch_taken_0x47f408 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47f408) {
            ctx->pc = 0x47F40Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47F408u;
            // 0x47f40c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47F41Cu;
            goto label_47f41c;
        }
    }
    ctx->pc = 0x47F410u;
label_47f410:
    // 0x47f410: 0xc0400a8  jal         func_1002A0
label_47f414:
    if (ctx->pc == 0x47F414u) {
        ctx->pc = 0x47F414u;
            // 0x47f414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F418u;
        goto label_47f418;
    }
    ctx->pc = 0x47F410u;
    SET_GPR_U32(ctx, 31, 0x47F418u);
    ctx->pc = 0x47F414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F410u;
            // 0x47f414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F418u; }
        if (ctx->pc != 0x47F418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F418u; }
        if (ctx->pc != 0x47F418u) { return; }
    }
    ctx->pc = 0x47F418u;
label_47f418:
    // 0x47f418: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47f418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47f41c:
    // 0x47f41c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47f41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_47f420:
    // 0x47f420: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47f420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47f424:
    // 0x47f424: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47f424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47f428:
    // 0x47f428: 0x3e00008  jr          $ra
label_47f42c:
    if (ctx->pc == 0x47F42Cu) {
        ctx->pc = 0x47F42Cu;
            // 0x47f42c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x47F430u;
        goto label_47f430;
    }
    ctx->pc = 0x47F428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F428u;
            // 0x47f42c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47F430u;
label_47f430:
    // 0x47f430: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x47f430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_47f434:
    // 0x47f434: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x47f434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_47f438:
    // 0x47f438: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x47f438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_47f43c:
    // 0x47f43c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x47f43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_47f440:
    // 0x47f440: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x47f440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_47f444:
    // 0x47f444: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x47f444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_47f448:
    // 0x47f448: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x47f448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_47f44c:
    // 0x47f44c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x47f44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_47f450:
    // 0x47f450: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x47f450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_47f454:
    // 0x47f454: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x47f454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_47f458:
    // 0x47f458: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x47f458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_47f45c:
    // 0x47f45c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47f45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_47f460:
    // 0x47f460: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x47f460u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_47f464:
    // 0x47f464: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x47f464u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_47f468:
    // 0x47f468: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_47f46c:
    if (ctx->pc == 0x47F46Cu) {
        ctx->pc = 0x47F46Cu;
            // 0x47f46c: 0xafa400fc  sw          $a0, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
        ctx->pc = 0x47F470u;
        goto label_47f470;
    }
    ctx->pc = 0x47F468u;
    {
        const bool branch_taken_0x47f468 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x47F46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F468u;
            // 0x47f46c: 0xafa400fc  sw          $a0, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f468) {
            ctx->pc = 0x47F4B8u;
            goto label_47f4b8;
        }
    }
    ctx->pc = 0x47F470u;
label_47f470:
    // 0x47f470: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x47f470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47f474:
    // 0x47f474: 0x50a30119  beql        $a1, $v1, . + 4 + (0x119 << 2)
label_47f478:
    if (ctx->pc == 0x47F478u) {
        ctx->pc = 0x47F478u;
            // 0x47f478: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x47F47Cu;
        goto label_47f47c;
    }
    ctx->pc = 0x47F474u;
    {
        const bool branch_taken_0x47f474 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x47f474) {
            ctx->pc = 0x47F478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47F474u;
            // 0x47f478: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47F8DCu;
            goto label_47f8dc;
        }
    }
    ctx->pc = 0x47F47Cu;
label_47f47c:
    // 0x47f47c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47f480:
    // 0x47f480: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_47f484:
    if (ctx->pc == 0x47F484u) {
        ctx->pc = 0x47F488u;
        goto label_47f488;
    }
    ctx->pc = 0x47F480u;
    {
        const bool branch_taken_0x47f480 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x47f480) {
            ctx->pc = 0x47F490u;
            goto label_47f490;
        }
    }
    ctx->pc = 0x47F488u;
label_47f488:
    // 0x47f488: 0x10000113  b           . + 4 + (0x113 << 2)
label_47f48c:
    if (ctx->pc == 0x47F48Cu) {
        ctx->pc = 0x47F490u;
        goto label_47f490;
    }
    ctx->pc = 0x47F488u;
    {
        const bool branch_taken_0x47f488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f488) {
            ctx->pc = 0x47F8D8u;
            goto label_47f8d8;
        }
    }
    ctx->pc = 0x47F490u;
label_47f490:
    // 0x47f490: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47f490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47f494:
    // 0x47f494: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47f494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47f498:
    // 0x47f498: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x47f498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_47f49c:
    // 0x47f49c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x47f49cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_47f4a0:
    // 0x47f4a0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x47f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_47f4a4:
    // 0x47f4a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x47f4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_47f4a8:
    // 0x47f4a8: 0x320f809  jalr        $t9
label_47f4ac:
    if (ctx->pc == 0x47F4ACu) {
        ctx->pc = 0x47F4ACu;
            // 0x47f4ac: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x47F4B0u;
        goto label_47f4b0;
    }
    ctx->pc = 0x47F4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47F4B0u);
        ctx->pc = 0x47F4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F4A8u;
            // 0x47f4ac: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47F4B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47F4B0u; }
            if (ctx->pc != 0x47F4B0u) { return; }
        }
        }
    }
    ctx->pc = 0x47F4B0u;
label_47f4b0:
    // 0x47f4b0: 0x10000109  b           . + 4 + (0x109 << 2)
label_47f4b4:
    if (ctx->pc == 0x47F4B4u) {
        ctx->pc = 0x47F4B8u;
        goto label_47f4b8;
    }
    ctx->pc = 0x47F4B0u;
    {
        const bool branch_taken_0x47f4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f4b0) {
            ctx->pc = 0x47F8D8u;
            goto label_47f8d8;
        }
    }
    ctx->pc = 0x47F4B8u;
label_47f4b8:
    // 0x47f4b8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x47f4b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47f4bc:
    // 0x47f4bc: 0x8c7e0070  lw          $fp, 0x70($v1)
    ctx->pc = 0x47f4bcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_47f4c0:
    // 0x47f4c0: 0x13c00105  beqz        $fp, . + 4 + (0x105 << 2)
label_47f4c4:
    if (ctx->pc == 0x47F4C4u) {
        ctx->pc = 0x47F4C8u;
        goto label_47f4c8;
    }
    ctx->pc = 0x47F4C0u;
    {
        const bool branch_taken_0x47f4c0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f4c0) {
            ctx->pc = 0x47F8D8u;
            goto label_47f8d8;
        }
    }
    ctx->pc = 0x47F4C8u;
label_47f4c8:
    // 0x47f4c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47f4cc:
    // 0x47f4cc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x47f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_47f4d0:
    // 0x47f4d0: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x47f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_47f4d4:
    // 0x47f4d4: 0x8c66d130  lw          $a2, -0x2ED0($v1)
    ctx->pc = 0x47f4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_47f4d8:
    // 0x47f4d8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x47f4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_47f4dc:
    // 0x47f4dc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x47f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_47f4e0:
    // 0x47f4e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47f4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47f4e4:
    // 0x47f4e4: 0x8c45d120  lw          $a1, -0x2EE0($v0)
    ctx->pc = 0x47f4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_47f4e8:
    // 0x47f4e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x47f4e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47f4ec:
    // 0x47f4ec: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x47f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_47f4f0:
    // 0x47f4f0: 0x24570084  addiu       $s7, $v0, 0x84
    ctx->pc = 0x47f4f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
label_47f4f4:
    // 0x47f4f4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x47f4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_47f4f8:
    // 0x47f4f8: 0x8c62e370  lw          $v0, -0x1C90($v1)
    ctx->pc = 0x47f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_47f4fc:
    // 0x47f4fc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x47f4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_47f500:
    // 0x47f500: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47f500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47f504:
    // 0x47f504: 0x8cc20130  lw          $v0, 0x130($a2)
    ctx->pc = 0x47f504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_47f508:
    // 0x47f508: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x47f508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_47f50c:
    // 0x47f50c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x47f50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47f510:
    // 0x47f510: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47f510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47f514:
    // 0x47f514: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x47f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_47f518:
    // 0x47f518: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47f518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47f51c:
    // 0x47f51c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x47f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_47f520:
    // 0x47f520: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x47f520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_47f524:
    // 0x47f524: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x47f524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_47f528:
    // 0x47f528: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x47f528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_47f52c:
    // 0x47f52c: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x47f52cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_47f530:
    // 0x47f530: 0x8c4500d8  lw          $a1, 0xD8($v0)
    ctx->pc = 0x47f530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_47f534:
    // 0x47f534: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x47f534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_47f538:
    // 0x47f538: 0x8c440900  lw          $a0, 0x900($v0)
    ctx->pc = 0x47f538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2304)));
label_47f53c:
    // 0x47f53c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x47f53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_47f540:
    // 0x47f540: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x47f540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_47f544:
    // 0x47f544: 0x802027  not         $a0, $a0
    ctx->pc = 0x47f544u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_47f548:
    // 0x47f548: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x47f548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_47f54c:
    // 0x47f54c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x47f54cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_47f550:
    // 0x47f550: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
label_47f554:
    if (ctx->pc == 0x47F554u) {
        ctx->pc = 0x47F554u;
            // 0x47f554: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->pc = 0x47F558u;
        goto label_47f558;
    }
    ctx->pc = 0x47F550u;
    {
        const bool branch_taken_0x47f550 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x47F554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F550u;
            // 0x47f554: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f550) {
            ctx->pc = 0x47F538u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47f538;
        }
    }
    ctx->pc = 0x47F558u;
label_47f558:
    // 0x47f558: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x47f558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_47f55c:
    // 0x47f55c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x47f55cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47f560:
    // 0x47f560: 0xc454fa08  lwc1        $f20, -0x5F8($v0)
    ctx->pc = 0x47f560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_47f564:
    // 0x47f564: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x47f564u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47f568:
    // 0x47f568: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x47f568u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_47f56c:
    // 0x47f56c: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x47f56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
label_47f570:
    // 0x47f570: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x47f570u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_47f574:
    // 0x47f574: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x47f574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_47f578:
    // 0x47f578: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x47f578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_47f57c:
    // 0x47f57c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x47f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_47f580:
    // 0x47f580: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x47f580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_47f584:
    // 0x47f584: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x47f584u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47f588:
    // 0x47f588: 0xc11fe70  jal         func_47F9C0
label_47f58c:
    if (ctx->pc == 0x47F58Cu) {
        ctx->pc = 0x47F58Cu;
            // 0x47f58c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F590u;
        goto label_47f590;
    }
    ctx->pc = 0x47F588u;
    SET_GPR_U32(ctx, 31, 0x47F590u);
    ctx->pc = 0x47F58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F588u;
            // 0x47f58c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47F9C0u;
    if (runtime->hasFunction(0x47F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x47F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F590u; }
        if (ctx->pc != 0x47F590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047F9C0_0x47f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F590u; }
        if (ctx->pc != 0x47F590u) { return; }
    }
    ctx->pc = 0x47F590u;
label_47f590:
    // 0x47f590: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47f590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47f594:
    // 0x47f594: 0x14430042  bne         $v0, $v1, . + 4 + (0x42 << 2)
label_47f598:
    if (ctx->pc == 0x47F598u) {
        ctx->pc = 0x47F59Cu;
        goto label_47f59c;
    }
    ctx->pc = 0x47F594u;
    {
        const bool branch_taken_0x47f594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x47f594) {
            ctx->pc = 0x47F6A0u;
            goto label_47f6a0;
        }
    }
    ctx->pc = 0x47F59Cu;
label_47f59c:
    // 0x47f59c: 0xc0d1c14  jal         func_347050
label_47f5a0:
    if (ctx->pc == 0x47F5A0u) {
        ctx->pc = 0x47F5A0u;
            // 0x47f5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F5A4u;
        goto label_47f5a4;
    }
    ctx->pc = 0x47F59Cu;
    SET_GPR_U32(ctx, 31, 0x47F5A4u);
    ctx->pc = 0x47F5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F59Cu;
            // 0x47f5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F5A4u; }
        if (ctx->pc != 0x47F5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F5A4u; }
        if (ctx->pc != 0x47F5A4u) { return; }
    }
    ctx->pc = 0x47F5A4u;
label_47f5a4:
    // 0x47f5a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47f5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47f5a8:
    // 0x47f5a8: 0xc04f278  jal         func_13C9E0
label_47f5ac:
    if (ctx->pc == 0x47F5ACu) {
        ctx->pc = 0x47F5ACu;
            // 0x47f5ac: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x47F5B0u;
        goto label_47f5b0;
    }
    ctx->pc = 0x47F5A8u;
    SET_GPR_U32(ctx, 31, 0x47F5B0u);
    ctx->pc = 0x47F5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F5A8u;
            // 0x47f5ac: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F5B0u; }
        if (ctx->pc != 0x47F5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F5B0u; }
        if (ctx->pc != 0x47F5B0u) { return; }
    }
    ctx->pc = 0x47F5B0u;
label_47f5b0:
    // 0x47f5b0: 0xc0d1c10  jal         func_347040
label_47f5b4:
    if (ctx->pc == 0x47F5B4u) {
        ctx->pc = 0x47F5B4u;
            // 0x47f5b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F5B8u;
        goto label_47f5b8;
    }
    ctx->pc = 0x47F5B0u;
    SET_GPR_U32(ctx, 31, 0x47F5B8u);
    ctx->pc = 0x47F5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F5B0u;
            // 0x47f5b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F5B8u; }
        if (ctx->pc != 0x47F5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F5B8u; }
        if (ctx->pc != 0x47F5B8u) { return; }
    }
    ctx->pc = 0x47F5B8u;
label_47f5b8:
    // 0x47f5b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47f5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47f5bc:
    // 0x47f5bc: 0xc04ce80  jal         func_133A00
label_47f5c0:
    if (ctx->pc == 0x47F5C0u) {
        ctx->pc = 0x47F5C0u;
            // 0x47f5c0: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x47F5C4u;
        goto label_47f5c4;
    }
    ctx->pc = 0x47F5BCu;
    SET_GPR_U32(ctx, 31, 0x47F5C4u);
    ctx->pc = 0x47F5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F5BCu;
            // 0x47f5c0: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F5C4u; }
        if (ctx->pc != 0x47F5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F5C4u; }
        if (ctx->pc != 0x47F5C4u) { return; }
    }
    ctx->pc = 0x47F5C4u;
label_47f5c4:
    // 0x47f5c4: 0xc0d4108  jal         func_350420
label_47f5c8:
    if (ctx->pc == 0x47F5C8u) {
        ctx->pc = 0x47F5CCu;
        goto label_47f5cc;
    }
    ctx->pc = 0x47F5C4u;
    SET_GPR_U32(ctx, 31, 0x47F5CCu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F5CCu; }
        if (ctx->pc != 0x47F5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F5CCu; }
        if (ctx->pc != 0x47F5CCu) { return; }
    }
    ctx->pc = 0x47F5CCu;
label_47f5cc:
    // 0x47f5cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47f5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47f5d0:
    // 0x47f5d0: 0xc0d4104  jal         func_350410
label_47f5d4:
    if (ctx->pc == 0x47F5D4u) {
        ctx->pc = 0x47F5D4u;
            // 0x47f5d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F5D8u;
        goto label_47f5d8;
    }
    ctx->pc = 0x47F5D0u;
    SET_GPR_U32(ctx, 31, 0x47F5D8u);
    ctx->pc = 0x47F5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F5D0u;
            // 0x47f5d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F5D8u; }
        if (ctx->pc != 0x47F5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F5D8u; }
        if (ctx->pc != 0x47F5D8u) { return; }
    }
    ctx->pc = 0x47F5D8u;
label_47f5d8:
    // 0x47f5d8: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x47f5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_47f5dc:
    // 0x47f5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47f5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47f5e0:
    // 0x47f5e0: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x47f5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_47f5e4:
    // 0x47f5e4: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x47f5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_47f5e8:
    // 0x47f5e8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x47f5e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47f5ec:
    // 0x47f5ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x47f5ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47f5f0:
    // 0x47f5f0: 0xc0d40ac  jal         func_3502B0
label_47f5f4:
    if (ctx->pc == 0x47F5F4u) {
        ctx->pc = 0x47F5F4u;
            // 0x47f5f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x47F5F8u;
        goto label_47f5f8;
    }
    ctx->pc = 0x47F5F0u;
    SET_GPR_U32(ctx, 31, 0x47F5F8u);
    ctx->pc = 0x47F5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F5F0u;
            // 0x47f5f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F5F8u; }
        if (ctx->pc != 0x47F5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F5F8u; }
        if (ctx->pc != 0x47F5F8u) { return; }
    }
    ctx->pc = 0x47F5F8u;
label_47f5f8:
    // 0x47f5f8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x47f5f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_47f5fc:
    // 0x47f5fc: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_47f600:
    if (ctx->pc == 0x47F600u) {
        ctx->pc = 0x47F600u;
            // 0x47f600: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x47F604u;
        goto label_47f604;
    }
    ctx->pc = 0x47F5FCu;
    {
        const bool branch_taken_0x47f5fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F5FCu;
            // 0x47f600: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f5fc) {
            ctx->pc = 0x47F6A0u;
            goto label_47f6a0;
        }
    }
    ctx->pc = 0x47F604u;
label_47f604:
    // 0x47f604: 0x8ef40000  lw          $s4, 0x0($s7)
    ctx->pc = 0x47f604u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_47f608:
    // 0x47f608: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x47f608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_47f60c:
    // 0x47f60c: 0x27a601dc  addiu       $a2, $sp, 0x1DC
    ctx->pc = 0x47f60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
label_47f610:
    // 0x47f610: 0xc11fe48  jal         func_47F920
label_47f614:
    if (ctx->pc == 0x47F614u) {
        ctx->pc = 0x47F614u;
            // 0x47f614: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F618u;
        goto label_47f618;
    }
    ctx->pc = 0x47F610u;
    SET_GPR_U32(ctx, 31, 0x47F618u);
    ctx->pc = 0x47F614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F610u;
            // 0x47f614: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47F920u;
    if (runtime->hasFunction(0x47F920u)) {
        auto targetFn = runtime->lookupFunction(0x47F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F618u; }
        if (ctx->pc != 0x47F618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047F920_0x47f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F618u; }
        if (ctx->pc != 0x47F618u) { return; }
    }
    ctx->pc = 0x47F618u;
label_47f618:
    // 0x47f618: 0x8fa401dc  lw          $a0, 0x1DC($sp)
    ctx->pc = 0x47f618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_47f61c:
    // 0x47f61c: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x47f61cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_47f620:
    // 0x47f620: 0xc04e4a4  jal         func_139290
label_47f624:
    if (ctx->pc == 0x47F624u) {
        ctx->pc = 0x47F624u;
            // 0x47f624: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F628u;
        goto label_47f628;
    }
    ctx->pc = 0x47F620u;
    SET_GPR_U32(ctx, 31, 0x47F628u);
    ctx->pc = 0x47F624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F620u;
            // 0x47f624: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F628u; }
        if (ctx->pc != 0x47F628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F628u; }
        if (ctx->pc != 0x47F628u) { return; }
    }
    ctx->pc = 0x47F628u;
label_47f628:
    // 0x47f628: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x47f628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47f62c:
    // 0x47f62c: 0x26320080  addiu       $s2, $s1, 0x80
    ctx->pc = 0x47f62cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_47f630:
    // 0x47f630: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47f630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47f634:
    // 0x47f634: 0x0  nop
    ctx->pc = 0x47f634u;
    // NOP
label_47f638:
    // 0x47f638: 0xc11fe44  jal         func_47F910
label_47f63c:
    if (ctx->pc == 0x47F63Cu) {
        ctx->pc = 0x47F63Cu;
            // 0x47f63c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F640u;
        goto label_47f640;
    }
    ctx->pc = 0x47F638u;
    SET_GPR_U32(ctx, 31, 0x47F640u);
    ctx->pc = 0x47F63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F638u;
            // 0x47f63c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47F910u;
    if (runtime->hasFunction(0x47F910u)) {
        auto targetFn = runtime->lookupFunction(0x47F910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F640u; }
        if (ctx->pc != 0x47F640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047F910_0x47f910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F640u; }
        if (ctx->pc != 0x47F640u) { return; }
    }
    ctx->pc = 0x47F640u;
label_47f640:
    // 0x47f640: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x47f640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_47f644:
    // 0x47f644: 0x2202a  slt         $a0, $zero, $v0
    ctx->pc = 0x47f644u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_47f648:
    // 0x47f648: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x47f648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_47f64c:
    // 0x47f64c: 0x265200e0  addiu       $s2, $s2, 0xE0
    ctx->pc = 0x47f64cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_47f650:
    // 0x47f650: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x47f650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_47f654:
    // 0x47f654: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x47f654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_47f658:
    // 0x47f658: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x47f658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_47f65c:
    // 0x47f65c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_47f660:
    if (ctx->pc == 0x47F660u) {
        ctx->pc = 0x47F660u;
            // 0x47f660: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x47F664u;
        goto label_47f664;
    }
    ctx->pc = 0x47F65Cu;
    {
        const bool branch_taken_0x47f65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47F660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F65Cu;
            // 0x47f660: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f65c) {
            ctx->pc = 0x47F638u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47f638;
        }
    }
    ctx->pc = 0x47F664u;
label_47f664:
    // 0x47f664: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x47f664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_47f668:
    // 0x47f668: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x47f668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_47f66c:
    // 0x47f66c: 0xc04cd60  jal         func_133580
label_47f670:
    if (ctx->pc == 0x47F670u) {
        ctx->pc = 0x47F670u;
            // 0x47f670: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x47F674u;
        goto label_47f674;
    }
    ctx->pc = 0x47F66Cu;
    SET_GPR_U32(ctx, 31, 0x47F674u);
    ctx->pc = 0x47F670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F66Cu;
            // 0x47f670: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F674u; }
        if (ctx->pc != 0x47F674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F674u; }
        if (ctx->pc != 0x47F674u) { return; }
    }
    ctx->pc = 0x47F674u;
label_47f674:
    // 0x47f674: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x47f674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_47f678:
    // 0x47f678: 0xc62c0058  lwc1        $f12, 0x58($s1)
    ctx->pc = 0x47f678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_47f67c:
    // 0x47f67c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x47f67cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_47f680:
    // 0x47f680: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x47f680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_47f684:
    // 0x47f684: 0x8ee70008  lw          $a3, 0x8($s7)
    ctx->pc = 0x47f684u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_47f688:
    // 0x47f688: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x47f688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_47f68c:
    // 0x47f68c: 0x27a80100  addiu       $t0, $sp, 0x100
    ctx->pc = 0x47f68cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_47f690:
    // 0x47f690: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x47f690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_47f694:
    // 0x47f694: 0xc04cff4  jal         func_133FD0
label_47f698:
    if (ctx->pc == 0x47F698u) {
        ctx->pc = 0x47F698u;
            // 0x47f698: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47F69Cu;
        goto label_47f69c;
    }
    ctx->pc = 0x47F694u;
    SET_GPR_U32(ctx, 31, 0x47F69Cu);
    ctx->pc = 0x47F698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F694u;
            // 0x47f698: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F69Cu; }
        if (ctx->pc != 0x47F69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F69Cu; }
        if (ctx->pc != 0x47F69Cu) { return; }
    }
    ctx->pc = 0x47F69Cu;
label_47f69c:
    // 0x47f69c: 0x0  nop
    ctx->pc = 0x47f69cu;
    // NOP
label_47f6a0:
    // 0x47f6a0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x47f6a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_47f6a4:
    // 0x47f6a4: 0x2be182b  sltu        $v1, $s5, $fp
    ctx->pc = 0x47f6a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_47f6a8:
    // 0x47f6a8: 0x1460ffaf  bnez        $v1, . + 4 + (-0x51 << 2)
label_47f6ac:
    if (ctx->pc == 0x47F6ACu) {
        ctx->pc = 0x47F6ACu;
            // 0x47f6ac: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x47F6B0u;
        goto label_47f6b0;
    }
    ctx->pc = 0x47F6A8u;
    {
        const bool branch_taken_0x47f6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x47F6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F6A8u;
            // 0x47f6ac: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f6a8) {
            ctx->pc = 0x47F568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47f568;
        }
    }
    ctx->pc = 0x47F6B0u;
label_47f6b0:
    // 0x47f6b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47f6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47f6b4:
    // 0x47f6b4: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x47f6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_47f6b8:
    // 0x47f6b8: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_47f6bc:
    if (ctx->pc == 0x47F6BCu) {
        ctx->pc = 0x47F6C0u;
        goto label_47f6c0;
    }
    ctx->pc = 0x47F6B8u;
    {
        const bool branch_taken_0x47f6b8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x47f6b8) {
            ctx->pc = 0x47F6F0u;
            goto label_47f6f0;
        }
    }
    ctx->pc = 0x47F6C0u;
label_47f6c0:
    // 0x47f6c0: 0xc04e738  jal         func_139CE0
label_47f6c4:
    if (ctx->pc == 0x47F6C4u) {
        ctx->pc = 0x47F6C4u;
            // 0x47f6c4: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->pc = 0x47F6C8u;
        goto label_47f6c8;
    }
    ctx->pc = 0x47F6C0u;
    SET_GPR_U32(ctx, 31, 0x47F6C8u);
    ctx->pc = 0x47F6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F6C0u;
            // 0x47f6c4: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F6C8u; }
        if (ctx->pc != 0x47F6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F6C8u; }
        if (ctx->pc != 0x47F6C8u) { return; }
    }
    ctx->pc = 0x47F6C8u;
label_47f6c8:
    // 0x47f6c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47f6cc:
    // 0x47f6cc: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x47f6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_47f6d0:
    // 0x47f6d0: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x47f6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_47f6d4:
    // 0x47f6d4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x47f6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_47f6d8:
    // 0x47f6d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47f6dc:
    // 0x47f6dc: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x47f6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_47f6e0:
    // 0x47f6e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47f6e4:
    // 0x47f6e4: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x47f6e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_47f6e8:
    // 0x47f6e8: 0xc055990  jal         func_156640
label_47f6ec:
    if (ctx->pc == 0x47F6ECu) {
        ctx->pc = 0x47F6ECu;
            // 0x47f6ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F6F0u;
        goto label_47f6f0;
    }
    ctx->pc = 0x47F6E8u;
    SET_GPR_U32(ctx, 31, 0x47F6F0u);
    ctx->pc = 0x47F6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F6E8u;
            // 0x47f6ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F6F0u; }
        if (ctx->pc != 0x47F6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F6F0u; }
        if (ctx->pc != 0x47F6F0u) { return; }
    }
    ctx->pc = 0x47F6F0u;
label_47f6f0:
    // 0x47f6f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47f6f4:
    // 0x47f6f4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x47f6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_47f6f8:
    // 0x47f6f8: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x47f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_47f6fc:
    // 0x47f6fc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x47f6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47f700:
    // 0x47f700: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x47f700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_47f704:
    // 0x47f704: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x47f704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_47f708:
    // 0x47f708: 0x8c6700d8  lw          $a3, 0xD8($v1)
    ctx->pc = 0x47f708u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
label_47f70c:
    // 0x47f70c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x47f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_47f710:
    // 0x47f710: 0x8c650908  lw          $a1, 0x908($v1)
    ctx->pc = 0x47f710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2312)));
label_47f714:
    // 0x47f714: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x47f714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_47f718:
    // 0x47f718: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x47f718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_47f71c:
    // 0x47f71c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x47f71cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_47f720:
    // 0x47f720: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x47f720u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_47f724:
    // 0x47f724: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
label_47f728:
    if (ctx->pc == 0x47F728u) {
        ctx->pc = 0x47F728u;
            // 0x47f728: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->pc = 0x47F72Cu;
        goto label_47f72c;
    }
    ctx->pc = 0x47F724u;
    {
        const bool branch_taken_0x47f724 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x47F728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F724u;
            // 0x47f728: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f724) {
            ctx->pc = 0x47F710u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47f710;
        }
    }
    ctx->pc = 0x47F72Cu;
label_47f72c:
    // 0x47f72c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47f72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47f730:
    // 0x47f730: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x47f730u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47f734:
    // 0x47f734: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x47f734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_47f738:
    // 0x47f738: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x47f738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_47f73c:
    // 0x47f73c: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x47f73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_47f740:
    // 0x47f740: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x47f740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_47f744:
    // 0x47f744: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x47f744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_47f748:
    // 0x47f748: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x47f748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_47f74c:
    // 0x47f74c: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
label_47f750:
    if (ctx->pc == 0x47F750u) {
        ctx->pc = 0x47F754u;
        goto label_47f754;
    }
    ctx->pc = 0x47F74Cu;
    {
        const bool branch_taken_0x47f74c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f74c) {
            ctx->pc = 0x47F888u;
            goto label_47f888;
        }
    }
    ctx->pc = 0x47F754u;
label_47f754:
    // 0x47f754: 0x24940080  addiu       $s4, $a0, 0x80
    ctx->pc = 0x47f754u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_47f758:
    // 0x47f758: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x47f758u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47f75c:
    // 0x47f75c: 0x0  nop
    ctx->pc = 0x47f75cu;
    // NOP
label_47f760:
    // 0x47f760: 0x8e8400d0  lw          $a0, 0xD0($s4)
    ctx->pc = 0x47f760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
label_47f764:
    // 0x47f764: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47f764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47f768:
    // 0x47f768: 0x14830043  bne         $a0, $v1, . + 4 + (0x43 << 2)
label_47f76c:
    if (ctx->pc == 0x47F76Cu) {
        ctx->pc = 0x47F770u;
        goto label_47f770;
    }
    ctx->pc = 0x47F768u;
    {
        const bool branch_taken_0x47f768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x47f768) {
            ctx->pc = 0x47F878u;
            goto label_47f878;
        }
    }
    ctx->pc = 0x47F770u;
label_47f770:
    // 0x47f770: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x47f770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_47f774:
    // 0x47f774: 0xc04f278  jal         func_13C9E0
label_47f778:
    if (ctx->pc == 0x47F778u) {
        ctx->pc = 0x47F778u;
            // 0x47f778: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x47F77Cu;
        goto label_47f77c;
    }
    ctx->pc = 0x47F774u;
    SET_GPR_U32(ctx, 31, 0x47F77Cu);
    ctx->pc = 0x47F778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F774u;
            // 0x47f778: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F77Cu; }
        if (ctx->pc != 0x47F77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F77Cu; }
        if (ctx->pc != 0x47F77Cu) { return; }
    }
    ctx->pc = 0x47F77Cu;
label_47f77c:
    // 0x47f77c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x47f77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_47f780:
    // 0x47f780: 0xc04ce80  jal         func_133A00
label_47f784:
    if (ctx->pc == 0x47F784u) {
        ctx->pc = 0x47F784u;
            // 0x47f784: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x47F788u;
        goto label_47f788;
    }
    ctx->pc = 0x47F780u;
    SET_GPR_U32(ctx, 31, 0x47F788u);
    ctx->pc = 0x47F784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F780u;
            // 0x47f784: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F788u; }
        if (ctx->pc != 0x47F788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F788u; }
        if (ctx->pc != 0x47F788u) { return; }
    }
    ctx->pc = 0x47F788u;
label_47f788:
    // 0x47f788: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47f788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47f78c:
    // 0x47f78c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47f790:
    // 0x47f790: 0x8c46e3c0  lw          $a2, -0x1C40($v0)
    ctx->pc = 0x47f790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_47f794:
    // 0x47f794: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x47f794u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_47f798:
    // 0x47f798: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x47f798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_47f79c:
    // 0x47f79c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x47f79cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_47f7a0:
    // 0x47f7a0: 0x8ef10000  lw          $s1, 0x0($s7)
    ctx->pc = 0x47f7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_47f7a4:
    // 0x47f7a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47f7a8:
    // 0x47f7a8: 0x8c45e3d8  lw          $a1, -0x1C28($v0)
    ctx->pc = 0x47f7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_47f7ac:
    // 0x47f7ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47f7b0:
    // 0x47f7b0: 0x8c44e360  lw          $a0, -0x1CA0($v0)
    ctx->pc = 0x47f7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_47f7b4:
    // 0x47f7b4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x47f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_47f7b8:
    // 0x47f7b8: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x47f7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_47f7bc:
    // 0x47f7bc: 0x869821  addu        $s3, $a0, $a2
    ctx->pc = 0x47f7bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_47f7c0:
    // 0x47f7c0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x47f7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_47f7c4:
    // 0x47f7c4: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x47f7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47f7c8:
    // 0x47f7c8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x47f7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_47f7cc:
    // 0x47f7cc: 0xacd30000  sw          $s3, 0x0($a2)
    ctx->pc = 0x47f7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 19));
label_47f7d0:
    // 0x47f7d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47f7d4:
    // 0x47f7d4: 0x8c89e378  lw          $t1, -0x1C88($a0)
    ctx->pc = 0x47f7d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_47f7d8:
    // 0x47f7d8: 0x8ca6e3d8  lw          $a2, -0x1C28($a1)
    ctx->pc = 0x47f7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
label_47f7dc:
    // 0x47f7dc: 0x8c64e3b8  lw          $a0, -0x1C48($v1)
    ctx->pc = 0x47f7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
label_47f7e0:
    // 0x47f7e0: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x47f7e0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_47f7e4:
    // 0x47f7e4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x47f7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_47f7e8:
    // 0x47f7e8: 0x12a9021  addu        $s2, $t1, $t2
    ctx->pc = 0x47f7e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_47f7ec:
    // 0x47f7ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x47f7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47f7f0:
    // 0x47f7f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x47f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_47f7f4:
    // 0x47f7f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47f7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47f7f8:
    // 0x47f7f8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x47f7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_47f7fc:
    // 0x47f7fc: 0x8ca2e3c0  lw          $v0, -0x1C40($a1)
    ctx->pc = 0x47f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_47f800:
    // 0x47f800: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x47f800u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_47f804:
    // 0x47f804: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x47f804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_47f808:
    // 0x47f808: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x47f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_47f80c:
    // 0x47f80c: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x47f80cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
label_47f810:
    // 0x47f810: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x47f810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_47f814:
    // 0x47f814: 0xace2e3d8  sw          $v0, -0x1C28($a3)
    ctx->pc = 0x47f814u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 2));
label_47f818:
    // 0x47f818: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x47f818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_47f81c:
    // 0x47f81c: 0xc04e4a4  jal         func_139290
label_47f820:
    if (ctx->pc == 0x47F820u) {
        ctx->pc = 0x47F820u;
            // 0x47f820: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F824u;
        goto label_47f824;
    }
    ctx->pc = 0x47F81Cu;
    SET_GPR_U32(ctx, 31, 0x47F824u);
    ctx->pc = 0x47F820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F81Cu;
            // 0x47f820: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F824u; }
        if (ctx->pc != 0x47F824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F824u; }
        if (ctx->pc != 0x47F824u) { return; }
    }
    ctx->pc = 0x47F824u;
label_47f824:
    // 0x47f824: 0x8e8200d8  lw          $v0, 0xD8($s4)
    ctx->pc = 0x47f824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
label_47f828:
    // 0x47f828: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x47f828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_47f82c:
    // 0x47f82c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x47f82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_47f830:
    // 0x47f830: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x47f830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_47f834:
    // 0x47f834: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47f834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47f838:
    // 0x47f838: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x47f838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47f83c:
    // 0x47f83c: 0xc04cd60  jal         func_133580
label_47f840:
    if (ctx->pc == 0x47F840u) {
        ctx->pc = 0x47F840u;
            // 0x47f840: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x47F844u;
        goto label_47f844;
    }
    ctx->pc = 0x47F83Cu;
    SET_GPR_U32(ctx, 31, 0x47F844u);
    ctx->pc = 0x47F840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F83Cu;
            // 0x47f840: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F844u; }
        if (ctx->pc != 0x47F844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F844u; }
        if (ctx->pc != 0x47F844u) { return; }
    }
    ctx->pc = 0x47F844u;
label_47f844:
    // 0x47f844: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x47f844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_47f848:
    // 0x47f848: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x47f848u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_47f84c:
    // 0x47f84c: 0x320f809  jalr        $t9
label_47f850:
    if (ctx->pc == 0x47F850u) {
        ctx->pc = 0x47F850u;
            // 0x47f850: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F854u;
        goto label_47f854;
    }
    ctx->pc = 0x47F84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47F854u);
        ctx->pc = 0x47F850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F84Cu;
            // 0x47f850: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47F854u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47F854u; }
            if (ctx->pc != 0x47F854u) { return; }
        }
        }
    }
    ctx->pc = 0x47F854u;
label_47f854:
    // 0x47f854: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x47f854u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_47f858:
    // 0x47f858: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x47f858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47f85c:
    // 0x47f85c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x47f85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47f860:
    // 0x47f860: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x47f860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47f864:
    // 0x47f864: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x47f864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_47f868:
    // 0x47f868: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x47f868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_47f86c:
    // 0x47f86c: 0xc04cfcc  jal         func_133F30
label_47f870:
    if (ctx->pc == 0x47F870u) {
        ctx->pc = 0x47F870u;
            // 0x47f870: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47F874u;
        goto label_47f874;
    }
    ctx->pc = 0x47F86Cu;
    SET_GPR_U32(ctx, 31, 0x47F874u);
    ctx->pc = 0x47F870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F86Cu;
            // 0x47f870: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F874u; }
        if (ctx->pc != 0x47F874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F874u; }
        if (ctx->pc != 0x47F874u) { return; }
    }
    ctx->pc = 0x47F874u;
label_47f874:
    // 0x47f874: 0x0  nop
    ctx->pc = 0x47f874u;
    // NOP
label_47f878:
    // 0x47f878: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x47f878u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_47f87c:
    // 0x47f87c: 0x16a0ffb8  bnez        $s5, . + 4 + (-0x48 << 2)
label_47f880:
    if (ctx->pc == 0x47F880u) {
        ctx->pc = 0x47F880u;
            // 0x47f880: 0x269400e0  addiu       $s4, $s4, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
        ctx->pc = 0x47F884u;
        goto label_47f884;
    }
    ctx->pc = 0x47F87Cu;
    {
        const bool branch_taken_0x47f87c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x47F880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F87Cu;
            // 0x47f880: 0x269400e0  addiu       $s4, $s4, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f87c) {
            ctx->pc = 0x47F760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47f760;
        }
    }
    ctx->pc = 0x47F884u;
label_47f884:
    // 0x47f884: 0x0  nop
    ctx->pc = 0x47f884u;
    // NOP
label_47f888:
    // 0x47f888: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x47f888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47f88c:
    // 0x47f88c: 0x21e182b  sltu        $v1, $s0, $fp
    ctx->pc = 0x47f88cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_47f890:
    // 0x47f890: 0x1460ffa8  bnez        $v1, . + 4 + (-0x58 << 2)
label_47f894:
    if (ctx->pc == 0x47F894u) {
        ctx->pc = 0x47F894u;
            // 0x47f894: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x47F898u;
        goto label_47f898;
    }
    ctx->pc = 0x47F890u;
    {
        const bool branch_taken_0x47f890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x47F894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F890u;
            // 0x47f894: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f890) {
            ctx->pc = 0x47F734u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47f734;
        }
    }
    ctx->pc = 0x47F898u;
label_47f898:
    // 0x47f898: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47f898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47f89c:
    // 0x47f89c: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x47f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_47f8a0:
    // 0x47f8a0: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_47f8a4:
    if (ctx->pc == 0x47F8A4u) {
        ctx->pc = 0x47F8A8u;
        goto label_47f8a8;
    }
    ctx->pc = 0x47F8A0u;
    {
        const bool branch_taken_0x47f8a0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x47f8a0) {
            ctx->pc = 0x47F8D8u;
            goto label_47f8d8;
        }
    }
    ctx->pc = 0x47F8A8u;
label_47f8a8:
    // 0x47f8a8: 0xc04e738  jal         func_139CE0
label_47f8ac:
    if (ctx->pc == 0x47F8ACu) {
        ctx->pc = 0x47F8ACu;
            // 0x47f8ac: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->pc = 0x47F8B0u;
        goto label_47f8b0;
    }
    ctx->pc = 0x47F8A8u;
    SET_GPR_U32(ctx, 31, 0x47F8B0u);
    ctx->pc = 0x47F8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F8A8u;
            // 0x47f8ac: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F8B0u; }
        if (ctx->pc != 0x47F8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F8B0u; }
        if (ctx->pc != 0x47F8B0u) { return; }
    }
    ctx->pc = 0x47F8B0u;
label_47f8b0:
    // 0x47f8b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47f8b4:
    // 0x47f8b4: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x47f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_47f8b8:
    // 0x47f8b8: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x47f8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_47f8bc:
    // 0x47f8bc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x47f8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_47f8c0:
    // 0x47f8c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47f8c4:
    // 0x47f8c4: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x47f8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_47f8c8:
    // 0x47f8c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47f8cc:
    // 0x47f8cc: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x47f8ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_47f8d0:
    // 0x47f8d0: 0xc055754  jal         func_155D50
label_47f8d4:
    if (ctx->pc == 0x47F8D4u) {
        ctx->pc = 0x47F8D4u;
            // 0x47f8d4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x47F8D8u;
        goto label_47f8d8;
    }
    ctx->pc = 0x47F8D0u;
    SET_GPR_U32(ctx, 31, 0x47F8D8u);
    ctx->pc = 0x47F8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47F8D0u;
            // 0x47f8d4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F8D8u; }
        if (ctx->pc != 0x47F8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47F8D8u; }
        if (ctx->pc != 0x47F8D8u) { return; }
    }
    ctx->pc = 0x47F8D8u;
label_47f8d8:
    // 0x47f8d8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x47f8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_47f8dc:
    // 0x47f8dc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x47f8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_47f8e0:
    // 0x47f8e0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x47f8e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_47f8e4:
    // 0x47f8e4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x47f8e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_47f8e8:
    // 0x47f8e8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x47f8e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_47f8ec:
    // 0x47f8ec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x47f8ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47f8f0:
    // 0x47f8f0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x47f8f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47f8f4:
    // 0x47f8f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x47f8f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47f8f8:
    // 0x47f8f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x47f8f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47f8fc:
    // 0x47f8fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x47f8fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47f900:
    // 0x47f900: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47f900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47f904:
    // 0x47f904: 0x3e00008  jr          $ra
label_47f908:
    if (ctx->pc == 0x47F908u) {
        ctx->pc = 0x47F908u;
            // 0x47f908: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x47F90Cu;
        goto label_47f90c;
    }
    ctx->pc = 0x47F904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F904u;
            // 0x47f908: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47F90Cu;
label_47f90c:
    // 0x47f90c: 0x0  nop
    ctx->pc = 0x47f90cu;
    // NOP
}
