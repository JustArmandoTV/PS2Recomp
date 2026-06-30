#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029F550
// Address: 0x29f550 - 0x29fd10
void sub_0029F550_0x29f550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F550_0x29f550");
#endif

    switch (ctx->pc) {
        case 0x29f550u: goto label_29f550;
        case 0x29f554u: goto label_29f554;
        case 0x29f558u: goto label_29f558;
        case 0x29f55cu: goto label_29f55c;
        case 0x29f560u: goto label_29f560;
        case 0x29f564u: goto label_29f564;
        case 0x29f568u: goto label_29f568;
        case 0x29f56cu: goto label_29f56c;
        case 0x29f570u: goto label_29f570;
        case 0x29f574u: goto label_29f574;
        case 0x29f578u: goto label_29f578;
        case 0x29f57cu: goto label_29f57c;
        case 0x29f580u: goto label_29f580;
        case 0x29f584u: goto label_29f584;
        case 0x29f588u: goto label_29f588;
        case 0x29f58cu: goto label_29f58c;
        case 0x29f590u: goto label_29f590;
        case 0x29f594u: goto label_29f594;
        case 0x29f598u: goto label_29f598;
        case 0x29f59cu: goto label_29f59c;
        case 0x29f5a0u: goto label_29f5a0;
        case 0x29f5a4u: goto label_29f5a4;
        case 0x29f5a8u: goto label_29f5a8;
        case 0x29f5acu: goto label_29f5ac;
        case 0x29f5b0u: goto label_29f5b0;
        case 0x29f5b4u: goto label_29f5b4;
        case 0x29f5b8u: goto label_29f5b8;
        case 0x29f5bcu: goto label_29f5bc;
        case 0x29f5c0u: goto label_29f5c0;
        case 0x29f5c4u: goto label_29f5c4;
        case 0x29f5c8u: goto label_29f5c8;
        case 0x29f5ccu: goto label_29f5cc;
        case 0x29f5d0u: goto label_29f5d0;
        case 0x29f5d4u: goto label_29f5d4;
        case 0x29f5d8u: goto label_29f5d8;
        case 0x29f5dcu: goto label_29f5dc;
        case 0x29f5e0u: goto label_29f5e0;
        case 0x29f5e4u: goto label_29f5e4;
        case 0x29f5e8u: goto label_29f5e8;
        case 0x29f5ecu: goto label_29f5ec;
        case 0x29f5f0u: goto label_29f5f0;
        case 0x29f5f4u: goto label_29f5f4;
        case 0x29f5f8u: goto label_29f5f8;
        case 0x29f5fcu: goto label_29f5fc;
        case 0x29f600u: goto label_29f600;
        case 0x29f604u: goto label_29f604;
        case 0x29f608u: goto label_29f608;
        case 0x29f60cu: goto label_29f60c;
        case 0x29f610u: goto label_29f610;
        case 0x29f614u: goto label_29f614;
        case 0x29f618u: goto label_29f618;
        case 0x29f61cu: goto label_29f61c;
        case 0x29f620u: goto label_29f620;
        case 0x29f624u: goto label_29f624;
        case 0x29f628u: goto label_29f628;
        case 0x29f62cu: goto label_29f62c;
        case 0x29f630u: goto label_29f630;
        case 0x29f634u: goto label_29f634;
        case 0x29f638u: goto label_29f638;
        case 0x29f63cu: goto label_29f63c;
        case 0x29f640u: goto label_29f640;
        case 0x29f644u: goto label_29f644;
        case 0x29f648u: goto label_29f648;
        case 0x29f64cu: goto label_29f64c;
        case 0x29f650u: goto label_29f650;
        case 0x29f654u: goto label_29f654;
        case 0x29f658u: goto label_29f658;
        case 0x29f65cu: goto label_29f65c;
        case 0x29f660u: goto label_29f660;
        case 0x29f664u: goto label_29f664;
        case 0x29f668u: goto label_29f668;
        case 0x29f66cu: goto label_29f66c;
        case 0x29f670u: goto label_29f670;
        case 0x29f674u: goto label_29f674;
        case 0x29f678u: goto label_29f678;
        case 0x29f67cu: goto label_29f67c;
        case 0x29f680u: goto label_29f680;
        case 0x29f684u: goto label_29f684;
        case 0x29f688u: goto label_29f688;
        case 0x29f68cu: goto label_29f68c;
        case 0x29f690u: goto label_29f690;
        case 0x29f694u: goto label_29f694;
        case 0x29f698u: goto label_29f698;
        case 0x29f69cu: goto label_29f69c;
        case 0x29f6a0u: goto label_29f6a0;
        case 0x29f6a4u: goto label_29f6a4;
        case 0x29f6a8u: goto label_29f6a8;
        case 0x29f6acu: goto label_29f6ac;
        case 0x29f6b0u: goto label_29f6b0;
        case 0x29f6b4u: goto label_29f6b4;
        case 0x29f6b8u: goto label_29f6b8;
        case 0x29f6bcu: goto label_29f6bc;
        case 0x29f6c0u: goto label_29f6c0;
        case 0x29f6c4u: goto label_29f6c4;
        case 0x29f6c8u: goto label_29f6c8;
        case 0x29f6ccu: goto label_29f6cc;
        case 0x29f6d0u: goto label_29f6d0;
        case 0x29f6d4u: goto label_29f6d4;
        case 0x29f6d8u: goto label_29f6d8;
        case 0x29f6dcu: goto label_29f6dc;
        case 0x29f6e0u: goto label_29f6e0;
        case 0x29f6e4u: goto label_29f6e4;
        case 0x29f6e8u: goto label_29f6e8;
        case 0x29f6ecu: goto label_29f6ec;
        case 0x29f6f0u: goto label_29f6f0;
        case 0x29f6f4u: goto label_29f6f4;
        case 0x29f6f8u: goto label_29f6f8;
        case 0x29f6fcu: goto label_29f6fc;
        case 0x29f700u: goto label_29f700;
        case 0x29f704u: goto label_29f704;
        case 0x29f708u: goto label_29f708;
        case 0x29f70cu: goto label_29f70c;
        case 0x29f710u: goto label_29f710;
        case 0x29f714u: goto label_29f714;
        case 0x29f718u: goto label_29f718;
        case 0x29f71cu: goto label_29f71c;
        case 0x29f720u: goto label_29f720;
        case 0x29f724u: goto label_29f724;
        case 0x29f728u: goto label_29f728;
        case 0x29f72cu: goto label_29f72c;
        case 0x29f730u: goto label_29f730;
        case 0x29f734u: goto label_29f734;
        case 0x29f738u: goto label_29f738;
        case 0x29f73cu: goto label_29f73c;
        case 0x29f740u: goto label_29f740;
        case 0x29f744u: goto label_29f744;
        case 0x29f748u: goto label_29f748;
        case 0x29f74cu: goto label_29f74c;
        case 0x29f750u: goto label_29f750;
        case 0x29f754u: goto label_29f754;
        case 0x29f758u: goto label_29f758;
        case 0x29f75cu: goto label_29f75c;
        case 0x29f760u: goto label_29f760;
        case 0x29f764u: goto label_29f764;
        case 0x29f768u: goto label_29f768;
        case 0x29f76cu: goto label_29f76c;
        case 0x29f770u: goto label_29f770;
        case 0x29f774u: goto label_29f774;
        case 0x29f778u: goto label_29f778;
        case 0x29f77cu: goto label_29f77c;
        case 0x29f780u: goto label_29f780;
        case 0x29f784u: goto label_29f784;
        case 0x29f788u: goto label_29f788;
        case 0x29f78cu: goto label_29f78c;
        case 0x29f790u: goto label_29f790;
        case 0x29f794u: goto label_29f794;
        case 0x29f798u: goto label_29f798;
        case 0x29f79cu: goto label_29f79c;
        case 0x29f7a0u: goto label_29f7a0;
        case 0x29f7a4u: goto label_29f7a4;
        case 0x29f7a8u: goto label_29f7a8;
        case 0x29f7acu: goto label_29f7ac;
        case 0x29f7b0u: goto label_29f7b0;
        case 0x29f7b4u: goto label_29f7b4;
        case 0x29f7b8u: goto label_29f7b8;
        case 0x29f7bcu: goto label_29f7bc;
        case 0x29f7c0u: goto label_29f7c0;
        case 0x29f7c4u: goto label_29f7c4;
        case 0x29f7c8u: goto label_29f7c8;
        case 0x29f7ccu: goto label_29f7cc;
        case 0x29f7d0u: goto label_29f7d0;
        case 0x29f7d4u: goto label_29f7d4;
        case 0x29f7d8u: goto label_29f7d8;
        case 0x29f7dcu: goto label_29f7dc;
        case 0x29f7e0u: goto label_29f7e0;
        case 0x29f7e4u: goto label_29f7e4;
        case 0x29f7e8u: goto label_29f7e8;
        case 0x29f7ecu: goto label_29f7ec;
        case 0x29f7f0u: goto label_29f7f0;
        case 0x29f7f4u: goto label_29f7f4;
        case 0x29f7f8u: goto label_29f7f8;
        case 0x29f7fcu: goto label_29f7fc;
        case 0x29f800u: goto label_29f800;
        case 0x29f804u: goto label_29f804;
        case 0x29f808u: goto label_29f808;
        case 0x29f80cu: goto label_29f80c;
        case 0x29f810u: goto label_29f810;
        case 0x29f814u: goto label_29f814;
        case 0x29f818u: goto label_29f818;
        case 0x29f81cu: goto label_29f81c;
        case 0x29f820u: goto label_29f820;
        case 0x29f824u: goto label_29f824;
        case 0x29f828u: goto label_29f828;
        case 0x29f82cu: goto label_29f82c;
        case 0x29f830u: goto label_29f830;
        case 0x29f834u: goto label_29f834;
        case 0x29f838u: goto label_29f838;
        case 0x29f83cu: goto label_29f83c;
        case 0x29f840u: goto label_29f840;
        case 0x29f844u: goto label_29f844;
        case 0x29f848u: goto label_29f848;
        case 0x29f84cu: goto label_29f84c;
        case 0x29f850u: goto label_29f850;
        case 0x29f854u: goto label_29f854;
        case 0x29f858u: goto label_29f858;
        case 0x29f85cu: goto label_29f85c;
        case 0x29f860u: goto label_29f860;
        case 0x29f864u: goto label_29f864;
        case 0x29f868u: goto label_29f868;
        case 0x29f86cu: goto label_29f86c;
        case 0x29f870u: goto label_29f870;
        case 0x29f874u: goto label_29f874;
        case 0x29f878u: goto label_29f878;
        case 0x29f87cu: goto label_29f87c;
        case 0x29f880u: goto label_29f880;
        case 0x29f884u: goto label_29f884;
        case 0x29f888u: goto label_29f888;
        case 0x29f88cu: goto label_29f88c;
        case 0x29f890u: goto label_29f890;
        case 0x29f894u: goto label_29f894;
        case 0x29f898u: goto label_29f898;
        case 0x29f89cu: goto label_29f89c;
        case 0x29f8a0u: goto label_29f8a0;
        case 0x29f8a4u: goto label_29f8a4;
        case 0x29f8a8u: goto label_29f8a8;
        case 0x29f8acu: goto label_29f8ac;
        case 0x29f8b0u: goto label_29f8b0;
        case 0x29f8b4u: goto label_29f8b4;
        case 0x29f8b8u: goto label_29f8b8;
        case 0x29f8bcu: goto label_29f8bc;
        case 0x29f8c0u: goto label_29f8c0;
        case 0x29f8c4u: goto label_29f8c4;
        case 0x29f8c8u: goto label_29f8c8;
        case 0x29f8ccu: goto label_29f8cc;
        case 0x29f8d0u: goto label_29f8d0;
        case 0x29f8d4u: goto label_29f8d4;
        case 0x29f8d8u: goto label_29f8d8;
        case 0x29f8dcu: goto label_29f8dc;
        case 0x29f8e0u: goto label_29f8e0;
        case 0x29f8e4u: goto label_29f8e4;
        case 0x29f8e8u: goto label_29f8e8;
        case 0x29f8ecu: goto label_29f8ec;
        case 0x29f8f0u: goto label_29f8f0;
        case 0x29f8f4u: goto label_29f8f4;
        case 0x29f8f8u: goto label_29f8f8;
        case 0x29f8fcu: goto label_29f8fc;
        case 0x29f900u: goto label_29f900;
        case 0x29f904u: goto label_29f904;
        case 0x29f908u: goto label_29f908;
        case 0x29f90cu: goto label_29f90c;
        case 0x29f910u: goto label_29f910;
        case 0x29f914u: goto label_29f914;
        case 0x29f918u: goto label_29f918;
        case 0x29f91cu: goto label_29f91c;
        case 0x29f920u: goto label_29f920;
        case 0x29f924u: goto label_29f924;
        case 0x29f928u: goto label_29f928;
        case 0x29f92cu: goto label_29f92c;
        case 0x29f930u: goto label_29f930;
        case 0x29f934u: goto label_29f934;
        case 0x29f938u: goto label_29f938;
        case 0x29f93cu: goto label_29f93c;
        case 0x29f940u: goto label_29f940;
        case 0x29f944u: goto label_29f944;
        case 0x29f948u: goto label_29f948;
        case 0x29f94cu: goto label_29f94c;
        case 0x29f950u: goto label_29f950;
        case 0x29f954u: goto label_29f954;
        case 0x29f958u: goto label_29f958;
        case 0x29f95cu: goto label_29f95c;
        case 0x29f960u: goto label_29f960;
        case 0x29f964u: goto label_29f964;
        case 0x29f968u: goto label_29f968;
        case 0x29f96cu: goto label_29f96c;
        case 0x29f970u: goto label_29f970;
        case 0x29f974u: goto label_29f974;
        case 0x29f978u: goto label_29f978;
        case 0x29f97cu: goto label_29f97c;
        case 0x29f980u: goto label_29f980;
        case 0x29f984u: goto label_29f984;
        case 0x29f988u: goto label_29f988;
        case 0x29f98cu: goto label_29f98c;
        case 0x29f990u: goto label_29f990;
        case 0x29f994u: goto label_29f994;
        case 0x29f998u: goto label_29f998;
        case 0x29f99cu: goto label_29f99c;
        case 0x29f9a0u: goto label_29f9a0;
        case 0x29f9a4u: goto label_29f9a4;
        case 0x29f9a8u: goto label_29f9a8;
        case 0x29f9acu: goto label_29f9ac;
        case 0x29f9b0u: goto label_29f9b0;
        case 0x29f9b4u: goto label_29f9b4;
        case 0x29f9b8u: goto label_29f9b8;
        case 0x29f9bcu: goto label_29f9bc;
        case 0x29f9c0u: goto label_29f9c0;
        case 0x29f9c4u: goto label_29f9c4;
        case 0x29f9c8u: goto label_29f9c8;
        case 0x29f9ccu: goto label_29f9cc;
        case 0x29f9d0u: goto label_29f9d0;
        case 0x29f9d4u: goto label_29f9d4;
        case 0x29f9d8u: goto label_29f9d8;
        case 0x29f9dcu: goto label_29f9dc;
        case 0x29f9e0u: goto label_29f9e0;
        case 0x29f9e4u: goto label_29f9e4;
        case 0x29f9e8u: goto label_29f9e8;
        case 0x29f9ecu: goto label_29f9ec;
        case 0x29f9f0u: goto label_29f9f0;
        case 0x29f9f4u: goto label_29f9f4;
        case 0x29f9f8u: goto label_29f9f8;
        case 0x29f9fcu: goto label_29f9fc;
        case 0x29fa00u: goto label_29fa00;
        case 0x29fa04u: goto label_29fa04;
        case 0x29fa08u: goto label_29fa08;
        case 0x29fa0cu: goto label_29fa0c;
        case 0x29fa10u: goto label_29fa10;
        case 0x29fa14u: goto label_29fa14;
        case 0x29fa18u: goto label_29fa18;
        case 0x29fa1cu: goto label_29fa1c;
        case 0x29fa20u: goto label_29fa20;
        case 0x29fa24u: goto label_29fa24;
        case 0x29fa28u: goto label_29fa28;
        case 0x29fa2cu: goto label_29fa2c;
        case 0x29fa30u: goto label_29fa30;
        case 0x29fa34u: goto label_29fa34;
        case 0x29fa38u: goto label_29fa38;
        case 0x29fa3cu: goto label_29fa3c;
        case 0x29fa40u: goto label_29fa40;
        case 0x29fa44u: goto label_29fa44;
        case 0x29fa48u: goto label_29fa48;
        case 0x29fa4cu: goto label_29fa4c;
        case 0x29fa50u: goto label_29fa50;
        case 0x29fa54u: goto label_29fa54;
        case 0x29fa58u: goto label_29fa58;
        case 0x29fa5cu: goto label_29fa5c;
        case 0x29fa60u: goto label_29fa60;
        case 0x29fa64u: goto label_29fa64;
        case 0x29fa68u: goto label_29fa68;
        case 0x29fa6cu: goto label_29fa6c;
        case 0x29fa70u: goto label_29fa70;
        case 0x29fa74u: goto label_29fa74;
        case 0x29fa78u: goto label_29fa78;
        case 0x29fa7cu: goto label_29fa7c;
        case 0x29fa80u: goto label_29fa80;
        case 0x29fa84u: goto label_29fa84;
        case 0x29fa88u: goto label_29fa88;
        case 0x29fa8cu: goto label_29fa8c;
        case 0x29fa90u: goto label_29fa90;
        case 0x29fa94u: goto label_29fa94;
        case 0x29fa98u: goto label_29fa98;
        case 0x29fa9cu: goto label_29fa9c;
        case 0x29faa0u: goto label_29faa0;
        case 0x29faa4u: goto label_29faa4;
        case 0x29faa8u: goto label_29faa8;
        case 0x29faacu: goto label_29faac;
        case 0x29fab0u: goto label_29fab0;
        case 0x29fab4u: goto label_29fab4;
        case 0x29fab8u: goto label_29fab8;
        case 0x29fabcu: goto label_29fabc;
        case 0x29fac0u: goto label_29fac0;
        case 0x29fac4u: goto label_29fac4;
        case 0x29fac8u: goto label_29fac8;
        case 0x29faccu: goto label_29facc;
        case 0x29fad0u: goto label_29fad0;
        case 0x29fad4u: goto label_29fad4;
        case 0x29fad8u: goto label_29fad8;
        case 0x29fadcu: goto label_29fadc;
        case 0x29fae0u: goto label_29fae0;
        case 0x29fae4u: goto label_29fae4;
        case 0x29fae8u: goto label_29fae8;
        case 0x29faecu: goto label_29faec;
        case 0x29faf0u: goto label_29faf0;
        case 0x29faf4u: goto label_29faf4;
        case 0x29faf8u: goto label_29faf8;
        case 0x29fafcu: goto label_29fafc;
        case 0x29fb00u: goto label_29fb00;
        case 0x29fb04u: goto label_29fb04;
        case 0x29fb08u: goto label_29fb08;
        case 0x29fb0cu: goto label_29fb0c;
        case 0x29fb10u: goto label_29fb10;
        case 0x29fb14u: goto label_29fb14;
        case 0x29fb18u: goto label_29fb18;
        case 0x29fb1cu: goto label_29fb1c;
        case 0x29fb20u: goto label_29fb20;
        case 0x29fb24u: goto label_29fb24;
        case 0x29fb28u: goto label_29fb28;
        case 0x29fb2cu: goto label_29fb2c;
        case 0x29fb30u: goto label_29fb30;
        case 0x29fb34u: goto label_29fb34;
        case 0x29fb38u: goto label_29fb38;
        case 0x29fb3cu: goto label_29fb3c;
        case 0x29fb40u: goto label_29fb40;
        case 0x29fb44u: goto label_29fb44;
        case 0x29fb48u: goto label_29fb48;
        case 0x29fb4cu: goto label_29fb4c;
        case 0x29fb50u: goto label_29fb50;
        case 0x29fb54u: goto label_29fb54;
        case 0x29fb58u: goto label_29fb58;
        case 0x29fb5cu: goto label_29fb5c;
        case 0x29fb60u: goto label_29fb60;
        case 0x29fb64u: goto label_29fb64;
        case 0x29fb68u: goto label_29fb68;
        case 0x29fb6cu: goto label_29fb6c;
        case 0x29fb70u: goto label_29fb70;
        case 0x29fb74u: goto label_29fb74;
        case 0x29fb78u: goto label_29fb78;
        case 0x29fb7cu: goto label_29fb7c;
        case 0x29fb80u: goto label_29fb80;
        case 0x29fb84u: goto label_29fb84;
        case 0x29fb88u: goto label_29fb88;
        case 0x29fb8cu: goto label_29fb8c;
        case 0x29fb90u: goto label_29fb90;
        case 0x29fb94u: goto label_29fb94;
        case 0x29fb98u: goto label_29fb98;
        case 0x29fb9cu: goto label_29fb9c;
        case 0x29fba0u: goto label_29fba0;
        case 0x29fba4u: goto label_29fba4;
        case 0x29fba8u: goto label_29fba8;
        case 0x29fbacu: goto label_29fbac;
        case 0x29fbb0u: goto label_29fbb0;
        case 0x29fbb4u: goto label_29fbb4;
        case 0x29fbb8u: goto label_29fbb8;
        case 0x29fbbcu: goto label_29fbbc;
        case 0x29fbc0u: goto label_29fbc0;
        case 0x29fbc4u: goto label_29fbc4;
        case 0x29fbc8u: goto label_29fbc8;
        case 0x29fbccu: goto label_29fbcc;
        case 0x29fbd0u: goto label_29fbd0;
        case 0x29fbd4u: goto label_29fbd4;
        case 0x29fbd8u: goto label_29fbd8;
        case 0x29fbdcu: goto label_29fbdc;
        case 0x29fbe0u: goto label_29fbe0;
        case 0x29fbe4u: goto label_29fbe4;
        case 0x29fbe8u: goto label_29fbe8;
        case 0x29fbecu: goto label_29fbec;
        case 0x29fbf0u: goto label_29fbf0;
        case 0x29fbf4u: goto label_29fbf4;
        case 0x29fbf8u: goto label_29fbf8;
        case 0x29fbfcu: goto label_29fbfc;
        case 0x29fc00u: goto label_29fc00;
        case 0x29fc04u: goto label_29fc04;
        case 0x29fc08u: goto label_29fc08;
        case 0x29fc0cu: goto label_29fc0c;
        case 0x29fc10u: goto label_29fc10;
        case 0x29fc14u: goto label_29fc14;
        case 0x29fc18u: goto label_29fc18;
        case 0x29fc1cu: goto label_29fc1c;
        case 0x29fc20u: goto label_29fc20;
        case 0x29fc24u: goto label_29fc24;
        case 0x29fc28u: goto label_29fc28;
        case 0x29fc2cu: goto label_29fc2c;
        case 0x29fc30u: goto label_29fc30;
        case 0x29fc34u: goto label_29fc34;
        case 0x29fc38u: goto label_29fc38;
        case 0x29fc3cu: goto label_29fc3c;
        case 0x29fc40u: goto label_29fc40;
        case 0x29fc44u: goto label_29fc44;
        case 0x29fc48u: goto label_29fc48;
        case 0x29fc4cu: goto label_29fc4c;
        case 0x29fc50u: goto label_29fc50;
        case 0x29fc54u: goto label_29fc54;
        case 0x29fc58u: goto label_29fc58;
        case 0x29fc5cu: goto label_29fc5c;
        case 0x29fc60u: goto label_29fc60;
        case 0x29fc64u: goto label_29fc64;
        case 0x29fc68u: goto label_29fc68;
        case 0x29fc6cu: goto label_29fc6c;
        case 0x29fc70u: goto label_29fc70;
        case 0x29fc74u: goto label_29fc74;
        case 0x29fc78u: goto label_29fc78;
        case 0x29fc7cu: goto label_29fc7c;
        case 0x29fc80u: goto label_29fc80;
        case 0x29fc84u: goto label_29fc84;
        case 0x29fc88u: goto label_29fc88;
        case 0x29fc8cu: goto label_29fc8c;
        case 0x29fc90u: goto label_29fc90;
        case 0x29fc94u: goto label_29fc94;
        case 0x29fc98u: goto label_29fc98;
        case 0x29fc9cu: goto label_29fc9c;
        case 0x29fca0u: goto label_29fca0;
        case 0x29fca4u: goto label_29fca4;
        case 0x29fca8u: goto label_29fca8;
        case 0x29fcacu: goto label_29fcac;
        case 0x29fcb0u: goto label_29fcb0;
        case 0x29fcb4u: goto label_29fcb4;
        case 0x29fcb8u: goto label_29fcb8;
        case 0x29fcbcu: goto label_29fcbc;
        case 0x29fcc0u: goto label_29fcc0;
        case 0x29fcc4u: goto label_29fcc4;
        case 0x29fcc8u: goto label_29fcc8;
        case 0x29fcccu: goto label_29fccc;
        case 0x29fcd0u: goto label_29fcd0;
        case 0x29fcd4u: goto label_29fcd4;
        case 0x29fcd8u: goto label_29fcd8;
        case 0x29fcdcu: goto label_29fcdc;
        case 0x29fce0u: goto label_29fce0;
        case 0x29fce4u: goto label_29fce4;
        case 0x29fce8u: goto label_29fce8;
        case 0x29fcecu: goto label_29fcec;
        case 0x29fcf0u: goto label_29fcf0;
        case 0x29fcf4u: goto label_29fcf4;
        case 0x29fcf8u: goto label_29fcf8;
        case 0x29fcfcu: goto label_29fcfc;
        case 0x29fd00u: goto label_29fd00;
        case 0x29fd04u: goto label_29fd04;
        case 0x29fd08u: goto label_29fd08;
        case 0x29fd0cu: goto label_29fd0c;
        default: break;
    }

    ctx->pc = 0x29f550u;

