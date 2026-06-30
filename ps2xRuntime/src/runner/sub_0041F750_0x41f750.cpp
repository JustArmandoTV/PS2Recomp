#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041F750
// Address: 0x41f750 - 0x420980
void sub_0041F750_0x41f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F750_0x41f750");
#endif

    switch (ctx->pc) {
        case 0x41f750u: goto label_41f750;
        case 0x41f754u: goto label_41f754;
        case 0x41f758u: goto label_41f758;
        case 0x41f75cu: goto label_41f75c;
        case 0x41f760u: goto label_41f760;
        case 0x41f764u: goto label_41f764;
        case 0x41f768u: goto label_41f768;
        case 0x41f76cu: goto label_41f76c;
        case 0x41f770u: goto label_41f770;
        case 0x41f774u: goto label_41f774;
        case 0x41f778u: goto label_41f778;
        case 0x41f77cu: goto label_41f77c;
        case 0x41f780u: goto label_41f780;
        case 0x41f784u: goto label_41f784;
        case 0x41f788u: goto label_41f788;
        case 0x41f78cu: goto label_41f78c;
        case 0x41f790u: goto label_41f790;
        case 0x41f794u: goto label_41f794;
        case 0x41f798u: goto label_41f798;
        case 0x41f79cu: goto label_41f79c;
        case 0x41f7a0u: goto label_41f7a0;
        case 0x41f7a4u: goto label_41f7a4;
        case 0x41f7a8u: goto label_41f7a8;
        case 0x41f7acu: goto label_41f7ac;
        case 0x41f7b0u: goto label_41f7b0;
        case 0x41f7b4u: goto label_41f7b4;
        case 0x41f7b8u: goto label_41f7b8;
        case 0x41f7bcu: goto label_41f7bc;
        case 0x41f7c0u: goto label_41f7c0;
        case 0x41f7c4u: goto label_41f7c4;
        case 0x41f7c8u: goto label_41f7c8;
        case 0x41f7ccu: goto label_41f7cc;
        case 0x41f7d0u: goto label_41f7d0;
        case 0x41f7d4u: goto label_41f7d4;
        case 0x41f7d8u: goto label_41f7d8;
        case 0x41f7dcu: goto label_41f7dc;
        case 0x41f7e0u: goto label_41f7e0;
        case 0x41f7e4u: goto label_41f7e4;
        case 0x41f7e8u: goto label_41f7e8;
        case 0x41f7ecu: goto label_41f7ec;
        case 0x41f7f0u: goto label_41f7f0;
        case 0x41f7f4u: goto label_41f7f4;
        case 0x41f7f8u: goto label_41f7f8;
        case 0x41f7fcu: goto label_41f7fc;
        case 0x41f800u: goto label_41f800;
        case 0x41f804u: goto label_41f804;
        case 0x41f808u: goto label_41f808;
        case 0x41f80cu: goto label_41f80c;
        case 0x41f810u: goto label_41f810;
        case 0x41f814u: goto label_41f814;
        case 0x41f818u: goto label_41f818;
        case 0x41f81cu: goto label_41f81c;
        case 0x41f820u: goto label_41f820;
        case 0x41f824u: goto label_41f824;
        case 0x41f828u: goto label_41f828;
        case 0x41f82cu: goto label_41f82c;
        case 0x41f830u: goto label_41f830;
        case 0x41f834u: goto label_41f834;
        case 0x41f838u: goto label_41f838;
        case 0x41f83cu: goto label_41f83c;
        case 0x41f840u: goto label_41f840;
        case 0x41f844u: goto label_41f844;
        case 0x41f848u: goto label_41f848;
        case 0x41f84cu: goto label_41f84c;
        case 0x41f850u: goto label_41f850;
        case 0x41f854u: goto label_41f854;
        case 0x41f858u: goto label_41f858;
        case 0x41f85cu: goto label_41f85c;
        case 0x41f860u: goto label_41f860;
        case 0x41f864u: goto label_41f864;
        case 0x41f868u: goto label_41f868;
        case 0x41f86cu: goto label_41f86c;
        case 0x41f870u: goto label_41f870;
        case 0x41f874u: goto label_41f874;
        case 0x41f878u: goto label_41f878;
        case 0x41f87cu: goto label_41f87c;
        case 0x41f880u: goto label_41f880;
        case 0x41f884u: goto label_41f884;
        case 0x41f888u: goto label_41f888;
        case 0x41f88cu: goto label_41f88c;
        case 0x41f890u: goto label_41f890;
        case 0x41f894u: goto label_41f894;
        case 0x41f898u: goto label_41f898;
        case 0x41f89cu: goto label_41f89c;
        case 0x41f8a0u: goto label_41f8a0;
        case 0x41f8a4u: goto label_41f8a4;
        case 0x41f8a8u: goto label_41f8a8;
        case 0x41f8acu: goto label_41f8ac;
        case 0x41f8b0u: goto label_41f8b0;
        case 0x41f8b4u: goto label_41f8b4;
        case 0x41f8b8u: goto label_41f8b8;
        case 0x41f8bcu: goto label_41f8bc;
        case 0x41f8c0u: goto label_41f8c0;
        case 0x41f8c4u: goto label_41f8c4;
        case 0x41f8c8u: goto label_41f8c8;
        case 0x41f8ccu: goto label_41f8cc;
        case 0x41f8d0u: goto label_41f8d0;
        case 0x41f8d4u: goto label_41f8d4;
        case 0x41f8d8u: goto label_41f8d8;
        case 0x41f8dcu: goto label_41f8dc;
        case 0x41f8e0u: goto label_41f8e0;
        case 0x41f8e4u: goto label_41f8e4;
        case 0x41f8e8u: goto label_41f8e8;
        case 0x41f8ecu: goto label_41f8ec;
        case 0x41f8f0u: goto label_41f8f0;
        case 0x41f8f4u: goto label_41f8f4;
        case 0x41f8f8u: goto label_41f8f8;
        case 0x41f8fcu: goto label_41f8fc;
        case 0x41f900u: goto label_41f900;
        case 0x41f904u: goto label_41f904;
        case 0x41f908u: goto label_41f908;
        case 0x41f90cu: goto label_41f90c;
        case 0x41f910u: goto label_41f910;
        case 0x41f914u: goto label_41f914;
        case 0x41f918u: goto label_41f918;
        case 0x41f91cu: goto label_41f91c;
        case 0x41f920u: goto label_41f920;
        case 0x41f924u: goto label_41f924;
        case 0x41f928u: goto label_41f928;
        case 0x41f92cu: goto label_41f92c;
        case 0x41f930u: goto label_41f930;
        case 0x41f934u: goto label_41f934;
        case 0x41f938u: goto label_41f938;
        case 0x41f93cu: goto label_41f93c;
        case 0x41f940u: goto label_41f940;
        case 0x41f944u: goto label_41f944;
        case 0x41f948u: goto label_41f948;
        case 0x41f94cu: goto label_41f94c;
        case 0x41f950u: goto label_41f950;
        case 0x41f954u: goto label_41f954;
        case 0x41f958u: goto label_41f958;
        case 0x41f95cu: goto label_41f95c;
        case 0x41f960u: goto label_41f960;
        case 0x41f964u: goto label_41f964;
        case 0x41f968u: goto label_41f968;
        case 0x41f96cu: goto label_41f96c;
        case 0x41f970u: goto label_41f970;
        case 0x41f974u: goto label_41f974;
        case 0x41f978u: goto label_41f978;
        case 0x41f97cu: goto label_41f97c;
        case 0x41f980u: goto label_41f980;
        case 0x41f984u: goto label_41f984;
        case 0x41f988u: goto label_41f988;
        case 0x41f98cu: goto label_41f98c;
        case 0x41f990u: goto label_41f990;
        case 0x41f994u: goto label_41f994;
        case 0x41f998u: goto label_41f998;
        case 0x41f99cu: goto label_41f99c;
        case 0x41f9a0u: goto label_41f9a0;
        case 0x41f9a4u: goto label_41f9a4;
        case 0x41f9a8u: goto label_41f9a8;
        case 0x41f9acu: goto label_41f9ac;
        case 0x41f9b0u: goto label_41f9b0;
        case 0x41f9b4u: goto label_41f9b4;
        case 0x41f9b8u: goto label_41f9b8;
        case 0x41f9bcu: goto label_41f9bc;
        case 0x41f9c0u: goto label_41f9c0;
        case 0x41f9c4u: goto label_41f9c4;
        case 0x41f9c8u: goto label_41f9c8;
        case 0x41f9ccu: goto label_41f9cc;
        case 0x41f9d0u: goto label_41f9d0;
        case 0x41f9d4u: goto label_41f9d4;
        case 0x41f9d8u: goto label_41f9d8;
        case 0x41f9dcu: goto label_41f9dc;
        case 0x41f9e0u: goto label_41f9e0;
        case 0x41f9e4u: goto label_41f9e4;
        case 0x41f9e8u: goto label_41f9e8;
        case 0x41f9ecu: goto label_41f9ec;
        case 0x41f9f0u: goto label_41f9f0;
        case 0x41f9f4u: goto label_41f9f4;
        case 0x41f9f8u: goto label_41f9f8;
        case 0x41f9fcu: goto label_41f9fc;
        case 0x41fa00u: goto label_41fa00;
        case 0x41fa04u: goto label_41fa04;
        case 0x41fa08u: goto label_41fa08;
        case 0x41fa0cu: goto label_41fa0c;
        case 0x41fa10u: goto label_41fa10;
        case 0x41fa14u: goto label_41fa14;
        case 0x41fa18u: goto label_41fa18;
        case 0x41fa1cu: goto label_41fa1c;
        case 0x41fa20u: goto label_41fa20;
        case 0x41fa24u: goto label_41fa24;
        case 0x41fa28u: goto label_41fa28;
        case 0x41fa2cu: goto label_41fa2c;
        case 0x41fa30u: goto label_41fa30;
        case 0x41fa34u: goto label_41fa34;
        case 0x41fa38u: goto label_41fa38;
        case 0x41fa3cu: goto label_41fa3c;
        case 0x41fa40u: goto label_41fa40;
        case 0x41fa44u: goto label_41fa44;
        case 0x41fa48u: goto label_41fa48;
        case 0x41fa4cu: goto label_41fa4c;
        case 0x41fa50u: goto label_41fa50;
        case 0x41fa54u: goto label_41fa54;
        case 0x41fa58u: goto label_41fa58;
        case 0x41fa5cu: goto label_41fa5c;
        case 0x41fa60u: goto label_41fa60;
        case 0x41fa64u: goto label_41fa64;
        case 0x41fa68u: goto label_41fa68;
        case 0x41fa6cu: goto label_41fa6c;
        case 0x41fa70u: goto label_41fa70;
        case 0x41fa74u: goto label_41fa74;
        case 0x41fa78u: goto label_41fa78;
        case 0x41fa7cu: goto label_41fa7c;
        case 0x41fa80u: goto label_41fa80;
        case 0x41fa84u: goto label_41fa84;
        case 0x41fa88u: goto label_41fa88;
        case 0x41fa8cu: goto label_41fa8c;
        case 0x41fa90u: goto label_41fa90;
        case 0x41fa94u: goto label_41fa94;
        case 0x41fa98u: goto label_41fa98;
        case 0x41fa9cu: goto label_41fa9c;
        case 0x41faa0u: goto label_41faa0;
        case 0x41faa4u: goto label_41faa4;
        case 0x41faa8u: goto label_41faa8;
        case 0x41faacu: goto label_41faac;
        case 0x41fab0u: goto label_41fab0;
        case 0x41fab4u: goto label_41fab4;
        case 0x41fab8u: goto label_41fab8;
        case 0x41fabcu: goto label_41fabc;
        case 0x41fac0u: goto label_41fac0;
        case 0x41fac4u: goto label_41fac4;
        case 0x41fac8u: goto label_41fac8;
        case 0x41faccu: goto label_41facc;
        case 0x41fad0u: goto label_41fad0;
        case 0x41fad4u: goto label_41fad4;
        case 0x41fad8u: goto label_41fad8;
        case 0x41fadcu: goto label_41fadc;
        case 0x41fae0u: goto label_41fae0;
        case 0x41fae4u: goto label_41fae4;
        case 0x41fae8u: goto label_41fae8;
        case 0x41faecu: goto label_41faec;
        case 0x41faf0u: goto label_41faf0;
        case 0x41faf4u: goto label_41faf4;
        case 0x41faf8u: goto label_41faf8;
        case 0x41fafcu: goto label_41fafc;
        case 0x41fb00u: goto label_41fb00;
        case 0x41fb04u: goto label_41fb04;
        case 0x41fb08u: goto label_41fb08;
        case 0x41fb0cu: goto label_41fb0c;
        case 0x41fb10u: goto label_41fb10;
        case 0x41fb14u: goto label_41fb14;
        case 0x41fb18u: goto label_41fb18;
        case 0x41fb1cu: goto label_41fb1c;
        case 0x41fb20u: goto label_41fb20;
        case 0x41fb24u: goto label_41fb24;
        case 0x41fb28u: goto label_41fb28;
        case 0x41fb2cu: goto label_41fb2c;
        case 0x41fb30u: goto label_41fb30;
        case 0x41fb34u: goto label_41fb34;
        case 0x41fb38u: goto label_41fb38;
        case 0x41fb3cu: goto label_41fb3c;
        case 0x41fb40u: goto label_41fb40;
        case 0x41fb44u: goto label_41fb44;
        case 0x41fb48u: goto label_41fb48;
        case 0x41fb4cu: goto label_41fb4c;
        case 0x41fb50u: goto label_41fb50;
        case 0x41fb54u: goto label_41fb54;
        case 0x41fb58u: goto label_41fb58;
        case 0x41fb5cu: goto label_41fb5c;
        case 0x41fb60u: goto label_41fb60;
        case 0x41fb64u: goto label_41fb64;
        case 0x41fb68u: goto label_41fb68;
        case 0x41fb6cu: goto label_41fb6c;
        case 0x41fb70u: goto label_41fb70;
        case 0x41fb74u: goto label_41fb74;
        case 0x41fb78u: goto label_41fb78;
        case 0x41fb7cu: goto label_41fb7c;
        case 0x41fb80u: goto label_41fb80;
        case 0x41fb84u: goto label_41fb84;
        case 0x41fb88u: goto label_41fb88;
        case 0x41fb8cu: goto label_41fb8c;
        case 0x41fb90u: goto label_41fb90;
        case 0x41fb94u: goto label_41fb94;
        case 0x41fb98u: goto label_41fb98;
        case 0x41fb9cu: goto label_41fb9c;
        case 0x41fba0u: goto label_41fba0;
        case 0x41fba4u: goto label_41fba4;
        case 0x41fba8u: goto label_41fba8;
        case 0x41fbacu: goto label_41fbac;
        case 0x41fbb0u: goto label_41fbb0;
        case 0x41fbb4u: goto label_41fbb4;
        case 0x41fbb8u: goto label_41fbb8;
        case 0x41fbbcu: goto label_41fbbc;
        case 0x41fbc0u: goto label_41fbc0;
        case 0x41fbc4u: goto label_41fbc4;
        case 0x41fbc8u: goto label_41fbc8;
        case 0x41fbccu: goto label_41fbcc;
        case 0x41fbd0u: goto label_41fbd0;
        case 0x41fbd4u: goto label_41fbd4;
        case 0x41fbd8u: goto label_41fbd8;
        case 0x41fbdcu: goto label_41fbdc;
        case 0x41fbe0u: goto label_41fbe0;
        case 0x41fbe4u: goto label_41fbe4;
        case 0x41fbe8u: goto label_41fbe8;
        case 0x41fbecu: goto label_41fbec;
        case 0x41fbf0u: goto label_41fbf0;
        case 0x41fbf4u: goto label_41fbf4;
        case 0x41fbf8u: goto label_41fbf8;
        case 0x41fbfcu: goto label_41fbfc;
        case 0x41fc00u: goto label_41fc00;
        case 0x41fc04u: goto label_41fc04;
        case 0x41fc08u: goto label_41fc08;
        case 0x41fc0cu: goto label_41fc0c;
        case 0x41fc10u: goto label_41fc10;
        case 0x41fc14u: goto label_41fc14;
        case 0x41fc18u: goto label_41fc18;
        case 0x41fc1cu: goto label_41fc1c;
        case 0x41fc20u: goto label_41fc20;
        case 0x41fc24u: goto label_41fc24;
        case 0x41fc28u: goto label_41fc28;
        case 0x41fc2cu: goto label_41fc2c;
        case 0x41fc30u: goto label_41fc30;
        case 0x41fc34u: goto label_41fc34;
        case 0x41fc38u: goto label_41fc38;
        case 0x41fc3cu: goto label_41fc3c;
        case 0x41fc40u: goto label_41fc40;
        case 0x41fc44u: goto label_41fc44;
        case 0x41fc48u: goto label_41fc48;
        case 0x41fc4cu: goto label_41fc4c;
        case 0x41fc50u: goto label_41fc50;
        case 0x41fc54u: goto label_41fc54;
        case 0x41fc58u: goto label_41fc58;
        case 0x41fc5cu: goto label_41fc5c;
        case 0x41fc60u: goto label_41fc60;
        case 0x41fc64u: goto label_41fc64;
        case 0x41fc68u: goto label_41fc68;
        case 0x41fc6cu: goto label_41fc6c;
        case 0x41fc70u: goto label_41fc70;
        case 0x41fc74u: goto label_41fc74;
        case 0x41fc78u: goto label_41fc78;
        case 0x41fc7cu: goto label_41fc7c;
        case 0x41fc80u: goto label_41fc80;
        case 0x41fc84u: goto label_41fc84;
        case 0x41fc88u: goto label_41fc88;
        case 0x41fc8cu: goto label_41fc8c;
        case 0x41fc90u: goto label_41fc90;
        case 0x41fc94u: goto label_41fc94;
        case 0x41fc98u: goto label_41fc98;
        case 0x41fc9cu: goto label_41fc9c;
        case 0x41fca0u: goto label_41fca0;
        case 0x41fca4u: goto label_41fca4;
        case 0x41fca8u: goto label_41fca8;
        case 0x41fcacu: goto label_41fcac;
        case 0x41fcb0u: goto label_41fcb0;
        case 0x41fcb4u: goto label_41fcb4;
        case 0x41fcb8u: goto label_41fcb8;
        case 0x41fcbcu: goto label_41fcbc;
        case 0x41fcc0u: goto label_41fcc0;
        case 0x41fcc4u: goto label_41fcc4;
        case 0x41fcc8u: goto label_41fcc8;
        case 0x41fcccu: goto label_41fccc;
        case 0x41fcd0u: goto label_41fcd0;
        case 0x41fcd4u: goto label_41fcd4;
        case 0x41fcd8u: goto label_41fcd8;
        case 0x41fcdcu: goto label_41fcdc;
        case 0x41fce0u: goto label_41fce0;
        case 0x41fce4u: goto label_41fce4;
        case 0x41fce8u: goto label_41fce8;
        case 0x41fcecu: goto label_41fcec;
        case 0x41fcf0u: goto label_41fcf0;
        case 0x41fcf4u: goto label_41fcf4;
        case 0x41fcf8u: goto label_41fcf8;
        case 0x41fcfcu: goto label_41fcfc;
        case 0x41fd00u: goto label_41fd00;
        case 0x41fd04u: goto label_41fd04;
        case 0x41fd08u: goto label_41fd08;
        case 0x41fd0cu: goto label_41fd0c;
        case 0x41fd10u: goto label_41fd10;
        case 0x41fd14u: goto label_41fd14;
        case 0x41fd18u: goto label_41fd18;
        case 0x41fd1cu: goto label_41fd1c;
        case 0x41fd20u: goto label_41fd20;
        case 0x41fd24u: goto label_41fd24;
        case 0x41fd28u: goto label_41fd28;
        case 0x41fd2cu: goto label_41fd2c;
        case 0x41fd30u: goto label_41fd30;
        case 0x41fd34u: goto label_41fd34;
        case 0x41fd38u: goto label_41fd38;
        case 0x41fd3cu: goto label_41fd3c;
        case 0x41fd40u: goto label_41fd40;
        case 0x41fd44u: goto label_41fd44;
        case 0x41fd48u: goto label_41fd48;
        case 0x41fd4cu: goto label_41fd4c;
        case 0x41fd50u: goto label_41fd50;
        case 0x41fd54u: goto label_41fd54;
        case 0x41fd58u: goto label_41fd58;
        case 0x41fd5cu: goto label_41fd5c;
        case 0x41fd60u: goto label_41fd60;
        case 0x41fd64u: goto label_41fd64;
        case 0x41fd68u: goto label_41fd68;
        case 0x41fd6cu: goto label_41fd6c;
        case 0x41fd70u: goto label_41fd70;
        case 0x41fd74u: goto label_41fd74;
        case 0x41fd78u: goto label_41fd78;
        case 0x41fd7cu: goto label_41fd7c;
        case 0x41fd80u: goto label_41fd80;
        case 0x41fd84u: goto label_41fd84;
        case 0x41fd88u: goto label_41fd88;
        case 0x41fd8cu: goto label_41fd8c;
        case 0x41fd90u: goto label_41fd90;
        case 0x41fd94u: goto label_41fd94;
        case 0x41fd98u: goto label_41fd98;
        case 0x41fd9cu: goto label_41fd9c;
        case 0x41fda0u: goto label_41fda0;
        case 0x41fda4u: goto label_41fda4;
        case 0x41fda8u: goto label_41fda8;
        case 0x41fdacu: goto label_41fdac;
        case 0x41fdb0u: goto label_41fdb0;
        case 0x41fdb4u: goto label_41fdb4;
        case 0x41fdb8u: goto label_41fdb8;
        case 0x41fdbcu: goto label_41fdbc;
        case 0x41fdc0u: goto label_41fdc0;
        case 0x41fdc4u: goto label_41fdc4;
        case 0x41fdc8u: goto label_41fdc8;
        case 0x41fdccu: goto label_41fdcc;
        case 0x41fdd0u: goto label_41fdd0;
        case 0x41fdd4u: goto label_41fdd4;
        case 0x41fdd8u: goto label_41fdd8;
        case 0x41fddcu: goto label_41fddc;
        case 0x41fde0u: goto label_41fde0;
        case 0x41fde4u: goto label_41fde4;
        case 0x41fde8u: goto label_41fde8;
        case 0x41fdecu: goto label_41fdec;
        case 0x41fdf0u: goto label_41fdf0;
        case 0x41fdf4u: goto label_41fdf4;
        case 0x41fdf8u: goto label_41fdf8;
        case 0x41fdfcu: goto label_41fdfc;
        case 0x41fe00u: goto label_41fe00;
        case 0x41fe04u: goto label_41fe04;
        case 0x41fe08u: goto label_41fe08;
        case 0x41fe0cu: goto label_41fe0c;
        case 0x41fe10u: goto label_41fe10;
        case 0x41fe14u: goto label_41fe14;
        case 0x41fe18u: goto label_41fe18;
        case 0x41fe1cu: goto label_41fe1c;
        case 0x41fe20u: goto label_41fe20;
        case 0x41fe24u: goto label_41fe24;
        case 0x41fe28u: goto label_41fe28;
        case 0x41fe2cu: goto label_41fe2c;
        case 0x41fe30u: goto label_41fe30;
        case 0x41fe34u: goto label_41fe34;
        case 0x41fe38u: goto label_41fe38;
        case 0x41fe3cu: goto label_41fe3c;
        case 0x41fe40u: goto label_41fe40;
        case 0x41fe44u: goto label_41fe44;
        case 0x41fe48u: goto label_41fe48;
        case 0x41fe4cu: goto label_41fe4c;
        case 0x41fe50u: goto label_41fe50;
        case 0x41fe54u: goto label_41fe54;
        case 0x41fe58u: goto label_41fe58;
        case 0x41fe5cu: goto label_41fe5c;
        case 0x41fe60u: goto label_41fe60;
        case 0x41fe64u: goto label_41fe64;
        case 0x41fe68u: goto label_41fe68;
        case 0x41fe6cu: goto label_41fe6c;
        case 0x41fe70u: goto label_41fe70;
        case 0x41fe74u: goto label_41fe74;
        case 0x41fe78u: goto label_41fe78;
        case 0x41fe7cu: goto label_41fe7c;
        case 0x41fe80u: goto label_41fe80;
        case 0x41fe84u: goto label_41fe84;
        case 0x41fe88u: goto label_41fe88;
        case 0x41fe8cu: goto label_41fe8c;
        case 0x41fe90u: goto label_41fe90;
        case 0x41fe94u: goto label_41fe94;
        case 0x41fe98u: goto label_41fe98;
        case 0x41fe9cu: goto label_41fe9c;
        case 0x41fea0u: goto label_41fea0;
        case 0x41fea4u: goto label_41fea4;
        case 0x41fea8u: goto label_41fea8;
        case 0x41feacu: goto label_41feac;
        case 0x41feb0u: goto label_41feb0;
        case 0x41feb4u: goto label_41feb4;
        case 0x41feb8u: goto label_41feb8;
        case 0x41febcu: goto label_41febc;
        case 0x41fec0u: goto label_41fec0;
        case 0x41fec4u: goto label_41fec4;
        case 0x41fec8u: goto label_41fec8;
        case 0x41feccu: goto label_41fecc;
        case 0x41fed0u: goto label_41fed0;
        case 0x41fed4u: goto label_41fed4;
        case 0x41fed8u: goto label_41fed8;
        case 0x41fedcu: goto label_41fedc;
        case 0x41fee0u: goto label_41fee0;
        case 0x41fee4u: goto label_41fee4;
        case 0x41fee8u: goto label_41fee8;
        case 0x41feecu: goto label_41feec;
        case 0x41fef0u: goto label_41fef0;
        case 0x41fef4u: goto label_41fef4;
        case 0x41fef8u: goto label_41fef8;
        case 0x41fefcu: goto label_41fefc;
        case 0x41ff00u: goto label_41ff00;
        case 0x41ff04u: goto label_41ff04;
        case 0x41ff08u: goto label_41ff08;
        case 0x41ff0cu: goto label_41ff0c;
        case 0x41ff10u: goto label_41ff10;
        case 0x41ff14u: goto label_41ff14;
        case 0x41ff18u: goto label_41ff18;
        case 0x41ff1cu: goto label_41ff1c;
        case 0x41ff20u: goto label_41ff20;
        case 0x41ff24u: goto label_41ff24;
        case 0x41ff28u: goto label_41ff28;
        case 0x41ff2cu: goto label_41ff2c;
        case 0x41ff30u: goto label_41ff30;
        case 0x41ff34u: goto label_41ff34;
        case 0x41ff38u: goto label_41ff38;
        case 0x41ff3cu: goto label_41ff3c;
        case 0x41ff40u: goto label_41ff40;
        case 0x41ff44u: goto label_41ff44;
        case 0x41ff48u: goto label_41ff48;
        case 0x41ff4cu: goto label_41ff4c;
        case 0x41ff50u: goto label_41ff50;
        case 0x41ff54u: goto label_41ff54;
        case 0x41ff58u: goto label_41ff58;
        case 0x41ff5cu: goto label_41ff5c;
        case 0x41ff60u: goto label_41ff60;
        case 0x41ff64u: goto label_41ff64;
        case 0x41ff68u: goto label_41ff68;
        case 0x41ff6cu: goto label_41ff6c;
        case 0x41ff70u: goto label_41ff70;
        case 0x41ff74u: goto label_41ff74;
        case 0x41ff78u: goto label_41ff78;
        case 0x41ff7cu: goto label_41ff7c;
        case 0x41ff80u: goto label_41ff80;
        case 0x41ff84u: goto label_41ff84;
        case 0x41ff88u: goto label_41ff88;
        case 0x41ff8cu: goto label_41ff8c;
        case 0x41ff90u: goto label_41ff90;
        case 0x41ff94u: goto label_41ff94;
        case 0x41ff98u: goto label_41ff98;
        case 0x41ff9cu: goto label_41ff9c;
        case 0x41ffa0u: goto label_41ffa0;
        case 0x41ffa4u: goto label_41ffa4;
        case 0x41ffa8u: goto label_41ffa8;
        case 0x41ffacu: goto label_41ffac;
        case 0x41ffb0u: goto label_41ffb0;
        case 0x41ffb4u: goto label_41ffb4;
        case 0x41ffb8u: goto label_41ffb8;
        case 0x41ffbcu: goto label_41ffbc;
        case 0x41ffc0u: goto label_41ffc0;
        case 0x41ffc4u: goto label_41ffc4;
        case 0x41ffc8u: goto label_41ffc8;
        case 0x41ffccu: goto label_41ffcc;
        case 0x41ffd0u: goto label_41ffd0;
        case 0x41ffd4u: goto label_41ffd4;
        case 0x41ffd8u: goto label_41ffd8;
        case 0x41ffdcu: goto label_41ffdc;
        case 0x41ffe0u: goto label_41ffe0;
        case 0x41ffe4u: goto label_41ffe4;
        case 0x41ffe8u: goto label_41ffe8;
        case 0x41ffecu: goto label_41ffec;
        case 0x41fff0u: goto label_41fff0;
        case 0x41fff4u: goto label_41fff4;
        case 0x41fff8u: goto label_41fff8;
        case 0x41fffcu: goto label_41fffc;
        case 0x420000u: goto label_420000;
        case 0x420004u: goto label_420004;
        case 0x420008u: goto label_420008;
        case 0x42000cu: goto label_42000c;
        case 0x420010u: goto label_420010;
        case 0x420014u: goto label_420014;
        case 0x420018u: goto label_420018;
        case 0x42001cu: goto label_42001c;
        case 0x420020u: goto label_420020;
        case 0x420024u: goto label_420024;
        case 0x420028u: goto label_420028;
        case 0x42002cu: goto label_42002c;
        case 0x420030u: goto label_420030;
        case 0x420034u: goto label_420034;
        case 0x420038u: goto label_420038;
        case 0x42003cu: goto label_42003c;
        case 0x420040u: goto label_420040;
        case 0x420044u: goto label_420044;
        case 0x420048u: goto label_420048;
        case 0x42004cu: goto label_42004c;
        case 0x420050u: goto label_420050;
        case 0x420054u: goto label_420054;
        case 0x420058u: goto label_420058;
        case 0x42005cu: goto label_42005c;
        case 0x420060u: goto label_420060;
        case 0x420064u: goto label_420064;
        case 0x420068u: goto label_420068;
        case 0x42006cu: goto label_42006c;
        case 0x420070u: goto label_420070;
        case 0x420074u: goto label_420074;
        case 0x420078u: goto label_420078;
        case 0x42007cu: goto label_42007c;
        case 0x420080u: goto label_420080;
        case 0x420084u: goto label_420084;
        case 0x420088u: goto label_420088;
        case 0x42008cu: goto label_42008c;
        case 0x420090u: goto label_420090;
        case 0x420094u: goto label_420094;
        case 0x420098u: goto label_420098;
        case 0x42009cu: goto label_42009c;
        case 0x4200a0u: goto label_4200a0;
        case 0x4200a4u: goto label_4200a4;
        case 0x4200a8u: goto label_4200a8;
        case 0x4200acu: goto label_4200ac;
        case 0x4200b0u: goto label_4200b0;
        case 0x4200b4u: goto label_4200b4;
        case 0x4200b8u: goto label_4200b8;
        case 0x4200bcu: goto label_4200bc;
        case 0x4200c0u: goto label_4200c0;
        case 0x4200c4u: goto label_4200c4;
        case 0x4200c8u: goto label_4200c8;
        case 0x4200ccu: goto label_4200cc;
        case 0x4200d0u: goto label_4200d0;
        case 0x4200d4u: goto label_4200d4;
        case 0x4200d8u: goto label_4200d8;
        case 0x4200dcu: goto label_4200dc;
        case 0x4200e0u: goto label_4200e0;
        case 0x4200e4u: goto label_4200e4;
        case 0x4200e8u: goto label_4200e8;
        case 0x4200ecu: goto label_4200ec;
        case 0x4200f0u: goto label_4200f0;
        case 0x4200f4u: goto label_4200f4;
        case 0x4200f8u: goto label_4200f8;
        case 0x4200fcu: goto label_4200fc;
        case 0x420100u: goto label_420100;
        case 0x420104u: goto label_420104;
        case 0x420108u: goto label_420108;
        case 0x42010cu: goto label_42010c;
        case 0x420110u: goto label_420110;
        case 0x420114u: goto label_420114;
        case 0x420118u: goto label_420118;
        case 0x42011cu: goto label_42011c;
        case 0x420120u: goto label_420120;
        case 0x420124u: goto label_420124;
        case 0x420128u: goto label_420128;
        case 0x42012cu: goto label_42012c;
        case 0x420130u: goto label_420130;
        case 0x420134u: goto label_420134;
        case 0x420138u: goto label_420138;
        case 0x42013cu: goto label_42013c;
        case 0x420140u: goto label_420140;
        case 0x420144u: goto label_420144;
        case 0x420148u: goto label_420148;
        case 0x42014cu: goto label_42014c;
        case 0x420150u: goto label_420150;
        case 0x420154u: goto label_420154;
        case 0x420158u: goto label_420158;
        case 0x42015cu: goto label_42015c;
        case 0x420160u: goto label_420160;
        case 0x420164u: goto label_420164;
        case 0x420168u: goto label_420168;
        case 0x42016cu: goto label_42016c;
        case 0x420170u: goto label_420170;
        case 0x420174u: goto label_420174;
        case 0x420178u: goto label_420178;
        case 0x42017cu: goto label_42017c;
        case 0x420180u: goto label_420180;
        case 0x420184u: goto label_420184;
        case 0x420188u: goto label_420188;
        case 0x42018cu: goto label_42018c;
        case 0x420190u: goto label_420190;
        case 0x420194u: goto label_420194;
        case 0x420198u: goto label_420198;
        case 0x42019cu: goto label_42019c;
        case 0x4201a0u: goto label_4201a0;
        case 0x4201a4u: goto label_4201a4;
        case 0x4201a8u: goto label_4201a8;
        case 0x4201acu: goto label_4201ac;
        case 0x4201b0u: goto label_4201b0;
        case 0x4201b4u: goto label_4201b4;
        case 0x4201b8u: goto label_4201b8;
        case 0x4201bcu: goto label_4201bc;
        case 0x4201c0u: goto label_4201c0;
        case 0x4201c4u: goto label_4201c4;
        case 0x4201c8u: goto label_4201c8;
        case 0x4201ccu: goto label_4201cc;
        case 0x4201d0u: goto label_4201d0;
        case 0x4201d4u: goto label_4201d4;
        case 0x4201d8u: goto label_4201d8;
        case 0x4201dcu: goto label_4201dc;
        case 0x4201e0u: goto label_4201e0;
        case 0x4201e4u: goto label_4201e4;
        case 0x4201e8u: goto label_4201e8;
        case 0x4201ecu: goto label_4201ec;
        case 0x4201f0u: goto label_4201f0;
        case 0x4201f4u: goto label_4201f4;
        case 0x4201f8u: goto label_4201f8;
        case 0x4201fcu: goto label_4201fc;
        case 0x420200u: goto label_420200;
        case 0x420204u: goto label_420204;
        case 0x420208u: goto label_420208;
        case 0x42020cu: goto label_42020c;
        case 0x420210u: goto label_420210;
        case 0x420214u: goto label_420214;
        case 0x420218u: goto label_420218;
        case 0x42021cu: goto label_42021c;
        case 0x420220u: goto label_420220;
        case 0x420224u: goto label_420224;
        case 0x420228u: goto label_420228;
        case 0x42022cu: goto label_42022c;
        case 0x420230u: goto label_420230;
        case 0x420234u: goto label_420234;
        case 0x420238u: goto label_420238;
        case 0x42023cu: goto label_42023c;
        case 0x420240u: goto label_420240;
        case 0x420244u: goto label_420244;
        case 0x420248u: goto label_420248;
        case 0x42024cu: goto label_42024c;
        case 0x420250u: goto label_420250;
        case 0x420254u: goto label_420254;
        case 0x420258u: goto label_420258;
        case 0x42025cu: goto label_42025c;
        case 0x420260u: goto label_420260;
        case 0x420264u: goto label_420264;
        case 0x420268u: goto label_420268;
        case 0x42026cu: goto label_42026c;
        case 0x420270u: goto label_420270;
        case 0x420274u: goto label_420274;
        case 0x420278u: goto label_420278;
        case 0x42027cu: goto label_42027c;
        case 0x420280u: goto label_420280;
        case 0x420284u: goto label_420284;
        case 0x420288u: goto label_420288;
        case 0x42028cu: goto label_42028c;
        case 0x420290u: goto label_420290;
        case 0x420294u: goto label_420294;
        case 0x420298u: goto label_420298;
        case 0x42029cu: goto label_42029c;
        case 0x4202a0u: goto label_4202a0;
        case 0x4202a4u: goto label_4202a4;
        case 0x4202a8u: goto label_4202a8;
        case 0x4202acu: goto label_4202ac;
        case 0x4202b0u: goto label_4202b0;
        case 0x4202b4u: goto label_4202b4;
        case 0x4202b8u: goto label_4202b8;
        case 0x4202bcu: goto label_4202bc;
        case 0x4202c0u: goto label_4202c0;
        case 0x4202c4u: goto label_4202c4;
        case 0x4202c8u: goto label_4202c8;
        case 0x4202ccu: goto label_4202cc;
        case 0x4202d0u: goto label_4202d0;
        case 0x4202d4u: goto label_4202d4;
        case 0x4202d8u: goto label_4202d8;
        case 0x4202dcu: goto label_4202dc;
        case 0x4202e0u: goto label_4202e0;
        case 0x4202e4u: goto label_4202e4;
        case 0x4202e8u: goto label_4202e8;
        case 0x4202ecu: goto label_4202ec;
        case 0x4202f0u: goto label_4202f0;
        case 0x4202f4u: goto label_4202f4;
        case 0x4202f8u: goto label_4202f8;
        case 0x4202fcu: goto label_4202fc;
        case 0x420300u: goto label_420300;
        case 0x420304u: goto label_420304;
        case 0x420308u: goto label_420308;
        case 0x42030cu: goto label_42030c;
        case 0x420310u: goto label_420310;
        case 0x420314u: goto label_420314;
        case 0x420318u: goto label_420318;
        case 0x42031cu: goto label_42031c;
        case 0x420320u: goto label_420320;
        case 0x420324u: goto label_420324;
        case 0x420328u: goto label_420328;
        case 0x42032cu: goto label_42032c;
        case 0x420330u: goto label_420330;
        case 0x420334u: goto label_420334;
        case 0x420338u: goto label_420338;
        case 0x42033cu: goto label_42033c;
        case 0x420340u: goto label_420340;
        case 0x420344u: goto label_420344;
        case 0x420348u: goto label_420348;
        case 0x42034cu: goto label_42034c;
        case 0x420350u: goto label_420350;
        case 0x420354u: goto label_420354;
        case 0x420358u: goto label_420358;
        case 0x42035cu: goto label_42035c;
        case 0x420360u: goto label_420360;
        case 0x420364u: goto label_420364;
        case 0x420368u: goto label_420368;
        case 0x42036cu: goto label_42036c;
        case 0x420370u: goto label_420370;
        case 0x420374u: goto label_420374;
        case 0x420378u: goto label_420378;
        case 0x42037cu: goto label_42037c;
        case 0x420380u: goto label_420380;
        case 0x420384u: goto label_420384;
        case 0x420388u: goto label_420388;
        case 0x42038cu: goto label_42038c;
        case 0x420390u: goto label_420390;
        case 0x420394u: goto label_420394;
        case 0x420398u: goto label_420398;
        case 0x42039cu: goto label_42039c;
        case 0x4203a0u: goto label_4203a0;
        case 0x4203a4u: goto label_4203a4;
        case 0x4203a8u: goto label_4203a8;
        case 0x4203acu: goto label_4203ac;
        case 0x4203b0u: goto label_4203b0;
        case 0x4203b4u: goto label_4203b4;
        case 0x4203b8u: goto label_4203b8;
        case 0x4203bcu: goto label_4203bc;
        case 0x4203c0u: goto label_4203c0;
        case 0x4203c4u: goto label_4203c4;
        case 0x4203c8u: goto label_4203c8;
        case 0x4203ccu: goto label_4203cc;
        case 0x4203d0u: goto label_4203d0;
        case 0x4203d4u: goto label_4203d4;
        case 0x4203d8u: goto label_4203d8;
        case 0x4203dcu: goto label_4203dc;
        case 0x4203e0u: goto label_4203e0;
        case 0x4203e4u: goto label_4203e4;
        case 0x4203e8u: goto label_4203e8;
        case 0x4203ecu: goto label_4203ec;
        case 0x4203f0u: goto label_4203f0;
        case 0x4203f4u: goto label_4203f4;
        case 0x4203f8u: goto label_4203f8;
        case 0x4203fcu: goto label_4203fc;
        case 0x420400u: goto label_420400;
        case 0x420404u: goto label_420404;
        case 0x420408u: goto label_420408;
        case 0x42040cu: goto label_42040c;
        case 0x420410u: goto label_420410;
        case 0x420414u: goto label_420414;
        case 0x420418u: goto label_420418;
        case 0x42041cu: goto label_42041c;
        case 0x420420u: goto label_420420;
        case 0x420424u: goto label_420424;
        case 0x420428u: goto label_420428;
        case 0x42042cu: goto label_42042c;
        case 0x420430u: goto label_420430;
        case 0x420434u: goto label_420434;
        case 0x420438u: goto label_420438;
        case 0x42043cu: goto label_42043c;
        case 0x420440u: goto label_420440;
        case 0x420444u: goto label_420444;
        case 0x420448u: goto label_420448;
        case 0x42044cu: goto label_42044c;
        case 0x420450u: goto label_420450;
        case 0x420454u: goto label_420454;
        case 0x420458u: goto label_420458;
        case 0x42045cu: goto label_42045c;
        case 0x420460u: goto label_420460;
        case 0x420464u: goto label_420464;
        case 0x420468u: goto label_420468;
        case 0x42046cu: goto label_42046c;
        case 0x420470u: goto label_420470;
        case 0x420474u: goto label_420474;
        case 0x420478u: goto label_420478;
        case 0x42047cu: goto label_42047c;
        case 0x420480u: goto label_420480;
        case 0x420484u: goto label_420484;
        case 0x420488u: goto label_420488;
        case 0x42048cu: goto label_42048c;
        case 0x420490u: goto label_420490;
        case 0x420494u: goto label_420494;
        case 0x420498u: goto label_420498;
        case 0x42049cu: goto label_42049c;
        case 0x4204a0u: goto label_4204a0;
        case 0x4204a4u: goto label_4204a4;
        case 0x4204a8u: goto label_4204a8;
        case 0x4204acu: goto label_4204ac;
        case 0x4204b0u: goto label_4204b0;
        case 0x4204b4u: goto label_4204b4;
        case 0x4204b8u: goto label_4204b8;
        case 0x4204bcu: goto label_4204bc;
        case 0x4204c0u: goto label_4204c0;
        case 0x4204c4u: goto label_4204c4;
        case 0x4204c8u: goto label_4204c8;
        case 0x4204ccu: goto label_4204cc;
        case 0x4204d0u: goto label_4204d0;
        case 0x4204d4u: goto label_4204d4;
        case 0x4204d8u: goto label_4204d8;
        case 0x4204dcu: goto label_4204dc;
        case 0x4204e0u: goto label_4204e0;
        case 0x4204e4u: goto label_4204e4;
        case 0x4204e8u: goto label_4204e8;
        case 0x4204ecu: goto label_4204ec;
        case 0x4204f0u: goto label_4204f0;
        case 0x4204f4u: goto label_4204f4;
        case 0x4204f8u: goto label_4204f8;
        case 0x4204fcu: goto label_4204fc;
        case 0x420500u: goto label_420500;
        case 0x420504u: goto label_420504;
        case 0x420508u: goto label_420508;
        case 0x42050cu: goto label_42050c;
        case 0x420510u: goto label_420510;
        case 0x420514u: goto label_420514;
        case 0x420518u: goto label_420518;
        case 0x42051cu: goto label_42051c;
        case 0x420520u: goto label_420520;
        case 0x420524u: goto label_420524;
        case 0x420528u: goto label_420528;
        case 0x42052cu: goto label_42052c;
        case 0x420530u: goto label_420530;
        case 0x420534u: goto label_420534;
        case 0x420538u: goto label_420538;
        case 0x42053cu: goto label_42053c;
        case 0x420540u: goto label_420540;
        case 0x420544u: goto label_420544;
        case 0x420548u: goto label_420548;
        case 0x42054cu: goto label_42054c;
        case 0x420550u: goto label_420550;
        case 0x420554u: goto label_420554;
        case 0x420558u: goto label_420558;
        case 0x42055cu: goto label_42055c;
        case 0x420560u: goto label_420560;
        case 0x420564u: goto label_420564;
        case 0x420568u: goto label_420568;
        case 0x42056cu: goto label_42056c;
        case 0x420570u: goto label_420570;
        case 0x420574u: goto label_420574;
        case 0x420578u: goto label_420578;
        case 0x42057cu: goto label_42057c;
        case 0x420580u: goto label_420580;
        case 0x420584u: goto label_420584;
        case 0x420588u: goto label_420588;
        case 0x42058cu: goto label_42058c;
        case 0x420590u: goto label_420590;
        case 0x420594u: goto label_420594;
        case 0x420598u: goto label_420598;
        case 0x42059cu: goto label_42059c;
        case 0x4205a0u: goto label_4205a0;
        case 0x4205a4u: goto label_4205a4;
        case 0x4205a8u: goto label_4205a8;
        case 0x4205acu: goto label_4205ac;
        case 0x4205b0u: goto label_4205b0;
        case 0x4205b4u: goto label_4205b4;
        case 0x4205b8u: goto label_4205b8;
        case 0x4205bcu: goto label_4205bc;
        case 0x4205c0u: goto label_4205c0;
        case 0x4205c4u: goto label_4205c4;
        case 0x4205c8u: goto label_4205c8;
        case 0x4205ccu: goto label_4205cc;
        case 0x4205d0u: goto label_4205d0;
        case 0x4205d4u: goto label_4205d4;
        case 0x4205d8u: goto label_4205d8;
        case 0x4205dcu: goto label_4205dc;
        case 0x4205e0u: goto label_4205e0;
        case 0x4205e4u: goto label_4205e4;
        case 0x4205e8u: goto label_4205e8;
        case 0x4205ecu: goto label_4205ec;
        case 0x4205f0u: goto label_4205f0;
        case 0x4205f4u: goto label_4205f4;
        case 0x4205f8u: goto label_4205f8;
        case 0x4205fcu: goto label_4205fc;
        case 0x420600u: goto label_420600;
        case 0x420604u: goto label_420604;
        case 0x420608u: goto label_420608;
        case 0x42060cu: goto label_42060c;
        case 0x420610u: goto label_420610;
        case 0x420614u: goto label_420614;
        case 0x420618u: goto label_420618;
        case 0x42061cu: goto label_42061c;
        case 0x420620u: goto label_420620;
        case 0x420624u: goto label_420624;
        case 0x420628u: goto label_420628;
        case 0x42062cu: goto label_42062c;
        case 0x420630u: goto label_420630;
        case 0x420634u: goto label_420634;
        case 0x420638u: goto label_420638;
        case 0x42063cu: goto label_42063c;
        case 0x420640u: goto label_420640;
        case 0x420644u: goto label_420644;
        case 0x420648u: goto label_420648;
        case 0x42064cu: goto label_42064c;
        case 0x420650u: goto label_420650;
        case 0x420654u: goto label_420654;
        case 0x420658u: goto label_420658;
        case 0x42065cu: goto label_42065c;
        case 0x420660u: goto label_420660;
        case 0x420664u: goto label_420664;
        case 0x420668u: goto label_420668;
        case 0x42066cu: goto label_42066c;
        case 0x420670u: goto label_420670;
        case 0x420674u: goto label_420674;
        case 0x420678u: goto label_420678;
        case 0x42067cu: goto label_42067c;
        case 0x420680u: goto label_420680;
        case 0x420684u: goto label_420684;
        case 0x420688u: goto label_420688;
        case 0x42068cu: goto label_42068c;
        case 0x420690u: goto label_420690;
        case 0x420694u: goto label_420694;
        case 0x420698u: goto label_420698;
        case 0x42069cu: goto label_42069c;
        case 0x4206a0u: goto label_4206a0;
        case 0x4206a4u: goto label_4206a4;
        case 0x4206a8u: goto label_4206a8;
        case 0x4206acu: goto label_4206ac;
        case 0x4206b0u: goto label_4206b0;
        case 0x4206b4u: goto label_4206b4;
        case 0x4206b8u: goto label_4206b8;
        case 0x4206bcu: goto label_4206bc;
        case 0x4206c0u: goto label_4206c0;
        case 0x4206c4u: goto label_4206c4;
        case 0x4206c8u: goto label_4206c8;
        case 0x4206ccu: goto label_4206cc;
        case 0x4206d0u: goto label_4206d0;
        case 0x4206d4u: goto label_4206d4;
        case 0x4206d8u: goto label_4206d8;
        case 0x4206dcu: goto label_4206dc;
        case 0x4206e0u: goto label_4206e0;
        case 0x4206e4u: goto label_4206e4;
        case 0x4206e8u: goto label_4206e8;
        case 0x4206ecu: goto label_4206ec;
        case 0x4206f0u: goto label_4206f0;
        case 0x4206f4u: goto label_4206f4;
        case 0x4206f8u: goto label_4206f8;
        case 0x4206fcu: goto label_4206fc;
        case 0x420700u: goto label_420700;
        case 0x420704u: goto label_420704;
        case 0x420708u: goto label_420708;
        case 0x42070cu: goto label_42070c;
        case 0x420710u: goto label_420710;
        case 0x420714u: goto label_420714;
        case 0x420718u: goto label_420718;
        case 0x42071cu: goto label_42071c;
        case 0x420720u: goto label_420720;
        case 0x420724u: goto label_420724;
        case 0x420728u: goto label_420728;
        case 0x42072cu: goto label_42072c;
        case 0x420730u: goto label_420730;
        case 0x420734u: goto label_420734;
        case 0x420738u: goto label_420738;
        case 0x42073cu: goto label_42073c;
        case 0x420740u: goto label_420740;
        case 0x420744u: goto label_420744;
        case 0x420748u: goto label_420748;
        case 0x42074cu: goto label_42074c;
        case 0x420750u: goto label_420750;
        case 0x420754u: goto label_420754;
        case 0x420758u: goto label_420758;
        case 0x42075cu: goto label_42075c;
        case 0x420760u: goto label_420760;
        case 0x420764u: goto label_420764;
        case 0x420768u: goto label_420768;
        case 0x42076cu: goto label_42076c;
        case 0x420770u: goto label_420770;
        case 0x420774u: goto label_420774;
        case 0x420778u: goto label_420778;
        case 0x42077cu: goto label_42077c;
        case 0x420780u: goto label_420780;
        case 0x420784u: goto label_420784;
        case 0x420788u: goto label_420788;
        case 0x42078cu: goto label_42078c;
        case 0x420790u: goto label_420790;
        case 0x420794u: goto label_420794;
        case 0x420798u: goto label_420798;
        case 0x42079cu: goto label_42079c;
        case 0x4207a0u: goto label_4207a0;
        case 0x4207a4u: goto label_4207a4;
        case 0x4207a8u: goto label_4207a8;
        case 0x4207acu: goto label_4207ac;
        case 0x4207b0u: goto label_4207b0;
        case 0x4207b4u: goto label_4207b4;
        case 0x4207b8u: goto label_4207b8;
        case 0x4207bcu: goto label_4207bc;
        case 0x4207c0u: goto label_4207c0;
        case 0x4207c4u: goto label_4207c4;
        case 0x4207c8u: goto label_4207c8;
        case 0x4207ccu: goto label_4207cc;
        case 0x4207d0u: goto label_4207d0;
        case 0x4207d4u: goto label_4207d4;
        case 0x4207d8u: goto label_4207d8;
        case 0x4207dcu: goto label_4207dc;
        case 0x4207e0u: goto label_4207e0;
        case 0x4207e4u: goto label_4207e4;
        case 0x4207e8u: goto label_4207e8;
        case 0x4207ecu: goto label_4207ec;
        case 0x4207f0u: goto label_4207f0;
        case 0x4207f4u: goto label_4207f4;
        case 0x4207f8u: goto label_4207f8;
        case 0x4207fcu: goto label_4207fc;
        case 0x420800u: goto label_420800;
        case 0x420804u: goto label_420804;
        case 0x420808u: goto label_420808;
        case 0x42080cu: goto label_42080c;
        case 0x420810u: goto label_420810;
        case 0x420814u: goto label_420814;
        case 0x420818u: goto label_420818;
        case 0x42081cu: goto label_42081c;
        case 0x420820u: goto label_420820;
        case 0x420824u: goto label_420824;
        case 0x420828u: goto label_420828;
        case 0x42082cu: goto label_42082c;
        case 0x420830u: goto label_420830;
        case 0x420834u: goto label_420834;
        case 0x420838u: goto label_420838;
        case 0x42083cu: goto label_42083c;
        case 0x420840u: goto label_420840;
        case 0x420844u: goto label_420844;
        case 0x420848u: goto label_420848;
        case 0x42084cu: goto label_42084c;
        case 0x420850u: goto label_420850;
        case 0x420854u: goto label_420854;
        case 0x420858u: goto label_420858;
        case 0x42085cu: goto label_42085c;
        case 0x420860u: goto label_420860;
        case 0x420864u: goto label_420864;
        case 0x420868u: goto label_420868;
        case 0x42086cu: goto label_42086c;
        case 0x420870u: goto label_420870;
        case 0x420874u: goto label_420874;
        case 0x420878u: goto label_420878;
        case 0x42087cu: goto label_42087c;
        case 0x420880u: goto label_420880;
        case 0x420884u: goto label_420884;
        case 0x420888u: goto label_420888;
        case 0x42088cu: goto label_42088c;
        case 0x420890u: goto label_420890;
        case 0x420894u: goto label_420894;
        case 0x420898u: goto label_420898;
        case 0x42089cu: goto label_42089c;
        case 0x4208a0u: goto label_4208a0;
        case 0x4208a4u: goto label_4208a4;
        case 0x4208a8u: goto label_4208a8;
        case 0x4208acu: goto label_4208ac;
        case 0x4208b0u: goto label_4208b0;
        case 0x4208b4u: goto label_4208b4;
        case 0x4208b8u: goto label_4208b8;
        case 0x4208bcu: goto label_4208bc;
        case 0x4208c0u: goto label_4208c0;
        case 0x4208c4u: goto label_4208c4;
        case 0x4208c8u: goto label_4208c8;
        case 0x4208ccu: goto label_4208cc;
        case 0x4208d0u: goto label_4208d0;
        case 0x4208d4u: goto label_4208d4;
        case 0x4208d8u: goto label_4208d8;
        case 0x4208dcu: goto label_4208dc;
        case 0x4208e0u: goto label_4208e0;
        case 0x4208e4u: goto label_4208e4;
        case 0x4208e8u: goto label_4208e8;
        case 0x4208ecu: goto label_4208ec;
        case 0x4208f0u: goto label_4208f0;
        case 0x4208f4u: goto label_4208f4;
        case 0x4208f8u: goto label_4208f8;
        case 0x4208fcu: goto label_4208fc;
        case 0x420900u: goto label_420900;
        case 0x420904u: goto label_420904;
        case 0x420908u: goto label_420908;
        case 0x42090cu: goto label_42090c;
        case 0x420910u: goto label_420910;
        case 0x420914u: goto label_420914;
        case 0x420918u: goto label_420918;
        case 0x42091cu: goto label_42091c;
        case 0x420920u: goto label_420920;
        case 0x420924u: goto label_420924;
        case 0x420928u: goto label_420928;
        case 0x42092cu: goto label_42092c;
        case 0x420930u: goto label_420930;
        case 0x420934u: goto label_420934;
        case 0x420938u: goto label_420938;
        case 0x42093cu: goto label_42093c;
        case 0x420940u: goto label_420940;
        case 0x420944u: goto label_420944;
        case 0x420948u: goto label_420948;
        case 0x42094cu: goto label_42094c;
        case 0x420950u: goto label_420950;
        case 0x420954u: goto label_420954;
        case 0x420958u: goto label_420958;
        case 0x42095cu: goto label_42095c;
        case 0x420960u: goto label_420960;
        case 0x420964u: goto label_420964;
        case 0x420968u: goto label_420968;
        case 0x42096cu: goto label_42096c;
        case 0x420970u: goto label_420970;
        case 0x420974u: goto label_420974;
        case 0x420978u: goto label_420978;
        case 0x42097cu: goto label_42097c;
        default: break;
    }

    ctx->pc = 0x41f750u;

