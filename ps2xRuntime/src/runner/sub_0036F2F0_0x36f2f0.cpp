#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036F2F0
// Address: 0x36f2f0 - 0x3709e0
void sub_0036F2F0_0x36f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F2F0_0x36f2f0");
#endif

    switch (ctx->pc) {
        case 0x36f2f0u: goto label_36f2f0;
        case 0x36f2f4u: goto label_36f2f4;
        case 0x36f2f8u: goto label_36f2f8;
        case 0x36f2fcu: goto label_36f2fc;
        case 0x36f300u: goto label_36f300;
        case 0x36f304u: goto label_36f304;
        case 0x36f308u: goto label_36f308;
        case 0x36f30cu: goto label_36f30c;
        case 0x36f310u: goto label_36f310;
        case 0x36f314u: goto label_36f314;
        case 0x36f318u: goto label_36f318;
        case 0x36f31cu: goto label_36f31c;
        case 0x36f320u: goto label_36f320;
        case 0x36f324u: goto label_36f324;
        case 0x36f328u: goto label_36f328;
        case 0x36f32cu: goto label_36f32c;
        case 0x36f330u: goto label_36f330;
        case 0x36f334u: goto label_36f334;
        case 0x36f338u: goto label_36f338;
        case 0x36f33cu: goto label_36f33c;
        case 0x36f340u: goto label_36f340;
        case 0x36f344u: goto label_36f344;
        case 0x36f348u: goto label_36f348;
        case 0x36f34cu: goto label_36f34c;
        case 0x36f350u: goto label_36f350;
        case 0x36f354u: goto label_36f354;
        case 0x36f358u: goto label_36f358;
        case 0x36f35cu: goto label_36f35c;
        case 0x36f360u: goto label_36f360;
        case 0x36f364u: goto label_36f364;
        case 0x36f368u: goto label_36f368;
        case 0x36f36cu: goto label_36f36c;
        case 0x36f370u: goto label_36f370;
        case 0x36f374u: goto label_36f374;
        case 0x36f378u: goto label_36f378;
        case 0x36f37cu: goto label_36f37c;
        case 0x36f380u: goto label_36f380;
        case 0x36f384u: goto label_36f384;
        case 0x36f388u: goto label_36f388;
        case 0x36f38cu: goto label_36f38c;
        case 0x36f390u: goto label_36f390;
        case 0x36f394u: goto label_36f394;
        case 0x36f398u: goto label_36f398;
        case 0x36f39cu: goto label_36f39c;
        case 0x36f3a0u: goto label_36f3a0;
        case 0x36f3a4u: goto label_36f3a4;
        case 0x36f3a8u: goto label_36f3a8;
        case 0x36f3acu: goto label_36f3ac;
        case 0x36f3b0u: goto label_36f3b0;
        case 0x36f3b4u: goto label_36f3b4;
        case 0x36f3b8u: goto label_36f3b8;
        case 0x36f3bcu: goto label_36f3bc;
        case 0x36f3c0u: goto label_36f3c0;
        case 0x36f3c4u: goto label_36f3c4;
        case 0x36f3c8u: goto label_36f3c8;
        case 0x36f3ccu: goto label_36f3cc;
        case 0x36f3d0u: goto label_36f3d0;
        case 0x36f3d4u: goto label_36f3d4;
        case 0x36f3d8u: goto label_36f3d8;
        case 0x36f3dcu: goto label_36f3dc;
        case 0x36f3e0u: goto label_36f3e0;
        case 0x36f3e4u: goto label_36f3e4;
        case 0x36f3e8u: goto label_36f3e8;
        case 0x36f3ecu: goto label_36f3ec;
        case 0x36f3f0u: goto label_36f3f0;
        case 0x36f3f4u: goto label_36f3f4;
        case 0x36f3f8u: goto label_36f3f8;
        case 0x36f3fcu: goto label_36f3fc;
        case 0x36f400u: goto label_36f400;
        case 0x36f404u: goto label_36f404;
        case 0x36f408u: goto label_36f408;
        case 0x36f40cu: goto label_36f40c;
        case 0x36f410u: goto label_36f410;
        case 0x36f414u: goto label_36f414;
        case 0x36f418u: goto label_36f418;
        case 0x36f41cu: goto label_36f41c;
        case 0x36f420u: goto label_36f420;
        case 0x36f424u: goto label_36f424;
        case 0x36f428u: goto label_36f428;
        case 0x36f42cu: goto label_36f42c;
        case 0x36f430u: goto label_36f430;
        case 0x36f434u: goto label_36f434;
        case 0x36f438u: goto label_36f438;
        case 0x36f43cu: goto label_36f43c;
        case 0x36f440u: goto label_36f440;
        case 0x36f444u: goto label_36f444;
        case 0x36f448u: goto label_36f448;
        case 0x36f44cu: goto label_36f44c;
        case 0x36f450u: goto label_36f450;
        case 0x36f454u: goto label_36f454;
        case 0x36f458u: goto label_36f458;
        case 0x36f45cu: goto label_36f45c;
        case 0x36f460u: goto label_36f460;
        case 0x36f464u: goto label_36f464;
        case 0x36f468u: goto label_36f468;
        case 0x36f46cu: goto label_36f46c;
        case 0x36f470u: goto label_36f470;
        case 0x36f474u: goto label_36f474;
        case 0x36f478u: goto label_36f478;
        case 0x36f47cu: goto label_36f47c;
        case 0x36f480u: goto label_36f480;
        case 0x36f484u: goto label_36f484;
        case 0x36f488u: goto label_36f488;
        case 0x36f48cu: goto label_36f48c;
        case 0x36f490u: goto label_36f490;
        case 0x36f494u: goto label_36f494;
        case 0x36f498u: goto label_36f498;
        case 0x36f49cu: goto label_36f49c;
        case 0x36f4a0u: goto label_36f4a0;
        case 0x36f4a4u: goto label_36f4a4;
        case 0x36f4a8u: goto label_36f4a8;
        case 0x36f4acu: goto label_36f4ac;
        case 0x36f4b0u: goto label_36f4b0;
        case 0x36f4b4u: goto label_36f4b4;
        case 0x36f4b8u: goto label_36f4b8;
        case 0x36f4bcu: goto label_36f4bc;
        case 0x36f4c0u: goto label_36f4c0;
        case 0x36f4c4u: goto label_36f4c4;
        case 0x36f4c8u: goto label_36f4c8;
        case 0x36f4ccu: goto label_36f4cc;
        case 0x36f4d0u: goto label_36f4d0;
        case 0x36f4d4u: goto label_36f4d4;
        case 0x36f4d8u: goto label_36f4d8;
        case 0x36f4dcu: goto label_36f4dc;
        case 0x36f4e0u: goto label_36f4e0;
        case 0x36f4e4u: goto label_36f4e4;
        case 0x36f4e8u: goto label_36f4e8;
        case 0x36f4ecu: goto label_36f4ec;
        case 0x36f4f0u: goto label_36f4f0;
        case 0x36f4f4u: goto label_36f4f4;
        case 0x36f4f8u: goto label_36f4f8;
        case 0x36f4fcu: goto label_36f4fc;
        case 0x36f500u: goto label_36f500;
        case 0x36f504u: goto label_36f504;
        case 0x36f508u: goto label_36f508;
        case 0x36f50cu: goto label_36f50c;
        case 0x36f510u: goto label_36f510;
        case 0x36f514u: goto label_36f514;
        case 0x36f518u: goto label_36f518;
        case 0x36f51cu: goto label_36f51c;
        case 0x36f520u: goto label_36f520;
        case 0x36f524u: goto label_36f524;
        case 0x36f528u: goto label_36f528;
        case 0x36f52cu: goto label_36f52c;
        case 0x36f530u: goto label_36f530;
        case 0x36f534u: goto label_36f534;
        case 0x36f538u: goto label_36f538;
        case 0x36f53cu: goto label_36f53c;
        case 0x36f540u: goto label_36f540;
        case 0x36f544u: goto label_36f544;
        case 0x36f548u: goto label_36f548;
        case 0x36f54cu: goto label_36f54c;
        case 0x36f550u: goto label_36f550;
        case 0x36f554u: goto label_36f554;
        case 0x36f558u: goto label_36f558;
        case 0x36f55cu: goto label_36f55c;
        case 0x36f560u: goto label_36f560;
        case 0x36f564u: goto label_36f564;
        case 0x36f568u: goto label_36f568;
        case 0x36f56cu: goto label_36f56c;
        case 0x36f570u: goto label_36f570;
        case 0x36f574u: goto label_36f574;
        case 0x36f578u: goto label_36f578;
        case 0x36f57cu: goto label_36f57c;
        case 0x36f580u: goto label_36f580;
        case 0x36f584u: goto label_36f584;
        case 0x36f588u: goto label_36f588;
        case 0x36f58cu: goto label_36f58c;
        case 0x36f590u: goto label_36f590;
        case 0x36f594u: goto label_36f594;
        case 0x36f598u: goto label_36f598;
        case 0x36f59cu: goto label_36f59c;
        case 0x36f5a0u: goto label_36f5a0;
        case 0x36f5a4u: goto label_36f5a4;
        case 0x36f5a8u: goto label_36f5a8;
        case 0x36f5acu: goto label_36f5ac;
        case 0x36f5b0u: goto label_36f5b0;
        case 0x36f5b4u: goto label_36f5b4;
        case 0x36f5b8u: goto label_36f5b8;
        case 0x36f5bcu: goto label_36f5bc;
        case 0x36f5c0u: goto label_36f5c0;
        case 0x36f5c4u: goto label_36f5c4;
        case 0x36f5c8u: goto label_36f5c8;
        case 0x36f5ccu: goto label_36f5cc;
        case 0x36f5d0u: goto label_36f5d0;
        case 0x36f5d4u: goto label_36f5d4;
        case 0x36f5d8u: goto label_36f5d8;
        case 0x36f5dcu: goto label_36f5dc;
        case 0x36f5e0u: goto label_36f5e0;
        case 0x36f5e4u: goto label_36f5e4;
        case 0x36f5e8u: goto label_36f5e8;
        case 0x36f5ecu: goto label_36f5ec;
        case 0x36f5f0u: goto label_36f5f0;
        case 0x36f5f4u: goto label_36f5f4;
        case 0x36f5f8u: goto label_36f5f8;
        case 0x36f5fcu: goto label_36f5fc;
        case 0x36f600u: goto label_36f600;
        case 0x36f604u: goto label_36f604;
        case 0x36f608u: goto label_36f608;
        case 0x36f60cu: goto label_36f60c;
        case 0x36f610u: goto label_36f610;
        case 0x36f614u: goto label_36f614;
        case 0x36f618u: goto label_36f618;
        case 0x36f61cu: goto label_36f61c;
        case 0x36f620u: goto label_36f620;
        case 0x36f624u: goto label_36f624;
        case 0x36f628u: goto label_36f628;
        case 0x36f62cu: goto label_36f62c;
        case 0x36f630u: goto label_36f630;
        case 0x36f634u: goto label_36f634;
        case 0x36f638u: goto label_36f638;
        case 0x36f63cu: goto label_36f63c;
        case 0x36f640u: goto label_36f640;
        case 0x36f644u: goto label_36f644;
        case 0x36f648u: goto label_36f648;
        case 0x36f64cu: goto label_36f64c;
        case 0x36f650u: goto label_36f650;
        case 0x36f654u: goto label_36f654;
        case 0x36f658u: goto label_36f658;
        case 0x36f65cu: goto label_36f65c;
        case 0x36f660u: goto label_36f660;
        case 0x36f664u: goto label_36f664;
        case 0x36f668u: goto label_36f668;
        case 0x36f66cu: goto label_36f66c;
        case 0x36f670u: goto label_36f670;
        case 0x36f674u: goto label_36f674;
        case 0x36f678u: goto label_36f678;
        case 0x36f67cu: goto label_36f67c;
        case 0x36f680u: goto label_36f680;
        case 0x36f684u: goto label_36f684;
        case 0x36f688u: goto label_36f688;
        case 0x36f68cu: goto label_36f68c;
        case 0x36f690u: goto label_36f690;
        case 0x36f694u: goto label_36f694;
        case 0x36f698u: goto label_36f698;
        case 0x36f69cu: goto label_36f69c;
        case 0x36f6a0u: goto label_36f6a0;
        case 0x36f6a4u: goto label_36f6a4;
        case 0x36f6a8u: goto label_36f6a8;
        case 0x36f6acu: goto label_36f6ac;
        case 0x36f6b0u: goto label_36f6b0;
        case 0x36f6b4u: goto label_36f6b4;
        case 0x36f6b8u: goto label_36f6b8;
        case 0x36f6bcu: goto label_36f6bc;
        case 0x36f6c0u: goto label_36f6c0;
        case 0x36f6c4u: goto label_36f6c4;
        case 0x36f6c8u: goto label_36f6c8;
        case 0x36f6ccu: goto label_36f6cc;
        case 0x36f6d0u: goto label_36f6d0;
        case 0x36f6d4u: goto label_36f6d4;
        case 0x36f6d8u: goto label_36f6d8;
        case 0x36f6dcu: goto label_36f6dc;
        case 0x36f6e0u: goto label_36f6e0;
        case 0x36f6e4u: goto label_36f6e4;
        case 0x36f6e8u: goto label_36f6e8;
        case 0x36f6ecu: goto label_36f6ec;
        case 0x36f6f0u: goto label_36f6f0;
        case 0x36f6f4u: goto label_36f6f4;
        case 0x36f6f8u: goto label_36f6f8;
        case 0x36f6fcu: goto label_36f6fc;
        case 0x36f700u: goto label_36f700;
        case 0x36f704u: goto label_36f704;
        case 0x36f708u: goto label_36f708;
        case 0x36f70cu: goto label_36f70c;
        case 0x36f710u: goto label_36f710;
        case 0x36f714u: goto label_36f714;
        case 0x36f718u: goto label_36f718;
        case 0x36f71cu: goto label_36f71c;
        case 0x36f720u: goto label_36f720;
        case 0x36f724u: goto label_36f724;
        case 0x36f728u: goto label_36f728;
        case 0x36f72cu: goto label_36f72c;
        case 0x36f730u: goto label_36f730;
        case 0x36f734u: goto label_36f734;
        case 0x36f738u: goto label_36f738;
        case 0x36f73cu: goto label_36f73c;
        case 0x36f740u: goto label_36f740;
        case 0x36f744u: goto label_36f744;
        case 0x36f748u: goto label_36f748;
        case 0x36f74cu: goto label_36f74c;
        case 0x36f750u: goto label_36f750;
        case 0x36f754u: goto label_36f754;
        case 0x36f758u: goto label_36f758;
        case 0x36f75cu: goto label_36f75c;
        case 0x36f760u: goto label_36f760;
        case 0x36f764u: goto label_36f764;
        case 0x36f768u: goto label_36f768;
        case 0x36f76cu: goto label_36f76c;
        case 0x36f770u: goto label_36f770;
        case 0x36f774u: goto label_36f774;
        case 0x36f778u: goto label_36f778;
        case 0x36f77cu: goto label_36f77c;
        case 0x36f780u: goto label_36f780;
        case 0x36f784u: goto label_36f784;
        case 0x36f788u: goto label_36f788;
        case 0x36f78cu: goto label_36f78c;
        case 0x36f790u: goto label_36f790;
        case 0x36f794u: goto label_36f794;
        case 0x36f798u: goto label_36f798;
        case 0x36f79cu: goto label_36f79c;
        case 0x36f7a0u: goto label_36f7a0;
        case 0x36f7a4u: goto label_36f7a4;
        case 0x36f7a8u: goto label_36f7a8;
        case 0x36f7acu: goto label_36f7ac;
        case 0x36f7b0u: goto label_36f7b0;
        case 0x36f7b4u: goto label_36f7b4;
        case 0x36f7b8u: goto label_36f7b8;
        case 0x36f7bcu: goto label_36f7bc;
        case 0x36f7c0u: goto label_36f7c0;
        case 0x36f7c4u: goto label_36f7c4;
        case 0x36f7c8u: goto label_36f7c8;
        case 0x36f7ccu: goto label_36f7cc;
        case 0x36f7d0u: goto label_36f7d0;
        case 0x36f7d4u: goto label_36f7d4;
        case 0x36f7d8u: goto label_36f7d8;
        case 0x36f7dcu: goto label_36f7dc;
        case 0x36f7e0u: goto label_36f7e0;
        case 0x36f7e4u: goto label_36f7e4;
        case 0x36f7e8u: goto label_36f7e8;
        case 0x36f7ecu: goto label_36f7ec;
        case 0x36f7f0u: goto label_36f7f0;
        case 0x36f7f4u: goto label_36f7f4;
        case 0x36f7f8u: goto label_36f7f8;
        case 0x36f7fcu: goto label_36f7fc;
        case 0x36f800u: goto label_36f800;
        case 0x36f804u: goto label_36f804;
        case 0x36f808u: goto label_36f808;
        case 0x36f80cu: goto label_36f80c;
        case 0x36f810u: goto label_36f810;
        case 0x36f814u: goto label_36f814;
        case 0x36f818u: goto label_36f818;
        case 0x36f81cu: goto label_36f81c;
        case 0x36f820u: goto label_36f820;
        case 0x36f824u: goto label_36f824;
        case 0x36f828u: goto label_36f828;
        case 0x36f82cu: goto label_36f82c;
        case 0x36f830u: goto label_36f830;
        case 0x36f834u: goto label_36f834;
        case 0x36f838u: goto label_36f838;
        case 0x36f83cu: goto label_36f83c;
        case 0x36f840u: goto label_36f840;
        case 0x36f844u: goto label_36f844;
        case 0x36f848u: goto label_36f848;
        case 0x36f84cu: goto label_36f84c;
        case 0x36f850u: goto label_36f850;
        case 0x36f854u: goto label_36f854;
        case 0x36f858u: goto label_36f858;
        case 0x36f85cu: goto label_36f85c;
        case 0x36f860u: goto label_36f860;
        case 0x36f864u: goto label_36f864;
        case 0x36f868u: goto label_36f868;
        case 0x36f86cu: goto label_36f86c;
        case 0x36f870u: goto label_36f870;
        case 0x36f874u: goto label_36f874;
        case 0x36f878u: goto label_36f878;
        case 0x36f87cu: goto label_36f87c;
        case 0x36f880u: goto label_36f880;
        case 0x36f884u: goto label_36f884;
        case 0x36f888u: goto label_36f888;
        case 0x36f88cu: goto label_36f88c;
        case 0x36f890u: goto label_36f890;
        case 0x36f894u: goto label_36f894;
        case 0x36f898u: goto label_36f898;
        case 0x36f89cu: goto label_36f89c;
        case 0x36f8a0u: goto label_36f8a0;
        case 0x36f8a4u: goto label_36f8a4;
        case 0x36f8a8u: goto label_36f8a8;
        case 0x36f8acu: goto label_36f8ac;
        case 0x36f8b0u: goto label_36f8b0;
        case 0x36f8b4u: goto label_36f8b4;
        case 0x36f8b8u: goto label_36f8b8;
        case 0x36f8bcu: goto label_36f8bc;
        case 0x36f8c0u: goto label_36f8c0;
        case 0x36f8c4u: goto label_36f8c4;
        case 0x36f8c8u: goto label_36f8c8;
        case 0x36f8ccu: goto label_36f8cc;
        case 0x36f8d0u: goto label_36f8d0;
        case 0x36f8d4u: goto label_36f8d4;
        case 0x36f8d8u: goto label_36f8d8;
        case 0x36f8dcu: goto label_36f8dc;
        case 0x36f8e0u: goto label_36f8e0;
        case 0x36f8e4u: goto label_36f8e4;
        case 0x36f8e8u: goto label_36f8e8;
        case 0x36f8ecu: goto label_36f8ec;
        case 0x36f8f0u: goto label_36f8f0;
        case 0x36f8f4u: goto label_36f8f4;
        case 0x36f8f8u: goto label_36f8f8;
        case 0x36f8fcu: goto label_36f8fc;
        case 0x36f900u: goto label_36f900;
        case 0x36f904u: goto label_36f904;
        case 0x36f908u: goto label_36f908;
        case 0x36f90cu: goto label_36f90c;
        case 0x36f910u: goto label_36f910;
        case 0x36f914u: goto label_36f914;
        case 0x36f918u: goto label_36f918;
        case 0x36f91cu: goto label_36f91c;
        case 0x36f920u: goto label_36f920;
        case 0x36f924u: goto label_36f924;
        case 0x36f928u: goto label_36f928;
        case 0x36f92cu: goto label_36f92c;
        case 0x36f930u: goto label_36f930;
        case 0x36f934u: goto label_36f934;
        case 0x36f938u: goto label_36f938;
        case 0x36f93cu: goto label_36f93c;
        case 0x36f940u: goto label_36f940;
        case 0x36f944u: goto label_36f944;
        case 0x36f948u: goto label_36f948;
        case 0x36f94cu: goto label_36f94c;
        case 0x36f950u: goto label_36f950;
        case 0x36f954u: goto label_36f954;
        case 0x36f958u: goto label_36f958;
        case 0x36f95cu: goto label_36f95c;
        case 0x36f960u: goto label_36f960;
        case 0x36f964u: goto label_36f964;
        case 0x36f968u: goto label_36f968;
        case 0x36f96cu: goto label_36f96c;
        case 0x36f970u: goto label_36f970;
        case 0x36f974u: goto label_36f974;
        case 0x36f978u: goto label_36f978;
        case 0x36f97cu: goto label_36f97c;
        case 0x36f980u: goto label_36f980;
        case 0x36f984u: goto label_36f984;
        case 0x36f988u: goto label_36f988;
        case 0x36f98cu: goto label_36f98c;
        case 0x36f990u: goto label_36f990;
        case 0x36f994u: goto label_36f994;
        case 0x36f998u: goto label_36f998;
        case 0x36f99cu: goto label_36f99c;
        case 0x36f9a0u: goto label_36f9a0;
        case 0x36f9a4u: goto label_36f9a4;
        case 0x36f9a8u: goto label_36f9a8;
        case 0x36f9acu: goto label_36f9ac;
        case 0x36f9b0u: goto label_36f9b0;
        case 0x36f9b4u: goto label_36f9b4;
        case 0x36f9b8u: goto label_36f9b8;
        case 0x36f9bcu: goto label_36f9bc;
        case 0x36f9c0u: goto label_36f9c0;
        case 0x36f9c4u: goto label_36f9c4;
        case 0x36f9c8u: goto label_36f9c8;
        case 0x36f9ccu: goto label_36f9cc;
        case 0x36f9d0u: goto label_36f9d0;
        case 0x36f9d4u: goto label_36f9d4;
        case 0x36f9d8u: goto label_36f9d8;
        case 0x36f9dcu: goto label_36f9dc;
        case 0x36f9e0u: goto label_36f9e0;
        case 0x36f9e4u: goto label_36f9e4;
        case 0x36f9e8u: goto label_36f9e8;
        case 0x36f9ecu: goto label_36f9ec;
        case 0x36f9f0u: goto label_36f9f0;
        case 0x36f9f4u: goto label_36f9f4;
        case 0x36f9f8u: goto label_36f9f8;
        case 0x36f9fcu: goto label_36f9fc;
        case 0x36fa00u: goto label_36fa00;
        case 0x36fa04u: goto label_36fa04;
        case 0x36fa08u: goto label_36fa08;
        case 0x36fa0cu: goto label_36fa0c;
        case 0x36fa10u: goto label_36fa10;
        case 0x36fa14u: goto label_36fa14;
        case 0x36fa18u: goto label_36fa18;
        case 0x36fa1cu: goto label_36fa1c;
        case 0x36fa20u: goto label_36fa20;
        case 0x36fa24u: goto label_36fa24;
        case 0x36fa28u: goto label_36fa28;
        case 0x36fa2cu: goto label_36fa2c;
        case 0x36fa30u: goto label_36fa30;
        case 0x36fa34u: goto label_36fa34;
        case 0x36fa38u: goto label_36fa38;
        case 0x36fa3cu: goto label_36fa3c;
        case 0x36fa40u: goto label_36fa40;
        case 0x36fa44u: goto label_36fa44;
        case 0x36fa48u: goto label_36fa48;
        case 0x36fa4cu: goto label_36fa4c;
        case 0x36fa50u: goto label_36fa50;
        case 0x36fa54u: goto label_36fa54;
        case 0x36fa58u: goto label_36fa58;
        case 0x36fa5cu: goto label_36fa5c;
        case 0x36fa60u: goto label_36fa60;
        case 0x36fa64u: goto label_36fa64;
        case 0x36fa68u: goto label_36fa68;
        case 0x36fa6cu: goto label_36fa6c;
        case 0x36fa70u: goto label_36fa70;
        case 0x36fa74u: goto label_36fa74;
        case 0x36fa78u: goto label_36fa78;
        case 0x36fa7cu: goto label_36fa7c;
        case 0x36fa80u: goto label_36fa80;
        case 0x36fa84u: goto label_36fa84;
        case 0x36fa88u: goto label_36fa88;
        case 0x36fa8cu: goto label_36fa8c;
        case 0x36fa90u: goto label_36fa90;
        case 0x36fa94u: goto label_36fa94;
        case 0x36fa98u: goto label_36fa98;
        case 0x36fa9cu: goto label_36fa9c;
        case 0x36faa0u: goto label_36faa0;
        case 0x36faa4u: goto label_36faa4;
        case 0x36faa8u: goto label_36faa8;
        case 0x36faacu: goto label_36faac;
        case 0x36fab0u: goto label_36fab0;
        case 0x36fab4u: goto label_36fab4;
        case 0x36fab8u: goto label_36fab8;
        case 0x36fabcu: goto label_36fabc;
        case 0x36fac0u: goto label_36fac0;
        case 0x36fac4u: goto label_36fac4;
        case 0x36fac8u: goto label_36fac8;
        case 0x36faccu: goto label_36facc;
        case 0x36fad0u: goto label_36fad0;
        case 0x36fad4u: goto label_36fad4;
        case 0x36fad8u: goto label_36fad8;
        case 0x36fadcu: goto label_36fadc;
        case 0x36fae0u: goto label_36fae0;
        case 0x36fae4u: goto label_36fae4;
        case 0x36fae8u: goto label_36fae8;
        case 0x36faecu: goto label_36faec;
        case 0x36faf0u: goto label_36faf0;
        case 0x36faf4u: goto label_36faf4;
        case 0x36faf8u: goto label_36faf8;
        case 0x36fafcu: goto label_36fafc;
        case 0x36fb00u: goto label_36fb00;
        case 0x36fb04u: goto label_36fb04;
        case 0x36fb08u: goto label_36fb08;
        case 0x36fb0cu: goto label_36fb0c;
        case 0x36fb10u: goto label_36fb10;
        case 0x36fb14u: goto label_36fb14;
        case 0x36fb18u: goto label_36fb18;
        case 0x36fb1cu: goto label_36fb1c;
        case 0x36fb20u: goto label_36fb20;
        case 0x36fb24u: goto label_36fb24;
        case 0x36fb28u: goto label_36fb28;
        case 0x36fb2cu: goto label_36fb2c;
        case 0x36fb30u: goto label_36fb30;
        case 0x36fb34u: goto label_36fb34;
        case 0x36fb38u: goto label_36fb38;
        case 0x36fb3cu: goto label_36fb3c;
        case 0x36fb40u: goto label_36fb40;
        case 0x36fb44u: goto label_36fb44;
        case 0x36fb48u: goto label_36fb48;
        case 0x36fb4cu: goto label_36fb4c;
        case 0x36fb50u: goto label_36fb50;
        case 0x36fb54u: goto label_36fb54;
        case 0x36fb58u: goto label_36fb58;
        case 0x36fb5cu: goto label_36fb5c;
        case 0x36fb60u: goto label_36fb60;
        case 0x36fb64u: goto label_36fb64;
        case 0x36fb68u: goto label_36fb68;
        case 0x36fb6cu: goto label_36fb6c;
        case 0x36fb70u: goto label_36fb70;
        case 0x36fb74u: goto label_36fb74;
        case 0x36fb78u: goto label_36fb78;
        case 0x36fb7cu: goto label_36fb7c;
        case 0x36fb80u: goto label_36fb80;
        case 0x36fb84u: goto label_36fb84;
        case 0x36fb88u: goto label_36fb88;
        case 0x36fb8cu: goto label_36fb8c;
        case 0x36fb90u: goto label_36fb90;
        case 0x36fb94u: goto label_36fb94;
        case 0x36fb98u: goto label_36fb98;
        case 0x36fb9cu: goto label_36fb9c;
        case 0x36fba0u: goto label_36fba0;
        case 0x36fba4u: goto label_36fba4;
        case 0x36fba8u: goto label_36fba8;
        case 0x36fbacu: goto label_36fbac;
        case 0x36fbb0u: goto label_36fbb0;
        case 0x36fbb4u: goto label_36fbb4;
        case 0x36fbb8u: goto label_36fbb8;
        case 0x36fbbcu: goto label_36fbbc;
        case 0x36fbc0u: goto label_36fbc0;
        case 0x36fbc4u: goto label_36fbc4;
        case 0x36fbc8u: goto label_36fbc8;
        case 0x36fbccu: goto label_36fbcc;
        case 0x36fbd0u: goto label_36fbd0;
        case 0x36fbd4u: goto label_36fbd4;
        case 0x36fbd8u: goto label_36fbd8;
        case 0x36fbdcu: goto label_36fbdc;
        case 0x36fbe0u: goto label_36fbe0;
        case 0x36fbe4u: goto label_36fbe4;
        case 0x36fbe8u: goto label_36fbe8;
        case 0x36fbecu: goto label_36fbec;
        case 0x36fbf0u: goto label_36fbf0;
        case 0x36fbf4u: goto label_36fbf4;
        case 0x36fbf8u: goto label_36fbf8;
        case 0x36fbfcu: goto label_36fbfc;
        case 0x36fc00u: goto label_36fc00;
        case 0x36fc04u: goto label_36fc04;
        case 0x36fc08u: goto label_36fc08;
        case 0x36fc0cu: goto label_36fc0c;
        case 0x36fc10u: goto label_36fc10;
        case 0x36fc14u: goto label_36fc14;
        case 0x36fc18u: goto label_36fc18;
        case 0x36fc1cu: goto label_36fc1c;
        case 0x36fc20u: goto label_36fc20;
        case 0x36fc24u: goto label_36fc24;
        case 0x36fc28u: goto label_36fc28;
        case 0x36fc2cu: goto label_36fc2c;
        case 0x36fc30u: goto label_36fc30;
        case 0x36fc34u: goto label_36fc34;
        case 0x36fc38u: goto label_36fc38;
        case 0x36fc3cu: goto label_36fc3c;
        case 0x36fc40u: goto label_36fc40;
        case 0x36fc44u: goto label_36fc44;
        case 0x36fc48u: goto label_36fc48;
        case 0x36fc4cu: goto label_36fc4c;
        case 0x36fc50u: goto label_36fc50;
        case 0x36fc54u: goto label_36fc54;
        case 0x36fc58u: goto label_36fc58;
        case 0x36fc5cu: goto label_36fc5c;
        case 0x36fc60u: goto label_36fc60;
        case 0x36fc64u: goto label_36fc64;
        case 0x36fc68u: goto label_36fc68;
        case 0x36fc6cu: goto label_36fc6c;
        case 0x36fc70u: goto label_36fc70;
        case 0x36fc74u: goto label_36fc74;
        case 0x36fc78u: goto label_36fc78;
        case 0x36fc7cu: goto label_36fc7c;
        case 0x36fc80u: goto label_36fc80;
        case 0x36fc84u: goto label_36fc84;
        case 0x36fc88u: goto label_36fc88;
        case 0x36fc8cu: goto label_36fc8c;
        case 0x36fc90u: goto label_36fc90;
        case 0x36fc94u: goto label_36fc94;
        case 0x36fc98u: goto label_36fc98;
        case 0x36fc9cu: goto label_36fc9c;
        case 0x36fca0u: goto label_36fca0;
        case 0x36fca4u: goto label_36fca4;
        case 0x36fca8u: goto label_36fca8;
        case 0x36fcacu: goto label_36fcac;
        case 0x36fcb0u: goto label_36fcb0;
        case 0x36fcb4u: goto label_36fcb4;
        case 0x36fcb8u: goto label_36fcb8;
        case 0x36fcbcu: goto label_36fcbc;
        case 0x36fcc0u: goto label_36fcc0;
        case 0x36fcc4u: goto label_36fcc4;
        case 0x36fcc8u: goto label_36fcc8;
        case 0x36fcccu: goto label_36fccc;
        case 0x36fcd0u: goto label_36fcd0;
        case 0x36fcd4u: goto label_36fcd4;
        case 0x36fcd8u: goto label_36fcd8;
        case 0x36fcdcu: goto label_36fcdc;
        case 0x36fce0u: goto label_36fce0;
        case 0x36fce4u: goto label_36fce4;
        case 0x36fce8u: goto label_36fce8;
        case 0x36fcecu: goto label_36fcec;
        case 0x36fcf0u: goto label_36fcf0;
        case 0x36fcf4u: goto label_36fcf4;
        case 0x36fcf8u: goto label_36fcf8;
        case 0x36fcfcu: goto label_36fcfc;
        case 0x36fd00u: goto label_36fd00;
        case 0x36fd04u: goto label_36fd04;
        case 0x36fd08u: goto label_36fd08;
        case 0x36fd0cu: goto label_36fd0c;
        case 0x36fd10u: goto label_36fd10;
        case 0x36fd14u: goto label_36fd14;
        case 0x36fd18u: goto label_36fd18;
        case 0x36fd1cu: goto label_36fd1c;
        case 0x36fd20u: goto label_36fd20;
        case 0x36fd24u: goto label_36fd24;
        case 0x36fd28u: goto label_36fd28;
        case 0x36fd2cu: goto label_36fd2c;
        case 0x36fd30u: goto label_36fd30;
        case 0x36fd34u: goto label_36fd34;
        case 0x36fd38u: goto label_36fd38;
        case 0x36fd3cu: goto label_36fd3c;
        case 0x36fd40u: goto label_36fd40;
        case 0x36fd44u: goto label_36fd44;
        case 0x36fd48u: goto label_36fd48;
        case 0x36fd4cu: goto label_36fd4c;
        case 0x36fd50u: goto label_36fd50;
        case 0x36fd54u: goto label_36fd54;
        case 0x36fd58u: goto label_36fd58;
        case 0x36fd5cu: goto label_36fd5c;
        case 0x36fd60u: goto label_36fd60;
        case 0x36fd64u: goto label_36fd64;
        case 0x36fd68u: goto label_36fd68;
        case 0x36fd6cu: goto label_36fd6c;
        case 0x36fd70u: goto label_36fd70;
        case 0x36fd74u: goto label_36fd74;
        case 0x36fd78u: goto label_36fd78;
        case 0x36fd7cu: goto label_36fd7c;
        case 0x36fd80u: goto label_36fd80;
        case 0x36fd84u: goto label_36fd84;
        case 0x36fd88u: goto label_36fd88;
        case 0x36fd8cu: goto label_36fd8c;
        case 0x36fd90u: goto label_36fd90;
        case 0x36fd94u: goto label_36fd94;
        case 0x36fd98u: goto label_36fd98;
        case 0x36fd9cu: goto label_36fd9c;
        case 0x36fda0u: goto label_36fda0;
        case 0x36fda4u: goto label_36fda4;
        case 0x36fda8u: goto label_36fda8;
        case 0x36fdacu: goto label_36fdac;
        case 0x36fdb0u: goto label_36fdb0;
        case 0x36fdb4u: goto label_36fdb4;
        case 0x36fdb8u: goto label_36fdb8;
        case 0x36fdbcu: goto label_36fdbc;
        case 0x36fdc0u: goto label_36fdc0;
        case 0x36fdc4u: goto label_36fdc4;
        case 0x36fdc8u: goto label_36fdc8;
        case 0x36fdccu: goto label_36fdcc;
        case 0x36fdd0u: goto label_36fdd0;
        case 0x36fdd4u: goto label_36fdd4;
        case 0x36fdd8u: goto label_36fdd8;
        case 0x36fddcu: goto label_36fddc;
        case 0x36fde0u: goto label_36fde0;
        case 0x36fde4u: goto label_36fde4;
        case 0x36fde8u: goto label_36fde8;
        case 0x36fdecu: goto label_36fdec;
        case 0x36fdf0u: goto label_36fdf0;
        case 0x36fdf4u: goto label_36fdf4;
        case 0x36fdf8u: goto label_36fdf8;
        case 0x36fdfcu: goto label_36fdfc;
        case 0x36fe00u: goto label_36fe00;
        case 0x36fe04u: goto label_36fe04;
        case 0x36fe08u: goto label_36fe08;
        case 0x36fe0cu: goto label_36fe0c;
        case 0x36fe10u: goto label_36fe10;
        case 0x36fe14u: goto label_36fe14;
        case 0x36fe18u: goto label_36fe18;
        case 0x36fe1cu: goto label_36fe1c;
        case 0x36fe20u: goto label_36fe20;
        case 0x36fe24u: goto label_36fe24;
        case 0x36fe28u: goto label_36fe28;
        case 0x36fe2cu: goto label_36fe2c;
        case 0x36fe30u: goto label_36fe30;
        case 0x36fe34u: goto label_36fe34;
        case 0x36fe38u: goto label_36fe38;
        case 0x36fe3cu: goto label_36fe3c;
        case 0x36fe40u: goto label_36fe40;
        case 0x36fe44u: goto label_36fe44;
        case 0x36fe48u: goto label_36fe48;
        case 0x36fe4cu: goto label_36fe4c;
        case 0x36fe50u: goto label_36fe50;
        case 0x36fe54u: goto label_36fe54;
        case 0x36fe58u: goto label_36fe58;
        case 0x36fe5cu: goto label_36fe5c;
        case 0x36fe60u: goto label_36fe60;
        case 0x36fe64u: goto label_36fe64;
        case 0x36fe68u: goto label_36fe68;
        case 0x36fe6cu: goto label_36fe6c;
        case 0x36fe70u: goto label_36fe70;
        case 0x36fe74u: goto label_36fe74;
        case 0x36fe78u: goto label_36fe78;
        case 0x36fe7cu: goto label_36fe7c;
        case 0x36fe80u: goto label_36fe80;
        case 0x36fe84u: goto label_36fe84;
        case 0x36fe88u: goto label_36fe88;
        case 0x36fe8cu: goto label_36fe8c;
        case 0x36fe90u: goto label_36fe90;
        case 0x36fe94u: goto label_36fe94;
        case 0x36fe98u: goto label_36fe98;
        case 0x36fe9cu: goto label_36fe9c;
        case 0x36fea0u: goto label_36fea0;
        case 0x36fea4u: goto label_36fea4;
        case 0x36fea8u: goto label_36fea8;
        case 0x36feacu: goto label_36feac;
        case 0x36feb0u: goto label_36feb0;
        case 0x36feb4u: goto label_36feb4;
        case 0x36feb8u: goto label_36feb8;
        case 0x36febcu: goto label_36febc;
        case 0x36fec0u: goto label_36fec0;
        case 0x36fec4u: goto label_36fec4;
        case 0x36fec8u: goto label_36fec8;
        case 0x36feccu: goto label_36fecc;
        case 0x36fed0u: goto label_36fed0;
        case 0x36fed4u: goto label_36fed4;
        case 0x36fed8u: goto label_36fed8;
        case 0x36fedcu: goto label_36fedc;
        case 0x36fee0u: goto label_36fee0;
        case 0x36fee4u: goto label_36fee4;
        case 0x36fee8u: goto label_36fee8;
        case 0x36feecu: goto label_36feec;
        case 0x36fef0u: goto label_36fef0;
        case 0x36fef4u: goto label_36fef4;
        case 0x36fef8u: goto label_36fef8;
        case 0x36fefcu: goto label_36fefc;
        case 0x36ff00u: goto label_36ff00;
        case 0x36ff04u: goto label_36ff04;
        case 0x36ff08u: goto label_36ff08;
        case 0x36ff0cu: goto label_36ff0c;
        case 0x36ff10u: goto label_36ff10;
        case 0x36ff14u: goto label_36ff14;
        case 0x36ff18u: goto label_36ff18;
        case 0x36ff1cu: goto label_36ff1c;
        case 0x36ff20u: goto label_36ff20;
        case 0x36ff24u: goto label_36ff24;
        case 0x36ff28u: goto label_36ff28;
        case 0x36ff2cu: goto label_36ff2c;
        case 0x36ff30u: goto label_36ff30;
        case 0x36ff34u: goto label_36ff34;
        case 0x36ff38u: goto label_36ff38;
        case 0x36ff3cu: goto label_36ff3c;
        case 0x36ff40u: goto label_36ff40;
        case 0x36ff44u: goto label_36ff44;
        case 0x36ff48u: goto label_36ff48;
        case 0x36ff4cu: goto label_36ff4c;
        case 0x36ff50u: goto label_36ff50;
        case 0x36ff54u: goto label_36ff54;
        case 0x36ff58u: goto label_36ff58;
        case 0x36ff5cu: goto label_36ff5c;
        case 0x36ff60u: goto label_36ff60;
        case 0x36ff64u: goto label_36ff64;
        case 0x36ff68u: goto label_36ff68;
        case 0x36ff6cu: goto label_36ff6c;
        case 0x36ff70u: goto label_36ff70;
        case 0x36ff74u: goto label_36ff74;
        case 0x36ff78u: goto label_36ff78;
        case 0x36ff7cu: goto label_36ff7c;
        case 0x36ff80u: goto label_36ff80;
        case 0x36ff84u: goto label_36ff84;
        case 0x36ff88u: goto label_36ff88;
        case 0x36ff8cu: goto label_36ff8c;
        case 0x36ff90u: goto label_36ff90;
        case 0x36ff94u: goto label_36ff94;
        case 0x36ff98u: goto label_36ff98;
        case 0x36ff9cu: goto label_36ff9c;
        case 0x36ffa0u: goto label_36ffa0;
        case 0x36ffa4u: goto label_36ffa4;
        case 0x36ffa8u: goto label_36ffa8;
        case 0x36ffacu: goto label_36ffac;
        case 0x36ffb0u: goto label_36ffb0;
        case 0x36ffb4u: goto label_36ffb4;
        case 0x36ffb8u: goto label_36ffb8;
        case 0x36ffbcu: goto label_36ffbc;
        case 0x36ffc0u: goto label_36ffc0;
        case 0x36ffc4u: goto label_36ffc4;
        case 0x36ffc8u: goto label_36ffc8;
        case 0x36ffccu: goto label_36ffcc;
        case 0x36ffd0u: goto label_36ffd0;
        case 0x36ffd4u: goto label_36ffd4;
        case 0x36ffd8u: goto label_36ffd8;
        case 0x36ffdcu: goto label_36ffdc;
        case 0x36ffe0u: goto label_36ffe0;
        case 0x36ffe4u: goto label_36ffe4;
        case 0x36ffe8u: goto label_36ffe8;
        case 0x36ffecu: goto label_36ffec;
        case 0x36fff0u: goto label_36fff0;
        case 0x36fff4u: goto label_36fff4;
        case 0x36fff8u: goto label_36fff8;
        case 0x36fffcu: goto label_36fffc;
        case 0x370000u: goto label_370000;
        case 0x370004u: goto label_370004;
        case 0x370008u: goto label_370008;
        case 0x37000cu: goto label_37000c;
        case 0x370010u: goto label_370010;
        case 0x370014u: goto label_370014;
        case 0x370018u: goto label_370018;
        case 0x37001cu: goto label_37001c;
        case 0x370020u: goto label_370020;
        case 0x370024u: goto label_370024;
        case 0x370028u: goto label_370028;
        case 0x37002cu: goto label_37002c;
        case 0x370030u: goto label_370030;
        case 0x370034u: goto label_370034;
        case 0x370038u: goto label_370038;
        case 0x37003cu: goto label_37003c;
        case 0x370040u: goto label_370040;
        case 0x370044u: goto label_370044;
        case 0x370048u: goto label_370048;
        case 0x37004cu: goto label_37004c;
        case 0x370050u: goto label_370050;
        case 0x370054u: goto label_370054;
        case 0x370058u: goto label_370058;
        case 0x37005cu: goto label_37005c;
        case 0x370060u: goto label_370060;
        case 0x370064u: goto label_370064;
        case 0x370068u: goto label_370068;
        case 0x37006cu: goto label_37006c;
        case 0x370070u: goto label_370070;
        case 0x370074u: goto label_370074;
        case 0x370078u: goto label_370078;
        case 0x37007cu: goto label_37007c;
        case 0x370080u: goto label_370080;
        case 0x370084u: goto label_370084;
        case 0x370088u: goto label_370088;
        case 0x37008cu: goto label_37008c;
        case 0x370090u: goto label_370090;
        case 0x370094u: goto label_370094;
        case 0x370098u: goto label_370098;
        case 0x37009cu: goto label_37009c;
        case 0x3700a0u: goto label_3700a0;
        case 0x3700a4u: goto label_3700a4;
        case 0x3700a8u: goto label_3700a8;
        case 0x3700acu: goto label_3700ac;
        case 0x3700b0u: goto label_3700b0;
        case 0x3700b4u: goto label_3700b4;
        case 0x3700b8u: goto label_3700b8;
        case 0x3700bcu: goto label_3700bc;
        case 0x3700c0u: goto label_3700c0;
        case 0x3700c4u: goto label_3700c4;
        case 0x3700c8u: goto label_3700c8;
        case 0x3700ccu: goto label_3700cc;
        case 0x3700d0u: goto label_3700d0;
        case 0x3700d4u: goto label_3700d4;
        case 0x3700d8u: goto label_3700d8;
        case 0x3700dcu: goto label_3700dc;
        case 0x3700e0u: goto label_3700e0;
        case 0x3700e4u: goto label_3700e4;
        case 0x3700e8u: goto label_3700e8;
        case 0x3700ecu: goto label_3700ec;
        case 0x3700f0u: goto label_3700f0;
        case 0x3700f4u: goto label_3700f4;
        case 0x3700f8u: goto label_3700f8;
        case 0x3700fcu: goto label_3700fc;
        case 0x370100u: goto label_370100;
        case 0x370104u: goto label_370104;
        case 0x370108u: goto label_370108;
        case 0x37010cu: goto label_37010c;
        case 0x370110u: goto label_370110;
        case 0x370114u: goto label_370114;
        case 0x370118u: goto label_370118;
        case 0x37011cu: goto label_37011c;
        case 0x370120u: goto label_370120;
        case 0x370124u: goto label_370124;
        case 0x370128u: goto label_370128;
        case 0x37012cu: goto label_37012c;
        case 0x370130u: goto label_370130;
        case 0x370134u: goto label_370134;
        case 0x370138u: goto label_370138;
        case 0x37013cu: goto label_37013c;
        case 0x370140u: goto label_370140;
        case 0x370144u: goto label_370144;
        case 0x370148u: goto label_370148;
        case 0x37014cu: goto label_37014c;
        case 0x370150u: goto label_370150;
        case 0x370154u: goto label_370154;
        case 0x370158u: goto label_370158;
        case 0x37015cu: goto label_37015c;
        case 0x370160u: goto label_370160;
        case 0x370164u: goto label_370164;
        case 0x370168u: goto label_370168;
        case 0x37016cu: goto label_37016c;
        case 0x370170u: goto label_370170;
        case 0x370174u: goto label_370174;
        case 0x370178u: goto label_370178;
        case 0x37017cu: goto label_37017c;
        case 0x370180u: goto label_370180;
        case 0x370184u: goto label_370184;
        case 0x370188u: goto label_370188;
        case 0x37018cu: goto label_37018c;
        case 0x370190u: goto label_370190;
        case 0x370194u: goto label_370194;
        case 0x370198u: goto label_370198;
        case 0x37019cu: goto label_37019c;
        case 0x3701a0u: goto label_3701a0;
        case 0x3701a4u: goto label_3701a4;
        case 0x3701a8u: goto label_3701a8;
        case 0x3701acu: goto label_3701ac;
        case 0x3701b0u: goto label_3701b0;
        case 0x3701b4u: goto label_3701b4;
        case 0x3701b8u: goto label_3701b8;
        case 0x3701bcu: goto label_3701bc;
        case 0x3701c0u: goto label_3701c0;
        case 0x3701c4u: goto label_3701c4;
        case 0x3701c8u: goto label_3701c8;
        case 0x3701ccu: goto label_3701cc;
        case 0x3701d0u: goto label_3701d0;
        case 0x3701d4u: goto label_3701d4;
        case 0x3701d8u: goto label_3701d8;
        case 0x3701dcu: goto label_3701dc;
        case 0x3701e0u: goto label_3701e0;
        case 0x3701e4u: goto label_3701e4;
        case 0x3701e8u: goto label_3701e8;
        case 0x3701ecu: goto label_3701ec;
        case 0x3701f0u: goto label_3701f0;
        case 0x3701f4u: goto label_3701f4;
        case 0x3701f8u: goto label_3701f8;
        case 0x3701fcu: goto label_3701fc;
        case 0x370200u: goto label_370200;
        case 0x370204u: goto label_370204;
        case 0x370208u: goto label_370208;
        case 0x37020cu: goto label_37020c;
        case 0x370210u: goto label_370210;
        case 0x370214u: goto label_370214;
        case 0x370218u: goto label_370218;
        case 0x37021cu: goto label_37021c;
        case 0x370220u: goto label_370220;
        case 0x370224u: goto label_370224;
        case 0x370228u: goto label_370228;
        case 0x37022cu: goto label_37022c;
        case 0x370230u: goto label_370230;
        case 0x370234u: goto label_370234;
        case 0x370238u: goto label_370238;
        case 0x37023cu: goto label_37023c;
        case 0x370240u: goto label_370240;
        case 0x370244u: goto label_370244;
        case 0x370248u: goto label_370248;
        case 0x37024cu: goto label_37024c;
        case 0x370250u: goto label_370250;
        case 0x370254u: goto label_370254;
        case 0x370258u: goto label_370258;
        case 0x37025cu: goto label_37025c;
        case 0x370260u: goto label_370260;
        case 0x370264u: goto label_370264;
        case 0x370268u: goto label_370268;
        case 0x37026cu: goto label_37026c;
        case 0x370270u: goto label_370270;
        case 0x370274u: goto label_370274;
        case 0x370278u: goto label_370278;
        case 0x37027cu: goto label_37027c;
        case 0x370280u: goto label_370280;
        case 0x370284u: goto label_370284;
        case 0x370288u: goto label_370288;
        case 0x37028cu: goto label_37028c;
        case 0x370290u: goto label_370290;
        case 0x370294u: goto label_370294;
        case 0x370298u: goto label_370298;
        case 0x37029cu: goto label_37029c;
        case 0x3702a0u: goto label_3702a0;
        case 0x3702a4u: goto label_3702a4;
        case 0x3702a8u: goto label_3702a8;
        case 0x3702acu: goto label_3702ac;
        case 0x3702b0u: goto label_3702b0;
        case 0x3702b4u: goto label_3702b4;
        case 0x3702b8u: goto label_3702b8;
        case 0x3702bcu: goto label_3702bc;
        case 0x3702c0u: goto label_3702c0;
        case 0x3702c4u: goto label_3702c4;
        case 0x3702c8u: goto label_3702c8;
        case 0x3702ccu: goto label_3702cc;
        case 0x3702d0u: goto label_3702d0;
        case 0x3702d4u: goto label_3702d4;
        case 0x3702d8u: goto label_3702d8;
        case 0x3702dcu: goto label_3702dc;
        case 0x3702e0u: goto label_3702e0;
        case 0x3702e4u: goto label_3702e4;
        case 0x3702e8u: goto label_3702e8;
        case 0x3702ecu: goto label_3702ec;
        case 0x3702f0u: goto label_3702f0;
        case 0x3702f4u: goto label_3702f4;
        case 0x3702f8u: goto label_3702f8;
        case 0x3702fcu: goto label_3702fc;
        case 0x370300u: goto label_370300;
        case 0x370304u: goto label_370304;
        case 0x370308u: goto label_370308;
        case 0x37030cu: goto label_37030c;
        case 0x370310u: goto label_370310;
        case 0x370314u: goto label_370314;
        case 0x370318u: goto label_370318;
        case 0x37031cu: goto label_37031c;
        case 0x370320u: goto label_370320;
        case 0x370324u: goto label_370324;
        case 0x370328u: goto label_370328;
        case 0x37032cu: goto label_37032c;
        case 0x370330u: goto label_370330;
        case 0x370334u: goto label_370334;
        case 0x370338u: goto label_370338;
        case 0x37033cu: goto label_37033c;
        case 0x370340u: goto label_370340;
        case 0x370344u: goto label_370344;
        case 0x370348u: goto label_370348;
        case 0x37034cu: goto label_37034c;
        case 0x370350u: goto label_370350;
        case 0x370354u: goto label_370354;
        case 0x370358u: goto label_370358;
        case 0x37035cu: goto label_37035c;
        case 0x370360u: goto label_370360;
        case 0x370364u: goto label_370364;
        case 0x370368u: goto label_370368;
        case 0x37036cu: goto label_37036c;
        case 0x370370u: goto label_370370;
        case 0x370374u: goto label_370374;
        case 0x370378u: goto label_370378;
        case 0x37037cu: goto label_37037c;
        case 0x370380u: goto label_370380;
        case 0x370384u: goto label_370384;
        case 0x370388u: goto label_370388;
        case 0x37038cu: goto label_37038c;
        case 0x370390u: goto label_370390;
        case 0x370394u: goto label_370394;
        case 0x370398u: goto label_370398;
        case 0x37039cu: goto label_37039c;
        case 0x3703a0u: goto label_3703a0;
        case 0x3703a4u: goto label_3703a4;
        case 0x3703a8u: goto label_3703a8;
        case 0x3703acu: goto label_3703ac;
        case 0x3703b0u: goto label_3703b0;
        case 0x3703b4u: goto label_3703b4;
        case 0x3703b8u: goto label_3703b8;
        case 0x3703bcu: goto label_3703bc;
        case 0x3703c0u: goto label_3703c0;
        case 0x3703c4u: goto label_3703c4;
        case 0x3703c8u: goto label_3703c8;
        case 0x3703ccu: goto label_3703cc;
        case 0x3703d0u: goto label_3703d0;
        case 0x3703d4u: goto label_3703d4;
        case 0x3703d8u: goto label_3703d8;
        case 0x3703dcu: goto label_3703dc;
        case 0x3703e0u: goto label_3703e0;
        case 0x3703e4u: goto label_3703e4;
        case 0x3703e8u: goto label_3703e8;
        case 0x3703ecu: goto label_3703ec;
        case 0x3703f0u: goto label_3703f0;
        case 0x3703f4u: goto label_3703f4;
        case 0x3703f8u: goto label_3703f8;
        case 0x3703fcu: goto label_3703fc;
        case 0x370400u: goto label_370400;
        case 0x370404u: goto label_370404;
        case 0x370408u: goto label_370408;
        case 0x37040cu: goto label_37040c;
        case 0x370410u: goto label_370410;
        case 0x370414u: goto label_370414;
        case 0x370418u: goto label_370418;
        case 0x37041cu: goto label_37041c;
        case 0x370420u: goto label_370420;
        case 0x370424u: goto label_370424;
        case 0x370428u: goto label_370428;
        case 0x37042cu: goto label_37042c;
        case 0x370430u: goto label_370430;
        case 0x370434u: goto label_370434;
        case 0x370438u: goto label_370438;
        case 0x37043cu: goto label_37043c;
        case 0x370440u: goto label_370440;
        case 0x370444u: goto label_370444;
        case 0x370448u: goto label_370448;
        case 0x37044cu: goto label_37044c;
        case 0x370450u: goto label_370450;
        case 0x370454u: goto label_370454;
        case 0x370458u: goto label_370458;
        case 0x37045cu: goto label_37045c;
        case 0x370460u: goto label_370460;
        case 0x370464u: goto label_370464;
        case 0x370468u: goto label_370468;
        case 0x37046cu: goto label_37046c;
        case 0x370470u: goto label_370470;
        case 0x370474u: goto label_370474;
        case 0x370478u: goto label_370478;
        case 0x37047cu: goto label_37047c;
        case 0x370480u: goto label_370480;
        case 0x370484u: goto label_370484;
        case 0x370488u: goto label_370488;
        case 0x37048cu: goto label_37048c;
        case 0x370490u: goto label_370490;
        case 0x370494u: goto label_370494;
        case 0x370498u: goto label_370498;
        case 0x37049cu: goto label_37049c;
        case 0x3704a0u: goto label_3704a0;
        case 0x3704a4u: goto label_3704a4;
        case 0x3704a8u: goto label_3704a8;
        case 0x3704acu: goto label_3704ac;
        case 0x3704b0u: goto label_3704b0;
        case 0x3704b4u: goto label_3704b4;
        case 0x3704b8u: goto label_3704b8;
        case 0x3704bcu: goto label_3704bc;
        case 0x3704c0u: goto label_3704c0;
        case 0x3704c4u: goto label_3704c4;
        case 0x3704c8u: goto label_3704c8;
        case 0x3704ccu: goto label_3704cc;
        case 0x3704d0u: goto label_3704d0;
        case 0x3704d4u: goto label_3704d4;
        case 0x3704d8u: goto label_3704d8;
        case 0x3704dcu: goto label_3704dc;
        case 0x3704e0u: goto label_3704e0;
        case 0x3704e4u: goto label_3704e4;
        case 0x3704e8u: goto label_3704e8;
        case 0x3704ecu: goto label_3704ec;
        case 0x3704f0u: goto label_3704f0;
        case 0x3704f4u: goto label_3704f4;
        case 0x3704f8u: goto label_3704f8;
        case 0x3704fcu: goto label_3704fc;
        case 0x370500u: goto label_370500;
        case 0x370504u: goto label_370504;
        case 0x370508u: goto label_370508;
        case 0x37050cu: goto label_37050c;
        case 0x370510u: goto label_370510;
        case 0x370514u: goto label_370514;
        case 0x370518u: goto label_370518;
        case 0x37051cu: goto label_37051c;
        case 0x370520u: goto label_370520;
        case 0x370524u: goto label_370524;
        case 0x370528u: goto label_370528;
        case 0x37052cu: goto label_37052c;
        case 0x370530u: goto label_370530;
        case 0x370534u: goto label_370534;
        case 0x370538u: goto label_370538;
        case 0x37053cu: goto label_37053c;
        case 0x370540u: goto label_370540;
        case 0x370544u: goto label_370544;
        case 0x370548u: goto label_370548;
        case 0x37054cu: goto label_37054c;
        case 0x370550u: goto label_370550;
        case 0x370554u: goto label_370554;
        case 0x370558u: goto label_370558;
        case 0x37055cu: goto label_37055c;
        case 0x370560u: goto label_370560;
        case 0x370564u: goto label_370564;
        case 0x370568u: goto label_370568;
        case 0x37056cu: goto label_37056c;
        case 0x370570u: goto label_370570;
        case 0x370574u: goto label_370574;
        case 0x370578u: goto label_370578;
        case 0x37057cu: goto label_37057c;
        case 0x370580u: goto label_370580;
        case 0x370584u: goto label_370584;
        case 0x370588u: goto label_370588;
        case 0x37058cu: goto label_37058c;
        case 0x370590u: goto label_370590;
        case 0x370594u: goto label_370594;
        case 0x370598u: goto label_370598;
        case 0x37059cu: goto label_37059c;
        case 0x3705a0u: goto label_3705a0;
        case 0x3705a4u: goto label_3705a4;
        case 0x3705a8u: goto label_3705a8;
        case 0x3705acu: goto label_3705ac;
        case 0x3705b0u: goto label_3705b0;
        case 0x3705b4u: goto label_3705b4;
        case 0x3705b8u: goto label_3705b8;
        case 0x3705bcu: goto label_3705bc;
        case 0x3705c0u: goto label_3705c0;
        case 0x3705c4u: goto label_3705c4;
        case 0x3705c8u: goto label_3705c8;
        case 0x3705ccu: goto label_3705cc;
        case 0x3705d0u: goto label_3705d0;
        case 0x3705d4u: goto label_3705d4;
        case 0x3705d8u: goto label_3705d8;
        case 0x3705dcu: goto label_3705dc;
        case 0x3705e0u: goto label_3705e0;
        case 0x3705e4u: goto label_3705e4;
        case 0x3705e8u: goto label_3705e8;
        case 0x3705ecu: goto label_3705ec;
        case 0x3705f0u: goto label_3705f0;
        case 0x3705f4u: goto label_3705f4;
        case 0x3705f8u: goto label_3705f8;
        case 0x3705fcu: goto label_3705fc;
        case 0x370600u: goto label_370600;
        case 0x370604u: goto label_370604;
        case 0x370608u: goto label_370608;
        case 0x37060cu: goto label_37060c;
        case 0x370610u: goto label_370610;
        case 0x370614u: goto label_370614;
        case 0x370618u: goto label_370618;
        case 0x37061cu: goto label_37061c;
        case 0x370620u: goto label_370620;
        case 0x370624u: goto label_370624;
        case 0x370628u: goto label_370628;
        case 0x37062cu: goto label_37062c;
        case 0x370630u: goto label_370630;
        case 0x370634u: goto label_370634;
        case 0x370638u: goto label_370638;
        case 0x37063cu: goto label_37063c;
        case 0x370640u: goto label_370640;
        case 0x370644u: goto label_370644;
        case 0x370648u: goto label_370648;
        case 0x37064cu: goto label_37064c;
        case 0x370650u: goto label_370650;
        case 0x370654u: goto label_370654;
        case 0x370658u: goto label_370658;
        case 0x37065cu: goto label_37065c;
        case 0x370660u: goto label_370660;
        case 0x370664u: goto label_370664;
        case 0x370668u: goto label_370668;
        case 0x37066cu: goto label_37066c;
        case 0x370670u: goto label_370670;
        case 0x370674u: goto label_370674;
        case 0x370678u: goto label_370678;
        case 0x37067cu: goto label_37067c;
        case 0x370680u: goto label_370680;
        case 0x370684u: goto label_370684;
        case 0x370688u: goto label_370688;
        case 0x37068cu: goto label_37068c;
        case 0x370690u: goto label_370690;
        case 0x370694u: goto label_370694;
        case 0x370698u: goto label_370698;
        case 0x37069cu: goto label_37069c;
        case 0x3706a0u: goto label_3706a0;
        case 0x3706a4u: goto label_3706a4;
        case 0x3706a8u: goto label_3706a8;
        case 0x3706acu: goto label_3706ac;
        case 0x3706b0u: goto label_3706b0;
        case 0x3706b4u: goto label_3706b4;
        case 0x3706b8u: goto label_3706b8;
        case 0x3706bcu: goto label_3706bc;
        case 0x3706c0u: goto label_3706c0;
        case 0x3706c4u: goto label_3706c4;
        case 0x3706c8u: goto label_3706c8;
        case 0x3706ccu: goto label_3706cc;
        case 0x3706d0u: goto label_3706d0;
        case 0x3706d4u: goto label_3706d4;
        case 0x3706d8u: goto label_3706d8;
        case 0x3706dcu: goto label_3706dc;
        case 0x3706e0u: goto label_3706e0;
        case 0x3706e4u: goto label_3706e4;
        case 0x3706e8u: goto label_3706e8;
        case 0x3706ecu: goto label_3706ec;
        case 0x3706f0u: goto label_3706f0;
        case 0x3706f4u: goto label_3706f4;
        case 0x3706f8u: goto label_3706f8;
        case 0x3706fcu: goto label_3706fc;
        case 0x370700u: goto label_370700;
        case 0x370704u: goto label_370704;
        case 0x370708u: goto label_370708;
        case 0x37070cu: goto label_37070c;
        case 0x370710u: goto label_370710;
        case 0x370714u: goto label_370714;
        case 0x370718u: goto label_370718;
        case 0x37071cu: goto label_37071c;
        case 0x370720u: goto label_370720;
        case 0x370724u: goto label_370724;
        case 0x370728u: goto label_370728;
        case 0x37072cu: goto label_37072c;
        case 0x370730u: goto label_370730;
        case 0x370734u: goto label_370734;
        case 0x370738u: goto label_370738;
        case 0x37073cu: goto label_37073c;
        case 0x370740u: goto label_370740;
        case 0x370744u: goto label_370744;
        case 0x370748u: goto label_370748;
        case 0x37074cu: goto label_37074c;
        case 0x370750u: goto label_370750;
        case 0x370754u: goto label_370754;
        case 0x370758u: goto label_370758;
        case 0x37075cu: goto label_37075c;
        case 0x370760u: goto label_370760;
        case 0x370764u: goto label_370764;
        case 0x370768u: goto label_370768;
        case 0x37076cu: goto label_37076c;
        case 0x370770u: goto label_370770;
        case 0x370774u: goto label_370774;
        case 0x370778u: goto label_370778;
        case 0x37077cu: goto label_37077c;
        case 0x370780u: goto label_370780;
        case 0x370784u: goto label_370784;
        case 0x370788u: goto label_370788;
        case 0x37078cu: goto label_37078c;
        case 0x370790u: goto label_370790;
        case 0x370794u: goto label_370794;
        case 0x370798u: goto label_370798;
        case 0x37079cu: goto label_37079c;
        case 0x3707a0u: goto label_3707a0;
        case 0x3707a4u: goto label_3707a4;
        case 0x3707a8u: goto label_3707a8;
        case 0x3707acu: goto label_3707ac;
        case 0x3707b0u: goto label_3707b0;
        case 0x3707b4u: goto label_3707b4;
        case 0x3707b8u: goto label_3707b8;
        case 0x3707bcu: goto label_3707bc;
        case 0x3707c0u: goto label_3707c0;
        case 0x3707c4u: goto label_3707c4;
        case 0x3707c8u: goto label_3707c8;
        case 0x3707ccu: goto label_3707cc;
        case 0x3707d0u: goto label_3707d0;
        case 0x3707d4u: goto label_3707d4;
        case 0x3707d8u: goto label_3707d8;
        case 0x3707dcu: goto label_3707dc;
        case 0x3707e0u: goto label_3707e0;
        case 0x3707e4u: goto label_3707e4;
        case 0x3707e8u: goto label_3707e8;
        case 0x3707ecu: goto label_3707ec;
        case 0x3707f0u: goto label_3707f0;
        case 0x3707f4u: goto label_3707f4;
        case 0x3707f8u: goto label_3707f8;
        case 0x3707fcu: goto label_3707fc;
        case 0x370800u: goto label_370800;
        case 0x370804u: goto label_370804;
        case 0x370808u: goto label_370808;
        case 0x37080cu: goto label_37080c;
        case 0x370810u: goto label_370810;
        case 0x370814u: goto label_370814;
        case 0x370818u: goto label_370818;
        case 0x37081cu: goto label_37081c;
        case 0x370820u: goto label_370820;
        case 0x370824u: goto label_370824;
        case 0x370828u: goto label_370828;
        case 0x37082cu: goto label_37082c;
        case 0x370830u: goto label_370830;
        case 0x370834u: goto label_370834;
        case 0x370838u: goto label_370838;
        case 0x37083cu: goto label_37083c;
        case 0x370840u: goto label_370840;
        case 0x370844u: goto label_370844;
        case 0x370848u: goto label_370848;
        case 0x37084cu: goto label_37084c;
        case 0x370850u: goto label_370850;
        case 0x370854u: goto label_370854;
        case 0x370858u: goto label_370858;
        case 0x37085cu: goto label_37085c;
        case 0x370860u: goto label_370860;
        case 0x370864u: goto label_370864;
        case 0x370868u: goto label_370868;
        case 0x37086cu: goto label_37086c;
        case 0x370870u: goto label_370870;
        case 0x370874u: goto label_370874;
        case 0x370878u: goto label_370878;
        case 0x37087cu: goto label_37087c;
        case 0x370880u: goto label_370880;
        case 0x370884u: goto label_370884;
        case 0x370888u: goto label_370888;
        case 0x37088cu: goto label_37088c;
        case 0x370890u: goto label_370890;
        case 0x370894u: goto label_370894;
        case 0x370898u: goto label_370898;
        case 0x37089cu: goto label_37089c;
        case 0x3708a0u: goto label_3708a0;
        case 0x3708a4u: goto label_3708a4;
        case 0x3708a8u: goto label_3708a8;
        case 0x3708acu: goto label_3708ac;
        case 0x3708b0u: goto label_3708b0;
        case 0x3708b4u: goto label_3708b4;
        case 0x3708b8u: goto label_3708b8;
        case 0x3708bcu: goto label_3708bc;
        case 0x3708c0u: goto label_3708c0;
        case 0x3708c4u: goto label_3708c4;
        case 0x3708c8u: goto label_3708c8;
        case 0x3708ccu: goto label_3708cc;
        case 0x3708d0u: goto label_3708d0;
        case 0x3708d4u: goto label_3708d4;
        case 0x3708d8u: goto label_3708d8;
        case 0x3708dcu: goto label_3708dc;
        case 0x3708e0u: goto label_3708e0;
        case 0x3708e4u: goto label_3708e4;
        case 0x3708e8u: goto label_3708e8;
        case 0x3708ecu: goto label_3708ec;
        case 0x3708f0u: goto label_3708f0;
        case 0x3708f4u: goto label_3708f4;
        case 0x3708f8u: goto label_3708f8;
        case 0x3708fcu: goto label_3708fc;
        case 0x370900u: goto label_370900;
        case 0x370904u: goto label_370904;
        case 0x370908u: goto label_370908;
        case 0x37090cu: goto label_37090c;
        case 0x370910u: goto label_370910;
        case 0x370914u: goto label_370914;
        case 0x370918u: goto label_370918;
        case 0x37091cu: goto label_37091c;
        case 0x370920u: goto label_370920;
        case 0x370924u: goto label_370924;
        case 0x370928u: goto label_370928;
        case 0x37092cu: goto label_37092c;
        case 0x370930u: goto label_370930;
        case 0x370934u: goto label_370934;
        case 0x370938u: goto label_370938;
        case 0x37093cu: goto label_37093c;
        case 0x370940u: goto label_370940;
        case 0x370944u: goto label_370944;
        case 0x370948u: goto label_370948;
        case 0x37094cu: goto label_37094c;
        case 0x370950u: goto label_370950;
        case 0x370954u: goto label_370954;
        case 0x370958u: goto label_370958;
        case 0x37095cu: goto label_37095c;
        case 0x370960u: goto label_370960;
        case 0x370964u: goto label_370964;
        case 0x370968u: goto label_370968;
        case 0x37096cu: goto label_37096c;
        case 0x370970u: goto label_370970;
        case 0x370974u: goto label_370974;
        case 0x370978u: goto label_370978;
        case 0x37097cu: goto label_37097c;
        case 0x370980u: goto label_370980;
        case 0x370984u: goto label_370984;
        case 0x370988u: goto label_370988;
        case 0x37098cu: goto label_37098c;
        case 0x370990u: goto label_370990;
        case 0x370994u: goto label_370994;
        case 0x370998u: goto label_370998;
        case 0x37099cu: goto label_37099c;
        case 0x3709a0u: goto label_3709a0;
        case 0x3709a4u: goto label_3709a4;
        case 0x3709a8u: goto label_3709a8;
        case 0x3709acu: goto label_3709ac;
        case 0x3709b0u: goto label_3709b0;
        case 0x3709b4u: goto label_3709b4;
        case 0x3709b8u: goto label_3709b8;
        case 0x3709bcu: goto label_3709bc;
        case 0x3709c0u: goto label_3709c0;
        case 0x3709c4u: goto label_3709c4;
        case 0x3709c8u: goto label_3709c8;
        case 0x3709ccu: goto label_3709cc;
        case 0x3709d0u: goto label_3709d0;
        case 0x3709d4u: goto label_3709d4;
        case 0x3709d8u: goto label_3709d8;
        case 0x3709dcu: goto label_3709dc;
        default: break;
    }

    ctx->pc = 0x36f2f0u;