label_29f550:
    // 0x29f550: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29f550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29f554:
    // 0x29f554: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29f554u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f558:
    // 0x29f558: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29f558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29f55c:
    // 0x29f55c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29f55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29f560:
    // 0x29f560: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29f560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29f564:
    // 0x29f564: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29f564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29f568:
    // 0x29f568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29f568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29f56c:
    // 0x29f56c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29f56cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29f570:
    // 0x29f570: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x29f570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_29f574:
    // 0x29f574: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
label_29f578:
    if (ctx->pc == 0x29F578u) {
        ctx->pc = 0x29F578u;
            // 0x29f578: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F57Cu;
        goto label_29f57c;
    }
    ctx->pc = 0x29F574u;
    {
        const bool branch_taken_0x29f574 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x29F578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F574u;
            // 0x29f578: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f574) {
            ctx->pc = 0x29F5B8u;
            goto label_29f5b8;
        }
    }
    ctx->pc = 0x29F57Cu;
label_29f57c:
    // 0x29f57c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29f57cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f580:
    // 0x29f580: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x29f580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29f584:
    // 0x29f584: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x29f584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_29f588:
    // 0x29f588: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29f588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_29f58c:
    // 0x29f58c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x29f58cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_29f590:
    // 0x29f590: 0xa73021  addu        $a2, $a1, $a3
    ctx->pc = 0x29f590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_29f594:
    // 0x29f594: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x29f594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_29f598:
    // 0x29f598: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x29f598u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_29f59c:
    // 0x29f59c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_29f5a0:
    // 0x29f5a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29f5a4:
    // 0x29f5a4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x29f5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_29f5a8:
    // 0x29f5a8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x29f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_29f5ac:
    // 0x29f5ac: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x29f5acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_29f5b0:
    // 0x29f5b0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_29f5b4:
    if (ctx->pc == 0x29F5B4u) {
        ctx->pc = 0x29F5B4u;
            // 0x29f5b4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x29F5B8u;
        goto label_29f5b8;
    }
    ctx->pc = 0x29F5B0u;
    {
        const bool branch_taken_0x29f5b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F5B0u;
            // 0x29f5b4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f5b0) {
            ctx->pc = 0x29F580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f580;
        }
    }
    ctx->pc = 0x29F5B8u;