label_41f750:
    // 0x41f750: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x41f750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_41f754:
    // 0x41f754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41f758:
    // 0x41f758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41f758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41f75c:
    // 0x41f75c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41f75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41f760:
    // 0x41f760: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41f760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41f764:
    // 0x41f764: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x41f764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_41f768:
    // 0x41f768: 0xc04f278  jal         func_13C9E0
label_41f76c:
    if (ctx->pc == 0x41F76Cu) {
        ctx->pc = 0x41F76Cu;
            // 0x41f76c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41F770u;
        goto label_41f770;
    }
    ctx->pc = 0x41F768u;
    SET_GPR_U32(ctx, 31, 0x41F770u);
    ctx->pc = 0x41F76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F768u;
            // 0x41f76c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F770u; }
        if (ctx->pc != 0x41F770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F770u; }
        if (ctx->pc != 0x41F770u) { return; }
    }
    ctx->pc = 0x41F770u;
label_41f770:
    // 0x41f770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41f770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41f774:
    // 0x41f774: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x41f774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41f778:
    // 0x41f778: 0xc04cca0  jal         func_133280
label_41f77c:
    if (ctx->pc == 0x41F77Cu) {
        ctx->pc = 0x41F77Cu;
            // 0x41f77c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41F780u;
        goto label_41f780;
    }
    ctx->pc = 0x41F778u;
    SET_GPR_U32(ctx, 31, 0x41F780u);
    ctx->pc = 0x41F77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F778u;
            // 0x41f77c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F780u; }
        if (ctx->pc != 0x41F780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F780u; }
        if (ctx->pc != 0x41F780u) { return; }
    }
    ctx->pc = 0x41F780u;
