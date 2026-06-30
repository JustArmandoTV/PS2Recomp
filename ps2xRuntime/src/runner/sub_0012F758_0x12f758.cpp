#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012F758
// Address: 0x12f758 - 0x1303e8
void sub_0012F758_0x12f758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F758_0x12f758");
#endif

    switch (ctx->pc) {
        case 0x12f758u: goto label_12f758;
        case 0x12f75cu: goto label_12f75c;
        case 0x12f760u: goto label_12f760;
        case 0x12f764u: goto label_12f764;
        case 0x12f768u: goto label_12f768;
        case 0x12f76cu: goto label_12f76c;
        case 0x12f770u: goto label_12f770;
        case 0x12f774u: goto label_12f774;
        case 0x12f778u: goto label_12f778;
        case 0x12f77cu: goto label_12f77c;
        case 0x12f780u: goto label_12f780;
        case 0x12f784u: goto label_12f784;
        case 0x12f788u: goto label_12f788;
        case 0x12f78cu: goto label_12f78c;
        case 0x12f790u: goto label_12f790;
        case 0x12f794u: goto label_12f794;
        case 0x12f798u: goto label_12f798;
        case 0x12f79cu: goto label_12f79c;
        case 0x12f7a0u: goto label_12f7a0;
        case 0x12f7a4u: goto label_12f7a4;
        case 0x12f7a8u: goto label_12f7a8;
        case 0x12f7acu: goto label_12f7ac;
        case 0x12f7b0u: goto label_12f7b0;
        case 0x12f7b4u: goto label_12f7b4;
        case 0x12f7b8u: goto label_12f7b8;
        case 0x12f7bcu: goto label_12f7bc;
        case 0x12f7c0u: goto label_12f7c0;
        case 0x12f7c4u: goto label_12f7c4;
        case 0x12f7c8u: goto label_12f7c8;
        case 0x12f7ccu: goto label_12f7cc;
        case 0x12f7d0u: goto label_12f7d0;
        case 0x12f7d4u: goto label_12f7d4;
        case 0x12f7d8u: goto label_12f7d8;
        case 0x12f7dcu: goto label_12f7dc;
        case 0x12f7e0u: goto label_12f7e0;
        case 0x12f7e4u: goto label_12f7e4;
        case 0x12f7e8u: goto label_12f7e8;
        case 0x12f7ecu: goto label_12f7ec;
        case 0x12f7f0u: goto label_12f7f0;
        case 0x12f7f4u: goto label_12f7f4;
        case 0x12f7f8u: goto label_12f7f8;
        case 0x12f7fcu: goto label_12f7fc;
        case 0x12f800u: goto label_12f800;
        case 0x12f804u: goto label_12f804;
        case 0x12f808u: goto label_12f808;
        case 0x12f80cu: goto label_12f80c;
        case 0x12f810u: goto label_12f810;
        case 0x12f814u: goto label_12f814;
        case 0x12f818u: goto label_12f818;
        case 0x12f81cu: goto label_12f81c;
        case 0x12f820u: goto label_12f820;
        case 0x12f824u: goto label_12f824;
        case 0x12f828u: goto label_12f828;
        case 0x12f82cu: goto label_12f82c;
        case 0x12f830u: goto label_12f830;
        case 0x12f834u: goto label_12f834;
        case 0x12f838u: goto label_12f838;
        case 0x12f83cu: goto label_12f83c;
        case 0x12f840u: goto label_12f840;
        case 0x12f844u: goto label_12f844;
        case 0x12f848u: goto label_12f848;
        case 0x12f84cu: goto label_12f84c;
        case 0x12f850u: goto label_12f850;
        case 0x12f854u: goto label_12f854;
        case 0x12f858u: goto label_12f858;
        case 0x12f85cu: goto label_12f85c;
        case 0x12f860u: goto label_12f860;
        case 0x12f864u: goto label_12f864;
        case 0x12f868u: goto label_12f868;
        case 0x12f86cu: goto label_12f86c;
        case 0x12f870u: goto label_12f870;
        case 0x12f874u: goto label_12f874;
        case 0x12f878u: goto label_12f878;
        case 0x12f87cu: goto label_12f87c;
        case 0x12f880u: goto label_12f880;
        case 0x12f884u: goto label_12f884;
        case 0x12f888u: goto label_12f888;
        case 0x12f88cu: goto label_12f88c;
        case 0x12f890u: goto label_12f890;
        case 0x12f894u: goto label_12f894;
        case 0x12f898u: goto label_12f898;
        case 0x12f89cu: goto label_12f89c;
        case 0x12f8a0u: goto label_12f8a0;
        case 0x12f8a4u: goto label_12f8a4;
        case 0x12f8a8u: goto label_12f8a8;
        case 0x12f8acu: goto label_12f8ac;
        case 0x12f8b0u: goto label_12f8b0;
        case 0x12f8b4u: goto label_12f8b4;
        case 0x12f8b8u: goto label_12f8b8;
        case 0x12f8bcu: goto label_12f8bc;
        case 0x12f8c0u: goto label_12f8c0;
        case 0x12f8c4u: goto label_12f8c4;
        case 0x12f8c8u: goto label_12f8c8;
        case 0x12f8ccu: goto label_12f8cc;
        case 0x12f8d0u: goto label_12f8d0;
        case 0x12f8d4u: goto label_12f8d4;
        case 0x12f8d8u: goto label_12f8d8;
        case 0x12f8dcu: goto label_12f8dc;
        case 0x12f8e0u: goto label_12f8e0;
        case 0x12f8e4u: goto label_12f8e4;
        case 0x12f8e8u: goto label_12f8e8;
        case 0x12f8ecu: goto label_12f8ec;
        case 0x12f8f0u: goto label_12f8f0;
        case 0x12f8f4u: goto label_12f8f4;
        case 0x12f8f8u: goto label_12f8f8;
        case 0x12f8fcu: goto label_12f8fc;
        case 0x12f900u: goto label_12f900;
        case 0x12f904u: goto label_12f904;
        case 0x12f908u: goto label_12f908;
        case 0x12f90cu: goto label_12f90c;
        case 0x12f910u: goto label_12f910;
        case 0x12f914u: goto label_12f914;
        case 0x12f918u: goto label_12f918;
        case 0x12f91cu: goto label_12f91c;
        case 0x12f920u: goto label_12f920;
        case 0x12f924u: goto label_12f924;
        case 0x12f928u: goto label_12f928;
        case 0x12f92cu: goto label_12f92c;
        case 0x12f930u: goto label_12f930;
        case 0x12f934u: goto label_12f934;
        case 0x12f938u: goto label_12f938;
        case 0x12f93cu: goto label_12f93c;
        case 0x12f940u: goto label_12f940;
        case 0x12f944u: goto label_12f944;
        case 0x12f948u: goto label_12f948;
        case 0x12f94cu: goto label_12f94c;
        case 0x12f950u: goto label_12f950;
        case 0x12f954u: goto label_12f954;
        case 0x12f958u: goto label_12f958;
        case 0x12f95cu: goto label_12f95c;
        case 0x12f960u: goto label_12f960;
        case 0x12f964u: goto label_12f964;
        case 0x12f968u: goto label_12f968;
        case 0x12f96cu: goto label_12f96c;
        case 0x12f970u: goto label_12f970;
        case 0x12f974u: goto label_12f974;
        case 0x12f978u: goto label_12f978;
        case 0x12f97cu: goto label_12f97c;
        case 0x12f980u: goto label_12f980;
        case 0x12f984u: goto label_12f984;
        case 0x12f988u: goto label_12f988;
        case 0x12f98cu: goto label_12f98c;
        case 0x12f990u: goto label_12f990;
        case 0x12f994u: goto label_12f994;
        case 0x12f998u: goto label_12f998;
        case 0x12f99cu: goto label_12f99c;
        case 0x12f9a0u: goto label_12f9a0;
        case 0x12f9a4u: goto label_12f9a4;
        case 0x12f9a8u: goto label_12f9a8;
        case 0x12f9acu: goto label_12f9ac;
        case 0x12f9b0u: goto label_12f9b0;
        case 0x12f9b4u: goto label_12f9b4;
        case 0x12f9b8u: goto label_12f9b8;
        case 0x12f9bcu: goto label_12f9bc;
        case 0x12f9c0u: goto label_12f9c0;
        case 0x12f9c4u: goto label_12f9c4;
        case 0x12f9c8u: goto label_12f9c8;
        case 0x12f9ccu: goto label_12f9cc;
        case 0x12f9d0u: goto label_12f9d0;
        case 0x12f9d4u: goto label_12f9d4;
        case 0x12f9d8u: goto label_12f9d8;
        case 0x12f9dcu: goto label_12f9dc;
        case 0x12f9e0u: goto label_12f9e0;
        case 0x12f9e4u: goto label_12f9e4;
        case 0x12f9e8u: goto label_12f9e8;
        case 0x12f9ecu: goto label_12f9ec;
        case 0x12f9f0u: goto label_12f9f0;
        case 0x12f9f4u: goto label_12f9f4;
        case 0x12f9f8u: goto label_12f9f8;
        case 0x12f9fcu: goto label_12f9fc;
        case 0x12fa00u: goto label_12fa00;
        case 0x12fa04u: goto label_12fa04;
        case 0x12fa08u: goto label_12fa08;
        case 0x12fa0cu: goto label_12fa0c;
        case 0x12fa10u: goto label_12fa10;
        case 0x12fa14u: goto label_12fa14;
        case 0x12fa18u: goto label_12fa18;
        case 0x12fa1cu: goto label_12fa1c;
        case 0x12fa20u: goto label_12fa20;
        case 0x12fa24u: goto label_12fa24;
        case 0x12fa28u: goto label_12fa28;
        case 0x12fa2cu: goto label_12fa2c;
        case 0x12fa30u: goto label_12fa30;
        case 0x12fa34u: goto label_12fa34;
        case 0x12fa38u: goto label_12fa38;
        case 0x12fa3cu: goto label_12fa3c;
        case 0x12fa40u: goto label_12fa40;
        case 0x12fa44u: goto label_12fa44;
        case 0x12fa48u: goto label_12fa48;
        case 0x12fa4cu: goto label_12fa4c;
        case 0x12fa50u: goto label_12fa50;
        case 0x12fa54u: goto label_12fa54;
        case 0x12fa58u: goto label_12fa58;
        case 0x12fa5cu: goto label_12fa5c;
        case 0x12fa60u: goto label_12fa60;
        case 0x12fa64u: goto label_12fa64;
        case 0x12fa68u: goto label_12fa68;
        case 0x12fa6cu: goto label_12fa6c;
        case 0x12fa70u: goto label_12fa70;
        case 0x12fa74u: goto label_12fa74;
        case 0x12fa78u: goto label_12fa78;
        case 0x12fa7cu: goto label_12fa7c;
        case 0x12fa80u: goto label_12fa80;
        case 0x12fa84u: goto label_12fa84;
        case 0x12fa88u: goto label_12fa88;
        case 0x12fa8cu: goto label_12fa8c;
        case 0x12fa90u: goto label_12fa90;
        case 0x12fa94u: goto label_12fa94;
        case 0x12fa98u: goto label_12fa98;
        case 0x12fa9cu: goto label_12fa9c;
        case 0x12faa0u: goto label_12faa0;
        case 0x12faa4u: goto label_12faa4;
        case 0x12faa8u: goto label_12faa8;
        case 0x12faacu: goto label_12faac;
        case 0x12fab0u: goto label_12fab0;
        case 0x12fab4u: goto label_12fab4;
        case 0x12fab8u: goto label_12fab8;
        case 0x12fabcu: goto label_12fabc;
        case 0x12fac0u: goto label_12fac0;
        case 0x12fac4u: goto label_12fac4;
        case 0x12fac8u: goto label_12fac8;
        case 0x12faccu: goto label_12facc;
        case 0x12fad0u: goto label_12fad0;
        case 0x12fad4u: goto label_12fad4;
        case 0x12fad8u: goto label_12fad8;
        case 0x12fadcu: goto label_12fadc;
        case 0x12fae0u: goto label_12fae0;
        case 0x12fae4u: goto label_12fae4;
        case 0x12fae8u: goto label_12fae8;
        case 0x12faecu: goto label_12faec;
        case 0x12faf0u: goto label_12faf0;
        case 0x12faf4u: goto label_12faf4;
        case 0x12faf8u: goto label_12faf8;
        case 0x12fafcu: goto label_12fafc;
        case 0x12fb00u: goto label_12fb00;
        case 0x12fb04u: goto label_12fb04;
        case 0x12fb08u: goto label_12fb08;
        case 0x12fb0cu: goto label_12fb0c;
        case 0x12fb10u: goto label_12fb10;
        case 0x12fb14u: goto label_12fb14;
        case 0x12fb18u: goto label_12fb18;
        case 0x12fb1cu: goto label_12fb1c;
        case 0x12fb20u: goto label_12fb20;
        case 0x12fb24u: goto label_12fb24;
        case 0x12fb28u: goto label_12fb28;
        case 0x12fb2cu: goto label_12fb2c;
        case 0x12fb30u: goto label_12fb30;
        case 0x12fb34u: goto label_12fb34;
        case 0x12fb38u: goto label_12fb38;
        case 0x12fb3cu: goto label_12fb3c;
        case 0x12fb40u: goto label_12fb40;
        case 0x12fb44u: goto label_12fb44;
        case 0x12fb48u: goto label_12fb48;
        case 0x12fb4cu: goto label_12fb4c;
        case 0x12fb50u: goto label_12fb50;
        case 0x12fb54u: goto label_12fb54;
        case 0x12fb58u: goto label_12fb58;
        case 0x12fb5cu: goto label_12fb5c;
        case 0x12fb60u: goto label_12fb60;
        case 0x12fb64u: goto label_12fb64;
        case 0x12fb68u: goto label_12fb68;
        case 0x12fb6cu: goto label_12fb6c;
        case 0x12fb70u: goto label_12fb70;
        case 0x12fb74u: goto label_12fb74;
        case 0x12fb78u: goto label_12fb78;
        case 0x12fb7cu: goto label_12fb7c;
        case 0x12fb80u: goto label_12fb80;
        case 0x12fb84u: goto label_12fb84;
        case 0x12fb88u: goto label_12fb88;
        case 0x12fb8cu: goto label_12fb8c;
        case 0x12fb90u: goto label_12fb90;
        case 0x12fb94u: goto label_12fb94;
        case 0x12fb98u: goto label_12fb98;
        case 0x12fb9cu: goto label_12fb9c;
        case 0x12fba0u: goto label_12fba0;
        case 0x12fba4u: goto label_12fba4;
        case 0x12fba8u: goto label_12fba8;
        case 0x12fbacu: goto label_12fbac;
        case 0x12fbb0u: goto label_12fbb0;
        case 0x12fbb4u: goto label_12fbb4;
        case 0x12fbb8u: goto label_12fbb8;
        case 0x12fbbcu: goto label_12fbbc;
        case 0x12fbc0u: goto label_12fbc0;
        case 0x12fbc4u: goto label_12fbc4;
        case 0x12fbc8u: goto label_12fbc8;
        case 0x12fbccu: goto label_12fbcc;
        case 0x12fbd0u: goto label_12fbd0;
        case 0x12fbd4u: goto label_12fbd4;
        case 0x12fbd8u: goto label_12fbd8;
        case 0x12fbdcu: goto label_12fbdc;
        case 0x12fbe0u: goto label_12fbe0;
        case 0x12fbe4u: goto label_12fbe4;
        case 0x12fbe8u: goto label_12fbe8;
        case 0x12fbecu: goto label_12fbec;
        case 0x12fbf0u: goto label_12fbf0;
        case 0x12fbf4u: goto label_12fbf4;
        case 0x12fbf8u: goto label_12fbf8;
        case 0x12fbfcu: goto label_12fbfc;
        case 0x12fc00u: goto label_12fc00;
        case 0x12fc04u: goto label_12fc04;
        case 0x12fc08u: goto label_12fc08;
        case 0x12fc0cu: goto label_12fc0c;
        case 0x12fc10u: goto label_12fc10;
        case 0x12fc14u: goto label_12fc14;
        case 0x12fc18u: goto label_12fc18;
        case 0x12fc1cu: goto label_12fc1c;
        case 0x12fc20u: goto label_12fc20;
        case 0x12fc24u: goto label_12fc24;
        case 0x12fc28u: goto label_12fc28;
        case 0x12fc2cu: goto label_12fc2c;
        case 0x12fc30u: goto label_12fc30;
        case 0x12fc34u: goto label_12fc34;
        case 0x12fc38u: goto label_12fc38;
        case 0x12fc3cu: goto label_12fc3c;
        case 0x12fc40u: goto label_12fc40;
        case 0x12fc44u: goto label_12fc44;
        case 0x12fc48u: goto label_12fc48;
        case 0x12fc4cu: goto label_12fc4c;
        case 0x12fc50u: goto label_12fc50;
        case 0x12fc54u: goto label_12fc54;
        case 0x12fc58u: goto label_12fc58;
        case 0x12fc5cu: goto label_12fc5c;
        case 0x12fc60u: goto label_12fc60;
        case 0x12fc64u: goto label_12fc64;
        case 0x12fc68u: goto label_12fc68;
        case 0x12fc6cu: goto label_12fc6c;
        case 0x12fc70u: goto label_12fc70;
        case 0x12fc74u: goto label_12fc74;
        case 0x12fc78u: goto label_12fc78;
        case 0x12fc7cu: goto label_12fc7c;
        case 0x12fc80u: goto label_12fc80;
        case 0x12fc84u: goto label_12fc84;
        case 0x12fc88u: goto label_12fc88;
        case 0x12fc8cu: goto label_12fc8c;
        case 0x12fc90u: goto label_12fc90;
        case 0x12fc94u: goto label_12fc94;
        case 0x12fc98u: goto label_12fc98;
        case 0x12fc9cu: goto label_12fc9c;
        case 0x12fca0u: goto label_12fca0;
        case 0x12fca4u: goto label_12fca4;
        case 0x12fca8u: goto label_12fca8;
        case 0x12fcacu: goto label_12fcac;
        case 0x12fcb0u: goto label_12fcb0;
        case 0x12fcb4u: goto label_12fcb4;
        case 0x12fcb8u: goto label_12fcb8;
        case 0x12fcbcu: goto label_12fcbc;
        case 0x12fcc0u: goto label_12fcc0;
        case 0x12fcc4u: goto label_12fcc4;
        case 0x12fcc8u: goto label_12fcc8;
        case 0x12fcccu: goto label_12fccc;
        case 0x12fcd0u: goto label_12fcd0;
        case 0x12fcd4u: goto label_12fcd4;
        case 0x12fcd8u: goto label_12fcd8;
        case 0x12fcdcu: goto label_12fcdc;
        case 0x12fce0u: goto label_12fce0;
        case 0x12fce4u: goto label_12fce4;
        case 0x12fce8u: goto label_12fce8;
        case 0x12fcecu: goto label_12fcec;
        case 0x12fcf0u: goto label_12fcf0;
        case 0x12fcf4u: goto label_12fcf4;
        case 0x12fcf8u: goto label_12fcf8;
        case 0x12fcfcu: goto label_12fcfc;
        case 0x12fd00u: goto label_12fd00;
        case 0x12fd04u: goto label_12fd04;
        case 0x12fd08u: goto label_12fd08;
        case 0x12fd0cu: goto label_12fd0c;
        case 0x12fd10u: goto label_12fd10;
        case 0x12fd14u: goto label_12fd14;
        case 0x12fd18u: goto label_12fd18;
        case 0x12fd1cu: goto label_12fd1c;
        case 0x12fd20u: goto label_12fd20;
        case 0x12fd24u: goto label_12fd24;
        case 0x12fd28u: goto label_12fd28;
        case 0x12fd2cu: goto label_12fd2c;
        case 0x12fd30u: goto label_12fd30;
        case 0x12fd34u: goto label_12fd34;
        case 0x12fd38u: goto label_12fd38;
        case 0x12fd3cu: goto label_12fd3c;
        case 0x12fd40u: goto label_12fd40;
        case 0x12fd44u: goto label_12fd44;
        case 0x12fd48u: goto label_12fd48;
        case 0x12fd4cu: goto label_12fd4c;
        case 0x12fd50u: goto label_12fd50;
        case 0x12fd54u: goto label_12fd54;
        case 0x12fd58u: goto label_12fd58;
        case 0x12fd5cu: goto label_12fd5c;
        case 0x12fd60u: goto label_12fd60;
        case 0x12fd64u: goto label_12fd64;
        case 0x12fd68u: goto label_12fd68;
        case 0x12fd6cu: goto label_12fd6c;
        case 0x12fd70u: goto label_12fd70;
        case 0x12fd74u: goto label_12fd74;
        case 0x12fd78u: goto label_12fd78;
        case 0x12fd7cu: goto label_12fd7c;
        case 0x12fd80u: goto label_12fd80;
        case 0x12fd84u: goto label_12fd84;
        case 0x12fd88u: goto label_12fd88;
        case 0x12fd8cu: goto label_12fd8c;
        case 0x12fd90u: goto label_12fd90;
        case 0x12fd94u: goto label_12fd94;
        case 0x12fd98u: goto label_12fd98;
        case 0x12fd9cu: goto label_12fd9c;
        case 0x12fda0u: goto label_12fda0;
        case 0x12fda4u: goto label_12fda4;
        case 0x12fda8u: goto label_12fda8;
        case 0x12fdacu: goto label_12fdac;
        case 0x12fdb0u: goto label_12fdb0;
        case 0x12fdb4u: goto label_12fdb4;
        case 0x12fdb8u: goto label_12fdb8;
        case 0x12fdbcu: goto label_12fdbc;
        case 0x12fdc0u: goto label_12fdc0;
        case 0x12fdc4u: goto label_12fdc4;
        case 0x12fdc8u: goto label_12fdc8;
        case 0x12fdccu: goto label_12fdcc;
        case 0x12fdd0u: goto label_12fdd0;
        case 0x12fdd4u: goto label_12fdd4;
        case 0x12fdd8u: goto label_12fdd8;
        case 0x12fddcu: goto label_12fddc;
        case 0x12fde0u: goto label_12fde0;
        case 0x12fde4u: goto label_12fde4;
        case 0x12fde8u: goto label_12fde8;
        case 0x12fdecu: goto label_12fdec;
        case 0x12fdf0u: goto label_12fdf0;
        case 0x12fdf4u: goto label_12fdf4;
        case 0x12fdf8u: goto label_12fdf8;
        case 0x12fdfcu: goto label_12fdfc;
        case 0x12fe00u: goto label_12fe00;
        case 0x12fe04u: goto label_12fe04;
        case 0x12fe08u: goto label_12fe08;
        case 0x12fe0cu: goto label_12fe0c;
        case 0x12fe10u: goto label_12fe10;
        case 0x12fe14u: goto label_12fe14;
        case 0x12fe18u: goto label_12fe18;
        case 0x12fe1cu: goto label_12fe1c;
        case 0x12fe20u: goto label_12fe20;
        case 0x12fe24u: goto label_12fe24;
        case 0x12fe28u: goto label_12fe28;
        case 0x12fe2cu: goto label_12fe2c;
        case 0x12fe30u: goto label_12fe30;
        case 0x12fe34u: goto label_12fe34;
        case 0x12fe38u: goto label_12fe38;
        case 0x12fe3cu: goto label_12fe3c;
        case 0x12fe40u: goto label_12fe40;
        case 0x12fe44u: goto label_12fe44;
        case 0x12fe48u: goto label_12fe48;
        case 0x12fe4cu: goto label_12fe4c;
        case 0x12fe50u: goto label_12fe50;
        case 0x12fe54u: goto label_12fe54;
        case 0x12fe58u: goto label_12fe58;
        case 0x12fe5cu: goto label_12fe5c;
        case 0x12fe60u: goto label_12fe60;
        case 0x12fe64u: goto label_12fe64;
        case 0x12fe68u: goto label_12fe68;
        case 0x12fe6cu: goto label_12fe6c;
        case 0x12fe70u: goto label_12fe70;
        case 0x12fe74u: goto label_12fe74;
        case 0x12fe78u: goto label_12fe78;
        case 0x12fe7cu: goto label_12fe7c;
        case 0x12fe80u: goto label_12fe80;
        case 0x12fe84u: goto label_12fe84;
        case 0x12fe88u: goto label_12fe88;
        case 0x12fe8cu: goto label_12fe8c;
        case 0x12fe90u: goto label_12fe90;
        case 0x12fe94u: goto label_12fe94;
        case 0x12fe98u: goto label_12fe98;
        case 0x12fe9cu: goto label_12fe9c;
        case 0x12fea0u: goto label_12fea0;
        case 0x12fea4u: goto label_12fea4;
        case 0x12fea8u: goto label_12fea8;
        case 0x12feacu: goto label_12feac;
        case 0x12feb0u: goto label_12feb0;
        case 0x12feb4u: goto label_12feb4;
        case 0x12feb8u: goto label_12feb8;
        case 0x12febcu: goto label_12febc;
        case 0x12fec0u: goto label_12fec0;
        case 0x12fec4u: goto label_12fec4;
        case 0x12fec8u: goto label_12fec8;
        case 0x12feccu: goto label_12fecc;
        case 0x12fed0u: goto label_12fed0;
        case 0x12fed4u: goto label_12fed4;
        case 0x12fed8u: goto label_12fed8;
        case 0x12fedcu: goto label_12fedc;
        case 0x12fee0u: goto label_12fee0;
        case 0x12fee4u: goto label_12fee4;
        case 0x12fee8u: goto label_12fee8;
        case 0x12feecu: goto label_12feec;
        case 0x12fef0u: goto label_12fef0;
        case 0x12fef4u: goto label_12fef4;
        case 0x12fef8u: goto label_12fef8;
        case 0x12fefcu: goto label_12fefc;
        case 0x12ff00u: goto label_12ff00;
        case 0x12ff04u: goto label_12ff04;
        case 0x12ff08u: goto label_12ff08;
        case 0x12ff0cu: goto label_12ff0c;
        case 0x12ff10u: goto label_12ff10;
        case 0x12ff14u: goto label_12ff14;
        case 0x12ff18u: goto label_12ff18;
        case 0x12ff1cu: goto label_12ff1c;
        case 0x12ff20u: goto label_12ff20;
        case 0x12ff24u: goto label_12ff24;
        case 0x12ff28u: goto label_12ff28;
        case 0x12ff2cu: goto label_12ff2c;
        case 0x12ff30u: goto label_12ff30;
        case 0x12ff34u: goto label_12ff34;
        case 0x12ff38u: goto label_12ff38;
        case 0x12ff3cu: goto label_12ff3c;
        case 0x12ff40u: goto label_12ff40;
        case 0x12ff44u: goto label_12ff44;
        case 0x12ff48u: goto label_12ff48;
        case 0x12ff4cu: goto label_12ff4c;
        case 0x12ff50u: goto label_12ff50;
        case 0x12ff54u: goto label_12ff54;
        case 0x12ff58u: goto label_12ff58;
        case 0x12ff5cu: goto label_12ff5c;
        case 0x12ff60u: goto label_12ff60;
        case 0x12ff64u: goto label_12ff64;
        case 0x12ff68u: goto label_12ff68;
        case 0x12ff6cu: goto label_12ff6c;
        case 0x12ff70u: goto label_12ff70;
        case 0x12ff74u: goto label_12ff74;
        case 0x12ff78u: goto label_12ff78;
        case 0x12ff7cu: goto label_12ff7c;
        case 0x12ff80u: goto label_12ff80;
        case 0x12ff84u: goto label_12ff84;
        case 0x12ff88u: goto label_12ff88;
        case 0x12ff8cu: goto label_12ff8c;
        case 0x12ff90u: goto label_12ff90;
        case 0x12ff94u: goto label_12ff94;
        case 0x12ff98u: goto label_12ff98;
        case 0x12ff9cu: goto label_12ff9c;
        case 0x12ffa0u: goto label_12ffa0;
        case 0x12ffa4u: goto label_12ffa4;
        case 0x12ffa8u: goto label_12ffa8;
        case 0x12ffacu: goto label_12ffac;
        case 0x12ffb0u: goto label_12ffb0;
        case 0x12ffb4u: goto label_12ffb4;
        case 0x12ffb8u: goto label_12ffb8;
        case 0x12ffbcu: goto label_12ffbc;
        case 0x12ffc0u: goto label_12ffc0;
        case 0x12ffc4u: goto label_12ffc4;
        case 0x12ffc8u: goto label_12ffc8;
        case 0x12ffccu: goto label_12ffcc;
        case 0x12ffd0u: goto label_12ffd0;
        case 0x12ffd4u: goto label_12ffd4;
        case 0x12ffd8u: goto label_12ffd8;
        case 0x12ffdcu: goto label_12ffdc;
        case 0x12ffe0u: goto label_12ffe0;
        case 0x12ffe4u: goto label_12ffe4;
        case 0x12ffe8u: goto label_12ffe8;
        case 0x12ffecu: goto label_12ffec;
        case 0x12fff0u: goto label_12fff0;
        case 0x12fff4u: goto label_12fff4;
        case 0x12fff8u: goto label_12fff8;
        case 0x12fffcu: goto label_12fffc;
        case 0x130000u: goto label_130000;
        case 0x130004u: goto label_130004;
        case 0x130008u: goto label_130008;
        case 0x13000cu: goto label_13000c;
        case 0x130010u: goto label_130010;
        case 0x130014u: goto label_130014;
        case 0x130018u: goto label_130018;
        case 0x13001cu: goto label_13001c;
        case 0x130020u: goto label_130020;
        case 0x130024u: goto label_130024;
        case 0x130028u: goto label_130028;
        case 0x13002cu: goto label_13002c;
        case 0x130030u: goto label_130030;
        case 0x130034u: goto label_130034;
        case 0x130038u: goto label_130038;
        case 0x13003cu: goto label_13003c;
        case 0x130040u: goto label_130040;
        case 0x130044u: goto label_130044;
        case 0x130048u: goto label_130048;
        case 0x13004cu: goto label_13004c;
        case 0x130050u: goto label_130050;
        case 0x130054u: goto label_130054;
        case 0x130058u: goto label_130058;
        case 0x13005cu: goto label_13005c;
        case 0x130060u: goto label_130060;
        case 0x130064u: goto label_130064;
        case 0x130068u: goto label_130068;
        case 0x13006cu: goto label_13006c;
        case 0x130070u: goto label_130070;
        case 0x130074u: goto label_130074;
        case 0x130078u: goto label_130078;
        case 0x13007cu: goto label_13007c;
        case 0x130080u: goto label_130080;
        case 0x130084u: goto label_130084;
        case 0x130088u: goto label_130088;
        case 0x13008cu: goto label_13008c;
        case 0x130090u: goto label_130090;
        case 0x130094u: goto label_130094;
        case 0x130098u: goto label_130098;
        case 0x13009cu: goto label_13009c;
        case 0x1300a0u: goto label_1300a0;
        case 0x1300a4u: goto label_1300a4;
        case 0x1300a8u: goto label_1300a8;
        case 0x1300acu: goto label_1300ac;
        case 0x1300b0u: goto label_1300b0;
        case 0x1300b4u: goto label_1300b4;
        case 0x1300b8u: goto label_1300b8;
        case 0x1300bcu: goto label_1300bc;
        case 0x1300c0u: goto label_1300c0;
        case 0x1300c4u: goto label_1300c4;
        case 0x1300c8u: goto label_1300c8;
        case 0x1300ccu: goto label_1300cc;
        case 0x1300d0u: goto label_1300d0;
        case 0x1300d4u: goto label_1300d4;
        case 0x1300d8u: goto label_1300d8;
        case 0x1300dcu: goto label_1300dc;
        case 0x1300e0u: goto label_1300e0;
        case 0x1300e4u: goto label_1300e4;
        case 0x1300e8u: goto label_1300e8;
        case 0x1300ecu: goto label_1300ec;
        case 0x1300f0u: goto label_1300f0;
        case 0x1300f4u: goto label_1300f4;
        case 0x1300f8u: goto label_1300f8;
        case 0x1300fcu: goto label_1300fc;
        case 0x130100u: goto label_130100;
        case 0x130104u: goto label_130104;
        case 0x130108u: goto label_130108;
        case 0x13010cu: goto label_13010c;
        case 0x130110u: goto label_130110;
        case 0x130114u: goto label_130114;
        case 0x130118u: goto label_130118;
        case 0x13011cu: goto label_13011c;
        case 0x130120u: goto label_130120;
        case 0x130124u: goto label_130124;
        case 0x130128u: goto label_130128;
        case 0x13012cu: goto label_13012c;
        case 0x130130u: goto label_130130;
        case 0x130134u: goto label_130134;
        case 0x130138u: goto label_130138;
        case 0x13013cu: goto label_13013c;
        case 0x130140u: goto label_130140;
        case 0x130144u: goto label_130144;
        case 0x130148u: goto label_130148;
        case 0x13014cu: goto label_13014c;
        case 0x130150u: goto label_130150;
        case 0x130154u: goto label_130154;
        case 0x130158u: goto label_130158;
        case 0x13015cu: goto label_13015c;
        case 0x130160u: goto label_130160;
        case 0x130164u: goto label_130164;
        case 0x130168u: goto label_130168;
        case 0x13016cu: goto label_13016c;
        case 0x130170u: goto label_130170;
        case 0x130174u: goto label_130174;
        case 0x130178u: goto label_130178;
        case 0x13017cu: goto label_13017c;
        case 0x130180u: goto label_130180;
        case 0x130184u: goto label_130184;
        case 0x130188u: goto label_130188;
        case 0x13018cu: goto label_13018c;
        case 0x130190u: goto label_130190;
        case 0x130194u: goto label_130194;
        case 0x130198u: goto label_130198;
        case 0x13019cu: goto label_13019c;
        case 0x1301a0u: goto label_1301a0;
        case 0x1301a4u: goto label_1301a4;
        case 0x1301a8u: goto label_1301a8;
        case 0x1301acu: goto label_1301ac;
        case 0x1301b0u: goto label_1301b0;
        case 0x1301b4u: goto label_1301b4;
        case 0x1301b8u: goto label_1301b8;
        case 0x1301bcu: goto label_1301bc;
        case 0x1301c0u: goto label_1301c0;
        case 0x1301c4u: goto label_1301c4;
        case 0x1301c8u: goto label_1301c8;
        case 0x1301ccu: goto label_1301cc;
        case 0x1301d0u: goto label_1301d0;
        case 0x1301d4u: goto label_1301d4;
        case 0x1301d8u: goto label_1301d8;
        case 0x1301dcu: goto label_1301dc;
        case 0x1301e0u: goto label_1301e0;
        case 0x1301e4u: goto label_1301e4;
        case 0x1301e8u: goto label_1301e8;
        case 0x1301ecu: goto label_1301ec;
        case 0x1301f0u: goto label_1301f0;
        case 0x1301f4u: goto label_1301f4;
        case 0x1301f8u: goto label_1301f8;
        case 0x1301fcu: goto label_1301fc;
        case 0x130200u: goto label_130200;
        case 0x130204u: goto label_130204;
        case 0x130208u: goto label_130208;
        case 0x13020cu: goto label_13020c;
        case 0x130210u: goto label_130210;
        case 0x130214u: goto label_130214;
        case 0x130218u: goto label_130218;
        case 0x13021cu: goto label_13021c;
        case 0x130220u: goto label_130220;
        case 0x130224u: goto label_130224;
        case 0x130228u: goto label_130228;
        case 0x13022cu: goto label_13022c;
        case 0x130230u: goto label_130230;
        case 0x130234u: goto label_130234;
        case 0x130238u: goto label_130238;
        case 0x13023cu: goto label_13023c;
        case 0x130240u: goto label_130240;
        case 0x130244u: goto label_130244;
        case 0x130248u: goto label_130248;
        case 0x13024cu: goto label_13024c;
        case 0x130250u: goto label_130250;
        case 0x130254u: goto label_130254;
        case 0x130258u: goto label_130258;
        case 0x13025cu: goto label_13025c;
        case 0x130260u: goto label_130260;
        case 0x130264u: goto label_130264;
        case 0x130268u: goto label_130268;
        case 0x13026cu: goto label_13026c;
        case 0x130270u: goto label_130270;
        case 0x130274u: goto label_130274;
        case 0x130278u: goto label_130278;
        case 0x13027cu: goto label_13027c;
        case 0x130280u: goto label_130280;
        case 0x130284u: goto label_130284;
        case 0x130288u: goto label_130288;
        case 0x13028cu: goto label_13028c;
        case 0x130290u: goto label_130290;
        case 0x130294u: goto label_130294;
        case 0x130298u: goto label_130298;
        case 0x13029cu: goto label_13029c;
        case 0x1302a0u: goto label_1302a0;
        case 0x1302a4u: goto label_1302a4;
        case 0x1302a8u: goto label_1302a8;
        case 0x1302acu: goto label_1302ac;
        case 0x1302b0u: goto label_1302b0;
        case 0x1302b4u: goto label_1302b4;
        case 0x1302b8u: goto label_1302b8;
        case 0x1302bcu: goto label_1302bc;
        case 0x1302c0u: goto label_1302c0;
        case 0x1302c4u: goto label_1302c4;
        case 0x1302c8u: goto label_1302c8;
        case 0x1302ccu: goto label_1302cc;
        case 0x1302d0u: goto label_1302d0;
        case 0x1302d4u: goto label_1302d4;
        case 0x1302d8u: goto label_1302d8;
        case 0x1302dcu: goto label_1302dc;
        case 0x1302e0u: goto label_1302e0;
        case 0x1302e4u: goto label_1302e4;
        case 0x1302e8u: goto label_1302e8;
        case 0x1302ecu: goto label_1302ec;
        case 0x1302f0u: goto label_1302f0;
        case 0x1302f4u: goto label_1302f4;
        case 0x1302f8u: goto label_1302f8;
        case 0x1302fcu: goto label_1302fc;
        case 0x130300u: goto label_130300;
        case 0x130304u: goto label_130304;
        case 0x130308u: goto label_130308;
        case 0x13030cu: goto label_13030c;
        case 0x130310u: goto label_130310;
        case 0x130314u: goto label_130314;
        case 0x130318u: goto label_130318;
        case 0x13031cu: goto label_13031c;
        case 0x130320u: goto label_130320;
        case 0x130324u: goto label_130324;
        case 0x130328u: goto label_130328;
        case 0x13032cu: goto label_13032c;
        case 0x130330u: goto label_130330;
        case 0x130334u: goto label_130334;
        case 0x130338u: goto label_130338;
        case 0x13033cu: goto label_13033c;
        case 0x130340u: goto label_130340;
        case 0x130344u: goto label_130344;
        case 0x130348u: goto label_130348;
        case 0x13034cu: goto label_13034c;
        case 0x130350u: goto label_130350;
        case 0x130354u: goto label_130354;
        case 0x130358u: goto label_130358;
        case 0x13035cu: goto label_13035c;
        case 0x130360u: goto label_130360;
        case 0x130364u: goto label_130364;
        case 0x130368u: goto label_130368;
        case 0x13036cu: goto label_13036c;
        case 0x130370u: goto label_130370;
        case 0x130374u: goto label_130374;
        case 0x130378u: goto label_130378;
        case 0x13037cu: goto label_13037c;
        case 0x130380u: goto label_130380;
        case 0x130384u: goto label_130384;
        case 0x130388u: goto label_130388;
        case 0x13038cu: goto label_13038c;
        case 0x130390u: goto label_130390;
        case 0x130394u: goto label_130394;
        case 0x130398u: goto label_130398;
        case 0x13039cu: goto label_13039c;
        case 0x1303a0u: goto label_1303a0;
        case 0x1303a4u: goto label_1303a4;
        case 0x1303a8u: goto label_1303a8;
        case 0x1303acu: goto label_1303ac;
        case 0x1303b0u: goto label_1303b0;
        case 0x1303b4u: goto label_1303b4;
        case 0x1303b8u: goto label_1303b8;
        case 0x1303bcu: goto label_1303bc;
        case 0x1303c0u: goto label_1303c0;
        case 0x1303c4u: goto label_1303c4;
        case 0x1303c8u: goto label_1303c8;
        case 0x1303ccu: goto label_1303cc;
        case 0x1303d0u: goto label_1303d0;
        case 0x1303d4u: goto label_1303d4;
        case 0x1303d8u: goto label_1303d8;
        case 0x1303dcu: goto label_1303dc;
        case 0x1303e0u: goto label_1303e0;
        case 0x1303e4u: goto label_1303e4;
        default: break;
    }

    ctx->pc = 0x12f758u;

