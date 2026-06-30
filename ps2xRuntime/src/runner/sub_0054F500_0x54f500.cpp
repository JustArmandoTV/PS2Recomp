#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0054F500
// Address: 0x54f500 - 0x54fb60
void sub_0054F500_0x54f500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0054F500_0x54f500");
#endif

    switch (ctx->pc) {
        case 0x54f500u: goto label_54f500;
        case 0x54f504u: goto label_54f504;
        case 0x54f508u: goto label_54f508;
        case 0x54f50cu: goto label_54f50c;
        case 0x54f510u: goto label_54f510;
        case 0x54f514u: goto label_54f514;
        case 0x54f518u: goto label_54f518;
        case 0x54f51cu: goto label_54f51c;
        case 0x54f520u: goto label_54f520;
        case 0x54f524u: goto label_54f524;
        case 0x54f528u: goto label_54f528;
        case 0x54f52cu: goto label_54f52c;
        case 0x54f530u: goto label_54f530;
        case 0x54f534u: goto label_54f534;
        case 0x54f538u: goto label_54f538;
        case 0x54f53cu: goto label_54f53c;
        case 0x54f540u: goto label_54f540;
        case 0x54f544u: goto label_54f544;
        case 0x54f548u: goto label_54f548;
        case 0x54f54cu: goto label_54f54c;
        case 0x54f550u: goto label_54f550;
        case 0x54f554u: goto label_54f554;
        case 0x54f558u: goto label_54f558;
        case 0x54f55cu: goto label_54f55c;
        case 0x54f560u: goto label_54f560;
        case 0x54f564u: goto label_54f564;
        case 0x54f568u: goto label_54f568;
        case 0x54f56cu: goto label_54f56c;
        case 0x54f570u: goto label_54f570;
        case 0x54f574u: goto label_54f574;
        case 0x54f578u: goto label_54f578;
        case 0x54f57cu: goto label_54f57c;
        case 0x54f580u: goto label_54f580;
        case 0x54f584u: goto label_54f584;
        case 0x54f588u: goto label_54f588;
        case 0x54f58cu: goto label_54f58c;
        case 0x54f590u: goto label_54f590;
        case 0x54f594u: goto label_54f594;
        case 0x54f598u: goto label_54f598;
        case 0x54f59cu: goto label_54f59c;
        case 0x54f5a0u: goto label_54f5a0;
        case 0x54f5a4u: goto label_54f5a4;
        case 0x54f5a8u: goto label_54f5a8;
        case 0x54f5acu: goto label_54f5ac;
        case 0x54f5b0u: goto label_54f5b0;
        case 0x54f5b4u: goto label_54f5b4;
        case 0x54f5b8u: goto label_54f5b8;
        case 0x54f5bcu: goto label_54f5bc;
        case 0x54f5c0u: goto label_54f5c0;
        case 0x54f5c4u: goto label_54f5c4;
        case 0x54f5c8u: goto label_54f5c8;
        case 0x54f5ccu: goto label_54f5cc;
        case 0x54f5d0u: goto label_54f5d0;
        case 0x54f5d4u: goto label_54f5d4;
        case 0x54f5d8u: goto label_54f5d8;
        case 0x54f5dcu: goto label_54f5dc;
        case 0x54f5e0u: goto label_54f5e0;
        case 0x54f5e4u: goto label_54f5e4;
        case 0x54f5e8u: goto label_54f5e8;
        case 0x54f5ecu: goto label_54f5ec;
        case 0x54f5f0u: goto label_54f5f0;
        case 0x54f5f4u: goto label_54f5f4;
        case 0x54f5f8u: goto label_54f5f8;
        case 0x54f5fcu: goto label_54f5fc;
        case 0x54f600u: goto label_54f600;
        case 0x54f604u: goto label_54f604;
        case 0x54f608u: goto label_54f608;
        case 0x54f60cu: goto label_54f60c;
        case 0x54f610u: goto label_54f610;
        case 0x54f614u: goto label_54f614;
        case 0x54f618u: goto label_54f618;
        case 0x54f61cu: goto label_54f61c;
        case 0x54f620u: goto label_54f620;
        case 0x54f624u: goto label_54f624;
        case 0x54f628u: goto label_54f628;
        case 0x54f62cu: goto label_54f62c;
        case 0x54f630u: goto label_54f630;
        case 0x54f634u: goto label_54f634;
        case 0x54f638u: goto label_54f638;
        case 0x54f63cu: goto label_54f63c;
        case 0x54f640u: goto label_54f640;
        case 0x54f644u: goto label_54f644;
        case 0x54f648u: goto label_54f648;
        case 0x54f64cu: goto label_54f64c;
        case 0x54f650u: goto label_54f650;
        case 0x54f654u: goto label_54f654;
        case 0x54f658u: goto label_54f658;
        case 0x54f65cu: goto label_54f65c;
        case 0x54f660u: goto label_54f660;
        case 0x54f664u: goto label_54f664;
        case 0x54f668u: goto label_54f668;
        case 0x54f66cu: goto label_54f66c;
        case 0x54f670u: goto label_54f670;
        case 0x54f674u: goto label_54f674;
        case 0x54f678u: goto label_54f678;
        case 0x54f67cu: goto label_54f67c;
        case 0x54f680u: goto label_54f680;
        case 0x54f684u: goto label_54f684;
        case 0x54f688u: goto label_54f688;
        case 0x54f68cu: goto label_54f68c;
        case 0x54f690u: goto label_54f690;
        case 0x54f694u: goto label_54f694;
        case 0x54f698u: goto label_54f698;
        case 0x54f69cu: goto label_54f69c;
        case 0x54f6a0u: goto label_54f6a0;
        case 0x54f6a4u: goto label_54f6a4;
        case 0x54f6a8u: goto label_54f6a8;
        case 0x54f6acu: goto label_54f6ac;
        case 0x54f6b0u: goto label_54f6b0;
        case 0x54f6b4u: goto label_54f6b4;
        case 0x54f6b8u: goto label_54f6b8;
        case 0x54f6bcu: goto label_54f6bc;
        case 0x54f6c0u: goto label_54f6c0;
        case 0x54f6c4u: goto label_54f6c4;
        case 0x54f6c8u: goto label_54f6c8;
        case 0x54f6ccu: goto label_54f6cc;
        case 0x54f6d0u: goto label_54f6d0;
        case 0x54f6d4u: goto label_54f6d4;
        case 0x54f6d8u: goto label_54f6d8;
        case 0x54f6dcu: goto label_54f6dc;
        case 0x54f6e0u: goto label_54f6e0;
        case 0x54f6e4u: goto label_54f6e4;
        case 0x54f6e8u: goto label_54f6e8;
        case 0x54f6ecu: goto label_54f6ec;
        case 0x54f6f0u: goto label_54f6f0;
        case 0x54f6f4u: goto label_54f6f4;
        case 0x54f6f8u: goto label_54f6f8;
        case 0x54f6fcu: goto label_54f6fc;
        case 0x54f700u: goto label_54f700;
        case 0x54f704u: goto label_54f704;
        case 0x54f708u: goto label_54f708;
        case 0x54f70cu: goto label_54f70c;
        case 0x54f710u: goto label_54f710;
        case 0x54f714u: goto label_54f714;
        case 0x54f718u: goto label_54f718;
        case 0x54f71cu: goto label_54f71c;
        case 0x54f720u: goto label_54f720;
        case 0x54f724u: goto label_54f724;
        case 0x54f728u: goto label_54f728;
        case 0x54f72cu: goto label_54f72c;
        case 0x54f730u: goto label_54f730;
        case 0x54f734u: goto label_54f734;
        case 0x54f738u: goto label_54f738;
        case 0x54f73cu: goto label_54f73c;
        case 0x54f740u: goto label_54f740;
        case 0x54f744u: goto label_54f744;
        case 0x54f748u: goto label_54f748;
        case 0x54f74cu: goto label_54f74c;
        case 0x54f750u: goto label_54f750;
        case 0x54f754u: goto label_54f754;
        case 0x54f758u: goto label_54f758;
        case 0x54f75cu: goto label_54f75c;
        case 0x54f760u: goto label_54f760;
        case 0x54f764u: goto label_54f764;
        case 0x54f768u: goto label_54f768;
        case 0x54f76cu: goto label_54f76c;
        case 0x54f770u: goto label_54f770;
        case 0x54f774u: goto label_54f774;
        case 0x54f778u: goto label_54f778;
        case 0x54f77cu: goto label_54f77c;
        case 0x54f780u: goto label_54f780;
        case 0x54f784u: goto label_54f784;
        case 0x54f788u: goto label_54f788;
        case 0x54f78cu: goto label_54f78c;
        case 0x54f790u: goto label_54f790;
        case 0x54f794u: goto label_54f794;
        case 0x54f798u: goto label_54f798;
        case 0x54f79cu: goto label_54f79c;
        case 0x54f7a0u: goto label_54f7a0;
        case 0x54f7a4u: goto label_54f7a4;
        case 0x54f7a8u: goto label_54f7a8;
        case 0x54f7acu: goto label_54f7ac;
        case 0x54f7b0u: goto label_54f7b0;
        case 0x54f7b4u: goto label_54f7b4;
        case 0x54f7b8u: goto label_54f7b8;
        case 0x54f7bcu: goto label_54f7bc;
        case 0x54f7c0u: goto label_54f7c0;
        case 0x54f7c4u: goto label_54f7c4;
        case 0x54f7c8u: goto label_54f7c8;
        case 0x54f7ccu: goto label_54f7cc;
        case 0x54f7d0u: goto label_54f7d0;
        case 0x54f7d4u: goto label_54f7d4;
        case 0x54f7d8u: goto label_54f7d8;
        case 0x54f7dcu: goto label_54f7dc;
        case 0x54f7e0u: goto label_54f7e0;
        case 0x54f7e4u: goto label_54f7e4;
        case 0x54f7e8u: goto label_54f7e8;
        case 0x54f7ecu: goto label_54f7ec;
        case 0x54f7f0u: goto label_54f7f0;
        case 0x54f7f4u: goto label_54f7f4;
        case 0x54f7f8u: goto label_54f7f8;
        case 0x54f7fcu: goto label_54f7fc;
        case 0x54f800u: goto label_54f800;
        case 0x54f804u: goto label_54f804;
        case 0x54f808u: goto label_54f808;
        case 0x54f80cu: goto label_54f80c;
        case 0x54f810u: goto label_54f810;
        case 0x54f814u: goto label_54f814;
        case 0x54f818u: goto label_54f818;
        case 0x54f81cu: goto label_54f81c;
        case 0x54f820u: goto label_54f820;
        case 0x54f824u: goto label_54f824;
        case 0x54f828u: goto label_54f828;
        case 0x54f82cu: goto label_54f82c;
        case 0x54f830u: goto label_54f830;
        case 0x54f834u: goto label_54f834;
        case 0x54f838u: goto label_54f838;
        case 0x54f83cu: goto label_54f83c;
        case 0x54f840u: goto label_54f840;
        case 0x54f844u: goto label_54f844;
        case 0x54f848u: goto label_54f848;
        case 0x54f84cu: goto label_54f84c;
        case 0x54f850u: goto label_54f850;
        case 0x54f854u: goto label_54f854;
        case 0x54f858u: goto label_54f858;
        case 0x54f85cu: goto label_54f85c;
        case 0x54f860u: goto label_54f860;
        case 0x54f864u: goto label_54f864;
        case 0x54f868u: goto label_54f868;
        case 0x54f86cu: goto label_54f86c;
        case 0x54f870u: goto label_54f870;
        case 0x54f874u: goto label_54f874;
        case 0x54f878u: goto label_54f878;
        case 0x54f87cu: goto label_54f87c;
        case 0x54f880u: goto label_54f880;
        case 0x54f884u: goto label_54f884;
        case 0x54f888u: goto label_54f888;
        case 0x54f88cu: goto label_54f88c;
        case 0x54f890u: goto label_54f890;
        case 0x54f894u: goto label_54f894;
        case 0x54f898u: goto label_54f898;
        case 0x54f89cu: goto label_54f89c;
        case 0x54f8a0u: goto label_54f8a0;
        case 0x54f8a4u: goto label_54f8a4;
        case 0x54f8a8u: goto label_54f8a8;
        case 0x54f8acu: goto label_54f8ac;
        case 0x54f8b0u: goto label_54f8b0;
        case 0x54f8b4u: goto label_54f8b4;
        case 0x54f8b8u: goto label_54f8b8;
        case 0x54f8bcu: goto label_54f8bc;
        case 0x54f8c0u: goto label_54f8c0;
        case 0x54f8c4u: goto label_54f8c4;
        case 0x54f8c8u: goto label_54f8c8;
        case 0x54f8ccu: goto label_54f8cc;
        case 0x54f8d0u: goto label_54f8d0;
        case 0x54f8d4u: goto label_54f8d4;
        case 0x54f8d8u: goto label_54f8d8;
        case 0x54f8dcu: goto label_54f8dc;
        case 0x54f8e0u: goto label_54f8e0;
        case 0x54f8e4u: goto label_54f8e4;
        case 0x54f8e8u: goto label_54f8e8;
        case 0x54f8ecu: goto label_54f8ec;
        case 0x54f8f0u: goto label_54f8f0;
        case 0x54f8f4u: goto label_54f8f4;
        case 0x54f8f8u: goto label_54f8f8;
        case 0x54f8fcu: goto label_54f8fc;
        case 0x54f900u: goto label_54f900;
        case 0x54f904u: goto label_54f904;
        case 0x54f908u: goto label_54f908;
        case 0x54f90cu: goto label_54f90c;
        case 0x54f910u: goto label_54f910;
        case 0x54f914u: goto label_54f914;
        case 0x54f918u: goto label_54f918;
        case 0x54f91cu: goto label_54f91c;
        case 0x54f920u: goto label_54f920;
        case 0x54f924u: goto label_54f924;
        case 0x54f928u: goto label_54f928;
        case 0x54f92cu: goto label_54f92c;
        case 0x54f930u: goto label_54f930;
        case 0x54f934u: goto label_54f934;
        case 0x54f938u: goto label_54f938;
        case 0x54f93cu: goto label_54f93c;
        case 0x54f940u: goto label_54f940;
        case 0x54f944u: goto label_54f944;
        case 0x54f948u: goto label_54f948;
        case 0x54f94cu: goto label_54f94c;
        case 0x54f950u: goto label_54f950;
        case 0x54f954u: goto label_54f954;
        case 0x54f958u: goto label_54f958;
        case 0x54f95cu: goto label_54f95c;
        case 0x54f960u: goto label_54f960;
        case 0x54f964u: goto label_54f964;
        case 0x54f968u: goto label_54f968;
        case 0x54f96cu: goto label_54f96c;
        case 0x54f970u: goto label_54f970;
        case 0x54f974u: goto label_54f974;
        case 0x54f978u: goto label_54f978;
        case 0x54f97cu: goto label_54f97c;
        case 0x54f980u: goto label_54f980;
        case 0x54f984u: goto label_54f984;
        case 0x54f988u: goto label_54f988;
        case 0x54f98cu: goto label_54f98c;
        case 0x54f990u: goto label_54f990;
        case 0x54f994u: goto label_54f994;
        case 0x54f998u: goto label_54f998;
        case 0x54f99cu: goto label_54f99c;
        case 0x54f9a0u: goto label_54f9a0;
        case 0x54f9a4u: goto label_54f9a4;
        case 0x54f9a8u: goto label_54f9a8;
        case 0x54f9acu: goto label_54f9ac;
        case 0x54f9b0u: goto label_54f9b0;
        case 0x54f9b4u: goto label_54f9b4;
        case 0x54f9b8u: goto label_54f9b8;
        case 0x54f9bcu: goto label_54f9bc;
        case 0x54f9c0u: goto label_54f9c0;
        case 0x54f9c4u: goto label_54f9c4;
        case 0x54f9c8u: goto label_54f9c8;
        case 0x54f9ccu: goto label_54f9cc;
        case 0x54f9d0u: goto label_54f9d0;
        case 0x54f9d4u: goto label_54f9d4;
        case 0x54f9d8u: goto label_54f9d8;
        case 0x54f9dcu: goto label_54f9dc;
        case 0x54f9e0u: goto label_54f9e0;
        case 0x54f9e4u: goto label_54f9e4;
        case 0x54f9e8u: goto label_54f9e8;
        case 0x54f9ecu: goto label_54f9ec;
        case 0x54f9f0u: goto label_54f9f0;
        case 0x54f9f4u: goto label_54f9f4;
        case 0x54f9f8u: goto label_54f9f8;
        case 0x54f9fcu: goto label_54f9fc;
        case 0x54fa00u: goto label_54fa00;
        case 0x54fa04u: goto label_54fa04;
        case 0x54fa08u: goto label_54fa08;
        case 0x54fa0cu: goto label_54fa0c;
        case 0x54fa10u: goto label_54fa10;
        case 0x54fa14u: goto label_54fa14;
        case 0x54fa18u: goto label_54fa18;
        case 0x54fa1cu: goto label_54fa1c;
        case 0x54fa20u: goto label_54fa20;
        case 0x54fa24u: goto label_54fa24;
        case 0x54fa28u: goto label_54fa28;
        case 0x54fa2cu: goto label_54fa2c;
        case 0x54fa30u: goto label_54fa30;
        case 0x54fa34u: goto label_54fa34;
        case 0x54fa38u: goto label_54fa38;
        case 0x54fa3cu: goto label_54fa3c;
        case 0x54fa40u: goto label_54fa40;
        case 0x54fa44u: goto label_54fa44;
        case 0x54fa48u: goto label_54fa48;
        case 0x54fa4cu: goto label_54fa4c;
        case 0x54fa50u: goto label_54fa50;
        case 0x54fa54u: goto label_54fa54;
        case 0x54fa58u: goto label_54fa58;
        case 0x54fa5cu: goto label_54fa5c;
        case 0x54fa60u: goto label_54fa60;
        case 0x54fa64u: goto label_54fa64;
        case 0x54fa68u: goto label_54fa68;
        case 0x54fa6cu: goto label_54fa6c;
        case 0x54fa70u: goto label_54fa70;
        case 0x54fa74u: goto label_54fa74;
        case 0x54fa78u: goto label_54fa78;
        case 0x54fa7cu: goto label_54fa7c;
        case 0x54fa80u: goto label_54fa80;
        case 0x54fa84u: goto label_54fa84;
        case 0x54fa88u: goto label_54fa88;
        case 0x54fa8cu: goto label_54fa8c;
        case 0x54fa90u: goto label_54fa90;
        case 0x54fa94u: goto label_54fa94;
        case 0x54fa98u: goto label_54fa98;
        case 0x54fa9cu: goto label_54fa9c;
        case 0x54faa0u: goto label_54faa0;
        case 0x54faa4u: goto label_54faa4;
        case 0x54faa8u: goto label_54faa8;
        case 0x54faacu: goto label_54faac;
        case 0x54fab0u: goto label_54fab0;
        case 0x54fab4u: goto label_54fab4;
        case 0x54fab8u: goto label_54fab8;
        case 0x54fabcu: goto label_54fabc;
        case 0x54fac0u: goto label_54fac0;
        case 0x54fac4u: goto label_54fac4;
        case 0x54fac8u: goto label_54fac8;
        case 0x54faccu: goto label_54facc;
        case 0x54fad0u: goto label_54fad0;
        case 0x54fad4u: goto label_54fad4;
        case 0x54fad8u: goto label_54fad8;
        case 0x54fadcu: goto label_54fadc;
        case 0x54fae0u: goto label_54fae0;
        case 0x54fae4u: goto label_54fae4;
        case 0x54fae8u: goto label_54fae8;
        case 0x54faecu: goto label_54faec;
        case 0x54faf0u: goto label_54faf0;
        case 0x54faf4u: goto label_54faf4;
        case 0x54faf8u: goto label_54faf8;
        case 0x54fafcu: goto label_54fafc;
        case 0x54fb00u: goto label_54fb00;
        case 0x54fb04u: goto label_54fb04;
        case 0x54fb08u: goto label_54fb08;
        case 0x54fb0cu: goto label_54fb0c;
        case 0x54fb10u: goto label_54fb10;
        case 0x54fb14u: goto label_54fb14;
        case 0x54fb18u: goto label_54fb18;
        case 0x54fb1cu: goto label_54fb1c;
        case 0x54fb20u: goto label_54fb20;
        case 0x54fb24u: goto label_54fb24;
        case 0x54fb28u: goto label_54fb28;
        case 0x54fb2cu: goto label_54fb2c;
        case 0x54fb30u: goto label_54fb30;
        case 0x54fb34u: goto label_54fb34;
        case 0x54fb38u: goto label_54fb38;
        case 0x54fb3cu: goto label_54fb3c;
        case 0x54fb40u: goto label_54fb40;
        case 0x54fb44u: goto label_54fb44;
        case 0x54fb48u: goto label_54fb48;
        case 0x54fb4cu: goto label_54fb4c;
        case 0x54fb50u: goto label_54fb50;
        case 0x54fb54u: goto label_54fb54;
        case 0x54fb58u: goto label_54fb58;
        case 0x54fb5cu: goto label_54fb5c;
        default: break;
    }

    ctx->pc = 0x54f500u;

