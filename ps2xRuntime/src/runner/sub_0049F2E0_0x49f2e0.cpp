#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049F2E0
// Address: 0x49f2e0 - 0x49f950
void sub_0049F2E0_0x49f2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F2E0_0x49f2e0");
#endif

    switch (ctx->pc) {
        case 0x49f2e0u: goto label_49f2e0;
        case 0x49f2e4u: goto label_49f2e4;
        case 0x49f2e8u: goto label_49f2e8;
        case 0x49f2ecu: goto label_49f2ec;
        case 0x49f2f0u: goto label_49f2f0;
        case 0x49f2f4u: goto label_49f2f4;
        case 0x49f2f8u: goto label_49f2f8;
        case 0x49f2fcu: goto label_49f2fc;
        case 0x49f300u: goto label_49f300;
        case 0x49f304u: goto label_49f304;
        case 0x49f308u: goto label_49f308;
        case 0x49f30cu: goto label_49f30c;
        case 0x49f310u: goto label_49f310;
        case 0x49f314u: goto label_49f314;
        case 0x49f318u: goto label_49f318;
        case 0x49f31cu: goto label_49f31c;
        case 0x49f320u: goto label_49f320;
        case 0x49f324u: goto label_49f324;
        case 0x49f328u: goto label_49f328;
        case 0x49f32cu: goto label_49f32c;
        case 0x49f330u: goto label_49f330;
        case 0x49f334u: goto label_49f334;
        case 0x49f338u: goto label_49f338;
        case 0x49f33cu: goto label_49f33c;
        case 0x49f340u: goto label_49f340;
        case 0x49f344u: goto label_49f344;
        case 0x49f348u: goto label_49f348;
        case 0x49f34cu: goto label_49f34c;
        case 0x49f350u: goto label_49f350;
        case 0x49f354u: goto label_49f354;
        case 0x49f358u: goto label_49f358;
        case 0x49f35cu: goto label_49f35c;
        case 0x49f360u: goto label_49f360;
        case 0x49f364u: goto label_49f364;
        case 0x49f368u: goto label_49f368;
        case 0x49f36cu: goto label_49f36c;
        case 0x49f370u: goto label_49f370;
        case 0x49f374u: goto label_49f374;
        case 0x49f378u: goto label_49f378;
        case 0x49f37cu: goto label_49f37c;
        case 0x49f380u: goto label_49f380;
        case 0x49f384u: goto label_49f384;
        case 0x49f388u: goto label_49f388;
        case 0x49f38cu: goto label_49f38c;
        case 0x49f390u: goto label_49f390;
        case 0x49f394u: goto label_49f394;
        case 0x49f398u: goto label_49f398;
        case 0x49f39cu: goto label_49f39c;
        case 0x49f3a0u: goto label_49f3a0;
        case 0x49f3a4u: goto label_49f3a4;
        case 0x49f3a8u: goto label_49f3a8;
        case 0x49f3acu: goto label_49f3ac;
        case 0x49f3b0u: goto label_49f3b0;
        case 0x49f3b4u: goto label_49f3b4;
        case 0x49f3b8u: goto label_49f3b8;
        case 0x49f3bcu: goto label_49f3bc;
        case 0x49f3c0u: goto label_49f3c0;
        case 0x49f3c4u: goto label_49f3c4;
        case 0x49f3c8u: goto label_49f3c8;
        case 0x49f3ccu: goto label_49f3cc;
        case 0x49f3d0u: goto label_49f3d0;
        case 0x49f3d4u: goto label_49f3d4;
        case 0x49f3d8u: goto label_49f3d8;
        case 0x49f3dcu: goto label_49f3dc;
        case 0x49f3e0u: goto label_49f3e0;
        case 0x49f3e4u: goto label_49f3e4;
        case 0x49f3e8u: goto label_49f3e8;
        case 0x49f3ecu: goto label_49f3ec;
        case 0x49f3f0u: goto label_49f3f0;
        case 0x49f3f4u: goto label_49f3f4;
        case 0x49f3f8u: goto label_49f3f8;
        case 0x49f3fcu: goto label_49f3fc;
        case 0x49f400u: goto label_49f400;
        case 0x49f404u: goto label_49f404;
        case 0x49f408u: goto label_49f408;
        case 0x49f40cu: goto label_49f40c;
        case 0x49f410u: goto label_49f410;
        case 0x49f414u: goto label_49f414;
        case 0x49f418u: goto label_49f418;
        case 0x49f41cu: goto label_49f41c;
        case 0x49f420u: goto label_49f420;
        case 0x49f424u: goto label_49f424;
        case 0x49f428u: goto label_49f428;
        case 0x49f42cu: goto label_49f42c;
        case 0x49f430u: goto label_49f430;
        case 0x49f434u: goto label_49f434;
        case 0x49f438u: goto label_49f438;
        case 0x49f43cu: goto label_49f43c;
        case 0x49f440u: goto label_49f440;
        case 0x49f444u: goto label_49f444;
        case 0x49f448u: goto label_49f448;
        case 0x49f44cu: goto label_49f44c;
        case 0x49f450u: goto label_49f450;
        case 0x49f454u: goto label_49f454;
        case 0x49f458u: goto label_49f458;
        case 0x49f45cu: goto label_49f45c;
        case 0x49f460u: goto label_49f460;
        case 0x49f464u: goto label_49f464;
        case 0x49f468u: goto label_49f468;
        case 0x49f46cu: goto label_49f46c;
        case 0x49f470u: goto label_49f470;
        case 0x49f474u: goto label_49f474;
        case 0x49f478u: goto label_49f478;
        case 0x49f47cu: goto label_49f47c;
        case 0x49f480u: goto label_49f480;
        case 0x49f484u: goto label_49f484;
        case 0x49f488u: goto label_49f488;
        case 0x49f48cu: goto label_49f48c;
        case 0x49f490u: goto label_49f490;
        case 0x49f494u: goto label_49f494;
        case 0x49f498u: goto label_49f498;
        case 0x49f49cu: goto label_49f49c;
        case 0x49f4a0u: goto label_49f4a0;
        case 0x49f4a4u: goto label_49f4a4;
        case 0x49f4a8u: goto label_49f4a8;
        case 0x49f4acu: goto label_49f4ac;
        case 0x49f4b0u: goto label_49f4b0;
        case 0x49f4b4u: goto label_49f4b4;
        case 0x49f4b8u: goto label_49f4b8;
        case 0x49f4bcu: goto label_49f4bc;
        case 0x49f4c0u: goto label_49f4c0;
        case 0x49f4c4u: goto label_49f4c4;
        case 0x49f4c8u: goto label_49f4c8;
        case 0x49f4ccu: goto label_49f4cc;
        case 0x49f4d0u: goto label_49f4d0;
        case 0x49f4d4u: goto label_49f4d4;
        case 0x49f4d8u: goto label_49f4d8;
        case 0x49f4dcu: goto label_49f4dc;
        case 0x49f4e0u: goto label_49f4e0;
        case 0x49f4e4u: goto label_49f4e4;
        case 0x49f4e8u: goto label_49f4e8;
        case 0x49f4ecu: goto label_49f4ec;
        case 0x49f4f0u: goto label_49f4f0;
        case 0x49f4f4u: goto label_49f4f4;
        case 0x49f4f8u: goto label_49f4f8;
        case 0x49f4fcu: goto label_49f4fc;
        case 0x49f500u: goto label_49f500;
        case 0x49f504u: goto label_49f504;
        case 0x49f508u: goto label_49f508;
        case 0x49f50cu: goto label_49f50c;
        case 0x49f510u: goto label_49f510;
        case 0x49f514u: goto label_49f514;
        case 0x49f518u: goto label_49f518;
        case 0x49f51cu: goto label_49f51c;
        case 0x49f520u: goto label_49f520;
        case 0x49f524u: goto label_49f524;
        case 0x49f528u: goto label_49f528;
        case 0x49f52cu: goto label_49f52c;
        case 0x49f530u: goto label_49f530;
        case 0x49f534u: goto label_49f534;
        case 0x49f538u: goto label_49f538;
        case 0x49f53cu: goto label_49f53c;
        case 0x49f540u: goto label_49f540;
        case 0x49f544u: goto label_49f544;
        case 0x49f548u: goto label_49f548;
        case 0x49f54cu: goto label_49f54c;
        case 0x49f550u: goto label_49f550;
        case 0x49f554u: goto label_49f554;
        case 0x49f558u: goto label_49f558;
        case 0x49f55cu: goto label_49f55c;
        case 0x49f560u: goto label_49f560;
        case 0x49f564u: goto label_49f564;
        case 0x49f568u: goto label_49f568;
        case 0x49f56cu: goto label_49f56c;
        case 0x49f570u: goto label_49f570;
        case 0x49f574u: goto label_49f574;
        case 0x49f578u: goto label_49f578;
        case 0x49f57cu: goto label_49f57c;
        case 0x49f580u: goto label_49f580;
        case 0x49f584u: goto label_49f584;
        case 0x49f588u: goto label_49f588;
        case 0x49f58cu: goto label_49f58c;
        case 0x49f590u: goto label_49f590;
        case 0x49f594u: goto label_49f594;
        case 0x49f598u: goto label_49f598;
        case 0x49f59cu: goto label_49f59c;
        case 0x49f5a0u: goto label_49f5a0;
        case 0x49f5a4u: goto label_49f5a4;
        case 0x49f5a8u: goto label_49f5a8;
        case 0x49f5acu: goto label_49f5ac;
        case 0x49f5b0u: goto label_49f5b0;
        case 0x49f5b4u: goto label_49f5b4;
        case 0x49f5b8u: goto label_49f5b8;
        case 0x49f5bcu: goto label_49f5bc;
        case 0x49f5c0u: goto label_49f5c0;
        case 0x49f5c4u: goto label_49f5c4;
        case 0x49f5c8u: goto label_49f5c8;
        case 0x49f5ccu: goto label_49f5cc;
        case 0x49f5d0u: goto label_49f5d0;
        case 0x49f5d4u: goto label_49f5d4;
        case 0x49f5d8u: goto label_49f5d8;
        case 0x49f5dcu: goto label_49f5dc;
        case 0x49f5e0u: goto label_49f5e0;
        case 0x49f5e4u: goto label_49f5e4;
        case 0x49f5e8u: goto label_49f5e8;
        case 0x49f5ecu: goto label_49f5ec;
        case 0x49f5f0u: goto label_49f5f0;
        case 0x49f5f4u: goto label_49f5f4;
        case 0x49f5f8u: goto label_49f5f8;
        case 0x49f5fcu: goto label_49f5fc;
        case 0x49f600u: goto label_49f600;
        case 0x49f604u: goto label_49f604;
        case 0x49f608u: goto label_49f608;
        case 0x49f60cu: goto label_49f60c;
        case 0x49f610u: goto label_49f610;
        case 0x49f614u: goto label_49f614;
        case 0x49f618u: goto label_49f618;
        case 0x49f61cu: goto label_49f61c;
        case 0x49f620u: goto label_49f620;
        case 0x49f624u: goto label_49f624;
        case 0x49f628u: goto label_49f628;
        case 0x49f62cu: goto label_49f62c;
        case 0x49f630u: goto label_49f630;
        case 0x49f634u: goto label_49f634;
        case 0x49f638u: goto label_49f638;
        case 0x49f63cu: goto label_49f63c;
        case 0x49f640u: goto label_49f640;
        case 0x49f644u: goto label_49f644;
        case 0x49f648u: goto label_49f648;
        case 0x49f64cu: goto label_49f64c;
        case 0x49f650u: goto label_49f650;
        case 0x49f654u: goto label_49f654;
        case 0x49f658u: goto label_49f658;
        case 0x49f65cu: goto label_49f65c;
        case 0x49f660u: goto label_49f660;
        case 0x49f664u: goto label_49f664;
        case 0x49f668u: goto label_49f668;
        case 0x49f66cu: goto label_49f66c;
        case 0x49f670u: goto label_49f670;
        case 0x49f674u: goto label_49f674;
        case 0x49f678u: goto label_49f678;
        case 0x49f67cu: goto label_49f67c;
        case 0x49f680u: goto label_49f680;
        case 0x49f684u: goto label_49f684;
        case 0x49f688u: goto label_49f688;
        case 0x49f68cu: goto label_49f68c;
        case 0x49f690u: goto label_49f690;
        case 0x49f694u: goto label_49f694;
        case 0x49f698u: goto label_49f698;
        case 0x49f69cu: goto label_49f69c;
        case 0x49f6a0u: goto label_49f6a0;
        case 0x49f6a4u: goto label_49f6a4;
        case 0x49f6a8u: goto label_49f6a8;
        case 0x49f6acu: goto label_49f6ac;
        case 0x49f6b0u: goto label_49f6b0;
        case 0x49f6b4u: goto label_49f6b4;
        case 0x49f6b8u: goto label_49f6b8;
        case 0x49f6bcu: goto label_49f6bc;
        case 0x49f6c0u: goto label_49f6c0;
        case 0x49f6c4u: goto label_49f6c4;
        case 0x49f6c8u: goto label_49f6c8;
        case 0x49f6ccu: goto label_49f6cc;
        case 0x49f6d0u: goto label_49f6d0;
        case 0x49f6d4u: goto label_49f6d4;
        case 0x49f6d8u: goto label_49f6d8;
        case 0x49f6dcu: goto label_49f6dc;
        case 0x49f6e0u: goto label_49f6e0;
        case 0x49f6e4u: goto label_49f6e4;
        case 0x49f6e8u: goto label_49f6e8;
        case 0x49f6ecu: goto label_49f6ec;
        case 0x49f6f0u: goto label_49f6f0;
        case 0x49f6f4u: goto label_49f6f4;
        case 0x49f6f8u: goto label_49f6f8;
        case 0x49f6fcu: goto label_49f6fc;
        case 0x49f700u: goto label_49f700;
        case 0x49f704u: goto label_49f704;
        case 0x49f708u: goto label_49f708;
        case 0x49f70cu: goto label_49f70c;
        case 0x49f710u: goto label_49f710;
        case 0x49f714u: goto label_49f714;
        case 0x49f718u: goto label_49f718;
        case 0x49f71cu: goto label_49f71c;
        case 0x49f720u: goto label_49f720;
        case 0x49f724u: goto label_49f724;
        case 0x49f728u: goto label_49f728;
        case 0x49f72cu: goto label_49f72c;
        case 0x49f730u: goto label_49f730;
        case 0x49f734u: goto label_49f734;
        case 0x49f738u: goto label_49f738;
        case 0x49f73cu: goto label_49f73c;
        case 0x49f740u: goto label_49f740;
        case 0x49f744u: goto label_49f744;
        case 0x49f748u: goto label_49f748;
        case 0x49f74cu: goto label_49f74c;
        case 0x49f750u: goto label_49f750;
        case 0x49f754u: goto label_49f754;
        case 0x49f758u: goto label_49f758;
        case 0x49f75cu: goto label_49f75c;
        case 0x49f760u: goto label_49f760;
        case 0x49f764u: goto label_49f764;
        case 0x49f768u: goto label_49f768;
        case 0x49f76cu: goto label_49f76c;
        case 0x49f770u: goto label_49f770;
        case 0x49f774u: goto label_49f774;
        case 0x49f778u: goto label_49f778;
        case 0x49f77cu: goto label_49f77c;
        case 0x49f780u: goto label_49f780;
        case 0x49f784u: goto label_49f784;
        case 0x49f788u: goto label_49f788;
        case 0x49f78cu: goto label_49f78c;
        case 0x49f790u: goto label_49f790;
        case 0x49f794u: goto label_49f794;
        case 0x49f798u: goto label_49f798;
        case 0x49f79cu: goto label_49f79c;
        case 0x49f7a0u: goto label_49f7a0;
        case 0x49f7a4u: goto label_49f7a4;
        case 0x49f7a8u: goto label_49f7a8;
        case 0x49f7acu: goto label_49f7ac;
        case 0x49f7b0u: goto label_49f7b0;
        case 0x49f7b4u: goto label_49f7b4;
        case 0x49f7b8u: goto label_49f7b8;
        case 0x49f7bcu: goto label_49f7bc;
        case 0x49f7c0u: goto label_49f7c0;
        case 0x49f7c4u: goto label_49f7c4;
        case 0x49f7c8u: goto label_49f7c8;
        case 0x49f7ccu: goto label_49f7cc;
        case 0x49f7d0u: goto label_49f7d0;
        case 0x49f7d4u: goto label_49f7d4;
        case 0x49f7d8u: goto label_49f7d8;
        case 0x49f7dcu: goto label_49f7dc;
        case 0x49f7e0u: goto label_49f7e0;
        case 0x49f7e4u: goto label_49f7e4;
        case 0x49f7e8u: goto label_49f7e8;
        case 0x49f7ecu: goto label_49f7ec;
        case 0x49f7f0u: goto label_49f7f0;
        case 0x49f7f4u: goto label_49f7f4;
        case 0x49f7f8u: goto label_49f7f8;
        case 0x49f7fcu: goto label_49f7fc;
        case 0x49f800u: goto label_49f800;
        case 0x49f804u: goto label_49f804;
        case 0x49f808u: goto label_49f808;
        case 0x49f80cu: goto label_49f80c;
        case 0x49f810u: goto label_49f810;
        case 0x49f814u: goto label_49f814;
        case 0x49f818u: goto label_49f818;
        case 0x49f81cu: goto label_49f81c;
        case 0x49f820u: goto label_49f820;
        case 0x49f824u: goto label_49f824;
        case 0x49f828u: goto label_49f828;
        case 0x49f82cu: goto label_49f82c;
        case 0x49f830u: goto label_49f830;
        case 0x49f834u: goto label_49f834;
        case 0x49f838u: goto label_49f838;
        case 0x49f83cu: goto label_49f83c;
        case 0x49f840u: goto label_49f840;
        case 0x49f844u: goto label_49f844;
        case 0x49f848u: goto label_49f848;
        case 0x49f84cu: goto label_49f84c;
        case 0x49f850u: goto label_49f850;
        case 0x49f854u: goto label_49f854;
        case 0x49f858u: goto label_49f858;
        case 0x49f85cu: goto label_49f85c;
        case 0x49f860u: goto label_49f860;
        case 0x49f864u: goto label_49f864;
        case 0x49f868u: goto label_49f868;
        case 0x49f86cu: goto label_49f86c;
        case 0x49f870u: goto label_49f870;
        case 0x49f874u: goto label_49f874;
        case 0x49f878u: goto label_49f878;
        case 0x49f87cu: goto label_49f87c;
        case 0x49f880u: goto label_49f880;
        case 0x49f884u: goto label_49f884;
        case 0x49f888u: goto label_49f888;
        case 0x49f88cu: goto label_49f88c;
        case 0x49f890u: goto label_49f890;
        case 0x49f894u: goto label_49f894;
        case 0x49f898u: goto label_49f898;
        case 0x49f89cu: goto label_49f89c;
        case 0x49f8a0u: goto label_49f8a0;
        case 0x49f8a4u: goto label_49f8a4;
        case 0x49f8a8u: goto label_49f8a8;
        case 0x49f8acu: goto label_49f8ac;
        case 0x49f8b0u: goto label_49f8b0;
        case 0x49f8b4u: goto label_49f8b4;
        case 0x49f8b8u: goto label_49f8b8;
        case 0x49f8bcu: goto label_49f8bc;
        case 0x49f8c0u: goto label_49f8c0;
        case 0x49f8c4u: goto label_49f8c4;
        case 0x49f8c8u: goto label_49f8c8;
        case 0x49f8ccu: goto label_49f8cc;
        case 0x49f8d0u: goto label_49f8d0;
        case 0x49f8d4u: goto label_49f8d4;
        case 0x49f8d8u: goto label_49f8d8;
        case 0x49f8dcu: goto label_49f8dc;
        case 0x49f8e0u: goto label_49f8e0;
        case 0x49f8e4u: goto label_49f8e4;
        case 0x49f8e8u: goto label_49f8e8;
        case 0x49f8ecu: goto label_49f8ec;
        case 0x49f8f0u: goto label_49f8f0;
        case 0x49f8f4u: goto label_49f8f4;
        case 0x49f8f8u: goto label_49f8f8;
        case 0x49f8fcu: goto label_49f8fc;
        case 0x49f900u: goto label_49f900;
        case 0x49f904u: goto label_49f904;
        case 0x49f908u: goto label_49f908;
        case 0x49f90cu: goto label_49f90c;
        case 0x49f910u: goto label_49f910;
        case 0x49f914u: goto label_49f914;
        case 0x49f918u: goto label_49f918;
        case 0x49f91cu: goto label_49f91c;
        case 0x49f920u: goto label_49f920;
        case 0x49f924u: goto label_49f924;
        case 0x49f928u: goto label_49f928;
        case 0x49f92cu: goto label_49f92c;
        case 0x49f930u: goto label_49f930;
        case 0x49f934u: goto label_49f934;
        case 0x49f938u: goto label_49f938;
        case 0x49f93cu: goto label_49f93c;
        case 0x49f940u: goto label_49f940;
        case 0x49f944u: goto label_49f944;
        case 0x49f948u: goto label_49f948;
        case 0x49f94cu: goto label_49f94c;
        default: break;
    }

    ctx->pc = 0x49f2e0u;

