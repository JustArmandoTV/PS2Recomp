#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051F400
// Address: 0x51f400 - 0x51fde0
void sub_0051F400_0x51f400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051F400_0x51f400");
#endif

    switch (ctx->pc) {
        case 0x51f400u: goto label_51f400;
        case 0x51f404u: goto label_51f404;
        case 0x51f408u: goto label_51f408;
        case 0x51f40cu: goto label_51f40c;
        case 0x51f410u: goto label_51f410;
        case 0x51f414u: goto label_51f414;
        case 0x51f418u: goto label_51f418;
        case 0x51f41cu: goto label_51f41c;
        case 0x51f420u: goto label_51f420;
        case 0x51f424u: goto label_51f424;
        case 0x51f428u: goto label_51f428;
        case 0x51f42cu: goto label_51f42c;
        case 0x51f430u: goto label_51f430;
        case 0x51f434u: goto label_51f434;
        case 0x51f438u: goto label_51f438;
        case 0x51f43cu: goto label_51f43c;
        case 0x51f440u: goto label_51f440;
        case 0x51f444u: goto label_51f444;
        case 0x51f448u: goto label_51f448;
        case 0x51f44cu: goto label_51f44c;
        case 0x51f450u: goto label_51f450;
        case 0x51f454u: goto label_51f454;
        case 0x51f458u: goto label_51f458;
        case 0x51f45cu: goto label_51f45c;
        case 0x51f460u: goto label_51f460;
        case 0x51f464u: goto label_51f464;
        case 0x51f468u: goto label_51f468;
        case 0x51f46cu: goto label_51f46c;
        case 0x51f470u: goto label_51f470;
        case 0x51f474u: goto label_51f474;
        case 0x51f478u: goto label_51f478;
        case 0x51f47cu: goto label_51f47c;
        case 0x51f480u: goto label_51f480;
        case 0x51f484u: goto label_51f484;
        case 0x51f488u: goto label_51f488;
        case 0x51f48cu: goto label_51f48c;
        case 0x51f490u: goto label_51f490;
        case 0x51f494u: goto label_51f494;
        case 0x51f498u: goto label_51f498;
        case 0x51f49cu: goto label_51f49c;
        case 0x51f4a0u: goto label_51f4a0;
        case 0x51f4a4u: goto label_51f4a4;
        case 0x51f4a8u: goto label_51f4a8;
        case 0x51f4acu: goto label_51f4ac;
        case 0x51f4b0u: goto label_51f4b0;
        case 0x51f4b4u: goto label_51f4b4;
        case 0x51f4b8u: goto label_51f4b8;
        case 0x51f4bcu: goto label_51f4bc;
        case 0x51f4c0u: goto label_51f4c0;
        case 0x51f4c4u: goto label_51f4c4;
        case 0x51f4c8u: goto label_51f4c8;
        case 0x51f4ccu: goto label_51f4cc;
        case 0x51f4d0u: goto label_51f4d0;
        case 0x51f4d4u: goto label_51f4d4;
        case 0x51f4d8u: goto label_51f4d8;
        case 0x51f4dcu: goto label_51f4dc;
        case 0x51f4e0u: goto label_51f4e0;
        case 0x51f4e4u: goto label_51f4e4;
        case 0x51f4e8u: goto label_51f4e8;
        case 0x51f4ecu: goto label_51f4ec;
        case 0x51f4f0u: goto label_51f4f0;
        case 0x51f4f4u: goto label_51f4f4;
        case 0x51f4f8u: goto label_51f4f8;
        case 0x51f4fcu: goto label_51f4fc;
        case 0x51f500u: goto label_51f500;
        case 0x51f504u: goto label_51f504;
        case 0x51f508u: goto label_51f508;
        case 0x51f50cu: goto label_51f50c;
        case 0x51f510u: goto label_51f510;
        case 0x51f514u: goto label_51f514;
        case 0x51f518u: goto label_51f518;
        case 0x51f51cu: goto label_51f51c;
        case 0x51f520u: goto label_51f520;
        case 0x51f524u: goto label_51f524;
        case 0x51f528u: goto label_51f528;
        case 0x51f52cu: goto label_51f52c;
        case 0x51f530u: goto label_51f530;
        case 0x51f534u: goto label_51f534;
        case 0x51f538u: goto label_51f538;
        case 0x51f53cu: goto label_51f53c;
        case 0x51f540u: goto label_51f540;
        case 0x51f544u: goto label_51f544;
        case 0x51f548u: goto label_51f548;
        case 0x51f54cu: goto label_51f54c;
        case 0x51f550u: goto label_51f550;
        case 0x51f554u: goto label_51f554;
        case 0x51f558u: goto label_51f558;
        case 0x51f55cu: goto label_51f55c;
        case 0x51f560u: goto label_51f560;
        case 0x51f564u: goto label_51f564;
        case 0x51f568u: goto label_51f568;
        case 0x51f56cu: goto label_51f56c;
        case 0x51f570u: goto label_51f570;
        case 0x51f574u: goto label_51f574;
        case 0x51f578u: goto label_51f578;
        case 0x51f57cu: goto label_51f57c;
        case 0x51f580u: goto label_51f580;
        case 0x51f584u: goto label_51f584;
        case 0x51f588u: goto label_51f588;
        case 0x51f58cu: goto label_51f58c;
        case 0x51f590u: goto label_51f590;
        case 0x51f594u: goto label_51f594;
        case 0x51f598u: goto label_51f598;
        case 0x51f59cu: goto label_51f59c;
        case 0x51f5a0u: goto label_51f5a0;
        case 0x51f5a4u: goto label_51f5a4;
        case 0x51f5a8u: goto label_51f5a8;
        case 0x51f5acu: goto label_51f5ac;
        case 0x51f5b0u: goto label_51f5b0;
        case 0x51f5b4u: goto label_51f5b4;
        case 0x51f5b8u: goto label_51f5b8;
        case 0x51f5bcu: goto label_51f5bc;
        case 0x51f5c0u: goto label_51f5c0;
        case 0x51f5c4u: goto label_51f5c4;
        case 0x51f5c8u: goto label_51f5c8;
        case 0x51f5ccu: goto label_51f5cc;
        case 0x51f5d0u: goto label_51f5d0;
        case 0x51f5d4u: goto label_51f5d4;
        case 0x51f5d8u: goto label_51f5d8;
        case 0x51f5dcu: goto label_51f5dc;
        case 0x51f5e0u: goto label_51f5e0;
        case 0x51f5e4u: goto label_51f5e4;
        case 0x51f5e8u: goto label_51f5e8;
        case 0x51f5ecu: goto label_51f5ec;
        case 0x51f5f0u: goto label_51f5f0;
        case 0x51f5f4u: goto label_51f5f4;
        case 0x51f5f8u: goto label_51f5f8;
        case 0x51f5fcu: goto label_51f5fc;
        case 0x51f600u: goto label_51f600;
        case 0x51f604u: goto label_51f604;
        case 0x51f608u: goto label_51f608;
        case 0x51f60cu: goto label_51f60c;
        case 0x51f610u: goto label_51f610;
        case 0x51f614u: goto label_51f614;
        case 0x51f618u: goto label_51f618;
        case 0x51f61cu: goto label_51f61c;
        case 0x51f620u: goto label_51f620;
        case 0x51f624u: goto label_51f624;
        case 0x51f628u: goto label_51f628;
        case 0x51f62cu: goto label_51f62c;
        case 0x51f630u: goto label_51f630;
        case 0x51f634u: goto label_51f634;
        case 0x51f638u: goto label_51f638;
        case 0x51f63cu: goto label_51f63c;
        case 0x51f640u: goto label_51f640;
        case 0x51f644u: goto label_51f644;
        case 0x51f648u: goto label_51f648;
        case 0x51f64cu: goto label_51f64c;
        case 0x51f650u: goto label_51f650;
        case 0x51f654u: goto label_51f654;
        case 0x51f658u: goto label_51f658;
        case 0x51f65cu: goto label_51f65c;
        case 0x51f660u: goto label_51f660;
        case 0x51f664u: goto label_51f664;
        case 0x51f668u: goto label_51f668;
        case 0x51f66cu: goto label_51f66c;
        case 0x51f670u: goto label_51f670;
        case 0x51f674u: goto label_51f674;
        case 0x51f678u: goto label_51f678;
        case 0x51f67cu: goto label_51f67c;
        case 0x51f680u: goto label_51f680;
        case 0x51f684u: goto label_51f684;
        case 0x51f688u: goto label_51f688;
        case 0x51f68cu: goto label_51f68c;
        case 0x51f690u: goto label_51f690;
        case 0x51f694u: goto label_51f694;
        case 0x51f698u: goto label_51f698;
        case 0x51f69cu: goto label_51f69c;
        case 0x51f6a0u: goto label_51f6a0;
        case 0x51f6a4u: goto label_51f6a4;
        case 0x51f6a8u: goto label_51f6a8;
        case 0x51f6acu: goto label_51f6ac;
        case 0x51f6b0u: goto label_51f6b0;
        case 0x51f6b4u: goto label_51f6b4;
        case 0x51f6b8u: goto label_51f6b8;
        case 0x51f6bcu: goto label_51f6bc;
        case 0x51f6c0u: goto label_51f6c0;
        case 0x51f6c4u: goto label_51f6c4;
        case 0x51f6c8u: goto label_51f6c8;
        case 0x51f6ccu: goto label_51f6cc;
        case 0x51f6d0u: goto label_51f6d0;
        case 0x51f6d4u: goto label_51f6d4;
        case 0x51f6d8u: goto label_51f6d8;
        case 0x51f6dcu: goto label_51f6dc;
        case 0x51f6e0u: goto label_51f6e0;
        case 0x51f6e4u: goto label_51f6e4;
        case 0x51f6e8u: goto label_51f6e8;
        case 0x51f6ecu: goto label_51f6ec;
        case 0x51f6f0u: goto label_51f6f0;
        case 0x51f6f4u: goto label_51f6f4;
        case 0x51f6f8u: goto label_51f6f8;
        case 0x51f6fcu: goto label_51f6fc;
        case 0x51f700u: goto label_51f700;
        case 0x51f704u: goto label_51f704;
        case 0x51f708u: goto label_51f708;
        case 0x51f70cu: goto label_51f70c;
        case 0x51f710u: goto label_51f710;
        case 0x51f714u: goto label_51f714;
        case 0x51f718u: goto label_51f718;
        case 0x51f71cu: goto label_51f71c;
        case 0x51f720u: goto label_51f720;
        case 0x51f724u: goto label_51f724;
        case 0x51f728u: goto label_51f728;
        case 0x51f72cu: goto label_51f72c;
        case 0x51f730u: goto label_51f730;
        case 0x51f734u: goto label_51f734;
        case 0x51f738u: goto label_51f738;
        case 0x51f73cu: goto label_51f73c;
        case 0x51f740u: goto label_51f740;
        case 0x51f744u: goto label_51f744;
        case 0x51f748u: goto label_51f748;
        case 0x51f74cu: goto label_51f74c;
        case 0x51f750u: goto label_51f750;
        case 0x51f754u: goto label_51f754;
        case 0x51f758u: goto label_51f758;
        case 0x51f75cu: goto label_51f75c;
        case 0x51f760u: goto label_51f760;
        case 0x51f764u: goto label_51f764;
        case 0x51f768u: goto label_51f768;
        case 0x51f76cu: goto label_51f76c;
        case 0x51f770u: goto label_51f770;
        case 0x51f774u: goto label_51f774;
        case 0x51f778u: goto label_51f778;
        case 0x51f77cu: goto label_51f77c;
        case 0x51f780u: goto label_51f780;
        case 0x51f784u: goto label_51f784;
        case 0x51f788u: goto label_51f788;
        case 0x51f78cu: goto label_51f78c;
        case 0x51f790u: goto label_51f790;
        case 0x51f794u: goto label_51f794;
        case 0x51f798u: goto label_51f798;
        case 0x51f79cu: goto label_51f79c;
        case 0x51f7a0u: goto label_51f7a0;
        case 0x51f7a4u: goto label_51f7a4;
        case 0x51f7a8u: goto label_51f7a8;
        case 0x51f7acu: goto label_51f7ac;
        case 0x51f7b0u: goto label_51f7b0;
        case 0x51f7b4u: goto label_51f7b4;
        case 0x51f7b8u: goto label_51f7b8;
        case 0x51f7bcu: goto label_51f7bc;
        case 0x51f7c0u: goto label_51f7c0;
        case 0x51f7c4u: goto label_51f7c4;
        case 0x51f7c8u: goto label_51f7c8;
        case 0x51f7ccu: goto label_51f7cc;
        case 0x51f7d0u: goto label_51f7d0;
        case 0x51f7d4u: goto label_51f7d4;
        case 0x51f7d8u: goto label_51f7d8;
        case 0x51f7dcu: goto label_51f7dc;
        case 0x51f7e0u: goto label_51f7e0;
        case 0x51f7e4u: goto label_51f7e4;
        case 0x51f7e8u: goto label_51f7e8;
        case 0x51f7ecu: goto label_51f7ec;
        case 0x51f7f0u: goto label_51f7f0;
        case 0x51f7f4u: goto label_51f7f4;
        case 0x51f7f8u: goto label_51f7f8;
        case 0x51f7fcu: goto label_51f7fc;
        case 0x51f800u: goto label_51f800;
        case 0x51f804u: goto label_51f804;
        case 0x51f808u: goto label_51f808;
        case 0x51f80cu: goto label_51f80c;
        case 0x51f810u: goto label_51f810;
        case 0x51f814u: goto label_51f814;
        case 0x51f818u: goto label_51f818;
        case 0x51f81cu: goto label_51f81c;
        case 0x51f820u: goto label_51f820;
        case 0x51f824u: goto label_51f824;
        case 0x51f828u: goto label_51f828;
        case 0x51f82cu: goto label_51f82c;
        case 0x51f830u: goto label_51f830;
        case 0x51f834u: goto label_51f834;
        case 0x51f838u: goto label_51f838;
        case 0x51f83cu: goto label_51f83c;
        case 0x51f840u: goto label_51f840;
        case 0x51f844u: goto label_51f844;
        case 0x51f848u: goto label_51f848;
        case 0x51f84cu: goto label_51f84c;
        case 0x51f850u: goto label_51f850;
        case 0x51f854u: goto label_51f854;
        case 0x51f858u: goto label_51f858;
        case 0x51f85cu: goto label_51f85c;
        case 0x51f860u: goto label_51f860;
        case 0x51f864u: goto label_51f864;
        case 0x51f868u: goto label_51f868;
        case 0x51f86cu: goto label_51f86c;
        case 0x51f870u: goto label_51f870;
        case 0x51f874u: goto label_51f874;
        case 0x51f878u: goto label_51f878;
        case 0x51f87cu: goto label_51f87c;
        case 0x51f880u: goto label_51f880;
        case 0x51f884u: goto label_51f884;
        case 0x51f888u: goto label_51f888;
        case 0x51f88cu: goto label_51f88c;
        case 0x51f890u: goto label_51f890;
        case 0x51f894u: goto label_51f894;
        case 0x51f898u: goto label_51f898;
        case 0x51f89cu: goto label_51f89c;
        case 0x51f8a0u: goto label_51f8a0;
        case 0x51f8a4u: goto label_51f8a4;
        case 0x51f8a8u: goto label_51f8a8;
        case 0x51f8acu: goto label_51f8ac;
        case 0x51f8b0u: goto label_51f8b0;
        case 0x51f8b4u: goto label_51f8b4;
        case 0x51f8b8u: goto label_51f8b8;
        case 0x51f8bcu: goto label_51f8bc;
        case 0x51f8c0u: goto label_51f8c0;
        case 0x51f8c4u: goto label_51f8c4;
        case 0x51f8c8u: goto label_51f8c8;
        case 0x51f8ccu: goto label_51f8cc;
        case 0x51f8d0u: goto label_51f8d0;
        case 0x51f8d4u: goto label_51f8d4;
        case 0x51f8d8u: goto label_51f8d8;
        case 0x51f8dcu: goto label_51f8dc;
        case 0x51f8e0u: goto label_51f8e0;
        case 0x51f8e4u: goto label_51f8e4;
        case 0x51f8e8u: goto label_51f8e8;
        case 0x51f8ecu: goto label_51f8ec;
        case 0x51f8f0u: goto label_51f8f0;
        case 0x51f8f4u: goto label_51f8f4;
        case 0x51f8f8u: goto label_51f8f8;
        case 0x51f8fcu: goto label_51f8fc;
        case 0x51f900u: goto label_51f900;
        case 0x51f904u: goto label_51f904;
        case 0x51f908u: goto label_51f908;
        case 0x51f90cu: goto label_51f90c;
        case 0x51f910u: goto label_51f910;
        case 0x51f914u: goto label_51f914;
        case 0x51f918u: goto label_51f918;
        case 0x51f91cu: goto label_51f91c;
        case 0x51f920u: goto label_51f920;
        case 0x51f924u: goto label_51f924;
        case 0x51f928u: goto label_51f928;
        case 0x51f92cu: goto label_51f92c;
        case 0x51f930u: goto label_51f930;
        case 0x51f934u: goto label_51f934;
        case 0x51f938u: goto label_51f938;
        case 0x51f93cu: goto label_51f93c;
        case 0x51f940u: goto label_51f940;
        case 0x51f944u: goto label_51f944;
        case 0x51f948u: goto label_51f948;
        case 0x51f94cu: goto label_51f94c;
        case 0x51f950u: goto label_51f950;
        case 0x51f954u: goto label_51f954;
        case 0x51f958u: goto label_51f958;
        case 0x51f95cu: goto label_51f95c;
        case 0x51f960u: goto label_51f960;
        case 0x51f964u: goto label_51f964;
        case 0x51f968u: goto label_51f968;
        case 0x51f96cu: goto label_51f96c;
        case 0x51f970u: goto label_51f970;
        case 0x51f974u: goto label_51f974;
        case 0x51f978u: goto label_51f978;
        case 0x51f97cu: goto label_51f97c;
        case 0x51f980u: goto label_51f980;
        case 0x51f984u: goto label_51f984;
        case 0x51f988u: goto label_51f988;
        case 0x51f98cu: goto label_51f98c;
        case 0x51f990u: goto label_51f990;
        case 0x51f994u: goto label_51f994;
        case 0x51f998u: goto label_51f998;
        case 0x51f99cu: goto label_51f99c;
        case 0x51f9a0u: goto label_51f9a0;
        case 0x51f9a4u: goto label_51f9a4;
        case 0x51f9a8u: goto label_51f9a8;
        case 0x51f9acu: goto label_51f9ac;
        case 0x51f9b0u: goto label_51f9b0;
        case 0x51f9b4u: goto label_51f9b4;
        case 0x51f9b8u: goto label_51f9b8;
        case 0x51f9bcu: goto label_51f9bc;
        case 0x51f9c0u: goto label_51f9c0;
        case 0x51f9c4u: goto label_51f9c4;
        case 0x51f9c8u: goto label_51f9c8;
        case 0x51f9ccu: goto label_51f9cc;
        case 0x51f9d0u: goto label_51f9d0;
        case 0x51f9d4u: goto label_51f9d4;
        case 0x51f9d8u: goto label_51f9d8;
        case 0x51f9dcu: goto label_51f9dc;
        case 0x51f9e0u: goto label_51f9e0;
        case 0x51f9e4u: goto label_51f9e4;
        case 0x51f9e8u: goto label_51f9e8;
        case 0x51f9ecu: goto label_51f9ec;
        case 0x51f9f0u: goto label_51f9f0;
        case 0x51f9f4u: goto label_51f9f4;
        case 0x51f9f8u: goto label_51f9f8;
        case 0x51f9fcu: goto label_51f9fc;
        case 0x51fa00u: goto label_51fa00;
        case 0x51fa04u: goto label_51fa04;
        case 0x51fa08u: goto label_51fa08;
        case 0x51fa0cu: goto label_51fa0c;
        case 0x51fa10u: goto label_51fa10;
        case 0x51fa14u: goto label_51fa14;
        case 0x51fa18u: goto label_51fa18;
        case 0x51fa1cu: goto label_51fa1c;
        case 0x51fa20u: goto label_51fa20;
        case 0x51fa24u: goto label_51fa24;
        case 0x51fa28u: goto label_51fa28;
        case 0x51fa2cu: goto label_51fa2c;
        case 0x51fa30u: goto label_51fa30;
        case 0x51fa34u: goto label_51fa34;
        case 0x51fa38u: goto label_51fa38;
        case 0x51fa3cu: goto label_51fa3c;
        case 0x51fa40u: goto label_51fa40;
        case 0x51fa44u: goto label_51fa44;
        case 0x51fa48u: goto label_51fa48;
        case 0x51fa4cu: goto label_51fa4c;
        case 0x51fa50u: goto label_51fa50;
        case 0x51fa54u: goto label_51fa54;
        case 0x51fa58u: goto label_51fa58;
        case 0x51fa5cu: goto label_51fa5c;
        case 0x51fa60u: goto label_51fa60;
        case 0x51fa64u: goto label_51fa64;
        case 0x51fa68u: goto label_51fa68;
        case 0x51fa6cu: goto label_51fa6c;
        case 0x51fa70u: goto label_51fa70;
        case 0x51fa74u: goto label_51fa74;
        case 0x51fa78u: goto label_51fa78;
        case 0x51fa7cu: goto label_51fa7c;
        case 0x51fa80u: goto label_51fa80;
        case 0x51fa84u: goto label_51fa84;
        case 0x51fa88u: goto label_51fa88;
        case 0x51fa8cu: goto label_51fa8c;
        case 0x51fa90u: goto label_51fa90;
        case 0x51fa94u: goto label_51fa94;
        case 0x51fa98u: goto label_51fa98;
        case 0x51fa9cu: goto label_51fa9c;
        case 0x51faa0u: goto label_51faa0;
        case 0x51faa4u: goto label_51faa4;
        case 0x51faa8u: goto label_51faa8;
        case 0x51faacu: goto label_51faac;
        case 0x51fab0u: goto label_51fab0;
        case 0x51fab4u: goto label_51fab4;
        case 0x51fab8u: goto label_51fab8;
        case 0x51fabcu: goto label_51fabc;
        case 0x51fac0u: goto label_51fac0;
        case 0x51fac4u: goto label_51fac4;
        case 0x51fac8u: goto label_51fac8;
        case 0x51faccu: goto label_51facc;
        case 0x51fad0u: goto label_51fad0;
        case 0x51fad4u: goto label_51fad4;
        case 0x51fad8u: goto label_51fad8;
        case 0x51fadcu: goto label_51fadc;
        case 0x51fae0u: goto label_51fae0;
        case 0x51fae4u: goto label_51fae4;
        case 0x51fae8u: goto label_51fae8;
        case 0x51faecu: goto label_51faec;
        case 0x51faf0u: goto label_51faf0;
        case 0x51faf4u: goto label_51faf4;
        case 0x51faf8u: goto label_51faf8;
        case 0x51fafcu: goto label_51fafc;
        case 0x51fb00u: goto label_51fb00;
        case 0x51fb04u: goto label_51fb04;
        case 0x51fb08u: goto label_51fb08;
        case 0x51fb0cu: goto label_51fb0c;
        case 0x51fb10u: goto label_51fb10;
        case 0x51fb14u: goto label_51fb14;
        case 0x51fb18u: goto label_51fb18;
        case 0x51fb1cu: goto label_51fb1c;
        case 0x51fb20u: goto label_51fb20;
        case 0x51fb24u: goto label_51fb24;
        case 0x51fb28u: goto label_51fb28;
        case 0x51fb2cu: goto label_51fb2c;
        case 0x51fb30u: goto label_51fb30;
        case 0x51fb34u: goto label_51fb34;
        case 0x51fb38u: goto label_51fb38;
        case 0x51fb3cu: goto label_51fb3c;
        case 0x51fb40u: goto label_51fb40;
        case 0x51fb44u: goto label_51fb44;
        case 0x51fb48u: goto label_51fb48;
        case 0x51fb4cu: goto label_51fb4c;
        case 0x51fb50u: goto label_51fb50;
        case 0x51fb54u: goto label_51fb54;
        case 0x51fb58u: goto label_51fb58;
        case 0x51fb5cu: goto label_51fb5c;
        case 0x51fb60u: goto label_51fb60;
        case 0x51fb64u: goto label_51fb64;
        case 0x51fb68u: goto label_51fb68;
        case 0x51fb6cu: goto label_51fb6c;
        case 0x51fb70u: goto label_51fb70;
        case 0x51fb74u: goto label_51fb74;
        case 0x51fb78u: goto label_51fb78;
        case 0x51fb7cu: goto label_51fb7c;
        case 0x51fb80u: goto label_51fb80;
        case 0x51fb84u: goto label_51fb84;
        case 0x51fb88u: goto label_51fb88;
        case 0x51fb8cu: goto label_51fb8c;
        case 0x51fb90u: goto label_51fb90;
        case 0x51fb94u: goto label_51fb94;
        case 0x51fb98u: goto label_51fb98;
        case 0x51fb9cu: goto label_51fb9c;
        case 0x51fba0u: goto label_51fba0;
        case 0x51fba4u: goto label_51fba4;
        case 0x51fba8u: goto label_51fba8;
        case 0x51fbacu: goto label_51fbac;
        case 0x51fbb0u: goto label_51fbb0;
        case 0x51fbb4u: goto label_51fbb4;
        case 0x51fbb8u: goto label_51fbb8;
        case 0x51fbbcu: goto label_51fbbc;
        case 0x51fbc0u: goto label_51fbc0;
        case 0x51fbc4u: goto label_51fbc4;
        case 0x51fbc8u: goto label_51fbc8;
        case 0x51fbccu: goto label_51fbcc;
        case 0x51fbd0u: goto label_51fbd0;
        case 0x51fbd4u: goto label_51fbd4;
        case 0x51fbd8u: goto label_51fbd8;
        case 0x51fbdcu: goto label_51fbdc;
        case 0x51fbe0u: goto label_51fbe0;
        case 0x51fbe4u: goto label_51fbe4;
        case 0x51fbe8u: goto label_51fbe8;
        case 0x51fbecu: goto label_51fbec;
        case 0x51fbf0u: goto label_51fbf0;
        case 0x51fbf4u: goto label_51fbf4;
        case 0x51fbf8u: goto label_51fbf8;
        case 0x51fbfcu: goto label_51fbfc;
        case 0x51fc00u: goto label_51fc00;
        case 0x51fc04u: goto label_51fc04;
        case 0x51fc08u: goto label_51fc08;
        case 0x51fc0cu: goto label_51fc0c;
        case 0x51fc10u: goto label_51fc10;
        case 0x51fc14u: goto label_51fc14;
        case 0x51fc18u: goto label_51fc18;
        case 0x51fc1cu: goto label_51fc1c;
        case 0x51fc20u: goto label_51fc20;
        case 0x51fc24u: goto label_51fc24;
        case 0x51fc28u: goto label_51fc28;
        case 0x51fc2cu: goto label_51fc2c;
        case 0x51fc30u: goto label_51fc30;
        case 0x51fc34u: goto label_51fc34;
        case 0x51fc38u: goto label_51fc38;
        case 0x51fc3cu: goto label_51fc3c;
        case 0x51fc40u: goto label_51fc40;
        case 0x51fc44u: goto label_51fc44;
        case 0x51fc48u: goto label_51fc48;
        case 0x51fc4cu: goto label_51fc4c;
        case 0x51fc50u: goto label_51fc50;
        case 0x51fc54u: goto label_51fc54;
        case 0x51fc58u: goto label_51fc58;
        case 0x51fc5cu: goto label_51fc5c;
        case 0x51fc60u: goto label_51fc60;
        case 0x51fc64u: goto label_51fc64;
        case 0x51fc68u: goto label_51fc68;
        case 0x51fc6cu: goto label_51fc6c;
        case 0x51fc70u: goto label_51fc70;
        case 0x51fc74u: goto label_51fc74;
        case 0x51fc78u: goto label_51fc78;
        case 0x51fc7cu: goto label_51fc7c;
        case 0x51fc80u: goto label_51fc80;
        case 0x51fc84u: goto label_51fc84;
        case 0x51fc88u: goto label_51fc88;
        case 0x51fc8cu: goto label_51fc8c;
        case 0x51fc90u: goto label_51fc90;
        case 0x51fc94u: goto label_51fc94;
        case 0x51fc98u: goto label_51fc98;
        case 0x51fc9cu: goto label_51fc9c;
        case 0x51fca0u: goto label_51fca0;
        case 0x51fca4u: goto label_51fca4;
        case 0x51fca8u: goto label_51fca8;
        case 0x51fcacu: goto label_51fcac;
        case 0x51fcb0u: goto label_51fcb0;
        case 0x51fcb4u: goto label_51fcb4;
        case 0x51fcb8u: goto label_51fcb8;
        case 0x51fcbcu: goto label_51fcbc;
        case 0x51fcc0u: goto label_51fcc0;
        case 0x51fcc4u: goto label_51fcc4;
        case 0x51fcc8u: goto label_51fcc8;
        case 0x51fcccu: goto label_51fccc;
        case 0x51fcd0u: goto label_51fcd0;
        case 0x51fcd4u: goto label_51fcd4;
        case 0x51fcd8u: goto label_51fcd8;
        case 0x51fcdcu: goto label_51fcdc;
        case 0x51fce0u: goto label_51fce0;
        case 0x51fce4u: goto label_51fce4;
        case 0x51fce8u: goto label_51fce8;
        case 0x51fcecu: goto label_51fcec;
        case 0x51fcf0u: goto label_51fcf0;
        case 0x51fcf4u: goto label_51fcf4;
        case 0x51fcf8u: goto label_51fcf8;
        case 0x51fcfcu: goto label_51fcfc;
        case 0x51fd00u: goto label_51fd00;
        case 0x51fd04u: goto label_51fd04;
        case 0x51fd08u: goto label_51fd08;
        case 0x51fd0cu: goto label_51fd0c;
        case 0x51fd10u: goto label_51fd10;
        case 0x51fd14u: goto label_51fd14;
        case 0x51fd18u: goto label_51fd18;
        case 0x51fd1cu: goto label_51fd1c;
        case 0x51fd20u: goto label_51fd20;
        case 0x51fd24u: goto label_51fd24;
        case 0x51fd28u: goto label_51fd28;
        case 0x51fd2cu: goto label_51fd2c;
        case 0x51fd30u: goto label_51fd30;
        case 0x51fd34u: goto label_51fd34;
        case 0x51fd38u: goto label_51fd38;
        case 0x51fd3cu: goto label_51fd3c;
        case 0x51fd40u: goto label_51fd40;
        case 0x51fd44u: goto label_51fd44;
        case 0x51fd48u: goto label_51fd48;
        case 0x51fd4cu: goto label_51fd4c;
        case 0x51fd50u: goto label_51fd50;
        case 0x51fd54u: goto label_51fd54;
        case 0x51fd58u: goto label_51fd58;
        case 0x51fd5cu: goto label_51fd5c;
        case 0x51fd60u: goto label_51fd60;
        case 0x51fd64u: goto label_51fd64;
        case 0x51fd68u: goto label_51fd68;
        case 0x51fd6cu: goto label_51fd6c;
        case 0x51fd70u: goto label_51fd70;
        case 0x51fd74u: goto label_51fd74;
        case 0x51fd78u: goto label_51fd78;
        case 0x51fd7cu: goto label_51fd7c;
        case 0x51fd80u: goto label_51fd80;
        case 0x51fd84u: goto label_51fd84;
        case 0x51fd88u: goto label_51fd88;
        case 0x51fd8cu: goto label_51fd8c;
        case 0x51fd90u: goto label_51fd90;
        case 0x51fd94u: goto label_51fd94;
        case 0x51fd98u: goto label_51fd98;
        case 0x51fd9cu: goto label_51fd9c;
        case 0x51fda0u: goto label_51fda0;
        case 0x51fda4u: goto label_51fda4;
        case 0x51fda8u: goto label_51fda8;
        case 0x51fdacu: goto label_51fdac;
        case 0x51fdb0u: goto label_51fdb0;
        case 0x51fdb4u: goto label_51fdb4;
        case 0x51fdb8u: goto label_51fdb8;
        case 0x51fdbcu: goto label_51fdbc;
        case 0x51fdc0u: goto label_51fdc0;
        case 0x51fdc4u: goto label_51fdc4;
        case 0x51fdc8u: goto label_51fdc8;
        case 0x51fdccu: goto label_51fdcc;
        case 0x51fdd0u: goto label_51fdd0;
        case 0x51fdd4u: goto label_51fdd4;
        case 0x51fdd8u: goto label_51fdd8;
        case 0x51fddcu: goto label_51fddc;
        default: break;
    }

    ctx->pc = 0x51f400u;

