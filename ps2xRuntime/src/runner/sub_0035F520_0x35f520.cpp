#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035F520
// Address: 0x35f520 - 0x360940
void sub_0035F520_0x35f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F520_0x35f520");
#endif

    switch (ctx->pc) {
        case 0x35f520u: goto label_35f520;
        case 0x35f524u: goto label_35f524;
        case 0x35f528u: goto label_35f528;
        case 0x35f52cu: goto label_35f52c;
        case 0x35f530u: goto label_35f530;
        case 0x35f534u: goto label_35f534;
        case 0x35f538u: goto label_35f538;
        case 0x35f53cu: goto label_35f53c;
        case 0x35f540u: goto label_35f540;
        case 0x35f544u: goto label_35f544;
        case 0x35f548u: goto label_35f548;
        case 0x35f54cu: goto label_35f54c;
        case 0x35f550u: goto label_35f550;
        case 0x35f554u: goto label_35f554;
        case 0x35f558u: goto label_35f558;
        case 0x35f55cu: goto label_35f55c;
        case 0x35f560u: goto label_35f560;
        case 0x35f564u: goto label_35f564;
        case 0x35f568u: goto label_35f568;
        case 0x35f56cu: goto label_35f56c;
        case 0x35f570u: goto label_35f570;
        case 0x35f574u: goto label_35f574;
        case 0x35f578u: goto label_35f578;
        case 0x35f57cu: goto label_35f57c;
        case 0x35f580u: goto label_35f580;
        case 0x35f584u: goto label_35f584;
        case 0x35f588u: goto label_35f588;
        case 0x35f58cu: goto label_35f58c;
        case 0x35f590u: goto label_35f590;
        case 0x35f594u: goto label_35f594;
        case 0x35f598u: goto label_35f598;
        case 0x35f59cu: goto label_35f59c;
        case 0x35f5a0u: goto label_35f5a0;
        case 0x35f5a4u: goto label_35f5a4;
        case 0x35f5a8u: goto label_35f5a8;
        case 0x35f5acu: goto label_35f5ac;
        case 0x35f5b0u: goto label_35f5b0;
        case 0x35f5b4u: goto label_35f5b4;
        case 0x35f5b8u: goto label_35f5b8;
        case 0x35f5bcu: goto label_35f5bc;
        case 0x35f5c0u: goto label_35f5c0;
        case 0x35f5c4u: goto label_35f5c4;
        case 0x35f5c8u: goto label_35f5c8;
        case 0x35f5ccu: goto label_35f5cc;
        case 0x35f5d0u: goto label_35f5d0;
        case 0x35f5d4u: goto label_35f5d4;
        case 0x35f5d8u: goto label_35f5d8;
        case 0x35f5dcu: goto label_35f5dc;
        case 0x35f5e0u: goto label_35f5e0;
        case 0x35f5e4u: goto label_35f5e4;
        case 0x35f5e8u: goto label_35f5e8;
        case 0x35f5ecu: goto label_35f5ec;
        case 0x35f5f0u: goto label_35f5f0;
        case 0x35f5f4u: goto label_35f5f4;
        case 0x35f5f8u: goto label_35f5f8;
        case 0x35f5fcu: goto label_35f5fc;
        case 0x35f600u: goto label_35f600;
        case 0x35f604u: goto label_35f604;
        case 0x35f608u: goto label_35f608;
        case 0x35f60cu: goto label_35f60c;
        case 0x35f610u: goto label_35f610;
        case 0x35f614u: goto label_35f614;
        case 0x35f618u: goto label_35f618;
        case 0x35f61cu: goto label_35f61c;
        case 0x35f620u: goto label_35f620;
        case 0x35f624u: goto label_35f624;
        case 0x35f628u: goto label_35f628;
        case 0x35f62cu: goto label_35f62c;
        case 0x35f630u: goto label_35f630;
        case 0x35f634u: goto label_35f634;
        case 0x35f638u: goto label_35f638;
        case 0x35f63cu: goto label_35f63c;
        case 0x35f640u: goto label_35f640;
        case 0x35f644u: goto label_35f644;
        case 0x35f648u: goto label_35f648;
        case 0x35f64cu: goto label_35f64c;
        case 0x35f650u: goto label_35f650;
        case 0x35f654u: goto label_35f654;
        case 0x35f658u: goto label_35f658;
        case 0x35f65cu: goto label_35f65c;
        case 0x35f660u: goto label_35f660;
        case 0x35f664u: goto label_35f664;
        case 0x35f668u: goto label_35f668;
        case 0x35f66cu: goto label_35f66c;
        case 0x35f670u: goto label_35f670;
        case 0x35f674u: goto label_35f674;
        case 0x35f678u: goto label_35f678;
        case 0x35f67cu: goto label_35f67c;
        case 0x35f680u: goto label_35f680;
        case 0x35f684u: goto label_35f684;
        case 0x35f688u: goto label_35f688;
        case 0x35f68cu: goto label_35f68c;
        case 0x35f690u: goto label_35f690;
        case 0x35f694u: goto label_35f694;
        case 0x35f698u: goto label_35f698;
        case 0x35f69cu: goto label_35f69c;
        case 0x35f6a0u: goto label_35f6a0;
        case 0x35f6a4u: goto label_35f6a4;
        case 0x35f6a8u: goto label_35f6a8;
        case 0x35f6acu: goto label_35f6ac;
        case 0x35f6b0u: goto label_35f6b0;
        case 0x35f6b4u: goto label_35f6b4;
        case 0x35f6b8u: goto label_35f6b8;
        case 0x35f6bcu: goto label_35f6bc;
        case 0x35f6c0u: goto label_35f6c0;
        case 0x35f6c4u: goto label_35f6c4;
        case 0x35f6c8u: goto label_35f6c8;
        case 0x35f6ccu: goto label_35f6cc;
        case 0x35f6d0u: goto label_35f6d0;
        case 0x35f6d4u: goto label_35f6d4;
        case 0x35f6d8u: goto label_35f6d8;
        case 0x35f6dcu: goto label_35f6dc;
        case 0x35f6e0u: goto label_35f6e0;
        case 0x35f6e4u: goto label_35f6e4;
        case 0x35f6e8u: goto label_35f6e8;
        case 0x35f6ecu: goto label_35f6ec;
        case 0x35f6f0u: goto label_35f6f0;
        case 0x35f6f4u: goto label_35f6f4;
        case 0x35f6f8u: goto label_35f6f8;
        case 0x35f6fcu: goto label_35f6fc;
        case 0x35f700u: goto label_35f700;
        case 0x35f704u: goto label_35f704;
        case 0x35f708u: goto label_35f708;
        case 0x35f70cu: goto label_35f70c;
        case 0x35f710u: goto label_35f710;
        case 0x35f714u: goto label_35f714;
        case 0x35f718u: goto label_35f718;
        case 0x35f71cu: goto label_35f71c;
        case 0x35f720u: goto label_35f720;
        case 0x35f724u: goto label_35f724;
        case 0x35f728u: goto label_35f728;
        case 0x35f72cu: goto label_35f72c;
        case 0x35f730u: goto label_35f730;
        case 0x35f734u: goto label_35f734;
        case 0x35f738u: goto label_35f738;
        case 0x35f73cu: goto label_35f73c;
        case 0x35f740u: goto label_35f740;
        case 0x35f744u: goto label_35f744;
        case 0x35f748u: goto label_35f748;
        case 0x35f74cu: goto label_35f74c;
        case 0x35f750u: goto label_35f750;
        case 0x35f754u: goto label_35f754;
        case 0x35f758u: goto label_35f758;
        case 0x35f75cu: goto label_35f75c;
        case 0x35f760u: goto label_35f760;
        case 0x35f764u: goto label_35f764;
        case 0x35f768u: goto label_35f768;
        case 0x35f76cu: goto label_35f76c;
        case 0x35f770u: goto label_35f770;
        case 0x35f774u: goto label_35f774;
        case 0x35f778u: goto label_35f778;
        case 0x35f77cu: goto label_35f77c;
        case 0x35f780u: goto label_35f780;
        case 0x35f784u: goto label_35f784;
        case 0x35f788u: goto label_35f788;
        case 0x35f78cu: goto label_35f78c;
        case 0x35f790u: goto label_35f790;
        case 0x35f794u: goto label_35f794;
        case 0x35f798u: goto label_35f798;
        case 0x35f79cu: goto label_35f79c;
        case 0x35f7a0u: goto label_35f7a0;
        case 0x35f7a4u: goto label_35f7a4;
        case 0x35f7a8u: goto label_35f7a8;
        case 0x35f7acu: goto label_35f7ac;
        case 0x35f7b0u: goto label_35f7b0;
        case 0x35f7b4u: goto label_35f7b4;
        case 0x35f7b8u: goto label_35f7b8;
        case 0x35f7bcu: goto label_35f7bc;
        case 0x35f7c0u: goto label_35f7c0;
        case 0x35f7c4u: goto label_35f7c4;
        case 0x35f7c8u: goto label_35f7c8;
        case 0x35f7ccu: goto label_35f7cc;
        case 0x35f7d0u: goto label_35f7d0;
        case 0x35f7d4u: goto label_35f7d4;
        case 0x35f7d8u: goto label_35f7d8;
        case 0x35f7dcu: goto label_35f7dc;
        case 0x35f7e0u: goto label_35f7e0;
        case 0x35f7e4u: goto label_35f7e4;
        case 0x35f7e8u: goto label_35f7e8;
        case 0x35f7ecu: goto label_35f7ec;
        case 0x35f7f0u: goto label_35f7f0;
        case 0x35f7f4u: goto label_35f7f4;
        case 0x35f7f8u: goto label_35f7f8;
        case 0x35f7fcu: goto label_35f7fc;
        case 0x35f800u: goto label_35f800;
        case 0x35f804u: goto label_35f804;
        case 0x35f808u: goto label_35f808;
        case 0x35f80cu: goto label_35f80c;
        case 0x35f810u: goto label_35f810;
        case 0x35f814u: goto label_35f814;
        case 0x35f818u: goto label_35f818;
        case 0x35f81cu: goto label_35f81c;
        case 0x35f820u: goto label_35f820;
        case 0x35f824u: goto label_35f824;
        case 0x35f828u: goto label_35f828;
        case 0x35f82cu: goto label_35f82c;
        case 0x35f830u: goto label_35f830;
        case 0x35f834u: goto label_35f834;
        case 0x35f838u: goto label_35f838;
        case 0x35f83cu: goto label_35f83c;
        case 0x35f840u: goto label_35f840;
        case 0x35f844u: goto label_35f844;
        case 0x35f848u: goto label_35f848;
        case 0x35f84cu: goto label_35f84c;
        case 0x35f850u: goto label_35f850;
        case 0x35f854u: goto label_35f854;
        case 0x35f858u: goto label_35f858;
        case 0x35f85cu: goto label_35f85c;
        case 0x35f860u: goto label_35f860;
        case 0x35f864u: goto label_35f864;
        case 0x35f868u: goto label_35f868;
        case 0x35f86cu: goto label_35f86c;
        case 0x35f870u: goto label_35f870;
        case 0x35f874u: goto label_35f874;
        case 0x35f878u: goto label_35f878;
        case 0x35f87cu: goto label_35f87c;
        case 0x35f880u: goto label_35f880;
        case 0x35f884u: goto label_35f884;
        case 0x35f888u: goto label_35f888;
        case 0x35f88cu: goto label_35f88c;
        case 0x35f890u: goto label_35f890;
        case 0x35f894u: goto label_35f894;
        case 0x35f898u: goto label_35f898;
        case 0x35f89cu: goto label_35f89c;
        case 0x35f8a0u: goto label_35f8a0;
        case 0x35f8a4u: goto label_35f8a4;
        case 0x35f8a8u: goto label_35f8a8;
        case 0x35f8acu: goto label_35f8ac;
        case 0x35f8b0u: goto label_35f8b0;
        case 0x35f8b4u: goto label_35f8b4;
        case 0x35f8b8u: goto label_35f8b8;
        case 0x35f8bcu: goto label_35f8bc;
        case 0x35f8c0u: goto label_35f8c0;
        case 0x35f8c4u: goto label_35f8c4;
        case 0x35f8c8u: goto label_35f8c8;
        case 0x35f8ccu: goto label_35f8cc;
        case 0x35f8d0u: goto label_35f8d0;
        case 0x35f8d4u: goto label_35f8d4;
        case 0x35f8d8u: goto label_35f8d8;
        case 0x35f8dcu: goto label_35f8dc;
        case 0x35f8e0u: goto label_35f8e0;
        case 0x35f8e4u: goto label_35f8e4;
        case 0x35f8e8u: goto label_35f8e8;
        case 0x35f8ecu: goto label_35f8ec;
        case 0x35f8f0u: goto label_35f8f0;
        case 0x35f8f4u: goto label_35f8f4;
        case 0x35f8f8u: goto label_35f8f8;
        case 0x35f8fcu: goto label_35f8fc;
        case 0x35f900u: goto label_35f900;
        case 0x35f904u: goto label_35f904;
        case 0x35f908u: goto label_35f908;
        case 0x35f90cu: goto label_35f90c;
        case 0x35f910u: goto label_35f910;
        case 0x35f914u: goto label_35f914;
        case 0x35f918u: goto label_35f918;
        case 0x35f91cu: goto label_35f91c;
        case 0x35f920u: goto label_35f920;
        case 0x35f924u: goto label_35f924;
        case 0x35f928u: goto label_35f928;
        case 0x35f92cu: goto label_35f92c;
        case 0x35f930u: goto label_35f930;
        case 0x35f934u: goto label_35f934;
        case 0x35f938u: goto label_35f938;
        case 0x35f93cu: goto label_35f93c;
        case 0x35f940u: goto label_35f940;
        case 0x35f944u: goto label_35f944;
        case 0x35f948u: goto label_35f948;
        case 0x35f94cu: goto label_35f94c;
        case 0x35f950u: goto label_35f950;
        case 0x35f954u: goto label_35f954;
        case 0x35f958u: goto label_35f958;
        case 0x35f95cu: goto label_35f95c;
        case 0x35f960u: goto label_35f960;
        case 0x35f964u: goto label_35f964;
        case 0x35f968u: goto label_35f968;
        case 0x35f96cu: goto label_35f96c;
        case 0x35f970u: goto label_35f970;
        case 0x35f974u: goto label_35f974;
        case 0x35f978u: goto label_35f978;
        case 0x35f97cu: goto label_35f97c;
        case 0x35f980u: goto label_35f980;
        case 0x35f984u: goto label_35f984;
        case 0x35f988u: goto label_35f988;
        case 0x35f98cu: goto label_35f98c;
        case 0x35f990u: goto label_35f990;
        case 0x35f994u: goto label_35f994;
        case 0x35f998u: goto label_35f998;
        case 0x35f99cu: goto label_35f99c;
        case 0x35f9a0u: goto label_35f9a0;
        case 0x35f9a4u: goto label_35f9a4;
        case 0x35f9a8u: goto label_35f9a8;
        case 0x35f9acu: goto label_35f9ac;
        case 0x35f9b0u: goto label_35f9b0;
        case 0x35f9b4u: goto label_35f9b4;
        case 0x35f9b8u: goto label_35f9b8;
        case 0x35f9bcu: goto label_35f9bc;
        case 0x35f9c0u: goto label_35f9c0;
        case 0x35f9c4u: goto label_35f9c4;
        case 0x35f9c8u: goto label_35f9c8;
        case 0x35f9ccu: goto label_35f9cc;
        case 0x35f9d0u: goto label_35f9d0;
        case 0x35f9d4u: goto label_35f9d4;
        case 0x35f9d8u: goto label_35f9d8;
        case 0x35f9dcu: goto label_35f9dc;
        case 0x35f9e0u: goto label_35f9e0;
        case 0x35f9e4u: goto label_35f9e4;
        case 0x35f9e8u: goto label_35f9e8;
        case 0x35f9ecu: goto label_35f9ec;
        case 0x35f9f0u: goto label_35f9f0;
        case 0x35f9f4u: goto label_35f9f4;
        case 0x35f9f8u: goto label_35f9f8;
        case 0x35f9fcu: goto label_35f9fc;
        case 0x35fa00u: goto label_35fa00;
        case 0x35fa04u: goto label_35fa04;
        case 0x35fa08u: goto label_35fa08;
        case 0x35fa0cu: goto label_35fa0c;
        case 0x35fa10u: goto label_35fa10;
        case 0x35fa14u: goto label_35fa14;
        case 0x35fa18u: goto label_35fa18;
        case 0x35fa1cu: goto label_35fa1c;
        case 0x35fa20u: goto label_35fa20;
        case 0x35fa24u: goto label_35fa24;
        case 0x35fa28u: goto label_35fa28;
        case 0x35fa2cu: goto label_35fa2c;
        case 0x35fa30u: goto label_35fa30;
        case 0x35fa34u: goto label_35fa34;
        case 0x35fa38u: goto label_35fa38;
        case 0x35fa3cu: goto label_35fa3c;
        case 0x35fa40u: goto label_35fa40;
        case 0x35fa44u: goto label_35fa44;
        case 0x35fa48u: goto label_35fa48;
        case 0x35fa4cu: goto label_35fa4c;
        case 0x35fa50u: goto label_35fa50;
        case 0x35fa54u: goto label_35fa54;
        case 0x35fa58u: goto label_35fa58;
        case 0x35fa5cu: goto label_35fa5c;
        case 0x35fa60u: goto label_35fa60;
        case 0x35fa64u: goto label_35fa64;
        case 0x35fa68u: goto label_35fa68;
        case 0x35fa6cu: goto label_35fa6c;
        case 0x35fa70u: goto label_35fa70;
        case 0x35fa74u: goto label_35fa74;
        case 0x35fa78u: goto label_35fa78;
        case 0x35fa7cu: goto label_35fa7c;
        case 0x35fa80u: goto label_35fa80;
        case 0x35fa84u: goto label_35fa84;
        case 0x35fa88u: goto label_35fa88;
        case 0x35fa8cu: goto label_35fa8c;
        case 0x35fa90u: goto label_35fa90;
        case 0x35fa94u: goto label_35fa94;
        case 0x35fa98u: goto label_35fa98;
        case 0x35fa9cu: goto label_35fa9c;
        case 0x35faa0u: goto label_35faa0;
        case 0x35faa4u: goto label_35faa4;
        case 0x35faa8u: goto label_35faa8;
        case 0x35faacu: goto label_35faac;
        case 0x35fab0u: goto label_35fab0;
        case 0x35fab4u: goto label_35fab4;
        case 0x35fab8u: goto label_35fab8;
        case 0x35fabcu: goto label_35fabc;
        case 0x35fac0u: goto label_35fac0;
        case 0x35fac4u: goto label_35fac4;
        case 0x35fac8u: goto label_35fac8;
        case 0x35faccu: goto label_35facc;
        case 0x35fad0u: goto label_35fad0;
        case 0x35fad4u: goto label_35fad4;
        case 0x35fad8u: goto label_35fad8;
        case 0x35fadcu: goto label_35fadc;
        case 0x35fae0u: goto label_35fae0;
        case 0x35fae4u: goto label_35fae4;
        case 0x35fae8u: goto label_35fae8;
        case 0x35faecu: goto label_35faec;
        case 0x35faf0u: goto label_35faf0;
        case 0x35faf4u: goto label_35faf4;
        case 0x35faf8u: goto label_35faf8;
        case 0x35fafcu: goto label_35fafc;
        case 0x35fb00u: goto label_35fb00;
        case 0x35fb04u: goto label_35fb04;
        case 0x35fb08u: goto label_35fb08;
        case 0x35fb0cu: goto label_35fb0c;
        case 0x35fb10u: goto label_35fb10;
        case 0x35fb14u: goto label_35fb14;
        case 0x35fb18u: goto label_35fb18;
        case 0x35fb1cu: goto label_35fb1c;
        case 0x35fb20u: goto label_35fb20;
        case 0x35fb24u: goto label_35fb24;
        case 0x35fb28u: goto label_35fb28;
        case 0x35fb2cu: goto label_35fb2c;
        case 0x35fb30u: goto label_35fb30;
        case 0x35fb34u: goto label_35fb34;
        case 0x35fb38u: goto label_35fb38;
        case 0x35fb3cu: goto label_35fb3c;
        case 0x35fb40u: goto label_35fb40;
        case 0x35fb44u: goto label_35fb44;
        case 0x35fb48u: goto label_35fb48;
        case 0x35fb4cu: goto label_35fb4c;
        case 0x35fb50u: goto label_35fb50;
        case 0x35fb54u: goto label_35fb54;
        case 0x35fb58u: goto label_35fb58;
        case 0x35fb5cu: goto label_35fb5c;
        case 0x35fb60u: goto label_35fb60;
        case 0x35fb64u: goto label_35fb64;
        case 0x35fb68u: goto label_35fb68;
        case 0x35fb6cu: goto label_35fb6c;
        case 0x35fb70u: goto label_35fb70;
        case 0x35fb74u: goto label_35fb74;
        case 0x35fb78u: goto label_35fb78;
        case 0x35fb7cu: goto label_35fb7c;
        case 0x35fb80u: goto label_35fb80;
        case 0x35fb84u: goto label_35fb84;
        case 0x35fb88u: goto label_35fb88;
        case 0x35fb8cu: goto label_35fb8c;
        case 0x35fb90u: goto label_35fb90;
        case 0x35fb94u: goto label_35fb94;
        case 0x35fb98u: goto label_35fb98;
        case 0x35fb9cu: goto label_35fb9c;
        case 0x35fba0u: goto label_35fba0;
        case 0x35fba4u: goto label_35fba4;
        case 0x35fba8u: goto label_35fba8;
        case 0x35fbacu: goto label_35fbac;
        case 0x35fbb0u: goto label_35fbb0;
        case 0x35fbb4u: goto label_35fbb4;
        case 0x35fbb8u: goto label_35fbb8;
        case 0x35fbbcu: goto label_35fbbc;
        case 0x35fbc0u: goto label_35fbc0;
        case 0x35fbc4u: goto label_35fbc4;
        case 0x35fbc8u: goto label_35fbc8;
        case 0x35fbccu: goto label_35fbcc;
        case 0x35fbd0u: goto label_35fbd0;
        case 0x35fbd4u: goto label_35fbd4;
        case 0x35fbd8u: goto label_35fbd8;
        case 0x35fbdcu: goto label_35fbdc;
        case 0x35fbe0u: goto label_35fbe0;
        case 0x35fbe4u: goto label_35fbe4;
        case 0x35fbe8u: goto label_35fbe8;
        case 0x35fbecu: goto label_35fbec;
        case 0x35fbf0u: goto label_35fbf0;
        case 0x35fbf4u: goto label_35fbf4;
        case 0x35fbf8u: goto label_35fbf8;
        case 0x35fbfcu: goto label_35fbfc;
        case 0x35fc00u: goto label_35fc00;
        case 0x35fc04u: goto label_35fc04;
        case 0x35fc08u: goto label_35fc08;
        case 0x35fc0cu: goto label_35fc0c;
        case 0x35fc10u: goto label_35fc10;
        case 0x35fc14u: goto label_35fc14;
        case 0x35fc18u: goto label_35fc18;
        case 0x35fc1cu: goto label_35fc1c;
        case 0x35fc20u: goto label_35fc20;
        case 0x35fc24u: goto label_35fc24;
        case 0x35fc28u: goto label_35fc28;
        case 0x35fc2cu: goto label_35fc2c;
        case 0x35fc30u: goto label_35fc30;
        case 0x35fc34u: goto label_35fc34;
        case 0x35fc38u: goto label_35fc38;
        case 0x35fc3cu: goto label_35fc3c;
        case 0x35fc40u: goto label_35fc40;
        case 0x35fc44u: goto label_35fc44;
        case 0x35fc48u: goto label_35fc48;
        case 0x35fc4cu: goto label_35fc4c;
        case 0x35fc50u: goto label_35fc50;
        case 0x35fc54u: goto label_35fc54;
        case 0x35fc58u: goto label_35fc58;
        case 0x35fc5cu: goto label_35fc5c;
        case 0x35fc60u: goto label_35fc60;
        case 0x35fc64u: goto label_35fc64;
        case 0x35fc68u: goto label_35fc68;
        case 0x35fc6cu: goto label_35fc6c;
        case 0x35fc70u: goto label_35fc70;
        case 0x35fc74u: goto label_35fc74;
        case 0x35fc78u: goto label_35fc78;
        case 0x35fc7cu: goto label_35fc7c;
        case 0x35fc80u: goto label_35fc80;
        case 0x35fc84u: goto label_35fc84;
        case 0x35fc88u: goto label_35fc88;
        case 0x35fc8cu: goto label_35fc8c;
        case 0x35fc90u: goto label_35fc90;
        case 0x35fc94u: goto label_35fc94;
        case 0x35fc98u: goto label_35fc98;
        case 0x35fc9cu: goto label_35fc9c;
        case 0x35fca0u: goto label_35fca0;
        case 0x35fca4u: goto label_35fca4;
        case 0x35fca8u: goto label_35fca8;
        case 0x35fcacu: goto label_35fcac;
        case 0x35fcb0u: goto label_35fcb0;
        case 0x35fcb4u: goto label_35fcb4;
        case 0x35fcb8u: goto label_35fcb8;
        case 0x35fcbcu: goto label_35fcbc;
        case 0x35fcc0u: goto label_35fcc0;
        case 0x35fcc4u: goto label_35fcc4;
        case 0x35fcc8u: goto label_35fcc8;
        case 0x35fcccu: goto label_35fccc;
        case 0x35fcd0u: goto label_35fcd0;
        case 0x35fcd4u: goto label_35fcd4;
        case 0x35fcd8u: goto label_35fcd8;
        case 0x35fcdcu: goto label_35fcdc;
        case 0x35fce0u: goto label_35fce0;
        case 0x35fce4u: goto label_35fce4;
        case 0x35fce8u: goto label_35fce8;
        case 0x35fcecu: goto label_35fcec;
        case 0x35fcf0u: goto label_35fcf0;
        case 0x35fcf4u: goto label_35fcf4;
        case 0x35fcf8u: goto label_35fcf8;
        case 0x35fcfcu: goto label_35fcfc;
        case 0x35fd00u: goto label_35fd00;
        case 0x35fd04u: goto label_35fd04;
        case 0x35fd08u: goto label_35fd08;
        case 0x35fd0cu: goto label_35fd0c;
        case 0x35fd10u: goto label_35fd10;
        case 0x35fd14u: goto label_35fd14;
        case 0x35fd18u: goto label_35fd18;
        case 0x35fd1cu: goto label_35fd1c;
        case 0x35fd20u: goto label_35fd20;
        case 0x35fd24u: goto label_35fd24;
        case 0x35fd28u: goto label_35fd28;
        case 0x35fd2cu: goto label_35fd2c;
        case 0x35fd30u: goto label_35fd30;
        case 0x35fd34u: goto label_35fd34;
        case 0x35fd38u: goto label_35fd38;
        case 0x35fd3cu: goto label_35fd3c;
        case 0x35fd40u: goto label_35fd40;
        case 0x35fd44u: goto label_35fd44;
        case 0x35fd48u: goto label_35fd48;
        case 0x35fd4cu: goto label_35fd4c;
        case 0x35fd50u: goto label_35fd50;
        case 0x35fd54u: goto label_35fd54;
        case 0x35fd58u: goto label_35fd58;
        case 0x35fd5cu: goto label_35fd5c;
        case 0x35fd60u: goto label_35fd60;
        case 0x35fd64u: goto label_35fd64;
        case 0x35fd68u: goto label_35fd68;
        case 0x35fd6cu: goto label_35fd6c;
        case 0x35fd70u: goto label_35fd70;
        case 0x35fd74u: goto label_35fd74;
        case 0x35fd78u: goto label_35fd78;
        case 0x35fd7cu: goto label_35fd7c;
        case 0x35fd80u: goto label_35fd80;
        case 0x35fd84u: goto label_35fd84;
        case 0x35fd88u: goto label_35fd88;
        case 0x35fd8cu: goto label_35fd8c;
        case 0x35fd90u: goto label_35fd90;
        case 0x35fd94u: goto label_35fd94;
        case 0x35fd98u: goto label_35fd98;
        case 0x35fd9cu: goto label_35fd9c;
        case 0x35fda0u: goto label_35fda0;
        case 0x35fda4u: goto label_35fda4;
        case 0x35fda8u: goto label_35fda8;
        case 0x35fdacu: goto label_35fdac;
        case 0x35fdb0u: goto label_35fdb0;
        case 0x35fdb4u: goto label_35fdb4;
        case 0x35fdb8u: goto label_35fdb8;
        case 0x35fdbcu: goto label_35fdbc;
        case 0x35fdc0u: goto label_35fdc0;
        case 0x35fdc4u: goto label_35fdc4;
        case 0x35fdc8u: goto label_35fdc8;
        case 0x35fdccu: goto label_35fdcc;
        case 0x35fdd0u: goto label_35fdd0;
        case 0x35fdd4u: goto label_35fdd4;
        case 0x35fdd8u: goto label_35fdd8;
        case 0x35fddcu: goto label_35fddc;
        case 0x35fde0u: goto label_35fde0;
        case 0x35fde4u: goto label_35fde4;
        case 0x35fde8u: goto label_35fde8;
        case 0x35fdecu: goto label_35fdec;
        case 0x35fdf0u: goto label_35fdf0;
        case 0x35fdf4u: goto label_35fdf4;
        case 0x35fdf8u: goto label_35fdf8;
        case 0x35fdfcu: goto label_35fdfc;
        case 0x35fe00u: goto label_35fe00;
        case 0x35fe04u: goto label_35fe04;
        case 0x35fe08u: goto label_35fe08;
        case 0x35fe0cu: goto label_35fe0c;
        case 0x35fe10u: goto label_35fe10;
        case 0x35fe14u: goto label_35fe14;
        case 0x35fe18u: goto label_35fe18;
        case 0x35fe1cu: goto label_35fe1c;
        case 0x35fe20u: goto label_35fe20;
        case 0x35fe24u: goto label_35fe24;
        case 0x35fe28u: goto label_35fe28;
        case 0x35fe2cu: goto label_35fe2c;
        case 0x35fe30u: goto label_35fe30;
        case 0x35fe34u: goto label_35fe34;
        case 0x35fe38u: goto label_35fe38;
        case 0x35fe3cu: goto label_35fe3c;
        case 0x35fe40u: goto label_35fe40;
        case 0x35fe44u: goto label_35fe44;
        case 0x35fe48u: goto label_35fe48;
        case 0x35fe4cu: goto label_35fe4c;
        case 0x35fe50u: goto label_35fe50;
        case 0x35fe54u: goto label_35fe54;
        case 0x35fe58u: goto label_35fe58;
        case 0x35fe5cu: goto label_35fe5c;
        case 0x35fe60u: goto label_35fe60;
        case 0x35fe64u: goto label_35fe64;
        case 0x35fe68u: goto label_35fe68;
        case 0x35fe6cu: goto label_35fe6c;
        case 0x35fe70u: goto label_35fe70;
        case 0x35fe74u: goto label_35fe74;
        case 0x35fe78u: goto label_35fe78;
        case 0x35fe7cu: goto label_35fe7c;
        case 0x35fe80u: goto label_35fe80;
        case 0x35fe84u: goto label_35fe84;
        case 0x35fe88u: goto label_35fe88;
        case 0x35fe8cu: goto label_35fe8c;
        case 0x35fe90u: goto label_35fe90;
        case 0x35fe94u: goto label_35fe94;
        case 0x35fe98u: goto label_35fe98;
        case 0x35fe9cu: goto label_35fe9c;
        case 0x35fea0u: goto label_35fea0;
        case 0x35fea4u: goto label_35fea4;
        case 0x35fea8u: goto label_35fea8;
        case 0x35feacu: goto label_35feac;
        case 0x35feb0u: goto label_35feb0;
        case 0x35feb4u: goto label_35feb4;
        case 0x35feb8u: goto label_35feb8;
        case 0x35febcu: goto label_35febc;
        case 0x35fec0u: goto label_35fec0;
        case 0x35fec4u: goto label_35fec4;
        case 0x35fec8u: goto label_35fec8;
        case 0x35feccu: goto label_35fecc;
        case 0x35fed0u: goto label_35fed0;
        case 0x35fed4u: goto label_35fed4;
        case 0x35fed8u: goto label_35fed8;
        case 0x35fedcu: goto label_35fedc;
        case 0x35fee0u: goto label_35fee0;
        case 0x35fee4u: goto label_35fee4;
        case 0x35fee8u: goto label_35fee8;
        case 0x35feecu: goto label_35feec;
        case 0x35fef0u: goto label_35fef0;
        case 0x35fef4u: goto label_35fef4;
        case 0x35fef8u: goto label_35fef8;
        case 0x35fefcu: goto label_35fefc;
        case 0x35ff00u: goto label_35ff00;
        case 0x35ff04u: goto label_35ff04;
        case 0x35ff08u: goto label_35ff08;
        case 0x35ff0cu: goto label_35ff0c;
        case 0x35ff10u: goto label_35ff10;
        case 0x35ff14u: goto label_35ff14;
        case 0x35ff18u: goto label_35ff18;
        case 0x35ff1cu: goto label_35ff1c;
        case 0x35ff20u: goto label_35ff20;
        case 0x35ff24u: goto label_35ff24;
        case 0x35ff28u: goto label_35ff28;
        case 0x35ff2cu: goto label_35ff2c;
        case 0x35ff30u: goto label_35ff30;
        case 0x35ff34u: goto label_35ff34;
        case 0x35ff38u: goto label_35ff38;
        case 0x35ff3cu: goto label_35ff3c;
        case 0x35ff40u: goto label_35ff40;
        case 0x35ff44u: goto label_35ff44;
        case 0x35ff48u: goto label_35ff48;
        case 0x35ff4cu: goto label_35ff4c;
        case 0x35ff50u: goto label_35ff50;
        case 0x35ff54u: goto label_35ff54;
        case 0x35ff58u: goto label_35ff58;
        case 0x35ff5cu: goto label_35ff5c;
        case 0x35ff60u: goto label_35ff60;
        case 0x35ff64u: goto label_35ff64;
        case 0x35ff68u: goto label_35ff68;
        case 0x35ff6cu: goto label_35ff6c;
        case 0x35ff70u: goto label_35ff70;
        case 0x35ff74u: goto label_35ff74;
        case 0x35ff78u: goto label_35ff78;
        case 0x35ff7cu: goto label_35ff7c;
        case 0x35ff80u: goto label_35ff80;
        case 0x35ff84u: goto label_35ff84;
        case 0x35ff88u: goto label_35ff88;
        case 0x35ff8cu: goto label_35ff8c;
        case 0x35ff90u: goto label_35ff90;
        case 0x35ff94u: goto label_35ff94;
        case 0x35ff98u: goto label_35ff98;
        case 0x35ff9cu: goto label_35ff9c;
        case 0x35ffa0u: goto label_35ffa0;
        case 0x35ffa4u: goto label_35ffa4;
        case 0x35ffa8u: goto label_35ffa8;
        case 0x35ffacu: goto label_35ffac;
        case 0x35ffb0u: goto label_35ffb0;
        case 0x35ffb4u: goto label_35ffb4;
        case 0x35ffb8u: goto label_35ffb8;
        case 0x35ffbcu: goto label_35ffbc;
        case 0x35ffc0u: goto label_35ffc0;
        case 0x35ffc4u: goto label_35ffc4;
        case 0x35ffc8u: goto label_35ffc8;
        case 0x35ffccu: goto label_35ffcc;
        case 0x35ffd0u: goto label_35ffd0;
        case 0x35ffd4u: goto label_35ffd4;
        case 0x35ffd8u: goto label_35ffd8;
        case 0x35ffdcu: goto label_35ffdc;
        case 0x35ffe0u: goto label_35ffe0;
        case 0x35ffe4u: goto label_35ffe4;
        case 0x35ffe8u: goto label_35ffe8;
        case 0x35ffecu: goto label_35ffec;
        case 0x35fff0u: goto label_35fff0;
        case 0x35fff4u: goto label_35fff4;
        case 0x35fff8u: goto label_35fff8;
        case 0x35fffcu: goto label_35fffc;
        case 0x360000u: goto label_360000;
        case 0x360004u: goto label_360004;
        case 0x360008u: goto label_360008;
        case 0x36000cu: goto label_36000c;
        case 0x360010u: goto label_360010;
        case 0x360014u: goto label_360014;
        case 0x360018u: goto label_360018;
        case 0x36001cu: goto label_36001c;
        case 0x360020u: goto label_360020;
        case 0x360024u: goto label_360024;
        case 0x360028u: goto label_360028;
        case 0x36002cu: goto label_36002c;
        case 0x360030u: goto label_360030;
        case 0x360034u: goto label_360034;
        case 0x360038u: goto label_360038;
        case 0x36003cu: goto label_36003c;
        case 0x360040u: goto label_360040;
        case 0x360044u: goto label_360044;
        case 0x360048u: goto label_360048;
        case 0x36004cu: goto label_36004c;
        case 0x360050u: goto label_360050;
        case 0x360054u: goto label_360054;
        case 0x360058u: goto label_360058;
        case 0x36005cu: goto label_36005c;
        case 0x360060u: goto label_360060;
        case 0x360064u: goto label_360064;
        case 0x360068u: goto label_360068;
        case 0x36006cu: goto label_36006c;
        case 0x360070u: goto label_360070;
        case 0x360074u: goto label_360074;
        case 0x360078u: goto label_360078;
        case 0x36007cu: goto label_36007c;
        case 0x360080u: goto label_360080;
        case 0x360084u: goto label_360084;
        case 0x360088u: goto label_360088;
        case 0x36008cu: goto label_36008c;
        case 0x360090u: goto label_360090;
        case 0x360094u: goto label_360094;
        case 0x360098u: goto label_360098;
        case 0x36009cu: goto label_36009c;
        case 0x3600a0u: goto label_3600a0;
        case 0x3600a4u: goto label_3600a4;
        case 0x3600a8u: goto label_3600a8;
        case 0x3600acu: goto label_3600ac;
        case 0x3600b0u: goto label_3600b0;
        case 0x3600b4u: goto label_3600b4;
        case 0x3600b8u: goto label_3600b8;
        case 0x3600bcu: goto label_3600bc;
        case 0x3600c0u: goto label_3600c0;
        case 0x3600c4u: goto label_3600c4;
        case 0x3600c8u: goto label_3600c8;
        case 0x3600ccu: goto label_3600cc;
        case 0x3600d0u: goto label_3600d0;
        case 0x3600d4u: goto label_3600d4;
        case 0x3600d8u: goto label_3600d8;
        case 0x3600dcu: goto label_3600dc;
        case 0x3600e0u: goto label_3600e0;
        case 0x3600e4u: goto label_3600e4;
        case 0x3600e8u: goto label_3600e8;
        case 0x3600ecu: goto label_3600ec;
        case 0x3600f0u: goto label_3600f0;
        case 0x3600f4u: goto label_3600f4;
        case 0x3600f8u: goto label_3600f8;
        case 0x3600fcu: goto label_3600fc;
        case 0x360100u: goto label_360100;
        case 0x360104u: goto label_360104;
        case 0x360108u: goto label_360108;
        case 0x36010cu: goto label_36010c;
        case 0x360110u: goto label_360110;
        case 0x360114u: goto label_360114;
        case 0x360118u: goto label_360118;
        case 0x36011cu: goto label_36011c;
        case 0x360120u: goto label_360120;
        case 0x360124u: goto label_360124;
        case 0x360128u: goto label_360128;
        case 0x36012cu: goto label_36012c;
        case 0x360130u: goto label_360130;
        case 0x360134u: goto label_360134;
        case 0x360138u: goto label_360138;
        case 0x36013cu: goto label_36013c;
        case 0x360140u: goto label_360140;
        case 0x360144u: goto label_360144;
        case 0x360148u: goto label_360148;
        case 0x36014cu: goto label_36014c;
        case 0x360150u: goto label_360150;
        case 0x360154u: goto label_360154;
        case 0x360158u: goto label_360158;
        case 0x36015cu: goto label_36015c;
        case 0x360160u: goto label_360160;
        case 0x360164u: goto label_360164;
        case 0x360168u: goto label_360168;
        case 0x36016cu: goto label_36016c;
        case 0x360170u: goto label_360170;
        case 0x360174u: goto label_360174;
        case 0x360178u: goto label_360178;
        case 0x36017cu: goto label_36017c;
        case 0x360180u: goto label_360180;
        case 0x360184u: goto label_360184;
        case 0x360188u: goto label_360188;
        case 0x36018cu: goto label_36018c;
        case 0x360190u: goto label_360190;
        case 0x360194u: goto label_360194;
        case 0x360198u: goto label_360198;
        case 0x36019cu: goto label_36019c;
        case 0x3601a0u: goto label_3601a0;
        case 0x3601a4u: goto label_3601a4;
        case 0x3601a8u: goto label_3601a8;
        case 0x3601acu: goto label_3601ac;
        case 0x3601b0u: goto label_3601b0;
        case 0x3601b4u: goto label_3601b4;
        case 0x3601b8u: goto label_3601b8;
        case 0x3601bcu: goto label_3601bc;
        case 0x3601c0u: goto label_3601c0;
        case 0x3601c4u: goto label_3601c4;
        case 0x3601c8u: goto label_3601c8;
        case 0x3601ccu: goto label_3601cc;
        case 0x3601d0u: goto label_3601d0;
        case 0x3601d4u: goto label_3601d4;
        case 0x3601d8u: goto label_3601d8;
        case 0x3601dcu: goto label_3601dc;
        case 0x3601e0u: goto label_3601e0;
        case 0x3601e4u: goto label_3601e4;
        case 0x3601e8u: goto label_3601e8;
        case 0x3601ecu: goto label_3601ec;
        case 0x3601f0u: goto label_3601f0;
        case 0x3601f4u: goto label_3601f4;
        case 0x3601f8u: goto label_3601f8;
        case 0x3601fcu: goto label_3601fc;
        case 0x360200u: goto label_360200;
        case 0x360204u: goto label_360204;
        case 0x360208u: goto label_360208;
        case 0x36020cu: goto label_36020c;
        case 0x360210u: goto label_360210;
        case 0x360214u: goto label_360214;
        case 0x360218u: goto label_360218;
        case 0x36021cu: goto label_36021c;
        case 0x360220u: goto label_360220;
        case 0x360224u: goto label_360224;
        case 0x360228u: goto label_360228;
        case 0x36022cu: goto label_36022c;
        case 0x360230u: goto label_360230;
        case 0x360234u: goto label_360234;
        case 0x360238u: goto label_360238;
        case 0x36023cu: goto label_36023c;
        case 0x360240u: goto label_360240;
        case 0x360244u: goto label_360244;
        case 0x360248u: goto label_360248;
        case 0x36024cu: goto label_36024c;
        case 0x360250u: goto label_360250;
        case 0x360254u: goto label_360254;
        case 0x360258u: goto label_360258;
        case 0x36025cu: goto label_36025c;
        case 0x360260u: goto label_360260;
        case 0x360264u: goto label_360264;
        case 0x360268u: goto label_360268;
        case 0x36026cu: goto label_36026c;
        case 0x360270u: goto label_360270;
        case 0x360274u: goto label_360274;
        case 0x360278u: goto label_360278;
        case 0x36027cu: goto label_36027c;
        case 0x360280u: goto label_360280;
        case 0x360284u: goto label_360284;
        case 0x360288u: goto label_360288;
        case 0x36028cu: goto label_36028c;
        case 0x360290u: goto label_360290;
        case 0x360294u: goto label_360294;
        case 0x360298u: goto label_360298;
        case 0x36029cu: goto label_36029c;
        case 0x3602a0u: goto label_3602a0;
        case 0x3602a4u: goto label_3602a4;
        case 0x3602a8u: goto label_3602a8;
        case 0x3602acu: goto label_3602ac;
        case 0x3602b0u: goto label_3602b0;
        case 0x3602b4u: goto label_3602b4;
        case 0x3602b8u: goto label_3602b8;
        case 0x3602bcu: goto label_3602bc;
        case 0x3602c0u: goto label_3602c0;
        case 0x3602c4u: goto label_3602c4;
        case 0x3602c8u: goto label_3602c8;
        case 0x3602ccu: goto label_3602cc;
        case 0x3602d0u: goto label_3602d0;
        case 0x3602d4u: goto label_3602d4;
        case 0x3602d8u: goto label_3602d8;
        case 0x3602dcu: goto label_3602dc;
        case 0x3602e0u: goto label_3602e0;
        case 0x3602e4u: goto label_3602e4;
        case 0x3602e8u: goto label_3602e8;
        case 0x3602ecu: goto label_3602ec;
        case 0x3602f0u: goto label_3602f0;
        case 0x3602f4u: goto label_3602f4;
        case 0x3602f8u: goto label_3602f8;
        case 0x3602fcu: goto label_3602fc;
        case 0x360300u: goto label_360300;
        case 0x360304u: goto label_360304;
        case 0x360308u: goto label_360308;
        case 0x36030cu: goto label_36030c;
        case 0x360310u: goto label_360310;
        case 0x360314u: goto label_360314;
        case 0x360318u: goto label_360318;
        case 0x36031cu: goto label_36031c;
        case 0x360320u: goto label_360320;
        case 0x360324u: goto label_360324;
        case 0x360328u: goto label_360328;
        case 0x36032cu: goto label_36032c;
        case 0x360330u: goto label_360330;
        case 0x360334u: goto label_360334;
        case 0x360338u: goto label_360338;
        case 0x36033cu: goto label_36033c;
        case 0x360340u: goto label_360340;
        case 0x360344u: goto label_360344;
        case 0x360348u: goto label_360348;
        case 0x36034cu: goto label_36034c;
        case 0x360350u: goto label_360350;
        case 0x360354u: goto label_360354;
        case 0x360358u: goto label_360358;
        case 0x36035cu: goto label_36035c;
        case 0x360360u: goto label_360360;
        case 0x360364u: goto label_360364;
        case 0x360368u: goto label_360368;
        case 0x36036cu: goto label_36036c;
        case 0x360370u: goto label_360370;
        case 0x360374u: goto label_360374;
        case 0x360378u: goto label_360378;
        case 0x36037cu: goto label_36037c;
        case 0x360380u: goto label_360380;
        case 0x360384u: goto label_360384;
        case 0x360388u: goto label_360388;
        case 0x36038cu: goto label_36038c;
        case 0x360390u: goto label_360390;
        case 0x360394u: goto label_360394;
        case 0x360398u: goto label_360398;
        case 0x36039cu: goto label_36039c;
        case 0x3603a0u: goto label_3603a0;
        case 0x3603a4u: goto label_3603a4;
        case 0x3603a8u: goto label_3603a8;
        case 0x3603acu: goto label_3603ac;
        case 0x3603b0u: goto label_3603b0;
        case 0x3603b4u: goto label_3603b4;
        case 0x3603b8u: goto label_3603b8;
        case 0x3603bcu: goto label_3603bc;
        case 0x3603c0u: goto label_3603c0;
        case 0x3603c4u: goto label_3603c4;
        case 0x3603c8u: goto label_3603c8;
        case 0x3603ccu: goto label_3603cc;
        case 0x3603d0u: goto label_3603d0;
        case 0x3603d4u: goto label_3603d4;
        case 0x3603d8u: goto label_3603d8;
        case 0x3603dcu: goto label_3603dc;
        case 0x3603e0u: goto label_3603e0;
        case 0x3603e4u: goto label_3603e4;
        case 0x3603e8u: goto label_3603e8;
        case 0x3603ecu: goto label_3603ec;
        case 0x3603f0u: goto label_3603f0;
        case 0x3603f4u: goto label_3603f4;
        case 0x3603f8u: goto label_3603f8;
        case 0x3603fcu: goto label_3603fc;
        case 0x360400u: goto label_360400;
        case 0x360404u: goto label_360404;
        case 0x360408u: goto label_360408;
        case 0x36040cu: goto label_36040c;
        case 0x360410u: goto label_360410;
        case 0x360414u: goto label_360414;
        case 0x360418u: goto label_360418;
        case 0x36041cu: goto label_36041c;
        case 0x360420u: goto label_360420;
        case 0x360424u: goto label_360424;
        case 0x360428u: goto label_360428;
        case 0x36042cu: goto label_36042c;
        case 0x360430u: goto label_360430;
        case 0x360434u: goto label_360434;
        case 0x360438u: goto label_360438;
        case 0x36043cu: goto label_36043c;
        case 0x360440u: goto label_360440;
        case 0x360444u: goto label_360444;
        case 0x360448u: goto label_360448;
        case 0x36044cu: goto label_36044c;
        case 0x360450u: goto label_360450;
        case 0x360454u: goto label_360454;
        case 0x360458u: goto label_360458;
        case 0x36045cu: goto label_36045c;
        case 0x360460u: goto label_360460;
        case 0x360464u: goto label_360464;
        case 0x360468u: goto label_360468;
        case 0x36046cu: goto label_36046c;
        case 0x360470u: goto label_360470;
        case 0x360474u: goto label_360474;
        case 0x360478u: goto label_360478;
        case 0x36047cu: goto label_36047c;
        case 0x360480u: goto label_360480;
        case 0x360484u: goto label_360484;
        case 0x360488u: goto label_360488;
        case 0x36048cu: goto label_36048c;
        case 0x360490u: goto label_360490;
        case 0x360494u: goto label_360494;
        case 0x360498u: goto label_360498;
        case 0x36049cu: goto label_36049c;
        case 0x3604a0u: goto label_3604a0;
        case 0x3604a4u: goto label_3604a4;
        case 0x3604a8u: goto label_3604a8;
        case 0x3604acu: goto label_3604ac;
        case 0x3604b0u: goto label_3604b0;
        case 0x3604b4u: goto label_3604b4;
        case 0x3604b8u: goto label_3604b8;
        case 0x3604bcu: goto label_3604bc;
        case 0x3604c0u: goto label_3604c0;
        case 0x3604c4u: goto label_3604c4;
        case 0x3604c8u: goto label_3604c8;
        case 0x3604ccu: goto label_3604cc;
        case 0x3604d0u: goto label_3604d0;
        case 0x3604d4u: goto label_3604d4;
        case 0x3604d8u: goto label_3604d8;
        case 0x3604dcu: goto label_3604dc;
        case 0x3604e0u: goto label_3604e0;
        case 0x3604e4u: goto label_3604e4;
        case 0x3604e8u: goto label_3604e8;
        case 0x3604ecu: goto label_3604ec;
        case 0x3604f0u: goto label_3604f0;
        case 0x3604f4u: goto label_3604f4;
        case 0x3604f8u: goto label_3604f8;
        case 0x3604fcu: goto label_3604fc;
        case 0x360500u: goto label_360500;
        case 0x360504u: goto label_360504;
        case 0x360508u: goto label_360508;
        case 0x36050cu: goto label_36050c;
        case 0x360510u: goto label_360510;
        case 0x360514u: goto label_360514;
        case 0x360518u: goto label_360518;
        case 0x36051cu: goto label_36051c;
        case 0x360520u: goto label_360520;
        case 0x360524u: goto label_360524;
        case 0x360528u: goto label_360528;
        case 0x36052cu: goto label_36052c;
        case 0x360530u: goto label_360530;
        case 0x360534u: goto label_360534;
        case 0x360538u: goto label_360538;
        case 0x36053cu: goto label_36053c;
        case 0x360540u: goto label_360540;
        case 0x360544u: goto label_360544;
        case 0x360548u: goto label_360548;
        case 0x36054cu: goto label_36054c;
        case 0x360550u: goto label_360550;
        case 0x360554u: goto label_360554;
        case 0x360558u: goto label_360558;
        case 0x36055cu: goto label_36055c;
        case 0x360560u: goto label_360560;
        case 0x360564u: goto label_360564;
        case 0x360568u: goto label_360568;
        case 0x36056cu: goto label_36056c;
        case 0x360570u: goto label_360570;
        case 0x360574u: goto label_360574;
        case 0x360578u: goto label_360578;
        case 0x36057cu: goto label_36057c;
        case 0x360580u: goto label_360580;
        case 0x360584u: goto label_360584;
        case 0x360588u: goto label_360588;
        case 0x36058cu: goto label_36058c;
        case 0x360590u: goto label_360590;
        case 0x360594u: goto label_360594;
        case 0x360598u: goto label_360598;
        case 0x36059cu: goto label_36059c;
        case 0x3605a0u: goto label_3605a0;
        case 0x3605a4u: goto label_3605a4;
        case 0x3605a8u: goto label_3605a8;
        case 0x3605acu: goto label_3605ac;
        case 0x3605b0u: goto label_3605b0;
        case 0x3605b4u: goto label_3605b4;
        case 0x3605b8u: goto label_3605b8;
        case 0x3605bcu: goto label_3605bc;
        case 0x3605c0u: goto label_3605c0;
        case 0x3605c4u: goto label_3605c4;
        case 0x3605c8u: goto label_3605c8;
        case 0x3605ccu: goto label_3605cc;
        case 0x3605d0u: goto label_3605d0;
        case 0x3605d4u: goto label_3605d4;
        case 0x3605d8u: goto label_3605d8;
        case 0x3605dcu: goto label_3605dc;
        case 0x3605e0u: goto label_3605e0;
        case 0x3605e4u: goto label_3605e4;
        case 0x3605e8u: goto label_3605e8;
        case 0x3605ecu: goto label_3605ec;
        case 0x3605f0u: goto label_3605f0;
        case 0x3605f4u: goto label_3605f4;
        case 0x3605f8u: goto label_3605f8;
        case 0x3605fcu: goto label_3605fc;
        case 0x360600u: goto label_360600;
        case 0x360604u: goto label_360604;
        case 0x360608u: goto label_360608;
        case 0x36060cu: goto label_36060c;
        case 0x360610u: goto label_360610;
        case 0x360614u: goto label_360614;
        case 0x360618u: goto label_360618;
        case 0x36061cu: goto label_36061c;
        case 0x360620u: goto label_360620;
        case 0x360624u: goto label_360624;
        case 0x360628u: goto label_360628;
        case 0x36062cu: goto label_36062c;
        case 0x360630u: goto label_360630;
        case 0x360634u: goto label_360634;
        case 0x360638u: goto label_360638;
        case 0x36063cu: goto label_36063c;
        case 0x360640u: goto label_360640;
        case 0x360644u: goto label_360644;
        case 0x360648u: goto label_360648;
        case 0x36064cu: goto label_36064c;
        case 0x360650u: goto label_360650;
        case 0x360654u: goto label_360654;
        case 0x360658u: goto label_360658;
        case 0x36065cu: goto label_36065c;
        case 0x360660u: goto label_360660;
        case 0x360664u: goto label_360664;
        case 0x360668u: goto label_360668;
        case 0x36066cu: goto label_36066c;
        case 0x360670u: goto label_360670;
        case 0x360674u: goto label_360674;
        case 0x360678u: goto label_360678;
        case 0x36067cu: goto label_36067c;
        case 0x360680u: goto label_360680;
        case 0x360684u: goto label_360684;
        case 0x360688u: goto label_360688;
        case 0x36068cu: goto label_36068c;
        case 0x360690u: goto label_360690;
        case 0x360694u: goto label_360694;
        case 0x360698u: goto label_360698;
        case 0x36069cu: goto label_36069c;
        case 0x3606a0u: goto label_3606a0;
        case 0x3606a4u: goto label_3606a4;
        case 0x3606a8u: goto label_3606a8;
        case 0x3606acu: goto label_3606ac;
        case 0x3606b0u: goto label_3606b0;
        case 0x3606b4u: goto label_3606b4;
        case 0x3606b8u: goto label_3606b8;
        case 0x3606bcu: goto label_3606bc;
        case 0x3606c0u: goto label_3606c0;
        case 0x3606c4u: goto label_3606c4;
        case 0x3606c8u: goto label_3606c8;
        case 0x3606ccu: goto label_3606cc;
        case 0x3606d0u: goto label_3606d0;
        case 0x3606d4u: goto label_3606d4;
        case 0x3606d8u: goto label_3606d8;
        case 0x3606dcu: goto label_3606dc;
        case 0x3606e0u: goto label_3606e0;
        case 0x3606e4u: goto label_3606e4;
        case 0x3606e8u: goto label_3606e8;
        case 0x3606ecu: goto label_3606ec;
        case 0x3606f0u: goto label_3606f0;
        case 0x3606f4u: goto label_3606f4;
        case 0x3606f8u: goto label_3606f8;
        case 0x3606fcu: goto label_3606fc;
        case 0x360700u: goto label_360700;
        case 0x360704u: goto label_360704;
        case 0x360708u: goto label_360708;
        case 0x36070cu: goto label_36070c;
        case 0x360710u: goto label_360710;
        case 0x360714u: goto label_360714;
        case 0x360718u: goto label_360718;
        case 0x36071cu: goto label_36071c;
        case 0x360720u: goto label_360720;
        case 0x360724u: goto label_360724;
        case 0x360728u: goto label_360728;
        case 0x36072cu: goto label_36072c;
        case 0x360730u: goto label_360730;
        case 0x360734u: goto label_360734;
        case 0x360738u: goto label_360738;
        case 0x36073cu: goto label_36073c;
        case 0x360740u: goto label_360740;
        case 0x360744u: goto label_360744;
        case 0x360748u: goto label_360748;
        case 0x36074cu: goto label_36074c;
        case 0x360750u: goto label_360750;
        case 0x360754u: goto label_360754;
        case 0x360758u: goto label_360758;
        case 0x36075cu: goto label_36075c;
        case 0x360760u: goto label_360760;
        case 0x360764u: goto label_360764;
        case 0x360768u: goto label_360768;
        case 0x36076cu: goto label_36076c;
        case 0x360770u: goto label_360770;
        case 0x360774u: goto label_360774;
        case 0x360778u: goto label_360778;
        case 0x36077cu: goto label_36077c;
        case 0x360780u: goto label_360780;
        case 0x360784u: goto label_360784;
        case 0x360788u: goto label_360788;
        case 0x36078cu: goto label_36078c;
        case 0x360790u: goto label_360790;
        case 0x360794u: goto label_360794;
        case 0x360798u: goto label_360798;
        case 0x36079cu: goto label_36079c;
        case 0x3607a0u: goto label_3607a0;
        case 0x3607a4u: goto label_3607a4;
        case 0x3607a8u: goto label_3607a8;
        case 0x3607acu: goto label_3607ac;
        case 0x3607b0u: goto label_3607b0;
        case 0x3607b4u: goto label_3607b4;
        case 0x3607b8u: goto label_3607b8;
        case 0x3607bcu: goto label_3607bc;
        case 0x3607c0u: goto label_3607c0;
        case 0x3607c4u: goto label_3607c4;
        case 0x3607c8u: goto label_3607c8;
        case 0x3607ccu: goto label_3607cc;
        case 0x3607d0u: goto label_3607d0;
        case 0x3607d4u: goto label_3607d4;
        case 0x3607d8u: goto label_3607d8;
        case 0x3607dcu: goto label_3607dc;
        case 0x3607e0u: goto label_3607e0;
        case 0x3607e4u: goto label_3607e4;
        case 0x3607e8u: goto label_3607e8;
        case 0x3607ecu: goto label_3607ec;
        case 0x3607f0u: goto label_3607f0;
        case 0x3607f4u: goto label_3607f4;
        case 0x3607f8u: goto label_3607f8;
        case 0x3607fcu: goto label_3607fc;
        case 0x360800u: goto label_360800;
        case 0x360804u: goto label_360804;
        case 0x360808u: goto label_360808;
        case 0x36080cu: goto label_36080c;
        case 0x360810u: goto label_360810;
        case 0x360814u: goto label_360814;
        case 0x360818u: goto label_360818;
        case 0x36081cu: goto label_36081c;
        case 0x360820u: goto label_360820;
        case 0x360824u: goto label_360824;
        case 0x360828u: goto label_360828;
        case 0x36082cu: goto label_36082c;
        case 0x360830u: goto label_360830;
        case 0x360834u: goto label_360834;
        case 0x360838u: goto label_360838;
        case 0x36083cu: goto label_36083c;
        case 0x360840u: goto label_360840;
        case 0x360844u: goto label_360844;
        case 0x360848u: goto label_360848;
        case 0x36084cu: goto label_36084c;
        case 0x360850u: goto label_360850;
        case 0x360854u: goto label_360854;
        case 0x360858u: goto label_360858;
        case 0x36085cu: goto label_36085c;
        case 0x360860u: goto label_360860;
        case 0x360864u: goto label_360864;
        case 0x360868u: goto label_360868;
        case 0x36086cu: goto label_36086c;
        case 0x360870u: goto label_360870;
        case 0x360874u: goto label_360874;
        case 0x360878u: goto label_360878;
        case 0x36087cu: goto label_36087c;
        case 0x360880u: goto label_360880;
        case 0x360884u: goto label_360884;
        case 0x360888u: goto label_360888;
        case 0x36088cu: goto label_36088c;
        case 0x360890u: goto label_360890;
        case 0x360894u: goto label_360894;
        case 0x360898u: goto label_360898;
        case 0x36089cu: goto label_36089c;
        case 0x3608a0u: goto label_3608a0;
        case 0x3608a4u: goto label_3608a4;
        case 0x3608a8u: goto label_3608a8;
        case 0x3608acu: goto label_3608ac;
        case 0x3608b0u: goto label_3608b0;
        case 0x3608b4u: goto label_3608b4;
        case 0x3608b8u: goto label_3608b8;
        case 0x3608bcu: goto label_3608bc;
        case 0x3608c0u: goto label_3608c0;
        case 0x3608c4u: goto label_3608c4;
        case 0x3608c8u: goto label_3608c8;
        case 0x3608ccu: goto label_3608cc;
        case 0x3608d0u: goto label_3608d0;
        case 0x3608d4u: goto label_3608d4;
        case 0x3608d8u: goto label_3608d8;
        case 0x3608dcu: goto label_3608dc;
        case 0x3608e0u: goto label_3608e0;
        case 0x3608e4u: goto label_3608e4;
        case 0x3608e8u: goto label_3608e8;
        case 0x3608ecu: goto label_3608ec;
        case 0x3608f0u: goto label_3608f0;
        case 0x3608f4u: goto label_3608f4;
        case 0x3608f8u: goto label_3608f8;
        case 0x3608fcu: goto label_3608fc;
        case 0x360900u: goto label_360900;
        case 0x360904u: goto label_360904;
        case 0x360908u: goto label_360908;
        case 0x36090cu: goto label_36090c;
        case 0x360910u: goto label_360910;
        case 0x360914u: goto label_360914;
        case 0x360918u: goto label_360918;
        case 0x36091cu: goto label_36091c;
        case 0x360920u: goto label_360920;
        case 0x360924u: goto label_360924;
        case 0x360928u: goto label_360928;
        case 0x36092cu: goto label_36092c;
        case 0x360930u: goto label_360930;
        case 0x360934u: goto label_360934;
        case 0x360938u: goto label_360938;
        case 0x36093cu: goto label_36093c;
        default: break;
    }

    ctx->pc = 0x35f520u;