label_49f2e0:
    // 0x49f2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49f2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49f2e4:
    // 0x49f2e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49f2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49f2e8:
    // 0x49f2e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49f2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49f2ec:
    // 0x49f2ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49f2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49f2f0:
    // 0x49f2f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49f2f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49f2f4:
    // 0x49f2f4: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
label_49f2f8:
    if (ctx->pc == 0x49F2F8u) {
        ctx->pc = 0x49F2F8u;
            // 0x49f2f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F2FCu;
        goto label_49f2fc;
    }
    ctx->pc = 0x49F2F4u;
    {
        const bool branch_taken_0x49f2f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F2F4u;
            // 0x49f2f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f2f4) {
            ctx->pc = 0x49F43Cu;
            goto label_49f43c;
        }
    }
    ctx->pc = 0x49F2FCu;
label_49f2fc:
    // 0x49f2fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_49f300:
    // 0x49f300: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49f300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_49f304:
    // 0x49f304: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x49f304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
label_49f308:
    // 0x49f308: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x49f308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
label_49f30c:
    // 0x49f30c: 0x244200e8  addiu       $v0, $v0, 0xE8
    ctx->pc = 0x49f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
label_49f310:
    // 0x49f310: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x49f310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_49f314:
    // 0x49f314: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x49f314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_49f318:
    // 0x49f318: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x49f318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_49f31c:
    // 0x49f31c: 0xc0407c0  jal         func_101F00
