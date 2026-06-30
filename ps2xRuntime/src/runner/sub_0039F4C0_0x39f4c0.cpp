#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039F4C0
// Address: 0x39f4c0 - 0x39fc70
void sub_0039F4C0_0x39f4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F4C0_0x39f4c0");
#endif

    switch (ctx->pc) {
        case 0x39f4c0u: goto label_39f4c0;
        case 0x39f4c4u: goto label_39f4c4;
        case 0x39f4c8u: goto label_39f4c8;
        case 0x39f4ccu: goto label_39f4cc;
        case 0x39f4d0u: goto label_39f4d0;
        case 0x39f4d4u: goto label_39f4d4;
        case 0x39f4d8u: goto label_39f4d8;
        case 0x39f4dcu: goto label_39f4dc;
        case 0x39f4e0u: goto label_39f4e0;
        case 0x39f4e4u: goto label_39f4e4;
        case 0x39f4e8u: goto label_39f4e8;
        case 0x39f4ecu: goto label_39f4ec;
        case 0x39f4f0u: goto label_39f4f0;
        case 0x39f4f4u: goto label_39f4f4;
        case 0x39f4f8u: goto label_39f4f8;
        case 0x39f4fcu: goto label_39f4fc;
        case 0x39f500u: goto label_39f500;
        case 0x39f504u: goto label_39f504;
        case 0x39f508u: goto label_39f508;
        case 0x39f50cu: goto label_39f50c;
        case 0x39f510u: goto label_39f510;
        case 0x39f514u: goto label_39f514;
        case 0x39f518u: goto label_39f518;
        case 0x39f51cu: goto label_39f51c;
        case 0x39f520u: goto label_39f520;
        case 0x39f524u: goto label_39f524;
        case 0x39f528u: goto label_39f528;
        case 0x39f52cu: goto label_39f52c;
        case 0x39f530u: goto label_39f530;
        case 0x39f534u: goto label_39f534;
        case 0x39f538u: goto label_39f538;
        case 0x39f53cu: goto label_39f53c;
        case 0x39f540u: goto label_39f540;
        case 0x39f544u: goto label_39f544;
        case 0x39f548u: goto label_39f548;
        case 0x39f54cu: goto label_39f54c;
        case 0x39f550u: goto label_39f550;
        case 0x39f554u: goto label_39f554;
        case 0x39f558u: goto label_39f558;
        case 0x39f55cu: goto label_39f55c;
        case 0x39f560u: goto label_39f560;
        case 0x39f564u: goto label_39f564;
        case 0x39f568u: goto label_39f568;
        case 0x39f56cu: goto label_39f56c;
        case 0x39f570u: goto label_39f570;
        case 0x39f574u: goto label_39f574;
        case 0x39f578u: goto label_39f578;
        case 0x39f57cu: goto label_39f57c;
        case 0x39f580u: goto label_39f580;
        case 0x39f584u: goto label_39f584;
        case 0x39f588u: goto label_39f588;
        case 0x39f58cu: goto label_39f58c;
        case 0x39f590u: goto label_39f590;
        case 0x39f594u: goto label_39f594;
        case 0x39f598u: goto label_39f598;
        case 0x39f59cu: goto label_39f59c;
        case 0x39f5a0u: goto label_39f5a0;
        case 0x39f5a4u: goto label_39f5a4;
        case 0x39f5a8u: goto label_39f5a8;
        case 0x39f5acu: goto label_39f5ac;
        case 0x39f5b0u: goto label_39f5b0;
        case 0x39f5b4u: goto label_39f5b4;
        case 0x39f5b8u: goto label_39f5b8;
        case 0x39f5bcu: goto label_39f5bc;
        case 0x39f5c0u: goto label_39f5c0;
        case 0x39f5c4u: goto label_39f5c4;
        case 0x39f5c8u: goto label_39f5c8;
        case 0x39f5ccu: goto label_39f5cc;
        case 0x39f5d0u: goto label_39f5d0;
        case 0x39f5d4u: goto label_39f5d4;
        case 0x39f5d8u: goto label_39f5d8;
        case 0x39f5dcu: goto label_39f5dc;
        case 0x39f5e0u: goto label_39f5e0;
        case 0x39f5e4u: goto label_39f5e4;
        case 0x39f5e8u: goto label_39f5e8;
        case 0x39f5ecu: goto label_39f5ec;
        case 0x39f5f0u: goto label_39f5f0;
        case 0x39f5f4u: goto label_39f5f4;
        case 0x39f5f8u: goto label_39f5f8;
        case 0x39f5fcu: goto label_39f5fc;
        case 0x39f600u: goto label_39f600;
        case 0x39f604u: goto label_39f604;
        case 0x39f608u: goto label_39f608;
        case 0x39f60cu: goto label_39f60c;
        case 0x39f610u: goto label_39f610;
        case 0x39f614u: goto label_39f614;
        case 0x39f618u: goto label_39f618;
        case 0x39f61cu: goto label_39f61c;
        case 0x39f620u: goto label_39f620;
        case 0x39f624u: goto label_39f624;
        case 0x39f628u: goto label_39f628;
        case 0x39f62cu: goto label_39f62c;
        case 0x39f630u: goto label_39f630;
        case 0x39f634u: goto label_39f634;
        case 0x39f638u: goto label_39f638;
        case 0x39f63cu: goto label_39f63c;
        case 0x39f640u: goto label_39f640;
        case 0x39f644u: goto label_39f644;
        case 0x39f648u: goto label_39f648;
        case 0x39f64cu: goto label_39f64c;
        case 0x39f650u: goto label_39f650;
        case 0x39f654u: goto label_39f654;
        case 0x39f658u: goto label_39f658;
        case 0x39f65cu: goto label_39f65c;
        case 0x39f660u: goto label_39f660;
        case 0x39f664u: goto label_39f664;
        case 0x39f668u: goto label_39f668;
        case 0x39f66cu: goto label_39f66c;
        case 0x39f670u: goto label_39f670;
        case 0x39f674u: goto label_39f674;
        case 0x39f678u: goto label_39f678;
        case 0x39f67cu: goto label_39f67c;
        case 0x39f680u: goto label_39f680;
        case 0x39f684u: goto label_39f684;
        case 0x39f688u: goto label_39f688;
        case 0x39f68cu: goto label_39f68c;
        case 0x39f690u: goto label_39f690;
        case 0x39f694u: goto label_39f694;
        case 0x39f698u: goto label_39f698;
        case 0x39f69cu: goto label_39f69c;
        case 0x39f6a0u: goto label_39f6a0;
        case 0x39f6a4u: goto label_39f6a4;
        case 0x39f6a8u: goto label_39f6a8;
        case 0x39f6acu: goto label_39f6ac;
        case 0x39f6b0u: goto label_39f6b0;
        case 0x39f6b4u: goto label_39f6b4;
        case 0x39f6b8u: goto label_39f6b8;
        case 0x39f6bcu: goto label_39f6bc;
        case 0x39f6c0u: goto label_39f6c0;
        case 0x39f6c4u: goto label_39f6c4;
        case 0x39f6c8u: goto label_39f6c8;
        case 0x39f6ccu: goto label_39f6cc;
        case 0x39f6d0u: goto label_39f6d0;
        case 0x39f6d4u: goto label_39f6d4;
        case 0x39f6d8u: goto label_39f6d8;
        case 0x39f6dcu: goto label_39f6dc;
        case 0x39f6e0u: goto label_39f6e0;
        case 0x39f6e4u: goto label_39f6e4;
        case 0x39f6e8u: goto label_39f6e8;
        case 0x39f6ecu: goto label_39f6ec;
        case 0x39f6f0u: goto label_39f6f0;
        case 0x39f6f4u: goto label_39f6f4;
        case 0x39f6f8u: goto label_39f6f8;
        case 0x39f6fcu: goto label_39f6fc;
        case 0x39f700u: goto label_39f700;
        case 0x39f704u: goto label_39f704;
        case 0x39f708u: goto label_39f708;
        case 0x39f70cu: goto label_39f70c;
        case 0x39f710u: goto label_39f710;
        case 0x39f714u: goto label_39f714;
        case 0x39f718u: goto label_39f718;
        case 0x39f71cu: goto label_39f71c;
        case 0x39f720u: goto label_39f720;
        case 0x39f724u: goto label_39f724;
        case 0x39f728u: goto label_39f728;
        case 0x39f72cu: goto label_39f72c;
        case 0x39f730u: goto label_39f730;
        case 0x39f734u: goto label_39f734;
        case 0x39f738u: goto label_39f738;
        case 0x39f73cu: goto label_39f73c;
        case 0x39f740u: goto label_39f740;
        case 0x39f744u: goto label_39f744;
        case 0x39f748u: goto label_39f748;
        case 0x39f74cu: goto label_39f74c;
        case 0x39f750u: goto label_39f750;
        case 0x39f754u: goto label_39f754;
        case 0x39f758u: goto label_39f758;
        case 0x39f75cu: goto label_39f75c;
        case 0x39f760u: goto label_39f760;
        case 0x39f764u: goto label_39f764;
        case 0x39f768u: goto label_39f768;
        case 0x39f76cu: goto label_39f76c;
        case 0x39f770u: goto label_39f770;
        case 0x39f774u: goto label_39f774;
        case 0x39f778u: goto label_39f778;
        case 0x39f77cu: goto label_39f77c;
        case 0x39f780u: goto label_39f780;
        case 0x39f784u: goto label_39f784;
        case 0x39f788u: goto label_39f788;
        case 0x39f78cu: goto label_39f78c;
        case 0x39f790u: goto label_39f790;
        case 0x39f794u: goto label_39f794;
        case 0x39f798u: goto label_39f798;
        case 0x39f79cu: goto label_39f79c;
        case 0x39f7a0u: goto label_39f7a0;
        case 0x39f7a4u: goto label_39f7a4;
        case 0x39f7a8u: goto label_39f7a8;
        case 0x39f7acu: goto label_39f7ac;
        case 0x39f7b0u: goto label_39f7b0;
        case 0x39f7b4u: goto label_39f7b4;
        case 0x39f7b8u: goto label_39f7b8;
        case 0x39f7bcu: goto label_39f7bc;
        case 0x39f7c0u: goto label_39f7c0;
        case 0x39f7c4u: goto label_39f7c4;
        case 0x39f7c8u: goto label_39f7c8;
        case 0x39f7ccu: goto label_39f7cc;
        case 0x39f7d0u: goto label_39f7d0;
        case 0x39f7d4u: goto label_39f7d4;
        case 0x39f7d8u: goto label_39f7d8;
        case 0x39f7dcu: goto label_39f7dc;
        case 0x39f7e0u: goto label_39f7e0;
        case 0x39f7e4u: goto label_39f7e4;
        case 0x39f7e8u: goto label_39f7e8;
        case 0x39f7ecu: goto label_39f7ec;
        case 0x39f7f0u: goto label_39f7f0;
        case 0x39f7f4u: goto label_39f7f4;
        case 0x39f7f8u: goto label_39f7f8;
        case 0x39f7fcu: goto label_39f7fc;
        case 0x39f800u: goto label_39f800;
        case 0x39f804u: goto label_39f804;
        case 0x39f808u: goto label_39f808;
        case 0x39f80cu: goto label_39f80c;
        case 0x39f810u: goto label_39f810;
        case 0x39f814u: goto label_39f814;
        case 0x39f818u: goto label_39f818;
        case 0x39f81cu: goto label_39f81c;
        case 0x39f820u: goto label_39f820;
        case 0x39f824u: goto label_39f824;
        case 0x39f828u: goto label_39f828;
        case 0x39f82cu: goto label_39f82c;
        case 0x39f830u: goto label_39f830;
        case 0x39f834u: goto label_39f834;
        case 0x39f838u: goto label_39f838;
        case 0x39f83cu: goto label_39f83c;
        case 0x39f840u: goto label_39f840;
        case 0x39f844u: goto label_39f844;
        case 0x39f848u: goto label_39f848;
        case 0x39f84cu: goto label_39f84c;
        case 0x39f850u: goto label_39f850;
        case 0x39f854u: goto label_39f854;
        case 0x39f858u: goto label_39f858;
        case 0x39f85cu: goto label_39f85c;
        case 0x39f860u: goto label_39f860;
        case 0x39f864u: goto label_39f864;
        case 0x39f868u: goto label_39f868;
        case 0x39f86cu: goto label_39f86c;
        case 0x39f870u: goto label_39f870;
        case 0x39f874u: goto label_39f874;
        case 0x39f878u: goto label_39f878;
        case 0x39f87cu: goto label_39f87c;
        case 0x39f880u: goto label_39f880;
        case 0x39f884u: goto label_39f884;
        case 0x39f888u: goto label_39f888;
        case 0x39f88cu: goto label_39f88c;
        case 0x39f890u: goto label_39f890;
        case 0x39f894u: goto label_39f894;
        case 0x39f898u: goto label_39f898;
        case 0x39f89cu: goto label_39f89c;
        case 0x39f8a0u: goto label_39f8a0;
        case 0x39f8a4u: goto label_39f8a4;
        case 0x39f8a8u: goto label_39f8a8;
        case 0x39f8acu: goto label_39f8ac;
        case 0x39f8b0u: goto label_39f8b0;
        case 0x39f8b4u: goto label_39f8b4;
        case 0x39f8b8u: goto label_39f8b8;
        case 0x39f8bcu: goto label_39f8bc;
        case 0x39f8c0u: goto label_39f8c0;
        case 0x39f8c4u: goto label_39f8c4;
        case 0x39f8c8u: goto label_39f8c8;
        case 0x39f8ccu: goto label_39f8cc;
        case 0x39f8d0u: goto label_39f8d0;
        case 0x39f8d4u: goto label_39f8d4;
        case 0x39f8d8u: goto label_39f8d8;
        case 0x39f8dcu: goto label_39f8dc;
        case 0x39f8e0u: goto label_39f8e0;
        case 0x39f8e4u: goto label_39f8e4;
        case 0x39f8e8u: goto label_39f8e8;
        case 0x39f8ecu: goto label_39f8ec;
        case 0x39f8f0u: goto label_39f8f0;
        case 0x39f8f4u: goto label_39f8f4;
        case 0x39f8f8u: goto label_39f8f8;
        case 0x39f8fcu: goto label_39f8fc;
        case 0x39f900u: goto label_39f900;
        case 0x39f904u: goto label_39f904;
        case 0x39f908u: goto label_39f908;
        case 0x39f90cu: goto label_39f90c;
        case 0x39f910u: goto label_39f910;
        case 0x39f914u: goto label_39f914;
        case 0x39f918u: goto label_39f918;
        case 0x39f91cu: goto label_39f91c;
        case 0x39f920u: goto label_39f920;
        case 0x39f924u: goto label_39f924;
        case 0x39f928u: goto label_39f928;
        case 0x39f92cu: goto label_39f92c;
        case 0x39f930u: goto label_39f930;
        case 0x39f934u: goto label_39f934;
        case 0x39f938u: goto label_39f938;
        case 0x39f93cu: goto label_39f93c;
        case 0x39f940u: goto label_39f940;
        case 0x39f944u: goto label_39f944;
        case 0x39f948u: goto label_39f948;
        case 0x39f94cu: goto label_39f94c;
        case 0x39f950u: goto label_39f950;
        case 0x39f954u: goto label_39f954;
        case 0x39f958u: goto label_39f958;
        case 0x39f95cu: goto label_39f95c;
        case 0x39f960u: goto label_39f960;
        case 0x39f964u: goto label_39f964;
        case 0x39f968u: goto label_39f968;
        case 0x39f96cu: goto label_39f96c;
        case 0x39f970u: goto label_39f970;
        case 0x39f974u: goto label_39f974;
        case 0x39f978u: goto label_39f978;
        case 0x39f97cu: goto label_39f97c;
        case 0x39f980u: goto label_39f980;
        case 0x39f984u: goto label_39f984;
        case 0x39f988u: goto label_39f988;
        case 0x39f98cu: goto label_39f98c;
        case 0x39f990u: goto label_39f990;
        case 0x39f994u: goto label_39f994;
        case 0x39f998u: goto label_39f998;
        case 0x39f99cu: goto label_39f99c;
        case 0x39f9a0u: goto label_39f9a0;
        case 0x39f9a4u: goto label_39f9a4;
        case 0x39f9a8u: goto label_39f9a8;
        case 0x39f9acu: goto label_39f9ac;
        case 0x39f9b0u: goto label_39f9b0;
        case 0x39f9b4u: goto label_39f9b4;
        case 0x39f9b8u: goto label_39f9b8;
        case 0x39f9bcu: goto label_39f9bc;
        case 0x39f9c0u: goto label_39f9c0;
        case 0x39f9c4u: goto label_39f9c4;
        case 0x39f9c8u: goto label_39f9c8;
        case 0x39f9ccu: goto label_39f9cc;
        case 0x39f9d0u: goto label_39f9d0;
        case 0x39f9d4u: goto label_39f9d4;
        case 0x39f9d8u: goto label_39f9d8;
        case 0x39f9dcu: goto label_39f9dc;
        case 0x39f9e0u: goto label_39f9e0;
        case 0x39f9e4u: goto label_39f9e4;
        case 0x39f9e8u: goto label_39f9e8;
        case 0x39f9ecu: goto label_39f9ec;
        case 0x39f9f0u: goto label_39f9f0;
        case 0x39f9f4u: goto label_39f9f4;
        case 0x39f9f8u: goto label_39f9f8;
        case 0x39f9fcu: goto label_39f9fc;
        case 0x39fa00u: goto label_39fa00;
        case 0x39fa04u: goto label_39fa04;
        case 0x39fa08u: goto label_39fa08;
        case 0x39fa0cu: goto label_39fa0c;
        case 0x39fa10u: goto label_39fa10;
        case 0x39fa14u: goto label_39fa14;
        case 0x39fa18u: goto label_39fa18;
        case 0x39fa1cu: goto label_39fa1c;
        case 0x39fa20u: goto label_39fa20;
        case 0x39fa24u: goto label_39fa24;
        case 0x39fa28u: goto label_39fa28;
        case 0x39fa2cu: goto label_39fa2c;
        case 0x39fa30u: goto label_39fa30;
        case 0x39fa34u: goto label_39fa34;
        case 0x39fa38u: goto label_39fa38;
        case 0x39fa3cu: goto label_39fa3c;
        case 0x39fa40u: goto label_39fa40;
        case 0x39fa44u: goto label_39fa44;
        case 0x39fa48u: goto label_39fa48;
        case 0x39fa4cu: goto label_39fa4c;
        case 0x39fa50u: goto label_39fa50;
        case 0x39fa54u: goto label_39fa54;
        case 0x39fa58u: goto label_39fa58;
        case 0x39fa5cu: goto label_39fa5c;
        case 0x39fa60u: goto label_39fa60;
        case 0x39fa64u: goto label_39fa64;
        case 0x39fa68u: goto label_39fa68;
        case 0x39fa6cu: goto label_39fa6c;
        case 0x39fa70u: goto label_39fa70;
        case 0x39fa74u: goto label_39fa74;
        case 0x39fa78u: goto label_39fa78;
        case 0x39fa7cu: goto label_39fa7c;
        case 0x39fa80u: goto label_39fa80;
        case 0x39fa84u: goto label_39fa84;
        case 0x39fa88u: goto label_39fa88;
        case 0x39fa8cu: goto label_39fa8c;
        case 0x39fa90u: goto label_39fa90;
        case 0x39fa94u: goto label_39fa94;
        case 0x39fa98u: goto label_39fa98;
        case 0x39fa9cu: goto label_39fa9c;
        case 0x39faa0u: goto label_39faa0;
        case 0x39faa4u: goto label_39faa4;
        case 0x39faa8u: goto label_39faa8;
        case 0x39faacu: goto label_39faac;
        case 0x39fab0u: goto label_39fab0;
        case 0x39fab4u: goto label_39fab4;
        case 0x39fab8u: goto label_39fab8;
        case 0x39fabcu: goto label_39fabc;
        case 0x39fac0u: goto label_39fac0;
        case 0x39fac4u: goto label_39fac4;
        case 0x39fac8u: goto label_39fac8;
        case 0x39faccu: goto label_39facc;
        case 0x39fad0u: goto label_39fad0;
        case 0x39fad4u: goto label_39fad4;
        case 0x39fad8u: goto label_39fad8;
        case 0x39fadcu: goto label_39fadc;
        case 0x39fae0u: goto label_39fae0;
        case 0x39fae4u: goto label_39fae4;
        case 0x39fae8u: goto label_39fae8;
        case 0x39faecu: goto label_39faec;
        case 0x39faf0u: goto label_39faf0;
        case 0x39faf4u: goto label_39faf4;
        case 0x39faf8u: goto label_39faf8;
        case 0x39fafcu: goto label_39fafc;
        case 0x39fb00u: goto label_39fb00;
        case 0x39fb04u: goto label_39fb04;
        case 0x39fb08u: goto label_39fb08;
        case 0x39fb0cu: goto label_39fb0c;
        case 0x39fb10u: goto label_39fb10;
        case 0x39fb14u: goto label_39fb14;
        case 0x39fb18u: goto label_39fb18;
        case 0x39fb1cu: goto label_39fb1c;
        case 0x39fb20u: goto label_39fb20;
        case 0x39fb24u: goto label_39fb24;
        case 0x39fb28u: goto label_39fb28;
        case 0x39fb2cu: goto label_39fb2c;
        case 0x39fb30u: goto label_39fb30;
        case 0x39fb34u: goto label_39fb34;
        case 0x39fb38u: goto label_39fb38;
        case 0x39fb3cu: goto label_39fb3c;
        case 0x39fb40u: goto label_39fb40;
        case 0x39fb44u: goto label_39fb44;
        case 0x39fb48u: goto label_39fb48;
        case 0x39fb4cu: goto label_39fb4c;
        case 0x39fb50u: goto label_39fb50;
        case 0x39fb54u: goto label_39fb54;
        case 0x39fb58u: goto label_39fb58;
        case 0x39fb5cu: goto label_39fb5c;
        case 0x39fb60u: goto label_39fb60;
        case 0x39fb64u: goto label_39fb64;
        case 0x39fb68u: goto label_39fb68;
        case 0x39fb6cu: goto label_39fb6c;
        case 0x39fb70u: goto label_39fb70;
        case 0x39fb74u: goto label_39fb74;
        case 0x39fb78u: goto label_39fb78;
        case 0x39fb7cu: goto label_39fb7c;
        case 0x39fb80u: goto label_39fb80;
        case 0x39fb84u: goto label_39fb84;
        case 0x39fb88u: goto label_39fb88;
        case 0x39fb8cu: goto label_39fb8c;
        case 0x39fb90u: goto label_39fb90;
        case 0x39fb94u: goto label_39fb94;
        case 0x39fb98u: goto label_39fb98;
        case 0x39fb9cu: goto label_39fb9c;
        case 0x39fba0u: goto label_39fba0;
        case 0x39fba4u: goto label_39fba4;
        case 0x39fba8u: goto label_39fba8;
        case 0x39fbacu: goto label_39fbac;
        case 0x39fbb0u: goto label_39fbb0;
        case 0x39fbb4u: goto label_39fbb4;
        case 0x39fbb8u: goto label_39fbb8;
        case 0x39fbbcu: goto label_39fbbc;
        case 0x39fbc0u: goto label_39fbc0;
        case 0x39fbc4u: goto label_39fbc4;
        case 0x39fbc8u: goto label_39fbc8;
        case 0x39fbccu: goto label_39fbcc;
        case 0x39fbd0u: goto label_39fbd0;
        case 0x39fbd4u: goto label_39fbd4;
        case 0x39fbd8u: goto label_39fbd8;
        case 0x39fbdcu: goto label_39fbdc;
        case 0x39fbe0u: goto label_39fbe0;
        case 0x39fbe4u: goto label_39fbe4;
        case 0x39fbe8u: goto label_39fbe8;
        case 0x39fbecu: goto label_39fbec;
        case 0x39fbf0u: goto label_39fbf0;
        case 0x39fbf4u: goto label_39fbf4;
        case 0x39fbf8u: goto label_39fbf8;
        case 0x39fbfcu: goto label_39fbfc;
        case 0x39fc00u: goto label_39fc00;
        case 0x39fc04u: goto label_39fc04;
        case 0x39fc08u: goto label_39fc08;
        case 0x39fc0cu: goto label_39fc0c;
        case 0x39fc10u: goto label_39fc10;
        case 0x39fc14u: goto label_39fc14;
        case 0x39fc18u: goto label_39fc18;
        case 0x39fc1cu: goto label_39fc1c;
        case 0x39fc20u: goto label_39fc20;
        case 0x39fc24u: goto label_39fc24;
        case 0x39fc28u: goto label_39fc28;
        case 0x39fc2cu: goto label_39fc2c;
        case 0x39fc30u: goto label_39fc30;
        case 0x39fc34u: goto label_39fc34;
        case 0x39fc38u: goto label_39fc38;
        case 0x39fc3cu: goto label_39fc3c;
        case 0x39fc40u: goto label_39fc40;
        case 0x39fc44u: goto label_39fc44;
        case 0x39fc48u: goto label_39fc48;
        case 0x39fc4cu: goto label_39fc4c;
        case 0x39fc50u: goto label_39fc50;
        case 0x39fc54u: goto label_39fc54;
        case 0x39fc58u: goto label_39fc58;
        case 0x39fc5cu: goto label_39fc5c;
        case 0x39fc60u: goto label_39fc60;
        case 0x39fc64u: goto label_39fc64;
        case 0x39fc68u: goto label_39fc68;
        case 0x39fc6cu: goto label_39fc6c;
        default: break;
    }

    ctx->pc = 0x39f4c0u;