label_54f500:
    // 0x54f500: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x54f500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_54f504:
    // 0x54f504: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54f504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54f508:
    // 0x54f508: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x54f508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_54f50c:
    // 0x54f50c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54f50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54f510:
    // 0x54f510: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x54f510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_54f514:
    // 0x54f514: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x54f514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_54f518:
    // 0x54f518: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x54f518u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_54f51c:
    // 0x54f51c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x54f51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_54f520:
    // 0x54f520: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x54f520u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_54f524:
    // 0x54f524: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x54f524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_54f528:
    // 0x54f528: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x54f528u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_54f52c:
    // 0x54f52c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x54f52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_54f530:
    // 0x54f530: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x54f530u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_54f534:
    // 0x54f534: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x54f534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_54f538:
    // 0x54f538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x54f538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54f53c:
    // 0x54f53c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x54f53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_54f540:
    // 0x54f540: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x54f540u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_54f544:
    // 0x54f544: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x54f544u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_54f548:
    // 0x54f548: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x54f548u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_54f54c:
    // 0x54f54c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x54f54cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_54f550:
    // 0x54f550: 0x9451dad2  lhu         $s1, -0x252E($v0)
    ctx->pc = 0x54f550u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957778)));
label_54f554:
    // 0x54f554: 0x9472dad0  lhu         $s2, -0x2530($v1)
    ctx->pc = 0x54f554u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957776)));
