#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043F710
// Address: 0x43f710 - 0x43fed0
void sub_0043F710_0x43f710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043F710_0x43f710");
#endif

    switch (ctx->pc) {
        case 0x43f710u: goto label_43f710;
        case 0x43f714u: goto label_43f714;
        case 0x43f718u: goto label_43f718;
        case 0x43f71cu: goto label_43f71c;
        case 0x43f720u: goto label_43f720;
        case 0x43f724u: goto label_43f724;
        case 0x43f728u: goto label_43f728;
        case 0x43f72cu: goto label_43f72c;
        case 0x43f730u: goto label_43f730;
        case 0x43f734u: goto label_43f734;
        case 0x43f738u: goto label_43f738;
        case 0x43f73cu: goto label_43f73c;
        case 0x43f740u: goto label_43f740;
        case 0x43f744u: goto label_43f744;
        case 0x43f748u: goto label_43f748;
        case 0x43f74cu: goto label_43f74c;
        case 0x43f750u: goto label_43f750;
        case 0x43f754u: goto label_43f754;
        case 0x43f758u: goto label_43f758;
        case 0x43f75cu: goto label_43f75c;
        case 0x43f760u: goto label_43f760;
        case 0x43f764u: goto label_43f764;
        case 0x43f768u: goto label_43f768;
        case 0x43f76cu: goto label_43f76c;
        case 0x43f770u: goto label_43f770;
        case 0x43f774u: goto label_43f774;
        case 0x43f778u: goto label_43f778;
        case 0x43f77cu: goto label_43f77c;
        case 0x43f780u: goto label_43f780;
        case 0x43f784u: goto label_43f784;
        case 0x43f788u: goto label_43f788;
        case 0x43f78cu: goto label_43f78c;
        case 0x43f790u: goto label_43f790;
        case 0x43f794u: goto label_43f794;
        case 0x43f798u: goto label_43f798;
        case 0x43f79cu: goto label_43f79c;
        case 0x43f7a0u: goto label_43f7a0;
        case 0x43f7a4u: goto label_43f7a4;
        case 0x43f7a8u: goto label_43f7a8;
        case 0x43f7acu: goto label_43f7ac;
        case 0x43f7b0u: goto label_43f7b0;
        case 0x43f7b4u: goto label_43f7b4;
        case 0x43f7b8u: goto label_43f7b8;
        case 0x43f7bcu: goto label_43f7bc;
        case 0x43f7c0u: goto label_43f7c0;
        case 0x43f7c4u: goto label_43f7c4;
        case 0x43f7c8u: goto label_43f7c8;
        case 0x43f7ccu: goto label_43f7cc;
        case 0x43f7d0u: goto label_43f7d0;
        case 0x43f7d4u: goto label_43f7d4;
        case 0x43f7d8u: goto label_43f7d8;
        case 0x43f7dcu: goto label_43f7dc;
        case 0x43f7e0u: goto label_43f7e0;
        case 0x43f7e4u: goto label_43f7e4;
        case 0x43f7e8u: goto label_43f7e8;
        case 0x43f7ecu: goto label_43f7ec;
        case 0x43f7f0u: goto label_43f7f0;
        case 0x43f7f4u: goto label_43f7f4;
        case 0x43f7f8u: goto label_43f7f8;
        case 0x43f7fcu: goto label_43f7fc;
        case 0x43f800u: goto label_43f800;
        case 0x43f804u: goto label_43f804;
        case 0x43f808u: goto label_43f808;
        case 0x43f80cu: goto label_43f80c;
        case 0x43f810u: goto label_43f810;
        case 0x43f814u: goto label_43f814;
        case 0x43f818u: goto label_43f818;
        case 0x43f81cu: goto label_43f81c;
        case 0x43f820u: goto label_43f820;
        case 0x43f824u: goto label_43f824;
        case 0x43f828u: goto label_43f828;
        case 0x43f82cu: goto label_43f82c;
        case 0x43f830u: goto label_43f830;
        case 0x43f834u: goto label_43f834;
        case 0x43f838u: goto label_43f838;
        case 0x43f83cu: goto label_43f83c;
        case 0x43f840u: goto label_43f840;
        case 0x43f844u: goto label_43f844;
        case 0x43f848u: goto label_43f848;
        case 0x43f84cu: goto label_43f84c;
        case 0x43f850u: goto label_43f850;
        case 0x43f854u: goto label_43f854;
        case 0x43f858u: goto label_43f858;
        case 0x43f85cu: goto label_43f85c;
        case 0x43f860u: goto label_43f860;
        case 0x43f864u: goto label_43f864;
        case 0x43f868u: goto label_43f868;
        case 0x43f86cu: goto label_43f86c;
        case 0x43f870u: goto label_43f870;
        case 0x43f874u: goto label_43f874;
        case 0x43f878u: goto label_43f878;
        case 0x43f87cu: goto label_43f87c;
        case 0x43f880u: goto label_43f880;
        case 0x43f884u: goto label_43f884;
        case 0x43f888u: goto label_43f888;
        case 0x43f88cu: goto label_43f88c;
        case 0x43f890u: goto label_43f890;
        case 0x43f894u: goto label_43f894;
        case 0x43f898u: goto label_43f898;
        case 0x43f89cu: goto label_43f89c;
        case 0x43f8a0u: goto label_43f8a0;
        case 0x43f8a4u: goto label_43f8a4;
        case 0x43f8a8u: goto label_43f8a8;
        case 0x43f8acu: goto label_43f8ac;
        case 0x43f8b0u: goto label_43f8b0;
        case 0x43f8b4u: goto label_43f8b4;
        case 0x43f8b8u: goto label_43f8b8;
        case 0x43f8bcu: goto label_43f8bc;
        case 0x43f8c0u: goto label_43f8c0;
        case 0x43f8c4u: goto label_43f8c4;
        case 0x43f8c8u: goto label_43f8c8;
        case 0x43f8ccu: goto label_43f8cc;
        case 0x43f8d0u: goto label_43f8d0;
        case 0x43f8d4u: goto label_43f8d4;
        case 0x43f8d8u: goto label_43f8d8;
        case 0x43f8dcu: goto label_43f8dc;
        case 0x43f8e0u: goto label_43f8e0;
        case 0x43f8e4u: goto label_43f8e4;
        case 0x43f8e8u: goto label_43f8e8;
        case 0x43f8ecu: goto label_43f8ec;
        case 0x43f8f0u: goto label_43f8f0;
        case 0x43f8f4u: goto label_43f8f4;
        case 0x43f8f8u: goto label_43f8f8;
        case 0x43f8fcu: goto label_43f8fc;
        case 0x43f900u: goto label_43f900;
        case 0x43f904u: goto label_43f904;
        case 0x43f908u: goto label_43f908;
        case 0x43f90cu: goto label_43f90c;
        case 0x43f910u: goto label_43f910;
        case 0x43f914u: goto label_43f914;
        case 0x43f918u: goto label_43f918;
        case 0x43f91cu: goto label_43f91c;
        case 0x43f920u: goto label_43f920;
        case 0x43f924u: goto label_43f924;
        case 0x43f928u: goto label_43f928;
        case 0x43f92cu: goto label_43f92c;
        case 0x43f930u: goto label_43f930;
        case 0x43f934u: goto label_43f934;
        case 0x43f938u: goto label_43f938;
        case 0x43f93cu: goto label_43f93c;
        case 0x43f940u: goto label_43f940;
        case 0x43f944u: goto label_43f944;
        case 0x43f948u: goto label_43f948;
        case 0x43f94cu: goto label_43f94c;
        case 0x43f950u: goto label_43f950;
        case 0x43f954u: goto label_43f954;
        case 0x43f958u: goto label_43f958;
        case 0x43f95cu: goto label_43f95c;
        case 0x43f960u: goto label_43f960;
        case 0x43f964u: goto label_43f964;
        case 0x43f968u: goto label_43f968;
        case 0x43f96cu: goto label_43f96c;
        case 0x43f970u: goto label_43f970;
        case 0x43f974u: goto label_43f974;
        case 0x43f978u: goto label_43f978;
        case 0x43f97cu: goto label_43f97c;
        case 0x43f980u: goto label_43f980;
        case 0x43f984u: goto label_43f984;
        case 0x43f988u: goto label_43f988;
        case 0x43f98cu: goto label_43f98c;
        case 0x43f990u: goto label_43f990;
        case 0x43f994u: goto label_43f994;
        case 0x43f998u: goto label_43f998;
        case 0x43f99cu: goto label_43f99c;
        case 0x43f9a0u: goto label_43f9a0;
        case 0x43f9a4u: goto label_43f9a4;
        case 0x43f9a8u: goto label_43f9a8;
        case 0x43f9acu: goto label_43f9ac;
        case 0x43f9b0u: goto label_43f9b0;
        case 0x43f9b4u: goto label_43f9b4;
        case 0x43f9b8u: goto label_43f9b8;
        case 0x43f9bcu: goto label_43f9bc;
        case 0x43f9c0u: goto label_43f9c0;
        case 0x43f9c4u: goto label_43f9c4;
        case 0x43f9c8u: goto label_43f9c8;
        case 0x43f9ccu: goto label_43f9cc;
        case 0x43f9d0u: goto label_43f9d0;
        case 0x43f9d4u: goto label_43f9d4;
        case 0x43f9d8u: goto label_43f9d8;
        case 0x43f9dcu: goto label_43f9dc;
        case 0x43f9e0u: goto label_43f9e0;
        case 0x43f9e4u: goto label_43f9e4;
        case 0x43f9e8u: goto label_43f9e8;
        case 0x43f9ecu: goto label_43f9ec;
        case 0x43f9f0u: goto label_43f9f0;
        case 0x43f9f4u: goto label_43f9f4;
        case 0x43f9f8u: goto label_43f9f8;
        case 0x43f9fcu: goto label_43f9fc;
        case 0x43fa00u: goto label_43fa00;
        case 0x43fa04u: goto label_43fa04;
        case 0x43fa08u: goto label_43fa08;
        case 0x43fa0cu: goto label_43fa0c;
        case 0x43fa10u: goto label_43fa10;
        case 0x43fa14u: goto label_43fa14;
        case 0x43fa18u: goto label_43fa18;
        case 0x43fa1cu: goto label_43fa1c;
        case 0x43fa20u: goto label_43fa20;
        case 0x43fa24u: goto label_43fa24;
        case 0x43fa28u: goto label_43fa28;
        case 0x43fa2cu: goto label_43fa2c;
        case 0x43fa30u: goto label_43fa30;
        case 0x43fa34u: goto label_43fa34;
        case 0x43fa38u: goto label_43fa38;
        case 0x43fa3cu: goto label_43fa3c;
        case 0x43fa40u: goto label_43fa40;
        case 0x43fa44u: goto label_43fa44;
        case 0x43fa48u: goto label_43fa48;
        case 0x43fa4cu: goto label_43fa4c;
        case 0x43fa50u: goto label_43fa50;
        case 0x43fa54u: goto label_43fa54;
        case 0x43fa58u: goto label_43fa58;
        case 0x43fa5cu: goto label_43fa5c;
        case 0x43fa60u: goto label_43fa60;
        case 0x43fa64u: goto label_43fa64;
        case 0x43fa68u: goto label_43fa68;
        case 0x43fa6cu: goto label_43fa6c;
        case 0x43fa70u: goto label_43fa70;
        case 0x43fa74u: goto label_43fa74;
        case 0x43fa78u: goto label_43fa78;
        case 0x43fa7cu: goto label_43fa7c;
        case 0x43fa80u: goto label_43fa80;
        case 0x43fa84u: goto label_43fa84;
        case 0x43fa88u: goto label_43fa88;
        case 0x43fa8cu: goto label_43fa8c;
        case 0x43fa90u: goto label_43fa90;
        case 0x43fa94u: goto label_43fa94;
        case 0x43fa98u: goto label_43fa98;
        case 0x43fa9cu: goto label_43fa9c;
        case 0x43faa0u: goto label_43faa0;
        case 0x43faa4u: goto label_43faa4;
        case 0x43faa8u: goto label_43faa8;
        case 0x43faacu: goto label_43faac;
        case 0x43fab0u: goto label_43fab0;
        case 0x43fab4u: goto label_43fab4;
        case 0x43fab8u: goto label_43fab8;
        case 0x43fabcu: goto label_43fabc;
        case 0x43fac0u: goto label_43fac0;
        case 0x43fac4u: goto label_43fac4;
        case 0x43fac8u: goto label_43fac8;
        case 0x43faccu: goto label_43facc;
        case 0x43fad0u: goto label_43fad0;
        case 0x43fad4u: goto label_43fad4;
        case 0x43fad8u: goto label_43fad8;
        case 0x43fadcu: goto label_43fadc;
        case 0x43fae0u: goto label_43fae0;
        case 0x43fae4u: goto label_43fae4;
        case 0x43fae8u: goto label_43fae8;
        case 0x43faecu: goto label_43faec;
        case 0x43faf0u: goto label_43faf0;
        case 0x43faf4u: goto label_43faf4;
        case 0x43faf8u: goto label_43faf8;
        case 0x43fafcu: goto label_43fafc;
        case 0x43fb00u: goto label_43fb00;
        case 0x43fb04u: goto label_43fb04;
        case 0x43fb08u: goto label_43fb08;
        case 0x43fb0cu: goto label_43fb0c;
        case 0x43fb10u: goto label_43fb10;
        case 0x43fb14u: goto label_43fb14;
        case 0x43fb18u: goto label_43fb18;
        case 0x43fb1cu: goto label_43fb1c;
        case 0x43fb20u: goto label_43fb20;
        case 0x43fb24u: goto label_43fb24;
        case 0x43fb28u: goto label_43fb28;
        case 0x43fb2cu: goto label_43fb2c;
        case 0x43fb30u: goto label_43fb30;
        case 0x43fb34u: goto label_43fb34;
        case 0x43fb38u: goto label_43fb38;
        case 0x43fb3cu: goto label_43fb3c;
        case 0x43fb40u: goto label_43fb40;
        case 0x43fb44u: goto label_43fb44;
        case 0x43fb48u: goto label_43fb48;
        case 0x43fb4cu: goto label_43fb4c;
        case 0x43fb50u: goto label_43fb50;
        case 0x43fb54u: goto label_43fb54;
        case 0x43fb58u: goto label_43fb58;
        case 0x43fb5cu: goto label_43fb5c;
        case 0x43fb60u: goto label_43fb60;
        case 0x43fb64u: goto label_43fb64;
        case 0x43fb68u: goto label_43fb68;
        case 0x43fb6cu: goto label_43fb6c;
        case 0x43fb70u: goto label_43fb70;
        case 0x43fb74u: goto label_43fb74;
        case 0x43fb78u: goto label_43fb78;
        case 0x43fb7cu: goto label_43fb7c;
        case 0x43fb80u: goto label_43fb80;
        case 0x43fb84u: goto label_43fb84;
        case 0x43fb88u: goto label_43fb88;
        case 0x43fb8cu: goto label_43fb8c;
        case 0x43fb90u: goto label_43fb90;
        case 0x43fb94u: goto label_43fb94;
        case 0x43fb98u: goto label_43fb98;
        case 0x43fb9cu: goto label_43fb9c;
        case 0x43fba0u: goto label_43fba0;
        case 0x43fba4u: goto label_43fba4;
        case 0x43fba8u: goto label_43fba8;
        case 0x43fbacu: goto label_43fbac;
        case 0x43fbb0u: goto label_43fbb0;
        case 0x43fbb4u: goto label_43fbb4;
        case 0x43fbb8u: goto label_43fbb8;
        case 0x43fbbcu: goto label_43fbbc;
        case 0x43fbc0u: goto label_43fbc0;
        case 0x43fbc4u: goto label_43fbc4;
        case 0x43fbc8u: goto label_43fbc8;
        case 0x43fbccu: goto label_43fbcc;
        case 0x43fbd0u: goto label_43fbd0;
        case 0x43fbd4u: goto label_43fbd4;
        case 0x43fbd8u: goto label_43fbd8;
        case 0x43fbdcu: goto label_43fbdc;
        case 0x43fbe0u: goto label_43fbe0;
        case 0x43fbe4u: goto label_43fbe4;
        case 0x43fbe8u: goto label_43fbe8;
        case 0x43fbecu: goto label_43fbec;
        case 0x43fbf0u: goto label_43fbf0;
        case 0x43fbf4u: goto label_43fbf4;
        case 0x43fbf8u: goto label_43fbf8;
        case 0x43fbfcu: goto label_43fbfc;
        case 0x43fc00u: goto label_43fc00;
        case 0x43fc04u: goto label_43fc04;
        case 0x43fc08u: goto label_43fc08;
        case 0x43fc0cu: goto label_43fc0c;
        case 0x43fc10u: goto label_43fc10;
        case 0x43fc14u: goto label_43fc14;
        case 0x43fc18u: goto label_43fc18;
        case 0x43fc1cu: goto label_43fc1c;
        case 0x43fc20u: goto label_43fc20;
        case 0x43fc24u: goto label_43fc24;
        case 0x43fc28u: goto label_43fc28;
        case 0x43fc2cu: goto label_43fc2c;
        case 0x43fc30u: goto label_43fc30;
        case 0x43fc34u: goto label_43fc34;
        case 0x43fc38u: goto label_43fc38;
        case 0x43fc3cu: goto label_43fc3c;
        case 0x43fc40u: goto label_43fc40;
        case 0x43fc44u: goto label_43fc44;
        case 0x43fc48u: goto label_43fc48;
        case 0x43fc4cu: goto label_43fc4c;
        case 0x43fc50u: goto label_43fc50;
        case 0x43fc54u: goto label_43fc54;
        case 0x43fc58u: goto label_43fc58;
        case 0x43fc5cu: goto label_43fc5c;
        case 0x43fc60u: goto label_43fc60;
        case 0x43fc64u: goto label_43fc64;
        case 0x43fc68u: goto label_43fc68;
        case 0x43fc6cu: goto label_43fc6c;
        case 0x43fc70u: goto label_43fc70;
        case 0x43fc74u: goto label_43fc74;
        case 0x43fc78u: goto label_43fc78;
        case 0x43fc7cu: goto label_43fc7c;
        case 0x43fc80u: goto label_43fc80;
        case 0x43fc84u: goto label_43fc84;
        case 0x43fc88u: goto label_43fc88;
        case 0x43fc8cu: goto label_43fc8c;
        case 0x43fc90u: goto label_43fc90;
        case 0x43fc94u: goto label_43fc94;
        case 0x43fc98u: goto label_43fc98;
        case 0x43fc9cu: goto label_43fc9c;
        case 0x43fca0u: goto label_43fca0;
        case 0x43fca4u: goto label_43fca4;
        case 0x43fca8u: goto label_43fca8;
        case 0x43fcacu: goto label_43fcac;
        case 0x43fcb0u: goto label_43fcb0;
        case 0x43fcb4u: goto label_43fcb4;
        case 0x43fcb8u: goto label_43fcb8;
        case 0x43fcbcu: goto label_43fcbc;
        case 0x43fcc0u: goto label_43fcc0;
        case 0x43fcc4u: goto label_43fcc4;
        case 0x43fcc8u: goto label_43fcc8;
        case 0x43fcccu: goto label_43fccc;
        case 0x43fcd0u: goto label_43fcd0;
        case 0x43fcd4u: goto label_43fcd4;
        case 0x43fcd8u: goto label_43fcd8;
        case 0x43fcdcu: goto label_43fcdc;
        case 0x43fce0u: goto label_43fce0;
        case 0x43fce4u: goto label_43fce4;
        case 0x43fce8u: goto label_43fce8;
        case 0x43fcecu: goto label_43fcec;
        case 0x43fcf0u: goto label_43fcf0;
        case 0x43fcf4u: goto label_43fcf4;
        case 0x43fcf8u: goto label_43fcf8;
        case 0x43fcfcu: goto label_43fcfc;
        case 0x43fd00u: goto label_43fd00;
        case 0x43fd04u: goto label_43fd04;
        case 0x43fd08u: goto label_43fd08;
        case 0x43fd0cu: goto label_43fd0c;
        case 0x43fd10u: goto label_43fd10;
        case 0x43fd14u: goto label_43fd14;
        case 0x43fd18u: goto label_43fd18;
        case 0x43fd1cu: goto label_43fd1c;
        case 0x43fd20u: goto label_43fd20;
        case 0x43fd24u: goto label_43fd24;
        case 0x43fd28u: goto label_43fd28;
        case 0x43fd2cu: goto label_43fd2c;
        case 0x43fd30u: goto label_43fd30;
        case 0x43fd34u: goto label_43fd34;
        case 0x43fd38u: goto label_43fd38;
        case 0x43fd3cu: goto label_43fd3c;
        case 0x43fd40u: goto label_43fd40;
        case 0x43fd44u: goto label_43fd44;
        case 0x43fd48u: goto label_43fd48;
        case 0x43fd4cu: goto label_43fd4c;
        case 0x43fd50u: goto label_43fd50;
        case 0x43fd54u: goto label_43fd54;
        case 0x43fd58u: goto label_43fd58;
        case 0x43fd5cu: goto label_43fd5c;
        case 0x43fd60u: goto label_43fd60;
        case 0x43fd64u: goto label_43fd64;
        case 0x43fd68u: goto label_43fd68;
        case 0x43fd6cu: goto label_43fd6c;
        case 0x43fd70u: goto label_43fd70;
        case 0x43fd74u: goto label_43fd74;
        case 0x43fd78u: goto label_43fd78;
        case 0x43fd7cu: goto label_43fd7c;
        case 0x43fd80u: goto label_43fd80;
        case 0x43fd84u: goto label_43fd84;
        case 0x43fd88u: goto label_43fd88;
        case 0x43fd8cu: goto label_43fd8c;
        case 0x43fd90u: goto label_43fd90;
        case 0x43fd94u: goto label_43fd94;
        case 0x43fd98u: goto label_43fd98;
        case 0x43fd9cu: goto label_43fd9c;
        case 0x43fda0u: goto label_43fda0;
        case 0x43fda4u: goto label_43fda4;
        case 0x43fda8u: goto label_43fda8;
        case 0x43fdacu: goto label_43fdac;
        case 0x43fdb0u: goto label_43fdb0;
        case 0x43fdb4u: goto label_43fdb4;
        case 0x43fdb8u: goto label_43fdb8;
        case 0x43fdbcu: goto label_43fdbc;
        case 0x43fdc0u: goto label_43fdc0;
        case 0x43fdc4u: goto label_43fdc4;
        case 0x43fdc8u: goto label_43fdc8;
        case 0x43fdccu: goto label_43fdcc;
        case 0x43fdd0u: goto label_43fdd0;
        case 0x43fdd4u: goto label_43fdd4;
        case 0x43fdd8u: goto label_43fdd8;
        case 0x43fddcu: goto label_43fddc;
        case 0x43fde0u: goto label_43fde0;
        case 0x43fde4u: goto label_43fde4;
        case 0x43fde8u: goto label_43fde8;
        case 0x43fdecu: goto label_43fdec;
        case 0x43fdf0u: goto label_43fdf0;
        case 0x43fdf4u: goto label_43fdf4;
        case 0x43fdf8u: goto label_43fdf8;
        case 0x43fdfcu: goto label_43fdfc;
        case 0x43fe00u: goto label_43fe00;
        case 0x43fe04u: goto label_43fe04;
        case 0x43fe08u: goto label_43fe08;
        case 0x43fe0cu: goto label_43fe0c;
        case 0x43fe10u: goto label_43fe10;
        case 0x43fe14u: goto label_43fe14;
        case 0x43fe18u: goto label_43fe18;
        case 0x43fe1cu: goto label_43fe1c;
        case 0x43fe20u: goto label_43fe20;
        case 0x43fe24u: goto label_43fe24;
        case 0x43fe28u: goto label_43fe28;
        case 0x43fe2cu: goto label_43fe2c;
        case 0x43fe30u: goto label_43fe30;
        case 0x43fe34u: goto label_43fe34;
        case 0x43fe38u: goto label_43fe38;
        case 0x43fe3cu: goto label_43fe3c;
        case 0x43fe40u: goto label_43fe40;
        case 0x43fe44u: goto label_43fe44;
        case 0x43fe48u: goto label_43fe48;
        case 0x43fe4cu: goto label_43fe4c;
        case 0x43fe50u: goto label_43fe50;
        case 0x43fe54u: goto label_43fe54;
        case 0x43fe58u: goto label_43fe58;
        case 0x43fe5cu: goto label_43fe5c;
        case 0x43fe60u: goto label_43fe60;
        case 0x43fe64u: goto label_43fe64;
        case 0x43fe68u: goto label_43fe68;
        case 0x43fe6cu: goto label_43fe6c;
        case 0x43fe70u: goto label_43fe70;
        case 0x43fe74u: goto label_43fe74;
        case 0x43fe78u: goto label_43fe78;
        case 0x43fe7cu: goto label_43fe7c;
        case 0x43fe80u: goto label_43fe80;
        case 0x43fe84u: goto label_43fe84;
        case 0x43fe88u: goto label_43fe88;
        case 0x43fe8cu: goto label_43fe8c;
        case 0x43fe90u: goto label_43fe90;
        case 0x43fe94u: goto label_43fe94;
        case 0x43fe98u: goto label_43fe98;
        case 0x43fe9cu: goto label_43fe9c;
        case 0x43fea0u: goto label_43fea0;
        case 0x43fea4u: goto label_43fea4;
        case 0x43fea8u: goto label_43fea8;
        case 0x43feacu: goto label_43feac;
        case 0x43feb0u: goto label_43feb0;
        case 0x43feb4u: goto label_43feb4;
        case 0x43feb8u: goto label_43feb8;
        case 0x43febcu: goto label_43febc;
        case 0x43fec0u: goto label_43fec0;
        case 0x43fec4u: goto label_43fec4;
        case 0x43fec8u: goto label_43fec8;
        case 0x43feccu: goto label_43fecc;
        default: break;
    }

    ctx->pc = 0x43f710u;