label_41f780:
    // 0x41f780: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41f780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_41f784:
    // 0x41f784: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41f784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41f788:
    // 0x41f788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41f788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41f78c:
    // 0x41f78c: 0x3e00008  jr          $ra
label_41f790:
    if (ctx->pc == 0x41F790u) {
        ctx->pc = 0x41F790u;
            // 0x41f790: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x41F794u;
        goto label_41f794;
    }
    ctx->pc = 0x41F78Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41F78Cu;
            // 0x41f790: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41F794u;
label_41f794:
    // 0x41f794: 0x0  nop
    ctx->pc = 0x41f794u;
    // NOP
label_41f798:
    // 0x41f798: 0x0  nop
    ctx->pc = 0x41f798u;
    // NOP
label_41f79c:
    // 0x41f79c: 0x0  nop
    ctx->pc = 0x41f79cu;
    // NOP
label_41f7a0:
    // 0x41f7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41f7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41f7a4:
    // 0x41f7a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41f7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41f7a8:
    // 0x41f7a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41f7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41f7ac:
    // 0x41f7ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41f7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41f7b0:
    // 0x41f7b0: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x41f7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_41f7b4:
    // 0x41f7b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_41f7b8:
    if (ctx->pc == 0x41F7B8u) {
        ctx->pc = 0x41F7B8u;
            // 0x41f7b8: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x41F7BCu;
        goto label_41f7bc;
    }
    ctx->pc = 0x41F7B4u;
    {
        const bool branch_taken_0x41f7b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41f7b4) {
            ctx->pc = 0x41F7B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41F7B4u;
            // 0x41f7b8: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41F7D0u;
            goto label_41f7d0;
        }
    }
    ctx->pc = 0x41F7BCu;
label_41f7bc:
    // 0x41f7bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41f7bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41f7c0:
    // 0x41f7c0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41f7c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41f7c4:
    // 0x41f7c4: 0x320f809  jalr        $t9
label_41f7c8:
    if (ctx->pc == 0x41F7C8u) {
        ctx->pc = 0x41F7C8u;
            // 0x41f7c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41F7CCu;
        goto label_41f7cc;
    }
    ctx->pc = 0x41F7C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41F7CCu);
        ctx->pc = 0x41F7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41F7C4u;
            // 0x41f7c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41F7CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41F7CCu; }
            if (ctx->pc != 0x41F7CCu) { return; }
        }
        }
    }
    ctx->pc = 0x41F7CCu;
label_41f7cc:
    // 0x41f7cc: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x41f7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_41f7d0:
    // 0x41f7d0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x41f7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_41f7d4:
    // 0x41f7d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_41f7d8:
    if (ctx->pc == 0x41F7D8u) {
        ctx->pc = 0x41F7D8u;
            // 0x41f7d8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x41F7DCu;
        goto label_41f7dc;
    }
    ctx->pc = 0x41F7D4u;
    {
        const bool branch_taken_0x41f7d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41f7d4) {
            ctx->pc = 0x41F7D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41F7D4u;
            // 0x41f7d8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41F7F0u;
            goto label_41f7f0;
        }
    }
    ctx->pc = 0x41F7DCu;
label_41f7dc:
    // 0x41f7dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41f7dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41f7e0:
    // 0x41f7e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41f7e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41f7e4:
    // 0x41f7e4: 0x320f809  jalr        $t9
label_41f7e8:
    if (ctx->pc == 0x41F7E8u) {
        ctx->pc = 0x41F7E8u;
            // 0x41f7e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41F7ECu;
        goto label_41f7ec;
    }
    ctx->pc = 0x41F7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41F7ECu);
        ctx->pc = 0x41F7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41F7E4u;
            // 0x41f7e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41F7ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41F7ECu; }
            if (ctx->pc != 0x41F7ECu) { return; }
        }
        }
    }
    ctx->pc = 0x41F7ECu;
label_41f7ec:
    // 0x41f7ec: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x41f7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_41f7f0:
    // 0x41f7f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41f7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41f7f4:
    // 0x41f7f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41f7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41f7f8:
    // 0x41f7f8: 0x3e00008  jr          $ra
label_41f7fc:
    if (ctx->pc == 0x41F7FCu) {
        ctx->pc = 0x41F7FCu;
            // 0x41f7fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x41F800u;
        goto label_41f800;
    }
    ctx->pc = 0x41F7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41F7F8u;
            // 0x41f7fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41F800u;
label_41f800:
    // 0x41f800: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x41f800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_41f804:
    // 0x41f804: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x41f804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_41f808:
    // 0x41f808: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41f808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41f80c:
    // 0x41f80c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41f80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41f810:
    // 0x41f810: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41f810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41f814:
    // 0x41f814: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41f814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41f818:
    // 0x41f818: 0xc0892d0  jal         func_224B40
label_41f81c:
    if (ctx->pc == 0x41F81Cu) {
        ctx->pc = 0x41F81Cu;
            // 0x41f81c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x41F820u;
        goto label_41f820;
    }
    ctx->pc = 0x41F818u;
    SET_GPR_U32(ctx, 31, 0x41F820u);
    ctx->pc = 0x41F81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F818u;
            // 0x41f81c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F820u; }
        if (ctx->pc != 0x41F820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F820u; }
        if (ctx->pc != 0x41F820u) { return; }
    }
    ctx->pc = 0x41F820u;
label_41f820:
    // 0x41f820: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41f820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41f824:
    // 0x41f824: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x41f824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_41f828:
    // 0x41f828: 0x8c426ee0  lw          $v0, 0x6EE0($v0)
    ctx->pc = 0x41f828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28384)));
label_41f82c:
    // 0x41f82c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x41f82cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_41f830:
    // 0x41f830: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x41f830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_41f834:
    // 0x41f834: 0xc0b6e68  jal         func_2DB9A0
label_41f838:
    if (ctx->pc == 0x41F838u) {
        ctx->pc = 0x41F838u;
            // 0x41f838: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x41F83Cu;
        goto label_41f83c;
    }
    ctx->pc = 0x41F834u;
    SET_GPR_U32(ctx, 31, 0x41F83Cu);
    ctx->pc = 0x41F838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F834u;
            // 0x41f838: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F83Cu; }
        if (ctx->pc != 0x41F83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F83Cu; }
        if (ctx->pc != 0x41F83Cu) { return; }
    }
    ctx->pc = 0x41F83Cu;
label_41f83c:
    // 0x41f83c: 0xc0b6dac  jal         func_2DB6B0
label_41f840:
    if (ctx->pc == 0x41F840u) {
        ctx->pc = 0x41F840u;
            // 0x41f840: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x41F844u;
        goto label_41f844;
    }
    ctx->pc = 0x41F83Cu;
    SET_GPR_U32(ctx, 31, 0x41F844u);
    ctx->pc = 0x41F840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F83Cu;
            // 0x41f840: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F844u; }
        if (ctx->pc != 0x41F844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F844u; }
        if (ctx->pc != 0x41F844u) { return; }
    }
    ctx->pc = 0x41F844u;
label_41f844:
    // 0x41f844: 0xc0cac94  jal         func_32B250
label_41f848:
    if (ctx->pc == 0x41F848u) {
        ctx->pc = 0x41F848u;
            // 0x41f848: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x41F84Cu;
        goto label_41f84c;
    }
    ctx->pc = 0x41F844u;
    SET_GPR_U32(ctx, 31, 0x41F84Cu);
    ctx->pc = 0x41F848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F844u;
            // 0x41f848: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F84Cu; }
        if (ctx->pc != 0x41F84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F84Cu; }
        if (ctx->pc != 0x41F84Cu) { return; }
    }
    ctx->pc = 0x41F84Cu;
label_41f84c:
    // 0x41f84c: 0xc0cac84  jal         func_32B210
label_41f850:
    if (ctx->pc == 0x41F850u) {
        ctx->pc = 0x41F850u;
            // 0x41f850: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x41F854u;
        goto label_41f854;
    }
    ctx->pc = 0x41F84Cu;
    SET_GPR_U32(ctx, 31, 0x41F854u);
    ctx->pc = 0x41F850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F84Cu;
            // 0x41f850: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F854u; }
        if (ctx->pc != 0x41F854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F854u; }
        if (ctx->pc != 0x41F854u) { return; }
    }
    ctx->pc = 0x41F854u;
label_41f854:
    // 0x41f854: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x41f854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_41f858:
    // 0x41f858: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x41f858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_41f85c:
    // 0x41f85c: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x41f85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41f860:
    // 0x41f860: 0xc0a5a68  jal         func_2969A0
label_41f864:
    if (ctx->pc == 0x41F864u) {
        ctx->pc = 0x41F864u;
            // 0x41f864: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x41F868u;
        goto label_41f868;
    }
    ctx->pc = 0x41F860u;
    SET_GPR_U32(ctx, 31, 0x41F868u);
    ctx->pc = 0x41F864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F860u;
            // 0x41f864: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F868u; }
        if (ctx->pc != 0x41F868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F868u; }
        if (ctx->pc != 0x41F868u) { return; }
    }
    ctx->pc = 0x41F868u;
label_41f868:
    // 0x41f868: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41f868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41f86c:
    // 0x41f86c: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x41f86cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_41f870:
    // 0x41f870: 0x8c436ee0  lw          $v1, 0x6EE0($v0)
    ctx->pc = 0x41f870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28384)));
label_41f874:
    // 0x41f874: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x41f874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41f878:
    // 0x41f878: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x41f878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41f87c:
    // 0x41f87c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x41f87cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41f880:
    // 0x41f880: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x41f880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41f884:
    // 0x41f884: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x41f884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_41f888:
    // 0x41f888: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x41f888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_41f88c:
    // 0x41f88c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x41f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_41f890:
    // 0x41f890: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x41f890u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_41f894:
    // 0x41f894: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x41f894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_41f898:
    // 0x41f898: 0xc7a70080  lwc1        $f7, 0x80($sp)
    ctx->pc = 0x41f898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_41f89c:
    // 0x41f89c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41f8a0:
    // 0x41f8a0: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x41f8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
label_41f8a4:
    // 0x41f8a4: 0xc7a60084  lwc1        $f6, 0x84($sp)
    ctx->pc = 0x41f8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_41f8a8:
    // 0x41f8a8: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x41f8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_41f8ac:
    // 0x41f8ac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x41f8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_41f8b0:
    // 0x41f8b0: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x41f8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_41f8b4:
    // 0x41f8b4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x41f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_41f8b8:
    // 0x41f8b8: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x41f8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_41f8bc:
    // 0x41f8bc: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x41f8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_41f8c0:
    // 0x41f8c0: 0xc7a50088  lwc1        $f5, 0x88($sp)
    ctx->pc = 0x41f8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_41f8c4:
    // 0x41f8c4: 0xc7a4008c  lwc1        $f4, 0x8C($sp)
    ctx->pc = 0x41f8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_41f8c8:
    // 0x41f8c8: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x41f8c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_41f8cc:
    // 0x41f8cc: 0xafaa0158  sw          $t2, 0x158($sp)
    ctx->pc = 0x41f8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 10));
label_41f8d0:
    // 0x41f8d0: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x41f8d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_41f8d4:
    // 0x41f8d4: 0xa3a90160  sb          $t1, 0x160($sp)
    ctx->pc = 0x41f8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 352), (uint8_t)GPR_U32(ctx, 9));
label_41f8d8:
    // 0x41f8d8: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x41f8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_41f8dc:
    // 0x41f8dc: 0xafa8015c  sw          $t0, 0x15C($sp)
    ctx->pc = 0x41f8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 8));
label_41f8e0:
    // 0x41f8e0: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x41f8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41f8e4:
    // 0x41f8e4: 0xa3a70162  sb          $a3, 0x162($sp)
    ctx->pc = 0x41f8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 354), (uint8_t)GPR_U32(ctx, 7));
label_41f8e8:
    // 0x41f8e8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x41f8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41f8ec:
    // 0x41f8ec: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x41f8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_41f8f0:
    // 0x41f8f0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x41f8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41f8f4:
    // 0x41f8f4: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x41f8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_41f8f8:
    // 0x41f8f8: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x41f8f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_41f8fc:
    // 0x41f8fc: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x41f8fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_41f900:
    // 0x41f900: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x41f900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_41f904:
    // 0x41f904: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x41f904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41f908:
    // 0x41f908: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x41f908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41f90c:
    // 0x41f90c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x41f90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41f910:
    // 0x41f910: 0xe7a2012c  swc1        $f2, 0x12C($sp)
    ctx->pc = 0x41f910u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_41f914:
    // 0x41f914: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x41f914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_41f918:
    // 0x41f918: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x41f918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_41f91c:
    // 0x41f91c: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x41f91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_41f920:
    // 0x41f920: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x41f920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41f924:
    // 0x41f924: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x41f924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41f928:
    // 0x41f928: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x41f928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41f92c:
    // 0x41f92c: 0xe7a800c0  swc1        $f8, 0xC0($sp)
    ctx->pc = 0x41f92cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_41f930:
    // 0x41f930: 0xe7a900c4  swc1        $f9, 0xC4($sp)
    ctx->pc = 0x41f930u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_41f934:
    // 0x41f934: 0xe7aa00c8  swc1        $f10, 0xC8($sp)
    ctx->pc = 0x41f934u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_41f938:
    // 0x41f938: 0xe7a70100  swc1        $f7, 0x100($sp)
    ctx->pc = 0x41f938u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_41f93c:
    // 0x41f93c: 0xe7a60104  swc1        $f6, 0x104($sp)
    ctx->pc = 0x41f93cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_41f940:
    // 0x41f940: 0xe7a50108  swc1        $f5, 0x108($sp)
    ctx->pc = 0x41f940u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_41f944:
    // 0x41f944: 0xe7a4010c  swc1        $f4, 0x10C($sp)
    ctx->pc = 0x41f944u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_41f948:
    // 0x41f948: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x41f948u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_41f94c:
    // 0x41f94c: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x41f94cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_41f950:
    // 0x41f950: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x41f950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_41f954:
    // 0x41f954: 0xc0a7a88  jal         func_29EA20
label_41f958:
    if (ctx->pc == 0x41F958u) {
        ctx->pc = 0x41F958u;
            // 0x41f958: 0xe7a00140  swc1        $f0, 0x140($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->pc = 0x41F95Cu;
        goto label_41f95c;
    }
    ctx->pc = 0x41F954u;
    SET_GPR_U32(ctx, 31, 0x41F95Cu);
    ctx->pc = 0x41F958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F954u;
            // 0x41f958: 0xe7a00140  swc1        $f0, 0x140($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F95Cu; }
        if (ctx->pc != 0x41F95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F95Cu; }
        if (ctx->pc != 0x41F95Cu) { return; }
    }
    ctx->pc = 0x41F95Cu;
label_41f95c:
    // 0x41f95c: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x41f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_41f960:
    // 0x41f960: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41f960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41f964:
    // 0x41f964: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_41f968:
    if (ctx->pc == 0x41F968u) {
        ctx->pc = 0x41F968u;
            // 0x41f968: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x41F96Cu;
        goto label_41f96c;
    }
    ctx->pc = 0x41F964u;
    {
        const bool branch_taken_0x41f964 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41F964u;
            // 0x41f968: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f964) {
            ctx->pc = 0x41F9B4u;
            goto label_41f9b4;
        }
    }
    ctx->pc = 0x41F96Cu;
label_41f96c:
    // 0x41f96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41f96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41f970:
    // 0x41f970: 0xc088ef4  jal         func_223BD0
label_41f974:
    if (ctx->pc == 0x41F974u) {
        ctx->pc = 0x41F974u;
            // 0x41f974: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x41F978u;
        goto label_41f978;
    }
    ctx->pc = 0x41F970u;
    SET_GPR_U32(ctx, 31, 0x41F978u);
    ctx->pc = 0x41F974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F970u;
            // 0x41f974: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F978u; }
        if (ctx->pc != 0x41F978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F978u; }
        if (ctx->pc != 0x41F978u) { return; }
    }
    ctx->pc = 0x41F978u;
label_41f978:
    // 0x41f978: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41f978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41f97c:
    // 0x41f97c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x41f97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_41f980:
    // 0x41f980: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x41f980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_41f984:
    // 0x41f984: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x41f984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_41f988:
    // 0x41f988: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x41f988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_41f98c:
    // 0x41f98c: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x41f98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_41f990:
    // 0x41f990: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41f990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41f994:
    // 0x41f994: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41f994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_41f998:
    // 0x41f998: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x41f998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_41f99c:
    // 0x41f99c: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x41f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_41f9a0:
    // 0x41f9a0: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x41f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_41f9a4:
    // 0x41f9a4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x41f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_41f9a8:
    // 0x41f9a8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x41f9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_41f9ac:
    // 0x41f9ac: 0xc088b38  jal         func_222CE0
label_41f9b0:
    if (ctx->pc == 0x41F9B0u) {
        ctx->pc = 0x41F9B0u;
            // 0x41f9b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41F9B4u;
        goto label_41f9b4;
    }
    ctx->pc = 0x41F9ACu;
    SET_GPR_U32(ctx, 31, 0x41F9B4u);
    ctx->pc = 0x41F9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F9ACu;
            // 0x41f9b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F9B4u; }
        if (ctx->pc != 0x41F9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F9B4u; }
        if (ctx->pc != 0x41F9B4u) { return; }
    }
    ctx->pc = 0x41F9B4u;
label_41f9b4:
    // 0x41f9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41f9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41f9b8:
    // 0x41f9b8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x41f9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_41f9bc:
    // 0x41f9bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41f9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41f9c0:
    // 0x41f9c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41f9c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41f9c4:
    // 0x41f9c4: 0xc08914c  jal         func_224530
label_41f9c8:
    if (ctx->pc == 0x41F9C8u) {
        ctx->pc = 0x41F9C8u;
            // 0x41f9c8: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x41F9CCu;
        goto label_41f9cc;
    }
    ctx->pc = 0x41F9C4u;
    SET_GPR_U32(ctx, 31, 0x41F9CCu);
    ctx->pc = 0x41F9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41F9C4u;
            // 0x41f9c8: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F9CCu; }
        if (ctx->pc != 0x41F9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41F9CCu; }
        if (ctx->pc != 0x41F9CCu) { return; }
    }
    ctx->pc = 0x41F9CCu;
label_41f9cc:
    // 0x41f9cc: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x41f9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41f9d0:
    // 0x41f9d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41f9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41f9d4:
    // 0x41f9d4: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x41f9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41f9d8:
    // 0x41f9d8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x41f9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_41f9dc:
    // 0x41f9dc: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x41f9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41f9e0:
    // 0x41f9e0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x41f9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_41f9e4:
    // 0x41f9e4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x41f9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_41f9e8:
    // 0x41f9e8: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x41f9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_41f9ec:
    // 0x41f9ec: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x41f9ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_41f9f0:
    // 0x41f9f0: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x41f9f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_41f9f4:
    // 0x41f9f4: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x41f9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_41f9f8:
    // 0x41f9f8: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x41f9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41f9fc:
    // 0x41f9fc: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x41f9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41fa00:
    // 0x41fa00: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x41fa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41fa04:
    // 0x41fa04: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x41fa04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_41fa08:
    // 0x41fa08: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x41fa08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_41fa0c:
    // 0x41fa0c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x41fa0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_41fa10:
    // 0x41fa10: 0xc0892b0  jal         func_224AC0
label_41fa14:
    if (ctx->pc == 0x41FA14u) {
        ctx->pc = 0x41FA14u;
            // 0x41fa14: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x41FA18u;
        goto label_41fa18;
    }
    ctx->pc = 0x41FA10u;
    SET_GPR_U32(ctx, 31, 0x41FA18u);
    ctx->pc = 0x41FA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FA10u;
            // 0x41fa14: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FA18u; }
        if (ctx->pc != 0x41FA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FA18u; }
        if (ctx->pc != 0x41FA18u) { return; }
    }
    ctx->pc = 0x41FA18u;
label_41fa18:
    // 0x41fa18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41fa1c:
    // 0x41fa1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41fa1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41fa20:
    // 0x41fa20: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x41fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_41fa24:
    // 0x41fa24: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x41fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_41fa28:
    // 0x41fa28: 0xc08c164  jal         func_230590
label_41fa2c:
    if (ctx->pc == 0x41FA2Cu) {
        ctx->pc = 0x41FA2Cu;
            // 0x41fa2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41FA30u;
        goto label_41fa30;
    }
    ctx->pc = 0x41FA28u;
    SET_GPR_U32(ctx, 31, 0x41FA30u);
    ctx->pc = 0x41FA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FA28u;
            // 0x41fa2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FA30u; }
        if (ctx->pc != 0x41FA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FA30u; }
        if (ctx->pc != 0x41FA30u) { return; }
    }
    ctx->pc = 0x41FA30u;
label_41fa30:
    // 0x41fa30: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x41fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_41fa34:
    // 0x41fa34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41fa38:
    // 0x41fa38: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x41fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_41fa3c:
    // 0x41fa3c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x41fa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_41fa40:
    // 0x41fa40: 0xc0a7a88  jal         func_29EA20
label_41fa44:
    if (ctx->pc == 0x41FA44u) {
        ctx->pc = 0x41FA44u;
            // 0x41fa44: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x41FA48u;
        goto label_41fa48;
    }
    ctx->pc = 0x41FA40u;
    SET_GPR_U32(ctx, 31, 0x41FA48u);
    ctx->pc = 0x41FA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FA40u;
            // 0x41fa44: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FA48u; }
        if (ctx->pc != 0x41FA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FA48u; }
        if (ctx->pc != 0x41FA48u) { return; }
    }
    ctx->pc = 0x41FA48u;
label_41fa48:
    // 0x41fa48: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x41fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_41fa4c:
    // 0x41fa4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x41fa4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41fa50:
    // 0x41fa50: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_41fa54:
    if (ctx->pc == 0x41FA54u) {
        ctx->pc = 0x41FA54u;
            // 0x41fa54: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x41FA58u;
        goto label_41fa58;
    }
    ctx->pc = 0x41FA50u;
    {
        const bool branch_taken_0x41fa50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41FA50u;
            // 0x41fa54: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fa50) {
            ctx->pc = 0x41FA74u;
            goto label_41fa74;
        }
    }
    ctx->pc = 0x41FA58u;
label_41fa58:
    // 0x41fa58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x41fa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41fa5c:
    // 0x41fa5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41fa5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41fa60:
    // 0x41fa60: 0xc0869d0  jal         func_21A740
label_41fa64:
    if (ctx->pc == 0x41FA64u) {
        ctx->pc = 0x41FA64u;
            // 0x41fa64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41FA68u;
        goto label_41fa68;
    }
    ctx->pc = 0x41FA60u;
    SET_GPR_U32(ctx, 31, 0x41FA68u);
    ctx->pc = 0x41FA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FA60u;
            // 0x41fa64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FA68u; }
        if (ctx->pc != 0x41FA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FA68u; }
        if (ctx->pc != 0x41FA68u) { return; }
    }
    ctx->pc = 0x41FA68u;
label_41fa68:
    // 0x41fa68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41fa6c:
    // 0x41fa6c: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x41fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_41fa70:
    // 0x41fa70: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x41fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_41fa74:
    // 0x41fa74: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x41fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_41fa78:
    // 0x41fa78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41fa7c:
    // 0x41fa7c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x41fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_41fa80:
    // 0x41fa80: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x41fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_41fa84:
    // 0x41fa84: 0xc08c650  jal         func_231940