label_54f558:
    // 0x54f558: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x54f558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_54f55c:
    // 0x54f55c: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x54f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_54f560:
    // 0x54f560: 0xc0506ac  jal         func_141AB0
label_54f564:
    if (ctx->pc == 0x54F564u) {
        ctx->pc = 0x54F564u;
            // 0x54f564: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54F568u;
        goto label_54f568;
    }
    ctx->pc = 0x54F560u;
    SET_GPR_U32(ctx, 31, 0x54F568u);
    ctx->pc = 0x54F564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54F560u;
            // 0x54f564: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F568u; }
        if (ctx->pc != 0x54F568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F568u; }
        if (ctx->pc != 0x54F568u) { return; }
    }
    ctx->pc = 0x54F568u;
label_54f568:
    // 0x54f568: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54f568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54f56c:
    // 0x54f56c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54f56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54f570:
    // 0x54f570: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54f570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54f574:
    // 0x54f574: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54f574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54f578:
    // 0x54f578: 0x320f809  jalr        $t9
label_54f57c:
    if (ctx->pc == 0x54F57Cu) {
        ctx->pc = 0x54F57Cu;
            // 0x54f57c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54F580u;
        goto label_54f580;
    }
    ctx->pc = 0x54F578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54F580u);
        ctx->pc = 0x54F57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F578u;
            // 0x54f57c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54F580u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54F580u; }
            if (ctx->pc != 0x54F580u) { return; }
        }
        }
    }
    ctx->pc = 0x54F580u;
label_54f580:
    // 0x54f580: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x54f580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_54f584:
    // 0x54f584: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x54f584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_54f588:
    // 0x54f588: 0xc455e08c  lwc1        $f21, -0x1F74($v0)
    ctx->pc = 0x54f588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_54f58c:
    // 0x54f58c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54f58cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54f590:
    // 0x54f590: 0xc474e088  lwc1        $f20, -0x1F78($v1)
    ctx->pc = 0x54f590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54f594:
    // 0x54f594: 0x2b6b021  addu        $s6, $s5, $s6
    ctx->pc = 0x54f594u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
label_54f598:
    // 0x54f598: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x54f598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_54f59c:
    // 0x54f59c: 0x24a5e0b0  addiu       $a1, $a1, -0x1F50
    ctx->pc = 0x54f59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959280));
label_54f5a0:
    // 0x54f5a0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54f5a4:
    // 0x54f5a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x54f5a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_54f5a8:
    // 0x54f5a8: 0x0  nop
    ctx->pc = 0x54f5a8u;
    // NOP
label_54f5ac:
    // 0x54f5ac: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x54f5acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_54f5b0:
    // 0x54f5b0: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x54f5b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_54f5b4:
    // 0x54f5b4: 0x46151002  mul.s       $f0, $f2, $f21
    ctx->pc = 0x54f5b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_54f5b8:
    // 0x54f5b8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x54f5b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_54f5bc:
    // 0x54f5bc: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x54f5bcu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f5c0:
    // 0x54f5c0: 0x0  nop
    ctx->pc = 0x54f5c0u;
    // NOP
label_54f5c4:
    // 0x54f5c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54f5c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54f5c8:
    // 0x54f5c8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x54f5c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_54f5cc:
    // 0x54f5cc: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x54f5ccu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f5d0:
    // 0x54f5d0: 0x0  nop
    ctx->pc = 0x54f5d0u;
    // NOP