label_43f710:
    // 0x43f710: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x43f710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_43f714:
    // 0x43f714: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x43f714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_43f718:
    // 0x43f718: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x43f718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_43f71c:
    // 0x43f71c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x43f71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_43f720:
    // 0x43f720: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43f720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_43f724:
    // 0x43f724: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x43f724u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_43f728:
    // 0x43f728: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43f728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43f72c:
    // 0x43f72c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x43f72cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_43f730:
    // 0x43f730: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43f730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43f734:
    // 0x43f734: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x43f734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_43f738:
    // 0x43f738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43f738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43f73c:
    // 0x43f73c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43f73cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43f740:
    // 0x43f740: 0xa08000e8  sb          $zero, 0xE8($a0)
    ctx->pc = 0x43f740u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 232), (uint8_t)GPR_U32(ctx, 0));
label_43f744:
    // 0x43f744: 0x90820090  lbu         $v0, 0x90($a0)
    ctx->pc = 0x43f744u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_43f748:
    // 0x43f748: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
label_43f74c:
    if (ctx->pc == 0x43F74Cu) {
        ctx->pc = 0x43F74Cu;
            // 0x43f74c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F750u;
        goto label_43f750;
    }
    ctx->pc = 0x43F748u;
    {
        const bool branch_taken_0x43f748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43F748u;
            // 0x43f74c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f748) {
            ctx->pc = 0x43F958u;
            goto label_43f958;
        }
    }
    ctx->pc = 0x43F750u;