label_35f520:
    // 0x35f520: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x35f520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_35f524:
    // 0x35f524: 0x3c070065  lui         $a3, 0x65
    ctx->pc = 0x35f524u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)101 << 16));
label_35f528:
    // 0x35f528: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x35f528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_35f52c:
    // 0x35f52c: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x35f52cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_35f530:
    // 0x35f530: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x35f530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_35f534:
    // 0x35f534: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35f534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35f538:
    // 0x35f538: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x35f538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_35f53c:
    // 0x35f53c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x35f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_35f540:
    // 0x35f540: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x35f540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_35f544:
    // 0x35f544: 0x24e74680  addiu       $a3, $a3, 0x4680
    ctx->pc = 0x35f544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18048));
label_35f548:
    // 0x35f548: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35f548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_35f54c:
    // 0x35f54c: 0x24c64940  addiu       $a2, $a2, 0x4940
    ctx->pc = 0x35f54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18752));
label_35f550:
    // 0x35f550: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35f550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_35f554:
    // 0x35f554: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35f554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_35f558:
    // 0x35f558: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35f558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35f55c:
    // 0x35f55c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35f55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35f560:
    // 0x35f560: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35f560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35f564:
    // 0x35f564: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35f564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35f568:
    // 0x35f568: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x35f568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_35f56c:
    // 0x35f56c: 0x8c480ea4  lw          $t0, 0xEA4($v0)
    ctx->pc = 0x35f56cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_35f570:
    // 0x35f570: 0x8c710e80  lw          $s1, 0xE80($v1)
    ctx->pc = 0x35f570u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_35f574:
    // 0x35f574: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35f574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35f578:
    // 0x35f578: 0x8d16012c  lw          $s6, 0x12C($t0)
    ctx->pc = 0x35f578u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 300)));