label_36f2f0:
    // 0x36f2f0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x36f2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_36f2f4:
    // 0x36f2f4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x36f2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_36f2f8:
    // 0x36f2f8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x36f2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_36f2fc:
    // 0x36f2fc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x36f2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_36f300:
    // 0x36f300: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x36f300u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_36f304:
    // 0x36f304: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x36f304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_36f308:
    // 0x36f308: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x36f308u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_36f30c:
    // 0x36f30c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x36f30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_36f310:
    // 0x36f310: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x36f310u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_36f314:
    // 0x36f314: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x36f314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_36f318:
    // 0x36f318: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x36f318u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36f31c:
    // 0x36f31c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x36f31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_36f320:
    // 0x36f320: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x36f320u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36f324:
    // 0x36f324: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36f324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_36f328:
    // 0x36f328: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x36f328u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_36f32c:
    // 0x36f32c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36f32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_36f330:
    // 0x36f330: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x36f330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_36f334:
    // 0x36f334: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36f334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_36f338:
    // 0x36f338: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x36f338u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_36f33c:
    // 0x36f33c: 0x8c900040  lw          $s0, 0x40($a0)
    ctx->pc = 0x36f33cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_36f340:
    // 0x36f340: 0x8d63009c  lw          $v1, 0x9C($t3)
    ctx->pc = 0x36f340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 156)));