label_43f750:
    // 0x43f750: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x43f750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43f754:
    // 0x43f754: 0xc04f278  jal         func_13C9E0
label_43f758:
    if (ctx->pc == 0x43F758u) {
        ctx->pc = 0x43F758u;
            // 0x43f758: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x43F75Cu;
        goto label_43f75c;
    }
    ctx->pc = 0x43F754u;
    SET_GPR_U32(ctx, 31, 0x43F75Cu);
    ctx->pc = 0x43F758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F754u;
            // 0x43f758: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F75Cu; }
        if (ctx->pc != 0x43F75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F75Cu; }
        if (ctx->pc != 0x43F75Cu) { return; }
    }
    ctx->pc = 0x43F75Cu;
label_43f75c:
    // 0x43f75c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x43f75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43f760:
    // 0x43f760: 0xc04ce80  jal         func_133A00
label_43f764:
    if (ctx->pc == 0x43F764u) {
        ctx->pc = 0x43F764u;
            // 0x43f764: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x43F768u;
        goto label_43f768;
    }
    ctx->pc = 0x43F760u;
    SET_GPR_U32(ctx, 31, 0x43F768u);
    ctx->pc = 0x43F764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F760u;
            // 0x43f764: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F768u; }
        if (ctx->pc != 0x43F768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F768u; }
        if (ctx->pc != 0x43F768u) { return; }
    }
    ctx->pc = 0x43F768u;
label_43f768:
    // 0x43f768: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43f768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43f76c:
    // 0x43f76c: 0x9226004c  lbu         $a2, 0x4C($s1)
    ctx->pc = 0x43f76cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
label_43f770:
    // 0x43f770: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x43f770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_43f774:
    // 0x43f774: 0xc07698c  jal         func_1DA630
label_43f778:
    if (ctx->pc == 0x43F778u) {
        ctx->pc = 0x43F778u;
            // 0x43f778: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F77Cu;
        goto label_43f77c;
    }
    ctx->pc = 0x43F774u;
    SET_GPR_U32(ctx, 31, 0x43F77Cu);
    ctx->pc = 0x43F778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F774u;
            // 0x43f778: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F77Cu; }
        if (ctx->pc != 0x43F77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F77Cu; }
        if (ctx->pc != 0x43F77Cu) { return; }
    }
    ctx->pc = 0x43F77Cu;
label_43f77c:
    // 0x43f77c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x43f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_43f780:
    // 0x43f780: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_43f784:
    if (ctx->pc == 0x43F784u) {
        ctx->pc = 0x43F788u;
        goto label_43f788;
    }
    ctx->pc = 0x43F780u;
    {
        const bool branch_taken_0x43f780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x43f780) {
            ctx->pc = 0x43F790u;
            goto label_43f790;
        }
    }
    ctx->pc = 0x43F788u;
label_43f788:
    // 0x43f788: 0x10000033  b           . + 4 + (0x33 << 2)
label_43f78c:
    if (ctx->pc == 0x43F78Cu) {
        ctx->pc = 0x43F78Cu;
            // 0x43f78c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x43F790u;
        goto label_43f790;
    }
    ctx->pc = 0x43F788u;
    {
        const bool branch_taken_0x43f788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43F788u;
            // 0x43f78c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f788) {
            ctx->pc = 0x43F858u;
            goto label_43f858;
        }
    }
    ctx->pc = 0x43F790u;
label_43f790:
    // 0x43f790: 0xc0576f4  jal         func_15DBD0
label_43f794:
    if (ctx->pc == 0x43F794u) {
        ctx->pc = 0x43F798u;
        goto label_43f798;
    }
    ctx->pc = 0x43F790u;
    SET_GPR_U32(ctx, 31, 0x43F798u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F798u; }
        if (ctx->pc != 0x43F798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F798u; }
        if (ctx->pc != 0x43F798u) { return; }
    }
    ctx->pc = 0x43F798u;
label_43f798:
    // 0x43f798: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x43f798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43f79c:
    // 0x43f79c: 0xc076984  jal         func_1DA610
label_43f7a0:
    if (ctx->pc == 0x43F7A0u) {
        ctx->pc = 0x43F7A0u;
            // 0x43f7a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F7A4u;
        goto label_43f7a4;
    }
    ctx->pc = 0x43F79Cu;
    SET_GPR_U32(ctx, 31, 0x43F7A4u);
    ctx->pc = 0x43F7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F79Cu;
            // 0x43f7a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F7A4u; }
        if (ctx->pc != 0x43F7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F7A4u; }
        if (ctx->pc != 0x43F7A4u) { return; }
    }
    ctx->pc = 0x43F7A4u;
label_43f7a4:
    // 0x43f7a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x43f7a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43f7a8:
    // 0x43f7a8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x43f7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_43f7ac:
    // 0x43f7ac: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x43f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_43f7b0:
    // 0x43f7b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x43f7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43f7b4:
    // 0x43f7b4: 0xc44201d0  lwc1        $f2, 0x1D0($v0)
    ctx->pc = 0x43f7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_43f7b8:
    // 0x43f7b8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x43f7b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43f7bc:
    // 0x43f7bc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x43f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_43f7c0:
    // 0x43f7c0: 0xc44101d8  lwc1        $f1, 0x1D8($v0)
    ctx->pc = 0x43f7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43f7c4:
    // 0x43f7c4: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x43f7c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_43f7c8:
    // 0x43f7c8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x43f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_43f7cc:
    // 0x43f7cc: 0xc44001dc  lwc1        $f0, 0x1DC($v0)
    ctx->pc = 0x43f7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43f7d0:
    // 0x43f7d0: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x43f7d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_43f7d4:
    // 0x43f7d4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x43f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_43f7d8:
    // 0x43f7d8: 0x8c4201d4  lw          $v0, 0x1D4($v0)
    ctx->pc = 0x43f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 468)));
label_43f7dc:
    // 0x43f7dc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x43f7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_43f7e0:
    // 0x43f7e0: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x43f7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_43f7e4:
    // 0x43f7e4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x43f7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43f7e8:
    // 0x43f7e8: 0xc04cca0  jal         func_133280
label_43f7ec:
    if (ctx->pc == 0x43F7ECu) {
        ctx->pc = 0x43F7ECu;
            // 0x43f7ec: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x43F7F0u;
        goto label_43f7f0;
    }
    ctx->pc = 0x43F7E8u;
    SET_GPR_U32(ctx, 31, 0x43F7F0u);
    ctx->pc = 0x43F7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F7E8u;
            // 0x43f7ec: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F7F0u; }
        if (ctx->pc != 0x43F7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F7F0u; }
        if (ctx->pc != 0x43F7F0u) { return; }
    }
    ctx->pc = 0x43F7F0u;
label_43f7f0:
    // 0x43f7f0: 0xc076980  jal         func_1DA600
label_43f7f4:
    if (ctx->pc == 0x43F7F4u) {
        ctx->pc = 0x43F7F4u;
            // 0x43f7f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F7F8u;
        goto label_43f7f8;
    }
    ctx->pc = 0x43F7F0u;
    SET_GPR_U32(ctx, 31, 0x43F7F8u);
    ctx->pc = 0x43F7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F7F0u;
            // 0x43f7f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F7F8u; }
        if (ctx->pc != 0x43F7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F7F8u; }
        if (ctx->pc != 0x43F7F8u) { return; }
    }
    ctx->pc = 0x43F7F8u;
label_43f7f8:
    // 0x43f7f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x43f7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_43f7fc:
    // 0x43f7fc: 0xc04cc34  jal         func_1330D0
label_43f800:
    if (ctx->pc == 0x43F800u) {
        ctx->pc = 0x43F800u;
            // 0x43f800: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F804u;
        goto label_43f804;
    }
    ctx->pc = 0x43F7FCu;
    SET_GPR_U32(ctx, 31, 0x43F804u);
    ctx->pc = 0x43F800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F7FCu;
            // 0x43f800: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F804u; }
        if (ctx->pc != 0x43F804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F804u; }
        if (ctx->pc != 0x43F804u) { return; }
    }
    ctx->pc = 0x43F804u;
label_43f804:
    // 0x43f804: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x43f804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_43f808:
    // 0x43f808: 0xc461d198  lwc1        $f1, -0x2E68($v1)
    ctx->pc = 0x43f808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43f80c:
    // 0x43f80c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x43f80cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43f810:
    // 0x43f810: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_43f814:
    if (ctx->pc == 0x43F814u) {
        ctx->pc = 0x43F814u;
            // 0x43f814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F818u;
        goto label_43f818;
    }
    ctx->pc = 0x43F810u;
    {
        const bool branch_taken_0x43f810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x43f810) {
            ctx->pc = 0x43F814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43F810u;
            // 0x43f814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43F820u;
            goto label_43f820;
        }
    }
    ctx->pc = 0x43F818u;
label_43f818:
    // 0x43f818: 0x1000000f  b           . + 4 + (0xF << 2)
label_43f81c:
    if (ctx->pc == 0x43F81Cu) {
        ctx->pc = 0x43F81Cu;
            // 0x43f81c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x43F820u;
        goto label_43f820;
    }
    ctx->pc = 0x43F818u;
    {
        const bool branch_taken_0x43f818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43F818u;
            // 0x43f81c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f818) {
            ctx->pc = 0x43F858u;
            goto label_43f858;
        }
    }
    ctx->pc = 0x43F820u;
label_43f820:
    // 0x43f820: 0xc07697c  jal         func_1DA5F0
label_43f824:
    if (ctx->pc == 0x43F824u) {
        ctx->pc = 0x43F828u;
        goto label_43f828;
    }
    ctx->pc = 0x43F820u;
    SET_GPR_U32(ctx, 31, 0x43F828u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F828u; }
        if (ctx->pc != 0x43F828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F828u; }
        if (ctx->pc != 0x43F828u) { return; }
    }
    ctx->pc = 0x43F828u;