label_35f57c:
    // 0x35f57c: 0x8c450e18  lw          $a1, 0xE18($v0)
    ctx->pc = 0x35f57cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3608)));
label_35f580:
    // 0x35f580: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x35f580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_35f584:
    // 0x35f584: 0x8e280968  lw          $t0, 0x968($s1)
    ctx->pc = 0x35f584u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_35f588:
    // 0x35f588: 0x8e22077c  lw          $v0, 0x77C($s1)
    ctx->pc = 0x35f588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1916)));
label_35f58c:
    // 0x35f58c: 0x24be0084  addiu       $fp, $a1, 0x84
    ctx->pc = 0x35f58cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 132));
label_35f590:
    // 0x35f590: 0x82940  sll         $a1, $t0, 5
    ctx->pc = 0x35f590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_35f594:
    // 0x35f594: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x35f594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_35f598:
    // 0x35f598: 0xe58021  addu        $s0, $a3, $a1
    ctx->pc = 0x35f598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_35f59c:
    // 0x35f59c: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x35f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_35f5a0:
    // 0x35f5a0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x35f5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_35f5a4:
    // 0x35f5a4: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x35f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_35f5a8:
    // 0x35f5a8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_35f5ac:
    if (ctx->pc == 0x35F5ACu) {
        ctx->pc = 0x35F5ACu;
            // 0x35f5ac: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x35F5B0u;
        goto label_35f5b0;
    }
    ctx->pc = 0x35F5A8u;
    {
        const bool branch_taken_0x35f5a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35F5A8u;
            // 0x35f5ac: 0xc22821  addu        $a1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f5a8) {
            ctx->pc = 0x35F5CCu;
            goto label_35f5cc;
        }
    }
    ctx->pc = 0x35F5B0u;
label_35f5b0:
    // 0x35f5b0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x35f5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_35f5b4:
    // 0x35f5b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_35f5b8:
    // 0x35f5b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35f5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_35f5bc:
    // 0x35f5bc: 0x0  nop
    ctx->pc = 0x35f5bcu;
    // NOP
label_35f5c0:
    // 0x35f5c0: 0x0  nop
    ctx->pc = 0x35f5c0u;
    // NOP
label_35f5c4:
    // 0x35f5c4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_35f5c8:
    if (ctx->pc == 0x35F5C8u) {
        ctx->pc = 0x35F5CCu;
        goto label_35f5cc;
    }
    ctx->pc = 0x35F5C4u;
    {
        const bool branch_taken_0x35f5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f5c4) {
            ctx->pc = 0x35F5B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35f5b0;
        }
    }
    ctx->pc = 0x35F5CCu;
label_35f5cc:
    // 0x35f5cc: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x35f5ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_35f5d0:
    // 0x35f5d0: 0x8fc40014  lw          $a0, 0x14($fp)
    ctx->pc = 0x35f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_35f5d4:
    // 0x35f5d4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x35f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_35f5d8:
    // 0x35f5d8: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x35f5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_35f5dc:
    // 0x35f5dc: 0x92420078  lbu         $v0, 0x78($s2)
    ctx->pc = 0x35f5dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 120)));
label_35f5e0:
    // 0x35f5e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_35f5e4:
    // 0x35f5e4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x35f5e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_35f5e8:
    // 0x35f5e8: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
label_35f5ec:
    if (ctx->pc == 0x35F5ECu) {
        ctx->pc = 0x35F5ECu;
            // 0x35f5ec: 0xafa300c4  sw          $v1, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
        ctx->pc = 0x35F5F0u;
        goto label_35f5f0;
    }
    ctx->pc = 0x35F5E8u;
    {
        const bool branch_taken_0x35f5e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35F5E8u;
            // 0x35f5ec: 0xafa300c4  sw          $v1, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f5e8) {
            ctx->pc = 0x35F6B0u;
            goto label_35f6b0;
        }
    }
    ctx->pc = 0x35F5F0u;
label_35f5f0:
    // 0x35f5f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x35f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_35f5f4:
    // 0x35f5f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35f5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35f5f8:
    // 0x35f5f8: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x35f5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_35f5fc:
    // 0x35f5fc: 0x27a400c4  addiu       $a0, $sp, 0xC4
    ctx->pc = 0x35f5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_35f600:
    // 0x35f600: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x35f600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_35f604:
    // 0x35f604: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x35f604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_35f608:
    // 0x35f608: 0x14e00017  bnez        $a3, . + 4 + (0x17 << 2)
label_35f60c:
    if (ctx->pc == 0x35F60Cu) {
        ctx->pc = 0x35F610u;
        goto label_35f610;
    }
    ctx->pc = 0x35F608u;
    {
        const bool branch_taken_0x35f608 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f608) {
            ctx->pc = 0x35F668u;
            goto label_35f668;
        }
    }
    ctx->pc = 0x35F610u;
label_35f610:
    // 0x35f610: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x35f610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35f614:
    // 0x35f614: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x35f614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f618:
    // 0x35f618: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35f618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35f61c:
    // 0x35f61c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_35f620:
    if (ctx->pc == 0x35F620u) {
        ctx->pc = 0x35F624u;
        goto label_35f624;
    }
    ctx->pc = 0x35F61Cu;
    {
        const bool branch_taken_0x35f61c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35f61c) {
            ctx->pc = 0x35F698u;
            goto label_35f698;
        }
    }
    ctx->pc = 0x35F624u;
label_35f624:
    // 0x35f624: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x35f624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_35f628:
    // 0x35f628: 0xc4c00060  lwc1        $f0, 0x60($a2)
    ctx->pc = 0x35f628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f62c:
    // 0x35f62c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x35f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35f630:
    // 0x35f630: 0xc4630018  lwc1        $f3, 0x18($v1)
    ctx->pc = 0x35f630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35f634:
    // 0x35f634: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x35f634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_35f638:
    // 0x35f638: 0xe4c00060  swc1        $f0, 0x60($a2)
    ctx->pc = 0x35f638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 96), bits); }
label_35f63c:
    // 0x35f63c: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x35f63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f640:
    // 0x35f640: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x35f640u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35f644:
    // 0x35f644: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_35f648:
    if (ctx->pc == 0x35F648u) {
        ctx->pc = 0x35F64Cu;
        goto label_35f64c;
    }
    ctx->pc = 0x35F644u;
    {
        const bool branch_taken_0x35f644 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35f644) {
            ctx->pc = 0x35F658u;
            goto label_35f658;
        }
    }
    ctx->pc = 0x35F64Cu;
label_35f64c:
    // 0x35f64c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x35f64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f650:
    // 0x35f650: 0xe6400060  swc1        $f0, 0x60($s2)
    ctx->pc = 0x35f650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
label_35f654:
    // 0x35f654: 0x0  nop
    ctx->pc = 0x35f654u;
    // NOP
label_35f658:
    // 0x35f658: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x35f658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f65c:
    // 0x35f65c: 0x1000000e  b           . + 4 + (0xE << 2)
label_35f660:
    if (ctx->pc == 0x35F660u) {
        ctx->pc = 0x35F660u;
            // 0x35f660: 0xe640006c  swc1        $f0, 0x6C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
        ctx->pc = 0x35F664u;
        goto label_35f664;
    }
    ctx->pc = 0x35F65Cu;
    {
        const bool branch_taken_0x35f65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35F65Cu;
            // 0x35f660: 0xe640006c  swc1        $f0, 0x6C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f65c) {
            ctx->pc = 0x35F698u;
            goto label_35f698;
        }
    }
    ctx->pc = 0x35F664u;
label_35f664:
    // 0x35f664: 0x0  nop
    ctx->pc = 0x35f664u;
    // NOP
label_35f668:
    // 0x35f668: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35f668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35f66c:
    // 0x35f66c: 0xc4c00060  lwc1        $f0, 0x60($a2)
    ctx->pc = 0x35f66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f670:
    // 0x35f670: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x35f670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_35f674:
    // 0x35f674: 0xe4c00060  swc1        $f0, 0x60($a2)
    ctx->pc = 0x35f674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 96), bits); }
label_35f678:
    // 0x35f678: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x35f678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35f67c:
    // 0x35f67c: 0xc4c00060  lwc1        $f0, 0x60($a2)
    ctx->pc = 0x35f67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f680:
    // 0x35f680: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x35f680u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35f684:
    // 0x35f684: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_35f688:
    if (ctx->pc == 0x35F688u) {
        ctx->pc = 0x35F68Cu;
        goto label_35f68c;
    }
    ctx->pc = 0x35F684u;
    {
        const bool branch_taken_0x35f684 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35f684) {
            ctx->pc = 0x35F698u;
            goto label_35f698;
        }
    }
    ctx->pc = 0x35F68Cu;
label_35f68c:
    // 0x35f68c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x35f68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f690:
    // 0x35f690: 0xe4c00060  swc1        $f0, 0x60($a2)
    ctx->pc = 0x35f690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 96), bits); }
label_35f694:
    // 0x35f694: 0x0  nop
    ctx->pc = 0x35f694u;
    // NOP
label_35f698:
    // 0x35f698: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x35f698u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_35f69c:
    // 0x35f69c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x35f69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_35f6a0:
    // 0x35f6a0: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x35f6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_35f6a4:
    // 0x35f6a4: 0x1c60ffd8  bgtz        $v1, . + 4 + (-0x28 << 2)
label_35f6a8:
    if (ctx->pc == 0x35F6A8u) {
        ctx->pc = 0x35F6A8u;
            // 0x35f6a8: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->pc = 0x35F6ACu;
        goto label_35f6ac;
    }
    ctx->pc = 0x35F6A4u;
    {
        const bool branch_taken_0x35f6a4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x35F6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35F6A4u;
            // 0x35f6a8: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f6a4) {
            ctx->pc = 0x35F608u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35f608;
        }
    }
    ctx->pc = 0x35F6ACu;
label_35f6ac:
    // 0x35f6ac: 0x0  nop
    ctx->pc = 0x35f6acu;
    // NOP
label_35f6b0:
    // 0x35f6b0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x35f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_35f6b4:
    // 0x35f6b4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_35f6b8:
    if (ctx->pc == 0x35F6B8u) {
        ctx->pc = 0x35F6B8u;
            // 0x35f6b8: 0x92440078  lbu         $a0, 0x78($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->pc = 0x35F6BCu;
        goto label_35f6bc;
    }
    ctx->pc = 0x35F6B4u;
    {
        const bool branch_taken_0x35f6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f6b4) {
            ctx->pc = 0x35F6B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F6B4u;
            // 0x35f6b8: 0x92440078  lbu         $a0, 0x78($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F6F8u;
            goto label_35f6f8;
        }
    }
    ctx->pc = 0x35F6BCu;
label_35f6bc:
    // 0x35f6bc: 0x92420098  lbu         $v0, 0x98($s2)
    ctx->pc = 0x35f6bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 152)));
label_35f6c0:
    // 0x35f6c0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_35f6c4:
    if (ctx->pc == 0x35F6C4u) {
        ctx->pc = 0x35F6C8u;
        goto label_35f6c8;
    }
    ctx->pc = 0x35F6C0u;
    {
        const bool branch_taken_0x35f6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f6c0) {
            ctx->pc = 0x35F6F4u;
            goto label_35f6f4;
        }
    }
    ctx->pc = 0x35F6C8u;
label_35f6c8:
    // 0x35f6c8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x35f6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f6cc:
    // 0x35f6cc: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x35f6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35f6d0:
    // 0x35f6d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x35f6d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35f6d4:
    // 0x35f6d4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_35f6d8:
    if (ctx->pc == 0x35F6D8u) {
        ctx->pc = 0x35F6DCu;
        goto label_35f6dc;
    }
    ctx->pc = 0x35F6D4u;
    {
        const bool branch_taken_0x35f6d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35f6d4) {
            ctx->pc = 0x35F6F4u;
            goto label_35f6f4;
        }
    }
    ctx->pc = 0x35F6DCu;
label_35f6dc:
    // 0x35f6dc: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x35f6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_35f6e0:
    // 0x35f6e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35f6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35f6e4:
    // 0x35f6e4: 0xc122d2c  jal         func_48B4B0
label_35f6e8:
    if (ctx->pc == 0x35F6E8u) {
        ctx->pc = 0x35F6E8u;
            // 0x35f6e8: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x35F6ECu;
        goto label_35f6ec;
    }
    ctx->pc = 0x35F6E4u;
    SET_GPR_U32(ctx, 31, 0x35F6ECu);
    ctx->pc = 0x35F6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F6E4u;
            // 0x35f6e8: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F6ECu; }
        if (ctx->pc != 0x35F6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F6ECu; }
        if (ctx->pc != 0x35F6ECu) { return; }
    }
    ctx->pc = 0x35F6ECu;
label_35f6ec:
    // 0x35f6ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35f6f0:
    // 0x35f6f0: 0xa2420098  sb          $v0, 0x98($s2)
    ctx->pc = 0x35f6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 152), (uint8_t)GPR_U32(ctx, 2));
label_35f6f4:
    // 0x35f6f4: 0x92440078  lbu         $a0, 0x78($s2)
    ctx->pc = 0x35f6f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 120)));
label_35f6f8:
    // 0x35f6f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35f6fc:
    // 0x35f6fc: 0x50830164  beql        $a0, $v1, . + 4 + (0x164 << 2)
label_35f700:
    if (ctx->pc == 0x35F700u) {
        ctx->pc = 0x35F700u;
            // 0x35f700: 0xc602001c  lwc1        $f2, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x35F704u;
        goto label_35f704;
    }
    ctx->pc = 0x35F6FCu;
    {
        const bool branch_taken_0x35f6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35f6fc) {
            ctx->pc = 0x35F700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F6FCu;
            // 0x35f700: 0xc602001c  lwc1        $f2, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x35FC90u;
            goto label_35fc90;
        }
    }
    ctx->pc = 0x35F704u;
label_35f704:
    // 0x35f704: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35f704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35f708:
    // 0x35f708: 0x5082015c  beql        $a0, $v0, . + 4 + (0x15C << 2)
label_35f70c:
    if (ctx->pc == 0x35F70Cu) {
        ctx->pc = 0x35F70Cu;
            // 0x35f70c: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->pc = 0x35F710u;
        goto label_35f710;
    }
    ctx->pc = 0x35F708u;
    {
        const bool branch_taken_0x35f708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x35f708) {
            ctx->pc = 0x35F70Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F708u;
            // 0x35f70c: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35FC7Cu;
            goto label_35fc7c;
        }
    }
    ctx->pc = 0x35F710u;
label_35f710:
    // 0x35f710: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35f710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35f714:
    // 0x35f714: 0x50870033  beql        $a0, $a3, . + 4 + (0x33 << 2)
label_35f718:
    if (ctx->pc == 0x35F718u) {
        ctx->pc = 0x35F718u;
            // 0x35f718: 0x8e220cb4  lw          $v0, 0xCB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3252)));
        ctx->pc = 0x35F71Cu;
        goto label_35f71c;
    }
    ctx->pc = 0x35F714u;
    {
        const bool branch_taken_0x35f714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x35f714) {
            ctx->pc = 0x35F718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F714u;
            // 0x35f718: 0x8e220cb4  lw          $v0, 0xCB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F7E4u;
            goto label_35f7e4;
        }
    }
    ctx->pc = 0x35F71Cu;
label_35f71c:
    // 0x35f71c: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_35f720:
    if (ctx->pc == 0x35F720u) {
        ctx->pc = 0x35F720u;
            // 0x35f720: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x35F724u;
        goto label_35f724;
    }
    ctx->pc = 0x35F71Cu;
    {
        const bool branch_taken_0x35f71c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f71c) {
            ctx->pc = 0x35F720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F71Cu;
            // 0x35f720: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F72Cu;
            goto label_35f72c;
        }
    }
    ctx->pc = 0x35F724u;
label_35f724:
    // 0x35f724: 0x10000180  b           . + 4 + (0x180 << 2)
label_35f728:
    if (ctx->pc == 0x35F728u) {
        ctx->pc = 0x35F728u;
            // 0x35f728: 0x8e220cb4  lw          $v0, 0xCB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3252)));
        ctx->pc = 0x35F72Cu;
        goto label_35f72c;
    }
    ctx->pc = 0x35F724u;
    {
        const bool branch_taken_0x35f724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35F724u;
            // 0x35f728: 0x8e220cb4  lw          $v0, 0xCB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f724) {
            ctx->pc = 0x35FD28u;
            goto label_35fd28;
        }
    }
    ctx->pc = 0x35F72Cu;
label_35f72c:
    // 0x35f72c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x35f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_35f730:
    // 0x35f730: 0xae430058  sw          $v1, 0x58($s2)
    ctx->pc = 0x35f730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
label_35f734:
    // 0x35f734: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x35f734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_35f738:
    // 0x35f738: 0xae43005c  sw          $v1, 0x5C($s2)
    ctx->pc = 0x35f738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 3));
label_35f73c:
    // 0x35f73c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35f73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35f740:
    // 0x35f740: 0xa2400076  sb          $zero, 0x76($s2)
    ctx->pc = 0x35f740u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 118), (uint8_t)GPR_U32(ctx, 0));
label_35f744:
    // 0x35f744: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x35f744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_35f748:
    // 0x35f748: 0xa6400074  sh          $zero, 0x74($s2)
    ctx->pc = 0x35f748u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 0));
label_35f74c:
    // 0x35f74c: 0xae470054  sw          $a3, 0x54($s2)
    ctx->pc = 0x35f74cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 7));
label_35f750:
    // 0x35f750: 0xc04a576  jal         func_1295D8
label_35f754:
    if (ctx->pc == 0x35F754u) {
        ctx->pc = 0x35F754u;
            // 0x35f754: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x35F758u;
        goto label_35f758;
    }
    ctx->pc = 0x35F750u;
    SET_GPR_U32(ctx, 31, 0x35F758u);
    ctx->pc = 0x35F754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F750u;
            // 0x35f754: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F758u; }
        if (ctx->pc != 0x35F758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F758u; }
        if (ctx->pc != 0x35F758u) { return; }
    }
    ctx->pc = 0x35F758u;
label_35f758:
    // 0x35f758: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x35f758u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
label_35f75c:
    // 0x35f75c: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x35f75cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_35f760:
    // 0x35f760: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x35f760u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
label_35f764:
    // 0x35f764: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x35f764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_35f768:
    // 0x35f768: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x35f768u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
label_35f76c:
    // 0x35f76c: 0x24c648a0  addiu       $a2, $a2, 0x48A0
    ctx->pc = 0x35f76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18592));
label_35f770:
    // 0x35f770: 0x8e270968  lw          $a3, 0x968($s1)
    ctx->pc = 0x35f770u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_35f774:
    // 0x35f774: 0x24a548f0  addiu       $a1, $a1, 0x48F0
    ctx->pc = 0x35f774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18672));
label_35f778:
    // 0x35f778: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35f778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35f77c:
    // 0x35f77c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x35f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_35f780:
    // 0x35f780: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x35f780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_35f784:
    // 0x35f784: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x35f784u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_35f788:
    // 0x35f788: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x35f788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_35f78c:
    // 0x35f78c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x35f78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f790:
    // 0x35f790: 0xe640007c  swc1        $f0, 0x7C($s2)
    ctx->pc = 0x35f790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
label_35f794:
    // 0x35f794: 0x8e260968  lw          $a2, 0x968($s1)
    ctx->pc = 0x35f794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_35f798:
    // 0x35f798: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x35f798u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_35f79c:
    // 0x35f79c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x35f79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_35f7a0:
    // 0x35f7a0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x35f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f7a4:
    // 0x35f7a4: 0xe6400080  swc1        $f0, 0x80($s2)
    ctx->pc = 0x35f7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
label_35f7a8:
    // 0x35f7a8: 0xa2440078  sb          $a0, 0x78($s2)
    ctx->pc = 0x35f7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 120), (uint8_t)GPR_U32(ctx, 4));
label_35f7ac:
    // 0x35f7ac: 0xa2400098  sb          $zero, 0x98($s2)
    ctx->pc = 0x35f7acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 152), (uint8_t)GPR_U32(ctx, 0));
label_35f7b0:
    // 0x35f7b0: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x35f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_35f7b4:
    // 0x35f7b4: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x35f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_35f7b8:
    // 0x35f7b8: 0x1443015a  bne         $v0, $v1, . + 4 + (0x15A << 2)
label_35f7bc:
    if (ctx->pc == 0x35F7BCu) {
        ctx->pc = 0x35F7C0u;
        goto label_35f7c0;
    }
    ctx->pc = 0x35F7B8u;
    {
        const bool branch_taken_0x35f7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35f7b8) {
            ctx->pc = 0x35FD24u;
            goto label_35fd24;
        }
    }
    ctx->pc = 0x35F7C0u;
label_35f7c0:
    // 0x35f7c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35f7c4:
    // 0x35f7c4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x35f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_35f7c8:
    // 0x35f7c8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x35f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_35f7cc:
    // 0x35f7cc: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x35f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_35f7d0:
    // 0x35f7d0: 0x14430154  bne         $v0, $v1, . + 4 + (0x154 << 2)
label_35f7d4:
    if (ctx->pc == 0x35F7D4u) {
        ctx->pc = 0x35F7D8u;
        goto label_35f7d8;
    }
    ctx->pc = 0x35F7D0u;
    {
        const bool branch_taken_0x35f7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35f7d0) {
            ctx->pc = 0x35FD24u;
            goto label_35fd24;
        }
    }
    ctx->pc = 0x35F7D8u;
label_35f7d8:
    // 0x35f7d8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x35f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_35f7dc:
    // 0x35f7dc: 0x10000151  b           . + 4 + (0x151 << 2)
label_35f7e0:
    if (ctx->pc == 0x35F7E0u) {
        ctx->pc = 0x35F7E0u;
            // 0x35f7e0: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->pc = 0x35F7E4u;
        goto label_35f7e4;
    }
    ctx->pc = 0x35F7DCu;
    {
        const bool branch_taken_0x35f7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35F7DCu;
            // 0x35f7e0: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f7dc) {
            ctx->pc = 0x35FD24u;
            goto label_35fd24;
        }
    }
    ctx->pc = 0x35F7E4u;
label_35f7e4:
    // 0x35f7e4: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x35f7e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_35f7e8:
    // 0x35f7e8: 0x54200006  bnel        $at, $zero, . + 4 + (0x6 << 2)
label_35f7ec:
    if (ctx->pc == 0x35F7ECu) {
        ctx->pc = 0x35F7ECu;
            // 0x35f7ec: 0x7ba200b0  lq          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x35F7F0u;
        goto label_35f7f0;
    }
    ctx->pc = 0x35F7E8u;
    {
        const bool branch_taken_0x35f7e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f7e8) {
            ctx->pc = 0x35F7ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35F7E8u;
            // 0x35f7ec: 0x7ba200b0  lq          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35F804u;
            goto label_35f804;
        }
    }
    ctx->pc = 0x35F7F0u;
label_35f7f0:
    // 0x35f7f0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x35f7f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35f7f4:
    // 0x35f7f4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x35f7f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_35f7f8:
    // 0x35f7f8: 0x320f809  jalr        $t9
label_35f7fc:
    if (ctx->pc == 0x35F7FCu) {
        ctx->pc = 0x35F7FCu;
            // 0x35f7fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35F800u;
        goto label_35f800;
    }
    ctx->pc = 0x35F7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35F800u);
        ctx->pc = 0x35F7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35F7F8u;
            // 0x35f7fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35F800u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35F800u; }
            if (ctx->pc != 0x35F800u) { return; }
        }
        }
    }
    ctx->pc = 0x35F800u;
label_35f800:
    // 0x35f800: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x35f800u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_35f804:
    // 0x35f804: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x35f804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_35f808:
    // 0x35f808: 0x24630e80  addiu       $v1, $v1, 0xE80
    ctx->pc = 0x35f808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3712));
label_35f80c:
    // 0x35f80c: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x35f80cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_35f810:
    // 0x35f810: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x35f810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_35f814:
    // 0x35f814: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x35f814u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_35f818:
    // 0x35f818: 0x8c57cf88  lw          $s7, -0x3078($v0)
    ctx->pc = 0x35f818u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954888)));
label_35f81c:
    // 0x35f81c: 0x64a821  addu        $s5, $v1, $a0
    ctx->pc = 0x35f81cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_35f820:
    // 0x35f820: 0x8e230cb4  lw          $v1, 0xCB4($s1)
    ctx->pc = 0x35f820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3252)));
label_35f824:
    // 0x35f824: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x35f824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_35f828:
    // 0x35f828: 0x14620069  bne         $v1, $v0, . + 4 + (0x69 << 2)
label_35f82c:
    if (ctx->pc == 0x35F82Cu) {
        ctx->pc = 0x35F82Cu;
            // 0x35f82c: 0x8eb00004  lw          $s0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x35F830u;
        goto label_35f830;
    }
    ctx->pc = 0x35F828u;
    {
        const bool branch_taken_0x35f828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35F82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35F828u;
            // 0x35f82c: 0x8eb00004  lw          $s0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f828) {
            ctx->pc = 0x35F9D0u;
            goto label_35f9d0;
        }
    }
    ctx->pc = 0x35F830u;
label_35f830:
    // 0x35f830: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x35f830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_35f834:
    // 0x35f834: 0xc0c5ed0  jal         func_317B40
label_35f838:
    if (ctx->pc == 0x35F838u) {
        ctx->pc = 0x35F838u;
            // 0x35f838: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35F83Cu;
        goto label_35f83c;
    }
    ctx->pc = 0x35F834u;
    SET_GPR_U32(ctx, 31, 0x35F83Cu);
    ctx->pc = 0x35F838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F834u;
            // 0x35f838: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317B40u;
    if (runtime->hasFunction(0x317B40u)) {
        auto targetFn = runtime->lookupFunction(0x317B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F83Cu; }
        if (ctx->pc != 0x35F83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00317B40_0x317b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F83Cu; }
        if (ctx->pc != 0x35F83Cu) { return; }
    }
    ctx->pc = 0x35F83Cu;