label_54f5d4:
    // 0x54f5d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54f5d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54f5d8:
    // 0x54f5d8: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x54f5d8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_54f5dc:
    // 0x54f5dc: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x54f5dcu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f5e0:
    // 0x54f5e0: 0x0  nop
    ctx->pc = 0x54f5e0u;
    // NOP
label_54f5e4:
    // 0x54f5e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54f5e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54f5e8:
    // 0x54f5e8: 0x46010381  sub.s       $f14, $f0, $f1
    ctx->pc = 0x54f5e8u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_54f5ec:
    // 0x54f5ec: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54f5ecu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f5f0:
    // 0x54f5f0: 0x0  nop
    ctx->pc = 0x54f5f0u;
    // NOP
label_54f5f4:
    // 0x54f5f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54f5f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54f5f8:
    // 0x54f5f8: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_54f5fc:
    if (ctx->pc == 0x54F5FCu) {
        ctx->pc = 0x54F5FCu;
            // 0x54f5fc: 0x460203c1  sub.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x54F600u;
        goto label_54f600;
    }
    ctx->pc = 0x54F5F8u;
    {
        const bool branch_taken_0x54f5f8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x54F5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F5F8u;
            // 0x54f5fc: 0x460203c1  sub.s       $f15, $f0, $f2 (Delay Slot)
        ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f5f8) {
            ctx->pc = 0x54F60Cu;
            goto label_54f60c;
        }
    }
    ctx->pc = 0x54F600u;
label_54f600:
    // 0x54f600: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54f600u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f604:
    // 0x54f604: 0x10000008  b           . + 4 + (0x8 << 2)
label_54f608:
    if (ctx->pc == 0x54F608u) {
        ctx->pc = 0x54F608u;
            // 0x54f608: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F60Cu;
        goto label_54f60c;
    }
    ctx->pc = 0x54F604u;
    {
        const bool branch_taken_0x54f604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F604u;
            // 0x54f608: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f604) {
            ctx->pc = 0x54F628u;
            goto label_54f628;
        }
    }
    ctx->pc = 0x54F60Cu;
label_54f60c:
    // 0x54f60c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x54f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_54f610:
    // 0x54f610: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x54f610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_54f614:
    // 0x54f614: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f618:
    // 0x54f618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f61c:
    // 0x54f61c: 0x0  nop
    ctx->pc = 0x54f61cu;
    // NOP
label_54f620:
    // 0x54f620: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54f620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54f624:
    // 0x54f624: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54f624u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54f628:
    // 0x54f628: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54f62c:
    if (ctx->pc == 0x54F62Cu) {
        ctx->pc = 0x54F62Cu;
            // 0x54f62c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x54F630u;
        goto label_54f630;
    }
    ctx->pc = 0x54F628u;
    {
        const bool branch_taken_0x54f628 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54f628) {
            ctx->pc = 0x54F62Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54F628u;
            // 0x54f62c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54F63Cu;
            goto label_54f63c;
        }
    }
    ctx->pc = 0x54F630u;
label_54f630:
    // 0x54f630: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54f630u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f634:
    // 0x54f634: 0x10000007  b           . + 4 + (0x7 << 2)
label_54f638:
    if (ctx->pc == 0x54F638u) {
        ctx->pc = 0x54F638u;
            // 0x54f638: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F63Cu;
        goto label_54f63c;
    }
    ctx->pc = 0x54F634u;
    {
        const bool branch_taken_0x54f634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F634u;
            // 0x54f638: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f634) {
            ctx->pc = 0x54F654u;
            goto label_54f654;
        }
    }
    ctx->pc = 0x54F63Cu;
label_54f63c:
    // 0x54f63c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54f63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54f640:
    // 0x54f640: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f644:
    // 0x54f644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f648:
    // 0x54f648: 0x0  nop
    ctx->pc = 0x54f648u;
    // NOP
label_54f64c:
    // 0x54f64c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54f64cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54f650:
    // 0x54f650: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54f650u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54f654:
    // 0x54f654: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54f654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54f658:
    // 0x54f658: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54f658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54f65c:
    // 0x54f65c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54f65cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54f660:
    // 0x54f660: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54f660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54f664:
    // 0x54f664: 0xc0bc284  jal         func_2F0A10
label_54f668:
    if (ctx->pc == 0x54F668u) {
        ctx->pc = 0x54F668u;
            // 0x54f668: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54F66Cu;
        goto label_54f66c;
    }
    ctx->pc = 0x54F664u;
    SET_GPR_U32(ctx, 31, 0x54F66Cu);
    ctx->pc = 0x54F668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54F664u;
            // 0x54f668: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F66Cu; }
        if (ctx->pc != 0x54F66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F66Cu; }
        if (ctx->pc != 0x54F66Cu) { return; }
    }
    ctx->pc = 0x54F66Cu;
label_54f66c:
    // 0x54f66c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x54f66cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f670:
    // 0x54f670: 0x0  nop
    ctx->pc = 0x54f670u;
    // NOP
label_54f674:
    // 0x54f674: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x54f674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_54f678:
    // 0x54f678: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x54f678u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f67c:
    // 0x54f67c: 0x0  nop
    ctx->pc = 0x54f67cu;
    // NOP
label_54f680:
    // 0x54f680: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54f680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_54f684:
    // 0x54f684: 0x46156dc0  add.s       $f23, $f13, $f21
    ctx->pc = 0x54f684u;
    ctx->f[23] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
label_54f688:
    // 0x54f688: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_54f68c:
    if (ctx->pc == 0x54F68Cu) {
        ctx->pc = 0x54F68Cu;
            // 0x54f68c: 0x46146580  add.s       $f22, $f12, $f20 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x54F690u;
        goto label_54f690;
    }
    ctx->pc = 0x54F688u;
    {
        const bool branch_taken_0x54f688 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x54F68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F688u;
            // 0x54f68c: 0x46146580  add.s       $f22, $f12, $f20 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f688) {
            ctx->pc = 0x54F69Cu;
            goto label_54f69c;
        }
    }
    ctx->pc = 0x54F690u;
label_54f690:
    // 0x54f690: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54f690u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f694:
    // 0x54f694: 0x10000008  b           . + 4 + (0x8 << 2)
label_54f698:
    if (ctx->pc == 0x54F698u) {
        ctx->pc = 0x54F698u;
            // 0x54f698: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F69Cu;
        goto label_54f69c;
    }
    ctx->pc = 0x54F694u;
    {
        const bool branch_taken_0x54f694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F694u;
            // 0x54f698: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f694) {
            ctx->pc = 0x54F6B8u;
            goto label_54f6b8;
        }
    }
    ctx->pc = 0x54F69Cu;
label_54f69c:
    // 0x54f69c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x54f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_54f6a0:
    // 0x54f6a0: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x54f6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_54f6a4:
    // 0x54f6a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f6a8:
    // 0x54f6a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f6a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f6ac:
    // 0x54f6ac: 0x0  nop
    ctx->pc = 0x54f6acu;
    // NOP
label_54f6b0:
    // 0x54f6b0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54f6b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54f6b4:
    // 0x54f6b4: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54f6b4u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54f6b8:
    // 0x54f6b8: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54f6bc:
    if (ctx->pc == 0x54F6BCu) {
        ctx->pc = 0x54F6BCu;
            // 0x54f6bc: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x54F6C0u;
        goto label_54f6c0;
    }
    ctx->pc = 0x54F6B8u;
    {
        const bool branch_taken_0x54f6b8 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54f6b8) {
            ctx->pc = 0x54F6BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54F6B8u;
            // 0x54f6bc: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54F6CCu;
            goto label_54f6cc;
        }
    }
    ctx->pc = 0x54F6C0u;
label_54f6c0:
    // 0x54f6c0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54f6c0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f6c4:
    // 0x54f6c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_54f6c8:
    if (ctx->pc == 0x54F6C8u) {
        ctx->pc = 0x54F6C8u;
            // 0x54f6c8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F6CCu;
        goto label_54f6cc;
    }
    ctx->pc = 0x54F6C4u;
    {
        const bool branch_taken_0x54f6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F6C4u;
            // 0x54f6c8: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f6c4) {
            ctx->pc = 0x54F6E4u;
            goto label_54f6e4;
        }
    }
    ctx->pc = 0x54F6CCu;
label_54f6cc:
    // 0x54f6cc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54f6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54f6d0:
    // 0x54f6d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f6d4:
    // 0x54f6d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f6d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f6d8:
    // 0x54f6d8: 0x0  nop
    ctx->pc = 0x54f6d8u;
    // NOP
label_54f6dc:
    // 0x54f6dc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54f6dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54f6e0:
    // 0x54f6e0: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54f6e0u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54f6e4:
    // 0x54f6e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54f6e8:
    // 0x54f6e8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54f6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54f6ec:
    // 0x54f6ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54f6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54f6f0:
    // 0x54f6f0: 0x24a5e080  addiu       $a1, $a1, -0x1F80
    ctx->pc = 0x54f6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959232));