label_49f320:
    if (ctx->pc == 0x49F320u) {
        ctx->pc = 0x49F320u;
            // 0x49f320: 0x24a5f460  addiu       $a1, $a1, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964320));
        ctx->pc = 0x49F324u;
        goto label_49f324;
    }
    ctx->pc = 0x49F31Cu;
    SET_GPR_U32(ctx, 31, 0x49F324u);
    ctx->pc = 0x49F320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F31Cu;
            // 0x49f320: 0x24a5f460  addiu       $a1, $a1, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F324u; }
        if (ctx->pc != 0x49F324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F324u; }
        if (ctx->pc != 0x49F324u) { return; }
    }
    ctx->pc = 0x49F324u;
label_49f324:
    // 0x49f324: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x49f324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_49f328:
    // 0x49f328: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_49f32c:
    if (ctx->pc == 0x49F32Cu) {
        ctx->pc = 0x49F32Cu;
            // 0x49f32c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x49F330u;
        goto label_49f330;
    }
    ctx->pc = 0x49F328u;
    {
        const bool branch_taken_0x49f328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f328) {
            ctx->pc = 0x49F32Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49F328u;
            // 0x49f32c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49F350u;
            goto label_49f350;
        }
    }
    ctx->pc = 0x49F330u;
label_49f330:
    // 0x49f330: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x49f330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_49f334:
    // 0x49f334: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_49f338:
    if (ctx->pc == 0x49F338u) {
        ctx->pc = 0x49F338u;
            // 0x49f338: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x49F33Cu;
        goto label_49f33c;
    }
    ctx->pc = 0x49F334u;
    {
        const bool branch_taken_0x49f334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f334) {
            ctx->pc = 0x49F338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49F334u;
            // 0x49f338: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49F34Cu;
            goto label_49f34c;
        }
    }
    ctx->pc = 0x49F33Cu;
label_49f33c:
    // 0x49f33c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x49f33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_49f340:
    // 0x49f340: 0xc0407c0  jal         func_101F00
label_49f344:
    if (ctx->pc == 0x49F344u) {
        ctx->pc = 0x49F344u;
            // 0x49f344: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->pc = 0x49F348u;
        goto label_49f348;
    }
    ctx->pc = 0x49F340u;
    SET_GPR_U32(ctx, 31, 0x49F348u);
    ctx->pc = 0x49F344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F340u;
            // 0x49f344: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F348u; }
        if (ctx->pc != 0x49F348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F348u; }
        if (ctx->pc != 0x49F348u) { return; }
    }
    ctx->pc = 0x49F348u;
label_49f348:
    // 0x49f348: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x49f348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_49f34c:
    // 0x49f34c: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x49f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_49f350:
    // 0x49f350: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_49f354:
    if (ctx->pc == 0x49F354u) {
        ctx->pc = 0x49F354u;
            // 0x49f354: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x49F358u;
        goto label_49f358;
    }
    ctx->pc = 0x49F350u;
    {
        const bool branch_taken_0x49f350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f350) {
            ctx->pc = 0x49F354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49F350u;
            // 0x49f354: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49F380u;
            goto label_49f380;
        }
    }
    ctx->pc = 0x49F358u;
label_49f358:
    // 0x49f358: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49f35c:
    if (ctx->pc == 0x49F35Cu) {
        ctx->pc = 0x49F360u;
        goto label_49f360;
    }
    ctx->pc = 0x49F358u;
    {
        const bool branch_taken_0x49f358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f358) {
            ctx->pc = 0x49F37Cu;
            goto label_49f37c;
        }
    }
    ctx->pc = 0x49F360u;
label_49f360:
    // 0x49f360: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_49f364:
    if (ctx->pc == 0x49F364u) {
        ctx->pc = 0x49F368u;
        goto label_49f368;
    }
    ctx->pc = 0x49F360u;
    {
        const bool branch_taken_0x49f360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f360) {
            ctx->pc = 0x49F37Cu;
            goto label_49f37c;
        }
    }
    ctx->pc = 0x49F368u;
label_49f368:
    // 0x49f368: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x49f368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_49f36c:
    // 0x49f36c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_49f370:
    if (ctx->pc == 0x49F370u) {
        ctx->pc = 0x49F374u;
        goto label_49f374;
    }
    ctx->pc = 0x49F36Cu;
    {
        const bool branch_taken_0x49f36c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f36c) {
            ctx->pc = 0x49F37Cu;
            goto label_49f37c;
        }
    }
    ctx->pc = 0x49F374u;
label_49f374:
    // 0x49f374: 0xc0400a8  jal         func_1002A0
label_49f378:
    if (ctx->pc == 0x49F378u) {
        ctx->pc = 0x49F37Cu;
        goto label_49f37c;
    }
    ctx->pc = 0x49F374u;
    SET_GPR_U32(ctx, 31, 0x49F37Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F37Cu; }
        if (ctx->pc != 0x49F37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F37Cu; }
        if (ctx->pc != 0x49F37Cu) { return; }
    }
    ctx->pc = 0x49F37Cu;
label_49f37c:
    // 0x49f37c: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x49f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_49f380:
    // 0x49f380: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_49f384:
    if (ctx->pc == 0x49F384u) {
        ctx->pc = 0x49F384u;
            // 0x49f384: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x49F388u;
        goto label_49f388;
    }
    ctx->pc = 0x49F380u;
    {
        const bool branch_taken_0x49f380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f380) {
            ctx->pc = 0x49F384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49F380u;
            // 0x49f384: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49F3B0u;
            goto label_49f3b0;
        }
    }
    ctx->pc = 0x49F388u;
label_49f388:
    // 0x49f388: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_49f38c:
    if (ctx->pc == 0x49F38Cu) {
        ctx->pc = 0x49F390u;
        goto label_49f390;
    }
    ctx->pc = 0x49F388u;
    {
        const bool branch_taken_0x49f388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f388) {
            ctx->pc = 0x49F3ACu;
            goto label_49f3ac;
        }
    }
    ctx->pc = 0x49F390u;
label_49f390:
    // 0x49f390: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_49f394:
    if (ctx->pc == 0x49F394u) {
        ctx->pc = 0x49F398u;
        goto label_49f398;
    }
    ctx->pc = 0x49F390u;
    {
        const bool branch_taken_0x49f390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f390) {
            ctx->pc = 0x49F3ACu;
            goto label_49f3ac;
        }
    }
    ctx->pc = 0x49F398u;
label_49f398:
    // 0x49f398: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x49f398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_49f39c:
    // 0x49f39c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_49f3a0:
    if (ctx->pc == 0x49F3A0u) {
        ctx->pc = 0x49F3A4u;
        goto label_49f3a4;
    }
    ctx->pc = 0x49F39Cu;
    {
        const bool branch_taken_0x49f39c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f39c) {
            ctx->pc = 0x49F3ACu;
            goto label_49f3ac;
        }
    }
    ctx->pc = 0x49F3A4u;
label_49f3a4:
    // 0x49f3a4: 0xc0400a8  jal         func_1002A0
label_49f3a8:
    if (ctx->pc == 0x49F3A8u) {
        ctx->pc = 0x49F3ACu;
        goto label_49f3ac;
    }
    ctx->pc = 0x49F3A4u;
    SET_GPR_U32(ctx, 31, 0x49F3ACu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F3ACu; }
        if (ctx->pc != 0x49F3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F3ACu; }
        if (ctx->pc != 0x49F3ACu) { return; }
    }
    ctx->pc = 0x49F3ACu;
label_49f3ac:
    // 0x49f3ac: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x49f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_49f3b0:
    // 0x49f3b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_49f3b4:
    if (ctx->pc == 0x49F3B4u) {
        ctx->pc = 0x49F3B8u;
        goto label_49f3b8;
    }
    ctx->pc = 0x49F3B0u;
    {
        const bool branch_taken_0x49f3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f3b0) {
            ctx->pc = 0x49F3CCu;
            goto label_49f3cc;
        }
    }
    ctx->pc = 0x49F3B8u;
label_49f3b8:
    // 0x49f3b8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_49f3bc:
    // 0x49f3bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_49f3c0:
    // 0x49f3c0: 0x24630098  addiu       $v1, $v1, 0x98
    ctx->pc = 0x49f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
label_49f3c4:
    // 0x49f3c4: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x49f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_49f3c8:
    // 0x49f3c8: 0xac407c28  sw          $zero, 0x7C28($v0)
    ctx->pc = 0x49f3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31784), GPR_U32(ctx, 0));
label_49f3cc:
    // 0x49f3cc: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_49f3d0:
    if (ctx->pc == 0x49F3D0u) {
        ctx->pc = 0x49F3D0u;
            // 0x49f3d0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x49F3D4u;
        goto label_49f3d4;
    }
    ctx->pc = 0x49F3CCu;
    {
        const bool branch_taken_0x49f3cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f3cc) {
            ctx->pc = 0x49F3D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49F3CCu;
            // 0x49f3d0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49F428u;
            goto label_49f428;
        }
    }
    ctx->pc = 0x49F3D4u;