label_35f83c:
    // 0x35f83c: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
label_35f840:
    if (ctx->pc == 0x35F840u) {
        ctx->pc = 0x35F844u;
        goto label_35f844;
    }
    ctx->pc = 0x35F83Cu;
    {
        const bool branch_taken_0x35f83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f83c) {
            ctx->pc = 0x35FBA8u;
            goto label_35fba8;
        }
    }
    ctx->pc = 0x35F844u;
label_35f844:
    // 0x35f844: 0x8e030db0  lw          $v1, 0xDB0($s0)
    ctx->pc = 0x35f844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_35f848:
    // 0x35f848: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x35f848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_35f84c:
    // 0x35f84c: 0x106200d6  beq         $v1, $v0, . + 4 + (0xD6 << 2)
label_35f850:
    if (ctx->pc == 0x35F850u) {
        ctx->pc = 0x35F854u;
        goto label_35f854;
    }
    ctx->pc = 0x35F84Cu;
    {
        const bool branch_taken_0x35f84c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35f84c) {
            ctx->pc = 0x35FBA8u;
            goto label_35fba8;
        }
    }
    ctx->pc = 0x35F854u;
label_35f854:
    // 0x35f854: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x35f854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_35f858:
    // 0x35f858: 0x3c0442a0  lui         $a0, 0x42A0
    ctx->pc = 0x35f858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17056 << 16));
label_35f85c:
    // 0x35f85c: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x35f85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_35f860:
    // 0x35f860: 0xc620081c  lwc1        $f0, 0x81C($s1)
    ctx->pc = 0x35f860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35f864:
    // 0x35f864: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x35f864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_35f868:
    // 0x35f868: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x35f868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_35f86c:
    // 0x35f86c: 0xc4a40018  lwc1        $f4, 0x18($a1)
    ctx->pc = 0x35f86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_35f870:
    // 0x35f870: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x35f870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_35f874:
    // 0x35f874: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x35f874u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_35f878:
    // 0x35f878: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x35f878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_35f87c:
    // 0x35f87c: 0xc6280820  lwc1        $f8, 0x820($s1)
    ctx->pc = 0x35f87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_35f880:
    // 0x35f880: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x35f880u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[4];
label_35f884:
    // 0x35f884: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x35f884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_35f888:
    // 0x35f888: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x35f888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_35f88c:
    // 0x35f88c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x35f88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_35f890:
    // 0x35f890: 0x46800260  cvt.s.w     $f9, $f0
    ctx->pc = 0x35f890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
label_35f894:
    // 0x35f894: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x35f894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_35f898:
    // 0x35f898: 0x460741c3  div.s       $f7, $f8, $f7
    ctx->pc = 0x35f898u;
    if (ctx->f[7] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[7] = ctx->f[8] / ctx->f[7];
label_35f89c:
    // 0x35f89c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35f89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35f8a0:
    // 0x35f8a0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35f8a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_35f8a4:
    // 0x35f8a4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x35f8a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_35f8a8:
    // 0x35f8a8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x35f8a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_35f8ac:
    // 0x35f8ac: 0x0  nop
    ctx->pc = 0x35f8acu;
    // NOP
label_35f8b0:
    // 0x35f8b0: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x35f8b0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[4];
label_35f8b4:
    // 0x35f8b4: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x35f8b4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
label_35f8b8:
    // 0x35f8b8: 0x460749c0  add.s       $f7, $f9, $f7
    ctx->pc = 0x35f8b8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[9], ctx->f[7]);
label_35f8bc:
    // 0x35f8bc: 0xc4a60014  lwc1        $f6, 0x14($a1)
    ctx->pc = 0x35f8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_35f8c0:
    // 0x35f8c0: 0x46051018  adda.s      $f2, $f5
    ctx->pc = 0x35f8c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_35f8c4:
    // 0x35f8c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35f8c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35f8c8:
    // 0x35f8c8: 0x4607311c  madd.s      $f4, $f6, $f7
    ctx->pc = 0x35f8c8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[7]));
label_35f8cc:
    // 0x35f8cc: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x35f8ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_35f8d0:
    // 0x35f8d0: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35f8d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_35f8d4:
    // 0x35f8d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35f8d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_35f8d8:
    // 0x35f8d8: 0x46030080  add.s       $f2, $f0, $f3
    ctx->pc = 0x35f8d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_35f8dc:
    // 0x35f8dc: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x35f8dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_35f8e0:
    // 0x35f8e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35f8e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_35f8e4:
    // 0x35f8e4: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35f8e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_35f8e8:
    // 0x35f8e8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x35f8e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_35f8ec:
    // 0x35f8ec: 0x0  nop
    ctx->pc = 0x35f8ecu;
    // NOP
label_35f8f0:
    // 0x35f8f0: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x35f8f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_35f8f4:
    // 0x35f8f4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x35f8f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_35f8f8:
    // 0x35f8f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_35f8fc:
    if (ctx->pc == 0x35F8FCu) {
        ctx->pc = 0x35F900u;
        goto label_35f900;
    }
    ctx->pc = 0x35F8F8u;
    {
        const bool branch_taken_0x35f8f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f8f8) {
            ctx->pc = 0x35F908u;
            goto label_35f908;
        }
    }
    ctx->pc = 0x35F900u;
label_35f900:
    // 0x35f900: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35f900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35f904:
    // 0x35f904: 0x0  nop
    ctx->pc = 0x35f904u;
    // NOP
label_35f908:
    // 0x35f908: 0xc07631c  jal         func_1D8C70
label_35f90c:
    if (ctx->pc == 0x35F90Cu) {
        ctx->pc = 0x35F90Cu;
            // 0x35f90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35F910u;
        goto label_35f910;
    }
    ctx->pc = 0x35F908u;
    SET_GPR_U32(ctx, 31, 0x35F910u);
    ctx->pc = 0x35F90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F908u;
            // 0x35f90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C70u;
    if (runtime->hasFunction(0x1D8C70u)) {
        auto targetFn = runtime->lookupFunction(0x1D8C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F910u; }
        if (ctx->pc != 0x35F910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8C70_0x1d8c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F910u; }
        if (ctx->pc != 0x35F910u) { return; }
    }
    ctx->pc = 0x35F910u;
label_35f910:
    // 0x35f910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35f914:
    // 0x35f914: 0xc077fb0  jal         func_1DFEC0
label_35f918:
    if (ctx->pc == 0x35F918u) {
        ctx->pc = 0x35F918u;
            // 0x35f918: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x35F91Cu;
        goto label_35f91c;
    }
    ctx->pc = 0x35F914u;
    SET_GPR_U32(ctx, 31, 0x35F91Cu);
    ctx->pc = 0x35F918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F914u;
            // 0x35f918: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F91Cu; }
        if (ctx->pc != 0x35F91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F91Cu; }
        if (ctx->pc != 0x35F91Cu) { return; }
    }
    ctx->pc = 0x35F91Cu;
label_35f91c:
    // 0x35f91c: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x35f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_35f920:
    // 0x35f920: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x35f920u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_35f924:
    // 0x35f924: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_35f928:
    if (ctx->pc == 0x35F928u) {
        ctx->pc = 0x35F928u;
            // 0x35f928: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35F92Cu;
        goto label_35f92c;
    }
    ctx->pc = 0x35F924u;
    {
        const bool branch_taken_0x35f924 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x35F928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35F924u;
            // 0x35f928: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f924) {
            ctx->pc = 0x35F940u;
            goto label_35f940;
        }
    }
    ctx->pc = 0x35F92Cu;
label_35f92c:
    // 0x35f92c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x35f92cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_35f930:
    // 0x35f930: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_35f934:
    if (ctx->pc == 0x35F934u) {
        ctx->pc = 0x35F938u;
        goto label_35f938;
    }
    ctx->pc = 0x35F930u;
    {
        const bool branch_taken_0x35f930 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f930) {
            ctx->pc = 0x35F940u;
            goto label_35f940;
        }
    }
    ctx->pc = 0x35F938u;
label_35f938:
    // 0x35f938: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x35f938u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35f93c:
    // 0x35f93c: 0x0  nop
    ctx->pc = 0x35f93cu;
    // NOP
label_35f940:
    // 0x35f940: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_35f944:
    if (ctx->pc == 0x35F944u) {
        ctx->pc = 0x35F948u;
        goto label_35f948;
    }
    ctx->pc = 0x35F940u;
    {
        const bool branch_taken_0x35f940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f940) {
            ctx->pc = 0x35F960u;
            goto label_35f960;
        }
    }
    ctx->pc = 0x35F948u;
label_35f948:
    // 0x35f948: 0xc075eb4  jal         func_1D7AD0
label_35f94c:
    if (ctx->pc == 0x35F94Cu) {
        ctx->pc = 0x35F94Cu;
            // 0x35f94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35F950u;
        goto label_35f950;
    }
    ctx->pc = 0x35F948u;
    SET_GPR_U32(ctx, 31, 0x35F950u);
    ctx->pc = 0x35F94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F948u;
            // 0x35f94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F950u; }
        if (ctx->pc != 0x35F950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F950u; }
        if (ctx->pc != 0x35F950u) { return; }
    }
    ctx->pc = 0x35F950u;
label_35f950:
    // 0x35f950: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_35f954:
    if (ctx->pc == 0x35F954u) {
        ctx->pc = 0x35F958u;
        goto label_35f958;
    }
    ctx->pc = 0x35F950u;
    {
        const bool branch_taken_0x35f950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f950) {
            ctx->pc = 0x35F960u;
            goto label_35f960;
        }
    }
    ctx->pc = 0x35F958u;
label_35f958:
    // 0x35f958: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35f958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35f95c:
    // 0x35f95c: 0x0  nop
    ctx->pc = 0x35f95cu;
    // NOP
label_35f960:
    // 0x35f960: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_35f964:
    if (ctx->pc == 0x35F964u) {
        ctx->pc = 0x35F968u;
        goto label_35f968;
    }
    ctx->pc = 0x35F960u;
    {
        const bool branch_taken_0x35f960 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f960) {
            ctx->pc = 0x35F978u;
            goto label_35f978;
        }
    }
    ctx->pc = 0x35F968u;
label_35f968:
    // 0x35f968: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x35f968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_35f96c:
    // 0x35f96c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x35f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_35f970:
    // 0x35f970: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_35f974:
    if (ctx->pc == 0x35F974u) {
        ctx->pc = 0x35F978u;
        goto label_35f978;
    }
    ctx->pc = 0x35F970u;
    {
        const bool branch_taken_0x35f970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35f970) {
            ctx->pc = 0x35F9B8u;
            goto label_35f9b8;
        }
    }
    ctx->pc = 0x35F978u;
label_35f978:
    // 0x35f978: 0x96040d98  lhu         $a0, 0xD98($s0)
    ctx->pc = 0x35f978u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 3480)));
label_35f97c:
    // 0x35f97c: 0x96420094  lhu         $v0, 0x94($s2)
    ctx->pc = 0x35f97cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 148)));
label_35f980:
    // 0x35f980: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35f980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35f984:
    // 0x35f984: 0x838004  sllv        $s0, $v1, $a0
    ctx->pc = 0x35f984u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_35f988:
    // 0x35f988: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x35f988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_35f98c:
    // 0x35f98c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x35f98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_35f990:
    // 0x35f990: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_35f994:
    if (ctx->pc == 0x35F994u) {
        ctx->pc = 0x35F998u;
        goto label_35f998;
    }
    ctx->pc = 0x35F990u;
    {
        const bool branch_taken_0x35f990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f990) {
            ctx->pc = 0x35F9B8u;
            goto label_35f9b8;
        }
    }
    ctx->pc = 0x35F998u;
label_35f998:
    // 0x35f998: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x35f998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_35f99c:
    // 0x35f99c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x35f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_35f9a0:
    // 0x35f9a0: 0xc072a56  jal         func_1CA958
label_35f9a4:
    if (ctx->pc == 0x35F9A4u) {
        ctx->pc = 0x35F9A4u;
            // 0x35f9a4: 0x9044008c  lbu         $a0, 0x8C($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
        ctx->pc = 0x35F9A8u;
        goto label_35f9a8;
    }
    ctx->pc = 0x35F9A0u;
    SET_GPR_U32(ctx, 31, 0x35F9A8u);
    ctx->pc = 0x35F9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35F9A0u;
            // 0x35f9a4: 0x9044008c  lbu         $a0, 0x8C($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F9A8u; }
        if (ctx->pc != 0x35F9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35F9A8u; }
        if (ctx->pc != 0x35F9A8u) { return; }
    }
    ctx->pc = 0x35F9A8u;
label_35f9a8:
    // 0x35f9a8: 0x96420094  lhu         $v0, 0x94($s2)
    ctx->pc = 0x35f9a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 148)));
label_35f9ac:
    // 0x35f9ac: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x35f9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_35f9b0:
    // 0x35f9b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x35f9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_35f9b4:
    // 0x35f9b4: 0xa6420094  sh          $v0, 0x94($s2)
    ctx->pc = 0x35f9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 148), (uint16_t)GPR_U32(ctx, 2));
label_35f9b8:
    // 0x35f9b8: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x35f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_35f9bc:
    // 0x35f9bc: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x35f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
label_35f9c0:
    // 0x35f9c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35f9c4:
    // 0x35f9c4: 0x10000078  b           . + 4 + (0x78 << 2)
label_35f9c8:
    if (ctx->pc == 0x35F9C8u) {
        ctx->pc = 0x35F9C8u;
            // 0x35f9c8: 0xa2420076  sb          $v0, 0x76($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 118), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x35F9CCu;
        goto label_35f9cc;
    }
    ctx->pc = 0x35F9C4u;
    {
        const bool branch_taken_0x35f9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35F9C4u;
            // 0x35f9c8: 0xa2420076  sb          $v0, 0x76($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 118), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f9c4) {
            ctx->pc = 0x35FBA8u;
            goto label_35fba8;
        }
    }
    ctx->pc = 0x35F9CCu;
label_35f9cc:
    // 0x35f9cc: 0x0  nop
    ctx->pc = 0x35f9ccu;
    // NOP
label_35f9d0:
    // 0x35f9d0: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x35f9d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_35f9d4:
    // 0x35f9d4: 0x14200074  bnez        $at, . + 4 + (0x74 << 2)
label_35f9d8:
    if (ctx->pc == 0x35F9D8u) {
        ctx->pc = 0x35F9DCu;
        goto label_35f9dc;
    }
    ctx->pc = 0x35F9D4u;
    {
        const bool branch_taken_0x35f9d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f9d4) {
            ctx->pc = 0x35FBA8u;
            goto label_35fba8;
        }
    }
    ctx->pc = 0x35F9DCu;
label_35f9dc:
    // 0x35f9dc: 0x8e020db0  lw          $v0, 0xDB0($s0)
    ctx->pc = 0x35f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_35f9e0:
    // 0x35f9e0: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x35f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_35f9e4:
    // 0x35f9e4: 0x10430070  beq         $v0, $v1, . + 4 + (0x70 << 2)
label_35f9e8:
    if (ctx->pc == 0x35F9E8u) {
        ctx->pc = 0x35F9ECu;
        goto label_35f9ec;
    }
    ctx->pc = 0x35F9E4u;
    {
        const bool branch_taken_0x35f9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x35f9e4) {
            ctx->pc = 0x35FBA8u;
            goto label_35fba8;
        }
    }
    ctx->pc = 0x35F9ECu;
label_35f9ec:
    // 0x35f9ec: 0x8e020db4  lw          $v0, 0xDB4($s0)
    ctx->pc = 0x35f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3508)));
label_35f9f0:
    // 0x35f9f0: 0x14430037  bne         $v0, $v1, . + 4 + (0x37 << 2)
label_35f9f4:
    if (ctx->pc == 0x35F9F4u) {
        ctx->pc = 0x35F9F8u;
        goto label_35f9f8;
    }
    ctx->pc = 0x35F9F0u;
    {
        const bool branch_taken_0x35f9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35f9f0) {
            ctx->pc = 0x35FAD0u;
            goto label_35fad0;
        }
    }
    ctx->pc = 0x35F9F8u;
label_35f9f8:
    // 0x35f9f8: 0x16e00007  bnez        $s7, . + 4 + (0x7 << 2)
label_35f9fc:
    if (ctx->pc == 0x35F9FCu) {
        ctx->pc = 0x35FA00u;
        goto label_35fa00;
    }
    ctx->pc = 0x35F9F8u;
    {
        const bool branch_taken_0x35f9f8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f9f8) {
            ctx->pc = 0x35FA18u;
            goto label_35fa18;
        }
    }
    ctx->pc = 0x35FA00u;
label_35fa00:
    // 0x35fa00: 0x8e030d6c  lw          $v1, 0xD6C($s0)
    ctx->pc = 0x35fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_35fa04:
    // 0x35fa04: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x35fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_35fa08:
    // 0x35fa08: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x35fa08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_35fa0c:
    // 0x35fa0c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_35fa10:
    if (ctx->pc == 0x35FA10u) {
        ctx->pc = 0x35FA14u;
        goto label_35fa14;
    }
    ctx->pc = 0x35FA0Cu;
    {
        const bool branch_taken_0x35fa0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35fa0c) {
            ctx->pc = 0x35FA30u;
            goto label_35fa30;
        }
    }
    ctx->pc = 0x35FA14u;
label_35fa14:
    // 0x35fa14: 0x0  nop
    ctx->pc = 0x35fa14u;
    // NOP
label_35fa18:
    // 0x35fa18: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x35fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_35fa1c:
    // 0x35fa1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35fa1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35fa20:
    // 0x35fa20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35fa20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35fa24:
    // 0x35fa24: 0xc0bdf9c  jal         func_2F7E70
label_35fa28:
    if (ctx->pc == 0x35FA28u) {
        ctx->pc = 0x35FA28u;
            // 0x35fa28: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x35FA2Cu;
        goto label_35fa2c;
    }
    ctx->pc = 0x35FA24u;
    SET_GPR_U32(ctx, 31, 0x35FA2Cu);
    ctx->pc = 0x35FA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35FA24u;
            // 0x35fa28: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FA2Cu; }
        if (ctx->pc != 0x35FA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FA2Cu; }
        if (ctx->pc != 0x35FA2Cu) { return; }
    }
    ctx->pc = 0x35FA2Cu;
label_35fa2c:
    // 0x35fa2c: 0x0  nop
    ctx->pc = 0x35fa2cu;
    // NOP
label_35fa30:
    // 0x35fa30: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x35fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_35fa34:
    // 0x35fa34: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x35fa34u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_35fa38:
    // 0x35fa38: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_35fa3c:
    if (ctx->pc == 0x35FA3Cu) {
        ctx->pc = 0x35FA3Cu;
            // 0x35fa3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35FA40u;
        goto label_35fa40;
    }
    ctx->pc = 0x35FA38u;
    {
        const bool branch_taken_0x35fa38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x35FA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FA38u;
            // 0x35fa3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fa38) {
            ctx->pc = 0x35FA50u;
            goto label_35fa50;
        }
    }
    ctx->pc = 0x35FA40u;
label_35fa40:
    // 0x35fa40: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x35fa40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_35fa44:
    // 0x35fa44: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_35fa48:
    if (ctx->pc == 0x35FA48u) {
        ctx->pc = 0x35FA4Cu;
        goto label_35fa4c;
    }
    ctx->pc = 0x35FA44u;
    {
        const bool branch_taken_0x35fa44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fa44) {
            ctx->pc = 0x35FA50u;
            goto label_35fa50;
        }
    }
    ctx->pc = 0x35FA4Cu;
label_35fa4c:
    // 0x35fa4c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x35fa4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35fa50:
    // 0x35fa50: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_35fa54:
    if (ctx->pc == 0x35FA54u) {
        ctx->pc = 0x35FA58u;
        goto label_35fa58;
    }
    ctx->pc = 0x35FA50u;
    {
        const bool branch_taken_0x35fa50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35fa50) {
            ctx->pc = 0x35FA70u;
            goto label_35fa70;
        }
    }
    ctx->pc = 0x35FA58u;
label_35fa58:
    // 0x35fa58: 0xc075eb4  jal         func_1D7AD0
label_35fa5c:
    if (ctx->pc == 0x35FA5Cu) {
        ctx->pc = 0x35FA5Cu;
            // 0x35fa5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35FA60u;
        goto label_35fa60;
    }
    ctx->pc = 0x35FA58u;
    SET_GPR_U32(ctx, 31, 0x35FA60u);
    ctx->pc = 0x35FA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35FA58u;
            // 0x35fa5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FA60u; }
        if (ctx->pc != 0x35FA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FA60u; }
        if (ctx->pc != 0x35FA60u) { return; }
    }
    ctx->pc = 0x35FA60u;
label_35fa60:
    // 0x35fa60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_35fa64:
    if (ctx->pc == 0x35FA64u) {
        ctx->pc = 0x35FA68u;
        goto label_35fa68;
    }
    ctx->pc = 0x35FA60u;
    {
        const bool branch_taken_0x35fa60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35fa60) {
            ctx->pc = 0x35FA70u;
            goto label_35fa70;
        }
    }
    ctx->pc = 0x35FA68u;
label_35fa68:
    // 0x35fa68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35fa68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35fa6c:
    // 0x35fa6c: 0x0  nop
    ctx->pc = 0x35fa6cu;
    // NOP
label_35fa70:
    // 0x35fa70: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_35fa74:
    if (ctx->pc == 0x35FA74u) {
        ctx->pc = 0x35FA78u;
        goto label_35fa78;
    }
    ctx->pc = 0x35FA70u;
    {
        const bool branch_taken_0x35fa70 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x35fa70) {
            ctx->pc = 0x35FA88u;
            goto label_35fa88;
        }
    }
    ctx->pc = 0x35FA78u;
label_35fa78:
    // 0x35fa78: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x35fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_35fa7c:
    // 0x35fa7c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x35fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_35fa80:
    // 0x35fa80: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_35fa84:
    if (ctx->pc == 0x35FA84u) {
        ctx->pc = 0x35FA88u;
        goto label_35fa88;
    }
    ctx->pc = 0x35FA80u;
    {
        const bool branch_taken_0x35fa80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35fa80) {
            ctx->pc = 0x35FAD0u;
            goto label_35fad0;
        }
    }
    ctx->pc = 0x35FA88u;
label_35fa88:
    // 0x35fa88: 0x820411aa  lb          $a0, 0x11AA($s0)
    ctx->pc = 0x35fa88u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_35fa8c:
    // 0x35fa8c: 0x96420094  lhu         $v0, 0x94($s2)
    ctx->pc = 0x35fa8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 148)));
label_35fa90:
    // 0x35fa90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35fa94:
    // 0x35fa94: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35fa94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_35fa98:
    // 0x35fa98: 0x839804  sllv        $s3, $v1, $a0
    ctx->pc = 0x35fa98u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_35fa9c:
    // 0x35fa9c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x35fa9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_35faa0:
    // 0x35faa0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x35faa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_35faa4:
    // 0x35faa4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_35faa8:
    if (ctx->pc == 0x35FAA8u) {
        ctx->pc = 0x35FAACu;
        goto label_35faac;
    }
    ctx->pc = 0x35FAA4u;
    {
        const bool branch_taken_0x35faa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35faa4) {
            ctx->pc = 0x35FAD0u;
            goto label_35fad0;
        }
    }
    ctx->pc = 0x35FAACu;
label_35faac:
    // 0x35faac: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x35faacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_35fab0:
    // 0x35fab0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x35fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_35fab4:
    // 0x35fab4: 0xc072aaa  jal         func_1CAAA8
label_35fab8:
    if (ctx->pc == 0x35FAB8u) {
        ctx->pc = 0x35FAB8u;
            // 0x35fab8: 0x9044008c  lbu         $a0, 0x8C($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
        ctx->pc = 0x35FABCu;
        goto label_35fabc;
    }
    ctx->pc = 0x35FAB4u;
    SET_GPR_U32(ctx, 31, 0x35FABCu);
    ctx->pc = 0x35FAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35FAB4u;
            // 0x35fab8: 0x9044008c  lbu         $a0, 0x8C($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FABCu; }
        if (ctx->pc != 0x35FABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FABCu; }
        if (ctx->pc != 0x35FABCu) { return; }
    }
    ctx->pc = 0x35FABCu;
label_35fabc:
    // 0x35fabc: 0x96420094  lhu         $v0, 0x94($s2)
    ctx->pc = 0x35fabcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 148)));
label_35fac0:
    // 0x35fac0: 0x2601827  not         $v1, $s3
    ctx->pc = 0x35fac0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 19) | GPR_U64(ctx, 0)));
label_35fac4:
    // 0x35fac4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x35fac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_35fac8:
    // 0x35fac8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x35fac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_35facc:
    // 0x35facc: 0xa6420094  sh          $v0, 0x94($s2)
    ctx->pc = 0x35faccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 148), (uint16_t)GPR_U32(ctx, 2));
label_35fad0:
    // 0x35fad0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x35fad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_35fad4:
    // 0x35fad4: 0xc0c5ed0  jal         func_317B40
label_35fad8:
    if (ctx->pc == 0x35FAD8u) {
        ctx->pc = 0x35FAD8u;
            // 0x35fad8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35FADCu;
        goto label_35fadc;
    }
    ctx->pc = 0x35FAD4u;
    SET_GPR_U32(ctx, 31, 0x35FADCu);
    ctx->pc = 0x35FAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35FAD4u;
            // 0x35fad8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317B40u;
    if (runtime->hasFunction(0x317B40u)) {
        auto targetFn = runtime->lookupFunction(0x317B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FADCu; }
        if (ctx->pc != 0x35FADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00317B40_0x317b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FADCu; }
        if (ctx->pc != 0x35FADCu) { return; }
    }
    ctx->pc = 0x35FADCu;
label_35fadc:
    // 0x35fadc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_35fae0:
    if (ctx->pc == 0x35FAE0u) {
        ctx->pc = 0x35FAE4u;
        goto label_35fae4;
    }
    ctx->pc = 0x35FADCu;
    {
        const bool branch_taken_0x35fadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fadc) {
            ctx->pc = 0x35FBA8u;
            goto label_35fba8;
        }
    }
    ctx->pc = 0x35FAE4u;
label_35fae4:
    // 0x35fae4: 0x96420074  lhu         $v0, 0x74($s2)
    ctx->pc = 0x35fae4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_35fae8:
    // 0x35fae8: 0x2821007  srav        $v0, $v0, $s4
    ctx->pc = 0x35fae8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
label_35faec:
    // 0x35faec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35faecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_35faf0:
    // 0x35faf0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_35faf4:
    if (ctx->pc == 0x35FAF4u) {
        ctx->pc = 0x35FAF8u;
        goto label_35faf8;
    }
    ctx->pc = 0x35FAF0u;
    {
        const bool branch_taken_0x35faf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35faf0) {
            ctx->pc = 0x35FB90u;
            goto label_35fb90;
        }
    }
    ctx->pc = 0x35FAF8u;
label_35faf8:
    // 0x35faf8: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x35faf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_35fafc:
    // 0x35fafc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35fafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35fb00:
    // 0x35fb00: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x35fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_35fb04:
    // 0x35fb04: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x35fb04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_35fb08:
    // 0x35fb08: 0x10450011  beq         $v0, $a1, . + 4 + (0x11 << 2)
label_35fb0c:
    if (ctx->pc == 0x35FB0Cu) {
        ctx->pc = 0x35FB10u;
        goto label_35fb10;
    }
    ctx->pc = 0x35FB08u;
    {
        const bool branch_taken_0x35fb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x35fb08) {
            ctx->pc = 0x35FB50u;
            goto label_35fb50;
        }
    }
    ctx->pc = 0x35FB10u;
label_35fb10:
    // 0x35fb10: 0x8e020518  lw          $v0, 0x518($s0)
    ctx->pc = 0x35fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
label_35fb14:
    // 0x35fb14: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x35fb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_35fb18:
    // 0x35fb18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_35fb1c:
    if (ctx->pc == 0x35FB1Cu) {
        ctx->pc = 0x35FB20u;
        goto label_35fb20;
    }
    ctx->pc = 0x35FB18u;
    {
        const bool branch_taken_0x35fb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35fb18) {
            ctx->pc = 0x35FB30u;
            goto label_35fb30;
        }
    }
    ctx->pc = 0x35FB20u;
label_35fb20:
    // 0x35fb20: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x35fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_35fb24:
    // 0x35fb24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35fb24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35fb28:
    // 0x35fb28: 0xc0bdf9c  jal         func_2F7E70
label_35fb2c:
    if (ctx->pc == 0x35FB2Cu) {
        ctx->pc = 0x35FB2Cu;
            // 0x35fb2c: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x35FB30u;
        goto label_35fb30;
    }
    ctx->pc = 0x35FB28u;
    SET_GPR_U32(ctx, 31, 0x35FB30u);
    ctx->pc = 0x35FB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35FB28u;
            // 0x35fb2c: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FB30u; }
        if (ctx->pc != 0x35FB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FB30u; }
        if (ctx->pc != 0x35FB30u) { return; }
    }
    ctx->pc = 0x35FB30u;
label_35fb30:
    // 0x35fb30: 0xc0bd780  jal         func_2F5E00
label_35fb34:
    if (ctx->pc == 0x35FB34u) {
        ctx->pc = 0x35FB34u;
            // 0x35fb34: 0x8e040d70  lw          $a0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->pc = 0x35FB38u;
        goto label_35fb38;
    }
    ctx->pc = 0x35FB30u;
    SET_GPR_U32(ctx, 31, 0x35FB38u);
    ctx->pc = 0x35FB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35FB30u;
            // 0x35fb34: 0x8e040d70  lw          $a0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FB38u; }
        if (ctx->pc != 0x35FB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FB38u; }
        if (ctx->pc != 0x35FB38u) { return; }
    }
    ctx->pc = 0x35FB38u;
label_35fb38:
    // 0x35fb38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35fb3c:
    // 0x35fb3c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_35fb40:
    if (ctx->pc == 0x35FB40u) {
        ctx->pc = 0x35FB44u;
        goto label_35fb44;
    }
    ctx->pc = 0x35FB3Cu;
    {
        const bool branch_taken_0x35fb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fb3c) {
            ctx->pc = 0x35FB50u;
            goto label_35fb50;
        }
    }
    ctx->pc = 0x35FB44u;