label_36f344:
    // 0x36f344: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x36f344u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_36f348:
    // 0x36f348: 0x1070001a  beq         $v1, $s0, . + 4 + (0x1A << 2)
label_36f34c:
    if (ctx->pc == 0x36F34Cu) {
        ctx->pc = 0x36F34Cu;
            // 0x36f34c: 0xa48821  addu        $s1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x36F350u;
        goto label_36f350;
    }
    ctx->pc = 0x36F348u;
    {
        const bool branch_taken_0x36f348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x36F34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F348u;
            // 0x36f34c: 0xa48821  addu        $s1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f348) {
            ctx->pc = 0x36F3B4u;
            goto label_36f3b4;
        }
    }
    ctx->pc = 0x36F350u;
label_36f350:
    // 0x36f350: 0x8ec20090  lw          $v0, 0x90($s6)
    ctx->pc = 0x36f350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
label_36f354:
    // 0x36f354: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x36f354u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_36f358:
    // 0x36f358: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_36f35c:
    if (ctx->pc == 0x36F35Cu) {
        ctx->pc = 0x36F360u;
        goto label_36f360;
    }
    ctx->pc = 0x36F358u;
    {
        const bool branch_taken_0x36f358 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f358) {
            ctx->pc = 0x36F398u;
            goto label_36f398;
        }
    }
    ctx->pc = 0x36F360u;
label_36f360:
    // 0x36f360: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36f360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_36f364:
    // 0x36f364: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36f364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36f368:
    // 0x36f368: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x36f368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_36f36c:
    // 0x36f36c: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x36f36cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_36f370:
    // 0x36f370: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_36f374:
    if (ctx->pc == 0x36F374u) {
        ctx->pc = 0x36F374u;
            // 0x36f374: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x36F378u;
        goto label_36f378;
    }
    ctx->pc = 0x36F370u;
    {
        const bool branch_taken_0x36f370 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x36F374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F370u;
            // 0x36f374: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f370) {
            ctx->pc = 0x36F398u;
            goto label_36f398;
        }
    }
    ctx->pc = 0x36F378u;
label_36f378:
    // 0x36f378: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36f378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36f37c:
    // 0x36f37c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36f380:
    // 0x36f380: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x36f380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_36f384:
    // 0x36f384: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x36f384u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_36f388:
    // 0x36f388: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x36f388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_36f38c:
    // 0x36f38c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x36f38cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_36f390:
    // 0x36f390: 0xc055ea8  jal         func_157AA0
label_36f394:
    if (ctx->pc == 0x36F394u) {
        ctx->pc = 0x36F394u;
            // 0x36f394: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F398u;
        goto label_36f398;
    }
    ctx->pc = 0x36F390u;
    SET_GPR_U32(ctx, 31, 0x36F398u);
    ctx->pc = 0x36F394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F390u;
            // 0x36f394: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F398u; }
        if (ctx->pc != 0x36F398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F398u; }
        if (ctx->pc != 0x36F398u) { return; }
    }
    ctx->pc = 0x36F398u;
label_36f398:
    // 0x36f398: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36f398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36f39c:
    // 0x36f39c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36f3a0:
    // 0x36f3a0: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x36f3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_36f3a4:
    // 0x36f3a4: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x36f3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_36f3a8:
    // 0x36f3a8: 0xc04e738  jal         func_139CE0
label_36f3ac:
    if (ctx->pc == 0x36F3ACu) {
        ctx->pc = 0x36F3ACu;
            // 0x36f3ac: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x36F3B0u;
        goto label_36f3b0;
    }
    ctx->pc = 0x36F3A8u;
    SET_GPR_U32(ctx, 31, 0x36F3B0u);
    ctx->pc = 0x36F3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F3A8u;
            // 0x36f3ac: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F3B0u; }
        if (ctx->pc != 0x36F3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F3B0u; }
        if (ctx->pc != 0x36F3B0u) { return; }
    }
    ctx->pc = 0x36F3B0u;
label_36f3b0:
    // 0x36f3b0: 0xaed0009c  sw          $s0, 0x9C($s6)
    ctx->pc = 0x36f3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 156), GPR_U32(ctx, 16));
label_36f3b4:
    // 0x36f3b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36f3b8:
    // 0x36f3b8: 0x92a3004d  lbu         $v1, 0x4D($s5)
    ctx->pc = 0x36f3b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 77)));
label_36f3bc:
    // 0x36f3bc: 0x2e48004  sllv        $s0, $a0, $s7
    ctx->pc = 0x36f3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 23) & 0x1F));
label_36f3c0:
    // 0x36f3c0: 0x2002027  not         $a0, $s0
    ctx->pc = 0x36f3c0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
label_36f3c4:
    // 0x36f3c4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x36f3c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_36f3c8:
    // 0x36f3c8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x36f3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_36f3cc:
    // 0x36f3cc: 0xa2a3004d  sb          $v1, 0x4D($s5)
    ctx->pc = 0x36f3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 77), (uint8_t)GPR_U32(ctx, 3));
label_36f3d0:
    // 0x36f3d0: 0x92a30090  lbu         $v1, 0x90($s5)
    ctx->pc = 0x36f3d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
label_36f3d4:
    // 0x36f3d4: 0x50600092  beql        $v1, $zero, . + 4 + (0x92 << 2)
label_36f3d8:
    if (ctx->pc == 0x36F3D8u) {
        ctx->pc = 0x36F3D8u;
            // 0x36f3d8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x36F3DCu;
        goto label_36f3dc;
    }
    ctx->pc = 0x36F3D4u;
    {
        const bool branch_taken_0x36f3d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f3d4) {
            ctx->pc = 0x36F3D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36F3D4u;
            // 0x36f3d8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36F620u;
            goto label_36f620;
        }
    }
    ctx->pc = 0x36F3DCu;
label_36f3dc:
    // 0x36f3dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36f3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36f3e0:
    // 0x36f3e0: 0xc04f278  jal         func_13C9E0
label_36f3e4:
    if (ctx->pc == 0x36F3E4u) {
        ctx->pc = 0x36F3E4u;
            // 0x36f3e4: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x36F3E8u;
        goto label_36f3e8;
    }
    ctx->pc = 0x36F3E0u;
    SET_GPR_U32(ctx, 31, 0x36F3E8u);
    ctx->pc = 0x36F3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F3E0u;
            // 0x36f3e4: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F3E8u; }
        if (ctx->pc != 0x36F3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F3E8u; }
        if (ctx->pc != 0x36F3E8u) { return; }
    }
    ctx->pc = 0x36F3E8u;
label_36f3e8:
    // 0x36f3e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36f3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36f3ec:
    // 0x36f3ec: 0xc04ce80  jal         func_133A00
label_36f3f0:
    if (ctx->pc == 0x36F3F0u) {
        ctx->pc = 0x36F3F0u;
            // 0x36f3f0: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x36F3F4u;
        goto label_36f3f4;
    }
    ctx->pc = 0x36F3ECu;
    SET_GPR_U32(ctx, 31, 0x36F3F4u);
    ctx->pc = 0x36F3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F3ECu;
            // 0x36f3f0: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F3F4u; }
        if (ctx->pc != 0x36F3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F3F4u; }
        if (ctx->pc != 0x36F3F4u) { return; }
    }
    ctx->pc = 0x36F3F4u;
label_36f3f4:
    // 0x36f3f4: 0xc0d4108  jal         func_350420
label_36f3f8:
    if (ctx->pc == 0x36F3F8u) {
        ctx->pc = 0x36F3F8u;
            // 0x36f3f8: 0x8e360000  lw          $s6, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x36F3FCu;
        goto label_36f3fc;
    }
    ctx->pc = 0x36F3F4u;
    SET_GPR_U32(ctx, 31, 0x36F3FCu);
    ctx->pc = 0x36F3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F3F4u;
            // 0x36f3f8: 0x8e360000  lw          $s6, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F3FCu; }
        if (ctx->pc != 0x36F3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F3FCu; }
        if (ctx->pc != 0x36F3FCu) { return; }
    }
    ctx->pc = 0x36F3FCu;
label_36f3fc:
    // 0x36f3fc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x36f3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_36f400:
    // 0x36f400: 0xc0d4104  jal         func_350410
label_36f404:
    if (ctx->pc == 0x36F404u) {
        ctx->pc = 0x36F404u;
            // 0x36f404: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F408u;
        goto label_36f408;
    }
    ctx->pc = 0x36F400u;
    SET_GPR_U32(ctx, 31, 0x36F408u);
    ctx->pc = 0x36F404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F400u;
            // 0x36f404: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F408u; }
        if (ctx->pc != 0x36F408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F408u; }
        if (ctx->pc != 0x36F408u) { return; }
    }
    ctx->pc = 0x36F408u;
label_36f408:
    // 0x36f408: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x36f408u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36f40c:
    // 0x36f40c: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x36f40cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_36f410:
    // 0x36f410: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x36f410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_36f414:
    // 0x36f414: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x36f414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_36f418:
    // 0x36f418: 0xc44c4dd0  lwc1        $f12, 0x4DD0($v0)
    ctx->pc = 0x36f418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_36f41c:
    // 0x36f41c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x36f41cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_36f420:
    // 0x36f420: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x36f420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36f424:
    // 0x36f424: 0xc0d40ac  jal         func_3502B0
label_36f428:
    if (ctx->pc == 0x36F428u) {
        ctx->pc = 0x36F428u;
            // 0x36f428: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F42Cu;
        goto label_36f42c;
    }
    ctx->pc = 0x36F424u;
    SET_GPR_U32(ctx, 31, 0x36F42Cu);
    ctx->pc = 0x36F428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F424u;
            // 0x36f428: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F42Cu; }
        if (ctx->pc != 0x36F42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F42Cu; }
        if (ctx->pc != 0x36F42Cu) { return; }
    }
    ctx->pc = 0x36F42Cu;
label_36f42c:
    // 0x36f42c: 0xaea20044  sw          $v0, 0x44($s5)
    ctx->pc = 0x36f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
label_36f430:
    // 0x36f430: 0x28560002  slti        $s6, $v0, 0x2
    ctx->pc = 0x36f430u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_36f434:
    // 0x36f434: 0x2161018  mult        $v0, $s0, $s6
    ctx->pc = 0x36f434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_36f438:
    // 0x36f438: 0x26a4004d  addiu       $a0, $s5, 0x4D
    ctx->pc = 0x36f438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 77));
label_36f43c:
    // 0x36f43c: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x36f43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_36f440:
    // 0x36f440: 0xc0d590c  jal         func_356430
label_36f444:
    if (ctx->pc == 0x36F444u) {
        ctx->pc = 0x36F444u;
            // 0x36f444: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->pc = 0x36F448u;
        goto label_36f448;
    }
    ctx->pc = 0x36F440u;
    SET_GPR_U32(ctx, 31, 0x36F448u);
    ctx->pc = 0x36F444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F440u;
            // 0x36f444: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x356430u;
    if (runtime->hasFunction(0x356430u)) {
        auto targetFn = runtime->lookupFunction(0x356430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F448u; }
        if (ctx->pc != 0x36F448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00356430_0x356430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F448u; }
        if (ctx->pc != 0x36F448u) { return; }
    }
    ctx->pc = 0x36F448u;
label_36f448:
    // 0x36f448: 0x12c00074  beqz        $s6, . + 4 + (0x74 << 2)
label_36f44c:
    if (ctx->pc == 0x36F44Cu) {
        ctx->pc = 0x36F450u;
        goto label_36f450;
    }
    ctx->pc = 0x36F448u;
    {
        const bool branch_taken_0x36f448 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f448) {
            ctx->pc = 0x36F61Cu;
            goto label_36f61c;
        }
    }
    ctx->pc = 0x36F450u;
label_36f450:
    // 0x36f450: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x36f450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36f454:
    // 0x36f454: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f454u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f458:
    // 0x36f458: 0x0  nop
    ctx->pc = 0x36f458u;
    // NOP
label_36f45c:
    // 0x36f45c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36f45cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36f460:
    // 0x36f460: 0x45010039  bc1t        . + 4 + (0x39 << 2)
label_36f464:
    if (ctx->pc == 0x36F464u) {
        ctx->pc = 0x36F464u;
            // 0x36f464: 0x26a6006c  addiu       $a2, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->pc = 0x36F468u;
        goto label_36f468;
    }
    ctx->pc = 0x36F460u;
    {
        const bool branch_taken_0x36f460 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x36F464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F460u;
            // 0x36f464: 0x26a6006c  addiu       $a2, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f460) {
            ctx->pc = 0x36F548u;
            goto label_36f548;
        }
    }
    ctx->pc = 0x36F468u;
label_36f468:
    // 0x36f468: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x36f468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_36f46c:
    // 0x36f46c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36f470:
    // 0x36f470: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
label_36f474:
    if (ctx->pc == 0x36F474u) {
        ctx->pc = 0x36F478u;
        goto label_36f478;
    }
    ctx->pc = 0x36F470u;
    {
        const bool branch_taken_0x36f470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x36f470) {
            ctx->pc = 0x36F548u;
            goto label_36f548;
        }
    }
    ctx->pc = 0x36F478u;
label_36f478:
    // 0x36f478: 0xc4d40008  lwc1        $f20, 0x8($a2)
    ctx->pc = 0x36f478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_36f47c:
    // 0x36f47c: 0x24d00008  addiu       $s0, $a2, 0x8
    ctx->pc = 0x36f47cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_36f480:
    // 0x36f480: 0xc049514  jal         func_125450
label_36f484:
    if (ctx->pc == 0x36F484u) {
        ctx->pc = 0x36F484u;
            // 0x36f484: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x36F488u;
        goto label_36f488;
    }
    ctx->pc = 0x36F480u;
    SET_GPR_U32(ctx, 31, 0x36F488u);
    ctx->pc = 0x36F484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F480u;
            // 0x36f484: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F488u; }
        if (ctx->pc != 0x36F488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F488u; }
        if (ctx->pc != 0x36F488u) { return; }
    }
    ctx->pc = 0x36F488u;
label_36f488:
    // 0x36f488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36f488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36f48c:
    // 0x36f48c: 0xc04020c  jal         func_100830
label_36f490:
    if (ctx->pc == 0x36F490u) {
        ctx->pc = 0x36F490u;
            // 0x36f490: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F494u;
        goto label_36f494;
    }
    ctx->pc = 0x36F48Cu;
    SET_GPR_U32(ctx, 31, 0x36F494u);
    ctx->pc = 0x36F490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F48Cu;
            // 0x36f490: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100830u;
    if (runtime->hasFunction(0x100830u)) {
        auto targetFn = runtime->lookupFunction(0x100830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F494u; }
        if (ctx->pc != 0x36F494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100830_0x100830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F494u; }
        if (ctx->pc != 0x36F494u) { return; }
    }
    ctx->pc = 0x36F494u;
label_36f494:
    // 0x36f494: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_36f498:
    if (ctx->pc == 0x36F498u) {
        ctx->pc = 0x36F49Cu;
        goto label_36f49c;
    }
    ctx->pc = 0x36F494u;
    {
        const bool branch_taken_0x36f494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f494) {
            ctx->pc = 0x36F4B8u;
            goto label_36f4b8;
        }
    }
    ctx->pc = 0x36F49Cu;
label_36f49c:
    // 0x36f49c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x36f49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36f4a0:
    // 0x36f4a0: 0x0  nop
    ctx->pc = 0x36f4a0u;
    // NOP
label_36f4a4:
    // 0x36f4a4: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x36f4a4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
label_36f4a8:
    // 0x36f4a8: 0x0  nop
    ctx->pc = 0x36f4a8u;
    // NOP
label_36f4ac:
    // 0x36f4ac: 0x0  nop
    ctx->pc = 0x36f4acu;
    // NOP
label_36f4b0:
    // 0x36f4b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_36f4b4:
    if (ctx->pc == 0x36F4B4u) {
        ctx->pc = 0x36F4B8u;
        goto label_36f4b8;
    }
    ctx->pc = 0x36F4B0u;
    {
        const bool branch_taken_0x36f4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f4b0) {
            ctx->pc = 0x36F4BCu;
            goto label_36f4bc;
        }
    }
    ctx->pc = 0x36F4B8u;
label_36f4b8:
    // 0x36f4b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36f4b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36f4bc:
    // 0x36f4bc: 0xc054c3c  jal         func_1530F0
label_36f4c0:
    if (ctx->pc == 0x36F4C0u) {
        ctx->pc = 0x36F4C0u;
            // 0x36f4c0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x36F4C4u;
        goto label_36f4c4;
    }
    ctx->pc = 0x36F4BCu;
    SET_GPR_U32(ctx, 31, 0x36F4C4u);
    ctx->pc = 0x36F4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F4BCu;
            // 0x36f4c0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F4C4u; }
        if (ctx->pc != 0x36F4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F4C4u; }
        if (ctx->pc != 0x36F4C4u) { return; }
    }
    ctx->pc = 0x36F4C4u;
label_36f4c4:
    // 0x36f4c4: 0xc054c40  jal         func_153100
label_36f4c8:
    if (ctx->pc == 0x36F4C8u) {
        ctx->pc = 0x36F4C8u;
            // 0x36f4c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F4CCu;
        goto label_36f4cc;
    }
    ctx->pc = 0x36F4C4u;
    SET_GPR_U32(ctx, 31, 0x36F4CCu);
    ctx->pc = 0x36F4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F4C4u;
            // 0x36f4c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153100u;
    if (runtime->hasFunction(0x153100u)) {
        auto targetFn = runtime->lookupFunction(0x153100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F4CCu; }
        if (ctx->pc != 0x36F4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153100_0x153100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F4CCu; }
        if (ctx->pc != 0x36F4CCu) { return; }
    }
    ctx->pc = 0x36F4CCu;
label_36f4cc:
    // 0x36f4cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x36f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36f4d0:
    // 0x36f4d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36f4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36f4d4:
    // 0x36f4d4: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x36f4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_36f4d8:
    // 0x36f4d8: 0xc04e4a4  jal         func_139290
label_36f4dc:
    if (ctx->pc == 0x36F4DCu) {
        ctx->pc = 0x36F4DCu;
            // 0x36f4dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F4E0u;
        goto label_36f4e0;
    }
    ctx->pc = 0x36F4D8u;
    SET_GPR_U32(ctx, 31, 0x36F4E0u);
    ctx->pc = 0x36F4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F4D8u;
            // 0x36f4dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F4E0u; }
        if (ctx->pc != 0x36F4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F4E0u; }
        if (ctx->pc != 0x36F4E0u) { return; }
    }
    ctx->pc = 0x36F4E0u;
label_36f4e0:
    // 0x36f4e0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x36f4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_36f4e4:
    // 0x36f4e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36f4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36f4e8:
    // 0x36f4e8: 0xc04cd60  jal         func_133580
label_36f4ec:
    if (ctx->pc == 0x36F4ECu) {
        ctx->pc = 0x36F4ECu;
            // 0x36f4ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F4F0u;
        goto label_36f4f0;
    }
    ctx->pc = 0x36F4E8u;
    SET_GPR_U32(ctx, 31, 0x36F4F0u);
    ctx->pc = 0x36F4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F4E8u;
            // 0x36f4ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F4F0u; }
        if (ctx->pc != 0x36F4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F4F0u; }
        if (ctx->pc != 0x36F4F0u) { return; }
    }
    ctx->pc = 0x36F4F0u;
label_36f4f0:
    // 0x36f4f0: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x36f4f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_36f4f4:
    // 0x36f4f4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x36f4f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_36f4f8:
    // 0x36f4f8: 0x320f809  jalr        $t9
label_36f4fc:
    if (ctx->pc == 0x36F4FCu) {
        ctx->pc = 0x36F4FCu;
            // 0x36f4fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F500u;
        goto label_36f500;
    }
    ctx->pc = 0x36F4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36F500u);
        ctx->pc = 0x36F4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F4F8u;
            // 0x36f4fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36F500u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36F500u; }
            if (ctx->pc != 0x36F500u) { return; }
        }
        }
    }
    ctx->pc = 0x36F500u;
label_36f500:
    // 0x36f500: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x36f500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36f504:
    // 0x36f504: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36f504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36f508:
    // 0x36f508: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36f508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36f50c:
    // 0x36f50c: 0xc054fd4  jal         func_153F50
label_36f510:
    if (ctx->pc == 0x36F510u) {
        ctx->pc = 0x36F510u;
            // 0x36f510: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F514u;
        goto label_36f514;
    }
    ctx->pc = 0x36F50Cu;
    SET_GPR_U32(ctx, 31, 0x36F514u);
    ctx->pc = 0x36F510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F50Cu;
            // 0x36f510: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F514u; }
        if (ctx->pc != 0x36F514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F514u; }
        if (ctx->pc != 0x36F514u) { return; }
    }
    ctx->pc = 0x36F514u;
label_36f514:
    // 0x36f514: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x36f514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36f518:
    // 0x36f518: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x36f518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_36f51c:
    // 0x36f51c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x36f51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_36f520:
    // 0x36f520: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36f520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36f524:
    // 0x36f524: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x36f524u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_36f528:
    // 0x36f528: 0xc055234  jal         func_1548D0
label_36f52c:
    if (ctx->pc == 0x36F52Cu) {
        ctx->pc = 0x36F52Cu;
            // 0x36f52c: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x36F530u;
        goto label_36f530;
    }
    ctx->pc = 0x36F528u;
    SET_GPR_U32(ctx, 31, 0x36F530u);
    ctx->pc = 0x36F52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F528u;
            // 0x36f52c: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F530u; }
        if (ctx->pc != 0x36F530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F530u; }
        if (ctx->pc != 0x36F530u) { return; }
    }
    ctx->pc = 0x36F530u;
label_36f530:
    // 0x36f530: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_36f534:
    // 0x36f534: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36f534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36f538:
    // 0x36f538: 0xc054c3c  jal         func_1530F0
label_36f53c:
    if (ctx->pc == 0x36F53Cu) {
        ctx->pc = 0x36F53Cu;
            // 0x36f53c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x36F540u;
        goto label_36f540;
    }
    ctx->pc = 0x36F538u;
    SET_GPR_U32(ctx, 31, 0x36F540u);
    ctx->pc = 0x36F53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F538u;
            // 0x36f53c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F540u; }
        if (ctx->pc != 0x36F540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F540u; }
        if (ctx->pc != 0x36F540u) { return; }
    }
    ctx->pc = 0x36F540u;
label_36f540:
    // 0x36f540: 0x10000036  b           . + 4 + (0x36 << 2)
label_36f544:
    if (ctx->pc == 0x36F544u) {
        ctx->pc = 0x36F548u;
        goto label_36f548;
    }
    ctx->pc = 0x36F540u;
    {
        const bool branch_taken_0x36f540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f540) {
            ctx->pc = 0x36F61Cu;
            goto label_36f61c;
        }
    }
    ctx->pc = 0x36F548u;
label_36f548:
    // 0x36f548: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36f548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36f54c:
    // 0x36f54c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x36f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36f550:
    // 0x36f550: 0x8c66e3c0  lw          $a2, -0x1C40($v1)
    ctx->pc = 0x36f550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_36f554:
    // 0x36f554: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x36f554u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_36f558:
    // 0x36f558: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x36f558u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_36f55c:
    // 0x36f55c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36f560:
    // 0x36f560: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x36f560u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_36f564:
    // 0x36f564: 0x8c65e3d8  lw          $a1, -0x1C28($v1)
    ctx->pc = 0x36f564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_36f568:
    // 0x36f568: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36f568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36f56c:
    // 0x36f56c: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x36f56cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_36f570:
    // 0x36f570: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x36f570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_36f574:
    // 0x36f574: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x36f574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_36f578:
    // 0x36f578: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36f578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36f57c:
    // 0x36f57c: 0x86a021  addu        $s4, $a0, $a2
    ctx->pc = 0x36f57cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_36f580:
    // 0x36f580: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x36f580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_36f584:
    // 0x36f584: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x36f584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_36f588:
    // 0x36f588: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x36f588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_36f58c:
    // 0x36f58c: 0xacd40000  sw          $s4, 0x0($a2)
    ctx->pc = 0x36f58cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 20));
label_36f590:
    // 0x36f590: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36f590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36f594:
    // 0x36f594: 0x8c89e378  lw          $t1, -0x1C88($a0)
    ctx->pc = 0x36f594u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_36f598:
    // 0x36f598: 0x8ca6e3d8  lw          $a2, -0x1C28($a1)
    ctx->pc = 0x36f598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
label_36f59c:
    // 0x36f59c: 0x8c64e3b8  lw          $a0, -0x1C48($v1)
    ctx->pc = 0x36f59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
label_36f5a0:
    // 0x36f5a0: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x36f5a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_36f5a4:
    // 0x36f5a4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x36f5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_36f5a8:
    // 0x36f5a8: 0x12a9821  addu        $s3, $t1, $t2
    ctx->pc = 0x36f5a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_36f5ac:
    // 0x36f5ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36f5b0:
    // 0x36f5b0: 0x8b4821  addu        $t1, $a0, $t3
    ctx->pc = 0x36f5b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_36f5b4:
    // 0x36f5b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36f5b8:
    // 0x36f5b8: 0xad330000  sw          $s3, 0x0($t1)
    ctx->pc = 0x36f5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 19));
label_36f5bc:
    // 0x36f5bc: 0x8c490028  lw          $t1, 0x28($v0)
    ctx->pc = 0x36f5bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_36f5c0:
    // 0x36f5c0: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x36f5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_36f5c4:
    // 0x36f5c4: 0x8ca2e3c0  lw          $v0, -0x1C40($a1)
    ctx->pc = 0x36f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_36f5c8:
    // 0x36f5c8: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x36f5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_36f5cc:
    // 0x36f5cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_36f5d0:
    // 0x36f5d0: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x36f5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_36f5d4:
    // 0x36f5d4: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x36f5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
label_36f5d8:
    // 0x36f5d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x36f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36f5dc:
    // 0x36f5dc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x36f5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_36f5e0:
    // 0x36f5e0: 0xc04e4a4  jal         func_139290
label_36f5e4:
    if (ctx->pc == 0x36F5E4u) {
        ctx->pc = 0x36F5E4u;
            // 0x36f5e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F5E8u;
        goto label_36f5e8;
    }
    ctx->pc = 0x36F5E0u;
    SET_GPR_U32(ctx, 31, 0x36F5E8u);
    ctx->pc = 0x36F5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F5E0u;
            // 0x36f5e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F5E8u; }
        if (ctx->pc != 0x36F5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F5E8u; }
        if (ctx->pc != 0x36F5E8u) { return; }
    }
    ctx->pc = 0x36F5E8u;
label_36f5e8:
    // 0x36f5e8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x36f5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_36f5ec:
    // 0x36f5ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36f5ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36f5f0:
    // 0x36f5f0: 0xc04cd60  jal         func_133580
label_36f5f4:
    if (ctx->pc == 0x36F5F4u) {
        ctx->pc = 0x36F5F4u;
            // 0x36f5f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F5F8u;
        goto label_36f5f8;
    }
    ctx->pc = 0x36F5F0u;
    SET_GPR_U32(ctx, 31, 0x36F5F8u);
    ctx->pc = 0x36F5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F5F0u;
            // 0x36f5f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F5F8u; }
        if (ctx->pc != 0x36F5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F5F8u; }
        if (ctx->pc != 0x36F5F8u) { return; }
    }
    ctx->pc = 0x36F5F8u;
label_36f5f8:
    // 0x36f5f8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x36f5f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_36f5fc:
    // 0x36f5fc: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x36f5fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_36f600:
    // 0x36f600: 0x320f809  jalr        $t9
label_36f604:
    if (ctx->pc == 0x36F604u) {
        ctx->pc = 0x36F604u;
            // 0x36f604: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F608u;
        goto label_36f608;
    }
    ctx->pc = 0x36F600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36F608u);
        ctx->pc = 0x36F604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F600u;
            // 0x36f604: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36F608u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36F608u; }
            if (ctx->pc != 0x36F608u) { return; }
        }
        }
    }
    ctx->pc = 0x36F608u;
label_36f608:
    // 0x36f608: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x36f608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36f60c:
    // 0x36f60c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36f60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36f610:
    // 0x36f610: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x36f610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_36f614:
    // 0x36f614: 0xc054fd4  jal         func_153F50
label_36f618:
    if (ctx->pc == 0x36F618u) {
        ctx->pc = 0x36F618u;
            // 0x36f618: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F61Cu;
        goto label_36f61c;
    }
    ctx->pc = 0x36F614u;
    SET_GPR_U32(ctx, 31, 0x36F61Cu);
    ctx->pc = 0x36F618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F614u;
            // 0x36f618: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F61Cu; }
        if (ctx->pc != 0x36F61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F61Cu; }
        if (ctx->pc != 0x36F61Cu) { return; }
    }
    ctx->pc = 0x36F61Cu;
label_36f61c:
    // 0x36f61c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x36f61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_36f620:
    // 0x36f620: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x36f620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_36f624:
    // 0x36f624: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x36f624u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_36f628:
    // 0x36f628: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x36f628u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_36f62c:
    // 0x36f62c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x36f62cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_36f630:
    // 0x36f630: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x36f630u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_36f634:
    // 0x36f634: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x36f634u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_36f638:
    // 0x36f638: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x36f638u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_36f63c:
    // 0x36f63c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36f63cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36f640:
    // 0x36f640: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36f640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36f644:
    // 0x36f644: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36f644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36f648:
    // 0x36f648: 0x3e00008  jr          $ra
label_36f64c:
    if (ctx->pc == 0x36F64Cu) {
        ctx->pc = 0x36F64Cu;
            // 0x36f64c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x36F650u;
        goto label_36f650;
    }
    ctx->pc = 0x36F648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F648u;
            // 0x36f64c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36F650u;
label_36f650:
    // 0x36f650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36f650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36f654:
    // 0x36f654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36f654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36f658:
    // 0x36f658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36f658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36f65c:
    // 0x36f65c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36f65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36f660:
    // 0x36f660: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x36f660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_36f664:
    // 0x36f664: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