label_43f828:
    // 0x43f828: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x43f828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43f82c:
    // 0x43f82c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x43f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_43f830:
    // 0x43f830: 0xc04cd60  jal         func_133580
label_43f834:
    if (ctx->pc == 0x43F834u) {
        ctx->pc = 0x43F834u;
            // 0x43f834: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F838u;
        goto label_43f838;
    }
    ctx->pc = 0x43F830u;
    SET_GPR_U32(ctx, 31, 0x43F838u);
    ctx->pc = 0x43F834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F830u;
            // 0x43f834: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F838u; }
        if (ctx->pc != 0x43F838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F838u; }
        if (ctx->pc != 0x43F838u) { return; }
    }
    ctx->pc = 0x43F838u;
label_43f838:
    // 0x43f838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43f838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43f83c:
    // 0x43f83c: 0xc04c650  jal         func_131940
label_43f840:
    if (ctx->pc == 0x43F840u) {
        ctx->pc = 0x43F840u;
            // 0x43f840: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x43F844u;
        goto label_43f844;
    }
    ctx->pc = 0x43F83Cu;
    SET_GPR_U32(ctx, 31, 0x43F844u);
    ctx->pc = 0x43F840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F83Cu;
            // 0x43f840: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F844u; }
        if (ctx->pc != 0x43F844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F844u; }
        if (ctx->pc != 0x43F844u) { return; }
    }
    ctx->pc = 0x43F844u;
label_43f844:
    // 0x43f844: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x43f844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_43f848:
    // 0x43f848: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x43f848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_43f84c:
    // 0x43f84c: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x43f84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_43f850:
    // 0x43f850: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x43f850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_43f854:
    // 0x43f854: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x43f854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_43f858:
    // 0x43f858: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x43f858u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_43f85c:
    // 0x43f85c: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
label_43f860:
    if (ctx->pc == 0x43F860u) {
        ctx->pc = 0x43F860u;
            // 0x43f860: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x43F864u;
        goto label_43f864;
    }
    ctx->pc = 0x43F85Cu;
    {
        const bool branch_taken_0x43f85c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43F85Cu;
            // 0x43f860: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f85c) {
            ctx->pc = 0x43F96Cu;
            goto label_43f96c;
        }
    }
    ctx->pc = 0x43F864u;
label_43f864:
    // 0x43f864: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43f864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43f868:
    // 0x43f868: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43f868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43f86c:
    // 0x43f86c: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x43f86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_43f870:
    // 0x43f870: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x43f870u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_43f874:
    // 0x43f874: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x43f874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_43f878:
    // 0x43f878: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43f878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43f87c:
    // 0x43f87c: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x43f87cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_43f880:
    // 0x43f880: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43f880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43f884:
    // 0x43f884: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x43f884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_43f888:
    // 0x43f888: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x43f888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_43f88c:
    // 0x43f88c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x43f88cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_43f890:
    // 0x43f890: 0x86a821  addu        $s5, $a0, $a2
    ctx->pc = 0x43f890u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_43f894:
    // 0x43f894: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43f894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43f898:
    // 0x43f898: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x43f898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_43f89c:
    // 0x43f89c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43f8a0:
    // 0x43f8a0: 0xacb50000  sw          $s5, 0x0($a1)
    ctx->pc = 0x43f8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 21));
label_43f8a4:
    // 0x43f8a4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x43f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_43f8a8:
    // 0x43f8a8: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x43f8a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_43f8ac:
    // 0x43f8ac: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x43f8acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_43f8b0:
    // 0x43f8b0: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x43f8b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_43f8b4:
    // 0x43f8b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43f8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43f8b8:
    // 0x43f8b8: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x43f8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_43f8bc:
    // 0x43f8bc: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x43f8bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_43f8c0:
    // 0x43f8c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43f8c4:
    // 0x43f8c4: 0x1099021  addu        $s2, $t0, $t1
    ctx->pc = 0x43f8c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_43f8c8:
    // 0x43f8c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43f8cc:
    // 0x43f8cc: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x43f8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_43f8d0:
    // 0x43f8d0: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x43f8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
label_43f8d4:
    // 0x43f8d4: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x43f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_43f8d8:
    // 0x43f8d8: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x43f8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_43f8dc:
    // 0x43f8dc: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x43f8dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_43f8e0:
    // 0x43f8e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x43f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_43f8e4:
    // 0x43f8e4: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x43f8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_43f8e8:
    // 0x43f8e8: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x43f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_43f8ec:
    // 0x43f8ec: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x43f8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_43f8f0:
    // 0x43f8f0: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x43f8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_43f8f4:
    // 0x43f8f4: 0xc04e4a4  jal         func_139290
label_43f8f8:
    if (ctx->pc == 0x43F8F8u) {
        ctx->pc = 0x43F8F8u;
            // 0x43f8f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F8FCu;
        goto label_43f8fc;
    }
    ctx->pc = 0x43F8F4u;
    SET_GPR_U32(ctx, 31, 0x43F8FCu);
    ctx->pc = 0x43F8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F8F4u;
            // 0x43f8f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F8FCu; }
        if (ctx->pc != 0x43F8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F8FCu; }
        if (ctx->pc != 0x43F8FCu) { return; }
    }
    ctx->pc = 0x43F8FCu;
label_43f8fc:
    // 0x43f8fc: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x43f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_43f900:
    // 0x43f900: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x43f900u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_43f904:
    // 0x43f904: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_43f908:
    if (ctx->pc == 0x43F908u) {
        ctx->pc = 0x43F908u;
            // 0x43f908: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F90Cu;
        goto label_43f90c;
    }
    ctx->pc = 0x43F904u;
    {
        const bool branch_taken_0x43f904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43f904) {
            ctx->pc = 0x43F908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43F904u;
            // 0x43f908: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43F914u;
            goto label_43f914;
        }
    }
    ctx->pc = 0x43F90Cu;
label_43f90c:
    // 0x43f90c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x43f90cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_43f910:
    // 0x43f910: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x43f910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_43f914:
    // 0x43f914: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x43f914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43f918:
    // 0x43f918: 0xc04cd60  jal         func_133580
label_43f91c:
    if (ctx->pc == 0x43F91Cu) {
        ctx->pc = 0x43F91Cu;
            // 0x43f91c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F920u;
        goto label_43f920;
    }
    ctx->pc = 0x43F918u;
    SET_GPR_U32(ctx, 31, 0x43F920u);
    ctx->pc = 0x43F91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F918u;
            // 0x43f91c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F920u; }
        if (ctx->pc != 0x43F920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F920u; }
        if (ctx->pc != 0x43F920u) { return; }
    }
    ctx->pc = 0x43F920u;
label_43f920:
    // 0x43f920: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x43f920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_43f924:
    // 0x43f924: 0xc04cce8  jal         func_1333A0
label_43f928:
    if (ctx->pc == 0x43F928u) {
        ctx->pc = 0x43F928u;
            // 0x43f928: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F92Cu;
        goto label_43f92c;
    }
    ctx->pc = 0x43F924u;
    SET_GPR_U32(ctx, 31, 0x43F92Cu);
    ctx->pc = 0x43F928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F924u;
            // 0x43f928: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F92Cu; }
        if (ctx->pc != 0x43F92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F92Cu; }
        if (ctx->pc != 0x43F92Cu) { return; }
    }
    ctx->pc = 0x43F92Cu;
label_43f92c:
    // 0x43f92c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x43f92cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_43f930:
    // 0x43f930: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x43f930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_43f934:
    // 0x43f934: 0x320f809  jalr        $t9
label_43f938:
    if (ctx->pc == 0x43F938u) {
        ctx->pc = 0x43F938u;
            // 0x43f938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F93Cu;
        goto label_43f93c;
    }
    ctx->pc = 0x43F934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43F93Cu);
        ctx->pc = 0x43F938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43F934u;
            // 0x43f938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43F93Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43F93Cu; }
            if (ctx->pc != 0x43F93Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43F93Cu;
label_43f93c:
    // 0x43f93c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x43f93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_43f940:
    // 0x43f940: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x43f940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_43f944:
    // 0x43f944: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x43f944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43f948:
    // 0x43f948: 0xc054fd4  jal         func_153F50
label_43f94c:
    if (ctx->pc == 0x43F94Cu) {
        ctx->pc = 0x43F94Cu;
            // 0x43f94c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F950u;
        goto label_43f950;
    }
    ctx->pc = 0x43F948u;
    SET_GPR_U32(ctx, 31, 0x43F950u);
    ctx->pc = 0x43F94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F948u;
            // 0x43f94c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F950u; }
        if (ctx->pc != 0x43F950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F950u; }
        if (ctx->pc != 0x43F950u) { return; }
    }
    ctx->pc = 0x43F950u;
label_43f950:
    // 0x43f950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43f950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43f954:
    // 0x43f954: 0xa22200e8  sb          $v0, 0xE8($s1)
    ctx->pc = 0x43f954u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 232), (uint8_t)GPR_U32(ctx, 2));
label_43f958:
    // 0x43f958: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x43f958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_43f95c:
    // 0x43f95c: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x43f95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_43f960:
    // 0x43f960: 0xc44cd198  lwc1        $f12, -0x2E68($v0)
    ctx->pc = 0x43f960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_43f964:
    // 0x43f964: 0xc0e323c  jal         func_38C8F0
label_43f968:
    if (ctx->pc == 0x43F968u) {
        ctx->pc = 0x43F968u;
            // 0x43f968: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F96Cu;
        goto label_43f96c;
    }
    ctx->pc = 0x43F964u;
    SET_GPR_U32(ctx, 31, 0x43F96Cu);
    ctx->pc = 0x43F968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43F964u;
            // 0x43f968: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C8F0u;
    if (runtime->hasFunction(0x38C8F0u)) {
        auto targetFn = runtime->lookupFunction(0x38C8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F96Cu; }
        if (ctx->pc != 0x43F96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C8F0_0x38c8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43F96Cu; }
        if (ctx->pc != 0x43F96Cu) { return; }
    }
    ctx->pc = 0x43F96Cu;
label_43f96c:
    // 0x43f96c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x43f96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_43f970:
    // 0x43f970: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x43f970u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_43f974:
    // 0x43f974: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x43f974u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43f978:
    // 0x43f978: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43f978u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43f97c:
    // 0x43f97c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43f97cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43f980:
    // 0x43f980: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43f980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43f984:
    // 0x43f984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43f984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43f988:
    // 0x43f988: 0x3e00008  jr          $ra
label_43f98c:
    if (ctx->pc == 0x43F98Cu) {
        ctx->pc = 0x43F98Cu;
            // 0x43f98c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x43F990u;
        goto label_43f990;
    }
    ctx->pc = 0x43F988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43F988u;
            // 0x43f98c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43F990u;
label_43f990:
    // 0x43f990: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x43f990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_43f994:
    // 0x43f994: 0x3e00008  jr          $ra
label_43f998:
    if (ctx->pc == 0x43F998u) {
        ctx->pc = 0x43F998u;
            // 0x43f998: 0x2442d188  addiu       $v0, $v0, -0x2E78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955400));
        ctx->pc = 0x43F99Cu;
        goto label_43f99c;
    }
    ctx->pc = 0x43F994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43F994u;
            // 0x43f998: 0x2442d188  addiu       $v0, $v0, -0x2E78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43F99Cu;
label_43f99c:
    // 0x43f99c: 0x0  nop
    ctx->pc = 0x43f99cu;
    // NOP
label_43f9a0:
    // 0x43f9a0: 0x3e00008  jr          $ra
label_43f9a4:
    if (ctx->pc == 0x43F9A4u) {
        ctx->pc = 0x43F9A4u;
            // 0x43f9a4: 0x24024e3e  addiu       $v0, $zero, 0x4E3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20030));
        ctx->pc = 0x43F9A8u;
        goto label_43f9a8;
    }
    ctx->pc = 0x43F9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43F9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43F9A0u;
            // 0x43f9a4: 0x24024e3e  addiu       $v0, $zero, 0x4E3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20030));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43F9A8u;
label_43f9a8:
    // 0x43f9a8: 0x0  nop
    ctx->pc = 0x43f9a8u;
    // NOP
label_43f9ac:
    // 0x43f9ac: 0x0  nop
    ctx->pc = 0x43f9acu;
    // NOP