label_54f6f4:
    // 0x54f6f4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54f6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54f6f8:
    // 0x54f6f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54f6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54f6fc:
    // 0x54f6fc: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x54f6fcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_54f700:
    // 0x54f700: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54f700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54f704:
    // 0x54f704: 0xc0bc284  jal         func_2F0A10
label_54f708:
    if (ctx->pc == 0x54F708u) {
        ctx->pc = 0x54F708u;
            // 0x54f708: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x54F70Cu;
        goto label_54f70c;
    }
    ctx->pc = 0x54F704u;
    SET_GPR_U32(ctx, 31, 0x54F70Cu);
    ctx->pc = 0x54F708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54F704u;
            // 0x54f708: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F70Cu; }
        if (ctx->pc != 0x54F70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F70Cu; }
        if (ctx->pc != 0x54F70Cu) { return; }
    }
    ctx->pc = 0x54F70Cu;
label_54f70c:
    // 0x54f70c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x54f70cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f710:
    // 0x54f710: 0x0  nop
    ctx->pc = 0x54f710u;
    // NOP
label_54f714:
    // 0x54f714: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54f714u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_54f718:
    // 0x54f718: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x54f718u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f71c:
    // 0x54f71c: 0x0  nop
    ctx->pc = 0x54f71cu;
    // NOP
label_54f720:
    // 0x54f720: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x54f720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_54f724:
    // 0x54f724: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_54f728:
    if (ctx->pc == 0x54F728u) {
        ctx->pc = 0x54F728u;
            // 0x54f728: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->pc = 0x54F72Cu;
        goto label_54f72c;
    }
    ctx->pc = 0x54F724u;
    {
        const bool branch_taken_0x54f724 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x54F728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F724u;
            // 0x54f728: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f724) {
            ctx->pc = 0x54F738u;
            goto label_54f738;
        }
    }
    ctx->pc = 0x54F72Cu;
label_54f72c:
    // 0x54f72c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54f72cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f730:
    // 0x54f730: 0x10000008  b           . + 4 + (0x8 << 2)
label_54f734:
    if (ctx->pc == 0x54F734u) {
        ctx->pc = 0x54F734u;
            // 0x54f734: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F738u;
        goto label_54f738;
    }
    ctx->pc = 0x54F730u;
    {
        const bool branch_taken_0x54f730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F730u;
            // 0x54f734: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f730) {
            ctx->pc = 0x54F754u;
            goto label_54f754;
        }
    }
    ctx->pc = 0x54F738u;
label_54f738:
    // 0x54f738: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x54f738u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_54f73c:
    // 0x54f73c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x54f73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_54f740:
    // 0x54f740: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f744:
    // 0x54f744: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f744u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f748:
    // 0x54f748: 0x0  nop
    ctx->pc = 0x54f748u;
    // NOP
label_54f74c:
    // 0x54f74c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54f74cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54f750:
    // 0x54f750: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54f750u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54f754:
    // 0x54f754: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54f758:
    if (ctx->pc == 0x54F758u) {
        ctx->pc = 0x54F758u;
            // 0x54f758: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x54F75Cu;
        goto label_54f75c;
    }
    ctx->pc = 0x54F754u;
    {
        const bool branch_taken_0x54f754 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54f754) {
            ctx->pc = 0x54F758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54F754u;
            // 0x54f758: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54F768u;
            goto label_54f768;
        }
    }
    ctx->pc = 0x54F75Cu;
label_54f75c:
    // 0x54f75c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54f75cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f760:
    // 0x54f760: 0x10000007  b           . + 4 + (0x7 << 2)
label_54f764:
    if (ctx->pc == 0x54F764u) {
        ctx->pc = 0x54F764u;
            // 0x54f764: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F768u;
        goto label_54f768;
    }
    ctx->pc = 0x54F760u;
    {
        const bool branch_taken_0x54f760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F760u;
            // 0x54f764: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f760) {
            ctx->pc = 0x54F780u;
            goto label_54f780;
        }
    }
    ctx->pc = 0x54F768u;
label_54f768:
    // 0x54f768: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54f768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54f76c:
    // 0x54f76c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f770:
    // 0x54f770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f774:
    // 0x54f774: 0x0  nop
    ctx->pc = 0x54f774u;
    // NOP
label_54f778:
    // 0x54f778: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54f778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54f77c:
    // 0x54f77c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54f77cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54f780:
    // 0x54f780: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54f780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54f784:
    // 0x54f784: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54f784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54f788:
    // 0x54f788: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54f788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54f78c:
    // 0x54f78c: 0x24a5e080  addiu       $a1, $a1, -0x1F80
    ctx->pc = 0x54f78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959232));
label_54f790:
    // 0x54f790: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54f790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54f794:
    // 0x54f794: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54f794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54f798:
    // 0x54f798: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x54f798u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_54f79c:
    // 0x54f79c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54f79cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54f7a0:
    // 0x54f7a0: 0xc0bc284  jal         func_2F0A10
label_54f7a4:
    if (ctx->pc == 0x54F7A4u) {
        ctx->pc = 0x54F7A4u;
            // 0x54f7a4: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x54F7A8u;
        goto label_54f7a8;
    }
    ctx->pc = 0x54F7A0u;
    SET_GPR_U32(ctx, 31, 0x54F7A8u);
    ctx->pc = 0x54F7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54F7A0u;
            // 0x54f7a4: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F7A8u; }
        if (ctx->pc != 0x54F7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F7A8u; }
        if (ctx->pc != 0x54F7A8u) { return; }
    }
    ctx->pc = 0x54F7A8u;
label_54f7a8:
    // 0x54f7a8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54f7a8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f7ac:
    // 0x54f7ac: 0x0  nop
    ctx->pc = 0x54f7acu;
    // NOP
label_54f7b0:
    // 0x54f7b0: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x54f7b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_54f7b4:
    // 0x54f7b4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x54f7b4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f7b8:
    // 0x54f7b8: 0x0  nop
    ctx->pc = 0x54f7b8u;
    // NOP
label_54f7bc:
    // 0x54f7bc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54f7bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_54f7c0:
    // 0x54f7c0: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_54f7c4:
    if (ctx->pc == 0x54F7C4u) {
        ctx->pc = 0x54F7C4u;
            // 0x54f7c4: 0x46156d41  sub.s       $f21, $f13, $f21 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[13], ctx->f[21]);
        ctx->pc = 0x54F7C8u;
        goto label_54f7c8;
    }
    ctx->pc = 0x54F7C0u;
    {
        const bool branch_taken_0x54f7c0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x54F7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F7C0u;
            // 0x54f7c4: 0x46156d41  sub.s       $f21, $f13, $f21 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[13], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f7c0) {
            ctx->pc = 0x54F7D4u;
            goto label_54f7d4;
        }
    }
    ctx->pc = 0x54F7C8u;
label_54f7c8:
    // 0x54f7c8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54f7c8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f7cc:
    // 0x54f7cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_54f7d0:
    if (ctx->pc == 0x54F7D0u) {
        ctx->pc = 0x54F7D0u;
            // 0x54f7d0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F7D4u;
        goto label_54f7d4;
    }
    ctx->pc = 0x54F7CCu;
    {
        const bool branch_taken_0x54f7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F7CCu;
            // 0x54f7d0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f7cc) {
            ctx->pc = 0x54F7F0u;
            goto label_54f7f0;
        }
    }
    ctx->pc = 0x54F7D4u;
label_54f7d4:
    // 0x54f7d4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x54f7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_54f7d8:
    // 0x54f7d8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x54f7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_54f7dc:
    // 0x54f7dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f7e0:
    // 0x54f7e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f7e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f7e4:
    // 0x54f7e4: 0x0  nop
    ctx->pc = 0x54f7e4u;
    // NOP
label_54f7e8:
    // 0x54f7e8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54f7e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54f7ec:
    // 0x54f7ec: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54f7ecu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54f7f0:
    // 0x54f7f0: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54f7f4:
    if (ctx->pc == 0x54F7F4u) {
        ctx->pc = 0x54F7F4u;
            // 0x54f7f4: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x54F7F8u;
        goto label_54f7f8;
    }
    ctx->pc = 0x54F7F0u;
    {
        const bool branch_taken_0x54f7f0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54f7f0) {
            ctx->pc = 0x54F7F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54F7F0u;
            // 0x54f7f4: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54F804u;
            goto label_54f804;
        }
    }
    ctx->pc = 0x54F7F8u;
label_54f7f8:
    // 0x54f7f8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54f7f8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f7fc:
    // 0x54f7fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_54f800:
    if (ctx->pc == 0x54F800u) {
        ctx->pc = 0x54F800u;
            // 0x54f800: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F804u;
        goto label_54f804;
    }
    ctx->pc = 0x54F7FCu;
    {
        const bool branch_taken_0x54f7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F7FCu;
            // 0x54f800: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f7fc) {
            ctx->pc = 0x54F81Cu;
            goto label_54f81c;
        }
    }
    ctx->pc = 0x54F804u;