label_39f4c0:
    // 0x39f4c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39f4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39f4c4:
    // 0x39f4c4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x39f4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_39f4c8:
    // 0x39f4c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39f4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_39f4cc:
    // 0x39f4cc: 0x24a573c0  addiu       $a1, $a1, 0x73C0
    ctx->pc = 0x39f4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29632));
label_39f4d0:
    // 0x39f4d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39f4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39f4d4:
    // 0x39f4d4: 0xc04cc04  jal         func_133010
label_39f4d8:
    if (ctx->pc == 0x39F4D8u) {
        ctx->pc = 0x39F4D8u;
            // 0x39f4d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39F4DCu;
        goto label_39f4dc;
    }
    ctx->pc = 0x39F4D4u;
    SET_GPR_U32(ctx, 31, 0x39F4DCu);
    ctx->pc = 0x39F4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F4D4u;
            // 0x39f4d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F4DCu; }
        if (ctx->pc != 0x39F4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F4DCu; }
        if (ctx->pc != 0x39F4DCu) { return; }
    }
    ctx->pc = 0x39F4DCu;
label_39f4dc:
    // 0x39f4dc: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x39f4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_39f4e0:
    // 0x39f4e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39f4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39f4e4:
    // 0x39f4e4: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x39f4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_39f4e8:
    // 0x39f4e8: 0xa2030020  sb          $v1, 0x20($s0)
    ctx->pc = 0x39f4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 3));