label_35fb44:
    // 0x35fb44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35fb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35fb48:
    // 0x35fb48: 0xc07649c  jal         func_1D9270
label_35fb4c:
    if (ctx->pc == 0x35FB4Cu) {
        ctx->pc = 0x35FB4Cu;
            // 0x35fb4c: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x35FB50u;
        goto label_35fb50;
    }
    ctx->pc = 0x35FB48u;
    SET_GPR_U32(ctx, 31, 0x35FB50u);
    ctx->pc = 0x35FB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35FB48u;
            // 0x35fb4c: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FB50u; }
        if (ctx->pc != 0x35FB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FB50u; }
        if (ctx->pc != 0x35FB50u) { return; }
    }
    ctx->pc = 0x35FB50u;
label_35fb50:
    // 0x35fb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35fb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35fb54:
    // 0x35fb54: 0xc077fb0  jal         func_1DFEC0
label_35fb58:
    if (ctx->pc == 0x35FB58u) {
        ctx->pc = 0x35FB58u;
            // 0x35fb58: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x35FB5Cu;
        goto label_35fb5c;
    }
    ctx->pc = 0x35FB54u;
    SET_GPR_U32(ctx, 31, 0x35FB5Cu);
    ctx->pc = 0x35FB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35FB54u;
            // 0x35fb58: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FB5Cu; }
        if (ctx->pc != 0x35FB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FB5Cu; }
        if (ctx->pc != 0x35FB5Cu) { return; }
    }
    ctx->pc = 0x35FB5Cu;
label_35fb5c:
    // 0x35fb5c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x35fb5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35fb60:
    // 0x35fb60: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x35fb60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_35fb64:
    // 0x35fb64: 0x320f809  jalr        $t9
label_35fb68:
    if (ctx->pc == 0x35FB68u) {
        ctx->pc = 0x35FB68u;
            // 0x35fb68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35FB6Cu;
        goto label_35fb6c;
    }
    ctx->pc = 0x35FB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35FB6Cu);
        ctx->pc = 0x35FB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FB64u;
            // 0x35fb68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35FB6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35FB6Cu; }
            if (ctx->pc != 0x35FB6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35FB6Cu;
label_35fb6c:
    // 0x35fb6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_35fb70:
    if (ctx->pc == 0x35FB70u) {
        ctx->pc = 0x35FB74u;
        goto label_35fb74;
    }
    ctx->pc = 0x35FB6Cu;
    {
        const bool branch_taken_0x35fb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fb6c) {
            ctx->pc = 0x35FB90u;
            goto label_35fb90;
        }
    }
    ctx->pc = 0x35FB74u;
label_35fb74:
    // 0x35fb74: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x35fb74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35fb78:
    // 0x35fb78: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x35fb78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_35fb7c:
    // 0x35fb7c: 0x320f809  jalr        $t9
label_35fb80:
    if (ctx->pc == 0x35FB80u) {
        ctx->pc = 0x35FB80u;
            // 0x35fb80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35FB84u;
        goto label_35fb84;
    }
    ctx->pc = 0x35FB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35FB84u);
        ctx->pc = 0x35FB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FB7Cu;
            // 0x35fb80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35FB84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35FB84u; }
            if (ctx->pc != 0x35FB84u) { return; }
        }
        }
    }
    ctx->pc = 0x35FB84u;
label_35fb84:
    // 0x35fb84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35fb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35fb88:
    // 0x35fb88: 0xc0d7cb8  jal         func_35F2E0
label_35fb8c:
    if (ctx->pc == 0x35FB8Cu) {
        ctx->pc = 0x35FB8Cu;
            // 0x35fb8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35FB90u;
        goto label_35fb90;
    }
    ctx->pc = 0x35FB88u;
    SET_GPR_U32(ctx, 31, 0x35FB90u);
    ctx->pc = 0x35FB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35FB88u;
            // 0x35fb8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35F2E0u;
    if (runtime->hasFunction(0x35F2E0u)) {
        auto targetFn = runtime->lookupFunction(0x35F2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FB90u; }
        if (ctx->pc != 0x35FB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035F2E0_0x35f2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FB90u; }
        if (ctx->pc != 0x35FB90u) { return; }
    }
    ctx->pc = 0x35FB90u;
label_35fb90:
    // 0x35fb90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35fb94:
    // 0x35fb94: 0x2821804  sllv        $v1, $v0, $s4
    ctx->pc = 0x35fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
label_35fb98:
    // 0x35fb98: 0x96420074  lhu         $v0, 0x74($s2)
    ctx->pc = 0x35fb98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_35fb9c:
    // 0x35fb9c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x35fb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_35fba0:
    // 0x35fba0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x35fba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_35fba4:
    // 0x35fba4: 0xa6420074  sh          $v0, 0x74($s2)
    ctx->pc = 0x35fba4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 116), (uint16_t)GPR_U32(ctx, 2));
label_35fba8:
    // 0x35fba8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x35fba8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_35fbac:
    // 0x35fbac: 0x681ff1c  bgez        $s4, . + 4 + (-0xE4 << 2)
label_35fbb0:
    if (ctx->pc == 0x35FBB0u) {
        ctx->pc = 0x35FBB0u;
            // 0x35fbb0: 0x26b5fffc  addiu       $s5, $s5, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
        ctx->pc = 0x35FBB4u;
        goto label_35fbb4;
    }
    ctx->pc = 0x35FBACu;
    {
        const bool branch_taken_0x35fbac = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x35FBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FBACu;
            // 0x35fbb0: 0x26b5fffc  addiu       $s5, $s5, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fbac) {
            ctx->pc = 0x35F820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35f820;
        }
    }
    ctx->pc = 0x35FBB4u;
label_35fbb4:
    // 0x35fbb4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x35fbb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_35fbb8:
    // 0x35fbb8: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x35fbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_35fbbc:
    // 0x35fbbc: 0x8e220cb4  lw          $v0, 0xCB4($s1)
    ctx->pc = 0x35fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3252)));
label_35fbc0:
    // 0x35fbc0: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x35fbc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_35fbc4:
    // 0x35fbc4: 0x54200014  bnel        $at, $zero, . + 4 + (0x14 << 2)
label_35fbc8:
    if (ctx->pc == 0x35FBC8u) {
        ctx->pc = 0x35FBC8u;
            // 0x35fbc8: 0x8e22081c  lw          $v0, 0x81C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2076)));
        ctx->pc = 0x35FBCCu;
        goto label_35fbcc;
    }
    ctx->pc = 0x35FBC4u;
    {
        const bool branch_taken_0x35fbc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35fbc4) {
            ctx->pc = 0x35FBC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35FBC4u;
            // 0x35fbc8: 0x8e22081c  lw          $v0, 0x81C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2076)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35FC18u;
            goto label_35fc18;
        }
    }
    ctx->pc = 0x35FBCCu;
label_35fbcc:
    // 0x35fbcc: 0x96430074  lhu         $v1, 0x74($s2)
    ctx->pc = 0x35fbccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_35fbd0:
    // 0x35fbd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35fbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35fbd4:
    // 0x35fbd4: 0x831007  srav        $v0, $v1, $a0
    ctx->pc = 0x35fbd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_35fbd8:
    // 0x35fbd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35fbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_35fbdc:
    // 0x35fbdc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x35fbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_35fbe0:
    // 0x35fbe0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x35fbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_35fbe4:
    // 0x35fbe4: 0x0  nop
    ctx->pc = 0x35fbe4u;
    // NOP
label_35fbe8:
    // 0x35fbe8: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
label_35fbec:
    if (ctx->pc == 0x35FBECu) {
        ctx->pc = 0x35FBF0u;
        goto label_35fbf0;
    }
    ctx->pc = 0x35FBE8u;
    {
        const bool branch_taken_0x35fbe8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x35fbe8) {
            ctx->pc = 0x35FBD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35fbd4;
        }
    }
    ctx->pc = 0x35FBF0u;
label_35fbf0:
    // 0x35fbf0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x35fbf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_35fbf4:
    // 0x35fbf4: 0x54a2004b  bnel        $a1, $v0, . + 4 + (0x4B << 2)
label_35fbf8:
    if (ctx->pc == 0x35FBF8u) {
        ctx->pc = 0x35FBF8u;
            // 0x35fbf8: 0xae400058  sw          $zero, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
        ctx->pc = 0x35FBFCu;
        goto label_35fbfc;
    }
    ctx->pc = 0x35FBF4u;
    {
        const bool branch_taken_0x35fbf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x35fbf4) {
            ctx->pc = 0x35FBF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35FBF4u;
            // 0x35fbf8: 0xae400058  sw          $zero, 0x58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35FD24u;
            goto label_35fd24;
        }
    }
    ctx->pc = 0x35FBFCu;
label_35fbfc:
    // 0x35fbfc: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x35fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_35fc00:
    // 0x35fc00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35fc04:
    // 0x35fc04: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x35fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_35fc08:
    // 0x35fc08: 0xa2420078  sb          $v0, 0x78($s2)
    ctx->pc = 0x35fc08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 120), (uint8_t)GPR_U32(ctx, 2));
label_35fc0c:
    // 0x35fc0c: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x35fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_35fc10:
    // 0x35fc10: 0x10000044  b           . + 4 + (0x44 << 2)
label_35fc14:
    if (ctx->pc == 0x35FC14u) {
        ctx->pc = 0x35FC18u;
        goto label_35fc18;
    }
    ctx->pc = 0x35FC10u;
    {
        const bool branch_taken_0x35fc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fc10) {
            ctx->pc = 0x35FD24u;
            goto label_35fd24;
        }
    }
    ctx->pc = 0x35FC18u;
label_35fc18:
    // 0x35fc18: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_35fc1c:
    if (ctx->pc == 0x35FC1Cu) {
        ctx->pc = 0x35FC20u;
        goto label_35fc20;
    }
    ctx->pc = 0x35FC18u;
    {
        const bool branch_taken_0x35fc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35fc18) {
            ctx->pc = 0x35FD24u;
            goto label_35fd24;
        }
    }
    ctx->pc = 0x35FC20u;
label_35fc20:
    // 0x35fc20: 0xc6210820  lwc1        $f1, 0x820($s1)
    ctx->pc = 0x35fc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35fc24:
    // 0x35fc24: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x35fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_35fc28:
    // 0x35fc28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35fc28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35fc2c:
    // 0x35fc2c: 0x0  nop
    ctx->pc = 0x35fc2cu;
    // NOP
label_35fc30:
    // 0x35fc30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35fc30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35fc34:
    // 0x35fc34: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
label_35fc38:
    if (ctx->pc == 0x35FC38u) {
        ctx->pc = 0x35FC3Cu;
        goto label_35fc3c;
    }
    ctx->pc = 0x35FC34u;
    {
        const bool branch_taken_0x35fc34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35fc34) {
            ctx->pc = 0x35FD24u;
            goto label_35fd24;
        }
    }
    ctx->pc = 0x35FC3Cu;
label_35fc3c:
    // 0x35fc3c: 0xc642005c  lwc1        $f2, 0x5C($s2)
    ctx->pc = 0x35fc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35fc40:
    // 0x35fc40: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x35fc40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35fc44:
    // 0x35fc44: 0x0  nop
    ctx->pc = 0x35fc44u;
    // NOP
label_35fc48:
    // 0x35fc48: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x35fc48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35fc4c:
    // 0x35fc4c: 0x45010035  bc1t        . + 4 + (0x35 << 2)
label_35fc50:
    if (ctx->pc == 0x35FC50u) {
        ctx->pc = 0x35FC54u;
        goto label_35fc54;
    }
    ctx->pc = 0x35FC4Cu;
    {
        const bool branch_taken_0x35fc4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35fc4c) {
            ctx->pc = 0x35FD24u;
            goto label_35fd24;
        }
    }
    ctx->pc = 0x35FC54u;
label_35fc54:
    // 0x35fc54: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x35fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_35fc58:
    // 0x35fc58: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x35fc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_35fc5c:
    // 0x35fc5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35fc5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35fc60:
    // 0x35fc60: 0x0  nop
    ctx->pc = 0x35fc60u;
    // NOP
label_35fc64:
    // 0x35fc64: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x35fc64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_35fc68:
    // 0x35fc68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x35fc68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35fc6c:
    // 0x35fc6c: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_35fc70:
    if (ctx->pc == 0x35FC70u) {
        ctx->pc = 0x35FC70u;
            // 0x35fc70: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x35FC74u;
        goto label_35fc74;
    }
    ctx->pc = 0x35FC6Cu;
    {
        const bool branch_taken_0x35fc6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35FC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FC6Cu;
            // 0x35fc70: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fc6c) {
            ctx->pc = 0x35FD24u;
            goto label_35fd24;
        }
    }
    ctx->pc = 0x35FC74u;
label_35fc74:
    // 0x35fc74: 0x1000002b  b           . + 4 + (0x2B << 2)
label_35fc78:
    if (ctx->pc == 0x35FC78u) {
        ctx->pc = 0x35FC78u;
            // 0x35fc78: 0xe641005c  swc1        $f1, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x35FC7Cu;
        goto label_35fc7c;
    }
    ctx->pc = 0x35FC74u;
    {
        const bool branch_taken_0x35fc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FC74u;
            // 0x35fc78: 0xe641005c  swc1        $f1, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fc74) {
            ctx->pc = 0x35FD24u;
            goto label_35fd24;
        }
    }
    ctx->pc = 0x35FC7Cu;
label_35fc7c:
    // 0x35fc7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_35fc80:
    // 0x35fc80: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_35fc84:
    if (ctx->pc == 0x35FC84u) {
        ctx->pc = 0x35FC84u;
            // 0x35fc84: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x35FC88u;
        goto label_35fc88;
    }
    ctx->pc = 0x35FC80u;
    {
        const bool branch_taken_0x35fc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35FC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FC80u;
            // 0x35fc84: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fc80) {
            ctx->pc = 0x35FD24u;
            goto label_35fd24;
        }
    }
    ctx->pc = 0x35FC88u;
label_35fc88:
    // 0x35fc88: 0x10000026  b           . + 4 + (0x26 << 2)
label_35fc8c:
    if (ctx->pc == 0x35FC8Cu) {
        ctx->pc = 0x35FC8Cu;
            // 0x35fc8c: 0xa2430078  sb          $v1, 0x78($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 120), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x35FC90u;
        goto label_35fc90;
    }
    ctx->pc = 0x35FC88u;
    {
        const bool branch_taken_0x35fc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FC88u;
            // 0x35fc8c: 0xa2430078  sb          $v1, 0x78($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 120), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fc88) {
            ctx->pc = 0x35FD24u;
            goto label_35fd24;
        }
    }
    ctx->pc = 0x35FC90u;
label_35fc90:
    // 0x35fc90: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x35fc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35fc94:
    // 0x35fc94: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x35fc94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35fc98:
    // 0x35fc98: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_35fc9c:
    if (ctx->pc == 0x35FC9Cu) {
        ctx->pc = 0x35FC9Cu;
            // 0x35fc9c: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->pc = 0x35FCA0u;
        goto label_35fca0;
    }
    ctx->pc = 0x35FC98u;
    {
        const bool branch_taken_0x35fc98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35fc98) {
            ctx->pc = 0x35FC9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35FC98u;
            // 0x35fc9c: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35FCCCu;
            goto label_35fccc;
        }
    }
    ctx->pc = 0x35FCA0u;
label_35fca0:
    // 0x35fca0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x35fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_35fca4:
    // 0x35fca4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x35fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_35fca8:
    // 0x35fca8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x35fca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35fcac:
    // 0x35fcac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x35fcacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_35fcb0:
    // 0x35fcb0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x35fcb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35fcb4:
    // 0x35fcb4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_35fcb8:
    if (ctx->pc == 0x35FCB8u) {
        ctx->pc = 0x35FCB8u;
            // 0x35fcb8: 0xe6400060  swc1        $f0, 0x60($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
        ctx->pc = 0x35FCBCu;
        goto label_35fcbc;
    }
    ctx->pc = 0x35FCB4u;
    {
        const bool branch_taken_0x35fcb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x35FCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FCB4u;
            // 0x35fcb8: 0xe6400060  swc1        $f0, 0x60($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fcb4) {
            ctx->pc = 0x35FCC0u;
            goto label_35fcc0;
        }
    }
    ctx->pc = 0x35FCBCu;
label_35fcbc:
    // 0x35fcbc: 0xe6420060  swc1        $f2, 0x60($s2)
    ctx->pc = 0x35fcbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
label_35fcc0:
    // 0x35fcc0: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x35fcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35fcc4:
    // 0x35fcc4: 0x10000017  b           . + 4 + (0x17 << 2)
label_35fcc8:
    if (ctx->pc == 0x35FCC8u) {
        ctx->pc = 0x35FCC8u;
            // 0x35fcc8: 0xe640006c  swc1        $f0, 0x6C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
        ctx->pc = 0x35FCCCu;
        goto label_35fccc;
    }
    ctx->pc = 0x35FCC4u;
    {
        const bool branch_taken_0x35fcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FCC4u;
            // 0x35fcc8: 0xe640006c  swc1        $f0, 0x6C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fcc4) {
            ctx->pc = 0x35FD24u;
            goto label_35fd24;
        }
    }
    ctx->pc = 0x35FCCCu;
label_35fccc:
    // 0x35fccc: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
label_35fcd0:
    if (ctx->pc == 0x35FCD0u) {
        ctx->pc = 0x35FCD0u;
            // 0x35fcd0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x35FCD4u;
        goto label_35fcd4;
    }
    ctx->pc = 0x35FCCCu;
    {
        const bool branch_taken_0x35fccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35fccc) {
            ctx->pc = 0x35FCD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35FCCCu;
            // 0x35fcd0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35FD10u;
            goto label_35fd10;
        }
    }
    ctx->pc = 0x35FCD4u;
label_35fcd4:
    // 0x35fcd4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x35fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_35fcd8:
    // 0x35fcd8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x35fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_35fcdc:
    // 0x35fcdc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x35fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_35fce0:
    // 0x35fce0: 0xc640006c  lwc1        $f0, 0x6C($s2)
    ctx->pc = 0x35fce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35fce4:
    // 0x35fce4: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x35fce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35fce8:
    // 0x35fce8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35fce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_35fcec:
    // 0x35fcec: 0xe640006c  swc1        $f0, 0x6C($s2)
    ctx->pc = 0x35fcecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
label_35fcf0:
    // 0x35fcf0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x35fcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35fcf4:
    // 0x35fcf4: 0xc640006c  lwc1        $f0, 0x6C($s2)
    ctx->pc = 0x35fcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35fcf8:
    // 0x35fcf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x35fcf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35fcfc:
    // 0x35fcfc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_35fd00:
    if (ctx->pc == 0x35FD00u) {
        ctx->pc = 0x35FD04u;
        goto label_35fd04;
    }
    ctx->pc = 0x35FCFCu;
    {
        const bool branch_taken_0x35fcfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35fcfc) {
            ctx->pc = 0x35FD24u;
            goto label_35fd24;
        }
    }
    ctx->pc = 0x35FD04u;
label_35fd04:
    // 0x35fd04: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x35fd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35fd08:
    // 0x35fd08: 0x10000006  b           . + 4 + (0x6 << 2)
label_35fd0c:
    if (ctx->pc == 0x35FD0Cu) {
        ctx->pc = 0x35FD0Cu;
            // 0x35fd0c: 0xe640006c  swc1        $f0, 0x6C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
        ctx->pc = 0x35FD10u;
        goto label_35fd10;
    }
    ctx->pc = 0x35FD08u;
    {
        const bool branch_taken_0x35fd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FD08u;
            // 0x35fd0c: 0xe640006c  swc1        $f0, 0x6C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fd08) {
            ctx->pc = 0x35FD24u;
            goto label_35fd24;
        }
    }
    ctx->pc = 0x35FD10u;
label_35fd10:
    // 0x35fd10: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_35fd14:
    if (ctx->pc == 0x35FD14u) {
        ctx->pc = 0x35FD18u;
        goto label_35fd18;
    }
    ctx->pc = 0x35FD10u;
    {
        const bool branch_taken_0x35fd10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35fd10) {
            ctx->pc = 0x35FD24u;
            goto label_35fd24;
        }
    }
    ctx->pc = 0x35FD18u;
label_35fd18:
    // 0x35fd18: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x35fd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35fd1c:
    // 0x35fd1c: 0xe6400060  swc1        $f0, 0x60($s2)
    ctx->pc = 0x35fd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
label_35fd20:
    // 0x35fd20: 0xe640006c  swc1        $f0, 0x6C($s2)
    ctx->pc = 0x35fd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
label_35fd24:
    // 0x35fd24: 0x8e220cb4  lw          $v0, 0xCB4($s1)
    ctx->pc = 0x35fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3252)));
label_35fd28:
    // 0x35fd28: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x35fd28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_35fd2c:
    // 0x35fd2c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x35fd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_35fd30:
    // 0x35fd30: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_35fd34:
    if (ctx->pc == 0x35FD34u) {
        ctx->pc = 0x35FD34u;
            // 0x35fd34: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x35FD38u;
        goto label_35fd38;
    }
    ctx->pc = 0x35FD30u;
    {
        const bool branch_taken_0x35fd30 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35fd30) {
            ctx->pc = 0x35FD34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35FD30u;
            // 0x35fd34: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35FD44u;
            goto label_35fd44;
        }
    }
    ctx->pc = 0x35FD38u;
label_35fd38:
    // 0x35fd38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35fd38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35fd3c:
    // 0x35fd3c: 0x10000007  b           . + 4 + (0x7 << 2)
label_35fd40:
    if (ctx->pc == 0x35FD40u) {
        ctx->pc = 0x35FD40u;
            // 0x35fd40: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x35FD44u;
        goto label_35fd44;
    }
    ctx->pc = 0x35FD3Cu;
    {
        const bool branch_taken_0x35fd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FD3Cu;
            // 0x35fd40: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fd3c) {
            ctx->pc = 0x35FD5Cu;
            goto label_35fd5c;
        }
    }
    ctx->pc = 0x35FD44u;
label_35fd44:
    // 0x35fd44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35fd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_35fd48:
    // 0x35fd48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35fd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_35fd4c:
    // 0x35fd4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35fd4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35fd50:
    // 0x35fd50: 0x0  nop
    ctx->pc = 0x35fd50u;
    // NOP
label_35fd54:
    // 0x35fd54: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x35fd54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_35fd58:
    // 0x35fd58: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x35fd58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_35fd5c:
    // 0x35fd5c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x35fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_35fd60:
    // 0x35fd60: 0xc6410070  lwc1        $f1, 0x70($s2)
    ctx->pc = 0x35fd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35fd64:
    // 0x35fd64: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x35fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_35fd68:
    // 0x35fd68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35fd68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35fd6c:
    // 0x35fd6c: 0x0  nop
    ctx->pc = 0x35fd6cu;
    // NOP
label_35fd70:
    // 0x35fd70: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x35fd70u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_35fd74:
    // 0x35fd74: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x35fd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35fd78:
    // 0x35fd78: 0x4602001c  madd.s      $f0, $f0, $f2
    ctx->pc = 0x35fd78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[2]));
label_35fd7c:
    // 0x35fd7c: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x35fd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
label_35fd80:
    // 0x35fd80: 0xc64c006c  lwc1        $f12, 0x6C($s2)
    ctx->pc = 0x35fd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_35fd84:
    // 0x35fd84: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x35fd84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_35fd88:
    // 0x35fd88: 0x8fc60014  lw          $a2, 0x14($fp)
    ctx->pc = 0x35fd88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_35fd8c:
    // 0x35fd8c: 0xc054bbc  jal         func_152EF0
label_35fd90:
    if (ctx->pc == 0x35FD90u) {
        ctx->pc = 0x35FD90u;
            // 0x35fd90: 0x8fc40010  lw          $a0, 0x10($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
        ctx->pc = 0x35FD94u;
        goto label_35fd94;
    }
    ctx->pc = 0x35FD8Cu;
    SET_GPR_U32(ctx, 31, 0x35FD94u);
    ctx->pc = 0x35FD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35FD8Cu;
            // 0x35fd90: 0x8fc40010  lw          $a0, 0x10($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FD94u; }
        if (ctx->pc != 0x35FD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FD94u; }
        if (ctx->pc != 0x35FD94u) { return; }
    }
    ctx->pc = 0x35FD94u;
label_35fd94:
    // 0x35fd94: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x35fd94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_35fd98:
    // 0x35fd98: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x35fd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_35fd9c:
    // 0x35fd9c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x35fd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35fda0:
    // 0x35fda0: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x35fda0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_35fda4:
    // 0x35fda4: 0xc054bbc  jal         func_152EF0
label_35fda8:
    if (ctx->pc == 0x35FDA8u) {
        ctx->pc = 0x35FDA8u;
            // 0x35fda8: 0xc64c0064  lwc1        $f12, 0x64($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x35FDACu;
        goto label_35fdac;
    }
    ctx->pc = 0x35FDA4u;
    SET_GPR_U32(ctx, 31, 0x35FDACu);
    ctx->pc = 0x35FDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35FDA4u;
            // 0x35fda8: 0xc64c0064  lwc1        $f12, 0x64($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FDACu; }
        if (ctx->pc != 0x35FDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FDACu; }
        if (ctx->pc != 0x35FDACu) { return; }
    }
    ctx->pc = 0x35FDACu;
label_35fdac:
    // 0x35fdac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x35fdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_35fdb0:
    // 0x35fdb0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x35fdb0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_35fdb4:
    // 0x35fdb4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x35fdb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_35fdb8:
    // 0x35fdb8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x35fdb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_35fdbc:
    // 0x35fdbc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35fdbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35fdc0:
    // 0x35fdc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35fdc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35fdc4:
    // 0x35fdc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35fdc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35fdc8:
    // 0x35fdc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35fdc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35fdcc:
    // 0x35fdcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35fdccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35fdd0:
    // 0x35fdd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35fdd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35fdd4:
    // 0x35fdd4: 0x3e00008  jr          $ra
label_35fdd8:
    if (ctx->pc == 0x35FDD8u) {
        ctx->pc = 0x35FDD8u;
            // 0x35fdd8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x35FDDCu;
        goto label_35fddc;
    }
    ctx->pc = 0x35FDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FDD4u;
            // 0x35fdd8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35FDDCu;
label_35fddc:
    // 0x35fddc: 0x0  nop
    ctx->pc = 0x35fddcu;
    // NOP
label_35fde0:
    // 0x35fde0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35fde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35fde4:
    // 0x35fde4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35fde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_35fde8:
    // 0x35fde8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35fde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35fdec:
    // 0x35fdec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35fdecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35fdf0:
    // 0x35fdf0: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x35fdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_35fdf4:
    // 0x35fdf4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_35fdf8:
    if (ctx->pc == 0x35FDF8u) {
        ctx->pc = 0x35FDF8u;
            // 0x35fdf8: 0xae000084  sw          $zero, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x35FDFCu;
        goto label_35fdfc;
    }
    ctx->pc = 0x35FDF4u;
    {
        const bool branch_taken_0x35fdf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fdf4) {
            ctx->pc = 0x35FDF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35FDF4u;
            // 0x35fdf8: 0xae000084  sw          $zero, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35FE10u;
            goto label_35fe10;
        }
    }
    ctx->pc = 0x35FDFCu;
label_35fdfc:
    // 0x35fdfc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35fdfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35fe00:
    // 0x35fe00: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x35fe00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_35fe04:
    // 0x35fe04: 0x320f809  jalr        $t9
label_35fe08:
    if (ctx->pc == 0x35FE08u) {
        ctx->pc = 0x35FE08u;
            // 0x35fe08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35FE0Cu;
        goto label_35fe0c;
    }
    ctx->pc = 0x35FE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35FE0Cu);
        ctx->pc = 0x35FE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FE04u;
            // 0x35fe08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35FE0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35FE0Cu; }
            if (ctx->pc != 0x35FE0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35FE0Cu;
label_35fe0c:
    // 0x35fe0c: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x35fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_35fe10:
    // 0x35fe10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35fe10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35fe14:
    // 0x35fe14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35fe14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35fe18:
    // 0x35fe18: 0x3e00008  jr          $ra
label_35fe1c:
    if (ctx->pc == 0x35FE1Cu) {
        ctx->pc = 0x35FE1Cu;
            // 0x35fe1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x35FE20u;
        goto label_35fe20;
    }
    ctx->pc = 0x35FE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FE18u;
            // 0x35fe1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35FE20u;
label_35fe20:
    // 0x35fe20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35fe20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_35fe24:
    // 0x35fe24: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x35fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_35fe28:
    // 0x35fe28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35fe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_35fe2c:
    // 0x35fe2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35fe2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35fe30:
    // 0x35fe30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35fe30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35fe34:
    // 0x35fe34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35fe34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35fe38:
    // 0x35fe38: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x35fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_35fe3c:
    // 0x35fe3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35fe3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35fe40:
    // 0x35fe40: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x35fe40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_35fe44:
    // 0x35fe44: 0x24844940  addiu       $a0, $a0, 0x4940
    ctx->pc = 0x35fe44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18752));
label_35fe48:
    // 0x35fe48: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x35fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_35fe4c:
    // 0x35fe4c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x35fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_35fe50:
    // 0x35fe50: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x35fe50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_35fe54:
    // 0x35fe54: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x35fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_35fe58:
    // 0x35fe58: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
label_35fe5c:
    if (ctx->pc == 0x35FE5Cu) {
        ctx->pc = 0x35FE5Cu;
            // 0x35fe5c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x35FE60u;
        goto label_35fe60;
    }
    ctx->pc = 0x35FE58u;
    {
        const bool branch_taken_0x35fe58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fe58) {
            ctx->pc = 0x35FE5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35FE58u;
            // 0x35fe5c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35FED8u;
            goto label_35fed8;
        }
    }
    ctx->pc = 0x35FE60u;
label_35fe60:
    // 0x35fe60: 0xc040180  jal         func_100600