label_12f758:
    // 0x12f758: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x12f758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
label_12f75c:
    // 0x12f75c: 0xffb10298  sd          $s1, 0x298($sp)
    ctx->pc = 0x12f75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 664), GPR_U64(ctx, 17));
label_12f760:
    // 0x12f760: 0xffb302a8  sd          $s3, 0x2A8($sp)
    ctx->pc = 0x12f760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 680), GPR_U64(ctx, 19));
label_12f764:
    // 0x12f764: 0xffb502b8  sd          $s5, 0x2B8($sp)
    ctx->pc = 0x12f764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 696), GPR_U64(ctx, 21));
label_12f768:
    // 0x12f768: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12f768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12f76c:
    // 0x12f76c: 0xffbe02d0  sd          $fp, 0x2D0($sp)
    ctx->pc = 0x12f76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 30));
label_12f770:
    // 0x12f770: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12f770u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12f774:
    // 0x12f774: 0xffb00290  sd          $s0, 0x290($sp)
    ctx->pc = 0x12f774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 16));
label_12f778:
    // 0x12f778: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12f778u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f77c:
    // 0x12f77c: 0xffb202a0  sd          $s2, 0x2A0($sp)
    ctx->pc = 0x12f77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 18));
label_12f780:
    // 0x12f780: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x12f780u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f784:
    // 0x12f784: 0xffb402b0  sd          $s4, 0x2B0($sp)
    ctx->pc = 0x12f784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 20));
label_12f788:
    // 0x12f788: 0xffb602c0  sd          $s6, 0x2C0($sp)
    ctx->pc = 0x12f788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 22));
label_12f78c:
    // 0x12f78c: 0xffb702c8  sd          $s7, 0x2C8($sp)
    ctx->pc = 0x12f78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 712), GPR_U64(ctx, 23));
label_12f790:
    // 0x12f790: 0xffbf02d8  sd          $ra, 0x2D8($sp)
    ctx->pc = 0x12f790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 728), GPR_U64(ctx, 31));
label_12f794:
    // 0x12f794: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x12f794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
label_12f798:
    // 0x12f798: 0xafa70264  sw          $a3, 0x264($sp)
    ctx->pc = 0x12f798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 7));
label_12f79c:
    // 0x12f79c: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x12f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
label_12f7a0:
    // 0x12f7a0: 0xafa00268  sw          $zero, 0x268($sp)
    ctx->pc = 0x12f7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 0));
label_12f7a4:
    // 0x12f7a4: 0x826d0000  lb          $t5, 0x0($s3)
    ctx->pc = 0x12f7a4u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_12f7a8:
    // 0x12f7a8: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x12f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12f7ac:
    // 0x12f7ac: 0x11a00049  beqz        $t5, . + 4 + (0x49 << 2)
label_12f7b0:
    if (ctx->pc == 0x12F7B0u) {
        ctx->pc = 0x12F7B0u;
            // 0x12f7b0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x12F7B4u;
        goto label_12f7b4;
    }
    ctx->pc = 0x12F7ACu;
    {
        const bool branch_taken_0x12f7ac = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F7ACu;
            // 0x12f7b0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f7ac) {
            ctx->pc = 0x12F8D4u;
            goto label_12f8d4;
        }
    }
    ctx->pc = 0x12F7B4u;
label_12f7b4:
    // 0x12f7b4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12f7b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12f7b8:
    // 0x12f7b8: 0x15ef001e  bne         $t7, $t7, . + 4 + (0x1E << 2)
label_12f7bc:
    if (ctx->pc == 0x12F7BCu) {
        ctx->pc = 0x12F7BCu;
            // 0x12f7bc: 0x240f0025  addiu       $t7, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x12F7C0u;
        goto label_12f7c0;
    }
    ctx->pc = 0x12F7B8u;
    {
        const bool branch_taken_0x12f7b8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 15));
        ctx->pc = 0x12F7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F7B8u;
            // 0x12f7bc: 0x240f0025  addiu       $t7, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f7b8) {
            ctx->pc = 0x12F834u;
            goto label_12f834;
        }
    }
    ctx->pc = 0x12F7C0u;
label_12f7c0:
    // 0x12f7c0: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12f7c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
label_12f7c4:
    // 0x12f7c4: 0x25ec0768  addiu       $t4, $t7, 0x768
    ctx->pc = 0x12f7c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 1896));
label_12f7c8:
    // 0x12f7c8: 0x1ac7021  addu        $t6, $t5, $t4
    ctx->pc = 0x12f7c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
label_12f7cc:
    // 0x12f7cc: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x12f7ccu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12f7d0:
    // 0x12f7d0: 0x31ef0008  andi        $t7, $t7, 0x8
    ctx->pc = 0x12f7d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
label_12f7d4:
    // 0x12f7d4: 0x11e00016  beqz        $t7, . + 4 + (0x16 << 2)
label_12f7d8:
    if (ctx->pc == 0x12F7D8u) {
        ctx->pc = 0x12F7D8u;
            // 0x12f7d8: 0x180802d  daddu       $s0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F7DCu;
        goto label_12f7dc;
    }
    ctx->pc = 0x12F7D4u;
    {
        const bool branch_taken_0x12f7d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F7D4u;
            // 0x12f7d8: 0x180802d  daddu       $s0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f7d4) {
            ctx->pc = 0x12F830u;
            goto label_12f830;
        }
    }
    ctx->pc = 0x12F7DCu;
label_12f7dc:
    // 0x12f7dc: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12f7dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12f7e0:
    // 0x12f7e0: 0x5de00006  bgtzl       $t7, . + 4 + (0x6 << 2)
label_12f7e4:
    if (ctx->pc == 0x12F7E4u) {
        ctx->pc = 0x12F7E4u;
            // 0x12f7e4: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x12F7E8u;
        goto label_12f7e8;
    }
    ctx->pc = 0x12F7E0u;
    {
        const bool branch_taken_0x12f7e0 = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x12f7e0) {
            ctx->pc = 0x12F7E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F7E0u;
            // 0x12f7e4: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F7FCu;
            goto label_12f7fc;
        }
    }
    ctx->pc = 0x12F7E8u;
label_12f7e8:
    // 0x12f7e8: 0xc04ad04  jal         func_12B410
label_12f7ec:
    if (ctx->pc == 0x12F7ECu) {
        ctx->pc = 0x12F7ECu;
            // 0x12f7ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F7F0u;
        goto label_12f7f0;
    }
    ctx->pc = 0x12F7E8u;
    SET_GPR_U32(ctx, 31, 0x12F7F0u);
    ctx->pc = 0x12F7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F7E8u;
            // 0x12f7ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B410u;
    if (runtime->hasFunction(0x12B410u)) {
        auto targetFn = runtime->lookupFunction(0x12B410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F7F0u; }
        if (ctx->pc != 0x12F7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B410_0x12b410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F7F0u; }
        if (ctx->pc != 0x12F7F0u) { return; }
    }
    ctx->pc = 0x12F7F0u;
label_12f7f0:
    // 0x12f7f0: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
label_12f7f4:
    if (ctx->pc == 0x12F7F4u) {
        ctx->pc = 0x12F7F4u;
            // 0x12f7f4: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x12F7F8u;
        goto label_12f7f8;
    }
    ctx->pc = 0x12F7F0u;
    {
        const bool branch_taken_0x12f7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f7f0) {
            ctx->pc = 0x12F7F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F7F0u;
            // 0x12f7f4: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F7A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f7a8;
        }
    }
    ctx->pc = 0x12F7F8u;
label_12f7f8:
    // 0x12f7f8: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x12f7f8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12f7fc:
    // 0x12f7fc: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x12f7fcu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_12f800:
    // 0x12f800: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x12f800u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_12f804:
    // 0x12f804: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12f804u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12f808:
    // 0x12f808: 0x31ce0008  andi        $t6, $t6, 0x8
    ctx->pc = 0x12f808u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
label_12f80c:
    // 0x12f80c: 0x11c0ffe5  beqz        $t6, . + 4 + (-0x1B << 2)
label_12f810:
    if (ctx->pc == 0x12F810u) {
        ctx->pc = 0x12F810u;
            // 0x12f810: 0x25af0001  addiu       $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->pc = 0x12F814u;
        goto label_12f814;
    }
    ctx->pc = 0x12F80Cu;
    {
        const bool branch_taken_0x12f80c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F80Cu;
            // 0x12f810: 0x25af0001  addiu       $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f80c) {
            ctx->pc = 0x12F7A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f7a4;
        }
    }
    ctx->pc = 0x12F814u;
label_12f814:
    // 0x12f814: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x12f814u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12f818:
    // 0x12f818: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12f818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12f81c:
    // 0x12f81c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12f81cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_12f820:
    // 0x12f820: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x12f820u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_12f824:
    // 0x12f824: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_12f828:
    if (ctx->pc == 0x12F828u) {
        ctx->pc = 0x12F828u;
            // 0x12f828: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->pc = 0x12F82Cu;
        goto label_12f82c;
    }
    ctx->pc = 0x12F824u;
    {
        const bool branch_taken_0x12f824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F824u;
            // 0x12f828: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f824) {
            ctx->pc = 0x12F7DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f7dc;
        }
    }
    ctx->pc = 0x12F82Cu;
label_12f82c:
    // 0x12f82c: 0x0  nop
    ctx->pc = 0x12f82cu;
    // NOP
label_12f830:
    // 0x12f830: 0x240f0025  addiu       $t7, $zero, 0x25
    ctx->pc = 0x12f830u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_12f834:
    // 0x12f834: 0x15af000f  bne         $t5, $t7, . + 4 + (0xF << 2)
label_12f838:
    if (ctx->pc == 0x12F838u) {
        ctx->pc = 0x12F838u;
            // 0x12f838: 0x2670ffff  addiu       $s0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->pc = 0x12F83Cu;
        goto label_12f83c;
    }
    ctx->pc = 0x12F834u;
    {
        const bool branch_taken_0x12f834 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x12F838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F834u;
            // 0x12f838: 0x2670ffff  addiu       $s0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f834) {
            ctx->pc = 0x12F874u;
            goto label_12f874;
        }
    }
    ctx->pc = 0x12F83Cu;