label_49f3d4:
    // 0x49f3d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49f3d8:
    // 0x49f3d8: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x49f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_49f3dc:
    // 0x49f3dc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x49f3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_49f3e0:
    // 0x49f3e0: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x49f3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_49f3e4:
    // 0x49f3e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_49f3e8:
    if (ctx->pc == 0x49F3E8u) {
        ctx->pc = 0x49F3E8u;
            // 0x49f3e8: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x49F3ECu;
        goto label_49f3ec;
    }
    ctx->pc = 0x49F3E4u;
    {
        const bool branch_taken_0x49f3e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f3e4) {
            ctx->pc = 0x49F3E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49F3E4u;
            // 0x49f3e8: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49F400u;
            goto label_49f400;
        }
    }
    ctx->pc = 0x49F3ECu;
label_49f3ec:
    // 0x49f3ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49f3ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49f3f0:
    // 0x49f3f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49f3f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49f3f4:
    // 0x49f3f4: 0x320f809  jalr        $t9
label_49f3f8:
    if (ctx->pc == 0x49F3F8u) {
        ctx->pc = 0x49F3F8u;
            // 0x49f3f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49F3FCu;
        goto label_49f3fc;
    }
    ctx->pc = 0x49F3F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49F3FCu);
        ctx->pc = 0x49F3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F3F4u;
            // 0x49f3f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49F3FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49F3FCu; }
            if (ctx->pc != 0x49F3FCu) { return; }
        }
        }
    }
    ctx->pc = 0x49F3FCu;
label_49f3fc:
    // 0x49f3fc: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x49f3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_49f400:
    // 0x49f400: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_49f404:
    if (ctx->pc == 0x49F404u) {
        ctx->pc = 0x49F404u;
            // 0x49f404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F408u;
        goto label_49f408;
    }
    ctx->pc = 0x49F400u;
    {
        const bool branch_taken_0x49f400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f400) {
            ctx->pc = 0x49F404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49F400u;
            // 0x49f404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49F41Cu;
            goto label_49f41c;
        }
    }
    ctx->pc = 0x49F408u;
label_49f408:
    // 0x49f408: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49f408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49f40c:
    // 0x49f40c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x49f40cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_49f410:
    // 0x49f410: 0x320f809  jalr        $t9
label_49f414:
    if (ctx->pc == 0x49F414u) {
        ctx->pc = 0x49F414u;
            // 0x49f414: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x49F418u;
        goto label_49f418;
    }
    ctx->pc = 0x49F410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49F418u);
        ctx->pc = 0x49F414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F410u;
            // 0x49f414: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49F418u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49F418u; }
            if (ctx->pc != 0x49F418u) { return; }
        }
        }
    }
    ctx->pc = 0x49F418u;
label_49f418:
    // 0x49f418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49f418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49f41c:
    // 0x49f41c: 0xc075bf8  jal         func_1D6FE0
label_49f420:
    if (ctx->pc == 0x49F420u) {
        ctx->pc = 0x49F420u;
            // 0x49f420: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F424u;
        goto label_49f424;
    }
    ctx->pc = 0x49F41Cu;
    SET_GPR_U32(ctx, 31, 0x49F424u);
    ctx->pc = 0x49F420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F41Cu;
            // 0x49f420: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F424u; }
        if (ctx->pc != 0x49F424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F424u; }
        if (ctx->pc != 0x49F424u) { return; }
    }
    ctx->pc = 0x49F424u;
label_49f424:
    // 0x49f424: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x49f424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_49f428:
    // 0x49f428: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49f428u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_49f42c:
    // 0x49f42c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_49f430:
    if (ctx->pc == 0x49F430u) {
        ctx->pc = 0x49F430u;
            // 0x49f430: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F434u;
        goto label_49f434;
    }
    ctx->pc = 0x49F42Cu;
    {
        const bool branch_taken_0x49f42c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49f42c) {
            ctx->pc = 0x49F430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49F42Cu;
            // 0x49f430: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49F440u;
            goto label_49f440;
        }
    }
    ctx->pc = 0x49F434u;
label_49f434:
    // 0x49f434: 0xc0400a8  jal         func_1002A0
label_49f438:
    if (ctx->pc == 0x49F438u) {
        ctx->pc = 0x49F438u;
            // 0x49f438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F43Cu;
        goto label_49f43c;
    }
    ctx->pc = 0x49F434u;
    SET_GPR_U32(ctx, 31, 0x49F43Cu);
    ctx->pc = 0x49F438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F434u;
            // 0x49f438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F43Cu; }
        if (ctx->pc != 0x49F43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F43Cu; }
        if (ctx->pc != 0x49F43Cu) { return; }
    }
    ctx->pc = 0x49F43Cu;
label_49f43c:
    // 0x49f43c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49f43cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49f440:
    // 0x49f440: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49f440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49f444:
    // 0x49f444: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49f444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49f448:
    // 0x49f448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49f448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49f44c:
    // 0x49f44c: 0x3e00008  jr          $ra
label_49f450:
    if (ctx->pc == 0x49F450u) {
        ctx->pc = 0x49F450u;
            // 0x49f450: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49F454u;
        goto label_49f454;
    }
    ctx->pc = 0x49F44Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F44Cu;
            // 0x49f450: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49F454u;
label_49f454:
    // 0x49f454: 0x0  nop
    ctx->pc = 0x49f454u;
    // NOP
label_49f458:
    // 0x49f458: 0x0  nop
    ctx->pc = 0x49f458u;
    // NOP
label_49f45c:
    // 0x49f45c: 0x0  nop
    ctx->pc = 0x49f45cu;
    // NOP
label_49f460:
    // 0x49f460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49f460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49f464:
    // 0x49f464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49f464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49f468:
    // 0x49f468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49f468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49f46c:
    // 0x49f46c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49f46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49f470:
    // 0x49f470: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49f470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49f474:
    // 0x49f474: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_49f478:
    if (ctx->pc == 0x49F478u) {
        ctx->pc = 0x49F478u;
            // 0x49f478: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F47Cu;
        goto label_49f47c;
    }
    ctx->pc = 0x49F474u;
    {
        const bool branch_taken_0x49f474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F474u;
            // 0x49f478: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f474) {
            ctx->pc = 0x49F4D4u;
            goto label_49f4d4;
        }
    }
    ctx->pc = 0x49F47Cu;
label_49f47c:
    // 0x49f47c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_49f480:
    // 0x49f480: 0x24420150  addiu       $v0, $v0, 0x150
    ctx->pc = 0x49f480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
label_49f484:
    // 0x49f484: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x49f484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_49f488:
    // 0x49f488: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49f488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49f48c:
    // 0x49f48c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x49f48cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_49f490:
    // 0x49f490: 0x320f809  jalr        $t9
label_49f494:
    if (ctx->pc == 0x49F494u) {
        ctx->pc = 0x49F498u;
        goto label_49f498;
    }
    ctx->pc = 0x49F490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49F498u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49F498u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49F498u; }
            if (ctx->pc != 0x49F498u) { return; }
        }
        }
    }
    ctx->pc = 0x49F498u;
label_49f498:
    // 0x49f498: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_49f49c:
    if (ctx->pc == 0x49F49Cu) {
        ctx->pc = 0x49F49Cu;
            // 0x49f49c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x49F4A0u;
        goto label_49f4a0;
    }
    ctx->pc = 0x49F498u;
    {
        const bool branch_taken_0x49f498 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f498) {
            ctx->pc = 0x49F49Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49F498u;
            // 0x49f49c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49F4C0u;
            goto label_49f4c0;
        }
    }
    ctx->pc = 0x49F4A0u;
label_49f4a0:
    // 0x49f4a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49f4a4:
    // 0x49f4a4: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x49f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_49f4a8:
    // 0x49f4a8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_49f4ac:
    if (ctx->pc == 0x49F4ACu) {
        ctx->pc = 0x49F4ACu;
            // 0x49f4ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x49F4B0u;
        goto label_49f4b0;
    }
    ctx->pc = 0x49F4A8u;
    {
        const bool branch_taken_0x49f4a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F4A8u;
            // 0x49f4ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f4a8) {
            ctx->pc = 0x49F4BCu;
            goto label_49f4bc;
        }
    }
    ctx->pc = 0x49F4B0u;
label_49f4b0:
    // 0x49f4b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x49f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_49f4b4:
    // 0x49f4b4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x49f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_49f4b8:
    // 0x49f4b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x49f4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_49f4bc:
    // 0x49f4bc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x49f4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_49f4c0:
    // 0x49f4c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49f4c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_49f4c4:
    // 0x49f4c4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_49f4c8:
    if (ctx->pc == 0x49F4C8u) {
        ctx->pc = 0x49F4C8u;
            // 0x49f4c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F4CCu;
        goto label_49f4cc;
    }
    ctx->pc = 0x49F4C4u;
    {
        const bool branch_taken_0x49f4c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49f4c4) {
            ctx->pc = 0x49F4C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49F4C4u;
            // 0x49f4c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49F4D8u;
            goto label_49f4d8;
        }
    }
    ctx->pc = 0x49F4CCu;
label_49f4cc:
    // 0x49f4cc: 0xc0400a8  jal         func_1002A0
label_49f4d0:
    if (ctx->pc == 0x49F4D0u) {
        ctx->pc = 0x49F4D0u;
            // 0x49f4d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F4D4u;
        goto label_49f4d4;
    }
    ctx->pc = 0x49F4CCu;
    SET_GPR_U32(ctx, 31, 0x49F4D4u);
    ctx->pc = 0x49F4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F4CCu;
            // 0x49f4d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F4D4u; }
        if (ctx->pc != 0x49F4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F4D4u; }
        if (ctx->pc != 0x49F4D4u) { return; }
    }
    ctx->pc = 0x49F4D4u;
label_49f4d4:
    // 0x49f4d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49f4d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49f4d8:
    // 0x49f4d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49f4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49f4dc:
    // 0x49f4dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49f4dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49f4e0:
    // 0x49f4e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49f4e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49f4e4:
    // 0x49f4e4: 0x3e00008  jr          $ra
label_49f4e8:
    if (ctx->pc == 0x49F4E8u) {
        ctx->pc = 0x49F4E8u;
            // 0x49f4e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49F4ECu;
        goto label_49f4ec;
    }
    ctx->pc = 0x49F4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F4E4u;
            // 0x49f4e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49F4ECu;
label_49f4ec:
    // 0x49f4ec: 0x0  nop
    ctx->pc = 0x49f4ecu;
    // NOP