label_51f400:
    // 0x51f400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x51f400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_51f404:
    // 0x51f404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x51f404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_51f408:
    // 0x51f408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51f408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51f40c:
    // 0x51f40c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51f40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51f410:
    // 0x51f410: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x51f410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51f414:
    // 0x51f414: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x51f414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_51f418:
    // 0x51f418: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x51f418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_51f41c:
    // 0x51f41c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x51f41cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_51f420:
    // 0x51f420: 0x320f809  jalr        $t9
label_51f424:
    if (ctx->pc == 0x51F424u) {
        ctx->pc = 0x51F424u;
            // 0x51f424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51F428u;
        goto label_51f428;
    }
    ctx->pc = 0x51F420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51F428u);
        ctx->pc = 0x51F424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F420u;
            // 0x51f424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51F428u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51F428u; }
            if (ctx->pc != 0x51F428u) { return; }
        }
        }
    }
    ctx->pc = 0x51F428u;
label_51f428:
    // 0x51f428: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x51f428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_51f42c:
    // 0x51f42c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x51f42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_51f430:
    // 0x51f430: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x51f430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_51f434:
    // 0x51f434: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x51f434u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_51f438:
    // 0x51f438: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x51f438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_51f43c:
    // 0x51f43c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x51f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_51f440:
    // 0x51f440: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x51f440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_51f444:
    // 0x51f444: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x51f444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_51f448:
    // 0x51f448: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51f448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51f44c:
    // 0x51f44c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51f44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51f450:
    // 0x51f450: 0x3e00008  jr          $ra