label_12f83c:
    // 0x12f83c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x12f83cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f840:
    // 0x12f840: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12f840u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f844:
    // 0x12f844: 0x82700000  lb          $s0, 0x0($s3)
    ctx->pc = 0x12f844u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_12f848:
    // 0x12f848: 0x2e0f0079  sltiu       $t7, $s0, 0x79
    ctx->pc = 0x12f848u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
label_12f84c:
    // 0x12f84c: 0x11e002d8  beqz        $t7, . + 4 + (0x2D8 << 2)
label_12f850:
    if (ctx->pc == 0x12F850u) {
        ctx->pc = 0x12F850u;
            // 0x12f850: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x12F854u;
        goto label_12f854;
    }
    ctx->pc = 0x12F84Cu;
    {
        const bool branch_taken_0x12f84c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F84Cu;
            // 0x12f850: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f84c) {
            ctx->pc = 0x1303B0u;
            goto label_1303b0;
        }
    }
    ctx->pc = 0x12F854u;
label_12f854:
    // 0x12f854: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x12f854u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
label_12f858:
    // 0x12f858: 0x107880  sll         $t7, $s0, 2
    ctx->pc = 0x12f858u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_12f85c:
    // 0x12f85c: 0x25ce0d98  addiu       $t6, $t6, 0xD98
    ctx->pc = 0x12f85cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3480));
label_12f860:
    // 0x12f860: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12f860u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_12f864:
    // 0x12f864: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x12f864u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12f868:
    // 0x12f868: 0x1a00008  jr          $t5
label_12f86c:
    if (ctx->pc == 0x12F86Cu) {
        ctx->pc = 0x12F870u;
        goto label_12f870;
    }
    ctx->pc = 0x12F868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F870u: goto label_12f870;
            case 0x12F914u: goto label_12f914;
            case 0x12F91Cu: goto label_12f91c;
            case 0x12F924u: goto label_12f924;
            case 0x12F938u: goto label_12f938;
            case 0x12F93Cu: goto label_12f93c;
            case 0x130298u: goto label_130298;
            case 0x1302A0u: goto label_1302a0;
            case 0x1302A4u: goto label_1302a4;
            case 0x1302BCu: goto label_1302bc;
            case 0x1302D8u: goto label_1302d8;
            case 0x1302E4u: goto label_1302e4;
            case 0x1302ECu: goto label_1302ec;
            case 0x1302F4u: goto label_1302f4;
            case 0x130308u: goto label_130308;
            case 0x130310u: goto label_130310;
            case 0x130380u: goto label_130380;
            case 0x130398u: goto label_130398;
            case 0x1303A0u: goto label_1303a0;
            case 0x1303B0u: goto label_1303b0;
            case 0x1303E0u: goto label_1303e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F870u;
label_12f870:
    // 0x12f870: 0x2670ffff  addiu       $s0, $s3, -0x1
    ctx->pc = 0x12f870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_12f874:
    // 0x12f874: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12f874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f878:
    // 0x12f878: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12f878u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12f87c:
    // 0x12f87c: 0x5de00006  bgtzl       $t7, . + 4 + (0x6 << 2)
label_12f880:
    if (ctx->pc == 0x12F880u) {
        ctx->pc = 0x12F880u;
            // 0x12f880: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x12F884u;
        goto label_12f884;
    }
    ctx->pc = 0x12F87Cu;
    {
        const bool branch_taken_0x12f87c = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x12f87c) {
            ctx->pc = 0x12F880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F87Cu;
            // 0x12f880: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F898u;
            goto label_12f898;
        }
    }
    ctx->pc = 0x12F884u;
label_12f884:
    // 0x12f884: 0xc04ad04  jal         func_12B410
label_12f888:
    if (ctx->pc == 0x12F888u) {
        ctx->pc = 0x12F888u;
            // 0x12f888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F88Cu;
        goto label_12f88c;
    }
    ctx->pc = 0x12F884u;
    SET_GPR_U32(ctx, 31, 0x12F88Cu);
    ctx->pc = 0x12F888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F884u;
            // 0x12f888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B410u;
    if (runtime->hasFunction(0x12B410u)) {
        auto targetFn = runtime->lookupFunction(0x12B410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F88Cu; }
        if (ctx->pc != 0x12F88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B410_0x12b410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F88Cu; }
        if (ctx->pc != 0x12F88Cu) { return; }
    }
    ctx->pc = 0x12F88Cu;
label_12f88c:
    // 0x12f88c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_12f890:
    if (ctx->pc == 0x12F890u) {
        ctx->pc = 0x12F890u;
            // 0x12f890: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->pc = 0x12F894u;
        goto label_12f894;
    }
    ctx->pc = 0x12F88Cu;
    {
        const bool branch_taken_0x12f88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F88Cu;
            // 0x12f890: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f88c) {
            ctx->pc = 0x12F908u;
            goto label_12f908;
        }
    }
    ctx->pc = 0x12F894u;
label_12f894:
    // 0x12f894: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x12f894u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12f898:
    // 0x12f898: 0x820e0000  lb          $t6, 0x0($s0)
    ctx->pc = 0x12f898u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_12f89c:
    // 0x12f89c: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x12f89cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_12f8a0:
    // 0x12f8a0: 0x15ee000b  bne         $t7, $t6, . + 4 + (0xB << 2)
label_12f8a4:
    if (ctx->pc == 0x12F8A4u) {
        ctx->pc = 0x12F8A4u;
            // 0x12f8a4: 0x25af0001  addiu       $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->pc = 0x12F8A8u;
        goto label_12f8a8;
    }
    ctx->pc = 0x12F8A0u;
    {
        const bool branch_taken_0x12f8a0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x12F8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F8A0u;
            // 0x12f8a4: 0x25af0001  addiu       $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8a0) {
            ctx->pc = 0x12F8D0u;
            goto label_12f8d0;
        }
    }
    ctx->pc = 0x12F8A8u;
label_12f8a8:
    // 0x12f8a8: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x12f8a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12f8ac:
    // 0x12f8ac: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12f8acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12f8b0:
    // 0x12f8b0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12f8b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_12f8b4:
    // 0x12f8b4: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x12f8b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_12f8b8:
    // 0x12f8b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12f8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_12f8bc:
    // 0x12f8bc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12f8bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12f8c0:
    // 0x12f8c0: 0x1a40ffed  blez        $s2, . + 4 + (-0x13 << 2)
label_12f8c4:
    if (ctx->pc == 0x12F8C4u) {
        ctx->pc = 0x12F8C4u;
            // 0x12f8c4: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->pc = 0x12F8C8u;
        goto label_12f8c8;
    }
    ctx->pc = 0x12F8C0u;
    {
        const bool branch_taken_0x12f8c0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x12F8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F8C0u;
            // 0x12f8c4: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8c0) {
            ctx->pc = 0x12F878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f878;
        }
    }
    ctx->pc = 0x12F8C8u;
label_12f8c8:
    // 0x12f8c8: 0x1000ffb7  b           . + 4 + (-0x49 << 2)
label_12f8cc:
    if (ctx->pc == 0x12F8CCu) {
        ctx->pc = 0x12F8CCu;
            // 0x12f8cc: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x12F8D0u;
        goto label_12f8d0;
    }
    ctx->pc = 0x12F8C8u;
    {
        const bool branch_taken_0x12f8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F8C8u;
            // 0x12f8cc: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8c8) {
            ctx->pc = 0x12F7A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f7a8;
        }
    }
    ctx->pc = 0x12F8D0u;
label_12f8d0:
    // 0x12f8d0: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x12f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12f8d4:
    // 0x12f8d4: 0xdfb00290  ld          $s0, 0x290($sp)
    ctx->pc = 0x12f8d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_12f8d8:
    // 0x12f8d8: 0xdfb10298  ld          $s1, 0x298($sp)
    ctx->pc = 0x12f8d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 664)));
label_12f8dc:
    // 0x12f8dc: 0xdfb202a0  ld          $s2, 0x2A0($sp)
    ctx->pc = 0x12f8dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_12f8e0:
    // 0x12f8e0: 0xdfb302a8  ld          $s3, 0x2A8($sp)
    ctx->pc = 0x12f8e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 680)));
label_12f8e4:
    // 0x12f8e4: 0xdfb402b0  ld          $s4, 0x2B0($sp)
    ctx->pc = 0x12f8e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_12f8e8:
    // 0x12f8e8: 0xdfb502b8  ld          $s5, 0x2B8($sp)
    ctx->pc = 0x12f8e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 696)));
label_12f8ec:
    // 0x12f8ec: 0xdfb602c0  ld          $s6, 0x2C0($sp)
    ctx->pc = 0x12f8ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_12f8f0:
    // 0x12f8f0: 0xdfb702c8  ld          $s7, 0x2C8($sp)
    ctx->pc = 0x12f8f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 712)));
label_12f8f4:
    // 0x12f8f4: 0xdfbe02d0  ld          $fp, 0x2D0($sp)
    ctx->pc = 0x12f8f4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 720)));
label_12f8f8:
    // 0x12f8f8: 0xdfbf02d8  ld          $ra, 0x2D8($sp)
    ctx->pc = 0x12f8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 728)));
label_12f8fc:
    // 0x12f8fc: 0x3e00008  jr          $ra
label_12f900:
    if (ctx->pc == 0x12F900u) {
        ctx->pc = 0x12F900u;
            // 0x12f900: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->pc = 0x12F904u;
        goto label_12f904;
    }
    ctx->pc = 0x12F8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F8FCu;
            // 0x12f900: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F904u;
label_12f904:
    // 0x12f904: 0x8fad0268  lw          $t5, 0x268($sp)
    ctx->pc = 0x12f904u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12f908:
    // 0x12f908: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12f908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12f90c:
    // 0x12f90c: 0x1000fff1  b           . + 4 + (-0xF << 2)
label_12f910:
    if (ctx->pc == 0x12F910u) {
        ctx->pc = 0x12F910u;
            // 0x12f910: 0x1ad100b  movn        $v0, $t5, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 13));
        ctx->pc = 0x12F914u;
        goto label_12f914;
    }
    ctx->pc = 0x12F90Cu;
    {
        const bool branch_taken_0x12f90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F90Cu;
            // 0x12f910: 0x1ad100b  movn        $v0, $t5, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f90c) {
            ctx->pc = 0x12F8D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f8d4;
        }
    }
    ctx->pc = 0x12F914u;
label_12f914:
    // 0x12f914: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_12f918:
    if (ctx->pc == 0x12F918u) {
        ctx->pc = 0x12F918u;
            // 0x12f918: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x12F91Cu;
        goto label_12f91c;
    }
    ctx->pc = 0x12F914u;
    {
        const bool branch_taken_0x12f914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F914u;
            // 0x12f918: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f914) {
            ctx->pc = 0x12F8D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f8d4;
        }
    }
    ctx->pc = 0x12F91Cu;
label_12f91c:
    // 0x12f91c: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
label_12f920:
    if (ctx->pc == 0x12F920u) {
        ctx->pc = 0x12F920u;
            // 0x12f920: 0x36940008  ori         $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8);
        ctx->pc = 0x12F924u;
        goto label_12f924;
    }
    ctx->pc = 0x12F91Cu;
    {
        const bool branch_taken_0x12f91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F91Cu;
            // 0x12f920: 0x36940008  ori         $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f91c) {
            ctx->pc = 0x12F844u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f844;
        }
    }
    ctx->pc = 0x12F924u;
label_12f924:
    // 0x12f924: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x12f924u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12f928:
    // 0x12f928: 0x2ef7818  mult        $t7, $s7, $t7
    ctx->pc = 0x12f928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_12f92c:
    // 0x12f92c: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x12f92cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_12f930:
    // 0x12f930: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
label_12f934:
    if (ctx->pc == 0x12F934u) {
        ctx->pc = 0x12F934u;
            // 0x12f934: 0x25f7ffd0  addiu       $s7, $t7, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967248));
        ctx->pc = 0x12F938u;
        goto label_12f938;
    }
    ctx->pc = 0x12F930u;
    {
        const bool branch_taken_0x12f930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F930u;
            // 0x12f934: 0x25f7ffd0  addiu       $s7, $t7, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f930) {
            ctx->pc = 0x12F844u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f844;
        }
    }
    ctx->pc = 0x12F938u;
label_12f938:
    // 0x12f938: 0x36940001  ori         $s4, $s4, 0x1
    ctx->pc = 0x12f938u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
label_12f93c:
    // 0x12f93c: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x12f93cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
label_12f940:
    // 0x12f940: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x12f940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12f944:
    // 0x12f944: 0x25efd620  addiu       $t7, $t7, -0x29E0
    ctx->pc = 0x12f944u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956576));
label_12f948:
    // 0x12f948: 0xafaf026c  sw          $t7, 0x26C($sp)
    ctx->pc = 0x12f948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 15));
label_12f94c:
    // 0x12f94c: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x12f94cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_12f950:
    // 0x12f950: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12f950u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12f954:
    // 0x12f954: 0x1de00005  bgtz        $t7, . + 4 + (0x5 << 2)
label_12f958:
    if (ctx->pc == 0x12F958u) {
        ctx->pc = 0x12F958u;
            // 0x12f958: 0x328f0020  andi        $t7, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->pc = 0x12F95Cu;
        goto label_12f95c;
    }
    ctx->pc = 0x12F954u;
    {
        const bool branch_taken_0x12f954 = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x12F958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F954u;
            // 0x12f958: 0x328f0020  andi        $t7, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f954) {
            ctx->pc = 0x12F96Cu;
            goto label_12f96c;
        }
    }
    ctx->pc = 0x12F95Cu;
label_12f95c:
    // 0x12f95c: 0xc04ad04  jal         func_12B410
label_12f960:
    if (ctx->pc == 0x12F960u) {
        ctx->pc = 0x12F960u;
            // 0x12f960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12F964u;
        goto label_12f964;
    }
    ctx->pc = 0x12F95Cu;
    SET_GPR_U32(ctx, 31, 0x12F964u);
    ctx->pc = 0x12F960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F95Cu;
            // 0x12f960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B410u;
    if (runtime->hasFunction(0x12B410u)) {
        auto targetFn = runtime->lookupFunction(0x12B410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F964u; }
        if (ctx->pc != 0x12F964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B410_0x12b410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F964u; }
        if (ctx->pc != 0x12F964u) { return; }
    }
    ctx->pc = 0x12F964u;
label_12f964:
    // 0x12f964: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_12f968:
    if (ctx->pc == 0x12F968u) {
        ctx->pc = 0x12F968u;
            // 0x12f968: 0x328f0020  andi        $t7, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->pc = 0x12F96Cu;
        goto label_12f96c;
    }
    ctx->pc = 0x12F964u;
    {
        const bool branch_taken_0x12f964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F964u;
            // 0x12f968: 0x328f0020  andi        $t7, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f964) {
            ctx->pc = 0x12F904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f904;
        }
    }
    ctx->pc = 0x12F96Cu;
label_12f96c:
    // 0x12f96c: 0x15e0001a  bnez        $t7, . + 4 + (0x1A << 2)
label_12f970:
    if (ctx->pc == 0x12F970u) {
        ctx->pc = 0x12F970u;
            // 0x12f970: 0x2e0f0005  sltiu       $t7, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->pc = 0x12F974u;
        goto label_12f974;
    }
    ctx->pc = 0x12F96Cu;
    {
        const bool branch_taken_0x12f96c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F96Cu;
            // 0x12f970: 0x2e0f0005  sltiu       $t7, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f96c) {
            ctx->pc = 0x12F9D8u;
            goto label_12f9d8;
        }
    }
    ctx->pc = 0x12F974u;
label_12f974:
    // 0x12f974: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x12f974u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12f978:
    // 0x12f978: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12f978u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
label_12f97c:
    // 0x12f97c: 0x25ec0768  addiu       $t4, $t7, 0x768
    ctx->pc = 0x12f97cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 1896));
label_12f980:
    // 0x12f980: 0x91ae0000  lbu         $t6, 0x0($t5)
    ctx->pc = 0x12f980u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_12f984:
    // 0x12f984: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x12f984u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_12f988:
    // 0x12f988: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x12f988u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12f98c:
    // 0x12f98c: 0x31ef0008  andi        $t7, $t7, 0x8
    ctx->pc = 0x12f98cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
label_12f990:
    // 0x12f990: 0x11e00011  beqz        $t7, . + 4 + (0x11 << 2)
label_12f994:
    if (ctx->pc == 0x12F994u) {
        ctx->pc = 0x12F994u;
            // 0x12f994: 0x2e0f0005  sltiu       $t7, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->pc = 0x12F998u;
        goto label_12f998;
    }
    ctx->pc = 0x12F990u;
    {
        const bool branch_taken_0x12f990 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F990u;
            // 0x12f994: 0x2e0f0005  sltiu       $t7, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f990) {
            ctx->pc = 0x12F9D8u;
            goto label_12f9d8;
        }
    }
    ctx->pc = 0x12F998u;
label_12f998:
    // 0x12f998: 0x180902d  daddu       $s2, $t4, $zero
    ctx->pc = 0x12f998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_12f99c:
    // 0x12f99c: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12f99cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12f9a0:
    // 0x12f9a0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12f9a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_12f9a4:
    // 0x12f9a4: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12f9a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_12f9a8:
    // 0x12f9a8: 0x19e00235  blez        $t7, . + 4 + (0x235 << 2)
label_12f9ac:
    if (ctx->pc == 0x12F9ACu) {
        ctx->pc = 0x12F9ACu;
            // 0x12f9ac: 0xae2f0004  sw          $t7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
        ctx->pc = 0x12F9B0u;
        goto label_12f9b0;
    }
    ctx->pc = 0x12F9A8u;
    {
        const bool branch_taken_0x12f9a8 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x12F9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F9A8u;
            // 0x12f9ac: 0xae2f0004  sw          $t7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9a8) {
            ctx->pc = 0x130280u;
            goto label_130280;
        }
    }
    ctx->pc = 0x12F9B0u;
label_12f9b0:
    // 0x12f9b0: 0x25af0001  addiu       $t7, $t5, 0x1
    ctx->pc = 0x12f9b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_12f9b4:
    // 0x12f9b4: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12f9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12f9b8:
    // 0x12f9b8: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x12f9b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12f9bc:
    // 0x12f9bc: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x12f9bcu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_12f9c0:
    // 0x12f9c0: 0x1f27821  addu        $t7, $t7, $s2
    ctx->pc = 0x12f9c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
label_12f9c4:
    // 0x12f9c4: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12f9c4u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12f9c8:
    // 0x12f9c8: 0x31ce0008  andi        $t6, $t6, 0x8
    ctx->pc = 0x12f9c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
label_12f9cc:
    // 0x12f9cc: 0x55c0fff4  bnel        $t6, $zero, . + 4 + (-0xC << 2)
label_12f9d0:
    if (ctx->pc == 0x12F9D0u) {
        ctx->pc = 0x12F9D0u;
            // 0x12f9d0: 0x8e2f0004  lw          $t7, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x12F9D4u;
        goto label_12f9d4;
    }
    ctx->pc = 0x12F9CCu;
    {
        const bool branch_taken_0x12f9cc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f9cc) {
            ctx->pc = 0x12F9D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F9CCu;
            // 0x12f9d0: 0x8e2f0004  lw          $t7, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F9A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f9a0;
        }
    }
    ctx->pc = 0x12F9D4u;
label_12f9d4:
    // 0x12f9d4: 0x2e0f0005  sltiu       $t7, $s0, 0x5
    ctx->pc = 0x12f9d4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_12f9d8:
    // 0x12f9d8: 0x51e0ff73  beql        $t7, $zero, . + 4 + (-0x8D << 2)
label_12f9dc:
    if (ctx->pc == 0x12F9DCu) {
        ctx->pc = 0x12F9DCu;
            // 0x12f9dc: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x12F9E0u;
        goto label_12f9e0;
    }
    ctx->pc = 0x12F9D8u;
    {
        const bool branch_taken_0x12f9d8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f9d8) {
            ctx->pc = 0x12F9DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F9D8u;
            // 0x12f9dc: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F7A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f7a8;
        }
    }
    ctx->pc = 0x12F9E0u;
label_12f9e0:
    // 0x12f9e0: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x12f9e0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
label_12f9e4:
    // 0x12f9e4: 0x107880  sll         $t7, $s0, 2
    ctx->pc = 0x12f9e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_12f9e8:
    // 0x12f9e8: 0x25ce0f7c  addiu       $t6, $t6, 0xF7C
    ctx->pc = 0x12f9e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3964));
label_12f9ec:
    // 0x12f9ec: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12f9ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_12f9f0:
    // 0x12f9f0: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x12f9f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12f9f4:
    // 0x12f9f4: 0x1a00008  jr          $t5
label_12f9f8:
    if (ctx->pc == 0x12F9F8u) {
        ctx->pc = 0x12F9FCu;
        goto label_12f9fc;
    }
    ctx->pc = 0x12F9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F9FCu: goto label_12f9fc;
            case 0x12FAA8u: goto label_12faa8;
            case 0x12FBF0u: goto label_12fbf0;
            case 0x12FD34u: goto label_12fd34;
            case 0x12FFACu: goto label_12ffac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F9FCu;
label_12f9fc:
    // 0x12f9fc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12f9fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12fa00:
    // 0x12fa00: 0x328e0008  andi        $t6, $s4, 0x8
    ctx->pc = 0x12fa00u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_12fa04:
    // 0x12fa04: 0x11c0001a  beqz        $t6, . + 4 + (0x1A << 2)
label_12fa08:
    if (ctx->pc == 0x12FA08u) {
        ctx->pc = 0x12FA08u;
            // 0x12fa08: 0x1f7b80a  movz        $s7, $t7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->pc = 0x12FA0Cu;
        goto label_12fa0c;
    }
    ctx->pc = 0x12FA04u;
    {
        const bool branch_taken_0x12fa04 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA04u;
            // 0x12fa08: 0x1f7b80a  movz        $s7, $t7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa04) {
            ctx->pc = 0x12FA70u;
            goto label_12fa70;
        }
    }
    ctx->pc = 0x12FA0Cu;
label_12fa0c:
    // 0x12fa0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12fa0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12fa10:
    // 0x12fa10: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x12fa10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12fa14:
    // 0x12fa14: 0x257782a  slt         $t7, $s2, $s7
    ctx->pc = 0x12fa14u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_12fa18:
    // 0x12fa18: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
label_12fa1c:
    if (ctx->pc == 0x12FA1Cu) {
        ctx->pc = 0x12FA1Cu;
            // 0x12fa1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FA20u;
        goto label_12fa20;
    }
    ctx->pc = 0x12FA18u;
    {
        const bool branch_taken_0x12fa18 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA18u;
            // 0x12fa1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa18) {
            ctx->pc = 0x12FA50u;
            goto label_12fa50;
        }
    }
    ctx->pc = 0x12FA20u;
label_12fa20:
    // 0x12fa20: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x12fa20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12fa24:
    // 0x12fa24: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x12fa24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_12fa28:
    // 0x12fa28: 0x2f2b823  subu        $s7, $s7, $s2
    ctx->pc = 0x12fa28u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_12fa2c:
    // 0x12fa2c: 0x1f27821  addu        $t7, $t7, $s2
    ctx->pc = 0x12fa2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
label_12fa30:
    // 0x12fa30: 0xc04ad04  jal         func_12B410
label_12fa34:
    if (ctx->pc == 0x12FA34u) {
        ctx->pc = 0x12FA34u;
            // 0x12fa34: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
        ctx->pc = 0x12FA38u;
        goto label_12fa38;
    }
    ctx->pc = 0x12FA30u;
    SET_GPR_U32(ctx, 31, 0x12FA38u);
    ctx->pc = 0x12FA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA30u;
            // 0x12fa34: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B410u;
    if (runtime->hasFunction(0x12B410u)) {
        auto targetFn = runtime->lookupFunction(0x12B410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FA38u; }
        if (ctx->pc != 0x12FA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B410_0x12b410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FA38u; }
        if (ctx->pc != 0x12FA38u) { return; }
    }
    ctx->pc = 0x12FA38u;
label_12fa38:
    // 0x12fa38: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_12fa3c:
    if (ctx->pc == 0x12FA3Cu) {
        ctx->pc = 0x12FA3Cu;
            // 0x12fa3c: 0x8e320004  lw          $s2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x12FA40u;
        goto label_12fa40;
    }
    ctx->pc = 0x12FA38u;
    {
        const bool branch_taken_0x12fa38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fa38) {
            ctx->pc = 0x12FA3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA38u;
            // 0x12fa3c: 0x8e320004  lw          $s2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FA14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fa14;
        }
    }
    ctx->pc = 0x12FA40u;
label_12fa40:
    // 0x12fa40: 0x1200ffb1  beqz        $s0, . + 4 + (-0x4F << 2)
label_12fa44:
    if (ctx->pc == 0x12FA44u) {
        ctx->pc = 0x12FA44u;
            // 0x12fa44: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->pc = 0x12FA48u;
        goto label_12fa48;
    }
    ctx->pc = 0x12FA40u;
    {
        const bool branch_taken_0x12fa40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA40u;
            // 0x12fa44: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa40) {
            ctx->pc = 0x12F908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f908;
        }
    }
    ctx->pc = 0x12FA48u;