label_36f668:
    if (ctx->pc == 0x36F668u) {
        ctx->pc = 0x36F668u;
            // 0x36f668: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F66Cu;
        goto label_36f66c;
    }
    ctx->pc = 0x36F664u;
    {
        const bool branch_taken_0x36f664 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x36F668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F664u;
            // 0x36f668: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f664) {
            ctx->pc = 0x36F690u;
            goto label_36f690;
        }
    }
    ctx->pc = 0x36F66Cu;
label_36f66c:
    // 0x36f66c: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_36f670:
    if (ctx->pc == 0x36F670u) {
        ctx->pc = 0x36F670u;
            // 0x36f670: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x36F674u;
        goto label_36f674;
    }
    ctx->pc = 0x36F66Cu;
    {
        const bool branch_taken_0x36f66c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f66c) {
            ctx->pc = 0x36F670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36F66Cu;
            // 0x36f670: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36F67Cu;
            goto label_36f67c;
        }
    }
    ctx->pc = 0x36F674u;
label_36f674:
    // 0x36f674: 0x1000000f  b           . + 4 + (0xF << 2)
label_36f678:
    if (ctx->pc == 0x36F678u) {
        ctx->pc = 0x36F678u;
            // 0x36f678: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x36F67Cu;
        goto label_36f67c;
    }
    ctx->pc = 0x36F674u;
    {
        const bool branch_taken_0x36f674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F674u;
            // 0x36f678: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f674) {
            ctx->pc = 0x36F6B4u;
            goto label_36f6b4;
        }
    }
    ctx->pc = 0x36F67Cu;
label_36f67c:
    // 0x36f67c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x36f67cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_36f680:
    // 0x36f680: 0x320f809  jalr        $t9
label_36f684:
    if (ctx->pc == 0x36F684u) {
        ctx->pc = 0x36F688u;
        goto label_36f688;
    }
    ctx->pc = 0x36F680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36F688u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x36F688u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36F688u; }
            if (ctx->pc != 0x36F688u) { return; }
        }
        }
    }
    ctx->pc = 0x36F688u;
label_36f688:
    // 0x36f688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36f688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36f68c:
    // 0x36f68c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x36f68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_36f690:
    // 0x36f690: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x36f690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_36f694:
    // 0x36f694: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_36f698:
    if (ctx->pc == 0x36F698u) {
        ctx->pc = 0x36F69Cu;
        goto label_36f69c;
    }
    ctx->pc = 0x36F694u;
    {
        const bool branch_taken_0x36f694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f694) {
            ctx->pc = 0x36F6B0u;
            goto label_36f6b0;
        }
    }
    ctx->pc = 0x36F69Cu;
label_36f69c:
    // 0x36f69c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36f69cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36f6a0:
    // 0x36f6a0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x36f6a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_36f6a4:
    // 0x36f6a4: 0x320f809  jalr        $t9
label_36f6a8:
    if (ctx->pc == 0x36F6A8u) {
        ctx->pc = 0x36F6A8u;
            // 0x36f6a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36F6ACu;
        goto label_36f6ac;
    }
    ctx->pc = 0x36F6A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36F6ACu);
        ctx->pc = 0x36F6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F6A4u;
            // 0x36f6a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36F6ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36F6ACu; }
            if (ctx->pc != 0x36F6ACu) { return; }
        }
        }
    }
    ctx->pc = 0x36F6ACu;
label_36f6ac:
    // 0x36f6ac: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x36f6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_36f6b0:
    // 0x36f6b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36f6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36f6b4:
    // 0x36f6b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36f6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36f6b8:
    // 0x36f6b8: 0x3e00008  jr          $ra
label_36f6bc:
    if (ctx->pc == 0x36F6BCu) {
        ctx->pc = 0x36F6BCu;
            // 0x36f6bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x36F6C0u;
        goto label_36f6c0;
    }
    ctx->pc = 0x36F6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F6B8u;
            // 0x36f6bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36F6C0u;
label_36f6c0:
    // 0x36f6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36f6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36f6c4:
    // 0x36f6c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36f6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36f6c8:
    // 0x36f6c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36f6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36f6cc:
    // 0x36f6cc: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x36f6ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_36f6d0:
    // 0x36f6d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_36f6d4:
    if (ctx->pc == 0x36F6D4u) {
        ctx->pc = 0x36F6D4u;
            // 0x36f6d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F6D8u;
        goto label_36f6d8;
    }
    ctx->pc = 0x36F6D0u;
    {
        const bool branch_taken_0x36f6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F6D0u;
            // 0x36f6d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f6d0) {
            ctx->pc = 0x36F6E0u;
            goto label_36f6e0;
        }
    }
    ctx->pc = 0x36F6D8u;
label_36f6d8:
    // 0x36f6d8: 0xc0e35e0  jal         func_38D780
label_36f6dc:
    if (ctx->pc == 0x36F6DCu) {
        ctx->pc = 0x36F6E0u;
        goto label_36f6e0;
    }
    ctx->pc = 0x36F6D8u;
    SET_GPR_U32(ctx, 31, 0x36F6E0u);
    ctx->pc = 0x38D780u;
    if (runtime->hasFunction(0x38D780u)) {
        auto targetFn = runtime->lookupFunction(0x38D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F6E0u; }
        if (ctx->pc != 0x36F6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D780_0x38d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F6E0u; }
        if (ctx->pc != 0x36F6E0u) { return; }
    }
    ctx->pc = 0x36F6E0u;
label_36f6e0:
    // 0x36f6e0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_36f6e4:
    // 0x36f6e4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x36f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_36f6e8:
    // 0x36f6e8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x36f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_36f6ec:
    // 0x36f6ec: 0x8c650968  lw          $a1, 0x968($v1)
    ctx->pc = 0x36f6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_36f6f0:
    // 0x36f6f0: 0x50a40007  beql        $a1, $a0, . + 4 + (0x7 << 2)
label_36f6f4:
    if (ctx->pc == 0x36F6F4u) {
        ctx->pc = 0x36F6F4u;
            // 0x36f6f4: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->pc = 0x36F6F8u;
        goto label_36f6f8;
    }
    ctx->pc = 0x36F6F0u;
    {
        const bool branch_taken_0x36f6f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x36f6f0) {
            ctx->pc = 0x36F6F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36F6F0u;
            // 0x36f6f4: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36F710u;
            goto label_36f710;
        }
    }
    ctx->pc = 0x36F6F8u;
label_36f6f8:
    // 0x36f6f8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x36f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_36f6fc:
    // 0x36f6fc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_36f700:
    if (ctx->pc == 0x36F700u) {
        ctx->pc = 0x36F704u;
        goto label_36f704;
    }
    ctx->pc = 0x36F6FCu;
    {
        const bool branch_taken_0x36f6fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x36f6fc) {
            ctx->pc = 0x36F70Cu;
            goto label_36f70c;
        }
    }
    ctx->pc = 0x36F704u;
label_36f704:
    // 0x36f704: 0x10000006  b           . + 4 + (0x6 << 2)
label_36f708:
    if (ctx->pc == 0x36F708u) {
        ctx->pc = 0x36F708u;
            // 0x36f708: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x36F70Cu;
        goto label_36f70c;
    }
    ctx->pc = 0x36F704u;
    {
        const bool branch_taken_0x36f704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F704u;
            // 0x36f708: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f704) {
            ctx->pc = 0x36F720u;
            goto label_36f720;
        }
    }
    ctx->pc = 0x36F70Cu;
label_36f70c:
    // 0x36f70c: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x36f70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_36f710:
    // 0x36f710: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x36f710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_36f714:
    // 0x36f714: 0xc122d2c  jal         func_48B4B0
label_36f718:
    if (ctx->pc == 0x36F718u) {
        ctx->pc = 0x36F718u;
            // 0x36f718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F71Cu;
        goto label_36f71c;
    }
    ctx->pc = 0x36F714u;
    SET_GPR_U32(ctx, 31, 0x36F71Cu);
    ctx->pc = 0x36F718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F714u;
            // 0x36f718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F71Cu; }
        if (ctx->pc != 0x36F71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F71Cu; }
        if (ctx->pc != 0x36F71Cu) { return; }
    }
    ctx->pc = 0x36F71Cu;
label_36f71c:
    // 0x36f71c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36f71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36f720:
    // 0x36f720: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36f720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36f724:
    // 0x36f724: 0x3e00008  jr          $ra
label_36f728:
    if (ctx->pc == 0x36F728u) {
        ctx->pc = 0x36F728u;
            // 0x36f728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x36F72Cu;
        goto label_36f72c;
    }
    ctx->pc = 0x36F724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F724u;
            // 0x36f728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36F72Cu;
label_36f72c:
    // 0x36f72c: 0x0  nop
    ctx->pc = 0x36f72cu;
    // NOP
label_36f730:
    // 0x36f730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36f730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36f734:
    // 0x36f734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36f734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36f738:
    // 0x36f738: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f73c:
    // 0x36f73c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36f73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36f740:
    // 0x36f740: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x36f740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36f744:
    // 0x36f744: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36f744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36f748:
    // 0x36f748: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_36f74c:
    if (ctx->pc == 0x36F74Cu) {
        ctx->pc = 0x36F74Cu;
            // 0x36f74c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F750u;
        goto label_36f750;
    }
    ctx->pc = 0x36F748u;
    {
        const bool branch_taken_0x36f748 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36F74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F748u;
            // 0x36f74c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f748) {
            ctx->pc = 0x36F78Cu;
            goto label_36f78c;
        }
    }
    ctx->pc = 0x36F750u;
label_36f750:
    // 0x36f750: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36f750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36f754:
    // 0x36f754: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x36f754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_36f758:
    // 0x36f758: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x36f758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_36f75c:
    // 0x36f75c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36f75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36f760:
    // 0x36f760: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x36f760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_36f764:
    // 0x36f764: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x36f764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_36f768:
    // 0x36f768: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x36f768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_36f76c:
    // 0x36f76c: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x36f76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
label_36f770:
    // 0x36f770: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x36f770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36f774:
    // 0x36f774: 0xc0e32a4  jal         func_38CA90
label_36f778:
    if (ctx->pc == 0x36F778u) {
        ctx->pc = 0x36F778u;
            // 0x36f778: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->pc = 0x36F77Cu;
        goto label_36f77c;
    }
    ctx->pc = 0x36F774u;
    SET_GPR_U32(ctx, 31, 0x36F77Cu);
    ctx->pc = 0x36F778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F774u;
            // 0x36f778: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F77Cu; }
        if (ctx->pc != 0x36F77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F77Cu; }
        if (ctx->pc != 0x36F77Cu) { return; }
    }
    ctx->pc = 0x36F77Cu;
label_36f77c:
    // 0x36f77c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x36f77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36f780:
    // 0x36f780: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x36f780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_36f784:
    // 0x36f784: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x36f784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
label_36f788:
    // 0x36f788: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x36f788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
label_36f78c:
    // 0x36f78c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36f78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36f790:
    // 0x36f790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36f790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36f794:
    // 0x36f794: 0x3e00008  jr          $ra
label_36f798:
    if (ctx->pc == 0x36F798u) {
        ctx->pc = 0x36F798u;
            // 0x36f798: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x36F79Cu;
        goto label_36f79c;
    }
    ctx->pc = 0x36F794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F794u;
            // 0x36f798: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36F79Cu;
label_36f79c:
    // 0x36f79c: 0x0  nop
    ctx->pc = 0x36f79cu;
    // NOP
label_36f7a0:
    // 0x36f7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36f7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36f7a4:
    // 0x36f7a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36f7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36f7a8:
    // 0x36f7a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36f7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36f7ac:
    // 0x36f7ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36f7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36f7b0:
    // 0x36f7b0: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x36f7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_36f7b4:
    // 0x36f7b4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_36f7b8:
    if (ctx->pc == 0x36F7B8u) {
        ctx->pc = 0x36F7B8u;
            // 0x36f7b8: 0xc6010034  lwc1        $f1, 0x34($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x36F7BCu;
        goto label_36f7bc;
    }
    ctx->pc = 0x36F7B4u;
    {
        const bool branch_taken_0x36f7b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f7b4) {
            ctx->pc = 0x36F7B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36F7B4u;
            // 0x36f7b8: 0xc6010034  lwc1        $f1, 0x34($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x36F7D4u;
            goto label_36f7d4;
        }
    }
    ctx->pc = 0x36F7BCu;
label_36f7bc:
    // 0x36f7bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36f7bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36f7c0:
    // 0x36f7c0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x36f7c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_36f7c4:
    // 0x36f7c4: 0x320f809  jalr        $t9
label_36f7c8:
    if (ctx->pc == 0x36F7C8u) {
        ctx->pc = 0x36F7C8u;
            // 0x36f7c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36F7CCu;
        goto label_36f7cc;
    }
    ctx->pc = 0x36F7C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36F7CCu);
        ctx->pc = 0x36F7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F7C4u;
            // 0x36f7c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36F7CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36F7CCu; }
            if (ctx->pc != 0x36F7CCu) { return; }
        }
        }
    }
    ctx->pc = 0x36F7CCu;
label_36f7cc:
    // 0x36f7cc: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x36f7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_36f7d0:
    // 0x36f7d0: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x36f7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36f7d4:
    // 0x36f7d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f7d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f7d8:
    // 0x36f7d8: 0x0  nop
    ctx->pc = 0x36f7d8u;
    // NOP
label_36f7dc:
    // 0x36f7dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36f7dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36f7e0:
    // 0x36f7e0: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_36f7e4:
    if (ctx->pc == 0x36F7E4u) {
        ctx->pc = 0x36F7E4u;
            // 0x36f7e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x36F7E8u;
        goto label_36f7e8;
    }
    ctx->pc = 0x36F7E0u;
    {
        const bool branch_taken_0x36f7e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36f7e0) {
            ctx->pc = 0x36F7E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36F7E0u;
            // 0x36f7e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36F814u;
            goto label_36f814;
        }
    }
    ctx->pc = 0x36F7E8u;
label_36f7e8:
    // 0x36f7e8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36f7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_36f7ec:
    // 0x36f7ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x36f7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36f7f0:
    // 0x36f7f0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x36f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_36f7f4:
    // 0x36f7f4: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x36f7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_36f7f8:
    // 0x36f7f8: 0x50640003  beql        $v1, $a0, . + 4 + (0x3 << 2)
label_36f7fc:
    if (ctx->pc == 0x36F7FCu) {
        ctx->pc = 0x36F7FCu;
            // 0x36f7fc: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->pc = 0x36F800u;
        goto label_36f800;
    }
    ctx->pc = 0x36F7F8u;
    {
        const bool branch_taken_0x36f7f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x36f7f8) {
            ctx->pc = 0x36F7FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36F7F8u;
            // 0x36f7fc: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36F808u;
            goto label_36f808;
        }
    }
    ctx->pc = 0x36F800u;
label_36f800:
    // 0x36f800: 0x10000003  b           . + 4 + (0x3 << 2)
label_36f804:
    if (ctx->pc == 0x36F804u) {
        ctx->pc = 0x36F808u;
        goto label_36f808;
    }
    ctx->pc = 0x36F800u;
    {
        const bool branch_taken_0x36f800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f800) {
            ctx->pc = 0x36F810u;
            goto label_36f810;
        }
    }
    ctx->pc = 0x36F808u;
label_36f808:
    // 0x36f808: 0xc122c5c  jal         func_48B170
label_36f80c:
    if (ctx->pc == 0x36F80Cu) {
        ctx->pc = 0x36F80Cu;
            // 0x36f80c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36F810u;
        goto label_36f810;
    }
    ctx->pc = 0x36F808u;
    SET_GPR_U32(ctx, 31, 0x36F810u);
    ctx->pc = 0x36F80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F808u;
            // 0x36f80c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F810u; }
        if (ctx->pc != 0x36F810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F810u; }
        if (ctx->pc != 0x36F810u) { return; }
    }
    ctx->pc = 0x36F810u;
label_36f810:
    // 0x36f810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36f810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36f814:
    // 0x36f814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36f814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36f818:
    // 0x36f818: 0x3e00008  jr          $ra
label_36f81c:
    if (ctx->pc == 0x36F81Cu) {
        ctx->pc = 0x36F81Cu;
            // 0x36f81c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x36F820u;
        goto label_36f820;
    }
    ctx->pc = 0x36F818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F818u;
            // 0x36f81c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36F820u;
label_36f820:
    // 0x36f820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36f820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36f824:
    // 0x36f824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36f824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36f828:
    // 0x36f828: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f82c:
    // 0x36f82c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36f82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36f830:
    // 0x36f830: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x36f830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36f834:
    // 0x36f834: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36f834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36f838:
    // 0x36f838: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_36f83c:
    if (ctx->pc == 0x36F83Cu) {
        ctx->pc = 0x36F83Cu;
            // 0x36f83c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F840u;
        goto label_36f840;
    }
    ctx->pc = 0x36F838u;
    {
        const bool branch_taken_0x36f838 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36F83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F838u;
            // 0x36f83c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f838) {
            ctx->pc = 0x36F8C0u;
            goto label_36f8c0;
        }
    }
    ctx->pc = 0x36F840u;
label_36f840:
    // 0x36f840: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x36f840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_36f844:
    // 0x36f844: 0x5460001f  bnel        $v1, $zero, . + 4 + (0x1F << 2)
label_36f848:
    if (ctx->pc == 0x36F848u) {
        ctx->pc = 0x36F848u;
            // 0x36f848: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x36F84Cu;
        goto label_36f84c;
    }
    ctx->pc = 0x36F844u;
    {
        const bool branch_taken_0x36f844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36f844) {
            ctx->pc = 0x36F848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36F844u;
            // 0x36f848: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36F8C4u;
            goto label_36f8c4;
        }
    }
    ctx->pc = 0x36F84Cu;
label_36f84c:
    // 0x36f84c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36f84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_36f850:
    // 0x36f850: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x36f850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_36f854:
    // 0x36f854: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x36f854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_36f858:
    // 0x36f858: 0x8c650968  lw          $a1, 0x968($v1)
    ctx->pc = 0x36f858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_36f85c:
    // 0x36f85c: 0x50a40007  beql        $a1, $a0, . + 4 + (0x7 << 2)
label_36f860:
    if (ctx->pc == 0x36F860u) {
        ctx->pc = 0x36F860u;
            // 0x36f860: 0x920300dc  lbu         $v1, 0xDC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->pc = 0x36F864u;
        goto label_36f864;
    }
    ctx->pc = 0x36F85Cu;
    {
        const bool branch_taken_0x36f85c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x36f85c) {
            ctx->pc = 0x36F860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36F85Cu;
            // 0x36f860: 0x920300dc  lbu         $v1, 0xDC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36F87Cu;
            goto label_36f87c;
        }
    }
    ctx->pc = 0x36F864u;
label_36f864:
    // 0x36f864: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36f864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36f868:
    // 0x36f868: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_36f86c:
    if (ctx->pc == 0x36F86Cu) {
        ctx->pc = 0x36F870u;
        goto label_36f870;
    }
    ctx->pc = 0x36F868u;
    {
        const bool branch_taken_0x36f868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x36f868) {
            ctx->pc = 0x36F878u;
            goto label_36f878;
        }
    }
    ctx->pc = 0x36F870u;
label_36f870:
    // 0x36f870: 0x10000013  b           . + 4 + (0x13 << 2)
label_36f874:
    if (ctx->pc == 0x36F874u) {
        ctx->pc = 0x36F878u;
        goto label_36f878;
    }
    ctx->pc = 0x36F870u;
    {
        const bool branch_taken_0x36f870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f870) {
            ctx->pc = 0x36F8C0u;
            goto label_36f8c0;
        }
    }
    ctx->pc = 0x36F878u;
label_36f878:
    // 0x36f878: 0x920300dc  lbu         $v1, 0xDC($s0)
    ctx->pc = 0x36f878u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
label_36f87c:
    // 0x36f87c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_36f880:
    if (ctx->pc == 0x36F880u) {
        ctx->pc = 0x36F884u;
        goto label_36f884;
    }
    ctx->pc = 0x36F87Cu;
    {
        const bool branch_taken_0x36f87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f87c) {
            ctx->pc = 0x36F8C0u;
            goto label_36f8c0;
        }
    }
    ctx->pc = 0x36F884u;
label_36f884:
    // 0x36f884: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36f884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36f888:
    // 0x36f888: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x36f888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36f88c:
    // 0x36f88c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x36f88cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_36f890:
    // 0x36f890: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x36f890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_36f894:
    // 0x36f894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36f898:
    // 0x36f898: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x36f898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_36f89c:
    // 0x36f89c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36f89cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36f8a0:
    // 0x36f8a0: 0xc0bb0e8  jal         func_2EC3A0
label_36f8a4:
    if (ctx->pc == 0x36F8A4u) {
        ctx->pc = 0x36F8A4u;
            // 0x36f8a4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x36F8A8u;
        goto label_36f8a8;
    }
    ctx->pc = 0x36F8A0u;
    SET_GPR_U32(ctx, 31, 0x36F8A8u);
    ctx->pc = 0x36F8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F8A0u;
            // 0x36f8a4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F8A8u; }
        if (ctx->pc != 0x36F8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F8A8u; }
        if (ctx->pc != 0x36F8A8u) { return; }
    }
    ctx->pc = 0x36F8A8u;
label_36f8a8:
    // 0x36f8a8: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x36f8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
label_36f8ac:
    // 0x36f8ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36f8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36f8b0:
    // 0x36f8b0: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x36f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_36f8b4:
    // 0x36f8b4: 0xc122d2c  jal         func_48B4B0
label_36f8b8:
    if (ctx->pc == 0x36F8B8u) {
        ctx->pc = 0x36F8B8u;
            // 0x36f8b8: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x36F8BCu;
        goto label_36f8bc;
    }
    ctx->pc = 0x36F8B4u;
    SET_GPR_U32(ctx, 31, 0x36F8BCu);
    ctx->pc = 0x36F8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F8B4u;
            // 0x36f8b8: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F8BCu; }
        if (ctx->pc != 0x36F8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F8BCu; }
        if (ctx->pc != 0x36F8BCu) { return; }
    }
    ctx->pc = 0x36F8BCu;
label_36f8bc:
    // 0x36f8bc: 0xa20000dc  sb          $zero, 0xDC($s0)
    ctx->pc = 0x36f8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 0));
label_36f8c0:
    // 0x36f8c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36f8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36f8c4:
    // 0x36f8c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36f8c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36f8c8:
    // 0x36f8c8: 0x3e00008  jr          $ra
label_36f8cc:
    if (ctx->pc == 0x36F8CCu) {
        ctx->pc = 0x36F8CCu;
            // 0x36f8cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x36F8D0u;
        goto label_36f8d0;
    }
    ctx->pc = 0x36F8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F8C8u;
            // 0x36f8cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36F8D0u;
label_36f8d0:
    // 0x36f8d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36f8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36f8d4:
    // 0x36f8d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36f8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36f8d8:
    // 0x36f8d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f8d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36f8dc:
    // 0x36f8dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36f8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36f8e0:
    // 0x36f8e0: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x36f8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36f8e4:
    // 0x36f8e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36f8e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36f8e8:
    // 0x36f8e8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_36f8ec:
    if (ctx->pc == 0x36F8ECu) {
        ctx->pc = 0x36F8ECu;
            // 0x36f8ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F8F0u;
        goto label_36f8f0;
    }
    ctx->pc = 0x36F8E8u;
    {
        const bool branch_taken_0x36f8e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x36F8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F8E8u;
            // 0x36f8ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f8e8) {
            ctx->pc = 0x36F918u;
            goto label_36f918;
        }
    }
    ctx->pc = 0x36F8F0u;
label_36f8f0:
    // 0x36f8f0: 0x9202004d  lbu         $v0, 0x4D($s0)
    ctx->pc = 0x36f8f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_36f8f4:
    // 0x36f8f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_36f8f8:
    if (ctx->pc == 0x36F8F8u) {
        ctx->pc = 0x36F8F8u;
            // 0x36f8f8: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->pc = 0x36F8FCu;
        goto label_36f8fc;
    }
    ctx->pc = 0x36F8F4u;
    {
        const bool branch_taken_0x36f8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f8f4) {
            ctx->pc = 0x36F8F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36F8F4u;
            // 0x36f8f8: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36F90Cu;
            goto label_36f90c;
        }
    }
    ctx->pc = 0x36F8FCu;
label_36f8fc:
    // 0x36f8fc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x36f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_36f900:
    // 0x36f900: 0xc0baaa0  jal         func_2EAA80
label_36f904:
    if (ctx->pc == 0x36F904u) {
        ctx->pc = 0x36F904u;
            // 0x36f904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F908u;
        goto label_36f908;
    }
    ctx->pc = 0x36F900u;
    SET_GPR_U32(ctx, 31, 0x36F908u);
    ctx->pc = 0x36F904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F900u;
            // 0x36f904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F908u; }
        if (ctx->pc != 0x36F908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F908u; }
        if (ctx->pc != 0x36F908u) { return; }
    }
    ctx->pc = 0x36F908u;
label_36f908:
    // 0x36f908: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x36f908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_36f90c:
    // 0x36f90c: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x36f90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_36f910:
    // 0x36f910: 0xc122d2c  jal         func_48B4B0
label_36f914:
    if (ctx->pc == 0x36F914u) {
        ctx->pc = 0x36F914u;
            // 0x36f914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F918u;
        goto label_36f918;
    }
    ctx->pc = 0x36F910u;
    SET_GPR_U32(ctx, 31, 0x36F918u);
    ctx->pc = 0x36F914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F910u;
            // 0x36f914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F918u; }
        if (ctx->pc != 0x36F918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F918u; }
        if (ctx->pc != 0x36F918u) { return; }
    }
    ctx->pc = 0x36F918u;
label_36f918:
    // 0x36f918: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36f918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36f91c:
    // 0x36f91c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36f91cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36f920:
    // 0x36f920: 0x3e00008  jr          $ra
label_36f924:
    if (ctx->pc == 0x36F924u) {
        ctx->pc = 0x36F924u;
            // 0x36f924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x36F928u;
        goto label_36f928;
    }
    ctx->pc = 0x36F920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F920u;
            // 0x36f924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36F928u;
label_36f928:
    // 0x36f928: 0x0  nop
    ctx->pc = 0x36f928u;
    // NOP
label_36f92c:
    // 0x36f92c: 0x0  nop
    ctx->pc = 0x36f92cu;
    // NOP
label_36f930:
    // 0x36f930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36f930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36f934:
    // 0x36f934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36f934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36f938:
    // 0x36f938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36f938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36f93c:
    // 0x36f93c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36f93cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36f940:
    // 0x36f940: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x36f940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_36f944:
    // 0x36f944: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_36f948:
    if (ctx->pc == 0x36F948u) {
        ctx->pc = 0x36F948u;
            // 0x36f948: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x36F94Cu;
        goto label_36f94c;
    }
    ctx->pc = 0x36F944u;
    {
        const bool branch_taken_0x36f944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f944) {
            ctx->pc = 0x36F948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36F944u;
            // 0x36f948: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36F960u;
            goto label_36f960;
        }
    }
    ctx->pc = 0x36F94Cu;
label_36f94c:
    // 0x36f94c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x36f94cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_36f950:
    // 0x36f950: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x36f950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_36f954:
    // 0x36f954: 0x320f809  jalr        $t9
label_36f958:
    if (ctx->pc == 0x36F958u) {
        ctx->pc = 0x36F958u;
            // 0x36f958: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36F95Cu;
        goto label_36f95c;
    }
    ctx->pc = 0x36F954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36F95Cu);
        ctx->pc = 0x36F958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F954u;
            // 0x36f958: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36F95Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36F95Cu; }
            if (ctx->pc != 0x36F95Cu) { return; }
        }
        }
    }
    ctx->pc = 0x36F95Cu;
label_36f95c:
    // 0x36f95c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x36f95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_36f960:
    // 0x36f960: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x36f960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_36f964:
    // 0x36f964: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_36f968:
    if (ctx->pc == 0x36F968u) {
        ctx->pc = 0x36F968u;
            // 0x36f968: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->pc = 0x36F96Cu;
        goto label_36f96c;
    }
    ctx->pc = 0x36F964u;
    {
        const bool branch_taken_0x36f964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f964) {
            ctx->pc = 0x36F968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36F964u;
            // 0x36f968: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36F980u;
            goto label_36f980;
        }
    }
    ctx->pc = 0x36F96Cu;
label_36f96c:
    // 0x36f96c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36f96cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36f970:
    // 0x36f970: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x36f970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_36f974:
    // 0x36f974: 0x320f809  jalr        $t9
label_36f978:
    if (ctx->pc == 0x36F978u) {
        ctx->pc = 0x36F978u;
            // 0x36f978: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36F97Cu;
        goto label_36f97c;
    }
    ctx->pc = 0x36F974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36F97Cu);
        ctx->pc = 0x36F978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F974u;
            // 0x36f978: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36F97Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36F97Cu; }
            if (ctx->pc != 0x36F97Cu) { return; }
        }
        }
    }
    ctx->pc = 0x36F97Cu;
label_36f97c:
    // 0x36f97c: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x36f97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_36f980:
    // 0x36f980: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x36f980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_36f984:
    // 0x36f984: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_36f988:
    if (ctx->pc == 0x36F988u) {
        ctx->pc = 0x36F988u;
            // 0x36f988: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x36F98Cu;
        goto label_36f98c;
    }
    ctx->pc = 0x36F984u;
    {
        const bool branch_taken_0x36f984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f984) {
            ctx->pc = 0x36F988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36F984u;
            // 0x36f988: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36F9A0u;
            goto label_36f9a0;
        }
    }
    ctx->pc = 0x36F98Cu;
label_36f98c:
    // 0x36f98c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36f98cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36f990:
    // 0x36f990: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x36f990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_36f994:
    // 0x36f994: 0x320f809  jalr        $t9
label_36f998:
    if (ctx->pc == 0x36F998u) {
        ctx->pc = 0x36F998u;
            // 0x36f998: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36F99Cu;
        goto label_36f99c;
    }
    ctx->pc = 0x36F994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36F99Cu);
        ctx->pc = 0x36F998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F994u;
            // 0x36f998: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36F99Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36F99Cu; }
            if (ctx->pc != 0x36F99Cu) { return; }
        }
        }
    }
    ctx->pc = 0x36F99Cu;
label_36f99c:
    // 0x36f99c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x36f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_36f9a0:
    // 0x36f9a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36f9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36f9a4:
    // 0x36f9a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36f9a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36f9a8:
    // 0x36f9a8: 0x3e00008  jr          $ra
label_36f9ac:
    if (ctx->pc == 0x36F9ACu) {
        ctx->pc = 0x36F9ACu;
            // 0x36f9ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x36F9B0u;
        goto label_36f9b0;
    }
    ctx->pc = 0x36F9A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36F9A8u;
            // 0x36f9ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36F9B0u;
label_36f9b0:
    // 0x36f9b0: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x36f9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_36f9b4:
    // 0x36f9b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x36f9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_36f9b8:
    // 0x36f9b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x36f9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_36f9bc:
    // 0x36f9bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36f9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_36f9c0:
    // 0x36f9c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36f9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_36f9c4:
    // 0x36f9c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36f9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_36f9c8:
    // 0x36f9c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36f9c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36f9cc:
    // 0x36f9cc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x36f9ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_36f9d0:
    // 0x36f9d0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x36f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_36f9d4:
    // 0x36f9d4: 0xc0892d0  jal         func_224B40
label_36f9d8:
    if (ctx->pc == 0x36F9D8u) {
        ctx->pc = 0x36F9D8u;
            // 0x36f9d8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x36F9DCu;
        goto label_36f9dc;
    }
    ctx->pc = 0x36F9D4u;
    SET_GPR_U32(ctx, 31, 0x36F9DCu);
    ctx->pc = 0x36F9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F9D4u;
            // 0x36f9d8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F9DCu; }
        if (ctx->pc != 0x36F9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F9DCu; }
        if (ctx->pc != 0x36F9DCu) { return; }
    }
    ctx->pc = 0x36F9DCu;
label_36f9dc:
    // 0x36f9dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36f9e0:
    // 0x36f9e0: 0x26330030  addiu       $s3, $s1, 0x30
    ctx->pc = 0x36f9e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_36f9e4:
    // 0x36f9e4: 0x8c500de8  lw          $s0, 0xDE8($v0)
    ctx->pc = 0x36f9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3560)));
label_36f9e8:
    // 0x36f9e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36f9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36f9ec:
    // 0x36f9ec: 0xc0d46b8  jal         func_351AE0
label_36f9f0:
    if (ctx->pc == 0x36F9F0u) {
        ctx->pc = 0x36F9F0u;
            // 0x36f9f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36F9F4u;
        goto label_36f9f4;
    }
    ctx->pc = 0x36F9ECu;
    SET_GPR_U32(ctx, 31, 0x36F9F4u);
    ctx->pc = 0x36F9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36F9ECu;
            // 0x36f9f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351AE0u;
    if (runtime->hasFunction(0x351AE0u)) {
        auto targetFn = runtime->lookupFunction(0x351AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F9F4u; }
        if (ctx->pc != 0x36F9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351AE0_0x351ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36F9F4u; }
        if (ctx->pc != 0x36F9F4u) { return; }
    }
    ctx->pc = 0x36F9F4u;
label_36f9f4:
    // 0x36f9f4: 0x5440004e  bnel        $v0, $zero, . + 4 + (0x4E << 2)
label_36f9f8:
    if (ctx->pc == 0x36F9F8u) {
        ctx->pc = 0x36F9F8u;
            // 0x36f9f8: 0x8c50000c  lw          $s0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = 0x36F9FCu;
        goto label_36f9fc;
    }
    ctx->pc = 0x36F9F4u;
    {
        const bool branch_taken_0x36f9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36f9f4) {
            ctx->pc = 0x36F9F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36F9F4u;
            // 0x36f9f8: 0x8c50000c  lw          $s0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36FB30u;
            goto label_36fb30;
        }
    }
    ctx->pc = 0x36F9FCu;
label_36f9fc:
    // 0x36f9fc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x36f9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_36fa00:
    // 0x36fa00: 0xc0d46b0  jal         func_351AC0
label_36fa04:
    if (ctx->pc == 0x36FA04u) {
        ctx->pc = 0x36FA04u;
            // 0x36fa04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36FA08u;
        goto label_36fa08;
    }
    ctx->pc = 0x36FA00u;
    SET_GPR_U32(ctx, 31, 0x36FA08u);
    ctx->pc = 0x36FA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FA00u;
            // 0x36fa04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351AC0u;
    if (runtime->hasFunction(0x351AC0u)) {
        auto targetFn = runtime->lookupFunction(0x351AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FA08u; }
        if (ctx->pc != 0x36FA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351AC0_0x351ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FA08u; }
        if (ctx->pc != 0x36FA08u) { return; }
    }
    ctx->pc = 0x36FA08u;