label_54f804:
    // 0x54f804: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54f804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54f808:
    // 0x54f808: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f80c:
    // 0x54f80c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f80cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f810:
    // 0x54f810: 0x0  nop
    ctx->pc = 0x54f810u;
    // NOP
label_54f814:
    // 0x54f814: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54f814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54f818:
    // 0x54f818: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54f818u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54f81c:
    // 0x54f81c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54f820:
    // 0x54f820: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54f820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54f824:
    // 0x54f824: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54f824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54f828:
    // 0x54f828: 0x24a5e080  addiu       $a1, $a1, -0x1F80
    ctx->pc = 0x54f828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959232));
label_54f82c:
    // 0x54f82c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54f82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54f830:
    // 0x54f830: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54f830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54f834:
    // 0x54f834: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x54f834u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_54f838:
    // 0x54f838: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54f838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54f83c:
    // 0x54f83c: 0xc0bc284  jal         func_2F0A10
label_54f840:
    if (ctx->pc == 0x54F840u) {
        ctx->pc = 0x54F840u;
            // 0x54f840: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x54F844u;
        goto label_54f844;
    }
    ctx->pc = 0x54F83Cu;
    SET_GPR_U32(ctx, 31, 0x54F844u);
    ctx->pc = 0x54F840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54F83Cu;
            // 0x54f840: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F844u; }
        if (ctx->pc != 0x54F844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F844u; }
        if (ctx->pc != 0x54F844u) { return; }
    }
    ctx->pc = 0x54F844u;
label_54f844:
    // 0x54f844: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x54f844u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f848:
    // 0x54f848: 0x0  nop
    ctx->pc = 0x54f848u;
    // NOP
label_54f84c:
    // 0x54f84c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54f84cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_54f850:
    // 0x54f850: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54f850u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f854:
    // 0x54f854: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_54f858:
    if (ctx->pc == 0x54F858u) {
        ctx->pc = 0x54F858u;
            // 0x54f858: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F85Cu;
        goto label_54f85c;
    }
    ctx->pc = 0x54F854u;
    {
        const bool branch_taken_0x54f854 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x54F858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F854u;
            // 0x54f858: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f854) {
            ctx->pc = 0x54F868u;
            goto label_54f868;
        }
    }
    ctx->pc = 0x54F85Cu;
label_54f85c:
    // 0x54f85c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54f85cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f860:
    // 0x54f860: 0x10000008  b           . + 4 + (0x8 << 2)
label_54f864:
    if (ctx->pc == 0x54F864u) {
        ctx->pc = 0x54F864u;
            // 0x54f864: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F868u;
        goto label_54f868;
    }
    ctx->pc = 0x54F860u;
    {
        const bool branch_taken_0x54f860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F860u;
            // 0x54f864: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f860) {
            ctx->pc = 0x54F884u;
            goto label_54f884;
        }
    }
    ctx->pc = 0x54F868u;
label_54f868:
    // 0x54f868: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x54f868u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_54f86c:
    // 0x54f86c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x54f86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_54f870:
    // 0x54f870: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f874:
    // 0x54f874: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f878:
    // 0x54f878: 0x0  nop
    ctx->pc = 0x54f878u;
    // NOP
label_54f87c:
    // 0x54f87c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54f87cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54f880:
    // 0x54f880: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54f880u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54f884:
    // 0x54f884: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54f888:
    if (ctx->pc == 0x54F888u) {
        ctx->pc = 0x54F888u;
            // 0x54f888: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x54F88Cu;
        goto label_54f88c;
    }
    ctx->pc = 0x54F884u;
    {
        const bool branch_taken_0x54f884 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54f884) {
            ctx->pc = 0x54F888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54F884u;
            // 0x54f888: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54F898u;
            goto label_54f898;
        }
    }
    ctx->pc = 0x54F88Cu;
label_54f88c:
    // 0x54f88c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54f88cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f890:
    // 0x54f890: 0x10000007  b           . + 4 + (0x7 << 2)
label_54f894:
    if (ctx->pc == 0x54F894u) {
        ctx->pc = 0x54F894u;
            // 0x54f894: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F898u;
        goto label_54f898;
    }
    ctx->pc = 0x54F890u;
    {
        const bool branch_taken_0x54f890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F890u;
            // 0x54f894: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f890) {
            ctx->pc = 0x54F8B0u;
            goto label_54f8b0;
        }
    }
    ctx->pc = 0x54F898u;
label_54f898:
    // 0x54f898: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54f898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54f89c:
    // 0x54f89c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f8a0:
    // 0x54f8a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f8a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f8a4:
    // 0x54f8a4: 0x0  nop
    ctx->pc = 0x54f8a4u;
    // NOP
label_54f8a8:
    // 0x54f8a8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54f8a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54f8ac:
    // 0x54f8ac: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54f8acu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54f8b0:
    // 0x54f8b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54f8b4:
    // 0x54f8b4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54f8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54f8b8:
    // 0x54f8b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54f8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54f8bc:
    // 0x54f8bc: 0x24a5e080  addiu       $a1, $a1, -0x1F80
    ctx->pc = 0x54f8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959232));
label_54f8c0:
    // 0x54f8c0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54f8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54f8c4:
    // 0x54f8c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54f8c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54f8c8:
    // 0x54f8c8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x54f8c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_54f8cc:
    // 0x54f8cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54f8ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54f8d0:
    // 0x54f8d0: 0xc0bc284  jal         func_2F0A10
label_54f8d4:
    if (ctx->pc == 0x54F8D4u) {
        ctx->pc = 0x54F8D4u;
            // 0x54f8d4: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x54F8D8u;
        goto label_54f8d8;
    }
    ctx->pc = 0x54F8D0u;
    SET_GPR_U32(ctx, 31, 0x54F8D8u);
    ctx->pc = 0x54F8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54F8D0u;
            // 0x54f8d4: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F8D8u; }
        if (ctx->pc != 0x54F8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F8D8u; }
        if (ctx->pc != 0x54F8D8u) { return; }
    }
    ctx->pc = 0x54F8D8u;
label_54f8d8:
    // 0x54f8d8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x54f8d8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f8dc:
    // 0x54f8dc: 0x0  nop
    ctx->pc = 0x54f8dcu;
    // NOP
label_54f8e0:
    // 0x54f8e0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x54f8e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_54f8e4:
    // 0x54f8e4: 0x3c150067  lui         $s5, 0x67
    ctx->pc = 0x54f8e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)103 << 16));
label_54f8e8:
    // 0x54f8e8: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_54f8ec:
    if (ctx->pc == 0x54F8ECu) {
        ctx->pc = 0x54F8ECu;
            // 0x54f8ec: 0x26b5e0a0  addiu       $s5, $s5, -0x1F60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959264));
        ctx->pc = 0x54F8F0u;
        goto label_54f8f0;
    }
    ctx->pc = 0x54F8E8u;
    {
        const bool branch_taken_0x54f8e8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x54F8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F8E8u;
            // 0x54f8ec: 0x26b5e0a0  addiu       $s5, $s5, -0x1F60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f8e8) {
            ctx->pc = 0x54F8FCu;
            goto label_54f8fc;
        }
    }
    ctx->pc = 0x54F8F0u;
label_54f8f0:
    // 0x54f8f0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54f8f0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f8f4:
    // 0x54f8f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_54f8f8:
    if (ctx->pc == 0x54F8F8u) {
        ctx->pc = 0x54F8F8u;
            // 0x54f8f8: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F8FCu;
        goto label_54f8fc;
    }
    ctx->pc = 0x54F8F4u;
    {
        const bool branch_taken_0x54f8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F8F4u;
            // 0x54f8f8: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f8f4) {
            ctx->pc = 0x54F918u;
            goto label_54f918;
        }
    }
    ctx->pc = 0x54F8FCu;
label_54f8fc:
    // 0x54f8fc: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x54f8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_54f900:
    // 0x54f900: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x54f900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_54f904:
    // 0x54f904: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f908:
    // 0x54f908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f90c:
    // 0x54f90c: 0x0  nop
    ctx->pc = 0x54f90cu;
    // NOP
label_54f910:
    // 0x54f910: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54f910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54f914:
    // 0x54f914: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54f914u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54f918:
    // 0x54f918: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54f91c:
    if (ctx->pc == 0x54F91Cu) {
        ctx->pc = 0x54F91Cu;
            // 0x54f91c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x54F920u;
        goto label_54f920;
    }
    ctx->pc = 0x54F918u;
    {
        const bool branch_taken_0x54f918 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54f918) {
            ctx->pc = 0x54F91Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54F918u;
            // 0x54f91c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54F92Cu;
            goto label_54f92c;
        }
    }
    ctx->pc = 0x54F920u;