label_29f5b8:
    // 0x29f5b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_29f5bc:
    // 0x29f5bc: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x29f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_29f5c0:
    // 0x29f5c0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x29f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_29f5c4:
    // 0x29f5c4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x29f5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_29f5c8:
    // 0x29f5c8: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x29f5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_29f5cc:
    // 0x29f5cc: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x29f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_29f5d0:
    // 0x29f5d0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x29f5d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_29f5d4:
    // 0x29f5d4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x29f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_29f5d8:
    // 0x29f5d8: 0xe53021  addu        $a2, $a3, $a1
    ctx->pc = 0x29f5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_29f5dc:
    // 0x29f5dc: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x29f5dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_29f5e0:
    // 0x29f5e0: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_29f5e4:
    if (ctx->pc == 0x29F5E4u) {
        ctx->pc = 0x29F5E4u;
            // 0x29f5e4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x29F5E8u;
        goto label_29f5e8;
    }
    ctx->pc = 0x29F5E0u;
    {
        const bool branch_taken_0x29f5e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f5e0) {
            ctx->pc = 0x29F5E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29F5E0u;
            // 0x29f5e4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29F5F0u;
            goto label_29f5f0;
        }
    }
    ctx->pc = 0x29F5E8u;
label_29f5e8:
    // 0x29f5e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_29f5ec:
    if (ctx->pc == 0x29F5ECu) {
        ctx->pc = 0x29F5ECu;
            // 0x29f5ec: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x29F5F0u;
        goto label_29f5f0;
    }
    ctx->pc = 0x29F5E8u;
    {
        const bool branch_taken_0x29f5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F5E8u;
            // 0x29f5ec: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f5e8) {
            ctx->pc = 0x29F600u;
            goto label_29f600;
        }
    }
    ctx->pc = 0x29F5F0u;
label_29f5f0:
    // 0x29f5f0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x29f5f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_29f5f4:
    // 0x29f5f4: 0x320f809  jalr        $t9
label_29f5f8:
    if (ctx->pc == 0x29F5F8u) {
        ctx->pc = 0x29F5FCu;
        goto label_29f5fc;
    }
    ctx->pc = 0x29F5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29F5FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x29F5FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29F5FCu; }
            if (ctx->pc != 0x29F5FCu) { return; }
        }
        }
    }
    ctx->pc = 0x29F5FCu;
label_29f5fc:
    // 0x29f5fc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x29f5fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f600:
    // 0x29f600: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x29f600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
label_29f604:
    // 0x29f604: 0x1a20002a  blez        $s1, . + 4 + (0x2A << 2)
label_29f608:
    if (ctx->pc == 0x29F608u) {
        ctx->pc = 0x29F608u;
            // 0x29f608: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F60Cu;
        goto label_29f60c;
    }
    ctx->pc = 0x29F604u;
    {
        const bool branch_taken_0x29f604 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x29F608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F604u;
            // 0x29f608: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f604) {
            ctx->pc = 0x29F6B0u;
            goto label_29f6b0;
        }
    }
    ctx->pc = 0x29F60Cu;
label_29f60c:
    // 0x29f60c: 0x2a210009  slti        $at, $s1, 0x9
    ctx->pc = 0x29f60cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_29f610:
    // 0x29f610: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
label_29f614:
    if (ctx->pc == 0x29F614u) {
        ctx->pc = 0x29F614u;
            // 0x29f614: 0x2626fff8  addiu       $a2, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->pc = 0x29F618u;
        goto label_29f618;
    }
    ctx->pc = 0x29F610u;
    {
        const bool branch_taken_0x29f610 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F610u;
            // 0x29f614: 0x2626fff8  addiu       $a2, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f610) {
            ctx->pc = 0x29F680u;
            goto label_29f680;
        }
    }
    ctx->pc = 0x29F618u;
label_29f618:
    // 0x29f618: 0x6200007  bltz        $s1, . + 4 + (0x7 << 2)
label_29f61c:
    if (ctx->pc == 0x29F61Cu) {
        ctx->pc = 0x29F61Cu;
            // 0x29f61c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F620u;
        goto label_29f620;
    }
    ctx->pc = 0x29F618u;
    {
        const bool branch_taken_0x29f618 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x29F61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F618u;
            // 0x29f61c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f618) {
            ctx->pc = 0x29F638u;
            goto label_29f638;
        }
    }
    ctx->pc = 0x29F620u;
label_29f620:
    // 0x29f620: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x29f620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
label_29f624:
    // 0x29f624: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x29f624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_29f628:
    // 0x29f628: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x29f628u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_29f62c:
    // 0x29f62c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_29f630:
    if (ctx->pc == 0x29F630u) {
        ctx->pc = 0x29F634u;
        goto label_29f634;
    }
    ctx->pc = 0x29F62Cu;
    {
        const bool branch_taken_0x29f62c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f62c) {
            ctx->pc = 0x29F638u;
            goto label_29f638;
        }
    }
    ctx->pc = 0x29F634u;
label_29f634:
    // 0x29f634: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x29f634u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_29f638:
    // 0x29f638: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_29f63c:
    if (ctx->pc == 0x29F63Cu) {
        ctx->pc = 0x29F640u;
        goto label_29f640;
    }
    ctx->pc = 0x29F638u;
    {
        const bool branch_taken_0x29f638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f638) {
            ctx->pc = 0x29F680u;
            goto label_29f680;
        }
    }
    ctx->pc = 0x29F640u;
label_29f640:
    // 0x29f640: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x29f640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_29f644:
    // 0x29f644: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29f644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f648:
    // 0x29f648: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x29f648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_29f64c:
    // 0x29f64c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x29f64cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_29f650:
    // 0x29f650: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x29f650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_29f654:
    // 0x29f654: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x29f654u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_29f658:
    // 0x29f658: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x29f658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_29f65c:
    // 0x29f65c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x29f65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_29f660:
    // 0x29f660: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x29f660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_29f664:
    // 0x29f664: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x29f664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_29f668:
    // 0x29f668: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x29f668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_29f66c:
    // 0x29f66c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x29f66cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_29f670:
    // 0x29f670: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x29f670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_29f674:
    // 0x29f674: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_29f678:
    if (ctx->pc == 0x29F678u) {
        ctx->pc = 0x29F678u;
            // 0x29f678: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x29F67Cu;
        goto label_29f67c;
    }
    ctx->pc = 0x29F674u;
    {
        const bool branch_taken_0x29f674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F674u;
            // 0x29f678: 0xac80001c  sw          $zero, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f674) {
            ctx->pc = 0x29F648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f648;
        }
    }
    ctx->pc = 0x29F67Cu;
label_29f67c:
    // 0x29f67c: 0x0  nop
    ctx->pc = 0x29f67cu;
    // NOP
label_29f680:
    // 0x29f680: 0x111082a  slt         $at, $t0, $s1
    ctx->pc = 0x29f680u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29f684:
    // 0x29f684: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_29f688:
    if (ctx->pc == 0x29F688u) {
        ctx->pc = 0x29F68Cu;
        goto label_29f68c;
    }
    ctx->pc = 0x29F684u;
    {
        const bool branch_taken_0x29f684 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f684) {
            ctx->pc = 0x29F6B0u;
            goto label_29f6b0;
        }
    }
    ctx->pc = 0x29F68Cu;