label_36fa08:
    // 0x36fa08: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x36fa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36fa0c:
    // 0x36fa0c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x36fa0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_36fa10:
    // 0x36fa10: 0x0  nop
    ctx->pc = 0x36fa10u;
    // NOP
label_36fa14:
    // 0x36fa14: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x36fa14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36fa18:
    // 0x36fa18: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
label_36fa1c:
    if (ctx->pc == 0x36FA1Cu) {
        ctx->pc = 0x36FA1Cu;
            // 0x36fa1c: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x36FA20u;
        goto label_36fa20;
    }
    ctx->pc = 0x36FA18u;
    {
        const bool branch_taken_0x36fa18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36fa18) {
            ctx->pc = 0x36FA1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36FA18u;
            // 0x36fa1c: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x36FA90u;
            goto label_36fa90;
        }
    }
    ctx->pc = 0x36FA20u;
label_36fa20:
    // 0x36fa20: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x36fa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36fa24:
    // 0x36fa24: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x36fa24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36fa28:
    // 0x36fa28: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_36fa2c:
    if (ctx->pc == 0x36FA2Cu) {
        ctx->pc = 0x36FA2Cu;
            // 0x36fa2c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x36FA30u;
        goto label_36fa30;
    }
    ctx->pc = 0x36FA28u;
    {
        const bool branch_taken_0x36fa28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36fa28) {
            ctx->pc = 0x36FA2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36FA28u;
            // 0x36fa2c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36FA44u;
            goto label_36fa44;
        }
    }
    ctx->pc = 0x36FA30u;
label_36fa30:
    // 0x36fa30: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x36fa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36fa34:
    // 0x36fa34: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x36fa34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36fa38:
    // 0x36fa38: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_36fa3c:
    if (ctx->pc == 0x36FA3Cu) {
        ctx->pc = 0x36FA40u;
        goto label_36fa40;
    }
    ctx->pc = 0x36FA38u;
    {
        const bool branch_taken_0x36fa38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36fa38) {
            ctx->pc = 0x36FA8Cu;
            goto label_36fa8c;
        }
    }
    ctx->pc = 0x36FA40u;
label_36fa40:
    // 0x36fa40: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x36fa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_36fa44:
    // 0x36fa44: 0xc0d46a0  jal         func_351A80
label_36fa48:
    if (ctx->pc == 0x36FA48u) {
        ctx->pc = 0x36FA4Cu;
        goto label_36fa4c;
    }
    ctx->pc = 0x36FA44u;
    SET_GPR_U32(ctx, 31, 0x36FA4Cu);
    ctx->pc = 0x351A80u;
    if (runtime->hasFunction(0x351A80u)) {
        auto targetFn = runtime->lookupFunction(0x351A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FA4Cu; }
        if (ctx->pc != 0x36FA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A80_0x351a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FA4Cu; }
        if (ctx->pc != 0x36FA4Cu) { return; }
    }
    ctx->pc = 0x36FA4Cu;
label_36fa4c:
    // 0x36fa4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36fa4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36fa50:
    // 0x36fa50: 0x52400033  beql        $s2, $zero, . + 4 + (0x33 << 2)
label_36fa54:
    if (ctx->pc == 0x36FA54u) {
        ctx->pc = 0x36FA54u;
            // 0x36fa54: 0xafb2007c  sw          $s2, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 18));
        ctx->pc = 0x36FA58u;
        goto label_36fa58;
    }
    ctx->pc = 0x36FA50u;
    {
        const bool branch_taken_0x36fa50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fa50) {
            ctx->pc = 0x36FA54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36FA50u;
            // 0x36fa54: 0xafb2007c  sw          $s2, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36FB20u;
            goto label_36fb20;
        }
    }
    ctx->pc = 0x36FA58u;
label_36fa58:
    // 0x36fa58: 0xc049514  jal         func_125450
label_36fa5c:
    if (ctx->pc == 0x36FA5Cu) {
        ctx->pc = 0x36FA5Cu;
            // 0x36fa5c: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x36FA60u;
        goto label_36fa60;
    }
    ctx->pc = 0x36FA58u;
    SET_GPR_U32(ctx, 31, 0x36FA60u);
    ctx->pc = 0x36FA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FA58u;
            // 0x36fa5c: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FA60u; }
        if (ctx->pc != 0x36FA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FA60u; }
        if (ctx->pc != 0x36FA60u) { return; }
    }
    ctx->pc = 0x36FA60u;
label_36fa60:
    // 0x36fa60: 0xc0474b6  jal         func_11D2D8
label_36fa64:
    if (ctx->pc == 0x36FA64u) {
        ctx->pc = 0x36FA64u;
            // 0x36fa64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36FA68u;
        goto label_36fa68;
    }
    ctx->pc = 0x36FA60u;
    SET_GPR_U32(ctx, 31, 0x36FA68u);
    ctx->pc = 0x36FA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FA60u;
            // 0x36fa64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FA68u; }
        if (ctx->pc != 0x36FA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FA68u; }
        if (ctx->pc != 0x36FA68u) { return; }
    }
    ctx->pc = 0x36FA68u;
label_36fa68:
    // 0x36fa68: 0xc0497dc  jal         func_125F70
label_36fa6c:
    if (ctx->pc == 0x36FA6Cu) {
        ctx->pc = 0x36FA6Cu;
            // 0x36fa6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36FA70u;
        goto label_36fa70;
    }
    ctx->pc = 0x36FA68u;
    SET_GPR_U32(ctx, 31, 0x36FA70u);
    ctx->pc = 0x36FA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FA68u;
            // 0x36fa6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FA70u; }
        if (ctx->pc != 0x36FA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FA70u; }
        if (ctx->pc != 0x36FA70u) { return; }
    }
    ctx->pc = 0x36FA70u;
label_36fa70:
    // 0x36fa70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36fa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36fa74:
    // 0x36fa74: 0xc0827ac  jal         func_209EB0
label_36fa78:
    if (ctx->pc == 0x36FA78u) {
        ctx->pc = 0x36FA78u;
            // 0x36fa78: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x36FA7Cu;
        goto label_36fa7c;
    }
    ctx->pc = 0x36FA74u;
    SET_GPR_U32(ctx, 31, 0x36FA7Cu);
    ctx->pc = 0x36FA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FA74u;
            // 0x36fa78: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FA7Cu; }
        if (ctx->pc != 0x36FA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FA7Cu; }
        if (ctx->pc != 0x36FA7Cu) { return; }
    }
    ctx->pc = 0x36FA7Cu;
label_36fa7c:
    // 0x36fa7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36fa7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36fa80:
    // 0x36fa80: 0xafb2007c  sw          $s2, 0x7C($sp)
    ctx->pc = 0x36fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 18));
label_36fa84:
    // 0x36fa84: 0x10000026  b           . + 4 + (0x26 << 2)
label_36fa88:
    if (ctx->pc == 0x36FA88u) {
        ctx->pc = 0x36FA8Cu;
        goto label_36fa8c;
    }
    ctx->pc = 0x36FA84u;
    {
        const bool branch_taken_0x36fa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fa84) {
            ctx->pc = 0x36FB20u;
            goto label_36fb20;
        }
    }
    ctx->pc = 0x36FA8Cu;
label_36fa8c:
    // 0x36fa8c: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x36fa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_36fa90:
    // 0x36fa90: 0xc049514  jal         func_125450
label_36fa94:
    if (ctx->pc == 0x36FA94u) {
        ctx->pc = 0x36FA98u;
        goto label_36fa98;
    }
    ctx->pc = 0x36FA90u;
    SET_GPR_U32(ctx, 31, 0x36FA98u);
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FA98u; }
        if (ctx->pc != 0x36FA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FA98u; }
        if (ctx->pc != 0x36FA98u) { return; }
    }
    ctx->pc = 0x36FA98u;
label_36fa98:
    // 0x36fa98: 0xc0474b6  jal         func_11D2D8
label_36fa9c:
    if (ctx->pc == 0x36FA9Cu) {
        ctx->pc = 0x36FA9Cu;
            // 0x36fa9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36FAA0u;
        goto label_36faa0;
    }
    ctx->pc = 0x36FA98u;
    SET_GPR_U32(ctx, 31, 0x36FAA0u);
    ctx->pc = 0x36FA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FA98u;
            // 0x36fa9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FAA0u; }
        if (ctx->pc != 0x36FAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FAA0u; }
        if (ctx->pc != 0x36FAA0u) { return; }
    }
    ctx->pc = 0x36FAA0u;
label_36faa0:
    // 0x36faa0: 0xc0497dc  jal         func_125F70
label_36faa4:
    if (ctx->pc == 0x36FAA4u) {
        ctx->pc = 0x36FAA4u;
            // 0x36faa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36FAA8u;
        goto label_36faa8;
    }
    ctx->pc = 0x36FAA0u;
    SET_GPR_U32(ctx, 31, 0x36FAA8u);
    ctx->pc = 0x36FAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FAA0u;
            // 0x36faa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FAA8u; }
        if (ctx->pc != 0x36FAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FAA8u; }
        if (ctx->pc != 0x36FAA8u) { return; }
    }
    ctx->pc = 0x36FAA8u;
label_36faa8:
    // 0x36faa8: 0xc66c0004  lwc1        $f12, 0x4($s3)
    ctx->pc = 0x36faa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_36faac:
    // 0x36faac: 0xc049514  jal         func_125450
label_36fab0:
    if (ctx->pc == 0x36FAB0u) {
        ctx->pc = 0x36FAB0u;
            // 0x36fab0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x36FAB4u;
        goto label_36fab4;
    }
    ctx->pc = 0x36FAACu;
    SET_GPR_U32(ctx, 31, 0x36FAB4u);
    ctx->pc = 0x36FAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FAACu;
            // 0x36fab0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FAB4u; }
        if (ctx->pc != 0x36FAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FAB4u; }
        if (ctx->pc != 0x36FAB4u) { return; }
    }
    ctx->pc = 0x36FAB4u;
label_36fab4:
    // 0x36fab4: 0xc0474b6  jal         func_11D2D8
label_36fab8:
    if (ctx->pc == 0x36FAB8u) {
        ctx->pc = 0x36FAB8u;
            // 0x36fab8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36FABCu;
        goto label_36fabc;
    }
    ctx->pc = 0x36FAB4u;
    SET_GPR_U32(ctx, 31, 0x36FABCu);
    ctx->pc = 0x36FAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FAB4u;
            // 0x36fab8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FABCu; }
        if (ctx->pc != 0x36FABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FABCu; }
        if (ctx->pc != 0x36FABCu) { return; }
    }
    ctx->pc = 0x36FABCu;
label_36fabc:
    // 0x36fabc: 0xc0497dc  jal         func_125F70
label_36fac0:
    if (ctx->pc == 0x36FAC0u) {
        ctx->pc = 0x36FAC0u;
            // 0x36fac0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36FAC4u;
        goto label_36fac4;
    }
    ctx->pc = 0x36FABCu;
    SET_GPR_U32(ctx, 31, 0x36FAC4u);
    ctx->pc = 0x36FAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FABCu;
            // 0x36fac0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FAC4u; }
        if (ctx->pc != 0x36FAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FAC4u; }
        if (ctx->pc != 0x36FAC4u) { return; }
    }
    ctx->pc = 0x36FAC4u;
label_36fac4:
    // 0x36fac4: 0xc66c0008  lwc1        $f12, 0x8($s3)
    ctx->pc = 0x36fac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_36fac8:
    // 0x36fac8: 0xc049514  jal         func_125450
label_36facc:
    if (ctx->pc == 0x36FACCu) {
        ctx->pc = 0x36FACCu;
            // 0x36facc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x36FAD0u;
        goto label_36fad0;
    }
    ctx->pc = 0x36FAC8u;
    SET_GPR_U32(ctx, 31, 0x36FAD0u);
    ctx->pc = 0x36FACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FAC8u;
            // 0x36facc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FAD0u; }
        if (ctx->pc != 0x36FAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FAD0u; }
        if (ctx->pc != 0x36FAD0u) { return; }
    }
    ctx->pc = 0x36FAD0u;
label_36fad0:
    // 0x36fad0: 0xc0474b6  jal         func_11D2D8
label_36fad4:
    if (ctx->pc == 0x36FAD4u) {
        ctx->pc = 0x36FAD4u;
            // 0x36fad4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36FAD8u;
        goto label_36fad8;
    }
    ctx->pc = 0x36FAD0u;
    SET_GPR_U32(ctx, 31, 0x36FAD8u);
    ctx->pc = 0x36FAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FAD0u;
            // 0x36fad4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FAD8u; }
        if (ctx->pc != 0x36FAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FAD8u; }
        if (ctx->pc != 0x36FAD8u) { return; }
    }
    ctx->pc = 0x36FAD8u;
label_36fad8:
    // 0x36fad8: 0xc0497dc  jal         func_125F70
label_36fadc:
    if (ctx->pc == 0x36FADCu) {
        ctx->pc = 0x36FADCu;
            // 0x36fadc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36FAE0u;
        goto label_36fae0;
    }
    ctx->pc = 0x36FAD8u;
    SET_GPR_U32(ctx, 31, 0x36FAE0u);
    ctx->pc = 0x36FADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FAD8u;
            // 0x36fadc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FAE0u; }
        if (ctx->pc != 0x36FAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FAE0u; }
        if (ctx->pc != 0x36FAE0u) { return; }
    }
    ctx->pc = 0x36FAE0u;
label_36fae0:
    // 0x36fae0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x36fae0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_36fae4:
    // 0x36fae4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x36fae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_36fae8:
    // 0x36fae8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x36fae8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_36faec:
    // 0x36faec: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x36faecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_36faf0:
    // 0x36faf0: 0xc0b6df0  jal         func_2DB7C0
label_36faf4:
    if (ctx->pc == 0x36FAF4u) {
        ctx->pc = 0x36FAF4u;
            // 0x36faf4: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x36FAF8u;
        goto label_36faf8;
    }
    ctx->pc = 0x36FAF0u;
    SET_GPR_U32(ctx, 31, 0x36FAF8u);
    ctx->pc = 0x36FAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FAF0u;
            // 0x36faf4: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FAF8u; }
        if (ctx->pc != 0x36FAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FAF8u; }
        if (ctx->pc != 0x36FAF8u) { return; }
    }
    ctx->pc = 0x36FAF8u;
label_36faf8:
    // 0x36faf8: 0xc0d46a0  jal         func_351A80
label_36fafc:
    if (ctx->pc == 0x36FAFCu) {
        ctx->pc = 0x36FAFCu;
            // 0x36fafc: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x36FB00u;
        goto label_36fb00;
    }
    ctx->pc = 0x36FAF8u;
    SET_GPR_U32(ctx, 31, 0x36FB00u);
    ctx->pc = 0x36FAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FAF8u;
            // 0x36fafc: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351A80u;
    if (runtime->hasFunction(0x351A80u)) {
        auto targetFn = runtime->lookupFunction(0x351A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FB00u; }
        if (ctx->pc != 0x36FB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A80_0x351a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FB00u; }
        if (ctx->pc != 0x36FB00u) { return; }
    }
    ctx->pc = 0x36FB00u;
label_36fb00:
    // 0x36fb00: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_36fb04:
    if (ctx->pc == 0x36FB04u) {
        ctx->pc = 0x36FB04u;
            // 0x36fb04: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->pc = 0x36FB08u;
        goto label_36fb08;
    }
    ctx->pc = 0x36FB00u;
    {
        const bool branch_taken_0x36fb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fb00) {
            ctx->pc = 0x36FB04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36FB00u;
            // 0x36fb04: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36FB20u;
            goto label_36fb20;
        }
    }
    ctx->pc = 0x36FB08u;
label_36fb08:
    // 0x36fb08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36fb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36fb0c:
    // 0x36fb0c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_36fb10:
    // 0x36fb10: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x36fb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_36fb14:
    // 0x36fb14: 0xc0804bc  jal         func_2012F0
label_36fb18:
    if (ctx->pc == 0x36FB18u) {
        ctx->pc = 0x36FB18u;
            // 0x36fb18: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x36FB1Cu;
        goto label_36fb1c;
    }
    ctx->pc = 0x36FB14u;
    SET_GPR_U32(ctx, 31, 0x36FB1Cu);
    ctx->pc = 0x36FB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FB14u;
            // 0x36fb18: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FB1Cu; }
        if (ctx->pc != 0x36FB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FB1Cu; }
        if (ctx->pc != 0x36FB1Cu) { return; }
    }
    ctx->pc = 0x36FB1Cu;
label_36fb1c:
    // 0x36fb1c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x36fb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_36fb20:
    // 0x36fb20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36fb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36fb24:
    // 0x36fb24: 0xc0d4698  jal         func_351A60
label_36fb28:
    if (ctx->pc == 0x36FB28u) {
        ctx->pc = 0x36FB28u;
            // 0x36fb28: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x36FB2Cu;
        goto label_36fb2c;
    }
    ctx->pc = 0x36FB24u;
    SET_GPR_U32(ctx, 31, 0x36FB2Cu);
    ctx->pc = 0x36FB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FB24u;
            // 0x36fb28: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351A60u;
    if (runtime->hasFunction(0x351A60u)) {
        auto targetFn = runtime->lookupFunction(0x351A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FB2Cu; }
        if (ctx->pc != 0x36FB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A60_0x351a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FB2Cu; }
        if (ctx->pc != 0x36FB2Cu) { return; }
    }
    ctx->pc = 0x36FB2Cu;
label_36fb2c:
    // 0x36fb2c: 0x8fb0007c  lw          $s0, 0x7C($sp)
    ctx->pc = 0x36fb2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_36fb30:
    // 0x36fb30: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x36fb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_36fb34:
    // 0x36fb34: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x36fb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_36fb38:
    // 0x36fb38: 0xc0b6e68  jal         func_2DB9A0
label_36fb3c:
    if (ctx->pc == 0x36FB3Cu) {
        ctx->pc = 0x36FB3Cu;
            // 0x36fb3c: 0xafa000f4  sw          $zero, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
        ctx->pc = 0x36FB40u;
        goto label_36fb40;
    }
    ctx->pc = 0x36FB38u;
    SET_GPR_U32(ctx, 31, 0x36FB40u);
    ctx->pc = 0x36FB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FB38u;
            // 0x36fb3c: 0xafa000f4  sw          $zero, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FB40u; }
        if (ctx->pc != 0x36FB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FB40u; }
        if (ctx->pc != 0x36FB40u) { return; }
    }
    ctx->pc = 0x36FB40u;
label_36fb40:
    // 0x36fb40: 0xc0b6dac  jal         func_2DB6B0
label_36fb44:
    if (ctx->pc == 0x36FB44u) {
        ctx->pc = 0x36FB44u;
            // 0x36fb44: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x36FB48u;
        goto label_36fb48;
    }
    ctx->pc = 0x36FB40u;
    SET_GPR_U32(ctx, 31, 0x36FB48u);
    ctx->pc = 0x36FB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FB40u;
            // 0x36fb44: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FB48u; }
        if (ctx->pc != 0x36FB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FB48u; }
        if (ctx->pc != 0x36FB48u) { return; }
    }
    ctx->pc = 0x36FB48u;
label_36fb48:
    // 0x36fb48: 0xc0cac94  jal         func_32B250
label_36fb4c:
    if (ctx->pc == 0x36FB4Cu) {
        ctx->pc = 0x36FB4Cu;
            // 0x36fb4c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x36FB50u;
        goto label_36fb50;
    }
    ctx->pc = 0x36FB48u;
    SET_GPR_U32(ctx, 31, 0x36FB50u);
    ctx->pc = 0x36FB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FB48u;
            // 0x36fb4c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FB50u; }
        if (ctx->pc != 0x36FB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FB50u; }
        if (ctx->pc != 0x36FB50u) { return; }
    }
    ctx->pc = 0x36FB50u;
label_36fb50:
    // 0x36fb50: 0xc0cac84  jal         func_32B210
label_36fb54:
    if (ctx->pc == 0x36FB54u) {
        ctx->pc = 0x36FB54u;
            // 0x36fb54: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x36FB58u;
        goto label_36fb58;
    }
    ctx->pc = 0x36FB50u;
    SET_GPR_U32(ctx, 31, 0x36FB58u);
    ctx->pc = 0x36FB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FB50u;
            // 0x36fb54: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FB58u; }
        if (ctx->pc != 0x36FB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FB58u; }
        if (ctx->pc != 0x36FB58u) { return; }
    }
    ctx->pc = 0x36FB58u;
label_36fb58:
    // 0x36fb58: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x36fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_36fb5c:
    // 0x36fb5c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x36fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_36fb60:
    // 0x36fb60: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x36fb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_36fb64:
    // 0x36fb64: 0xc0a5a68  jal         func_2969A0
label_36fb68:
    if (ctx->pc == 0x36FB68u) {
        ctx->pc = 0x36FB68u;
            // 0x36fb68: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x36FB6Cu;
        goto label_36fb6c;
    }
    ctx->pc = 0x36FB64u;
    SET_GPR_U32(ctx, 31, 0x36FB6Cu);
    ctx->pc = 0x36FB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FB64u;
            // 0x36fb68: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FB6Cu; }
        if (ctx->pc != 0x36FB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FB6Cu; }
        if (ctx->pc != 0x36FB6Cu) { return; }
    }
    ctx->pc = 0x36FB6Cu;
label_36fb6c:
    // 0x36fb6c: 0xafb00144  sw          $s0, 0x144($sp)
    ctx->pc = 0x36fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 16));
label_36fb70:
    // 0x36fb70: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x36fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_36fb74:
    // 0x36fb74: 0xc6250018  lwc1        $f5, 0x18($s1)
    ctx->pc = 0x36fb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_36fb78:
    // 0x36fb78: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x36fb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_36fb7c:
    // 0x36fb7c: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x36fb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_36fb80:
    // 0x36fb80: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x36fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36fb84:
    // 0x36fb84: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x36fb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_36fb88:
    // 0x36fb88: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x36fb88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
label_36fb8c:
    // 0x36fb8c: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x36fb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36fb90:
    // 0x36fb90: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x36fb90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36fb94:
    // 0x36fb94: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x36fb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36fb98:
    // 0x36fb98: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x36fb98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_36fb9c:
    // 0x36fb9c: 0xc7a20110  lwc1        $f2, 0x110($sp)
    ctx->pc = 0x36fb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36fba0:
    // 0x36fba0: 0xafa601e8  sw          $a2, 0x1E8($sp)
    ctx->pc = 0x36fba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 6));
label_36fba4:
    // 0x36fba4: 0xe7a10194  swc1        $f1, 0x194($sp)
    ctx->pc = 0x36fba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_36fba8:
    // 0x36fba8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36fbac:
    // 0x36fbac: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x36fbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_36fbb0:
    // 0x36fbb0: 0xa3a401f2  sb          $a0, 0x1F2($sp)
    ctx->pc = 0x36fbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 498), (uint8_t)GPR_U32(ctx, 4));
label_36fbb4:
    // 0x36fbb4: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x36fbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36fbb8:
    // 0x36fbb8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x36fbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_36fbbc:
    // 0x36fbbc: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x36fbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36fbc0:
    // 0x36fbc0: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x36fbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_36fbc4:
    // 0x36fbc4: 0xe7a20190  swc1        $f2, 0x190($sp)
    ctx->pc = 0x36fbc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_36fbc8:
    // 0x36fbc8: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x36fbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_36fbcc:
    // 0x36fbcc: 0xe7a101a0  swc1        $f1, 0x1A0($sp)
    ctx->pc = 0x36fbccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_36fbd0:
    // 0x36fbd0: 0xa3a801f0  sb          $t0, 0x1F0($sp)
    ctx->pc = 0x36fbd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 8));
label_36fbd4:
    // 0x36fbd4: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x36fbd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_36fbd8:
    // 0x36fbd8: 0xafa701ec  sw          $a3, 0x1EC($sp)
    ctx->pc = 0x36fbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 7));
label_36fbdc:
    // 0x36fbdc: 0xc7a2011c  lwc1        $f2, 0x11C($sp)
    ctx->pc = 0x36fbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36fbe0:
    // 0x36fbe0: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x36fbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
label_36fbe4:
    // 0x36fbe4: 0xc7a1012c  lwc1        $f1, 0x12C($sp)
    ctx->pc = 0x36fbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36fbe8:
    // 0x36fbe8: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x36fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_36fbec:
    // 0x36fbec: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x36fbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36fbf0:
    // 0x36fbf0: 0xe7a2019c  swc1        $f2, 0x19C($sp)
    ctx->pc = 0x36fbf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_36fbf4:
    // 0x36fbf4: 0xe7a101ac  swc1        $f1, 0x1AC($sp)
    ctx->pc = 0x36fbf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
label_36fbf8:
    // 0x36fbf8: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x36fbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_36fbfc:
    // 0x36fbfc: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x36fbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36fc00:
    // 0x36fc00: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x36fc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36fc04:
    // 0x36fc04: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x36fc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36fc08:
    // 0x36fc08: 0xe7a201a8  swc1        $f2, 0x1A8($sp)
    ctx->pc = 0x36fc08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_36fc0c:
    // 0x36fc0c: 0xe7a101b8  swc1        $f1, 0x1B8($sp)
    ctx->pc = 0x36fc0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_36fc10:
    // 0x36fc10: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x36fc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
label_36fc14:
    // 0x36fc14: 0xc7a20134  lwc1        $f2, 0x134($sp)
    ctx->pc = 0x36fc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36fc18:
    // 0x36fc18: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x36fc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36fc1c:
    // 0x36fc1c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x36fc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36fc20:
    // 0x36fc20: 0xe7a201b4  swc1        $f2, 0x1B4($sp)
    ctx->pc = 0x36fc20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_36fc24:
    // 0x36fc24: 0xe7a101c4  swc1        $f1, 0x1C4($sp)
    ctx->pc = 0x36fc24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_36fc28:
    // 0x36fc28: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x36fc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_36fc2c:
    // 0x36fc2c: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x36fc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36fc30:
    // 0x36fc30: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x36fc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36fc34:
    // 0x36fc34: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x36fc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36fc38:
    // 0x36fc38: 0xe7a30150  swc1        $f3, 0x150($sp)
    ctx->pc = 0x36fc38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_36fc3c:
    // 0x36fc3c: 0xe7a40154  swc1        $f4, 0x154($sp)
    ctx->pc = 0x36fc3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_36fc40:
    // 0x36fc40: 0xe7a50158  swc1        $f5, 0x158($sp)
    ctx->pc = 0x36fc40u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_36fc44:
    // 0x36fc44: 0xe7a201c0  swc1        $f2, 0x1C0($sp)
    ctx->pc = 0x36fc44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_36fc48:
    // 0x36fc48: 0xe7a101cc  swc1        $f1, 0x1CC($sp)
    ctx->pc = 0x36fc48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
label_36fc4c:
    // 0x36fc4c: 0xc0a7a88  jal         func_29EA20
label_36fc50:
    if (ctx->pc == 0x36FC50u) {
        ctx->pc = 0x36FC50u;
            // 0x36fc50: 0xe7a001d0  swc1        $f0, 0x1D0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
        ctx->pc = 0x36FC54u;
        goto label_36fc54;
    }
    ctx->pc = 0x36FC4Cu;
    SET_GPR_U32(ctx, 31, 0x36FC54u);
    ctx->pc = 0x36FC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FC4Cu;
            // 0x36fc50: 0xe7a001d0  swc1        $f0, 0x1D0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FC54u; }
        if (ctx->pc != 0x36FC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FC54u; }
        if (ctx->pc != 0x36FC54u) { return; }
    }
    ctx->pc = 0x36FC54u;
label_36fc54:
    // 0x36fc54: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x36fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_36fc58:
    // 0x36fc58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36fc58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36fc5c:
    // 0x36fc5c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_36fc60:
    if (ctx->pc == 0x36FC60u) {
        ctx->pc = 0x36FC60u;
            // 0x36fc60: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x36FC64u;
        goto label_36fc64;
    }
    ctx->pc = 0x36FC5Cu;
    {
        const bool branch_taken_0x36fc5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36FC5Cu;
            // 0x36fc60: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fc5c) {
            ctx->pc = 0x36FCACu;
            goto label_36fcac;
        }
    }
    ctx->pc = 0x36FC64u;
label_36fc64:
    // 0x36fc64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36fc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36fc68:
    // 0x36fc68: 0xc088ef4  jal         func_223BD0
label_36fc6c:
    if (ctx->pc == 0x36FC6Cu) {
        ctx->pc = 0x36FC6Cu;
            // 0x36fc6c: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x36FC70u;
        goto label_36fc70;
    }
    ctx->pc = 0x36FC68u;
    SET_GPR_U32(ctx, 31, 0x36FC70u);
    ctx->pc = 0x36FC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FC68u;
            // 0x36fc6c: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FC70u; }
        if (ctx->pc != 0x36FC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FC70u; }
        if (ctx->pc != 0x36FC70u) { return; }
    }
    ctx->pc = 0x36FC70u;
label_36fc70:
    // 0x36fc70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36fc74:
    // 0x36fc74: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36fc74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36fc78:
    // 0x36fc78: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x36fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_36fc7c:
    // 0x36fc7c: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x36fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_36fc80:
    // 0x36fc80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x36fc80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_36fc84:
    // 0x36fc84: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x36fc84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_36fc88:
    // 0x36fc88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36fc8c:
    // 0x36fc8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36fc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_36fc90:
    // 0x36fc90: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x36fc90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_36fc94:
    // 0x36fc94: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x36fc94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_36fc98:
    // 0x36fc98: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x36fc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_36fc9c:
    // 0x36fc9c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x36fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_36fca0:
    // 0x36fca0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x36fca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_36fca4:
    // 0x36fca4: 0xc088b38  jal         func_222CE0
label_36fca8:
    if (ctx->pc == 0x36FCA8u) {
        ctx->pc = 0x36FCA8u;
            // 0x36fca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36FCACu;
        goto label_36fcac;
    }
    ctx->pc = 0x36FCA4u;
    SET_GPR_U32(ctx, 31, 0x36FCACu);
    ctx->pc = 0x36FCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FCA4u;
            // 0x36fca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FCACu; }
        if (ctx->pc != 0x36FCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FCACu; }
        if (ctx->pc != 0x36FCACu) { return; }
    }
    ctx->pc = 0x36FCACu;
label_36fcac:
    // 0x36fcac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36fcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36fcb0:
    // 0x36fcb0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36fcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_36fcb4:
    // 0x36fcb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36fcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36fcb8:
    // 0x36fcb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36fcb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36fcbc:
    // 0x36fcbc: 0xc08914c  jal         func_224530
label_36fcc0:
    if (ctx->pc == 0x36FCC0u) {
        ctx->pc = 0x36FCC0u;
            // 0x36fcc0: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x36FCC4u;
        goto label_36fcc4;
    }
    ctx->pc = 0x36FCBCu;
    SET_GPR_U32(ctx, 31, 0x36FCC4u);
    ctx->pc = 0x36FCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FCBCu;
            // 0x36fcc0: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FCC4u; }
        if (ctx->pc != 0x36FCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FCC4u; }
        if (ctx->pc != 0x36FCC4u) { return; }
    }
    ctx->pc = 0x36FCC4u;
label_36fcc4:
    // 0x36fcc4: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x36fcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36fcc8:
    // 0x36fcc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36fcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36fccc:
    // 0x36fccc: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x36fcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36fcd0:
    // 0x36fcd0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x36fcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_36fcd4:
    // 0x36fcd4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x36fcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36fcd8:
    // 0x36fcd8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x36fcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_36fcdc:
    // 0x36fcdc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x36fcdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_36fce0:
    // 0x36fce0: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x36fce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_36fce4:
    // 0x36fce4: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x36fce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_36fce8:
    // 0x36fce8: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x36fce8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_36fcec:
    // 0x36fcec: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x36fcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_36fcf0:
    // 0x36fcf0: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x36fcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36fcf4:
    // 0x36fcf4: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x36fcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36fcf8:
    // 0x36fcf8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x36fcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36fcfc:
    // 0x36fcfc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x36fcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_36fd00:
    // 0x36fd00: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x36fd00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_36fd04:
    // 0x36fd04: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x36fd04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_36fd08:
    // 0x36fd08: 0xc0892b0  jal         func_224AC0
label_36fd0c:
    if (ctx->pc == 0x36FD0Cu) {
        ctx->pc = 0x36FD0Cu;
            // 0x36fd0c: 0xe7a3008c  swc1        $f3, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->pc = 0x36FD10u;
        goto label_36fd10;
    }
    ctx->pc = 0x36FD08u;
    SET_GPR_U32(ctx, 31, 0x36FD10u);
    ctx->pc = 0x36FD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FD08u;
            // 0x36fd0c: 0xe7a3008c  swc1        $f3, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FD10u; }
        if (ctx->pc != 0x36FD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FD10u; }
        if (ctx->pc != 0x36FD10u) { return; }
    }
    ctx->pc = 0x36FD10u;
label_36fd10:
    // 0x36fd10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36fd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36fd14:
    // 0x36fd14: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x36fd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_36fd18:
    // 0x36fd18: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x36fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_36fd1c:
    // 0x36fd1c: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x36fd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_36fd20:
    // 0x36fd20: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x36fd20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
label_36fd24:
    // 0x36fd24: 0xc0891d8  jal         func_224760
label_36fd28:
    if (ctx->pc == 0x36FD28u) {
        ctx->pc = 0x36FD28u;
            // 0x36fd28: 0xafa000ec  sw          $zero, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
        ctx->pc = 0x36FD2Cu;
        goto label_36fd2c;
    }
    ctx->pc = 0x36FD24u;
    SET_GPR_U32(ctx, 31, 0x36FD2Cu);
    ctx->pc = 0x36FD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FD24u;
            // 0x36fd28: 0xafa000ec  sw          $zero, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FD2Cu; }
        if (ctx->pc != 0x36FD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FD2Cu; }
        if (ctx->pc != 0x36FD2Cu) { return; }
    }
    ctx->pc = 0x36FD2Cu;
label_36fd2c:
    // 0x36fd2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36fd30:
    // 0x36fd30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36fd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36fd34:
    // 0x36fd34: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x36fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_36fd38:
    // 0x36fd38: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36fd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_36fd3c:
    // 0x36fd3c: 0xc08c164  jal         func_230590