label_51f454:
    if (ctx->pc == 0x51F454u) {
        ctx->pc = 0x51F454u;
            // 0x51f454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x51F458u;
        goto label_51f458;
    }
    ctx->pc = 0x51F450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51F454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F450u;
            // 0x51f454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51F458u;
label_51f458:
    // 0x51f458: 0x0  nop
    ctx->pc = 0x51f458u;
    // NOP
label_51f45c:
    // 0x51f45c: 0x0  nop
    ctx->pc = 0x51f45cu;
    // NOP
label_51f460:
    // 0x51f460: 0x80af94c  j           func_2BE530
label_51f464:
    if (ctx->pc == 0x51F464u) {
        ctx->pc = 0x51F464u;
            // 0x51f464: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x51F468u;
        goto label_51f468;
    }
    ctx->pc = 0x51F460u;
    ctx->pc = 0x51F464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F460u;
            // 0x51f464: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BE530u;
    {
        auto targetFn = runtime->lookupFunction(0x2BE530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x51F468u;
label_51f468:
    // 0x51f468: 0x0  nop
    ctx->pc = 0x51f468u;
    // NOP
label_51f46c:
    // 0x51f46c: 0x0  nop
    ctx->pc = 0x51f46cu;
    // NOP
label_51f470:
    // 0x51f470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x51f470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_51f474:
    // 0x51f474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51f474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_51f478:
    // 0x51f478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51f478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51f47c:
    // 0x51f47c: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x51f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_51f480:
    // 0x51f480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51f480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51f484:
    // 0x51f484: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x51f484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_51f488:
    // 0x51f488: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x51f488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_51f48c:
    // 0x51f48c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_51f490:
    if (ctx->pc == 0x51F490u) {
        ctx->pc = 0x51F490u;
            // 0x51f490: 0xc6010014  lwc1        $f1, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x51F494u;
        goto label_51f494;
    }
    ctx->pc = 0x51F48Cu;
    {
        const bool branch_taken_0x51f48c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x51f48c) {
            ctx->pc = 0x51F490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51F48Cu;
            // 0x51f490: 0xc6010014  lwc1        $f1, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x51F4ACu;
            goto label_51f4ac;
        }
    }
    ctx->pc = 0x51F494u;
label_51f494:
    // 0x51f494: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x51f494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_51f498:
    // 0x51f498: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x51f498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_51f49c:
    // 0x51f49c: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x51f49cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
label_51f4a0:
    // 0x51f4a0: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x51f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_51f4a4:
    // 0x51f4a4: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x51f4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_51f4a8:
    // 0x51f4a8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x51f4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51f4ac:
    // 0x51f4ac: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x51f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
label_51f4b0:
    // 0x51f4b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x51f4b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51f4b4:
    // 0x51f4b4: 0x0  nop
    ctx->pc = 0x51f4b4u;
    // NOP
label_51f4b8:
    // 0x51f4b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x51f4b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51f4bc:
    // 0x51f4bc: 0x45020035  bc1fl       . + 4 + (0x35 << 2)
label_51f4c0:
    if (ctx->pc == 0x51F4C0u) {
        ctx->pc = 0x51F4C0u;
            // 0x51f4c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x51F4C4u;
        goto label_51f4c4;
    }
    ctx->pc = 0x51F4BCu;
    {
        const bool branch_taken_0x51f4bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x51f4bc) {
            ctx->pc = 0x51F4C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51F4BCu;
            // 0x51f4c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51F594u;
            goto label_51f594;
        }
    }
    ctx->pc = 0x51F4C4u;
label_51f4c4:
    // 0x51f4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51f4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51f4c8:
    // 0x51f4c8: 0xc0e32a4  jal         func_38CA90
label_51f4cc:
    if (ctx->pc == 0x51F4CCu) {
        ctx->pc = 0x51F4CCu;
            // 0x51f4cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x51F4D0u;
        goto label_51f4d0;
    }
    ctx->pc = 0x51F4C8u;
    SET_GPR_U32(ctx, 31, 0x51F4D0u);
    ctx->pc = 0x51F4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F4C8u;
            // 0x51f4cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F4D0u; }
        if (ctx->pc != 0x51F4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F4D0u; }
        if (ctx->pc != 0x51F4D0u) { return; }
    }
    ctx->pc = 0x51F4D0u;
label_51f4d0:
    // 0x51f4d0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x51f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_51f4d4:
    // 0x51f4d4: 0xc0e082c  jal         func_3820B0
label_51f4d8:
    if (ctx->pc == 0x51F4D8u) {
        ctx->pc = 0x51F4D8u;
            // 0x51f4d8: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->pc = 0x51F4DCu;
        goto label_51f4dc;
    }
    ctx->pc = 0x51F4D4u;
    SET_GPR_U32(ctx, 31, 0x51F4DCu);
    ctx->pc = 0x51F4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F4D4u;
            // 0x51f4d8: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F4DCu; }
        if (ctx->pc != 0x51F4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F4DCu; }
        if (ctx->pc != 0x51F4DCu) { return; }
    }
    ctx->pc = 0x51F4DCu;
label_51f4dc:
    // 0x51f4dc: 0xc0e0828  jal         func_3820A0
label_51f4e0:
    if (ctx->pc == 0x51F4E0u) {
        ctx->pc = 0x51F4E0u;
            // 0x51f4e0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x51F4E4u;
        goto label_51f4e4;
    }
    ctx->pc = 0x51F4DCu;
    SET_GPR_U32(ctx, 31, 0x51F4E4u);
    ctx->pc = 0x51F4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F4DCu;
            // 0x51f4e0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F4E4u; }
        if (ctx->pc != 0x51F4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F4E4u; }
        if (ctx->pc != 0x51F4E4u) { return; }
    }
    ctx->pc = 0x51F4E4u;
label_51f4e4:
    // 0x51f4e4: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x51f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_51f4e8:
    // 0x51f4e8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_51f4ec:
    if (ctx->pc == 0x51F4ECu) {
        ctx->pc = 0x51F4ECu;
            // 0x51f4ec: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x51F4F0u;
        goto label_51f4f0;
    }
    ctx->pc = 0x51F4E8u;
    {
        const bool branch_taken_0x51f4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51f4e8) {
            ctx->pc = 0x51F4ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51F4E8u;
            // 0x51f4ec: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51F520u;
            goto label_51f520;
        }
    }
    ctx->pc = 0x51F4F0u;
label_51f4f0:
    // 0x51f4f0: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x51f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_51f4f4:
    // 0x51f4f4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x51f4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_51f4f8:
    // 0x51f4f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_51f4fc:
    if (ctx->pc == 0x51F4FCu) {
        ctx->pc = 0x51F500u;
        goto label_51f500;
    }
    ctx->pc = 0x51F4F8u;
    {
        const bool branch_taken_0x51f4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51f4f8) {
            ctx->pc = 0x51F51Cu;
            goto label_51f51c;
        }
    }
    ctx->pc = 0x51F500u;
label_51f500:
    // 0x51f500: 0xc0dc408  jal         func_371020
label_51f504:
    if (ctx->pc == 0x51F504u) {
        ctx->pc = 0x51F504u;
            // 0x51f504: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x51F508u;
        goto label_51f508;
    }
    ctx->pc = 0x51F500u;
    SET_GPR_U32(ctx, 31, 0x51F508u);
    ctx->pc = 0x51F504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F500u;
            // 0x51f504: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F508u; }
        if (ctx->pc != 0x51F508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F508u; }
        if (ctx->pc != 0x51F508u) { return; }
    }
    ctx->pc = 0x51F508u;
label_51f508:
    // 0x51f508: 0xc0e0824  jal         func_382090
label_51f50c:
    if (ctx->pc == 0x51F50Cu) {
        ctx->pc = 0x51F50Cu;
            // 0x51f50c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51F510u;
        goto label_51f510;
    }
    ctx->pc = 0x51F508u;
    SET_GPR_U32(ctx, 31, 0x51F510u);
    ctx->pc = 0x51F50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F508u;
            // 0x51f50c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F510u; }
        if (ctx->pc != 0x51F510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F510u; }
        if (ctx->pc != 0x51F510u) { return; }
    }
    ctx->pc = 0x51F510u;
label_51f510:
    // 0x51f510: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x51f510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_51f514:
    // 0x51f514: 0xc0e081c  jal         func_382070
label_51f518:
    if (ctx->pc == 0x51F518u) {
        ctx->pc = 0x51F518u;
            // 0x51f518: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51F51Cu;
        goto label_51f51c;
    }
    ctx->pc = 0x51F514u;
    SET_GPR_U32(ctx, 31, 0x51F51Cu);
    ctx->pc = 0x51F518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F514u;
            // 0x51f518: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F51Cu; }
        if (ctx->pc != 0x51F51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F51Cu; }
        if (ctx->pc != 0x51F51Cu) { return; }
    }
    ctx->pc = 0x51F51Cu;
label_51f51c:
    // 0x51f51c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x51f51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_51f520:
    // 0x51f520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51f520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51f524:
    // 0x51f524: 0xc0e080c  jal         func_382030
label_51f528:
    if (ctx->pc == 0x51F528u) {
        ctx->pc = 0x51F528u;
            // 0x51f528: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x51F52Cu;
        goto label_51f52c;
    }
    ctx->pc = 0x51F524u;
    SET_GPR_U32(ctx, 31, 0x51F52Cu);
    ctx->pc = 0x51F528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F524u;
            // 0x51f528: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F52Cu; }
        if (ctx->pc != 0x51F52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F52Cu; }
        if (ctx->pc != 0x51F52Cu) { return; }
    }
    ctx->pc = 0x51F52Cu;
label_51f52c:
    // 0x51f52c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x51f52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_51f530:
    // 0x51f530: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x51f530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_51f534:
    // 0x51f534: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x51f534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51f538:
    // 0x51f538: 0xc08914c  jal         func_224530
label_51f53c:
    if (ctx->pc == 0x51F53Cu) {
        ctx->pc = 0x51F53Cu;
            // 0x51f53c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51F540u;
        goto label_51f540;
    }
    ctx->pc = 0x51F538u;
    SET_GPR_U32(ctx, 31, 0x51F540u);
    ctx->pc = 0x51F53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F538u;
            // 0x51f53c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F540u; }
        if (ctx->pc != 0x51F540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F540u; }
        if (ctx->pc != 0x51F540u) { return; }
    }
    ctx->pc = 0x51F540u;
label_51f540:
    // 0x51f540: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51f540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_51f544:
    // 0x51f544: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x51f544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_51f548:
    // 0x51f548: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x51f548u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_51f54c:
    // 0x51f54c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x51f54cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_51f550:
    // 0x51f550: 0xc0b6df0  jal         func_2DB7C0
label_51f554:
    if (ctx->pc == 0x51F554u) {
        ctx->pc = 0x51F554u;
            // 0x51f554: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x51F558u;
        goto label_51f558;
    }
    ctx->pc = 0x51F550u;
    SET_GPR_U32(ctx, 31, 0x51F558u);
    ctx->pc = 0x51F554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F550u;
            // 0x51f554: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F558u; }
        if (ctx->pc != 0x51F558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F558u; }
        if (ctx->pc != 0x51F558u) { return; }
    }
    ctx->pc = 0x51F558u;
label_51f558:
    // 0x51f558: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x51f558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_51f55c:
    // 0x51f55c: 0xc0e07f8  jal         func_381FE0