label_41fa88:
    if (ctx->pc == 0x41FA88u) {
        ctx->pc = 0x41FA88u;
            // 0x41fa88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41FA8Cu;
        goto label_41fa8c;
    }
    ctx->pc = 0x41FA84u;
    SET_GPR_U32(ctx, 31, 0x41FA8Cu);
    ctx->pc = 0x41FA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FA84u;
            // 0x41fa88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FA8Cu; }
        if (ctx->pc != 0x41FA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FA8Cu; }
        if (ctx->pc != 0x41FA8Cu) { return; }
    }
    ctx->pc = 0x41FA8Cu;
label_41fa8c:
    // 0x41fa8c: 0x8e2800b0  lw          $t0, 0xB0($s1)
    ctx->pc = 0x41fa8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_41fa90:
    // 0x41fa90: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x41fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_41fa94:
    // 0x41fa94: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x41fa94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41fa98:
    // 0x41fa98: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x41fa98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_41fa9c:
    // 0x41fa9c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x41fa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_41faa0:
    // 0x41faa0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x41faa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41faa4:
    // 0x41faa4: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x41faa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_41faa8:
    // 0x41faa8: 0xae2800b0  sw          $t0, 0xB0($s1)
    ctx->pc = 0x41faa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 8));
label_41faac:
    // 0x41faac: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x41faacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
label_41fab0:
    // 0x41fab0: 0xa2270064  sb          $a3, 0x64($s1)
    ctx->pc = 0x41fab0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 7));
label_41fab4:
    // 0x41fab4: 0xa2260065  sb          $a2, 0x65($s1)
    ctx->pc = 0x41fab4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 6));
label_41fab8:
    // 0x41fab8: 0xa2200068  sb          $zero, 0x68($s1)
    ctx->pc = 0x41fab8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 0));
label_41fabc:
    // 0x41fabc: 0xa2250069  sb          $a1, 0x69($s1)
    ctx->pc = 0x41fabcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 5));
label_41fac0:
    // 0x41fac0: 0xae24008c  sw          $a0, 0x8C($s1)
    ctx->pc = 0x41fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 4));
label_41fac4:
    // 0x41fac4: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x41fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_41fac8:
    // 0x41fac8: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x41fac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
label_41facc:
    // 0x41facc: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x41faccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
label_41fad0:
    // 0x41fad0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x41fad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_41fad4:
    // 0x41fad4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41fad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41fad8:
    // 0x41fad8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41fad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41fadc:
    // 0x41fadc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41fadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41fae0:
    // 0x41fae0: 0x3e00008  jr          $ra
label_41fae4:
    if (ctx->pc == 0x41FAE4u) {
        ctx->pc = 0x41FAE4u;
            // 0x41fae4: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x41FAE8u;
        goto label_41fae8;
    }
    ctx->pc = 0x41FAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41FAE0u;
            // 0x41fae4: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41FAE8u;
label_41fae8:
    // 0x41fae8: 0x0  nop
    ctx->pc = 0x41fae8u;
    // NOP
label_41faec:
    // 0x41faec: 0x0  nop
    ctx->pc = 0x41faecu;
    // NOP
label_41faf0:
    // 0x41faf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41faf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41faf4:
    // 0x41faf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41faf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41faf8:
    // 0x41faf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41faf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41fafc:
    // 0x41fafc: 0xc0e3580  jal         func_38D600
label_41fb00:
    if (ctx->pc == 0x41FB00u) {
        ctx->pc = 0x41FB00u;
            // 0x41fb00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41FB04u;
        goto label_41fb04;
    }
    ctx->pc = 0x41FAFCu;
    SET_GPR_U32(ctx, 31, 0x41FB04u);
    ctx->pc = 0x41FB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FAFCu;
            // 0x41fb00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FB04u; }
        if (ctx->pc != 0x41FB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FB04u; }
        if (ctx->pc != 0x41FB04u) { return; }
    }
    ctx->pc = 0x41FB04u;
label_41fb04:
    // 0x41fb04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41fb08:
    // 0x41fb08: 0x3c054416  lui         $a1, 0x4416
    ctx->pc = 0x41fb08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17430 << 16));
label_41fb0c:
    // 0x41fb0c: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x41fb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_41fb10:
    // 0x41fb10: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x41fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41fb14:
    // 0x41fb14: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x41fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_41fb18:
    // 0x41fb18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x41fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_41fb1c:
    // 0x41fb1c: 0xae050078  sw          $a1, 0x78($s0)
    ctx->pc = 0x41fb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
label_41fb20:
    // 0x41fb20: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x41fb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_41fb24:
    // 0x41fb24: 0xa2040064  sb          $a0, 0x64($s0)
    ctx->pc = 0x41fb24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 4));
label_41fb28:
    // 0x41fb28: 0xa2030065  sb          $v1, 0x65($s0)
    ctx->pc = 0x41fb28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 3));
label_41fb2c:
    // 0x41fb2c: 0xa2030066  sb          $v1, 0x66($s0)
    ctx->pc = 0x41fb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 3));
label_41fb30:
    // 0x41fb30: 0xa2030067  sb          $v1, 0x67($s0)
    ctx->pc = 0x41fb30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 3));
label_41fb34:
    // 0x41fb34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41fb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41fb38:
    // 0x41fb38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41fb38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41fb3c:
    // 0x41fb3c: 0x3e00008  jr          $ra
label_41fb40:
    if (ctx->pc == 0x41FB40u) {
        ctx->pc = 0x41FB40u;
            // 0x41fb40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x41FB44u;
        goto label_41fb44;
    }
    ctx->pc = 0x41FB3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41FB3Cu;
            // 0x41fb40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41FB44u;
label_41fb44:
    // 0x41fb44: 0x0  nop
    ctx->pc = 0x41fb44u;
    // NOP
label_41fb48:
    // 0x41fb48: 0x0  nop
    ctx->pc = 0x41fb48u;
    // NOP
label_41fb4c:
    // 0x41fb4c: 0x0  nop
    ctx->pc = 0x41fb4cu;
    // NOP
label_41fb50:
    // 0x41fb50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41fb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_41fb54:
    // 0x41fb54: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x41fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_41fb58:
    // 0x41fb58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41fb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41fb5c:
    // 0x41fb5c: 0xc0baaa0  jal         func_2EAA80
label_41fb60:
    if (ctx->pc == 0x41FB60u) {
        ctx->pc = 0x41FB60u;
            // 0x41fb60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41FB64u;
        goto label_41fb64;
    }
    ctx->pc = 0x41FB5Cu;
    SET_GPR_U32(ctx, 31, 0x41FB64u);
    ctx->pc = 0x41FB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FB5Cu;
            // 0x41fb60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FB64u; }
        if (ctx->pc != 0x41FB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FB64u; }
        if (ctx->pc != 0x41FB64u) { return; }
    }
    ctx->pc = 0x41FB64u;
label_41fb64:
    // 0x41fb64: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x41fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_41fb68:
    // 0x41fb68: 0xc073234  jal         func_1CC8D0
label_41fb6c:
    if (ctx->pc == 0x41FB6Cu) {
        ctx->pc = 0x41FB6Cu;
            // 0x41fb6c: 0x344418a9  ori         $a0, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->pc = 0x41FB70u;
        goto label_41fb70;
    }
    ctx->pc = 0x41FB68u;
    SET_GPR_U32(ctx, 31, 0x41FB70u);
    ctx->pc = 0x41FB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FB68u;
            // 0x41fb6c: 0x344418a9  ori         $a0, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FB70u; }
        if (ctx->pc != 0x41FB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FB70u; }
        if (ctx->pc != 0x41FB70u) { return; }
    }
    ctx->pc = 0x41FB70u;
label_41fb70:
    // 0x41fb70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41fb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41fb74:
    // 0x41fb74: 0x3e00008  jr          $ra
label_41fb78:
    if (ctx->pc == 0x41FB78u) {
        ctx->pc = 0x41FB78u;
            // 0x41fb78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x41FB7Cu;
        goto label_41fb7c;
    }
    ctx->pc = 0x41FB74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41FB74u;
            // 0x41fb78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41FB7Cu;
label_41fb7c:
    // 0x41fb7c: 0x0  nop
    ctx->pc = 0x41fb7cu;
    // NOP
label_41fb80:
    // 0x41fb80: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x41fb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_41fb84:
    // 0x41fb84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x41fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41fb88:
    // 0x41fb88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x41fb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_41fb8c:
    // 0x41fb8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x41fb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_41fb90:
    // 0x41fb90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x41fb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_41fb94:
    // 0x41fb94: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x41fb94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41fb98:
    // 0x41fb98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41fb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_41fb9c:
    // 0x41fb9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41fb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_41fba0:
    // 0x41fba0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x41fba0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_41fba4:
    // 0x41fba4: 0x8c840224  lw          $a0, 0x224($a0)
    ctx->pc = 0x41fba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_41fba8:
    // 0x41fba8: 0x1083009c  beq         $a0, $v1, . + 4 + (0x9C << 2)
label_41fbac:
    if (ctx->pc == 0x41FBACu) {
        ctx->pc = 0x41FBB0u;
        goto label_41fbb0;
    }
    ctx->pc = 0x41FBA8u;
    {
        const bool branch_taken_0x41fba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x41fba8) {
            ctx->pc = 0x41FE1Cu;
            goto label_41fe1c;
        }
    }
    ctx->pc = 0x41FBB0u;
label_41fbb0:
    // 0x41fbb0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x41fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_41fbb4:
    // 0x41fbb4: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
label_41fbb8:
    if (ctx->pc == 0x41FBB8u) {
        ctx->pc = 0x41FBBCu;
        goto label_41fbbc;
    }
    ctx->pc = 0x41FBB4u;
    {
        const bool branch_taken_0x41fbb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x41fbb4) {
            ctx->pc = 0x41FC94u;
            goto label_41fc94;
        }
    }
    ctx->pc = 0x41FBBCu;
label_41fbbc:
    // 0x41fbbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x41fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41fbc0:
    // 0x41fbc0: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_41fbc4:
    if (ctx->pc == 0x41FBC4u) {
        ctx->pc = 0x41FBC8u;
        goto label_41fbc8;
    }
    ctx->pc = 0x41FBC0u;
    {
        const bool branch_taken_0x41fbc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x41fbc0) {
            ctx->pc = 0x41FC0Cu;
            goto label_41fc0c;
        }
    }
    ctx->pc = 0x41FBC8u;
label_41fbc8:
    // 0x41fbc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41fbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41fbcc:
    // 0x41fbcc: 0x508300eb  beql        $a0, $v1, . + 4 + (0xEB << 2)
label_41fbd0:
    if (ctx->pc == 0x41FBD0u) {
        ctx->pc = 0x41FBD0u;
            // 0x41fbd0: 0x8e630224  lw          $v1, 0x224($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
        ctx->pc = 0x41FBD4u;
        goto label_41fbd4;
    }
    ctx->pc = 0x41FBCCu;
    {
        const bool branch_taken_0x41fbcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x41fbcc) {
            ctx->pc = 0x41FBD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41FBCCu;
            // 0x41fbd0: 0x8e630224  lw          $v1, 0x224($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41FF7Cu;
            goto label_41ff7c;
        }
    }
    ctx->pc = 0x41FBD4u;
label_41fbd4:
    // 0x41fbd4: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_41fbd8:
    if (ctx->pc == 0x41FBD8u) {
        ctx->pc = 0x41FBD8u;
            // 0x41fbd8: 0xae630224  sw          $v1, 0x224($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 548), GPR_U32(ctx, 3));
        ctx->pc = 0x41FBDCu;
        goto label_41fbdc;
    }
    ctx->pc = 0x41FBD4u;
    {
        const bool branch_taken_0x41fbd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41fbd4) {
            ctx->pc = 0x41FBD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41FBD4u;
            // 0x41fbd8: 0xae630224  sw          $v1, 0x224($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 548), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41FBE4u;
            goto label_41fbe4;
        }
    }
    ctx->pc = 0x41FBDCu;
label_41fbdc:
    // 0x41fbdc: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_41fbe0:
    if (ctx->pc == 0x41FBE0u) {
        ctx->pc = 0x41FBE4u;
        goto label_41fbe4;
    }
    ctx->pc = 0x41FBDCu;
    {
        const bool branch_taken_0x41fbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41fbdc) {
            ctx->pc = 0x41FF78u;
            goto label_41ff78;
        }
    }
    ctx->pc = 0x41FBE4u;
label_41fbe4:
    // 0x41fbe4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41fbe8:
    // 0x41fbe8: 0x8e650050  lw          $a1, 0x50($s3)
    ctx->pc = 0x41fbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_41fbec:
    // 0x41fbec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41fbecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41fbf0:
    // 0x41fbf0: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x41fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_41fbf4:
    // 0x41fbf4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x41fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_41fbf8:
    // 0x41fbf8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x41fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_41fbfc:
    // 0x41fbfc: 0xc08bff0  jal         func_22FFC0
label_41fc00:
    if (ctx->pc == 0x41FC00u) {
        ctx->pc = 0x41FC00u;
            // 0x41fc00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41FC04u;
        goto label_41fc04;
    }
    ctx->pc = 0x41FBFCu;
    SET_GPR_U32(ctx, 31, 0x41FC04u);
    ctx->pc = 0x41FC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FBFCu;
            // 0x41fc00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FC04u; }
        if (ctx->pc != 0x41FC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FC04u; }
        if (ctx->pc != 0x41FC04u) { return; }
    }
    ctx->pc = 0x41FC04u;
label_41fc04:
    // 0x41fc04: 0x100000dc  b           . + 4 + (0xDC << 2)
label_41fc08:
    if (ctx->pc == 0x41FC08u) {
        ctx->pc = 0x41FC0Cu;
        goto label_41fc0c;
    }
    ctx->pc = 0x41FC04u;
    {
        const bool branch_taken_0x41fc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41fc04) {
            ctx->pc = 0x41FF78u;
            goto label_41ff78;
        }
    }
    ctx->pc = 0x41FC0Cu;
label_41fc0c:
    // 0x41fc0c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x41fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_41fc10:
    // 0x41fc10: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x41fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_41fc14:
    // 0x41fc14: 0xc6610204  lwc1        $f1, 0x204($s3)
    ctx->pc = 0x41fc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41fc18:
    // 0x41fc18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x41fc18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41fc1c:
    // 0x41fc1c: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x41fc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41fc20:
    // 0x41fc20: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x41fc20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_41fc24:
    // 0x41fc24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x41fc24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41fc28:
    // 0x41fc28: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_41fc2c:
    if (ctx->pc == 0x41FC2Cu) {
        ctx->pc = 0x41FC2Cu;
            // 0x41fc2c: 0xe6610204  swc1        $f1, 0x204($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 516), bits); }
        ctx->pc = 0x41FC30u;
        goto label_41fc30;
    }
    ctx->pc = 0x41FC28u;
    {
        const bool branch_taken_0x41fc28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x41FC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41FC28u;
            // 0x41fc2c: 0xe6610204  swc1        $f1, 0x204($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 516), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fc28) {
            ctx->pc = 0x41FC8Cu;
            goto label_41fc8c;
        }
    }
    ctx->pc = 0x41FC30u;
label_41fc30:
    // 0x41fc30: 0x8e650120  lw          $a1, 0x120($s3)
    ctx->pc = 0x41fc30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
label_41fc34:
    // 0x41fc34: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x41fc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_41fc38:
    // 0x41fc38: 0x96660132  lhu         $a2, 0x132($s3)
    ctx->pc = 0x41fc38u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 306)));
label_41fc3c:
    // 0x41fc3c: 0x96630130  lhu         $v1, 0x130($s3)
    ctx->pc = 0x41fc3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 304)));
label_41fc40:
    // 0x41fc40: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x41fc40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_41fc44:
    // 0x41fc44: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x41fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_41fc48:
    // 0x41fc48: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x41fc48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_41fc4c:
    // 0x41fc4c: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x41fc4cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_41fc50:
    // 0x41fc50: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x41fc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_41fc54:
    // 0x41fc54: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x41fc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_41fc58:
    // 0x41fc58: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x41fc58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_41fc5c:
    // 0x41fc5c: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x41fc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_41fc60:
    // 0x41fc60: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x41fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_41fc64:
    // 0x41fc64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x41fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_41fc68:
    // 0x41fc68: 0xc04cc90  jal         func_133240
label_41fc6c:
    if (ctx->pc == 0x41FC6Cu) {
        ctx->pc = 0x41FC6Cu;
            // 0x41fc6c: 0xe22821  addu        $a1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->pc = 0x41FC70u;
        goto label_41fc70;
    }
    ctx->pc = 0x41FC68u;
    SET_GPR_U32(ctx, 31, 0x41FC70u);
    ctx->pc = 0x41FC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FC68u;
            // 0x41fc6c: 0xe22821  addu        $a1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FC70u; }
        if (ctx->pc != 0x41FC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FC70u; }
        if (ctx->pc != 0x41FC70u) { return; }
    }
    ctx->pc = 0x41FC70u;
label_41fc70:
    // 0x41fc70: 0xc04cc14  jal         func_133050
label_41fc74:
    if (ctx->pc == 0x41FC74u) {
        ctx->pc = 0x41FC74u;
            // 0x41fc74: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x41FC78u;
        goto label_41fc78;
    }
    ctx->pc = 0x41FC70u;
    SET_GPR_U32(ctx, 31, 0x41FC78u);
    ctx->pc = 0x41FC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FC70u;
            // 0x41fc74: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FC78u; }
        if (ctx->pc != 0x41FC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FC78u; }
        if (ctx->pc != 0x41FC78u) { return; }
    }
    ctx->pc = 0x41FC78u;
label_41fc78:
    // 0x41fc78: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x41fc78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_41fc7c:
    // 0x41fc7c: 0xc107c30  jal         func_41F0C0
label_41fc80:
    if (ctx->pc == 0x41FC80u) {
        ctx->pc = 0x41FC80u;
            // 0x41fc80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41FC84u;
        goto label_41fc84;
    }
    ctx->pc = 0x41FC7Cu;
    SET_GPR_U32(ctx, 31, 0x41FC84u);
    ctx->pc = 0x41FC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FC7Cu;
            // 0x41fc80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41F0C0u;
    if (runtime->hasFunction(0x41F0C0u)) {
        auto targetFn = runtime->lookupFunction(0x41F0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FC84u; }
        if (ctx->pc != 0x41FC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041F0C0_0x41f0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FC84u; }
        if (ctx->pc != 0x41FC84u) { return; }
    }
    ctx->pc = 0x41FC84u;
label_41fc84:
    // 0x41fc84: 0x10000003  b           . + 4 + (0x3 << 2)
label_41fc88:
    if (ctx->pc == 0x41FC88u) {
        ctx->pc = 0x41FC8Cu;
        goto label_41fc8c;
    }
    ctx->pc = 0x41FC84u;
    {
        const bool branch_taken_0x41fc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41fc84) {
            ctx->pc = 0x41FC94u;
            goto label_41fc94;
        }
    }
    ctx->pc = 0x41FC8Cu;
label_41fc8c:
    // 0x41fc8c: 0xc088b74  jal         func_222DD0
label_41fc90:
    if (ctx->pc == 0x41FC90u) {
        ctx->pc = 0x41FC90u;
            // 0x41fc90: 0x8e640050  lw          $a0, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->pc = 0x41FC94u;
        goto label_41fc94;
    }
    ctx->pc = 0x41FC8Cu;
    SET_GPR_U32(ctx, 31, 0x41FC94u);
    ctx->pc = 0x41FC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FC8Cu;
            // 0x41fc90: 0x8e640050  lw          $a0, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FC94u; }
        if (ctx->pc != 0x41FC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FC94u; }
        if (ctx->pc != 0x41FC94u) { return; }
    }
    ctx->pc = 0x41FC94u;
label_41fc94:
    // 0x41fc94: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x41fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_41fc98:
    // 0x41fc98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41fc9c:
    // 0x41fc9c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x41fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_41fca0:
    // 0x41fca0: 0xc6600228  lwc1        $f0, 0x228($s3)
    ctx->pc = 0x41fca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41fca4:
    // 0x41fca4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x41fca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41fca8:
    // 0x41fca8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x41fca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_41fcac:
    // 0x41fcac: 0xe6600228  swc1        $f0, 0x228($s3)
    ctx->pc = 0x41fcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 552), bits); }
label_41fcb0:
    // 0x41fcb0: 0x8c426ee0  lw          $v0, 0x6EE0($v0)
    ctx->pc = 0x41fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28384)));
label_41fcb4:
    // 0x41fcb4: 0xc6600228  lwc1        $f0, 0x228($s3)
    ctx->pc = 0x41fcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41fcb8:
    // 0x41fcb8: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x41fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_41fcbc:
    // 0x41fcbc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x41fcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41fcc0:
    // 0x41fcc0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x41fcc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41fcc4:
    // 0x41fcc4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_41fcc8:
    if (ctx->pc == 0x41FCC8u) {
        ctx->pc = 0x41FCC8u;
            // 0x41fcc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41FCCCu;
        goto label_41fccc;
    }
    ctx->pc = 0x41FCC4u;
    {
        const bool branch_taken_0x41fcc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x41FCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41FCC4u;
            // 0x41fcc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fcc4) {
            ctx->pc = 0x41FCD0u;
            goto label_41fcd0;
        }
    }
    ctx->pc = 0x41FCCCu;
label_41fccc:
    // 0x41fccc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x41fcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41fcd0:
    // 0x41fcd0: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_41fcd4:
    if (ctx->pc == 0x41FCD4u) {
        ctx->pc = 0x41FCD4u;
            // 0x41fcd4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x41FCD8u;
        goto label_41fcd8;
    }
    ctx->pc = 0x41FCD0u;
    {
        const bool branch_taken_0x41fcd0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x41fcd0) {
            ctx->pc = 0x41FCD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41FCD0u;
            // 0x41fcd4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41FCE4u;
            goto label_41fce4;
        }
    }
    ctx->pc = 0x41FCD8u;
label_41fcd8:
    // 0x41fcd8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x41fcd8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41fcdc:
    // 0x41fcdc: 0x10000007  b           . + 4 + (0x7 << 2)
label_41fce0:
    if (ctx->pc == 0x41FCE0u) {
        ctx->pc = 0x41FCE0u;
            // 0x41fce0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x41FCE4u;
        goto label_41fce4;
    }
    ctx->pc = 0x41FCDCu;
    {
        const bool branch_taken_0x41fcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41FCDCu;
            // 0x41fce0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fcdc) {
            ctx->pc = 0x41FCFCu;
            goto label_41fcfc;
        }
    }
    ctx->pc = 0x41FCE4u;
label_41fce4:
    // 0x41fce4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x41fce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_41fce8:
    // 0x41fce8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x41fce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_41fcec:
    // 0x41fcec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x41fcecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41fcf0:
    // 0x41fcf0: 0x0  nop
    ctx->pc = 0x41fcf0u;
    // NOP
label_41fcf4:
    // 0x41fcf4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x41fcf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_41fcf8:
    // 0x41fcf8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x41fcf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_41fcfc:
    // 0x41fcfc: 0xc6600228  lwc1        $f0, 0x228($s3)
    ctx->pc = 0x41fcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41fd00:
    // 0x41fd00: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x41fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_41fd04:
    // 0x41fd04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41fd08:
    // 0x41fd08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x41fd08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_41fd0c:
    // 0x41fd0c: 0xe6600228  swc1        $f0, 0x228($s3)
    ctx->pc = 0x41fd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 552), bits); }
label_41fd10:
    // 0x41fd10: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x41fd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_41fd14:
    // 0x41fd14: 0xc660022c  lwc1        $f0, 0x22C($s3)
    ctx->pc = 0x41fd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41fd18:
    // 0x41fd18: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x41fd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41fd1c:
    // 0x41fd1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x41fd1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_41fd20:
    // 0x41fd20: 0xe660022c  swc1        $f0, 0x22C($s3)
    ctx->pc = 0x41fd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 556), bits); }
label_41fd24:
    // 0x41fd24: 0x8c426ee0  lw          $v0, 0x6EE0($v0)
    ctx->pc = 0x41fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28384)));
label_41fd28:
    // 0x41fd28: 0xc660022c  lwc1        $f0, 0x22C($s3)
    ctx->pc = 0x41fd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41fd2c:
    // 0x41fd2c: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x41fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_41fd30:
    // 0x41fd30: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x41fd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41fd34:
    // 0x41fd34: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x41fd34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41fd38:
    // 0x41fd38: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_41fd3c:
    if (ctx->pc == 0x41FD3Cu) {
        ctx->pc = 0x41FD3Cu;
            // 0x41fd3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41FD40u;
        goto label_41fd40;
    }
    ctx->pc = 0x41FD38u;
    {
        const bool branch_taken_0x41fd38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x41FD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41FD38u;
            // 0x41fd3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fd38) {
            ctx->pc = 0x41FD44u;
            goto label_41fd44;
        }
    }
    ctx->pc = 0x41FD40u;
label_41fd40:
    // 0x41fd40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x41fd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41fd44:
    // 0x41fd44: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_41fd48:
    if (ctx->pc == 0x41FD48u) {
        ctx->pc = 0x41FD48u;
            // 0x41fd48: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x41FD4Cu;
        goto label_41fd4c;
    }
    ctx->pc = 0x41FD44u;
    {
        const bool branch_taken_0x41fd44 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x41fd44) {
            ctx->pc = 0x41FD48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41FD44u;
            // 0x41fd48: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41FD58u;
            goto label_41fd58;
        }
    }
    ctx->pc = 0x41FD4Cu;
label_41fd4c:
    // 0x41fd4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x41fd4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41fd50:
    // 0x41fd50: 0x10000007  b           . + 4 + (0x7 << 2)
label_41fd54:
    if (ctx->pc == 0x41FD54u) {
        ctx->pc = 0x41FD54u;
            // 0x41fd54: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x41FD58u;
        goto label_41fd58;
    }
    ctx->pc = 0x41FD50u;
    {
        const bool branch_taken_0x41fd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41FD50u;
            // 0x41fd54: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fd50) {
            ctx->pc = 0x41FD70u;
            goto label_41fd70;
        }
    }
    ctx->pc = 0x41FD58u;
label_41fd58:
    // 0x41fd58: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x41fd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_41fd5c:
    // 0x41fd5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x41fd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_41fd60:
    // 0x41fd60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x41fd60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41fd64:
    // 0x41fd64: 0x0  nop
    ctx->pc = 0x41fd64u;
    // NOP
label_41fd68:
    // 0x41fd68: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x41fd68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_41fd6c:
    // 0x41fd6c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x41fd6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_41fd70:
    // 0x41fd70: 0xc660022c  lwc1        $f0, 0x22C($s3)
    ctx->pc = 0x41fd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41fd74:
    // 0x41fd74: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x41fd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_41fd78:
    // 0x41fd78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x41fd78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_41fd7c:
    // 0x41fd7c: 0xc0dc408  jal         func_371020
label_41fd80:
    if (ctx->pc == 0x41FD80u) {
        ctx->pc = 0x41FD80u;
            // 0x41fd80: 0xe660022c  swc1        $f0, 0x22C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 556), bits); }
        ctx->pc = 0x41FD84u;
        goto label_41fd84;
    }
    ctx->pc = 0x41FD7Cu;
    SET_GPR_U32(ctx, 31, 0x41FD84u);
    ctx->pc = 0x41FD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FD7Cu;
            // 0x41fd80: 0xe660022c  swc1        $f0, 0x22C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 556), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FD84u; }
        if (ctx->pc != 0x41FD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FD84u; }
        if (ctx->pc != 0x41FD84u) { return; }
    }
    ctx->pc = 0x41FD84u;