label_43f9b0:
    // 0x43f9b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x43f9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_43f9b4:
    // 0x43f9b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x43f9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_43f9b8:
    // 0x43f9b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x43f9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_43f9bc:
    // 0x43f9bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43f9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_43f9c0:
    // 0x43f9c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x43f9c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43f9c4:
    // 0x43f9c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43f9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43f9c8:
    // 0x43f9c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43f9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43f9cc:
    // 0x43f9cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43f9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43f9d0:
    // 0x43f9d0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x43f9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_43f9d4:
    // 0x43f9d4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_43f9d8:
    if (ctx->pc == 0x43F9D8u) {
        ctx->pc = 0x43F9D8u;
            // 0x43f9d8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43F9DCu;
        goto label_43f9dc;
    }
    ctx->pc = 0x43F9D4u;
    {
        const bool branch_taken_0x43f9d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43F9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43F9D4u;
            // 0x43f9d8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43f9d4) {
            ctx->pc = 0x43FA18u;
            goto label_43fa18;
        }
    }
    ctx->pc = 0x43F9DCu;
label_43f9dc:
    // 0x43f9dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x43f9dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43f9e0:
    // 0x43f9e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x43f9e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43f9e4:
    // 0x43f9e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x43f9e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43f9e8:
    // 0x43f9e8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x43f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_43f9ec:
    // 0x43f9ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x43f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_43f9f0:
    // 0x43f9f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x43f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_43f9f4:
    // 0x43f9f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43f9f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43f9f8:
    // 0x43f9f8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x43f9f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_43f9fc:
    // 0x43f9fc: 0x320f809  jalr        $t9
label_43fa00:
    if (ctx->pc == 0x43FA00u) {
        ctx->pc = 0x43FA04u;
        goto label_43fa04;
    }
    ctx->pc = 0x43F9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43FA04u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x43FA04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43FA04u; }
            if (ctx->pc != 0x43FA04u) { return; }
        }
        }
    }
    ctx->pc = 0x43FA04u;
label_43fa04:
    // 0x43fa04: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x43fa04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_43fa08:
    // 0x43fa08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x43fa08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_43fa0c:
    // 0x43fa0c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x43fa0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_43fa10:
    // 0x43fa10: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_43fa14:
    if (ctx->pc == 0x43FA14u) {
        ctx->pc = 0x43FA14u;
            // 0x43fa14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x43FA18u;
        goto label_43fa18;
    }
    ctx->pc = 0x43FA10u;
    {
        const bool branch_taken_0x43fa10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43FA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43FA10u;
            // 0x43fa14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fa10) {
            ctx->pc = 0x43F9E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43f9e8;
        }
    }
    ctx->pc = 0x43FA18u;
label_43fa18:
    // 0x43fa18: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x43fa18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43fa1c:
    // 0x43fa1c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x43fa1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_43fa20:
    // 0x43fa20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x43fa20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43fa24:
    // 0x43fa24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43fa24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43fa28:
    // 0x43fa28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43fa28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43fa2c:
    // 0x43fa2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43fa2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43fa30:
    // 0x43fa30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43fa30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43fa34:
    // 0x43fa34: 0x3e00008  jr          $ra
label_43fa38:
    if (ctx->pc == 0x43FA38u) {
        ctx->pc = 0x43FA38u;
            // 0x43fa38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x43FA3Cu;
        goto label_43fa3c;
    }
    ctx->pc = 0x43FA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43FA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43FA34u;
            // 0x43fa38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43FA3Cu;
label_43fa3c:
    // 0x43fa3c: 0x0  nop
    ctx->pc = 0x43fa3cu;
    // NOP
label_43fa40:
    // 0x43fa40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43fa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_43fa44:
    // 0x43fa44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43fa44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43fa48:
    // 0x43fa48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43fa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43fa4c:
    // 0x43fa4c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x43fa4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_43fa50:
    // 0x43fa50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43fa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43fa54:
    // 0x43fa54: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x43fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_43fa58:
    // 0x43fa58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x43fa58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43fa5c:
    // 0x43fa5c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x43fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_43fa60:
    // 0x43fa60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_43fa64:
    // 0x43fa64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x43fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_43fa68:
    // 0x43fa68: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x43fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_43fa6c:
    // 0x43fa6c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x43fa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43fa70:
    // 0x43fa70: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x43fa70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_43fa74:
    // 0x43fa74: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x43fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_43fa78:
    // 0x43fa78: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x43fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_43fa7c:
    // 0x43fa7c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x43fa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_43fa80:
    // 0x43fa80: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x43fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_43fa84:
    // 0x43fa84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x43fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_43fa88:
    // 0x43fa88: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x43fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_43fa8c:
    // 0x43fa8c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x43fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_43fa90:
    // 0x43fa90: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x43fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_43fa94:
    // 0x43fa94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_43fa98:
    // 0x43fa98: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x43fa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_43fa9c:
    // 0x43fa9c: 0xc0a997c  jal         func_2A65F0
label_43faa0:
    if (ctx->pc == 0x43FAA0u) {
        ctx->pc = 0x43FAA0u;
            // 0x43faa0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x43FAA4u;
        goto label_43faa4;
    }
    ctx->pc = 0x43FA9Cu;
    SET_GPR_U32(ctx, 31, 0x43FAA4u);
    ctx->pc = 0x43FAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FA9Cu;
            // 0x43faa0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FAA4u; }
        if (ctx->pc != 0x43FAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FAA4u; }
        if (ctx->pc != 0x43FAA4u) { return; }
    }
    ctx->pc = 0x43FAA4u;
label_43faa4:
    // 0x43faa4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x43faa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_43faa8:
    // 0x43faa8: 0xc0d879c  jal         func_361E70
label_43faac:
    if (ctx->pc == 0x43FAACu) {
        ctx->pc = 0x43FAACu;
            // 0x43faac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43FAB0u;
        goto label_43fab0;
    }
    ctx->pc = 0x43FAA8u;
    SET_GPR_U32(ctx, 31, 0x43FAB0u);
    ctx->pc = 0x43FAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FAA8u;
            // 0x43faac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FAB0u; }
        if (ctx->pc != 0x43FAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FAB0u; }
        if (ctx->pc != 0x43FAB0u) { return; }
    }
    ctx->pc = 0x43FAB0u;
label_43fab0:
    // 0x43fab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43fab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43fab4:
    // 0x43fab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43fab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43fab8:
    // 0x43fab8: 0x3e00008  jr          $ra
label_43fabc:
    if (ctx->pc == 0x43FABCu) {
        ctx->pc = 0x43FABCu;
            // 0x43fabc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x43FAC0u;
        goto label_43fac0;
    }
    ctx->pc = 0x43FAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43FABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43FAB8u;
            // 0x43fabc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43FAC0u;
label_43fac0:
    // 0x43fac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43fac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43fac4:
    // 0x43fac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43fac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43fac8:
    // 0x43fac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43fac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43facc:
    // 0x43facc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x43faccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_43fad0:
    // 0x43fad0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_43fad4:
    if (ctx->pc == 0x43FAD4u) {
        ctx->pc = 0x43FAD4u;
            // 0x43fad4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43FAD8u;
        goto label_43fad8;
    }
    ctx->pc = 0x43FAD0u;
    {
        const bool branch_taken_0x43fad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43FAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43FAD0u;
            // 0x43fad4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fad0) {
            ctx->pc = 0x43FBF0u;
            goto label_43fbf0;
        }
    }
    ctx->pc = 0x43FAD8u;
label_43fad8:
    // 0x43fad8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x43fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_43fadc:
    // 0x43fadc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x43fadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_43fae0:
    // 0x43fae0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x43fae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_43fae4:
    // 0x43fae4: 0xc075128  jal         func_1D44A0
label_43fae8:
    if (ctx->pc == 0x43FAE8u) {
        ctx->pc = 0x43FAE8u;
            // 0x43fae8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x43FAECu;
        goto label_43faec;
    }
    ctx->pc = 0x43FAE4u;
    SET_GPR_U32(ctx, 31, 0x43FAECu);
    ctx->pc = 0x43FAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FAE4u;
            // 0x43fae8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FAECu; }
        if (ctx->pc != 0x43FAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FAECu; }
        if (ctx->pc != 0x43FAECu) { return; }
    }
    ctx->pc = 0x43FAECu;
label_43faec:
    // 0x43faec: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x43faecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_43faf0:
    // 0x43faf0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43faf4:
    // 0x43faf4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x43faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_43faf8:
    // 0x43faf8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x43faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_43fafc:
    // 0x43fafc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x43fafcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_43fb00:
    // 0x43fb00: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_43fb04:
    if (ctx->pc == 0x43FB04u) {
        ctx->pc = 0x43FB04u;
            // 0x43fb04: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x43FB08u;
        goto label_43fb08;
    }
    ctx->pc = 0x43FB00u;
    {
        const bool branch_taken_0x43fb00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x43FB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43FB00u;
            // 0x43fb04: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fb00) {
            ctx->pc = 0x43FB10u;
            goto label_43fb10;
        }
    }
    ctx->pc = 0x43FB08u;
label_43fb08:
    // 0x43fb08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43fb0c:
    // 0x43fb0c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x43fb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_43fb10:
    // 0x43fb10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x43fb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43fb14:
    // 0x43fb14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43fb18:
    // 0x43fb18: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x43fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_43fb1c:
    // 0x43fb1c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x43fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_43fb20:
    // 0x43fb20: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x43fb20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_43fb24:
    // 0x43fb24: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_43fb28:
    if (ctx->pc == 0x43FB28u) {
        ctx->pc = 0x43FB28u;
            // 0x43fb28: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x43FB2Cu;
        goto label_43fb2c;
    }
    ctx->pc = 0x43FB24u;
    {
        const bool branch_taken_0x43fb24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x43fb24) {
            ctx->pc = 0x43FB28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43FB24u;
            // 0x43fb28: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43FB38u;
            goto label_43fb38;
        }
    }
    ctx->pc = 0x43FB2Cu;
label_43fb2c:
    // 0x43fb2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43fb30:
    // 0x43fb30: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x43fb30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_43fb34:
    // 0x43fb34: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x43fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43fb38:
    // 0x43fb38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43fb3c:
    // 0x43fb3c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x43fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_43fb40:
    // 0x43fb40: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x43fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_43fb44:
    // 0x43fb44: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x43fb44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_43fb48:
    // 0x43fb48: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_43fb4c:
    if (ctx->pc == 0x43FB4Cu) {
        ctx->pc = 0x43FB4Cu;
            // 0x43fb4c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x43FB50u;
        goto label_43fb50;
    }
    ctx->pc = 0x43FB48u;
    {
        const bool branch_taken_0x43fb48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x43fb48) {
            ctx->pc = 0x43FB4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43FB48u;
            // 0x43fb4c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43FB5Cu;
            goto label_43fb5c;
        }
    }
    ctx->pc = 0x43FB50u;
label_43fb50:
    // 0x43fb50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43fb54:
    // 0x43fb54: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x43fb54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_43fb58:
    // 0x43fb58: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x43fb58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_43fb5c:
    // 0x43fb5c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x43fb5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_43fb60:
    // 0x43fb60: 0x320f809  jalr        $t9
label_43fb64:
    if (ctx->pc == 0x43FB64u) {
        ctx->pc = 0x43FB64u;
            // 0x43fb64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43FB68u;
        goto label_43fb68;
    }
    ctx->pc = 0x43FB60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43FB68u);
        ctx->pc = 0x43FB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43FB60u;
            // 0x43fb64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43FB68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43FB68u; }
            if (ctx->pc != 0x43FB68u) { return; }
        }
        }
    }
    ctx->pc = 0x43FB68u;
label_43fb68:
    // 0x43fb68: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x43fb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_43fb6c:
    // 0x43fb6c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43fb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43fb70:
    // 0x43fb70: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x43fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_43fb74:
    // 0x43fb74: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x43fb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_43fb78:
    // 0x43fb78: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x43fb78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_43fb7c:
    // 0x43fb7c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x43fb7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_43fb80:
    // 0x43fb80: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_43fb84:
    if (ctx->pc == 0x43FB84u) {
        ctx->pc = 0x43FB84u;
            // 0x43fb84: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x43FB88u;
        goto label_43fb88;
    }
    ctx->pc = 0x43FB80u;
    {
        const bool branch_taken_0x43fb80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x43fb80) {
            ctx->pc = 0x43FB84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43FB80u;
            // 0x43fb84: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43FB94u;
            goto label_43fb94;
        }
    }
    ctx->pc = 0x43FB88u;