label_12fa48:
    // 0x12fa48: 0x1000ff56  b           . + 4 + (-0xAA << 2)
label_12fa4c:
    if (ctx->pc == 0x12FA4Cu) {
        ctx->pc = 0x12FA4Cu;
            // 0x12fa4c: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->pc = 0x12FA50u;
        goto label_12fa50;
    }
    ctx->pc = 0x12FA48u;
    {
        const bool branch_taken_0x12fa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA48u;
            // 0x12fa4c: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa48) {
            ctx->pc = 0x12F7A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f7a4;
        }
    }
    ctx->pc = 0x12FA50u;
label_12fa50:
    // 0x12fa50: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x12fa50u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12fa54:
    // 0x12fa54: 0x2577823  subu        $t7, $s2, $s7
    ctx->pc = 0x12fa54u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
label_12fa58:
    // 0x12fa58: 0xae2f0004  sw          $t7, 0x4($s1)
    ctx->pc = 0x12fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
label_12fa5c:
    // 0x12fa5c: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x12fa5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_12fa60:
    // 0x12fa60: 0x1d77021  addu        $t6, $t6, $s7
    ctx->pc = 0x12fa60u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 23)));
label_12fa64:
    // 0x12fa64: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_12fa68:
    if (ctx->pc == 0x12FA68u) {
        ctx->pc = 0x12FA68u;
            // 0x12fa68: 0xae2e0000  sw          $t6, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 14));
        ctx->pc = 0x12FA6Cu;
        goto label_12fa6c;
    }
    ctx->pc = 0x12FA64u;
    {
        const bool branch_taken_0x12fa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA64u;
            // 0x12fa68: 0xae2e0000  sw          $t6, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa64) {
            ctx->pc = 0x12FA48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fa48;
        }
    }
    ctx->pc = 0x12FA6Cu;
label_12fa6c:
    // 0x12fa6c: 0x0  nop
    ctx->pc = 0x12fa6cu;
    // NOP
label_12fa70:
    // 0x12fa70: 0x8faf0264  lw          $t7, 0x264($sp)
    ctx->pc = 0x12fa70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12fa74:
    // 0x12fa74: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x12fa74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12fa78:
    // 0x12fa78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12fa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12fa7c:
    // 0x12fa7c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x12fa7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12fa80:
    // 0x12fa80: 0x8de40000  lw          $a0, 0x0($t7)
    ctx->pc = 0x12fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12fa84:
    // 0x12fa84: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12fa84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12fa88:
    // 0x12fa88: 0xc049ea0  jal         func_127A80
label_12fa8c:
    if (ctx->pc == 0x12FA8Cu) {
        ctx->pc = 0x12FA8Cu;
            // 0x12fa8c: 0xafaf0264  sw          $t7, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 15));
        ctx->pc = 0x12FA90u;
        goto label_12fa90;
    }
    ctx->pc = 0x12FA88u;
    SET_GPR_U32(ctx, 31, 0x12FA90u);
    ctx->pc = 0x12FA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA88u;
            // 0x12fa8c: 0xafaf0264  sw          $t7, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A80u;
    if (runtime->hasFunction(0x127A80u)) {
        auto targetFn = runtime->lookupFunction(0x127A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FA90u; }
        if (ctx->pc != 0x12FA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A80_0x127a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FA90u; }
        if (ctx->pc != 0x12FA90u) { return; }
    }
    ctx->pc = 0x12FA90u;
label_12fa90:
    // 0x12fa90: 0x1040ff9c  beqz        $v0, . + 4 + (-0x64 << 2)
label_12fa94:
    if (ctx->pc == 0x12FA94u) {
        ctx->pc = 0x12FA94u;
            // 0x12fa94: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->pc = 0x12FA98u;
        goto label_12fa98;
    }
    ctx->pc = 0x12FA90u;
    {
        const bool branch_taken_0x12fa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA90u;
            // 0x12fa94: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa90) {
            ctx->pc = 0x12F904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f904;
        }
    }
    ctx->pc = 0x12FA98u;
label_12fa98:
    // 0x12fa98: 0x8fad0268  lw          $t5, 0x268($sp)
    ctx->pc = 0x12fa98u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12fa9c:
    // 0x12fa9c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x12fa9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_12faa0:
    // 0x12faa0: 0x1000ff40  b           . + 4 + (-0xC0 << 2)
label_12faa4:
    if (ctx->pc == 0x12FAA4u) {
        ctx->pc = 0x12FAA4u;
            // 0x12faa4: 0xafad0268  sw          $t5, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 13));
        ctx->pc = 0x12FAA8u;
        goto label_12faa8;
    }
    ctx->pc = 0x12FAA0u;
    {
        const bool branch_taken_0x12faa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAA0u;
            // 0x12faa4: 0xafad0268  sw          $t5, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12faa0) {
            ctx->pc = 0x12F7A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f7a4;
        }
    }
    ctx->pc = 0x12FAA8u;
label_12faa8:
    // 0x12faa8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12faa8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12faac:
    // 0x12faac: 0x328e0008  andi        $t6, $s4, 0x8
    ctx->pc = 0x12faacu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_12fab0:
    // 0x12fab0: 0x11c00023  beqz        $t6, . + 4 + (0x23 << 2)
label_12fab4:
    if (ctx->pc == 0x12FAB4u) {
        ctx->pc = 0x12FAB4u;
            // 0x12fab4: 0x1f7b80a  movz        $s7, $t7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->pc = 0x12FAB8u;
        goto label_12fab8;
    }
    ctx->pc = 0x12FAB0u;
    {
        const bool branch_taken_0x12fab0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAB0u;
            // 0x12fab4: 0x1f7b80a  movz        $s7, $t7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fab0) {
            ctx->pc = 0x12FB40u;
            goto label_12fb40;
        }
    }
    ctx->pc = 0x12FAB8u;
label_12fab8:
    // 0x12fab8: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x12fab8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12fabc:
    // 0x12fabc: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x12fabcu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12fac0:
    // 0x12fac0: 0x3af7021  addu        $t6, $sp, $t7
    ctx->pc = 0x12fac0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 15)));
label_12fac4:
    // 0x12fac4: 0x81cd0000  lb          $t5, 0x0($t6)
    ctx->pc = 0x12fac4u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12fac8:
    // 0x12fac8: 0x11a00018  beqz        $t5, . + 4 + (0x18 << 2)
label_12facc:
    if (ctx->pc == 0x12FACCu) {
        ctx->pc = 0x12FACCu;
            // 0x12facc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FAD0u;
        goto label_12fad0;
    }
    ctx->pc = 0x12FAC8u;
    {
        const bool branch_taken_0x12fac8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAC8u;
            // 0x12facc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fac8) {
            ctx->pc = 0x12FB2Cu;
            goto label_12fb2c;
        }
    }
    ctx->pc = 0x12FAD0u;
label_12fad0:
    // 0x12fad0: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x12fad0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12fad4:
    // 0x12fad4: 0x258f0001  addiu       $t7, $t4, 0x1
    ctx->pc = 0x12fad4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_12fad8:
    // 0x12fad8: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12fad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12fadc:
    // 0x12fadc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12fadcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12fae0:
    // 0x12fae0: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x12fae0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_12fae4:
    // 0x12fae4: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12fae4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12fae8:
    // 0x12fae8: 0x12e00010  beqz        $s7, . + 4 + (0x10 << 2)
label_12faec:
    if (ctx->pc == 0x12FAECu) {
        ctx->pc = 0x12FAECu;
            // 0x12faec: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->pc = 0x12FAF0u;
        goto label_12faf0;
    }
    ctx->pc = 0x12FAE8u;
    {
        const bool branch_taken_0x12fae8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAE8u;
            // 0x12faec: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fae8) {
            ctx->pc = 0x12FB2Cu;
            goto label_12fb2c;
        }
    }
    ctx->pc = 0x12FAF0u;
label_12faf0:
    // 0x12faf0: 0x5dc00009  bgtzl       $t6, . + 4 + (0x9 << 2)
label_12faf4:
    if (ctx->pc == 0x12FAF4u) {
        ctx->pc = 0x12FAF4u;
            // 0x12faf4: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x12FAF8u;
        goto label_12faf8;
    }
    ctx->pc = 0x12FAF0u;
    {
        const bool branch_taken_0x12faf0 = (GPR_S32(ctx, 14) > 0);
        if (branch_taken_0x12faf0) {
            ctx->pc = 0x12FAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAF0u;
            // 0x12faf4: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FB18u;
            goto label_12fb18;
        }
    }
    ctx->pc = 0x12FAF8u;
label_12faf8:
    // 0x12faf8: 0xc04ad04  jal         func_12B410
label_12fafc:
    if (ctx->pc == 0x12FAFCu) {
        ctx->pc = 0x12FAFCu;
            // 0x12fafc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FB00u;
        goto label_12fb00;
    }
    ctx->pc = 0x12FAF8u;
    SET_GPR_U32(ctx, 31, 0x12FB00u);
    ctx->pc = 0x12FAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAF8u;
            // 0x12fafc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B410u;
    if (runtime->hasFunction(0x12B410u)) {
        auto targetFn = runtime->lookupFunction(0x12B410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB00u; }
        if (ctx->pc != 0x12FB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B410_0x12b410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB00u; }
        if (ctx->pc != 0x12FB00u) { return; }
    }
    ctx->pc = 0x12FB00u;
label_12fb00:
    // 0x12fb00: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_12fb04:
    if (ctx->pc == 0x12FB04u) {
        ctx->pc = 0x12FB04u;
            // 0x12fb04: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x12FB08u;
        goto label_12fb08;
    }
    ctx->pc = 0x12FB00u;
    {
        const bool branch_taken_0x12fb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fb00) {
            ctx->pc = 0x12FB04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB00u;
            // 0x12fb04: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FB18u;
            goto label_12fb18;
        }
    }
    ctx->pc = 0x12FB08u;
label_12fb08:
    // 0x12fb08: 0x1240ff7f  beqz        $s2, . + 4 + (-0x81 << 2)
label_12fb0c:
    if (ctx->pc == 0x12FB0Cu) {
        ctx->pc = 0x12FB0Cu;
            // 0x12fb0c: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->pc = 0x12FB10u;
        goto label_12fb10;
    }
    ctx->pc = 0x12FB08u;
    {
        const bool branch_taken_0x12fb08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB08u;
            // 0x12fb0c: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb08) {
            ctx->pc = 0x12F908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f908;
        }
    }
    ctx->pc = 0x12FB10u;
label_12fb10:
    // 0x12fb10: 0x1000ff24  b           . + 4 + (-0xDC << 2)
label_12fb14:
    if (ctx->pc == 0x12FB14u) {
        ctx->pc = 0x12FB14u;
            // 0x12fb14: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->pc = 0x12FB18u;
        goto label_12fb18;
    }
    ctx->pc = 0x12FB10u;
    {
        const bool branch_taken_0x12fb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB10u;
            // 0x12fb14: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb10) {
            ctx->pc = 0x12F7A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f7a4;
        }
    }
    ctx->pc = 0x12FB18u;
label_12fb18:
    // 0x12fb18: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x12fb18u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12fb1c:
    // 0x12fb1c: 0x3af7021  addu        $t6, $sp, $t7
    ctx->pc = 0x12fb1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 15)));
label_12fb20:
    // 0x12fb20: 0x81cd0000  lb          $t5, 0x0($t6)
    ctx->pc = 0x12fb20u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12fb24:
    // 0x12fb24: 0x55a0ffeb  bnel        $t5, $zero, . + 4 + (-0x15 << 2)
label_12fb28:
    if (ctx->pc == 0x12FB28u) {
        ctx->pc = 0x12FB28u;
            // 0x12fb28: 0x8e2e0004  lw          $t6, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x12FB2Cu;
        goto label_12fb2c;
    }
    ctx->pc = 0x12FB24u;
    {
        const bool branch_taken_0x12fb24 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fb24) {
            ctx->pc = 0x12FB28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB24u;
            // 0x12fb28: 0x8e2e0004  lw          $t6, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FAD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fad4;
        }
    }
    ctx->pc = 0x12FB2Cu;
label_12fb2c:
    // 0x12fb2c: 0x1640ff1d  bnez        $s2, . + 4 + (-0xE3 << 2)
label_12fb30:
    if (ctx->pc == 0x12FB30u) {
        ctx->pc = 0x12FB30u;
            // 0x12fb30: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->pc = 0x12FB34u;
        goto label_12fb34;
    }
    ctx->pc = 0x12FB2Cu;
    {
        const bool branch_taken_0x12fb2c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB2Cu;
            // 0x12fb30: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb2c) {
            ctx->pc = 0x12F7A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f7a4;
        }
    }
    ctx->pc = 0x12FB34u;
label_12fb34:
    // 0x12fb34: 0x1000ff67  b           . + 4 + (-0x99 << 2)
label_12fb38:
    if (ctx->pc == 0x12FB38u) {
        ctx->pc = 0x12FB38u;
            // 0x12fb38: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->pc = 0x12FB3Cu;
        goto label_12fb3c;
    }
    ctx->pc = 0x12FB34u;
    {
        const bool branch_taken_0x12fb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB34u;
            // 0x12fb38: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb34) {
            ctx->pc = 0x12F8D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f8d4;
        }
    }
    ctx->pc = 0x12FB3Cu;
label_12fb3c:
    // 0x12fb3c: 0x0  nop
    ctx->pc = 0x12fb3cu;
    // NOP
label_12fb40:
    // 0x12fb40: 0x8faf0264  lw          $t7, 0x264($sp)
    ctx->pc = 0x12fb40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12fb44:
    // 0x12fb44: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x12fb44u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12fb48:
    // 0x12fb48: 0x25ee0008  addiu       $t6, $t7, 0x8
    ctx->pc = 0x12fb48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12fb4c:
    // 0x12fb4c: 0x8df60000  lw          $s6, 0x0($t7)
    ctx->pc = 0x12fb4cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12fb50:
    // 0x12fb50: 0xafae0264  sw          $t6, 0x264($sp)
    ctx->pc = 0x12fb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 14));
label_12fb54:
    // 0x12fb54: 0x918d0000  lbu         $t5, 0x0($t4)
    ctx->pc = 0x12fb54u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12fb58:
    // 0x12fb58: 0x3ad7821  addu        $t7, $sp, $t5
    ctx->pc = 0x12fb58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 13)));
label_12fb5c:
    // 0x12fb5c: 0x81ee0000  lb          $t6, 0x0($t7)
    ctx->pc = 0x12fb5cu;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12fb60:
    // 0x12fb60: 0x11c00014  beqz        $t6, . + 4 + (0x14 << 2)
label_12fb64:
    if (ctx->pc == 0x12FB64u) {
        ctx->pc = 0x12FB64u;
            // 0x12fb64: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FB68u;
        goto label_12fb68;
    }
    ctx->pc = 0x12FB60u;
    {
        const bool branch_taken_0x12fb60 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB60u;
            // 0x12fb64: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb60) {
            ctx->pc = 0x12FBB4u;
            goto label_12fbb4;
        }
    }
    ctx->pc = 0x12FB68u;
label_12fb68:
    // 0x12fb68: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12fb68u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12fb6c:
    // 0x12fb6c: 0x258d0001  addiu       $t5, $t4, 0x1
    ctx->pc = 0x12fb6cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_12fb70:
    // 0x12fb70: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12fb70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12fb74:
    // 0x12fb74: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12fb74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_12fb78:
    // 0x12fb78: 0xae2f0004  sw          $t7, 0x4($s1)
    ctx->pc = 0x12fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
label_12fb7c:
    // 0x12fb7c: 0x918e0000  lbu         $t6, 0x0($t4)
    ctx->pc = 0x12fb7cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12fb80:
    // 0x12fb80: 0xa2ce0000  sb          $t6, 0x0($s6)
    ctx->pc = 0x12fb80u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 14));
label_12fb84:
    // 0x12fb84: 0xae2d0000  sw          $t5, 0x0($s1)
    ctx->pc = 0x12fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 13));
label_12fb88:
    // 0x12fb88: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
label_12fb8c:
    if (ctx->pc == 0x12FB8Cu) {
        ctx->pc = 0x12FB8Cu;
            // 0x12fb8c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x12FB90u;
        goto label_12fb90;
    }
    ctx->pc = 0x12FB88u;
    {
        const bool branch_taken_0x12fb88 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB88u;
            // 0x12fb8c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb88) {
            ctx->pc = 0x12FBB4u;
            goto label_12fbb4;
        }
    }
    ctx->pc = 0x12FB90u;
label_12fb90:
    // 0x12fb90: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12fb90u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12fb94:
    // 0x12fb94: 0x5de0000f  bgtzl       $t7, . + 4 + (0xF << 2)
label_12fb98:
    if (ctx->pc == 0x12FB98u) {
        ctx->pc = 0x12FB98u;
            // 0x12fb98: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x12FB9Cu;
        goto label_12fb9c;
    }
    ctx->pc = 0x12FB94u;
    {
        const bool branch_taken_0x12fb94 = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x12fb94) {
            ctx->pc = 0x12FB98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB94u;
            // 0x12fb98: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FBD4u;
            goto label_12fbd4;
        }
    }
    ctx->pc = 0x12FB9Cu;
label_12fb9c:
    // 0x12fb9c: 0xc04ad04  jal         func_12B410
label_12fba0:
    if (ctx->pc == 0x12FBA0u) {
        ctx->pc = 0x12FBA0u;
            // 0x12fba0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FBA4u;
        goto label_12fba4;
    }
    ctx->pc = 0x12FB9Cu;
    SET_GPR_U32(ctx, 31, 0x12FBA4u);
    ctx->pc = 0x12FBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB9Cu;
            // 0x12fba0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B410u;
    if (runtime->hasFunction(0x12B410u)) {
        auto targetFn = runtime->lookupFunction(0x12B410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FBA4u; }
        if (ctx->pc != 0x12FBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B410_0x12b410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FBA4u; }
        if (ctx->pc != 0x12FBA4u) { return; }
    }
    ctx->pc = 0x12FBA4u;
label_12fba4:
    // 0x12fba4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_12fba8:
    if (ctx->pc == 0x12FBA8u) {
        ctx->pc = 0x12FBA8u;
            // 0x12fba8: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x12FBACu;
        goto label_12fbac;
    }
    ctx->pc = 0x12FBA4u;
    {
        const bool branch_taken_0x12fba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fba4) {
            ctx->pc = 0x12FBA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FBA4u;
            // 0x12fba8: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FBD4u;
            goto label_12fbd4;
        }
    }
    ctx->pc = 0x12FBACu;
label_12fbac:
    // 0x12fbac: 0x12d2ff56  beq         $s6, $s2, . + 4 + (-0xAA << 2)
label_12fbb0:
    if (ctx->pc == 0x12FBB0u) {
        ctx->pc = 0x12FBB0u;
            // 0x12fbb0: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->pc = 0x12FBB4u;
        goto label_12fbb4;
    }
    ctx->pc = 0x12FBACu;
    {
        const bool branch_taken_0x12fbac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 18));
        ctx->pc = 0x12FBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FBACu;
            // 0x12fbb0: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbac) {
            ctx->pc = 0x12F908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f908;
        }
    }
    ctx->pc = 0x12FBB4u;
label_12fbb4:
    // 0x12fbb4: 0x2d29023  subu        $s2, $s6, $s2
    ctx->pc = 0x12fbb4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_12fbb8:
    // 0x12fbb8: 0x1240ff46  beqz        $s2, . + 4 + (-0xBA << 2)
label_12fbbc:
    if (ctx->pc == 0x12FBBCu) {
        ctx->pc = 0x12FBBCu;
            // 0x12fbbc: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->pc = 0x12FBC0u;
        goto label_12fbc0;
    }
    ctx->pc = 0x12FBB8u;
    {
        const bool branch_taken_0x12fbb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FBB8u;
            // 0x12fbbc: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbb8) {
            ctx->pc = 0x12F8D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f8d4;
        }
    }
    ctx->pc = 0x12FBC0u;
label_12fbc0:
    // 0x12fbc0: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x12fbc0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
label_12fbc4:
    // 0x12fbc4: 0x8faf0268  lw          $t7, 0x268($sp)
    ctx->pc = 0x12fbc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12fbc8:
    // 0x12fbc8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12fbc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_12fbcc:
    // 0x12fbcc: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
label_12fbd0:
    if (ctx->pc == 0x12FBD0u) {
        ctx->pc = 0x12FBD0u;
            // 0x12fbd0: 0xafaf0268  sw          $t7, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 15));
        ctx->pc = 0x12FBD4u;
        goto label_12fbd4;
    }
    ctx->pc = 0x12FBCCu;
    {
        const bool branch_taken_0x12fbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FBCCu;
            // 0x12fbd0: 0xafaf0268  sw          $t7, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbcc) {
            ctx->pc = 0x12FB10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fb10;
        }
    }
    ctx->pc = 0x12FBD4u;
label_12fbd4:
    // 0x12fbd4: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x12fbd4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12fbd8:
    // 0x12fbd8: 0x3af7021  addu        $t6, $sp, $t7
    ctx->pc = 0x12fbd8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 15)));
label_12fbdc:
    // 0x12fbdc: 0x81cd0000  lb          $t5, 0x0($t6)
    ctx->pc = 0x12fbdcu;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12fbe0:
    // 0x12fbe0: 0x55a0ffe2  bnel        $t5, $zero, . + 4 + (-0x1E << 2)
label_12fbe4:
    if (ctx->pc == 0x12FBE4u) {
        ctx->pc = 0x12FBE4u;
            // 0x12fbe4: 0x8e2f0004  lw          $t7, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x12FBE8u;
        goto label_12fbe8;
    }
    ctx->pc = 0x12FBE0u;
    {
        const bool branch_taken_0x12fbe0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fbe0) {
            ctx->pc = 0x12FBE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FBE0u;
            // 0x12fbe4: 0x8e2f0004  lw          $t7, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FB6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fb6c;
        }
    }
    ctx->pc = 0x12FBE8u;
label_12fbe8:
    // 0x12fbe8: 0x1000fff3  b           . + 4 + (-0xD << 2)
label_12fbec:
    if (ctx->pc == 0x12FBECu) {
        ctx->pc = 0x12FBECu;
            // 0x12fbec: 0x2d29023  subu        $s2, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->pc = 0x12FBF0u;
        goto label_12fbf0;
    }
    ctx->pc = 0x12FBE8u;
    {
        const bool branch_taken_0x12fbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FBE8u;
            // 0x12fbec: 0x2d29023  subu        $s2, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbe8) {
            ctx->pc = 0x12FBB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fbb8;
        }
    }
    ctx->pc = 0x12FBF0u;
label_12fbf0:
    // 0x12fbf0: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12fbf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12fbf4:
    // 0x12fbf4: 0x328e0008  andi        $t6, $s4, 0x8
    ctx->pc = 0x12fbf4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_12fbf8:
    // 0x12fbf8: 0x11c00023  beqz        $t6, . + 4 + (0x23 << 2)
label_12fbfc:
    if (ctx->pc == 0x12FBFCu) {
        ctx->pc = 0x12FBFCu;
            // 0x12fbfc: 0x1f7b80a  movz        $s7, $t7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->pc = 0x12FC00u;
        goto label_12fc00;
    }
    ctx->pc = 0x12FBF8u;
    {
        const bool branch_taken_0x12fbf8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FBF8u;
            // 0x12fbfc: 0x1f7b80a  movz        $s7, $t7, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbf8) {
            ctx->pc = 0x12FC88u;
            goto label_12fc88;
        }
    }
    ctx->pc = 0x12FC00u;
label_12fc00:
    // 0x12fc00: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12fc00u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
label_12fc04:
    // 0x12fc04: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x12fc04u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12fc08:
    // 0x12fc08: 0x25ec0768  addiu       $t4, $t7, 0x768
    ctx->pc = 0x12fc08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 1896));
label_12fc0c:
    // 0x12fc0c: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x12fc0cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_12fc10:
    // 0x12fc10: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x12fc10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
label_12fc14:
    // 0x12fc14: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12fc14u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12fc18:
    // 0x12fc18: 0x31ce0008  andi        $t6, $t6, 0x8
    ctx->pc = 0x12fc18u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
label_12fc1c:
    // 0x12fc1c: 0x15c0ffbc  bnez        $t6, . + 4 + (-0x44 << 2)
label_12fc20:
    if (ctx->pc == 0x12FC20u) {
        ctx->pc = 0x12FC20u;
            // 0x12fc20: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FC24u;
        goto label_12fc24;
    }
    ctx->pc = 0x12FC1Cu;
    {
        const bool branch_taken_0x12fc1c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC1Cu;
            // 0x12fc20: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc1c) {
            ctx->pc = 0x12FB10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fb10;
        }
    }
    ctx->pc = 0x12FC24u;
label_12fc24:
    // 0x12fc24: 0x180802d  daddu       $s0, $t4, $zero
    ctx->pc = 0x12fc24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_12fc28:
    // 0x12fc28: 0x8e2e0004  lw          $t6, 0x4($s1)
    ctx->pc = 0x12fc28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12fc2c:
    // 0x12fc2c: 0x25af0001  addiu       $t7, $t5, 0x1
    ctx->pc = 0x12fc2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_12fc30:
    // 0x12fc30: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12fc30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12fc34:
    // 0x12fc34: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12fc34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12fc38:
    // 0x12fc38: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x12fc38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_12fc3c:
    // 0x12fc3c: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12fc3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12fc40:
    // 0x12fc40: 0x12e0ffb3  beqz        $s7, . + 4 + (-0x4D << 2)