label_41fd84:
    // 0x41fd84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41fd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41fd88:
    // 0x41fd88: 0xc0dc9bc  jal         func_3726F0
label_41fd8c:
    if (ctx->pc == 0x41FD8Cu) {
        ctx->pc = 0x41FD8Cu;
            // 0x41fd8c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x41FD90u;
        goto label_41fd90;
    }
    ctx->pc = 0x41FD88u;
    SET_GPR_U32(ctx, 31, 0x41FD90u);
    ctx->pc = 0x41FD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FD88u;
            // 0x41fd8c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FD90u; }
        if (ctx->pc != 0x41FD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FD90u; }
        if (ctx->pc != 0x41FD90u) { return; }
    }
    ctx->pc = 0x41FD90u;
label_41fd90:
    // 0x41fd90: 0xc0dc408  jal         func_371020
label_41fd94:
    if (ctx->pc == 0x41FD94u) {
        ctx->pc = 0x41FD94u;
            // 0x41fd94: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->pc = 0x41FD98u;
        goto label_41fd98;
    }
    ctx->pc = 0x41FD90u;
    SET_GPR_U32(ctx, 31, 0x41FD98u);
    ctx->pc = 0x41FD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FD90u;
            // 0x41fd94: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FD98u; }
        if (ctx->pc != 0x41FD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FD98u; }
        if (ctx->pc != 0x41FD98u) { return; }
    }
    ctx->pc = 0x41FD98u;
label_41fd98:
    // 0x41fd98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41fd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41fd9c:
    // 0x41fd9c: 0xc0dc9a0  jal         func_372680
label_41fda0:
    if (ctx->pc == 0x41FDA0u) {
        ctx->pc = 0x41FDA0u;
            // 0x41fda0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x41FDA4u;
        goto label_41fda4;
    }
    ctx->pc = 0x41FD9Cu;
    SET_GPR_U32(ctx, 31, 0x41FDA4u);
    ctx->pc = 0x41FDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FD9Cu;
            // 0x41fda0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FDA4u; }
        if (ctx->pc != 0x41FDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FDA4u; }
        if (ctx->pc != 0x41FDA4u) { return; }
    }
    ctx->pc = 0x41FDA4u;
label_41fda4:
    // 0x41fda4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x41fda4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_41fda8:
    // 0x41fda8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x41fda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_41fdac:
    // 0x41fdac: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x41fdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_41fdb0:
    // 0x41fdb0: 0xc107dd4  jal         func_41F750
label_41fdb4:
    if (ctx->pc == 0x41FDB4u) {
        ctx->pc = 0x41FDB4u;
            // 0x41fdb4: 0x24c6c750  addiu       $a2, $a2, -0x38B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952784));
        ctx->pc = 0x41FDB8u;
        goto label_41fdb8;
    }
    ctx->pc = 0x41FDB0u;
    SET_GPR_U32(ctx, 31, 0x41FDB8u);
    ctx->pc = 0x41FDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FDB0u;
            // 0x41fdb4: 0x24c6c750  addiu       $a2, $a2, -0x38B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41F750u;
    goto label_41f750;
    ctx->pc = 0x41FDB8u;
label_41fdb8:
    // 0x41fdb8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x41fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_41fdbc:
    // 0x41fdbc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x41fdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_41fdc0:
    // 0x41fdc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x41fdc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41fdc4:
    // 0x41fdc4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41fdc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41fdc8:
    // 0x41fdc8: 0xc04cc7c  jal         func_1331F0
label_41fdcc:
    if (ctx->pc == 0x41FDCCu) {
        ctx->pc = 0x41FDCCu;
            // 0x41fdcc: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x41FDD0u;
        goto label_41fdd0;
    }
    ctx->pc = 0x41FDC8u;
    SET_GPR_U32(ctx, 31, 0x41FDD0u);
    ctx->pc = 0x41FDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FDC8u;
            // 0x41fdcc: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FDD0u; }
        if (ctx->pc != 0x41FDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FDD0u; }
        if (ctx->pc != 0x41FDD0u) { return; }
    }
    ctx->pc = 0x41FDD0u;
label_41fdd0:
    // 0x41fdd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41fdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41fdd4:
    // 0x41fdd4: 0xc0f8e34  jal         func_3E38D0
label_41fdd8:
    if (ctx->pc == 0x41FDD8u) {
        ctx->pc = 0x41FDD8u;
            // 0x41fdd8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x41FDDCu;
        goto label_41fddc;
    }
    ctx->pc = 0x41FDD4u;
    SET_GPR_U32(ctx, 31, 0x41FDDCu);
    ctx->pc = 0x41FDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FDD4u;
            // 0x41fdd8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38D0u;
    if (runtime->hasFunction(0x3E38D0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FDDCu; }
        if (ctx->pc != 0x41FDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38D0_0x3e38d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FDDCu; }
        if (ctx->pc != 0x41FDDCu) { return; }
    }
    ctx->pc = 0x41FDDCu;
label_41fddc:
    // 0x41fddc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41fddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41fde0:
    // 0x41fde0: 0xc0e1b28  jal         func_386CA0
label_41fde4:
    if (ctx->pc == 0x41FDE4u) {
        ctx->pc = 0x41FDE4u;
            // 0x41fde4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x41FDE8u;
        goto label_41fde8;
    }
    ctx->pc = 0x41FDE0u;
    SET_GPR_U32(ctx, 31, 0x41FDE8u);
    ctx->pc = 0x41FDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FDE0u;
            // 0x41fde4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FDE8u; }
        if (ctx->pc != 0x41FDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FDE8u; }
        if (ctx->pc != 0x41FDE8u) { return; }
    }
    ctx->pc = 0x41FDE8u;
label_41fde8:
    // 0x41fde8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x41fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_41fdec:
    // 0x41fdec: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x41fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_41fdf0:
    // 0x41fdf0: 0xc6610200  lwc1        $f1, 0x200($s3)
    ctx->pc = 0x41fdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41fdf4:
    // 0x41fdf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x41fdf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41fdf8:
    // 0x41fdf8: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x41fdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41fdfc:
    // 0x41fdfc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x41fdfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_41fe00:
    // 0x41fe00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x41fe00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41fe04:
    // 0x41fe04: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
label_41fe08:
    if (ctx->pc == 0x41FE08u) {
        ctx->pc = 0x41FE08u;
            // 0x41fe08: 0xe6610200  swc1        $f1, 0x200($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 512), bits); }
        ctx->pc = 0x41FE0Cu;
        goto label_41fe0c;
    }
    ctx->pc = 0x41FE04u;
    {
        const bool branch_taken_0x41fe04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x41FE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41FE04u;
            // 0x41fe08: 0xe6610200  swc1        $f1, 0x200($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 512), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fe04) {
            ctx->pc = 0x41FF78u;
            goto label_41ff78;
        }
    }
    ctx->pc = 0x41FE0Cu;
label_41fe0c:
    // 0x41fe0c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x41fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41fe10:
    // 0x41fe10: 0xae630224  sw          $v1, 0x224($s3)
    ctx->pc = 0x41fe10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 548), GPR_U32(ctx, 3));
label_41fe14:
    // 0x41fe14: 0x10000058  b           . + 4 + (0x58 << 2)
label_41fe18:
    if (ctx->pc == 0x41FE18u) {
        ctx->pc = 0x41FE18u;
            // 0x41fe18: 0xe6600204  swc1        $f0, 0x204($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 516), bits); }
        ctx->pc = 0x41FE1Cu;
        goto label_41fe1c;
    }
    ctx->pc = 0x41FE14u;
    {
        const bool branch_taken_0x41fe14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41FE14u;
            // 0x41fe18: 0xe6600204  swc1        $f0, 0x204($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 516), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fe14) {
            ctx->pc = 0x41FF78u;
            goto label_41ff78;
        }
    }
    ctx->pc = 0x41FE1Cu;
label_41fe1c:
    // 0x41fe1c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x41fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_41fe20:
    // 0x41fe20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41fe24:
    // 0x41fe24: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x41fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_41fe28:
    // 0x41fe28: 0xc6600228  lwc1        $f0, 0x228($s3)
    ctx->pc = 0x41fe28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41fe2c:
    // 0x41fe2c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x41fe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41fe30:
    // 0x41fe30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x41fe30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_41fe34:
    // 0x41fe34: 0xe6600228  swc1        $f0, 0x228($s3)
    ctx->pc = 0x41fe34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 552), bits); }
label_41fe38:
    // 0x41fe38: 0x8c426ee0  lw          $v0, 0x6EE0($v0)
    ctx->pc = 0x41fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28384)));
label_41fe3c:
    // 0x41fe3c: 0xc6600228  lwc1        $f0, 0x228($s3)
    ctx->pc = 0x41fe3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41fe40:
    // 0x41fe40: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x41fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_41fe44:
    // 0x41fe44: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x41fe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41fe48:
    // 0x41fe48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x41fe48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41fe4c:
    // 0x41fe4c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_41fe50:
    if (ctx->pc == 0x41FE50u) {
        ctx->pc = 0x41FE50u;
            // 0x41fe50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41FE54u;
        goto label_41fe54;
    }
    ctx->pc = 0x41FE4Cu;
    {
        const bool branch_taken_0x41fe4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x41FE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41FE4Cu;
            // 0x41fe50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fe4c) {
            ctx->pc = 0x41FE58u;
            goto label_41fe58;
        }
    }
    ctx->pc = 0x41FE54u;
label_41fe54:
    // 0x41fe54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x41fe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41fe58:
    // 0x41fe58: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_41fe5c:
    if (ctx->pc == 0x41FE5Cu) {
        ctx->pc = 0x41FE5Cu;
            // 0x41fe5c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x41FE60u;
        goto label_41fe60;
    }
    ctx->pc = 0x41FE58u;
    {
        const bool branch_taken_0x41fe58 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x41fe58) {
            ctx->pc = 0x41FE5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41FE58u;
            // 0x41fe5c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41FE6Cu;
            goto label_41fe6c;
        }
    }
    ctx->pc = 0x41FE60u;
label_41fe60:
    // 0x41fe60: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x41fe60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41fe64:
    // 0x41fe64: 0x10000007  b           . + 4 + (0x7 << 2)
label_41fe68:
    if (ctx->pc == 0x41FE68u) {
        ctx->pc = 0x41FE68u;
            // 0x41fe68: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x41FE6Cu;
        goto label_41fe6c;
    }
    ctx->pc = 0x41FE64u;
    {
        const bool branch_taken_0x41fe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41FE64u;
            // 0x41fe68: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fe64) {
            ctx->pc = 0x41FE84u;
            goto label_41fe84;
        }
    }
    ctx->pc = 0x41FE6Cu;
label_41fe6c:
    // 0x41fe6c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x41fe6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_41fe70:
    // 0x41fe70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x41fe70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_41fe74:
    // 0x41fe74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x41fe74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41fe78:
    // 0x41fe78: 0x0  nop
    ctx->pc = 0x41fe78u;
    // NOP
label_41fe7c:
    // 0x41fe7c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x41fe7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_41fe80:
    // 0x41fe80: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x41fe80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_41fe84:
    // 0x41fe84: 0xc6600228  lwc1        $f0, 0x228($s3)
    ctx->pc = 0x41fe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41fe88:
    // 0x41fe88: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x41fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_41fe8c:
    // 0x41fe8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41fe90:
    // 0x41fe90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x41fe90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_41fe94:
    // 0x41fe94: 0xe6600228  swc1        $f0, 0x228($s3)
    ctx->pc = 0x41fe94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 552), bits); }
label_41fe98:
    // 0x41fe98: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x41fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_41fe9c:
    // 0x41fe9c: 0xc660022c  lwc1        $f0, 0x22C($s3)
    ctx->pc = 0x41fe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41fea0:
    // 0x41fea0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x41fea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41fea4:
    // 0x41fea4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x41fea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_41fea8:
    // 0x41fea8: 0xe660022c  swc1        $f0, 0x22C($s3)
    ctx->pc = 0x41fea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 556), bits); }
label_41feac:
    // 0x41feac: 0x8c426ee0  lw          $v0, 0x6EE0($v0)
    ctx->pc = 0x41feacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28384)));
label_41feb0:
    // 0x41feb0: 0xc660022c  lwc1        $f0, 0x22C($s3)
    ctx->pc = 0x41feb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41feb4:
    // 0x41feb4: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x41feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_41feb8:
    // 0x41feb8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x41feb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41febc:
    // 0x41febc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x41febcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41fec0:
    // 0x41fec0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_41fec4:
    if (ctx->pc == 0x41FEC4u) {
        ctx->pc = 0x41FEC4u;
            // 0x41fec4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41FEC8u;
        goto label_41fec8;
    }
    ctx->pc = 0x41FEC0u;
    {
        const bool branch_taken_0x41fec0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x41FEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41FEC0u;
            // 0x41fec4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fec0) {
            ctx->pc = 0x41FECCu;
            goto label_41fecc;
        }
    }
    ctx->pc = 0x41FEC8u;
label_41fec8:
    // 0x41fec8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x41fec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41fecc:
    // 0x41fecc: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_41fed0:
    if (ctx->pc == 0x41FED0u) {
        ctx->pc = 0x41FED0u;
            // 0x41fed0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x41FED4u;
        goto label_41fed4;
    }
    ctx->pc = 0x41FECCu;
    {
        const bool branch_taken_0x41fecc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x41fecc) {
            ctx->pc = 0x41FED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41FECCu;
            // 0x41fed0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41FEE0u;
            goto label_41fee0;
        }
    }
    ctx->pc = 0x41FED4u;
label_41fed4:
    // 0x41fed4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x41fed4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41fed8:
    // 0x41fed8: 0x10000007  b           . + 4 + (0x7 << 2)
label_41fedc:
    if (ctx->pc == 0x41FEDCu) {
        ctx->pc = 0x41FEDCu;
            // 0x41fedc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x41FEE0u;
        goto label_41fee0;
    }
    ctx->pc = 0x41FED8u;
    {
        const bool branch_taken_0x41fed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41FED8u;
            // 0x41fedc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fed8) {
            ctx->pc = 0x41FEF8u;
            goto label_41fef8;
        }
    }
    ctx->pc = 0x41FEE0u;
label_41fee0:
    // 0x41fee0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x41fee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_41fee4:
    // 0x41fee4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x41fee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_41fee8:
    // 0x41fee8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x41fee8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41feec:
    // 0x41feec: 0x0  nop
    ctx->pc = 0x41feecu;
    // NOP
label_41fef0:
    // 0x41fef0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x41fef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_41fef4:
    // 0x41fef4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x41fef4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_41fef8:
    // 0x41fef8: 0xc660022c  lwc1        $f0, 0x22C($s3)
    ctx->pc = 0x41fef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41fefc:
    // 0x41fefc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41fefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41ff00:
    // 0x41ff00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x41ff00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_41ff04:
    // 0x41ff04: 0xc107ab8  jal         func_41EAE0
label_41ff08:
    if (ctx->pc == 0x41FF08u) {
        ctx->pc = 0x41FF08u;
            // 0x41ff08: 0xe660022c  swc1        $f0, 0x22C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 556), bits); }
        ctx->pc = 0x41FF0Cu;
        goto label_41ff0c;
    }
    ctx->pc = 0x41FF04u;
    SET_GPR_U32(ctx, 31, 0x41FF0Cu);
    ctx->pc = 0x41FF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FF04u;
            // 0x41ff08: 0xe660022c  swc1        $f0, 0x22C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 556), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x41EAE0u;
    if (runtime->hasFunction(0x41EAE0u)) {
        auto targetFn = runtime->lookupFunction(0x41EAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FF0Cu; }
        if (ctx->pc != 0x41FF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041EAE0_0x41eae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FF0Cu; }
        if (ctx->pc != 0x41FF0Cu) { return; }
    }
    ctx->pc = 0x41FF0Cu;
label_41ff0c:
    // 0x41ff0c: 0xc0dc408  jal         func_371020
label_41ff10:
    if (ctx->pc == 0x41FF10u) {
        ctx->pc = 0x41FF10u;
            // 0x41ff10: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->pc = 0x41FF14u;
        goto label_41ff14;
    }
    ctx->pc = 0x41FF0Cu;
    SET_GPR_U32(ctx, 31, 0x41FF14u);
    ctx->pc = 0x41FF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FF0Cu;
            // 0x41ff10: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FF14u; }
        if (ctx->pc != 0x41FF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FF14u; }
        if (ctx->pc != 0x41FF14u) { return; }
    }
    ctx->pc = 0x41FF14u;
label_41ff14:
    // 0x41ff14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41ff14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41ff18:
    // 0x41ff18: 0xc0dc9bc  jal         func_3726F0
label_41ff1c:
    if (ctx->pc == 0x41FF1Cu) {
        ctx->pc = 0x41FF1Cu;
            // 0x41ff1c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x41FF20u;
        goto label_41ff20;
    }
    ctx->pc = 0x41FF18u;
    SET_GPR_U32(ctx, 31, 0x41FF20u);
    ctx->pc = 0x41FF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FF18u;
            // 0x41ff1c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FF20u; }
        if (ctx->pc != 0x41FF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FF20u; }
        if (ctx->pc != 0x41FF20u) { return; }
    }
    ctx->pc = 0x41FF20u;
label_41ff20:
    // 0x41ff20: 0xc0dc408  jal         func_371020
label_41ff24:
    if (ctx->pc == 0x41FF24u) {
        ctx->pc = 0x41FF24u;
            // 0x41ff24: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->pc = 0x41FF28u;
        goto label_41ff28;
    }
    ctx->pc = 0x41FF20u;
    SET_GPR_U32(ctx, 31, 0x41FF28u);
    ctx->pc = 0x41FF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FF20u;
            // 0x41ff24: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FF28u; }
        if (ctx->pc != 0x41FF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FF28u; }
        if (ctx->pc != 0x41FF28u) { return; }
    }
    ctx->pc = 0x41FF28u;
label_41ff28:
    // 0x41ff28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41ff28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41ff2c:
    // 0x41ff2c: 0xc0dc9a0  jal         func_372680
label_41ff30:
    if (ctx->pc == 0x41FF30u) {
        ctx->pc = 0x41FF30u;
            // 0x41ff30: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x41FF34u;
        goto label_41ff34;
    }
    ctx->pc = 0x41FF2Cu;
    SET_GPR_U32(ctx, 31, 0x41FF34u);
    ctx->pc = 0x41FF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FF2Cu;
            // 0x41ff30: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FF34u; }
        if (ctx->pc != 0x41FF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FF34u; }
        if (ctx->pc != 0x41FF34u) { return; }
    }
    ctx->pc = 0x41FF34u;
label_41ff34:
    // 0x41ff34: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x41ff34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_41ff38:
    // 0x41ff38: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x41ff38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_41ff3c:
    // 0x41ff3c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x41ff3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_41ff40:
    // 0x41ff40: 0xc107dd4  jal         func_41F750
label_41ff44:
    if (ctx->pc == 0x41FF44u) {
        ctx->pc = 0x41FF44u;
            // 0x41ff44: 0x24c6c750  addiu       $a2, $a2, -0x38B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952784));
        ctx->pc = 0x41FF48u;
        goto label_41ff48;
    }
    ctx->pc = 0x41FF40u;
    SET_GPR_U32(ctx, 31, 0x41FF48u);
    ctx->pc = 0x41FF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FF40u;
            // 0x41ff44: 0x24c6c750  addiu       $a2, $a2, -0x38B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41F750u;
    goto label_41f750;
    ctx->pc = 0x41FF48u;
label_41ff48:
    // 0x41ff48: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x41ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_41ff4c:
    // 0x41ff4c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x41ff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_41ff50:
    // 0x41ff50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x41ff50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41ff54:
    // 0x41ff54: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41ff54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41ff58:
    // 0x41ff58: 0xc04cc7c  jal         func_1331F0
label_41ff5c:
    if (ctx->pc == 0x41FF5Cu) {
        ctx->pc = 0x41FF5Cu;
            // 0x41ff5c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x41FF60u;
        goto label_41ff60;
    }
    ctx->pc = 0x41FF58u;
    SET_GPR_U32(ctx, 31, 0x41FF60u);
    ctx->pc = 0x41FF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FF58u;
            // 0x41ff5c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FF60u; }
        if (ctx->pc != 0x41FF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FF60u; }
        if (ctx->pc != 0x41FF60u) { return; }
    }
    ctx->pc = 0x41FF60u;
label_41ff60:
    // 0x41ff60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41ff60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41ff64:
    // 0x41ff64: 0xc0f8e34  jal         func_3E38D0
label_41ff68:
    if (ctx->pc == 0x41FF68u) {
        ctx->pc = 0x41FF68u;
            // 0x41ff68: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x41FF6Cu;
        goto label_41ff6c;
    }
    ctx->pc = 0x41FF64u;
    SET_GPR_U32(ctx, 31, 0x41FF6Cu);
    ctx->pc = 0x41FF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FF64u;
            // 0x41ff68: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38D0u;
    if (runtime->hasFunction(0x3E38D0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FF6Cu; }
        if (ctx->pc != 0x41FF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38D0_0x3e38d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FF6Cu; }
        if (ctx->pc != 0x41FF6Cu) { return; }
    }
    ctx->pc = 0x41FF6Cu;
label_41ff6c:
    // 0x41ff6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41ff6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41ff70:
    // 0x41ff70: 0xc0e1b28  jal         func_386CA0
label_41ff74:
    if (ctx->pc == 0x41FF74u) {
        ctx->pc = 0x41FF74u;
            // 0x41ff74: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x41FF78u;
        goto label_41ff78;
    }
    ctx->pc = 0x41FF70u;
    SET_GPR_U32(ctx, 31, 0x41FF78u);
    ctx->pc = 0x41FF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FF70u;
            // 0x41ff74: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x386CA0u;
    if (runtime->hasFunction(0x386CA0u)) {
        auto targetFn = runtime->lookupFunction(0x386CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FF78u; }
        if (ctx->pc != 0x41FF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00386CA0_0x386ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FF78u; }
        if (ctx->pc != 0x41FF78u) { return; }
    }
    ctx->pc = 0x41FF78u;
label_41ff78:
    // 0x41ff78: 0x8e630224  lw          $v1, 0x224($s3)
    ctx->pc = 0x41ff78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
label_41ff7c:
    // 0x41ff7c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x41ff7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_41ff80:
    // 0x41ff80: 0x5420004c  bnel        $at, $zero, . + 4 + (0x4C << 2)
label_41ff84:
    if (ctx->pc == 0x41FF84u) {
        ctx->pc = 0x41FF84u;
            // 0x41ff84: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x41FF88u;
        goto label_41ff88;
    }
    ctx->pc = 0x41FF80u;
    {
        const bool branch_taken_0x41ff80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x41ff80) {
            ctx->pc = 0x41FF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41FF80u;
            // 0x41ff84: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4200B4u;
            goto label_4200b4;
        }
    }
    ctx->pc = 0x41FF88u;
label_41ff88:
    // 0x41ff88: 0x8e63021c  lw          $v1, 0x21C($s3)
    ctx->pc = 0x41ff88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 540)));
label_41ff8c:
    // 0x41ff8c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x41ff8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41ff90:
    // 0x41ff90: 0x10660047  beq         $v1, $a2, . + 4 + (0x47 << 2)
label_41ff94:
    if (ctx->pc == 0x41FF94u) {
        ctx->pc = 0x41FF98u;
        goto label_41ff98;
    }
    ctx->pc = 0x41FF90u;
    {
        const bool branch_taken_0x41ff90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x41ff90) {
            ctx->pc = 0x4200B0u;
            goto label_4200b0;
        }
    }
    ctx->pc = 0x41FF98u;
label_41ff98:
    // 0x41ff98: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x41ff98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41ff9c:
    // 0x41ff9c: 0x10720033  beq         $v1, $s2, . + 4 + (0x33 << 2)
label_41ffa0:
    if (ctx->pc == 0x41FFA0u) {
        ctx->pc = 0x41FFA4u;
        goto label_41ffa4;
    }
    ctx->pc = 0x41FF9Cu;
    {
        const bool branch_taken_0x41ff9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x41ff9c) {
            ctx->pc = 0x42006Cu;
            goto label_42006c;
        }
    }
    ctx->pc = 0x41FFA4u;
label_41ffa4:
    // 0x41ffa4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_41ffa8:
    if (ctx->pc == 0x41FFA8u) {
        ctx->pc = 0x41FFACu;
        goto label_41ffac;
    }
    ctx->pc = 0x41FFA4u;
    {
        const bool branch_taken_0x41ffa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x41ffa4) {
            ctx->pc = 0x41FFB4u;
            goto label_41ffb4;
        }
    }
    ctx->pc = 0x41FFACu;
label_41ffac:
    // 0x41ffac: 0x10000040  b           . + 4 + (0x40 << 2)
label_41ffb0:
    if (ctx->pc == 0x41FFB0u) {
        ctx->pc = 0x41FFB4u;
        goto label_41ffb4;
    }
    ctx->pc = 0x41FFACu;
    {
        const bool branch_taken_0x41ffac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41ffac) {
            ctx->pc = 0x4200B0u;
            goto label_4200b0;
        }
    }
    ctx->pc = 0x41FFB4u;
label_41ffb4:
    // 0x41ffb4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x41ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_41ffb8:
    // 0x41ffb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41ffbc:
    // 0x41ffbc: 0x8c710e84  lw          $s1, 0xE84($v1)
    ctx->pc = 0x41ffbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3716)));
label_41ffc0:
    // 0x41ffc0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x41ffc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_41ffc4:
    // 0x41ffc4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x41ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_41ffc8:
    // 0x41ffc8: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x41ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_41ffcc:
    // 0x41ffcc: 0x8c50077c  lw          $s0, 0x77C($v0)
    ctx->pc = 0x41ffccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_41ffd0:
    // 0x41ffd0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x41ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_41ffd4:
    // 0x41ffd4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x41ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_41ffd8:
    // 0x41ffd8: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x41ffd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41ffdc:
    // 0x41ffdc: 0xc089688  jal         func_225A20
label_41ffe0:
    if (ctx->pc == 0x41FFE0u) {
        ctx->pc = 0x41FFE0u;
            // 0x41ffe0: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x41FFE4u;
        goto label_41ffe4;
    }
    ctx->pc = 0x41FFDCu;
    SET_GPR_U32(ctx, 31, 0x41FFE4u);
    ctx->pc = 0x41FFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FFDCu;
            // 0x41ffe0: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FFE4u; }
        if (ctx->pc != 0x41FFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FFE4u; }
        if (ctx->pc != 0x41FFE4u) { return; }
    }
    ctx->pc = 0x41FFE4u;
label_41ffe4:
    // 0x41ffe4: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x41ffe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41ffe8:
    // 0x41ffe8: 0xc7ad00f4  lwc1        $f13, 0xF4($sp)
    ctx->pc = 0x41ffe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_41ffec:
    // 0x41ffec: 0xc7ae00f8  lwc1        $f14, 0xF8($sp)
    ctx->pc = 0x41ffecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_41fff0:
    // 0x41fff0: 0xc04cbd8  jal         func_132F60