label_49f4f0:
    // 0x49f4f0: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x49f4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_49f4f4:
    // 0x49f4f4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x49f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_49f4f8:
    // 0x49f4f8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x49f4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_49f4fc:
    // 0x49f4fc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x49f4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_49f500:
    // 0x49f500: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x49f500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_49f504:
    // 0x49f504: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x49f504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_49f508:
    // 0x49f508: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x49f508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_49f50c:
    // 0x49f50c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x49f50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_49f510:
    // 0x49f510: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x49f510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_49f514:
    // 0x49f514: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x49f514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_49f518:
    // 0x49f518: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x49f518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49f51c:
    // 0x49f51c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x49f51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_49f520:
    // 0x49f520: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x49f520u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_49f524:
    // 0x49f524: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x49f524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_49f528:
    // 0x49f528: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x49f528u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_49f52c:
    // 0x49f52c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x49f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49f530:
    // 0x49f530: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_49f534:
    if (ctx->pc == 0x49F534u) {
        ctx->pc = 0x49F534u;
            // 0x49f534: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F538u;
        goto label_49f538;
    }
    ctx->pc = 0x49F530u;
    {
        const bool branch_taken_0x49f530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x49F534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F530u;
            // 0x49f534: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f530) {
            ctx->pc = 0x49F574u;
            goto label_49f574;
        }
    }
    ctx->pc = 0x49F538u;
label_49f538:
    // 0x49f538: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x49f538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49f53c:
    // 0x49f53c: 0x50a300f7  beql        $a1, $v1, . + 4 + (0xF7 << 2)
label_49f540:
    if (ctx->pc == 0x49F540u) {
        ctx->pc = 0x49F540u;
            // 0x49f540: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x49F544u;
        goto label_49f544;
    }
    ctx->pc = 0x49F53Cu;
    {
        const bool branch_taken_0x49f53c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x49f53c) {
            ctx->pc = 0x49F540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49F53Cu;
            // 0x49f540: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49F91Cu;
            goto label_49f91c;
        }
    }
    ctx->pc = 0x49F544u;
label_49f544:
    // 0x49f544: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x49f544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49f548:
    // 0x49f548: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_49f54c:
    if (ctx->pc == 0x49F54Cu) {
        ctx->pc = 0x49F54Cu;
            // 0x49f54c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x49F550u;
        goto label_49f550;
    }
    ctx->pc = 0x49F548u;
    {
        const bool branch_taken_0x49f548 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x49f548) {
            ctx->pc = 0x49F54Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49F548u;
            // 0x49f54c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49F558u;
            goto label_49f558;
        }
    }
    ctx->pc = 0x49F550u;
label_49f550:
    // 0x49f550: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_49f554:
    if (ctx->pc == 0x49F554u) {
        ctx->pc = 0x49F558u;
        goto label_49f558;
    }
    ctx->pc = 0x49F550u;
    {
        const bool branch_taken_0x49f550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f550) {
            ctx->pc = 0x49F918u;
            goto label_49f918;
        }
    }
    ctx->pc = 0x49F558u;
label_49f558:
    // 0x49f558: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x49f558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_49f55c:
    // 0x49f55c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x49f55cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_49f560:
    // 0x49f560: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x49f560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_49f564:
    // 0x49f564: 0x320f809  jalr        $t9
label_49f568:
    if (ctx->pc == 0x49F568u) {
        ctx->pc = 0x49F568u;
            // 0x49f568: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x49F56Cu;
        goto label_49f56c;
    }
    ctx->pc = 0x49F564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49F56Cu);
        ctx->pc = 0x49F568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F564u;
            // 0x49f568: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49F56Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49F56Cu; }
            if (ctx->pc != 0x49F56Cu) { return; }
        }
        }
    }
    ctx->pc = 0x49F56Cu;
label_49f56c:
    // 0x49f56c: 0x100000ea  b           . + 4 + (0xEA << 2)
label_49f570:
    if (ctx->pc == 0x49F570u) {
        ctx->pc = 0x49F574u;
        goto label_49f574;
    }
    ctx->pc = 0x49F56Cu;
    {
        const bool branch_taken_0x49f56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f56c) {
            ctx->pc = 0x49F918u;
            goto label_49f918;
        }
    }
    ctx->pc = 0x49F574u;
label_49f574:
    // 0x49f574: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x49f574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_49f578:
    // 0x49f578: 0x106000e7  beqz        $v1, . + 4 + (0xE7 << 2)
label_49f57c:
    if (ctx->pc == 0x49F57Cu) {
        ctx->pc = 0x49F57Cu;
            // 0x49f57c: 0x7fa300d0  sq          $v1, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
        ctx->pc = 0x49F580u;
        goto label_49f580;
    }
    ctx->pc = 0x49F578u;
    {
        const bool branch_taken_0x49f578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F578u;
            // 0x49f57c: 0x7fa300d0  sq          $v1, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f578) {
            ctx->pc = 0x49F918u;
            goto label_49f918;
        }
    }
    ctx->pc = 0x49F580u;
label_49f580:
    // 0x49f580: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x49f580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_49f584:
    // 0x49f584: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x49f584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_49f588:
    // 0x49f588: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x49f588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_49f58c:
    // 0x49f58c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x49f58cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_49f590:
    // 0x49f590: 0x8ebe0088  lw          $fp, 0x88($s5)
    ctx->pc = 0x49f590u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_49f594:
    // 0x49f594: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x49f594u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49f598:
    // 0x49f598: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x49f598u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49f59c:
    // 0x49f59c: 0x26a20090  addiu       $v0, $s5, 0x90
    ctx->pc = 0x49f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_49f5a0:
    // 0x49f5a0: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x49f5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_49f5a4:
    // 0x49f5a4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x49f5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_49f5a8:
    // 0x49f5a8: 0x8c62d120  lw          $v0, -0x2EE0($v1)
    ctx->pc = 0x49f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_49f5ac:
    // 0x49f5ac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x49f5acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_49f5b0:
    // 0x49f5b0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x49f5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_49f5b4:
    // 0x49f5b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49f5b8:
    // 0x49f5b8: 0x8ea20084  lw          $v0, 0x84($s5)
    ctx->pc = 0x49f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_49f5bc:
    // 0x49f5bc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x49f5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_49f5c0:
    // 0x49f5c0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x49f5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_49f5c4:
    // 0x49f5c4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x49f5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_49f5c8:
    // 0x49f5c8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x49f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_49f5cc:
    // 0x49f5cc: 0xc4540b78  lwc1        $f20, 0xB78($v0)
    ctx->pc = 0x49f5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_49f5d0:
    // 0x49f5d0: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x49f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_49f5d4:
    // 0x49f5d4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x49f5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_49f5d8:
    // 0x49f5d8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x49f5d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_49f5dc:
    // 0x49f5dc: 0xaea20090  sw          $v0, 0x90($s5)
    ctx->pc = 0x49f5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 144), GPR_U32(ctx, 2));
label_49f5e0:
    // 0x49f5e0: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x49f5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_49f5e4:
    // 0x49f5e4: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x49f5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_49f5e8:
    // 0x49f5e8: 0x8ea40074  lw          $a0, 0x74($s5)
    ctx->pc = 0x49f5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_49f5ec:
    // 0x49f5ec: 0x27a301cc  addiu       $v1, $sp, 0x1CC
    ctx->pc = 0x49f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
label_49f5f0:
    // 0x49f5f0: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x49f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_49f5f4:
    // 0x49f5f4: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x49f5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_49f5f8:
    // 0x49f5f8: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x49f5f8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49f5fc:
    // 0x49f5fc: 0xafa301c8  sw          $v1, 0x1C8($sp)
    ctx->pc = 0x49f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 3));
label_49f600:
    // 0x49f600: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x49f600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_49f604:
    // 0x49f604: 0xc0d63d8  jal         func_358F60
label_49f608:
    if (ctx->pc == 0x49F608u) {
        ctx->pc = 0x49F608u;
            // 0x49f608: 0xafa20130  sw          $v0, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
        ctx->pc = 0x49F60Cu;
        goto label_49f60c;
    }
    ctx->pc = 0x49F604u;
    SET_GPR_U32(ctx, 31, 0x49F60Cu);
    ctx->pc = 0x49F608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F604u;
            // 0x49f608: 0xafa20130  sw          $v0, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358F60u;
    if (runtime->hasFunction(0x358F60u)) {
        auto targetFn = runtime->lookupFunction(0x358F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F60Cu; }
        if (ctx->pc != 0x49F60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358F60_0x358f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F60Cu; }
        if (ctx->pc != 0x49F60Cu) { return; }
    }
    ctx->pc = 0x49F60Cu;
label_49f60c:
    // 0x49f60c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x49f60cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49f610:
    // 0x49f610: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x49f610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_49f614:
    // 0x49f614: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x49f614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_49f618:
    // 0x49f618: 0xc0d1c14  jal         func_347050
label_49f61c:
    if (ctx->pc == 0x49F61Cu) {
        ctx->pc = 0x49F61Cu;
            // 0x49f61c: 0x3c28821  addu        $s1, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->pc = 0x49F620u;
        goto label_49f620;
    }
    ctx->pc = 0x49F618u;
    SET_GPR_U32(ctx, 31, 0x49F620u);
    ctx->pc = 0x49F61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F618u;
            // 0x49f61c: 0x3c28821  addu        $s1, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F620u; }
        if (ctx->pc != 0x49F620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F620u; }
        if (ctx->pc != 0x49F620u) { return; }
    }
    ctx->pc = 0x49F620u;
label_49f620:
    // 0x49f620: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x49f620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49f624:
    // 0x49f624: 0xc04f278  jal         func_13C9E0
label_49f628:
    if (ctx->pc == 0x49F628u) {
        ctx->pc = 0x49F628u;
            // 0x49f628: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x49F62Cu;
        goto label_49f62c;
    }
    ctx->pc = 0x49F624u;
    SET_GPR_U32(ctx, 31, 0x49F62Cu);
    ctx->pc = 0x49F628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F624u;
            // 0x49f628: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F62Cu; }
        if (ctx->pc != 0x49F62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F62Cu; }
        if (ctx->pc != 0x49F62Cu) { return; }
    }
    ctx->pc = 0x49F62Cu;
label_49f62c:
    // 0x49f62c: 0x268400a0  addiu       $a0, $s4, 0xA0
    ctx->pc = 0x49f62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
label_49f630:
    // 0x49f630: 0xc04cce8  jal         func_1333A0
label_49f634:
    if (ctx->pc == 0x49F634u) {
        ctx->pc = 0x49F634u;
            // 0x49f634: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x49F638u;
        goto label_49f638;
    }
    ctx->pc = 0x49F630u;
    SET_GPR_U32(ctx, 31, 0x49F638u);
    ctx->pc = 0x49F634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F630u;
            // 0x49f634: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F638u; }
        if (ctx->pc != 0x49F638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F638u; }
        if (ctx->pc != 0x49F638u) { return; }
    }
    ctx->pc = 0x49F638u;