label_51f560:
    if (ctx->pc == 0x51F560u) {
        ctx->pc = 0x51F560u;
            // 0x51f560: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x51F564u;
        goto label_51f564;
    }
    ctx->pc = 0x51F55Cu;
    SET_GPR_U32(ctx, 31, 0x51F564u);
    ctx->pc = 0x51F560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F55Cu;
            // 0x51f560: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F564u; }
        if (ctx->pc != 0x51F564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F564u; }
        if (ctx->pc != 0x51F564u) { return; }
    }
    ctx->pc = 0x51F564u;
label_51f564:
    // 0x51f564: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x51f564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_51f568:
    // 0x51f568: 0xc0dc3f4  jal         func_370FD0
label_51f56c:
    if (ctx->pc == 0x51F56Cu) {
        ctx->pc = 0x51F56Cu;
            // 0x51f56c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x51F570u;
        goto label_51f570;
    }
    ctx->pc = 0x51F568u;
    SET_GPR_U32(ctx, 31, 0x51F570u);
    ctx->pc = 0x51F56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F568u;
            // 0x51f56c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F570u; }
        if (ctx->pc != 0x51F570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F570u; }
        if (ctx->pc != 0x51F570u) { return; }
    }
    ctx->pc = 0x51F570u;
label_51f570:
    // 0x51f570: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x51f570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_51f574:
    // 0x51f574: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x51f574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_51f578:
    // 0x51f578: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_51f57c:
    if (ctx->pc == 0x51F57Cu) {
        ctx->pc = 0x51F580u;
        goto label_51f580;
    }
    ctx->pc = 0x51F578u;
    {
        const bool branch_taken_0x51f578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x51f578) {
            ctx->pc = 0x51F590u;
            goto label_51f590;
        }
    }
    ctx->pc = 0x51F580u;
label_51f580:
    // 0x51f580: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x51f580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_51f584:
    // 0x51f584: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x51f584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_51f588:
    // 0x51f588: 0x320f809  jalr        $t9
label_51f58c:
    if (ctx->pc == 0x51F58Cu) {
        ctx->pc = 0x51F58Cu;
            // 0x51f58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51F590u;
        goto label_51f590;
    }
    ctx->pc = 0x51F588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51F590u);
        ctx->pc = 0x51F58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F588u;
            // 0x51f58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51F590u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51F590u; }
            if (ctx->pc != 0x51F590u) { return; }
        }
        }
    }
    ctx->pc = 0x51F590u;
label_51f590:
    // 0x51f590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51f590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_51f594:
    // 0x51f594: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51f594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51f598:
    // 0x51f598: 0x3e00008  jr          $ra
label_51f59c:
    if (ctx->pc == 0x51F59Cu) {
        ctx->pc = 0x51F59Cu;
            // 0x51f59c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x51F5A0u;
        goto label_51f5a0;
    }
    ctx->pc = 0x51F598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51F59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F598u;
            // 0x51f59c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51F5A0u;
label_51f5a0:
    // 0x51f5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x51f5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_51f5a4:
    // 0x51f5a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51f5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_51f5a8:
    // 0x51f5a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51f5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51f5ac:
    // 0x51f5ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51f5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51f5b0:
    // 0x51f5b0: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x51f5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_51f5b4:
    // 0x51f5b4: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x51f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_51f5b8:
    // 0x51f5b8: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x51f5b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_51f5bc:
    // 0x51f5bc: 0x54200007  bnel        $at, $zero, . + 4 + (0x7 << 2)
label_51f5c0:
    if (ctx->pc == 0x51F5C0u) {
        ctx->pc = 0x51F5C0u;
            // 0x51f5c0: 0xc6010014  lwc1        $f1, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x51F5C4u;
        goto label_51f5c4;
    }
    ctx->pc = 0x51F5BCu;
    {
        const bool branch_taken_0x51f5bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x51f5bc) {
            ctx->pc = 0x51F5C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51F5BCu;
            // 0x51f5c0: 0xc6010014  lwc1        $f1, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x51F5DCu;
            goto label_51f5dc;
        }
    }
    ctx->pc = 0x51F5C4u;
label_51f5c4:
    // 0x51f5c4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x51f5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_51f5c8:
    // 0x51f5c8: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x51f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_51f5cc:
    // 0x51f5cc: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x51f5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
label_51f5d0:
    // 0x51f5d0: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x51f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_51f5d4:
    // 0x51f5d4: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x51f5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_51f5d8:
    // 0x51f5d8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x51f5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51f5dc:
    // 0x51f5dc: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x51f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
label_51f5e0:
    // 0x51f5e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x51f5e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51f5e4:
    // 0x51f5e4: 0x0  nop
    ctx->pc = 0x51f5e4u;
    // NOP
label_51f5e8:
    // 0x51f5e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x51f5e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51f5ec:
    // 0x51f5ec: 0x45020035  bc1fl       . + 4 + (0x35 << 2)
label_51f5f0:
    if (ctx->pc == 0x51F5F0u) {
        ctx->pc = 0x51F5F0u;
            // 0x51f5f0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x51F5F4u;
        goto label_51f5f4;
    }
    ctx->pc = 0x51F5ECu;
    {
        const bool branch_taken_0x51f5ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x51f5ec) {
            ctx->pc = 0x51F5F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51F5ECu;
            // 0x51f5f0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51F6C4u;
            goto label_51f6c4;
        }
    }
    ctx->pc = 0x51F5F4u;
label_51f5f4:
    // 0x51f5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51f5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51f5f8:
    // 0x51f5f8: 0xc0e32a4  jal         func_38CA90
label_51f5fc:
    if (ctx->pc == 0x51F5FCu) {
        ctx->pc = 0x51F5FCu;
            // 0x51f5fc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x51F600u;
        goto label_51f600;
    }
    ctx->pc = 0x51F5F8u;
    SET_GPR_U32(ctx, 31, 0x51F600u);
    ctx->pc = 0x51F5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F5F8u;
            // 0x51f5fc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F600u; }
        if (ctx->pc != 0x51F600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F600u; }
        if (ctx->pc != 0x51F600u) { return; }
    }
    ctx->pc = 0x51F600u;
label_51f600:
    // 0x51f600: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x51f600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_51f604:
    // 0x51f604: 0xc0e082c  jal         func_3820B0
label_51f608:
    if (ctx->pc == 0x51F608u) {
        ctx->pc = 0x51F608u;
            // 0x51f608: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->pc = 0x51F60Cu;
        goto label_51f60c;
    }
    ctx->pc = 0x51F604u;
    SET_GPR_U32(ctx, 31, 0x51F60Cu);
    ctx->pc = 0x51F608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F604u;
            // 0x51f608: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F60Cu; }
        if (ctx->pc != 0x51F60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F60Cu; }
        if (ctx->pc != 0x51F60Cu) { return; }
    }
    ctx->pc = 0x51F60Cu;
label_51f60c:
    // 0x51f60c: 0xc0e0828  jal         func_3820A0
label_51f610:
    if (ctx->pc == 0x51F610u) {
        ctx->pc = 0x51F610u;
            // 0x51f610: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x51F614u;
        goto label_51f614;
    }
    ctx->pc = 0x51F60Cu;
    SET_GPR_U32(ctx, 31, 0x51F614u);
    ctx->pc = 0x51F610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F60Cu;
            // 0x51f610: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F614u; }
        if (ctx->pc != 0x51F614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F614u; }
        if (ctx->pc != 0x51F614u) { return; }
    }
    ctx->pc = 0x51F614u;
label_51f614:
    // 0x51f614: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x51f614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_51f618:
    // 0x51f618: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_51f61c:
    if (ctx->pc == 0x51F61Cu) {
        ctx->pc = 0x51F61Cu;
            // 0x51f61c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x51F620u;
        goto label_51f620;
    }
    ctx->pc = 0x51F618u;
    {
        const bool branch_taken_0x51f618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51f618) {
            ctx->pc = 0x51F61Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51F618u;
            // 0x51f61c: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51F650u;
            goto label_51f650;
        }
    }
    ctx->pc = 0x51F620u;
label_51f620:
    // 0x51f620: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x51f620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_51f624:
    // 0x51f624: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x51f624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_51f628:
    // 0x51f628: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_51f62c:
    if (ctx->pc == 0x51F62Cu) {
        ctx->pc = 0x51F630u;
        goto label_51f630;
    }
    ctx->pc = 0x51F628u;
    {
        const bool branch_taken_0x51f628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51f628) {
            ctx->pc = 0x51F64Cu;
            goto label_51f64c;
        }
    }
    ctx->pc = 0x51F630u;
label_51f630:
    // 0x51f630: 0xc0dc408  jal         func_371020
label_51f634:
    if (ctx->pc == 0x51F634u) {
        ctx->pc = 0x51F634u;
            // 0x51f634: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x51F638u;
        goto label_51f638;
    }
    ctx->pc = 0x51F630u;
    SET_GPR_U32(ctx, 31, 0x51F638u);
    ctx->pc = 0x51F634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F630u;
            // 0x51f634: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F638u; }
        if (ctx->pc != 0x51F638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F638u; }
        if (ctx->pc != 0x51F638u) { return; }
    }
    ctx->pc = 0x51F638u;
label_51f638:
    // 0x51f638: 0xc0e0824  jal         func_382090
label_51f63c:
    if (ctx->pc == 0x51F63Cu) {
        ctx->pc = 0x51F63Cu;
            // 0x51f63c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51F640u;
        goto label_51f640;
    }
    ctx->pc = 0x51F638u;
    SET_GPR_U32(ctx, 31, 0x51F640u);
    ctx->pc = 0x51F63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F638u;
            // 0x51f63c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F640u; }
        if (ctx->pc != 0x51F640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F640u; }
        if (ctx->pc != 0x51F640u) { return; }
    }
    ctx->pc = 0x51F640u;
label_51f640:
    // 0x51f640: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x51f640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_51f644:
    // 0x51f644: 0xc0e081c  jal         func_382070
label_51f648:
    if (ctx->pc == 0x51F648u) {
        ctx->pc = 0x51F648u;
            // 0x51f648: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51F64Cu;
        goto label_51f64c;
    }
    ctx->pc = 0x51F644u;
    SET_GPR_U32(ctx, 31, 0x51F64Cu);
    ctx->pc = 0x51F648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F644u;
            // 0x51f648: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F64Cu; }
        if (ctx->pc != 0x51F64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F64Cu; }
        if (ctx->pc != 0x51F64Cu) { return; }
    }
    ctx->pc = 0x51F64Cu;
label_51f64c:
    // 0x51f64c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x51f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_51f650:
    // 0x51f650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51f650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51f654:
    // 0x51f654: 0xc0e080c  jal         func_382030
label_51f658:
    if (ctx->pc == 0x51F658u) {
        ctx->pc = 0x51F658u;
            // 0x51f658: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x51F65Cu;
        goto label_51f65c;
    }
    ctx->pc = 0x51F654u;
    SET_GPR_U32(ctx, 31, 0x51F65Cu);
    ctx->pc = 0x51F658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F654u;
            // 0x51f658: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F65Cu; }
        if (ctx->pc != 0x51F65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F65Cu; }
        if (ctx->pc != 0x51F65Cu) { return; }
    }
    ctx->pc = 0x51F65Cu;
label_51f65c:
    // 0x51f65c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x51f65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_51f660:
    // 0x51f660: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x51f660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_51f664:
    // 0x51f664: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x51f664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51f668:
    // 0x51f668: 0xc08914c  jal         func_224530
label_51f66c:
    if (ctx->pc == 0x51F66Cu) {
        ctx->pc = 0x51F66Cu;
            // 0x51f66c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51F670u;
        goto label_51f670;
    }
    ctx->pc = 0x51F668u;
    SET_GPR_U32(ctx, 31, 0x51F670u);
    ctx->pc = 0x51F66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F668u;
            // 0x51f66c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F670u; }
        if (ctx->pc != 0x51F670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F670u; }
        if (ctx->pc != 0x51F670u) { return; }
    }
    ctx->pc = 0x51F670u;
label_51f670:
    // 0x51f670: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51f670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_51f674:
    // 0x51f674: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x51f674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_51f678:
    // 0x51f678: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x51f678u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_51f67c:
    // 0x51f67c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x51f67cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_51f680:
    // 0x51f680: 0xc0b6df0  jal         func_2DB7C0
label_51f684:
    if (ctx->pc == 0x51F684u) {
        ctx->pc = 0x51F684u;
            // 0x51f684: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x51F688u;
        goto label_51f688;
    }
    ctx->pc = 0x51F680u;
    SET_GPR_U32(ctx, 31, 0x51F688u);
    ctx->pc = 0x51F684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F680u;
            // 0x51f684: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F688u; }
        if (ctx->pc != 0x51F688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F688u; }
        if (ctx->pc != 0x51F688u) { return; }
    }
    ctx->pc = 0x51F688u;
label_51f688:
    // 0x51f688: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x51f688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_51f68c:
    // 0x51f68c: 0xc0e07f8  jal         func_381FE0
label_51f690:
    if (ctx->pc == 0x51F690u) {
        ctx->pc = 0x51F690u;
            // 0x51f690: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x51F694u;
        goto label_51f694;
    }
    ctx->pc = 0x51F68Cu;
    SET_GPR_U32(ctx, 31, 0x51F694u);
    ctx->pc = 0x51F690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F68Cu;
            // 0x51f690: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F694u; }
        if (ctx->pc != 0x51F694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F694u; }
        if (ctx->pc != 0x51F694u) { return; }
    }
    ctx->pc = 0x51F694u;
label_51f694:
    // 0x51f694: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x51f694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_51f698:
    // 0x51f698: 0xc0dc3f4  jal         func_370FD0
label_51f69c:
    if (ctx->pc == 0x51F69Cu) {
        ctx->pc = 0x51F69Cu;
            // 0x51f69c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x51F6A0u;
        goto label_51f6a0;
    }
    ctx->pc = 0x51F698u;
    SET_GPR_U32(ctx, 31, 0x51F6A0u);
    ctx->pc = 0x51F69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F698u;
            // 0x51f69c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F6A0u; }
        if (ctx->pc != 0x51F6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F6A0u; }
        if (ctx->pc != 0x51F6A0u) { return; }
    }
    ctx->pc = 0x51F6A0u;
label_51f6a0:
    // 0x51f6a0: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x51f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_51f6a4:
    // 0x51f6a4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x51f6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_51f6a8:
    // 0x51f6a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_51f6ac:
    if (ctx->pc == 0x51F6ACu) {
        ctx->pc = 0x51F6B0u;
        goto label_51f6b0;
    }
    ctx->pc = 0x51F6A8u;
    {
        const bool branch_taken_0x51f6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x51f6a8) {
            ctx->pc = 0x51F6C0u;
            goto label_51f6c0;
        }
    }
    ctx->pc = 0x51F6B0u;
label_51f6b0:
    // 0x51f6b0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x51f6b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_51f6b4:
    // 0x51f6b4: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x51f6b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_51f6b8:
    // 0x51f6b8: 0x320f809  jalr        $t9
label_51f6bc:
    if (ctx->pc == 0x51F6BCu) {
        ctx->pc = 0x51F6BCu;
            // 0x51f6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51F6C0u;
        goto label_51f6c0;
    }
    ctx->pc = 0x51F6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51F6C0u);
        ctx->pc = 0x51F6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F6B8u;
            // 0x51f6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51F6C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51F6C0u; }
            if (ctx->pc != 0x51F6C0u) { return; }
        }
        }
    }
    ctx->pc = 0x51F6C0u;