label_29f68c:
    // 0x29f68c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x29f68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_29f690:
    // 0x29f690: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x29f690u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_29f694:
    // 0x29f694: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x29f694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_29f698:
    // 0x29f698: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x29f698u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_29f69c:
    // 0x29f69c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x29f69cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_29f6a0:
    // 0x29f6a0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x29f6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_29f6a4:
    // 0x29f6a4: 0x111182a  slt         $v1, $t0, $s1
    ctx->pc = 0x29f6a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29f6a8:
    // 0x29f6a8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_29f6ac:
    if (ctx->pc == 0x29F6ACu) {
        ctx->pc = 0x29F6B0u;
        goto label_29f6b0;
    }
    ctx->pc = 0x29F6A8u;
    {
        const bool branch_taken_0x29f6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f6a8) {
            ctx->pc = 0x29F694u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f694;
        }
    }
    ctx->pc = 0x29F6B0u;
label_29f6b0:
    // 0x29f6b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29f6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29f6b4:
    // 0x29f6b4: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
label_29f6b8:
    if (ctx->pc == 0x29F6B8u) {
        ctx->pc = 0x29F6B8u;
            // 0x29f6b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F6BCu;
        goto label_29f6bc;
    }
    ctx->pc = 0x29F6B4u;
    {
        const bool branch_taken_0x29f6b4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x29F6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F6B4u;
            // 0x29f6b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f6b4) {
            ctx->pc = 0x29F708u;
            goto label_29f708;
        }
    }
    ctx->pc = 0x29F6BCu;
label_29f6bc:
    // 0x29f6bc: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x29f6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_29f6c0:
    // 0x29f6c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29f6c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f6c4:
    // 0x29f6c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29f6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29f6c8:
    // 0x29f6c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x29f6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_29f6cc:
    // 0x29f6cc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x29f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_29f6d0:
    // 0x29f6d0: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x29f6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_29f6d4:
    // 0x29f6d4: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x29f6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_29f6d8:
    // 0x29f6d8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x29f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29f6dc:
    // 0x29f6dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29f6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_29f6e0:
    // 0x29f6e0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x29f6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_29f6e4:
    // 0x29f6e4: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x29f6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_29f6e8:
    // 0x29f6e8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x29f6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_29f6ec:
    // 0x29f6ec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x29f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_29f6f0:
    // 0x29f6f0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x29f6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_29f6f4:
    // 0x29f6f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29f6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29f6f8:
    // 0x29f6f8: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x29f6f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_29f6fc:
    // 0x29f6fc: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_29f700:
    if (ctx->pc == 0x29F700u) {
        ctx->pc = 0x29F700u;
            // 0x29f700: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x29F704u;
        goto label_29f704;
    }
    ctx->pc = 0x29F6FCu;
    {
        const bool branch_taken_0x29f6fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F6FCu;
            // 0x29f700: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f6fc) {
            ctx->pc = 0x29F6C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f6c4;
        }
    }
    ctx->pc = 0x29F704u;
label_29f704:
    // 0x29f704: 0x0  nop
    ctx->pc = 0x29f704u;
    // NOP
label_29f708:
    // 0x29f708: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x29f708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29f70c:
    // 0x29f70c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x29f70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_29f710:
    // 0x29f710: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x29f710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_29f714:
    // 0x29f714: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x29f714u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29f718:
    // 0x29f718: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
label_29f71c:
    if (ctx->pc == 0x29F71Cu) {
        ctx->pc = 0x29F71Cu;
            // 0x29f71c: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->pc = 0x29F720u;
        goto label_29f720;
    }
    ctx->pc = 0x29F718u;
    {
        const bool branch_taken_0x29f718 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f718) {
            ctx->pc = 0x29F71Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29F718u;
            // 0x29f71c: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29F740u;
            goto label_29f740;
        }
    }
    ctx->pc = 0x29F720u;
label_29f720:
    // 0x29f720: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x29f720u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_29f724:
    // 0x29f724: 0x225082a  slt         $at, $s1, $a1
    ctx->pc = 0x29f724u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_29f728:
    // 0x29f728: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_29f72c:
    if (ctx->pc == 0x29F72Cu) {
        ctx->pc = 0x29F72Cu;
            // 0x29f72c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F730u;
        goto label_29f730;
    }
    ctx->pc = 0x29F728u;
    {
        const bool branch_taken_0x29f728 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f728) {
            ctx->pc = 0x29F72Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29F728u;
            // 0x29f72c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29F730u;
            goto label_29f730;
        }
    }
    ctx->pc = 0x29F730u;
label_29f730:
    // 0x29f730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f734:
    // 0x29f734: 0xc0a725c  jal         func_29C970
label_29f738:
    if (ctx->pc == 0x29F738u) {
        ctx->pc = 0x29F738u;
            // 0x29f738: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x29F73Cu;
        goto label_29f73c;
    }
    ctx->pc = 0x29F734u;
    SET_GPR_U32(ctx, 31, 0x29F73Cu);
    ctx->pc = 0x29F738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F734u;
            // 0x29f738: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F73Cu; }
        if (ctx->pc != 0x29F73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F73Cu; }
        if (ctx->pc != 0x29F73Cu) { return; }
    }
    ctx->pc = 0x29F73Cu;
label_29f73c:
    // 0x29f73c: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x29f73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_29f740:
    // 0x29f740: 0x1a200043  blez        $s1, . + 4 + (0x43 << 2)
label_29f744:
    if (ctx->pc == 0x29F744u) {
        ctx->pc = 0x29F744u;
            // 0x29f744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F748u;
        goto label_29f748;
    }
    ctx->pc = 0x29F740u;
    {
        const bool branch_taken_0x29f740 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x29F744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F740u;
            // 0x29f744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f740) {
            ctx->pc = 0x29F850u;
            goto label_29f850;
        }
    }
    ctx->pc = 0x29F748u;
label_29f748:
    // 0x29f748: 0x2a210009  slti        $at, $s1, 0x9
    ctx->pc = 0x29f748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_29f74c:
    // 0x29f74c: 0x14200032  bnez        $at, . + 4 + (0x32 << 2)
label_29f750:
    if (ctx->pc == 0x29F750u) {
        ctx->pc = 0x29F750u;
            // 0x29f750: 0x2625fff8  addiu       $a1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->pc = 0x29F754u;
        goto label_29f754;
    }
    ctx->pc = 0x29F74Cu;
    {
        const bool branch_taken_0x29f74c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F74Cu;
            // 0x29f750: 0x2625fff8  addiu       $a1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f74c) {
            ctx->pc = 0x29F818u;
            goto label_29f818;
        }
    }
    ctx->pc = 0x29F754u;
label_29f754:
    // 0x29f754: 0x6200007  bltz        $s1, . + 4 + (0x7 << 2)
label_29f758:
    if (ctx->pc == 0x29F758u) {
        ctx->pc = 0x29F758u;
            // 0x29f758: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F75Cu;
        goto label_29f75c;
    }
    ctx->pc = 0x29F754u;
    {
        const bool branch_taken_0x29f754 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x29F758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F754u;
            // 0x29f758: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f754) {
            ctx->pc = 0x29F774u;
            goto label_29f774;
        }
    }
    ctx->pc = 0x29F75Cu;
label_29f75c:
    // 0x29f75c: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x29f75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
label_29f760:
    // 0x29f760: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x29f760u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_29f764:
    // 0x29f764: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x29f764u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_29f768:
    // 0x29f768: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_29f76c:
    if (ctx->pc == 0x29F76Cu) {
        ctx->pc = 0x29F770u;
        goto label_29f770;
    }
    ctx->pc = 0x29F768u;
    {
        const bool branch_taken_0x29f768 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f768) {
            ctx->pc = 0x29F774u;
            goto label_29f774;
        }
    }
    ctx->pc = 0x29F770u;
label_29f770:
    // 0x29f770: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x29f770u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_29f774:
    // 0x29f774: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_29f778:
    if (ctx->pc == 0x29F778u) {
        ctx->pc = 0x29F77Cu;
        goto label_29f77c;
    }
    ctx->pc = 0x29F774u;
    {
        const bool branch_taken_0x29f774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f774) {
            ctx->pc = 0x29F818u;
            goto label_29f818;
        }
    }
    ctx->pc = 0x29F77Cu;
label_29f77c:
    // 0x29f77c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x29f77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_29f780:
    // 0x29f780: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29f780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f784:
    // 0x29f784: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x29f784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_29f788:
    // 0x29f788: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x29f788u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29f78c:
    // 0x29f78c: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x29f78cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29f790:
    // 0x29f790: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x29f790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_29f794:
    // 0x29f794: 0xe5402a  slt         $t0, $a3, $a1
    ctx->pc = 0x29f794u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_29f798:
    // 0x29f798: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x29f798u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_29f79c:
    // 0x29f79c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x29f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_29f7a0:
    // 0x29f7a0: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x29f7a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29f7a4:
    // 0x29f7a4: 0x8c6a0004  lw          $t2, 0x4($v1)
    ctx->pc = 0x29f7a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_29f7a8:
    // 0x29f7a8: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x29f7a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_29f7ac:
    // 0x29f7ac: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x29f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
label_29f7b0:
    // 0x29f7b0: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x29f7b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29f7b4:
    // 0x29f7b4: 0x8c6a0008  lw          $t2, 0x8($v1)
    ctx->pc = 0x29f7b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_29f7b8:
    // 0x29f7b8: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x29f7b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_29f7bc:
    // 0x29f7bc: 0xad2a0008  sw          $t2, 0x8($t1)
    ctx->pc = 0x29f7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 10));
label_29f7c0:
    // 0x29f7c0: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x29f7c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29f7c4:
    // 0x29f7c4: 0x8c6a000c  lw          $t2, 0xC($v1)
    ctx->pc = 0x29f7c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_29f7c8:
    // 0x29f7c8: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x29f7c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_29f7cc:
    // 0x29f7cc: 0xad2a000c  sw          $t2, 0xC($t1)
    ctx->pc = 0x29f7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 10));
label_29f7d0:
    // 0x29f7d0: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x29f7d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29f7d4:
    // 0x29f7d4: 0x8c6a0010  lw          $t2, 0x10($v1)
    ctx->pc = 0x29f7d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_29f7d8:
    // 0x29f7d8: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x29f7d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_29f7dc:
    // 0x29f7dc: 0xad2a0010  sw          $t2, 0x10($t1)
    ctx->pc = 0x29f7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 10));
label_29f7e0:
    // 0x29f7e0: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x29f7e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29f7e4:
    // 0x29f7e4: 0x8c6a0014  lw          $t2, 0x14($v1)
    ctx->pc = 0x29f7e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_29f7e8:
    // 0x29f7e8: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x29f7e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_29f7ec:
    // 0x29f7ec: 0xad2a0014  sw          $t2, 0x14($t1)
    ctx->pc = 0x29f7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 10));
label_29f7f0:
    // 0x29f7f0: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x29f7f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29f7f4:
    // 0x29f7f4: 0x8c6a0018  lw          $t2, 0x18($v1)
    ctx->pc = 0x29f7f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_29f7f8:
    // 0x29f7f8: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x29f7f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_29f7fc:
    // 0x29f7fc: 0xad2a0018  sw          $t2, 0x18($t1)
    ctx->pc = 0x29f7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 10));
label_29f800:
    // 0x29f800: 0x8c69001c  lw          $t1, 0x1C($v1)
    ctx->pc = 0x29f800u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_29f804:
    // 0x29f804: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29f804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29f808:
    // 0x29f808: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x29f808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_29f80c:
    // 0x29f80c: 0xac69001c  sw          $t1, 0x1C($v1)
    ctx->pc = 0x29f80cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 9));