label_39f4ec:
    // 0x39f4ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39f4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39f4f0:
    // 0x39f4f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39f4f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39f4f4:
    // 0x39f4f4: 0x3e00008  jr          $ra
label_39f4f8:
    if (ctx->pc == 0x39F4F8u) {
        ctx->pc = 0x39F4F8u;
            // 0x39f4f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x39F4FCu;
        goto label_39f4fc;
    }
    ctx->pc = 0x39F4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F4F4u;
            // 0x39f4f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39F4FCu;
label_39f4fc:
    // 0x39f4fc: 0x0  nop
    ctx->pc = 0x39f4fcu;
    // NOP
label_39f500:
    // 0x39f500: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x39f500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_39f504:
    // 0x39f504: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x39f504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_39f508:
    // 0x39f508: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39f508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_39f50c:
    // 0x39f50c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39f50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39f510:
    // 0x39f510: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39f510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39f514:
    // 0x39f514: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x39f514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39f518:
    // 0x39f518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39f518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39f51c:
    // 0x39f51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39f51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39f520:
    // 0x39f520: 0x8c920040  lw          $s2, 0x40($a0)
    ctx->pc = 0x39f520u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_39f524:
    // 0x39f524: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x39f524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39f528:
    // 0x39f528: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x39f528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39f52c:
    // 0x39f52c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39f52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39f530:
    // 0x39f530: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x39f530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39f534:
    // 0x39f534: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x39f534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_39f538:
    // 0x39f538: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x39f538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_39f53c:
    // 0x39f53c: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x39f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_39f540:
    // 0x39f540: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x39f540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_39f544:
    // 0x39f544: 0xc04c968  jal         func_1325A0
label_39f548:
    if (ctx->pc == 0x39F548u) {
        ctx->pc = 0x39F548u;
            // 0x39f548: 0xe7a20098  swc1        $f2, 0x98($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->pc = 0x39F54Cu;
        goto label_39f54c;
    }
    ctx->pc = 0x39F544u;
    SET_GPR_U32(ctx, 31, 0x39F54Cu);
    ctx->pc = 0x39F548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F544u;
            // 0x39f548: 0xe7a20098  swc1        $f2, 0x98($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F54Cu; }
        if (ctx->pc != 0x39F54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F54Cu; }
        if (ctx->pc != 0x39F54Cu) { return; }
    }
    ctx->pc = 0x39F54Cu;
label_39f54c:
    // 0x39f54c: 0xc6060008  lwc1        $f6, 0x8($s0)
    ctx->pc = 0x39f54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_39f550:
    // 0x39f550: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39f550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39f554:
    // 0x39f554: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x39f554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39f558:
    // 0x39f558: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x39f558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_39f55c:
    // 0x39f55c: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x39f55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_39f560:
    // 0x39f560: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x39f560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_39f564:
    // 0x39f564: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x39f564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_39f568:
    // 0x39f568: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x39f568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39f56c:
    // 0x39f56c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x39f56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39f570:
    // 0x39f570: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x39f570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39f574:
    // 0x39f574: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x39f574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_39f578:
    // 0x39f578: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x39f578u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_39f57c:
    // 0x39f57c: 0xe7a50074  swc1        $f5, 0x74($sp)
    ctx->pc = 0x39f57cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_39f580:
    // 0x39f580: 0xe7a60078  swc1        $f6, 0x78($sp)
    ctx->pc = 0x39f580u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_39f584:
    // 0x39f584: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x39f584u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_39f588:
    // 0x39f588: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x39f588u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_39f58c:
    // 0x39f58c: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x39f58cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_39f590:
    // 0x39f590: 0xc0892b0  jal         func_224AC0
label_39f594:
    if (ctx->pc == 0x39F594u) {
        ctx->pc = 0x39F594u;
            // 0x39f594: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x39F598u;
        goto label_39f598;
    }
    ctx->pc = 0x39F590u;
    SET_GPR_U32(ctx, 31, 0x39F598u);
    ctx->pc = 0x39F594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F590u;
            // 0x39f594: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F598u; }
        if (ctx->pc != 0x39F598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F598u; }
        if (ctx->pc != 0x39F598u) { return; }
    }
    ctx->pc = 0x39F598u;
label_39f598:
    // 0x39f598: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39f598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39f59c:
    // 0x39f59c: 0xc04cc04  jal         func_133010
label_39f5a0:
    if (ctx->pc == 0x39F5A0u) {
        ctx->pc = 0x39F5A0u;
            // 0x39f5a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39F5A4u;
        goto label_39f5a4;
    }
    ctx->pc = 0x39F59Cu;
    SET_GPR_U32(ctx, 31, 0x39F5A4u);
    ctx->pc = 0x39F5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F59Cu;
            // 0x39f5a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F5A4u; }
        if (ctx->pc != 0x39F5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F5A4u; }
        if (ctx->pc != 0x39F5A4u) { return; }
    }
    ctx->pc = 0x39F5A4u;
label_39f5a4:
    // 0x39f5a4: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x39f5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_39f5a8:
    // 0x39f5a8: 0xc04c720  jal         func_131C80
label_39f5ac:
    if (ctx->pc == 0x39F5ACu) {
        ctx->pc = 0x39F5ACu;
            // 0x39f5ac: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x39F5B0u;
        goto label_39f5b0;
    }
    ctx->pc = 0x39F5A8u;
    SET_GPR_U32(ctx, 31, 0x39F5B0u);
    ctx->pc = 0x39F5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F5A8u;
            // 0x39f5ac: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F5B0u; }
        if (ctx->pc != 0x39F5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F5B0u; }
        if (ctx->pc != 0x39F5B0u) { return; }
    }
    ctx->pc = 0x39F5B0u;
label_39f5b0:
    // 0x39f5b0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x39f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_39f5b4:
    // 0x39f5b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39f5b8:
    // 0x39f5b8: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x39f5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_39f5bc:
    // 0x39f5bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x39f5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39f5c0:
    // 0x39f5c0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39f5c4:
    // 0x39f5c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39f5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f5c8:
    // 0x39f5c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x39f5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_39f5cc:
    // 0x39f5cc: 0xc08bff0  jal         func_22FFC0