label_51f6c0:
    // 0x51f6c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51f6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_51f6c4:
    // 0x51f6c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51f6c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51f6c8:
    // 0x51f6c8: 0x3e00008  jr          $ra
label_51f6cc:
    if (ctx->pc == 0x51F6CCu) {
        ctx->pc = 0x51F6CCu;
            // 0x51f6cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x51F6D0u;
        goto label_51f6d0;
    }
    ctx->pc = 0x51F6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51F6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F6C8u;
            // 0x51f6cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51F6D0u;
label_51f6d0:
    // 0x51f6d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51f6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_51f6d4:
    // 0x51f6d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51f6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_51f6d8:
    // 0x51f6d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51f6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51f6dc:
    // 0x51f6dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51f6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51f6e0:
    // 0x51f6e0: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x51f6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_51f6e4:
    // 0x51f6e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_51f6e8:
    if (ctx->pc == 0x51F6E8u) {
        ctx->pc = 0x51F6E8u;
            // 0x51f6e8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x51F6ECu;
        goto label_51f6ec;
    }
    ctx->pc = 0x51F6E4u;
    {
        const bool branch_taken_0x51f6e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51f6e4) {
            ctx->pc = 0x51F6E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51F6E4u;
            // 0x51f6e8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51F700u;
            goto label_51f700;
        }
    }
    ctx->pc = 0x51F6ECu;
label_51f6ec:
    // 0x51f6ec: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x51f6ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_51f6f0:
    // 0x51f6f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x51f6f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_51f6f4:
    // 0x51f6f4: 0x320f809  jalr        $t9
label_51f6f8:
    if (ctx->pc == 0x51F6F8u) {
        ctx->pc = 0x51F6F8u;
            // 0x51f6f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51F6FCu;
        goto label_51f6fc;
    }
    ctx->pc = 0x51F6F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51F6FCu);
        ctx->pc = 0x51F6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F6F4u;
            // 0x51f6f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51F6FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51F6FCu; }
            if (ctx->pc != 0x51F6FCu) { return; }
        }
        }
    }
    ctx->pc = 0x51F6FCu;
label_51f6fc:
    // 0x51f6fc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x51f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_51f700:
    // 0x51f700: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x51f700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_51f704:
    // 0x51f704: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_51f708:
    if (ctx->pc == 0x51F708u) {
        ctx->pc = 0x51F708u;
            // 0x51f708: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->pc = 0x51F70Cu;
        goto label_51f70c;
    }
    ctx->pc = 0x51F704u;
    {
        const bool branch_taken_0x51f704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51f704) {
            ctx->pc = 0x51F708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51F704u;
            // 0x51f708: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51F720u;
            goto label_51f720;
        }
    }
    ctx->pc = 0x51F70Cu;
label_51f70c:
    // 0x51f70c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51f70cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51f710:
    // 0x51f710: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x51f710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_51f714:
    // 0x51f714: 0x320f809  jalr        $t9
label_51f718:
    if (ctx->pc == 0x51F718u) {
        ctx->pc = 0x51F718u;
            // 0x51f718: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51F71Cu;
        goto label_51f71c;
    }
    ctx->pc = 0x51F714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51F71Cu);
        ctx->pc = 0x51F718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F714u;
            // 0x51f718: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51F71Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51F71Cu; }
            if (ctx->pc != 0x51F71Cu) { return; }
        }
        }
    }
    ctx->pc = 0x51F71Cu;
label_51f71c:
    // 0x51f71c: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x51f71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_51f720:
    // 0x51f720: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x51f720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_51f724:
    // 0x51f724: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_51f728:
    if (ctx->pc == 0x51F728u) {
        ctx->pc = 0x51F728u;
            // 0x51f728: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x51F72Cu;
        goto label_51f72c;
    }
    ctx->pc = 0x51F724u;
    {
        const bool branch_taken_0x51f724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51f724) {
            ctx->pc = 0x51F728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51F724u;
            // 0x51f728: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51F740u;
            goto label_51f740;
        }
    }
    ctx->pc = 0x51F72Cu;
label_51f72c:
    // 0x51f72c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51f72cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51f730:
    // 0x51f730: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x51f730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_51f734:
    // 0x51f734: 0x320f809  jalr        $t9
label_51f738:
    if (ctx->pc == 0x51F738u) {
        ctx->pc = 0x51F738u;
            // 0x51f738: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51F73Cu;
        goto label_51f73c;
    }
    ctx->pc = 0x51F734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51F73Cu);
        ctx->pc = 0x51F738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F734u;
            // 0x51f738: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51F73Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51F73Cu; }
            if (ctx->pc != 0x51F73Cu) { return; }
        }
        }
    }
    ctx->pc = 0x51F73Cu;
label_51f73c:
    // 0x51f73c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x51f73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_51f740:
    // 0x51f740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51f740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_51f744:
    // 0x51f744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51f744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51f748:
    // 0x51f748: 0x3e00008  jr          $ra
label_51f74c:
    if (ctx->pc == 0x51F74Cu) {
        ctx->pc = 0x51F74Cu;
            // 0x51f74c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x51F750u;
        goto label_51f750;
    }
    ctx->pc = 0x51F748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51F74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F748u;
            // 0x51f74c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51F750u;
label_51f750:
    // 0x51f750: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x51f750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_51f754:
    // 0x51f754: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x51f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_51f758:
    // 0x51f758: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x51f758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_51f75c:
    // 0x51f75c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x51f75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_51f760:
    // 0x51f760: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x51f760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51f764:
    // 0x51f764: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x51f764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_51f768:
    // 0x51f768: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x51f768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_51f76c:
    // 0x51f76c: 0xc0892d0  jal         func_224B40
label_51f770:
    if (ctx->pc == 0x51F770u) {
        ctx->pc = 0x51F770u;
            // 0x51f770: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x51F774u;
        goto label_51f774;
    }
    ctx->pc = 0x51F76Cu;
    SET_GPR_U32(ctx, 31, 0x51F774u);
    ctx->pc = 0x51F770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F76Cu;
            // 0x51f770: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F774u; }
        if (ctx->pc != 0x51F774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F774u; }
        if (ctx->pc != 0x51F774u) { return; }
    }
    ctx->pc = 0x51F774u;
label_51f774:
    // 0x51f774: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x51f774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_51f778:
    // 0x51f778: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x51f778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_51f77c:
    // 0x51f77c: 0x320f809  jalr        $t9
label_51f780:
    if (ctx->pc == 0x51F780u) {
        ctx->pc = 0x51F780u;
            // 0x51f780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51F784u;
        goto label_51f784;
    }
    ctx->pc = 0x51F77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51F784u);
        ctx->pc = 0x51F780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F77Cu;
            // 0x51f780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51F784u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51F784u; }
            if (ctx->pc != 0x51F784u) { return; }
        }
        }
    }
    ctx->pc = 0x51F784u;
label_51f784:
    // 0x51f784: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x51f784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_51f788:
    // 0x51f788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x51f788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51f78c:
    // 0x51f78c: 0x8f3900a0  lw          $t9, 0xA0($t9)
    ctx->pc = 0x51f78cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 160)));
label_51f790:
    // 0x51f790: 0x320f809  jalr        $t9
label_51f794:
    if (ctx->pc == 0x51F794u) {
        ctx->pc = 0x51F794u;
            // 0x51f794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51F798u;
        goto label_51f798;
    }
    ctx->pc = 0x51F790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51F798u);
        ctx->pc = 0x51F794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F790u;
            // 0x51f794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51F798u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51F798u; }
            if (ctx->pc != 0x51F798u) { return; }
        }
        }
    }
    ctx->pc = 0x51F798u;
label_51f798:
    // 0x51f798: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x51f798u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_51f79c:
    // 0x51f79c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x51f79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_51f7a0:
    // 0x51f7a0: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x51f7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_51f7a4:
    // 0x51f7a4: 0xc0b6e68  jal         func_2DB9A0
label_51f7a8:
    if (ctx->pc == 0x51F7A8u) {
        ctx->pc = 0x51F7A8u;
            // 0x51f7a8: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x51F7ACu;
        goto label_51f7ac;
    }
    ctx->pc = 0x51F7A4u;
    SET_GPR_U32(ctx, 31, 0x51F7ACu);
    ctx->pc = 0x51F7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F7A4u;
            // 0x51f7a8: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F7ACu; }
        if (ctx->pc != 0x51F7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F7ACu; }
        if (ctx->pc != 0x51F7ACu) { return; }
    }
    ctx->pc = 0x51F7ACu;
label_51f7ac:
    // 0x51f7ac: 0xc0b6dac  jal         func_2DB6B0
label_51f7b0:
    if (ctx->pc == 0x51F7B0u) {
        ctx->pc = 0x51F7B0u;
            // 0x51f7b0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x51F7B4u;
        goto label_51f7b4;
    }
    ctx->pc = 0x51F7ACu;
    SET_GPR_U32(ctx, 31, 0x51F7B4u);
    ctx->pc = 0x51F7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F7ACu;
            // 0x51f7b0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F7B4u; }
        if (ctx->pc != 0x51F7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F7B4u; }
        if (ctx->pc != 0x51F7B4u) { return; }
    }
    ctx->pc = 0x51F7B4u;
label_51f7b4:
    // 0x51f7b4: 0xc0cac94  jal         func_32B250
label_51f7b8:
    if (ctx->pc == 0x51F7B8u) {
        ctx->pc = 0x51F7B8u;
            // 0x51f7b8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x51F7BCu;
        goto label_51f7bc;
    }
    ctx->pc = 0x51F7B4u;
    SET_GPR_U32(ctx, 31, 0x51F7BCu);
    ctx->pc = 0x51F7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F7B4u;
            // 0x51f7b8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F7BCu; }
        if (ctx->pc != 0x51F7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F7BCu; }
        if (ctx->pc != 0x51F7BCu) { return; }
    }
    ctx->pc = 0x51F7BCu;
label_51f7bc:
    // 0x51f7bc: 0xc0cac84  jal         func_32B210
label_51f7c0:
    if (ctx->pc == 0x51F7C0u) {
        ctx->pc = 0x51F7C0u;
            // 0x51f7c0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x51F7C4u;
        goto label_51f7c4;
    }
    ctx->pc = 0x51F7BCu;
    SET_GPR_U32(ctx, 31, 0x51F7C4u);
    ctx->pc = 0x51F7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F7BCu;
            // 0x51f7c0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F7C4u; }
        if (ctx->pc != 0x51F7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F7C4u; }
        if (ctx->pc != 0x51F7C4u) { return; }
    }
    ctx->pc = 0x51F7C4u;
label_51f7c4:
    // 0x51f7c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x51f7c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_51f7c8:
    // 0x51f7c8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x51f7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_51f7cc:
    // 0x51f7cc: 0xc0a5a68  jal         func_2969A0
label_51f7d0:
    if (ctx->pc == 0x51F7D0u) {
        ctx->pc = 0x51F7D0u;
            // 0x51f7d0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x51F7D4u;
        goto label_51f7d4;
    }
    ctx->pc = 0x51F7CCu;
    SET_GPR_U32(ctx, 31, 0x51F7D4u);
    ctx->pc = 0x51F7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F7CCu;
            // 0x51f7d0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F7D4u; }
        if (ctx->pc != 0x51F7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F7D4u; }
        if (ctx->pc != 0x51F7D4u) { return; }
    }
    ctx->pc = 0x51F7D4u;
label_51f7d4:
    // 0x51f7d4: 0xafb000d4  sw          $s0, 0xD4($sp)
    ctx->pc = 0x51f7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 16));
label_51f7d8:
    // 0x51f7d8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x51f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_51f7dc:
    // 0x51f7dc: 0xc6260018  lwc1        $f6, 0x18($s1)
    ctx->pc = 0x51f7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_51f7e0:
    // 0x51f7e0: 0x3448cccd  ori         $t0, $v0, 0xCCCD
    ctx->pc = 0x51f7e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_51f7e4:
    // 0x51f7e4: 0xc6250014  lwc1        $f5, 0x14($s1)
    ctx->pc = 0x51f7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_51f7e8:
    // 0x51f7e8: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x51f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_51f7ec:
    // 0x51f7ec: 0xc6240010  lwc1        $f4, 0x10($s1)
    ctx->pc = 0x51f7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_51f7f0:
    // 0x51f7f0: 0x344401a0  ori         $a0, $v0, 0x1A0
    ctx->pc = 0x51f7f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)416);
label_51f7f4:
    // 0x51f7f4: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x51f7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51f7f8:
    // 0x51f7f8: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x51f7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
label_51f7fc:
    // 0x51f7fc: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x51f7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_51f800:
    // 0x51f800: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x51f800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51f804:
    // 0x51f804: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x51f804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51f808:
    // 0x51f808: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x51f808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_51f80c:
    // 0x51f80c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x51f80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_51f810:
    // 0x51f810: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x51f810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_51f814:
    // 0x51f814: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x51f814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51f818:
    // 0x51f818: 0xafa50178  sw          $a1, 0x178($sp)
    ctx->pc = 0x51f818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 5));
label_51f81c:
    // 0x51f81c: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x51f81cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_51f820:
    // 0x51f820: 0xa3a60180  sb          $a2, 0x180($sp)
    ctx->pc = 0x51f820u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 6));
label_51f824:
    // 0x51f824: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x51f824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_51f828:
    // 0x51f828: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51f828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51f82c:
    // 0x51f82c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x51f82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_51f830:
    // 0x51f830: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x51f830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
label_51f834:
    // 0x51f834: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x51f834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_51f838:
    // 0x51f838: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x51f838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_51f83c:
    // 0x51f83c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x51f83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51f840:
    // 0x51f840: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x51f840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_51f844:
    // 0x51f844: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x51f844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51f848:
    // 0x51f848: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x51f848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_51f84c:
    // 0x51f84c: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x51f84cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_51f850:
    // 0x51f850: 0xafa8017c  sw          $t0, 0x17C($sp)
    ctx->pc = 0x51f850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 8));
label_51f854:
    // 0x51f854: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x51f854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_51f858:
    // 0x51f858: 0xa3a70182  sb          $a3, 0x182($sp)
    ctx->pc = 0x51f858u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 386), (uint8_t)GPR_U32(ctx, 7));
label_51f85c:
    // 0x51f85c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x51f85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_51f860:
    // 0x51f860: 0xa3a30183  sb          $v1, 0x183($sp)
    ctx->pc = 0x51f860u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 387), (uint8_t)GPR_U32(ctx, 3));
label_51f864:
    // 0x51f864: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x51f864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_51f868:
    // 0x51f868: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x51f868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_51f86c:
    // 0x51f86c: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x51f86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51f870:
    // 0x51f870: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x51f870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51f874:
    // 0x51f874: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x51f874u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_51f878:
    // 0x51f878: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x51f878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_51f87c:
    // 0x51f87c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x51f87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_51f880:
    // 0x51f880: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x51f880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_51f884:
    // 0x51f884: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x51f884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51f888:
    // 0x51f888: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x51f888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51f88c:
    // 0x51f88c: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x51f88cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_51f890:
    // 0x51f890: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x51f890u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_51f894:
    // 0x51f894: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x51f894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_51f898:
    // 0x51f898: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x51f898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_51f89c:
    // 0x51f89c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x51f89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_51f8a0:
    // 0x51f8a0: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x51f8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51f8a4:
    // 0x51f8a4: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x51f8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51f8a8:
    // 0x51f8a8: 0xe7a400e0  swc1        $f4, 0xE0($sp)
    ctx->pc = 0x51f8a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_51f8ac:
    // 0x51f8ac: 0xe7a500e4  swc1        $f5, 0xE4($sp)
    ctx->pc = 0x51f8acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_51f8b0:
    // 0x51f8b0: 0xe7a600e8  swc1        $f6, 0xE8($sp)
    ctx->pc = 0x51f8b0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_51f8b4:
    // 0x51f8b4: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x51f8b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_51f8b8:
    // 0x51f8b8: 0xe7a20154  swc1        $f2, 0x154($sp)
    ctx->pc = 0x51f8b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_51f8bc:
    // 0x51f8bc: 0xe7a10158  swc1        $f1, 0x158($sp)
    ctx->pc = 0x51f8bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_51f8c0:
    // 0x51f8c0: 0xc0a7a88  jal         func_29EA20