label_43fb88:
    // 0x43fb88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43fb8c:
    // 0x43fb8c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x43fb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_43fb90:
    // 0x43fb90: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x43fb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_43fb94:
    // 0x43fb94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43fb98:
    // 0x43fb98: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x43fb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_43fb9c:
    // 0x43fb9c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x43fb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_43fba0:
    // 0x43fba0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x43fba0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_43fba4:
    // 0x43fba4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x43fba4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_43fba8:
    // 0x43fba8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_43fbac:
    if (ctx->pc == 0x43FBACu) {
        ctx->pc = 0x43FBB0u;
        goto label_43fbb0;
    }
    ctx->pc = 0x43FBA8u;
    {
        const bool branch_taken_0x43fba8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x43fba8) {
            ctx->pc = 0x43FBB8u;
            goto label_43fbb8;
        }
    }
    ctx->pc = 0x43FBB0u;
label_43fbb0:
    // 0x43fbb0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43fbb4:
    // 0x43fbb4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x43fbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_43fbb8:
    // 0x43fbb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43fbbc:
    // 0x43fbbc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x43fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_43fbc0:
    // 0x43fbc0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x43fbc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_43fbc4:
    // 0x43fbc4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_43fbc8:
    if (ctx->pc == 0x43FBC8u) {
        ctx->pc = 0x43FBCCu;
        goto label_43fbcc;
    }
    ctx->pc = 0x43FBC4u;
    {
        const bool branch_taken_0x43fbc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x43fbc4) {
            ctx->pc = 0x43FBD4u;
            goto label_43fbd4;
        }
    }
    ctx->pc = 0x43FBCCu;
label_43fbcc:
    // 0x43fbcc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43fbd0:
    // 0x43fbd0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x43fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_43fbd4:
    // 0x43fbd4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43fbd8:
    // 0x43fbd8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x43fbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_43fbdc:
    // 0x43fbdc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x43fbdcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_43fbe0:
    // 0x43fbe0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_43fbe4:
    if (ctx->pc == 0x43FBE4u) {
        ctx->pc = 0x43FBE4u;
            // 0x43fbe4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x43FBE8u;
        goto label_43fbe8;
    }
    ctx->pc = 0x43FBE0u;
    {
        const bool branch_taken_0x43fbe0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x43fbe0) {
            ctx->pc = 0x43FBE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43FBE0u;
            // 0x43fbe4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43FBF4u;
            goto label_43fbf4;
        }
    }
    ctx->pc = 0x43FBE8u;
label_43fbe8:
    // 0x43fbe8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43fbec:
    // 0x43fbec: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x43fbecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_43fbf0:
    // 0x43fbf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43fbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43fbf4:
    // 0x43fbf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43fbf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43fbf8:
    // 0x43fbf8: 0x3e00008  jr          $ra
label_43fbfc:
    if (ctx->pc == 0x43FBFCu) {
        ctx->pc = 0x43FBFCu;
            // 0x43fbfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43FC00u;
        goto label_43fc00;
    }
    ctx->pc = 0x43FBF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43FBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43FBF8u;
            // 0x43fbfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43FC00u;
label_43fc00:
    // 0x43fc00: 0x810f8f8  j           func_43E3E0
label_43fc04:
    if (ctx->pc == 0x43FC04u) {
        ctx->pc = 0x43FC04u;
            // 0x43fc04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x43FC08u;
        goto label_43fc08;
    }
    ctx->pc = 0x43FC00u;
    ctx->pc = 0x43FC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FC00u;
            // 0x43fc04: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43E3E0u;
    {
        auto targetFn = runtime->lookupFunction(0x43E3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x43FC08u;
label_43fc08:
    // 0x43fc08: 0x0  nop
    ctx->pc = 0x43fc08u;
    // NOP
label_43fc0c:
    // 0x43fc0c: 0x0  nop
    ctx->pc = 0x43fc0cu;
    // NOP
label_43fc10:
    // 0x43fc10: 0x810f74c  j           func_43DD30
label_43fc14:
    if (ctx->pc == 0x43FC14u) {
        ctx->pc = 0x43FC14u;
            // 0x43fc14: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x43FC18u;
        goto label_43fc18;
    }
    ctx->pc = 0x43FC10u;
    ctx->pc = 0x43FC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FC10u;
            // 0x43fc14: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DD30u;
    if (runtime->hasFunction(0x43DD30u)) {
        auto targetFn = runtime->lookupFunction(0x43DD30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0043DD30_0x43dd30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x43FC18u;
label_43fc18:
    // 0x43fc18: 0x0  nop
    ctx->pc = 0x43fc18u;
    // NOP
label_43fc1c:
    // 0x43fc1c: 0x0  nop
    ctx->pc = 0x43fc1cu;
    // NOP
label_43fc20:
    // 0x43fc20: 0x810f7a4  j           func_43DE90
label_43fc24:
    if (ctx->pc == 0x43FC24u) {
        ctx->pc = 0x43FC24u;
            // 0x43fc24: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x43FC28u;
        goto label_43fc28;
    }
    ctx->pc = 0x43FC20u;
    ctx->pc = 0x43FC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FC20u;
            // 0x43fc24: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DE90u;
    {
        auto targetFn = runtime->lookupFunction(0x43DE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x43FC28u;
label_43fc28:
    // 0x43fc28: 0x0  nop
    ctx->pc = 0x43fc28u;
    // NOP
label_43fc2c:
    // 0x43fc2c: 0x0  nop
    ctx->pc = 0x43fc2cu;
    // NOP
label_43fc30:
    // 0x43fc30: 0x810f728  j           func_43DCA0
label_43fc34:
    if (ctx->pc == 0x43FC34u) {
        ctx->pc = 0x43FC34u;
            // 0x43fc34: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x43FC38u;
        goto label_43fc38;
    }
    ctx->pc = 0x43FC30u;
    ctx->pc = 0x43FC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FC30u;
            // 0x43fc34: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DCA0u;
    {
        auto targetFn = runtime->lookupFunction(0x43DCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x43FC38u;
label_43fc38:
    // 0x43fc38: 0x0  nop
    ctx->pc = 0x43fc38u;
    // NOP
label_43fc3c:
    // 0x43fc3c: 0x0  nop
    ctx->pc = 0x43fc3cu;
    // NOP
label_43fc40:
    // 0x43fc40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43fc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_43fc44:
    // 0x43fc44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43fc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_43fc48:
    // 0x43fc48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43fc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43fc4c:
    // 0x43fc4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43fc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43fc50:
    // 0x43fc50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43fc50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43fc54:
    // 0x43fc54: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_43fc58:
    if (ctx->pc == 0x43FC58u) {
        ctx->pc = 0x43FC58u;
            // 0x43fc58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43FC5Cu;
        goto label_43fc5c;
    }
    ctx->pc = 0x43FC54u;
    {
        const bool branch_taken_0x43fc54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x43FC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43FC54u;
            // 0x43fc58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fc54) {
            ctx->pc = 0x43FCA8u;
            goto label_43fca8;
        }
    }
    ctx->pc = 0x43FC5Cu;
label_43fc5c:
    // 0x43fc5c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_43fc60:
    // 0x43fc60: 0x2442d300  addiu       $v0, $v0, -0x2D00
    ctx->pc = 0x43fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955776));
label_43fc64:
    // 0x43fc64: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_43fc68:
    if (ctx->pc == 0x43FC68u) {
        ctx->pc = 0x43FC68u;
            // 0x43fc68: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x43FC6Cu;
        goto label_43fc6c;
    }
    ctx->pc = 0x43FC64u;
    {
        const bool branch_taken_0x43fc64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x43FC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43FC64u;
            // 0x43fc68: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fc64) {
            ctx->pc = 0x43FC90u;
            goto label_43fc90;
        }
    }
    ctx->pc = 0x43FC6Cu;
label_43fc6c:
    // 0x43fc6c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_43fc70:
    // 0x43fc70: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x43fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_43fc74:
    // 0x43fc74: 0x2442d330  addiu       $v0, $v0, -0x2CD0
    ctx->pc = 0x43fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955824));
label_43fc78:
    // 0x43fc78: 0x2484d370  addiu       $a0, $a0, -0x2C90
    ctx->pc = 0x43fc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955888));
label_43fc7c:
    // 0x43fc7c: 0xc0ad6c4  jal         func_2B5B10
label_43fc80:
    if (ctx->pc == 0x43FC80u) {
        ctx->pc = 0x43FC80u;
            // 0x43fc80: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x43FC84u;
        goto label_43fc84;
    }
    ctx->pc = 0x43FC7Cu;
    SET_GPR_U32(ctx, 31, 0x43FC84u);
    ctx->pc = 0x43FC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FC7Cu;
            // 0x43fc80: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FC84u; }
        if (ctx->pc != 0x43FC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FC84u; }
        if (ctx->pc != 0x43FC84u) { return; }
    }
    ctx->pc = 0x43FC84u;
label_43fc84:
    // 0x43fc84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43fc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43fc88:
    // 0x43fc88: 0xc075bf8  jal         func_1D6FE0
label_43fc8c:
    if (ctx->pc == 0x43FC8Cu) {
        ctx->pc = 0x43FC8Cu;
            // 0x43fc8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43FC90u;
        goto label_43fc90;
    }
    ctx->pc = 0x43FC88u;
    SET_GPR_U32(ctx, 31, 0x43FC90u);
    ctx->pc = 0x43FC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FC88u;
            // 0x43fc8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FC90u; }
        if (ctx->pc != 0x43FC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FC90u; }
        if (ctx->pc != 0x43FC90u) { return; }
    }
    ctx->pc = 0x43FC90u;
label_43fc90:
    // 0x43fc90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x43fc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_43fc94:
    // 0x43fc94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x43fc94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_43fc98:
    // 0x43fc98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_43fc9c:
    if (ctx->pc == 0x43FC9Cu) {
        ctx->pc = 0x43FC9Cu;
            // 0x43fc9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43FCA0u;
        goto label_43fca0;
    }
    ctx->pc = 0x43FC98u;
    {
        const bool branch_taken_0x43fc98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x43fc98) {
            ctx->pc = 0x43FC9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43FC98u;
            // 0x43fc9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43FCACu;
            goto label_43fcac;
        }
    }
    ctx->pc = 0x43FCA0u;
label_43fca0:
    // 0x43fca0: 0xc0400a8  jal         func_1002A0
label_43fca4:
    if (ctx->pc == 0x43FCA4u) {
        ctx->pc = 0x43FCA4u;
            // 0x43fca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43FCA8u;
        goto label_43fca8;
    }
    ctx->pc = 0x43FCA0u;
    SET_GPR_U32(ctx, 31, 0x43FCA8u);
    ctx->pc = 0x43FCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FCA0u;
            // 0x43fca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FCA8u; }
        if (ctx->pc != 0x43FCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FCA8u; }
        if (ctx->pc != 0x43FCA8u) { return; }
    }
    ctx->pc = 0x43FCA8u;
label_43fca8:
    // 0x43fca8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x43fca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43fcac:
    // 0x43fcac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43fcacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_43fcb0:
    // 0x43fcb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43fcb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43fcb4:
    // 0x43fcb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43fcb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43fcb8:
    // 0x43fcb8: 0x3e00008  jr          $ra
label_43fcbc:
    if (ctx->pc == 0x43FCBCu) {
        ctx->pc = 0x43FCBCu;
            // 0x43fcbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x43FCC0u;
        goto label_43fcc0;
    }
    ctx->pc = 0x43FCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43FCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43FCB8u;
            // 0x43fcbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43FCC0u;
label_43fcc0:
    // 0x43fcc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43fcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43fcc4:
    // 0x43fcc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43fcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43fcc8:
    // 0x43fcc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43fcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43fccc:
    // 0x43fccc: 0x94850060  lhu         $a1, 0x60($a0)
    ctx->pc = 0x43fcccu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
label_43fcd0:
    // 0x43fcd0: 0x38a30100  xori        $v1, $a1, 0x100
    ctx->pc = 0x43fcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)256);
label_43fcd4:
    // 0x43fcd4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x43fcd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_43fcd8:
    // 0x43fcd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_43fcdc:
    // 0x43fcdc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x43fcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_43fce0:
    // 0x43fce0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x43fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_43fce4:
    // 0x43fce4: 0xa4830060  sh          $v1, 0x60($a0)
    ctx->pc = 0x43fce4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 3));
label_43fce8:
    // 0x43fce8: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x43fce8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_43fcec:
    // 0x43fcec: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x43fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
label_43fcf0:
    // 0x43fcf0: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x43fcf0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_43fcf4:
    // 0x43fcf4: 0x10200072  beqz        $at, . + 4 + (0x72 << 2)