label_49f638:
    // 0x49f638: 0xc0d1c10  jal         func_347040
label_49f63c:
    if (ctx->pc == 0x49F63Cu) {
        ctx->pc = 0x49F63Cu;
            // 0x49f63c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F640u;
        goto label_49f640;
    }
    ctx->pc = 0x49F638u;
    SET_GPR_U32(ctx, 31, 0x49F640u);
    ctx->pc = 0x49F63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F638u;
            // 0x49f63c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F640u; }
        if (ctx->pc != 0x49F640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F640u; }
        if (ctx->pc != 0x49F640u) { return; }
    }
    ctx->pc = 0x49F640u;
label_49f640:
    // 0x49f640: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x49f640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49f644:
    // 0x49f644: 0xc04ce80  jal         func_133A00
label_49f648:
    if (ctx->pc == 0x49F648u) {
        ctx->pc = 0x49F648u;
            // 0x49f648: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x49F64Cu;
        goto label_49f64c;
    }
    ctx->pc = 0x49F644u;
    SET_GPR_U32(ctx, 31, 0x49F64Cu);
    ctx->pc = 0x49F648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F644u;
            // 0x49f648: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F64Cu; }
        if (ctx->pc != 0x49F64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F64Cu; }
        if (ctx->pc != 0x49F64Cu) { return; }
    }
    ctx->pc = 0x49F64Cu;
label_49f64c:
    // 0x49f64c: 0xc0d4108  jal         func_350420
label_49f650:
    if (ctx->pc == 0x49F650u) {
        ctx->pc = 0x49F654u;
        goto label_49f654;
    }
    ctx->pc = 0x49F64Cu;
    SET_GPR_U32(ctx, 31, 0x49F654u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F654u; }
        if (ctx->pc != 0x49F654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F654u; }
        if (ctx->pc != 0x49F654u) { return; }
    }
    ctx->pc = 0x49F654u;
label_49f654:
    // 0x49f654: 0xc0b36b4  jal         func_2CDAD0
label_49f658:
    if (ctx->pc == 0x49F658u) {
        ctx->pc = 0x49F658u;
            // 0x49f658: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F65Cu;
        goto label_49f65c;
    }
    ctx->pc = 0x49F654u;
    SET_GPR_U32(ctx, 31, 0x49F65Cu);
    ctx->pc = 0x49F658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F654u;
            // 0x49f658: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F65Cu; }
        if (ctx->pc != 0x49F65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F65Cu; }
        if (ctx->pc != 0x49F65Cu) { return; }
    }
    ctx->pc = 0x49F65Cu;
label_49f65c:
    // 0x49f65c: 0xc0b9c64  jal         func_2E7190
label_49f660:
    if (ctx->pc == 0x49F660u) {
        ctx->pc = 0x49F660u;
            // 0x49f660: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F664u;
        goto label_49f664;
    }
    ctx->pc = 0x49F65Cu;
    SET_GPR_U32(ctx, 31, 0x49F664u);
    ctx->pc = 0x49F660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F65Cu;
            // 0x49f660: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F664u; }
        if (ctx->pc != 0x49F664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F664u; }
        if (ctx->pc != 0x49F664u) { return; }
    }
    ctx->pc = 0x49F664u;
label_49f664:
    // 0x49f664: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x49f664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49f668:
    // 0x49f668: 0xc0d4104  jal         func_350410
label_49f66c:
    if (ctx->pc == 0x49F66Cu) {
        ctx->pc = 0x49F66Cu;
            // 0x49f66c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F670u;
        goto label_49f670;
    }
    ctx->pc = 0x49F668u;
    SET_GPR_U32(ctx, 31, 0x49F670u);
    ctx->pc = 0x49F66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F668u;
            // 0x49f66c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F670u; }
        if (ctx->pc != 0x49F670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F670u; }
        if (ctx->pc != 0x49F670u) { return; }
    }
    ctx->pc = 0x49F670u;
label_49f670:
    // 0x49f670: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x49f670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_49f674:
    // 0x49f674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49f674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49f678:
    // 0x49f678: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x49f678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49f67c:
    // 0x49f67c: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x49f67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_49f680:
    // 0x49f680: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x49f680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49f684:
    // 0x49f684: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x49f684u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49f688:
    // 0x49f688: 0xc0d40ac  jal         func_3502B0
label_49f68c:
    if (ctx->pc == 0x49F68Cu) {
        ctx->pc = 0x49F68Cu;
            // 0x49f68c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x49F690u;
        goto label_49f690;
    }
    ctx->pc = 0x49F688u;
    SET_GPR_U32(ctx, 31, 0x49F690u);
    ctx->pc = 0x49F68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F688u;
            // 0x49f68c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F690u; }
        if (ctx->pc != 0x49F690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F690u; }
        if (ctx->pc != 0x49F690u) { return; }
    }
    ctx->pc = 0x49F690u;
label_49f690:
    // 0x49f690: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x49f690u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_49f694:
    // 0x49f694: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_49f698:
    if (ctx->pc == 0x49F698u) {
        ctx->pc = 0x49F698u;
            // 0x49f698: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x49F69Cu;
        goto label_49f69c;
    }
    ctx->pc = 0x49F694u;
    {
        const bool branch_taken_0x49f694 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F694u;
            // 0x49f698: 0xae820044  sw          $v0, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f694) {
            ctx->pc = 0x49F6A8u;
            goto label_49f6a8;
        }
    }
    ctx->pc = 0x49F69Cu;
label_49f69c:
    // 0x49f69c: 0x10000038  b           . + 4 + (0x38 << 2)
label_49f6a0:
    if (ctx->pc == 0x49F6A0u) {
        ctx->pc = 0x49F6A0u;
            // 0x49f6a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F6A4u;
        goto label_49f6a4;
    }
    ctx->pc = 0x49F69Cu;
    {
        const bool branch_taken_0x49f69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F69Cu;
            // 0x49f6a0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f69c) {
            ctx->pc = 0x49F780u;
            goto label_49f780;
        }
    }
    ctx->pc = 0x49F6A4u;
label_49f6a4:
    // 0x49f6a4: 0x0  nop
    ctx->pc = 0x49f6a4u;
    // NOP
label_49f6a8:
    // 0x49f6a8: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x49f6a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_49f6ac:
    // 0x49f6ac: 0xc0d63d0  jal         func_358F40
label_49f6b0:
    if (ctx->pc == 0x49F6B0u) {
        ctx->pc = 0x49F6B0u;
            // 0x49f6b0: 0x26a40090  addiu       $a0, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->pc = 0x49F6B4u;
        goto label_49f6b4;
    }
    ctx->pc = 0x49F6ACu;
    SET_GPR_U32(ctx, 31, 0x49F6B4u);
    ctx->pc = 0x49F6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F6ACu;
            // 0x49f6b0: 0x26a40090  addiu       $a0, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358F40u;
    if (runtime->hasFunction(0x358F40u)) {
        auto targetFn = runtime->lookupFunction(0x358F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F6B4u; }
        if (ctx->pc != 0x49F6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358F40_0x358f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F6B4u; }
        if (ctx->pc != 0x49F6B4u) { return; }
    }
    ctx->pc = 0x49F6B4u;
label_49f6b4:
    // 0x49f6b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49f6b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49f6b8:
    // 0x49f6b8: 0x12130015  beq         $s0, $s3, . + 4 + (0x15 << 2)
label_49f6bc:
    if (ctx->pc == 0x49F6BCu) {
        ctx->pc = 0x49F6C0u;
        goto label_49f6c0;
    }
    ctx->pc = 0x49F6B8u;
    {
        const bool branch_taken_0x49f6b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x49f6b8) {
            ctx->pc = 0x49F710u;
            goto label_49f710;
        }
    }
    ctx->pc = 0x49F6C0u;
label_49f6c0:
    // 0x49f6c0: 0xc127e9c  jal         func_49FA70
label_49f6c4:
    if (ctx->pc == 0x49F6C4u) {
        ctx->pc = 0x49F6C4u;
            // 0x49f6c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F6C8u;
        goto label_49f6c8;
    }
    ctx->pc = 0x49F6C0u;
    SET_GPR_U32(ctx, 31, 0x49F6C8u);
    ctx->pc = 0x49F6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F6C0u;
            // 0x49f6c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49FA70u;
    if (runtime->hasFunction(0x49FA70u)) {
        auto targetFn = runtime->lookupFunction(0x49FA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F6C8u; }
        if (ctx->pc != 0x49F6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049FA70_0x49fa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F6C8u; }
        if (ctx->pc != 0x49F6C8u) { return; }
    }
    ctx->pc = 0x49F6C8u;
label_49f6c8:
    // 0x49f6c8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x49f6c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_49f6cc:
    // 0x49f6cc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_49f6d0:
    if (ctx->pc == 0x49F6D0u) {
        ctx->pc = 0x49F6D4u;
        goto label_49f6d4;
    }
    ctx->pc = 0x49F6CCu;
    {
        const bool branch_taken_0x49f6cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f6cc) {
            ctx->pc = 0x49F6F0u;
            goto label_49f6f0;
        }
    }
    ctx->pc = 0x49F6D4u;
label_49f6d4:
    // 0x49f6d4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x49f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_49f6d8:
    // 0x49f6d8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x49f6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_49f6dc:
    // 0x49f6dc: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x49f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_49f6e0:
    // 0x49f6e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49f6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49f6e4:
    // 0x49f6e4: 0xc127e84  jal         func_49FA10
label_49f6e8:
    if (ctx->pc == 0x49F6E8u) {
        ctx->pc = 0x49F6E8u;
            // 0x49f6e8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x49F6ECu;
        goto label_49f6ec;
    }
    ctx->pc = 0x49F6E4u;
    SET_GPR_U32(ctx, 31, 0x49F6ECu);
    ctx->pc = 0x49F6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F6E4u;
            // 0x49f6e8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (runtime->hasFunction(0x49FA10u)) {
        auto targetFn = runtime->lookupFunction(0x49FA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F6ECu; }
        if (ctx->pc != 0x49F6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049FA10_0x49fa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F6ECu; }
        if (ctx->pc != 0x49F6ECu) { return; }
    }
    ctx->pc = 0x49F6ECu;
label_49f6ec:
    // 0x49f6ec: 0x0  nop
    ctx->pc = 0x49f6ecu;
    // NOP
label_49f6f0:
    // 0x49f6f0: 0xc127e7c  jal         func_49F9F0