label_51f8c4:
    if (ctx->pc == 0x51F8C4u) {
        ctx->pc = 0x51F8C4u;
            // 0x51f8c4: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->pc = 0x51F8C8u;
        goto label_51f8c8;
    }
    ctx->pc = 0x51F8C0u;
    SET_GPR_U32(ctx, 31, 0x51F8C8u);
    ctx->pc = 0x51F8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F8C0u;
            // 0x51f8c4: 0xe7a00160  swc1        $f0, 0x160($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F8C8u; }
        if (ctx->pc != 0x51F8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F8C8u; }
        if (ctx->pc != 0x51F8C8u) { return; }
    }
    ctx->pc = 0x51F8C8u;
label_51f8c8:
    // 0x51f8c8: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x51f8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_51f8cc:
    // 0x51f8cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x51f8ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51f8d0:
    // 0x51f8d0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_51f8d4:
    if (ctx->pc == 0x51F8D4u) {
        ctx->pc = 0x51F8D4u;
            // 0x51f8d4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x51F8D8u;
        goto label_51f8d8;
    }
    ctx->pc = 0x51F8D0u;
    {
        const bool branch_taken_0x51f8d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x51F8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F8D0u;
            // 0x51f8d4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51f8d0) {
            ctx->pc = 0x51F920u;
            goto label_51f920;
        }
    }
    ctx->pc = 0x51F8D8u;
label_51f8d8:
    // 0x51f8d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51f8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51f8dc:
    // 0x51f8dc: 0xc088ef4  jal         func_223BD0
label_51f8e0:
    if (ctx->pc == 0x51F8E0u) {
        ctx->pc = 0x51F8E0u;
            // 0x51f8e0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x51F8E4u;
        goto label_51f8e4;
    }
    ctx->pc = 0x51F8DCu;
    SET_GPR_U32(ctx, 31, 0x51F8E4u);
    ctx->pc = 0x51F8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F8DCu;
            // 0x51f8e0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F8E4u; }
        if (ctx->pc != 0x51F8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F8E4u; }
        if (ctx->pc != 0x51F8E4u) { return; }
    }
    ctx->pc = 0x51F8E4u;
label_51f8e4:
    // 0x51f8e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_51f8e8:
    // 0x51f8e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x51f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_51f8ec:
    // 0x51f8ec: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x51f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_51f8f0:
    // 0x51f8f0: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x51f8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_51f8f4:
    // 0x51f8f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x51f8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_51f8f8:
    // 0x51f8f8: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x51f8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_51f8fc:
    // 0x51f8fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51f900:
    // 0x51f900: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x51f900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_51f904:
    // 0x51f904: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x51f904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_51f908:
    // 0x51f908: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x51f908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_51f90c:
    // 0x51f90c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x51f90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_51f910:
    // 0x51f910: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x51f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_51f914:
    // 0x51f914: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x51f914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_51f918:
    // 0x51f918: 0xc088b38  jal         func_222CE0
label_51f91c:
    if (ctx->pc == 0x51F91Cu) {
        ctx->pc = 0x51F91Cu;
            // 0x51f91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51F920u;
        goto label_51f920;
    }
    ctx->pc = 0x51F918u;
    SET_GPR_U32(ctx, 31, 0x51F920u);
    ctx->pc = 0x51F91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F918u;
            // 0x51f91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F920u; }
        if (ctx->pc != 0x51F920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F920u; }
        if (ctx->pc != 0x51F920u) { return; }
    }
    ctx->pc = 0x51F920u;
label_51f920:
    // 0x51f920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51f920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51f924:
    // 0x51f924: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x51f924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_51f928:
    // 0x51f928: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x51f928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51f92c:
    // 0x51f92c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x51f92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51f930:
    // 0x51f930: 0xc08914c  jal         func_224530
label_51f934:
    if (ctx->pc == 0x51F934u) {
        ctx->pc = 0x51F934u;
            // 0x51f934: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x51F938u;
        goto label_51f938;
    }
    ctx->pc = 0x51F930u;
    SET_GPR_U32(ctx, 31, 0x51F938u);
    ctx->pc = 0x51F934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F930u;
            // 0x51f934: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F938u; }
        if (ctx->pc != 0x51F938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F938u; }
        if (ctx->pc != 0x51F938u) { return; }
    }
    ctx->pc = 0x51F938u;
label_51f938:
    // 0x51f938: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x51f938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_51f93c:
    // 0x51f93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51f93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51f940:
    // 0x51f940: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x51f940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51f944:
    // 0x51f944: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x51f944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_51f948:
    // 0x51f948: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x51f948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51f94c:
    // 0x51f94c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x51f94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_51f950:
    // 0x51f950: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x51f950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_51f954:
    // 0x51f954: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x51f954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_51f958:
    // 0x51f958: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x51f958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_51f95c:
    // 0x51f95c: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x51f95cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_51f960:
    // 0x51f960: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x51f960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_51f964:
    // 0x51f964: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x51f964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_51f968:
    // 0x51f968: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x51f968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51f96c:
    // 0x51f96c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x51f96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51f970:
    // 0x51f970: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x51f970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_51f974:
    // 0x51f974: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x51f974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_51f978:
    // 0x51f978: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x51f978u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_51f97c:
    // 0x51f97c: 0xc0892b0  jal         func_224AC0
label_51f980:
    if (ctx->pc == 0x51F980u) {
        ctx->pc = 0x51F980u;
            // 0x51f980: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x51F984u;
        goto label_51f984;
    }
    ctx->pc = 0x51F97Cu;
    SET_GPR_U32(ctx, 31, 0x51F984u);
    ctx->pc = 0x51F980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F97Cu;
            // 0x51f980: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F984u; }
        if (ctx->pc != 0x51F984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F984u; }
        if (ctx->pc != 0x51F984u) { return; }
    }
    ctx->pc = 0x51F984u;
label_51f984:
    // 0x51f984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51f984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51f988:
    // 0x51f988: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x51f988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_51f98c:
    // 0x51f98c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x51f98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_51f990:
    // 0x51f990: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x51f990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_51f994:
    // 0x51f994: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x51f994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_51f998:
    // 0x51f998: 0xc0891d8  jal         func_224760
label_51f99c:
    if (ctx->pc == 0x51F99Cu) {
        ctx->pc = 0x51F99Cu;
            // 0x51f99c: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x51F9A0u;
        goto label_51f9a0;
    }
    ctx->pc = 0x51F998u;
    SET_GPR_U32(ctx, 31, 0x51F9A0u);
    ctx->pc = 0x51F99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F998u;
            // 0x51f99c: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F9A0u; }
        if (ctx->pc != 0x51F9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F9A0u; }
        if (ctx->pc != 0x51F9A0u) { return; }
    }
    ctx->pc = 0x51F9A0u;
label_51f9a0:
    // 0x51f9a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51f9a4:
    // 0x51f9a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x51f9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51f9a8:
    // 0x51f9a8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x51f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_51f9ac:
    // 0x51f9ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x51f9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_51f9b0:
    // 0x51f9b0: 0xc08c164  jal         func_230590
label_51f9b4:
    if (ctx->pc == 0x51F9B4u) {
        ctx->pc = 0x51F9B4u;
            // 0x51f9b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51F9B8u;
        goto label_51f9b8;
    }
    ctx->pc = 0x51F9B0u;
    SET_GPR_U32(ctx, 31, 0x51F9B8u);
    ctx->pc = 0x51F9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F9B0u;
            // 0x51f9b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F9B8u; }
        if (ctx->pc != 0x51F9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F9B8u; }
        if (ctx->pc != 0x51F9B8u) { return; }
    }
    ctx->pc = 0x51F9B8u;
label_51f9b8:
    // 0x51f9b8: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x51f9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_51f9bc:
    // 0x51f9bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51f9c0:
    // 0x51f9c0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x51f9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_51f9c4:
    // 0x51f9c4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x51f9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_51f9c8:
    // 0x51f9c8: 0xc0a7a88  jal         func_29EA20
label_51f9cc:
    if (ctx->pc == 0x51F9CCu) {
        ctx->pc = 0x51F9CCu;
            // 0x51f9cc: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x51F9D0u;
        goto label_51f9d0;
    }
    ctx->pc = 0x51F9C8u;
    SET_GPR_U32(ctx, 31, 0x51F9D0u);
    ctx->pc = 0x51F9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F9C8u;
            // 0x51f9cc: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F9D0u; }
        if (ctx->pc != 0x51F9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F9D0u; }
        if (ctx->pc != 0x51F9D0u) { return; }
    }
    ctx->pc = 0x51F9D0u;
label_51f9d0:
    // 0x51f9d0: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x51f9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_51f9d4:
    // 0x51f9d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x51f9d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51f9d8:
    // 0x51f9d8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_51f9dc:
    if (ctx->pc == 0x51F9DCu) {
        ctx->pc = 0x51F9DCu;
            // 0x51f9dc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x51F9E0u;
        goto label_51f9e0;
    }
    ctx->pc = 0x51F9D8u;
    {
        const bool branch_taken_0x51f9d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x51F9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51F9D8u;
            // 0x51f9dc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51f9d8) {
            ctx->pc = 0x51F9FCu;
            goto label_51f9fc;
        }
    }
    ctx->pc = 0x51F9E0u;
label_51f9e0:
    // 0x51f9e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51f9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51f9e4:
    // 0x51f9e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x51f9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51f9e8:
    // 0x51f9e8: 0xc0869d0  jal         func_21A740
label_51f9ec:
    if (ctx->pc == 0x51F9ECu) {
        ctx->pc = 0x51F9ECu;
            // 0x51f9ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51F9F0u;
        goto label_51f9f0;
    }
    ctx->pc = 0x51F9E8u;
    SET_GPR_U32(ctx, 31, 0x51F9F0u);
    ctx->pc = 0x51F9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51F9E8u;
            // 0x51f9ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F9F0u; }
        if (ctx->pc != 0x51F9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51F9F0u; }
        if (ctx->pc != 0x51F9F0u) { return; }
    }
    ctx->pc = 0x51F9F0u;
label_51f9f0:
    // 0x51f9f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_51f9f4:
    // 0x51f9f4: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x51f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_51f9f8:
    // 0x51f9f8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x51f9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_51f9fc:
    // 0x51f9fc: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x51f9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_51fa00:
    // 0x51fa00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51fa04:
    // 0x51fa04: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x51fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_51fa08:
    // 0x51fa08: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x51fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_51fa0c:
    // 0x51fa0c: 0xc08c650  jal         func_231940
label_51fa10:
    if (ctx->pc == 0x51FA10u) {
        ctx->pc = 0x51FA10u;
            // 0x51fa10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FA14u;
        goto label_51fa14;
    }
    ctx->pc = 0x51FA0Cu;
    SET_GPR_U32(ctx, 31, 0x51FA14u);
    ctx->pc = 0x51FA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FA0Cu;
            // 0x51fa10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FA14u; }
        if (ctx->pc != 0x51FA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FA14u; }
        if (ctx->pc != 0x51FA14u) { return; }
    }
    ctx->pc = 0x51FA14u;
label_51fa14:
    // 0x51fa14: 0xc040180  jal         func_100600
label_51fa18:
    if (ctx->pc == 0x51FA18u) {
        ctx->pc = 0x51FA18u;
            // 0x51fa18: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x51FA1Cu;
        goto label_51fa1c;
    }
    ctx->pc = 0x51FA14u;
    SET_GPR_U32(ctx, 31, 0x51FA1Cu);
    ctx->pc = 0x51FA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FA14u;
            // 0x51fa18: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FA1Cu; }
        if (ctx->pc != 0x51FA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FA1Cu; }
        if (ctx->pc != 0x51FA1Cu) { return; }
    }
    ctx->pc = 0x51FA1Cu;
label_51fa1c:
    // 0x51fa1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x51fa1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51fa20:
    // 0x51fa20: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
label_51fa24:
    if (ctx->pc == 0x51FA24u) {
        ctx->pc = 0x51FA24u;
            // 0x51fa24: 0xae3000a0  sw          $s0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 16));
        ctx->pc = 0x51FA28u;
        goto label_51fa28;
    }
    ctx->pc = 0x51FA20u;
    {
        const bool branch_taken_0x51fa20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51fa20) {
            ctx->pc = 0x51FA24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51FA20u;
            // 0x51fa24: 0xae3000a0  sw          $s0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51FA78u;
            goto label_51fa78;
        }
    }
    ctx->pc = 0x51FA28u;
label_51fa28:
    // 0x51fa28: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x51fa28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_51fa2c:
    // 0x51fa2c: 0x8f3900a4  lw          $t9, 0xA4($t9)
    ctx->pc = 0x51fa2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 164)));
label_51fa30:
    // 0x51fa30: 0x320f809  jalr        $t9
label_51fa34:
    if (ctx->pc == 0x51FA34u) {
        ctx->pc = 0x51FA34u;
            // 0x51fa34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FA38u;
        goto label_51fa38;
    }
    ctx->pc = 0x51FA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51FA38u);
        ctx->pc = 0x51FA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51FA30u;
            // 0x51fa34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51FA38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51FA38u; }
            if (ctx->pc != 0x51FA38u) { return; }
        }
        }
    }
    ctx->pc = 0x51FA38u;
label_51fa38:
    // 0x51fa38: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x51fa38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_51fa3c:
    // 0x51fa3c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x51fa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_51fa40:
    // 0x51fa40: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x51fa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_51fa44:
    // 0x51fa44: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x51fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_51fa48:
    // 0x51fa48: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x51fa48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
label_51fa4c:
    // 0x51fa4c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x51fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_51fa50:
    // 0x51fa50: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x51fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
label_51fa54:
    // 0x51fa54: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x51fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_51fa58:
    // 0x51fa58: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x51fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_51fa5c:
    // 0x51fa5c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x51fa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_51fa60:
    // 0x51fa60: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x51fa60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_51fa64:
    // 0x51fa64: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x51fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_51fa68:
    // 0x51fa68: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x51fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_51fa6c:
    // 0x51fa6c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x51fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_51fa70:
    // 0x51fa70: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x51fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_51fa74:
    // 0x51fa74: 0xae3000a0  sw          $s0, 0xA0($s1)
    ctx->pc = 0x51fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 16));
label_51fa78:
    // 0x51fa78: 0x2402f9fb  addiu       $v0, $zero, -0x605
    ctx->pc = 0x51fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965755));
label_51fa7c:
    // 0x51fa7c: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x51fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_51fa80:
    // 0x51fa80: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x51fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_51fa84:
    // 0x51fa84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x51fa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_51fa88:
    // 0x51fa88: 0x34420604  ori         $v0, $v0, 0x604
    ctx->pc = 0x51fa88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