label_36fd40:
    if (ctx->pc == 0x36FD40u) {
        ctx->pc = 0x36FD40u;
            // 0x36fd40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36FD44u;
        goto label_36fd44;
    }
    ctx->pc = 0x36FD3Cu;
    SET_GPR_U32(ctx, 31, 0x36FD44u);
    ctx->pc = 0x36FD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FD3Cu;
            // 0x36fd40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FD44u; }
        if (ctx->pc != 0x36FD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FD44u; }
        if (ctx->pc != 0x36FD44u) { return; }
    }
    ctx->pc = 0x36FD44u;
label_36fd44:
    // 0x36fd44: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x36fd44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_36fd48:
    // 0x36fd48: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36fd4c:
    // 0x36fd4c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x36fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_36fd50:
    // 0x36fd50: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x36fd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_36fd54:
    // 0x36fd54: 0xc0a7a88  jal         func_29EA20
label_36fd58:
    if (ctx->pc == 0x36FD58u) {
        ctx->pc = 0x36FD58u;
            // 0x36fd58: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x36FD5Cu;
        goto label_36fd5c;
    }
    ctx->pc = 0x36FD54u;
    SET_GPR_U32(ctx, 31, 0x36FD5Cu);
    ctx->pc = 0x36FD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FD54u;
            // 0x36fd58: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FD5Cu; }
        if (ctx->pc != 0x36FD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FD5Cu; }
        if (ctx->pc != 0x36FD5Cu) { return; }
    }
    ctx->pc = 0x36FD5Cu;
label_36fd5c:
    // 0x36fd5c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x36fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_36fd60:
    // 0x36fd60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36fd60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36fd64:
    // 0x36fd64: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_36fd68:
    if (ctx->pc == 0x36FD68u) {
        ctx->pc = 0x36FD68u;
            // 0x36fd68: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x36FD6Cu;
        goto label_36fd6c;
    }
    ctx->pc = 0x36FD64u;
    {
        const bool branch_taken_0x36fd64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36FD64u;
            // 0x36fd68: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fd64) {
            ctx->pc = 0x36FD88u;
            goto label_36fd88;
        }
    }
    ctx->pc = 0x36FD6Cu;
label_36fd6c:
    // 0x36fd6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36fd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36fd70:
    // 0x36fd70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36fd70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36fd74:
    // 0x36fd74: 0xc0869d0  jal         func_21A740
label_36fd78:
    if (ctx->pc == 0x36FD78u) {
        ctx->pc = 0x36FD78u;
            // 0x36fd78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36FD7Cu;
        goto label_36fd7c;
    }
    ctx->pc = 0x36FD74u;
    SET_GPR_U32(ctx, 31, 0x36FD7Cu);
    ctx->pc = 0x36FD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FD74u;
            // 0x36fd78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FD7Cu; }
        if (ctx->pc != 0x36FD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FD7Cu; }
        if (ctx->pc != 0x36FD7Cu) { return; }
    }
    ctx->pc = 0x36FD7Cu;
label_36fd7c:
    // 0x36fd7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36fd80:
    // 0x36fd80: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x36fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_36fd84:
    // 0x36fd84: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x36fd84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_36fd88:
    // 0x36fd88: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x36fd88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_36fd8c:
    // 0x36fd8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36fd90:
    // 0x36fd90: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x36fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_36fd94:
    // 0x36fd94: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36fd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_36fd98:
    // 0x36fd98: 0xc08c650  jal         func_231940
label_36fd9c:
    if (ctx->pc == 0x36FD9Cu) {
        ctx->pc = 0x36FD9Cu;
            // 0x36fd9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36FDA0u;
        goto label_36fda0;
    }
    ctx->pc = 0x36FD98u;
    SET_GPR_U32(ctx, 31, 0x36FDA0u);
    ctx->pc = 0x36FD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FD98u;
            // 0x36fd9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FDA0u; }
        if (ctx->pc != 0x36FDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FDA0u; }
        if (ctx->pc != 0x36FDA0u) { return; }
    }
    ctx->pc = 0x36FDA0u;
label_36fda0:
    // 0x36fda0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36fda4:
    // 0x36fda4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x36fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_36fda8:
    // 0x36fda8: 0x8c500968  lw          $s0, 0x968($v0)
    ctx->pc = 0x36fda8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_36fdac:
    // 0x36fdac: 0xc040180  jal         func_100600
label_36fdb0:
    if (ctx->pc == 0x36FDB0u) {
        ctx->pc = 0x36FDB0u;
            // 0x36fdb0: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x36FDB4u;
        goto label_36fdb4;
    }
    ctx->pc = 0x36FDACu;
    SET_GPR_U32(ctx, 31, 0x36FDB4u);
    ctx->pc = 0x36FDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FDACu;
            // 0x36fdb0: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FDB4u; }
        if (ctx->pc != 0x36FDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FDB4u; }
        if (ctx->pc != 0x36FDB4u) { return; }
    }
    ctx->pc = 0x36FDB4u;
label_36fdb4:
    // 0x36fdb4: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_36fdb8:
    if (ctx->pc == 0x36FDB8u) {
        ctx->pc = 0x36FDB8u;
            // 0x36fdb8: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x36FDBCu;
        goto label_36fdbc;
    }
    ctx->pc = 0x36FDB4u;
    {
        const bool branch_taken_0x36fdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fdb4) {
            ctx->pc = 0x36FDB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36FDB4u;
            // 0x36fdb8: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36FE10u;
            goto label_36fe10;
        }
    }
    ctx->pc = 0x36FDBCu;
label_36fdbc:
    // 0x36fdbc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x36fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_36fdc0:
    // 0x36fdc0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x36fdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_36fdc4:
    // 0x36fdc4: 0x246319e0  addiu       $v1, $v1, 0x19E0
    ctx->pc = 0x36fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6624));
label_36fdc8:
    // 0x36fdc8: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x36fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_36fdcc:
    // 0x36fdcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_36fdd0:
    // 0x36fdd0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x36fdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_36fdd4:
    // 0x36fdd4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x36fdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_36fdd8:
    // 0x36fdd8: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x36fdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_36fddc:
    // 0x36fddc: 0xac440048  sw          $a0, 0x48($v0)
    ctx->pc = 0x36fddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 4));
label_36fde0:
    // 0x36fde0: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x36fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_36fde4:
    // 0x36fde4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x36fde4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_36fde8:
    // 0x36fde8: 0xac450024  sw          $a1, 0x24($v0)
    ctx->pc = 0x36fde8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 5));
label_36fdec:
    // 0x36fdec: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x36fdecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_36fdf0:
    // 0x36fdf0: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x36fdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_36fdf4:
    // 0x36fdf4: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x36fdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_36fdf8:
    // 0x36fdf8: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x36fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_36fdfc:
    // 0x36fdfc: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x36fdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_36fe00:
    // 0x36fe00: 0xac46003c  sw          $a2, 0x3C($v0)
    ctx->pc = 0x36fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 6));
label_36fe04:
    // 0x36fe04: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x36fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_36fe08:
    // 0x36fe08: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x36fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_36fe0c:
    // 0x36fe0c: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x36fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_36fe10:
    // 0x36fe10: 0x2403f9fb  addiu       $v1, $zero, -0x605
    ctx->pc = 0x36fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965755));
label_36fe14:
    // 0x36fe14: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x36fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_36fe18:
    // 0x36fe18: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x36fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_36fe1c:
    // 0x36fe1c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x36fe1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_36fe20:
    // 0x36fe20: 0x34630604  ori         $v1, $v1, 0x604
    ctx->pc = 0x36fe20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1540);
label_36fe24:
    // 0x36fe24: 0x1202008a  beq         $s0, $v0, . + 4 + (0x8A << 2)
label_36fe28:
    if (ctx->pc == 0x36FE28u) {
        ctx->pc = 0x36FE28u;
            // 0x36fe28: 0xae2300b0  sw          $v1, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
        ctx->pc = 0x36FE2Cu;
        goto label_36fe2c;
    }
    ctx->pc = 0x36FE24u;
    {
        const bool branch_taken_0x36fe24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x36FE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36FE24u;
            // 0x36fe28: 0xae2300b0  sw          $v1, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fe24) {
            ctx->pc = 0x370050u;
            goto label_370050;
        }
    }
    ctx->pc = 0x36FE2Cu;
label_36fe2c:
    // 0x36fe2c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x36fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_36fe30:
    // 0x36fe30: 0x5202005f  beql        $s0, $v0, . + 4 + (0x5F << 2)
label_36fe34:
    if (ctx->pc == 0x36FE34u) {
        ctx->pc = 0x36FE34u;
            // 0x36fe34: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x36FE38u;
        goto label_36fe38;
    }
    ctx->pc = 0x36FE30u;
    {
        const bool branch_taken_0x36fe30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x36fe30) {
            ctx->pc = 0x36FE34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36FE30u;
            // 0x36fe34: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36FFB0u;
            goto label_36ffb0;
        }
    }
    ctx->pc = 0x36FE38u;
label_36fe38:
    // 0x36fe38: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x36fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_36fe3c:
    // 0x36fe3c: 0x5202002f  beql        $s0, $v0, . + 4 + (0x2F << 2)
label_36fe40:
    if (ctx->pc == 0x36FE40u) {
        ctx->pc = 0x36FE40u;
            // 0x36fe40: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x36FE44u;
        goto label_36fe44;
    }
    ctx->pc = 0x36FE3Cu;
    {
        const bool branch_taken_0x36fe3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x36fe3c) {
            ctx->pc = 0x36FE40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36FE3Cu;
            // 0x36fe40: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36FEFCu;
            goto label_36fefc;
        }
    }
    ctx->pc = 0x36FE44u;
label_36fe44:
    // 0x36fe44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36fe48:
    // 0x36fe48: 0x52020003  beql        $s0, $v0, . + 4 + (0x3 << 2)
label_36fe4c:
    if (ctx->pc == 0x36FE4Cu) {
        ctx->pc = 0x36FE4Cu;
            // 0x36fe4c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x36FE50u;
        goto label_36fe50;
    }
    ctx->pc = 0x36FE48u;
    {
        const bool branch_taken_0x36fe48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x36fe48) {
            ctx->pc = 0x36FE4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36FE48u;
            // 0x36fe4c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36FE58u;
            goto label_36fe58;
        }
    }
    ctx->pc = 0x36FE50u;
label_36fe50:
    // 0x36fe50: 0x100000bb  b           . + 4 + (0xBB << 2)
label_36fe54:
    if (ctx->pc == 0x36FE54u) {
        ctx->pc = 0x36FE54u;
            // 0x36fe54: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x36FE58u;
        goto label_36fe58;
    }
    ctx->pc = 0x36FE50u;
    {
        const bool branch_taken_0x36fe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36FE50u;
            // 0x36fe54: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fe50) {
            ctx->pc = 0x370140u;
            goto label_370140;
        }
    }
    ctx->pc = 0x36FE58u;
label_36fe58:
    // 0x36fe58: 0xc040180  jal         func_100600
label_36fe5c:
    if (ctx->pc == 0x36FE5Cu) {
        ctx->pc = 0x36FE60u;
        goto label_36fe60;
    }
    ctx->pc = 0x36FE58u;
    SET_GPR_U32(ctx, 31, 0x36FE60u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FE60u; }
        if (ctx->pc != 0x36FE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FE60u; }
        if (ctx->pc != 0x36FE60u) { return; }
    }
    ctx->pc = 0x36FE60u;
label_36fe60:
    // 0x36fe60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36fe60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36fe64:
    // 0x36fe64: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_36fe68:
    if (ctx->pc == 0x36FE68u) {
        ctx->pc = 0x36FE68u;
            // 0x36fe68: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x36FE6Cu;
        goto label_36fe6c;
    }
    ctx->pc = 0x36FE64u;
    {
        const bool branch_taken_0x36fe64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fe64) {
            ctx->pc = 0x36FE68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36FE64u;
            // 0x36fe68: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36FEA4u;
            goto label_36fea4;
        }
    }
    ctx->pc = 0x36FE6Cu;
label_36fe6c:
    // 0x36fe6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36fe70:
    // 0x36fe70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36fe74:
    // 0x36fe74: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x36fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_36fe78:
    // 0x36fe78: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x36fe78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_36fe7c:
    // 0x36fe7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36fe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_36fe80:
    // 0x36fe80: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x36fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_36fe84:
    // 0x36fe84: 0xc040138  jal         func_1004E0
label_36fe88:
    if (ctx->pc == 0x36FE88u) {
        ctx->pc = 0x36FE88u;
            // 0x36fe88: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x36FE8Cu;
        goto label_36fe8c;
    }
    ctx->pc = 0x36FE84u;
    SET_GPR_U32(ctx, 31, 0x36FE8Cu);
    ctx->pc = 0x36FE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FE84u;
            // 0x36fe88: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FE8Cu; }
        if (ctx->pc != 0x36FE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FE8Cu; }
        if (ctx->pc != 0x36FE8Cu) { return; }
    }
    ctx->pc = 0x36FE8Cu;
label_36fe8c:
    // 0x36fe8c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x36fe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_36fe90:
    // 0x36fe90: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x36fe90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_36fe94:
    // 0x36fe94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36fe94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36fe98:
    // 0x36fe98: 0xc04a576  jal         func_1295D8
label_36fe9c:
    if (ctx->pc == 0x36FE9Cu) {
        ctx->pc = 0x36FE9Cu;
            // 0x36fe9c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x36FEA0u;
        goto label_36fea0;
    }
    ctx->pc = 0x36FE98u;
    SET_GPR_U32(ctx, 31, 0x36FEA0u);
    ctx->pc = 0x36FE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FE98u;
            // 0x36fe9c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FEA0u; }
        if (ctx->pc != 0x36FEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FEA0u; }
        if (ctx->pc != 0x36FEA0u) { return; }
    }
    ctx->pc = 0x36FEA0u;
label_36fea0:
    // 0x36fea0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_36fea4:
    // 0x36fea4: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x36fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
label_36fea8:
    // 0x36fea8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36fea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_36feac:
    // 0x36feac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36feacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36feb0:
    // 0x36feb0: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x36feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
label_36feb4:
    // 0x36feb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36feb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36feb8:
    // 0x36feb8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x36feb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36febc:
    // 0x36febc: 0x34460cae  ori         $a2, $v0, 0xCAE
    ctx->pc = 0x36febcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3246);
label_36fec0:
    // 0x36fec0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36fec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36fec4:
    // 0x36fec4: 0xc122cd8  jal         func_48B360
label_36fec8:
    if (ctx->pc == 0x36FEC8u) {
        ctx->pc = 0x36FEC8u;
            // 0x36fec8: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->pc = 0x36FECCu;
        goto label_36fecc;
    }
    ctx->pc = 0x36FEC4u;
    SET_GPR_U32(ctx, 31, 0x36FECCu);
    ctx->pc = 0x36FEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FEC4u;
            // 0x36fec8: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FECCu; }
        if (ctx->pc != 0x36FECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FECCu; }
        if (ctx->pc != 0x36FECCu) { return; }
    }
    ctx->pc = 0x36FECCu;
label_36fecc:
    // 0x36fecc: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x36feccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
label_36fed0:
    // 0x36fed0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36fed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36fed4:
    // 0x36fed4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36fed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36fed8:
    // 0x36fed8: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x36fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_36fedc:
    // 0x36fedc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_36fee0:
    // 0x36fee0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x36fee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36fee4:
    // 0x36fee4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36fee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_36fee8:
    // 0x36fee8: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x36fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_36feec:
    // 0x36feec: 0xc122cd8  jal         func_48B360
label_36fef0:
    if (ctx->pc == 0x36FEF0u) {
        ctx->pc = 0x36FEF0u;
            // 0x36fef0: 0x34460cae  ori         $a2, $v0, 0xCAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3246);
        ctx->pc = 0x36FEF4u;
        goto label_36fef4;
    }
    ctx->pc = 0x36FEECu;
    SET_GPR_U32(ctx, 31, 0x36FEF4u);
    ctx->pc = 0x36FEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FEECu;
            // 0x36fef0: 0x34460cae  ori         $a2, $v0, 0xCAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3246);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FEF4u; }
        if (ctx->pc != 0x36FEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FEF4u; }
        if (ctx->pc != 0x36FEF4u) { return; }
    }
    ctx->pc = 0x36FEF4u;
label_36fef4:
    // 0x36fef4: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_36fef8:
    if (ctx->pc == 0x36FEF8u) {
        ctx->pc = 0x36FEF8u;
            // 0x36fef8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x36FEFCu;
        goto label_36fefc;
    }
    ctx->pc = 0x36FEF4u;
    {
        const bool branch_taken_0x36fef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36FEF4u;
            // 0x36fef8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fef4) {
            ctx->pc = 0x3701B8u;
            goto label_3701b8;
        }
    }
    ctx->pc = 0x36FEFCu;
label_36fefc:
    // 0x36fefc: 0xc040180  jal         func_100600
label_36ff00:
    if (ctx->pc == 0x36FF00u) {
        ctx->pc = 0x36FF04u;
        goto label_36ff04;
    }
    ctx->pc = 0x36FEFCu;
    SET_GPR_U32(ctx, 31, 0x36FF04u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FF04u; }
        if (ctx->pc != 0x36FF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FF04u; }
        if (ctx->pc != 0x36FF04u) { return; }
    }
    ctx->pc = 0x36FF04u;
label_36ff04:
    // 0x36ff04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36ff04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36ff08:
    // 0x36ff08: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_36ff0c:
    if (ctx->pc == 0x36FF0Cu) {
        ctx->pc = 0x36FF0Cu;
            // 0x36ff0c: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->pc = 0x36FF10u;
        goto label_36ff10;
    }
    ctx->pc = 0x36FF08u;
    {
        const bool branch_taken_0x36ff08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ff08) {
            ctx->pc = 0x36FF0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36FF08u;
            // 0x36ff0c: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36FF48u;
            goto label_36ff48;
        }
    }
    ctx->pc = 0x36FF10u;
label_36ff10:
    // 0x36ff10: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36ff14:
    // 0x36ff14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36ff18:
    // 0x36ff18: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x36ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_36ff1c:
    // 0x36ff1c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x36ff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_36ff20:
    // 0x36ff20: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36ff20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_36ff24:
    // 0x36ff24: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x36ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_36ff28:
    // 0x36ff28: 0xc040138  jal         func_1004E0
label_36ff2c:
    if (ctx->pc == 0x36FF2Cu) {
        ctx->pc = 0x36FF2Cu;
            // 0x36ff2c: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x36FF30u;
        goto label_36ff30;
    }
    ctx->pc = 0x36FF28u;
    SET_GPR_U32(ctx, 31, 0x36FF30u);
    ctx->pc = 0x36FF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FF28u;
            // 0x36ff2c: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FF30u; }
        if (ctx->pc != 0x36FF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FF30u; }
        if (ctx->pc != 0x36FF30u) { return; }
    }
    ctx->pc = 0x36FF30u;
label_36ff30:
    // 0x36ff30: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x36ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_36ff34:
    // 0x36ff34: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x36ff34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_36ff38:
    // 0x36ff38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36ff38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36ff3c:
    // 0x36ff3c: 0xc04a576  jal         func_1295D8
label_36ff40:
    if (ctx->pc == 0x36FF40u) {
        ctx->pc = 0x36FF40u;
            // 0x36ff40: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x36FF44u;
        goto label_36ff44;
    }
    ctx->pc = 0x36FF3Cu;
    SET_GPR_U32(ctx, 31, 0x36FF44u);
    ctx->pc = 0x36FF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FF3Cu;
            // 0x36ff40: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FF44u; }
        if (ctx->pc != 0x36FF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FF44u; }
        if (ctx->pc != 0x36FF44u) { return; }
    }
    ctx->pc = 0x36FF44u;
label_36ff44:
    // 0x36ff44: 0xae3000d8  sw          $s0, 0xD8($s1)
    ctx->pc = 0x36ff44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
label_36ff48:
    // 0x36ff48: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_36ff4c:
    // 0x36ff4c: 0xc4421a30  lwc1        $f2, 0x1A30($v0)
    ctx->pc = 0x36ff4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_36ff50:
    // 0x36ff50: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x36ff50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_36ff54:
    // 0x36ff54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ff54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36ff58:
    // 0x36ff58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36ff58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36ff5c:
    // 0x36ff5c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_36ff60:
    // 0x36ff60: 0xc4411a34  lwc1        $f1, 0x1A34($v0)
    ctx->pc = 0x36ff60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36ff64:
    // 0x36ff64: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x36ff64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_36ff68:
    // 0x36ff68: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_36ff6c:
    // 0x36ff6c: 0xc4401a38  lwc1        $f0, 0x1A38($v0)
    ctx->pc = 0x36ff6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36ff70:
    // 0x36ff70: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x36ff70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_36ff74:
    // 0x36ff74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_36ff78:
    // 0x36ff78: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x36ff78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_36ff7c:
    // 0x36ff7c: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x36ff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
label_36ff80:
    // 0x36ff80: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_36ff84:
    // 0x36ff84: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x36ff84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_36ff88:
    // 0x36ff88: 0xc4401a3c  lwc1        $f0, 0x1A3C($v0)
    ctx->pc = 0x36ff88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36ff8c:
    // 0x36ff8c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x36ff8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36ff90:
    // 0x36ff90: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x36ff90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_36ff94:
    // 0x36ff94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_36ff98:
    // 0x36ff98: 0x8cc600d0  lw          $a2, 0xD0($a2)
    ctx->pc = 0x36ff98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 208)));
label_36ff9c:
    // 0x36ff9c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36ff9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_36ffa0:
    // 0x36ffa0: 0xc122cd8  jal         func_48B360
label_36ffa4:
    if (ctx->pc == 0x36FFA4u) {
        ctx->pc = 0x36FFA4u;
            // 0x36ffa4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36FFA8u;
        goto label_36ffa8;
    }
    ctx->pc = 0x36FFA0u;
    SET_GPR_U32(ctx, 31, 0x36FFA8u);
    ctx->pc = 0x36FFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FFA0u;
            // 0x36ffa4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FFA8u; }
        if (ctx->pc != 0x36FFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FFA8u; }
        if (ctx->pc != 0x36FFA8u) { return; }
    }
    ctx->pc = 0x36FFA8u;
label_36ffa8:
    // 0x36ffa8: 0x10000082  b           . + 4 + (0x82 << 2)
label_36ffac:
    if (ctx->pc == 0x36FFACu) {
        ctx->pc = 0x36FFB0u;
        goto label_36ffb0;
    }
    ctx->pc = 0x36FFA8u;
    {
        const bool branch_taken_0x36ffa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ffa8) {
            ctx->pc = 0x3701B4u;
            goto label_3701b4;
        }
    }
    ctx->pc = 0x36FFB0u;
label_36ffb0:
    // 0x36ffb0: 0xc040180  jal         func_100600
label_36ffb4:
    if (ctx->pc == 0x36FFB4u) {
        ctx->pc = 0x36FFB8u;
        goto label_36ffb8;
    }
    ctx->pc = 0x36FFB0u;
    SET_GPR_U32(ctx, 31, 0x36FFB8u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FFB8u; }
        if (ctx->pc != 0x36FFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FFB8u; }
        if (ctx->pc != 0x36FFB8u) { return; }
    }
    ctx->pc = 0x36FFB8u;
label_36ffb8:
    // 0x36ffb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36ffb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36ffbc:
    // 0x36ffbc: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_36ffc0:
    if (ctx->pc == 0x36FFC0u) {
        ctx->pc = 0x36FFC0u;
            // 0x36ffc0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x36FFC4u;
        goto label_36ffc4;
    }
    ctx->pc = 0x36FFBCu;
    {
        const bool branch_taken_0x36ffbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ffbc) {
            ctx->pc = 0x36FFC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36FFBCu;
            // 0x36ffc0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36FFFCu;
            goto label_36fffc;
        }
    }
    ctx->pc = 0x36FFC4u;
label_36ffc4:
    // 0x36ffc4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36ffc8:
    // 0x36ffc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36ffcc:
    // 0x36ffcc: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x36ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_36ffd0:
    // 0x36ffd0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x36ffd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_36ffd4:
    // 0x36ffd4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36ffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_36ffd8:
    // 0x36ffd8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x36ffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_36ffdc:
    // 0x36ffdc: 0xc040138  jal         func_1004E0
label_36ffe0:
    if (ctx->pc == 0x36FFE0u) {
        ctx->pc = 0x36FFE0u;
            // 0x36ffe0: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x36FFE4u;
        goto label_36ffe4;
    }
    ctx->pc = 0x36FFDCu;
    SET_GPR_U32(ctx, 31, 0x36FFE4u);
    ctx->pc = 0x36FFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FFDCu;
            // 0x36ffe0: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FFE4u; }
        if (ctx->pc != 0x36FFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FFE4u; }
        if (ctx->pc != 0x36FFE4u) { return; }
    }
    ctx->pc = 0x36FFE4u;
label_36ffe4:
    // 0x36ffe4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x36ffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_36ffe8:
    // 0x36ffe8: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x36ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_36ffec:
    // 0x36ffec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36ffecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36fff0:
    // 0x36fff0: 0xc04a576  jal         func_1295D8
label_36fff4:
    if (ctx->pc == 0x36FFF4u) {
        ctx->pc = 0x36FFF4u;
            // 0x36fff4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x36FFF8u;
        goto label_36fff8;
    }
    ctx->pc = 0x36FFF0u;
    SET_GPR_U32(ctx, 31, 0x36FFF8u);
    ctx->pc = 0x36FFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36FFF0u;
            // 0x36fff4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FFF8u; }
        if (ctx->pc != 0x36FFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36FFF8u; }
        if (ctx->pc != 0x36FFF8u) { return; }
    }
    ctx->pc = 0x36FFF8u;
label_36fff8:
    // 0x36fff8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_36fffc:
    // 0x36fffc: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x36fffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
label_370000:
    // 0x370000: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x370000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_370004:
    // 0x370004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_370008:
    // 0x370008: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x370008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_37000c:
    // 0x37000c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37000cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370010:
    // 0x370010: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x370010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_370014:
    // 0x370014: 0x344601ae  ori         $a2, $v0, 0x1AE
    ctx->pc = 0x370014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
label_370018:
    // 0x370018: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x370018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37001c:
    // 0x37001c: 0xc122cd8  jal         func_48B360
label_370020:
    if (ctx->pc == 0x370020u) {
        ctx->pc = 0x370020u;
            // 0x370020: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->pc = 0x370024u;
        goto label_370024;
    }
    ctx->pc = 0x37001Cu;
    SET_GPR_U32(ctx, 31, 0x370024u);
    ctx->pc = 0x370020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37001Cu;
            // 0x370020: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370024u; }
        if (ctx->pc != 0x370024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370024u; }
        if (ctx->pc != 0x370024u) { return; }
    }
    ctx->pc = 0x370024u;
label_370024:
    // 0x370024: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x370024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
label_370028:
    // 0x370028: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37002c:
    // 0x37002c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37002cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_370030:
    // 0x370030: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x370030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_370034:
    // 0x370034: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x370034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_370038:
    // 0x370038: 0x240614ae  addiu       $a2, $zero, 0x14AE
    ctx->pc = 0x370038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5294));
label_37003c:
    // 0x37003c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x37003cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_370040:
    // 0x370040: 0xc122cd8  jal         func_48B360
label_370044:
    if (ctx->pc == 0x370044u) {
        ctx->pc = 0x370044u;
            // 0x370044: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370048u;
        goto label_370048;
    }
    ctx->pc = 0x370040u;
    SET_GPR_U32(ctx, 31, 0x370048u);
    ctx->pc = 0x370044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370040u;
            // 0x370044: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370048u; }
        if (ctx->pc != 0x370048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370048u; }
        if (ctx->pc != 0x370048u) { return; }
    }
    ctx->pc = 0x370048u;
label_370048:
    // 0x370048: 0x1000005a  b           . + 4 + (0x5A << 2)
label_37004c:
    if (ctx->pc == 0x37004Cu) {
        ctx->pc = 0x370050u;
        goto label_370050;
    }
    ctx->pc = 0x370048u;
    {
        const bool branch_taken_0x370048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370048) {
            ctx->pc = 0x3701B4u;
            goto label_3701b4;
        }
    }
    ctx->pc = 0x370050u;
label_370050:
    // 0x370050: 0xc040180  jal         func_100600
label_370054:
    if (ctx->pc == 0x370054u) {
        ctx->pc = 0x370054u;
            // 0x370054: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x370058u;
        goto label_370058;
    }
    ctx->pc = 0x370050u;
    SET_GPR_U32(ctx, 31, 0x370058u);
    ctx->pc = 0x370054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370050u;
            // 0x370054: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370058u; }
        if (ctx->pc != 0x370058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370058u; }
        if (ctx->pc != 0x370058u) { return; }
    }
    ctx->pc = 0x370058u;
label_370058:
    // 0x370058: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x370058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37005c:
    // 0x37005c: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_370060:
    if (ctx->pc == 0x370060u) {
        ctx->pc = 0x370060u;
            // 0x370060: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->pc = 0x370064u;
        goto label_370064;
    }
    ctx->pc = 0x37005Cu;
    {
        const bool branch_taken_0x37005c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x37005c) {
            ctx->pc = 0x370060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37005Cu;
            // 0x370060: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37009Cu;
            goto label_37009c;
        }
    }
    ctx->pc = 0x370064u;
label_370064:
    // 0x370064: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x370064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_370068:
    // 0x370068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x370068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37006c:
    // 0x37006c: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x37006cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_370070:
    // 0x370070: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x370070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_370074:
    // 0x370074: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x370074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_370078:
    // 0x370078: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x370078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_37007c:
    // 0x37007c: 0xc040138  jal         func_1004E0
label_370080:
    if (ctx->pc == 0x370080u) {
        ctx->pc = 0x370080u;
            // 0x370080: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x370084u;
        goto label_370084;
    }
    ctx->pc = 0x37007Cu;
    SET_GPR_U32(ctx, 31, 0x370084u);
    ctx->pc = 0x370080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37007Cu;
            // 0x370080: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370084u; }
        if (ctx->pc != 0x370084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370084u; }
        if (ctx->pc != 0x370084u) { return; }
    }
    ctx->pc = 0x370084u;
label_370084:
    // 0x370084: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x370084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_370088:
    // 0x370088: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x370088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_37008c:
    // 0x37008c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37008cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370090:
    // 0x370090: 0xc04a576  jal         func_1295D8
label_370094:
    if (ctx->pc == 0x370094u) {
        ctx->pc = 0x370094u;
            // 0x370094: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x370098u;
        goto label_370098;
    }
    ctx->pc = 0x370090u;
    SET_GPR_U32(ctx, 31, 0x370098u);
    ctx->pc = 0x370094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370090u;
            // 0x370094: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370098u; }
        if (ctx->pc != 0x370098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370098u; }
        if (ctx->pc != 0x370098u) { return; }
    }
    ctx->pc = 0x370098u;
label_370098:
    // 0x370098: 0xae3000d8  sw          $s0, 0xD8($s1)
    ctx->pc = 0x370098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
label_37009c:
    // 0x37009c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x37009cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3700a0:
    // 0x3700a0: 0xc4421a40  lwc1        $f2, 0x1A40($v0)
    ctx->pc = 0x3700a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3700a4:
    // 0x3700a4: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x3700a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_3700a8:
    // 0x3700a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3700a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3700ac:
    // 0x3700ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3700acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3700b0:
    // 0x3700b0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3700b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3700b4:
    // 0x3700b4: 0xc4411a44  lwc1        $f1, 0x1A44($v0)
    ctx->pc = 0x3700b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3700b8:
    // 0x3700b8: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x3700b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3700bc:
    // 0x3700bc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3700bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3700c0:
    // 0x3700c0: 0xc4401a48  lwc1        $f0, 0x1A48($v0)
    ctx->pc = 0x3700c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3700c4:
    // 0x3700c4: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x3700c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3700c8:
    // 0x3700c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3700c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3700cc:
    // 0x3700cc: 0x5d2821  addu        $a1, $v0, $sp
    ctx->pc = 0x3700ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3700d0:
    // 0x3700d0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3700d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3700d4:
    // 0x3700d4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3700d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3700d8:
    // 0x3700d8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x3700d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3700dc:
    // 0x3700dc: 0xc4401a4c  lwc1        $f0, 0x1A4C($v0)
    ctx->pc = 0x3700dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3700e0:
    // 0x3700e0: 0xc4621a54  lwc1        $f2, 0x1A54($v1)
    ctx->pc = 0x3700e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3700e4:
    // 0x3700e4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3700e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3700e8:
    // 0x3700e8: 0xc4411a50  lwc1        $f1, 0x1A50($v0)
    ctx->pc = 0x3700e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3700ec:
    // 0x3700ec: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x3700ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_3700f0:
    // 0x3700f0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3700f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3700f4:
    // 0x3700f4: 0xc4401a58  lwc1        $f0, 0x1A58($v0)
    ctx->pc = 0x3700f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3700f8:
    // 0x3700f8: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x3700f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3700fc:
    // 0x3700fc: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x3700fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_370100:
    // 0x370100: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x370100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_370104:
    // 0x370104: 0xc4411a5c  lwc1        $f1, 0x1A5C($v0)
    ctx->pc = 0x370104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_370108:
    // 0x370108: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x370108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_37010c:
    // 0x37010c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x37010cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_370110:
    // 0x370110: 0xc4401a60  lwc1        $f0, 0x1A60($v0)
    ctx->pc = 0x370110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_370114:
    // 0x370114: 0xe7a100bc  swc1        $f1, 0xBC($sp)
    ctx->pc = 0x370114u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_370118:
    // 0x370118: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x370118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_37011c:
    // 0x37011c: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x37011cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
label_370120:
    // 0x370120: 0x8ca600a0  lw          $a2, 0xA0($a1)
    ctx->pc = 0x370120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
label_370124:
    // 0x370124: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x370124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_370128:
    // 0x370128: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x370128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_37012c:
    // 0x37012c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x37012cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_370130:
    // 0x370130: 0xc122cd8  jal         func_48B360
label_370134:
    if (ctx->pc == 0x370134u) {
        ctx->pc = 0x370134u;
            // 0x370134: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370138u;
        goto label_370138;
    }
    ctx->pc = 0x370130u;
    SET_GPR_U32(ctx, 31, 0x370138u);
    ctx->pc = 0x370134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370130u;
            // 0x370134: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370138u; }
        if (ctx->pc != 0x370138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370138u; }
        if (ctx->pc != 0x370138u) { return; }
    }
    ctx->pc = 0x370138u;