label_43fcf8:
    if (ctx->pc == 0x43FCF8u) {
        ctx->pc = 0x43FCF8u;
            // 0x43fcf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43FCFCu;
        goto label_43fcfc;
    }
    ctx->pc = 0x43FCF4u;
    {
        const bool branch_taken_0x43fcf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x43FCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43FCF4u;
            // 0x43fcf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fcf4) {
            ctx->pc = 0x43FEC0u;
            goto label_43fec0;
        }
    }
    ctx->pc = 0x43FCFCu;
label_43fcfc:
    // 0x43fcfc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x43fcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_43fd00:
    // 0x43fd00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_43fd04:
    // 0x43fd04: 0x24a5d320  addiu       $a1, $a1, -0x2CE0
    ctx->pc = 0x43fd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955808));
label_43fd08:
    // 0x43fd08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x43fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_43fd0c:
    // 0x43fd0c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x43fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_43fd10:
    // 0x43fd10: 0x600008  jr          $v1
label_43fd14:
    if (ctx->pc == 0x43FD14u) {
        ctx->pc = 0x43FD18u;
        goto label_43fd18;
    }
    ctx->pc = 0x43FD10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x43FD18u: goto label_43fd18;
            case 0x43FD78u: goto label_43fd78;
            case 0x43FD9Cu: goto label_43fd9c;
            case 0x43FDC0u: goto label_43fdc0;
            case 0x43FE20u: goto label_43fe20;
            case 0x43FE44u: goto label_43fe44;
            case 0x43FEA4u: goto label_43fea4;
            case 0x43FEC0u: goto label_43fec0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x43FD18u;
label_43fd18:
    // 0x43fd18: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x43fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_43fd1c:
    // 0x43fd1c: 0x3c027800  lui         $v0, 0x7800
    ctx->pc = 0x43fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30720 << 16));
label_43fd20:
    // 0x43fd20: 0x344600ff  ori         $a2, $v0, 0xFF
    ctx->pc = 0x43fd20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_43fd24:
    // 0x43fd24: 0x2407005b  addiu       $a3, $zero, 0x5B
    ctx->pc = 0x43fd24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_43fd28:
    // 0x43fd28: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x43fd28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43fd2c:
    // 0x43fd2c: 0xc10ffb4  jal         func_43FED0
label_43fd30:
    if (ctx->pc == 0x43FD30u) {
        ctx->pc = 0x43FD30u;
            // 0x43fd30: 0x2465ffa2  addiu       $a1, $v1, -0x5E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
        ctx->pc = 0x43FD34u;
        goto label_43fd34;
    }
    ctx->pc = 0x43FD2Cu;
    SET_GPR_U32(ctx, 31, 0x43FD34u);
    ctx->pc = 0x43FD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FD2Cu;
            // 0x43fd30: 0x2465ffa2  addiu       $a1, $v1, -0x5E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43FED0u;
    if (runtime->hasFunction(0x43FED0u)) {
        auto targetFn = runtime->lookupFunction(0x43FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FD34u; }
        if (ctx->pc != 0x43FD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043FED0_0x43fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FD34u; }
        if (ctx->pc != 0x43FD34u) { return; }
    }
    ctx->pc = 0x43FD34u;
label_43fd34:
    // 0x43fd34: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x43fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_43fd38:
    // 0x43fd38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43fd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43fd3c:
    // 0x43fd3c: 0x92080062  lbu         $t0, 0x62($s0)
    ctx->pc = 0x43fd3cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
label_43fd40:
    // 0x43fd40: 0x240678ff  addiu       $a2, $zero, 0x78FF
    ctx->pc = 0x43fd40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30975));
label_43fd44:
    // 0x43fd44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x43fd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43fd48:
    // 0x43fd48: 0xc10ffb4  jal         func_43FED0
label_43fd4c:
    if (ctx->pc == 0x43FD4Cu) {
        ctx->pc = 0x43FD4Cu;
            // 0x43fd4c: 0x2445003a  addiu       $a1, $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
        ctx->pc = 0x43FD50u;
        goto label_43fd50;
    }
    ctx->pc = 0x43FD48u;
    SET_GPR_U32(ctx, 31, 0x43FD50u);
    ctx->pc = 0x43FD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FD48u;
            // 0x43fd4c: 0x2445003a  addiu       $a1, $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43FED0u;
    if (runtime->hasFunction(0x43FED0u)) {
        auto targetFn = runtime->lookupFunction(0x43FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FD50u; }
        if (ctx->pc != 0x43FD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043FED0_0x43fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FD50u; }
        if (ctx->pc != 0x43FD50u) { return; }
    }
    ctx->pc = 0x43FD50u;
label_43fd50:
    // 0x43fd50: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x43fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_43fd54:
    // 0x43fd54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43fd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43fd58:
    // 0x43fd58: 0x92020062  lbu         $v0, 0x62($s0)
    ctx->pc = 0x43fd58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
label_43fd5c:
    // 0x43fd5c: 0x240678ff  addiu       $a2, $zero, 0x78FF
    ctx->pc = 0x43fd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30975));
label_43fd60:
    // 0x43fd60: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x43fd60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43fd64:
    // 0x43fd64: 0x2465006e  addiu       $a1, $v1, 0x6E
    ctx->pc = 0x43fd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
label_43fd68:
    // 0x43fd68: 0xc10ffb4  jal         func_43FED0
label_43fd6c:
    if (ctx->pc == 0x43FD6Cu) {
        ctx->pc = 0x43FD6Cu;
            // 0x43fd6c: 0x38480001  xori        $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->pc = 0x43FD70u;
        goto label_43fd70;
    }
    ctx->pc = 0x43FD68u;
    SET_GPR_U32(ctx, 31, 0x43FD70u);
    ctx->pc = 0x43FD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FD68u;
            // 0x43fd6c: 0x38480001  xori        $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x43FED0u;
    if (runtime->hasFunction(0x43FED0u)) {
        auto targetFn = runtime->lookupFunction(0x43FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FD70u; }
        if (ctx->pc != 0x43FD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043FED0_0x43fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FD70u; }
        if (ctx->pc != 0x43FD70u) { return; }
    }
    ctx->pc = 0x43FD70u;
label_43fd70:
    // 0x43fd70: 0x10000054  b           . + 4 + (0x54 << 2)
label_43fd74:
    if (ctx->pc == 0x43FD74u) {
        ctx->pc = 0x43FD74u;
            // 0x43fd74: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x43FD78u;
        goto label_43fd78;
    }
    ctx->pc = 0x43FD70u;
    {
        const bool branch_taken_0x43fd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43FD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43FD70u;
            // 0x43fd74: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43fd70) {
            ctx->pc = 0x43FEC4u;
            goto label_43fec4;
        }
    }
    ctx->pc = 0x43FD78u;
label_43fd78:
    // 0x43fd78: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x43fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_43fd7c:
    // 0x43fd7c: 0x3c027800  lui         $v0, 0x7800
    ctx->pc = 0x43fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30720 << 16));
label_43fd80:
    // 0x43fd80: 0x344600ff  ori         $a2, $v0, 0xFF
    ctx->pc = 0x43fd80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_43fd84:
    // 0x43fd84: 0x2407005d  addiu       $a3, $zero, 0x5D
    ctx->pc = 0x43fd84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
label_43fd88:
    // 0x43fd88: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x43fd88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43fd8c:
    // 0x43fd8c: 0xc10ffb4  jal         func_43FED0
label_43fd90:
    if (ctx->pc == 0x43FD90u) {
        ctx->pc = 0x43FD90u;
            // 0x43fd90: 0x2465ffa2  addiu       $a1, $v1, -0x5E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
        ctx->pc = 0x43FD94u;
        goto label_43fd94;
    }
    ctx->pc = 0x43FD8Cu;
    SET_GPR_U32(ctx, 31, 0x43FD94u);
    ctx->pc = 0x43FD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FD8Cu;
            // 0x43fd90: 0x2465ffa2  addiu       $a1, $v1, -0x5E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43FED0u;
    if (runtime->hasFunction(0x43FED0u)) {
        auto targetFn = runtime->lookupFunction(0x43FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FD94u; }
        if (ctx->pc != 0x43FD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043FED0_0x43fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FD94u; }
        if (ctx->pc != 0x43FD94u) { return; }
    }
    ctx->pc = 0x43FD94u;
label_43fd94:
    // 0x43fd94: 0x1000004a  b           . + 4 + (0x4A << 2)
label_43fd98:
    if (ctx->pc == 0x43FD98u) {
        ctx->pc = 0x43FD9Cu;
        goto label_43fd9c;
    }
    ctx->pc = 0x43FD94u;
    {
        const bool branch_taken_0x43fd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43fd94) {
            ctx->pc = 0x43FEC0u;
            goto label_43fec0;
        }
    }
    ctx->pc = 0x43FD9Cu;
label_43fd9c:
    // 0x43fd9c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x43fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_43fda0:
    // 0x43fda0: 0x3c027800  lui         $v0, 0x7800
    ctx->pc = 0x43fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30720 << 16));
label_43fda4:
    // 0x43fda4: 0x344600ff  ori         $a2, $v0, 0xFF
    ctx->pc = 0x43fda4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_43fda8:
    // 0x43fda8: 0x2407005c  addiu       $a3, $zero, 0x5C
    ctx->pc = 0x43fda8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_43fdac:
    // 0x43fdac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x43fdacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43fdb0:
    // 0x43fdb0: 0xc10ffb4  jal         func_43FED0
label_43fdb4:
    if (ctx->pc == 0x43FDB4u) {
        ctx->pc = 0x43FDB4u;
            // 0x43fdb4: 0x2465ffa2  addiu       $a1, $v1, -0x5E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
        ctx->pc = 0x43FDB8u;
        goto label_43fdb8;
    }
    ctx->pc = 0x43FDB0u;
    SET_GPR_U32(ctx, 31, 0x43FDB8u);
    ctx->pc = 0x43FDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FDB0u;
            // 0x43fdb4: 0x2465ffa2  addiu       $a1, $v1, -0x5E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43FED0u;
    if (runtime->hasFunction(0x43FED0u)) {
        auto targetFn = runtime->lookupFunction(0x43FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FDB8u; }
        if (ctx->pc != 0x43FDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043FED0_0x43fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FDB8u; }
        if (ctx->pc != 0x43FDB8u) { return; }
    }
    ctx->pc = 0x43FDB8u;
label_43fdb8:
    // 0x43fdb8: 0x10000041  b           . + 4 + (0x41 << 2)
label_43fdbc:
    if (ctx->pc == 0x43FDBCu) {
        ctx->pc = 0x43FDC0u;
        goto label_43fdc0;
    }
    ctx->pc = 0x43FDB8u;
    {
        const bool branch_taken_0x43fdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43fdb8) {
            ctx->pc = 0x43FEC0u;
            goto label_43fec0;
        }
    }
    ctx->pc = 0x43FDC0u;
label_43fdc0:
    // 0x43fdc0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x43fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_43fdc4:
    // 0x43fdc4: 0x3c027800  lui         $v0, 0x7800
    ctx->pc = 0x43fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30720 << 16));
label_43fdc8:
    // 0x43fdc8: 0x344600ff  ori         $a2, $v0, 0xFF
    ctx->pc = 0x43fdc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_43fdcc:
    // 0x43fdcc: 0x24070069  addiu       $a3, $zero, 0x69
    ctx->pc = 0x43fdccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_43fdd0:
    // 0x43fdd0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x43fdd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43fdd4:
    // 0x43fdd4: 0xc10ffb4  jal         func_43FED0
label_43fdd8:
    if (ctx->pc == 0x43FDD8u) {
        ctx->pc = 0x43FDD8u;
            // 0x43fdd8: 0x2465ffa2  addiu       $a1, $v1, -0x5E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
        ctx->pc = 0x43FDDCu;
        goto label_43fddc;
    }
    ctx->pc = 0x43FDD4u;
    SET_GPR_U32(ctx, 31, 0x43FDDCu);
    ctx->pc = 0x43FDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FDD4u;
            // 0x43fdd8: 0x2465ffa2  addiu       $a1, $v1, -0x5E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967202));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43FED0u;
    if (runtime->hasFunction(0x43FED0u)) {
        auto targetFn = runtime->lookupFunction(0x43FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FDDCu; }
        if (ctx->pc != 0x43FDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043FED0_0x43fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FDDCu; }
        if (ctx->pc != 0x43FDDCu) { return; }
    }
    ctx->pc = 0x43FDDCu;