label_51fa8c:
    // 0x51fa8c: 0xc040180  jal         func_100600
label_51fa90:
    if (ctx->pc == 0x51FA90u) {
        ctx->pc = 0x51FA90u;
            // 0x51fa90: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x51FA94u;
        goto label_51fa94;
    }
    ctx->pc = 0x51FA8Cu;
    SET_GPR_U32(ctx, 31, 0x51FA94u);
    ctx->pc = 0x51FA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FA8Cu;
            // 0x51fa90: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FA94u; }
        if (ctx->pc != 0x51FA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FA94u; }
        if (ctx->pc != 0x51FA94u) { return; }
    }
    ctx->pc = 0x51FA94u;
label_51fa94:
    // 0x51fa94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x51fa94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51fa98:
    // 0x51fa98: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_51fa9c:
    if (ctx->pc == 0x51FA9Cu) {
        ctx->pc = 0x51FA9Cu;
            // 0x51fa9c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x51FAA0u;
        goto label_51faa0;
    }
    ctx->pc = 0x51FA98u;
    {
        const bool branch_taken_0x51fa98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51fa98) {
            ctx->pc = 0x51FA9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51FA98u;
            // 0x51fa9c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51FAD8u;
            goto label_51fad8;
        }
    }
    ctx->pc = 0x51FAA0u;
label_51faa0:
    // 0x51faa0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x51faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_51faa4:
    // 0x51faa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x51faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51faa8:
    // 0x51faa8: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x51faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_51faac:
    // 0x51faac: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x51faacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_51fab0:
    // 0x51fab0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x51fab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_51fab4:
    // 0x51fab4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x51fab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_51fab8:
    // 0x51fab8: 0xc040138  jal         func_1004E0
label_51fabc:
    if (ctx->pc == 0x51FABCu) {
        ctx->pc = 0x51FABCu;
            // 0x51fabc: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x51FAC0u;
        goto label_51fac0;
    }
    ctx->pc = 0x51FAB8u;
    SET_GPR_U32(ctx, 31, 0x51FAC0u);
    ctx->pc = 0x51FABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FAB8u;
            // 0x51fabc: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FAC0u; }
        if (ctx->pc != 0x51FAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FAC0u; }
        if (ctx->pc != 0x51FAC0u) { return; }
    }
    ctx->pc = 0x51FAC0u;
label_51fac0:
    // 0x51fac0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x51fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_51fac4:
    // 0x51fac4: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x51fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_51fac8:
    // 0x51fac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51fac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51facc:
    // 0x51facc: 0xc04a576  jal         func_1295D8
label_51fad0:
    if (ctx->pc == 0x51FAD0u) {
        ctx->pc = 0x51FAD0u;
            // 0x51fad0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x51FAD4u;
        goto label_51fad4;
    }
    ctx->pc = 0x51FACCu;
    SET_GPR_U32(ctx, 31, 0x51FAD4u);
    ctx->pc = 0x51FAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FACCu;
            // 0x51fad0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FAD4u; }
        if (ctx->pc != 0x51FAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FAD4u; }
        if (ctx->pc != 0x51FAD4u) { return; }
    }
    ctx->pc = 0x51FAD4u;
label_51fad4:
    // 0x51fad4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x51fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_51fad8:
    // 0x51fad8: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x51fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
label_51fadc:
    // 0x51fadc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x51fadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_51fae0:
    // 0x51fae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51fae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51fae4:
    // 0x51fae4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x51fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_51fae8:
    // 0x51fae8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51fae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51faec:
    // 0x51faec: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x51faecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_51faf0:
    // 0x51faf0: 0x344601ae  ori         $a2, $v0, 0x1AE
    ctx->pc = 0x51faf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
label_51faf4:
    // 0x51faf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x51faf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51faf8:
    // 0x51faf8: 0xc122cd8  jal         func_48B360
label_51fafc:
    if (ctx->pc == 0x51FAFCu) {
        ctx->pc = 0x51FAFCu;
            // 0x51fafc: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->pc = 0x51FB00u;
        goto label_51fb00;
    }
    ctx->pc = 0x51FAF8u;
    SET_GPR_U32(ctx, 31, 0x51FB00u);
    ctx->pc = 0x51FAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FAF8u;
            // 0x51fafc: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FB00u; }
        if (ctx->pc != 0x51FB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FB00u; }
        if (ctx->pc != 0x51FB00u) { return; }
    }
    ctx->pc = 0x51FB00u;
label_51fb00:
    // 0x51fb00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x51fb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_51fb04:
    // 0x51fb04: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x51fb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_51fb08:
    // 0x51fb08: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x51fb08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51fb0c:
    // 0x51fb0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x51fb0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51fb10:
    // 0x51fb10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x51fb10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51fb14:
    // 0x51fb14: 0x3e00008  jr          $ra
label_51fb18:
    if (ctx->pc == 0x51FB18u) {
        ctx->pc = 0x51FB18u;
            // 0x51fb18: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x51FB1Cu;
        goto label_51fb1c;
    }
    ctx->pc = 0x51FB14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51FB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51FB14u;
            // 0x51fb18: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51FB1Cu;
label_51fb1c:
    // 0x51fb1c: 0x0  nop
    ctx->pc = 0x51fb1cu;
    // NOP
label_51fb20:
    // 0x51fb20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51fb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_51fb24:
    // 0x51fb24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51fb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_51fb28:
    // 0x51fb28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51fb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51fb2c:
    // 0x51fb2c: 0xc0e3580  jal         func_38D600
label_51fb30:
    if (ctx->pc == 0x51FB30u) {
        ctx->pc = 0x51FB30u;
            // 0x51fb30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FB34u;
        goto label_51fb34;
    }
    ctx->pc = 0x51FB2Cu;
    SET_GPR_U32(ctx, 31, 0x51FB34u);
    ctx->pc = 0x51FB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FB2Cu;
            // 0x51fb30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FB34u; }
        if (ctx->pc != 0x51FB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FB34u; }
        if (ctx->pc != 0x51FB34u) { return; }
    }
    ctx->pc = 0x51FB34u;
label_51fb34:
    // 0x51fb34: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x51fb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_51fb38:
    // 0x51fb38: 0x3c070065  lui         $a3, 0x65
    ctx->pc = 0x51fb38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)101 << 16));
label_51fb3c:
    // 0x51fb3c: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x51fb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_51fb40:
    // 0x51fb40: 0xae06008c  sw          $a2, 0x8C($s0)
    ctx->pc = 0x51fb40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 6));
label_51fb44:
    // 0x51fb44: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x51fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
label_51fb48:
    // 0x51fb48: 0x3c054516  lui         $a1, 0x4516
    ctx->pc = 0x51fb48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17686 << 16));
label_51fb4c:
    // 0x51fb4c: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x51fb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
label_51fb50:
    // 0x51fb50: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x51fb50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_51fb54:
    // 0x51fb54: 0xae050080  sw          $a1, 0x80($s0)
    ctx->pc = 0x51fb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 5));
label_51fb58:
    // 0x51fb58: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x51fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_51fb5c:
    // 0x51fb5c: 0xa20600cc  sb          $a2, 0xCC($s0)
    ctx->pc = 0x51fb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 6));
label_51fb60:
    // 0x51fb60: 0x24e75f60  addiu       $a3, $a3, 0x5F60
    ctx->pc = 0x51fb60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24416));
label_51fb64:
    // 0x51fb64: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x51fb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_51fb68:
    // 0x51fb68: 0x2406fdff  addiu       $a2, $zero, -0x201
    ctx->pc = 0x51fb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_51fb6c:
    // 0x51fb6c: 0x8c688a08  lw          $t0, -0x75F8($v1)
    ctx->pc = 0x51fb6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_51fb70:
    // 0x51fb70: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x51fb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_51fb74:
    // 0x51fb74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x51fb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51fb78:
    // 0x51fb78: 0x8108007a  lb          $t0, 0x7A($t0)
    ctx->pc = 0x51fb78u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 122)));
label_51fb7c:
    // 0x51fb7c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x51fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_51fb80:
    // 0x51fb80: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x51fb80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_51fb84:
    // 0x51fb84: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x51fb84u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_51fb88:
    // 0x51fb88: 0xae0700c8  sw          $a3, 0xC8($s0)
    ctx->pc = 0x51fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 7));
label_51fb8c:
    // 0x51fb8c: 0x8e0700b0  lw          $a3, 0xB0($s0)
    ctx->pc = 0x51fb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_51fb90:
    // 0x51fb90: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x51fb90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_51fb94:
    // 0x51fb94: 0xae0600b0  sw          $a2, 0xB0($s0)
    ctx->pc = 0x51fb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 6));
label_51fb98:
    // 0x51fb98: 0xa2050064  sb          $a1, 0x64($s0)
    ctx->pc = 0x51fb98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 5));
label_51fb9c:
    // 0x51fb9c: 0xa2040065  sb          $a0, 0x65($s0)
    ctx->pc = 0x51fb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 4));
label_51fba0:
    // 0x51fba0: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x51fba0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
label_51fba4:
    // 0x51fba4: 0xa2030069  sb          $v1, 0x69($s0)
    ctx->pc = 0x51fba4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 3));
label_51fba8:
    // 0x51fba8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51fba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_51fbac:
    // 0x51fbac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51fbacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51fbb0:
    // 0x51fbb0: 0x3e00008  jr          $ra
label_51fbb4:
    if (ctx->pc == 0x51FBB4u) {
        ctx->pc = 0x51FBB4u;
            // 0x51fbb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x51FBB8u;
        goto label_51fbb8;
    }
    ctx->pc = 0x51FBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51FBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51FBB0u;
            // 0x51fbb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51FBB8u;
label_51fbb8:
    // 0x51fbb8: 0x0  nop
    ctx->pc = 0x51fbb8u;
    // NOP
label_51fbbc:
    // 0x51fbbc: 0x0  nop
    ctx->pc = 0x51fbbcu;
    // NOP
label_51fbc0:
    // 0x51fbc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x51fbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_51fbc4:
    // 0x51fbc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_51fbc8:
    // 0x51fbc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x51fbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_51fbcc:
    // 0x51fbcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51fbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_51fbd0:
    // 0x51fbd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51fbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51fbd4:
    // 0x51fbd4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x51fbd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_51fbd8:
    // 0x51fbd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51fbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51fbdc:
    // 0x51fbdc: 0xac8600a4  sw          $a2, 0xA4($a0)
    ctx->pc = 0x51fbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 6));
label_51fbe0:
    // 0x51fbe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51fbe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51fbe4:
    // 0x51fbe4: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x51fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_51fbe8:
    // 0x51fbe8: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x51fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_51fbec:
    // 0x51fbec: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_51fbf0:
    if (ctx->pc == 0x51FBF0u) {
        ctx->pc = 0x51FBF0u;
            // 0x51fbf0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FBF4u;
        goto label_51fbf4;
    }
    ctx->pc = 0x51FBECu;
    {
        const bool branch_taken_0x51fbec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x51FBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51FBECu;
            // 0x51fbf0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51fbec) {
            ctx->pc = 0x51FC20u;
            goto label_51fc20;
        }
    }
    ctx->pc = 0x51FBF4u;
label_51fbf4:
    // 0x51fbf4: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x51fbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_51fbf8:
    // 0x51fbf8: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
label_51fbfc:
    if (ctx->pc == 0x51FBFCu) {
        ctx->pc = 0x51FBFCu;
            // 0x51fbfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FC00u;
        goto label_51fc00;
    }
    ctx->pc = 0x51FBF8u;
    {
        const bool branch_taken_0x51fbf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x51fbf8) {
            ctx->pc = 0x51FBFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51FBF8u;
            // 0x51fbfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51FC10u;
            goto label_51fc10;
        }
    }
    ctx->pc = 0x51FC00u;
label_51fc00:
    // 0x51fc00: 0xc13b750  jal         func_4EDD40
label_51fc04:
    if (ctx->pc == 0x51FC04u) {
        ctx->pc = 0x51FC04u;
            // 0x51fc04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FC08u;
        goto label_51fc08;
    }
    ctx->pc = 0x51FC00u;
    SET_GPR_U32(ctx, 31, 0x51FC08u);
    ctx->pc = 0x51FC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FC00u;
            // 0x51fc04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EDD40u;
    if (runtime->hasFunction(0x4EDD40u)) {
        auto targetFn = runtime->lookupFunction(0x4EDD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FC08u; }
        if (ctx->pc != 0x51FC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EDD40_0x4edd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FC08u; }
        if (ctx->pc != 0x51FC08u) { return; }
    }
    ctx->pc = 0x51FC08u;
label_51fc08:
    // 0x51fc08: 0x10000008  b           . + 4 + (0x8 << 2)
label_51fc0c:
    if (ctx->pc == 0x51FC0Cu) {
        ctx->pc = 0x51FC0Cu;
            // 0x51fc0c: 0x8e060050  lw          $a2, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x51FC10u;
        goto label_51fc10;
    }
    ctx->pc = 0x51FC08u;
    {
        const bool branch_taken_0x51fc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51FC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51FC08u;
            // 0x51fc0c: 0x8e060050  lw          $a2, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51fc08) {
            ctx->pc = 0x51FC2Cu;
            goto label_51fc2c;
        }
    }
    ctx->pc = 0x51FC10u;
label_51fc10:
    // 0x51fc10: 0xc13b800  jal         func_4EE000
label_51fc14:
    if (ctx->pc == 0x51FC14u) {
        ctx->pc = 0x51FC18u;
        goto label_51fc18;
    }
    ctx->pc = 0x51FC10u;
    SET_GPR_U32(ctx, 31, 0x51FC18u);
    ctx->pc = 0x4EE000u;
    if (runtime->hasFunction(0x4EE000u)) {
        auto targetFn = runtime->lookupFunction(0x4EE000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FC18u; }
        if (ctx->pc != 0x51FC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EE000_0x4ee000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FC18u; }
        if (ctx->pc != 0x51FC18u) { return; }
    }
    ctx->pc = 0x51FC18u;
label_51fc18:
    // 0x51fc18: 0x10000003  b           . + 4 + (0x3 << 2)
label_51fc1c:
    if (ctx->pc == 0x51FC1Cu) {
        ctx->pc = 0x51FC20u;
        goto label_51fc20;
    }
    ctx->pc = 0x51FC18u;
    {
        const bool branch_taken_0x51fc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51fc18) {
            ctx->pc = 0x51FC28u;
            goto label_51fc28;
        }
    }
    ctx->pc = 0x51FC20u;
label_51fc20:
    // 0x51fc20: 0xc13b800  jal         func_4EE000
label_51fc24:
    if (ctx->pc == 0x51FC24u) {
        ctx->pc = 0x51FC24u;
            // 0x51fc24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FC28u;
        goto label_51fc28;
    }
    ctx->pc = 0x51FC20u;
    SET_GPR_U32(ctx, 31, 0x51FC28u);
    ctx->pc = 0x51FC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FC20u;
            // 0x51fc24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EE000u;
    if (runtime->hasFunction(0x4EE000u)) {
        auto targetFn = runtime->lookupFunction(0x4EE000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FC28u; }
        if (ctx->pc != 0x51FC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EE000_0x4ee000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FC28u; }
        if (ctx->pc != 0x51FC28u) { return; }
    }
    ctx->pc = 0x51FC28u;