label_35fe64:
    if (ctx->pc == 0x35FE64u) {
        ctx->pc = 0x35FE64u;
            // 0x35fe64: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x35FE68u;
        goto label_35fe68;
    }
    ctx->pc = 0x35FE60u;
    SET_GPR_U32(ctx, 31, 0x35FE68u);
    ctx->pc = 0x35FE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35FE60u;
            // 0x35fe64: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FE68u; }
        if (ctx->pc != 0x35FE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FE68u; }
        if (ctx->pc != 0x35FE68u) { return; }
    }
    ctx->pc = 0x35FE68u;
label_35fe68:
    // 0x35fe68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35fe68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35fe6c:
    // 0x35fe6c: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_35fe70:
    if (ctx->pc == 0x35FE70u) {
        ctx->pc = 0x35FE70u;
            // 0x35fe70: 0x3c024774  lui         $v0, 0x4774 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
        ctx->pc = 0x35FE74u;
        goto label_35fe74;
    }
    ctx->pc = 0x35FE6Cu;
    {
        const bool branch_taken_0x35fe6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fe6c) {
            ctx->pc = 0x35FE70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35FE6Cu;
            // 0x35fe70: 0x3c024774  lui         $v0, 0x4774 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35FEACu;
            goto label_35feac;
        }
    }
    ctx->pc = 0x35FE74u;
label_35fe74:
    // 0x35fe74: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x35fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_35fe78:
    // 0x35fe78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35fe7c:
    // 0x35fe7c: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x35fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_35fe80:
    // 0x35fe80: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x35fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_35fe84:
    // 0x35fe84: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x35fe84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_35fe88:
    // 0x35fe88: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x35fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_35fe8c:
    // 0x35fe8c: 0xc040138  jal         func_1004E0
label_35fe90:
    if (ctx->pc == 0x35FE90u) {
        ctx->pc = 0x35FE90u;
            // 0x35fe90: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x35FE94u;
        goto label_35fe94;
    }
    ctx->pc = 0x35FE8Cu;
    SET_GPR_U32(ctx, 31, 0x35FE94u);
    ctx->pc = 0x35FE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35FE8Cu;
            // 0x35fe90: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FE94u; }
        if (ctx->pc != 0x35FE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FE94u; }
        if (ctx->pc != 0x35FE94u) { return; }
    }
    ctx->pc = 0x35FE94u;
label_35fe94:
    // 0x35fe94: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x35fe94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_35fe98:
    // 0x35fe98: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x35fe98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_35fe9c:
    // 0x35fe9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35fe9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35fea0:
    // 0x35fea0: 0xc04a576  jal         func_1295D8
label_35fea4:
    if (ctx->pc == 0x35FEA4u) {
        ctx->pc = 0x35FEA4u;
            // 0x35fea4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x35FEA8u;
        goto label_35fea8;
    }
    ctx->pc = 0x35FEA0u;
    SET_GPR_U32(ctx, 31, 0x35FEA8u);
    ctx->pc = 0x35FEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35FEA0u;
            // 0x35fea4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FEA8u; }
        if (ctx->pc != 0x35FEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FEA8u; }
        if (ctx->pc != 0x35FEA8u) { return; }
    }
    ctx->pc = 0x35FEA8u;
label_35fea8:
    // 0x35fea8: 0x3c024774  lui         $v0, 0x4774
    ctx->pc = 0x35fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18292 << 16));
label_35feac:
    // 0x35feac: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x35feacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_35feb0:
    // 0x35feb0: 0x34432400  ori         $v1, $v0, 0x2400
    ctx->pc = 0x35feb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_35feb4:
    // 0x35feb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35feb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35feb8:
    // 0x35feb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_35febc:
    // 0x35febc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35febcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35fec0:
    // 0x35fec0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x35fec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35fec4:
    // 0x35fec4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35fec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35fec8:
    // 0x35fec8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x35fec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_35fecc:
    // 0x35fecc: 0xc122cd8  jal         func_48B360
label_35fed0:
    if (ctx->pc == 0x35FED0u) {
        ctx->pc = 0x35FED0u;
            // 0x35fed0: 0xae110084  sw          $s1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 17));
        ctx->pc = 0x35FED4u;
        goto label_35fed4;
    }
    ctx->pc = 0x35FECCu;
    SET_GPR_U32(ctx, 31, 0x35FED4u);
    ctx->pc = 0x35FED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35FECCu;
            // 0x35fed0: 0xae110084  sw          $s1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FED4u; }
        if (ctx->pc != 0x35FED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FED4u; }
        if (ctx->pc != 0x35FED4u) { return; }
    }
    ctx->pc = 0x35FED4u;
label_35fed4:
    // 0x35fed4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35fed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_35fed8:
    // 0x35fed8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35fed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35fedc:
    // 0x35fedc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35fedcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35fee0:
    // 0x35fee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35fee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35fee4:
    // 0x35fee4: 0x3e00008  jr          $ra
label_35fee8:
    if (ctx->pc == 0x35FEE8u) {
        ctx->pc = 0x35FEE8u;
            // 0x35fee8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x35FEECu;
        goto label_35feec;
    }
    ctx->pc = 0x35FEE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FEE4u;
            // 0x35fee8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35FEECu;
label_35feec:
    // 0x35feec: 0x0  nop
    ctx->pc = 0x35feecu;
    // NOP
label_35fef0:
    // 0x35fef0: 0x3e00008  jr          $ra
label_35fef4:
    if (ctx->pc == 0x35FEF4u) {
        ctx->pc = 0x35FEF4u;
            // 0x35fef4: 0x24020802  addiu       $v0, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->pc = 0x35FEF8u;
        goto label_35fef8;
    }
    ctx->pc = 0x35FEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FEF0u;
            // 0x35fef4: 0x24020802  addiu       $v0, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35FEF8u;
label_35fef8:
    // 0x35fef8: 0x0  nop
    ctx->pc = 0x35fef8u;
    // NOP
label_35fefc:
    // 0x35fefc: 0x0  nop
    ctx->pc = 0x35fefcu;
    // NOP
label_35ff00:
    // 0x35ff00: 0x80d7a18  j           func_35E860
label_35ff04:
    if (ctx->pc == 0x35FF04u) {
        ctx->pc = 0x35FF04u;
            // 0x35ff04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x35FF08u;
        goto label_35ff08;
    }
    ctx->pc = 0x35FF00u;
    ctx->pc = 0x35FF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35FF00u;
            // 0x35ff04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35E860u;
    {
        auto targetFn = runtime->lookupFunction(0x35E860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x35FF08u;
label_35ff08:
    // 0x35ff08: 0x0  nop
    ctx->pc = 0x35ff08u;
    // NOP
label_35ff0c:
    // 0x35ff0c: 0x0  nop
    ctx->pc = 0x35ff0cu;
    // NOP
label_35ff10:
    // 0x35ff10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35ff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_35ff14:
    // 0x35ff14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35ff14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_35ff18:
    // 0x35ff18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35ff18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35ff1c:
    // 0x35ff1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35ff1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35ff20:
    // 0x35ff20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35ff20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35ff24:
    // 0x35ff24: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_35ff28:
    if (ctx->pc == 0x35FF28u) {
        ctx->pc = 0x35FF28u;
            // 0x35ff28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35FF2Cu;
        goto label_35ff2c;
    }
    ctx->pc = 0x35FF24u;
    {
        const bool branch_taken_0x35ff24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FF24u;
            // 0x35ff28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ff24) {
            ctx->pc = 0x35FF80u;
            goto label_35ff80;
        }
    }
    ctx->pc = 0x35FF2Cu;
label_35ff2c:
    // 0x35ff2c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x35ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_35ff30:
    // 0x35ff30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x35ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_35ff34:
    // 0x35ff34: 0x246365d0  addiu       $v1, $v1, 0x65D0
    ctx->pc = 0x35ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26064));
label_35ff38:
    // 0x35ff38: 0x24426608  addiu       $v0, $v0, 0x6608
    ctx->pc = 0x35ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26120));
label_35ff3c:
    // 0x35ff3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x35ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_35ff40:
    // 0x35ff40: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_35ff44:
    if (ctx->pc == 0x35FF44u) {
        ctx->pc = 0x35FF44u;
            // 0x35ff44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x35FF48u;
        goto label_35ff48;
    }
    ctx->pc = 0x35FF40u;
    {
        const bool branch_taken_0x35ff40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FF40u;
            // 0x35ff44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ff40) {
            ctx->pc = 0x35FF68u;
            goto label_35ff68;
        }
    }
    ctx->pc = 0x35FF48u;
label_35ff48:
    // 0x35ff48: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x35ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_35ff4c:
    // 0x35ff4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x35ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_35ff50:
    // 0x35ff50: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x35ff50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
label_35ff54:
    // 0x35ff54: 0x24420438  addiu       $v0, $v0, 0x438
    ctx->pc = 0x35ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1080));
label_35ff58:
    // 0x35ff58: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x35ff58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_35ff5c:
    // 0x35ff5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35ff5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35ff60:
    // 0x35ff60: 0xc0b28c8  jal         func_2CA320
label_35ff64:
    if (ctx->pc == 0x35FF64u) {
        ctx->pc = 0x35FF64u;
            // 0x35ff64: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x35FF68u;
        goto label_35ff68;
    }
    ctx->pc = 0x35FF60u;
    SET_GPR_U32(ctx, 31, 0x35FF68u);
    ctx->pc = 0x35FF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35FF60u;
            // 0x35ff64: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA320u;
    if (runtime->hasFunction(0x2CA320u)) {
        auto targetFn = runtime->lookupFunction(0x2CA320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FF68u; }
        if (ctx->pc != 0x35FF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CA320_0x2ca320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FF68u; }
        if (ctx->pc != 0x35FF68u) { return; }
    }
    ctx->pc = 0x35FF68u;
label_35ff68:
    // 0x35ff68: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x35ff68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_35ff6c:
    // 0x35ff6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35ff6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_35ff70:
    // 0x35ff70: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_35ff74:
    if (ctx->pc == 0x35FF74u) {
        ctx->pc = 0x35FF74u;
            // 0x35ff74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35FF78u;
        goto label_35ff78;
    }
    ctx->pc = 0x35FF70u;
    {
        const bool branch_taken_0x35ff70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x35ff70) {
            ctx->pc = 0x35FF74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35FF70u;
            // 0x35ff74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35FF84u;
            goto label_35ff84;
        }
    }
    ctx->pc = 0x35FF78u;
label_35ff78:
    // 0x35ff78: 0xc0400a8  jal         func_1002A0
label_35ff7c:
    if (ctx->pc == 0x35FF7Cu) {
        ctx->pc = 0x35FF7Cu;
            // 0x35ff7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35FF80u;
        goto label_35ff80;
    }
    ctx->pc = 0x35FF78u;
    SET_GPR_U32(ctx, 31, 0x35FF80u);
    ctx->pc = 0x35FF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35FF78u;
            // 0x35ff7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FF80u; }
        if (ctx->pc != 0x35FF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35FF80u; }
        if (ctx->pc != 0x35FF80u) { return; }
    }
    ctx->pc = 0x35FF80u;
label_35ff80:
    // 0x35ff80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35ff80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35ff84:
    // 0x35ff84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35ff84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35ff88:
    // 0x35ff88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35ff88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35ff8c:
    // 0x35ff8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35ff8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35ff90:
    // 0x35ff90: 0x3e00008  jr          $ra
label_35ff94:
    if (ctx->pc == 0x35FF94u) {
        ctx->pc = 0x35FF94u;
            // 0x35ff94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x35FF98u;
        goto label_35ff98;
    }
    ctx->pc = 0x35FF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FF90u;
            // 0x35ff94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35FF98u;
label_35ff98:
    // 0x35ff98: 0x0  nop
    ctx->pc = 0x35ff98u;
    // NOP
label_35ff9c:
    // 0x35ff9c: 0x0  nop
    ctx->pc = 0x35ff9cu;
    // NOP
label_35ffa0:
    // 0x35ffa0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x35ffa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_35ffa4:
    // 0x35ffa4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35ffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35ffa8:
    // 0x35ffa8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x35ffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_35ffac:
    // 0x35ffac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x35ffacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_35ffb0:
    // 0x35ffb0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x35ffb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_35ffb4:
    // 0x35ffb4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x35ffb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_35ffb8:
    // 0x35ffb8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35ffb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_35ffbc:
    // 0x35ffbc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35ffbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_35ffc0:
    // 0x35ffc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35ffc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_35ffc4:
    // 0x35ffc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35ffc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35ffc8:
    // 0x35ffc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35ffc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35ffcc:
    // 0x35ffcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35ffccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35ffd0:
    // 0x35ffd0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x35ffd0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_35ffd4:
    // 0x35ffd4: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_35ffd8:
    if (ctx->pc == 0x35FFD8u) {
        ctx->pc = 0x35FFD8u;
            // 0x35ffd8: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35FFDCu;
        goto label_35ffdc;
    }
    ctx->pc = 0x35FFD4u;
    {
        const bool branch_taken_0x35ffd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x35FFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35FFD4u;
            // 0x35ffd8: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ffd4) {
            ctx->pc = 0x360024u;
            goto label_360024;
        }
    }
    ctx->pc = 0x35FFDCu;
label_35ffdc:
    // 0x35ffdc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35ffe0:
    // 0x35ffe0: 0x50a300e0  beql        $a1, $v1, . + 4 + (0xE0 << 2)
label_35ffe4:
    if (ctx->pc == 0x35FFE4u) {
        ctx->pc = 0x35FFE4u;
            // 0x35ffe4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x35FFE8u;
        goto label_35ffe8;
    }
    ctx->pc = 0x35FFE0u;
    {
        const bool branch_taken_0x35ffe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x35ffe0) {
            ctx->pc = 0x35FFE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35FFE0u;
            // 0x35ffe4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x360364u;
            goto label_360364;
        }
    }
    ctx->pc = 0x35FFE8u;
label_35ffe8:
    // 0x35ffe8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35ffec:
    // 0x35ffec: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_35fff0:
    if (ctx->pc == 0x35FFF0u) {
        ctx->pc = 0x35FFF4u;
        goto label_35fff4;
    }
    ctx->pc = 0x35FFECu;
    {
        const bool branch_taken_0x35ffec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x35ffec) {
            ctx->pc = 0x35FFFCu;
            goto label_35fffc;
        }
    }
    ctx->pc = 0x35FFF4u;
label_35fff4:
    // 0x35fff4: 0x100000da  b           . + 4 + (0xDA << 2)
label_35fff8:
    if (ctx->pc == 0x35FFF8u) {
        ctx->pc = 0x35FFFCu;
        goto label_35fffc;
    }
    ctx->pc = 0x35FFF4u;
    {
        const bool branch_taken_0x35fff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fff4) {
            ctx->pc = 0x360360u;
            goto label_360360;
        }
    }
    ctx->pc = 0x35FFFCu;
label_35fffc:
    // 0x35fffc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_360000:
    // 0x360000: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x360000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_360004:
    // 0x360004: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x360004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_360008:
    // 0x360008: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x360008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_36000c:
    // 0x36000c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x36000cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_360010:
    // 0x360010: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x360010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_360014:
    // 0x360014: 0x320f809  jalr        $t9
label_360018:
    if (ctx->pc == 0x360018u) {
        ctx->pc = 0x360018u;
            // 0x360018: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x36001Cu;
        goto label_36001c;
    }
    ctx->pc = 0x360014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36001Cu);
        ctx->pc = 0x360018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360014u;
            // 0x360018: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36001Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36001Cu; }
            if (ctx->pc != 0x36001Cu) { return; }
        }
        }
    }
    ctx->pc = 0x36001Cu;
label_36001c:
    // 0x36001c: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_360020:
    if (ctx->pc == 0x360020u) {
        ctx->pc = 0x360024u;
        goto label_360024;
    }
    ctx->pc = 0x36001Cu;
    {
        const bool branch_taken_0x36001c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36001c) {
            ctx->pc = 0x360360u;
            goto label_360360;
        }
    }
    ctx->pc = 0x360024u;
label_360024:
    // 0x360024: 0x8fc30070  lw          $v1, 0x70($fp)
    ctx->pc = 0x360024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_360028:
    // 0x360028: 0x106000cd  beqz        $v1, . + 4 + (0xCD << 2)
label_36002c:
    if (ctx->pc == 0x36002Cu) {
        ctx->pc = 0x36002Cu;
            // 0x36002c: 0x7fa300d0  sq          $v1, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
        ctx->pc = 0x360030u;
        goto label_360030;
    }
    ctx->pc = 0x360028u;
    {
        const bool branch_taken_0x360028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36002Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360028u;
            // 0x36002c: 0x7fa300d0  sq          $v1, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360028) {
            ctx->pc = 0x360360u;
            goto label_360360;
        }
    }
    ctx->pc = 0x360030u;
label_360030:
    // 0x360030: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x360030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_360034:
    // 0x360034: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x360034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_360038:
    // 0x360038: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x360038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_36003c:
    // 0x36003c: 0x27d10084  addiu       $s1, $fp, 0x84
    ctx->pc = 0x36003cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 132));
label_360040:
    // 0x360040: 0x8c76e378  lw          $s6, -0x1C88($v1)
    ctx->pc = 0x360040u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_360044:
    // 0x360044: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x360044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_360048:
    // 0x360048: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x360048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_36004c:
    // 0x36004c: 0x8c55e370  lw          $s5, -0x1C90($v0)
    ctx->pc = 0x36004cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_360050:
    // 0x360050: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x360050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_360054:
    // 0x360054: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x360054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_360058:
    // 0x360058: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x360058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_36005c:
    // 0x36005c: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x36005cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_360060:
    // 0x360060: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x360060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_360064:
    // 0x360064: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x360064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_360068:
    // 0x360068: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x360068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_36006c:
    // 0x36006c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x36006cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_360070:
    // 0x360070: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x360070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_360074:
    // 0x360074: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_360078:
    if (ctx->pc == 0x360078u) {
        ctx->pc = 0x360078u;
            // 0x360078: 0x24770010  addiu       $s7, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x36007Cu;
        goto label_36007c;
    }
    ctx->pc = 0x360074u;
    {
        const bool branch_taken_0x360074 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x360078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360074u;
            // 0x360078: 0x24770010  addiu       $s7, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360074) {
            ctx->pc = 0x360088u;
            goto label_360088;
        }
    }
    ctx->pc = 0x36007Cu;
label_36007c:
    // 0x36007c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36007cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_360080:
    // 0x360080: 0x10000008  b           . + 4 + (0x8 << 2)
label_360084:
    if (ctx->pc == 0x360084u) {
        ctx->pc = 0x360084u;
            // 0x360084: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x360088u;
        goto label_360088;
    }
    ctx->pc = 0x360080u;
    {
        const bool branch_taken_0x360080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360080u;
            // 0x360084: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x360080) {
            ctx->pc = 0x3600A4u;
            goto label_3600a4;
        }
    }
    ctx->pc = 0x360088u;
label_360088:
    // 0x360088: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x360088u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_36008c:
    // 0x36008c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x36008cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_360090:
    // 0x360090: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x360090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_360094:
    // 0x360094: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x360094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_360098:
    // 0x360098: 0x0  nop
    ctx->pc = 0x360098u;
    // NOP
label_36009c:
    // 0x36009c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x36009cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3600a0:
    // 0x3600a0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3600a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3600a4:
    // 0x3600a4: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x3600a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3600a8:
    // 0x3600a8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3600a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3600ac:
    // 0x3600ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3600acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3600b0:
    // 0x3600b0: 0x0  nop
    ctx->pc = 0x3600b0u;
    // NOP
label_3600b4:
    // 0x3600b4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3600b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3600b8:
    // 0x3600b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3600b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3600bc:
    // 0x3600bc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3600c0:
    if (ctx->pc == 0x3600C0u) {
        ctx->pc = 0x3600C0u;
            // 0x3600c0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3600C4u;
        goto label_3600c4;
    }
    ctx->pc = 0x3600BCu;
    {
        const bool branch_taken_0x3600bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3600bc) {
            ctx->pc = 0x3600C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3600BCu;
            // 0x3600c0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3600D4u;
            goto label_3600d4;
        }
    }
    ctx->pc = 0x3600C4u;
label_3600c4:
    // 0x3600c4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3600c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3600c8:
    // 0x3600c8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3600c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3600cc:
    // 0x3600cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_3600d0:
    if (ctx->pc == 0x3600D0u) {
        ctx->pc = 0x3600D0u;
            // 0x3600d0: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->pc = 0x3600D4u;
        goto label_3600d4;
    }
    ctx->pc = 0x3600CCu;
    {
        const bool branch_taken_0x3600cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3600D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3600CCu;
            // 0x3600d0: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3600cc) {
            ctx->pc = 0x3600F0u;
            goto label_3600f0;
        }
    }
    ctx->pc = 0x3600D4u;
label_3600d4:
    // 0x3600d4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3600d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3600d8:
    // 0x3600d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3600d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3600dc:
    // 0x3600dc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3600dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3600e0:
    // 0x3600e0: 0x0  nop
    ctx->pc = 0x3600e0u;
    // NOP
label_3600e4:
    // 0x3600e4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3600e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3600e8:
    // 0x3600e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3600e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3600ec:
    // 0x3600ec: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3600ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3600f0:
    // 0x3600f0: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x3600f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_3600f4:
    // 0x3600f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3600f8:
    if (ctx->pc == 0x3600F8u) {
        ctx->pc = 0x3600F8u;
            // 0x3600f8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3600FCu;
        goto label_3600fc;
    }
    ctx->pc = 0x3600F4u;
    {
        const bool branch_taken_0x3600f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3600F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3600F4u;
            // 0x3600f8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3600f4) {
            ctx->pc = 0x360118u;
            goto label_360118;
        }
    }
    ctx->pc = 0x3600FCu;
label_3600fc:
    // 0x3600fc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3600fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_360100:
    // 0x360100: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x360100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_360104:
    // 0x360104: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x360104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_360108:
    // 0x360108: 0x0  nop
    ctx->pc = 0x360108u;
    // NOP
label_36010c:
    // 0x36010c: 0x0  nop
    ctx->pc = 0x36010cu;
    // NOP
label_360110:
    // 0x360110: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_360114:
    if (ctx->pc == 0x360114u) {
        ctx->pc = 0x360118u;
        goto label_360118;
    }
    ctx->pc = 0x360110u;
    {
        const bool branch_taken_0x360110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360110) {
            ctx->pc = 0x3600FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3600fc;
        }
    }
    ctx->pc = 0x360118u;
label_360118:
    // 0x360118: 0x8fc200bc  lw          $v0, 0xBC($fp)
    ctx->pc = 0x360118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 188)));
label_36011c:
    // 0x36011c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x36011cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_360120:
    // 0x360120: 0x8fc500ac  lw          $a1, 0xAC($fp)
    ctx->pc = 0x360120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 172)));
label_360124:
    // 0x360124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x360124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_360128:
    // 0x360128: 0x8fc300b8  lw          $v1, 0xB8($fp)
    ctx->pc = 0x360128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 184)));
label_36012c:
    // 0x36012c: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x36012cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_360130:
    // 0x360130: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x360130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_360134:
    // 0x360134: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x360134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
label_360138:
    // 0x360138: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x360138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_36013c:
    // 0x36013c: 0xc04e4a4  jal         func_139290
label_360140:
    if (ctx->pc == 0x360140u) {
        ctx->pc = 0x360140u;
            // 0x360140: 0xafa30124  sw          $v1, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
        ctx->pc = 0x360144u;
        goto label_360144;
    }
    ctx->pc = 0x36013Cu;
    SET_GPR_U32(ctx, 31, 0x360144u);
    ctx->pc = 0x360140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36013Cu;
            // 0x360140: 0xafa30124  sw          $v1, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360144u; }
        if (ctx->pc != 0x360144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360144u; }
        if (ctx->pc != 0x360144u) { return; }
    }
    ctx->pc = 0x360144u;
label_360144:
    // 0x360144: 0xc04e738  jal         func_139CE0
label_360148:
    if (ctx->pc == 0x360148u) {
        ctx->pc = 0x360148u;
            // 0x360148: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x36014Cu;
        goto label_36014c;
    }
    ctx->pc = 0x360144u;
    SET_GPR_U32(ctx, 31, 0x36014Cu);
    ctx->pc = 0x360148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360144u;
            // 0x360148: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36014Cu; }
        if (ctx->pc != 0x36014Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36014Cu; }
        if (ctx->pc != 0x36014Cu) { return; }
    }
    ctx->pc = 0x36014Cu;
label_36014c:
    // 0x36014c: 0x93c200a8  lbu         $v0, 0xA8($fp)
    ctx->pc = 0x36014cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 168)));
label_360150:
    // 0x360150: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_360154:
    if (ctx->pc == 0x360154u) {
        ctx->pc = 0x360154u;
            // 0x360154: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360158u;
        goto label_360158;
    }
    ctx->pc = 0x360150u;
    {
        const bool branch_taken_0x360150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x360150) {
            ctx->pc = 0x360154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x360150u;
            // 0x360154: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x360174u;
            goto label_360174;
        }
    }
    ctx->pc = 0x360158u;
label_360158:
    // 0x360158: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x360158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36015c:
    // 0x36015c: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x36015cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_360160:
    // 0x360160: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x360160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_360164:
    // 0x360164: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x360164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_360168:
    // 0x360168: 0x320f809  jalr        $t9
label_36016c:
    if (ctx->pc == 0x36016Cu) {
        ctx->pc = 0x360170u;
        goto label_360170;
    }
    ctx->pc = 0x360168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x360170u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x360170u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x360170u; }
            if (ctx->pc != 0x360170u) { return; }
        }
        }
    }
    ctx->pc = 0x360170u;
label_360170:
    // 0x360170: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x360170u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_360174:
    // 0x360174: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x360174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_360178:
    // 0x360178: 0x8fc20074  lw          $v0, 0x74($fp)
    ctx->pc = 0x360178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_36017c:
    // 0x36017c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x36017cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_360180:
    // 0x360180: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x360180u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_360184:
    // 0x360184: 0xc0d1c14  jal         func_347050
label_360188:
    if (ctx->pc == 0x360188u) {
        ctx->pc = 0x360188u;
            // 0x360188: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36018Cu;
        goto label_36018c;
    }
    ctx->pc = 0x360184u;
    SET_GPR_U32(ctx, 31, 0x36018Cu);
    ctx->pc = 0x360188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360184u;
            // 0x360188: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36018Cu; }
        if (ctx->pc != 0x36018Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36018Cu; }
        if (ctx->pc != 0x36018Cu) { return; }
    }
    ctx->pc = 0x36018Cu;
label_36018c:
    // 0x36018c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36018cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_360190:
    // 0x360190: 0xc04f278  jal         func_13C9E0
label_360194:
    if (ctx->pc == 0x360194u) {
        ctx->pc = 0x360194u;
            // 0x360194: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x360198u;
        goto label_360198;
    }
    ctx->pc = 0x360190u;
    SET_GPR_U32(ctx, 31, 0x360198u);
    ctx->pc = 0x360194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360190u;
            // 0x360194: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360198u; }
        if (ctx->pc != 0x360198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360198u; }
        if (ctx->pc != 0x360198u) { return; }
    }
    ctx->pc = 0x360198u;
label_360198:
    // 0x360198: 0xc0d1dc8  jal         func_347720
label_36019c:
    if (ctx->pc == 0x36019Cu) {
        ctx->pc = 0x36019Cu;
            // 0x36019c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3601A0u;
        goto label_3601a0;
    }
    ctx->pc = 0x360198u;
    SET_GPR_U32(ctx, 31, 0x3601A0u);
    ctx->pc = 0x36019Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360198u;
            // 0x36019c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3601A0u; }
        if (ctx->pc != 0x3601A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3601A0u; }
        if (ctx->pc != 0x3601A0u) { return; }
    }
    ctx->pc = 0x3601A0u;
label_3601a0:
    // 0x3601a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3601a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3601a4:
    // 0x3601a4: 0xc0d1dc8  jal         func_347720
label_3601a8:
    if (ctx->pc == 0x3601A8u) {
        ctx->pc = 0x3601A8u;
            // 0x3601a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3601ACu;
        goto label_3601ac;
    }
    ctx->pc = 0x3601A4u;
    SET_GPR_U32(ctx, 31, 0x3601ACu);
    ctx->pc = 0x3601A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3601A4u;
            // 0x3601a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3601ACu; }
        if (ctx->pc != 0x3601ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3601ACu; }
        if (ctx->pc != 0x3601ACu) { return; }
    }
    ctx->pc = 0x3601ACu;
label_3601ac:
    // 0x3601ac: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3601acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3601b0:
    // 0x3601b0: 0xc0d1dc8  jal         func_347720
label_3601b4:
    if (ctx->pc == 0x3601B4u) {
        ctx->pc = 0x3601B4u;
            // 0x3601b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3601B8u;
        goto label_3601b8;
    }
    ctx->pc = 0x3601B0u;
    SET_GPR_U32(ctx, 31, 0x3601B8u);
    ctx->pc = 0x3601B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3601B0u;
            // 0x3601b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3601B8u; }
        if (ctx->pc != 0x3601B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3601B8u; }
        if (ctx->pc != 0x3601B8u) { return; }
    }
    ctx->pc = 0x3601B8u;
label_3601b8:
    // 0x3601b8: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3601b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3601bc:
    // 0x3601bc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3601bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3601c0:
    // 0x3601c0: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x3601c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3601c4:
    // 0x3601c4: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x3601c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3601c8:
    // 0x3601c8: 0xc46d0004  lwc1        $f13, 0x4($v1)
    ctx->pc = 0x3601c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3601cc:
    // 0x3601cc: 0xc04ce50  jal         func_133940
label_3601d0:
    if (ctx->pc == 0x3601D0u) {
        ctx->pc = 0x3601D0u;
            // 0x3601d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3601D4u;
        goto label_3601d4;
    }
    ctx->pc = 0x3601CCu;
    SET_GPR_U32(ctx, 31, 0x3601D4u);
    ctx->pc = 0x3601D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3601CCu;
            // 0x3601d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3601D4u; }
        if (ctx->pc != 0x3601D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3601D4u; }
        if (ctx->pc != 0x3601D4u) { return; }
    }
    ctx->pc = 0x3601D4u;
label_3601d4:
    // 0x3601d4: 0xc0d1c10  jal         func_347040