label_43fddc:
    // 0x43fddc: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x43fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_43fde0:
    // 0x43fde0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43fde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43fde4:
    // 0x43fde4: 0x92080062  lbu         $t0, 0x62($s0)
    ctx->pc = 0x43fde4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
label_43fde8:
    // 0x43fde8: 0x240678ff  addiu       $a2, $zero, 0x78FF
    ctx->pc = 0x43fde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30975));
label_43fdec:
    // 0x43fdec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x43fdecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43fdf0:
    // 0x43fdf0: 0xc10ffb4  jal         func_43FED0
label_43fdf4:
    if (ctx->pc == 0x43FDF4u) {
        ctx->pc = 0x43FDF4u;
            // 0x43fdf4: 0x2445003a  addiu       $a1, $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
        ctx->pc = 0x43FDF8u;
        goto label_43fdf8;
    }
    ctx->pc = 0x43FDF0u;
    SET_GPR_U32(ctx, 31, 0x43FDF8u);
    ctx->pc = 0x43FDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FDF0u;
            // 0x43fdf4: 0x2445003a  addiu       $a1, $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43FED0u;
    if (runtime->hasFunction(0x43FED0u)) {
        auto targetFn = runtime->lookupFunction(0x43FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FDF8u; }
        if (ctx->pc != 0x43FDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043FED0_0x43fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FDF8u; }
        if (ctx->pc != 0x43FDF8u) { return; }
    }
    ctx->pc = 0x43FDF8u;
label_43fdf8:
    // 0x43fdf8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x43fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_43fdfc:
    // 0x43fdfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43fdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43fe00:
    // 0x43fe00: 0x92020062  lbu         $v0, 0x62($s0)
    ctx->pc = 0x43fe00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
label_43fe04:
    // 0x43fe04: 0x240678ff  addiu       $a2, $zero, 0x78FF
    ctx->pc = 0x43fe04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30975));
label_43fe08:
    // 0x43fe08: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x43fe08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43fe0c:
    // 0x43fe0c: 0x2465006e  addiu       $a1, $v1, 0x6E
    ctx->pc = 0x43fe0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
label_43fe10:
    // 0x43fe10: 0xc10ffb4  jal         func_43FED0
label_43fe14:
    if (ctx->pc == 0x43FE14u) {
        ctx->pc = 0x43FE14u;
            // 0x43fe14: 0x38480001  xori        $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->pc = 0x43FE18u;
        goto label_43fe18;
    }
    ctx->pc = 0x43FE10u;
    SET_GPR_U32(ctx, 31, 0x43FE18u);
    ctx->pc = 0x43FE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FE10u;
            // 0x43fe14: 0x38480001  xori        $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x43FED0u;
    if (runtime->hasFunction(0x43FED0u)) {
        auto targetFn = runtime->lookupFunction(0x43FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FE18u; }
        if (ctx->pc != 0x43FE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043FED0_0x43fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FE18u; }
        if (ctx->pc != 0x43FE18u) { return; }
    }
    ctx->pc = 0x43FE18u;
label_43fe18:
    // 0x43fe18: 0x10000029  b           . + 4 + (0x29 << 2)
label_43fe1c:
    if (ctx->pc == 0x43FE1Cu) {
        ctx->pc = 0x43FE20u;
        goto label_43fe20;
    }
    ctx->pc = 0x43FE18u;
    {
        const bool branch_taken_0x43fe18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43fe18) {
            ctx->pc = 0x43FEC0u;
            goto label_43fec0;
        }
    }
    ctx->pc = 0x43FE20u;
label_43fe20:
    // 0x43fe20: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x43fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_43fe24:
    // 0x43fe24: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x43fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
label_43fe28:
    // 0x43fe28: 0x344600ff  ori         $a2, $v0, 0xFF
    ctx->pc = 0x43fe28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_43fe2c:
    // 0x43fe2c: 0x2407006b  addiu       $a3, $zero, 0x6B
    ctx->pc = 0x43fe2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_43fe30:
    // 0x43fe30: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x43fe30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43fe34:
    // 0x43fe34: 0xc10ffb4  jal         func_43FED0
label_43fe38:
    if (ctx->pc == 0x43FE38u) {
        ctx->pc = 0x43FE38u;
            // 0x43fe38: 0x2465fffc  addiu       $a1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->pc = 0x43FE3Cu;
        goto label_43fe3c;
    }
    ctx->pc = 0x43FE34u;
    SET_GPR_U32(ctx, 31, 0x43FE3Cu);
    ctx->pc = 0x43FE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FE34u;
            // 0x43fe38: 0x2465fffc  addiu       $a1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43FED0u;
    if (runtime->hasFunction(0x43FED0u)) {
        auto targetFn = runtime->lookupFunction(0x43FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FE3Cu; }
        if (ctx->pc != 0x43FE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043FED0_0x43fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FE3Cu; }
        if (ctx->pc != 0x43FE3Cu) { return; }
    }
    ctx->pc = 0x43FE3Cu;
label_43fe3c:
    // 0x43fe3c: 0x10000020  b           . + 4 + (0x20 << 2)
label_43fe40:
    if (ctx->pc == 0x43FE40u) {
        ctx->pc = 0x43FE44u;
        goto label_43fe44;
    }
    ctx->pc = 0x43FE3Cu;
    {
        const bool branch_taken_0x43fe3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43fe3c) {
            ctx->pc = 0x43FEC0u;
            goto label_43fec0;
        }
    }
    ctx->pc = 0x43FE44u;
label_43fe44:
    // 0x43fe44: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x43fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_43fe48:
    // 0x43fe48: 0x3c027800  lui         $v0, 0x7800
    ctx->pc = 0x43fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30720 << 16));
label_43fe4c:
    // 0x43fe4c: 0x344600ff  ori         $a2, $v0, 0xFF
    ctx->pc = 0x43fe4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_43fe50:
    // 0x43fe50: 0x2407006a  addiu       $a3, $zero, 0x6A
    ctx->pc = 0x43fe50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_43fe54:
    // 0x43fe54: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x43fe54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43fe58:
    // 0x43fe58: 0xc10ffb4  jal         func_43FED0
label_43fe5c:
    if (ctx->pc == 0x43FE5Cu) {
        ctx->pc = 0x43FE5Cu;
            // 0x43fe5c: 0x2465ff84  addiu       $a1, $v1, -0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967172));
        ctx->pc = 0x43FE60u;
        goto label_43fe60;
    }
    ctx->pc = 0x43FE58u;
    SET_GPR_U32(ctx, 31, 0x43FE60u);
    ctx->pc = 0x43FE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FE58u;
            // 0x43fe5c: 0x2465ff84  addiu       $a1, $v1, -0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43FED0u;
    if (runtime->hasFunction(0x43FED0u)) {
        auto targetFn = runtime->lookupFunction(0x43FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FE60u; }
        if (ctx->pc != 0x43FE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043FED0_0x43fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FE60u; }
        if (ctx->pc != 0x43FE60u) { return; }
    }
    ctx->pc = 0x43FE60u;
label_43fe60:
    // 0x43fe60: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x43fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_43fe64:
    // 0x43fe64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43fe64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43fe68:
    // 0x43fe68: 0x92080062  lbu         $t0, 0x62($s0)
    ctx->pc = 0x43fe68u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
label_43fe6c:
    // 0x43fe6c: 0x240678ff  addiu       $a2, $zero, 0x78FF
    ctx->pc = 0x43fe6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30975));
label_43fe70:
    // 0x43fe70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x43fe70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43fe74:
    // 0x43fe74: 0xc10ffb4  jal         func_43FED0
label_43fe78:
    if (ctx->pc == 0x43FE78u) {
        ctx->pc = 0x43FE78u;
            // 0x43fe78: 0x2445003a  addiu       $a1, $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
        ctx->pc = 0x43FE7Cu;
        goto label_43fe7c;
    }
    ctx->pc = 0x43FE74u;
    SET_GPR_U32(ctx, 31, 0x43FE7Cu);
    ctx->pc = 0x43FE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FE74u;
            // 0x43fe78: 0x2445003a  addiu       $a1, $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43FED0u;
    if (runtime->hasFunction(0x43FED0u)) {
        auto targetFn = runtime->lookupFunction(0x43FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FE7Cu; }
        if (ctx->pc != 0x43FE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043FED0_0x43fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FE7Cu; }
        if (ctx->pc != 0x43FE7Cu) { return; }
    }
    ctx->pc = 0x43FE7Cu;
label_43fe7c:
    // 0x43fe7c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x43fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_43fe80:
    // 0x43fe80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43fe80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43fe84:
    // 0x43fe84: 0x92020062  lbu         $v0, 0x62($s0)
    ctx->pc = 0x43fe84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
label_43fe88:
    // 0x43fe88: 0x240678ff  addiu       $a2, $zero, 0x78FF
    ctx->pc = 0x43fe88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30975));
label_43fe8c:
    // 0x43fe8c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x43fe8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43fe90:
    // 0x43fe90: 0x2465006e  addiu       $a1, $v1, 0x6E
    ctx->pc = 0x43fe90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 110));
label_43fe94:
    // 0x43fe94: 0xc10ffb4  jal         func_43FED0
label_43fe98:
    if (ctx->pc == 0x43FE98u) {
        ctx->pc = 0x43FE98u;
            // 0x43fe98: 0x38480001  xori        $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->pc = 0x43FE9Cu;
        goto label_43fe9c;
    }
    ctx->pc = 0x43FE94u;
    SET_GPR_U32(ctx, 31, 0x43FE9Cu);
    ctx->pc = 0x43FE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FE94u;
            // 0x43fe98: 0x38480001  xori        $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x43FED0u;
    if (runtime->hasFunction(0x43FED0u)) {
        auto targetFn = runtime->lookupFunction(0x43FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FE9Cu; }
        if (ctx->pc != 0x43FE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043FED0_0x43fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FE9Cu; }
        if (ctx->pc != 0x43FE9Cu) { return; }
    }
    ctx->pc = 0x43FE9Cu;
label_43fe9c:
    // 0x43fe9c: 0x10000008  b           . + 4 + (0x8 << 2)
label_43fea0:
    if (ctx->pc == 0x43FEA0u) {
        ctx->pc = 0x43FEA4u;
        goto label_43fea4;
    }
    ctx->pc = 0x43FE9Cu;
    {
        const bool branch_taken_0x43fe9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43fe9c) {
            ctx->pc = 0x43FEC0u;
            goto label_43fec0;
        }
    }
    ctx->pc = 0x43FEA4u;
label_43fea4:
    // 0x43fea4: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x43fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_43fea8:
    // 0x43fea8: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x43fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
label_43feac:
    // 0x43feac: 0x344600ff  ori         $a2, $v0, 0xFF
    ctx->pc = 0x43feacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_43feb0:
    // 0x43feb0: 0x24070065  addiu       $a3, $zero, 0x65
    ctx->pc = 0x43feb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_43feb4:
    // 0x43feb4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x43feb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43feb8:
    // 0x43feb8: 0xc10ffb4  jal         func_43FED0
label_43febc:
    if (ctx->pc == 0x43FEBCu) {
        ctx->pc = 0x43FEBCu;
            // 0x43febc: 0x2465fffc  addiu       $a1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->pc = 0x43FEC0u;
        goto label_43fec0;
    }
    ctx->pc = 0x43FEB8u;
    SET_GPR_U32(ctx, 31, 0x43FEC0u);
    ctx->pc = 0x43FEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43FEB8u;
            // 0x43febc: 0x2465fffc  addiu       $a1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43FED0u;
    if (runtime->hasFunction(0x43FED0u)) {
        auto targetFn = runtime->lookupFunction(0x43FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FEC0u; }
        if (ctx->pc != 0x43FEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043FED0_0x43fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43FEC0u; }
        if (ctx->pc != 0x43FEC0u) { return; }
    }
    ctx->pc = 0x43FEC0u;
label_43fec0:
    // 0x43fec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43fec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43fec4:
    // 0x43fec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43fec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43fec8:
    // 0x43fec8: 0x3e00008  jr          $ra
label_43fecc:
    if (ctx->pc == 0x43FECCu) {
        ctx->pc = 0x43FECCu;
            // 0x43fecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43FED0u;
        goto label_fallthrough_0x43fec8;
    }
    ctx->pc = 0x43FEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43FECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43FEC8u;
            // 0x43fecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x43fec8:
    ctx->pc = 0x43FED0u;
}