label_39f5d0:
    if (ctx->pc == 0x39F5D0u) {
        ctx->pc = 0x39F5D0u;
            // 0x39f5d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39F5D4u;
        goto label_39f5d4;
    }
    ctx->pc = 0x39F5CCu;
    SET_GPR_U32(ctx, 31, 0x39F5D4u);
    ctx->pc = 0x39F5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F5CCu;
            // 0x39f5d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F5D4u; }
        if (ctx->pc != 0x39F5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F5D4u; }
        if (ctx->pc != 0x39F5D4u) { return; }
    }
    ctx->pc = 0x39F5D4u;
label_39f5d4:
    // 0x39f5d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39f5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39f5d8:
    // 0x39f5d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39f5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39f5dc:
    // 0x39f5dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x39f5dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39f5e0:
    // 0x39f5e0: 0xc08914c  jal         func_224530
label_39f5e4:
    if (ctx->pc == 0x39F5E4u) {
        ctx->pc = 0x39F5E4u;
            // 0x39f5e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39F5E8u;
        goto label_39f5e8;
    }
    ctx->pc = 0x39F5E0u;
    SET_GPR_U32(ctx, 31, 0x39F5E8u);
    ctx->pc = 0x39F5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F5E0u;
            // 0x39f5e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F5E8u; }
        if (ctx->pc != 0x39F5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F5E8u; }
        if (ctx->pc != 0x39F5E8u) { return; }
    }
    ctx->pc = 0x39F5E8u;
label_39f5e8:
    // 0x39f5e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39f5ec:
    // 0x39f5ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_39f5f0:
    // 0x39f5f0: 0x8c63e3e0  lw          $v1, -0x1C20($v1)
    ctx->pc = 0x39f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_39f5f4:
    // 0x39f5f4: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x39f5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39f5f8:
    // 0x39f5f8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x39f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_39f5fc:
    // 0x39f5fc: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x39f5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39f600:
    // 0x39f600: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x39f600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39f604:
    // 0x39f604: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39f604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39f608:
    // 0x39f608: 0xc465001c  lwc1        $f5, 0x1C($v1)
    ctx->pc = 0x39f608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_39f60c:
    // 0x39f60c: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x39f60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_39f610:
    // 0x39f610: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x39f610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39f614:
    // 0x39f614: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x39f614u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_39f618:
    // 0x39f618: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x39f618u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_39f61c:
    // 0x39f61c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x39f61cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_39f620:
    // 0x39f620: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x39f620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_39f624:
    // 0x39f624: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x39f624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_39f628:
    // 0x39f628: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x39f628u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_39f62c:
    // 0x39f62c: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x39f62cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_39f630:
    // 0x39f630: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x39f630u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_39f634:
    // 0x39f634: 0xc088b74  jal         func_222DD0
label_39f638:
    if (ctx->pc == 0x39F638u) {
        ctx->pc = 0x39F638u;
            // 0x39f638: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x39F63Cu;
        goto label_39f63c;
    }
    ctx->pc = 0x39F634u;
    SET_GPR_U32(ctx, 31, 0x39F63Cu);
    ctx->pc = 0x39F638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F634u;
            // 0x39f638: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F63Cu; }
        if (ctx->pc != 0x39F63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F63Cu; }
        if (ctx->pc != 0x39F63Cu) { return; }
    }
    ctx->pc = 0x39F63Cu;
label_39f63c:
    // 0x39f63c: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x39f63cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39f640:
    // 0x39f640: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x39f640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_39f644:
    // 0x39f644: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x39f644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_39f648:
    // 0x39f648: 0x320f809  jalr        $t9
label_39f64c:
    if (ctx->pc == 0x39F64Cu) {
        ctx->pc = 0x39F64Cu;
            // 0x39f64c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x39F650u;
        goto label_39f650;
    }
    ctx->pc = 0x39F648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39F650u);
        ctx->pc = 0x39F64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F648u;
            // 0x39f64c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39F650u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39F650u; }
            if (ctx->pc != 0x39F650u) { return; }
        }
        }
    }
    ctx->pc = 0x39F650u;
label_39f650:
    // 0x39f650: 0xc04ab66  jal         func_12AD98
label_39f654:
    if (ctx->pc == 0x39F654u) {
        ctx->pc = 0x39F658u;
        goto label_39f658;
    }
    ctx->pc = 0x39F650u;
    SET_GPR_U32(ctx, 31, 0x39F658u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F658u; }
        if (ctx->pc != 0x39F658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F658u; }
        if (ctx->pc != 0x39F658u) { return; }
    }
    ctx->pc = 0x39F658u;
label_39f658:
    // 0x39f658: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x39f658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_39f65c:
    // 0x39f65c: 0xc04ab66  jal         func_12AD98
label_39f660:
    if (ctx->pc == 0x39F660u) {
        ctx->pc = 0x39F660u;
            // 0x39f660: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x39F664u;
        goto label_39f664;
    }
    ctx->pc = 0x39F65Cu;
    SET_GPR_U32(ctx, 31, 0x39F664u);
    ctx->pc = 0x39F660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F65Cu;
            // 0x39f660: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F664u; }
        if (ctx->pc != 0x39F664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F664u; }
        if (ctx->pc != 0x39F664u) { return; }
    }
    ctx->pc = 0x39F664u;
label_39f664:
    // 0x39f664: 0xc04ab66  jal         func_12AD98
label_39f668:
    if (ctx->pc == 0x39F668u) {
        ctx->pc = 0x39F668u;
            // 0x39f668: 0x508825  or          $s1, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
        ctx->pc = 0x39F66Cu;
        goto label_39f66c;
    }
    ctx->pc = 0x39F664u;
    SET_GPR_U32(ctx, 31, 0x39F66Cu);
    ctx->pc = 0x39F668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F664u;
            // 0x39f668: 0x508825  or          $s1, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F66Cu; }
        if (ctx->pc != 0x39F66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F66Cu; }
        if (ctx->pc != 0x39F66Cu) { return; }
    }
    ctx->pc = 0x39F66Cu;
label_39f66c:
    // 0x39f66c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x39f66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_39f670:
    // 0x39f670: 0xc04ab66  jal         func_12AD98
label_39f674:
    if (ctx->pc == 0x39F674u) {
        ctx->pc = 0x39F674u;
            // 0x39f674: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x39F678u;
        goto label_39f678;
    }
    ctx->pc = 0x39F670u;
    SET_GPR_U32(ctx, 31, 0x39F678u);
    ctx->pc = 0x39F674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F670u;
            // 0x39f674: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F678u; }
        if (ctx->pc != 0x39F678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F678u; }
        if (ctx->pc != 0x39F678u) { return; }
    }
    ctx->pc = 0x39F678u;
label_39f678:
    // 0x39f678: 0xc04ab66  jal         func_12AD98
label_39f67c:
    if (ctx->pc == 0x39F67Cu) {
        ctx->pc = 0x39F67Cu;
            // 0x39f67c: 0x508025  or          $s0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
        ctx->pc = 0x39F680u;
        goto label_39f680;
    }
    ctx->pc = 0x39F678u;
    SET_GPR_U32(ctx, 31, 0x39F680u);
    ctx->pc = 0x39F67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F678u;
            // 0x39f67c: 0x508025  or          $s0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F680u; }
        if (ctx->pc != 0x39F680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F680u; }
        if (ctx->pc != 0x39F680u) { return; }
    }
    ctx->pc = 0x39F680u;
label_39f680:
    // 0x39f680: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x39f680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_39f684:
    // 0x39f684: 0xc04ab66  jal         func_12AD98
label_39f688:
    if (ctx->pc == 0x39F688u) {
        ctx->pc = 0x39F688u;
            // 0x39f688: 0x2a740  sll         $s4, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x39F68Cu;
        goto label_39f68c;
    }
    ctx->pc = 0x39F684u;
    SET_GPR_U32(ctx, 31, 0x39F68Cu);
    ctx->pc = 0x39F688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F684u;
            // 0x39f688: 0x2a740  sll         $s4, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F68Cu; }
        if (ctx->pc != 0x39F68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F68Cu; }
        if (ctx->pc != 0x39F68Cu) { return; }
    }
    ctx->pc = 0x39F68Cu;
label_39f68c:
    // 0x39f68c: 0x542025  or          $a0, $v0, $s4
    ctx->pc = 0x39f68cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_39f690:
    // 0x39f690: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x39f690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_39f694:
    // 0x39f694: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x39f694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39f698:
    // 0x39f698: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_39f69c:
    if (ctx->pc == 0x39F69Cu) {
        ctx->pc = 0x39F69Cu;
            // 0x39f69c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x39F6A0u;
        goto label_39f6a0;
    }
    ctx->pc = 0x39F698u;
    {
        const bool branch_taken_0x39f698 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x39f698) {
            ctx->pc = 0x39F69Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39F698u;
            // 0x39f69c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39F6ACu;
            goto label_39f6ac;
        }
    }
    ctx->pc = 0x39F6A0u;
label_39f6a0:
    // 0x39f6a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x39f6a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39f6a4:
    // 0x39f6a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_39f6a8:
    if (ctx->pc == 0x39F6A8u) {
        ctx->pc = 0x39F6A8u;
            // 0x39f6a8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x39F6ACu;
        goto label_39f6ac;
    }
    ctx->pc = 0x39F6A4u;
    {
        const bool branch_taken_0x39f6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F6A4u;
            // 0x39f6a8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f6a4) {
            ctx->pc = 0x39F6C4u;
            goto label_39f6c4;
        }
    }
    ctx->pc = 0x39F6ACu;
label_39f6ac:
    // 0x39f6ac: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x39f6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_39f6b0:
    // 0x39f6b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39f6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39f6b4:
    // 0x39f6b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39f6b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39f6b8:
    // 0x39f6b8: 0x0  nop
    ctx->pc = 0x39f6b8u;
    // NOP
label_39f6bc:
    // 0x39f6bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x39f6bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_39f6c0:
    // 0x39f6c0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x39f6c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_39f6c4:
    // 0x39f6c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x39f6c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_39f6c8:
    // 0x39f6c8: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x39f6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_39f6cc:
    // 0x39f6cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x39f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_39f6d0:
    // 0x39f6d0: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x39f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_39f6d4:
    // 0x39f6d4: 0x34640347  ori         $a0, $v1, 0x347
    ctx->pc = 0x39f6d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)839);
label_39f6d8:
    // 0x39f6d8: 0x3443b8c2  ori         $v1, $v0, 0xB8C2
    ctx->pc = 0x39f6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_39f6dc:
    // 0x39f6dc: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x39f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_39f6e0:
    // 0x39f6e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x39f6e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39f6e4:
    // 0x39f6e4: 0x0  nop
    ctx->pc = 0x39f6e4u;
    // NOP
label_39f6e8:
    // 0x39f6e8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x39f6e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_39f6ec:
    // 0x39f6ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x39f6ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39f6f0:
    // 0x39f6f0: 0x0  nop
    ctx->pc = 0x39f6f0u;
    // NOP
label_39f6f4:
    // 0x39f6f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39f6f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_39f6f8:
    // 0x39f6f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39f6f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39f6fc:
    // 0x39f6fc: 0x0  nop
    ctx->pc = 0x39f6fcu;
    // NOP
label_39f700:
    // 0x39f700: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x39f700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_39f704:
    // 0x39f704: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x39f704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39f708:
    // 0x39f708: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