label_12fc44:
    if (ctx->pc == 0x12FC44u) {
        ctx->pc = 0x12FC44u;
            // 0x12fc44: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->pc = 0x12FC48u;
        goto label_12fc48;
    }
    ctx->pc = 0x12FC40u;
    {
        const bool branch_taken_0x12fc40 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC40u;
            // 0x12fc44: 0xae2e0004  sw          $t6, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc40) {
            ctx->pc = 0x12FB10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fb10;
        }
    }
    ctx->pc = 0x12FC48u;
label_12fc48:
    // 0x12fc48: 0x5dc00006  bgtzl       $t6, . + 4 + (0x6 << 2)
label_12fc4c:
    if (ctx->pc == 0x12FC4Cu) {
        ctx->pc = 0x12FC4Cu;
            // 0x12fc4c: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x12FC50u;
        goto label_12fc50;
    }
    ctx->pc = 0x12FC48u;
    {
        const bool branch_taken_0x12fc48 = (GPR_S32(ctx, 14) > 0);
        if (branch_taken_0x12fc48) {
            ctx->pc = 0x12FC4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC48u;
            // 0x12fc4c: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FC64u;
            goto label_12fc64;
        }
    }
    ctx->pc = 0x12FC50u;
label_12fc50:
    // 0x12fc50: 0xc04ad04  jal         func_12B410
label_12fc54:
    if (ctx->pc == 0x12FC54u) {
        ctx->pc = 0x12FC54u;
            // 0x12fc54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FC58u;
        goto label_12fc58;
    }
    ctx->pc = 0x12FC50u;
    SET_GPR_U32(ctx, 31, 0x12FC58u);
    ctx->pc = 0x12FC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC50u;
            // 0x12fc54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B410u;
    if (runtime->hasFunction(0x12B410u)) {
        auto targetFn = runtime->lookupFunction(0x12B410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC58u; }
        if (ctx->pc != 0x12FC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B410_0x12b410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC58u; }
        if (ctx->pc != 0x12FC58u) { return; }
    }
    ctx->pc = 0x12FC58u;
label_12fc58:
    // 0x12fc58: 0x5440fed2  bnel        $v0, $zero, . + 4 + (-0x12E << 2)
label_12fc5c:
    if (ctx->pc == 0x12FC5Cu) {
        ctx->pc = 0x12FC5Cu;
            // 0x12fc5c: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->pc = 0x12FC60u;
        goto label_12fc60;
    }
    ctx->pc = 0x12FC58u;
    {
        const bool branch_taken_0x12fc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fc58) {
            ctx->pc = 0x12FC5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC58u;
            // 0x12fc5c: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F7A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f7a4;
        }
    }
    ctx->pc = 0x12FC60u;
label_12fc60:
    // 0x12fc60: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x12fc60u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12fc64:
    // 0x12fc64: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x12fc64u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_12fc68:
    // 0x12fc68: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x12fc68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_12fc6c:
    // 0x12fc6c: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12fc6cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12fc70:
    // 0x12fc70: 0x31ce0008  andi        $t6, $t6, 0x8
    ctx->pc = 0x12fc70u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
label_12fc74:
    // 0x12fc74: 0x51c0ffed  beql        $t6, $zero, . + 4 + (-0x13 << 2)
label_12fc78:
    if (ctx->pc == 0x12FC78u) {
        ctx->pc = 0x12FC78u;
            // 0x12fc78: 0x8e2e0004  lw          $t6, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x12FC7Cu;
        goto label_12fc7c;
    }
    ctx->pc = 0x12FC74u;
    {
        const bool branch_taken_0x12fc74 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fc74) {
            ctx->pc = 0x12FC78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC74u;
            // 0x12fc78: 0x8e2e0004  lw          $t6, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FC2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fc2c;
        }
    }
    ctx->pc = 0x12FC7Cu;
label_12fc7c:
    // 0x12fc7c: 0x1000fec9  b           . + 4 + (-0x137 << 2)
label_12fc80:
    if (ctx->pc == 0x12FC80u) {
        ctx->pc = 0x12FC80u;
            // 0x12fc80: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->pc = 0x12FC84u;
        goto label_12fc84;
    }
    ctx->pc = 0x12FC7Cu;
    {
        const bool branch_taken_0x12fc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC7Cu;
            // 0x12fc80: 0x2b2a821  addu        $s5, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc7c) {
            ctx->pc = 0x12F7A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f7a4;
        }
    }
    ctx->pc = 0x12FC84u;
label_12fc84:
    // 0x12fc84: 0x0  nop
    ctx->pc = 0x12fc84u;
    // NOP
label_12fc88:
    // 0x12fc88: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12fc88u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
label_12fc8c:
    // 0x12fc8c: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x12fc8cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12fc90:
    // 0x12fc90: 0x25eb0768  addiu       $t3, $t7, 0x768
    ctx->pc = 0x12fc90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), 1896));
label_12fc94:
    // 0x12fc94: 0x8fad0264  lw          $t5, 0x264($sp)
    ctx->pc = 0x12fc94u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12fc98:
    // 0x12fc98: 0x8faf0264  lw          $t7, 0x264($sp)
    ctx->pc = 0x12fc98u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12fc9c:
    // 0x12fc9c: 0x918e0000  lbu         $t6, 0x0($t4)
    ctx->pc = 0x12fc9cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12fca0:
    // 0x12fca0: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12fca0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12fca4:
    // 0x12fca4: 0x8db60000  lw          $s6, 0x0($t5)
    ctx->pc = 0x12fca4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_12fca8:
    // 0x12fca8: 0xafaf0264  sw          $t7, 0x264($sp)
    ctx->pc = 0x12fca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 15));
label_12fcac:
    // 0x12fcac: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x12fcacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_12fcb0:
    // 0x12fcb0: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x12fcb0u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_12fcb4:
    // 0x12fcb4: 0x31ef0008  andi        $t7, $t7, 0x8
    ctx->pc = 0x12fcb4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
label_12fcb8:
    // 0x12fcb8: 0x15e0001a  bnez        $t7, . + 4 + (0x1A << 2)
label_12fcbc:
    if (ctx->pc == 0x12FCBCu) {
        ctx->pc = 0x12FCBCu;
            // 0x12fcbc: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FCC0u;
        goto label_12fcc0;
    }
    ctx->pc = 0x12FCB8u;
    {
        const bool branch_taken_0x12fcb8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FCB8u;
            // 0x12fcbc: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fcb8) {
            ctx->pc = 0x12FD24u;
            goto label_12fd24;
        }
    }
    ctx->pc = 0x12FCC0u;
label_12fcc0:
    // 0x12fcc0: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x12fcc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_12fcc4:
    // 0x12fcc4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12fcc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12fcc8:
    // 0x12fcc8: 0x258d0001  addiu       $t5, $t4, 0x1
    ctx->pc = 0x12fcc8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_12fccc:
    // 0x12fccc: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12fcccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12fcd0:
    // 0x12fcd0: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12fcd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_12fcd4:
    // 0x12fcd4: 0xae2f0004  sw          $t7, 0x4($s1)
    ctx->pc = 0x12fcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
label_12fcd8:
    // 0x12fcd8: 0x918e0000  lbu         $t6, 0x0($t4)
    ctx->pc = 0x12fcd8u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12fcdc:
    // 0x12fcdc: 0xa2ce0000  sb          $t6, 0x0($s6)
    ctx->pc = 0x12fcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 14));
label_12fce0:
    // 0x12fce0: 0xae2d0000  sw          $t5, 0x0($s1)
    ctx->pc = 0x12fce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 13));
label_12fce4:
    // 0x12fce4: 0x12e0000f  beqz        $s7, . + 4 + (0xF << 2)
label_12fce8:
    if (ctx->pc == 0x12FCE8u) {
        ctx->pc = 0x12FCE8u;
            // 0x12fce8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x12FCECu;
        goto label_12fcec;
    }
    ctx->pc = 0x12FCE4u;
    {
        const bool branch_taken_0x12fce4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FCE4u;
            // 0x12fce8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fce4) {
            ctx->pc = 0x12FD24u;
            goto label_12fd24;
        }
    }
    ctx->pc = 0x12FCECu;
label_12fcec:
    // 0x12fcec: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12fcecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12fcf0:
    // 0x12fcf0: 0x5de00006  bgtzl       $t7, . + 4 + (0x6 << 2)
label_12fcf4:
    if (ctx->pc == 0x12FCF4u) {
        ctx->pc = 0x12FCF4u;
            // 0x12fcf4: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x12FCF8u;
        goto label_12fcf8;
    }
    ctx->pc = 0x12FCF0u;
    {
        const bool branch_taken_0x12fcf0 = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x12fcf0) {
            ctx->pc = 0x12FCF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FCF0u;
            // 0x12fcf4: 0x8e2c0000  lw          $t4, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FD0Cu;
            goto label_12fd0c;
        }
    }
    ctx->pc = 0x12FCF8u;
label_12fcf8:
    // 0x12fcf8: 0xc04ad04  jal         func_12B410
label_12fcfc:
    if (ctx->pc == 0x12FCFCu) {
        ctx->pc = 0x12FCFCu;
            // 0x12fcfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FD00u;
        goto label_12fd00;
    }
    ctx->pc = 0x12FCF8u;
    SET_GPR_U32(ctx, 31, 0x12FD00u);
    ctx->pc = 0x12FCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FCF8u;
            // 0x12fcfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B410u;
    if (runtime->hasFunction(0x12B410u)) {
        auto targetFn = runtime->lookupFunction(0x12B410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FD00u; }
        if (ctx->pc != 0x12FD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B410_0x12b410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FD00u; }
        if (ctx->pc != 0x12FD00u) { return; }
    }
    ctx->pc = 0x12FD00u;
label_12fd00:
    // 0x12fd00: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_12fd04:
    if (ctx->pc == 0x12FD04u) {
        ctx->pc = 0x12FD04u;
            // 0x12fd04: 0x2d27823  subu        $t7, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->pc = 0x12FD08u;
        goto label_12fd08;
    }
    ctx->pc = 0x12FD00u;
    {
        const bool branch_taken_0x12fd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FD00u;
            // 0x12fd04: 0x2d27823  subu        $t7, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd00) {
            ctx->pc = 0x12FD28u;
            goto label_12fd28;
        }
    }
    ctx->pc = 0x12FD08u;
label_12fd08:
    // 0x12fd08: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x12fd08u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12fd0c:
    // 0x12fd0c: 0x918f0000  lbu         $t7, 0x0($t4)
    ctx->pc = 0x12fd0cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_12fd10:
    // 0x12fd10: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x12fd10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_12fd14:
    // 0x12fd14: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12fd14u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12fd18:
    // 0x12fd18: 0x31ce0008  andi        $t6, $t6, 0x8
    ctx->pc = 0x12fd18u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
label_12fd1c:
    // 0x12fd1c: 0x51c0ffea  beql        $t6, $zero, . + 4 + (-0x16 << 2)
label_12fd20:
    if (ctx->pc == 0x12FD20u) {
        ctx->pc = 0x12FD20u;
            // 0x12fd20: 0x8e2f0004  lw          $t7, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x12FD24u;
        goto label_12fd24;
    }
    ctx->pc = 0x12FD1Cu;
    {
        const bool branch_taken_0x12fd1c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fd1c) {
            ctx->pc = 0x12FD20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FD1Cu;
            // 0x12fd20: 0x8e2f0004  lw          $t7, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FCC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fcc8;
        }
    }
    ctx->pc = 0x12FD24u;
label_12fd24:
    // 0x12fd24: 0x2d27823  subu        $t7, $s6, $s2
    ctx->pc = 0x12fd24u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_12fd28:
    // 0x12fd28: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x12fd28u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
label_12fd2c:
    // 0x12fd2c: 0x1000ff5a  b           . + 4 + (-0xA6 << 2)
label_12fd30:
    if (ctx->pc == 0x12FD30u) {
        ctx->pc = 0x12FD30u;
            // 0x12fd30: 0x2afa821  addu        $s5, $s5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
        ctx->pc = 0x12FD34u;
        goto label_12fd34;
    }
    ctx->pc = 0x12FD2Cu;
    {
        const bool branch_taken_0x12fd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FD2Cu;
            // 0x12fd30: 0x2afa821  addu        $s5, $s5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd2c) {
            ctx->pc = 0x12FA98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fa98;
        }
    }
    ctx->pc = 0x12FD34u;
label_12fd34:
    // 0x12fd34: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12fd34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12fd38:
    // 0x12fd38: 0x240f015c  addiu       $t7, $zero, 0x15C
    ctx->pc = 0x12fd38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_12fd3c:
    // 0x12fd3c: 0x2eee015d  sltiu       $t6, $s7, 0x15D
    ctx->pc = 0x12fd3cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_12fd40:
    // 0x12fd40: 0x369402c0  ori         $s4, $s4, 0x2C0
    ctx->pc = 0x12fd40u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)704);
label_12fd44:
    // 0x12fd44: 0x1eeb80a  movz        $s7, $t7, $t6
    ctx->pc = 0x12fd44u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
label_12fd48:
    // 0x12fd48: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12fd48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_12fd4c:
    // 0x12fd4c: 0x12e00022  beqz        $s7, . + 4 + (0x22 << 2)
label_12fd50:
    if (ctx->pc == 0x12FD50u) {
        ctx->pc = 0x12FD50u;
            // 0x12fd50: 0x27b60100  addiu       $s6, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x12FD54u;
        goto label_12fd54;
    }
    ctx->pc = 0x12FD4Cu;
    {
        const bool branch_taken_0x12fd4c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FD4Cu;
            // 0x12fd50: 0x27b60100  addiu       $s6, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd4c) {
            ctx->pc = 0x12FDD8u;
            goto label_12fdd8;
        }
    }
    ctx->pc = 0x12FD54u;
label_12fd54:
    // 0x12fd54: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x12fd54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12fd58:
    // 0x12fd58: 0x91f00000  lbu         $s0, 0x0($t7)
    ctx->pc = 0x12fd58u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12fd5c:
    // 0x12fd5c: 0x260effd5  addiu       $t6, $s0, -0x2B
    ctx->pc = 0x12fd5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_12fd60:
    // 0x12fd60: 0x2dcf004e  sltiu       $t7, $t6, 0x4E
    ctx->pc = 0x12fd60u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)78) ? 1 : 0);
label_12fd64:
    // 0x12fd64: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
label_12fd68:
    if (ctx->pc == 0x12FD68u) {
        ctx->pc = 0x12FD68u;
            // 0x12fd68: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->pc = 0x12FD6Cu;
        goto label_12fd6c;
    }
    ctx->pc = 0x12FD64u;
    {
        const bool branch_taken_0x12fd64 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FD64u;
            // 0x12fd68: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd64) {
            ctx->pc = 0x12FDD8u;
            goto label_12fdd8;
        }
    }
    ctx->pc = 0x12FD6Cu;
label_12fd6c:
    // 0x12fd6c: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x12fd6cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
label_12fd70:
    // 0x12fd70: 0x25ce0f90  addiu       $t6, $t6, 0xF90
    ctx->pc = 0x12fd70u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3984));
label_12fd74:
    // 0x12fd74: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12fd74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_12fd78:
    // 0x12fd78: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x12fd78u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12fd7c:
    // 0x12fd7c: 0x1a00008  jr          $t5
label_12fd80:
    if (ctx->pc == 0x12FD80u) {
        ctx->pc = 0x12FD84u;
        goto label_12fd84;
    }
    ctx->pc = 0x12FD7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FD84u: goto label_12fd84;
            case 0x12FDD8u: goto label_12fdd8;
            case 0x12FF1Cu: goto label_12ff1c;
            case 0x12FF30u: goto label_12ff30;
            case 0x12FF50u: goto label_12ff50;
            case 0x12FF78u: goto label_12ff78;
            case 0x12FF90u: goto label_12ff90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FD84u;
label_12fd84:
    // 0x12fd84: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
label_12fd88:
    if (ctx->pc == 0x12FD88u) {
        ctx->pc = 0x12FD88u;
            // 0x12fd88: 0x328f0200  andi        $t7, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
        ctx->pc = 0x12FD8Cu;
        goto label_12fd8c;
    }
    ctx->pc = 0x12FD84u;
    {
        const bool branch_taken_0x12fd84 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FD84u;
            // 0x12fd88: 0x328f0200  andi        $t7, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd84) {
            ctx->pc = 0x12FD98u;
            goto label_12fd98;
        }
    }
    ctx->pc = 0x12FD8Cu;
label_12fd8c:
    // 0x12fd8c: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x12fd8cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_12fd90:
    // 0x12fd90: 0x36940100  ori         $s4, $s4, 0x100
    ctx->pc = 0x12fd90u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)256);
label_12fd94:
    // 0x12fd94: 0x328f0200  andi        $t7, $s4, 0x200
    ctx->pc = 0x12fd94u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
label_12fd98:
    // 0x12fd98: 0x11e00002  beqz        $t7, . + 4 + (0x2 << 2)
label_12fd9c:
    if (ctx->pc == 0x12FD9Cu) {
        ctx->pc = 0x12FD9Cu;
            // 0x12fd9c: 0x240ffe3f  addiu       $t7, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->pc = 0x12FDA0u;
        goto label_12fda0;
    }
    ctx->pc = 0x12FD98u;
    {
        const bool branch_taken_0x12fd98 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FD98u;
            // 0x12fd9c: 0x240ffe3f  addiu       $t7, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd98) {
            ctx->pc = 0x12FDA4u;
            goto label_12fda4;
        }
    }
    ctx->pc = 0x12FDA0u;
label_12fda0:
    // 0x12fda0: 0x240ffd3f  addiu       $t7, $zero, -0x2C1
    ctx->pc = 0x12fda0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
label_12fda4:
    // 0x12fda4: 0x28fa024  and         $s4, $s4, $t7
    ctx->pc = 0x12fda4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
label_12fda8:
    // 0x12fda8: 0xa2d00000  sb          $s0, 0x0($s6)
    ctx->pc = 0x12fda8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 16));
label_12fdac:
    // 0x12fdac: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x12fdacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_12fdb0:
    // 0x12fdb0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x12fdb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_12fdb4:
    // 0x12fdb4: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12fdb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_12fdb8:
    // 0x12fdb8: 0x19e00052  blez        $t7, . + 4 + (0x52 << 2)
label_12fdbc:
    if (ctx->pc == 0x12FDBCu) {
        ctx->pc = 0x12FDBCu;
            // 0x12fdbc: 0xae2f0004  sw          $t7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
        ctx->pc = 0x12FDC0u;
        goto label_12fdc0;
    }
    ctx->pc = 0x12FDB8u;
    {
        const bool branch_taken_0x12fdb8 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x12FDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FDB8u;
            // 0x12fdbc: 0xae2f0004  sw          $t7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fdb8) {
            ctx->pc = 0x12FF04u;
            goto label_12ff04;
        }
    }
    ctx->pc = 0x12FDC0u;
label_12fdc0:
    // 0x12fdc0: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x12fdc0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12fdc4:
    // 0x12fdc4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12fdc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_12fdc8:
    // 0x12fdc8: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x12fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_12fdcc:
    // 0x12fdcc: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12fdccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12fdd0:
    // 0x12fdd0: 0x56e0ffe1  bnel        $s7, $zero, . + 4 + (-0x1F << 2)
label_12fdd4:
    if (ctx->pc == 0x12FDD4u) {
        ctx->pc = 0x12FDD4u;
            // 0x12fdd4: 0x8e2f0000  lw          $t7, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x12FDD8u;
        goto label_12fdd8;
    }
    ctx->pc = 0x12FDD0u;
    {
        const bool branch_taken_0x12fdd0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fdd0) {
            ctx->pc = 0x12FDD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FDD0u;
            // 0x12fdd4: 0x8e2f0000  lw          $t7, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FD58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fd58;
        }
    }
    ctx->pc = 0x12FDD8u;
label_12fdd8:
    // 0x12fdd8: 0x328f0080  andi        $t7, $s4, 0x80
    ctx->pc = 0x12fdd8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
label_12fddc:
    // 0x12fddc: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
label_12fde0:
    if (ctx->pc == 0x12FDE0u) {
        ctx->pc = 0x12FDE0u;
            // 0x12fde0: 0x27ae0100  addiu       $t6, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x12FDE4u;
        goto label_12fde4;
    }
    ctx->pc = 0x12FDDCu;
    {
        const bool branch_taken_0x12fddc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FDDCu;
            // 0x12fde0: 0x27ae0100  addiu       $t6, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fddc) {
            ctx->pc = 0x12FE08u;
            goto label_12fe08;
        }
    }
    ctx->pc = 0x12FDE4u;
label_12fde4:
    // 0x12fde4: 0x1d6782b  sltu        $t7, $t6, $s6
    ctx->pc = 0x12fde4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_12fde8:
    // 0x12fde8: 0x51e0feba  beql        $t7, $zero, . + 4 + (-0x146 << 2)
label_12fdec:
    if (ctx->pc == 0x12FDECu) {
        ctx->pc = 0x12FDECu;
            // 0x12fdec: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->pc = 0x12FDF0u;
        goto label_12fdf0;
    }
    ctx->pc = 0x12FDE8u;
    {
        const bool branch_taken_0x12fde8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fde8) {
            ctx->pc = 0x12FDECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12FDE8u;
            // 0x12fdec: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F8D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f8d4;
        }
    }
    ctx->pc = 0x12FDF0u;
label_12fdf0:
    // 0x12fdf0: 0x82c4ffff  lb          $a0, -0x1($s6)
    ctx->pc = 0x12fdf0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294967295)));
label_12fdf4:
    // 0x12fdf4: 0xc04b6f0  jal         func_12DBC0
label_12fdf8:
    if (ctx->pc == 0x12FDF8u) {
        ctx->pc = 0x12FDF8u;
            // 0x12fdf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FDFCu;
        goto label_12fdfc;
    }
    ctx->pc = 0x12FDF4u;
    SET_GPR_U32(ctx, 31, 0x12FDFCu);
    ctx->pc = 0x12FDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FDF4u;
            // 0x12fdf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBC0u;
    if (runtime->hasFunction(0x12DBC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FDFCu; }
        if (ctx->pc != 0x12FDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DBC0_0x12dbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FDFCu; }
        if (ctx->pc != 0x12FDFCu) { return; }
    }
    ctx->pc = 0x12FDFCu;
label_12fdfc:
    // 0x12fdfc: 0x1000feb5  b           . + 4 + (-0x14B << 2)
label_12fe00:
    if (ctx->pc == 0x12FE00u) {
        ctx->pc = 0x12FE00u;
            // 0x12fe00: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->pc = 0x12FE04u;
        goto label_12fe04;
    }
    ctx->pc = 0x12FDFCu;
    {
        const bool branch_taken_0x12fdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FDFCu;
            // 0x12fe00: 0x8fa20268  lw          $v0, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fdfc) {
            ctx->pc = 0x12F8D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f8d4;
        }
    }
    ctx->pc = 0x12FE04u;
label_12fe04:
    // 0x12fe04: 0x0  nop
    ctx->pc = 0x12fe04u;
    // NOP
label_12fe08:
    // 0x12fe08: 0x82d0ffff  lb          $s0, -0x1($s6)
    ctx->pc = 0x12fe08u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294967295)));
label_12fe0c:
    // 0x12fe0c: 0x240f0078  addiu       $t7, $zero, 0x78
    ctx->pc = 0x12fe0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_12fe10:
    // 0x12fe10: 0x120f0003  beq         $s0, $t7, . + 4 + (0x3 << 2)
label_12fe14:
    if (ctx->pc == 0x12FE14u) {
        ctx->pc = 0x12FE14u;
            // 0x12fe14: 0x240f0058  addiu       $t7, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x12FE18u;
        goto label_12fe18;
    }
    ctx->pc = 0x12FE10u;
    {
        const bool branch_taken_0x12fe10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x12FE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE10u;
            // 0x12fe14: 0x240f0058  addiu       $t7, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe10) {
            ctx->pc = 0x12FE20u;
            goto label_12fe20;
        }
    }
    ctx->pc = 0x12FE18u;
label_12fe18:
    // 0x12fe18: 0x160f0006  bne         $s0, $t7, . + 4 + (0x6 << 2)
label_12fe1c:
    if (ctx->pc == 0x12FE1Cu) {
        ctx->pc = 0x12FE1Cu;
            // 0x12fe1c: 0x328f0008  andi        $t7, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x12FE20u;
        goto label_12fe20;
    }
    ctx->pc = 0x12FE18u;
    {
        const bool branch_taken_0x12fe18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x12FE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE18u;
            // 0x12fe1c: 0x328f0008  andi        $t7, $s4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe18) {
            ctx->pc = 0x12FE34u;
            goto label_12fe34;
        }
    }
    ctx->pc = 0x12FE20u;
label_12fe20:
    // 0x12fe20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12fe20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12fe24:
    // 0x12fe24: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12fe24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_12fe28:
    // 0x12fe28: 0xc04b6f0  jal         func_12DBC0