label_29f810:
    // 0x29f810: 0x1500ffdc  bnez        $t0, . + 4 + (-0x24 << 2)
label_29f814:
    if (ctx->pc == 0x29F814u) {
        ctx->pc = 0x29F814u;
            // 0x29f814: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->pc = 0x29F818u;
        goto label_29f818;
    }
    ctx->pc = 0x29F810u;
    {
        const bool branch_taken_0x29f810 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F810u;
            // 0x29f814: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f810) {
            ctx->pc = 0x29F784u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f784;
        }
    }
    ctx->pc = 0x29F818u;
label_29f818:
    // 0x29f818: 0xf1082a  slt         $at, $a3, $s1
    ctx->pc = 0x29f818u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29f81c:
    // 0x29f81c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_29f820:
    if (ctx->pc == 0x29F820u) {
        ctx->pc = 0x29F824u;
        goto label_29f824;
    }
    ctx->pc = 0x29F81Cu;
    {
        const bool branch_taken_0x29f81c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f81c) {
            ctx->pc = 0x29F850u;
            goto label_29f850;
        }
    }
    ctx->pc = 0x29F824u;
label_29f824:
    // 0x29f824: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x29f824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_29f828:
    // 0x29f828: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x29f828u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_29f82c:
    // 0x29f82c: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x29f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_29f830:
    // 0x29f830: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29f830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29f834:
    // 0x29f834: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x29f834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29f838:
    // 0x29f838: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x29f838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_29f83c:
    // 0x29f83c: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x29f83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_29f840:
    // 0x29f840: 0xf1182a  slt         $v1, $a3, $s1
    ctx->pc = 0x29f840u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_29f844:
    // 0x29f844: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x29f844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_29f848:
    // 0x29f848: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_29f84c:
    if (ctx->pc == 0x29F84Cu) {
        ctx->pc = 0x29F84Cu;
            // 0x29f84c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->pc = 0x29F850u;
        goto label_29f850;
    }
    ctx->pc = 0x29F848u;
    {
        const bool branch_taken_0x29f848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F848u;
            // 0x29f84c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f848) {
            ctx->pc = 0x29F82Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f82c;
        }
    }
    ctx->pc = 0x29F850u;
label_29f850:
    // 0x29f850: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29f850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_29f854:
    // 0x29f854: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x29f854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_29f858:
    // 0x29f858: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x29f858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_29f85c:
    // 0x29f85c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x29f85cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_29f860:
    // 0x29f860: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x29f860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_29f864:
    // 0x29f864: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_29f868:
    if (ctx->pc == 0x29F868u) {
        ctx->pc = 0x29F868u;
            // 0x29f868: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x29F86Cu;
        goto label_29f86c;
    }
    ctx->pc = 0x29F864u;
    {
        const bool branch_taken_0x29f864 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x29f864) {
            ctx->pc = 0x29F868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29F864u;
            // 0x29f868: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29F880u;
            goto label_29f880;
        }
    }
    ctx->pc = 0x29F86Cu;
label_29f86c:
    // 0x29f86c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29f86cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29f870:
    // 0x29f870: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x29f870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_29f874:
    // 0x29f874: 0x320f809  jalr        $t9
label_29f878:
    if (ctx->pc == 0x29F878u) {
        ctx->pc = 0x29F87Cu;
        goto label_29f87c;
    }
    ctx->pc = 0x29F874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29F87Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x29F87Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29F87Cu; }
            if (ctx->pc != 0x29F87Cu) { return; }
        }
        }
    }
    ctx->pc = 0x29F87Cu;
label_29f87c:
    // 0x29f87c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29f87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29f880:
    // 0x29f880: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29f880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29f884:
    // 0x29f884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29f884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29f888:
    // 0x29f888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29f888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29f88c:
    // 0x29f88c: 0x3e00008  jr          $ra
label_29f890:
    if (ctx->pc == 0x29F890u) {
        ctx->pc = 0x29F890u;
            // 0x29f890: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x29F894u;
        goto label_29f894;
    }
    ctx->pc = 0x29F88Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F88Cu;
            // 0x29f890: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29F894u;
label_29f894:
    // 0x29f894: 0x0  nop
    ctx->pc = 0x29f894u;
    // NOP
label_29f898:
    // 0x29f898: 0x0  nop
    ctx->pc = 0x29f898u;
    // NOP
label_29f89c:
    // 0x29f89c: 0x0  nop
    ctx->pc = 0x29f89cu;
    // NOP
label_29f8a0:
    // 0x29f8a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29f8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_29f8a4:
    // 0x29f8a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29f8a8:
    // 0x29f8a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29f8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_29f8ac:
    // 0x29f8ac: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x29f8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_29f8b0:
    // 0x29f8b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29f8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_29f8b4:
    // 0x29f8b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29f8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_29f8b8:
    // 0x29f8b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29f8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29f8bc:
    // 0x29f8bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29f8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29f8c0:
    // 0x29f8c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29f8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29f8c4:
    // 0x29f8c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29f8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29f8c8:
    // 0x29f8c8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29f8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29f8cc:
    // 0x29f8cc: 0xc0a7a88  jal         func_29EA20
label_29f8d0:
    if (ctx->pc == 0x29F8D0u) {
        ctx->pc = 0x29F8D0u;
            // 0x29f8d0: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x29F8D4u;
        goto label_29f8d4;
    }
    ctx->pc = 0x29F8CCu;
    SET_GPR_U32(ctx, 31, 0x29F8D4u);
    ctx->pc = 0x29F8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F8CCu;
            // 0x29f8d0: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F8D4u; }
        if (ctx->pc != 0x29F8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F8D4u; }
        if (ctx->pc != 0x29F8D4u) { return; }
    }
    ctx->pc = 0x29F8D4u;
label_29f8d4:
    // 0x29f8d4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x29f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_29f8d8:
    // 0x29f8d8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x29f8d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f8dc:
    // 0x29f8dc: 0x12a00052  beqz        $s5, . + 4 + (0x52 << 2)
label_29f8e0:
    if (ctx->pc == 0x29F8E0u) {
        ctx->pc = 0x29F8E0u;
            // 0x29f8e0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x29F8E4u;
        goto label_29f8e4;
    }
    ctx->pc = 0x29F8DCu;
    {
        const bool branch_taken_0x29f8dc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F8DCu;
            // 0x29f8e0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f8dc) {
            ctx->pc = 0x29FA28u;
            goto label_29fa28;
        }
    }
    ctx->pc = 0x29F8E4u;
label_29f8e4:
    // 0x29f8e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29f8e8:
    // 0x29f8e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f8ec:
    // 0x29f8ec: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29f8f0:
    // 0x29f8f0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x29f8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_29f8f4:
    // 0x29f8f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29f8f8:
    // 0x29f8f8: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29f8fc:
    // 0x29f8fc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x29f8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_29f900:
    // 0x29f900: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29f900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29f904:
    // 0x29f904: 0xa6a30006  sh          $v1, 0x6($s5)
    ctx->pc = 0x29f904u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 3));
label_29f908:
    // 0x29f908: 0x2442f820  addiu       $v0, $v0, -0x7E0
    ctx->pc = 0x29f908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965280));
label_29f90c:
    // 0x29f90c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x29f90cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_29f910:
    // 0x29f910: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29f910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29f914:
    // 0x29f914: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x29f914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
label_29f918:
    // 0x29f918: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x29f918u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_29f91c:
    // 0x29f91c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29f920:
    // 0x29f920: 0x2442f7e0  addiu       $v0, $v0, -0x820
    ctx->pc = 0x29f920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965216));
label_29f924:
    // 0x29f924: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x29f924u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_29f928:
    // 0x29f928: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x29f928u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_29f92c:
    // 0x29f92c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29f930:
    // 0x29f930: 0xfea30010  sd          $v1, 0x10($s5)
    ctx->pc = 0x29f930u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 3));
label_29f934:
    // 0x29f934: 0x1442003c  bne         $v0, $v0, . + 4 + (0x3C << 2)
label_29f938:
    if (ctx->pc == 0x29F938u) {
        ctx->pc = 0x29F938u;
            // 0x29f938: 0xaea20018  sw          $v0, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x29F93Cu;
        goto label_29f93c;
    }
    ctx->pc = 0x29F934u;
    {
        const bool branch_taken_0x29f934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 2));
        ctx->pc = 0x29F938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F934u;
            // 0x29f938: 0xaea20018  sw          $v0, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f934) {
            ctx->pc = 0x29FA28u;
            goto label_29fa28;
        }
    }
    ctx->pc = 0x29F93Cu;
label_29f93c:
    // 0x29f93c: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x29f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_29f940:
    // 0x29f940: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_29f944:
    if (ctx->pc == 0x29F944u) {
        ctx->pc = 0x29F944u;
            // 0x29f944: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->pc = 0x29F948u;
        goto label_29f948;
    }
    ctx->pc = 0x29F940u;
    {
        const bool branch_taken_0x29f940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f940) {
            ctx->pc = 0x29F944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29F940u;
            // 0x29f944: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29F960u;
            goto label_29f960;
        }
    }
    ctx->pc = 0x29F948u;
label_29f948:
    // 0x29f948: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x29f948u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
label_29f94c:
    // 0x29f94c: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x29f94cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_29f950:
    // 0x29f950: 0x36740010  ori         $s4, $s3, 0x10
    ctx->pc = 0x29f950u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)16);
label_29f954:
    // 0x29f954: 0x36720020  ori         $s2, $s3, 0x20
    ctx->pc = 0x29f954u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
label_29f958:
    // 0x29f958: 0x10000006  b           . + 4 + (0x6 << 2)
label_29f95c:
    if (ctx->pc == 0x29F95Cu) {
        ctx->pc = 0x29F95Cu;
            // 0x29f95c: 0x36710030  ori         $s1, $s3, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)48);
        ctx->pc = 0x29F960u;
        goto label_29f960;
    }
    ctx->pc = 0x29F958u;
    {
        const bool branch_taken_0x29f958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F958u;
            // 0x29f95c: 0x36710030  ori         $s1, $s3, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f958) {
            ctx->pc = 0x29F974u;
            goto label_29f974;
        }
    }
    ctx->pc = 0x29F960u;
label_29f960:
    // 0x29f960: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x29f960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_29f964:
    // 0x29f964: 0x34540810  ori         $s4, $v0, 0x810
    ctx->pc = 0x29f964u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
label_29f968:
    // 0x29f968: 0x34530800  ori         $s3, $v0, 0x800
    ctx->pc = 0x29f968u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_29f96c:
    // 0x29f96c: 0x34520820  ori         $s2, $v0, 0x820
    ctx->pc = 0x29f96cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2080);
label_29f970:
    // 0x29f970: 0x34510830  ori         $s1, $v0, 0x830
    ctx->pc = 0x29f970u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2096);
label_29f974:
    // 0x29f974: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29f974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29f978:
    // 0x29f978: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x29f978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_29f97c:
    // 0x29f97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f980:
    // 0x29f980: 0xfc40ea80  sd          $zero, -0x1580($v0)
    ctx->pc = 0x29f980u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294961792), GPR_U64(ctx, 0));
label_29f984:
    // 0x29f984: 0x24a5fb60  addiu       $a1, $a1, -0x4A0
    ctx->pc = 0x29f984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966112));
label_29f988:
    // 0x29f988: 0xc043010  jal         func_10C040
label_29f98c:
    if (ctx->pc == 0x29F98Cu) {
        ctx->pc = 0x29F98Cu;
            // 0x29f98c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F990u;
        goto label_29f990;
    }
    ctx->pc = 0x29F988u;
    SET_GPR_U32(ctx, 31, 0x29F990u);
    ctx->pc = 0x29F98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F988u;
            // 0x29f98c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C040u;
    if (runtime->hasFunction(0x10C040u)) {
        auto targetFn = runtime->lookupFunction(0x10C040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F990u; }
        if (ctx->pc != 0x29F990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C040_0x10c040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F990u; }
        if (ctx->pc != 0x29F990u) { return; }
    }
    ctx->pc = 0x29F990u;