label_3601d8:
    if (ctx->pc == 0x3601D8u) {
        ctx->pc = 0x3601D8u;
            // 0x3601d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3601DCu;
        goto label_3601dc;
    }
    ctx->pc = 0x3601D4u;
    SET_GPR_U32(ctx, 31, 0x3601DCu);
    ctx->pc = 0x3601D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3601D4u;
            // 0x3601d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3601DCu; }
        if (ctx->pc != 0x3601DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3601DCu; }
        if (ctx->pc != 0x3601DCu) { return; }
    }
    ctx->pc = 0x3601DCu;
label_3601dc:
    // 0x3601dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3601dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3601e0:
    // 0x3601e0: 0xc04ce80  jal         func_133A00
label_3601e4:
    if (ctx->pc == 0x3601E4u) {
        ctx->pc = 0x3601E4u;
            // 0x3601e4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3601E8u;
        goto label_3601e8;
    }
    ctx->pc = 0x3601E0u;
    SET_GPR_U32(ctx, 31, 0x3601E8u);
    ctx->pc = 0x3601E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3601E0u;
            // 0x3601e4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3601E8u; }
        if (ctx->pc != 0x3601E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3601E8u; }
        if (ctx->pc != 0x3601E8u) { return; }
    }
    ctx->pc = 0x3601E8u;
label_3601e8:
    // 0x3601e8: 0xc0d4108  jal         func_350420
label_3601ec:
    if (ctx->pc == 0x3601ECu) {
        ctx->pc = 0x3601F0u;
        goto label_3601f0;
    }
    ctx->pc = 0x3601E8u;
    SET_GPR_U32(ctx, 31, 0x3601F0u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3601F0u; }
        if (ctx->pc != 0x3601F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3601F0u; }
        if (ctx->pc != 0x3601F0u) { return; }
    }
    ctx->pc = 0x3601F0u;
label_3601f0:
    // 0x3601f0: 0xc0b36b4  jal         func_2CDAD0
label_3601f4:
    if (ctx->pc == 0x3601F4u) {
        ctx->pc = 0x3601F4u;
            // 0x3601f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3601F8u;
        goto label_3601f8;
    }
    ctx->pc = 0x3601F0u;
    SET_GPR_U32(ctx, 31, 0x3601F8u);
    ctx->pc = 0x3601F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3601F0u;
            // 0x3601f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3601F8u; }
        if (ctx->pc != 0x3601F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3601F8u; }
        if (ctx->pc != 0x3601F8u) { return; }
    }
    ctx->pc = 0x3601F8u;
label_3601f8:
    // 0x3601f8: 0xc0b9c64  jal         func_2E7190
label_3601fc:
    if (ctx->pc == 0x3601FCu) {
        ctx->pc = 0x3601FCu;
            // 0x3601fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360200u;
        goto label_360200;
    }
    ctx->pc = 0x3601F8u;
    SET_GPR_U32(ctx, 31, 0x360200u);
    ctx->pc = 0x3601FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3601F8u;
            // 0x3601fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360200u; }
        if (ctx->pc != 0x360200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360200u; }
        if (ctx->pc != 0x360200u) { return; }
    }
    ctx->pc = 0x360200u;
label_360200:
    // 0x360200: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x360200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_360204:
    // 0x360204: 0xc0d4104  jal         func_350410
label_360208:
    if (ctx->pc == 0x360208u) {
        ctx->pc = 0x360208u;
            // 0x360208: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36020Cu;
        goto label_36020c;
    }
    ctx->pc = 0x360204u;
    SET_GPR_U32(ctx, 31, 0x36020Cu);
    ctx->pc = 0x360208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360204u;
            // 0x360208: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36020Cu; }
        if (ctx->pc != 0x36020Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36020Cu; }
        if (ctx->pc != 0x36020Cu) { return; }
    }
    ctx->pc = 0x36020Cu;
label_36020c:
    // 0x36020c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x36020cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_360210:
    // 0x360210: 0x7ba500a0  lq          $a1, 0xA0($sp)
    ctx->pc = 0x360210u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_360214:
    // 0x360214: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x360214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_360218:
    // 0x360218: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x360218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36021c:
    // 0x36021c: 0xc44c4010  lwc1        $f12, 0x4010($v0)
    ctx->pc = 0x36021cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_360220:
    // 0x360220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x360220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_360224:
    // 0x360224: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x360224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_360228:
    // 0x360228: 0xc0d40ac  jal         func_3502B0
label_36022c:
    if (ctx->pc == 0x36022Cu) {
        ctx->pc = 0x36022Cu;
            // 0x36022c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360230u;
        goto label_360230;
    }
    ctx->pc = 0x360228u;
    SET_GPR_U32(ctx, 31, 0x360230u);
    ctx->pc = 0x36022Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360228u;
            // 0x36022c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360230u; }
        if (ctx->pc != 0x360230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360230u; }
        if (ctx->pc != 0x360230u) { return; }
    }
    ctx->pc = 0x360230u;
label_360230:
    // 0x360230: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x360230u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_360234:
    // 0x360234: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
label_360238:
    if (ctx->pc == 0x360238u) {
        ctx->pc = 0x360238u;
            // 0x360238: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x36023Cu;
        goto label_36023c;
    }
    ctx->pc = 0x360234u;
    {
        const bool branch_taken_0x360234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x360238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360234u;
            // 0x360238: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360234) {
            ctx->pc = 0x360328u;
            goto label_360328;
        }
    }
    ctx->pc = 0x36023Cu;
label_36023c:
    // 0x36023c: 0xc0d63d8  jal         func_358F60
label_360240:
    if (ctx->pc == 0x360240u) {
        ctx->pc = 0x360240u;
            // 0x360240: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360244u;
        goto label_360244;
    }
    ctx->pc = 0x36023Cu;
    SET_GPR_U32(ctx, 31, 0x360244u);
    ctx->pc = 0x360240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36023Cu;
            // 0x360240: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358F60u;
    if (runtime->hasFunction(0x358F60u)) {
        auto targetFn = runtime->lookupFunction(0x358F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360244u; }
        if (ctx->pc != 0x360244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358F60_0x358f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360244u; }
        if (ctx->pc != 0x360244u) { return; }
    }
    ctx->pc = 0x360244u;
label_360244:
    // 0x360244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x360244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_360248:
    // 0x360248: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x360248u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_36024c:
    // 0x36024c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x36024cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_360250:
    // 0x360250: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x360250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_360254:
    // 0x360254: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_360258:
    if (ctx->pc == 0x360258u) {
        ctx->pc = 0x360258u;
            // 0x360258: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x36025Cu;
        goto label_36025c;
    }
    ctx->pc = 0x360254u;
    {
        const bool branch_taken_0x360254 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x360254) {
            ctx->pc = 0x360258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x360254u;
            // 0x360258: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x360268u;
            goto label_360268;
        }
    }
    ctx->pc = 0x36025Cu;
label_36025c:
    // 0x36025c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36025cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_360260:
    // 0x360260: 0x10000007  b           . + 4 + (0x7 << 2)
label_360264:
    if (ctx->pc == 0x360264u) {
        ctx->pc = 0x360264u;
            // 0x360264: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x360268u;
        goto label_360268;
    }
    ctx->pc = 0x360260u;
    {
        const bool branch_taken_0x360260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360260u;
            // 0x360264: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x360260) {
            ctx->pc = 0x360280u;
            goto label_360280;
        }
    }
    ctx->pc = 0x360268u;
label_360268:
    // 0x360268: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x360268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_36026c:
    // 0x36026c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x36026cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_360270:
    // 0x360270: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x360270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_360274:
    // 0x360274: 0x0  nop
    ctx->pc = 0x360274u;
    // NOP
label_360278:
    // 0x360278: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x360278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_36027c:
    // 0x36027c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x36027cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_360280:
    // 0x360280: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x360280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_360284:
    // 0x360284: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x360284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_360288:
    // 0x360288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x360288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36028c:
    // 0x36028c: 0xc0477a8  jal         func_11DEA0
label_360290:
    if (ctx->pc == 0x360290u) {
        ctx->pc = 0x360290u;
            // 0x360290: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x360294u;
        goto label_360294;
    }
    ctx->pc = 0x36028Cu;
    SET_GPR_U32(ctx, 31, 0x360294u);
    ctx->pc = 0x360290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36028Cu;
            // 0x360290: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360294u; }
        if (ctx->pc != 0x360294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360294u; }
        if (ctx->pc != 0x360294u) { return; }
    }
    ctx->pc = 0x360294u;
label_360294:
    // 0x360294: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x360294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_360298:
    // 0x360298: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x360298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_36029c:
    // 0x36029c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36029cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3602a0:
    // 0x3602a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3602a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3602a4:
    // 0x3602a4: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x3602a4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3602a8:
    // 0x3602a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3602a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3602ac:
    // 0x3602ac: 0xc04ce64  jal         func_133990
label_3602b0:
    if (ctx->pc == 0x3602B0u) {
        ctx->pc = 0x3602B0u;
            // 0x3602b0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3602B4u;
        goto label_3602b4;
    }
    ctx->pc = 0x3602ACu;
    SET_GPR_U32(ctx, 31, 0x3602B4u);
    ctx->pc = 0x3602B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3602ACu;
            // 0x3602b0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3602B4u; }
        if (ctx->pc != 0x3602B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3602B4u; }
        if (ctx->pc != 0x3602B4u) { return; }
    }
    ctx->pc = 0x3602B4u;
label_3602b4:
    // 0x3602b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3602b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3602b8:
    // 0x3602b8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3602b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3602bc:
    // 0x3602bc: 0xc04cd60  jal         func_133580
label_3602c0:
    if (ctx->pc == 0x3602C0u) {
        ctx->pc = 0x3602C0u;
            // 0x3602c0: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3602C4u;
        goto label_3602c4;
    }
    ctx->pc = 0x3602BCu;
    SET_GPR_U32(ctx, 31, 0x3602C4u);
    ctx->pc = 0x3602C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3602BCu;
            // 0x3602c0: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3602C4u; }
        if (ctx->pc != 0x3602C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3602C4u; }
        if (ctx->pc != 0x3602C4u) { return; }
    }
    ctx->pc = 0x3602C4u;
label_3602c4:
    // 0x3602c4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3602c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3602c8:
    // 0x3602c8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3602c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3602cc:
    // 0x3602cc: 0xc04cd60  jal         func_133580
label_3602d0:
    if (ctx->pc == 0x3602D0u) {
        ctx->pc = 0x3602D0u;
            // 0x3602d0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3602D4u;
        goto label_3602d4;
    }
    ctx->pc = 0x3602CCu;
    SET_GPR_U32(ctx, 31, 0x3602D4u);
    ctx->pc = 0x3602D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3602CCu;
            // 0x3602d0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3602D4u; }
        if (ctx->pc != 0x3602D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3602D4u; }
        if (ctx->pc != 0x3602D4u) { return; }
    }
    ctx->pc = 0x3602D4u;
label_3602d4:
    // 0x3602d4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3602d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3602d8:
    // 0x3602d8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3602d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3602dc:
    // 0x3602dc: 0x320f809  jalr        $t9
label_3602e0:
    if (ctx->pc == 0x3602E0u) {
        ctx->pc = 0x3602E0u;
            // 0x3602e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3602E4u;
        goto label_3602e4;
    }
    ctx->pc = 0x3602DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3602E4u);
        ctx->pc = 0x3602E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3602DCu;
            // 0x3602e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3602E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3602E4u; }
            if (ctx->pc != 0x3602E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3602E4u;
label_3602e4:
    // 0x3602e4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3602e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3602e8:
    // 0x3602e8: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3602e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_3602ec:
    // 0x3602ec: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3602ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3602f0:
    // 0x3602f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3602f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3602f4:
    // 0x3602f4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3602f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3602f8:
    // 0x3602f8: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x3602f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3602fc:
    // 0x3602fc: 0xc04cfcc  jal         func_133F30
label_360300:
    if (ctx->pc == 0x360300u) {
        ctx->pc = 0x360300u;
            // 0x360300: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x360304u;
        goto label_360304;
    }
    ctx->pc = 0x3602FCu;
    SET_GPR_U32(ctx, 31, 0x360304u);
    ctx->pc = 0x360300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3602FCu;
            // 0x360300: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360304u; }
        if (ctx->pc != 0x360304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360304u; }
        if (ctx->pc != 0x360304u) { return; }
    }
    ctx->pc = 0x360304u;
label_360304:
    // 0x360304: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x360304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_360308:
    // 0x360308: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x360308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_36030c:
    // 0x36030c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x36030cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_360310:
    // 0x360310: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x360310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_360314:
    // 0x360314: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x360314u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_360318:
    // 0x360318: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x360318u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_36031c:
    // 0x36031c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x36031cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_360320:
    // 0x360320: 0xc054c2c  jal         func_1530B0
label_360324:
    if (ctx->pc == 0x360324u) {
        ctx->pc = 0x360324u;
            // 0x360324: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x360328u;
        goto label_360328;
    }
    ctx->pc = 0x360320u;
    SET_GPR_U32(ctx, 31, 0x360328u);
    ctx->pc = 0x360324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360320u;
            // 0x360324: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360328u; }
        if (ctx->pc != 0x360328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360328u; }
        if (ctx->pc != 0x360328u) { return; }
    }
    ctx->pc = 0x360328u;
label_360328:
    // 0x360328: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x360328u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_36032c:
    // 0x36032c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x36032cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_360330:
    // 0x360330: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x360330u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_360334:
    // 0x360334: 0x1460ff90  bnez        $v1, . + 4 + (-0x70 << 2)
label_360338:
    if (ctx->pc == 0x360338u) {
        ctx->pc = 0x360338u;
            // 0x360338: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x36033Cu;
        goto label_36033c;
    }
    ctx->pc = 0x360334u;
    {
        const bool branch_taken_0x360334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x360338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360334u;
            // 0x360338: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360334) {
            ctx->pc = 0x360178u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_360178;
        }
    }
    ctx->pc = 0x36033Cu;
label_36033c:
    // 0x36033c: 0x93c300a8  lbu         $v1, 0xA8($fp)
    ctx->pc = 0x36033cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 168)));
label_360340:
    // 0x360340: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_360344:
    if (ctx->pc == 0x360344u) {
        ctx->pc = 0x360348u;
        goto label_360348;
    }
    ctx->pc = 0x360340u;
    {
        const bool branch_taken_0x360340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x360340) {
            ctx->pc = 0x360360u;
            goto label_360360;
        }
    }
    ctx->pc = 0x360348u;
label_360348:
    // 0x360348: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x360348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36034c:
    // 0x36034c: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x36034cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_360350:
    // 0x360350: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x360350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_360354:
    // 0x360354: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x360354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_360358:
    // 0x360358: 0x320f809  jalr        $t9
label_36035c:
    if (ctx->pc == 0x36035Cu) {
        ctx->pc = 0x360360u;
        goto label_360360;
    }
    ctx->pc = 0x360358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x360360u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x360360u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x360360u; }
            if (ctx->pc != 0x360360u) { return; }
        }
        }
    }
    ctx->pc = 0x360360u;
label_360360:
    // 0x360360: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x360360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_360364:
    // 0x360364: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x360364u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_360368:
    // 0x360368: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x360368u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_36036c:
    // 0x36036c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x36036cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_360370:
    // 0x360370: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x360370u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_360374:
    // 0x360374: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x360374u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_360378:
    // 0x360378: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x360378u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36037c:
    // 0x36037c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36037cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_360380:
    // 0x360380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x360380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_360384:
    // 0x360384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x360384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_360388:
    // 0x360388: 0x3e00008  jr          $ra
label_36038c:
    if (ctx->pc == 0x36038Cu) {
        ctx->pc = 0x36038Cu;
            // 0x36038c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x360390u;
        goto label_360390;
    }
    ctx->pc = 0x360388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36038Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360388u;
            // 0x36038c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x360390u;
label_360390:
    // 0x360390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x360390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_360394:
    // 0x360394: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x360394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_360398:
    // 0x360398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x360398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36039c:
    // 0x36039c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36039cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3603a0:
    // 0x3603a0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3603a0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3603a4:
    // 0x3603a4: 0x10a30021  beq         $a1, $v1, . + 4 + (0x21 << 2)
label_3603a8:
    if (ctx->pc == 0x3603A8u) {
        ctx->pc = 0x3603A8u;
            // 0x3603a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3603ACu;
        goto label_3603ac;
    }
    ctx->pc = 0x3603A4u;
    {
        const bool branch_taken_0x3603a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3603A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3603A4u;
            // 0x3603a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3603a4) {
            ctx->pc = 0x36042Cu;
            goto label_36042c;
        }
    }
    ctx->pc = 0x3603ACu;
label_3603ac:
    // 0x3603ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3603acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3603b0:
    // 0x3603b0: 0x50a3001b  beql        $a1, $v1, . + 4 + (0x1B << 2)
label_3603b4:
    if (ctx->pc == 0x3603B4u) {
        ctx->pc = 0x3603B4u;
            // 0x3603b4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3603B8u;
        goto label_3603b8;
    }
    ctx->pc = 0x3603B0u;
    {
        const bool branch_taken_0x3603b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3603b0) {
            ctx->pc = 0x3603B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3603B0u;
            // 0x3603b4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x360420u;
            goto label_360420;
        }
    }
    ctx->pc = 0x3603B8u;
label_3603b8:
    // 0x3603b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3603b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3603bc:
    // 0x3603bc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3603c0:
    if (ctx->pc == 0x3603C0u) {
        ctx->pc = 0x3603C4u;
        goto label_3603c4;
    }
    ctx->pc = 0x3603BCu;
    {
        const bool branch_taken_0x3603bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3603bc) {
            ctx->pc = 0x3603CCu;
            goto label_3603cc;
        }
    }
    ctx->pc = 0x3603C4u;
label_3603c4:
    // 0x3603c4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_3603c8:
    if (ctx->pc == 0x3603C8u) {
        ctx->pc = 0x3603C8u;
            // 0x3603c8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3603CCu;
        goto label_3603cc;
    }
    ctx->pc = 0x3603C4u;
    {
        const bool branch_taken_0x3603c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3603C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3603C4u;
            // 0x3603c8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3603c4) {
            ctx->pc = 0x3604B8u;
            goto label_3604b8;
        }
    }
    ctx->pc = 0x3603CCu;
label_3603cc:
    // 0x3603cc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3603ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3603d0:
    // 0x3603d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3603d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3603d4:
    // 0x3603d4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3603d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3603d8:
    // 0x3603d8: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3603d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3603dc:
    // 0x3603dc: 0x10640035  beq         $v1, $a0, . + 4 + (0x35 << 2)
label_3603e0:
    if (ctx->pc == 0x3603E0u) {
        ctx->pc = 0x3603E4u;
        goto label_3603e4;
    }
    ctx->pc = 0x3603DCu;
    {
        const bool branch_taken_0x3603dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3603dc) {
            ctx->pc = 0x3604B4u;
            goto label_3604b4;
        }
    }
    ctx->pc = 0x3603E4u;
label_3603e4:
    // 0x3603e4: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x3603e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_3603e8:
    // 0x3603e8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3603e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3603ec:
    // 0x3603ec: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x3603ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3603f0:
    // 0x3603f0: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x3603f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3603f4:
    // 0x3603f4: 0x24630056  addiu       $v1, $v1, 0x56
    ctx->pc = 0x3603f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 86));
label_3603f8:
    // 0x3603f8: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x3603f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
label_3603fc:
    // 0x3603fc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3603fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_360400:
    // 0x360400: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x360400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_360404:
    // 0x360404: 0x2463005c  addiu       $v1, $v1, 0x5C
    ctx->pc = 0x360404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
label_360408:
    // 0x360408: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x360408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_36040c:
    // 0x36040c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x36040cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_360410:
    // 0x360410: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x360410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_360414:
    // 0x360414: 0x24630056  addiu       $v1, $v1, 0x56
    ctx->pc = 0x360414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 86));
label_360418:
    // 0x360418: 0x10000026  b           . + 4 + (0x26 << 2)
label_36041c:
    if (ctx->pc == 0x36041Cu) {
        ctx->pc = 0x36041Cu;
            // 0x36041c: 0xae0300b4  sw          $v1, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
        ctx->pc = 0x360420u;
        goto label_360420;
    }
    ctx->pc = 0x360418u;
    {
        const bool branch_taken_0x360418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36041Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360418u;
            // 0x36041c: 0xae0300b4  sw          $v1, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360418) {
            ctx->pc = 0x3604B4u;
            goto label_3604b4;
        }
    }
    ctx->pc = 0x360420u;
label_360420:
    // 0x360420: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x360420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_360424:
    // 0x360424: 0x320f809  jalr        $t9
label_360428:
    if (ctx->pc == 0x360428u) {
        ctx->pc = 0x36042Cu;
        goto label_36042c;
    }
    ctx->pc = 0x360424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36042Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x36042Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36042Cu; }
            if (ctx->pc != 0x36042Cu) { return; }
        }
        }
    }
    ctx->pc = 0x36042Cu;
label_36042c:
    // 0x36042c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x36042cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_360430:
    // 0x360430: 0x26060084  addiu       $a2, $s0, 0x84
    ctx->pc = 0x360430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_360434:
    // 0x360434: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x360434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_360438:
    // 0x360438: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x360438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36043c:
    // 0x36043c: 0x24c5001c  addiu       $a1, $a2, 0x1C
    ctx->pc = 0x36043cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
label_360440:
    // 0x360440: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x360440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_360444:
    // 0x360444: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x360444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_360448:
    // 0x360448: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x360448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
label_36044c:
    // 0x36044c: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x36044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_360450:
    // 0x360450: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x360450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_360454:
    // 0x360454: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x360454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_360458:
    // 0x360458: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x360458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36045c:
    // 0x36045c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_360460:
    if (ctx->pc == 0x360460u) {
        ctx->pc = 0x360460u;
            // 0x360460: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x360464u;
        goto label_360464;
    }
    ctx->pc = 0x36045Cu;
    {
        const bool branch_taken_0x36045c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x360460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36045Cu;
            // 0x360460: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36045c) {
            ctx->pc = 0x360468u;
            goto label_360468;
        }
    }
    ctx->pc = 0x360464u;
label_360464:
    // 0x360464: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x360464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_360468:
    // 0x360468: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_36046c:
    if (ctx->pc == 0x36046Cu) {
        ctx->pc = 0x36046Cu;
            // 0x36046c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x360470u;
        goto label_360470;
    }
    ctx->pc = 0x360468u;
    {
        const bool branch_taken_0x360468 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x360468) {
            ctx->pc = 0x36046Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x360468u;
            // 0x36046c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36047Cu;
            goto label_36047c;
        }
    }
    ctx->pc = 0x360470u;
label_360470:
    // 0x360470: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x360470u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_360474:
    // 0x360474: 0x10000007  b           . + 4 + (0x7 << 2)
label_360478:
    if (ctx->pc == 0x360478u) {
        ctx->pc = 0x360478u;
            // 0x360478: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x36047Cu;
        goto label_36047c;
    }
    ctx->pc = 0x360474u;
    {
        const bool branch_taken_0x360474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360474u;
            // 0x360478: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x360474) {
            ctx->pc = 0x360494u;
            goto label_360494;
        }
    }
    ctx->pc = 0x36047Cu;
label_36047c:
    // 0x36047c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x36047cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_360480:
    // 0x360480: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x360480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_360484:
    // 0x360484: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x360484u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_360488:
    // 0x360488: 0x0  nop
    ctx->pc = 0x360488u;
    // NOP
label_36048c:
    // 0x36048c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x36048cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_360490:
    // 0x360490: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x360490u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_360494:
    // 0x360494: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x360494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_360498:
    // 0x360498: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x360498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_36049c:
    // 0x36049c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x36049cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_3604a0:
    // 0x3604a0: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x3604a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_3604a4:
    // 0x3604a4: 0xc4cc001c  lwc1        $f12, 0x1C($a2)
    ctx->pc = 0x3604a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3604a8:
    // 0x3604a8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3604a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3604ac:
    // 0x3604ac: 0xc054bbc  jal         func_152EF0
label_3604b0:
    if (ctx->pc == 0x3604B0u) {
        ctx->pc = 0x3604B0u;
            // 0x3604b0: 0x8cc60014  lw          $a2, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->pc = 0x3604B4u;
        goto label_3604b4;
    }
    ctx->pc = 0x3604ACu;
    SET_GPR_U32(ctx, 31, 0x3604B4u);
    ctx->pc = 0x3604B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3604ACu;
            // 0x3604b0: 0x8cc60014  lw          $a2, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3604B4u; }
        if (ctx->pc != 0x3604B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3604B4u; }
        if (ctx->pc != 0x3604B4u) { return; }
    }
    ctx->pc = 0x3604B4u;
label_3604b4:
    // 0x3604b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3604b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3604b8:
    // 0x3604b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3604b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3604bc:
    // 0x3604bc: 0x3e00008  jr          $ra
label_3604c0:
    if (ctx->pc == 0x3604C0u) {
        ctx->pc = 0x3604C0u;
            // 0x3604c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3604C4u;
        goto label_3604c4;
    }
    ctx->pc = 0x3604BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3604C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3604BCu;
            // 0x3604c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3604C4u;
label_3604c4:
    // 0x3604c4: 0x0  nop
    ctx->pc = 0x3604c4u;
    // NOP
label_3604c8:
    // 0x3604c8: 0x0  nop
    ctx->pc = 0x3604c8u;
    // NOP
label_3604cc:
    // 0x3604cc: 0x0  nop
    ctx->pc = 0x3604ccu;
    // NOP
label_3604d0:
    // 0x3604d0: 0x80d7fc4  j           func_35FF10
label_3604d4:
    if (ctx->pc == 0x3604D4u) {
        ctx->pc = 0x3604D4u;
            // 0x3604d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3604D8u;
        goto label_3604d8;
    }
    ctx->pc = 0x3604D0u;
    ctx->pc = 0x3604D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3604D0u;
            // 0x3604d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35FF10u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_35ff10;
    ctx->pc = 0x3604D8u;
label_3604d8:
    // 0x3604d8: 0x0  nop
    ctx->pc = 0x3604d8u;
    // NOP
label_3604dc:
    // 0x3604dc: 0x0  nop
    ctx->pc = 0x3604dcu;
    // NOP
label_3604e0:
    // 0x3604e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3604e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3604e4:
    // 0x3604e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3604e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3604e8:
    // 0x3604e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3604e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3604ec:
    // 0x3604ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3604ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3604f0:
    // 0x3604f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3604f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3604f4:
    // 0x3604f4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_3604f8:
    if (ctx->pc == 0x3604F8u) {
        ctx->pc = 0x3604F8u;
            // 0x3604f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3604FCu;
        goto label_3604fc;
    }
    ctx->pc = 0x3604F4u;
    {
        const bool branch_taken_0x3604f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3604F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3604F4u;
            // 0x3604f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3604f4) {
            ctx->pc = 0x360550u;
            goto label_360550;
        }
    }
    ctx->pc = 0x3604FCu;
label_3604fc:
    // 0x3604fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3604fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_360500:
    // 0x360500: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x360500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_360504:
    // 0x360504: 0x24636620  addiu       $v1, $v1, 0x6620
    ctx->pc = 0x360504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26144));
label_360508:
    // 0x360508: 0x24426658  addiu       $v0, $v0, 0x6658
    ctx->pc = 0x360508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26200));
label_36050c:
    // 0x36050c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36050cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_360510:
    // 0x360510: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_360514:
    if (ctx->pc == 0x360514u) {
        ctx->pc = 0x360514u;
            // 0x360514: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x360518u;
        goto label_360518;
    }
    ctx->pc = 0x360510u;
    {
        const bool branch_taken_0x360510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x360514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360510u;
            // 0x360514: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360510) {
            ctx->pc = 0x360538u;
            goto label_360538;
        }
    }
    ctx->pc = 0x360518u;
label_360518:
    // 0x360518: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x360518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36051c:
    // 0x36051c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36051cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_360520:
    // 0x360520: 0x24632580  addiu       $v1, $v1, 0x2580
    ctx->pc = 0x360520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9600));
label_360524:
    // 0x360524: 0x244225b8  addiu       $v0, $v0, 0x25B8
    ctx->pc = 0x360524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9656));
label_360528:
    // 0x360528: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x360528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_36052c:
    // 0x36052c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36052cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_360530:
    // 0x360530: 0xc0ae730  jal         func_2B9CC0
label_360534:
    if (ctx->pc == 0x360534u) {
        ctx->pc = 0x360534u;
            // 0x360534: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x360538u;
        goto label_360538;
    }
    ctx->pc = 0x360530u;
    SET_GPR_U32(ctx, 31, 0x360538u);
    ctx->pc = 0x360534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360530u;
            // 0x360534: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9CC0u;
    if (runtime->hasFunction(0x2B9CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2B9CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360538u; }
        if (ctx->pc != 0x360538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B9CC0_0x2b9cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360538u; }
        if (ctx->pc != 0x360538u) { return; }
    }
    ctx->pc = 0x360538u;
label_360538:
    // 0x360538: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x360538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_36053c:
    // 0x36053c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36053cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_360540:
    // 0x360540: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_360544:
    if (ctx->pc == 0x360544u) {
        ctx->pc = 0x360544u;
            // 0x360544: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360548u;
        goto label_360548;
    }
    ctx->pc = 0x360540u;
    {
        const bool branch_taken_0x360540 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x360540) {
            ctx->pc = 0x360544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x360540u;
            // 0x360544: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x360554u;
            goto label_360554;
        }
    }
    ctx->pc = 0x360548u;
label_360548:
    // 0x360548: 0xc0400a8  jal         func_1002A0
label_36054c:
    if (ctx->pc == 0x36054Cu) {
        ctx->pc = 0x36054Cu;
            // 0x36054c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360550u;
        goto label_360550;
    }
    ctx->pc = 0x360548u;
    SET_GPR_U32(ctx, 31, 0x360550u);
    ctx->pc = 0x36054Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360548u;
            // 0x36054c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360550u; }
        if (ctx->pc != 0x360550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360550u; }
        if (ctx->pc != 0x360550u) { return; }
    }
    ctx->pc = 0x360550u;
label_360550:
    // 0x360550: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x360550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_360554:
    // 0x360554: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x360554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_360558:
    // 0x360558: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x360558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36055c:
    // 0x36055c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36055cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_360560:
    // 0x360560: 0x3e00008  jr          $ra