label_39f70c:
    if (ctx->pc == 0x39F70Cu) {
        ctx->pc = 0x39F70Cu;
            // 0x39f70c: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->pc = 0x39F710u;
        goto label_39f710;
    }
    ctx->pc = 0x39F708u;
    {
        const bool branch_taken_0x39f708 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x39F70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F708u;
            // 0x39f70c: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f708) {
            ctx->pc = 0x39F71Cu;
            goto label_39f71c;
        }
    }
    ctx->pc = 0x39F710u;
label_39f710:
    // 0x39f710: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x39f710u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39f714:
    // 0x39f714: 0x10000008  b           . + 4 + (0x8 << 2)
label_39f718:
    if (ctx->pc == 0x39F718u) {
        ctx->pc = 0x39F718u;
            // 0x39f718: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x39F71Cu;
        goto label_39f71c;
    }
    ctx->pc = 0x39F714u;
    {
        const bool branch_taken_0x39f714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F714u;
            // 0x39f718: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f714) {
            ctx->pc = 0x39F738u;
            goto label_39f738;
        }
    }
    ctx->pc = 0x39F71Cu;
label_39f71c:
    // 0x39f71c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x39f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_39f720:
    // 0x39f720: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x39f720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_39f724:
    // 0x39f724: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39f724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39f728:
    // 0x39f728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39f728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39f72c:
    // 0x39f72c: 0x0  nop
    ctx->pc = 0x39f72cu;
    // NOP
label_39f730:
    // 0x39f730: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x39f730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_39f734:
    // 0x39f734: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x39f734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_39f738:
    // 0x39f738: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x39f738u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_39f73c:
    // 0x39f73c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x39f73cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_39f740:
    // 0x39f740: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x39f740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_39f744:
    // 0x39f744: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x39f744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_39f748:
    // 0x39f748: 0x34640347  ori         $a0, $v1, 0x347
    ctx->pc = 0x39f748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)839);
label_39f74c:
    // 0x39f74c: 0x3443b8c2  ori         $v1, $v0, 0xB8C2
    ctx->pc = 0x39f74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_39f750:
    // 0x39f750: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x39f750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_39f754:
    // 0x39f754: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x39f754u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39f758:
    // 0x39f758: 0x0  nop
    ctx->pc = 0x39f758u;
    // NOP
label_39f75c:
    // 0x39f75c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x39f75cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_39f760:
    // 0x39f760: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x39f760u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39f764:
    // 0x39f764: 0x0  nop
    ctx->pc = 0x39f764u;
    // NOP
label_39f768:
    // 0x39f768: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39f768u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_39f76c:
    // 0x39f76c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39f76cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39f770:
    // 0x39f770: 0x0  nop
    ctx->pc = 0x39f770u;
    // NOP
label_39f774:
    // 0x39f774: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x39f774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_39f778:
    // 0x39f778: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x39f778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39f77c:
    // 0x39f77c: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_39f780:
    if (ctx->pc == 0x39F780u) {
        ctx->pc = 0x39F780u;
            // 0x39f780: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->pc = 0x39F784u;
        goto label_39f784;
    }
    ctx->pc = 0x39F77Cu;
    {
        const bool branch_taken_0x39f77c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x39F780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F77Cu;
            // 0x39f780: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f77c) {
            ctx->pc = 0x39F790u;
            goto label_39f790;
        }
    }
    ctx->pc = 0x39F784u;
label_39f784:
    // 0x39f784: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x39f784u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39f788:
    // 0x39f788: 0x10000008  b           . + 4 + (0x8 << 2)
label_39f78c:
    if (ctx->pc == 0x39F78Cu) {
        ctx->pc = 0x39F78Cu;
            // 0x39f78c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x39F790u;
        goto label_39f790;
    }
    ctx->pc = 0x39F788u;
    {
        const bool branch_taken_0x39f788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F788u;
            // 0x39f78c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f788) {
            ctx->pc = 0x39F7ACu;
            goto label_39f7ac;
        }
    }
    ctx->pc = 0x39F790u;
label_39f790:
    // 0x39f790: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x39f790u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_39f794:
    // 0x39f794: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x39f794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_39f798:
    // 0x39f798: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39f798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39f79c:
    // 0x39f79c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39f79cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39f7a0:
    // 0x39f7a0: 0x0  nop
    ctx->pc = 0x39f7a0u;
    // NOP
label_39f7a4:
    // 0x39f7a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x39f7a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_39f7a8:
    // 0x39f7a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x39f7a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_39f7ac:
    // 0x39f7ac: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x39f7acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_39f7b0:
    // 0x39f7b0: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x39f7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
label_39f7b4:
    // 0x39f7b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_39f7b8:
    // 0x39f7b8: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x39f7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_39f7bc:
    // 0x39f7bc: 0x34450347  ori         $a1, $v0, 0x347
    ctx->pc = 0x39f7bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)839);
label_39f7c0:
    // 0x39f7c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39f7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39f7c4:
    // 0x39f7c4: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x39f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_39f7c8:
    // 0x39f7c8: 0x3443b8c2  ori         $v1, $v0, 0xB8C2
    ctx->pc = 0x39f7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_39f7cc:
    // 0x39f7cc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x39f7ccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39f7d0:
    // 0x39f7d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39f7d4:
    // 0x39f7d4: 0x460200c2  mul.s       $f3, $f0, $f2
    ctx->pc = 0x39f7d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_39f7d8:
    // 0x39f7d8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39f7dc:
    // 0x39f7dc: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x39f7dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_39f7e0:
    // 0x39f7e0: 0x0  nop
    ctx->pc = 0x39f7e0u;
    // NOP
label_39f7e4:
    // 0x39f7e4: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x39f7e4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_39f7e8:
    // 0x39f7e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x39f7e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_39f7ec:
    // 0x39f7ec: 0x0  nop
    ctx->pc = 0x39f7ecu;
    // NOP
label_39f7f0:
    // 0x39f7f0: 0x46031102  mul.s       $f4, $f2, $f3
    ctx->pc = 0x39f7f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_39f7f4:
    // 0x39f7f4: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x39f7f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_39f7f8:
    // 0x39f7f8: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x39f7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39f7fc:
    // 0x39f7fc: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x39f7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39f800:
    // 0x39f800: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x39f800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39f804:
    // 0x39f804: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x39f804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_39f808:
    // 0x39f808: 0x0  nop
    ctx->pc = 0x39f808u;
    // NOP
label_39f80c:
    // 0x39f80c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39f80cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_39f810:
    // 0x39f810: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x39f810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_39f814:
    // 0x39f814: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x39f814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_39f818:
    // 0x39f818: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x39f818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_39f81c:
    // 0x39f81c: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x39f81cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_39f820:
    // 0x39f820: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x39f820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_39f824:
    // 0x39f824: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x39f824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_39f828:
    // 0x39f828: 0xc088b74  jal         func_222DD0
label_39f82c:
    if (ctx->pc == 0x39F82Cu) {
        ctx->pc = 0x39F82Cu;
            // 0x39f82c: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x39F830u;
        goto label_39f830;
    }
    ctx->pc = 0x39F828u;
    SET_GPR_U32(ctx, 31, 0x39F830u);
    ctx->pc = 0x39F82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F828u;
            // 0x39f82c: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F830u; }
        if (ctx->pc != 0x39F830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F830u; }
        if (ctx->pc != 0x39F830u) { return; }
    }
    ctx->pc = 0x39F830u;
label_39f830:
    // 0x39f830: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x39f830u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_39f834:
    // 0x39f834: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x39f834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_39f838:
    // 0x39f838: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x39f838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_39f83c:
    // 0x39f83c: 0x320f809  jalr        $t9
label_39f840:
    if (ctx->pc == 0x39F840u) {
        ctx->pc = 0x39F840u;
            // 0x39f840: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x39F844u;
        goto label_39f844;
    }
    ctx->pc = 0x39F83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39F844u);
        ctx->pc = 0x39F840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F83Cu;
            // 0x39f840: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39F844u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39F844u; }
            if (ctx->pc != 0x39F844u) { return; }
        }
        }
    }
    ctx->pc = 0x39F844u;
label_39f844:
    // 0x39f844: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x39f844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39f848:
    // 0x39f848: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x39f848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_39f84c:
    // 0x39f84c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x39f84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_39f850:
    // 0x39f850: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39f850u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39f854:
    // 0x39f854: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39f854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39f858:
    // 0x39f858: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39f858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39f85c:
    // 0x39f85c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39f85cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39f860:
    // 0x39f860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39f860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39f864:
    // 0x39f864: 0x3e00008  jr          $ra
label_39f868:
    if (ctx->pc == 0x39F868u) {
        ctx->pc = 0x39F868u;
            // 0x39f868: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x39F86Cu;
        goto label_39f86c;
    }
    ctx->pc = 0x39F864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F864u;
            // 0x39f868: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39F86Cu;
label_39f86c:
    // 0x39f86c: 0x0  nop
    ctx->pc = 0x39f86cu;
    // NOP
label_39f870:
    // 0x39f870: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x39f870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_39f874:
    // 0x39f874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39f874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39f878:
    // 0x39f878: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x39f878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_39f87c:
    // 0x39f87c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x39f87cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39f880:
    // 0x39f880: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x39f880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_39f884:
    // 0x39f884: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x39f884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_39f888:
    // 0x39f888: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39f888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_39f88c:
    // 0x39f88c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39f88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_39f890:
    // 0x39f890: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39f890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_39f894:
    // 0x39f894: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39f894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39f898:
    // 0x39f898: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x39f898u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_39f89c:
    // 0x39f89c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39f89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39f8a0:
    // 0x39f8a0: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x39f8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39f8a4:
    // 0x39f8a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x39f8a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39f8a8:
    // 0x39f8a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_39f8ac:
    if (ctx->pc == 0x39F8ACu) {
        ctx->pc = 0x39F8ACu;
            // 0x39f8ac: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x39F8B0u;
        goto label_39f8b0;
    }
    ctx->pc = 0x39F8A8u;
    {
        const bool branch_taken_0x39f8a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39F8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F8A8u;
            // 0x39f8ac: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f8a8) {
            ctx->pc = 0x39F8B4u;
            goto label_39f8b4;
        }
    }
    ctx->pc = 0x39F8B0u;
label_39f8b0:
    // 0x39f8b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x39f8b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39f8b4:
    // 0x39f8b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x39f8b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_39f8b8:
    // 0x39f8b8: 0x50600085  beql        $v1, $zero, . + 4 + (0x85 << 2)
label_39f8bc:
    if (ctx->pc == 0x39F8BCu) {
        ctx->pc = 0x39F8BCu;
            // 0x39f8bc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x39F8C0u;
        goto label_39f8c0;
    }
    ctx->pc = 0x39F8B8u;
    {
        const bool branch_taken_0x39f8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f8b8) {
            ctx->pc = 0x39F8BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39F8B8u;
            // 0x39f8bc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39FAD0u;
            goto label_39fad0;
        }
    }
    ctx->pc = 0x39F8C0u;
label_39f8c0:
    // 0x39f8c0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x39f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_39f8c4:
    // 0x39f8c4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x39f8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_39f8c8:
    // 0x39f8c8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x39f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_39f8cc:
    // 0x39f8cc: 0x8c520130  lw          $s2, 0x130($v0)
    ctx->pc = 0x39f8ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_39f8d0:
    // 0x39f8d0: 0xc04f278  jal         func_13C9E0