label_41fff4:
    if (ctx->pc == 0x41FFF4u) {
        ctx->pc = 0x41FFF4u;
            // 0x41fff4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x41FFF8u;
        goto label_41fff8;
    }
    ctx->pc = 0x41FFF0u;
    SET_GPR_U32(ctx, 31, 0x41FFF8u);
    ctx->pc = 0x41FFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FFF0u;
            // 0x41fff4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FFF8u; }
        if (ctx->pc != 0x41FFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41FFF8u; }
        if (ctx->pc != 0x41FFF8u) { return; }
    }
    ctx->pc = 0x41FFF8u;
label_41fff8:
    // 0x41fff8: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x41fff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_41fffc:
    // 0x41fffc: 0xc04cc1c  jal         func_133070
label_420000:
    if (ctx->pc == 0x420000u) {
        ctx->pc = 0x420000u;
            // 0x420000: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x420004u;
        goto label_420004;
    }
    ctx->pc = 0x41FFFCu;
    SET_GPR_U32(ctx, 31, 0x420004u);
    ctx->pc = 0x420000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41FFFCu;
            // 0x420000: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420004u; }
        if (ctx->pc != 0x420004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420004u; }
        if (ctx->pc != 0x420004u) { return; }
    }
    ctx->pc = 0x420004u;
label_420004:
    // 0x420004: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x420004u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_420008:
    // 0x420008: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
label_42000c:
    if (ctx->pc == 0x42000Cu) {
        ctx->pc = 0x42000Cu;
            // 0x42000c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x420010u;
        goto label_420010;
    }
    ctx->pc = 0x420008u;
    {
        const bool branch_taken_0x420008 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x42000Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420008u;
            // 0x42000c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x420008) {
            ctx->pc = 0x420048u;
            goto label_420048;
        }
    }
    ctx->pc = 0x420010u;
label_420010:
    // 0x420010: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x420010u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_420014:
    // 0x420014: 0x26310e84  addiu       $s1, $s1, 0xE84
    ctx->pc = 0x420014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3716));
label_420018:
    // 0x420018: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x420018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_42001c:
    // 0x42001c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x42001cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_420020:
    // 0x420020: 0xc04cc1c  jal         func_133070
label_420024:
    if (ctx->pc == 0x420024u) {
        ctx->pc = 0x420024u;
            // 0x420024: 0x244502c0  addiu       $a1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->pc = 0x420028u;
        goto label_420028;
    }
    ctx->pc = 0x420020u;
    SET_GPR_U32(ctx, 31, 0x420028u);
    ctx->pc = 0x420024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420020u;
            // 0x420024: 0x244502c0  addiu       $a1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420028u; }
        if (ctx->pc != 0x420028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420028u; }
        if (ctx->pc != 0x420028u) { return; }
    }
    ctx->pc = 0x420028u;
label_420028:
    // 0x420028: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x420028u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42002c:
    // 0x42002c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_420030:
    if (ctx->pc == 0x420030u) {
        ctx->pc = 0x420034u;
        goto label_420034;
    }
    ctx->pc = 0x42002Cu;
    {
        const bool branch_taken_0x42002c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x42002c) {
            ctx->pc = 0x420038u;
            goto label_420038;
        }
    }
    ctx->pc = 0x420034u;
label_420034:
    // 0x420034: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x420034u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_420038:
    // 0x420038: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x420038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_42003c:
    // 0x42003c: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x42003cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_420040:
    // 0x420040: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_420044:
    if (ctx->pc == 0x420044u) {
        ctx->pc = 0x420044u;
            // 0x420044: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x420048u;
        goto label_420048;
    }
    ctx->pc = 0x420040u;
    {
        const bool branch_taken_0x420040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x420044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420040u;
            // 0x420044: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420040) {
            ctx->pc = 0x420018u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_420018;
        }
    }
    ctx->pc = 0x420048u;
label_420048:
    // 0x420048: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x420048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_42004c:
    // 0x42004c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x42004cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_420050:
    // 0x420050: 0x0  nop
    ctx->pc = 0x420050u;
    // NOP
label_420054:
    // 0x420054: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x420054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_420058:
    // 0x420058: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_42005c:
    if (ctx->pc == 0x42005Cu) {
        ctx->pc = 0x420060u;
        goto label_420060;
    }
    ctx->pc = 0x420058u;
    {
        const bool branch_taken_0x420058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x420058) {
            ctx->pc = 0x4200B0u;
            goto label_4200b0;
        }
    }
    ctx->pc = 0x420060u;
label_420060:
    // 0x420060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x420060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_420064:
    // 0x420064: 0x10000012  b           . + 4 + (0x12 << 2)
label_420068:
    if (ctx->pc == 0x420068u) {
        ctx->pc = 0x420068u;
            // 0x420068: 0xae63021c  sw          $v1, 0x21C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 540), GPR_U32(ctx, 3));
        ctx->pc = 0x42006Cu;
        goto label_42006c;
    }
    ctx->pc = 0x420064u;
    {
        const bool branch_taken_0x420064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420064u;
            // 0x420068: 0xae63021c  sw          $v1, 0x21C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 540), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420064) {
            ctx->pc = 0x4200B0u;
            goto label_4200b0;
        }
    }
    ctx->pc = 0x42006Cu;
label_42006c:
    // 0x42006c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x42006cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_420070:
    // 0x420070: 0x3c043d6e  lui         $a0, 0x3D6E
    ctx->pc = 0x420070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15726 << 16));
label_420074:
    // 0x420074: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x420074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_420078:
    // 0x420078: 0xc6620230  lwc1        $f2, 0x230($s3)
    ctx->pc = 0x420078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42007c:
    // 0x42007c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x42007cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_420080:
    // 0x420080: 0x3483eeef  ori         $v1, $a0, 0xEEEF
    ctx->pc = 0x420080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61167);
label_420084:
    // 0x420084: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x420084u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_420088:
    // 0x420088: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x420088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_42008c:
    // 0x42008c: 0xc4a40018  lwc1        $f4, 0x18($a1)
    ctx->pc = 0x42008cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_420090:
    // 0x420090: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x420090u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_420094:
    // 0x420094: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x420094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_420098:
    // 0x420098: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x420098u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_42009c:
    // 0x42009c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x42009cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4200a0:
    // 0x4200a0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_4200a4:
    if (ctx->pc == 0x4200A4u) {
        ctx->pc = 0x4200A4u;
            // 0x4200a4: 0xe6610230  swc1        $f1, 0x230($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 560), bits); }
        ctx->pc = 0x4200A8u;
        goto label_4200a8;
    }
    ctx->pc = 0x4200A0u;
    {
        const bool branch_taken_0x4200a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4200A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4200A0u;
            // 0x4200a4: 0xe6610230  swc1        $f1, 0x230($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4200a0) {
            ctx->pc = 0x4200B0u;
            goto label_4200b0;
        }
    }
    ctx->pc = 0x4200A8u;
label_4200a8:
    // 0x4200a8: 0xe6600230  swc1        $f0, 0x230($s3)
    ctx->pc = 0x4200a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 560), bits); }
label_4200ac:
    // 0x4200ac: 0xae66021c  sw          $a2, 0x21C($s3)
    ctx->pc = 0x4200acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 540), GPR_U32(ctx, 6));
label_4200b0:
    // 0x4200b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4200b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4200b4:
    // 0x4200b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4200b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4200b8:
    // 0x4200b8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4200b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4200bc:
    // 0x4200bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4200bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4200c0:
    // 0x4200c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4200c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4200c4:
    // 0x4200c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4200c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4200c8:
    // 0x4200c8: 0x3e00008  jr          $ra
label_4200cc:
    if (ctx->pc == 0x4200CCu) {
        ctx->pc = 0x4200CCu;
            // 0x4200cc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x4200D0u;
        goto label_4200d0;
    }
    ctx->pc = 0x4200C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4200CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4200C8u;
            // 0x4200cc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4200D0u;
label_4200d0:
    // 0x4200d0: 0x3e00008  jr          $ra
label_4200d4:
    if (ctx->pc == 0x4200D4u) {
        ctx->pc = 0x4200D4u;
            // 0x4200d4: 0x240261bc  addiu       $v0, $zero, 0x61BC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25020));
        ctx->pc = 0x4200D8u;
        goto label_4200d8;
    }
    ctx->pc = 0x4200D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4200D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4200D0u;
            // 0x4200d4: 0x240261bc  addiu       $v0, $zero, 0x61BC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25020));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4200D8u;
label_4200d8:
    // 0x4200d8: 0x0  nop
    ctx->pc = 0x4200d8u;
    // NOP
label_4200dc:
    // 0x4200dc: 0x0  nop
    ctx->pc = 0x4200dcu;
    // NOP
label_4200e0:
    // 0x4200e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4200e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4200e4:
    // 0x4200e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4200e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4200e8:
    // 0x4200e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4200e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4200ec:
    // 0x4200ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4200ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4200f0:
    // 0x4200f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4200f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4200f4:
    // 0x4200f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4200f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4200f8:
    // 0x4200f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4200f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4200fc:
    // 0x4200fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4200fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_420100:
    // 0x420100: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x420100u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_420104:
    // 0x420104: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_420108:
    if (ctx->pc == 0x420108u) {
        ctx->pc = 0x420108u;
            // 0x420108: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42010Cu;
        goto label_42010c;
    }
    ctx->pc = 0x420104u;
    {
        const bool branch_taken_0x420104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x420108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420104u;
            // 0x420108: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420104) {
            ctx->pc = 0x420148u;
            goto label_420148;
        }
    }
    ctx->pc = 0x42010Cu;
label_42010c:
    // 0x42010c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42010cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420110:
    // 0x420110: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x420110u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420114:
    // 0x420114: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x420114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420118:
    // 0x420118: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x420118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_42011c:
    // 0x42011c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x42011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_420120:
    // 0x420120: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x420120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_420124:
    // 0x420124: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x420124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_420128:
    // 0x420128: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x420128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_42012c:
    // 0x42012c: 0x320f809  jalr        $t9
label_420130:
    if (ctx->pc == 0x420130u) {
        ctx->pc = 0x420134u;
        goto label_420134;
    }
    ctx->pc = 0x42012Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x420134u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x420134u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x420134u; }
            if (ctx->pc != 0x420134u) { return; }
        }
        }
    }
    ctx->pc = 0x420134u;
label_420134:
    // 0x420134: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x420134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_420138:
    // 0x420138: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x420138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_42013c:
    // 0x42013c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x42013cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_420140:
    // 0x420140: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_420144:
    if (ctx->pc == 0x420144u) {
        ctx->pc = 0x420144u;
            // 0x420144: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x420148u;
        goto label_420148;
    }
    ctx->pc = 0x420140u;
    {
        const bool branch_taken_0x420140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x420144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420140u;
            // 0x420144: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420140) {
            ctx->pc = 0x420118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_420118;
        }
    }
    ctx->pc = 0x420148u;
label_420148:
    // 0x420148: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x420148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42014c:
    // 0x42014c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x42014cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_420150:
    // 0x420150: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x420150u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_420154:
    // 0x420154: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x420154u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_420158:
    // 0x420158: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x420158u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42015c:
    // 0x42015c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42015cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_420160:
    // 0x420160: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x420160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_420164:
    // 0x420164: 0x3e00008  jr          $ra
label_420168:
    if (ctx->pc == 0x420168u) {
        ctx->pc = 0x420168u;
            // 0x420168: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x42016Cu;
        goto label_42016c;
    }
    ctx->pc = 0x420164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420164u;
            // 0x420168: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42016Cu;
label_42016c:
    // 0x42016c: 0x0  nop
    ctx->pc = 0x42016cu;
    // NOP
label_420170:
    // 0x420170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x420170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_420174:
    // 0x420174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x420174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_420178:
    // 0x420178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x420178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42017c:
    // 0x42017c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x42017cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_420180:
    // 0x420180: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_420184:
    if (ctx->pc == 0x420184u) {
        ctx->pc = 0x420184u;
            // 0x420184: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x420188u;
        goto label_420188;
    }
    ctx->pc = 0x420180u;
    {
        const bool branch_taken_0x420180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x420184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420180u;
            // 0x420184: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420180) {
            ctx->pc = 0x4202A0u;
            goto label_4202a0;
        }
    }
    ctx->pc = 0x420188u;
label_420188:
    // 0x420188: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x420188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_42018c:
    // 0x42018c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x42018cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_420190:
    // 0x420190: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x420190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_420194:
    // 0x420194: 0xc075128  jal         func_1D44A0
label_420198:
    if (ctx->pc == 0x420198u) {
        ctx->pc = 0x420198u;
            // 0x420198: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x42019Cu;
        goto label_42019c;
    }
    ctx->pc = 0x420194u;
    SET_GPR_U32(ctx, 31, 0x42019Cu);
    ctx->pc = 0x420198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420194u;
            // 0x420198: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42019Cu; }
        if (ctx->pc != 0x42019Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42019Cu; }
        if (ctx->pc != 0x42019Cu) { return; }
    }
    ctx->pc = 0x42019Cu;
label_42019c:
    // 0x42019c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x42019cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4201a0:
    // 0x4201a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4201a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4201a4:
    // 0x4201a4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4201a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4201a8:
    // 0x4201a8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4201a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4201ac:
    // 0x4201ac: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4201acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4201b0:
    // 0x4201b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4201b4:
    if (ctx->pc == 0x4201B4u) {
        ctx->pc = 0x4201B4u;
            // 0x4201b4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4201B8u;
        goto label_4201b8;
    }
    ctx->pc = 0x4201B0u;
    {
        const bool branch_taken_0x4201b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4201B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4201B0u;
            // 0x4201b4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4201b0) {
            ctx->pc = 0x4201C0u;
            goto label_4201c0;
        }
    }
    ctx->pc = 0x4201B8u;
label_4201b8:
    // 0x4201b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4201b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4201bc:
    // 0x4201bc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4201bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4201c0:
    // 0x4201c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4201c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4201c4:
    // 0x4201c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4201c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4201c8:
    // 0x4201c8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4201c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4201cc:
    // 0x4201cc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4201ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4201d0:
    // 0x4201d0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4201d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4201d4:
    // 0x4201d4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4201d8:
    if (ctx->pc == 0x4201D8u) {
        ctx->pc = 0x4201D8u;
            // 0x4201d8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4201DCu;
        goto label_4201dc;
    }
    ctx->pc = 0x4201D4u;
    {
        const bool branch_taken_0x4201d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4201d4) {
            ctx->pc = 0x4201D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4201D4u;
            // 0x4201d8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4201E8u;
            goto label_4201e8;
        }
    }
    ctx->pc = 0x4201DCu;
label_4201dc:
    // 0x4201dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4201dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4201e0:
    // 0x4201e0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4201e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4201e4:
    // 0x4201e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4201e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4201e8:
    // 0x4201e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4201e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4201ec:
    // 0x4201ec: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4201ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4201f0:
    // 0x4201f0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4201f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4201f4:
    // 0x4201f4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4201f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4201f8:
    // 0x4201f8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4201fc:
    if (ctx->pc == 0x4201FCu) {
        ctx->pc = 0x4201FCu;
            // 0x4201fc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x420200u;
        goto label_420200;
    }
    ctx->pc = 0x4201F8u;
    {
        const bool branch_taken_0x4201f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4201f8) {
            ctx->pc = 0x4201FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4201F8u;
            // 0x4201fc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42020Cu;
            goto label_42020c;
        }
    }
    ctx->pc = 0x420200u;
label_420200:
    // 0x420200: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x420200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_420204:
    // 0x420204: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x420204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_420208:
    // 0x420208: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x420208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42020c:
    // 0x42020c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x42020cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_420210:
    // 0x420210: 0x320f809  jalr        $t9
label_420214:
    if (ctx->pc == 0x420214u) {
        ctx->pc = 0x420214u;
            // 0x420214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x420218u;
        goto label_420218;
    }
    ctx->pc = 0x420210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x420218u);
        ctx->pc = 0x420214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420210u;
            // 0x420214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x420218u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x420218u; }
            if (ctx->pc != 0x420218u) { return; }
        }
        }
    }
    ctx->pc = 0x420218u;
label_420218:
    // 0x420218: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x420218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_42021c:
    // 0x42021c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42021cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_420220:
    // 0x420220: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x420220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_420224:
    // 0x420224: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x420224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_420228:
    // 0x420228: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x420228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_42022c:
    // 0x42022c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x42022cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_420230:
    // 0x420230: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_420234:
    if (ctx->pc == 0x420234u) {
        ctx->pc = 0x420234u;
            // 0x420234: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x420238u;
        goto label_420238;
    }
    ctx->pc = 0x420230u;
    {
        const bool branch_taken_0x420230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x420230) {
            ctx->pc = 0x420234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420230u;
            // 0x420234: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420244u;
            goto label_420244;
        }
    }
    ctx->pc = 0x420238u;
label_420238:
    // 0x420238: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x420238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42023c:
    // 0x42023c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x42023cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_420240:
    // 0x420240: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x420240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_420244:
    // 0x420244: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x420244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_420248:
    // 0x420248: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x420248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_42024c:
    // 0x42024c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x42024cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_420250:
    // 0x420250: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x420250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_420254:
    // 0x420254: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x420254u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_420258:
    // 0x420258: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_42025c:
    if (ctx->pc == 0x42025Cu) {
        ctx->pc = 0x420260u;
        goto label_420260;
    }
    ctx->pc = 0x420258u;
    {
        const bool branch_taken_0x420258 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x420258) {
            ctx->pc = 0x420268u;
            goto label_420268;
        }
    }
    ctx->pc = 0x420260u;
label_420260:
    // 0x420260: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x420260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_420264:
    // 0x420264: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x420264u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_420268:
    // 0x420268: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x420268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42026c:
    // 0x42026c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x42026cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_420270:
    // 0x420270: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x420270u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_420274:
    // 0x420274: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_420278:
    if (ctx->pc == 0x420278u) {
        ctx->pc = 0x42027Cu;
        goto label_42027c;
    }
    ctx->pc = 0x420274u;
    {
        const bool branch_taken_0x420274 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x420274) {
            ctx->pc = 0x420284u;
            goto label_420284;
        }
    }
    ctx->pc = 0x42027Cu;
label_42027c:
    // 0x42027c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42027cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_420280:
    // 0x420280: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x420280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_420284:
    // 0x420284: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x420284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_420288:
    // 0x420288: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x420288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_42028c:
    // 0x42028c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x42028cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_420290:
    // 0x420290: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_420294:
    if (ctx->pc == 0x420294u) {
        ctx->pc = 0x420294u;
            // 0x420294: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x420298u;
        goto label_420298;
    }
    ctx->pc = 0x420290u;
    {
        const bool branch_taken_0x420290 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x420290) {
            ctx->pc = 0x420294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420290u;
            // 0x420294: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4202A4u;
            goto label_4202a4;
        }
    }
    ctx->pc = 0x420298u;
label_420298:
    // 0x420298: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x420298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42029c:
    // 0x42029c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x42029cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4202a0:
    // 0x4202a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4202a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4202a4:
    // 0x4202a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4202a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4202a8:
    // 0x4202a8: 0x3e00008  jr          $ra
label_4202ac:
    if (ctx->pc == 0x4202ACu) {
        ctx->pc = 0x4202ACu;
            // 0x4202ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4202B0u;
        goto label_4202b0;
    }
    ctx->pc = 0x4202A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4202ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4202A8u;
            // 0x4202ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4202B0u;
label_4202b0:
    // 0x4202b0: 0x8107974  j           func_41E5D0
label_4202b4:
    if (ctx->pc == 0x4202B4u) {
        ctx->pc = 0x4202B4u;
            // 0x4202b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4202B8u;
        goto label_4202b8;
    }
    ctx->pc = 0x4202B0u;
    ctx->pc = 0x4202B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4202B0u;
            // 0x4202b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41E5D0u;
    {
        auto targetFn = runtime->lookupFunction(0x41E5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4202B8u;
label_4202b8:
    // 0x4202b8: 0x0  nop
    ctx->pc = 0x4202b8u;
    // NOP
label_4202bc:
    // 0x4202bc: 0x0  nop
    ctx->pc = 0x4202bcu;
    // NOP
label_4202c0:
    // 0x4202c0: 0x8107728  j           func_41DCA0
label_4202c4:
    if (ctx->pc == 0x4202C4u) {
        ctx->pc = 0x4202C4u;
            // 0x4202c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4202C8u;
        goto label_4202c8;
    }
    ctx->pc = 0x4202C0u;
    ctx->pc = 0x4202C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4202C0u;
            // 0x4202c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41DCA0u;
    if (runtime->hasFunction(0x41DCA0u)) {
        auto targetFn = runtime->lookupFunction(0x41DCA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0041DCA0_0x41dca0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4202C8u;
label_4202c8:
    // 0x4202c8: 0x0  nop
    ctx->pc = 0x4202c8u;
    // NOP
label_4202cc:
    // 0x4202cc: 0x0  nop
    ctx->pc = 0x4202ccu;
    // NOP
label_4202d0:
    // 0x4202d0: 0x8107780  j           func_41DE00
label_4202d4:
    if (ctx->pc == 0x4202D4u) {
        ctx->pc = 0x4202D4u;
            // 0x4202d4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4202D8u;
        goto label_4202d8;
    }
    ctx->pc = 0x4202D0u;
    ctx->pc = 0x4202D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4202D0u;
            // 0x4202d4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41DE00u;
    {
        auto targetFn = runtime->lookupFunction(0x41DE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4202D8u;
label_4202d8:
    // 0x4202d8: 0x0  nop
    ctx->pc = 0x4202d8u;
    // NOP
label_4202dc:
    // 0x4202dc: 0x0  nop
    ctx->pc = 0x4202dcu;
    // NOP
label_4202e0:
    // 0x4202e0: 0x8107704  j           func_41DC10
label_4202e4:
    if (ctx->pc == 0x4202E4u) {
        ctx->pc = 0x4202E4u;
            // 0x4202e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4202E8u;
        goto label_4202e8;
    }
    ctx->pc = 0x4202E0u;
    ctx->pc = 0x4202E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4202E0u;
            // 0x4202e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41DC10u;
    {
        auto targetFn = runtime->lookupFunction(0x41DC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4202E8u;
label_4202e8:
    // 0x4202e8: 0x0  nop
    ctx->pc = 0x4202e8u;
    // NOP
label_4202ec:
    // 0x4202ec: 0x0  nop
    ctx->pc = 0x4202ecu;
    // NOP
label_4202f0:
    // 0x4202f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4202f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4202f4:
    // 0x4202f4: 0x8c840070  lw          $a0, 0x70($a0)
    ctx->pc = 0x4202f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4202f8:
    // 0x4202f8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4202f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4202fc:
    // 0x4202fc: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x4202fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_420300:
    // 0x420300: 0x3e00008  jr          $ra
label_420304:
    if (ctx->pc == 0x420304u) {
        ctx->pc = 0x420304u;
            // 0x420304: 0xa4830058  sh          $v1, 0x58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x420308u;
        goto label_420308;
    }
    ctx->pc = 0x420300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420300u;
            // 0x420304: 0xa4830058  sh          $v1, 0x58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x420308u;
label_420308:
    // 0x420308: 0x0  nop
    ctx->pc = 0x420308u;
    // NOP
label_42030c:
    // 0x42030c: 0x0  nop
    ctx->pc = 0x42030cu;
    // NOP
label_420310:
    // 0x420310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x420310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_420314:
    // 0x420314: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x420314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_420318:
    // 0x420318: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x420318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_42031c:
    // 0x42031c: 0xc461feb4  lwc1        $f1, -0x14C($v1)
    ctx->pc = 0x42031cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_420320:
    // 0x420320: 0x8ca600c8  lw          $a2, 0xC8($a1)
    ctx->pc = 0x420320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
label_420324:
    // 0x420324: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x420324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_420328:
    // 0x420328: 0xc482feb0  lwc1        $f2, -0x150($a0)
    ctx->pc = 0x420328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294966960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42032c:
    // 0x42032c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x42032cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_420330:
    // 0x420330: 0xc4c40dc4  lwc1        $f4, 0xDC4($a2)
    ctx->pc = 0x420330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_420334:
    // 0x420334: 0x8cc30550  lw          $v1, 0x550($a2)
    ctx->pc = 0x420334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1360)));
label_420338:
    // 0x420338: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x420338u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_42033c:
    // 0x42033c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x42033cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_420340:
    // 0x420340: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x420340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_420344:
    // 0x420344: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_420348:
    if (ctx->pc == 0x420348u) {
        ctx->pc = 0x420348u;
            // 0x420348: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->pc = 0x42034Cu;
        goto label_42034c;
    }
    ctx->pc = 0x420344u;
    {
        const bool branch_taken_0x420344 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x420348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420344u;
            // 0x420348: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x420344) {
            ctx->pc = 0x420350u;
            goto label_420350;
        }
    }
    ctx->pc = 0x42034Cu;
label_42034c:
    // 0x42034c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x42034cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420350:
    // 0x420350: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_420354:
    if (ctx->pc == 0x420354u) {
        ctx->pc = 0x420354u;
            // 0x420354: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x420358u;
        goto label_420358;
    }
    ctx->pc = 0x420350u;
    {
        const bool branch_taken_0x420350 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x420350) {
            ctx->pc = 0x420354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420350u;
            // 0x420354: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420364u;
            goto label_420364;
        }
    }
    ctx->pc = 0x420358u;
label_420358:
    // 0x420358: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x420358u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42035c:
    // 0x42035c: 0x10000007  b           . + 4 + (0x7 << 2)
label_420360:
    if (ctx->pc == 0x420360u) {
        ctx->pc = 0x420360u;
            // 0x420360: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x420364u;
        goto label_420364;
    }
    ctx->pc = 0x42035Cu;
    {
        const bool branch_taken_0x42035c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42035Cu;
            // 0x420360: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x42035c) {
            ctx->pc = 0x42037Cu;
            goto label_42037c;
        }
    }
    ctx->pc = 0x420364u;
label_420364:
    // 0x420364: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x420364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_420368:
    // 0x420368: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x420368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_42036c:
    // 0x42036c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x42036cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_420370:
    // 0x420370: 0x0  nop
    ctx->pc = 0x420370u;
    // NOP
label_420374:
    // 0x420374: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x420374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_420378:
    // 0x420378: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x420378u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_42037c:
    // 0x42037c: 0x8cc50d6c  lw          $a1, 0xD6C($a2)
    ctx->pc = 0x42037cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3436)));
label_420380:
    // 0x420380: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x420380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_420384:
    // 0x420384: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x420384u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_420388:
    // 0x420388: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x420388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_42038c:
    // 0x42038c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x42038cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_420390:
    // 0x420390: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x420390u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_420394:
    // 0x420394: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x420394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_420398:
    // 0x420398: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x420398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42039c:
    // 0x42039c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x42039cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4203a0:
    // 0x4203a0: 0x90a50008  lbu         $a1, 0x8($a1)
    ctx->pc = 0x4203a0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
label_4203a4:
    // 0x4203a4: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x4203a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_4203a8:
    // 0x4203a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4203a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4203ac:
    // 0x4203ac: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x4203acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_4203b0:
    // 0x4203b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4203b4:
    if (ctx->pc == 0x4203B4u) {
        ctx->pc = 0x4203B4u;
            // 0x4203b4: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x4203B8u;
        goto label_4203b8;
    }
    ctx->pc = 0x4203B0u;
    {
        const bool branch_taken_0x4203b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4203B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4203B0u;
            // 0x4203b4: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4203b0) {
            ctx->pc = 0x4203BCu;
            goto label_4203bc;
        }
    }
    ctx->pc = 0x4203B8u;