label_54f920:
    // 0x54f920: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54f920u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f924:
    // 0x54f924: 0x10000007  b           . + 4 + (0x7 << 2)
label_54f928:
    if (ctx->pc == 0x54F928u) {
        ctx->pc = 0x54F928u;
            // 0x54f928: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F92Cu;
        goto label_54f92c;
    }
    ctx->pc = 0x54F924u;
    {
        const bool branch_taken_0x54f924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F924u;
            // 0x54f928: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f924) {
            ctx->pc = 0x54F944u;
            goto label_54f944;
        }
    }
    ctx->pc = 0x54F92Cu;
label_54f92c:
    // 0x54f92c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54f92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54f930:
    // 0x54f930: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f934:
    // 0x54f934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f938:
    // 0x54f938: 0x0  nop
    ctx->pc = 0x54f938u;
    // NOP
label_54f93c:
    // 0x54f93c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54f93cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54f940:
    // 0x54f940: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54f940u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54f944:
    // 0x54f944: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54f944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54f948:
    // 0x54f948: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54f948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54f94c:
    // 0x54f94c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54f94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54f950:
    // 0x54f950: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x54f950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_54f954:
    // 0x54f954: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x54f954u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_54f958:
    // 0x54f958: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54f958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54f95c:
    // 0x54f95c: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x54f95cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
label_54f960:
    // 0x54f960: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54f960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54f964:
    // 0x54f964: 0xc0bc284  jal         func_2F0A10
label_54f968:
    if (ctx->pc == 0x54F968u) {
        ctx->pc = 0x54F968u;
            // 0x54f968: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x54F96Cu;
        goto label_54f96c;
    }
    ctx->pc = 0x54F964u;
    SET_GPR_U32(ctx, 31, 0x54F96Cu);
    ctx->pc = 0x54F968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54F964u;
            // 0x54f968: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F96Cu; }
        if (ctx->pc != 0x54F96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F96Cu; }
        if (ctx->pc != 0x54F96Cu) { return; }
    }
    ctx->pc = 0x54F96Cu;
label_54f96c:
    // 0x54f96c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x54f96cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f970:
    // 0x54f970: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_54f974:
    if (ctx->pc == 0x54F974u) {
        ctx->pc = 0x54F974u;
            // 0x54f974: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F978u;
        goto label_54f978;
    }
    ctx->pc = 0x54F970u;
    {
        const bool branch_taken_0x54f970 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x54F974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F970u;
            // 0x54f974: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f970) {
            ctx->pc = 0x54F984u;
            goto label_54f984;
        }
    }
    ctx->pc = 0x54F978u;
label_54f978:
    // 0x54f978: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54f978u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f97c:
    // 0x54f97c: 0x10000008  b           . + 4 + (0x8 << 2)
label_54f980:
    if (ctx->pc == 0x54F980u) {
        ctx->pc = 0x54F980u;
            // 0x54f980: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F984u;
        goto label_54f984;
    }
    ctx->pc = 0x54F97Cu;
    {
        const bool branch_taken_0x54f97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F97Cu;
            // 0x54f980: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f97c) {
            ctx->pc = 0x54F9A0u;
            goto label_54f9a0;
        }
    }
    ctx->pc = 0x54F984u;
label_54f984:
    // 0x54f984: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x54f984u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_54f988:
    // 0x54f988: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x54f988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_54f98c:
    // 0x54f98c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f990:
    // 0x54f990: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f994:
    // 0x54f994: 0x0  nop
    ctx->pc = 0x54f994u;
    // NOP
label_54f998:
    // 0x54f998: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54f998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54f99c:
    // 0x54f99c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54f99cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54f9a0:
    // 0x54f9a0: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54f9a4:
    if (ctx->pc == 0x54F9A4u) {
        ctx->pc = 0x54F9A4u;
            // 0x54f9a4: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x54F9A8u;
        goto label_54f9a8;
    }
    ctx->pc = 0x54F9A0u;
    {
        const bool branch_taken_0x54f9a0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54f9a0) {
            ctx->pc = 0x54F9A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54F9A0u;
            // 0x54f9a4: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54F9B4u;
            goto label_54f9b4;
        }
    }
    ctx->pc = 0x54F9A8u;
label_54f9a8:
    // 0x54f9a8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54f9a8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f9ac:
    // 0x54f9ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_54f9b0:
    if (ctx->pc == 0x54F9B0u) {
        ctx->pc = 0x54F9B0u;
            // 0x54f9b0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F9B4u;
        goto label_54f9b4;
    }
    ctx->pc = 0x54F9ACu;
    {
        const bool branch_taken_0x54f9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F9ACu;
            // 0x54f9b0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f9ac) {
            ctx->pc = 0x54F9CCu;
            goto label_54f9cc;
        }
    }
    ctx->pc = 0x54F9B4u;
label_54f9b4:
    // 0x54f9b4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54f9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54f9b8:
    // 0x54f9b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f9bc:
    // 0x54f9bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f9bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f9c0:
    // 0x54f9c0: 0x0  nop
    ctx->pc = 0x54f9c0u;
    // NOP
label_54f9c4:
    // 0x54f9c4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54f9c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54f9c8:
    // 0x54f9c8: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54f9c8u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54f9cc:
    // 0x54f9cc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54f9d0:
    // 0x54f9d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x54f9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_54f9d4:
    // 0x54f9d4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54f9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54f9d8:
    // 0x54f9d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54f9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54f9dc:
    // 0x54f9dc: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x54f9dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_54f9e0:
    // 0x54f9e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54f9e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54f9e4:
    // 0x54f9e4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x54f9e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_54f9e8:
    // 0x54f9e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54f9e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54f9ec:
    // 0x54f9ec: 0xc0bc284  jal         func_2F0A10
label_54f9f0:
    if (ctx->pc == 0x54F9F0u) {
        ctx->pc = 0x54F9F0u;
            // 0x54f9f0: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x54F9F4u;
        goto label_54f9f4;
    }
    ctx->pc = 0x54F9ECu;
    SET_GPR_U32(ctx, 31, 0x54F9F4u);
    ctx->pc = 0x54F9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54F9ECu;
            // 0x54f9f0: 0x4600abc6  mov.s       $f15, $f21 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F9F4u; }
        if (ctx->pc != 0x54F9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F9F4u; }
        if (ctx->pc != 0x54F9F4u) { return; }
    }
    ctx->pc = 0x54F9F4u;
label_54f9f4:
    // 0x54f9f4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x54f9f4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f9f8:
    // 0x54f9f8: 0x0  nop
    ctx->pc = 0x54f9f8u;
    // NOP
label_54f9fc:
    // 0x54f9fc: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x54f9fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_54fa00:
    // 0x54fa00: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x54fa00u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
label_54fa04:
    // 0x54fa04: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_54fa08:
    if (ctx->pc == 0x54FA08u) {
        ctx->pc = 0x54FA08u;
            // 0x54fa08: 0x2694e090  addiu       $s4, $s4, -0x1F70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959248));
        ctx->pc = 0x54FA0Cu;
        goto label_54fa0c;
    }
    ctx->pc = 0x54FA04u;
    {
        const bool branch_taken_0x54fa04 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x54FA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FA04u;
            // 0x54fa08: 0x2694e090  addiu       $s4, $s4, -0x1F70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54fa04) {
            ctx->pc = 0x54FA18u;
            goto label_54fa18;
        }
    }
    ctx->pc = 0x54FA0Cu;
label_54fa0c:
    // 0x54fa0c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54fa0cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fa10:
    // 0x54fa10: 0x10000008  b           . + 4 + (0x8 << 2)
label_54fa14:
    if (ctx->pc == 0x54FA14u) {
        ctx->pc = 0x54FA14u;
            // 0x54fa14: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54FA18u;
        goto label_54fa18;
    }
    ctx->pc = 0x54FA10u;
    {
        const bool branch_taken_0x54fa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54FA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FA10u;
            // 0x54fa14: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54fa10) {
            ctx->pc = 0x54FA34u;
            goto label_54fa34;
        }
    }
    ctx->pc = 0x54FA18u;
label_54fa18:
    // 0x54fa18: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x54fa18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_54fa1c:
    // 0x54fa1c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x54fa1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_54fa20:
    // 0x54fa20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54fa20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54fa24:
    // 0x54fa24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54fa24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fa28:
    // 0x54fa28: 0x0  nop
    ctx->pc = 0x54fa28u;
    // NOP