label_360564:
    if (ctx->pc == 0x360564u) {
        ctx->pc = 0x360564u;
            // 0x360564: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x360568u;
        goto label_360568;
    }
    ctx->pc = 0x360560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360560u;
            // 0x360564: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x360568u;
label_360568:
    // 0x360568: 0x0  nop
    ctx->pc = 0x360568u;
    // NOP
label_36056c:
    // 0x36056c: 0x0  nop
    ctx->pc = 0x36056cu;
    // NOP
label_360570:
    // 0x360570: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x360570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_360574:
    // 0x360574: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x360574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_360578:
    // 0x360578: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x360578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_36057c:
    // 0x36057c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x36057cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_360580:
    // 0x360580: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x360580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_360584:
    // 0x360584: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x360584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_360588:
    // 0x360588: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x360588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_36058c:
    // 0x36058c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36058cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_360590:
    // 0x360590: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x360590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_360594:
    // 0x360594: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x360594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_360598:
    // 0x360598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x360598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36059c:
    // 0x36059c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36059cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3605a0:
    // 0x3605a0: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x3605a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3605a4:
    // 0x3605a4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3605a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3605a8:
    // 0x3605a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3605a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3605ac:
    // 0x3605ac: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_3605b0:
    if (ctx->pc == 0x3605B0u) {
        ctx->pc = 0x3605B0u;
            // 0x3605b0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3605B4u;
        goto label_3605b4;
    }
    ctx->pc = 0x3605ACu;
    {
        const bool branch_taken_0x3605ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3605B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3605ACu;
            // 0x3605b0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3605ac) {
            ctx->pc = 0x3605F0u;
            goto label_3605f0;
        }
    }
    ctx->pc = 0x3605B4u;
label_3605b4:
    // 0x3605b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3605b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3605b8:
    // 0x3605b8: 0x10a30037  beq         $a1, $v1, . + 4 + (0x37 << 2)
label_3605bc:
    if (ctx->pc == 0x3605BCu) {
        ctx->pc = 0x3605C0u;
        goto label_3605c0;
    }
    ctx->pc = 0x3605B8u;
    {
        const bool branch_taken_0x3605b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3605b8) {
            ctx->pc = 0x360698u;
            goto label_360698;
        }
    }
    ctx->pc = 0x3605C0u;
label_3605c0:
    // 0x3605c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3605c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3605c4:
    // 0x3605c4: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3605c8:
    if (ctx->pc == 0x3605C8u) {
        ctx->pc = 0x3605C8u;
            // 0x3605c8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3605CCu;
        goto label_3605cc;
    }
    ctx->pc = 0x3605C4u;
    {
        const bool branch_taken_0x3605c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3605c4) {
            ctx->pc = 0x3605C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3605C4u;
            // 0x3605c8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3605D4u;
            goto label_3605d4;
        }
    }
    ctx->pc = 0x3605CCu;
label_3605cc:
    // 0x3605cc: 0x10000032  b           . + 4 + (0x32 << 2)
label_3605d0:
    if (ctx->pc == 0x3605D0u) {
        ctx->pc = 0x3605D4u;
        goto label_3605d4;
    }
    ctx->pc = 0x3605CCu;
    {
        const bool branch_taken_0x3605cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3605cc) {
            ctx->pc = 0x360698u;
            goto label_360698;
        }
    }
    ctx->pc = 0x3605D4u;
label_3605d4:
    // 0x3605d4: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x3605d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_3605d8:
    // 0x3605d8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3605d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3605dc:
    // 0x3605dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3605dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3605e0:
    // 0x3605e0: 0x320f809  jalr        $t9
label_3605e4:
    if (ctx->pc == 0x3605E4u) {
        ctx->pc = 0x3605E4u;
            // 0x3605e4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3605E8u;
        goto label_3605e8;
    }
    ctx->pc = 0x3605E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3605E8u);
        ctx->pc = 0x3605E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3605E0u;
            // 0x3605e4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3605E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3605E8u; }
            if (ctx->pc != 0x3605E8u) { return; }
        }
        }
    }
    ctx->pc = 0x3605E8u;
label_3605e8:
    // 0x3605e8: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3605ec:
    if (ctx->pc == 0x3605ECu) {
        ctx->pc = 0x3605F0u;
        goto label_3605f0;
    }
    ctx->pc = 0x3605E8u;
    {
        const bool branch_taken_0x3605e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3605e8) {
            ctx->pc = 0x360698u;
            goto label_360698;
        }
    }
    ctx->pc = 0x3605F0u;
label_3605f0:
    // 0x3605f0: 0x8e740070  lw          $s4, 0x70($s3)
    ctx->pc = 0x3605f0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_3605f4:
    // 0x3605f4: 0x12800028  beqz        $s4, . + 4 + (0x28 << 2)
label_3605f8:
    if (ctx->pc == 0x3605F8u) {
        ctx->pc = 0x3605FCu;
        goto label_3605fc;
    }
    ctx->pc = 0x3605F4u;
    {
        const bool branch_taken_0x3605f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3605f4) {
            ctx->pc = 0x360698u;
            goto label_360698;
        }
    }
    ctx->pc = 0x3605FCu;
label_3605fc:
    // 0x3605fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3605fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_360600:
    // 0x360600: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x360600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_360604:
    // 0x360604: 0x8c72e378  lw          $s2, -0x1C88($v1)
    ctx->pc = 0x360604u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_360608:
    // 0x360608: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x360608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36060c:
    // 0x36060c: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x36060cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_360610:
    // 0x360610: 0x26700084  addiu       $s0, $s3, 0x84
    ctx->pc = 0x360610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_360614:
    // 0x360614: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x360614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_360618:
    // 0x360618: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x360618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36061c:
    // 0x36061c: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x36061cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_360620:
    // 0x360620: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x360620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_360624:
    // 0x360624: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x360624u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_360628:
    // 0x360628: 0x8cb10130  lw          $s1, 0x130($a1)
    ctx->pc = 0x360628u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_36062c:
    // 0x36062c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x36062cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_360630:
    // 0x360630: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x360630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_360634:
    // 0x360634: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x360634u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_360638:
    // 0x360638: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x360638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_36063c:
    // 0x36063c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x36063cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_360640:
    // 0x360640: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x360640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_360644:
    // 0x360644: 0xc04e4a4  jal         func_139290
label_360648:
    if (ctx->pc == 0x360648u) {
        ctx->pc = 0x360648u;
            // 0x360648: 0x24770010  addiu       $s7, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x36064Cu;
        goto label_36064c;
    }
    ctx->pc = 0x360644u;
    SET_GPR_U32(ctx, 31, 0x36064Cu);
    ctx->pc = 0x360648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360644u;
            // 0x360648: 0x24770010  addiu       $s7, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36064Cu; }
        if (ctx->pc != 0x36064Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36064Cu; }
        if (ctx->pc != 0x36064Cu) { return; }
    }
    ctx->pc = 0x36064Cu;
label_36064c:
    // 0x36064c: 0xc04e738  jal         func_139CE0
label_360650:
    if (ctx->pc == 0x360650u) {
        ctx->pc = 0x360650u;
            // 0x360650: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x360654u;
        goto label_360654;
    }
    ctx->pc = 0x36064Cu;
    SET_GPR_U32(ctx, 31, 0x360654u);
    ctx->pc = 0x360650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36064Cu;
            // 0x360650: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360654u; }
        if (ctx->pc != 0x360654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360654u; }
        if (ctx->pc != 0x360654u) { return; }
    }
    ctx->pc = 0x360654u;
label_360654:
    // 0x360654: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x360654u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_360658:
    // 0x360658: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x360658u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36065c:
    // 0x36065c: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x36065cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_360660:
    // 0x360660: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x360660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_360664:
    // 0x360664: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x360664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_360668:
    // 0x360668: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x360668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36066c:
    // 0x36066c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x36066cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_360670:
    // 0x360670: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x360670u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_360674:
    // 0x360674: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x360674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_360678:
    // 0x360678: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x360678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36067c:
    // 0x36067c: 0xc0d8250  jal         func_360940
label_360680:
    if (ctx->pc == 0x360680u) {
        ctx->pc = 0x360680u;
            // 0x360680: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360684u;
        goto label_360684;
    }
    ctx->pc = 0x36067Cu;
    SET_GPR_U32(ctx, 31, 0x360684u);
    ctx->pc = 0x360680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36067Cu;
            // 0x360680: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x360940u;
    if (runtime->hasFunction(0x360940u)) {
        auto targetFn = runtime->lookupFunction(0x360940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360684u; }
        if (ctx->pc != 0x360684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00360940_0x360940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360684u; }
        if (ctx->pc != 0x360684u) { return; }
    }
    ctx->pc = 0x360684u;
label_360684:
    // 0x360684: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x360684u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_360688:
    // 0x360688: 0x2d4182b  sltu        $v1, $s6, $s4
    ctx->pc = 0x360688u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_36068c:
    // 0x36068c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_360690:
    if (ctx->pc == 0x360690u) {
        ctx->pc = 0x360690u;
            // 0x360690: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x360694u;
        goto label_360694;
    }
    ctx->pc = 0x36068Cu;
    {
        const bool branch_taken_0x36068c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x360690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36068Cu;
            // 0x360690: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36068c) {
            ctx->pc = 0x36065Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36065c;
        }
    }
    ctx->pc = 0x360694u;
label_360694:
    // 0x360694: 0x0  nop
    ctx->pc = 0x360694u;
    // NOP
label_360698:
    // 0x360698: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x360698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_36069c:
    // 0x36069c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x36069cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3606a0:
    // 0x3606a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3606a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3606a4:
    // 0x3606a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3606a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3606a8:
    // 0x3606a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3606a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3606ac:
    // 0x3606ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3606acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3606b0:
    // 0x3606b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3606b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3606b4:
    // 0x3606b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3606b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3606b8:
    // 0x3606b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3606b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3606bc:
    // 0x3606bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3606bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3606c0:
    // 0x3606c0: 0x3e00008  jr          $ra
label_3606c4:
    if (ctx->pc == 0x3606C4u) {
        ctx->pc = 0x3606C4u;
            // 0x3606c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3606C8u;
        goto label_3606c8;
    }
    ctx->pc = 0x3606C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3606C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3606C0u;
            // 0x3606c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3606C8u;
label_3606c8:
    // 0x3606c8: 0x0  nop
    ctx->pc = 0x3606c8u;
    // NOP
label_3606cc:
    // 0x3606cc: 0x0  nop
    ctx->pc = 0x3606ccu;
    // NOP
label_3606d0:
    // 0x3606d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3606d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3606d4:
    // 0x3606d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3606d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3606d8:
    // 0x3606d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3606d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3606dc:
    // 0x3606dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3606dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3606e0:
    // 0x3606e0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3606e0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3606e4:
    // 0x3606e4: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_3606e8:
    if (ctx->pc == 0x3606E8u) {
        ctx->pc = 0x3606E8u;
            // 0x3606e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3606ECu;
        goto label_3606ec;
    }
    ctx->pc = 0x3606E4u;
    {
        const bool branch_taken_0x3606e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3606E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3606E4u;
            // 0x3606e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3606e4) {
            ctx->pc = 0x360718u;
            goto label_360718;
        }
    }
    ctx->pc = 0x3606ECu;
label_3606ec:
    // 0x3606ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3606ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3606f0:
    // 0x3606f0: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_3606f4:
    if (ctx->pc == 0x3606F4u) {
        ctx->pc = 0x3606F4u;
            // 0x3606f4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3606F8u;
        goto label_3606f8;
    }
    ctx->pc = 0x3606F0u;
    {
        const bool branch_taken_0x3606f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3606f0) {
            ctx->pc = 0x3606F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3606F0u;
            // 0x3606f4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36070Cu;
            goto label_36070c;
        }
    }
    ctx->pc = 0x3606F8u;
label_3606f8:
    // 0x3606f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3606f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3606fc:
    // 0x3606fc: 0x50a30040  beql        $a1, $v1, . + 4 + (0x40 << 2)
label_360700:
    if (ctx->pc == 0x360700u) {
        ctx->pc = 0x360700u;
            // 0x360700: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x360704u;
        goto label_360704;
    }
    ctx->pc = 0x3606FCu;
    {
        const bool branch_taken_0x3606fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3606fc) {
            ctx->pc = 0x360700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3606FCu;
            // 0x360700: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x360800u;
            goto label_360800;
        }
    }
    ctx->pc = 0x360704u;
label_360704:
    // 0x360704: 0x1000003d  b           . + 4 + (0x3D << 2)
label_360708:
    if (ctx->pc == 0x360708u) {
        ctx->pc = 0x36070Cu;
        goto label_36070c;
    }
    ctx->pc = 0x360704u;
    {
        const bool branch_taken_0x360704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360704) {
            ctx->pc = 0x3607FCu;
            goto label_3607fc;
        }
    }
    ctx->pc = 0x36070Cu;
label_36070c:
    // 0x36070c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x36070cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_360710:
    // 0x360710: 0x320f809  jalr        $t9
label_360714:
    if (ctx->pc == 0x360714u) {
        ctx->pc = 0x360718u;
        goto label_360718;
    }
    ctx->pc = 0x360710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x360718u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x360718u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x360718u; }
            if (ctx->pc != 0x360718u) { return; }
        }
        }
    }
    ctx->pc = 0x360718u;
label_360718:
    // 0x360718: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x360718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_36071c:
    // 0x36071c: 0x26080084  addiu       $t0, $s0, 0x84
    ctx->pc = 0x36071cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_360720:
    // 0x360720: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x360720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_360724:
    // 0x360724: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x360724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_360728:
    // 0x360728: 0x2507000c  addiu       $a3, $t0, 0xC
    ctx->pc = 0x360728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_36072c:
    // 0x36072c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x36072cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_360730:
    // 0x360730: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x360730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_360734:
    // 0x360734: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x360734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_360738:
    // 0x360738: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x360738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_36073c:
    // 0x36073c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x36073cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_360740:
    // 0x360740: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x360740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_360744:
    // 0x360744: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x360744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_360748:
    // 0x360748: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_36074c:
    if (ctx->pc == 0x36074Cu) {
        ctx->pc = 0x36074Cu;
            // 0x36074c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x360750u;
        goto label_360750;
    }
    ctx->pc = 0x360748u;
    {
        const bool branch_taken_0x360748 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x36074Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360748u;
            // 0x36074c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360748) {
            ctx->pc = 0x360754u;
            goto label_360754;
        }
    }
    ctx->pc = 0x360750u;
label_360750:
    // 0x360750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x360750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_360754:
    // 0x360754: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_360758:
    if (ctx->pc == 0x360758u) {
        ctx->pc = 0x360758u;
            // 0x360758: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x36075Cu;
        goto label_36075c;
    }
    ctx->pc = 0x360754u;
    {
        const bool branch_taken_0x360754 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x360754) {
            ctx->pc = 0x360758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x360754u;
            // 0x360758: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x360768u;
            goto label_360768;
        }
    }
    ctx->pc = 0x36075Cu;
label_36075c:
    // 0x36075c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x36075cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_360760:
    // 0x360760: 0x10000007  b           . + 4 + (0x7 << 2)
label_360764:
    if (ctx->pc == 0x360764u) {
        ctx->pc = 0x360764u;
            // 0x360764: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x360768u;
        goto label_360768;
    }
    ctx->pc = 0x360760u;
    {
        const bool branch_taken_0x360760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360760u;
            // 0x360764: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x360760) {
            ctx->pc = 0x360780u;
            goto label_360780;
        }
    }
    ctx->pc = 0x360768u;
label_360768:
    // 0x360768: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x360768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_36076c:
    // 0x36076c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x36076cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_360770:
    // 0x360770: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x360770u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_360774:
    // 0x360774: 0x0  nop
    ctx->pc = 0x360774u;
    // NOP
label_360778:
    // 0x360778: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x360778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_36077c:
    // 0x36077c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x36077cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_360780:
    // 0x360780: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x360780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_360784:
    // 0x360784: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x360784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_360788:
    // 0x360788: 0x2506001c  addiu       $a2, $t0, 0x1C
    ctx->pc = 0x360788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
label_36078c:
    // 0x36078c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x36078cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_360790:
    // 0x360790: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x360790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_360794:
    // 0x360794: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x360794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_360798:
    // 0x360798: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x360798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36079c:
    // 0x36079c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x36079cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3607a0:
    // 0x3607a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3607a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3607a4:
    // 0x3607a4: 0xe500001c  swc1        $f0, 0x1C($t0)
    ctx->pc = 0x3607a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
label_3607a8:
    // 0x3607a8: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x3607a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_3607ac:
    // 0x3607ac: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x3607acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3607b0:
    // 0x3607b0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3607b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3607b4:
    // 0x3607b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3607b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3607b8:
    // 0x3607b8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3607bc:
    if (ctx->pc == 0x3607BCu) {
        ctx->pc = 0x3607BCu;
            // 0x3607bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3607C0u;
        goto label_3607c0;
    }
    ctx->pc = 0x3607B8u;
    {
        const bool branch_taken_0x3607b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3607BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3607B8u;
            // 0x3607bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3607b8) {
            ctx->pc = 0x3607C4u;
            goto label_3607c4;
        }
    }
    ctx->pc = 0x3607C0u;
label_3607c0:
    // 0x3607c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3607c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3607c4:
    // 0x3607c4: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_3607c8:
    if (ctx->pc == 0x3607C8u) {
        ctx->pc = 0x3607C8u;
            // 0x3607c8: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x3607CCu;
        goto label_3607cc;
    }
    ctx->pc = 0x3607C4u;
    {
        const bool branch_taken_0x3607c4 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x3607c4) {
            ctx->pc = 0x3607C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3607C4u;
            // 0x3607c8: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3607D8u;
            goto label_3607d8;
        }
    }
    ctx->pc = 0x3607CCu;
label_3607cc:
    // 0x3607cc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3607ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3607d0:
    // 0x3607d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3607d4:
    if (ctx->pc == 0x3607D4u) {
        ctx->pc = 0x3607D4u;
            // 0x3607d4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3607D8u;
        goto label_3607d8;
    }
    ctx->pc = 0x3607D0u;
    {
        const bool branch_taken_0x3607d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3607D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3607D0u;
            // 0x3607d4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3607d0) {
            ctx->pc = 0x3607F0u;
            goto label_3607f0;
        }
    }
    ctx->pc = 0x3607D8u;
label_3607d8:
    // 0x3607d8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3607d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3607dc:
    // 0x3607dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3607dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3607e0:
    // 0x3607e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3607e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3607e4:
    // 0x3607e4: 0x0  nop
    ctx->pc = 0x3607e4u;
    // NOP
label_3607e8:
    // 0x3607e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3607e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3607ec:
    // 0x3607ec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3607ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3607f0:
    // 0x3607f0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3607f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3607f4:
    // 0x3607f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3607f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3607f8:
    // 0x3607f8: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x3607f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_3607fc:
    // 0x3607fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3607fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_360800:
    // 0x360800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x360800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_360804:
    // 0x360804: 0x3e00008  jr          $ra
label_360808:
    if (ctx->pc == 0x360808u) {
        ctx->pc = 0x360808u;
            // 0x360808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x36080Cu;
        goto label_36080c;
    }
    ctx->pc = 0x360804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360804u;
            // 0x360808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36080Cu;
label_36080c:
    // 0x36080c: 0x0  nop
    ctx->pc = 0x36080cu;
    // NOP
label_360810:
    // 0x360810: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x360810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_360814:
    // 0x360814: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_360818:
    if (ctx->pc == 0x360818u) {
        ctx->pc = 0x36081Cu;
        goto label_36081c;
    }
    ctx->pc = 0x360814u;
    {
        const bool branch_taken_0x360814 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x360814) {
            ctx->pc = 0x360848u;
            goto label_360848;
        }
    }
    ctx->pc = 0x36081Cu;
label_36081c:
    // 0x36081c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36081cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_360820:
    // 0x360820: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x360820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_360824:
    // 0x360824: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x360824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_360828:
    // 0x360828: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x360828u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36082c:
    // 0x36082c: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x36082cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_360830:
    // 0x360830: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x360830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_360834:
    // 0x360834: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x360834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_360838:
    // 0x360838: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x360838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_36083c:
    // 0x36083c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_360840:
    if (ctx->pc == 0x360840u) {
        ctx->pc = 0x360840u;
            // 0x360840: 0xaca00064  sw          $zero, 0x64($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x360844u;
        goto label_360844;
    }
    ctx->pc = 0x36083Cu;
    {
        const bool branch_taken_0x36083c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x360840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36083Cu;
            // 0x360840: 0xaca00064  sw          $zero, 0x64($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36083c) {
            ctx->pc = 0x360824u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_360824;
        }
    }
    ctx->pc = 0x360844u;
label_360844:
    // 0x360844: 0x0  nop
    ctx->pc = 0x360844u;
    // NOP
label_360848:
    // 0x360848: 0x3e00008  jr          $ra
label_36084c:
    if (ctx->pc == 0x36084Cu) {
        ctx->pc = 0x360850u;
        goto label_360850;
    }
    ctx->pc = 0x360848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x360850u;
label_360850:
    // 0x360850: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x360850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_360854:
    // 0x360854: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x360854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_360858:
    // 0x360858: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x360858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_36085c:
    // 0x36085c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36085cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_360860:
    // 0x360860: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x360860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_360864:
    // 0x360864: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x360864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_360868:
    // 0x360868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x360868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36086c:
    // 0x36086c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x36086cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_360870:
    // 0x360870: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x360870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_360874:
    // 0x360874: 0x8c710e80  lw          $s1, 0xE80($v1)
    ctx->pc = 0x360874u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_360878:
    // 0x360878: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x360878u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_36087c:
    // 0x36087c: 0x8cc40e34  lw          $a0, 0xE34($a2)
    ctx->pc = 0x36087cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3636)));
label_360880:
    // 0x360880: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
label_360884:
    if (ctx->pc == 0x360884u) {
        ctx->pc = 0x360884u;
            // 0x360884: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360888u;
        goto label_360888;
    }
    ctx->pc = 0x360880u;
    {
        const bool branch_taken_0x360880 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x360884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360880u;
            // 0x360884: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360880) {
            ctx->pc = 0x360898u;
            goto label_360898;
        }
    }
    ctx->pc = 0x360888u;
label_360888:
    // 0x360888: 0x28810004  slti        $at, $a0, 0x4
    ctx->pc = 0x360888u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_36088c:
    // 0x36088c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_360890:
    if (ctx->pc == 0x360890u) {
        ctx->pc = 0x360894u;
        goto label_360894;
    }
    ctx->pc = 0x36088Cu;
    {
        const bool branch_taken_0x36088c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36088c) {
            ctx->pc = 0x360898u;
            goto label_360898;
        }
    }
    ctx->pc = 0x360894u;
label_360894:
    // 0x360894: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x360894u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_360898:
    // 0x360898: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_36089c:
    if (ctx->pc == 0x36089Cu) {
        ctx->pc = 0x3608A0u;
        goto label_3608a0;
    }
    ctx->pc = 0x360898u;
    {
        const bool branch_taken_0x360898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x360898) {
            ctx->pc = 0x3608B4u;
            goto label_3608b4;
        }
    }
    ctx->pc = 0x3608A0u;
label_3608a0:
    // 0x3608a0: 0xc075eb4  jal         func_1D7AD0
label_3608a4:
    if (ctx->pc == 0x3608A4u) {
        ctx->pc = 0x3608A4u;
            // 0x3608a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3608A8u;
        goto label_3608a8;
    }
    ctx->pc = 0x3608A0u;
    SET_GPR_U32(ctx, 31, 0x3608A8u);
    ctx->pc = 0x3608A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3608A0u;
            // 0x3608a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3608A8u; }
        if (ctx->pc != 0x3608A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3608A8u; }
        if (ctx->pc != 0x3608A8u) { return; }
    }
    ctx->pc = 0x3608A8u;
label_3608a8:
    // 0x3608a8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3608ac:
    if (ctx->pc == 0x3608ACu) {
        ctx->pc = 0x3608B0u;
        goto label_3608b0;
    }
    ctx->pc = 0x3608A8u;
    {
        const bool branch_taken_0x3608a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3608a8) {
            ctx->pc = 0x3608B4u;
            goto label_3608b4;
        }
    }
    ctx->pc = 0x3608B0u;
label_3608b0:
    // 0x3608b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3608b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3608b4:
    // 0x3608b4: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_3608b8:
    if (ctx->pc == 0x3608B8u) {
        ctx->pc = 0x3608B8u;
            // 0x3608b8: 0x8e630064  lw          $v1, 0x64($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
        ctx->pc = 0x3608BCu;
        goto label_3608bc;
    }
    ctx->pc = 0x3608B4u;
    {
        const bool branch_taken_0x3608b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3608b4) {
            ctx->pc = 0x3608B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3608B4u;
            // 0x3608b8: 0x8e630064  lw          $v1, 0x64($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3608D0u;
            goto label_3608d0;
        }
    }
    ctx->pc = 0x3608BCu;
label_3608bc:
    // 0x3608bc: 0x8e440e34  lw          $a0, 0xE34($s2)
    ctx->pc = 0x3608bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_3608c0:
    // 0x3608c0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3608c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3608c4:
    // 0x3608c4: 0x54830017  bnel        $a0, $v1, . + 4 + (0x17 << 2)
label_3608c8:
    if (ctx->pc == 0x3608C8u) {
        ctx->pc = 0x3608C8u;
            // 0x3608c8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3608CCu;
        goto label_3608cc;
    }
    ctx->pc = 0x3608C4u;
    {
        const bool branch_taken_0x3608c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3608c4) {
            ctx->pc = 0x3608C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3608C4u;
            // 0x3608c8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x360924u;
            goto label_360924;
        }
    }
    ctx->pc = 0x3608CCu;
label_3608cc:
    // 0x3608cc: 0x8e630064  lw          $v1, 0x64($s3)
    ctx->pc = 0x3608ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_3608d0:
    // 0x3608d0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_3608d4:
    if (ctx->pc == 0x3608D4u) {
        ctx->pc = 0x3608D8u;
        goto label_3608d8;
    }
    ctx->pc = 0x3608D0u;
    {
        const bool branch_taken_0x3608d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3608d0) {
            ctx->pc = 0x360920u;
            goto label_360920;
        }
    }
    ctx->pc = 0x3608D8u;
label_3608d8:
    // 0x3608d8: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x3608d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_3608dc:
    // 0x3608dc: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x3608dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_3608e0:
    // 0x3608e0: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3608e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3608e4:
    // 0x3608e4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3608e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3608e8:
    // 0x3608e8: 0x320f809  jalr        $t9
label_3608ec:
    if (ctx->pc == 0x3608ECu) {
        ctx->pc = 0x3608ECu;
            // 0x3608ec: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x3608F0u;
        goto label_3608f0;
    }
    ctx->pc = 0x3608E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3608F0u);
        ctx->pc = 0x3608ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3608E8u;
            // 0x3608ec: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3608F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3608F0u; }
            if (ctx->pc != 0x3608F0u) { return; }
        }
        }
    }
    ctx->pc = 0x3608F0u;
label_3608f0:
    // 0x3608f0: 0xc0ba364  jal         func_2E8D90
label_3608f4:
    if (ctx->pc == 0x3608F4u) {
        ctx->pc = 0x3608F4u;
            // 0x3608f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3608F8u;
        goto label_3608f8;
    }
    ctx->pc = 0x3608F0u;
    SET_GPR_U32(ctx, 31, 0x3608F8u);
    ctx->pc = 0x3608F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3608F0u;
            // 0x3608f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8D90u;
    if (runtime->hasFunction(0x2E8D90u)) {
        auto targetFn = runtime->lookupFunction(0x2E8D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3608F8u; }
        if (ctx->pc != 0x3608F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8D90_0x2e8d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3608F8u; }
        if (ctx->pc != 0x3608F8u) { return; }
    }
    ctx->pc = 0x3608F8u;
label_3608f8:
    // 0x3608f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3608f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3608fc:
    // 0x3608fc: 0x264602c0  addiu       $a2, $s2, 0x2C0
    ctx->pc = 0x3608fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_360900:
    // 0x360900: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x360900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_360904:
    // 0x360904: 0xc0bb1ec  jal         func_2EC7B0
label_360908:
    if (ctx->pc == 0x360908u) {
        ctx->pc = 0x360908u;
            // 0x360908: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x36090Cu;
        goto label_36090c;
    }
    ctx->pc = 0x360904u;
    SET_GPR_U32(ctx, 31, 0x36090Cu);
    ctx->pc = 0x360908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360904u;
            // 0x360908: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC7B0u;
    if (runtime->hasFunction(0x2EC7B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36090Cu; }
        if (ctx->pc != 0x36090Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC7B0_0x2ec7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36090Cu; }
        if (ctx->pc != 0x36090Cu) { return; }
    }
    ctx->pc = 0x36090Cu;
label_36090c:
    // 0x36090c: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x36090cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_360910:
    // 0x360910: 0xc0d0280  jal         func_340A00
label_360914:
    if (ctx->pc == 0x360914u) {
        ctx->pc = 0x360914u;
            // 0x360914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x360918u;
        goto label_360918;
    }
    ctx->pc = 0x360910u;
    SET_GPR_U32(ctx, 31, 0x360918u);
    ctx->pc = 0x360914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360910u;
            // 0x360914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x340A00u;
    if (runtime->hasFunction(0x340A00u)) {
        auto targetFn = runtime->lookupFunction(0x340A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360918u; }
        if (ctx->pc != 0x360918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00340A00_0x340a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360918u; }
        if (ctx->pc != 0x360918u) { return; }
    }
    ctx->pc = 0x360918u;
label_360918:
    // 0x360918: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x360918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36091c:
    // 0x36091c: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x36091cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_360920:
    // 0x360920: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x360920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_360924:
    // 0x360924: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x360924u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_360928:
    // 0x360928: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x360928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36092c:
    // 0x36092c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36092cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_360930:
    // 0x360930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x360930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_360934:
    // 0x360934: 0x3e00008  jr          $ra
label_360938:
    if (ctx->pc == 0x360938u) {
        ctx->pc = 0x360938u;
            // 0x360938: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x36093Cu;
        goto label_36093c;
    }
    ctx->pc = 0x360934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360934u;
            // 0x360938: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36093Cu;
label_36093c:
    // 0x36093c: 0x0  nop
    ctx->pc = 0x36093cu;
    // NOP
}