label_4203b8:
    // 0x4203b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4203b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4203bc:
    // 0x4203bc: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4203bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4203c0:
    // 0x4203c0: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x4203c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
label_4203c4:
    // 0x4203c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4203c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4203c8:
    // 0x4203c8: 0x8065010d  lb          $a1, 0x10D($v1)
    ctx->pc = 0x4203c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 269)));
label_4203cc:
    // 0x4203cc: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x4203ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_4203d0:
    // 0x4203d0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x4203d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4203d4:
    // 0x4203d4: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x4203d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_4203d8:
    // 0x4203d8: 0xa0650114  sb          $a1, 0x114($v1)
    ctx->pc = 0x4203d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 276), (uint8_t)GPR_U32(ctx, 5));
label_4203dc:
    // 0x4203dc: 0xa0640111  sb          $a0, 0x111($v1)
    ctx->pc = 0x4203dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 273), (uint8_t)GPR_U32(ctx, 4));
label_4203e0:
    // 0x4203e0: 0x80650114  lb          $a1, 0x114($v1)
    ctx->pc = 0x4203e0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 276)));
label_4203e4:
    // 0x4203e4: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x4203e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_4203e8:
    // 0x4203e8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x4203e8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_4203ec:
    // 0x4203ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4203ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4203f0:
    // 0x4203f0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4203f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4203f4:
    // 0x4203f4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4203f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4203f8:
    // 0x4203f8: 0x8ca5005c  lw          $a1, 0x5C($a1)
    ctx->pc = 0x4203f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_4203fc:
    // 0x4203fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4203fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_420400:
    // 0x420400: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x420400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_420404:
    // 0x420404: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x420404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_420408:
    // 0x420408: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x420408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_42040c:
    // 0x42040c: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x42040cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_420410:
    // 0x420410: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x420410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_420414:
    // 0x420414: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x420414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
label_420418:
    // 0x420418: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x420418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
label_42041c:
    // 0x42041c: 0x3e00008  jr          $ra
label_420420:
    if (ctx->pc == 0x420420u) {
        ctx->pc = 0x420420u;
            // 0x420420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x420424u;
        goto label_420424;
    }
    ctx->pc = 0x42041Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42041Cu;
            // 0x420420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x420424u;
label_420424:
    // 0x420424: 0x0  nop
    ctx->pc = 0x420424u;
    // NOP
label_420428:
    // 0x420428: 0x0  nop
    ctx->pc = 0x420428u;
    // NOP
label_42042c:
    // 0x42042c: 0x0  nop
    ctx->pc = 0x42042cu;
    // NOP
label_420430:
    // 0x420430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x420430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_420434:
    // 0x420434: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x420434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_420438:
    // 0x420438: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x420438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_42043c:
    // 0x42043c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42043cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_420440:
    // 0x420440: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x420440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_420444:
    // 0x420444: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x420444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_420448:
    // 0x420448: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x420448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_42044c:
    // 0x42044c: 0x8cb100c8  lw          $s1, 0xC8($a1)
    ctx->pc = 0x42044cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
label_420450:
    // 0x420450: 0x8e300550  lw          $s0, 0x550($s1)
    ctx->pc = 0x420450u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_420454:
    // 0x420454: 0x8205010f  lb          $a1, 0x10F($s0)
    ctx->pc = 0x420454u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 271)));
label_420458:
    // 0x420458: 0x10a3002f  beq         $a1, $v1, . + 4 + (0x2F << 2)
label_42045c:
    if (ctx->pc == 0x42045Cu) {
        ctx->pc = 0x420460u;
        goto label_420460;
    }
    ctx->pc = 0x420458u;
    {
        const bool branch_taken_0x420458 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x420458) {
            ctx->pc = 0x420518u;
            goto label_420518;
        }
    }
    ctx->pc = 0x420460u;
label_420460:
    // 0x420460: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x420460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_420464:
    // 0x420464: 0x10a3002c  beq         $a1, $v1, . + 4 + (0x2C << 2)
label_420468:
    if (ctx->pc == 0x420468u) {
        ctx->pc = 0x42046Cu;
        goto label_42046c;
    }
    ctx->pc = 0x420464u;
    {
        const bool branch_taken_0x420464 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x420464) {
            ctx->pc = 0x420518u;
            goto label_420518;
        }
    }
    ctx->pc = 0x42046Cu;
label_42046c:
    // 0x42046c: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x42046cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_420470:
    // 0x420470: 0x10a30029  beq         $a1, $v1, . + 4 + (0x29 << 2)
label_420474:
    if (ctx->pc == 0x420474u) {
        ctx->pc = 0x420478u;
        goto label_420478;
    }
    ctx->pc = 0x420470u;
    {
        const bool branch_taken_0x420470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x420470) {
            ctx->pc = 0x420518u;
            goto label_420518;
        }
    }
    ctx->pc = 0x420478u;
label_420478:
    // 0x420478: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x420478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42047c:
    // 0x42047c: 0x50a60021  beql        $a1, $a2, . + 4 + (0x21 << 2)
label_420480:
    if (ctx->pc == 0x420480u) {
        ctx->pc = 0x420480u;
            // 0x420480: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x420484u;
        goto label_420484;
    }
    ctx->pc = 0x42047Cu;
    {
        const bool branch_taken_0x42047c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x42047c) {
            ctx->pc = 0x420480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42047Cu;
            // 0x420480: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420504u;
            goto label_420504;
        }
    }
    ctx->pc = 0x420484u;
label_420484:
    // 0x420484: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_420488:
    if (ctx->pc == 0x420488u) {
        ctx->pc = 0x420488u;
            // 0x420488: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x42048Cu;
        goto label_42048c;
    }
    ctx->pc = 0x420484u;
    {
        const bool branch_taken_0x420484 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x420484) {
            ctx->pc = 0x420488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420484u;
            // 0x420488: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420494u;
            goto label_420494;
        }
    }
    ctx->pc = 0x42048Cu;
label_42048c:
    // 0x42048c: 0x10000025  b           . + 4 + (0x25 << 2)
label_420490:
    if (ctx->pc == 0x420490u) {
        ctx->pc = 0x420490u;
            // 0x420490: 0x8e230e38  lw          $v1, 0xE38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
        ctx->pc = 0x420494u;
        goto label_420494;
    }
    ctx->pc = 0x42048Cu;
    {
        const bool branch_taken_0x42048c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42048Cu;
            // 0x420490: 0x8e230e38  lw          $v1, 0xE38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42048c) {
            ctx->pc = 0x420524u;
            goto label_420524;
        }
    }
    ctx->pc = 0x420494u;
label_420494:
    // 0x420494: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x420494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_420498:
    // 0x420498: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_42049c:
    if (ctx->pc == 0x42049Cu) {
        ctx->pc = 0x4204A0u;
        goto label_4204a0;
    }
    ctx->pc = 0x420498u;
    {
        const bool branch_taken_0x420498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x420498) {
            ctx->pc = 0x420520u;
            goto label_420520;
        }
    }
    ctx->pc = 0x4204A0u;
label_4204a0:
    // 0x4204a0: 0x8203010c  lb          $v1, 0x10C($s0)
    ctx->pc = 0x4204a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_4204a4:
    // 0x4204a4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x4204a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_4204a8:
    // 0x4204a8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4204a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4204ac:
    // 0x4204ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4204acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4204b0:
    // 0x4204b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4204b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4204b4:
    // 0x4204b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4204b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4204b8:
    // 0x4204b8: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x4204b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4204bc:
    // 0x4204bc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4204bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4204c0:
    // 0x4204c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4204c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4204c4:
    // 0x4204c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4204c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4204c8:
    // 0x4204c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4204c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4204cc:
    // 0x4204cc: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x4204ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_4204d0:
    // 0x4204d0: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x4204d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4204d4:
    // 0x4204d4: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x4204d4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_4204d8:
    // 0x4204d8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4204d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4204dc:
    // 0x4204dc: 0x320f809  jalr        $t9
label_4204e0:
    if (ctx->pc == 0x4204E0u) {
        ctx->pc = 0x4204E0u;
            // 0x4204e0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4204E4u;
        goto label_4204e4;
    }
    ctx->pc = 0x4204DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4204E4u);
        ctx->pc = 0x4204E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4204DCu;
            // 0x4204e0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4204E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4204E4u; }
            if (ctx->pc != 0x4204E4u) { return; }
        }
        }
    }
    ctx->pc = 0x4204E4u;
label_4204e4:
    // 0x4204e4: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x4204e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4204e8:
    // 0x4204e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4204e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4204ec:
    // 0x4204ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4204ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4204f0:
    // 0x4204f0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4204f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4204f4:
    // 0x4204f4: 0x320f809  jalr        $t9
label_4204f8:
    if (ctx->pc == 0x4204F8u) {
        ctx->pc = 0x4204F8u;
            // 0x4204f8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4204FCu;
        goto label_4204fc;
    }
    ctx->pc = 0x4204F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4204FCu);
        ctx->pc = 0x4204F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4204F4u;
            // 0x4204f8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4204FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4204FCu; }
            if (ctx->pc != 0x4204FCu) { return; }
        }
        }
    }
    ctx->pc = 0x4204FCu;
label_4204fc:
    // 0x4204fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_420500:
    if (ctx->pc == 0x420500u) {
        ctx->pc = 0x420504u;
        goto label_420504;
    }
    ctx->pc = 0x4204FCu;
    {
        const bool branch_taken_0x4204fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4204fc) {
            ctx->pc = 0x420520u;
            goto label_420520;
        }
    }
    ctx->pc = 0x420504u;
label_420504:
    // 0x420504: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x420504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_420508:
    // 0x420508: 0x320f809  jalr        $t9
label_42050c:
    if (ctx->pc == 0x42050Cu) {
        ctx->pc = 0x420510u;
        goto label_420510;
    }
    ctx->pc = 0x420508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x420510u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x420510u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x420510u; }
            if (ctx->pc != 0x420510u) { return; }
        }
        }
    }
    ctx->pc = 0x420510u;
label_420510:
    // 0x420510: 0x10000003  b           . + 4 + (0x3 << 2)
label_420514:
    if (ctx->pc == 0x420514u) {
        ctx->pc = 0x420518u;
        goto label_420518;
    }
    ctx->pc = 0x420510u;
    {
        const bool branch_taken_0x420510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x420510) {
            ctx->pc = 0x420520u;
            goto label_420520;
        }
    }
    ctx->pc = 0x420518u;
label_420518:
    // 0x420518: 0xc102abc  jal         func_40AAF0
label_42051c:
    if (ctx->pc == 0x42051Cu) {
        ctx->pc = 0x420520u;
        goto label_420520;
    }
    ctx->pc = 0x420518u;
    SET_GPR_U32(ctx, 31, 0x420520u);
    ctx->pc = 0x40AAF0u;
    if (runtime->hasFunction(0x40AAF0u)) {
        auto targetFn = runtime->lookupFunction(0x40AAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420520u; }
        if (ctx->pc != 0x420520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040AAF0_0x40aaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420520u; }
        if (ctx->pc != 0x420520u) { return; }
    }
    ctx->pc = 0x420520u;
label_420520:
    // 0x420520: 0x8e230e38  lw          $v1, 0xE38($s1)
    ctx->pc = 0x420520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
label_420524:
    // 0x420524: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x420524u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_420528:
    // 0x420528: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_42052c:
    if (ctx->pc == 0x42052Cu) {
        ctx->pc = 0x42052Cu;
            // 0x42052c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x420530u;
        goto label_420530;
    }
    ctx->pc = 0x420528u;
    {
        const bool branch_taken_0x420528 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x42052Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420528u;
            // 0x42052c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420528) {
            ctx->pc = 0x420540u;
            goto label_420540;
        }
    }
    ctx->pc = 0x420530u;
label_420530:
    // 0x420530: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x420530u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_420534:
    // 0x420534: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_420538:
    if (ctx->pc == 0x420538u) {
        ctx->pc = 0x42053Cu;
        goto label_42053c;
    }
    ctx->pc = 0x420534u;
    {
        const bool branch_taken_0x420534 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x420534) {
            ctx->pc = 0x420540u;
            goto label_420540;
        }
    }
    ctx->pc = 0x42053Cu;
label_42053c:
    // 0x42053c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x42053cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_420540:
    // 0x420540: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_420544:
    if (ctx->pc == 0x420544u) {
        ctx->pc = 0x420548u;
        goto label_420548;
    }
    ctx->pc = 0x420540u;
    {
        const bool branch_taken_0x420540 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x420540) {
            ctx->pc = 0x42055Cu;
            goto label_42055c;
        }
    }
    ctx->pc = 0x420548u;
label_420548:
    // 0x420548: 0xc075eb4  jal         func_1D7AD0
label_42054c:
    if (ctx->pc == 0x42054Cu) {
        ctx->pc = 0x42054Cu;
            // 0x42054c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x420550u;
        goto label_420550;
    }
    ctx->pc = 0x420548u;
    SET_GPR_U32(ctx, 31, 0x420550u);
    ctx->pc = 0x42054Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420548u;
            // 0x42054c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420550u; }
        if (ctx->pc != 0x420550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420550u; }
        if (ctx->pc != 0x420550u) { return; }
    }
    ctx->pc = 0x420550u;
label_420550:
    // 0x420550: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_420554:
    if (ctx->pc == 0x420554u) {
        ctx->pc = 0x420558u;
        goto label_420558;
    }
    ctx->pc = 0x420550u;
    {
        const bool branch_taken_0x420550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x420550) {
            ctx->pc = 0x42055Cu;
            goto label_42055c;
        }
    }
    ctx->pc = 0x420558u;
label_420558:
    // 0x420558: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x420558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42055c:
    // 0x42055c: 0x52400079  beql        $s2, $zero, . + 4 + (0x79 << 2)
label_420560:
    if (ctx->pc == 0x420560u) {
        ctx->pc = 0x420560u;
            // 0x420560: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x420564u;
        goto label_420564;
    }
    ctx->pc = 0x42055Cu;
    {
        const bool branch_taken_0x42055c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x42055c) {
            ctx->pc = 0x420560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42055Cu;
            // 0x420560: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420744u;
            goto label_420744;
        }
    }
    ctx->pc = 0x420564u;
label_420564:
    // 0x420564: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x420564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_420568:
    // 0x420568: 0x8204010f  lb          $a0, 0x10F($s0)
    ctx->pc = 0x420568u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 271)));
label_42056c:
    // 0x42056c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x42056cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_420570:
    // 0x420570: 0x2c810003  sltiu       $at, $a0, 0x3
    ctx->pc = 0x420570u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_420574:
    // 0x420574: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_420578:
    if (ctx->pc == 0x420578u) {
        ctx->pc = 0x420578u;
            // 0x420578: 0xc4620018  lwc1        $f2, 0x18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x42057Cu;
        goto label_42057c;
    }
    ctx->pc = 0x420574u;
    {
        const bool branch_taken_0x420574 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x420578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420574u;
            // 0x420578: 0xc4620018  lwc1        $f2, 0x18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x420574) {
            ctx->pc = 0x4205E4u;
            goto label_4205e4;
        }
    }
    ctx->pc = 0x42057Cu;
label_42057c:
    // 0x42057c: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x42057cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_420580:
    // 0x420580: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x420580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_420584:
    // 0x420584: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x420584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_420588:
    // 0x420588: 0x0  nop
    ctx->pc = 0x420588u;
    // NOP
label_42058c:
    // 0x42058c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x42058cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_420590:
    // 0x420590: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_420594:
    if (ctx->pc == 0x420594u) {
        ctx->pc = 0x420594u;
            // 0x420594: 0x3c0341c8  lui         $v1, 0x41C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
        ctx->pc = 0x420598u;
        goto label_420598;
    }
    ctx->pc = 0x420590u;
    {
        const bool branch_taken_0x420590 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x420590) {
            ctx->pc = 0x420594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420590u;
            // 0x420594: 0x3c0341c8  lui         $v1, 0x41C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4205ACu;
            goto label_4205ac;
        }
    }
    ctx->pc = 0x420598u;
label_420598:
    // 0x420598: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x420598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_42059c:
    // 0x42059c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x42059cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4205a0:
    // 0x4205a0: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_4205a4:
    if (ctx->pc == 0x4205A4u) {
        ctx->pc = 0x4205A4u;
            // 0x4205a4: 0x240401a9  addiu       $a0, $zero, 0x1A9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
        ctx->pc = 0x4205A8u;
        goto label_4205a8;
    }
    ctx->pc = 0x4205A0u;
    {
        const bool branch_taken_0x4205a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4205a0) {
            ctx->pc = 0x4205A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4205A0u;
            // 0x4205a4: 0x240401a9  addiu       $a0, $zero, 0x1A9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4205D4u;
            goto label_4205d4;
        }
    }
    ctx->pc = 0x4205A8u;
label_4205a8:
    // 0x4205a8: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x4205a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
label_4205ac:
    // 0x4205ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4205acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4205b0:
    // 0x4205b0: 0x0  nop
    ctx->pc = 0x4205b0u;
    // NOP
label_4205b4:
    // 0x4205b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4205b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4205b8:
    // 0x4205b8: 0x45010061  bc1t        . + 4 + (0x61 << 2)
label_4205bc:
    if (ctx->pc == 0x4205BCu) {
        ctx->pc = 0x4205C0u;
        goto label_4205c0;
    }
    ctx->pc = 0x4205B8u;
    {
        const bool branch_taken_0x4205b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4205b8) {
            ctx->pc = 0x420740u;
            goto label_420740;
        }
    }
    ctx->pc = 0x4205C0u;
label_4205c0:
    // 0x4205c0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4205c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_4205c4:
    // 0x4205c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4205c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4205c8:
    // 0x4205c8: 0x4500005d  bc1f        . + 4 + (0x5D << 2)
label_4205cc:
    if (ctx->pc == 0x4205CCu) {
        ctx->pc = 0x4205D0u;
        goto label_4205d0;
    }
    ctx->pc = 0x4205C8u;
    {
        const bool branch_taken_0x4205c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4205c8) {
            ctx->pc = 0x420740u;
            goto label_420740;
        }
    }
    ctx->pc = 0x4205D0u;
label_4205d0:
    // 0x4205d0: 0x240401a9  addiu       $a0, $zero, 0x1A9
    ctx->pc = 0x4205d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
label_4205d4:
    // 0x4205d4: 0xc073234  jal         func_1CC8D0
label_4205d8:
    if (ctx->pc == 0x4205D8u) {
        ctx->pc = 0x4205DCu;
        goto label_4205dc;
    }
    ctx->pc = 0x4205D4u;
    SET_GPR_U32(ctx, 31, 0x4205DCu);
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4205DCu; }
        if (ctx->pc != 0x4205DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4205DCu; }
        if (ctx->pc != 0x4205DCu) { return; }
    }
    ctx->pc = 0x4205DCu;
label_4205dc:
    // 0x4205dc: 0x10000058  b           . + 4 + (0x58 << 2)
label_4205e0:
    if (ctx->pc == 0x4205E0u) {
        ctx->pc = 0x4205E4u;
        goto label_4205e4;
    }
    ctx->pc = 0x4205DCu;
    {
        const bool branch_taken_0x4205dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4205dc) {
            ctx->pc = 0x420740u;
            goto label_420740;
        }
    }
    ctx->pc = 0x4205E4u;
label_4205e4:
    // 0x4205e4: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x4205e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_4205e8:
    // 0x4205e8: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
label_4205ec:
    if (ctx->pc == 0x4205ECu) {
        ctx->pc = 0x4205ECu;
            // 0x4205ec: 0xc601003c  lwc1        $f1, 0x3C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4205F0u;
        goto label_4205f0;
    }
    ctx->pc = 0x4205E8u;
    {
        const bool branch_taken_0x4205e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4205e8) {
            ctx->pc = 0x4205ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4205E8u;
            // 0x4205ec: 0xc601003c  lwc1        $f1, 0x3C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x42060Cu;
            goto label_42060c;
        }
    }
    ctx->pc = 0x4205F0u;
label_4205f0:
    // 0x4205f0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x4205f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_4205f4:
    // 0x4205f4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_4205f8:
    if (ctx->pc == 0x4205F8u) {
        ctx->pc = 0x4205FCu;
        goto label_4205fc;
    }
    ctx->pc = 0x4205F4u;
    {
        const bool branch_taken_0x4205f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4205f4) {
            ctx->pc = 0x420608u;
            goto label_420608;
        }
    }
    ctx->pc = 0x4205FCu;
label_4205fc:
    // 0x4205fc: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x4205fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_420600:
    // 0x420600: 0x5483001b  bnel        $a0, $v1, . + 4 + (0x1B << 2)
label_420604:
    if (ctx->pc == 0x420604u) {
        ctx->pc = 0x420604u;
            // 0x420604: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x420608u;
        goto label_420608;
    }
    ctx->pc = 0x420600u;
    {
        const bool branch_taken_0x420600 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x420600) {
            ctx->pc = 0x420604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420600u;
            // 0x420604: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420670u;
            goto label_420670;
        }
    }
    ctx->pc = 0x420608u;
label_420608:
    // 0x420608: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x420608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42060c:
    // 0x42060c: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x42060cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
label_420610:
    // 0x420610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x420610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_420614:
    // 0x420614: 0x0  nop
    ctx->pc = 0x420614u;
    // NOP
label_420618:
    // 0x420618: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x420618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42061c:
    // 0x42061c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_420620:
    if (ctx->pc == 0x420620u) {
        ctx->pc = 0x420620u;
            // 0x420620: 0x3c034160  lui         $v1, 0x4160 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
        ctx->pc = 0x420624u;
        goto label_420624;
    }
    ctx->pc = 0x42061Cu;
    {
        const bool branch_taken_0x42061c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x42061c) {
            ctx->pc = 0x420620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42061Cu;
            // 0x420620: 0x3c034160  lui         $v1, 0x4160 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420638u;
            goto label_420638;
        }
    }
    ctx->pc = 0x420624u;
label_420624:
    // 0x420624: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x420624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_420628:
    // 0x420628: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x420628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42062c:
    // 0x42062c: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_420630:
    if (ctx->pc == 0x420630u) {
        ctx->pc = 0x420630u;
            // 0x420630: 0x240401a9  addiu       $a0, $zero, 0x1A9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
        ctx->pc = 0x420634u;
        goto label_420634;
    }
    ctx->pc = 0x42062Cu;
    {
        const bool branch_taken_0x42062c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x42062c) {
            ctx->pc = 0x420630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42062Cu;
            // 0x420630: 0x240401a9  addiu       $a0, $zero, 0x1A9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420660u;
            goto label_420660;
        }
    }
    ctx->pc = 0x420634u;
label_420634:
    // 0x420634: 0x3c034160  lui         $v1, 0x4160
    ctx->pc = 0x420634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
label_420638:
    // 0x420638: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x420638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42063c:
    // 0x42063c: 0x0  nop
    ctx->pc = 0x42063cu;
    // NOP
label_420640:
    // 0x420640: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x420640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_420644:
    // 0x420644: 0x4501003e  bc1t        . + 4 + (0x3E << 2)
label_420648:
    if (ctx->pc == 0x420648u) {
        ctx->pc = 0x42064Cu;
        goto label_42064c;
    }
    ctx->pc = 0x420644u;
    {
        const bool branch_taken_0x420644 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x420644) {
            ctx->pc = 0x420740u;
            goto label_420740;
        }
    }
    ctx->pc = 0x42064Cu;
label_42064c:
    // 0x42064c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x42064cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_420650:
    // 0x420650: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x420650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_420654:
    // 0x420654: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
label_420658:
    if (ctx->pc == 0x420658u) {
        ctx->pc = 0x42065Cu;
        goto label_42065c;
    }
    ctx->pc = 0x420654u;
    {
        const bool branch_taken_0x420654 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x420654) {
            ctx->pc = 0x420740u;
            goto label_420740;
        }
    }
    ctx->pc = 0x42065Cu;
label_42065c:
    // 0x42065c: 0x240401a9  addiu       $a0, $zero, 0x1A9
    ctx->pc = 0x42065cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
label_420660:
    // 0x420660: 0xc073234  jal         func_1CC8D0
label_420664:
    if (ctx->pc == 0x420664u) {
        ctx->pc = 0x420668u;
        goto label_420668;
    }
    ctx->pc = 0x420660u;
    SET_GPR_U32(ctx, 31, 0x420668u);
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420668u; }
        if (ctx->pc != 0x420668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420668u; }
        if (ctx->pc != 0x420668u) { return; }
    }
    ctx->pc = 0x420668u;
label_420668:
    // 0x420668: 0x10000035  b           . + 4 + (0x35 << 2)
label_42066c:
    if (ctx->pc == 0x42066Cu) {
        ctx->pc = 0x420670u;
        goto label_420670;
    }
    ctx->pc = 0x420668u;
    {
        const bool branch_taken_0x420668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x420668) {
            ctx->pc = 0x420740u;
            goto label_420740;
        }
    }
    ctx->pc = 0x420670u;
label_420670:
    // 0x420670: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
label_420674:
    if (ctx->pc == 0x420674u) {
        ctx->pc = 0x420674u;
            // 0x420674: 0xc601003c  lwc1        $f1, 0x3C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x420678u;
        goto label_420678;
    }
    ctx->pc = 0x420670u;
    {
        const bool branch_taken_0x420670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x420670) {
            ctx->pc = 0x420674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420670u;
            // 0x420674: 0xc601003c  lwc1        $f1, 0x3C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x420694u;
            goto label_420694;
        }
    }
    ctx->pc = 0x420678u;
label_420678:
    // 0x420678: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x420678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_42067c:
    // 0x42067c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_420680:
    if (ctx->pc == 0x420680u) {
        ctx->pc = 0x420684u;
        goto label_420684;
    }
    ctx->pc = 0x42067Cu;
    {
        const bool branch_taken_0x42067c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x42067c) {
            ctx->pc = 0x420690u;
            goto label_420690;
        }
    }
    ctx->pc = 0x420684u;
label_420684:
    // 0x420684: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x420684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_420688:
    // 0x420688: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
label_42068c:
    if (ctx->pc == 0x42068Cu) {
        ctx->pc = 0x420690u;
        goto label_420690;
    }
    ctx->pc = 0x420688u;
    {
        const bool branch_taken_0x420688 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x420688) {
            ctx->pc = 0x420740u;
            goto label_420740;
        }
    }
    ctx->pc = 0x420690u;
label_420690:
    // 0x420690: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x420690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_420694:
    // 0x420694: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x420694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_420698:
    // 0x420698: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x420698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42069c:
    // 0x42069c: 0x0  nop
    ctx->pc = 0x42069cu;
    // NOP
label_4206a0:
    // 0x4206a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4206a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4206a4:
    // 0x4206a4: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_4206a8:
    if (ctx->pc == 0x4206A8u) {
        ctx->pc = 0x4206A8u;
            // 0x4206a8: 0x3c0340e0  lui         $v1, 0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
        ctx->pc = 0x4206ACu;
        goto label_4206ac;
    }
    ctx->pc = 0x4206A4u;
    {
        const bool branch_taken_0x4206a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4206a4) {
            ctx->pc = 0x4206A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4206A4u;
            // 0x4206a8: 0x3c0340e0  lui         $v1, 0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4206C0u;
            goto label_4206c0;
        }
    }
    ctx->pc = 0x4206ACu;
label_4206ac:
    // 0x4206ac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4206acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_4206b0:
    // 0x4206b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4206b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4206b4:
    // 0x4206b4: 0x45030020  bc1tl       . + 4 + (0x20 << 2)