label_49f6f4:
    if (ctx->pc == 0x49F6F4u) {
        ctx->pc = 0x49F6F8u;
        goto label_49f6f8;
    }
    ctx->pc = 0x49F6F0u;
    SET_GPR_U32(ctx, 31, 0x49F6F8u);
    ctx->pc = 0x49F9F0u;
    if (runtime->hasFunction(0x49F9F0u)) {
        auto targetFn = runtime->lookupFunction(0x49F9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F6F8u; }
        if (ctx->pc != 0x49F6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049F9F0_0x49f9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F6F8u; }
        if (ctx->pc != 0x49F6F8u) { return; }
    }
    ctx->pc = 0x49F6F8u;
label_49f6f8:
    // 0x49f6f8: 0xc04e738  jal         func_139CE0
label_49f6fc:
    if (ctx->pc == 0x49F6FCu) {
        ctx->pc = 0x49F6FCu;
            // 0x49f6fc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x49F700u;
        goto label_49f700;
    }
    ctx->pc = 0x49F6F8u;
    SET_GPR_U32(ctx, 31, 0x49F700u);
    ctx->pc = 0x49F6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F6F8u;
            // 0x49f6fc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F700u; }
        if (ctx->pc != 0x49F700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F700u; }
        if (ctx->pc != 0x49F700u) { return; }
    }
    ctx->pc = 0x49F700u;
label_49f700:
    // 0x49f700: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x49f700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_49f704:
    // 0x49f704: 0xc0d63a8  jal         func_358EA0
label_49f708:
    if (ctx->pc == 0x49F708u) {
        ctx->pc = 0x49F708u;
            // 0x49f708: 0x26a40090  addiu       $a0, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->pc = 0x49F70Cu;
        goto label_49f70c;
    }
    ctx->pc = 0x49F704u;
    SET_GPR_U32(ctx, 31, 0x49F70Cu);
    ctx->pc = 0x49F708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F704u;
            // 0x49f708: 0x26a40090  addiu       $a0, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358EA0u;
    if (runtime->hasFunction(0x358EA0u)) {
        auto targetFn = runtime->lookupFunction(0x358EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F70Cu; }
        if (ctx->pc != 0x49F70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358EA0_0x358ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F70Cu; }
        if (ctx->pc != 0x49F70Cu) { return; }
    }
    ctx->pc = 0x49F70Cu;
label_49f70c:
    // 0x49f70c: 0x0  nop
    ctx->pc = 0x49f70cu;
    // NOP
label_49f710:
    // 0x49f710: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x49f710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49f714:
    // 0x49f714: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x49f714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_49f718:
    // 0x49f718: 0xc127e54  jal         func_49F950
label_49f71c:
    if (ctx->pc == 0x49F71Cu) {
        ctx->pc = 0x49F71Cu;
            // 0x49f71c: 0x27a601c8  addiu       $a2, $sp, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
        ctx->pc = 0x49F720u;
        goto label_49f720;
    }
    ctx->pc = 0x49F718u;
    SET_GPR_U32(ctx, 31, 0x49F720u);
    ctx->pc = 0x49F71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F718u;
            // 0x49f71c: 0x27a601c8  addiu       $a2, $sp, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49F950u;
    if (runtime->hasFunction(0x49F950u)) {
        auto targetFn = runtime->lookupFunction(0x49F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F720u; }
        if (ctx->pc != 0x49F720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049F950_0x49f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F720u; }
        if (ctx->pc != 0x49F720u) { return; }
    }
    ctx->pc = 0x49F720u;
label_49f720:
    // 0x49f720: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x49f720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_49f724:
    // 0x49f724: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x49f724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_49f728:
    // 0x49f728: 0xc04cd60  jal         func_133580
label_49f72c:
    if (ctx->pc == 0x49F72Cu) {
        ctx->pc = 0x49F72Cu;
            // 0x49f72c: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x49F730u;
        goto label_49f730;
    }
    ctx->pc = 0x49F728u;
    SET_GPR_U32(ctx, 31, 0x49F730u);
    ctx->pc = 0x49F72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F728u;
            // 0x49f72c: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F730u; }
        if (ctx->pc != 0x49F730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F730u; }
        if (ctx->pc != 0x49F730u) { return; }
    }
    ctx->pc = 0x49F730u;
label_49f730:
    // 0x49f730: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x49f730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_49f734:
    // 0x49f734: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x49f734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_49f738:
    // 0x49f738: 0xc04e4a4  jal         func_139290
label_49f73c:
    if (ctx->pc == 0x49F73Cu) {
        ctx->pc = 0x49F73Cu;
            // 0x49f73c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F740u;
        goto label_49f740;
    }
    ctx->pc = 0x49F738u;
    SET_GPR_U32(ctx, 31, 0x49F740u);
    ctx->pc = 0x49F73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F738u;
            // 0x49f73c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F740u; }
        if (ctx->pc != 0x49F740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F740u; }
        if (ctx->pc != 0x49F740u) { return; }
    }
    ctx->pc = 0x49F740u;
label_49f740:
    // 0x49f740: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x49f740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_49f744:
    // 0x49f744: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49f744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49f748:
    // 0x49f748: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x49f748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_49f74c:
    // 0x49f74c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x49f74cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_49f750:
    // 0x49f750: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x49f750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_49f754:
    // 0x49f754: 0x320f809  jalr        $t9
label_49f758:
    if (ctx->pc == 0x49F758u) {
        ctx->pc = 0x49F758u;
            // 0x49f758: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F75Cu;
        goto label_49f75c;
    }
    ctx->pc = 0x49F754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49F75Cu);
        ctx->pc = 0x49F758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F754u;
            // 0x49f758: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49F75Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49F75Cu; }
            if (ctx->pc != 0x49F75Cu) { return; }
        }
        }
    }
    ctx->pc = 0x49F75Cu;
label_49f75c:
    // 0x49f75c: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x49f75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_49f760:
    // 0x49f760: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x49f760u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_49f764:
    // 0x49f764: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x49f764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_49f768:
    // 0x49f768: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x49f768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49f76c:
    // 0x49f76c: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x49f76cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_49f770:
    // 0x49f770: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x49f770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_49f774:
    // 0x49f774: 0xc04cfcc  jal         func_133F30
label_49f778:
    if (ctx->pc == 0x49F778u) {
        ctx->pc = 0x49F778u;
            // 0x49f778: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F77Cu;
        goto label_49f77c;
    }
    ctx->pc = 0x49F774u;
    SET_GPR_U32(ctx, 31, 0x49F77Cu);
    ctx->pc = 0x49F778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F774u;
            // 0x49f778: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F77Cu; }
        if (ctx->pc != 0x49F77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F77Cu; }
        if (ctx->pc != 0x49F77Cu) { return; }
    }
    ctx->pc = 0x49F77Cu;
label_49f77c:
    // 0x49f77c: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x49f77cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_49f780:
    // 0x49f780: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
label_49f784:
    if (ctx->pc == 0x49F784u) {
        ctx->pc = 0x49F788u;
        goto label_49f788;
    }
    ctx->pc = 0x49F780u;
    {
        const bool branch_taken_0x49f780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f780) {
            ctx->pc = 0x49F8A8u;
            goto label_49f8a8;
        }
    }
    ctx->pc = 0x49F788u;
label_49f788:
    // 0x49f788: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x49f788u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_49f78c:
    // 0x49f78c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49f78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49f790:
    // 0x49f790: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x49f790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49f794:
    // 0x49f794: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
label_49f798:
    if (ctx->pc == 0x49F798u) {
        ctx->pc = 0x49F79Cu;
        goto label_49f79c;
    }
    ctx->pc = 0x49F794u;
    {
        const bool branch_taken_0x49f794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x49f794) {
            ctx->pc = 0x49F858u;
            goto label_49f858;
        }
    }
    ctx->pc = 0x49F79Cu;
label_49f79c:
    // 0x49f79c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49f79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49f7a0:
    // 0x49f7a0: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_49f7a4:
    if (ctx->pc == 0x49F7A4u) {
        ctx->pc = 0x49F7A8u;
        goto label_49f7a8;
    }
    ctx->pc = 0x49F7A0u;
    {
        const bool branch_taken_0x49f7a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x49f7a0) {
            ctx->pc = 0x49F808u;
            goto label_49f808;
        }
    }
    ctx->pc = 0x49F7A8u;
label_49f7a8:
    // 0x49f7a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_49f7ac:
    if (ctx->pc == 0x49F7ACu) {
        ctx->pc = 0x49F7B0u;
        goto label_49f7b0;
    }
    ctx->pc = 0x49F7A8u;
    {
        const bool branch_taken_0x49f7a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f7a8) {
            ctx->pc = 0x49F7B8u;
            goto label_49f7b8;
        }
    }
    ctx->pc = 0x49F7B0u;
label_49f7b0:
    // 0x49f7b0: 0x1000003d  b           . + 4 + (0x3D << 2)
label_49f7b4:
    if (ctx->pc == 0x49F7B4u) {
        ctx->pc = 0x49F7B8u;
        goto label_49f7b8;
    }
    ctx->pc = 0x49F7B0u;
    {
        const bool branch_taken_0x49f7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49f7b0) {
            ctx->pc = 0x49F8A8u;
            goto label_49f8a8;
        }
    }
    ctx->pc = 0x49F7B8u;
label_49f7b8:
    // 0x49f7b8: 0x8eb00094  lw          $s0, 0x94($s5)
    ctx->pc = 0x49f7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_49f7bc:
    // 0x49f7bc: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x49f7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_49f7c0:
    // 0x49f7c0: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x49f7c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_49f7c4:
    // 0x49f7c4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x49f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_49f7c8:
    // 0x49f7c8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x49f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_49f7cc:
    // 0x49f7cc: 0xc04cce8  jal         func_1333A0
label_49f7d0:
    if (ctx->pc == 0x49F7D0u) {
        ctx->pc = 0x49F7D0u;
            // 0x49f7d0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x49F7D4u;
        goto label_49f7d4;
    }
    ctx->pc = 0x49F7CCu;
    SET_GPR_U32(ctx, 31, 0x49F7D4u);
    ctx->pc = 0x49F7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F7CCu;
            // 0x49f7d0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F7D4u; }
        if (ctx->pc != 0x49F7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F7D4u; }
        if (ctx->pc != 0x49F7D4u) { return; }
    }
    ctx->pc = 0x49F7D4u;
label_49f7d4:
    // 0x49f7d4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x49f7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_49f7d8:
    // 0x49f7d8: 0x86050066  lh          $a1, 0x66($s0)
    ctx->pc = 0x49f7d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_49f7dc:
    // 0x49f7dc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x49f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_49f7e0:
    // 0x49f7e0: 0x86040064  lh          $a0, 0x64($s0)
    ctx->pc = 0x49f7e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_49f7e4:
    // 0x49f7e4: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x49f7e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_49f7e8:
    // 0x49f7e8: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x49f7e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_49f7ec:
    // 0x49f7ec: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x49f7ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_49f7f0:
    // 0x49f7f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x49f7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_49f7f4:
    // 0x49f7f4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x49f7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_49f7f8:
    // 0x49f7f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x49f7f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_49f7fc:
    // 0x49f7fc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x49f7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_49f800:
    // 0x49f800: 0x10000029  b           . + 4 + (0x29 << 2)