label_370138:
    // 0x370138: 0x1000001e  b           . + 4 + (0x1E << 2)
label_37013c:
    if (ctx->pc == 0x37013Cu) {
        ctx->pc = 0x370140u;
        goto label_370140;
    }
    ctx->pc = 0x370138u;
    {
        const bool branch_taken_0x370138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370138) {
            ctx->pc = 0x3701B4u;
            goto label_3701b4;
        }
    }
    ctx->pc = 0x370140u;
label_370140:
    // 0x370140: 0xc040180  jal         func_100600
label_370144:
    if (ctx->pc == 0x370144u) {
        ctx->pc = 0x370148u;
        goto label_370148;
    }
    ctx->pc = 0x370140u;
    SET_GPR_U32(ctx, 31, 0x370148u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370148u; }
        if (ctx->pc != 0x370148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370148u; }
        if (ctx->pc != 0x370148u) { return; }
    }
    ctx->pc = 0x370148u;
label_370148:
    // 0x370148: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x370148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37014c:
    // 0x37014c: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_370150:
    if (ctx->pc == 0x370150u) {
        ctx->pc = 0x370150u;
            // 0x370150: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x370154u;
        goto label_370154;
    }
    ctx->pc = 0x37014Cu;
    {
        const bool branch_taken_0x37014c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x37014c) {
            ctx->pc = 0x370150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37014Cu;
            // 0x370150: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37018Cu;
            goto label_37018c;
        }
    }
    ctx->pc = 0x370154u;
label_370154:
    // 0x370154: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x370154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_370158:
    // 0x370158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x370158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37015c:
    // 0x37015c: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x37015cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_370160:
    // 0x370160: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x370160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_370164:
    // 0x370164: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x370164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_370168:
    // 0x370168: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x370168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_37016c:
    // 0x37016c: 0xc040138  jal         func_1004E0
label_370170:
    if (ctx->pc == 0x370170u) {
        ctx->pc = 0x370170u;
            // 0x370170: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x370174u;
        goto label_370174;
    }
    ctx->pc = 0x37016Cu;
    SET_GPR_U32(ctx, 31, 0x370174u);
    ctx->pc = 0x370170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37016Cu;
            // 0x370170: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370174u; }
        if (ctx->pc != 0x370174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370174u; }
        if (ctx->pc != 0x370174u) { return; }
    }
    ctx->pc = 0x370174u;
label_370174:
    // 0x370174: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x370174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_370178:
    // 0x370178: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x370178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_37017c:
    // 0x37017c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37017cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370180:
    // 0x370180: 0xc04a576  jal         func_1295D8
label_370184:
    if (ctx->pc == 0x370184u) {
        ctx->pc = 0x370184u;
            // 0x370184: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x370188u;
        goto label_370188;
    }
    ctx->pc = 0x370180u;
    SET_GPR_U32(ctx, 31, 0x370188u);
    ctx->pc = 0x370184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370180u;
            // 0x370184: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370188u; }
        if (ctx->pc != 0x370188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370188u; }
        if (ctx->pc != 0x370188u) { return; }
    }
    ctx->pc = 0x370188u;
label_370188:
    // 0x370188: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x370188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_37018c:
    // 0x37018c: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x37018cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
label_370190:
    // 0x370190: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x370190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_370194:
    // 0x370194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_370198:
    // 0x370198: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x370198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_37019c:
    // 0x37019c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37019cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3701a0:
    // 0x3701a0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3701a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3701a4:
    // 0x3701a4: 0x344601ae  ori         $a2, $v0, 0x1AE
    ctx->pc = 0x3701a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
label_3701a8:
    // 0x3701a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3701a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3701ac:
    // 0x3701ac: 0xc122cd8  jal         func_48B360
label_3701b0:
    if (ctx->pc == 0x3701B0u) {
        ctx->pc = 0x3701B0u;
            // 0x3701b0: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->pc = 0x3701B4u;
        goto label_3701b4;
    }
    ctx->pc = 0x3701ACu;
    SET_GPR_U32(ctx, 31, 0x3701B4u);
    ctx->pc = 0x3701B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3701ACu;
            // 0x3701b0: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3701B4u; }
        if (ctx->pc != 0x3701B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3701B4u; }
        if (ctx->pc != 0x3701B4u) { return; }
    }
    ctx->pc = 0x3701B4u;
label_3701b4:
    // 0x3701b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3701b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3701b8:
    // 0x3701b8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3701b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3701bc:
    // 0x3701bc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3701bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3701c0:
    // 0x3701c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3701c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3701c4:
    // 0x3701c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3701c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3701c8:
    // 0x3701c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3701c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3701cc:
    // 0x3701cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3701ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3701d0:
    // 0x3701d0: 0x3e00008  jr          $ra
label_3701d4:
    if (ctx->pc == 0x3701D4u) {
        ctx->pc = 0x3701D4u;
            // 0x3701d4: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x3701D8u;
        goto label_3701d8;
    }
    ctx->pc = 0x3701D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3701D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3701D0u;
            // 0x3701d4: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3701D8u;
label_3701d8:
    // 0x3701d8: 0x0  nop
    ctx->pc = 0x3701d8u;
    // NOP
label_3701dc:
    // 0x3701dc: 0x0  nop
    ctx->pc = 0x3701dcu;
    // NOP
label_3701e0:
    // 0x3701e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3701e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3701e4:
    // 0x3701e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3701e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3701e8:
    // 0x3701e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3701e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3701ec:
    // 0x3701ec: 0xc0e3580  jal         func_38D600
label_3701f0:
    if (ctx->pc == 0x3701F0u) {
        ctx->pc = 0x3701F0u;
            // 0x3701f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3701F4u;
        goto label_3701f4;
    }
    ctx->pc = 0x3701ECu;
    SET_GPR_U32(ctx, 31, 0x3701F4u);
    ctx->pc = 0x3701F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3701ECu;
            // 0x3701f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3701F4u; }
        if (ctx->pc != 0x3701F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3701F4u; }
        if (ctx->pc != 0x3701F4u) { return; }
    }
    ctx->pc = 0x3701F4u;
label_3701f4:
    // 0x3701f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3701f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3701f8:
    // 0x3701f8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3701f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3701fc:
    // 0x3701fc: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x3701fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_370200:
    // 0x370200: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x370200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_370204:
    // 0x370204: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x370204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
label_370208:
    // 0x370208: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x370208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_37020c:
    // 0x37020c: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x37020cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
label_370210:
    // 0x370210: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x370210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_370214:
    // 0x370214: 0xae040080  sw          $a0, 0x80($s0)
    ctx->pc = 0x370214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 4));
label_370218:
    // 0x370218: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x370218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37021c:
    // 0x37021c: 0xa20300cc  sb          $v1, 0xCC($s0)
    ctx->pc = 0x37021cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 3));
label_370220:
    // 0x370220: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x370220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_370224:
    // 0x370224: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x370224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_370228:
    // 0x370228: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x370228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_37022c:
    // 0x37022c: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x37022cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_370230:
    // 0x370230: 0x24a55f60  addiu       $a1, $a1, 0x5F60
    ctx->pc = 0x370230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24416));
label_370234:
    // 0x370234: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x370234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_370238:
    // 0x370238: 0x80c6007a  lb          $a2, 0x7A($a2)
    ctx->pc = 0x370238u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 122)));
label_37023c:
    // 0x37023c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x37023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_370240:
    // 0x370240: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x370240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_370244:
    // 0x370244: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x370244u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_370248:
    // 0x370248: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x370248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_37024c:
    // 0x37024c: 0xa2040064  sb          $a0, 0x64($s0)
    ctx->pc = 0x37024cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 4));
label_370250:
    // 0x370250: 0xa2040065  sb          $a0, 0x65($s0)
    ctx->pc = 0x370250u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 4));
label_370254:
    // 0x370254: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x370254u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
label_370258:
    // 0x370258: 0xa2030069  sb          $v1, 0x69($s0)
    ctx->pc = 0x370258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 3));
label_37025c:
    // 0x37025c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37025cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_370260:
    // 0x370260: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x370260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_370264:
    // 0x370264: 0x3e00008  jr          $ra
label_370268:
    if (ctx->pc == 0x370268u) {
        ctx->pc = 0x370268u;
            // 0x370268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x37026Cu;
        goto label_37026c;
    }
    ctx->pc = 0x370264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370264u;
            // 0x370268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37026Cu;
label_37026c:
    // 0x37026c: 0x0  nop
    ctx->pc = 0x37026cu;
    // NOP
label_370270:
    // 0x370270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x370270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_370274:
    // 0x370274: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x370274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_370278:
    // 0x370278: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x370278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37027c:
    // 0x37027c: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x37027cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_370280:
    // 0x370280: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x370280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_370284:
    // 0x370284: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x370284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_370288:
    // 0x370288: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x370288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_37028c:
    // 0x37028c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37028cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_370290:
    // 0x370290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370294:
    // 0x370294: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x370294u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_370298:
    // 0x370298: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x370298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_37029c:
    // 0x37029c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x37029cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3702a0:
    // 0x3702a0: 0xc08bff0  jal         func_22FFC0
label_3702a4:
    if (ctx->pc == 0x3702A4u) {
        ctx->pc = 0x3702A4u;
            // 0x3702a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3702A8u;
        goto label_3702a8;
    }
    ctx->pc = 0x3702A0u;
    SET_GPR_U32(ctx, 31, 0x3702A8u);
    ctx->pc = 0x3702A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3702A0u;
            // 0x3702a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3702A8u; }
        if (ctx->pc != 0x3702A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3702A8u; }
        if (ctx->pc != 0x3702A8u) { return; }
    }
    ctx->pc = 0x3702A8u;
label_3702a8:
    // 0x3702a8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x3702a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3702ac:
    // 0x3702ac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3702acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3702b0:
    // 0x3702b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3702b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3702b4:
    // 0x3702b4: 0xc08914c  jal         func_224530
label_3702b8:
    if (ctx->pc == 0x3702B8u) {
        ctx->pc = 0x3702B8u;
            // 0x3702b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3702BCu;
        goto label_3702bc;
    }
    ctx->pc = 0x3702B4u;
    SET_GPR_U32(ctx, 31, 0x3702BCu);
    ctx->pc = 0x3702B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3702B4u;
            // 0x3702b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3702BCu; }
        if (ctx->pc != 0x3702BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3702BCu; }
        if (ctx->pc != 0x3702BCu) { return; }
    }
    ctx->pc = 0x3702BCu;
label_3702bc:
    // 0x3702bc: 0xc0e393c  jal         func_38E4F0
label_3702c0:
    if (ctx->pc == 0x3702C0u) {
        ctx->pc = 0x3702C0u;
            // 0x3702c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3702C4u;
        goto label_3702c4;
    }
    ctx->pc = 0x3702BCu;
    SET_GPR_U32(ctx, 31, 0x3702C4u);
    ctx->pc = 0x3702C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3702BCu;
            // 0x3702c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3702C4u; }
        if (ctx->pc != 0x3702C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3702C4u; }
        if (ctx->pc != 0x3702C4u) { return; }
    }
    ctx->pc = 0x3702C4u;
label_3702c4:
    // 0x3702c4: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x3702c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3702c8:
    // 0x3702c8: 0x3c0742c8  lui         $a3, 0x42C8
    ctx->pc = 0x3702c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17096 << 16));
label_3702cc:
    // 0x3702cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3702ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3702d0:
    // 0x3702d0: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x3702d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_3702d4:
    // 0x3702d4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x3702d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_3702d8:
    // 0x3702d8: 0xacc70154  sw          $a3, 0x154($a2)
    ctx->pc = 0x3702d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 340), GPR_U32(ctx, 7));
label_3702dc:
    // 0x3702dc: 0xae05008c  sw          $a1, 0x8C($s0)
    ctx->pc = 0x3702dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 5));
label_3702e0:
    // 0x3702e0: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x3702e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
label_3702e4:
    // 0x3702e4: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x3702e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_3702e8:
    // 0x3702e8: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x3702e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_3702ec:
    // 0x3702ec: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x3702ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_3702f0:
    // 0x3702f0: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_3702f4:
    if (ctx->pc == 0x3702F4u) {
        ctx->pc = 0x3702F4u;
            // 0x3702f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3702F8u;
        goto label_3702f8;
    }
    ctx->pc = 0x3702F0u;
    {
        const bool branch_taken_0x3702f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3702f0) {
            ctx->pc = 0x3702F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3702F0u;
            // 0x3702f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x370310u;
            goto label_370310;
        }
    }
    ctx->pc = 0x3702F8u;
label_3702f8:
    // 0x3702f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3702f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3702fc:
    // 0x3702fc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3702fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_370300:
    // 0x370300: 0x320f809  jalr        $t9
label_370304:
    if (ctx->pc == 0x370304u) {
        ctx->pc = 0x370304u;
            // 0x370304: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x370308u;
        goto label_370308;
    }
    ctx->pc = 0x370300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x370308u);
        ctx->pc = 0x370304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370300u;
            // 0x370304: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x370308u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x370308u; }
            if (ctx->pc != 0x370308u) { return; }
        }
        }
    }
    ctx->pc = 0x370308u;
label_370308:
    // 0x370308: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x370308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_37030c:
    // 0x37030c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37030cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_370310:
    // 0x370310: 0xa20300dc  sb          $v1, 0xDC($s0)
    ctx->pc = 0x370310u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 3));
label_370314:
    // 0x370314: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x370314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_370318:
    // 0x370318: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x370318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37031c:
    // 0x37031c: 0x3e00008  jr          $ra
label_370320:
    if (ctx->pc == 0x370320u) {
        ctx->pc = 0x370320u;
            // 0x370320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x370324u;
        goto label_370324;
    }
    ctx->pc = 0x37031Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37031Cu;
            // 0x370320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x370324u;
label_370324:
    // 0x370324: 0x0  nop
    ctx->pc = 0x370324u;
    // NOP
label_370328:
    // 0x370328: 0x0  nop
    ctx->pc = 0x370328u;
    // NOP
label_37032c:
    // 0x37032c: 0x0  nop
    ctx->pc = 0x37032cu;
    // NOP
label_370330:
    // 0x370330: 0x3e00008  jr          $ra
label_370334:
    if (ctx->pc == 0x370334u) {
        ctx->pc = 0x370338u;
        goto label_370338;
    }
    ctx->pc = 0x370330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x370338u;
label_370338:
    // 0x370338: 0x0  nop
    ctx->pc = 0x370338u;
    // NOP
label_37033c:
    // 0x37033c: 0x0  nop
    ctx->pc = 0x37033cu;
    // NOP
label_370340:
    // 0x370340: 0x80b1974  j           func_2C65D0
label_370344:
    if (ctx->pc == 0x370344u) {
        ctx->pc = 0x370344u;
            // 0x370344: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x370348u;
        goto label_370348;
    }
    ctx->pc = 0x370340u;
    ctx->pc = 0x370344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370340u;
            // 0x370344: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C65D0u;
    if (runtime->hasFunction(0x2C65D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C65D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002C65D0_0x2c65d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x370348u;
label_370348:
    // 0x370348: 0x0  nop
    ctx->pc = 0x370348u;
    // NOP
label_37034c:
    // 0x37034c: 0x0  nop
    ctx->pc = 0x37034cu;
    // NOP
label_370350:
    // 0x370350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x370350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_370354:
    // 0x370354: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x370354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_370358:
    // 0x370358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x370358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37035c:
    // 0x37035c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37035cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_370360:
    // 0x370360: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x370360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_370364:
    // 0x370364: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_370368:
    if (ctx->pc == 0x370368u) {
        ctx->pc = 0x370368u;
            // 0x370368: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37036Cu;
        goto label_37036c;
    }
    ctx->pc = 0x370364u;
    {
        const bool branch_taken_0x370364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x370368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370364u;
            // 0x370368: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370364) {
            ctx->pc = 0x3703DCu;
            goto label_3703dc;
        }
    }
    ctx->pc = 0x37036Cu;
label_37036c:
    // 0x37036c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37036cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_370370:
    // 0x370370: 0x24426da0  addiu       $v0, $v0, 0x6DA0
    ctx->pc = 0x370370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28064));
label_370374:
    // 0x370374: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x370374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_370378:
    // 0x370378: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x370378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37037c:
    // 0x37037c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37037cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_370380:
    // 0x370380: 0x320f809  jalr        $t9
label_370384:
    if (ctx->pc == 0x370384u) {
        ctx->pc = 0x370388u;
        goto label_370388;
    }
    ctx->pc = 0x370380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x370388u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x370388u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x370388u; }
            if (ctx->pc != 0x370388u) { return; }
        }
        }
    }
    ctx->pc = 0x370388u;
label_370388:
    // 0x370388: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x370388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_37038c:
    // 0x37038c: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x37038cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_370390:
    // 0x370390: 0x24a50400  addiu       $a1, $a1, 0x400
    ctx->pc = 0x370390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
label_370394:
    // 0x370394: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x370394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_370398:
    // 0x370398: 0xc0407e8  jal         func_101FA0
label_37039c:
    if (ctx->pc == 0x37039Cu) {
        ctx->pc = 0x37039Cu;
            // 0x37039c: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3703A0u;
        goto label_3703a0;
    }
    ctx->pc = 0x370398u;
    SET_GPR_U32(ctx, 31, 0x3703A0u);
    ctx->pc = 0x37039Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370398u;
            // 0x37039c: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3703A0u; }
        if (ctx->pc != 0x3703A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3703A0u; }
        if (ctx->pc != 0x3703A0u) { return; }
    }
    ctx->pc = 0x3703A0u;
label_3703a0:
    // 0x3703a0: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_3703a4:
    if (ctx->pc == 0x3703A4u) {
        ctx->pc = 0x3703A4u;
            // 0x3703a4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3703A8u;
        goto label_3703a8;
    }
    ctx->pc = 0x3703A0u;
    {
        const bool branch_taken_0x3703a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3703a0) {
            ctx->pc = 0x3703A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3703A0u;
            // 0x3703a4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3703C8u;
            goto label_3703c8;
        }
    }
    ctx->pc = 0x3703A8u;
label_3703a8:
    // 0x3703a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3703a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3703ac:
    // 0x3703ac: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x3703acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_3703b0:
    // 0x3703b0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3703b4:
    if (ctx->pc == 0x3703B4u) {
        ctx->pc = 0x3703B4u;
            // 0x3703b4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3703B8u;
        goto label_3703b8;
    }
    ctx->pc = 0x3703B0u;
    {
        const bool branch_taken_0x3703b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3703B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3703B0u;
            // 0x3703b4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3703b0) {
            ctx->pc = 0x3703C4u;
            goto label_3703c4;
        }
    }
    ctx->pc = 0x3703B8u;
label_3703b8:
    // 0x3703b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3703b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3703bc:
    // 0x3703bc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3703bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_3703c0:
    // 0x3703c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3703c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3703c4:
    // 0x3703c4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3703c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3703c8:
    // 0x3703c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3703c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3703cc:
    // 0x3703cc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3703d0:
    if (ctx->pc == 0x3703D0u) {
        ctx->pc = 0x3703D0u;
            // 0x3703d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3703D4u;
        goto label_3703d4;
    }
    ctx->pc = 0x3703CCu;
    {
        const bool branch_taken_0x3703cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3703cc) {
            ctx->pc = 0x3703D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3703CCu;
            // 0x3703d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3703E0u;
            goto label_3703e0;
        }
    }
    ctx->pc = 0x3703D4u;
label_3703d4:
    // 0x3703d4: 0xc0400a8  jal         func_1002A0
label_3703d8:
    if (ctx->pc == 0x3703D8u) {
        ctx->pc = 0x3703D8u;
            // 0x3703d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3703DCu;
        goto label_3703dc;
    }
    ctx->pc = 0x3703D4u;
    SET_GPR_U32(ctx, 31, 0x3703DCu);
    ctx->pc = 0x3703D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3703D4u;
            // 0x3703d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3703DCu; }
        if (ctx->pc != 0x3703DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3703DCu; }
        if (ctx->pc != 0x3703DCu) { return; }
    }
    ctx->pc = 0x3703DCu;
label_3703dc:
    // 0x3703dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3703dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3703e0:
    // 0x3703e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3703e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3703e4:
    // 0x3703e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3703e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3703e8:
    // 0x3703e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3703e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3703ec:
    // 0x3703ec: 0x3e00008  jr          $ra
label_3703f0:
    if (ctx->pc == 0x3703F0u) {
        ctx->pc = 0x3703F0u;
            // 0x3703f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3703F4u;
        goto label_3703f4;
    }
    ctx->pc = 0x3703ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3703F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3703ECu;
            // 0x3703f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3703F4u;
label_3703f4:
    // 0x3703f4: 0x0  nop
    ctx->pc = 0x3703f4u;
    // NOP
label_3703f8:
    // 0x3703f8: 0x0  nop
    ctx->pc = 0x3703f8u;
    // NOP
label_3703fc:
    // 0x3703fc: 0x0  nop
    ctx->pc = 0x3703fcu;
    // NOP
label_370400:
    // 0x370400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x370400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_370404:
    // 0x370404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x370404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_370408:
    // 0x370408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x370408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37040c:
    // 0x37040c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37040cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_370410:
    // 0x370410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x370410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_370414:
    // 0x370414: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_370418:
    if (ctx->pc == 0x370418u) {
        ctx->pc = 0x370418u;
            // 0x370418: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37041Cu;
        goto label_37041c;
    }
    ctx->pc = 0x370414u;
    {
        const bool branch_taken_0x370414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x370418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370414u;
            // 0x370418: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370414) {
            ctx->pc = 0x3704C8u;
            goto label_3704c8;
        }
    }
    ctx->pc = 0x37041Cu;
label_37041c:
    // 0x37041c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37041cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_370420:
    // 0x370420: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x370420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_370424:
    // 0x370424: 0x24636e90  addiu       $v1, $v1, 0x6E90
    ctx->pc = 0x370424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28304));
label_370428:
    // 0x370428: 0x24426ed0  addiu       $v0, $v0, 0x6ED0
    ctx->pc = 0x370428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28368));
label_37042c:
    // 0x37042c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37042cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_370430:
    // 0x370430: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_370434:
    if (ctx->pc == 0x370434u) {
        ctx->pc = 0x370434u;
            // 0x370434: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x370438u;
        goto label_370438;
    }
    ctx->pc = 0x370430u;
    {
        const bool branch_taken_0x370430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x370434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370430u;
            // 0x370434: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370430) {
            ctx->pc = 0x3704B0u;
            goto label_3704b0;
        }
    }
    ctx->pc = 0x370438u;
label_370438:
    // 0x370438: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x370438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37043c:
    // 0x37043c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37043cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_370440:
    // 0x370440: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x370440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_370444:
    // 0x370444: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x370444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_370448:
    // 0x370448: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x370448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_37044c:
    // 0x37044c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x37044cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_370450:
    // 0x370450: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x370450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_370454:
    // 0x370454: 0xc0aecc4  jal         func_2BB310
label_370458:
    if (ctx->pc == 0x370458u) {
        ctx->pc = 0x370458u;
            // 0x370458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37045Cu;
        goto label_37045c;
    }
    ctx->pc = 0x370454u;
    SET_GPR_U32(ctx, 31, 0x37045Cu);
    ctx->pc = 0x370458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370454u;
            // 0x370458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37045Cu; }
        if (ctx->pc != 0x37045Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37045Cu; }
        if (ctx->pc != 0x37045Cu) { return; }
    }
    ctx->pc = 0x37045Cu;
label_37045c:
    // 0x37045c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x37045cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_370460:
    // 0x370460: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x370460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_370464:
    // 0x370464: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_370468:
    if (ctx->pc == 0x370468u) {
        ctx->pc = 0x370468u;
            // 0x370468: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x37046Cu;
        goto label_37046c;
    }
    ctx->pc = 0x370464u;
    {
        const bool branch_taken_0x370464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x370464) {
            ctx->pc = 0x370468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x370464u;
            // 0x370468: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x370480u;
            goto label_370480;
        }
    }
    ctx->pc = 0x37046Cu;
label_37046c:
    // 0x37046c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x37046cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_370470:
    // 0x370470: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x370470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_370474:
    // 0x370474: 0x320f809  jalr        $t9
label_370478:
    if (ctx->pc == 0x370478u) {
        ctx->pc = 0x370478u;
            // 0x370478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37047Cu;
        goto label_37047c;
    }
    ctx->pc = 0x370474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37047Cu);
        ctx->pc = 0x370478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370474u;
            // 0x370478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37047Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37047Cu; }
            if (ctx->pc != 0x37047Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37047Cu;
label_37047c:
    // 0x37047c: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x37047cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_370480:
    // 0x370480: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x370480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_370484:
    // 0x370484: 0xc0aec9c  jal         func_2BB270
label_370488:
    if (ctx->pc == 0x370488u) {
        ctx->pc = 0x370488u;
            // 0x370488: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x37048Cu;
        goto label_37048c;
    }
    ctx->pc = 0x370484u;
    SET_GPR_U32(ctx, 31, 0x37048Cu);
    ctx->pc = 0x370488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370484u;
            // 0x370488: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37048Cu; }
        if (ctx->pc != 0x37048Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37048Cu; }
        if (ctx->pc != 0x37048Cu) { return; }
    }
    ctx->pc = 0x37048Cu;
label_37048c:
    // 0x37048c: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x37048cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_370490:
    // 0x370490: 0xc0aec88  jal         func_2BB220
label_370494:
    if (ctx->pc == 0x370494u) {
        ctx->pc = 0x370494u;
            // 0x370494: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x370498u;
        goto label_370498;
    }
    ctx->pc = 0x370490u;
    SET_GPR_U32(ctx, 31, 0x370498u);
    ctx->pc = 0x370494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370490u;
            // 0x370494: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370498u; }
        if (ctx->pc != 0x370498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370498u; }
        if (ctx->pc != 0x370498u) { return; }
    }
    ctx->pc = 0x370498u;
label_370498:
    // 0x370498: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x370498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_37049c:
    // 0x37049c: 0xc0aec0c  jal         func_2BB030
label_3704a0:
    if (ctx->pc == 0x3704A0u) {
        ctx->pc = 0x3704A0u;
            // 0x3704a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3704A4u;
        goto label_3704a4;
    }
    ctx->pc = 0x37049Cu;
    SET_GPR_U32(ctx, 31, 0x3704A4u);
    ctx->pc = 0x3704A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37049Cu;
            // 0x3704a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3704A4u; }
        if (ctx->pc != 0x3704A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3704A4u; }
        if (ctx->pc != 0x3704A4u) { return; }
    }
    ctx->pc = 0x3704A4u;
label_3704a4:
    // 0x3704a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3704a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3704a8:
    // 0x3704a8: 0xc0aeaa8  jal         func_2BAAA0
label_3704ac:
    if (ctx->pc == 0x3704ACu) {
        ctx->pc = 0x3704ACu;
            // 0x3704ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3704B0u;
        goto label_3704b0;
    }
    ctx->pc = 0x3704A8u;
    SET_GPR_U32(ctx, 31, 0x3704B0u);
    ctx->pc = 0x3704ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3704A8u;
            // 0x3704ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3704B0u; }
        if (ctx->pc != 0x3704B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3704B0u; }
        if (ctx->pc != 0x3704B0u) { return; }
    }
    ctx->pc = 0x3704B0u;
label_3704b0:
    // 0x3704b0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3704b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3704b4:
    // 0x3704b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3704b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3704b8:
    // 0x3704b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3704bc:
    if (ctx->pc == 0x3704BCu) {
        ctx->pc = 0x3704BCu;
            // 0x3704bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3704C0u;
        goto label_3704c0;
    }
    ctx->pc = 0x3704B8u;
    {
        const bool branch_taken_0x3704b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3704b8) {
            ctx->pc = 0x3704BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3704B8u;
            // 0x3704bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3704CCu;
            goto label_3704cc;
        }
    }
    ctx->pc = 0x3704C0u;
label_3704c0:
    // 0x3704c0: 0xc0400a8  jal         func_1002A0
label_3704c4:
    if (ctx->pc == 0x3704C4u) {
        ctx->pc = 0x3704C4u;
            // 0x3704c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3704C8u;
        goto label_3704c8;
    }
    ctx->pc = 0x3704C0u;
    SET_GPR_U32(ctx, 31, 0x3704C8u);
    ctx->pc = 0x3704C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3704C0u;
            // 0x3704c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3704C8u; }
        if (ctx->pc != 0x3704C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3704C8u; }
        if (ctx->pc != 0x3704C8u) { return; }
    }
    ctx->pc = 0x3704C8u;
label_3704c8:
    // 0x3704c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3704c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3704cc:
    // 0x3704cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3704ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3704d0:
    // 0x3704d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3704d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3704d4:
    // 0x3704d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3704d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3704d8:
    // 0x3704d8: 0x3e00008  jr          $ra
label_3704dc:
    if (ctx->pc == 0x3704DCu) {
        ctx->pc = 0x3704DCu;
            // 0x3704dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3704E0u;
        goto label_3704e0;
    }
    ctx->pc = 0x3704D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3704DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3704D8u;
            // 0x3704dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3704E0u;
label_3704e0:
    // 0x3704e0: 0x3e00008  jr          $ra
label_3704e4:
    if (ctx->pc == 0x3704E4u) {
        ctx->pc = 0x3704E4u;
            // 0x3704e4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3704E8u;
        goto label_3704e8;
    }
    ctx->pc = 0x3704E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3704E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3704E0u;
            // 0x3704e4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3704E8u;
label_3704e8:
    // 0x3704e8: 0x0  nop
    ctx->pc = 0x3704e8u;
    // NOP
label_3704ec:
    // 0x3704ec: 0x0  nop
    ctx->pc = 0x3704ecu;
    // NOP
label_3704f0:
    // 0x3704f0: 0x3e00008  jr          $ra
label_3704f4:
    if (ctx->pc == 0x3704F4u) {
        ctx->pc = 0x3704F4u;
            // 0x3704f4: 0x240232c8  addiu       $v0, $zero, 0x32C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13000));
        ctx->pc = 0x3704F8u;
        goto label_3704f8;
    }
    ctx->pc = 0x3704F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3704F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3704F0u;
            // 0x3704f4: 0x240232c8  addiu       $v0, $zero, 0x32C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3704F8u;
label_3704f8:
    // 0x3704f8: 0x0  nop
    ctx->pc = 0x3704f8u;
    // NOP
label_3704fc:
    // 0x3704fc: 0x0  nop
    ctx->pc = 0x3704fcu;
    // NOP
label_370500:
    // 0x370500: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x370500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_370504:
    // 0x370504: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x370504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_370508:
    // 0x370508: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x370508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_37050c:
    // 0x37050c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x37050cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_370510:
    // 0x370510: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x370510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_370514:
    // 0x370514: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x370514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_370518:
    // 0x370518: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x370518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_37051c:
    // 0x37051c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x37051cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_370520:
    // 0x370520: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x370520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_370524:
    // 0x370524: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x370524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_370528:
    // 0x370528: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x370528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_37052c:
    // 0x37052c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37052cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_370530:
    // 0x370530: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x370530u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_370534:
    // 0x370534: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x370534u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_370538:
    // 0x370538: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_37053c:
    if (ctx->pc == 0x37053Cu) {
        ctx->pc = 0x37053Cu;
            // 0x37053c: 0xafa400fc  sw          $a0, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
        ctx->pc = 0x370540u;
        goto label_370540;
    }
    ctx->pc = 0x370538u;
    {
        const bool branch_taken_0x370538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x37053Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370538u;
            // 0x37053c: 0xafa400fc  sw          $a0, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370538) {
            ctx->pc = 0x370588u;
            goto label_370588;
        }
    }
    ctx->pc = 0x370540u;
label_370540:
    // 0x370540: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x370540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_370544:
    // 0x370544: 0x50a30119  beql        $a1, $v1, . + 4 + (0x119 << 2)
label_370548:
    if (ctx->pc == 0x370548u) {
        ctx->pc = 0x370548u;
            // 0x370548: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x37054Cu;
        goto label_37054c;
    }
    ctx->pc = 0x370544u;
    {
        const bool branch_taken_0x370544 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x370544) {
            ctx->pc = 0x370548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x370544u;
            // 0x370548: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3709ACu;
            goto label_3709ac;
        }
    }
    ctx->pc = 0x37054Cu;
label_37054c:
    // 0x37054c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37054cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_370550:
    // 0x370550: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_370554:
    if (ctx->pc == 0x370554u) {
        ctx->pc = 0x370558u;
        goto label_370558;
    }
    ctx->pc = 0x370550u;
    {
        const bool branch_taken_0x370550 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x370550) {
            ctx->pc = 0x370560u;
            goto label_370560;
        }
    }
    ctx->pc = 0x370558u;
label_370558:
    // 0x370558: 0x10000113  b           . + 4 + (0x113 << 2)
label_37055c:
    if (ctx->pc == 0x37055Cu) {
        ctx->pc = 0x370560u;
        goto label_370560;
    }
    ctx->pc = 0x370558u;
    {
        const bool branch_taken_0x370558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370558) {
            ctx->pc = 0x3709A8u;
            goto label_3709a8;
        }
    }
    ctx->pc = 0x370560u;
label_370560:
    // 0x370560: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x370560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_370564:
    // 0x370564: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x370564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_370568:
    // 0x370568: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x370568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_37056c:
    // 0x37056c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x37056cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_370570:
    // 0x370570: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x370570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_370574:
    // 0x370574: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x370574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_370578:
    // 0x370578: 0x320f809  jalr        $t9
label_37057c:
    if (ctx->pc == 0x37057Cu) {
        ctx->pc = 0x37057Cu;
            // 0x37057c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x370580u;
        goto label_370580;
    }
    ctx->pc = 0x370578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x370580u);
        ctx->pc = 0x37057Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370578u;
            // 0x37057c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x370580u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x370580u; }
            if (ctx->pc != 0x370580u) { return; }
        }
        }
    }
    ctx->pc = 0x370580u;
label_370580:
    // 0x370580: 0x10000109  b           . + 4 + (0x109 << 2)
label_370584:
    if (ctx->pc == 0x370584u) {
        ctx->pc = 0x370588u;
        goto label_370588;
    }
    ctx->pc = 0x370580u;
    {
        const bool branch_taken_0x370580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370580) {
            ctx->pc = 0x3709A8u;
            goto label_3709a8;
        }
    }
    ctx->pc = 0x370588u;