label_4206b8:
    if (ctx->pc == 0x4206B8u) {
        ctx->pc = 0x4206B8u;
            // 0x4206b8: 0x240401a9  addiu       $a0, $zero, 0x1A9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
        ctx->pc = 0x4206BCu;
        goto label_4206bc;
    }
    ctx->pc = 0x4206B4u;
    {
        const bool branch_taken_0x4206b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4206b4) {
            ctx->pc = 0x4206B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4206B4u;
            // 0x4206b8: 0x240401a9  addiu       $a0, $zero, 0x1A9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420738u;
            goto label_420738;
        }
    }
    ctx->pc = 0x4206BCu;
label_4206bc:
    // 0x4206bc: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x4206bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
label_4206c0:
    // 0x4206c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4206c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4206c4:
    // 0x4206c4: 0x0  nop
    ctx->pc = 0x4206c4u;
    // NOP
label_4206c8:
    // 0x4206c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4206c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4206cc:
    // 0x4206cc: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_4206d0:
    if (ctx->pc == 0x4206D0u) {
        ctx->pc = 0x4206D0u;
            // 0x4206d0: 0x3c034160  lui         $v1, 0x4160 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
        ctx->pc = 0x4206D4u;
        goto label_4206d4;
    }
    ctx->pc = 0x4206CCu;
    {
        const bool branch_taken_0x4206cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4206cc) {
            ctx->pc = 0x4206D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4206CCu;
            // 0x4206d0: 0x3c034160  lui         $v1, 0x4160 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4206E8u;
            goto label_4206e8;
        }
    }
    ctx->pc = 0x4206D4u;
label_4206d4:
    // 0x4206d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4206d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_4206d8:
    // 0x4206d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4206d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4206dc:
    // 0x4206dc: 0x45010015  bc1t        . + 4 + (0x15 << 2)
label_4206e0:
    if (ctx->pc == 0x4206E0u) {
        ctx->pc = 0x4206E4u;
        goto label_4206e4;
    }
    ctx->pc = 0x4206DCu;
    {
        const bool branch_taken_0x4206dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4206dc) {
            ctx->pc = 0x420734u;
            goto label_420734;
        }
    }
    ctx->pc = 0x4206E4u;
label_4206e4:
    // 0x4206e4: 0x3c034160  lui         $v1, 0x4160
    ctx->pc = 0x4206e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
label_4206e8:
    // 0x4206e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4206e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4206ec:
    // 0x4206ec: 0x0  nop
    ctx->pc = 0x4206ecu;
    // NOP
label_4206f0:
    // 0x4206f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4206f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4206f4:
    // 0x4206f4: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_4206f8:
    if (ctx->pc == 0x4206F8u) {
        ctx->pc = 0x4206F8u;
            // 0x4206f8: 0x3c034198  lui         $v1, 0x4198 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16792 << 16));
        ctx->pc = 0x4206FCu;
        goto label_4206fc;
    }
    ctx->pc = 0x4206F4u;
    {
        const bool branch_taken_0x4206f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4206f4) {
            ctx->pc = 0x4206F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4206F4u;
            // 0x4206f8: 0x3c034198  lui         $v1, 0x4198 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16792 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420710u;
            goto label_420710;
        }
    }
    ctx->pc = 0x4206FCu;
label_4206fc:
    // 0x4206fc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4206fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_420700:
    // 0x420700: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x420700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_420704:
    // 0x420704: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_420708:
    if (ctx->pc == 0x420708u) {
        ctx->pc = 0x42070Cu;
        goto label_42070c;
    }
    ctx->pc = 0x420704u;
    {
        const bool branch_taken_0x420704 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x420704) {
            ctx->pc = 0x420734u;
            goto label_420734;
        }
    }
    ctx->pc = 0x42070Cu;
label_42070c:
    // 0x42070c: 0x3c034198  lui         $v1, 0x4198
    ctx->pc = 0x42070cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16792 << 16));
label_420710:
    // 0x420710: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x420710u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_420714:
    // 0x420714: 0x0  nop
    ctx->pc = 0x420714u;
    // NOP
label_420718:
    // 0x420718: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x420718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42071c:
    // 0x42071c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_420720:
    if (ctx->pc == 0x420720u) {
        ctx->pc = 0x420724u;
        goto label_420724;
    }
    ctx->pc = 0x42071Cu;
    {
        const bool branch_taken_0x42071c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x42071c) {
            ctx->pc = 0x420740u;
            goto label_420740;
        }
    }
    ctx->pc = 0x420724u;
label_420724:
    // 0x420724: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x420724u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_420728:
    // 0x420728: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x420728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42072c:
    // 0x42072c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_420730:
    if (ctx->pc == 0x420730u) {
        ctx->pc = 0x420734u;
        goto label_420734;
    }
    ctx->pc = 0x42072Cu;
    {
        const bool branch_taken_0x42072c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x42072c) {
            ctx->pc = 0x420740u;
            goto label_420740;
        }
    }
    ctx->pc = 0x420734u;
label_420734:
    // 0x420734: 0x240401a9  addiu       $a0, $zero, 0x1A9
    ctx->pc = 0x420734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
label_420738:
    // 0x420738: 0xc073234  jal         func_1CC8D0
label_42073c:
    if (ctx->pc == 0x42073Cu) {
        ctx->pc = 0x420740u;
        goto label_420740;
    }
    ctx->pc = 0x420738u;
    SET_GPR_U32(ctx, 31, 0x420740u);
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420740u; }
        if (ctx->pc != 0x420740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420740u; }
        if (ctx->pc != 0x420740u) { return; }
    }
    ctx->pc = 0x420740u;
label_420740:
    // 0x420740: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x420740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_420744:
    // 0x420744: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x420744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_420748:
    // 0x420748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x420748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42074c:
    // 0x42074c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42074cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_420750:
    // 0x420750: 0x3e00008  jr          $ra
label_420754:
    if (ctx->pc == 0x420754u) {
        ctx->pc = 0x420754u;
            // 0x420754: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x420758u;
        goto label_420758;
    }
    ctx->pc = 0x420750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420750u;
            // 0x420754: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x420758u;
label_420758:
    // 0x420758: 0x0  nop
    ctx->pc = 0x420758u;
    // NOP
label_42075c:
    // 0x42075c: 0x0  nop
    ctx->pc = 0x42075cu;
    // NOP
label_420760:
    // 0x420760: 0x3e00008  jr          $ra
label_420764:
    if (ctx->pc == 0x420764u) {
        ctx->pc = 0x420768u;
        goto label_420768;
    }
    ctx->pc = 0x420760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x420768u;
label_420768:
    // 0x420768: 0x0  nop
    ctx->pc = 0x420768u;
    // NOP
label_42076c:
    // 0x42076c: 0x0  nop
    ctx->pc = 0x42076cu;
    // NOP
label_420770:
    // 0x420770: 0x3e00008  jr          $ra
label_420774:
    if (ctx->pc == 0x420774u) {
        ctx->pc = 0x420778u;
        goto label_420778;
    }
    ctx->pc = 0x420770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x420778u;
label_420778:
    // 0x420778: 0x0  nop
    ctx->pc = 0x420778u;
    // NOP
label_42077c:
    // 0x42077c: 0x0  nop
    ctx->pc = 0x42077cu;
    // NOP
label_420780:
    // 0x420780: 0x8102f00  j           func_40BC00
label_420784:
    if (ctx->pc == 0x420784u) {
        ctx->pc = 0x420788u;
        goto label_420788;
    }
    ctx->pc = 0x420780u;
    ctx->pc = 0x40BC00u;
    if (runtime->hasFunction(0x40BC00u)) {
        auto targetFn = runtime->lookupFunction(0x40BC00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0040BC00_0x40bc00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x420788u;
label_420788:
    // 0x420788: 0x0  nop
    ctx->pc = 0x420788u;
    // NOP
label_42078c:
    // 0x42078c: 0x0  nop
    ctx->pc = 0x42078cu;
    // NOP
label_420790:
    // 0x420790: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x420790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_420794:
    // 0x420794: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x420794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_420798:
    // 0x420798: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x420798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_42079c:
    // 0x42079c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42079cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4207a0:
    // 0x4207a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4207a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4207a4:
    // 0x4207a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4207a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4207a8:
    // 0x4207a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4207a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4207ac:
    // 0x4207ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4207acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4207b0:
    // 0x4207b0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4207b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4207b4:
    // 0x4207b4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4207b8:
    if (ctx->pc == 0x4207B8u) {
        ctx->pc = 0x4207B8u;
            // 0x4207b8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4207BCu;
        goto label_4207bc;
    }
    ctx->pc = 0x4207B4u;
    {
        const bool branch_taken_0x4207b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4207B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4207B4u;
            // 0x4207b8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4207b4) {
            ctx->pc = 0x4207F8u;
            goto label_4207f8;
        }
    }
    ctx->pc = 0x4207BCu;
label_4207bc:
    // 0x4207bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4207bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4207c0:
    // 0x4207c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4207c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4207c4:
    // 0x4207c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4207c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4207c8:
    // 0x4207c8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4207c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4207cc:
    // 0x4207cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4207ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4207d0:
    // 0x4207d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4207d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4207d4:
    // 0x4207d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4207d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4207d8:
    // 0x4207d8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4207d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4207dc:
    // 0x4207dc: 0x320f809  jalr        $t9
label_4207e0:
    if (ctx->pc == 0x4207E0u) {
        ctx->pc = 0x4207E4u;
        goto label_4207e4;
    }
    ctx->pc = 0x4207DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4207E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4207E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4207E4u; }
            if (ctx->pc != 0x4207E4u) { return; }
        }
        }
    }
    ctx->pc = 0x4207E4u;
label_4207e4:
    // 0x4207e4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4207e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4207e8:
    // 0x4207e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4207e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4207ec:
    // 0x4207ec: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4207ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4207f0:
    // 0x4207f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4207f4:
    if (ctx->pc == 0x4207F4u) {
        ctx->pc = 0x4207F4u;
            // 0x4207f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4207F8u;
        goto label_4207f8;
    }
    ctx->pc = 0x4207F0u;
    {
        const bool branch_taken_0x4207f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4207F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4207F0u;
            // 0x4207f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4207f0) {
            ctx->pc = 0x4207C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4207c8;
        }
    }
    ctx->pc = 0x4207F8u;
label_4207f8:
    // 0x4207f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4207f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4207fc:
    // 0x4207fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4207fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_420800:
    // 0x420800: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x420800u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_420804:
    // 0x420804: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x420804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_420808:
    // 0x420808: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x420808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42080c:
    // 0x42080c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42080cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_420810:
    // 0x420810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x420810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_420814:
    // 0x420814: 0x3e00008  jr          $ra
label_420818:
    if (ctx->pc == 0x420818u) {
        ctx->pc = 0x420818u;
            // 0x420818: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x42081Cu;
        goto label_42081c;
    }
    ctx->pc = 0x420814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420814u;
            // 0x420818: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42081Cu;
label_42081c:
    // 0x42081c: 0x0  nop
    ctx->pc = 0x42081cu;
    // NOP
label_420820:
    // 0x420820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x420820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_420824:
    // 0x420824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x420824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_420828:
    // 0x420828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x420828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42082c:
    // 0x42082c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42082cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_420830:
    // 0x420830: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x420830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_420834:
    // 0x420834: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_420838:
    if (ctx->pc == 0x420838u) {
        ctx->pc = 0x420838u;
            // 0x420838: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42083Cu;
        goto label_42083c;
    }
    ctx->pc = 0x420834u;
    {
        const bool branch_taken_0x420834 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x420838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420834u;
            // 0x420838: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420834) {
            ctx->pc = 0x420968u;
            goto label_420968;
        }
    }
    ctx->pc = 0x42083Cu;
label_42083c:
    // 0x42083c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42083cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_420840:
    // 0x420840: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x420840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_420844:
    // 0x420844: 0x2463bbb0  addiu       $v1, $v1, -0x4450
    ctx->pc = 0x420844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949808));
label_420848:
    // 0x420848: 0x2442bbe8  addiu       $v0, $v0, -0x4418
    ctx->pc = 0x420848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949864));
label_42084c:
    // 0x42084c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x42084cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_420850:
    // 0x420850: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x420850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_420854:
    // 0x420854: 0x8e240180  lw          $a0, 0x180($s1)
    ctx->pc = 0x420854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_420858:
    // 0x420858: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_42085c:
    if (ctx->pc == 0x42085Cu) {
        ctx->pc = 0x42085Cu;
            // 0x42085c: 0x8e22017c  lw          $v0, 0x17C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
        ctx->pc = 0x420860u;
        goto label_420860;
    }
    ctx->pc = 0x420858u;
    {
        const bool branch_taken_0x420858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x420858) {
            ctx->pc = 0x42085Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420858u;
            // 0x42085c: 0x8e22017c  lw          $v0, 0x17C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420874u;
            goto label_420874;
        }
    }
    ctx->pc = 0x420860u;
label_420860:
    // 0x420860: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x420860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_420864:
    // 0x420864: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x420864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_420868:
    // 0x420868: 0x320f809  jalr        $t9
label_42086c:
    if (ctx->pc == 0x42086Cu) {
        ctx->pc = 0x42086Cu;
            // 0x42086c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x420870u;
        goto label_420870;
    }
    ctx->pc = 0x420868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x420870u);
        ctx->pc = 0x42086Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420868u;
            // 0x42086c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x420870u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x420870u; }
            if (ctx->pc != 0x420870u) { return; }
        }
        }
    }
    ctx->pc = 0x420870u;
label_420870:
    // 0x420870: 0x8e22017c  lw          $v0, 0x17C($s1)
    ctx->pc = 0x420870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
label_420874:
    // 0x420874: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_420878:
    if (ctx->pc == 0x420878u) {
        ctx->pc = 0x420878u;
            // 0x420878: 0x26220190  addiu       $v0, $s1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
        ctx->pc = 0x42087Cu;
        goto label_42087c;
    }
    ctx->pc = 0x420874u;
    {
        const bool branch_taken_0x420874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x420874) {
            ctx->pc = 0x420878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420874u;
            // 0x420878: 0x26220190  addiu       $v0, $s1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420888u;
            goto label_420888;
        }
    }
    ctx->pc = 0x42087Cu;
label_42087c:
    // 0x42087c: 0xc04008c  jal         func_100230
label_420880:
    if (ctx->pc == 0x420880u) {
        ctx->pc = 0x420880u;
            // 0x420880: 0x2444fff0  addiu       $a0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->pc = 0x420884u;
        goto label_420884;
    }
    ctx->pc = 0x42087Cu;
    SET_GPR_U32(ctx, 31, 0x420884u);
    ctx->pc = 0x420880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42087Cu;
            // 0x420880: 0x2444fff0  addiu       $a0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420884u; }
        if (ctx->pc != 0x420884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420884u; }
        if (ctx->pc != 0x420884u) { return; }
    }
    ctx->pc = 0x420884u;
label_420884:
    // 0x420884: 0x26220190  addiu       $v0, $s1, 0x190
    ctx->pc = 0x420884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_420888:
    // 0x420888: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_42088c:
    if (ctx->pc == 0x42088Cu) {
        ctx->pc = 0x42088Cu;
            // 0x42088c: 0x26220184  addiu       $v0, $s1, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 388));
        ctx->pc = 0x420890u;
        goto label_420890;
    }
    ctx->pc = 0x420888u;
    {
        const bool branch_taken_0x420888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x420888) {
            ctx->pc = 0x42088Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420888u;
            // 0x42088c: 0x26220184  addiu       $v0, $s1, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 388));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4208B8u;
            goto label_4208b8;
        }
    }
    ctx->pc = 0x420890u;
label_420890:
    // 0x420890: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_420894:
    if (ctx->pc == 0x420894u) {
        ctx->pc = 0x420898u;
        goto label_420898;
    }
    ctx->pc = 0x420890u;
    {
        const bool branch_taken_0x420890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x420890) {
            ctx->pc = 0x4208B4u;
            goto label_4208b4;
        }
    }
    ctx->pc = 0x420898u;
label_420898:
    // 0x420898: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_42089c:
    if (ctx->pc == 0x42089Cu) {
        ctx->pc = 0x4208A0u;
        goto label_4208a0;
    }
    ctx->pc = 0x420898u;
    {
        const bool branch_taken_0x420898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x420898) {
            ctx->pc = 0x4208B4u;
            goto label_4208b4;
        }
    }
    ctx->pc = 0x4208A0u;
label_4208a0:
    // 0x4208a0: 0x8e240198  lw          $a0, 0x198($s1)
    ctx->pc = 0x4208a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
label_4208a4:
    // 0x4208a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4208a8:
    if (ctx->pc == 0x4208A8u) {
        ctx->pc = 0x4208ACu;
        goto label_4208ac;
    }
    ctx->pc = 0x4208A4u;
    {
        const bool branch_taken_0x4208a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4208a4) {
            ctx->pc = 0x4208B4u;
            goto label_4208b4;
        }
    }
    ctx->pc = 0x4208ACu;
label_4208ac:
    // 0x4208ac: 0xc0400a8  jal         func_1002A0
label_4208b0:
    if (ctx->pc == 0x4208B0u) {
        ctx->pc = 0x4208B4u;
        goto label_4208b4;
    }
    ctx->pc = 0x4208ACu;
    SET_GPR_U32(ctx, 31, 0x4208B4u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4208B4u; }
        if (ctx->pc != 0x4208B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4208B4u; }
        if (ctx->pc != 0x4208B4u) { return; }
    }
    ctx->pc = 0x4208B4u;
label_4208b4:
    // 0x4208b4: 0x26220184  addiu       $v0, $s1, 0x184
    ctx->pc = 0x4208b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 388));
label_4208b8:
    // 0x4208b8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4208bc:
    if (ctx->pc == 0x4208BCu) {
        ctx->pc = 0x4208C0u;
        goto label_4208c0;
    }
    ctx->pc = 0x4208B8u;
    {
        const bool branch_taken_0x4208b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4208b8) {
            ctx->pc = 0x4208E4u;
            goto label_4208e4;
        }
    }
    ctx->pc = 0x4208C0u;
label_4208c0:
    // 0x4208c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4208c4:
    if (ctx->pc == 0x4208C4u) {
        ctx->pc = 0x4208C8u;
        goto label_4208c8;
    }
    ctx->pc = 0x4208C0u;
    {
        const bool branch_taken_0x4208c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4208c0) {
            ctx->pc = 0x4208E4u;
            goto label_4208e4;
        }
    }
    ctx->pc = 0x4208C8u;
label_4208c8:
    // 0x4208c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4208cc:
    if (ctx->pc == 0x4208CCu) {
        ctx->pc = 0x4208D0u;
        goto label_4208d0;
    }
    ctx->pc = 0x4208C8u;
    {
        const bool branch_taken_0x4208c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4208c8) {
            ctx->pc = 0x4208E4u;
            goto label_4208e4;
        }
    }
    ctx->pc = 0x4208D0u;
label_4208d0:
    // 0x4208d0: 0x8e24018c  lw          $a0, 0x18C($s1)
    ctx->pc = 0x4208d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 396)));
label_4208d4:
    // 0x4208d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4208d8:
    if (ctx->pc == 0x4208D8u) {
        ctx->pc = 0x4208DCu;
        goto label_4208dc;
    }
    ctx->pc = 0x4208D4u;
    {
        const bool branch_taken_0x4208d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4208d4) {
            ctx->pc = 0x4208E4u;
            goto label_4208e4;
        }
    }
    ctx->pc = 0x4208DCu;
label_4208dc:
    // 0x4208dc: 0xc0400a8  jal         func_1002A0
label_4208e0:
    if (ctx->pc == 0x4208E0u) {
        ctx->pc = 0x4208E4u;
        goto label_4208e4;
    }
    ctx->pc = 0x4208DCu;
    SET_GPR_U32(ctx, 31, 0x4208E4u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4208E4u; }
        if (ctx->pc != 0x4208E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4208E4u; }
        if (ctx->pc != 0x4208E4u) { return; }
    }
    ctx->pc = 0x4208E4u;
label_4208e4:
    // 0x4208e4: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
label_4208e8:
    if (ctx->pc == 0x4208E8u) {
        ctx->pc = 0x4208E8u;
            // 0x4208e8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4208ECu;
        goto label_4208ec;
    }
    ctx->pc = 0x4208E4u;
    {
        const bool branch_taken_0x4208e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4208e4) {
            ctx->pc = 0x4208E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4208E4u;
            // 0x4208e8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x420954u;
            goto label_420954;
        }
    }
    ctx->pc = 0x4208ECu;
label_4208ec:
    // 0x4208ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4208ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4208f0:
    // 0x4208f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4208f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4208f4:
    // 0x4208f4: 0x2463bc80  addiu       $v1, $v1, -0x4380
    ctx->pc = 0x4208f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950016));
label_4208f8:
    // 0x4208f8: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x4208f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_4208fc:
    // 0x4208fc: 0x2442bcb8  addiu       $v0, $v0, -0x4348
    ctx->pc = 0x4208fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950072));
label_420900:
    // 0x420900: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x420900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_420904:
    // 0x420904: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x420904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_420908:
    // 0x420908: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x420908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_42090c:
    // 0x42090c: 0xc0407c0  jal         func_101F00
label_420910:
    if (ctx->pc == 0x420910u) {
        ctx->pc = 0x420910u;
            // 0x420910: 0x24a50b40  addiu       $a1, $a1, 0xB40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2880));
        ctx->pc = 0x420914u;
        goto label_420914;
    }
    ctx->pc = 0x42090Cu;
    SET_GPR_U32(ctx, 31, 0x420914u);
    ctx->pc = 0x420910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42090Cu;
            // 0x420910: 0x24a50b40  addiu       $a1, $a1, 0xB40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420914u; }
        if (ctx->pc != 0x420914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420914u; }
        if (ctx->pc != 0x420914u) { return; }
    }
    ctx->pc = 0x420914u;
label_420914:
    // 0x420914: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x420914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_420918:
    // 0x420918: 0xc108294  jal         func_420A50
label_42091c:
    if (ctx->pc == 0x42091Cu) {
        ctx->pc = 0x42091Cu;
            // 0x42091c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x420920u;
        goto label_420920;
    }
    ctx->pc = 0x420918u;
    SET_GPR_U32(ctx, 31, 0x420920u);
    ctx->pc = 0x42091Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420918u;
            // 0x42091c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x420A50u;
    if (runtime->hasFunction(0x420A50u)) {
        auto targetFn = runtime->lookupFunction(0x420A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420920u; }
        if (ctx->pc != 0x420920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00420A50_0x420a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420920u; }
        if (ctx->pc != 0x420920u) { return; }
    }
    ctx->pc = 0x420920u;
label_420920:
    // 0x420920: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x420920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_420924:
    // 0x420924: 0xc108278  jal         func_4209E0
label_420928:
    if (ctx->pc == 0x420928u) {
        ctx->pc = 0x420928u;
            // 0x420928: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x42092Cu;
        goto label_42092c;
    }
    ctx->pc = 0x420924u;
    SET_GPR_U32(ctx, 31, 0x42092Cu);
    ctx->pc = 0x420928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420924u;
            // 0x420928: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4209E0u;
    if (runtime->hasFunction(0x4209E0u)) {
        auto targetFn = runtime->lookupFunction(0x4209E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42092Cu; }
        if (ctx->pc != 0x42092Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004209E0_0x4209e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42092Cu; }
        if (ctx->pc != 0x42092Cu) { return; }
    }
    ctx->pc = 0x42092Cu;
label_42092c:
    // 0x42092c: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x42092cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_420930:
    // 0x420930: 0xc108278  jal         func_4209E0
label_420934:
    if (ctx->pc == 0x420934u) {
        ctx->pc = 0x420934u;
            // 0x420934: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x420938u;
        goto label_420938;
    }
    ctx->pc = 0x420930u;
    SET_GPR_U32(ctx, 31, 0x420938u);
    ctx->pc = 0x420934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420930u;
            // 0x420934: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4209E0u;
    if (runtime->hasFunction(0x4209E0u)) {
        auto targetFn = runtime->lookupFunction(0x4209E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420938u; }
        if (ctx->pc != 0x420938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004209E0_0x4209e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420938u; }
        if (ctx->pc != 0x420938u) { return; }
    }
    ctx->pc = 0x420938u;
label_420938:
    // 0x420938: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x420938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_42093c:
    // 0x42093c: 0xc108260  jal         func_420980
label_420940:
    if (ctx->pc == 0x420940u) {
        ctx->pc = 0x420940u;
            // 0x420940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x420944u;
        goto label_420944;
    }
    ctx->pc = 0x42093Cu;
    SET_GPR_U32(ctx, 31, 0x420944u);
    ctx->pc = 0x420940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42093Cu;
            // 0x420940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x420980u;
    if (runtime->hasFunction(0x420980u)) {
        auto targetFn = runtime->lookupFunction(0x420980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420944u; }
        if (ctx->pc != 0x420944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00420980_0x420980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420944u; }
        if (ctx->pc != 0x420944u) { return; }
    }
    ctx->pc = 0x420944u;
label_420944:
    // 0x420944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x420944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_420948:
    // 0x420948: 0xc0ae1c0  jal         func_2B8700
label_42094c:
    if (ctx->pc == 0x42094Cu) {
        ctx->pc = 0x42094Cu;
            // 0x42094c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x420950u;
        goto label_420950;
    }
    ctx->pc = 0x420948u;
    SET_GPR_U32(ctx, 31, 0x420950u);
    ctx->pc = 0x42094Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420948u;
            // 0x42094c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420950u; }
        if (ctx->pc != 0x420950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420950u; }
        if (ctx->pc != 0x420950u) { return; }
    }
    ctx->pc = 0x420950u;
label_420950:
    // 0x420950: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x420950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_420954:
    // 0x420954: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x420954u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_420958:
    // 0x420958: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_42095c:
    if (ctx->pc == 0x42095Cu) {
        ctx->pc = 0x42095Cu;
            // 0x42095c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x420960u;
        goto label_420960;
    }
    ctx->pc = 0x420958u;
    {
        const bool branch_taken_0x420958 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x420958) {
            ctx->pc = 0x42095Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x420958u;
            // 0x42095c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42096Cu;
            goto label_42096c;
        }
    }
    ctx->pc = 0x420960u;
label_420960:
    // 0x420960: 0xc0400a8  jal         func_1002A0
label_420964:
    if (ctx->pc == 0x420964u) {
        ctx->pc = 0x420964u;
            // 0x420964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x420968u;
        goto label_420968;
    }
    ctx->pc = 0x420960u;
    SET_GPR_U32(ctx, 31, 0x420968u);
    ctx->pc = 0x420964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x420960u;
            // 0x420964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420968u; }
        if (ctx->pc != 0x420968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x420968u; }
        if (ctx->pc != 0x420968u) { return; }
    }
    ctx->pc = 0x420968u;
label_420968:
    // 0x420968: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x420968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42096c:
    // 0x42096c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42096cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_420970:
    // 0x420970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x420970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_420974:
    // 0x420974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x420974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_420978:
    // 0x420978: 0x3e00008  jr          $ra
label_42097c:
    if (ctx->pc == 0x42097Cu) {
        ctx->pc = 0x42097Cu;
            // 0x42097c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x420980u;
        goto label_fallthrough_0x420978;
    }
    ctx->pc = 0x420978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42097Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x420978u;
            // 0x42097c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x420978:
    ctx->pc = 0x420980u;
}