label_29f990:
    // 0x29f990: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x29f990u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
label_29f994:
    // 0x29f994: 0xc0433aa  jal         func_10CEA8
label_29f998:
    if (ctx->pc == 0x29F998u) {
        ctx->pc = 0x29F998u;
            // 0x29f998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F99Cu;
        goto label_29f99c;
    }
    ctx->pc = 0x29F994u;
    SET_GPR_U32(ctx, 31, 0x29F99Cu);
    ctx->pc = 0x29F998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F994u;
            // 0x29f998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEA8u;
    if (runtime->hasFunction(0x10CEA8u)) {
        auto targetFn = runtime->lookupFunction(0x10CEA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F99Cu; }
        if (ctx->pc != 0x29F99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEA8_0x10cea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F99Cu; }
        if (ctx->pc != 0x29F99Cu) { return; }
    }
    ctx->pc = 0x29F99Cu;
label_29f99c:
    // 0x29f99c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x29f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_29f9a0:
    // 0x29f9a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29f9a4:
    // 0x29f9a4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x29f9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_29f9a8:
    // 0x29f9a8: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
label_29f9ac:
    if (ctx->pc == 0x29F9ACu) {
        ctx->pc = 0x29F9ACu;
            // 0x29f9ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29F9B0u;
        goto label_29f9b0;
    }
    ctx->pc = 0x29F9A8u;
    {
        const bool branch_taken_0x29f9a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29f9a8) {
            ctx->pc = 0x29F9ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29F9A8u;
            // 0x29f9ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29F9FCu;
            goto label_29f9fc;
        }
    }
    ctx->pc = 0x29F9B0u;
label_29f9b0:
    // 0x29f9b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29f9b4:
    // 0x29f9b4: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
label_29f9b8:
    if (ctx->pc == 0x29F9B8u) {
        ctx->pc = 0x29F9B8u;
            // 0x29f9b8: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->pc = 0x29F9BCu;
        goto label_29f9bc;
    }
    ctx->pc = 0x29F9B4u;
    {
        const bool branch_taken_0x29f9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29f9b4) {
            ctx->pc = 0x29F9B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29F9B4u;
            // 0x29f9b8: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29F9F0u;
            goto label_29f9f0;
        }
    }
    ctx->pc = 0x29F9BCu;
label_29f9bc:
    // 0x29f9bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f9c0:
    // 0x29f9c0: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_29f9c4:
    if (ctx->pc == 0x29F9C4u) {
        ctx->pc = 0x29F9C4u;
            // 0x29f9c4: 0x3c02008f  lui         $v0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
        ctx->pc = 0x29F9C8u;
        goto label_29f9c8;
    }
    ctx->pc = 0x29F9C0u;
    {
        const bool branch_taken_0x29f9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29f9c0) {
            ctx->pc = 0x29F9C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29F9C0u;
            // 0x29f9c4: 0x3c02008f  lui         $v0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29F9E4u;
            goto label_29f9e4;
        }
    }
    ctx->pc = 0x29F9C8u;
label_29f9c8:
    // 0x29f9c8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_29f9cc:
    if (ctx->pc == 0x29F9CCu) {
        ctx->pc = 0x29F9CCu;
            // 0x29f9cc: 0x3c0208f0  lui         $v0, 0x8F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2288 << 16));
        ctx->pc = 0x29F9D0u;
        goto label_29f9d0;
    }
    ctx->pc = 0x29F9C8u;
    {
        const bool branch_taken_0x29f9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f9c8) {
            ctx->pc = 0x29F9CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29F9C8u;
            // 0x29f9cc: 0x3c0208f0  lui         $v0, 0x8F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2288 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29F9D8u;
            goto label_29f9d8;
        }
    }
    ctx->pc = 0x29F9D0u;
label_29f9d0:
    // 0x29f9d0: 0x1000000c  b           . + 4 + (0xC << 2)
label_29f9d4:
    if (ctx->pc == 0x29F9D4u) {
        ctx->pc = 0x29F9D4u;
            // 0x29f9d4: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x29F9D8u;
        goto label_29f9d8;
    }
    ctx->pc = 0x29F9D0u;
    {
        const bool branch_taken_0x29f9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F9D0u;
            // 0x29f9d4: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f9d0) {
            ctx->pc = 0x29FA04u;
            goto label_29fa04;
        }
    }
    ctx->pc = 0x29F9D8u;
label_29f9d8:
    // 0x29f9d8: 0x3442d180  ori         $v0, $v0, 0xD180
    ctx->pc = 0x29f9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53632);
label_29f9dc:
    // 0x29f9dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_29f9e0:
    if (ctx->pc == 0x29F9E0u) {
        ctx->pc = 0x29F9E0u;
            // 0x29f9e0: 0xfea20010  sd          $v0, 0x10($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 2));
        ctx->pc = 0x29F9E4u;
        goto label_29f9e4;
    }
    ctx->pc = 0x29F9DCu;
    {
        const bool branch_taken_0x29f9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F9DCu;
            // 0x29f9e0: 0xfea20010  sd          $v0, 0x10($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f9dc) {
            ctx->pc = 0x29FA00u;
            goto label_29fa00;
        }
    }
    ctx->pc = 0x29F9E4u;
label_29f9e4:
    // 0x29f9e4: 0x34420d18  ori         $v0, $v0, 0xD18
    ctx->pc = 0x29f9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3352);
label_29f9e8:
    // 0x29f9e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_29f9ec:
    if (ctx->pc == 0x29F9ECu) {
        ctx->pc = 0x29F9ECu;
            // 0x29f9ec: 0xfea20010  sd          $v0, 0x10($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 2));
        ctx->pc = 0x29F9F0u;
        goto label_29f9f0;
    }
    ctx->pc = 0x29F9E8u;
    {
        const bool branch_taken_0x29f9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F9E8u;
            // 0x29f9ec: 0xfea20010  sd          $v0, 0x10($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f9e8) {
            ctx->pc = 0x29FA00u;
            goto label_29fa00;
        }
    }
    ctx->pc = 0x29F9F0u;
label_29f9f0:
    // 0x29f9f0: 0x3442f0d1  ori         $v0, $v0, 0xF0D1
    ctx->pc = 0x29f9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61649);
label_29f9f4:
    // 0x29f9f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_29f9f8:
    if (ctx->pc == 0x29F9F8u) {
        ctx->pc = 0x29F9F8u;
            // 0x29f9f8: 0xfea20010  sd          $v0, 0x10($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 2));
        ctx->pc = 0x29F9FCu;
        goto label_29f9fc;
    }
    ctx->pc = 0x29F9F4u;
    {
        const bool branch_taken_0x29f9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F9F4u;
            // 0x29f9f8: 0xfea20010  sd          $v0, 0x10($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f9f4) {
            ctx->pc = 0x29FA00u;
            goto label_29fa00;
        }
    }
    ctx->pc = 0x29F9FCu;
label_29f9fc:
    // 0x29f9fc: 0xfea20010  sd          $v0, 0x10($s5)
    ctx->pc = 0x29f9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 2));
label_29fa00:
    // 0x29fa00: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x29fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_29fa04:
    // 0x29fa04: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x29fa04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_29fa08:
    // 0x29fa08: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_29fa0c:
    if (ctx->pc == 0x29FA0Cu) {
        ctx->pc = 0x29FA0Cu;
            // 0x29fa0c: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x29FA10u;
        goto label_29fa10;
    }
    ctx->pc = 0x29FA08u;
    {
        const bool branch_taken_0x29fa08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fa08) {
            ctx->pc = 0x29FA0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA08u;
            // 0x29fa0c: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29FA20u;
            goto label_29fa20;
        }
    }
    ctx->pc = 0x29FA10u;
label_29fa10:
    // 0x29fa10: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x29fa10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_29fa14:
    // 0x29fa14: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x29fa14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_29fa18:
    // 0x29fa18: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x29fa18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_29fa1c:
    // 0x29fa1c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x29fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_29fa20:
    // 0x29fa20: 0x344202a0  ori         $v0, $v0, 0x2A0
    ctx->pc = 0x29fa20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
label_29fa24:
    // 0x29fa24: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x29fa24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_29fa28:
    // 0x29fa28: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x29fa28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29fa2c:
    // 0x29fa2c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29fa2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_29fa30:
    // 0x29fa30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29fa30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29fa34:
    // 0x29fa34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29fa34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29fa38:
    // 0x29fa38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29fa38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29fa3c:
    // 0x29fa3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29fa3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29fa40:
    // 0x29fa40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29fa40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29fa44:
    // 0x29fa44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29fa44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29fa48:
    // 0x29fa48: 0x3e00008  jr          $ra
label_29fa4c:
    if (ctx->pc == 0x29FA4Cu) {
        ctx->pc = 0x29FA4Cu;
            // 0x29fa4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x29FA50u;
        goto label_29fa50;
    }
    ctx->pc = 0x29FA48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA48u;
            // 0x29fa4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29FA50u;
label_29fa50:
    // 0x29fa50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29fa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29fa54:
    // 0x29fa54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29fa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29fa58:
    // 0x29fa58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29fa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29fa5c:
    // 0x29fa5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29fa5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29fa60:
    // 0x29fa60: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_29fa64:
    if (ctx->pc == 0x29FA64u) {
        ctx->pc = 0x29FA64u;
            // 0x29fa64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FA68u;
        goto label_29fa68;
    }
    ctx->pc = 0x29FA60u;
    {
        const bool branch_taken_0x29fa60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fa60) {
            ctx->pc = 0x29FA64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA60u;
            // 0x29fa64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29FAD0u;
            goto label_29fad0;
        }
    }
    ctx->pc = 0x29FA68u;
label_29fa68:
    // 0x29fa68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29fa6c:
    // 0x29fa6c: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x29fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
label_29fa70:
    // 0x29fa70: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_29fa74:
    if (ctx->pc == 0x29FA74u) {
        ctx->pc = 0x29FA74u;
            // 0x29fa74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29FA78u;
        goto label_29fa78;
    }
    ctx->pc = 0x29FA70u;
    {
        const bool branch_taken_0x29fa70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA70u;
            // 0x29fa74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fa70) {
            ctx->pc = 0x29FAA4u;
            goto label_29faa4;
        }
    }
    ctx->pc = 0x29FA78u;
label_29fa78:
    // 0x29fa78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29fa7c:
    // 0x29fa7c: 0x2442f820  addiu       $v0, $v0, -0x7E0
    ctx->pc = 0x29fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965280));
label_29fa80:
    // 0x29fa80: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_29fa84:
    if (ctx->pc == 0x29FA84u) {
        ctx->pc = 0x29FA84u;
            // 0x29fa84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29FA88u;
        goto label_29fa88;
    }
    ctx->pc = 0x29FA80u;
    {
        const bool branch_taken_0x29fa80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA80u;
            // 0x29fa84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fa80) {
            ctx->pc = 0x29FAA4u;
            goto label_29faa4;
        }
    }
    ctx->pc = 0x29FA88u;
label_29fa88:
    // 0x29fa88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29fa8c:
    // 0x29fa8c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29fa90:
    // 0x29fa90: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_29fa94:
    if (ctx->pc == 0x29FA94u) {
        ctx->pc = 0x29FA94u;
            // 0x29fa94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29FA98u;
        goto label_29fa98;
    }
    ctx->pc = 0x29FA90u;
    {
        const bool branch_taken_0x29fa90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA90u;
            // 0x29fa94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fa90) {
            ctx->pc = 0x29FAA4u;
            goto label_29faa4;
        }
    }
    ctx->pc = 0x29FA98u;