label_39f8d4:
    if (ctx->pc == 0x39F8D4u) {
        ctx->pc = 0x39F8D4u;
            // 0x39f8d4: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x39F8D8u;
        goto label_39f8d8;
    }
    ctx->pc = 0x39F8D0u;
    SET_GPR_U32(ctx, 31, 0x39F8D8u);
    ctx->pc = 0x39F8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F8D0u;
            // 0x39f8d4: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F8D8u; }
        if (ctx->pc != 0x39F8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F8D8u; }
        if (ctx->pc != 0x39F8D8u) { return; }
    }
    ctx->pc = 0x39F8D8u;
label_39f8d8:
    // 0x39f8d8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x39f8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_39f8dc:
    // 0x39f8dc: 0xc04ce80  jal         func_133A00
label_39f8e0:
    if (ctx->pc == 0x39F8E0u) {
        ctx->pc = 0x39F8E0u;
            // 0x39f8e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39F8E4u;
        goto label_39f8e4;
    }
    ctx->pc = 0x39F8DCu;
    SET_GPR_U32(ctx, 31, 0x39F8E4u);
    ctx->pc = 0x39F8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F8DCu;
            // 0x39f8e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F8E4u; }
        if (ctx->pc != 0x39F8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F8E4u; }
        if (ctx->pc != 0x39F8E4u) { return; }
    }
    ctx->pc = 0x39F8E4u;
label_39f8e4:
    // 0x39f8e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39f8e8:
    // 0x39f8e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x39f8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39f8ec:
    // 0x39f8ec: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x39f8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_39f8f0:
    // 0x39f8f0: 0xc07698c  jal         func_1DA630
label_39f8f4:
    if (ctx->pc == 0x39F8F4u) {
        ctx->pc = 0x39F8F4u;
            // 0x39f8f4: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->pc = 0x39F8F8u;
        goto label_39f8f8;
    }
    ctx->pc = 0x39F8F0u;
    SET_GPR_U32(ctx, 31, 0x39F8F8u);
    ctx->pc = 0x39F8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F8F0u;
            // 0x39f8f4: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F8F8u; }
        if (ctx->pc != 0x39F8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F8F8u; }
        if (ctx->pc != 0x39F8F8u) { return; }
    }
    ctx->pc = 0x39F8F8u;
label_39f8f8:
    // 0x39f8f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39f8fc:
    // 0x39f8fc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_39f900:
    if (ctx->pc == 0x39F900u) {
        ctx->pc = 0x39F904u;
        goto label_39f904;
    }
    ctx->pc = 0x39F8FCu;
    {
        const bool branch_taken_0x39f8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39f8fc) {
            ctx->pc = 0x39F90Cu;
            goto label_39f90c;
        }
    }
    ctx->pc = 0x39F904u;
label_39f904:
    // 0x39f904: 0x10000031  b           . + 4 + (0x31 << 2)
label_39f908:
    if (ctx->pc == 0x39F908u) {
        ctx->pc = 0x39F908u;
            // 0x39f908: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x39F90Cu;
        goto label_39f90c;
    }
    ctx->pc = 0x39F904u;
    {
        const bool branch_taken_0x39f904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F904u;
            // 0x39f908: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f904) {
            ctx->pc = 0x39F9CCu;
            goto label_39f9cc;
        }
    }
    ctx->pc = 0x39F90Cu;
label_39f90c:
    // 0x39f90c: 0xc0576f4  jal         func_15DBD0
label_39f910:
    if (ctx->pc == 0x39F910u) {
        ctx->pc = 0x39F914u;
        goto label_39f914;
    }
    ctx->pc = 0x39F90Cu;
    SET_GPR_U32(ctx, 31, 0x39F914u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F914u; }
        if (ctx->pc != 0x39F914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F914u; }
        if (ctx->pc != 0x39F914u) { return; }
    }
    ctx->pc = 0x39F914u;
label_39f914:
    // 0x39f914: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39f914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39f918:
    // 0x39f918: 0xc076984  jal         func_1DA610
label_39f91c:
    if (ctx->pc == 0x39F91Cu) {
        ctx->pc = 0x39F91Cu;
            // 0x39f91c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39F920u;
        goto label_39f920;
    }
    ctx->pc = 0x39F918u;
    SET_GPR_U32(ctx, 31, 0x39F920u);
    ctx->pc = 0x39F91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F918u;
            // 0x39f91c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F920u; }
        if (ctx->pc != 0x39F920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F920u; }
        if (ctx->pc != 0x39F920u) { return; }
    }
    ctx->pc = 0x39F920u;
label_39f920:
    // 0x39f920: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x39f920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39f924:
    // 0x39f924: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x39f924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_39f928:
    // 0x39f928: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x39f928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_39f92c:
    // 0x39f92c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x39f92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_39f930:
    // 0x39f930: 0xc442f330  lwc1        $f2, -0xCD0($v0)
    ctx->pc = 0x39f930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39f934:
    // 0x39f934: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x39f934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39f938:
    // 0x39f938: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x39f938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_39f93c:
    // 0x39f93c: 0xc441f338  lwc1        $f1, -0xCC8($v0)
    ctx->pc = 0x39f93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39f940:
    // 0x39f940: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x39f940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_39f944:
    // 0x39f944: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x39f944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_39f948:
    // 0x39f948: 0xc440f33c  lwc1        $f0, -0xCC4($v0)
    ctx->pc = 0x39f948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39f94c:
    // 0x39f94c: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x39f94cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_39f950:
    // 0x39f950: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x39f950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_39f954:
    // 0x39f954: 0x8c42f334  lw          $v0, -0xCCC($v0)
    ctx->pc = 0x39f954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964020)));
label_39f958:
    // 0x39f958: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x39f958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_39f95c:
    // 0x39f95c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x39f95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_39f960:
    // 0x39f960: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x39f960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39f964:
    // 0x39f964: 0xc04cca0  jal         func_133280
label_39f968:
    if (ctx->pc == 0x39F968u) {
        ctx->pc = 0x39F968u;
            // 0x39f968: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x39F96Cu;
        goto label_39f96c;
    }
    ctx->pc = 0x39F964u;
    SET_GPR_U32(ctx, 31, 0x39F96Cu);
    ctx->pc = 0x39F968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F964u;
            // 0x39f968: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F96Cu; }
        if (ctx->pc != 0x39F96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F96Cu; }
        if (ctx->pc != 0x39F96Cu) { return; }
    }
    ctx->pc = 0x39F96Cu;
label_39f96c:
    // 0x39f96c: 0xc076980  jal         func_1DA600
label_39f970:
    if (ctx->pc == 0x39F970u) {
        ctx->pc = 0x39F970u;
            // 0x39f970: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39F974u;
        goto label_39f974;
    }
    ctx->pc = 0x39F96Cu;
    SET_GPR_U32(ctx, 31, 0x39F974u);
    ctx->pc = 0x39F970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F96Cu;
            // 0x39f970: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F974u; }
        if (ctx->pc != 0x39F974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F974u; }
        if (ctx->pc != 0x39F974u) { return; }
    }
    ctx->pc = 0x39F974u;
label_39f974:
    // 0x39f974: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x39f974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_39f978:
    // 0x39f978: 0xc04cc34  jal         func_1330D0
label_39f97c:
    if (ctx->pc == 0x39F97Cu) {
        ctx->pc = 0x39F97Cu;
            // 0x39f97c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39F980u;
        goto label_39f980;
    }
    ctx->pc = 0x39F978u;
    SET_GPR_U32(ctx, 31, 0x39F980u);
    ctx->pc = 0x39F97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F978u;
            // 0x39f97c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F980u; }
        if (ctx->pc != 0x39F980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F980u; }
        if (ctx->pc != 0x39F980u) { return; }
    }
    ctx->pc = 0x39F980u;
label_39f980:
    // 0x39f980: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x39f980u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39f984:
    // 0x39f984: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_39f988:
    if (ctx->pc == 0x39F988u) {
        ctx->pc = 0x39F988u;
            // 0x39f988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39F98Cu;
        goto label_39f98c;
    }
    ctx->pc = 0x39F984u;
    {
        const bool branch_taken_0x39f984 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39f984) {
            ctx->pc = 0x39F988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39F984u;
            // 0x39f988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39F994u;
            goto label_39f994;
        }
    }
    ctx->pc = 0x39F98Cu;
label_39f98c:
    // 0x39f98c: 0x1000000f  b           . + 4 + (0xF << 2)
label_39f990:
    if (ctx->pc == 0x39F990u) {
        ctx->pc = 0x39F990u;
            // 0x39f990: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x39F994u;
        goto label_39f994;
    }
    ctx->pc = 0x39F98Cu;
    {
        const bool branch_taken_0x39f98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39F98Cu;
            // 0x39f990: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f98c) {
            ctx->pc = 0x39F9CCu;
            goto label_39f9cc;
        }
    }
    ctx->pc = 0x39F994u;
label_39f994:
    // 0x39f994: 0xc07697c  jal         func_1DA5F0
label_39f998:
    if (ctx->pc == 0x39F998u) {
        ctx->pc = 0x39F99Cu;
        goto label_39f99c;
    }
    ctx->pc = 0x39F994u;
    SET_GPR_U32(ctx, 31, 0x39F99Cu);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F99Cu; }
        if (ctx->pc != 0x39F99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F99Cu; }
        if (ctx->pc != 0x39F99Cu) { return; }
    }
    ctx->pc = 0x39F99Cu;
label_39f99c:
    // 0x39f99c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39f99cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39f9a0:
    // 0x39f9a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x39f9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_39f9a4:
    // 0x39f9a4: 0xc04cd60  jal         func_133580
label_39f9a8:
    if (ctx->pc == 0x39F9A8u) {
        ctx->pc = 0x39F9A8u;
            // 0x39f9a8: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x39F9ACu;
        goto label_39f9ac;
    }
    ctx->pc = 0x39F9A4u;
    SET_GPR_U32(ctx, 31, 0x39F9ACu);
    ctx->pc = 0x39F9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F9A4u;
            // 0x39f9a8: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F9ACu; }
        if (ctx->pc != 0x39F9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F9ACu; }
        if (ctx->pc != 0x39F9ACu) { return; }
    }
    ctx->pc = 0x39F9ACu;
label_39f9ac:
    // 0x39f9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39f9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39f9b0:
    // 0x39f9b0: 0xc04c650  jal         func_131940
label_39f9b4:
    if (ctx->pc == 0x39F9B4u) {
        ctx->pc = 0x39F9B4u;
            // 0x39f9b4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x39F9B8u;
        goto label_39f9b8;
    }
    ctx->pc = 0x39F9B0u;
    SET_GPR_U32(ctx, 31, 0x39F9B8u);
    ctx->pc = 0x39F9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39F9B0u;
            // 0x39f9b4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F9B8u; }
        if (ctx->pc != 0x39F9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39F9B8u; }
        if (ctx->pc != 0x39F9B8u) { return; }
    }
    ctx->pc = 0x39F9B8u;
label_39f9b8:
    // 0x39f9b8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x39f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_39f9bc:
    // 0x39f9bc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x39f9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_39f9c0:
    // 0x39f9c0: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x39f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_39f9c4:
    // 0x39f9c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_39f9c8:
    // 0x39f9c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x39f9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39f9cc:
    // 0x39f9cc: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x39f9ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_39f9d0:
    // 0x39f9d0: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