label_370588:
    // 0x370588: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x370588u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37058c:
    // 0x37058c: 0x8c7e0070  lw          $fp, 0x70($v1)
    ctx->pc = 0x37058cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_370590:
    // 0x370590: 0x13c00105  beqz        $fp, . + 4 + (0x105 << 2)
label_370594:
    if (ctx->pc == 0x370594u) {
        ctx->pc = 0x370598u;
        goto label_370598;
    }
    ctx->pc = 0x370590u;
    {
        const bool branch_taken_0x370590 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x370590) {
            ctx->pc = 0x3709A8u;
            goto label_3709a8;
        }
    }
    ctx->pc = 0x370598u;
label_370598:
    // 0x370598: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x370598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37059c:
    // 0x37059c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x37059cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3705a0:
    // 0x3705a0: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x3705a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_3705a4:
    // 0x3705a4: 0x8c66d130  lw          $a2, -0x2ED0($v1)
    ctx->pc = 0x3705a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3705a8:
    // 0x3705a8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3705a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3705ac:
    // 0x3705ac: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3705acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3705b0:
    // 0x3705b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3705b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3705b4:
    // 0x3705b4: 0x8c45d120  lw          $a1, -0x2EE0($v0)
    ctx->pc = 0x3705b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3705b8:
    // 0x3705b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3705b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3705bc:
    // 0x3705bc: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x3705bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3705c0:
    // 0x3705c0: 0x24570084  addiu       $s7, $v0, 0x84
    ctx->pc = 0x3705c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
label_3705c4:
    // 0x3705c4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3705c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3705c8:
    // 0x3705c8: 0x8c62e370  lw          $v0, -0x1C90($v1)
    ctx->pc = 0x3705c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_3705cc:
    // 0x3705cc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3705ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3705d0:
    // 0x3705d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3705d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3705d4:
    // 0x3705d4: 0x8cc20130  lw          $v0, 0x130($a2)
    ctx->pc = 0x3705d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_3705d8:
    // 0x3705d8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3705d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_3705dc:
    // 0x3705dc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3705dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3705e0:
    // 0x3705e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3705e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3705e4:
    // 0x3705e4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3705e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3705e8:
    // 0x3705e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3705e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3705ec:
    // 0x3705ec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3705ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3705f0:
    // 0x3705f0: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x3705f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_3705f4:
    // 0x3705f4: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x3705f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_3705f8:
    // 0x3705f8: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3705f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3705fc:
    // 0x3705fc: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x3705fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_370600:
    // 0x370600: 0x8c450118  lw          $a1, 0x118($v0)
    ctx->pc = 0x370600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
label_370604:
    // 0x370604: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x370604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_370608:
    // 0x370608: 0x8c441a98  lw          $a0, 0x1A98($v0)
    ctx->pc = 0x370608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6808)));
label_37060c:
    // 0x37060c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x37060cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_370610:
    // 0x370610: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x370610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_370614:
    // 0x370614: 0x802027  not         $a0, $a0
    ctx->pc = 0x370614u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_370618:
    // 0x370618: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x370618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_37061c:
    // 0x37061c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x37061cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_370620:
    // 0x370620: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
label_370624:
    if (ctx->pc == 0x370624u) {
        ctx->pc = 0x370624u;
            // 0x370624: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->pc = 0x370628u;
        goto label_370628;
    }
    ctx->pc = 0x370620u;
    {
        const bool branch_taken_0x370620 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x370624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370620u;
            // 0x370624: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370620) {
            ctx->pc = 0x370608u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_370608;
        }
    }
    ctx->pc = 0x370628u;
label_370628:
    // 0x370628: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x370628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37062c:
    // 0x37062c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x37062cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370630:
    // 0x370630: 0xc4544e78  lwc1        $f20, 0x4E78($v0)
    ctx->pc = 0x370630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_370634:
    // 0x370634: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x370634u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370638:
    // 0x370638: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x370638u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_37063c:
    // 0x37063c: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x37063cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
label_370640:
    // 0x370640: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x370640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_370644:
    // 0x370644: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x370644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_370648:
    // 0x370648: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x370648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_37064c:
    // 0x37064c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x37064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_370650:
    // 0x370650: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x370650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_370654:
    // 0x370654: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x370654u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_370658:
    // 0x370658: 0xc0dc2a4  jal         func_370A90
label_37065c:
    if (ctx->pc == 0x37065Cu) {
        ctx->pc = 0x37065Cu;
            // 0x37065c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370660u;
        goto label_370660;
    }
    ctx->pc = 0x370658u;
    SET_GPR_U32(ctx, 31, 0x370660u);
    ctx->pc = 0x37065Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370658u;
            // 0x37065c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370A90u;
    if (runtime->hasFunction(0x370A90u)) {
        auto targetFn = runtime->lookupFunction(0x370A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370660u; }
        if (ctx->pc != 0x370660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370A90_0x370a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370660u; }
        if (ctx->pc != 0x370660u) { return; }
    }
    ctx->pc = 0x370660u;
label_370660:
    // 0x370660: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x370660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_370664:
    // 0x370664: 0x14430042  bne         $v0, $v1, . + 4 + (0x42 << 2)
label_370668:
    if (ctx->pc == 0x370668u) {
        ctx->pc = 0x37066Cu;
        goto label_37066c;
    }
    ctx->pc = 0x370664u;
    {
        const bool branch_taken_0x370664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x370664) {
            ctx->pc = 0x370770u;
            goto label_370770;
        }
    }
    ctx->pc = 0x37066Cu;
label_37066c:
    // 0x37066c: 0xc0d1c14  jal         func_347050
label_370670:
    if (ctx->pc == 0x370670u) {
        ctx->pc = 0x370670u;
            // 0x370670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370674u;
        goto label_370674;
    }
    ctx->pc = 0x37066Cu;
    SET_GPR_U32(ctx, 31, 0x370674u);
    ctx->pc = 0x370670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37066Cu;
            // 0x370670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370674u; }
        if (ctx->pc != 0x370674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370674u; }
        if (ctx->pc != 0x370674u) { return; }
    }
    ctx->pc = 0x370674u;
label_370674:
    // 0x370674: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x370674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_370678:
    // 0x370678: 0xc04f278  jal         func_13C9E0
label_37067c:
    if (ctx->pc == 0x37067Cu) {
        ctx->pc = 0x37067Cu;
            // 0x37067c: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x370680u;
        goto label_370680;
    }
    ctx->pc = 0x370678u;
    SET_GPR_U32(ctx, 31, 0x370680u);
    ctx->pc = 0x37067Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370678u;
            // 0x37067c: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370680u; }
        if (ctx->pc != 0x370680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370680u; }
        if (ctx->pc != 0x370680u) { return; }
    }
    ctx->pc = 0x370680u;
label_370680:
    // 0x370680: 0xc0d1c10  jal         func_347040
label_370684:
    if (ctx->pc == 0x370684u) {
        ctx->pc = 0x370684u;
            // 0x370684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370688u;
        goto label_370688;
    }
    ctx->pc = 0x370680u;
    SET_GPR_U32(ctx, 31, 0x370688u);
    ctx->pc = 0x370684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370680u;
            // 0x370684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370688u; }
        if (ctx->pc != 0x370688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370688u; }
        if (ctx->pc != 0x370688u) { return; }
    }
    ctx->pc = 0x370688u;
label_370688:
    // 0x370688: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x370688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37068c:
    // 0x37068c: 0xc04ce80  jal         func_133A00
label_370690:
    if (ctx->pc == 0x370690u) {
        ctx->pc = 0x370690u;
            // 0x370690: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x370694u;
        goto label_370694;
    }
    ctx->pc = 0x37068Cu;
    SET_GPR_U32(ctx, 31, 0x370694u);
    ctx->pc = 0x370690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37068Cu;
            // 0x370690: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370694u; }
        if (ctx->pc != 0x370694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370694u; }
        if (ctx->pc != 0x370694u) { return; }
    }
    ctx->pc = 0x370694u;
label_370694:
    // 0x370694: 0xc0d4108  jal         func_350420
label_370698:
    if (ctx->pc == 0x370698u) {
        ctx->pc = 0x37069Cu;
        goto label_37069c;
    }
    ctx->pc = 0x370694u;
    SET_GPR_U32(ctx, 31, 0x37069Cu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37069Cu; }
        if (ctx->pc != 0x37069Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37069Cu; }
        if (ctx->pc != 0x37069Cu) { return; }
    }
    ctx->pc = 0x37069Cu;
label_37069c:
    // 0x37069c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37069cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3706a0:
    // 0x3706a0: 0xc0d4104  jal         func_350410
label_3706a4:
    if (ctx->pc == 0x3706A4u) {
        ctx->pc = 0x3706A4u;
            // 0x3706a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3706A8u;
        goto label_3706a8;
    }
    ctx->pc = 0x3706A0u;
    SET_GPR_U32(ctx, 31, 0x3706A8u);
    ctx->pc = 0x3706A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3706A0u;
            // 0x3706a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3706A8u; }
        if (ctx->pc != 0x3706A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3706A8u; }
        if (ctx->pc != 0x3706A8u) { return; }
    }
    ctx->pc = 0x3706A8u;
label_3706a8:
    // 0x3706a8: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x3706a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3706ac:
    // 0x3706ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3706acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3706b0:
    // 0x3706b0: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x3706b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3706b4:
    // 0x3706b4: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x3706b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_3706b8:
    // 0x3706b8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3706b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3706bc:
    // 0x3706bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3706bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3706c0:
    // 0x3706c0: 0xc0d40ac  jal         func_3502B0
label_3706c4:
    if (ctx->pc == 0x3706C4u) {
        ctx->pc = 0x3706C4u;
            // 0x3706c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3706C8u;
        goto label_3706c8;
    }
    ctx->pc = 0x3706C0u;
    SET_GPR_U32(ctx, 31, 0x3706C8u);
    ctx->pc = 0x3706C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3706C0u;
            // 0x3706c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3706C8u; }
        if (ctx->pc != 0x3706C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3706C8u; }
        if (ctx->pc != 0x3706C8u) { return; }
    }
    ctx->pc = 0x3706C8u;
label_3706c8:
    // 0x3706c8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3706c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3706cc:
    // 0x3706cc: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_3706d0:
    if (ctx->pc == 0x3706D0u) {
        ctx->pc = 0x3706D0u;
            // 0x3706d0: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x3706D4u;
        goto label_3706d4;
    }
    ctx->pc = 0x3706CCu;
    {
        const bool branch_taken_0x3706cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3706D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3706CCu;
            // 0x3706d0: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3706cc) {
            ctx->pc = 0x370770u;
            goto label_370770;
        }
    }
    ctx->pc = 0x3706D4u;
label_3706d4:
    // 0x3706d4: 0x8ef40000  lw          $s4, 0x0($s7)
    ctx->pc = 0x3706d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3706d8:
    // 0x3706d8: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x3706d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3706dc:
    // 0x3706dc: 0x27a601dc  addiu       $a2, $sp, 0x1DC
    ctx->pc = 0x3706dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
label_3706e0:
    // 0x3706e0: 0xc0dc27c  jal         func_3709F0
label_3706e4:
    if (ctx->pc == 0x3706E4u) {
        ctx->pc = 0x3706E4u;
            // 0x3706e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3706E8u;
        goto label_3706e8;
    }
    ctx->pc = 0x3706E0u;
    SET_GPR_U32(ctx, 31, 0x3706E8u);
    ctx->pc = 0x3706E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3706E0u;
            // 0x3706e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3709F0u;
    if (runtime->hasFunction(0x3709F0u)) {
        auto targetFn = runtime->lookupFunction(0x3709F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3706E8u; }
        if (ctx->pc != 0x3706E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003709F0_0x3709f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3706E8u; }
        if (ctx->pc != 0x3706E8u) { return; }
    }
    ctx->pc = 0x3706E8u;
label_3706e8:
    // 0x3706e8: 0x8fa401dc  lw          $a0, 0x1DC($sp)
    ctx->pc = 0x3706e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_3706ec:
    // 0x3706ec: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x3706ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_3706f0:
    // 0x3706f0: 0xc04e4a4  jal         func_139290
label_3706f4:
    if (ctx->pc == 0x3706F4u) {
        ctx->pc = 0x3706F4u;
            // 0x3706f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3706F8u;
        goto label_3706f8;
    }
    ctx->pc = 0x3706F0u;
    SET_GPR_U32(ctx, 31, 0x3706F8u);
    ctx->pc = 0x3706F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3706F0u;
            // 0x3706f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3706F8u; }
        if (ctx->pc != 0x3706F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3706F8u; }
        if (ctx->pc != 0x3706F8u) { return; }
    }
    ctx->pc = 0x3706F8u;
label_3706f8:
    // 0x3706f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3706f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3706fc:
    // 0x3706fc: 0x26320080  addiu       $s2, $s1, 0x80
    ctx->pc = 0x3706fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_370700:
    // 0x370700: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x370700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370704:
    // 0x370704: 0x0  nop
    ctx->pc = 0x370704u;
    // NOP
label_370708:
    // 0x370708: 0xc0dc278  jal         func_3709E0
label_37070c:
    if (ctx->pc == 0x37070Cu) {
        ctx->pc = 0x37070Cu;
            // 0x37070c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370710u;
        goto label_370710;
    }
    ctx->pc = 0x370708u;
    SET_GPR_U32(ctx, 31, 0x370710u);
    ctx->pc = 0x37070Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370708u;
            // 0x37070c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3709E0u;
    if (runtime->hasFunction(0x3709E0u)) {
        auto targetFn = runtime->lookupFunction(0x3709E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370710u; }
        if (ctx->pc != 0x370710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003709E0_0x3709e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370710u; }
        if (ctx->pc != 0x370710u) { return; }
    }
    ctx->pc = 0x370710u;
label_370710:
    // 0x370710: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x370710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_370714:
    // 0x370714: 0x2202a  slt         $a0, $zero, $v0
    ctx->pc = 0x370714u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_370718:
    // 0x370718: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x370718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_37071c:
    // 0x37071c: 0x265200f0  addiu       $s2, $s2, 0xF0
    ctx->pc = 0x37071cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_370720:
    // 0x370720: 0x2e62000c  sltiu       $v0, $s3, 0xC
    ctx->pc = 0x370720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_370724:
    // 0x370724: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x370724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_370728:
    // 0x370728: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x370728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_37072c:
    // 0x37072c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_370730:
    if (ctx->pc == 0x370730u) {
        ctx->pc = 0x370730u;
            // 0x370730: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x370734u;
        goto label_370734;
    }
    ctx->pc = 0x37072Cu;
    {
        const bool branch_taken_0x37072c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37072Cu;
            // 0x370730: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37072c) {
            ctx->pc = 0x370708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_370708;
        }
    }
    ctx->pc = 0x370734u;
label_370734:
    // 0x370734: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x370734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_370738:
    // 0x370738: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x370738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_37073c:
    // 0x37073c: 0xc04cd60  jal         func_133580
label_370740:
    if (ctx->pc == 0x370740u) {
        ctx->pc = 0x370740u;
            // 0x370740: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x370744u;
        goto label_370744;
    }
    ctx->pc = 0x37073Cu;
    SET_GPR_U32(ctx, 31, 0x370744u);
    ctx->pc = 0x370740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37073Cu;
            // 0x370740: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370744u; }
        if (ctx->pc != 0x370744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370744u; }
        if (ctx->pc != 0x370744u) { return; }
    }
    ctx->pc = 0x370744u;
label_370744:
    // 0x370744: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x370744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_370748:
    // 0x370748: 0xc62c0058  lwc1        $f12, 0x58($s1)
    ctx->pc = 0x370748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_37074c:
    // 0x37074c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x37074cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_370750:
    // 0x370750: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x370750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_370754:
    // 0x370754: 0x8ee70008  lw          $a3, 0x8($s7)
    ctx->pc = 0x370754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_370758:
    // 0x370758: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x370758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_37075c:
    // 0x37075c: 0x27a80100  addiu       $t0, $sp, 0x100
    ctx->pc = 0x37075cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_370760:
    // 0x370760: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x370760u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_370764:
    // 0x370764: 0xc04cff4  jal         func_133FD0
label_370768:
    if (ctx->pc == 0x370768u) {
        ctx->pc = 0x370768u;
            // 0x370768: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37076Cu;
        goto label_37076c;
    }
    ctx->pc = 0x370764u;
    SET_GPR_U32(ctx, 31, 0x37076Cu);
    ctx->pc = 0x370768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370764u;
            // 0x370768: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37076Cu; }
        if (ctx->pc != 0x37076Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37076Cu; }
        if (ctx->pc != 0x37076Cu) { return; }
    }
    ctx->pc = 0x37076Cu;
label_37076c:
    // 0x37076c: 0x0  nop
    ctx->pc = 0x37076cu;
    // NOP
label_370770:
    // 0x370770: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x370770u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_370774:
    // 0x370774: 0x2be182b  sltu        $v1, $s5, $fp
    ctx->pc = 0x370774u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_370778:
    // 0x370778: 0x1460ffaf  bnez        $v1, . + 4 + (-0x51 << 2)
label_37077c:
    if (ctx->pc == 0x37077Cu) {
        ctx->pc = 0x37077Cu;
            // 0x37077c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x370780u;
        goto label_370780;
    }
    ctx->pc = 0x370778u;
    {
        const bool branch_taken_0x370778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37077Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370778u;
            // 0x37077c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370778) {
            ctx->pc = 0x370638u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_370638;
        }
    }
    ctx->pc = 0x370780u;
label_370780:
    // 0x370780: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x370780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_370784:
    // 0x370784: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x370784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_370788:
    // 0x370788: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_37078c:
    if (ctx->pc == 0x37078Cu) {
        ctx->pc = 0x370790u;
        goto label_370790;
    }
    ctx->pc = 0x370788u;
    {
        const bool branch_taken_0x370788 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x370788) {
            ctx->pc = 0x3707C0u;
            goto label_3707c0;
        }
    }
    ctx->pc = 0x370790u;
label_370790:
    // 0x370790: 0xc04e738  jal         func_139CE0
label_370794:
    if (ctx->pc == 0x370794u) {
        ctx->pc = 0x370794u;
            // 0x370794: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->pc = 0x370798u;
        goto label_370798;
    }
    ctx->pc = 0x370790u;
    SET_GPR_U32(ctx, 31, 0x370798u);
    ctx->pc = 0x370794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370790u;
            // 0x370794: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370798u; }
        if (ctx->pc != 0x370798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370798u; }
        if (ctx->pc != 0x370798u) { return; }
    }
    ctx->pc = 0x370798u;
label_370798:
    // 0x370798: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x370798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37079c:
    // 0x37079c: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x37079cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3707a0:
    // 0x3707a0: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x3707a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_3707a4:
    // 0x3707a4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3707a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3707a8:
    // 0x3707a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3707a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3707ac:
    // 0x3707ac: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x3707acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_3707b0:
    // 0x3707b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3707b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3707b4:
    // 0x3707b4: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x3707b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_3707b8:
    // 0x3707b8: 0xc055990  jal         func_156640
label_3707bc:
    if (ctx->pc == 0x3707BCu) {
        ctx->pc = 0x3707BCu;
            // 0x3707bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3707C0u;
        goto label_3707c0;
    }
    ctx->pc = 0x3707B8u;
    SET_GPR_U32(ctx, 31, 0x3707C0u);
    ctx->pc = 0x3707BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3707B8u;
            // 0x3707bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3707C0u; }
        if (ctx->pc != 0x3707C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3707C0u; }
        if (ctx->pc != 0x3707C0u) { return; }
    }
    ctx->pc = 0x3707C0u;
label_3707c0:
    // 0x3707c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3707c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3707c4:
    // 0x3707c4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3707c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3707c8:
    // 0x3707c8: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x3707c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_3707cc:
    // 0x3707cc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3707ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3707d0:
    // 0x3707d0: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x3707d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3707d4:
    // 0x3707d4: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x3707d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_3707d8:
    // 0x3707d8: 0x8c670118  lw          $a3, 0x118($v1)
    ctx->pc = 0x3707d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_3707dc:
    // 0x3707dc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3707dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3707e0:
    // 0x3707e0: 0x8c651aa0  lw          $a1, 0x1AA0($v1)
    ctx->pc = 0x3707e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6816)));
label_3707e4:
    // 0x3707e4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3707e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3707e8:
    // 0x3707e8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x3707e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3707ec:
    // 0x3707ec: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3707ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_3707f0:
    // 0x3707f0: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x3707f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_3707f4:
    // 0x3707f4: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
label_3707f8:
    if (ctx->pc == 0x3707F8u) {
        ctx->pc = 0x3707F8u;
            // 0x3707f8: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->pc = 0x3707FCu;
        goto label_3707fc;
    }
    ctx->pc = 0x3707F4u;
    {
        const bool branch_taken_0x3707f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3707F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3707F4u;
            // 0x3707f8: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3707f4) {
            ctx->pc = 0x3707E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3707e0;
        }
    }
    ctx->pc = 0x3707FCu;
label_3707fc:
    // 0x3707fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3707fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370800:
    // 0x370800: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x370800u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_370804:
    // 0x370804: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x370804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_370808:
    // 0x370808: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x370808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_37080c:
    // 0x37080c: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x37080cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_370810:
    // 0x370810: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x370810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_370814:
    // 0x370814: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x370814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_370818:
    // 0x370818: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x370818u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_37081c:
    // 0x37081c: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
label_370820:
    if (ctx->pc == 0x370820u) {
        ctx->pc = 0x370824u;
        goto label_370824;
    }
    ctx->pc = 0x37081Cu;
    {
        const bool branch_taken_0x37081c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37081c) {
            ctx->pc = 0x370958u;
            goto label_370958;
        }
    }
    ctx->pc = 0x370824u;
label_370824:
    // 0x370824: 0x24940080  addiu       $s4, $a0, 0x80
    ctx->pc = 0x370824u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_370828:
    // 0x370828: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x370828u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_37082c:
    // 0x37082c: 0x0  nop
    ctx->pc = 0x37082cu;
    // NOP
label_370830:
    // 0x370830: 0x8e8400d0  lw          $a0, 0xD0($s4)
    ctx->pc = 0x370830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
label_370834:
    // 0x370834: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x370834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_370838:
    // 0x370838: 0x14830043  bne         $a0, $v1, . + 4 + (0x43 << 2)
label_37083c:
    if (ctx->pc == 0x37083Cu) {
        ctx->pc = 0x370840u;
        goto label_370840;
    }
    ctx->pc = 0x370838u;
    {
        const bool branch_taken_0x370838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x370838) {
            ctx->pc = 0x370948u;
            goto label_370948;
        }
    }
    ctx->pc = 0x370840u;
label_370840:
    // 0x370840: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x370840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_370844:
    // 0x370844: 0xc04f278  jal         func_13C9E0
label_370848:
    if (ctx->pc == 0x370848u) {
        ctx->pc = 0x370848u;
            // 0x370848: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x37084Cu;
        goto label_37084c;
    }
    ctx->pc = 0x370844u;
    SET_GPR_U32(ctx, 31, 0x37084Cu);
    ctx->pc = 0x370848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370844u;
            // 0x370848: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37084Cu; }
        if (ctx->pc != 0x37084Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37084Cu; }
        if (ctx->pc != 0x37084Cu) { return; }
    }
    ctx->pc = 0x37084Cu;
label_37084c:
    // 0x37084c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x37084cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_370850:
    // 0x370850: 0xc04ce80  jal         func_133A00
label_370854:
    if (ctx->pc == 0x370854u) {
        ctx->pc = 0x370854u;
            // 0x370854: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x370858u;
        goto label_370858;
    }
    ctx->pc = 0x370850u;
    SET_GPR_U32(ctx, 31, 0x370858u);
    ctx->pc = 0x370854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370850u;
            // 0x370854: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370858u; }
        if (ctx->pc != 0x370858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370858u; }
        if (ctx->pc != 0x370858u) { return; }
    }
    ctx->pc = 0x370858u;
label_370858:
    // 0x370858: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x370858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37085c:
    // 0x37085c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37085cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_370860:
    // 0x370860: 0x8c46e3c0  lw          $a2, -0x1C40($v0)
    ctx->pc = 0x370860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_370864:
    // 0x370864: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x370864u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_370868:
    // 0x370868: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x370868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_37086c:
    // 0x37086c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x37086cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_370870:
    // 0x370870: 0x8ef10000  lw          $s1, 0x0($s7)
    ctx->pc = 0x370870u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_370874:
    // 0x370874: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x370874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_370878:
    // 0x370878: 0x8c45e3d8  lw          $a1, -0x1C28($v0)
    ctx->pc = 0x370878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_37087c:
    // 0x37087c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37087cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_370880:
    // 0x370880: 0x8c44e360  lw          $a0, -0x1CA0($v0)
    ctx->pc = 0x370880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_370884:
    // 0x370884: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x370884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_370888:
    // 0x370888: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x370888u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_37088c:
    // 0x37088c: 0x869821  addu        $s3, $a0, $a2
    ctx->pc = 0x37088cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_370890:
    // 0x370890: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x370890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_370894:
    // 0x370894: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x370894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_370898:
    // 0x370898: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x370898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_37089c:
    // 0x37089c: 0xacd30000  sw          $s3, 0x0($a2)
    ctx->pc = 0x37089cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 19));
label_3708a0:
    // 0x3708a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3708a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3708a4:
    // 0x3708a4: 0x8c89e378  lw          $t1, -0x1C88($a0)
    ctx->pc = 0x3708a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_3708a8:
    // 0x3708a8: 0x8ca6e3d8  lw          $a2, -0x1C28($a1)
    ctx->pc = 0x3708a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
label_3708ac:
    // 0x3708ac: 0x8c64e3b8  lw          $a0, -0x1C48($v1)
    ctx->pc = 0x3708acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
label_3708b0:
    // 0x3708b0: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x3708b0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3708b4:
    // 0x3708b4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3708b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_3708b8:
    // 0x3708b8: 0x12a9021  addu        $s2, $t1, $t2
    ctx->pc = 0x3708b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_3708bc:
    // 0x3708bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3708bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3708c0:
    // 0x3708c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3708c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3708c4:
    // 0x3708c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3708c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3708c8:
    // 0x3708c8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3708c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_3708cc:
    // 0x3708cc: 0x8ca2e3c0  lw          $v0, -0x1C40($a1)
    ctx->pc = 0x3708ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_3708d0:
    // 0x3708d0: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x3708d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_3708d4:
    // 0x3708d4: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x3708d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3708d8:
    // 0x3708d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3708d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3708dc:
    // 0x3708dc: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x3708dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
label_3708e0:
    // 0x3708e0: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x3708e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_3708e4:
    // 0x3708e4: 0xace2e3d8  sw          $v0, -0x1C28($a3)
    ctx->pc = 0x3708e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 2));
label_3708e8:
    // 0x3708e8: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x3708e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3708ec:
    // 0x3708ec: 0xc04e4a4  jal         func_139290
label_3708f0:
    if (ctx->pc == 0x3708F0u) {
        ctx->pc = 0x3708F0u;
            // 0x3708f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3708F4u;
        goto label_3708f4;
    }
    ctx->pc = 0x3708ECu;
    SET_GPR_U32(ctx, 31, 0x3708F4u);
    ctx->pc = 0x3708F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3708ECu;
            // 0x3708f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3708F4u; }
        if (ctx->pc != 0x3708F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3708F4u; }
        if (ctx->pc != 0x3708F4u) { return; }
    }
    ctx->pc = 0x3708F4u;
label_3708f4:
    // 0x3708f4: 0x8e8200d8  lw          $v0, 0xD8($s4)
    ctx->pc = 0x3708f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
label_3708f8:
    // 0x3708f8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x3708f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_3708fc:
    // 0x3708fc: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x3708fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_370900:
    // 0x370900: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x370900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_370904:
    // 0x370904: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x370904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_370908:
    // 0x370908: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x370908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_37090c:
    // 0x37090c: 0xc04cd60  jal         func_133580
label_370910:
    if (ctx->pc == 0x370910u) {
        ctx->pc = 0x370910u;
            // 0x370910: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x370914u;
        goto label_370914;
    }
    ctx->pc = 0x37090Cu;
    SET_GPR_U32(ctx, 31, 0x370914u);
    ctx->pc = 0x370910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37090Cu;
            // 0x370910: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370914u; }
        if (ctx->pc != 0x370914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370914u; }
        if (ctx->pc != 0x370914u) { return; }
    }
    ctx->pc = 0x370914u;
label_370914:
    // 0x370914: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x370914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_370918:
    // 0x370918: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x370918u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_37091c:
    // 0x37091c: 0x320f809  jalr        $t9
label_370920:
    if (ctx->pc == 0x370920u) {
        ctx->pc = 0x370920u;
            // 0x370920: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370924u;
        goto label_370924;
    }
    ctx->pc = 0x37091Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x370924u);
        ctx->pc = 0x370920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37091Cu;
            // 0x370920: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x370924u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x370924u; }
            if (ctx->pc != 0x370924u) { return; }
        }
        }
    }
    ctx->pc = 0x370924u;
label_370924:
    // 0x370924: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x370924u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_370928:
    // 0x370928: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x370928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37092c:
    // 0x37092c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37092cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_370930:
    // 0x370930: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x370930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_370934:
    // 0x370934: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x370934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_370938:
    // 0x370938: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x370938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_37093c:
    // 0x37093c: 0xc04cfcc  jal         func_133F30
label_370940:
    if (ctx->pc == 0x370940u) {
        ctx->pc = 0x370940u;
            // 0x370940: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x370944u;
        goto label_370944;
    }
    ctx->pc = 0x37093Cu;
    SET_GPR_U32(ctx, 31, 0x370944u);
    ctx->pc = 0x370940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37093Cu;
            // 0x370940: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370944u; }
        if (ctx->pc != 0x370944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370944u; }
        if (ctx->pc != 0x370944u) { return; }
    }
    ctx->pc = 0x370944u;
label_370944:
    // 0x370944: 0x0  nop
    ctx->pc = 0x370944u;
    // NOP
label_370948:
    // 0x370948: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x370948u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_37094c:
    // 0x37094c: 0x16a0ffb8  bnez        $s5, . + 4 + (-0x48 << 2)
label_370950:
    if (ctx->pc == 0x370950u) {
        ctx->pc = 0x370950u;
            // 0x370950: 0x269400f0  addiu       $s4, $s4, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
        ctx->pc = 0x370954u;
        goto label_370954;
    }
    ctx->pc = 0x37094Cu;
    {
        const bool branch_taken_0x37094c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x370950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37094Cu;
            // 0x370950: 0x269400f0  addiu       $s4, $s4, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37094c) {
            ctx->pc = 0x370830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_370830;
        }
    }
    ctx->pc = 0x370954u;
label_370954:
    // 0x370954: 0x0  nop
    ctx->pc = 0x370954u;
    // NOP
label_370958:
    // 0x370958: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x370958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_37095c:
    // 0x37095c: 0x21e182b  sltu        $v1, $s0, $fp
    ctx->pc = 0x37095cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_370960:
    // 0x370960: 0x1460ffa8  bnez        $v1, . + 4 + (-0x58 << 2)
label_370964:
    if (ctx->pc == 0x370964u) {
        ctx->pc = 0x370964u;
            // 0x370964: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x370968u;
        goto label_370968;
    }
    ctx->pc = 0x370960u;
    {
        const bool branch_taken_0x370960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370960u;
            // 0x370964: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370960) {
            ctx->pc = 0x370804u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_370804;
        }
    }
    ctx->pc = 0x370968u;
label_370968:
    // 0x370968: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x370968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37096c:
    // 0x37096c: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x37096cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_370970:
    // 0x370970: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_370974:
    if (ctx->pc == 0x370974u) {
        ctx->pc = 0x370978u;
        goto label_370978;
    }
    ctx->pc = 0x370970u;
    {
        const bool branch_taken_0x370970 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x370970) {
            ctx->pc = 0x3709A8u;
            goto label_3709a8;
        }
    }
    ctx->pc = 0x370978u;
label_370978:
    // 0x370978: 0xc04e738  jal         func_139CE0
label_37097c:
    if (ctx->pc == 0x37097Cu) {
        ctx->pc = 0x37097Cu;
            // 0x37097c: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->pc = 0x370980u;
        goto label_370980;
    }
    ctx->pc = 0x370978u;
    SET_GPR_U32(ctx, 31, 0x370980u);
    ctx->pc = 0x37097Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x370978u;
            // 0x37097c: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370980u; }
        if (ctx->pc != 0x370980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x370980u; }
        if (ctx->pc != 0x370980u) { return; }
    }
    ctx->pc = 0x370980u;
label_370980:
    // 0x370980: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x370980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_370984:
    // 0x370984: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x370984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_370988:
    // 0x370988: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x370988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_37098c:
    // 0x37098c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x37098cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_370990:
    // 0x370990: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x370990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_370994:
    // 0x370994: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x370994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_370998:
    // 0x370998: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x370998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37099c:
    // 0x37099c: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x37099cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_3709a0:
    // 0x3709a0: 0xc055754  jal         func_155D50
label_3709a4:
    if (ctx->pc == 0x3709A4u) {
        ctx->pc = 0x3709A4u;
            // 0x3709a4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x3709A8u;
        goto label_3709a8;
    }
    ctx->pc = 0x3709A0u;
    SET_GPR_U32(ctx, 31, 0x3709A8u);
    ctx->pc = 0x3709A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3709A0u;
            // 0x3709a4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3709A8u; }
        if (ctx->pc != 0x3709A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3709A8u; }
        if (ctx->pc != 0x3709A8u) { return; }
    }
    ctx->pc = 0x3709A8u;
label_3709a8:
    // 0x3709a8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3709a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3709ac:
    // 0x3709ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3709acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3709b0:
    // 0x3709b0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3709b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3709b4:
    // 0x3709b4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3709b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3709b8:
    // 0x3709b8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3709b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3709bc:
    // 0x3709bc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3709bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3709c0:
    // 0x3709c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3709c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3709c4:
    // 0x3709c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3709c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3709c8:
    // 0x3709c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3709c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3709cc:
    // 0x3709cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3709ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3709d0:
    // 0x3709d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3709d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3709d4:
    // 0x3709d4: 0x3e00008  jr          $ra
label_3709d8:
    if (ctx->pc == 0x3709D8u) {
        ctx->pc = 0x3709D8u;
            // 0x3709d8: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x3709DCu;
        goto label_3709dc;
    }
    ctx->pc = 0x3709D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3709D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3709D4u;
            // 0x3709d8: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3709DCu;
label_3709dc:
    // 0x3709dc: 0x0  nop
    ctx->pc = 0x3709dcu;
    // NOP
}