label_29fa98:
    // 0x29fa98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29fa9c:
    // 0x29fa9c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29faa0:
    // 0x29faa0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29faa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29faa4:
    // 0x29faa4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x29faa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_29faa8:
    // 0x29faa8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29faa8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29faac:
    // 0x29faac: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_29fab0:
    if (ctx->pc == 0x29FAB0u) {
        ctx->pc = 0x29FAB4u;
        goto label_29fab4;
    }
    ctx->pc = 0x29FAACu;
    {
        const bool branch_taken_0x29faac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29faac) {
            ctx->pc = 0x29FACCu;
            goto label_29facc;
        }
    }
    ctx->pc = 0x29FAB4u;
label_29fab4:
    // 0x29fab4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29fab8:
    // 0x29fab8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x29fab8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_29fabc:
    // 0x29fabc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29fabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29fac0:
    // 0x29fac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29fac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29fac4:
    // 0x29fac4: 0xc0a7ab4  jal         func_29EAD0
label_29fac8:
    if (ctx->pc == 0x29FAC8u) {
        ctx->pc = 0x29FAC8u;
            // 0x29fac8: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x29FACCu;
        goto label_29facc;
    }
    ctx->pc = 0x29FAC4u;
    SET_GPR_U32(ctx, 31, 0x29FACCu);
    ctx->pc = 0x29FAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FAC4u;
            // 0x29fac8: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FACCu; }
        if (ctx->pc != 0x29FACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FACCu; }
        if (ctx->pc != 0x29FACCu) { return; }
    }
    ctx->pc = 0x29FACCu;
label_29facc:
    // 0x29facc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29faccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29fad0:
    // 0x29fad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29fad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29fad4:
    // 0x29fad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29fad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29fad8:
    // 0x29fad8: 0x3e00008  jr          $ra
label_29fadc:
    if (ctx->pc == 0x29FADCu) {
        ctx->pc = 0x29FADCu;
            // 0x29fadc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29FAE0u;
        goto label_29fae0;
    }
    ctx->pc = 0x29FAD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FAD8u;
            // 0x29fadc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29FAE0u;
label_29fae0:
    // 0x29fae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29fae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29fae4:
    // 0x29fae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29fae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29fae8:
    // 0x29fae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29fae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29faec:
    // 0x29faec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29faecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29faf0:
    // 0x29faf0: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
label_29faf4:
    if (ctx->pc == 0x29FAF4u) {
        ctx->pc = 0x29FAF4u;
            // 0x29faf4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FAF8u;
        goto label_29faf8;
    }
    ctx->pc = 0x29FAF0u;
    {
        const bool branch_taken_0x29faf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29faf0) {
            ctx->pc = 0x29FAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29FAF0u;
            // 0x29faf4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29FB50u;
            goto label_29fb50;
        }
    }
    ctx->pc = 0x29FAF8u;
label_29faf8:
    // 0x29faf8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29fafc:
    // 0x29fafc: 0x2442f820  addiu       $v0, $v0, -0x7E0
    ctx->pc = 0x29fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965280));
label_29fb00:
    // 0x29fb00: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_29fb04:
    if (ctx->pc == 0x29FB04u) {
        ctx->pc = 0x29FB04u;
            // 0x29fb04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29FB08u;
        goto label_29fb08;
    }
    ctx->pc = 0x29FB00u;
    {
        const bool branch_taken_0x29fb00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB00u;
            // 0x29fb04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb00) {
            ctx->pc = 0x29FB24u;
            goto label_29fb24;
        }
    }
    ctx->pc = 0x29FB08u;
label_29fb08:
    // 0x29fb08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29fb0c:
    // 0x29fb0c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29fb10:
    // 0x29fb10: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_29fb14:
    if (ctx->pc == 0x29FB14u) {
        ctx->pc = 0x29FB14u;
            // 0x29fb14: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29FB18u;
        goto label_29fb18;
    }
    ctx->pc = 0x29FB10u;
    {
        const bool branch_taken_0x29fb10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB10u;
            // 0x29fb14: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb10) {
            ctx->pc = 0x29FB24u;
            goto label_29fb24;
        }
    }
    ctx->pc = 0x29FB18u;
label_29fb18:
    // 0x29fb18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29fb1c:
    // 0x29fb1c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29fb20:
    // 0x29fb20: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29fb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29fb24:
    // 0x29fb24: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x29fb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_29fb28:
    // 0x29fb28: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29fb28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29fb2c:
    // 0x29fb2c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_29fb30:
    if (ctx->pc == 0x29FB30u) {
        ctx->pc = 0x29FB34u;
        goto label_29fb34;
    }
    ctx->pc = 0x29FB2Cu;
    {
        const bool branch_taken_0x29fb2c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29fb2c) {
            ctx->pc = 0x29FB4Cu;
            goto label_29fb4c;
        }
    }
    ctx->pc = 0x29FB34u;
label_29fb34:
    // 0x29fb34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29fb38:
    // 0x29fb38: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x29fb38u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_29fb3c:
    // 0x29fb3c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29fb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29fb40:
    // 0x29fb40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29fb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29fb44:
    // 0x29fb44: 0xc0a7ab4  jal         func_29EAD0
label_29fb48:
    if (ctx->pc == 0x29FB48u) {
        ctx->pc = 0x29FB48u;
            // 0x29fb48: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x29FB4Cu;
        goto label_29fb4c;
    }
    ctx->pc = 0x29FB44u;
    SET_GPR_U32(ctx, 31, 0x29FB4Cu);
    ctx->pc = 0x29FB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB44u;
            // 0x29fb48: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB4Cu; }
        if (ctx->pc != 0x29FB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB4Cu; }
        if (ctx->pc != 0x29FB4Cu) { return; }
    }
    ctx->pc = 0x29FB4Cu;
label_29fb4c:
    // 0x29fb4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29fb4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29fb50:
    // 0x29fb50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29fb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29fb54:
    // 0x29fb54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29fb54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29fb58:
    // 0x29fb58: 0x3e00008  jr          $ra
label_29fb5c:
    if (ctx->pc == 0x29FB5Cu) {
        ctx->pc = 0x29FB5Cu;
            // 0x29fb5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29FB60u;
        goto label_29fb60;
    }
    ctx->pc = 0x29FB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB58u;
            // 0x29fb5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29FB60u;
label_29fb60:
    // 0x29fb60: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x29fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_29fb64:
    // 0x29fb64: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
label_29fb68:
    if (ctx->pc == 0x29FB68u) {
        ctx->pc = 0x29FB68u;
            // 0x29fb68: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->pc = 0x29FB6Cu;
        goto label_29fb6c;
    }
    ctx->pc = 0x29FB64u;
    {
        const bool branch_taken_0x29fb64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x29fb64) {
            ctx->pc = 0x29FB68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB64u;
            // 0x29fb68: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29FB90u;
            goto label_29fb90;
        }
    }
    ctx->pc = 0x29FB6Cu;
label_29fb6c:
    // 0x29fb6c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x29fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_29fb70:
    // 0x29fb70: 0x50820003  beql        $a0, $v0, . + 4 + (0x3 << 2)
label_29fb74:
    if (ctx->pc == 0x29FB74u) {
        ctx->pc = 0x29FB74u;
            // 0x29fb74: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->pc = 0x29FB78u;
        goto label_29fb78;
    }
    ctx->pc = 0x29FB70u;
    {
        const bool branch_taken_0x29fb70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x29fb70) {
            ctx->pc = 0x29FB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB70u;
            // 0x29fb74: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29FB80u;
            goto label_29fb80;
        }
    }
    ctx->pc = 0x29FB78u;
label_29fb78:
    // 0x29fb78: 0x10000008  b           . + 4 + (0x8 << 2)
label_29fb7c:
    if (ctx->pc == 0x29FB7Cu) {
        ctx->pc = 0x29FB80u;
        goto label_29fb80;
    }
    ctx->pc = 0x29FB78u;
    {
        const bool branch_taken_0x29fb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fb78) {
            ctx->pc = 0x29FB9Cu;
            goto label_29fb9c;
        }
    }
    ctx->pc = 0x29FB80u;
label_29fb80:
    // 0x29fb80: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x29fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 16))); // MMIO: 0x10000010
label_29fb84:
    // 0x29fb84: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x29fb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_29fb88:
    // 0x29fb88: 0x10000004  b           . + 4 + (0x4 << 2)
label_29fb8c:
    if (ctx->pc == 0x29FB8Cu) {
        ctx->pc = 0x29FB8Cu;
            // 0x29fb8c: 0xac430010  sw          $v1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x29FB90u;
        goto label_29fb90;
    }
    ctx->pc = 0x29FB88u;
    {
        const bool branch_taken_0x29fb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB88u;
            // 0x29fb8c: 0xac430010  sw          $v1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb88) {
            ctx->pc = 0x29FB9Cu;
            goto label_29fb9c;
        }
    }
    ctx->pc = 0x29FB90u;
label_29fb90:
    // 0x29fb90: 0x8c430810  lw          $v1, 0x810($v0)
    ctx->pc = 0x29fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2064)));
label_29fb94:
    // 0x29fb94: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x29fb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_29fb98:
    // 0x29fb98: 0xac430810  sw          $v1, 0x810($v0)
    ctx->pc = 0x29fb98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2064), GPR_U32(ctx, 3));
label_29fb9c:
    // 0x29fb9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_29fba0:
    // 0x29fba0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29fba4:
    // 0x29fba4: 0xdc63ea80  ld          $v1, -0x1580($v1)
    ctx->pc = 0x29fba4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294961792)));
label_29fba8:
    // 0x29fba8: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x29fba8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
label_29fbac:
    // 0x29fbac: 0xfc43ea80  sd          $v1, -0x1580($v0)
    ctx->pc = 0x29fbacu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294961792), GPR_U64(ctx, 3));
label_29fbb0:
    // 0x29fbb0: 0xf  sync
    ctx->pc = 0x29fbb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29fbb4:
    // 0x29fbb4: 0x42000038  ei
    ctx->pc = 0x29fbb4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_29fbb8:
    // 0x29fbb8: 0x3e00008  jr          $ra
label_29fbbc:
    if (ctx->pc == 0x29FBBCu) {
        ctx->pc = 0x29FBBCu;
            // 0x29fbbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FBC0u;
        goto label_29fbc0;
    }
    ctx->pc = 0x29FBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FBB8u;
            // 0x29fbbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29FBC0u;
label_29fbc0:
    // 0x29fbc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29fbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29fbc4:
    // 0x29fbc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29fbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29fbc8:
    // 0x29fbc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29fbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29fbcc:
    // 0x29fbcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29fbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29fbd0:
    // 0x29fbd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29fbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29fbd4:
    // 0x29fbd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29fbd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29fbd8:
    // 0x29fbd8: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
label_29fbdc:
    if (ctx->pc == 0x29FBDCu) {
        ctx->pc = 0x29FBDCu;
            // 0x29fbdc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FBE0u;
        goto label_29fbe0;
    }
    ctx->pc = 0x29FBD8u;
    {
        const bool branch_taken_0x29fbd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FBD8u;
            // 0x29fbdc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fbd8) {
            ctx->pc = 0x29FC94u;
            goto label_29fc94;
        }
    }
    ctx->pc = 0x29FBE0u;
label_29fbe0:
    // 0x29fbe0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x29fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_29fbe4:
    // 0x29fbe4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29fbe8:
    // 0x29fbe8: 0x2463f7e0  addiu       $v1, $v1, -0x820
    ctx->pc = 0x29fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965216));
label_29fbec:
    // 0x29fbec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x29fbecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_29fbf0:
    // 0x29fbf0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_29fbf4:
    // 0x29fbf4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_29fbf8:
    if (ctx->pc == 0x29FBF8u) {
        ctx->pc = 0x29FBFCu;
        goto label_29fbfc;
    }
    ctx->pc = 0x29FBF4u;
    {
        const bool branch_taken_0x29fbf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29fbf4) {
            ctx->pc = 0x29FC28u;
            goto label_29fc28;
        }
    }
    ctx->pc = 0x29FBFCu;