label_49f804:
    if (ctx->pc == 0x49F804u) {
        ctx->pc = 0x49F804u;
            // 0x49f804: 0xa6030066  sh          $v1, 0x66($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x49F808u;
        goto label_49f808;
    }
    ctx->pc = 0x49F800u;
    {
        const bool branch_taken_0x49f800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F800u;
            // 0x49f804: 0xa6030066  sh          $v1, 0x66($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f800) {
            ctx->pc = 0x49F8A8u;
            goto label_49f8a8;
        }
    }
    ctx->pc = 0x49F808u;
label_49f808:
    // 0x49f808: 0x8eb00098  lw          $s0, 0x98($s5)
    ctx->pc = 0x49f808u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 152)));
label_49f80c:
    // 0x49f80c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x49f80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_49f810:
    // 0x49f810: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x49f810u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_49f814:
    // 0x49f814: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x49f814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_49f818:
    // 0x49f818: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x49f818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_49f81c:
    // 0x49f81c: 0xc04cce8  jal         func_1333A0
label_49f820:
    if (ctx->pc == 0x49F820u) {
        ctx->pc = 0x49F820u;
            // 0x49f820: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x49F824u;
        goto label_49f824;
    }
    ctx->pc = 0x49F81Cu;
    SET_GPR_U32(ctx, 31, 0x49F824u);
    ctx->pc = 0x49F820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F81Cu;
            // 0x49f820: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F824u; }
        if (ctx->pc != 0x49F824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F824u; }
        if (ctx->pc != 0x49F824u) { return; }
    }
    ctx->pc = 0x49F824u;
label_49f824:
    // 0x49f824: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x49f824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_49f828:
    // 0x49f828: 0x86050066  lh          $a1, 0x66($s0)
    ctx->pc = 0x49f828u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_49f82c:
    // 0x49f82c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x49f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_49f830:
    // 0x49f830: 0x86040064  lh          $a0, 0x64($s0)
    ctx->pc = 0x49f830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_49f834:
    // 0x49f834: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x49f834u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_49f838:
    // 0x49f838: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x49f838u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_49f83c:
    // 0x49f83c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x49f83cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_49f840:
    // 0x49f840: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x49f840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_49f844:
    // 0x49f844: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x49f844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_49f848:
    // 0x49f848: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x49f848u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_49f84c:
    // 0x49f84c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x49f84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_49f850:
    // 0x49f850: 0x10000015  b           . + 4 + (0x15 << 2)
label_49f854:
    if (ctx->pc == 0x49F854u) {
        ctx->pc = 0x49F854u;
            // 0x49f854: 0xa6030066  sh          $v1, 0x66($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x49F858u;
        goto label_49f858;
    }
    ctx->pc = 0x49F850u;
    {
        const bool branch_taken_0x49f850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F850u;
            // 0x49f854: 0xa6030066  sh          $v1, 0x66($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f850) {
            ctx->pc = 0x49F8A8u;
            goto label_49f8a8;
        }
    }
    ctx->pc = 0x49F858u;
label_49f858:
    // 0x49f858: 0x8eb0009c  lw          $s0, 0x9C($s5)
    ctx->pc = 0x49f858u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
label_49f85c:
    // 0x49f85c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x49f85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_49f860:
    // 0x49f860: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x49f860u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_49f864:
    // 0x49f864: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x49f864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_49f868:
    // 0x49f868: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x49f868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_49f86c:
    // 0x49f86c: 0xc04cce8  jal         func_1333A0
label_49f870:
    if (ctx->pc == 0x49F870u) {
        ctx->pc = 0x49F870u;
            // 0x49f870: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x49F874u;
        goto label_49f874;
    }
    ctx->pc = 0x49F86Cu;
    SET_GPR_U32(ctx, 31, 0x49F874u);
    ctx->pc = 0x49F870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F86Cu;
            // 0x49f870: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F874u; }
        if (ctx->pc != 0x49F874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F874u; }
        if (ctx->pc != 0x49F874u) { return; }
    }
    ctx->pc = 0x49F874u;
label_49f874:
    // 0x49f874: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x49f874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_49f878:
    // 0x49f878: 0x86050066  lh          $a1, 0x66($s0)
    ctx->pc = 0x49f878u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_49f87c:
    // 0x49f87c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x49f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_49f880:
    // 0x49f880: 0x86040064  lh          $a0, 0x64($s0)
    ctx->pc = 0x49f880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_49f884:
    // 0x49f884: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x49f884u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_49f888:
    // 0x49f888: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x49f888u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_49f88c:
    // 0x49f88c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x49f88cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_49f890:
    // 0x49f890: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x49f890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_49f894:
    // 0x49f894: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x49f894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_49f898:
    // 0x49f898: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x49f898u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_49f89c:
    // 0x49f89c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x49f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_49f8a0:
    // 0x49f8a0: 0xa6030066  sh          $v1, 0x66($s0)
    ctx->pc = 0x49f8a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
label_49f8a4:
    // 0x49f8a4: 0x0  nop
    ctx->pc = 0x49f8a4u;
    // NOP
label_49f8a8:
    // 0x49f8a8: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x49f8a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_49f8ac:
    // 0x49f8ac: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x49f8acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_49f8b0:
    // 0x49f8b0: 0x2c3182b  sltu        $v1, $s6, $v1
    ctx->pc = 0x49f8b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_49f8b4:
    // 0x49f8b4: 0x1460ff4c  bnez        $v1, . + 4 + (-0xB4 << 2)
label_49f8b8:
    if (ctx->pc == 0x49F8B8u) {
        ctx->pc = 0x49F8B8u;
            // 0x49f8b8: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->pc = 0x49F8BCu;
        goto label_49f8bc;
    }
    ctx->pc = 0x49F8B4u;
    {
        const bool branch_taken_0x49f8b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F8B4u;
            // 0x49f8b8: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f8b4) {
            ctx->pc = 0x49F5E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49f5e8;
        }
    }
    ctx->pc = 0x49F8BCu;
label_49f8bc:
    // 0x49f8bc: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x49f8bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_49f8c0:
    // 0x49f8c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49f8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49f8c4:
    // 0x49f8c4: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x49f8c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_49f8c8:
    // 0x49f8c8: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
label_49f8cc:
    if (ctx->pc == 0x49F8CCu) {
        ctx->pc = 0x49F8D0u;
        goto label_49f8d0;
    }
    ctx->pc = 0x49F8C8u;
    {
        const bool branch_taken_0x49f8c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x49f8c8) {
            ctx->pc = 0x49F918u;
            goto label_49f918;
        }
    }
    ctx->pc = 0x49F8D0u;
label_49f8d0:
    // 0x49f8d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49f8d4:
    // 0x49f8d4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x49f8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_49f8d8:
    // 0x49f8d8: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x49f8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_49f8dc:
    // 0x49f8dc: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_49f8e0:
    if (ctx->pc == 0x49F8E0u) {
        ctx->pc = 0x49F8E0u;
            // 0x49f8e0: 0x3c48021  addu        $s0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->pc = 0x49F8E4u;
        goto label_49f8e4;
    }
    ctx->pc = 0x49F8DCu;
    {
        const bool branch_taken_0x49f8dc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x49F8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F8DCu;
            // 0x49f8e0: 0x3c48021  addu        $s0, $fp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f8dc) {
            ctx->pc = 0x49F918u;
            goto label_49f918;
        }
    }
    ctx->pc = 0x49F8E4u;
label_49f8e4:
    // 0x49f8e4: 0xc04e738  jal         func_139CE0
label_49f8e8:
    if (ctx->pc == 0x49F8E8u) {
        ctx->pc = 0x49F8E8u;
            // 0x49f8e8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x49F8ECu;
        goto label_49f8ec;
    }
    ctx->pc = 0x49F8E4u;
    SET_GPR_U32(ctx, 31, 0x49F8ECu);
    ctx->pc = 0x49F8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F8E4u;
            // 0x49f8e8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F8ECu; }
        if (ctx->pc != 0x49F8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F8ECu; }
        if (ctx->pc != 0x49F8ECu) { return; }
    }
    ctx->pc = 0x49F8ECu;
label_49f8ec:
    // 0x49f8ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49f8f0:
    // 0x49f8f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x49f8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49f8f4:
    // 0x49f8f4: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x49f8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_49f8f8:
    // 0x49f8f8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x49f8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_49f8fc:
    // 0x49f8fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x49f8fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49f900:
    // 0x49f900: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49f900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49f904:
    // 0x49f904: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x49f904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_49f908:
    // 0x49f908: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49f908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49f90c:
    // 0x49f90c: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x49f90cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_49f910:
    // 0x49f910: 0xc055d28  jal         func_1574A0
label_49f914:
    if (ctx->pc == 0x49F914u) {
        ctx->pc = 0x49F914u;
            // 0x49f914: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49F918u;
        goto label_49f918;
    }
    ctx->pc = 0x49F910u;
    SET_GPR_U32(ctx, 31, 0x49F918u);
    ctx->pc = 0x49F914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49F910u;
            // 0x49f914: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F918u; }
        if (ctx->pc != 0x49F918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49F918u; }
        if (ctx->pc != 0x49F918u) { return; }
    }
    ctx->pc = 0x49F918u;
label_49f918:
    // 0x49f918: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x49f918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_49f91c:
    // 0x49f91c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x49f91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_49f920:
    // 0x49f920: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x49f920u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_49f924:
    // 0x49f924: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x49f924u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_49f928:
    // 0x49f928: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x49f928u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_49f92c:
    // 0x49f92c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x49f92cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_49f930:
    // 0x49f930: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x49f930u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_49f934:
    // 0x49f934: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x49f934u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49f938:
    // 0x49f938: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x49f938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49f93c:
    // 0x49f93c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49f93cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49f940:
    // 0x49f940: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x49f940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49f944:
    // 0x49f944: 0x3e00008  jr          $ra
label_49f948:
    if (ctx->pc == 0x49F948u) {
        ctx->pc = 0x49F948u;
            // 0x49f948: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x49F94Cu;
        goto label_49f94c;
    }
    ctx->pc = 0x49F944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F944u;
            // 0x49f948: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49F94Cu;
label_49f94c:
    // 0x49f94c: 0x0  nop
    ctx->pc = 0x49f94cu;
    // NOP
}