label_39f9d4:
    if (ctx->pc == 0x39F9D4u) {
        ctx->pc = 0x39F9D8u;
        goto label_39f9d8;
    }
    ctx->pc = 0x39F9D0u;
    {
        const bool branch_taken_0x39f9d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f9d0) {
            ctx->pc = 0x39FACCu;
            goto label_39facc;
        }
    }
    ctx->pc = 0x39F9D8u;
label_39f9d8:
    // 0x39f9d8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x39f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_39f9dc:
    // 0x39f9dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39f9e0:
    // 0x39f9e0: 0x8c46d120  lw          $a2, -0x2EE0($v0)
    ctx->pc = 0x39f9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_39f9e4:
    // 0x39f9e4: 0x123880  sll         $a3, $s2, 2
    ctx->pc = 0x39f9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_39f9e8:
    // 0x39f9e8: 0x8c63e360  lw          $v1, -0x1CA0($v1)
    ctx->pc = 0x39f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_39f9ec:
    // 0x39f9ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39f9f0:
    // 0x39f9f0: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x39f9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_39f9f4:
    // 0x39f9f4: 0x8c45e3c0  lw          $a1, -0x1C40($v0)
    ctx->pc = 0x39f9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_39f9f8:
    // 0x39f9f8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x39f9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_39f9fc:
    // 0x39f9fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39fa00:
    // 0x39fa00: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x39fa00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39fa04:
    // 0x39fa04: 0x8c44e3d8  lw          $a0, -0x1C28($v0)
    ctx->pc = 0x39fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_39fa08:
    // 0x39fa08: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x39fa08u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_39fa0c:
    // 0x39fa0c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x39fa0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_39fa10:
    // 0x39fa10: 0x24d20010  addiu       $s2, $a2, 0x10
    ctx->pc = 0x39fa10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_39fa14:
    // 0x39fa14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39fa18:
    // 0x39fa18: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x39fa18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_39fa1c:
    // 0x39fa1c: 0x8c42e3b0  lw          $v0, -0x1C50($v0)
    ctx->pc = 0x39fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_39fa20:
    // 0x39fa20: 0x65a021  addu        $s4, $v1, $a1
    ctx->pc = 0x39fa20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_39fa24:
    // 0x39fa24: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x39fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_39fa28:
    // 0x39fa28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39fa2c:
    // 0x39fa2c: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x39fa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_39fa30:
    // 0x39fa30: 0xacb40000  sw          $s4, 0x0($a1)
    ctx->pc = 0x39fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 20));
label_39fa34:
    // 0x39fa34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39fa38:
    // 0x39fa38: 0x8c86e3d8  lw          $a2, -0x1C28($a0)
    ctx->pc = 0x39fa38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960088)));
label_39fa3c:
    // 0x39fa3c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x39fa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_39fa40:
    // 0x39fa40: 0x8c68e378  lw          $t0, -0x1C88($v1)
    ctx->pc = 0x39fa40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_39fa44:
    // 0x39fa44: 0x8c44e3b8  lw          $a0, -0x1C48($v0)
    ctx->pc = 0x39fa44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_39fa48:
    // 0x39fa48: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x39fa48u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_39fa4c:
    // 0x39fa4c: 0x1099821  addu        $s3, $t0, $t1
    ctx->pc = 0x39fa4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_39fa50:
    // 0x39fa50: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39fa54:
    // 0x39fa54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39fa54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39fa58:
    // 0x39fa58: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x39fa58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_39fa5c:
    // 0x39fa5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39fa60:
    // 0x39fa60: 0xad130000  sw          $s3, 0x0($t0)
    ctx->pc = 0x39fa60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 19));
label_39fa64:
    // 0x39fa64: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x39fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_39fa68:
    // 0x39fa68: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x39fa68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_39fa6c:
    // 0x39fa6c: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x39fa6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_39fa70:
    // 0x39fa70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_39fa74:
    // 0x39fa74: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x39fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_39fa78:
    // 0x39fa78: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x39fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_39fa7c:
    // 0x39fa7c: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x39fa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_39fa80:
    // 0x39fa80: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x39fa80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_39fa84:
    // 0x39fa84: 0xc04e4a4  jal         func_139290
label_39fa88:
    if (ctx->pc == 0x39FA88u) {
        ctx->pc = 0x39FA88u;
            // 0x39fa88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FA8Cu;
        goto label_39fa8c;
    }
    ctx->pc = 0x39FA84u;
    SET_GPR_U32(ctx, 31, 0x39FA8Cu);
    ctx->pc = 0x39FA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FA84u;
            // 0x39fa88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FA8Cu; }
        if (ctx->pc != 0x39FA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FA8Cu; }
        if (ctx->pc != 0x39FA8Cu) { return; }
    }
    ctx->pc = 0x39FA8Cu;
label_39fa8c:
    // 0x39fa8c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x39fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_39fa90:
    // 0x39fa90: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x39fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_39fa94:
    // 0x39fa94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x39fa94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39fa98:
    // 0x39fa98: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x39fa98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39fa9c:
    // 0x39fa9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_39faa0:
    // 0x39faa0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x39faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_39faa4:
    // 0x39faa4: 0xc04cd60  jal         func_133580
label_39faa8:
    if (ctx->pc == 0x39FAA8u) {
        ctx->pc = 0x39FAA8u;
            // 0x39faa8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x39FAACu;
        goto label_39faac;
    }
    ctx->pc = 0x39FAA4u;
    SET_GPR_U32(ctx, 31, 0x39FAACu);
    ctx->pc = 0x39FAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FAA4u;
            // 0x39faa8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FAACu; }
        if (ctx->pc != 0x39FAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FAACu; }
        if (ctx->pc != 0x39FAACu) { return; }
    }
    ctx->pc = 0x39FAACu;
label_39faac:
    // 0x39faac: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x39faacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_39fab0:
    // 0x39fab0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39fab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39fab4:
    // 0x39fab4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39fab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39fab8:
    // 0x39fab8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x39fab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39fabc:
    // 0x39fabc: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x39fabcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_39fac0:
    // 0x39fac0: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x39fac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_39fac4:
    // 0x39fac4: 0xc04cfcc  jal         func_133F30
label_39fac8:
    if (ctx->pc == 0x39FAC8u) {
        ctx->pc = 0x39FAC8u;
            // 0x39fac8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FACCu;
        goto label_39facc;
    }
    ctx->pc = 0x39FAC4u;
    SET_GPR_U32(ctx, 31, 0x39FACCu);
    ctx->pc = 0x39FAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FAC4u;
            // 0x39fac8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FACCu; }
        if (ctx->pc != 0x39FACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FACCu; }
        if (ctx->pc != 0x39FACCu) { return; }
    }
    ctx->pc = 0x39FACCu;
label_39facc:
    // 0x39facc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x39faccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_39fad0:
    // 0x39fad0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x39fad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39fad4:
    // 0x39fad4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x39fad4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39fad8:
    // 0x39fad8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x39fad8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39fadc:
    // 0x39fadc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39fadcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39fae0:
    // 0x39fae0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39fae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39fae4:
    // 0x39fae4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39fae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39fae8:
    // 0x39fae8: 0x3e00008  jr          $ra
label_39faec:
    if (ctx->pc == 0x39FAECu) {
        ctx->pc = 0x39FAECu;
            // 0x39faec: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x39FAF0u;
        goto label_39faf0;
    }
    ctx->pc = 0x39FAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39FAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FAE8u;
            // 0x39faec: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39FAF0u;
label_39faf0:
    // 0x39faf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39faf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_39faf4:
    // 0x39faf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39faf8:
    // 0x39faf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39faf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39fafc:
    // 0x39fafc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x39fafcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39fb00:
    // 0x39fb00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39fb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39fb04:
    // 0x39fb04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39fb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39fb08:
    // 0x39fb08: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x39fb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39fb0c:
    // 0x39fb0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x39fb0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39fb10:
    // 0x39fb10: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_39fb14:
    if (ctx->pc == 0x39FB14u) {
        ctx->pc = 0x39FB14u;
            // 0x39fb14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FB18u;
        goto label_39fb18;
    }
    ctx->pc = 0x39FB10u;
    {
        const bool branch_taken_0x39fb10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39FB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FB10u;
            // 0x39fb14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fb10) {
            ctx->pc = 0x39FB1Cu;
            goto label_39fb1c;
        }
    }
    ctx->pc = 0x39FB18u;
label_39fb18:
    // 0x39fb18: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x39fb18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39fb1c:
    // 0x39fb1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x39fb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_39fb20:
    // 0x39fb20: 0x5060004c  beql        $v1, $zero, . + 4 + (0x4C << 2)
label_39fb24:
    if (ctx->pc == 0x39FB24u) {
        ctx->pc = 0x39FB24u;
            // 0x39fb24: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x39FB28u;
        goto label_39fb28;
    }
    ctx->pc = 0x39FB20u;
    {
        const bool branch_taken_0x39fb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fb20) {
            ctx->pc = 0x39FB24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39FB20u;
            // 0x39fb24: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39FC54u;
            goto label_39fc54;
        }
    }
    ctx->pc = 0x39FB28u;
label_39fb28:
    // 0x39fb28: 0x8e110040  lw          $s1, 0x40($s0)
    ctx->pc = 0x39fb28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_39fb2c:
    // 0x39fb2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39fb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39fb30:
    // 0x39fb30: 0xc0dc9bc  jal         func_3726F0
label_39fb34:
    if (ctx->pc == 0x39FB34u) {
        ctx->pc = 0x39FB34u;
            // 0x39fb34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FB38u;
        goto label_39fb38;
    }
    ctx->pc = 0x39FB30u;
    SET_GPR_U32(ctx, 31, 0x39FB38u);
    ctx->pc = 0x39FB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FB30u;
            // 0x39fb34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FB38u; }
        if (ctx->pc != 0x39FB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FB38u; }
        if (ctx->pc != 0x39FB38u) { return; }
    }
    ctx->pc = 0x39FB38u;
label_39fb38:
    // 0x39fb38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39fb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39fb3c:
    // 0x39fb3c: 0xc0dc9a0  jal         func_372680
label_39fb40:
    if (ctx->pc == 0x39FB40u) {
        ctx->pc = 0x39FB40u;
            // 0x39fb40: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x39FB44u;
        goto label_39fb44;
    }
    ctx->pc = 0x39FB3Cu;
    SET_GPR_U32(ctx, 31, 0x39FB44u);
    ctx->pc = 0x39FB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FB3Cu;
            // 0x39fb40: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FB44u; }
        if (ctx->pc != 0x39FB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FB44u; }
        if (ctx->pc != 0x39FB44u) { return; }
    }
    ctx->pc = 0x39FB44u;
label_39fb44:
    // 0x39fb44: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x39fb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39fb48:
    // 0x39fb48: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x39fb48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_39fb4c:
    // 0x39fb4c: 0x0  nop
    ctx->pc = 0x39fb4cu;
    // NOP