label_29fbfc:
    // 0x29fbfc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x29fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_29fc00:
    // 0x29fc00: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_29fc04:
    if (ctx->pc == 0x29FC04u) {
        ctx->pc = 0x29FC04u;
            // 0x29fc04: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x29FC08u;
        goto label_29fc08;
    }
    ctx->pc = 0x29FC00u;
    {
        const bool branch_taken_0x29fc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fc00) {
            ctx->pc = 0x29FC04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC00u;
            // 0x29fc04: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29FC0Cu;
            goto label_29fc0c;
        }
    }
    ctx->pc = 0x29FC08u;
label_29fc08:
    // 0x29fc08: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x29fc08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_29fc0c:
    // 0x29fc0c: 0xc043390  jal         func_10CE40
label_29fc10:
    if (ctx->pc == 0x29FC10u) {
        ctx->pc = 0x29FC10u;
            // 0x29fc10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FC14u;
        goto label_29fc14;
    }
    ctx->pc = 0x29FC0Cu;
    SET_GPR_U32(ctx, 31, 0x29FC14u);
    ctx->pc = 0x29FC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC0Cu;
            // 0x29fc10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CE40u;
    if (runtime->hasFunction(0x10CE40u)) {
        auto targetFn = runtime->lookupFunction(0x10CE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC14u; }
        if (ctx->pc != 0x29FC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CE40_0x10ce40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC14u; }
        if (ctx->pc != 0x29FC14u) { return; }
    }
    ctx->pc = 0x29FC14u;
label_29fc14:
    // 0x29fc14: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x29fc14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_29fc18:
    // 0x29fc18: 0xc043018  jal         func_10C060
label_29fc1c:
    if (ctx->pc == 0x29FC1Cu) {
        ctx->pc = 0x29FC1Cu;
            // 0x29fc1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FC20u;
        goto label_29fc20;
    }
    ctx->pc = 0x29FC18u;
    SET_GPR_U32(ctx, 31, 0x29FC20u);
    ctx->pc = 0x29FC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC18u;
            // 0x29fc1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C060u;
    if (runtime->hasFunction(0x10C060u)) {
        auto targetFn = runtime->lookupFunction(0x10C060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC20u; }
        if (ctx->pc != 0x29FC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C060_0x10c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC20u; }
        if (ctx->pc != 0x29FC20u) { return; }
    }
    ctx->pc = 0x29FC20u;
label_29fc20:
    // 0x29fc20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29fc24:
    // 0x29fc24: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x29fc24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_29fc28:
    // 0x29fc28: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
label_29fc2c:
    if (ctx->pc == 0x29FC2Cu) {
        ctx->pc = 0x29FC2Cu;
            // 0x29fc2c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x29FC30u;
        goto label_29fc30;
    }
    ctx->pc = 0x29FC28u;
    {
        const bool branch_taken_0x29fc28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fc28) {
            ctx->pc = 0x29FC2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC28u;
            // 0x29fc2c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29FC70u;
            goto label_29fc70;
        }
    }
    ctx->pc = 0x29FC30u;
label_29fc30:
    // 0x29fc30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29fc34:
    // 0x29fc34: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x29fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
label_29fc38:
    // 0x29fc38: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_29fc3c:
    if (ctx->pc == 0x29FC3Cu) {
        ctx->pc = 0x29FC3Cu;
            // 0x29fc3c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29FC40u;
        goto label_29fc40;
    }
    ctx->pc = 0x29FC38u;
    {
        const bool branch_taken_0x29fc38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC38u;
            // 0x29fc3c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc38) {
            ctx->pc = 0x29FC6Cu;
            goto label_29fc6c;
        }
    }
    ctx->pc = 0x29FC40u;
label_29fc40:
    // 0x29fc40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29fc44:
    // 0x29fc44: 0x2442f820  addiu       $v0, $v0, -0x7E0
    ctx->pc = 0x29fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965280));
label_29fc48:
    // 0x29fc48: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_29fc4c:
    if (ctx->pc == 0x29FC4Cu) {
        ctx->pc = 0x29FC4Cu;
            // 0x29fc4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29FC50u;
        goto label_29fc50;
    }
    ctx->pc = 0x29FC48u;
    {
        const bool branch_taken_0x29fc48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC48u;
            // 0x29fc4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc48) {
            ctx->pc = 0x29FC6Cu;
            goto label_29fc6c;
        }
    }
    ctx->pc = 0x29FC50u;
label_29fc50:
    // 0x29fc50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29fc54:
    // 0x29fc54: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29fc58:
    // 0x29fc58: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_29fc5c:
    if (ctx->pc == 0x29FC5Cu) {
        ctx->pc = 0x29FC5Cu;
            // 0x29fc5c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29FC60u;
        goto label_29fc60;
    }
    ctx->pc = 0x29FC58u;
    {
        const bool branch_taken_0x29fc58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC58u;
            // 0x29fc5c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc58) {
            ctx->pc = 0x29FC6Cu;
            goto label_29fc6c;
        }
    }
    ctx->pc = 0x29FC60u;
label_29fc60:
    // 0x29fc60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29fc64:
    // 0x29fc64: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29fc68:
    // 0x29fc68: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x29fc68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_29fc6c:
    // 0x29fc6c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x29fc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_29fc70:
    // 0x29fc70: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29fc70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29fc74:
    // 0x29fc74: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_29fc78:
    if (ctx->pc == 0x29FC78u) {
        ctx->pc = 0x29FC78u;
            // 0x29fc78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FC7Cu;
        goto label_29fc7c;
    }
    ctx->pc = 0x29FC74u;
    {
        const bool branch_taken_0x29fc74 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29fc74) {
            ctx->pc = 0x29FC78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC74u;
            // 0x29fc78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29FC98u;
            goto label_29fc98;
        }
    }
    ctx->pc = 0x29FC7Cu;
label_29fc7c:
    // 0x29fc7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29fc80:
    // 0x29fc80: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x29fc80u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_29fc84:
    // 0x29fc84: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29fc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29fc88:
    // 0x29fc88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29fc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29fc8c:
    // 0x29fc8c: 0xc0a7ab4  jal         func_29EAD0
label_29fc90:
    if (ctx->pc == 0x29FC90u) {
        ctx->pc = 0x29FC90u;
            // 0x29fc90: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x29FC94u;
        goto label_29fc94;
    }
    ctx->pc = 0x29FC8Cu;
    SET_GPR_U32(ctx, 31, 0x29FC94u);
    ctx->pc = 0x29FC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC8Cu;
            // 0x29fc90: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC94u; }
        if (ctx->pc != 0x29FC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC94u; }
        if (ctx->pc != 0x29FC94u) { return; }
    }
    ctx->pc = 0x29FC94u;
label_29fc94:
    // 0x29fc94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29fc94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29fc98:
    // 0x29fc98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29fc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29fc9c:
    // 0x29fc9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29fc9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29fca0:
    // 0x29fca0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29fca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29fca4:
    // 0x29fca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29fca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29fca8:
    // 0x29fca8: 0x3e00008  jr          $ra
label_29fcac:
    if (ctx->pc == 0x29FCACu) {
        ctx->pc = 0x29FCACu;
            // 0x29fcac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x29FCB0u;
        goto label_29fcb0;
    }
    ctx->pc = 0x29FCA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FCA8u;
            // 0x29fcac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29FCB0u;
label_29fcb0:
    // 0x29fcb0: 0x3e00008  jr          $ra
label_29fcb4:
    if (ctx->pc == 0x29FCB4u) {
        ctx->pc = 0x29FCB4u;
            // 0x29fcb4: 0xdc820010  ld          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->pc = 0x29FCB8u;
        goto label_29fcb8;
    }
    ctx->pc = 0x29FCB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FCB0u;
            // 0x29fcb4: 0xdc820010  ld          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29FCB8u;
label_29fcb8:
    // 0x29fcb8: 0x0  nop
    ctx->pc = 0x29fcb8u;
    // NOP
label_29fcbc:
    // 0x29fcbc: 0x0  nop
    ctx->pc = 0x29fcbcu;
    // NOP
label_29fcc0:
    // 0x29fcc0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x29fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_29fcc4:
    // 0x29fcc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29fcc8:
    // 0x29fcc8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_29fccc:
    if (ctx->pc == 0x29FCCCu) {
        ctx->pc = 0x29FCCCu;
            // 0x29fccc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FCD0u;
        goto label_29fcd0;
    }
    ctx->pc = 0x29FCC8u;
    {
        const bool branch_taken_0x29fcc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29FCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FCC8u;
            // 0x29fccc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fcc8) {
            ctx->pc = 0x29FCE8u;
            goto label_29fce8;
        }
    }
    ctx->pc = 0x29FCD0u;
label_29fcd0:
    // 0x29fcd0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_29fcd4:
    if (ctx->pc == 0x29FCD4u) {
        ctx->pc = 0x29FCD4u;
            // 0x29fcd4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->pc = 0x29FCD8u;
        goto label_29fcd8;
    }
    ctx->pc = 0x29FCD0u;
    {
        const bool branch_taken_0x29fcd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fcd0) {
            ctx->pc = 0x29FCD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29FCD0u;
            // 0x29fcd4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29FCE0u;
            goto label_29fce0;
        }
    }
    ctx->pc = 0x29FCD8u;
label_29fcd8:
    // 0x29fcd8: 0x10000005  b           . + 4 + (0x5 << 2)
label_29fcdc:
    if (ctx->pc == 0x29FCDCu) {
        ctx->pc = 0x29FCE0u;
        goto label_29fce0;
    }
    ctx->pc = 0x29FCD8u;
    {
        const bool branch_taken_0x29fcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fcd8) {
            ctx->pc = 0x29FCF0u;
            goto label_29fcf0;
        }
    }
    ctx->pc = 0x29FCE0u;
label_29fce0:
    // 0x29fce0: 0x10000003  b           . + 4 + (0x3 << 2)
label_29fce4:
    if (ctx->pc == 0x29FCE4u) {
        ctx->pc = 0x29FCE4u;
            // 0x29fce4: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x29FCE8u;
        goto label_29fce8;
    }
    ctx->pc = 0x29FCE0u;
    {
        const bool branch_taken_0x29fce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FCE0u;
            // 0x29fce4: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fce0) {
            ctx->pc = 0x29FCF0u;
            goto label_29fcf0;
        }
    }
    ctx->pc = 0x29FCE8u;
label_29fce8:
    // 0x29fce8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x29fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_29fcec:
    // 0x29fcec: 0x94440800  lhu         $a0, 0x800($v0)
    ctx->pc = 0x29fcecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2048)));
label_29fcf0:
    // 0x29fcf0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29fcf4:
    // 0x29fcf4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x29fcf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_29fcf8:
    // 0x29fcf8: 0xdc42ea80  ld          $v0, -0x1580($v0)
    ctx->pc = 0x29fcf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294961792)));
label_29fcfc:
    // 0x29fcfc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x29fcfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_29fd00:
    // 0x29fd00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29fd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_29fd04:
    // 0x29fd04: 0x3e00008  jr          $ra
label_29fd08:
    if (ctx->pc == 0x29FD08u) {
        ctx->pc = 0x29FD08u;
            // 0x29fd08: 0x43102d  daddu       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
        ctx->pc = 0x29FD0Cu;
        goto label_29fd0c;
    }
    ctx->pc = 0x29FD04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD04u;
            // 0x29fd08: 0x43102d  daddu       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29FD0Cu;
label_29fd0c:
    // 0x29fd0c: 0x0  nop
    ctx->pc = 0x29fd0cu;
    // NOP
}