label_12fe2c:
    if (ctx->pc == 0x12FE2Cu) {
        ctx->pc = 0x12FE2Cu;
            // 0x12fe2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FE30u;
        goto label_12fe30;
    }
    ctx->pc = 0x12FE28u;
    SET_GPR_U32(ctx, 31, 0x12FE30u);
    ctx->pc = 0x12FE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE28u;
            // 0x12fe2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBC0u;
    if (runtime->hasFunction(0x12DBC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FE30u; }
        if (ctx->pc != 0x12FE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DBC0_0x12dbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FE30u; }
        if (ctx->pc != 0x12FE30u) { return; }
    }
    ctx->pc = 0x12FE30u;
label_12fe30:
    // 0x12fe30: 0x328f0008  andi        $t7, $s4, 0x8
    ctx->pc = 0x12fe30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_12fe34:
    // 0x12fe34: 0x15e00015  bnez        $t7, . + 4 + (0x15 << 2)
label_12fe38:
    if (ctx->pc == 0x12FE38u) {
        ctx->pc = 0x12FE38u;
            // 0x12fe38: 0x27ad0100  addiu       $t5, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x12FE3Cu;
        goto label_12fe3c;
    }
    ctx->pc = 0x12FE34u;
    {
        const bool branch_taken_0x12fe34 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE34u;
            // 0x12fe38: 0x27ad0100  addiu       $t5, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe34) {
            ctx->pc = 0x12FE8Cu;
            goto label_12fe8c;
        }
    }
    ctx->pc = 0x12FE3Cu;
label_12fe3c:
    // 0x12fe3c: 0xa2c00000  sb          $zero, 0x0($s6)
    ctx->pc = 0x12fe3cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
label_12fe40:
    // 0x12fe40: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x12fe40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12fe44:
    // 0x12fe44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12fe44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12fe48:
    // 0x12fe48: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x12fe48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12fe4c:
    // 0x12fe4c: 0x8faf026c  lw          $t7, 0x26C($sp)
    ctx->pc = 0x12fe4cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_12fe50:
    // 0x12fe50: 0x1e0f809  jalr        $t7
label_12fe54:
    if (ctx->pc == 0x12FE54u) {
        ctx->pc = 0x12FE54u;
            // 0x12fe54: 0x8fa40260  lw          $a0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->pc = 0x12FE58u;
        goto label_12fe58;
    }
    ctx->pc = 0x12FE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x12FE58u);
        ctx->pc = 0x12FE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE50u;
            // 0x12fe54: 0x8fa40260  lw          $a0, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12FE58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12FE58u; }
            if (ctx->pc != 0x12FE58u) { return; }
        }
        }
    }
    ctx->pc = 0x12FE58u;
label_12fe58:
    // 0x12fe58: 0x328f0010  andi        $t7, $s4, 0x10
    ctx->pc = 0x12fe58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16);
label_12fe5c:
    // 0x12fe5c: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
label_12fe60:
    if (ctx->pc == 0x12FE60u) {
        ctx->pc = 0x12FE60u;
            // 0x12fe60: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->pc = 0x12FE64u;
        goto label_12fe64;
    }
    ctx->pc = 0x12FE5Cu;
    {
        const bool branch_taken_0x12fe5c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE5Cu;
            // 0x12fe60: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe5c) {
            ctx->pc = 0x12FE98u;
            goto label_12fe98;
        }
    }
    ctx->pc = 0x12FE64u;
label_12fe64:
    // 0x12fe64: 0x2683c  dsll32      $t5, $v0, 0
    ctx->pc = 0x12fe64u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) << (32 + 0));
label_12fe68:
    // 0x12fe68: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x12fe68u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
label_12fe6c:
    // 0x12fe6c: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x12fe6cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12fe70:
    // 0x12fe70: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12fe70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12fe74:
    // 0x12fe74: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x12fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
label_12fe78:
    // 0x12fe78: 0xafaf0264  sw          $t7, 0x264($sp)
    ctx->pc = 0x12fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 15));
label_12fe7c:
    // 0x12fe7c: 0x8fae0268  lw          $t6, 0x268($sp)
    ctx->pc = 0x12fe7cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_12fe80:
    // 0x12fe80: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12fe80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_12fe84:
    // 0x12fe84: 0xafae0268  sw          $t6, 0x268($sp)
    ctx->pc = 0x12fe84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 14));
label_12fe88:
    // 0x12fe88: 0x27ad0100  addiu       $t5, $sp, 0x100
    ctx->pc = 0x12fe88u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12fe8c:
    // 0x12fe8c: 0x2cd7823  subu        $t7, $s6, $t5
    ctx->pc = 0x12fe8cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
label_12fe90:
    // 0x12fe90: 0x1000fe44  b           . + 4 + (-0x1BC << 2)
label_12fe94:
    if (ctx->pc == 0x12FE94u) {
        ctx->pc = 0x12FE94u;
            // 0x12fe94: 0x2afa821  addu        $s5, $s5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
        ctx->pc = 0x12FE98u;
        goto label_12fe98;
    }
    ctx->pc = 0x12FE90u;
    {
        const bool branch_taken_0x12fe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE90u;
            // 0x12fe94: 0x2afa821  addu        $s5, $s5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe90) {
            ctx->pc = 0x12F7A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f7a4;
        }
    }
    ctx->pc = 0x12FE98u;
label_12fe98:
    // 0x12fe98: 0x328f0004  andi        $t7, $s4, 0x4
    ctx->pc = 0x12fe98u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
label_12fe9c:
    // 0x12fe9c: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
label_12fea0:
    if (ctx->pc == 0x12FEA0u) {
        ctx->pc = 0x12FEA0u;
            // 0x12fea0: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->pc = 0x12FEA4u;
        goto label_12fea4;
    }
    ctx->pc = 0x12FE9Cu;
    {
        const bool branch_taken_0x12fe9c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FE9Cu;
            // 0x12fea0: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe9c) {
            ctx->pc = 0x12FEC0u;
            goto label_12fec0;
        }
    }
    ctx->pc = 0x12FEA4u;
label_12fea4:
    // 0x12fea4: 0x304effff  andi        $t6, $v0, 0xFFFF
    ctx->pc = 0x12fea4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_12fea8:
    // 0x12fea8: 0x8fad0264  lw          $t5, 0x264($sp)
    ctx->pc = 0x12fea8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12feac:
    // 0x12feac: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x12feacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12feb0:
    // 0x12feb0: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x12feb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_12feb4:
    // 0x12feb4: 0xafad0264  sw          $t5, 0x264($sp)
    ctx->pc = 0x12feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 13));
label_12feb8:
    // 0x12feb8: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_12febc:
    if (ctx->pc == 0x12FEBCu) {
        ctx->pc = 0x12FEBCu;
            // 0x12febc: 0xa5ee0000  sh          $t6, 0x0($t7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 14));
        ctx->pc = 0x12FEC0u;
        goto label_12fec0;
    }
    ctx->pc = 0x12FEB8u;
    {
        const bool branch_taken_0x12feb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FEB8u;
            // 0x12febc: 0xa5ee0000  sh          $t6, 0x0($t7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12feb8) {
            ctx->pc = 0x12FE7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fe7c;
        }
    }
    ctx->pc = 0x12FEC0u;
label_12fec0:
    // 0x12fec0: 0x328f0001  andi        $t7, $s4, 0x1
    ctx->pc = 0x12fec0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_12fec4:
    // 0x12fec4: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
label_12fec8:
    if (ctx->pc == 0x12FEC8u) {
        ctx->pc = 0x12FEC8u;
            // 0x12fec8: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->pc = 0x12FECCu;
        goto label_12fecc;
    }
    ctx->pc = 0x12FEC4u;
    {
        const bool branch_taken_0x12fec4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FEC4u;
            // 0x12fec8: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fec4) {
            ctx->pc = 0x12FEE4u;
            goto label_12fee4;
        }
    }
    ctx->pc = 0x12FECCu;
label_12fecc:
    // 0x12fecc: 0x8fae0264  lw          $t6, 0x264($sp)
    ctx->pc = 0x12feccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12fed0:
    // 0x12fed0: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x12fed0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12fed4:
    // 0x12fed4: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x12fed4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
label_12fed8:
    // 0x12fed8: 0xafae0264  sw          $t6, 0x264($sp)
    ctx->pc = 0x12fed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 14));
label_12fedc:
    // 0x12fedc: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_12fee0:
    if (ctx->pc == 0x12FEE0u) {
        ctx->pc = 0x12FEE0u;
            // 0x12fee0: 0xfde20000  sd          $v0, 0x0($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x12FEE4u;
        goto label_12fee4;
    }
    ctx->pc = 0x12FEDCu;
    {
        const bool branch_taken_0x12fedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FEDCu;
            // 0x12fee0: 0xfde20000  sd          $v0, 0x0($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fedc) {
            ctx->pc = 0x12FE7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fe7c;
        }
    }
    ctx->pc = 0x12FEE4u;
label_12fee4:
    // 0x12fee4: 0x2703c  dsll32      $t6, $v0, 0
    ctx->pc = 0x12fee4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << (32 + 0));
label_12fee8:
    // 0x12fee8: 0x8fad0264  lw          $t5, 0x264($sp)
    ctx->pc = 0x12fee8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_12feec:
    // 0x12feec: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x12feecu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
label_12fef0:
    // 0x12fef0: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x12fef0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_12fef4:
    // 0x12fef4: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x12fef4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_12fef8:
    // 0x12fef8: 0xafad0264  sw          $t5, 0x264($sp)
    ctx->pc = 0x12fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 13));
label_12fefc:
    // 0x12fefc: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
label_12ff00:
    if (ctx->pc == 0x12FF00u) {
        ctx->pc = 0x12FF00u;
            // 0x12ff00: 0xadee0000  sw          $t6, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
        ctx->pc = 0x12FF04u;
        goto label_12ff04;
    }
    ctx->pc = 0x12FEFCu;
    {
        const bool branch_taken_0x12fefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FEFCu;
            // 0x12ff00: 0xadee0000  sw          $t6, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fefc) {
            ctx->pc = 0x12FE7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fe7c;
        }
    }
    ctx->pc = 0x12FF04u;
label_12ff04:
    // 0x12ff04: 0xc04ad04  jal         func_12B410
label_12ff08:
    if (ctx->pc == 0x12FF08u) {
        ctx->pc = 0x12FF08u;
            // 0x12ff08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12FF0Cu;
        goto label_12ff0c;
    }
    ctx->pc = 0x12FF04u;
    SET_GPR_U32(ctx, 31, 0x12FF0Cu);
    ctx->pc = 0x12FF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF04u;
            // 0x12ff08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B410u;
    if (runtime->hasFunction(0x12B410u)) {
        auto targetFn = runtime->lookupFunction(0x12B410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FF0Cu; }
        if (ctx->pc != 0x12FF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B410_0x12b410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FF0Cu; }
        if (ctx->pc != 0x12FF0Cu) { return; }
    }
    ctx->pc = 0x12FF0Cu;
label_12ff0c:
    // 0x12ff0c: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_12ff10:
    if (ctx->pc == 0x12FF10u) {
        ctx->pc = 0x12FF10u;
            // 0x12ff10: 0x328f0080  andi        $t7, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x12FF14u;
        goto label_12ff14;
    }
    ctx->pc = 0x12FF0Cu;
    {
        const bool branch_taken_0x12ff0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF0Cu;
            // 0x12ff10: 0x328f0080  andi        $t7, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff0c) {
            ctx->pc = 0x12FDDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fddc;
        }
    }
    ctx->pc = 0x12FF14u;
label_12ff14:
    // 0x12ff14: 0x1000ffae  b           . + 4 + (-0x52 << 2)
label_12ff18:
    if (ctx->pc == 0x12FF18u) {
        ctx->pc = 0x12FF18u;
            // 0x12ff18: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->pc = 0x12FF1Cu;
        goto label_12ff1c;
    }
    ctx->pc = 0x12FF14u;
    {
        const bool branch_taken_0x12ff14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF14u;
            // 0x12ff18: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff14) {
            ctx->pc = 0x12FDD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fdd0;
        }
    }
    ctx->pc = 0x12FF1Cu;
label_12ff1c:
    // 0x12ff1c: 0x328f0040  andi        $t7, $s4, 0x40
    ctx->pc = 0x12ff1cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
label_12ff20:
    // 0x12ff20: 0x11e0ffad  beqz        $t7, . + 4 + (-0x53 << 2)
label_12ff24:
    if (ctx->pc == 0x12FF24u) {
        ctx->pc = 0x12FF24u;
            // 0x12ff24: 0x240fffbf  addiu       $t7, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->pc = 0x12FF28u;
        goto label_12ff28;
    }
    ctx->pc = 0x12FF20u;
    {
        const bool branch_taken_0x12ff20 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF20u;
            // 0x12ff24: 0x240fffbf  addiu       $t7, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff20) {
            ctx->pc = 0x12FDD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fdd8;
        }
    }
    ctx->pc = 0x12FF28u;
label_12ff28:
    // 0x12ff28: 0x1000ff9f  b           . + 4 + (-0x61 << 2)
label_12ff2c:
    if (ctx->pc == 0x12FF2Cu) {
        ctx->pc = 0x12FF2Cu;
            // 0x12ff2c: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->pc = 0x12FF30u;
        goto label_12ff30;
    }
    ctx->pc = 0x12FF28u;
    {
        const bool branch_taken_0x12ff28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF28u;
            // 0x12ff2c: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff28) {
            ctx->pc = 0x12FDA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fda8;
        }
    }
    ctx->pc = 0x12FF30u;
label_12ff30:
    // 0x12ff30: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x12ff30u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
label_12ff34:
    // 0x12ff34: 0x1e7840  sll         $t7, $fp, 1
    ctx->pc = 0x12ff34u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_12ff38:
    // 0x12ff38: 0x25ce0d68  addiu       $t6, $t6, 0xD68
    ctx->pc = 0x12ff38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3432));
label_12ff3c:
    // 0x12ff3c: 0x240dfe3f  addiu       $t5, $zero, -0x1C1
    ctx->pc = 0x12ff3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
label_12ff40:
    // 0x12ff40: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12ff40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_12ff44:
    // 0x12ff44: 0x28da024  and         $s4, $s4, $t5
    ctx->pc = 0x12ff44u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 13));
label_12ff48:
    // 0x12ff48: 0x1000ff97  b           . + 4 + (-0x69 << 2)
label_12ff4c:
    if (ctx->pc == 0x12FF4Cu) {
        ctx->pc = 0x12FF4Cu;
            // 0x12ff4c: 0x85fe0000  lh          $fp, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->pc = 0x12FF50u;
        goto label_12ff50;
    }
    ctx->pc = 0x12FF48u;
    {
        const bool branch_taken_0x12ff48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF48u;
            // 0x12ff4c: 0x85fe0000  lh          $fp, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff48) {
            ctx->pc = 0x12FDA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fda8;
        }
    }
    ctx->pc = 0x12FF50u;
label_12ff50:
    // 0x12ff50: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x12ff50u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
label_12ff54:
    // 0x12ff54: 0x1e7840  sll         $t7, $fp, 1
    ctx->pc = 0x12ff54u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_12ff58:
    // 0x12ff58: 0x25ce0d68  addiu       $t6, $t6, 0xD68
    ctx->pc = 0x12ff58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3432));
label_12ff5c:
    // 0x12ff5c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12ff5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_12ff60:
    // 0x12ff60: 0x85fe0000  lh          $fp, 0x0($t7)
    ctx->pc = 0x12ff60u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
label_12ff64:
    // 0x12ff64: 0x2bce0009  slti        $t6, $fp, 0x9
    ctx->pc = 0x12ff64u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)9) ? 1 : 0);
label_12ff68:
    // 0x12ff68: 0x15c0ff9b  bnez        $t6, . + 4 + (-0x65 << 2)
label_12ff6c:
    if (ctx->pc == 0x12FF6Cu) {
        ctx->pc = 0x12FF6Cu;
            // 0x12ff6c: 0x240ffe3f  addiu       $t7, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->pc = 0x12FF70u;
        goto label_12ff70;
    }
    ctx->pc = 0x12FF68u;
    {
        const bool branch_taken_0x12ff68 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF68u;
            // 0x12ff6c: 0x240ffe3f  addiu       $t7, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff68) {
            ctx->pc = 0x12FDD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fdd8;
        }
    }
    ctx->pc = 0x12FF70u;
label_12ff70:
    // 0x12ff70: 0x1000ff8d  b           . + 4 + (-0x73 << 2)
label_12ff74:
    if (ctx->pc == 0x12FF74u) {
        ctx->pc = 0x12FF74u;
            // 0x12ff74: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->pc = 0x12FF78u;
        goto label_12ff78;
    }
    ctx->pc = 0x12FF70u;
    {
        const bool branch_taken_0x12ff70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF70u;
            // 0x12ff74: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff70) {
            ctx->pc = 0x12FDA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fda8;
        }
    }
    ctx->pc = 0x12FF78u;
label_12ff78:
    // 0x12ff78: 0x2bcf000b  slti        $t7, $fp, 0xB
    ctx->pc = 0x12ff78u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)11) ? 1 : 0);
label_12ff7c:
    // 0x12ff7c: 0x15e0ff96  bnez        $t7, . + 4 + (-0x6A << 2)
label_12ff80:
    if (ctx->pc == 0x12FF80u) {
        ctx->pc = 0x12FF80u;
            // 0x12ff80: 0x240ffe3f  addiu       $t7, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->pc = 0x12FF84u;
        goto label_12ff84;
    }
    ctx->pc = 0x12FF7Cu;
    {
        const bool branch_taken_0x12ff7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF7Cu;
            // 0x12ff80: 0x240ffe3f  addiu       $t7, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff7c) {
            ctx->pc = 0x12FDD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fdd8;
        }
    }
    ctx->pc = 0x12FF84u;
label_12ff84:
    // 0x12ff84: 0x1000ff88  b           . + 4 + (-0x78 << 2)
label_12ff88:
    if (ctx->pc == 0x12FF88u) {
        ctx->pc = 0x12FF88u;
            // 0x12ff88: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->pc = 0x12FF8Cu;
        goto label_12ff8c;
    }
    ctx->pc = 0x12FF84u;
    {
        const bool branch_taken_0x12ff84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF84u;
            // 0x12ff88: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff84) {
            ctx->pc = 0x12FDA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fda8;
        }
    }
    ctx->pc = 0x12FF8Cu;
label_12ff8c:
    // 0x12ff8c: 0x0  nop
    ctx->pc = 0x12ff8cu;
    // NOP
label_12ff90:
    // 0x12ff90: 0x328f0100  andi        $t7, $s4, 0x100
    ctx->pc = 0x12ff90u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)256);
label_12ff94:
    // 0x12ff94: 0x11e0ff90  beqz        $t7, . + 4 + (-0x70 << 2)
label_12ff98:
    if (ctx->pc == 0x12FF98u) {
        ctx->pc = 0x12FF98u;
            // 0x12ff98: 0x27af0101  addiu       $t7, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->pc = 0x12FF9Cu;
        goto label_12ff9c;
    }
    ctx->pc = 0x12FF94u;
    {
        const bool branch_taken_0x12ff94 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF94u;
            // 0x12ff98: 0x27af0101  addiu       $t7, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff94) {
            ctx->pc = 0x12FDD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fdd8;
        }
    }
    ctx->pc = 0x12FF9Cu;
label_12ff9c:
    // 0x12ff9c: 0x16cfff8e  bne         $s6, $t7, . + 4 + (-0x72 << 2)
label_12ffa0:
    if (ctx->pc == 0x12FFA0u) {
        ctx->pc = 0x12FFA0u;
            // 0x12ffa0: 0x240ffeff  addiu       $t7, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->pc = 0x12FFA4u;
        goto label_12ffa4;
    }
    ctx->pc = 0x12FF9Cu;
    {
        const bool branch_taken_0x12ff9c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 15));
        ctx->pc = 0x12FFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FF9Cu;
            // 0x12ffa0: 0x240ffeff  addiu       $t7, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff9c) {
            ctx->pc = 0x12FDD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fdd8;
        }
    }
    ctx->pc = 0x12FFA4u;
label_12ffa4:
    // 0x12ffa4: 0x1000ff7f  b           . + 4 + (-0x81 << 2)
label_12ffa8:
    if (ctx->pc == 0x12FFA8u) {
        ctx->pc = 0x12FFA8u;
            // 0x12ffa8: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x12FFACu;
        goto label_12ffac;
    }
    ctx->pc = 0x12FFA4u;
    {
        const bool branch_taken_0x12ffa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FFA4u;
            // 0x12ffa8: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ffa4) {
            ctx->pc = 0x12FDA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fda4;
        }
    }
    ctx->pc = 0x12FFACu;
label_12ffac:
    // 0x12ffac: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x12ffacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_12ffb0:
    // 0x12ffb0: 0xffa00270  sd          $zero, 0x270($sp)
    ctx->pc = 0x12ffb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 0));
label_12ffb4:
    // 0x12ffb4: 0x2eee015d  sltiu       $t6, $s7, 0x15D
    ctx->pc = 0x12ffb4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_12ffb8:
    // 0x12ffb8: 0xafa00280  sw          $zero, 0x280($sp)
    ctx->pc = 0x12ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
label_12ffbc:
    // 0x12ffbc: 0x240f015c  addiu       $t7, $zero, 0x15C
    ctx->pc = 0x12ffbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_12ffc0:
    // 0x12ffc0: 0xffa00278  sd          $zero, 0x278($sp)
    ctx->pc = 0x12ffc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 0));
label_12ffc4:
    // 0x12ffc4: 0x1eeb80a  movz        $s7, $t7, $t6
    ctx->pc = 0x12ffc4u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
label_12ffc8:
    // 0x12ffc8: 0x369403c0  ori         $s4, $s4, 0x3C0
    ctx->pc = 0x12ffc8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)960);
label_12ffcc:
    // 0x12ffcc: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12ffccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_12ffd0:
    // 0x12ffd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12ffd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ffd4:
    // 0x12ffd4: 0x12e0001c  beqz        $s7, . + 4 + (0x1C << 2)
label_12ffd8:
    if (ctx->pc == 0x12FFD8u) {
        ctx->pc = 0x12FFD8u;
            // 0x12ffd8: 0x27b60100  addiu       $s6, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x12FFDCu;
        goto label_12ffdc;
    }
    ctx->pc = 0x12FFD4u;
    {
        const bool branch_taken_0x12ffd4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FFD4u;
            // 0x12ffd8: 0x27b60100  addiu       $s6, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ffd4) {
            ctx->pc = 0x130048u;
            goto label_130048;
        }
    }
    ctx->pc = 0x12FFDCu;
label_12ffdc:
    // 0x12ffdc: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x12ffdcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12ffe0:
    // 0x12ffe0: 0x91f00000  lbu         $s0, 0x0($t7)
    ctx->pc = 0x12ffe0u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_12ffe4:
    // 0x12ffe4: 0x260effd5  addiu       $t6, $s0, -0x2B
    ctx->pc = 0x12ffe4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_12ffe8:
    // 0x12ffe8: 0x2dcf003b  sltiu       $t7, $t6, 0x3B
    ctx->pc = 0x12ffe8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_12ffec:
    // 0x12ffec: 0x11e00016  beqz        $t7, . + 4 + (0x16 << 2)
label_12fff0:
    if (ctx->pc == 0x12FFF0u) {
        ctx->pc = 0x12FFF0u;
            // 0x12fff0: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->pc = 0x12FFF4u;
        goto label_12fff4;
    }
    ctx->pc = 0x12FFECu;
    {
        const bool branch_taken_0x12ffec = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FFECu;
            // 0x12fff0: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ffec) {
            ctx->pc = 0x130048u;
            goto label_130048;
        }
    }
    ctx->pc = 0x12FFF4u;
label_12fff4:
    // 0x12fff4: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x12fff4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
label_12fff8:
    // 0x12fff8: 0x25ce10c8  addiu       $t6, $t6, 0x10C8
    ctx->pc = 0x12fff8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4296));
label_12fffc:
    // 0x12fffc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12fffcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_130000:
    // 0x130000: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x130000u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_130004:
    // 0x130004: 0x1a00008  jr          $t5
label_130008:
    if (ctx->pc == 0x130008u) {
        ctx->pc = 0x13000Cu;
        goto label_13000c;
    }
    ctx->pc = 0x130004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13000Cu: goto label_13000c;
            case 0x130048u: goto label_130048;
            case 0x1301F0u: goto label_1301f0;
            case 0x130208u: goto label_130208;
            case 0x13021Cu: goto label_13021c;
            case 0x130230u: goto label_130230;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13000Cu;
label_13000c:
    // 0x13000c: 0x328f0080  andi        $t7, $s4, 0x80
    ctx->pc = 0x13000cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
label_130010:
    // 0x130010: 0x11e00077  beqz        $t7, . + 4 + (0x77 << 2)
label_130014:
    if (ctx->pc == 0x130014u) {
        ctx->pc = 0x130014u;
            // 0x130014: 0x240fffbf  addiu       $t7, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->pc = 0x130018u;
        goto label_130018;
    }
    ctx->pc = 0x130010u;
    {
        const bool branch_taken_0x130010 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x130014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130010u;
            // 0x130014: 0x240fffbf  addiu       $t7, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130010) {
            ctx->pc = 0x1301F0u;
            goto label_1301f0;
        }
    }
    ctx->pc = 0x130018u;
label_130018:
    // 0x130018: 0x66520001  daddiu      $s2, $s2, 0x1
    ctx->pc = 0x130018u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)1);