label_51fc28:
    // 0x51fc28: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x51fc28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_51fc2c:
    // 0x51fc2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x51fc2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51fc30:
    // 0x51fc30: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x51fc30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51fc34:
    // 0x51fc34: 0xc0e2b50  jal         func_38AD40
label_51fc38:
    if (ctx->pc == 0x51FC38u) {
        ctx->pc = 0x51FC38u;
            // 0x51fc38: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->pc = 0x51FC3Cu;
        goto label_51fc3c;
    }
    ctx->pc = 0x51FC34u;
    SET_GPR_U32(ctx, 31, 0x51FC3Cu);
    ctx->pc = 0x51FC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FC34u;
            // 0x51fc38: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38AD40u;
    if (runtime->hasFunction(0x38AD40u)) {
        auto targetFn = runtime->lookupFunction(0x38AD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FC3Cu; }
        if (ctx->pc != 0x51FC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038AD40_0x38ad40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FC3Cu; }
        if (ctx->pc != 0x51FC3Cu) { return; }
    }
    ctx->pc = 0x51FC3Cu;
label_51fc3c:
    // 0x51fc3c: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x51fc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_51fc40:
    // 0x51fc40: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x51fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_51fc44:
    // 0x51fc44: 0x344301a0  ori         $v1, $v0, 0x1A0
    ctx->pc = 0x51fc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)416);
label_51fc48:
    // 0x51fc48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x51fc48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51fc4c:
    // 0x51fc4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51fc50:
    // 0x51fc50: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x51fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_51fc54:
    // 0x51fc54: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x51fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_51fc58:
    // 0x51fc58: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x51fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_51fc5c:
    // 0x51fc5c: 0xc08bff0  jal         func_22FFC0
label_51fc60:
    if (ctx->pc == 0x51FC60u) {
        ctx->pc = 0x51FC60u;
            // 0x51fc60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FC64u;
        goto label_51fc64;
    }
    ctx->pc = 0x51FC5Cu;
    SET_GPR_U32(ctx, 31, 0x51FC64u);
    ctx->pc = 0x51FC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FC5Cu;
            // 0x51fc60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FC64u; }
        if (ctx->pc != 0x51FC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FC64u; }
        if (ctx->pc != 0x51FC64u) { return; }
    }
    ctx->pc = 0x51FC64u;
label_51fc64:
    // 0x51fc64: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x51fc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_51fc68:
    // 0x51fc68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x51fc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51fc6c:
    // 0x51fc6c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x51fc6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_51fc70:
    // 0x51fc70: 0xc08914c  jal         func_224530
label_51fc74:
    if (ctx->pc == 0x51FC74u) {
        ctx->pc = 0x51FC74u;
            // 0x51fc74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FC78u;
        goto label_51fc78;
    }
    ctx->pc = 0x51FC70u;
    SET_GPR_U32(ctx, 31, 0x51FC78u);
    ctx->pc = 0x51FC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FC70u;
            // 0x51fc74: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FC78u; }
        if (ctx->pc != 0x51FC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FC78u; }
        if (ctx->pc != 0x51FC78u) { return; }
    }
    ctx->pc = 0x51FC78u;
label_51fc78:
    // 0x51fc78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x51fc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_51fc7c:
    // 0x51fc7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51fc7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51fc80:
    // 0x51fc80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51fc80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51fc84:
    // 0x51fc84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51fc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51fc88:
    // 0x51fc88: 0x3e00008  jr          $ra
label_51fc8c:
    if (ctx->pc == 0x51FC8Cu) {
        ctx->pc = 0x51FC8Cu;
            // 0x51fc8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x51FC90u;
        goto label_51fc90;
    }
    ctx->pc = 0x51FC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51FC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51FC88u;
            // 0x51fc8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51FC90u;
label_51fc90:
    // 0x51fc90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51fc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_51fc94:
    // 0x51fc94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51fc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_51fc98:
    // 0x51fc98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51fc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51fc9c:
    // 0x51fc9c: 0xc0e393c  jal         func_38E4F0
label_51fca0:
    if (ctx->pc == 0x51FCA0u) {
        ctx->pc = 0x51FCA0u;
            // 0x51fca0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FCA4u;
        goto label_51fca4;
    }
    ctx->pc = 0x51FC9Cu;
    SET_GPR_U32(ctx, 31, 0x51FCA4u);
    ctx->pc = 0x51FCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FC9Cu;
            // 0x51fca0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FCA4u; }
        if (ctx->pc != 0x51FCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FCA4u; }
        if (ctx->pc != 0x51FCA4u) { return; }
    }
    ctx->pc = 0x51FCA4u;
label_51fca4:
    // 0x51fca4: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x51fca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_51fca8:
    // 0x51fca8: 0x3c02ff1e  lui         $v0, 0xFF1E
    ctx->pc = 0x51fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65310 << 16));
label_51fcac:
    // 0x51fcac: 0x3444fe5f  ori         $a0, $v0, 0xFE5F
    ctx->pc = 0x51fcacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65119);
label_51fcb0:
    // 0x51fcb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x51fcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51fcb4:
    // 0x51fcb4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x51fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_51fcb8:
    // 0x51fcb8: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x51fcb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_51fcbc:
    // 0x51fcbc: 0x344301a0  ori         $v1, $v0, 0x1A0
    ctx->pc = 0x51fcbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)416);
label_51fcc0:
    // 0x51fcc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51fcc4:
    // 0x51fcc4: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x51fcc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_51fcc8:
    // 0x51fcc8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x51fcc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_51fccc:
    // 0x51fccc: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x51fcccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_51fcd0:
    // 0x51fcd0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x51fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_51fcd4:
    // 0x51fcd4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x51fcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_51fcd8:
    // 0x51fcd8: 0xc08bff0  jal         func_22FFC0
label_51fcdc:
    if (ctx->pc == 0x51FCDCu) {
        ctx->pc = 0x51FCDCu;
            // 0x51fcdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FCE0u;
        goto label_51fce0;
    }
    ctx->pc = 0x51FCD8u;
    SET_GPR_U32(ctx, 31, 0x51FCE0u);
    ctx->pc = 0x51FCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FCD8u;
            // 0x51fcdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FCE0u; }
        if (ctx->pc != 0x51FCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FCE0u; }
        if (ctx->pc != 0x51FCE0u) { return; }
    }
    ctx->pc = 0x51FCE0u;
label_51fce0:
    // 0x51fce0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x51fce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_51fce4:
    // 0x51fce4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x51fce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_51fce8:
    // 0x51fce8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x51fce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51fcec:
    // 0x51fcec: 0xc08914c  jal         func_224530
label_51fcf0:
    if (ctx->pc == 0x51FCF0u) {
        ctx->pc = 0x51FCF0u;
            // 0x51fcf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FCF4u;
        goto label_51fcf4;
    }
    ctx->pc = 0x51FCECu;
    SET_GPR_U32(ctx, 31, 0x51FCF4u);
    ctx->pc = 0x51FCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FCECu;
            // 0x51fcf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FCF4u; }
        if (ctx->pc != 0x51FCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FCF4u; }
        if (ctx->pc != 0x51FCF4u) { return; }
    }
    ctx->pc = 0x51FCF4u;
label_51fcf4:
    // 0x51fcf4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x51fcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_51fcf8:
    // 0x51fcf8: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x51fcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_51fcfc:
    // 0x51fcfc: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x51fcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_51fd00:
    // 0x51fd00: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x51fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
label_51fd04:
    // 0x51fd04: 0x3c034516  lui         $v1, 0x4516
    ctx->pc = 0x51fd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17686 << 16));
label_51fd08:
    // 0x51fd08: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x51fd08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_51fd0c:
    // 0x51fd0c: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x51fd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_51fd10:
    // 0x51fd10: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x51fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_51fd14:
    // 0x51fd14: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_51fd18:
    if (ctx->pc == 0x51FD18u) {
        ctx->pc = 0x51FD18u;
            // 0x51fd18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x51FD1Cu;
        goto label_51fd1c;
    }
    ctx->pc = 0x51FD14u;
    {
        const bool branch_taken_0x51fd14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51fd14) {
            ctx->pc = 0x51FD18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51FD14u;
            // 0x51fd18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51FD34u;
            goto label_51fd34;
        }
    }
    ctx->pc = 0x51FD1Cu;
label_51fd1c:
    // 0x51fd1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51fd1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51fd20:
    // 0x51fd20: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x51fd20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_51fd24:
    // 0x51fd24: 0x320f809  jalr        $t9
label_51fd28:
    if (ctx->pc == 0x51FD28u) {
        ctx->pc = 0x51FD28u;
            // 0x51fd28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51FD2Cu;
        goto label_51fd2c;
    }
    ctx->pc = 0x51FD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51FD2Cu);
        ctx->pc = 0x51FD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51FD24u;
            // 0x51fd28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51FD2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51FD2Cu; }
            if (ctx->pc != 0x51FD2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x51FD2Cu;
label_51fd2c:
    // 0x51fd2c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x51fd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_51fd30:
    // 0x51fd30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51fd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_51fd34:
    // 0x51fd34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51fd34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51fd38:
    // 0x51fd38: 0x3e00008  jr          $ra
label_51fd3c:
    if (ctx->pc == 0x51FD3Cu) {
        ctx->pc = 0x51FD3Cu;
            // 0x51fd3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x51FD40u;
        goto label_51fd40;
    }
    ctx->pc = 0x51FD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51FD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51FD38u;
            // 0x51fd3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51FD40u;
label_51fd40:
    // 0x51fd40: 0x3e00008  jr          $ra
label_51fd44:
    if (ctx->pc == 0x51FD44u) {
        ctx->pc = 0x51FD48u;
        goto label_51fd48;
    }
    ctx->pc = 0x51FD40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51FD48u;
label_51fd48:
    // 0x51fd48: 0x0  nop
    ctx->pc = 0x51fd48u;
    // NOP
label_51fd4c:
    // 0x51fd4c: 0x0  nop
    ctx->pc = 0x51fd4cu;
    // NOP
label_51fd50:
    // 0x51fd50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x51fd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_51fd54:
    // 0x51fd54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x51fd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_51fd58:
    // 0x51fd58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51fd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51fd5c:
    // 0x51fd5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51fd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51fd60:
    // 0x51fd60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51fd60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51fd64:
    // 0x51fd64: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_51fd68:
    if (ctx->pc == 0x51FD68u) {
        ctx->pc = 0x51FD68u;
            // 0x51fd68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FD6Cu;
        goto label_51fd6c;
    }
    ctx->pc = 0x51FD64u;
    {
        const bool branch_taken_0x51fd64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x51FD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51FD64u;
            // 0x51fd68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51fd64) {
            ctx->pc = 0x51FDC0u;
            goto label_51fdc0;
        }
    }
    ctx->pc = 0x51FD6Cu;
label_51fd6c:
    // 0x51fd6c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51fd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_51fd70:
    // 0x51fd70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_51fd74:
    // 0x51fd74: 0x24635b60  addiu       $v1, $v1, 0x5B60
    ctx->pc = 0x51fd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23392));
label_51fd78:
    // 0x51fd78: 0x24425b98  addiu       $v0, $v0, 0x5B98
    ctx->pc = 0x51fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23448));
label_51fd7c:
    // 0x51fd7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x51fd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_51fd80:
    // 0x51fd80: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_51fd84:
    if (ctx->pc == 0x51FD84u) {
        ctx->pc = 0x51FD84u;
            // 0x51fd84: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x51FD88u;
        goto label_51fd88;
    }
    ctx->pc = 0x51FD80u;
    {
        const bool branch_taken_0x51fd80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x51FD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51FD80u;
            // 0x51fd84: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51fd80) {
            ctx->pc = 0x51FDA8u;
            goto label_51fda8;
        }
    }
    ctx->pc = 0x51FD88u;
label_51fd88:
    // 0x51fd88: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51fd88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_51fd8c:
    // 0x51fd8c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_51fd90:
    // 0x51fd90: 0x24635cc0  addiu       $v1, $v1, 0x5CC0
    ctx->pc = 0x51fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23744));
label_51fd94:
    // 0x51fd94: 0x24425cf8  addiu       $v0, $v0, 0x5CF8
    ctx->pc = 0x51fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23800));
label_51fd98:
    // 0x51fd98: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x51fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_51fd9c:
    // 0x51fd9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51fd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51fda0:
    // 0x51fda0: 0xc147f78  jal         func_51FDE0
label_51fda4:
    if (ctx->pc == 0x51FDA4u) {
        ctx->pc = 0x51FDA4u;
            // 0x51fda4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x51FDA8u;
        goto label_51fda8;
    }
    ctx->pc = 0x51FDA0u;
    SET_GPR_U32(ctx, 31, 0x51FDA8u);
    ctx->pc = 0x51FDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FDA0u;
            // 0x51fda4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51FDE0u;
    if (runtime->hasFunction(0x51FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x51FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FDA8u; }
        if (ctx->pc != 0x51FDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051FDE0_0x51fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FDA8u; }
        if (ctx->pc != 0x51FDA8u) { return; }
    }
    ctx->pc = 0x51FDA8u;
label_51fda8:
    // 0x51fda8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x51fda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_51fdac:
    // 0x51fdac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51fdacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_51fdb0:
    // 0x51fdb0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_51fdb4:
    if (ctx->pc == 0x51FDB4u) {
        ctx->pc = 0x51FDB4u;
            // 0x51fdb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FDB8u;
        goto label_51fdb8;
    }
    ctx->pc = 0x51FDB0u;
    {
        const bool branch_taken_0x51fdb0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x51fdb0) {
            ctx->pc = 0x51FDB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51FDB0u;
            // 0x51fdb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51FDC4u;
            goto label_51fdc4;
        }
    }
    ctx->pc = 0x51FDB8u;
label_51fdb8:
    // 0x51fdb8: 0xc0400a8  jal         func_1002A0
label_51fdbc:
    if (ctx->pc == 0x51FDBCu) {
        ctx->pc = 0x51FDBCu;
            // 0x51fdbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51FDC0u;
        goto label_51fdc0;
    }
    ctx->pc = 0x51FDB8u;
    SET_GPR_U32(ctx, 31, 0x51FDC0u);
    ctx->pc = 0x51FDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51FDB8u;
            // 0x51fdbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FDC0u; }
        if (ctx->pc != 0x51FDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51FDC0u; }
        if (ctx->pc != 0x51FDC0u) { return; }
    }
    ctx->pc = 0x51FDC0u;
label_51fdc0:
    // 0x51fdc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51fdc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51fdc4:
    // 0x51fdc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x51fdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_51fdc8:
    // 0x51fdc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51fdc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51fdcc:
    // 0x51fdcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51fdccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51fdd0:
    // 0x51fdd0: 0x3e00008  jr          $ra
label_51fdd4:
    if (ctx->pc == 0x51FDD4u) {
        ctx->pc = 0x51FDD4u;
            // 0x51fdd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x51FDD8u;
        goto label_51fdd8;
    }
    ctx->pc = 0x51FDD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51FDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51FDD0u;
            // 0x51fdd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51FDD8u;
label_51fdd8:
    // 0x51fdd8: 0x0  nop
    ctx->pc = 0x51fdd8u;
    // NOP
label_51fddc:
    // 0x51fddc: 0x0  nop
    ctx->pc = 0x51fddcu;
    // NOP
}