label_39fb50:
    // 0x39fb50: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x39fb50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39fb54:
    // 0x39fb54: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_39fb58:
    if (ctx->pc == 0x39FB58u) {
        ctx->pc = 0x39FB5Cu;
        goto label_39fb5c;
    }
    ctx->pc = 0x39FB54u;
    {
        const bool branch_taken_0x39fb54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39fb54) {
            ctx->pc = 0x39FB84u;
            goto label_39fb84;
        }
    }
    ctx->pc = 0x39FB5Cu;
label_39fb5c:
    // 0x39fb5c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x39fb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_39fb60:
    // 0x39fb60: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x39fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_39fb64:
    // 0x39fb64: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x39fb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39fb68:
    // 0x39fb68: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x39fb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39fb6c:
    // 0x39fb6c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x39fb6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_39fb70:
    // 0x39fb70: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x39fb70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39fb74:
    // 0x39fb74: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_39fb78:
    if (ctx->pc == 0x39FB78u) {
        ctx->pc = 0x39FB78u;
            // 0x39fb78: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->pc = 0x39FB7Cu;
        goto label_39fb7c;
    }
    ctx->pc = 0x39FB74u;
    {
        const bool branch_taken_0x39fb74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39FB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FB74u;
            // 0x39fb78: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fb74) {
            ctx->pc = 0x39FB98u;
            goto label_39fb98;
        }
    }
    ctx->pc = 0x39FB7Cu;
label_39fb7c:
    // 0x39fb7c: 0x10000006  b           . + 4 + (0x6 << 2)
label_39fb80:
    if (ctx->pc == 0x39FB80u) {
        ctx->pc = 0x39FB80u;
            // 0x39fb80: 0xe6020010  swc1        $f2, 0x10($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->pc = 0x39FB84u;
        goto label_39fb84;
    }
    ctx->pc = 0x39FB7Cu;
    {
        const bool branch_taken_0x39fb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FB7Cu;
            // 0x39fb80: 0xe6020010  swc1        $f2, 0x10($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fb7c) {
            ctx->pc = 0x39FB98u;
            goto label_39fb98;
        }
    }
    ctx->pc = 0x39FB84u;
label_39fb84:
    // 0x39fb84: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x39fb84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39fb88:
    // 0x39fb88: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_39fb8c:
    if (ctx->pc == 0x39FB8Cu) {
        ctx->pc = 0x39FB8Cu;
            // 0x39fb8c: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x39FB90u;
        goto label_39fb90;
    }
    ctx->pc = 0x39FB88u;
    {
        const bool branch_taken_0x39fb88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39fb88) {
            ctx->pc = 0x39FB8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39FB88u;
            // 0x39fb8c: 0xc6010010  lwc1        $f1, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x39FB9Cu;
            goto label_39fb9c;
        }
    }
    ctx->pc = 0x39FB90u;
label_39fb90:
    // 0x39fb90: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x39fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_39fb94:
    // 0x39fb94: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x39fb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_39fb98:
    // 0x39fb98: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x39fb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39fb9c:
    // 0x39fb9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x39fb9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39fba0:
    // 0x39fba0: 0x0  nop
    ctx->pc = 0x39fba0u;
    // NOP
label_39fba4:
    // 0x39fba4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x39fba4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39fba8:
    // 0x39fba8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_39fbac:
    if (ctx->pc == 0x39FBACu) {
        ctx->pc = 0x39FBACu;
            // 0x39fbac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39FBB0u;
        goto label_39fbb0;
    }
    ctx->pc = 0x39FBA8u;
    {
        const bool branch_taken_0x39fba8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39FBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FBA8u;
            // 0x39fbac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fba8) {
            ctx->pc = 0x39FBB4u;
            goto label_39fbb4;
        }
    }
    ctx->pc = 0x39FBB0u;
label_39fbb0:
    // 0x39fbb0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x39fbb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39fbb4:
    // 0x39fbb4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x39fbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_39fbb8:
    // 0x39fbb8: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
label_39fbbc:
    if (ctx->pc == 0x39FBBCu) {
        ctx->pc = 0x39FBC0u;
        goto label_39fbc0;
    }
    ctx->pc = 0x39FBB8u;
    {
        const bool branch_taken_0x39fbb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39fbb8) {
            ctx->pc = 0x39FC50u;
            goto label_39fc50;
        }
    }
    ctx->pc = 0x39FBC0u;
label_39fbc0:
    // 0x39fbc0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x39fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_39fbc4:
    // 0x39fbc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39fbc8:
    if (ctx->pc == 0x39FBC8u) {
        ctx->pc = 0x39FBC8u;
            // 0x39fbc8: 0x8e110040  lw          $s1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->pc = 0x39FBCCu;
        goto label_39fbcc;
    }
    ctx->pc = 0x39FBC4u;
    {
        const bool branch_taken_0x39fbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FBC4u;
            // 0x39fbc8: 0x8e110040  lw          $s1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fbc4) {
            ctx->pc = 0x39FBD4u;
            goto label_39fbd4;
        }
    }
    ctx->pc = 0x39FBCCu;
label_39fbcc:
    // 0x39fbcc: 0x40f809  jalr        $v0
label_39fbd0:
    if (ctx->pc == 0x39FBD0u) {
        ctx->pc = 0x39FBD0u;
            // 0x39fbd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FBD4u;
        goto label_39fbd4;
    }
    ctx->pc = 0x39FBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39FBD4u);
        ctx->pc = 0x39FBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FBCCu;
            // 0x39fbd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39FBD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39FBD4u; }
            if (ctx->pc != 0x39FBD4u) { return; }
        }
        }
    }
    ctx->pc = 0x39FBD4u;
label_39fbd4:
    // 0x39fbd4: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x39fbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_39fbd8:
    // 0x39fbd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39fbdc:
    // 0x39fbdc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39fbe0:
    // 0x39fbe0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39fbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39fbe4:
    // 0x39fbe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39fbe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39fbe8:
    // 0x39fbe8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x39fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_39fbec:
    // 0x39fbec: 0xc08bff0  jal         func_22FFC0
label_39fbf0:
    if (ctx->pc == 0x39FBF0u) {
        ctx->pc = 0x39FBF0u;
            // 0x39fbf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FBF4u;
        goto label_39fbf4;
    }
    ctx->pc = 0x39FBECu;
    SET_GPR_U32(ctx, 31, 0x39FBF4u);
    ctx->pc = 0x39FBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FBECu;
            // 0x39fbf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FBF4u; }
        if (ctx->pc != 0x39FBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FBF4u; }
        if (ctx->pc != 0x39FBF4u) { return; }
    }
    ctx->pc = 0x39FBF4u;
label_39fbf4:
    // 0x39fbf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39fbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39fbf8:
    // 0x39fbf8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x39fbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_39fbfc:
    // 0x39fbfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39fbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39fc00:
    // 0x39fc00: 0xc08914c  jal         func_224530
label_39fc04:
    if (ctx->pc == 0x39FC04u) {
        ctx->pc = 0x39FC04u;
            // 0x39fc04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FC08u;
        goto label_39fc08;
    }
    ctx->pc = 0x39FC00u;
    SET_GPR_U32(ctx, 31, 0x39FC08u);
    ctx->pc = 0x39FC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FC00u;
            // 0x39fc04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FC08u; }
        if (ctx->pc != 0x39FC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FC08u; }
        if (ctx->pc != 0x39FC08u) { return; }
    }
    ctx->pc = 0x39FC08u;
label_39fc08:
    // 0x39fc08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39fc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39fc0c:
    // 0x39fc0c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x39fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_39fc10:
    // 0x39fc10: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x39fc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_39fc14:
    // 0x39fc14: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x39fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_39fc18:
    // 0x39fc18: 0xc088b74  jal         func_222DD0
label_39fc1c:
    if (ctx->pc == 0x39FC1Cu) {
        ctx->pc = 0x39FC1Cu;
            // 0x39fc1c: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->pc = 0x39FC20u;
        goto label_39fc20;
    }
    ctx->pc = 0x39FC18u;
    SET_GPR_U32(ctx, 31, 0x39FC20u);
    ctx->pc = 0x39FC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FC18u;
            // 0x39fc1c: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FC20u; }
        if (ctx->pc != 0x39FC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FC20u; }
        if (ctx->pc != 0x39FC20u) { return; }
    }
    ctx->pc = 0x39FC20u;
label_39fc20:
    // 0x39fc20: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x39fc20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_39fc24:
    // 0x39fc24: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x39fc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_39fc28:
    // 0x39fc28: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x39fc28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_39fc2c:
    // 0x39fc2c: 0x320f809  jalr        $t9
label_39fc30:
    if (ctx->pc == 0x39FC30u) {
        ctx->pc = 0x39FC30u;
            // 0x39fc30: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x39FC34u;
        goto label_39fc34;
    }
    ctx->pc = 0x39FC2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39FC34u);
        ctx->pc = 0x39FC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FC2Cu;
            // 0x39fc30: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39FC34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39FC34u; }
            if (ctx->pc != 0x39FC34u) { return; }
        }
        }
    }
    ctx->pc = 0x39FC34u;
label_39fc34:
    // 0x39fc34: 0xc088b74  jal         func_222DD0
label_39fc38:
    if (ctx->pc == 0x39FC38u) {
        ctx->pc = 0x39FC38u;
            // 0x39fc38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FC3Cu;
        goto label_39fc3c;
    }
    ctx->pc = 0x39FC34u;
    SET_GPR_U32(ctx, 31, 0x39FC3Cu);
    ctx->pc = 0x39FC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FC34u;
            // 0x39fc38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FC3Cu; }
        if (ctx->pc != 0x39FC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FC3Cu; }
        if (ctx->pc != 0x39FC3Cu) { return; }
    }
    ctx->pc = 0x39FC3Cu;
label_39fc3c:
    // 0x39fc3c: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x39fc3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_39fc40:
    // 0x39fc40: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x39fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_39fc44:
    // 0x39fc44: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x39fc44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_39fc48:
    // 0x39fc48: 0x320f809  jalr        $t9
label_39fc4c:
    if (ctx->pc == 0x39FC4Cu) {
        ctx->pc = 0x39FC4Cu;
            // 0x39fc4c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x39FC50u;
        goto label_39fc50;
    }
    ctx->pc = 0x39FC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39FC50u);
        ctx->pc = 0x39FC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FC48u;
            // 0x39fc4c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39FC50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39FC50u; }
            if (ctx->pc != 0x39FC50u) { return; }
        }
        }
    }
    ctx->pc = 0x39FC50u;
label_39fc50:
    // 0x39fc50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39fc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39fc54:
    // 0x39fc54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39fc54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39fc58:
    // 0x39fc58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39fc58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39fc5c:
    // 0x39fc5c: 0x3e00008  jr          $ra
label_39fc60:
    if (ctx->pc == 0x39FC60u) {
        ctx->pc = 0x39FC60u;
            // 0x39fc60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x39FC64u;
        goto label_39fc64;
    }
    ctx->pc = 0x39FC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39FC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FC5Cu;
            // 0x39fc60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39FC64u;
label_39fc64:
    // 0x39fc64: 0x0  nop
    ctx->pc = 0x39fc64u;
    // NOP
label_39fc68:
    // 0x39fc68: 0x0  nop
    ctx->pc = 0x39fc68u;
    // NOP
label_39fc6c:
    // 0x39fc6c: 0x0  nop
    ctx->pc = 0x39fc6cu;
    // NOP
}