label_13001c:
    // 0x13001c: 0x28fa024  and         $s4, $s4, $t7
    ctx->pc = 0x13001cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
label_130020:
    // 0x130020: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x130020u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_130024:
    // 0x130024: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x130024u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_130028:
    // 0x130028: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x130028u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_13002c:
    // 0x13002c: 0x19e00069  blez        $t7, . + 4 + (0x69 << 2)
label_130030:
    if (ctx->pc == 0x130030u) {
        ctx->pc = 0x130030u;
            // 0x130030: 0xae2f0004  sw          $t7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
        ctx->pc = 0x130034u;
        goto label_130034;
    }
    ctx->pc = 0x13002Cu;
    {
        const bool branch_taken_0x13002c = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x130030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13002Cu;
            // 0x130030: 0xae2f0004  sw          $t7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13002c) {
            ctx->pc = 0x1301D4u;
            goto label_1301d4;
        }
    }
    ctx->pc = 0x130034u;
label_130034:
    // 0x130034: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x130034u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_130038:
    // 0x130038: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x130038u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_13003c:
    // 0x13003c: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x13003cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_130040:
    // 0x130040: 0x56e0ffe7  bnel        $s7, $zero, . + 4 + (-0x19 << 2)
label_130044:
    if (ctx->pc == 0x130044u) {
        ctx->pc = 0x130044u;
            // 0x130044: 0x8e2f0000  lw          $t7, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x130048u;
        goto label_130048;
    }
    ctx->pc = 0x130040u;
    {
        const bool branch_taken_0x130040 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x130040) {
            ctx->pc = 0x130044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130040u;
            // 0x130044: 0x8e2f0000  lw          $t7, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12FFE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ffe0;
        }
    }
    ctx->pc = 0x130048u;
label_130048:
    // 0x130048: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_13004c:
    if (ctx->pc == 0x13004Cu) {
        ctx->pc = 0x13004Cu;
            // 0x13004c: 0x240fff7f  addiu       $t7, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->pc = 0x130050u;
        goto label_130050;
    }
    ctx->pc = 0x130048u;
    {
        const bool branch_taken_0x130048 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13004Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130048u;
            // 0x13004c: 0x240fff7f  addiu       $t7, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130048) {
            ctx->pc = 0x130054u;
            goto label_130054;
        }
    }
    ctx->pc = 0x130050u;
label_130050:
    // 0x130050: 0x28fa024  and         $s4, $s4, $t7
    ctx->pc = 0x130050u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
label_130054:
    // 0x130054: 0x328f0080  andi        $t7, $s4, 0x80
    ctx->pc = 0x130054u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
label_130058:
    // 0x130058: 0x11e0001d  beqz        $t7, . + 4 + (0x1D << 2)
label_13005c:
    if (ctx->pc == 0x13005Cu) {
        ctx->pc = 0x13005Cu;
            // 0x13005c: 0x328f0200  andi        $t7, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
        ctx->pc = 0x130060u;
        goto label_130060;
    }
    ctx->pc = 0x130058u;
    {
        const bool branch_taken_0x130058 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x13005Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130058u;
            // 0x13005c: 0x328f0200  andi        $t7, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130058) {
            ctx->pc = 0x1300D0u;
            goto label_1300d0;
        }
    }
    ctx->pc = 0x130060u;
label_130060:
    // 0x130060: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
label_130064:
    if (ctx->pc == 0x130064u) {
        ctx->pc = 0x130064u;
            // 0x130064: 0x27ad0100  addiu       $t5, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x130068u;
        goto label_130068;
    }
    ctx->pc = 0x130060u;
    {
        const bool branch_taken_0x130060 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x130064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130060u;
            // 0x130064: 0x27ad0100  addiu       $t5, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130060) {
            ctx->pc = 0x130090u;
            goto label_130090;
        }
    }
    ctx->pc = 0x130068u;
label_130068:
    // 0x130068: 0x1b6782b  sltu        $t7, $t5, $s6
    ctx->pc = 0x130068u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_13006c:
    // 0x13006c: 0x11e0fe18  beqz        $t7, . + 4 + (-0x1E8 << 2)
label_130070:
    if (ctx->pc == 0x130070u) {
        ctx->pc = 0x130070u;
            // 0x130070: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->pc = 0x130074u;
        goto label_130074;
    }
    ctx->pc = 0x13006Cu;
    {
        const bool branch_taken_0x13006c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x130070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13006Cu;
            // 0x130070: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13006c) {
            ctx->pc = 0x12F8D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f8d0;
        }
    }
    ctx->pc = 0x130074u;
label_130074:
    // 0x130074: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x130074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_130078:
    // 0x130078: 0xc04b6f0  jal         func_12DBC0
label_13007c:
    if (ctx->pc == 0x13007Cu) {
        ctx->pc = 0x13007Cu;
            // 0x13007c: 0x82c40000  lb          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x130080u;
        goto label_130080;
    }
    ctx->pc = 0x130078u;
    SET_GPR_U32(ctx, 31, 0x130080u);
    ctx->pc = 0x13007Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130078u;
            // 0x13007c: 0x82c40000  lb          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBC0u;
    if (runtime->hasFunction(0x12DBC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130080u; }
        if (ctx->pc != 0x130080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DBC0_0x12dbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130080u; }
        if (ctx->pc != 0x130080u) { return; }
    }
    ctx->pc = 0x130080u;
label_130080:
    // 0x130080: 0x27ae0100  addiu       $t6, $sp, 0x100
    ctx->pc = 0x130080u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_130084:
    // 0x130084: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_130088:
    if (ctx->pc == 0x130088u) {
        ctx->pc = 0x130088u;
            // 0x130088: 0x1d6782b  sltu        $t7, $t6, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->pc = 0x13008Cu;
        goto label_13008c;
    }
    ctx->pc = 0x130084u;
    {
        const bool branch_taken_0x130084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130084u;
            // 0x130088: 0x1d6782b  sltu        $t7, $t6, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130084) {
            ctx->pc = 0x13006Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13006c;
        }
    }
    ctx->pc = 0x13008Cu;
label_13008c:
    // 0x13008c: 0x0  nop
    ctx->pc = 0x13008cu;
    // NOP
label_130090:
    // 0x130090: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x130090u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_130094:
    // 0x130094: 0x82d00000  lb          $s0, 0x0($s6)
    ctx->pc = 0x130094u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_130098:
    // 0x130098: 0x240f0065  addiu       $t7, $zero, 0x65
    ctx->pc = 0x130098u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_13009c:
    // 0x13009c: 0x120f0009  beq         $s0, $t7, . + 4 + (0x9 << 2)
label_1300a0:
    if (ctx->pc == 0x1300A0u) {
        ctx->pc = 0x1300A0u;
            // 0x1300a0: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x1300A4u;
        goto label_1300a4;
    }
    ctx->pc = 0x13009Cu;
    {
        const bool branch_taken_0x13009c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x1300A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13009Cu;
            // 0x1300a0: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13009c) {
            ctx->pc = 0x1300C4u;
            goto label_1300c4;
        }
    }
    ctx->pc = 0x1300A4u;
label_1300a4:
    // 0x1300a4: 0x240f0045  addiu       $t7, $zero, 0x45
    ctx->pc = 0x1300a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_1300a8:
    // 0x1300a8: 0x120f0006  beq         $s0, $t7, . + 4 + (0x6 << 2)
label_1300ac:
    if (ctx->pc == 0x1300ACu) {
        ctx->pc = 0x1300ACu;
            // 0x1300ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1300B0u;
        goto label_1300b0;
    }
    ctx->pc = 0x1300A8u;
    {
        const bool branch_taken_0x1300a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x1300ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1300A8u;
            // 0x1300ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300a8) {
            ctx->pc = 0x1300C4u;
            goto label_1300c4;
        }
    }
    ctx->pc = 0x1300B0u;
label_1300b0:
    // 0x1300b0: 0xc04b6f0  jal         func_12DBC0
label_1300b4:
    if (ctx->pc == 0x1300B4u) {
        ctx->pc = 0x1300B4u;
            // 0x1300b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1300B8u;
        goto label_1300b8;
    }
    ctx->pc = 0x1300B0u;
    SET_GPR_U32(ctx, 31, 0x1300B8u);
    ctx->pc = 0x1300B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1300B0u;
            // 0x1300b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBC0u;
    if (runtime->hasFunction(0x12DBC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1300B8u; }
        if (ctx->pc != 0x1300B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DBC0_0x12dbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1300B8u; }
        if (ctx->pc != 0x1300B8u) { return; }
    }
    ctx->pc = 0x1300B8u;
label_1300b8:
    // 0x1300b8: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1300b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_1300bc:
    // 0x1300bc: 0x82d00000  lb          $s0, 0x0($s6)
    ctx->pc = 0x1300bcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_1300c0:
    // 0x1300c0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1300c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_1300c4:
    // 0x1300c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1300c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1300c8:
    // 0x1300c8: 0xc04b6f0  jal         func_12DBC0
label_1300cc:
    if (ctx->pc == 0x1300CCu) {
        ctx->pc = 0x1300CCu;
            // 0x1300cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1300D0u;
        goto label_1300d0;
    }
    ctx->pc = 0x1300C8u;
    SET_GPR_U32(ctx, 31, 0x1300D0u);
    ctx->pc = 0x1300CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1300C8u;
            // 0x1300cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBC0u;
    if (runtime->hasFunction(0x12DBC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1300D0u; }
        if (ctx->pc != 0x1300D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DBC0_0x12dbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1300D0u; }
        if (ctx->pc != 0x1300D0u) { return; }
    }
    ctx->pc = 0x1300D0u;
label_1300d0:
    // 0x1300d0: 0x328f0008  andi        $t7, $s4, 0x8
    ctx->pc = 0x1300d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_1300d4:
    // 0x1300d4: 0x55e0fdb4  bnel        $t7, $zero, . + 4 + (-0x24C << 2)
label_1300d8:
    if (ctx->pc == 0x1300D8u) {
        ctx->pc = 0x1300D8u;
            // 0x1300d8: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1300DCu;
        goto label_1300dc;
    }
    ctx->pc = 0x1300D4u;
    {
        const bool branch_taken_0x1300d4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1300d4) {
            ctx->pc = 0x1300D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1300D4u;
            // 0x1300d8: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F7A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f7a8;
        }
    }
    ctx->pc = 0x1300DCu;
label_1300dc:
    // 0x1300dc: 0x328e0300  andi        $t6, $s4, 0x300
    ctx->pc = 0x1300dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)768);
label_1300e0:
    // 0x1300e0: 0x240f0200  addiu       $t7, $zero, 0x200
    ctx->pc = 0x1300e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1300e4:
    // 0x1300e4: 0x15cf0030  bne         $t6, $t7, . + 4 + (0x30 << 2)
label_1300e8:
    if (ctx->pc == 0x1300E8u) {
        ctx->pc = 0x1300E8u;
            // 0x1300e8: 0xa2c00000  sb          $zero, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1300ECu;
        goto label_1300ec;
    }
    ctx->pc = 0x1300E4u;
    {
        const bool branch_taken_0x1300e4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1300E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1300E4u;
            // 0x1300e8: 0xa2c00000  sb          $zero, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300e4) {
            ctx->pc = 0x1301A8u;
            goto label_1301a8;
        }
    }
    ctx->pc = 0x1300ECu;
label_1300ec:
    // 0x1300ec: 0xdfaf0270  ld          $t7, 0x270($sp)
    ctx->pc = 0x1300ecu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1300f0:
    // 0x1300f0: 0xafb60280  sw          $s6, 0x280($sp)
    ctx->pc = 0x1300f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 22));
label_1300f4:
    // 0x1300f4: 0x24f902f  dsubu       $s2, $s2, $t7
    ctx->pc = 0x1300f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 15));
label_1300f8:
    // 0x1300f8: 0xffb20278  sd          $s2, 0x278($sp)
    ctx->pc = 0x1300f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 18));
label_1300fc:
    // 0x1300fc: 0x12302f  dsubu       $a2, $zero, $s2
    ctx->pc = 0x1300fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 18));
label_130100:
    // 0x130100: 0xdfad0278  ld          $t5, 0x278($sp)
    ctx->pc = 0x130100u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_130104:
    // 0x130104: 0x11a0000b  beqz        $t5, . + 4 + (0xB << 2)
label_130108:
    if (ctx->pc == 0x130108u) {
        ctx->pc = 0x130108u;
            // 0x130108: 0x8fae0280  lw          $t6, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->pc = 0x13010Cu;
        goto label_13010c;
    }
    ctx->pc = 0x130104u;
    {
        const bool branch_taken_0x130104 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x130108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130104u;
            // 0x130108: 0x8fae0280  lw          $t6, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130104) {
            ctx->pc = 0x130134u;
            goto label_130134;
        }
    }
    ctx->pc = 0x13010Cu;
label_13010c:
    // 0x13010c: 0x27af0249  addiu       $t7, $sp, 0x249
    ctx->pc = 0x13010cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 585));
label_130110:
    // 0x130110: 0x8fad0280  lw          $t5, 0x280($sp)
    ctx->pc = 0x130110u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_130114:
    // 0x130114: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x130114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_130118:
    // 0x130118: 0x1cf782b  sltu        $t7, $t6, $t7
    ctx->pc = 0x130118u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
label_13011c:
    // 0x13011c: 0x24a50d90  addiu       $a1, $a1, 0xD90
    ctx->pc = 0x13011cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3472));
label_130120:
    // 0x130120: 0x27ae0248  addiu       $t6, $sp, 0x248
    ctx->pc = 0x130120u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
label_130124:
    // 0x130124: 0x1cf680a  movz        $t5, $t6, $t7
    ctx->pc = 0x130124u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 14));
label_130128:
    // 0x130128: 0xafad0280  sw          $t5, 0x280($sp)
    ctx->pc = 0x130128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 13));
label_13012c:
    // 0x13012c: 0xc04ae62  jal         func_12B988
label_130130:
    if (ctx->pc == 0x130130u) {
        ctx->pc = 0x130130u;
            // 0x130130: 0x8fa40280  lw          $a0, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->pc = 0x130134u;
        goto label_130134;
    }
    ctx->pc = 0x13012Cu;
    SET_GPR_U32(ctx, 31, 0x130134u);
    ctx->pc = 0x130130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13012Cu;
            // 0x130130: 0x8fa40280  lw          $a0, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130134u; }
        if (ctx->pc != 0x130134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B988_0x12b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130134u; }
        if (ctx->pc != 0x130134u) { return; }
    }
    ctx->pc = 0x130134u;
label_130134:
    // 0x130134: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x130134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_130138:
    // 0x130138: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x130138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_13013c:
    // 0x13013c: 0xc04b1dc  jal         func_12C770
label_130140:
    if (ctx->pc == 0x130140u) {
        ctx->pc = 0x130140u;
            // 0x130140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x130144u;
        goto label_130144;
    }
    ctx->pc = 0x13013Cu;
    SET_GPR_U32(ctx, 31, 0x130144u);
    ctx->pc = 0x130140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13013Cu;
            // 0x130140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C770u;
    if (runtime->hasFunction(0x12C770u)) {
        auto targetFn = runtime->lookupFunction(0x12C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130144u; }
        if (ctx->pc != 0x130144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C770_0x12c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130144u; }
        if (ctx->pc != 0x130144u) { return; }
    }
    ctx->pc = 0x130144u;
label_130144:
    // 0x130144: 0x328f0001  andi        $t7, $s4, 0x1
    ctx->pc = 0x130144u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_130148:
    // 0x130148: 0x11e00009  beqz        $t7, . + 4 + (0x9 << 2)
label_13014c:
    if (ctx->pc == 0x13014Cu) {
        ctx->pc = 0x13014Cu;
            // 0x13014c: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->pc = 0x130150u;
        goto label_130150;
    }
    ctx->pc = 0x130148u;
    {
        const bool branch_taken_0x130148 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x13014Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130148u;
            // 0x13014c: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130148) {
            ctx->pc = 0x130170u;
            goto label_130170;
        }
    }
    ctx->pc = 0x130150u;
label_130150:
    // 0x130150: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x130150u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_130154:
    // 0x130154: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x130154u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_130158:
    // 0x130158: 0xafaf0264  sw          $t7, 0x264($sp)
    ctx->pc = 0x130158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 15));
label_13015c:
    // 0x13015c: 0xfdc20000  sd          $v0, 0x0($t6)
    ctx->pc = 0x13015cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 2));
label_130160:
    // 0x130160: 0x8faf0268  lw          $t7, 0x268($sp)
    ctx->pc = 0x130160u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_130164:
    // 0x130164: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x130164u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_130168:
    // 0x130168: 0x1000fd8e  b           . + 4 + (-0x272 << 2)
label_13016c:
    if (ctx->pc == 0x13016Cu) {
        ctx->pc = 0x13016Cu;
            // 0x13016c: 0xafaf0268  sw          $t7, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 15));
        ctx->pc = 0x130170u;
        goto label_130170;
    }
    ctx->pc = 0x130168u;
    {
        const bool branch_taken_0x130168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13016Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130168u;
            // 0x13016c: 0xafaf0268  sw          $t7, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130168) {
            ctx->pc = 0x12F7A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f7a4;
        }
    }
    ctx->pc = 0x130170u;
label_130170:
    // 0x130170: 0x328f0002  andi        $t7, $s4, 0x2
    ctx->pc = 0x130170u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_130174:
    // 0x130174: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
label_130178:
    if (ctx->pc == 0x130178u) {
        ctx->pc = 0x130178u;
            // 0x130178: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->pc = 0x13017Cu;
        goto label_13017c;
    }
    ctx->pc = 0x130174u;
    {
        const bool branch_taken_0x130174 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x130178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130174u;
            // 0x130178: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130174) {
            ctx->pc = 0x13018Cu;
            goto label_13018c;
        }
    }
    ctx->pc = 0x13017Cu;
label_13017c:
    // 0x13017c: 0x25ed0008  addiu       $t5, $t7, 0x8
    ctx->pc = 0x13017cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_130180:
    // 0x130180: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x130180u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_130184:
    // 0x130184: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_130188:
    if (ctx->pc == 0x130188u) {
        ctx->pc = 0x130188u;
            // 0x130188: 0xafad0264  sw          $t5, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 13));
        ctx->pc = 0x13018Cu;
        goto label_13018c;
    }
    ctx->pc = 0x130184u;
    {
        const bool branch_taken_0x130184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130184u;
            // 0x130188: 0xafad0264  sw          $t5, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130184) {
            ctx->pc = 0x13015Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13015c;
        }
    }
    ctx->pc = 0x13018Cu;
label_13018c:
    // 0x13018c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13018cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_130190:
    // 0x130190: 0x25ee0008  addiu       $t6, $t7, 0x8
    ctx->pc = 0x130190u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_130194:
    // 0x130194: 0x8df00000  lw          $s0, 0x0($t7)
    ctx->pc = 0x130194u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_130198:
    // 0x130198: 0xc0497dc  jal         func_125F70
label_13019c:
    if (ctx->pc == 0x13019Cu) {
        ctx->pc = 0x13019Cu;
            // 0x13019c: 0xafae0264  sw          $t6, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 14));
        ctx->pc = 0x1301A0u;
        goto label_1301a0;
    }
    ctx->pc = 0x130198u;
    SET_GPR_U32(ctx, 31, 0x1301A0u);
    ctx->pc = 0x13019Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130198u;
            // 0x13019c: 0xafae0264  sw          $t6, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1301A0u; }
        if (ctx->pc != 0x1301A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1301A0u; }
        if (ctx->pc != 0x1301A0u) { return; }
    }
    ctx->pc = 0x1301A0u;
label_1301a0:
    // 0x1301a0: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_1301a4:
    if (ctx->pc == 0x1301A4u) {
        ctx->pc = 0x1301A4u;
            // 0x1301a4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x1301A8u;
        goto label_1301a8;
    }
    ctx->pc = 0x1301A0u;
    {
        const bool branch_taken_0x1301a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1301A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1301A0u;
            // 0x1301a4: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301a0) {
            ctx->pc = 0x130160u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130160;
        }
    }
    ctx->pc = 0x1301A8u;
label_1301a8:
    // 0x1301a8: 0xdfad0278  ld          $t5, 0x278($sp)
    ctx->pc = 0x1301a8u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_1301ac:
    // 0x1301ac: 0x11a0ffe1  beqz        $t5, . + 4 + (-0x1F << 2)
label_1301b0:
    if (ctx->pc == 0x1301B0u) {
        ctx->pc = 0x1301B0u;
            // 0x1301b0: 0x8fae0280  lw          $t6, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->pc = 0x1301B4u;
        goto label_1301b4;
    }
    ctx->pc = 0x1301ACu;
    {
        const bool branch_taken_0x1301ac = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1301B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1301ACu;
            // 0x1301b0: 0x8fae0280  lw          $t6, 0x280($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301ac) {
            ctx->pc = 0x130134u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130134;
        }
    }
    ctx->pc = 0x1301B4u;
label_1301b4:
    // 0x1301b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1301b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1301b8:
    // 0x1301b8: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x1301b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_1301bc:
    // 0x1301bc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1301bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1301c0:
    // 0x1301c0: 0xc04b588  jal         func_12D620
label_1301c4:
    if (ctx->pc == 0x1301C4u) {
        ctx->pc = 0x1301C4u;
            // 0x1301c4: 0x25c50001  addiu       $a1, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->pc = 0x1301C8u;
        goto label_1301c8;
    }
    ctx->pc = 0x1301C0u;
    SET_GPR_U32(ctx, 31, 0x1301C8u);
    ctx->pc = 0x1301C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1301C0u;
            // 0x1301c4: 0x25c50001  addiu       $a1, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D620u;
    if (runtime->hasFunction(0x12D620u)) {
        auto targetFn = runtime->lookupFunction(0x12D620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1301C8u; }
        if (ctx->pc != 0x1301C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012D620_0x12d620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1301C8u; }
        if (ctx->pc != 0x1301C8u) { return; }
    }
    ctx->pc = 0x1301C8u;
label_1301c8:
    // 0x1301c8: 0xdfaf0278  ld          $t7, 0x278($sp)
    ctx->pc = 0x1301c8u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_1301cc:
    // 0x1301cc: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
label_1301d0:
    if (ctx->pc == 0x1301D0u) {
        ctx->pc = 0x1301D0u;
            // 0x1301d0: 0x4f302f  dsubu       $a2, $v0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) - GPR_U64(ctx, 15));
        ctx->pc = 0x1301D4u;
        goto label_1301d4;
    }
    ctx->pc = 0x1301CCu;
    {
        const bool branch_taken_0x1301cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1301D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1301CCu;
            // 0x1301d0: 0x4f302f  dsubu       $a2, $v0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) - GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301cc) {
            ctx->pc = 0x130100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130100;
        }
    }
    ctx->pc = 0x1301D4u;
label_1301d4:
    // 0x1301d4: 0xc04ad04  jal         func_12B410
label_1301d8:
    if (ctx->pc == 0x1301D8u) {
        ctx->pc = 0x1301D8u;
            // 0x1301d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1301DCu;
        goto label_1301dc;
    }
    ctx->pc = 0x1301D4u;
    SET_GPR_U32(ctx, 31, 0x1301DCu);
    ctx->pc = 0x1301D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1301D4u;
            // 0x1301d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B410u;
    if (runtime->hasFunction(0x12B410u)) {
        auto targetFn = runtime->lookupFunction(0x12B410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1301DCu; }
        if (ctx->pc != 0x1301DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B410_0x12b410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1301DCu; }
        if (ctx->pc != 0x1301DCu) { return; }
    }
    ctx->pc = 0x1301DCu;
label_1301dc:
    // 0x1301dc: 0x1040ff98  beqz        $v0, . + 4 + (-0x68 << 2)
label_1301e0:
    if (ctx->pc == 0x1301E0u) {
        ctx->pc = 0x1301E4u;
        goto label_1301e4;
    }
    ctx->pc = 0x1301DCu;
    {
        const bool branch_taken_0x1301dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1301dc) {
            ctx->pc = 0x130040u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130040;
        }
    }
    ctx->pc = 0x1301E4u;
label_1301e4:
    // 0x1301e4: 0x1000ff98  b           . + 4 + (-0x68 << 2)
label_1301e8:
    if (ctx->pc == 0x1301E8u) {
        ctx->pc = 0x1301ECu;
        goto label_1301ec;
    }
    ctx->pc = 0x1301E4u;
    {
        const bool branch_taken_0x1301e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1301e4) {
            ctx->pc = 0x130048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130048;
        }
    }
    ctx->pc = 0x1301ECu;
label_1301ec:
    // 0x1301ec: 0x0  nop
    ctx->pc = 0x1301ecu;
    // NOP
label_1301f0:
    // 0x1301f0: 0x240fff3f  addiu       $t7, $zero, -0xC1
    ctx->pc = 0x1301f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_1301f4:
    // 0x1301f4: 0x28fa024  and         $s4, $s4, $t7
    ctx->pc = 0x1301f4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
label_1301f8:
    // 0x1301f8: 0xa2d00000  sb          $s0, 0x0($s6)
    ctx->pc = 0x1301f8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 16));
label_1301fc:
    // 0x1301fc: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x1301fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_130200:
    // 0x130200: 0x1000ff87  b           . + 4 + (-0x79 << 2)