label_54fa2c:
    // 0x54fa2c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54fa2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54fa30:
    // 0x54fa30: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54fa30u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54fa34:
    // 0x54fa34: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54fa38:
    if (ctx->pc == 0x54FA38u) {
        ctx->pc = 0x54FA38u;
            // 0x54fa38: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x54FA3Cu;
        goto label_54fa3c;
    }
    ctx->pc = 0x54FA34u;
    {
        const bool branch_taken_0x54fa34 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54fa34) {
            ctx->pc = 0x54FA38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54FA34u;
            // 0x54fa38: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54FA48u;
            goto label_54fa48;
        }
    }
    ctx->pc = 0x54FA3Cu;
label_54fa3c:
    // 0x54fa3c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54fa3cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fa40:
    // 0x54fa40: 0x10000007  b           . + 4 + (0x7 << 2)
label_54fa44:
    if (ctx->pc == 0x54FA44u) {
        ctx->pc = 0x54FA44u;
            // 0x54fa44: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54FA48u;
        goto label_54fa48;
    }
    ctx->pc = 0x54FA40u;
    {
        const bool branch_taken_0x54fa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54FA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FA40u;
            // 0x54fa44: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54fa40) {
            ctx->pc = 0x54FA60u;
            goto label_54fa60;
        }
    }
    ctx->pc = 0x54FA48u;
label_54fa48:
    // 0x54fa48: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54fa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54fa4c:
    // 0x54fa4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54fa4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54fa50:
    // 0x54fa50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54fa50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fa54:
    // 0x54fa54: 0x0  nop
    ctx->pc = 0x54fa54u;
    // NOP
label_54fa58:
    // 0x54fa58: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54fa58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54fa5c:
    // 0x54fa5c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54fa5cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54fa60:
    // 0x54fa60: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54fa64:
    // 0x54fa64: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54fa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54fa68:
    // 0x54fa68: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x54fa68u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_54fa6c:
    // 0x54fa6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x54fa6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_54fa70:
    // 0x54fa70: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54fa70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54fa74:
    // 0x54fa74: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54fa74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54fa78:
    // 0x54fa78: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x54fa78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_54fa7c:
    // 0x54fa7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54fa7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54fa80:
    // 0x54fa80: 0xc0bc284  jal         func_2F0A10
label_54fa84:
    if (ctx->pc == 0x54FA84u) {
        ctx->pc = 0x54FA84u;
            // 0x54fa84: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x54FA88u;
        goto label_54fa88;
    }
    ctx->pc = 0x54FA80u;
    SET_GPR_U32(ctx, 31, 0x54FA88u);
    ctx->pc = 0x54FA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54FA80u;
            // 0x54fa84: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54FA88u; }
        if (ctx->pc != 0x54FA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54FA88u; }
        if (ctx->pc != 0x54FA88u) { return; }
    }
    ctx->pc = 0x54FA88u;
label_54fa88:
    // 0x54fa88: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54fa88u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fa8c:
    // 0x54fa8c: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_54fa90:
    if (ctx->pc == 0x54FA90u) {
        ctx->pc = 0x54FA90u;
            // 0x54fa90: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54FA94u;
        goto label_54fa94;
    }
    ctx->pc = 0x54FA8Cu;
    {
        const bool branch_taken_0x54fa8c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x54FA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FA8Cu;
            // 0x54fa90: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54fa8c) {
            ctx->pc = 0x54FAA0u;
            goto label_54faa0;
        }
    }
    ctx->pc = 0x54FA94u;
label_54fa94:
    // 0x54fa94: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54fa94u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fa98:
    // 0x54fa98: 0x10000008  b           . + 4 + (0x8 << 2)
label_54fa9c:
    if (ctx->pc == 0x54FA9Cu) {
        ctx->pc = 0x54FA9Cu;
            // 0x54fa9c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54FAA0u;
        goto label_54faa0;
    }
    ctx->pc = 0x54FA98u;
    {
        const bool branch_taken_0x54fa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54FA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FA98u;
            // 0x54fa9c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54fa98) {
            ctx->pc = 0x54FABCu;
            goto label_54fabc;
        }
    }
    ctx->pc = 0x54FAA0u;
label_54faa0:
    // 0x54faa0: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x54faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_54faa4:
    // 0x54faa4: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x54faa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_54faa8:
    // 0x54faa8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54faa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54faac:
    // 0x54faac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54faacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fab0:
    // 0x54fab0: 0x0  nop
    ctx->pc = 0x54fab0u;
    // NOP
label_54fab4:
    // 0x54fab4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54fab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54fab8:
    // 0x54fab8: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54fab8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54fabc:
    // 0x54fabc: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54fac0:
    if (ctx->pc == 0x54FAC0u) {
        ctx->pc = 0x54FAC0u;
            // 0x54fac0: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x54FAC4u;
        goto label_54fac4;
    }
    ctx->pc = 0x54FABCu;
    {
        const bool branch_taken_0x54fabc = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54fabc) {
            ctx->pc = 0x54FAC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54FABCu;
            // 0x54fac0: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54FAD0u;
            goto label_54fad0;
        }
    }
    ctx->pc = 0x54FAC4u;
label_54fac4:
    // 0x54fac4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54fac4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fac8:
    // 0x54fac8: 0x10000007  b           . + 4 + (0x7 << 2)
label_54facc:
    if (ctx->pc == 0x54FACCu) {
        ctx->pc = 0x54FACCu;
            // 0x54facc: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54FAD0u;
        goto label_54fad0;
    }
    ctx->pc = 0x54FAC8u;
    {
        const bool branch_taken_0x54fac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54FACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FAC8u;
            // 0x54facc: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54fac8) {
            ctx->pc = 0x54FAE8u;
            goto label_54fae8;
        }
    }
    ctx->pc = 0x54FAD0u;
label_54fad0:
    // 0x54fad0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54fad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54fad4:
    // 0x54fad4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54fad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54fad8:
    // 0x54fad8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54fad8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54fadc:
    // 0x54fadc: 0x0  nop
    ctx->pc = 0x54fadcu;
    // NOP
label_54fae0:
    // 0x54fae0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54fae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54fae4:
    // 0x54fae4: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54fae4u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54fae8:
    // 0x54fae8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54faec:
    // 0x54faec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x54faecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_54faf0:
    // 0x54faf0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x54faf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_54faf4:
    // 0x54faf4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x54faf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_54faf8:
    // 0x54faf8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x54faf8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_54fafc:
    // 0x54fafc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54fafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54fb00:
    // 0x54fb00: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x54fb00u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
label_54fb04:
    // 0x54fb04: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54fb04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54fb08:
    // 0x54fb08: 0xc0bc284  jal         func_2F0A10
label_54fb0c:
    if (ctx->pc == 0x54FB0Cu) {
        ctx->pc = 0x54FB0Cu;
            // 0x54fb0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54FB10u;
        goto label_54fb10;
    }
    ctx->pc = 0x54FB08u;
    SET_GPR_U32(ctx, 31, 0x54FB10u);
    ctx->pc = 0x54FB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54FB08u;
            // 0x54fb0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54FB10u; }
        if (ctx->pc != 0x54FB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54FB10u; }
        if (ctx->pc != 0x54FB10u) { return; }
    }
    ctx->pc = 0x54FB10u;
label_54fb10:
    // 0x54fb10: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54fb14:
    // 0x54fb14: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54fb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54fb18:
    // 0x54fb18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54fb18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54fb1c:
    // 0x54fb1c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x54fb1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_54fb20:
    // 0x54fb20: 0x320f809  jalr        $t9
label_54fb24:
    if (ctx->pc == 0x54FB24u) {
        ctx->pc = 0x54FB28u;
        goto label_54fb28;
    }
    ctx->pc = 0x54FB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54FB28u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54FB28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54FB28u; }
            if (ctx->pc != 0x54FB28u) { return; }
        }
        }
    }
    ctx->pc = 0x54FB28u;
label_54fb28:
    // 0x54fb28: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x54fb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_54fb2c:
    // 0x54fb2c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x54fb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_54fb30:
    // 0x54fb30: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x54fb30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_54fb34:
    // 0x54fb34: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x54fb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_54fb38:
    // 0x54fb38: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x54fb38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_54fb3c:
    // 0x54fb3c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x54fb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_54fb40:
    // 0x54fb40: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x54fb40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_54fb44:
    // 0x54fb44: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x54fb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54fb48:
    // 0x54fb48: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x54fb48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_54fb4c:
    // 0x54fb4c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x54fb4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_54fb50:
    // 0x54fb50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x54fb50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_54fb54:
    // 0x54fb54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x54fb54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_54fb58:
    // 0x54fb58: 0x3e00008  jr          $ra
label_54fb5c:
    if (ctx->pc == 0x54FB5Cu) {
        ctx->pc = 0x54FB5Cu;
            // 0x54fb5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x54FB60u;
        goto label_fallthrough_0x54fb58;
    }
    ctx->pc = 0x54FB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54FB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54FB58u;
            // 0x54fb5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x54fb58:
    ctx->pc = 0x54FB60u;
}