label_130204:
    if (ctx->pc == 0x130204u) {
        ctx->pc = 0x130204u;
            // 0x130204: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x130208u;
        goto label_130208;
    }
    ctx->pc = 0x130200u;
    {
        const bool branch_taken_0x130200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130200u;
            // 0x130204: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130200) {
            ctx->pc = 0x130020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130020;
        }
    }
    ctx->pc = 0x130208u;
label_130208:
    // 0x130208: 0x328f0040  andi        $t7, $s4, 0x40
    ctx->pc = 0x130208u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
label_13020c:
    // 0x13020c: 0x11e0ff8e  beqz        $t7, . + 4 + (-0x72 << 2)
label_130210:
    if (ctx->pc == 0x130210u) {
        ctx->pc = 0x130210u;
            // 0x130210: 0x240fffbf  addiu       $t7, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->pc = 0x130214u;
        goto label_130214;
    }
    ctx->pc = 0x13020Cu;
    {
        const bool branch_taken_0x13020c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x130210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13020Cu;
            // 0x130210: 0x240fffbf  addiu       $t7, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13020c) {
            ctx->pc = 0x130048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130048;
        }
    }
    ctx->pc = 0x130214u;
label_130214:
    // 0x130214: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_130218:
    if (ctx->pc == 0x130218u) {
        ctx->pc = 0x130218u;
            // 0x130218: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->pc = 0x13021Cu;
        goto label_13021c;
    }
    ctx->pc = 0x130214u;
    {
        const bool branch_taken_0x130214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130214u;
            // 0x130218: 0x28fa024  and         $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130214) {
            ctx->pc = 0x1301F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1301f8;
        }
    }
    ctx->pc = 0x13021Cu;
label_13021c:
    // 0x13021c: 0x328f0100  andi        $t7, $s4, 0x100
    ctx->pc = 0x13021cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)256);
label_130220:
    // 0x130220: 0x11e0ff89  beqz        $t7, . + 4 + (-0x77 << 2)
label_130224:
    if (ctx->pc == 0x130224u) {
        ctx->pc = 0x130224u;
            // 0x130224: 0x240ffebf  addiu       $t7, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->pc = 0x130228u;
        goto label_130228;
    }
    ctx->pc = 0x130220u;
    {
        const bool branch_taken_0x130220 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x130224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130220u;
            // 0x130224: 0x240ffebf  addiu       $t7, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130220) {
            ctx->pc = 0x130048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130048;
        }
    }
    ctx->pc = 0x130228u;
label_130228:
    // 0x130228: 0x1000fff2  b           . + 4 + (-0xE << 2)
label_13022c:
    if (ctx->pc == 0x13022Cu) {
        ctx->pc = 0x13022Cu;
            // 0x13022c: 0xffb20270  sd          $s2, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
        ctx->pc = 0x130230u;
        goto label_130230;
    }
    ctx->pc = 0x130228u;
    {
        const bool branch_taken_0x130228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13022Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130228u;
            // 0x13022c: 0xffb20270  sd          $s2, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130228) {
            ctx->pc = 0x1301F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1301f4;
        }
    }
    ctx->pc = 0x130230u;
label_130230:
    // 0x130230: 0x328e0280  andi        $t6, $s4, 0x280
    ctx->pc = 0x130230u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)640);
label_130234:
    // 0x130234: 0x240f0200  addiu       $t7, $zero, 0x200
    ctx->pc = 0x130234u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_130238:
    // 0x130238: 0x11cf0005  beq         $t6, $t7, . + 4 + (0x5 << 2)
label_13023c:
    if (ctx->pc == 0x13023Cu) {
        ctx->pc = 0x13023Cu;
            // 0x13023c: 0x328f0200  andi        $t7, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
        ctx->pc = 0x130240u;
        goto label_130240;
    }
    ctx->pc = 0x130238u;
    {
        const bool branch_taken_0x130238 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x13023Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130238u;
            // 0x13023c: 0x328f0200  andi        $t7, $s4, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130238) {
            ctx->pc = 0x130250u;
            goto label_130250;
        }
    }
    ctx->pc = 0x130240u;
label_130240:
    // 0x130240: 0x11e0ff81  beqz        $t7, . + 4 + (-0x7F << 2)
label_130244:
    if (ctx->pc == 0x130244u) {
        ctx->pc = 0x130248u;
        goto label_130248;
    }
    ctx->pc = 0x130240u;
    {
        const bool branch_taken_0x130240 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x130240) {
            ctx->pc = 0x130048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130048;
        }
    }
    ctx->pc = 0x130248u;
label_130248:
    // 0x130248: 0x1240ff83  beqz        $s2, . + 4 + (-0x7D << 2)
label_13024c:
    if (ctx->pc == 0x13024Cu) {
        ctx->pc = 0x13024Cu;
            // 0x13024c: 0x328f0080  andi        $t7, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x130250u;
        goto label_130250;
    }
    ctx->pc = 0x130248u;
    {
        const bool branch_taken_0x130248 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13024Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130248u;
            // 0x13024c: 0x328f0080  andi        $t7, $s4, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130248) {
            ctx->pc = 0x130058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130058;
        }
    }
    ctx->pc = 0x130250u;
label_130250:
    // 0x130250: 0x328f0100  andi        $t7, $s4, 0x100
    ctx->pc = 0x130250u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)256);
label_130254:
    // 0x130254: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
label_130258:
    if (ctx->pc == 0x130258u) {
        ctx->pc = 0x130258u;
            // 0x130258: 0x240ffcff  addiu       $t7, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->pc = 0x13025Cu;
        goto label_13025c;
    }
    ctx->pc = 0x130254u;
    {
        const bool branch_taken_0x130254 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x130258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130254u;
            // 0x130258: 0x240ffcff  addiu       $t7, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130254) {
            ctx->pc = 0x13026Cu;
            goto label_13026c;
        }
    }
    ctx->pc = 0x13025Cu;
label_13025c:
    // 0x13025c: 0xdfae0270  ld          $t6, 0x270($sp)
    ctx->pc = 0x13025cu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_130260:
    // 0x130260: 0xafb60280  sw          $s6, 0x280($sp)
    ctx->pc = 0x130260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 22));
label_130264:
    // 0x130264: 0x24e902f  dsubu       $s2, $s2, $t6
    ctx->pc = 0x130264u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 14));
label_130268:
    // 0x130268: 0xffb20278  sd          $s2, 0x278($sp)
    ctx->pc = 0x130268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 18));
label_13026c:
    // 0x13026c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13026cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130270:
    // 0x130270: 0x28f7824  and         $t7, $s4, $t7
    ctx->pc = 0x130270u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
label_130274:
    // 0x130274: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
label_130278:
    if (ctx->pc == 0x130278u) {
        ctx->pc = 0x130278u;
            // 0x130278: 0x35f400c0  ori         $s4, $t7, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)192);
        ctx->pc = 0x13027Cu;
        goto label_13027c;
    }
    ctx->pc = 0x130274u;
    {
        const bool branch_taken_0x130274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130274u;
            // 0x130278: 0x35f400c0  ori         $s4, $t7, 0xC0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130274) {
            ctx->pc = 0x1301F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1301f8;
        }
    }
    ctx->pc = 0x13027Cu;
label_13027c:
    // 0x13027c: 0x0  nop
    ctx->pc = 0x13027cu;
    // NOP
label_130280:
    // 0x130280: 0xc04ad04  jal         func_12B410
label_130284:
    if (ctx->pc == 0x130284u) {
        ctx->pc = 0x130284u;
            // 0x130284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x130288u;
        goto label_130288;
    }
    ctx->pc = 0x130280u;
    SET_GPR_U32(ctx, 31, 0x130288u);
    ctx->pc = 0x130284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130280u;
            // 0x130284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B410u;
    if (runtime->hasFunction(0x12B410u)) {
        auto targetFn = runtime->lookupFunction(0x12B410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130288u; }
        if (ctx->pc != 0x130288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B410_0x12b410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130288u; }
        if (ctx->pc != 0x130288u) { return; }
    }
    ctx->pc = 0x130288u;
label_130288:
    // 0x130288: 0x5440fd9f  bnel        $v0, $zero, . + 4 + (-0x261 << 2)
label_13028c:
    if (ctx->pc == 0x13028Cu) {
        ctx->pc = 0x13028Cu;
            // 0x13028c: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->pc = 0x130290u;
        goto label_130290;
    }
    ctx->pc = 0x130288u;
    {
        const bool branch_taken_0x130288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130288) {
            ctx->pc = 0x13028Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130288u;
            // 0x13028c: 0x8fad0268  lw          $t5, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f908;
        }
    }
    ctx->pc = 0x130290u;
label_130290:
    // 0x130290: 0x1000fdca  b           . + 4 + (-0x236 << 2)
label_130294:
    if (ctx->pc == 0x130294u) {
        ctx->pc = 0x130294u;
            // 0x130294: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x130298u;
        goto label_130298;
    }
    ctx->pc = 0x130290u;
    {
        const bool branch_taken_0x130290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130290u;
            // 0x130294: 0x8e2d0000  lw          $t5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130290) {
            ctx->pc = 0x12F9BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f9bc;
        }
    }
    ctx->pc = 0x130298u;
label_130298:
    // 0x130298: 0x1000fd6a  b           . + 4 + (-0x296 << 2)
label_13029c:
    if (ctx->pc == 0x13029Cu) {
        ctx->pc = 0x13029Cu;
            // 0x13029c: 0x36940002  ori         $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)2);
        ctx->pc = 0x1302A0u;
        goto label_1302a0;
    }
    ctx->pc = 0x130298u;
    {
        const bool branch_taken_0x130298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13029Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130298u;
            // 0x13029c: 0x36940002  ori         $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130298) {
            ctx->pc = 0x12F844u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f844;
        }
    }
    ctx->pc = 0x1302A0u;
label_1302a0:
    // 0x1302a0: 0x36940001  ori         $s4, $s4, 0x1
    ctx->pc = 0x1302a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
label_1302a4:
    // 0x1302a4: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x1302a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
label_1302a8:
    // 0x1302a8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1302a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1302ac:
    // 0x1302ac: 0x25efd890  addiu       $t7, $t7, -0x2770
    ctx->pc = 0x1302acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294957200));
label_1302b0:
    // 0x1302b0: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x1302b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1302b4:
    // 0x1302b4: 0x1000fda6  b           . + 4 + (-0x25A << 2)
label_1302b8:
    if (ctx->pc == 0x1302B8u) {
        ctx->pc = 0x1302B8u;
            // 0x1302b8: 0xafaf026c  sw          $t7, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 15));
        ctx->pc = 0x1302BCu;
        goto label_1302bc;
    }
    ctx->pc = 0x1302B4u;
    {
        const bool branch_taken_0x1302b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1302B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1302B4u;
            // 0x1302b8: 0xafaf026c  sw          $t7, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1302b4) {
            ctx->pc = 0x12F950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f950;
        }
    }
    ctx->pc = 0x1302BCu;
label_1302bc:
    // 0x1302bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1302bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1302c0:
    // 0x1302c0: 0xc04c0fa  jal         func_1303E8
label_1302c4:
    if (ctx->pc == 0x1302C4u) {
        ctx->pc = 0x1302C4u;
            // 0x1302c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1302C8u;
        goto label_1302c8;
    }
    ctx->pc = 0x1302C0u;
    SET_GPR_U32(ctx, 31, 0x1302C8u);
    ctx->pc = 0x1302C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1302C0u;
            // 0x1302c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303E8u;
    if (runtime->hasFunction(0x1303E8u)) {
        auto targetFn = runtime->lookupFunction(0x1303E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1302C8u; }
        if (ctx->pc != 0x1302C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303E8_0x1303e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1302C8u; }
        if (ctx->pc != 0x1302C8u) { return; }
    }
    ctx->pc = 0x1302C8u;
label_1302c8:
    // 0x1302c8: 0x36940020  ori         $s4, $s4, 0x20
    ctx->pc = 0x1302c8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32);
label_1302cc:
    // 0x1302cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1302ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1302d0:
    // 0x1302d0: 0x1000fd9f  b           . + 4 + (-0x261 << 2)
label_1302d4:
    if (ctx->pc == 0x1302D4u) {
        ctx->pc = 0x1302D4u;
            // 0x1302d4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1302D8u;
        goto label_1302d8;
    }
    ctx->pc = 0x1302D0u;
    {
        const bool branch_taken_0x1302d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1302D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1302D0u;
            // 0x1302d4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1302d0) {
            ctx->pc = 0x12F950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f950;
        }
    }
    ctx->pc = 0x1302D8u;
label_1302d8:
    // 0x1302d8: 0x36940020  ori         $s4, $s4, 0x20
    ctx->pc = 0x1302d8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32);
label_1302dc:
    // 0x1302dc: 0x1000fd9c  b           . + 4 + (-0x264 << 2)
label_1302e0:
    if (ctx->pc == 0x1302E0u) {
        ctx->pc = 0x1302E0u;
            // 0x1302e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1302E4u;
        goto label_1302e4;
    }
    ctx->pc = 0x1302DCu;
    {
        const bool branch_taken_0x1302dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1302E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1302DCu;
            // 0x1302e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1302dc) {
            ctx->pc = 0x12F950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f950;
        }
    }
    ctx->pc = 0x1302E4u;
label_1302e4:
    // 0x1302e4: 0x1000fd9a  b           . + 4 + (-0x266 << 2)
label_1302e8:
    if (ctx->pc == 0x1302E8u) {
        ctx->pc = 0x1302E8u;
            // 0x1302e8: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1302ECu;
        goto label_1302ec;
    }
    ctx->pc = 0x1302E4u;
    {
        const bool branch_taken_0x1302e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1302E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1302E4u;
            // 0x1302e8: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1302e4) {
            ctx->pc = 0x12F950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f950;
        }
    }
    ctx->pc = 0x1302ECu;
label_1302ec:
    // 0x1302ec: 0x1000fd55  b           . + 4 + (-0x2AB << 2)
label_1302f0:
    if (ctx->pc == 0x1302F0u) {
        ctx->pc = 0x1302F0u;
            // 0x1302f0: 0x36940004  ori         $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4);
        ctx->pc = 0x1302F4u;
        goto label_1302f4;
    }
    ctx->pc = 0x1302ECu;
    {
        const bool branch_taken_0x1302ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1302F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1302ECu;
            // 0x1302f0: 0x36940004  ori         $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1302ec) {
            ctx->pc = 0x12F844u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f844;
        }
    }
    ctx->pc = 0x1302F4u;
label_1302f4:
    // 0x1302f4: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x1302f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
label_1302f8:
    // 0x1302f8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1302f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1302fc:
    // 0x1302fc: 0x25efd620  addiu       $t7, $t7, -0x29E0
    ctx->pc = 0x1302fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956576));
label_130300:
    // 0x130300: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_130304:
    if (ctx->pc == 0x130304u) {
        ctx->pc = 0x130304u;
            // 0x130304: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x130308u;
        goto label_130308;
    }
    ctx->pc = 0x130300u;
    {
        const bool branch_taken_0x130300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130300u;
            // 0x130304: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130300) {
            ctx->pc = 0x1302B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1302b4;
        }
    }
    ctx->pc = 0x130308u;
label_130308:
    // 0x130308: 0x1000fd4e  b           . + 4 + (-0x2B2 << 2)
label_13030c:
    if (ctx->pc == 0x13030Cu) {
        ctx->pc = 0x13030Cu;
            // 0x13030c: 0x36940001  ori         $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
        ctx->pc = 0x130310u;
        goto label_130310;
    }
    ctx->pc = 0x130308u;
    {
        const bool branch_taken_0x130308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13030Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130308u;
            // 0x13030c: 0x36940001  ori         $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130308) {
            ctx->pc = 0x12F844u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f844;
        }
    }
    ctx->pc = 0x130310u;
label_130310:
    // 0x130310: 0x328f0008  andi        $t7, $s4, 0x8
    ctx->pc = 0x130310u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_130314:
    // 0x130314: 0x55e0fd24  bnel        $t7, $zero, . + 4 + (-0x2DC << 2)
label_130318:
    if (ctx->pc == 0x130318u) {
        ctx->pc = 0x130318u;
            // 0x130318: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x13031Cu;
        goto label_13031c;
    }
    ctx->pc = 0x130314u;
    {
        const bool branch_taken_0x130314 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x130314) {
            ctx->pc = 0x130318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130314u;
            // 0x130318: 0x826d0000  lb          $t5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F7A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f7a8;
        }
    }
    ctx->pc = 0x13031Cu;
label_13031c:
    // 0x13031c: 0x328f0004  andi        $t7, $s4, 0x4
    ctx->pc = 0x13031cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
label_130320:
    // 0x130320: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
label_130324:
    if (ctx->pc == 0x130324u) {
        ctx->pc = 0x130324u;
            // 0x130324: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->pc = 0x130328u;
        goto label_130328;
    }
    ctx->pc = 0x130320u;
    {
        const bool branch_taken_0x130320 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x130324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130320u;
            // 0x130324: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130320) {
            ctx->pc = 0x130340u;
            goto label_130340;
        }
    }
    ctx->pc = 0x130328u;
label_130328:
    // 0x130328: 0x8fad0264  lw          $t5, 0x264($sp)
    ctx->pc = 0x130328u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_13032c:
    // 0x13032c: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x13032cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_130330:
    // 0x130330: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x130330u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_130334:
    // 0x130334: 0xafad0264  sw          $t5, 0x264($sp)
    ctx->pc = 0x130334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 13));
label_130338:
    // 0x130338: 0x1000fd1a  b           . + 4 + (-0x2E6 << 2)
label_13033c:
    if (ctx->pc == 0x13033Cu) {
        ctx->pc = 0x13033Cu;
            // 0x13033c: 0xa5f50000  sh          $s5, 0x0($t7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 21));
        ctx->pc = 0x130340u;
        goto label_130340;
    }
    ctx->pc = 0x130338u;
    {
        const bool branch_taken_0x130338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13033Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130338u;
            // 0x13033c: 0xa5f50000  sh          $s5, 0x0($t7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130338) {
            ctx->pc = 0x12F7A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f7a4;
        }
    }
    ctx->pc = 0x130340u;
label_130340:
    // 0x130340: 0x328f0001  andi        $t7, $s4, 0x1
    ctx->pc = 0x130340u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_130344:
    // 0x130344: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
label_130348:
    if (ctx->pc == 0x130348u) {
        ctx->pc = 0x130348u;
            // 0x130348: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->pc = 0x13034Cu;
        goto label_13034c;
    }
    ctx->pc = 0x130344u;
    {
        const bool branch_taken_0x130344 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x130348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130344u;
            // 0x130348: 0x8faf0264  lw          $t7, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130344) {
            ctx->pc = 0x130368u;
            goto label_130368;
        }
    }
    ctx->pc = 0x13034Cu;
label_13034c:
    // 0x13034c: 0x2a0702d  daddu       $t6, $s5, $zero
    ctx->pc = 0x13034cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_130350:
    // 0x130350: 0x8fad0264  lw          $t5, 0x264($sp)
    ctx->pc = 0x130350u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_130354:
    // 0x130354: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x130354u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_130358:
    // 0x130358: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x130358u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_13035c:
    // 0x13035c: 0xafad0264  sw          $t5, 0x264($sp)
    ctx->pc = 0x13035cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 13));
label_130360:
    // 0x130360: 0x1000fd10  b           . + 4 + (-0x2F0 << 2)
label_130364:
    if (ctx->pc == 0x130364u) {
        ctx->pc = 0x130364u;
            // 0x130364: 0xfdee0000  sd          $t6, 0x0($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 14));
        ctx->pc = 0x130368u;
        goto label_130368;
    }
    ctx->pc = 0x130360u;
    {
        const bool branch_taken_0x130360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130360u;
            // 0x130364: 0xfdee0000  sd          $t6, 0x0($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130360) {
            ctx->pc = 0x12F7A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f7a4;
        }
    }
    ctx->pc = 0x130368u;
label_130368:
    // 0x130368: 0x8fae0264  lw          $t6, 0x264($sp)
    ctx->pc = 0x130368u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_13036c:
    // 0x13036c: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x13036cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_130370:
    // 0x130370: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x130370u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
label_130374:
    // 0x130374: 0xafae0264  sw          $t6, 0x264($sp)
    ctx->pc = 0x130374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 14));
label_130378:
    // 0x130378: 0x1000fd0a  b           . + 4 + (-0x2F6 << 2)
label_13037c:
    if (ctx->pc == 0x13037Cu) {
        ctx->pc = 0x13037Cu;
            // 0x13037c: 0xadf50000  sw          $s5, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 21));
        ctx->pc = 0x130380u;
        goto label_130380;
    }
    ctx->pc = 0x130378u;
    {
        const bool branch_taken_0x130378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13037Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130378u;
            // 0x13037c: 0xadf50000  sw          $s5, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130378) {
            ctx->pc = 0x12F7A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f7a4;
        }
    }
    ctx->pc = 0x130380u;
label_130380:
    // 0x130380: 0x36940110  ori         $s4, $s4, 0x110
    ctx->pc = 0x130380u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)272);
label_130384:
    // 0x130384: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x130384u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
label_130388:
    // 0x130388: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x130388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_13038c:
    // 0x13038c: 0x25efd890  addiu       $t7, $t7, -0x2770
    ctx->pc = 0x13038cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294957200));
label_130390:
    // 0x130390: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
label_130394:
    if (ctx->pc == 0x130394u) {
        ctx->pc = 0x130394u;
            // 0x130394: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x130398u;
        goto label_130398;
    }
    ctx->pc = 0x130390u;
    {
        const bool branch_taken_0x130390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130390u;
            // 0x130394: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130390) {
            ctx->pc = 0x1302B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1302b4;
        }
    }
    ctx->pc = 0x130398u;
label_130398:
    // 0x130398: 0x1000fd6d  b           . + 4 + (-0x293 << 2)
label_13039c:
    if (ctx->pc == 0x13039Cu) {
        ctx->pc = 0x13039Cu;
            // 0x13039c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1303A0u;
        goto label_1303a0;
    }
    ctx->pc = 0x130398u;
    {
        const bool branch_taken_0x130398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13039Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130398u;
            // 0x13039c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130398) {
            ctx->pc = 0x12F950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f950;
        }
    }
    ctx->pc = 0x1303A0u;
label_1303a0:
    // 0x1303a0: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x1303a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
label_1303a4:
    // 0x1303a4: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1303a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1303a8:
    // 0x1303a8: 0x1000fd67  b           . + 4 + (-0x299 << 2)
label_1303ac:
    if (ctx->pc == 0x1303ACu) {
        ctx->pc = 0x1303ACu;
            // 0x1303ac: 0x25efd890  addiu       $t7, $t7, -0x2770 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294957200));
        ctx->pc = 0x1303B0u;
        goto label_1303b0;
    }
    ctx->pc = 0x1303A8u;
    {
        const bool branch_taken_0x1303a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1303ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1303A8u;
            // 0x1303ac: 0x25efd890  addiu       $t7, $t7, -0x2770 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294957200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1303a8) {
            ctx->pc = 0x12F948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f948;
        }
    }
    ctx->pc = 0x1303B0u;
label_1303b0:
    // 0x1303b0: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x1303b0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
label_1303b4:
    // 0x1303b4: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x1303b4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
label_1303b8:
    // 0x1303b8: 0x25efd620  addiu       $t7, $t7, -0x29E0
    ctx->pc = 0x1303b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956576));
label_1303bc:
    // 0x1303bc: 0x25ce0768  addiu       $t6, $t6, 0x768
    ctx->pc = 0x1303bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1896));
label_1303c0:
    // 0x1303c0: 0xafaf026c  sw          $t7, 0x26C($sp)
    ctx->pc = 0x1303c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 15));
label_1303c4:
    // 0x1303c4: 0x20e7021  addu        $t6, $s0, $t6
    ctx->pc = 0x1303c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 14)));
label_1303c8:
    // 0x1303c8: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x1303c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1303cc:
    // 0x1303cc: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1303ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1303d0:
    // 0x1303d0: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x1303d0u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_1303d4:
    // 0x1303d4: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x1303d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
label_1303d8:
    // 0x1303d8: 0x1000fd5d  b           . + 4 + (-0x2A3 << 2)
label_1303dc:
    if (ctx->pc == 0x1303DCu) {
        ctx->pc = 0x1303DCu;
            // 0x1303dc: 0x28fa025  or          $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 15));
        ctx->pc = 0x1303E0u;
        goto label_1303e0;
    }
    ctx->pc = 0x1303D8u;
    {
        const bool branch_taken_0x1303d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1303DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1303D8u;
            // 0x1303dc: 0x28fa025  or          $s4, $s4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1303d8) {
            ctx->pc = 0x12F950u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f950;
        }
    }
    ctx->pc = 0x1303E0u;
label_1303e0:
    // 0x1303e0: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1303e4:
    if (ctx->pc == 0x1303E4u) {
        ctx->pc = 0x1303E4u;
            // 0x1303e4: 0x36940100  ori         $s4, $s4, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)256);
        ctx->pc = 0x1303E8u;
        goto label_fallthrough_0x1303e0;
    }
    ctx->pc = 0x1303E0u;
    {
        const bool branch_taken_0x1303e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1303E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1303E0u;
            // 0x1303e4: 0x36940100  ori         $s4, $s4, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1303e0) {
            ctx->pc = 0x130384u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_130384;
        }
    }
label_fallthrough_0x1303e0:
    ctx->pc = 0x1303E8u;
}
