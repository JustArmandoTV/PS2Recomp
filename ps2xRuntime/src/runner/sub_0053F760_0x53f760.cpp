#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053F760
// Address: 0x53f760 - 0x5406d0
void sub_0053F760_0x53f760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053F760_0x53f760");
#endif

    switch (ctx->pc) {
        case 0x53f760u: goto label_53f760;
        case 0x53f764u: goto label_53f764;
        case 0x53f768u: goto label_53f768;
        case 0x53f76cu: goto label_53f76c;
        case 0x53f770u: goto label_53f770;
        case 0x53f774u: goto label_53f774;
        case 0x53f778u: goto label_53f778;
        case 0x53f77cu: goto label_53f77c;
        case 0x53f780u: goto label_53f780;
        case 0x53f784u: goto label_53f784;
        case 0x53f788u: goto label_53f788;
        case 0x53f78cu: goto label_53f78c;
        case 0x53f790u: goto label_53f790;
        case 0x53f794u: goto label_53f794;
        case 0x53f798u: goto label_53f798;
        case 0x53f79cu: goto label_53f79c;
        case 0x53f7a0u: goto label_53f7a0;
        case 0x53f7a4u: goto label_53f7a4;
        case 0x53f7a8u: goto label_53f7a8;
        case 0x53f7acu: goto label_53f7ac;
        case 0x53f7b0u: goto label_53f7b0;
        case 0x53f7b4u: goto label_53f7b4;
        case 0x53f7b8u: goto label_53f7b8;
        case 0x53f7bcu: goto label_53f7bc;
        case 0x53f7c0u: goto label_53f7c0;
        case 0x53f7c4u: goto label_53f7c4;
        case 0x53f7c8u: goto label_53f7c8;
        case 0x53f7ccu: goto label_53f7cc;
        case 0x53f7d0u: goto label_53f7d0;
        case 0x53f7d4u: goto label_53f7d4;
        case 0x53f7d8u: goto label_53f7d8;
        case 0x53f7dcu: goto label_53f7dc;
        case 0x53f7e0u: goto label_53f7e0;
        case 0x53f7e4u: goto label_53f7e4;
        case 0x53f7e8u: goto label_53f7e8;
        case 0x53f7ecu: goto label_53f7ec;
        case 0x53f7f0u: goto label_53f7f0;
        case 0x53f7f4u: goto label_53f7f4;
        case 0x53f7f8u: goto label_53f7f8;
        case 0x53f7fcu: goto label_53f7fc;
        case 0x53f800u: goto label_53f800;
        case 0x53f804u: goto label_53f804;
        case 0x53f808u: goto label_53f808;
        case 0x53f80cu: goto label_53f80c;
        case 0x53f810u: goto label_53f810;
        case 0x53f814u: goto label_53f814;
        case 0x53f818u: goto label_53f818;
        case 0x53f81cu: goto label_53f81c;
        case 0x53f820u: goto label_53f820;
        case 0x53f824u: goto label_53f824;
        case 0x53f828u: goto label_53f828;
        case 0x53f82cu: goto label_53f82c;
        case 0x53f830u: goto label_53f830;
        case 0x53f834u: goto label_53f834;
        case 0x53f838u: goto label_53f838;
        case 0x53f83cu: goto label_53f83c;
        case 0x53f840u: goto label_53f840;
        case 0x53f844u: goto label_53f844;
        case 0x53f848u: goto label_53f848;
        case 0x53f84cu: goto label_53f84c;
        case 0x53f850u: goto label_53f850;
        case 0x53f854u: goto label_53f854;
        case 0x53f858u: goto label_53f858;
        case 0x53f85cu: goto label_53f85c;
        case 0x53f860u: goto label_53f860;
        case 0x53f864u: goto label_53f864;
        case 0x53f868u: goto label_53f868;
        case 0x53f86cu: goto label_53f86c;
        case 0x53f870u: goto label_53f870;
        case 0x53f874u: goto label_53f874;
        case 0x53f878u: goto label_53f878;
        case 0x53f87cu: goto label_53f87c;
        case 0x53f880u: goto label_53f880;
        case 0x53f884u: goto label_53f884;
        case 0x53f888u: goto label_53f888;
        case 0x53f88cu: goto label_53f88c;
        case 0x53f890u: goto label_53f890;
        case 0x53f894u: goto label_53f894;
        case 0x53f898u: goto label_53f898;
        case 0x53f89cu: goto label_53f89c;
        case 0x53f8a0u: goto label_53f8a0;
        case 0x53f8a4u: goto label_53f8a4;
        case 0x53f8a8u: goto label_53f8a8;
        case 0x53f8acu: goto label_53f8ac;
        case 0x53f8b0u: goto label_53f8b0;
        case 0x53f8b4u: goto label_53f8b4;
        case 0x53f8b8u: goto label_53f8b8;
        case 0x53f8bcu: goto label_53f8bc;
        case 0x53f8c0u: goto label_53f8c0;
        case 0x53f8c4u: goto label_53f8c4;
        case 0x53f8c8u: goto label_53f8c8;
        case 0x53f8ccu: goto label_53f8cc;
        case 0x53f8d0u: goto label_53f8d0;
        case 0x53f8d4u: goto label_53f8d4;
        case 0x53f8d8u: goto label_53f8d8;
        case 0x53f8dcu: goto label_53f8dc;
        case 0x53f8e0u: goto label_53f8e0;
        case 0x53f8e4u: goto label_53f8e4;
        case 0x53f8e8u: goto label_53f8e8;
        case 0x53f8ecu: goto label_53f8ec;
        case 0x53f8f0u: goto label_53f8f0;
        case 0x53f8f4u: goto label_53f8f4;
        case 0x53f8f8u: goto label_53f8f8;
        case 0x53f8fcu: goto label_53f8fc;
        case 0x53f900u: goto label_53f900;
        case 0x53f904u: goto label_53f904;
        case 0x53f908u: goto label_53f908;
        case 0x53f90cu: goto label_53f90c;
        case 0x53f910u: goto label_53f910;
        case 0x53f914u: goto label_53f914;
        case 0x53f918u: goto label_53f918;
        case 0x53f91cu: goto label_53f91c;
        case 0x53f920u: goto label_53f920;
        case 0x53f924u: goto label_53f924;
        case 0x53f928u: goto label_53f928;
        case 0x53f92cu: goto label_53f92c;
        case 0x53f930u: goto label_53f930;
        case 0x53f934u: goto label_53f934;
        case 0x53f938u: goto label_53f938;
        case 0x53f93cu: goto label_53f93c;
        case 0x53f940u: goto label_53f940;
        case 0x53f944u: goto label_53f944;
        case 0x53f948u: goto label_53f948;
        case 0x53f94cu: goto label_53f94c;
        case 0x53f950u: goto label_53f950;
        case 0x53f954u: goto label_53f954;
        case 0x53f958u: goto label_53f958;
        case 0x53f95cu: goto label_53f95c;
        case 0x53f960u: goto label_53f960;
        case 0x53f964u: goto label_53f964;
        case 0x53f968u: goto label_53f968;
        case 0x53f96cu: goto label_53f96c;
        case 0x53f970u: goto label_53f970;
        case 0x53f974u: goto label_53f974;
        case 0x53f978u: goto label_53f978;
        case 0x53f97cu: goto label_53f97c;
        case 0x53f980u: goto label_53f980;
        case 0x53f984u: goto label_53f984;
        case 0x53f988u: goto label_53f988;
        case 0x53f98cu: goto label_53f98c;
        case 0x53f990u: goto label_53f990;
        case 0x53f994u: goto label_53f994;
        case 0x53f998u: goto label_53f998;
        case 0x53f99cu: goto label_53f99c;
        case 0x53f9a0u: goto label_53f9a0;
        case 0x53f9a4u: goto label_53f9a4;
        case 0x53f9a8u: goto label_53f9a8;
        case 0x53f9acu: goto label_53f9ac;
        case 0x53f9b0u: goto label_53f9b0;
        case 0x53f9b4u: goto label_53f9b4;
        case 0x53f9b8u: goto label_53f9b8;
        case 0x53f9bcu: goto label_53f9bc;
        case 0x53f9c0u: goto label_53f9c0;
        case 0x53f9c4u: goto label_53f9c4;
        case 0x53f9c8u: goto label_53f9c8;
        case 0x53f9ccu: goto label_53f9cc;
        case 0x53f9d0u: goto label_53f9d0;
        case 0x53f9d4u: goto label_53f9d4;
        case 0x53f9d8u: goto label_53f9d8;
        case 0x53f9dcu: goto label_53f9dc;
        case 0x53f9e0u: goto label_53f9e0;
        case 0x53f9e4u: goto label_53f9e4;
        case 0x53f9e8u: goto label_53f9e8;
        case 0x53f9ecu: goto label_53f9ec;
        case 0x53f9f0u: goto label_53f9f0;
        case 0x53f9f4u: goto label_53f9f4;
        case 0x53f9f8u: goto label_53f9f8;
        case 0x53f9fcu: goto label_53f9fc;
        case 0x53fa00u: goto label_53fa00;
        case 0x53fa04u: goto label_53fa04;
        case 0x53fa08u: goto label_53fa08;
        case 0x53fa0cu: goto label_53fa0c;
        case 0x53fa10u: goto label_53fa10;
        case 0x53fa14u: goto label_53fa14;
        case 0x53fa18u: goto label_53fa18;
        case 0x53fa1cu: goto label_53fa1c;
        case 0x53fa20u: goto label_53fa20;
        case 0x53fa24u: goto label_53fa24;
        case 0x53fa28u: goto label_53fa28;
        case 0x53fa2cu: goto label_53fa2c;
        case 0x53fa30u: goto label_53fa30;
        case 0x53fa34u: goto label_53fa34;
        case 0x53fa38u: goto label_53fa38;
        case 0x53fa3cu: goto label_53fa3c;
        case 0x53fa40u: goto label_53fa40;
        case 0x53fa44u: goto label_53fa44;
        case 0x53fa48u: goto label_53fa48;
        case 0x53fa4cu: goto label_53fa4c;
        case 0x53fa50u: goto label_53fa50;
        case 0x53fa54u: goto label_53fa54;
        case 0x53fa58u: goto label_53fa58;
        case 0x53fa5cu: goto label_53fa5c;
        case 0x53fa60u: goto label_53fa60;
        case 0x53fa64u: goto label_53fa64;
        case 0x53fa68u: goto label_53fa68;
        case 0x53fa6cu: goto label_53fa6c;
        case 0x53fa70u: goto label_53fa70;
        case 0x53fa74u: goto label_53fa74;
        case 0x53fa78u: goto label_53fa78;
        case 0x53fa7cu: goto label_53fa7c;
        case 0x53fa80u: goto label_53fa80;
        case 0x53fa84u: goto label_53fa84;
        case 0x53fa88u: goto label_53fa88;
        case 0x53fa8cu: goto label_53fa8c;
        case 0x53fa90u: goto label_53fa90;
        case 0x53fa94u: goto label_53fa94;
        case 0x53fa98u: goto label_53fa98;
        case 0x53fa9cu: goto label_53fa9c;
        case 0x53faa0u: goto label_53faa0;
        case 0x53faa4u: goto label_53faa4;
        case 0x53faa8u: goto label_53faa8;
        case 0x53faacu: goto label_53faac;
        case 0x53fab0u: goto label_53fab0;
        case 0x53fab4u: goto label_53fab4;
        case 0x53fab8u: goto label_53fab8;
        case 0x53fabcu: goto label_53fabc;
        case 0x53fac0u: goto label_53fac0;
        case 0x53fac4u: goto label_53fac4;
        case 0x53fac8u: goto label_53fac8;
        case 0x53faccu: goto label_53facc;
        case 0x53fad0u: goto label_53fad0;
        case 0x53fad4u: goto label_53fad4;
        case 0x53fad8u: goto label_53fad8;
        case 0x53fadcu: goto label_53fadc;
        case 0x53fae0u: goto label_53fae0;
        case 0x53fae4u: goto label_53fae4;
        case 0x53fae8u: goto label_53fae8;
        case 0x53faecu: goto label_53faec;
        case 0x53faf0u: goto label_53faf0;
        case 0x53faf4u: goto label_53faf4;
        case 0x53faf8u: goto label_53faf8;
        case 0x53fafcu: goto label_53fafc;
        case 0x53fb00u: goto label_53fb00;
        case 0x53fb04u: goto label_53fb04;
        case 0x53fb08u: goto label_53fb08;
        case 0x53fb0cu: goto label_53fb0c;
        case 0x53fb10u: goto label_53fb10;
        case 0x53fb14u: goto label_53fb14;
        case 0x53fb18u: goto label_53fb18;
        case 0x53fb1cu: goto label_53fb1c;
        case 0x53fb20u: goto label_53fb20;
        case 0x53fb24u: goto label_53fb24;
        case 0x53fb28u: goto label_53fb28;
        case 0x53fb2cu: goto label_53fb2c;
        case 0x53fb30u: goto label_53fb30;
        case 0x53fb34u: goto label_53fb34;
        case 0x53fb38u: goto label_53fb38;
        case 0x53fb3cu: goto label_53fb3c;
        case 0x53fb40u: goto label_53fb40;
        case 0x53fb44u: goto label_53fb44;
        case 0x53fb48u: goto label_53fb48;
        case 0x53fb4cu: goto label_53fb4c;
        case 0x53fb50u: goto label_53fb50;
        case 0x53fb54u: goto label_53fb54;
        case 0x53fb58u: goto label_53fb58;
        case 0x53fb5cu: goto label_53fb5c;
        case 0x53fb60u: goto label_53fb60;
        case 0x53fb64u: goto label_53fb64;
        case 0x53fb68u: goto label_53fb68;
        case 0x53fb6cu: goto label_53fb6c;
        case 0x53fb70u: goto label_53fb70;
        case 0x53fb74u: goto label_53fb74;
        case 0x53fb78u: goto label_53fb78;
        case 0x53fb7cu: goto label_53fb7c;
        case 0x53fb80u: goto label_53fb80;
        case 0x53fb84u: goto label_53fb84;
        case 0x53fb88u: goto label_53fb88;
        case 0x53fb8cu: goto label_53fb8c;
        case 0x53fb90u: goto label_53fb90;
        case 0x53fb94u: goto label_53fb94;
        case 0x53fb98u: goto label_53fb98;
        case 0x53fb9cu: goto label_53fb9c;
        case 0x53fba0u: goto label_53fba0;
        case 0x53fba4u: goto label_53fba4;
        case 0x53fba8u: goto label_53fba8;
        case 0x53fbacu: goto label_53fbac;
        case 0x53fbb0u: goto label_53fbb0;
        case 0x53fbb4u: goto label_53fbb4;
        case 0x53fbb8u: goto label_53fbb8;
        case 0x53fbbcu: goto label_53fbbc;
        case 0x53fbc0u: goto label_53fbc0;
        case 0x53fbc4u: goto label_53fbc4;
        case 0x53fbc8u: goto label_53fbc8;
        case 0x53fbccu: goto label_53fbcc;
        case 0x53fbd0u: goto label_53fbd0;
        case 0x53fbd4u: goto label_53fbd4;
        case 0x53fbd8u: goto label_53fbd8;
        case 0x53fbdcu: goto label_53fbdc;
        case 0x53fbe0u: goto label_53fbe0;
        case 0x53fbe4u: goto label_53fbe4;
        case 0x53fbe8u: goto label_53fbe8;
        case 0x53fbecu: goto label_53fbec;
        case 0x53fbf0u: goto label_53fbf0;
        case 0x53fbf4u: goto label_53fbf4;
        case 0x53fbf8u: goto label_53fbf8;
        case 0x53fbfcu: goto label_53fbfc;
        case 0x53fc00u: goto label_53fc00;
        case 0x53fc04u: goto label_53fc04;
        case 0x53fc08u: goto label_53fc08;
        case 0x53fc0cu: goto label_53fc0c;
        case 0x53fc10u: goto label_53fc10;
        case 0x53fc14u: goto label_53fc14;
        case 0x53fc18u: goto label_53fc18;
        case 0x53fc1cu: goto label_53fc1c;
        case 0x53fc20u: goto label_53fc20;
        case 0x53fc24u: goto label_53fc24;
        case 0x53fc28u: goto label_53fc28;
        case 0x53fc2cu: goto label_53fc2c;
        case 0x53fc30u: goto label_53fc30;
        case 0x53fc34u: goto label_53fc34;
        case 0x53fc38u: goto label_53fc38;
        case 0x53fc3cu: goto label_53fc3c;
        case 0x53fc40u: goto label_53fc40;
        case 0x53fc44u: goto label_53fc44;
        case 0x53fc48u: goto label_53fc48;
        case 0x53fc4cu: goto label_53fc4c;
        case 0x53fc50u: goto label_53fc50;
        case 0x53fc54u: goto label_53fc54;
        case 0x53fc58u: goto label_53fc58;
        case 0x53fc5cu: goto label_53fc5c;
        case 0x53fc60u: goto label_53fc60;
        case 0x53fc64u: goto label_53fc64;
        case 0x53fc68u: goto label_53fc68;
        case 0x53fc6cu: goto label_53fc6c;
        case 0x53fc70u: goto label_53fc70;
        case 0x53fc74u: goto label_53fc74;
        case 0x53fc78u: goto label_53fc78;
        case 0x53fc7cu: goto label_53fc7c;
        case 0x53fc80u: goto label_53fc80;
        case 0x53fc84u: goto label_53fc84;
        case 0x53fc88u: goto label_53fc88;
        case 0x53fc8cu: goto label_53fc8c;
        case 0x53fc90u: goto label_53fc90;
        case 0x53fc94u: goto label_53fc94;
        case 0x53fc98u: goto label_53fc98;
        case 0x53fc9cu: goto label_53fc9c;
        case 0x53fca0u: goto label_53fca0;
        case 0x53fca4u: goto label_53fca4;
        case 0x53fca8u: goto label_53fca8;
        case 0x53fcacu: goto label_53fcac;
        case 0x53fcb0u: goto label_53fcb0;
        case 0x53fcb4u: goto label_53fcb4;
        case 0x53fcb8u: goto label_53fcb8;
        case 0x53fcbcu: goto label_53fcbc;
        case 0x53fcc0u: goto label_53fcc0;
        case 0x53fcc4u: goto label_53fcc4;
        case 0x53fcc8u: goto label_53fcc8;
        case 0x53fcccu: goto label_53fccc;
        case 0x53fcd0u: goto label_53fcd0;
        case 0x53fcd4u: goto label_53fcd4;
        case 0x53fcd8u: goto label_53fcd8;
        case 0x53fcdcu: goto label_53fcdc;
        case 0x53fce0u: goto label_53fce0;
        case 0x53fce4u: goto label_53fce4;
        case 0x53fce8u: goto label_53fce8;
        case 0x53fcecu: goto label_53fcec;
        case 0x53fcf0u: goto label_53fcf0;
        case 0x53fcf4u: goto label_53fcf4;
        case 0x53fcf8u: goto label_53fcf8;
        case 0x53fcfcu: goto label_53fcfc;
        case 0x53fd00u: goto label_53fd00;
        case 0x53fd04u: goto label_53fd04;
        case 0x53fd08u: goto label_53fd08;
        case 0x53fd0cu: goto label_53fd0c;
        case 0x53fd10u: goto label_53fd10;
        case 0x53fd14u: goto label_53fd14;
        case 0x53fd18u: goto label_53fd18;
        case 0x53fd1cu: goto label_53fd1c;
        case 0x53fd20u: goto label_53fd20;
        case 0x53fd24u: goto label_53fd24;
        case 0x53fd28u: goto label_53fd28;
        case 0x53fd2cu: goto label_53fd2c;
        case 0x53fd30u: goto label_53fd30;
        case 0x53fd34u: goto label_53fd34;
        case 0x53fd38u: goto label_53fd38;
        case 0x53fd3cu: goto label_53fd3c;
        case 0x53fd40u: goto label_53fd40;
        case 0x53fd44u: goto label_53fd44;
        case 0x53fd48u: goto label_53fd48;
        case 0x53fd4cu: goto label_53fd4c;
        case 0x53fd50u: goto label_53fd50;
        case 0x53fd54u: goto label_53fd54;
        case 0x53fd58u: goto label_53fd58;
        case 0x53fd5cu: goto label_53fd5c;
        case 0x53fd60u: goto label_53fd60;
        case 0x53fd64u: goto label_53fd64;
        case 0x53fd68u: goto label_53fd68;
        case 0x53fd6cu: goto label_53fd6c;
        case 0x53fd70u: goto label_53fd70;
        case 0x53fd74u: goto label_53fd74;
        case 0x53fd78u: goto label_53fd78;
        case 0x53fd7cu: goto label_53fd7c;
        case 0x53fd80u: goto label_53fd80;
        case 0x53fd84u: goto label_53fd84;
        case 0x53fd88u: goto label_53fd88;
        case 0x53fd8cu: goto label_53fd8c;
        case 0x53fd90u: goto label_53fd90;
        case 0x53fd94u: goto label_53fd94;
        case 0x53fd98u: goto label_53fd98;
        case 0x53fd9cu: goto label_53fd9c;
        case 0x53fda0u: goto label_53fda0;
        case 0x53fda4u: goto label_53fda4;
        case 0x53fda8u: goto label_53fda8;
        case 0x53fdacu: goto label_53fdac;
        case 0x53fdb0u: goto label_53fdb0;
        case 0x53fdb4u: goto label_53fdb4;
        case 0x53fdb8u: goto label_53fdb8;
        case 0x53fdbcu: goto label_53fdbc;
        case 0x53fdc0u: goto label_53fdc0;
        case 0x53fdc4u: goto label_53fdc4;
        case 0x53fdc8u: goto label_53fdc8;
        case 0x53fdccu: goto label_53fdcc;
        case 0x53fdd0u: goto label_53fdd0;
        case 0x53fdd4u: goto label_53fdd4;
        case 0x53fdd8u: goto label_53fdd8;
        case 0x53fddcu: goto label_53fddc;
        case 0x53fde0u: goto label_53fde0;
        case 0x53fde4u: goto label_53fde4;
        case 0x53fde8u: goto label_53fde8;
        case 0x53fdecu: goto label_53fdec;
        case 0x53fdf0u: goto label_53fdf0;
        case 0x53fdf4u: goto label_53fdf4;
        case 0x53fdf8u: goto label_53fdf8;
        case 0x53fdfcu: goto label_53fdfc;
        case 0x53fe00u: goto label_53fe00;
        case 0x53fe04u: goto label_53fe04;
        case 0x53fe08u: goto label_53fe08;
        case 0x53fe0cu: goto label_53fe0c;
        case 0x53fe10u: goto label_53fe10;
        case 0x53fe14u: goto label_53fe14;
        case 0x53fe18u: goto label_53fe18;
        case 0x53fe1cu: goto label_53fe1c;
        case 0x53fe20u: goto label_53fe20;
        case 0x53fe24u: goto label_53fe24;
        case 0x53fe28u: goto label_53fe28;
        case 0x53fe2cu: goto label_53fe2c;
        case 0x53fe30u: goto label_53fe30;
        case 0x53fe34u: goto label_53fe34;
        case 0x53fe38u: goto label_53fe38;
        case 0x53fe3cu: goto label_53fe3c;
        case 0x53fe40u: goto label_53fe40;
        case 0x53fe44u: goto label_53fe44;
        case 0x53fe48u: goto label_53fe48;
        case 0x53fe4cu: goto label_53fe4c;
        case 0x53fe50u: goto label_53fe50;
        case 0x53fe54u: goto label_53fe54;
        case 0x53fe58u: goto label_53fe58;
        case 0x53fe5cu: goto label_53fe5c;
        case 0x53fe60u: goto label_53fe60;
        case 0x53fe64u: goto label_53fe64;
        case 0x53fe68u: goto label_53fe68;
        case 0x53fe6cu: goto label_53fe6c;
        case 0x53fe70u: goto label_53fe70;
        case 0x53fe74u: goto label_53fe74;
        case 0x53fe78u: goto label_53fe78;
        case 0x53fe7cu: goto label_53fe7c;
        case 0x53fe80u: goto label_53fe80;
        case 0x53fe84u: goto label_53fe84;
        case 0x53fe88u: goto label_53fe88;
        case 0x53fe8cu: goto label_53fe8c;
        case 0x53fe90u: goto label_53fe90;
        case 0x53fe94u: goto label_53fe94;
        case 0x53fe98u: goto label_53fe98;
        case 0x53fe9cu: goto label_53fe9c;
        case 0x53fea0u: goto label_53fea0;
        case 0x53fea4u: goto label_53fea4;
        case 0x53fea8u: goto label_53fea8;
        case 0x53feacu: goto label_53feac;
        case 0x53feb0u: goto label_53feb0;
        case 0x53feb4u: goto label_53feb4;
        case 0x53feb8u: goto label_53feb8;
        case 0x53febcu: goto label_53febc;
        case 0x53fec0u: goto label_53fec0;
        case 0x53fec4u: goto label_53fec4;
        case 0x53fec8u: goto label_53fec8;
        case 0x53feccu: goto label_53fecc;
        case 0x53fed0u: goto label_53fed0;
        case 0x53fed4u: goto label_53fed4;
        case 0x53fed8u: goto label_53fed8;
        case 0x53fedcu: goto label_53fedc;
        case 0x53fee0u: goto label_53fee0;
        case 0x53fee4u: goto label_53fee4;
        case 0x53fee8u: goto label_53fee8;
        case 0x53feecu: goto label_53feec;
        case 0x53fef0u: goto label_53fef0;
        case 0x53fef4u: goto label_53fef4;
        case 0x53fef8u: goto label_53fef8;
        case 0x53fefcu: goto label_53fefc;
        case 0x53ff00u: goto label_53ff00;
        case 0x53ff04u: goto label_53ff04;
        case 0x53ff08u: goto label_53ff08;
        case 0x53ff0cu: goto label_53ff0c;
        case 0x53ff10u: goto label_53ff10;
        case 0x53ff14u: goto label_53ff14;
        case 0x53ff18u: goto label_53ff18;
        case 0x53ff1cu: goto label_53ff1c;
        case 0x53ff20u: goto label_53ff20;
        case 0x53ff24u: goto label_53ff24;
        case 0x53ff28u: goto label_53ff28;
        case 0x53ff2cu: goto label_53ff2c;
        case 0x53ff30u: goto label_53ff30;
        case 0x53ff34u: goto label_53ff34;
        case 0x53ff38u: goto label_53ff38;
        case 0x53ff3cu: goto label_53ff3c;
        case 0x53ff40u: goto label_53ff40;
        case 0x53ff44u: goto label_53ff44;
        case 0x53ff48u: goto label_53ff48;
        case 0x53ff4cu: goto label_53ff4c;
        case 0x53ff50u: goto label_53ff50;
        case 0x53ff54u: goto label_53ff54;
        case 0x53ff58u: goto label_53ff58;
        case 0x53ff5cu: goto label_53ff5c;
        case 0x53ff60u: goto label_53ff60;
        case 0x53ff64u: goto label_53ff64;
        case 0x53ff68u: goto label_53ff68;
        case 0x53ff6cu: goto label_53ff6c;
        case 0x53ff70u: goto label_53ff70;
        case 0x53ff74u: goto label_53ff74;
        case 0x53ff78u: goto label_53ff78;
        case 0x53ff7cu: goto label_53ff7c;
        case 0x53ff80u: goto label_53ff80;
        case 0x53ff84u: goto label_53ff84;
        case 0x53ff88u: goto label_53ff88;
        case 0x53ff8cu: goto label_53ff8c;
        case 0x53ff90u: goto label_53ff90;
        case 0x53ff94u: goto label_53ff94;
        case 0x53ff98u: goto label_53ff98;
        case 0x53ff9cu: goto label_53ff9c;
        case 0x53ffa0u: goto label_53ffa0;
        case 0x53ffa4u: goto label_53ffa4;
        case 0x53ffa8u: goto label_53ffa8;
        case 0x53ffacu: goto label_53ffac;
        case 0x53ffb0u: goto label_53ffb0;
        case 0x53ffb4u: goto label_53ffb4;
        case 0x53ffb8u: goto label_53ffb8;
        case 0x53ffbcu: goto label_53ffbc;
        case 0x53ffc0u: goto label_53ffc0;
        case 0x53ffc4u: goto label_53ffc4;
        case 0x53ffc8u: goto label_53ffc8;
        case 0x53ffccu: goto label_53ffcc;
        case 0x53ffd0u: goto label_53ffd0;
        case 0x53ffd4u: goto label_53ffd4;
        case 0x53ffd8u: goto label_53ffd8;
        case 0x53ffdcu: goto label_53ffdc;
        case 0x53ffe0u: goto label_53ffe0;
        case 0x53ffe4u: goto label_53ffe4;
        case 0x53ffe8u: goto label_53ffe8;
        case 0x53ffecu: goto label_53ffec;
        case 0x53fff0u: goto label_53fff0;
        case 0x53fff4u: goto label_53fff4;
        case 0x53fff8u: goto label_53fff8;
        case 0x53fffcu: goto label_53fffc;
        case 0x540000u: goto label_540000;
        case 0x540004u: goto label_540004;
        case 0x540008u: goto label_540008;
        case 0x54000cu: goto label_54000c;
        case 0x540010u: goto label_540010;
        case 0x540014u: goto label_540014;
        case 0x540018u: goto label_540018;
        case 0x54001cu: goto label_54001c;
        case 0x540020u: goto label_540020;
        case 0x540024u: goto label_540024;
        case 0x540028u: goto label_540028;
        case 0x54002cu: goto label_54002c;
        case 0x540030u: goto label_540030;
        case 0x540034u: goto label_540034;
        case 0x540038u: goto label_540038;
        case 0x54003cu: goto label_54003c;
        case 0x540040u: goto label_540040;
        case 0x540044u: goto label_540044;
        case 0x540048u: goto label_540048;
        case 0x54004cu: goto label_54004c;
        case 0x540050u: goto label_540050;
        case 0x540054u: goto label_540054;
        case 0x540058u: goto label_540058;
        case 0x54005cu: goto label_54005c;
        case 0x540060u: goto label_540060;
        case 0x540064u: goto label_540064;
        case 0x540068u: goto label_540068;
        case 0x54006cu: goto label_54006c;
        case 0x540070u: goto label_540070;
        case 0x540074u: goto label_540074;
        case 0x540078u: goto label_540078;
        case 0x54007cu: goto label_54007c;
        case 0x540080u: goto label_540080;
        case 0x540084u: goto label_540084;
        case 0x540088u: goto label_540088;
        case 0x54008cu: goto label_54008c;
        case 0x540090u: goto label_540090;
        case 0x540094u: goto label_540094;
        case 0x540098u: goto label_540098;
        case 0x54009cu: goto label_54009c;
        case 0x5400a0u: goto label_5400a0;
        case 0x5400a4u: goto label_5400a4;
        case 0x5400a8u: goto label_5400a8;
        case 0x5400acu: goto label_5400ac;
        case 0x5400b0u: goto label_5400b0;
        case 0x5400b4u: goto label_5400b4;
        case 0x5400b8u: goto label_5400b8;
        case 0x5400bcu: goto label_5400bc;
        case 0x5400c0u: goto label_5400c0;
        case 0x5400c4u: goto label_5400c4;
        case 0x5400c8u: goto label_5400c8;
        case 0x5400ccu: goto label_5400cc;
        case 0x5400d0u: goto label_5400d0;
        case 0x5400d4u: goto label_5400d4;
        case 0x5400d8u: goto label_5400d8;
        case 0x5400dcu: goto label_5400dc;
        case 0x5400e0u: goto label_5400e0;
        case 0x5400e4u: goto label_5400e4;
        case 0x5400e8u: goto label_5400e8;
        case 0x5400ecu: goto label_5400ec;
        case 0x5400f0u: goto label_5400f0;
        case 0x5400f4u: goto label_5400f4;
        case 0x5400f8u: goto label_5400f8;
        case 0x5400fcu: goto label_5400fc;
        case 0x540100u: goto label_540100;
        case 0x540104u: goto label_540104;
        case 0x540108u: goto label_540108;
        case 0x54010cu: goto label_54010c;
        case 0x540110u: goto label_540110;
        case 0x540114u: goto label_540114;
        case 0x540118u: goto label_540118;
        case 0x54011cu: goto label_54011c;
        case 0x540120u: goto label_540120;
        case 0x540124u: goto label_540124;
        case 0x540128u: goto label_540128;
        case 0x54012cu: goto label_54012c;
        case 0x540130u: goto label_540130;
        case 0x540134u: goto label_540134;
        case 0x540138u: goto label_540138;
        case 0x54013cu: goto label_54013c;
        case 0x540140u: goto label_540140;
        case 0x540144u: goto label_540144;
        case 0x540148u: goto label_540148;
        case 0x54014cu: goto label_54014c;
        case 0x540150u: goto label_540150;
        case 0x540154u: goto label_540154;
        case 0x540158u: goto label_540158;
        case 0x54015cu: goto label_54015c;
        case 0x540160u: goto label_540160;
        case 0x540164u: goto label_540164;
        case 0x540168u: goto label_540168;
        case 0x54016cu: goto label_54016c;
        case 0x540170u: goto label_540170;
        case 0x540174u: goto label_540174;
        case 0x540178u: goto label_540178;
        case 0x54017cu: goto label_54017c;
        case 0x540180u: goto label_540180;
        case 0x540184u: goto label_540184;
        case 0x540188u: goto label_540188;
        case 0x54018cu: goto label_54018c;
        case 0x540190u: goto label_540190;
        case 0x540194u: goto label_540194;
        case 0x540198u: goto label_540198;
        case 0x54019cu: goto label_54019c;
        case 0x5401a0u: goto label_5401a0;
        case 0x5401a4u: goto label_5401a4;
        case 0x5401a8u: goto label_5401a8;
        case 0x5401acu: goto label_5401ac;
        case 0x5401b0u: goto label_5401b0;
        case 0x5401b4u: goto label_5401b4;
        case 0x5401b8u: goto label_5401b8;
        case 0x5401bcu: goto label_5401bc;
        case 0x5401c0u: goto label_5401c0;
        case 0x5401c4u: goto label_5401c4;
        case 0x5401c8u: goto label_5401c8;
        case 0x5401ccu: goto label_5401cc;
        case 0x5401d0u: goto label_5401d0;
        case 0x5401d4u: goto label_5401d4;
        case 0x5401d8u: goto label_5401d8;
        case 0x5401dcu: goto label_5401dc;
        case 0x5401e0u: goto label_5401e0;
        case 0x5401e4u: goto label_5401e4;
        case 0x5401e8u: goto label_5401e8;
        case 0x5401ecu: goto label_5401ec;
        case 0x5401f0u: goto label_5401f0;
        case 0x5401f4u: goto label_5401f4;
        case 0x5401f8u: goto label_5401f8;
        case 0x5401fcu: goto label_5401fc;
        case 0x540200u: goto label_540200;
        case 0x540204u: goto label_540204;
        case 0x540208u: goto label_540208;
        case 0x54020cu: goto label_54020c;
        case 0x540210u: goto label_540210;
        case 0x540214u: goto label_540214;
        case 0x540218u: goto label_540218;
        case 0x54021cu: goto label_54021c;
        case 0x540220u: goto label_540220;
        case 0x540224u: goto label_540224;
        case 0x540228u: goto label_540228;
        case 0x54022cu: goto label_54022c;
        case 0x540230u: goto label_540230;
        case 0x540234u: goto label_540234;
        case 0x540238u: goto label_540238;
        case 0x54023cu: goto label_54023c;
        case 0x540240u: goto label_540240;
        case 0x540244u: goto label_540244;
        case 0x540248u: goto label_540248;
        case 0x54024cu: goto label_54024c;
        case 0x540250u: goto label_540250;
        case 0x540254u: goto label_540254;
        case 0x540258u: goto label_540258;
        case 0x54025cu: goto label_54025c;
        case 0x540260u: goto label_540260;
        case 0x540264u: goto label_540264;
        case 0x540268u: goto label_540268;
        case 0x54026cu: goto label_54026c;
        case 0x540270u: goto label_540270;
        case 0x540274u: goto label_540274;
        case 0x540278u: goto label_540278;
        case 0x54027cu: goto label_54027c;
        case 0x540280u: goto label_540280;
        case 0x540284u: goto label_540284;
        case 0x540288u: goto label_540288;
        case 0x54028cu: goto label_54028c;
        case 0x540290u: goto label_540290;
        case 0x540294u: goto label_540294;
        case 0x540298u: goto label_540298;
        case 0x54029cu: goto label_54029c;
        case 0x5402a0u: goto label_5402a0;
        case 0x5402a4u: goto label_5402a4;
        case 0x5402a8u: goto label_5402a8;
        case 0x5402acu: goto label_5402ac;
        case 0x5402b0u: goto label_5402b0;
        case 0x5402b4u: goto label_5402b4;
        case 0x5402b8u: goto label_5402b8;
        case 0x5402bcu: goto label_5402bc;
        case 0x5402c0u: goto label_5402c0;
        case 0x5402c4u: goto label_5402c4;
        case 0x5402c8u: goto label_5402c8;
        case 0x5402ccu: goto label_5402cc;
        case 0x5402d0u: goto label_5402d0;
        case 0x5402d4u: goto label_5402d4;
        case 0x5402d8u: goto label_5402d8;
        case 0x5402dcu: goto label_5402dc;
        case 0x5402e0u: goto label_5402e0;
        case 0x5402e4u: goto label_5402e4;
        case 0x5402e8u: goto label_5402e8;
        case 0x5402ecu: goto label_5402ec;
        case 0x5402f0u: goto label_5402f0;
        case 0x5402f4u: goto label_5402f4;
        case 0x5402f8u: goto label_5402f8;
        case 0x5402fcu: goto label_5402fc;
        case 0x540300u: goto label_540300;
        case 0x540304u: goto label_540304;
        case 0x540308u: goto label_540308;
        case 0x54030cu: goto label_54030c;
        case 0x540310u: goto label_540310;
        case 0x540314u: goto label_540314;
        case 0x540318u: goto label_540318;
        case 0x54031cu: goto label_54031c;
        case 0x540320u: goto label_540320;
        case 0x540324u: goto label_540324;
        case 0x540328u: goto label_540328;
        case 0x54032cu: goto label_54032c;
        case 0x540330u: goto label_540330;
        case 0x540334u: goto label_540334;
        case 0x540338u: goto label_540338;
        case 0x54033cu: goto label_54033c;
        case 0x540340u: goto label_540340;
        case 0x540344u: goto label_540344;
        case 0x540348u: goto label_540348;
        case 0x54034cu: goto label_54034c;
        case 0x540350u: goto label_540350;
        case 0x540354u: goto label_540354;
        case 0x540358u: goto label_540358;
        case 0x54035cu: goto label_54035c;
        case 0x540360u: goto label_540360;
        case 0x540364u: goto label_540364;
        case 0x540368u: goto label_540368;
        case 0x54036cu: goto label_54036c;
        case 0x540370u: goto label_540370;
        case 0x540374u: goto label_540374;
        case 0x540378u: goto label_540378;
        case 0x54037cu: goto label_54037c;
        case 0x540380u: goto label_540380;
        case 0x540384u: goto label_540384;
        case 0x540388u: goto label_540388;
        case 0x54038cu: goto label_54038c;
        case 0x540390u: goto label_540390;
        case 0x540394u: goto label_540394;
        case 0x540398u: goto label_540398;
        case 0x54039cu: goto label_54039c;
        case 0x5403a0u: goto label_5403a0;
        case 0x5403a4u: goto label_5403a4;
        case 0x5403a8u: goto label_5403a8;
        case 0x5403acu: goto label_5403ac;
        case 0x5403b0u: goto label_5403b0;
        case 0x5403b4u: goto label_5403b4;
        case 0x5403b8u: goto label_5403b8;
        case 0x5403bcu: goto label_5403bc;
        case 0x5403c0u: goto label_5403c0;
        case 0x5403c4u: goto label_5403c4;
        case 0x5403c8u: goto label_5403c8;
        case 0x5403ccu: goto label_5403cc;
        case 0x5403d0u: goto label_5403d0;
        case 0x5403d4u: goto label_5403d4;
        case 0x5403d8u: goto label_5403d8;
        case 0x5403dcu: goto label_5403dc;
        case 0x5403e0u: goto label_5403e0;
        case 0x5403e4u: goto label_5403e4;
        case 0x5403e8u: goto label_5403e8;
        case 0x5403ecu: goto label_5403ec;
        case 0x5403f0u: goto label_5403f0;
        case 0x5403f4u: goto label_5403f4;
        case 0x5403f8u: goto label_5403f8;
        case 0x5403fcu: goto label_5403fc;
        case 0x540400u: goto label_540400;
        case 0x540404u: goto label_540404;
        case 0x540408u: goto label_540408;
        case 0x54040cu: goto label_54040c;
        case 0x540410u: goto label_540410;
        case 0x540414u: goto label_540414;
        case 0x540418u: goto label_540418;
        case 0x54041cu: goto label_54041c;
        case 0x540420u: goto label_540420;
        case 0x540424u: goto label_540424;
        case 0x540428u: goto label_540428;
        case 0x54042cu: goto label_54042c;
        case 0x540430u: goto label_540430;
        case 0x540434u: goto label_540434;
        case 0x540438u: goto label_540438;
        case 0x54043cu: goto label_54043c;
        case 0x540440u: goto label_540440;
        case 0x540444u: goto label_540444;
        case 0x540448u: goto label_540448;
        case 0x54044cu: goto label_54044c;
        case 0x540450u: goto label_540450;
        case 0x540454u: goto label_540454;
        case 0x540458u: goto label_540458;
        case 0x54045cu: goto label_54045c;
        case 0x540460u: goto label_540460;
        case 0x540464u: goto label_540464;
        case 0x540468u: goto label_540468;
        case 0x54046cu: goto label_54046c;
        case 0x540470u: goto label_540470;
        case 0x540474u: goto label_540474;
        case 0x540478u: goto label_540478;
        case 0x54047cu: goto label_54047c;
        case 0x540480u: goto label_540480;
        case 0x540484u: goto label_540484;
        case 0x540488u: goto label_540488;
        case 0x54048cu: goto label_54048c;
        case 0x540490u: goto label_540490;
        case 0x540494u: goto label_540494;
        case 0x540498u: goto label_540498;
        case 0x54049cu: goto label_54049c;
        case 0x5404a0u: goto label_5404a0;
        case 0x5404a4u: goto label_5404a4;
        case 0x5404a8u: goto label_5404a8;
        case 0x5404acu: goto label_5404ac;
        case 0x5404b0u: goto label_5404b0;
        case 0x5404b4u: goto label_5404b4;
        case 0x5404b8u: goto label_5404b8;
        case 0x5404bcu: goto label_5404bc;
        case 0x5404c0u: goto label_5404c0;
        case 0x5404c4u: goto label_5404c4;
        case 0x5404c8u: goto label_5404c8;
        case 0x5404ccu: goto label_5404cc;
        case 0x5404d0u: goto label_5404d0;
        case 0x5404d4u: goto label_5404d4;
        case 0x5404d8u: goto label_5404d8;
        case 0x5404dcu: goto label_5404dc;
        case 0x5404e0u: goto label_5404e0;
        case 0x5404e4u: goto label_5404e4;
        case 0x5404e8u: goto label_5404e8;
        case 0x5404ecu: goto label_5404ec;
        case 0x5404f0u: goto label_5404f0;
        case 0x5404f4u: goto label_5404f4;
        case 0x5404f8u: goto label_5404f8;
        case 0x5404fcu: goto label_5404fc;
        case 0x540500u: goto label_540500;
        case 0x540504u: goto label_540504;
        case 0x540508u: goto label_540508;
        case 0x54050cu: goto label_54050c;
        case 0x540510u: goto label_540510;
        case 0x540514u: goto label_540514;
        case 0x540518u: goto label_540518;
        case 0x54051cu: goto label_54051c;
        case 0x540520u: goto label_540520;
        case 0x540524u: goto label_540524;
        case 0x540528u: goto label_540528;
        case 0x54052cu: goto label_54052c;
        case 0x540530u: goto label_540530;
        case 0x540534u: goto label_540534;
        case 0x540538u: goto label_540538;
        case 0x54053cu: goto label_54053c;
        case 0x540540u: goto label_540540;
        case 0x540544u: goto label_540544;
        case 0x540548u: goto label_540548;
        case 0x54054cu: goto label_54054c;
        case 0x540550u: goto label_540550;
        case 0x540554u: goto label_540554;
        case 0x540558u: goto label_540558;
        case 0x54055cu: goto label_54055c;
        case 0x540560u: goto label_540560;
        case 0x540564u: goto label_540564;
        case 0x540568u: goto label_540568;
        case 0x54056cu: goto label_54056c;
        case 0x540570u: goto label_540570;
        case 0x540574u: goto label_540574;
        case 0x540578u: goto label_540578;
        case 0x54057cu: goto label_54057c;
        case 0x540580u: goto label_540580;
        case 0x540584u: goto label_540584;
        case 0x540588u: goto label_540588;
        case 0x54058cu: goto label_54058c;
        case 0x540590u: goto label_540590;
        case 0x540594u: goto label_540594;
        case 0x540598u: goto label_540598;
        case 0x54059cu: goto label_54059c;
        case 0x5405a0u: goto label_5405a0;
        case 0x5405a4u: goto label_5405a4;
        case 0x5405a8u: goto label_5405a8;
        case 0x5405acu: goto label_5405ac;
        case 0x5405b0u: goto label_5405b0;
        case 0x5405b4u: goto label_5405b4;
        case 0x5405b8u: goto label_5405b8;
        case 0x5405bcu: goto label_5405bc;
        case 0x5405c0u: goto label_5405c0;
        case 0x5405c4u: goto label_5405c4;
        case 0x5405c8u: goto label_5405c8;
        case 0x5405ccu: goto label_5405cc;
        case 0x5405d0u: goto label_5405d0;
        case 0x5405d4u: goto label_5405d4;
        case 0x5405d8u: goto label_5405d8;
        case 0x5405dcu: goto label_5405dc;
        case 0x5405e0u: goto label_5405e0;
        case 0x5405e4u: goto label_5405e4;
        case 0x5405e8u: goto label_5405e8;
        case 0x5405ecu: goto label_5405ec;
        case 0x5405f0u: goto label_5405f0;
        case 0x5405f4u: goto label_5405f4;
        case 0x5405f8u: goto label_5405f8;
        case 0x5405fcu: goto label_5405fc;
        case 0x540600u: goto label_540600;
        case 0x540604u: goto label_540604;
        case 0x540608u: goto label_540608;
        case 0x54060cu: goto label_54060c;
        case 0x540610u: goto label_540610;
        case 0x540614u: goto label_540614;
        case 0x540618u: goto label_540618;
        case 0x54061cu: goto label_54061c;
        case 0x540620u: goto label_540620;
        case 0x540624u: goto label_540624;
        case 0x540628u: goto label_540628;
        case 0x54062cu: goto label_54062c;
        case 0x540630u: goto label_540630;
        case 0x540634u: goto label_540634;
        case 0x540638u: goto label_540638;
        case 0x54063cu: goto label_54063c;
        case 0x540640u: goto label_540640;
        case 0x540644u: goto label_540644;
        case 0x540648u: goto label_540648;
        case 0x54064cu: goto label_54064c;
        case 0x540650u: goto label_540650;
        case 0x540654u: goto label_540654;
        case 0x540658u: goto label_540658;
        case 0x54065cu: goto label_54065c;
        case 0x540660u: goto label_540660;
        case 0x540664u: goto label_540664;
        case 0x540668u: goto label_540668;
        case 0x54066cu: goto label_54066c;
        case 0x540670u: goto label_540670;
        case 0x540674u: goto label_540674;
        case 0x540678u: goto label_540678;
        case 0x54067cu: goto label_54067c;
        case 0x540680u: goto label_540680;
        case 0x540684u: goto label_540684;
        case 0x540688u: goto label_540688;
        case 0x54068cu: goto label_54068c;
        case 0x540690u: goto label_540690;
        case 0x540694u: goto label_540694;
        case 0x540698u: goto label_540698;
        case 0x54069cu: goto label_54069c;
        case 0x5406a0u: goto label_5406a0;
        case 0x5406a4u: goto label_5406a4;
        case 0x5406a8u: goto label_5406a8;
        case 0x5406acu: goto label_5406ac;
        case 0x5406b0u: goto label_5406b0;
        case 0x5406b4u: goto label_5406b4;
        case 0x5406b8u: goto label_5406b8;
        case 0x5406bcu: goto label_5406bc;
        case 0x5406c0u: goto label_5406c0;
        case 0x5406c4u: goto label_5406c4;
        case 0x5406c8u: goto label_5406c8;
        case 0x5406ccu: goto label_5406cc;
        default: break;
    }

    ctx->pc = 0x53f760u;

label_53f760:
    // 0x53f760: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53f760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53f764:
    // 0x53f764: 0x3e00008  jr          $ra
label_53f768:
    if (ctx->pc == 0x53F768u) {
        ctx->pc = 0x53F768u;
            // 0x53f768: 0x8c423e28  lw          $v0, 0x3E28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
        ctx->pc = 0x53F76Cu;
        goto label_53f76c;
    }
    ctx->pc = 0x53F764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53F768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F764u;
            // 0x53f768: 0x8c423e28  lw          $v0, 0x3E28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F76Cu;
label_53f76c:
    // 0x53f76c: 0x0  nop
    ctx->pc = 0x53f76cu;
    // NOP
label_53f770:
    // 0x53f770: 0x3e00008  jr          $ra
label_53f774:
    if (ctx->pc == 0x53F774u) {
        ctx->pc = 0x53F778u;
        goto label_53f778;
    }
    ctx->pc = 0x53F770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F778u;
label_53f778:
    // 0x53f778: 0x0  nop
    ctx->pc = 0x53f778u;
    // NOP
label_53f77c:
    // 0x53f77c: 0x0  nop
    ctx->pc = 0x53f77cu;
    // NOP
label_53f780:
    // 0x53f780: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53f780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53f784:
    // 0x53f784: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x53f784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_53f788:
    // 0x53f788: 0x3200008  jr          $t9
label_53f78c:
    if (ctx->pc == 0x53F78Cu) {
        ctx->pc = 0x53F790u;
        goto label_53f790;
    }
    ctx->pc = 0x53F788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F790u;
label_53f790:
    // 0x53f790: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53f790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53f794:
    // 0x53f794: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x53f794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_53f798:
    // 0x53f798: 0x3200008  jr          $t9
label_53f79c:
    if (ctx->pc == 0x53F79Cu) {
        ctx->pc = 0x53F7A0u;
        goto label_53f7a0;
    }
    ctx->pc = 0x53F798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F7A0u;
label_53f7a0:
    // 0x53f7a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x53f7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_53f7a4:
    // 0x53f7a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x53f7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_53f7a8:
    // 0x53f7a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53f7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53f7ac:
    // 0x53f7ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53f7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53f7b0:
    // 0x53f7b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x53f7b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53f7b4:
    // 0x53f7b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53f7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53f7b8:
    // 0x53f7b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x53f7b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_53f7bc:
    // 0x53f7bc: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_53f7c0:
    if (ctx->pc == 0x53F7C0u) {
        ctx->pc = 0x53F7C0u;
            // 0x53f7c0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F7C4u;
        goto label_53f7c4;
    }
    ctx->pc = 0x53F7BCu;
    {
        const bool branch_taken_0x53f7bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x53F7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F7BCu;
            // 0x53f7c0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53f7bc) {
            ctx->pc = 0x53F7DCu;
            goto label_53f7dc;
        }
    }
    ctx->pc = 0x53F7C4u;
label_53f7c4:
    // 0x53f7c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53f7c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53f7c8:
    // 0x53f7c8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x53f7c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_53f7cc:
    // 0x53f7cc: 0x320f809  jalr        $t9
label_53f7d0:
    if (ctx->pc == 0x53F7D0u) {
        ctx->pc = 0x53F7D4u;
        goto label_53f7d4;
    }
    ctx->pc = 0x53F7CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53F7D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53F7D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53F7D4u; }
            if (ctx->pc != 0x53F7D4u) { return; }
        }
        }
    }
    ctx->pc = 0x53F7D4u;
label_53f7d4:
    // 0x53f7d4: 0x1000000d  b           . + 4 + (0xD << 2)
label_53f7d8:
    if (ctx->pc == 0x53F7D8u) {
        ctx->pc = 0x53F7D8u;
            // 0x53f7d8: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x53F7DCu;
        goto label_53f7dc;
    }
    ctx->pc = 0x53F7D4u;
    {
        const bool branch_taken_0x53f7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53F7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F7D4u;
            // 0x53f7d8: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53f7d4) {
            ctx->pc = 0x53F80Cu;
            goto label_53f80c;
        }
    }
    ctx->pc = 0x53F7DCu;
label_53f7dc:
    // 0x53f7dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53f7e0:
    // 0x53f7e0: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
label_53f7e4:
    if (ctx->pc == 0x53F7E4u) {
        ctx->pc = 0x53F7E8u;
        goto label_53f7e8;
    }
    ctx->pc = 0x53F7E0u;
    {
        const bool branch_taken_0x53f7e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x53f7e0) {
            ctx->pc = 0x53F808u;
            goto label_53f808;
        }
    }
    ctx->pc = 0x53F7E8u;
label_53f7e8:
    // 0x53f7e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53f7e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53f7ec:
    // 0x53f7ec: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x53f7ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_53f7f0:
    // 0x53f7f0: 0x320f809  jalr        $t9
label_53f7f4:
    if (ctx->pc == 0x53F7F4u) {
        ctx->pc = 0x53F7F4u;
            // 0x53f7f4: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->pc = 0x53F7F8u;
        goto label_53f7f8;
    }
    ctx->pc = 0x53F7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53F7F8u);
        ctx->pc = 0x53F7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F7F0u;
            // 0x53f7f4: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53F7F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53F7F8u; }
            if (ctx->pc != 0x53F7F8u) { return; }
        }
        }
    }
    ctx->pc = 0x53F7F8u;
label_53f7f8:
    // 0x53f7f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53f7fc:
    // 0x53f7fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x53f7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_53f800:
    // 0x53f800: 0xc1502f0  jal         func_540BC0
label_53f804:
    if (ctx->pc == 0x53F804u) {
        ctx->pc = 0x53F804u;
            // 0x53f804: 0xae4200c8  sw          $v0, 0xC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
        ctx->pc = 0x53F808u;
        goto label_53f808;
    }
    ctx->pc = 0x53F800u;
    SET_GPR_U32(ctx, 31, 0x53F808u);
    ctx->pc = 0x53F804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F800u;
            // 0x53f804: 0xae4200c8  sw          $v0, 0xC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x540BC0u;
    if (runtime->hasFunction(0x540BC0u)) {
        auto targetFn = runtime->lookupFunction(0x540BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F808u; }
        if (ctx->pc != 0x53F808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00540BC0_0x540bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F808u; }
        if (ctx->pc != 0x53F808u) { return; }
    }
    ctx->pc = 0x53F808u;
label_53f808:
    // 0x53f808: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x53f808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_53f80c:
    // 0x53f80c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x53f80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53f810:
    // 0x53f810: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x53f810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53f814:
    // 0x53f814: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x53f814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_53f818:
    // 0x53f818: 0x320f809  jalr        $t9
label_53f81c:
    if (ctx->pc == 0x53F81Cu) {
        ctx->pc = 0x53F81Cu;
            // 0x53f81c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F820u;
        goto label_53f820;
    }
    ctx->pc = 0x53F818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53F820u);
        ctx->pc = 0x53F81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F818u;
            // 0x53f81c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53F820u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53F820u; }
            if (ctx->pc != 0x53F820u) { return; }
        }
        }
    }
    ctx->pc = 0x53F820u;
label_53f820:
    // 0x53f820: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x53f820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_53f824:
    // 0x53f824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53f824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53f828:
    // 0x53f828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53f828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53f82c:
    // 0x53f82c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53f82cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53f830:
    // 0x53f830: 0x3e00008  jr          $ra
label_53f834:
    if (ctx->pc == 0x53F834u) {
        ctx->pc = 0x53F834u;
            // 0x53f834: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x53F838u;
        goto label_53f838;
    }
    ctx->pc = 0x53F830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53F834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F830u;
            // 0x53f834: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F838u;
label_53f838:
    // 0x53f838: 0x0  nop
    ctx->pc = 0x53f838u;
    // NOP
label_53f83c:
    // 0x53f83c: 0x0  nop
    ctx->pc = 0x53f83cu;
    // NOP
label_53f840:
    // 0x53f840: 0x814f3f0  j           func_53CFC0
label_53f844:
    if (ctx->pc == 0x53F844u) {
        ctx->pc = 0x53F848u;
        goto label_53f848;
    }
    ctx->pc = 0x53F840u;
    ctx->pc = 0x53CFC0u;
    {
        auto targetFn = runtime->lookupFunction(0x53CFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x53F848u;
label_53f848:
    // 0x53f848: 0x0  nop
    ctx->pc = 0x53f848u;
    // NOP
label_53f84c:
    // 0x53f84c: 0x0  nop
    ctx->pc = 0x53f84cu;
    // NOP
label_53f850:
    // 0x53f850: 0x3e00008  jr          $ra
label_53f854:
    if (ctx->pc == 0x53F854u) {
        ctx->pc = 0x53F858u;
        goto label_53f858;
    }
    ctx->pc = 0x53F850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F858u;
label_53f858:
    // 0x53f858: 0x0  nop
    ctx->pc = 0x53f858u;
    // NOP
label_53f85c:
    // 0x53f85c: 0x0  nop
    ctx->pc = 0x53f85cu;
    // NOP
label_53f860:
    // 0x53f860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53f860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_53f864:
    // 0x53f864: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x53f864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_53f868:
    // 0x53f868: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x53f868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_53f86c:
    // 0x53f86c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53f86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53f870:
    // 0x53f870: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53f870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53f874:
    // 0x53f874: 0x8c703e28  lw          $s0, 0x3E28($v1)
    ctx->pc = 0x53f874u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15912)));
label_53f878:
    // 0x53f878: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x53f878u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53f87c:
    // 0x53f87c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x53f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_53f880:
    // 0x53f880: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_53f884:
    if (ctx->pc == 0x53F884u) {
        ctx->pc = 0x53F884u;
            // 0x53f884: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F888u;
        goto label_53f888;
    }
    ctx->pc = 0x53F880u;
    {
        const bool branch_taken_0x53f880 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x53F884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F880u;
            // 0x53f884: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53f880) {
            ctx->pc = 0x53F8B4u;
            goto label_53f8b4;
        }
    }
    ctx->pc = 0x53F888u;
label_53f888:
    // 0x53f888: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x53f888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53f88c:
    // 0x53f88c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_53f890:
    if (ctx->pc == 0x53F890u) {
        ctx->pc = 0x53F894u;
        goto label_53f894;
    }
    ctx->pc = 0x53F88Cu;
    {
        const bool branch_taken_0x53f88c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53f88c) {
            ctx->pc = 0x53F89Cu;
            goto label_53f89c;
        }
    }
    ctx->pc = 0x53F894u;
label_53f894:
    // 0x53f894: 0x1000002c  b           . + 4 + (0x2C << 2)
label_53f898:
    if (ctx->pc == 0x53F898u) {
        ctx->pc = 0x53F898u;
            // 0x53f898: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x53F89Cu;
        goto label_53f89c;
    }
    ctx->pc = 0x53F894u;
    {
        const bool branch_taken_0x53f894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53F898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F894u;
            // 0x53f898: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53f894) {
            ctx->pc = 0x53F948u;
            goto label_53f948;
        }
    }
    ctx->pc = 0x53F89Cu;
label_53f89c:
    // 0x53f89c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x53f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_53f8a0:
    // 0x53f8a0: 0xa040b6d8  sb          $zero, -0x4928($v0)
    ctx->pc = 0x53f8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948568), (uint8_t)GPR_U32(ctx, 0));
label_53f8a4:
    // 0x53f8a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53f8a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53f8a8:
    // 0x53f8a8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x53f8a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_53f8ac:
    // 0x53f8ac: 0x320f809  jalr        $t9
label_53f8b0:
    if (ctx->pc == 0x53F8B0u) {
        ctx->pc = 0x53F8B4u;
        goto label_53f8b4;
    }
    ctx->pc = 0x53F8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53F8B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53F8B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53F8B4u; }
            if (ctx->pc != 0x53F8B4u) { return; }
        }
        }
    }
    ctx->pc = 0x53F8B4u;
label_53f8b4:
    // 0x53f8b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53f8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53f8b8:
    // 0x53f8b8: 0xc14f564  jal         func_53D590
label_53f8bc:
    if (ctx->pc == 0x53F8BCu) {
        ctx->pc = 0x53F8BCu;
            // 0x53f8bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x53F8C0u;
        goto label_53f8c0;
    }
    ctx->pc = 0x53F8B8u;
    SET_GPR_U32(ctx, 31, 0x53F8C0u);
    ctx->pc = 0x53F8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F8B8u;
            // 0x53f8bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D590u;
    if (runtime->hasFunction(0x53D590u)) {
        auto targetFn = runtime->lookupFunction(0x53D590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F8C0u; }
        if (ctx->pc != 0x53F8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D590_0x53d590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F8C0u; }
        if (ctx->pc != 0x53F8C0u) { return; }
    }
    ctx->pc = 0x53F8C0u;
label_53f8c0:
    // 0x53f8c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x53f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53f8c4:
    // 0x53f8c4: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
label_53f8c8:
    if (ctx->pc == 0x53F8C8u) {
        ctx->pc = 0x53F8CCu;
        goto label_53f8cc;
    }
    ctx->pc = 0x53F8C4u;
    {
        const bool branch_taken_0x53f8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x53f8c4) {
            ctx->pc = 0x53F944u;
            goto label_53f944;
        }
    }
    ctx->pc = 0x53F8CCu;
label_53f8cc:
    // 0x53f8cc: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x53f8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_53f8d0:
    // 0x53f8d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53f8d4:
    // 0x53f8d4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_53f8d8:
    if (ctx->pc == 0x53F8D8u) {
        ctx->pc = 0x53F8D8u;
            // 0x53f8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F8DCu;
        goto label_53f8dc;
    }
    ctx->pc = 0x53F8D4u;
    {
        const bool branch_taken_0x53f8d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x53f8d4) {
            ctx->pc = 0x53F8D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F8D4u;
            // 0x53f8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53F8FCu;
            goto label_53f8fc;
        }
    }
    ctx->pc = 0x53F8DCu;
label_53f8dc:
    // 0x53f8dc: 0xc14d588  jal         func_535620
label_53f8e0:
    if (ctx->pc == 0x53F8E0u) {
        ctx->pc = 0x53F8E0u;
            // 0x53f8e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F8E4u;
        goto label_53f8e4;
    }
    ctx->pc = 0x53F8DCu;
    SET_GPR_U32(ctx, 31, 0x53F8E4u);
    ctx->pc = 0x53F8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F8DCu;
            // 0x53f8e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x535620u;
    if (runtime->hasFunction(0x535620u)) {
        auto targetFn = runtime->lookupFunction(0x535620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F8E4u; }
        if (ctx->pc != 0x53F8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535620_0x535620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F8E4u; }
        if (ctx->pc != 0x53F8E4u) { return; }
    }
    ctx->pc = 0x53F8E4u;
label_53f8e4:
    // 0x53f8e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_53f8e8:
    if (ctx->pc == 0x53F8E8u) {
        ctx->pc = 0x53F8ECu;
        goto label_53f8ec;
    }
    ctx->pc = 0x53F8E4u;
    {
        const bool branch_taken_0x53f8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f8e4) {
            ctx->pc = 0x53F8F8u;
            goto label_53f8f8;
        }
    }
    ctx->pc = 0x53F8ECu;
label_53f8ec:
    // 0x53f8ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53f8f0:
    // 0x53f8f0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x53f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_53f8f4:
    // 0x53f8f4: 0xa043b6e8  sb          $v1, -0x4918($v0)
    ctx->pc = 0x53f8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948584), (uint8_t)GPR_U32(ctx, 3));
label_53f8f8:
    // 0x53f8f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53f8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53f8fc:
    // 0x53f8fc: 0xc14d588  jal         func_535620
label_53f900:
    if (ctx->pc == 0x53F900u) {
        ctx->pc = 0x53F904u;
        goto label_53f904;
    }
    ctx->pc = 0x53F8FCu;
    SET_GPR_U32(ctx, 31, 0x53F904u);
    ctx->pc = 0x535620u;
    if (runtime->hasFunction(0x535620u)) {
        auto targetFn = runtime->lookupFunction(0x535620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F904u; }
        if (ctx->pc != 0x53F904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535620_0x535620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F904u; }
        if (ctx->pc != 0x53F904u) { return; }
    }
    ctx->pc = 0x53F904u;
label_53f904:
    // 0x53f904: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_53f908:
    if (ctx->pc == 0x53F908u) {
        ctx->pc = 0x53F90Cu;
        goto label_53f90c;
    }
    ctx->pc = 0x53F904u;
    {
        const bool branch_taken_0x53f904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f904) {
            ctx->pc = 0x53F924u;
            goto label_53f924;
        }
    }
    ctx->pc = 0x53F90Cu;
label_53f90c:
    // 0x53f90c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x53f90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53f910:
    // 0x53f910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53f910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53f914:
    // 0x53f914: 0xc14f5bc  jal         func_53D6F0
label_53f918:
    if (ctx->pc == 0x53F918u) {
        ctx->pc = 0x53F918u;
            // 0x53f918: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F91Cu;
        goto label_53f91c;
    }
    ctx->pc = 0x53F914u;
    SET_GPR_U32(ctx, 31, 0x53F91Cu);
    ctx->pc = 0x53F918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F914u;
            // 0x53f918: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D6F0u;
    if (runtime->hasFunction(0x53D6F0u)) {
        auto targetFn = runtime->lookupFunction(0x53D6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F91Cu; }
        if (ctx->pc != 0x53F91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D6F0_0x53d6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F91Cu; }
        if (ctx->pc != 0x53F91Cu) { return; }
    }
    ctx->pc = 0x53F91Cu;
label_53f91c:
    // 0x53f91c: 0x10000009  b           . + 4 + (0x9 << 2)
label_53f920:
    if (ctx->pc == 0x53F920u) {
        ctx->pc = 0x53F924u;
        goto label_53f924;
    }
    ctx->pc = 0x53F91Cu;
    {
        const bool branch_taken_0x53f91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f91c) {
            ctx->pc = 0x53F944u;
            goto label_53f944;
        }
    }
    ctx->pc = 0x53F924u;
label_53f924:
    // 0x53f924: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x53f924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_53f928:
    // 0x53f928: 0x9063b6d8  lbu         $v1, -0x4928($v1)
    ctx->pc = 0x53f928u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948568)));
label_53f92c:
    // 0x53f92c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_53f930:
    if (ctx->pc == 0x53F930u) {
        ctx->pc = 0x53F934u;
        goto label_53f934;
    }
    ctx->pc = 0x53F92Cu;
    {
        const bool branch_taken_0x53f92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f92c) {
            ctx->pc = 0x53F944u;
            goto label_53f944;
        }
    }
    ctx->pc = 0x53F934u;
label_53f934:
    // 0x53f934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53f934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53f938:
    // 0x53f938: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x53f938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53f93c:
    // 0x53f93c: 0xc14f5bc  jal         func_53D6F0
label_53f940:
    if (ctx->pc == 0x53F940u) {
        ctx->pc = 0x53F940u;
            // 0x53f940: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53F944u;
        goto label_53f944;
    }
    ctx->pc = 0x53F93Cu;
    SET_GPR_U32(ctx, 31, 0x53F944u);
    ctx->pc = 0x53F940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F93Cu;
            // 0x53f940: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D6F0u;
    if (runtime->hasFunction(0x53D6F0u)) {
        auto targetFn = runtime->lookupFunction(0x53D6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F944u; }
        if (ctx->pc != 0x53F944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D6F0_0x53d6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F944u; }
        if (ctx->pc != 0x53F944u) { return; }
    }
    ctx->pc = 0x53F944u;
label_53f944:
    // 0x53f944: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53f944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_53f948:
    // 0x53f948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53f948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53f94c:
    // 0x53f94c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53f94cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53f950:
    // 0x53f950: 0x3e00008  jr          $ra
label_53f954:
    if (ctx->pc == 0x53F954u) {
        ctx->pc = 0x53F954u;
            // 0x53f954: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53F958u;
        goto label_53f958;
    }
    ctx->pc = 0x53F950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53F954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F950u;
            // 0x53f954: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F958u;
label_53f958:
    // 0x53f958: 0x0  nop
    ctx->pc = 0x53f958u;
    // NOP
label_53f95c:
    // 0x53f95c: 0x0  nop
    ctx->pc = 0x53f95cu;
    // NOP
label_53f960:
    // 0x53f960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x53f960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_53f964:
    // 0x53f964: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x53f964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_53f968:
    // 0x53f968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x53f968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_53f96c:
    // 0x53f96c: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x53f96cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53f970:
    // 0x53f970: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_53f974:
    if (ctx->pc == 0x53F974u) {
        ctx->pc = 0x53F974u;
            // 0x53f974: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x53F978u;
        goto label_53f978;
    }
    ctx->pc = 0x53F970u;
    {
        const bool branch_taken_0x53f970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x53f970) {
            ctx->pc = 0x53F974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F970u;
            // 0x53f974: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53F980u;
            goto label_53f980;
        }
    }
    ctx->pc = 0x53F978u;
label_53f978:
    // 0x53f978: 0x10000006  b           . + 4 + (0x6 << 2)
label_53f97c:
    if (ctx->pc == 0x53F97Cu) {
        ctx->pc = 0x53F980u;
        goto label_53f980;
    }
    ctx->pc = 0x53F978u;
    {
        const bool branch_taken_0x53f978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53f978) {
            ctx->pc = 0x53F994u;
            goto label_53f994;
        }
    }
    ctx->pc = 0x53F980u;
label_53f980:
    // 0x53f980: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x53f980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_53f984:
    // 0x53f984: 0x320f809  jalr        $t9
label_53f988:
    if (ctx->pc == 0x53F988u) {
        ctx->pc = 0x53F98Cu;
        goto label_53f98c;
    }
    ctx->pc = 0x53F984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53F98Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53F98Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53F98Cu; }
            if (ctx->pc != 0x53F98Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53F98Cu;
label_53f98c:
    // 0x53f98c: 0x10000004  b           . + 4 + (0x4 << 2)
label_53f990:
    if (ctx->pc == 0x53F990u) {
        ctx->pc = 0x53F990u;
            // 0x53f990: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x53F994u;
        goto label_53f994;
    }
    ctx->pc = 0x53F98Cu;
    {
        const bool branch_taken_0x53f98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53F990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F98Cu;
            // 0x53f990: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53f98c) {
            ctx->pc = 0x53F9A0u;
            goto label_53f9a0;
        }
    }
    ctx->pc = 0x53F994u;
label_53f994:
    // 0x53f994: 0xc1501b4  jal         func_5406D0
label_53f998:
    if (ctx->pc == 0x53F998u) {
        ctx->pc = 0x53F99Cu;
        goto label_53f99c;
    }
    ctx->pc = 0x53F994u;
    SET_GPR_U32(ctx, 31, 0x53F99Cu);
    ctx->pc = 0x5406D0u;
    if (runtime->hasFunction(0x5406D0u)) {
        auto targetFn = runtime->lookupFunction(0x5406D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F99Cu; }
        if (ctx->pc != 0x53F99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005406D0_0x5406d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F99Cu; }
        if (ctx->pc != 0x53F99Cu) { return; }
    }
    ctx->pc = 0x53F99Cu;
label_53f99c:
    // 0x53f99c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x53f99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_53f9a0:
    // 0x53f9a0: 0x3e00008  jr          $ra
label_53f9a4:
    if (ctx->pc == 0x53F9A4u) {
        ctx->pc = 0x53F9A4u;
            // 0x53f9a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x53F9A8u;
        goto label_53f9a8;
    }
    ctx->pc = 0x53F9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53F9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F9A0u;
            // 0x53f9a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F9A8u;
label_53f9a8:
    // 0x53f9a8: 0x0  nop
    ctx->pc = 0x53f9a8u;
    // NOP
label_53f9ac:
    // 0x53f9ac: 0x0  nop
    ctx->pc = 0x53f9acu;
    // NOP
label_53f9b0:
    // 0x53f9b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x53f9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_53f9b4:
    // 0x53f9b4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x53f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_53f9b8:
    // 0x53f9b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x53f9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_53f9bc:
    // 0x53f9bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53f9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53f9c0:
    // 0x53f9c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53f9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53f9c4:
    // 0x53f9c4: 0x8c703e28  lw          $s0, 0x3E28($v1)
    ctx->pc = 0x53f9c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15912)));
label_53f9c8:
    // 0x53f9c8: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x53f9c8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53f9cc:
    // 0x53f9cc: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x53f9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_53f9d0:
    // 0x53f9d0: 0x10c300b1  beq         $a2, $v1, . + 4 + (0xB1 << 2)
label_53f9d4:
    if (ctx->pc == 0x53F9D4u) {
        ctx->pc = 0x53F9D4u;
            // 0x53f9d4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53F9D8u;
        goto label_53f9d8;
    }
    ctx->pc = 0x53F9D0u;
    {
        const bool branch_taken_0x53f9d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x53F9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F9D0u;
            // 0x53f9d4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53f9d0) {
            ctx->pc = 0x53FC98u;
            goto label_53fc98;
        }
    }
    ctx->pc = 0x53F9D8u;
label_53f9d8:
    // 0x53f9d8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x53f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_53f9dc:
    // 0x53f9dc: 0x50c300aa  beql        $a2, $v1, . + 4 + (0xAA << 2)
label_53f9e0:
    if (ctx->pc == 0x53F9E0u) {
        ctx->pc = 0x53F9E0u;
            // 0x53f9e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x53F9E4u;
        goto label_53f9e4;
    }
    ctx->pc = 0x53F9DCu;
    {
        const bool branch_taken_0x53f9dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x53f9dc) {
            ctx->pc = 0x53F9E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F9DCu;
            // 0x53f9e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FC88u;
            goto label_53fc88;
        }
    }
    ctx->pc = 0x53F9E4u;
label_53f9e4:
    // 0x53f9e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x53f9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_53f9e8:
    // 0x53f9e8: 0x50c30097  beql        $a2, $v1, . + 4 + (0x97 << 2)
label_53f9ec:
    if (ctx->pc == 0x53F9ECu) {
        ctx->pc = 0x53F9ECu;
            // 0x53f9ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53F9F0u;
        goto label_53f9f0;
    }
    ctx->pc = 0x53F9E8u;
    {
        const bool branch_taken_0x53f9e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x53f9e8) {
            ctx->pc = 0x53F9ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F9E8u;
            // 0x53f9ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FC48u;
            goto label_53fc48;
        }
    }
    ctx->pc = 0x53F9F0u;
label_53f9f0:
    // 0x53f9f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x53f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_53f9f4:
    // 0x53f9f4: 0x50c3007d  beql        $a2, $v1, . + 4 + (0x7D << 2)
label_53f9f8:
    if (ctx->pc == 0x53F9F8u) {
        ctx->pc = 0x53F9F8u;
            // 0x53f9f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x53F9FCu;
        goto label_53f9fc;
    }
    ctx->pc = 0x53F9F4u;
    {
        const bool branch_taken_0x53f9f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x53f9f4) {
            ctx->pc = 0x53F9F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53F9F4u;
            // 0x53f9f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FBECu;
            goto label_53fbec;
        }
    }
    ctx->pc = 0x53F9FCu;
label_53f9fc:
    // 0x53f9fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x53f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_53fa00:
    // 0x53fa00: 0x50c3003d  beql        $a2, $v1, . + 4 + (0x3D << 2)
label_53fa04:
    if (ctx->pc == 0x53FA04u) {
        ctx->pc = 0x53FA04u;
            // 0x53fa04: 0x8e2400c0  lw          $a0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->pc = 0x53FA08u;
        goto label_53fa08;
    }
    ctx->pc = 0x53FA00u;
    {
        const bool branch_taken_0x53fa00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x53fa00) {
            ctx->pc = 0x53FA04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FA00u;
            // 0x53fa04: 0x8e2400c0  lw          $a0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FAF8u;
            goto label_53faf8;
        }
    }
    ctx->pc = 0x53FA08u;
label_53fa08:
    // 0x53fa08: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x53fa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53fa0c:
    // 0x53fa0c: 0x50c50003  beql        $a2, $a1, . + 4 + (0x3 << 2)
label_53fa10:
    if (ctx->pc == 0x53FA10u) {
        ctx->pc = 0x53FA10u;
            // 0x53fa10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53FA14u;
        goto label_53fa14;
    }
    ctx->pc = 0x53FA0Cu;
    {
        const bool branch_taken_0x53fa0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x53fa0c) {
            ctx->pc = 0x53FA10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FA0Cu;
            // 0x53fa10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FA1Cu;
            goto label_53fa1c;
        }
    }
    ctx->pc = 0x53FA14u;
label_53fa14:
    // 0x53fa14: 0x100000fa  b           . + 4 + (0xFA << 2)
label_53fa18:
    if (ctx->pc == 0x53FA18u) {
        ctx->pc = 0x53FA18u;
            // 0x53fa18: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x53FA1Cu;
        goto label_53fa1c;
    }
    ctx->pc = 0x53FA14u;
    {
        const bool branch_taken_0x53fa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53FA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FA14u;
            // 0x53fa18: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53fa14) {
            ctx->pc = 0x53FE00u;
            goto label_53fe00;
        }
    }
    ctx->pc = 0x53FA1Cu;
label_53fa1c:
    // 0x53fa1c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_53fa20:
    // 0x53fa20: 0xa22300c4  sb          $v1, 0xC4($s1)
    ctx->pc = 0x53fa20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 196), (uint8_t)GPR_U32(ctx, 3));
label_53fa24:
    // 0x53fa24: 0xa043cff8  sb          $v1, -0x3008($v0)
    ctx->pc = 0x53fa24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294955000), (uint8_t)GPR_U32(ctx, 3));
label_53fa28:
    // 0x53fa28: 0xc1502f0  jal         func_540BC0
label_53fa2c:
    if (ctx->pc == 0x53FA2Cu) {
        ctx->pc = 0x53FA2Cu;
            // 0x53fa2c: 0xae2500c8  sw          $a1, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 5));
        ctx->pc = 0x53FA30u;
        goto label_53fa30;
    }
    ctx->pc = 0x53FA28u;
    SET_GPR_U32(ctx, 31, 0x53FA30u);
    ctx->pc = 0x53FA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FA28u;
            // 0x53fa2c: 0xae2500c8  sw          $a1, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x540BC0u;
    if (runtime->hasFunction(0x540BC0u)) {
        auto targetFn = runtime->lookupFunction(0x540BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FA30u; }
        if (ctx->pc != 0x53FA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00540BC0_0x540bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FA30u; }
        if (ctx->pc != 0x53FA30u) { return; }
    }
    ctx->pc = 0x53FA30u;
label_53fa30:
    // 0x53fa30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53fa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53fa34:
    // 0x53fa34: 0xc14f564  jal         func_53D590
label_53fa38:
    if (ctx->pc == 0x53FA38u) {
        ctx->pc = 0x53FA38u;
            // 0x53fa38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53FA3Cu;
        goto label_53fa3c;
    }
    ctx->pc = 0x53FA34u;
    SET_GPR_U32(ctx, 31, 0x53FA3Cu);
    ctx->pc = 0x53FA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FA34u;
            // 0x53fa38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D590u;
    if (runtime->hasFunction(0x53D590u)) {
        auto targetFn = runtime->lookupFunction(0x53D590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FA3Cu; }
        if (ctx->pc != 0x53FA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D590_0x53d590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FA3Cu; }
        if (ctx->pc != 0x53FA3Cu) { return; }
    }
    ctx->pc = 0x53FA3Cu;
label_53fa3c:
    // 0x53fa3c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_53fa40:
    if (ctx->pc == 0x53FA40u) {
        ctx->pc = 0x53FA40u;
            // 0x53fa40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53FA44u;
        goto label_53fa44;
    }
    ctx->pc = 0x53FA3Cu;
    {
        const bool branch_taken_0x53fa3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x53fa3c) {
            ctx->pc = 0x53FA40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FA3Cu;
            // 0x53fa40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FA8Cu;
            goto label_53fa8c;
        }
    }
    ctx->pc = 0x53FA44u;
label_53fa44:
    // 0x53fa44: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x53fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_53fa48:
    // 0x53fa48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53fa4c:
    // 0x53fa4c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_53fa50:
    if (ctx->pc == 0x53FA50u) {
        ctx->pc = 0x53FA50u;
            // 0x53fa50: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x53FA54u;
        goto label_53fa54;
    }
    ctx->pc = 0x53FA4Cu;
    {
        const bool branch_taken_0x53fa4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x53fa4c) {
            ctx->pc = 0x53FA50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FA4Cu;
            // 0x53fa50: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FA74u;
            goto label_53fa74;
        }
    }
    ctx->pc = 0x53FA54u;
label_53fa54:
    // 0x53fa54: 0xc14d588  jal         func_535620
label_53fa58:
    if (ctx->pc == 0x53FA58u) {
        ctx->pc = 0x53FA58u;
            // 0x53fa58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FA5Cu;
        goto label_53fa5c;
    }
    ctx->pc = 0x53FA54u;
    SET_GPR_U32(ctx, 31, 0x53FA5Cu);
    ctx->pc = 0x53FA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FA54u;
            // 0x53fa58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x535620u;
    if (runtime->hasFunction(0x535620u)) {
        auto targetFn = runtime->lookupFunction(0x535620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FA5Cu; }
        if (ctx->pc != 0x53FA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535620_0x535620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FA5Cu; }
        if (ctx->pc != 0x53FA5Cu) { return; }
    }
    ctx->pc = 0x53FA5Cu;
label_53fa5c:
    // 0x53fa5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_53fa60:
    if (ctx->pc == 0x53FA60u) {
        ctx->pc = 0x53FA64u;
        goto label_53fa64;
    }
    ctx->pc = 0x53FA5Cu;
    {
        const bool branch_taken_0x53fa5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fa5c) {
            ctx->pc = 0x53FA70u;
            goto label_53fa70;
        }
    }
    ctx->pc = 0x53FA64u;
label_53fa64:
    // 0x53fa64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53fa68:
    // 0x53fa68: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x53fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_53fa6c:
    // 0x53fa6c: 0xa043b6e8  sb          $v1, -0x4918($v0)
    ctx->pc = 0x53fa6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948584), (uint8_t)GPR_U32(ctx, 3));
label_53fa70:
    // 0x53fa70: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x53fa70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_53fa74:
    // 0x53fa74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53fa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53fa78:
    // 0x53fa78: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x53fa78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_53fa7c:
    // 0x53fa7c: 0x320f809  jalr        $t9
label_53fa80:
    if (ctx->pc == 0x53FA80u) {
        ctx->pc = 0x53FA80u;
            // 0x53fa80: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x53FA84u;
        goto label_53fa84;
    }
    ctx->pc = 0x53FA7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53FA84u);
        ctx->pc = 0x53FA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FA7Cu;
            // 0x53fa80: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53FA84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53FA84u; }
            if (ctx->pc != 0x53FA84u) { return; }
        }
        }
    }
    ctx->pc = 0x53FA84u;
label_53fa84:
    // 0x53fa84: 0x100000dd  b           . + 4 + (0xDD << 2)
label_53fa88:
    if (ctx->pc == 0x53FA88u) {
        ctx->pc = 0x53FA8Cu;
        goto label_53fa8c;
    }
    ctx->pc = 0x53FA84u;
    {
        const bool branch_taken_0x53fa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fa84) {
            ctx->pc = 0x53FDFCu;
            goto label_53fdfc;
        }
    }
    ctx->pc = 0x53FA8Cu;
label_53fa8c:
    // 0x53fa8c: 0x144400db  bne         $v0, $a0, . + 4 + (0xDB << 2)
label_53fa90:
    if (ctx->pc == 0x53FA90u) {
        ctx->pc = 0x53FA94u;
        goto label_53fa94;
    }
    ctx->pc = 0x53FA8Cu;
    {
        const bool branch_taken_0x53fa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x53fa8c) {
            ctx->pc = 0x53FDFCu;
            goto label_53fdfc;
        }
    }
    ctx->pc = 0x53FA94u;
label_53fa94:
    // 0x53fa94: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x53fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_53fa98:
    // 0x53fa98: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
label_53fa9c:
    if (ctx->pc == 0x53FA9Cu) {
        ctx->pc = 0x53FAA0u;
        goto label_53faa0;
    }
    ctx->pc = 0x53FA98u;
    {
        const bool branch_taken_0x53fa98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x53fa98) {
            ctx->pc = 0x53FABCu;
            goto label_53fabc;
        }
    }
    ctx->pc = 0x53FAA0u;
label_53faa0:
    // 0x53faa0: 0xc14d588  jal         func_535620
label_53faa4:
    if (ctx->pc == 0x53FAA4u) {
        ctx->pc = 0x53FAA4u;
            // 0x53faa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FAA8u;
        goto label_53faa8;
    }
    ctx->pc = 0x53FAA0u;
    SET_GPR_U32(ctx, 31, 0x53FAA8u);
    ctx->pc = 0x53FAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FAA0u;
            // 0x53faa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x535620u;
    if (runtime->hasFunction(0x535620u)) {
        auto targetFn = runtime->lookupFunction(0x535620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FAA8u; }
        if (ctx->pc != 0x53FAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535620_0x535620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FAA8u; }
        if (ctx->pc != 0x53FAA8u) { return; }
    }
    ctx->pc = 0x53FAA8u;
label_53faa8:
    // 0x53faa8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_53faac:
    if (ctx->pc == 0x53FAACu) {
        ctx->pc = 0x53FAB0u;
        goto label_53fab0;
    }
    ctx->pc = 0x53FAA8u;
    {
        const bool branch_taken_0x53faa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53faa8) {
            ctx->pc = 0x53FABCu;
            goto label_53fabc;
        }
    }
    ctx->pc = 0x53FAB0u;
label_53fab0:
    // 0x53fab0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x53fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53fab4:
    // 0x53fab4: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x53fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_53fab8:
    // 0x53fab8: 0xa064b6e8  sb          $a0, -0x4918($v1)
    ctx->pc = 0x53fab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294948584), (uint8_t)GPR_U32(ctx, 4));
label_53fabc:
    // 0x53fabc: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x53fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_53fac0:
    // 0x53fac0: 0x9063b6e0  lbu         $v1, -0x4920($v1)
    ctx->pc = 0x53fac0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948576)));
label_53fac4:
    // 0x53fac4: 0x146000cd  bnez        $v1, . + 4 + (0xCD << 2)
label_53fac8:
    if (ctx->pc == 0x53FAC8u) {
        ctx->pc = 0x53FACCu;
        goto label_53facc;
    }
    ctx->pc = 0x53FAC4u;
    {
        const bool branch_taken_0x53fac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x53fac4) {
            ctx->pc = 0x53FDFCu;
            goto label_53fdfc;
        }
    }
    ctx->pc = 0x53FACCu;
label_53facc:
    // 0x53facc: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x53faccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_53fad0:
    // 0x53fad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53fad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53fad4:
    // 0x53fad4: 0xc1502f0  jal         func_540BC0
label_53fad8:
    if (ctx->pc == 0x53FAD8u) {
        ctx->pc = 0x53FAD8u;
            // 0x53fad8: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->pc = 0x53FADCu;
        goto label_53fadc;
    }
    ctx->pc = 0x53FAD4u;
    SET_GPR_U32(ctx, 31, 0x53FADCu);
    ctx->pc = 0x53FAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FAD4u;
            // 0x53fad8: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x540BC0u;
    if (runtime->hasFunction(0x540BC0u)) {
        auto targetFn = runtime->lookupFunction(0x540BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FADCu; }
        if (ctx->pc != 0x53FADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00540BC0_0x540bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FADCu; }
        if (ctx->pc != 0x53FADCu) { return; }
    }
    ctx->pc = 0x53FADCu;
label_53fadc:
    // 0x53fadc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x53fadcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_53fae0:
    // 0x53fae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53fae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53fae4:
    // 0x53fae4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x53fae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_53fae8:
    // 0x53fae8: 0x320f809  jalr        $t9
label_53faec:
    if (ctx->pc == 0x53FAECu) {
        ctx->pc = 0x53FAECu;
            // 0x53faec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x53FAF0u;
        goto label_53faf0;
    }
    ctx->pc = 0x53FAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53FAF0u);
        ctx->pc = 0x53FAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FAE8u;
            // 0x53faec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53FAF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53FAF0u; }
            if (ctx->pc != 0x53FAF0u) { return; }
        }
        }
    }
    ctx->pc = 0x53FAF0u;
label_53faf0:
    // 0x53faf0: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_53faf4:
    if (ctx->pc == 0x53FAF4u) {
        ctx->pc = 0x53FAF8u;
        goto label_53faf8;
    }
    ctx->pc = 0x53FAF0u;
    {
        const bool branch_taken_0x53faf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53faf0) {
            ctx->pc = 0x53FDFCu;
            goto label_53fdfc;
        }
    }
    ctx->pc = 0x53FAF8u;
label_53faf8:
    // 0x53faf8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x53faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53fafc:
    // 0x53fafc: 0x5083001a  beql        $a0, $v1, . + 4 + (0x1A << 2)
label_53fb00:
    if (ctx->pc == 0x53FB00u) {
        ctx->pc = 0x53FB00u;
            // 0x53fb00: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FB04u;
        goto label_53fb04;
    }
    ctx->pc = 0x53FAFCu;
    {
        const bool branch_taken_0x53fafc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x53fafc) {
            ctx->pc = 0x53FB00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FAFCu;
            // 0x53fb00: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FB68u;
            goto label_53fb68;
        }
    }
    ctx->pc = 0x53FB04u;
label_53fb04:
    // 0x53fb04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53fb08:
    // 0x53fb08: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_53fb0c:
    if (ctx->pc == 0x53FB0Cu) {
        ctx->pc = 0x53FB10u;
        goto label_53fb10;
    }
    ctx->pc = 0x53FB08u;
    {
        const bool branch_taken_0x53fb08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x53fb08) {
            ctx->pc = 0x53FB38u;
            goto label_53fb38;
        }
    }
    ctx->pc = 0x53FB10u;
label_53fb10:
    // 0x53fb10: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_53fb14:
    if (ctx->pc == 0x53FB14u) {
        ctx->pc = 0x53FB14u;
            // 0x53fb14: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x53FB18u;
        goto label_53fb18;
    }
    ctx->pc = 0x53FB10u;
    {
        const bool branch_taken_0x53fb10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fb10) {
            ctx->pc = 0x53FB14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FB10u;
            // 0x53fb14: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FB20u;
            goto label_53fb20;
        }
    }
    ctx->pc = 0x53FB18u;
label_53fb18:
    // 0x53fb18: 0x10000012  b           . + 4 + (0x12 << 2)
label_53fb1c:
    if (ctx->pc == 0x53FB1Cu) {
        ctx->pc = 0x53FB20u;
        goto label_53fb20;
    }
    ctx->pc = 0x53FB18u;
    {
        const bool branch_taken_0x53fb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fb18) {
            ctx->pc = 0x53FB64u;
            goto label_53fb64;
        }
    }
    ctx->pc = 0x53FB20u;
label_53fb20:
    // 0x53fb20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53fb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53fb24:
    // 0x53fb24: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x53fb24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_53fb28:
    // 0x53fb28: 0x320f809  jalr        $t9
label_53fb2c:
    if (ctx->pc == 0x53FB2Cu) {
        ctx->pc = 0x53FB2Cu;
            // 0x53fb2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FB30u;
        goto label_53fb30;
    }
    ctx->pc = 0x53FB28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53FB30u);
        ctx->pc = 0x53FB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FB28u;
            // 0x53fb2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53FB30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53FB30u; }
            if (ctx->pc != 0x53FB30u) { return; }
        }
        }
    }
    ctx->pc = 0x53FB30u;
label_53fb30:
    // 0x53fb30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53fb34:
    // 0x53fb34: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x53fb34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
label_53fb38:
    // 0x53fb38: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53fb3c:
    // 0x53fb3c: 0x8c443e28  lw          $a0, 0x3E28($v0)
    ctx->pc = 0x53fb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
label_53fb40:
    // 0x53fb40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53fb40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53fb44:
    // 0x53fb44: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x53fb44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_53fb48:
    // 0x53fb48: 0x320f809  jalr        $t9
label_53fb4c:
    if (ctx->pc == 0x53FB4Cu) {
        ctx->pc = 0x53FB4Cu;
            // 0x53fb4c: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->pc = 0x53FB50u;
        goto label_53fb50;
    }
    ctx->pc = 0x53FB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53FB50u);
        ctx->pc = 0x53FB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FB48u;
            // 0x53fb4c: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53FB50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53FB50u; }
            if (ctx->pc != 0x53FB50u) { return; }
        }
        }
    }
    ctx->pc = 0x53FB50u;
label_53fb50:
    // 0x53fb50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_53fb54:
    if (ctx->pc == 0x53FB54u) {
        ctx->pc = 0x53FB58u;
        goto label_53fb58;
    }
    ctx->pc = 0x53FB50u;
    {
        const bool branch_taken_0x53fb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fb50) {
            ctx->pc = 0x53FB64u;
            goto label_53fb64;
        }
    }
    ctx->pc = 0x53FB58u;
label_53fb58:
    // 0x53fb58: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x53fb58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
label_53fb5c:
    // 0x53fb5c: 0x10000002  b           . + 4 + (0x2 << 2)
label_53fb60:
    if (ctx->pc == 0x53FB60u) {
        ctx->pc = 0x53FB60u;
            // 0x53fb60: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x53FB64u;
        goto label_53fb64;
    }
    ctx->pc = 0x53FB5Cu;
    {
        const bool branch_taken_0x53fb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53FB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FB5Cu;
            // 0x53fb60: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x53fb5c) {
            ctx->pc = 0x53FB68u;
            goto label_53fb68;
        }
    }
    ctx->pc = 0x53FB64u;
label_53fb64:
    // 0x53fb64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x53fb64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53fb68:
    // 0x53fb68: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
label_53fb6c:
    if (ctx->pc == 0x53FB6Cu) {
        ctx->pc = 0x53FB6Cu;
            // 0x53fb6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FB70u;
        goto label_53fb70;
    }
    ctx->pc = 0x53FB68u;
    {
        const bool branch_taken_0x53fb68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fb68) {
            ctx->pc = 0x53FB6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FB68u;
            // 0x53fb6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FBC0u;
            goto label_53fbc0;
        }
    }
    ctx->pc = 0x53FB70u;
label_53fb70:
    // 0x53fb70: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53fb74:
    // 0x53fb74: 0xc14d588  jal         func_535620
label_53fb78:
    if (ctx->pc == 0x53FB78u) {
        ctx->pc = 0x53FB78u;
            // 0x53fb78: 0x8c443e28  lw          $a0, 0x3E28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
        ctx->pc = 0x53FB7Cu;
        goto label_53fb7c;
    }
    ctx->pc = 0x53FB74u;
    SET_GPR_U32(ctx, 31, 0x53FB7Cu);
    ctx->pc = 0x53FB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FB74u;
            // 0x53fb78: 0x8c443e28  lw          $a0, 0x3E28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x535620u;
    if (runtime->hasFunction(0x535620u)) {
        auto targetFn = runtime->lookupFunction(0x535620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FB7Cu; }
        if (ctx->pc != 0x53FB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535620_0x535620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FB7Cu; }
        if (ctx->pc != 0x53FB7Cu) { return; }
    }
    ctx->pc = 0x53FB7Cu;
label_53fb7c:
    // 0x53fb7c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_53fb80:
    if (ctx->pc == 0x53FB80u) {
        ctx->pc = 0x53FB84u;
        goto label_53fb84;
    }
    ctx->pc = 0x53FB7Cu;
    {
        const bool branch_taken_0x53fb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fb7c) {
            ctx->pc = 0x53FBBCu;
            goto label_53fbbc;
        }
    }
    ctx->pc = 0x53FB84u;
label_53fb84:
    // 0x53fb84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53fb88:
    // 0x53fb88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53fb8c:
    // 0x53fb8c: 0x8c423e28  lw          $v0, 0x3E28($v0)
    ctx->pc = 0x53fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
label_53fb90:
    // 0x53fb90: 0xa0400022  sb          $zero, 0x22($v0)
    ctx->pc = 0x53fb90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 34), (uint8_t)GPR_U32(ctx, 0));
label_53fb94:
    // 0x53fb94: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x53fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_53fb98:
    // 0x53fb98: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_53fb9c:
    if (ctx->pc == 0x53FB9Cu) {
        ctx->pc = 0x53FB9Cu;
            // 0x53fb9c: 0x8e25006c  lw          $a1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->pc = 0x53FBA0u;
        goto label_53fba0;
    }
    ctx->pc = 0x53FB98u;
    {
        const bool branch_taken_0x53fb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x53fb98) {
            ctx->pc = 0x53FB9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FB98u;
            // 0x53fb9c: 0x8e25006c  lw          $a1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FBACu;
            goto label_53fbac;
        }
    }
    ctx->pc = 0x53FBA0u;
label_53fba0:
    // 0x53fba0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x53fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_53fba4:
    // 0x53fba4: 0xa043b6e8  sb          $v1, -0x4918($v0)
    ctx->pc = 0x53fba4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948584), (uint8_t)GPR_U32(ctx, 3));
label_53fba8:
    // 0x53fba8: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x53fba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_53fbac:
    // 0x53fbac: 0xc14f648  jal         func_53D920
label_53fbb0:
    if (ctx->pc == 0x53FBB0u) {
        ctx->pc = 0x53FBB0u;
            // 0x53fbb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FBB4u;
        goto label_53fbb4;
    }
    ctx->pc = 0x53FBACu;
    SET_GPR_U32(ctx, 31, 0x53FBB4u);
    ctx->pc = 0x53FBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FBACu;
            // 0x53fbb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D920u;
    if (runtime->hasFunction(0x53D920u)) {
        auto targetFn = runtime->lookupFunction(0x53D920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FBB4u; }
        if (ctx->pc != 0x53FBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D920_0x53d920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FBB4u; }
        if (ctx->pc != 0x53FBB4u) { return; }
    }
    ctx->pc = 0x53FBB4u;
label_53fbb4:
    // 0x53fbb4: 0x10000002  b           . + 4 + (0x2 << 2)
label_53fbb8:
    if (ctx->pc == 0x53FBB8u) {
        ctx->pc = 0x53FBB8u;
            // 0x53fbb8: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x53FBBCu;
        goto label_53fbbc;
    }
    ctx->pc = 0x53FBB4u;
    {
        const bool branch_taken_0x53fbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53FBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FBB4u;
            // 0x53fbb8: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x53fbb4) {
            ctx->pc = 0x53FBC0u;
            goto label_53fbc0;
        }
    }
    ctx->pc = 0x53FBBCu;
label_53fbbc:
    // 0x53fbbc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x53fbbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53fbc0:
    // 0x53fbc0: 0x1460008e  bnez        $v1, . + 4 + (0x8E << 2)
label_53fbc4:
    if (ctx->pc == 0x53FBC4u) {
        ctx->pc = 0x53FBC8u;
        goto label_53fbc8;
    }
    ctx->pc = 0x53FBC0u;
    {
        const bool branch_taken_0x53fbc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x53fbc0) {
            ctx->pc = 0x53FDFCu;
            goto label_53fdfc;
        }
    }
    ctx->pc = 0x53FBC8u;
label_53fbc8:
    // 0x53fbc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53fbcc:
    // 0x53fbcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53fbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53fbd0:
    // 0x53fbd0: 0xa22200c4  sb          $v0, 0xC4($s1)
    ctx->pc = 0x53fbd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 196), (uint8_t)GPR_U32(ctx, 2));
label_53fbd4:
    // 0x53fbd4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x53fbd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_53fbd8:
    // 0x53fbd8: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x53fbd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_53fbdc:
    // 0x53fbdc: 0x320f809  jalr        $t9
label_53fbe0:
    if (ctx->pc == 0x53FBE0u) {
        ctx->pc = 0x53FBE0u;
            // 0x53fbe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FBE4u;
        goto label_53fbe4;
    }
    ctx->pc = 0x53FBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53FBE4u);
        ctx->pc = 0x53FBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FBDCu;
            // 0x53fbe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53FBE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53FBE4u; }
            if (ctx->pc != 0x53FBE4u) { return; }
        }
        }
    }
    ctx->pc = 0x53FBE4u;
label_53fbe4:
    // 0x53fbe4: 0x10000085  b           . + 4 + (0x85 << 2)
label_53fbe8:
    if (ctx->pc == 0x53FBE8u) {
        ctx->pc = 0x53FBECu;
        goto label_53fbec;
    }
    ctx->pc = 0x53FBE4u;
    {
        const bool branch_taken_0x53fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fbe4) {
            ctx->pc = 0x53FDFCu;
            goto label_53fdfc;
        }
    }
    ctx->pc = 0x53FBECu;
label_53fbec:
    // 0x53fbec: 0xc1502f0  jal         func_540BC0
label_53fbf0:
    if (ctx->pc == 0x53FBF0u) {
        ctx->pc = 0x53FBF0u;
            // 0x53fbf0: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->pc = 0x53FBF4u;
        goto label_53fbf4;
    }
    ctx->pc = 0x53FBECu;
    SET_GPR_U32(ctx, 31, 0x53FBF4u);
    ctx->pc = 0x53FBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FBECu;
            // 0x53fbf0: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x540BC0u;
    if (runtime->hasFunction(0x540BC0u)) {
        auto targetFn = runtime->lookupFunction(0x540BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FBF4u; }
        if (ctx->pc != 0x53FBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00540BC0_0x540bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FBF4u; }
        if (ctx->pc != 0x53FBF4u) { return; }
    }
    ctx->pc = 0x53FBF4u;
label_53fbf4:
    // 0x53fbf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53fbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53fbf8:
    // 0x53fbf8: 0xc14f564  jal         func_53D590
label_53fbfc:
    if (ctx->pc == 0x53FBFCu) {
        ctx->pc = 0x53FBFCu;
            // 0x53fbfc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x53FC00u;
        goto label_53fc00;
    }
    ctx->pc = 0x53FBF8u;
    SET_GPR_U32(ctx, 31, 0x53FC00u);
    ctx->pc = 0x53FBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FBF8u;
            // 0x53fbfc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D590u;
    if (runtime->hasFunction(0x53D590u)) {
        auto targetFn = runtime->lookupFunction(0x53D590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FC00u; }
        if (ctx->pc != 0x53FC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D590_0x53d590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FC00u; }
        if (ctx->pc != 0x53FC00u) { return; }
    }
    ctx->pc = 0x53FC00u;
label_53fc00:
    // 0x53fc00: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_53fc04:
    if (ctx->pc == 0x53FC04u) {
        ctx->pc = 0x53FC04u;
            // 0x53fc04: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53FC08u;
        goto label_53fc08;
    }
    ctx->pc = 0x53FC00u;
    {
        const bool branch_taken_0x53fc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x53fc00) {
            ctx->pc = 0x53FC04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FC00u;
            // 0x53fc04: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FC24u;
            goto label_53fc24;
        }
    }
    ctx->pc = 0x53FC08u;
label_53fc08:
    // 0x53fc08: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x53fc08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_53fc0c:
    // 0x53fc0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53fc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53fc10:
    // 0x53fc10: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x53fc10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_53fc14:
    // 0x53fc14: 0x320f809  jalr        $t9
label_53fc18:
    if (ctx->pc == 0x53FC18u) {
        ctx->pc = 0x53FC18u;
            // 0x53fc18: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x53FC1Cu;
        goto label_53fc1c;
    }
    ctx->pc = 0x53FC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53FC1Cu);
        ctx->pc = 0x53FC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FC14u;
            // 0x53fc18: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53FC1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53FC1Cu; }
            if (ctx->pc != 0x53FC1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53FC1Cu;
label_53fc1c:
    // 0x53fc1c: 0x10000077  b           . + 4 + (0x77 << 2)
label_53fc20:
    if (ctx->pc == 0x53FC20u) {
        ctx->pc = 0x53FC24u;
        goto label_53fc24;
    }
    ctx->pc = 0x53FC1Cu;
    {
        const bool branch_taken_0x53fc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fc1c) {
            ctx->pc = 0x53FDFCu;
            goto label_53fdfc;
        }
    }
    ctx->pc = 0x53FC24u;
label_53fc24:
    // 0x53fc24: 0x14430075  bne         $v0, $v1, . + 4 + (0x75 << 2)
label_53fc28:
    if (ctx->pc == 0x53FC28u) {
        ctx->pc = 0x53FC2Cu;
        goto label_53fc2c;
    }
    ctx->pc = 0x53FC24u;
    {
        const bool branch_taken_0x53fc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x53fc24) {
            ctx->pc = 0x53FDFCu;
            goto label_53fdfc;
        }
    }
    ctx->pc = 0x53FC2Cu;
label_53fc2c:
    // 0x53fc2c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x53fc2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_53fc30:
    // 0x53fc30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53fc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53fc34:
    // 0x53fc34: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x53fc34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_53fc38:
    // 0x53fc38: 0x320f809  jalr        $t9
label_53fc3c:
    if (ctx->pc == 0x53FC3Cu) {
        ctx->pc = 0x53FC3Cu;
            // 0x53fc3c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x53FC40u;
        goto label_53fc40;
    }
    ctx->pc = 0x53FC38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53FC40u);
        ctx->pc = 0x53FC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FC38u;
            // 0x53fc3c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53FC40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53FC40u; }
            if (ctx->pc != 0x53FC40u) { return; }
        }
        }
    }
    ctx->pc = 0x53FC40u;
label_53fc40:
    // 0x53fc40: 0x1000006e  b           . + 4 + (0x6E << 2)
label_53fc44:
    if (ctx->pc == 0x53FC44u) {
        ctx->pc = 0x53FC48u;
        goto label_53fc48;
    }
    ctx->pc = 0x53FC40u;
    {
        const bool branch_taken_0x53fc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fc40) {
            ctx->pc = 0x53FDFCu;
            goto label_53fdfc;
        }
    }
    ctx->pc = 0x53FC48u;
label_53fc48:
    // 0x53fc48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x53fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53fc4c:
    // 0x53fc4c: 0xa22300c4  sb          $v1, 0xC4($s1)
    ctx->pc = 0x53fc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 196), (uint8_t)GPR_U32(ctx, 3));
label_53fc50:
    // 0x53fc50: 0xc1502f0  jal         func_540BC0
label_53fc54:
    if (ctx->pc == 0x53FC54u) {
        ctx->pc = 0x53FC54u;
            // 0x53fc54: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->pc = 0x53FC58u;
        goto label_53fc58;
    }
    ctx->pc = 0x53FC50u;
    SET_GPR_U32(ctx, 31, 0x53FC58u);
    ctx->pc = 0x53FC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FC50u;
            // 0x53fc54: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x540BC0u;
    if (runtime->hasFunction(0x540BC0u)) {
        auto targetFn = runtime->lookupFunction(0x540BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FC58u; }
        if (ctx->pc != 0x53FC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00540BC0_0x540bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FC58u; }
        if (ctx->pc != 0x53FC58u) { return; }
    }
    ctx->pc = 0x53FC58u;
label_53fc58:
    // 0x53fc58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53fc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53fc5c:
    // 0x53fc5c: 0xc14f564  jal         func_53D590
label_53fc60:
    if (ctx->pc == 0x53FC60u) {
        ctx->pc = 0x53FC60u;
            // 0x53fc60: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x53FC64u;
        goto label_53fc64;
    }
    ctx->pc = 0x53FC5Cu;
    SET_GPR_U32(ctx, 31, 0x53FC64u);
    ctx->pc = 0x53FC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FC5Cu;
            // 0x53fc60: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D590u;
    if (runtime->hasFunction(0x53D590u)) {
        auto targetFn = runtime->lookupFunction(0x53D590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FC64u; }
        if (ctx->pc != 0x53FC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D590_0x53d590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FC64u; }
        if (ctx->pc != 0x53FC64u) { return; }
    }
    ctx->pc = 0x53FC64u;
label_53fc64:
    // 0x53fc64: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x53fc64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_53fc68:
    // 0x53fc68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53fc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53fc6c:
    // 0x53fc6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x53fc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53fc70:
    // 0x53fc70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x53fc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53fc74:
    // 0x53fc74: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x53fc74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_53fc78:
    // 0x53fc78: 0x320f809  jalr        $t9
label_53fc7c:
    if (ctx->pc == 0x53FC7Cu) {
        ctx->pc = 0x53FC7Cu;
            // 0x53fc7c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x53FC80u;
        goto label_53fc80;
    }
    ctx->pc = 0x53FC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53FC80u);
        ctx->pc = 0x53FC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FC78u;
            // 0x53fc7c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53FC80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53FC80u; }
            if (ctx->pc != 0x53FC80u) { return; }
        }
        }
    }
    ctx->pc = 0x53FC80u;
label_53fc80:
    // 0x53fc80: 0x1000005e  b           . + 4 + (0x5E << 2)
label_53fc84:
    if (ctx->pc == 0x53FC84u) {
        ctx->pc = 0x53FC88u;
        goto label_53fc88;
    }
    ctx->pc = 0x53FC80u;
    {
        const bool branch_taken_0x53fc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fc80) {
            ctx->pc = 0x53FDFCu;
            goto label_53fdfc;
        }
    }
    ctx->pc = 0x53FC88u;
label_53fc88:
    // 0x53fc88: 0xc14f5bc  jal         func_53D6F0
label_53fc8c:
    if (ctx->pc == 0x53FC8Cu) {
        ctx->pc = 0x53FC8Cu;
            // 0x53fc8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53FC90u;
        goto label_53fc90;
    }
    ctx->pc = 0x53FC88u;
    SET_GPR_U32(ctx, 31, 0x53FC90u);
    ctx->pc = 0x53FC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FC88u;
            // 0x53fc8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D6F0u;
    if (runtime->hasFunction(0x53D6F0u)) {
        auto targetFn = runtime->lookupFunction(0x53D6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FC90u; }
        if (ctx->pc != 0x53FC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D6F0_0x53d6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FC90u; }
        if (ctx->pc != 0x53FC90u) { return; }
    }
    ctx->pc = 0x53FC90u;
label_53fc90:
    // 0x53fc90: 0x1000005a  b           . + 4 + (0x5A << 2)
label_53fc94:
    if (ctx->pc == 0x53FC94u) {
        ctx->pc = 0x53FC98u;
        goto label_53fc98;
    }
    ctx->pc = 0x53FC90u;
    {
        const bool branch_taken_0x53fc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fc90) {
            ctx->pc = 0x53FDFCu;
            goto label_53fdfc;
        }
    }
    ctx->pc = 0x53FC98u;
label_53fc98:
    // 0x53fc98: 0x922300c4  lbu         $v1, 0xC4($s1)
    ctx->pc = 0x53fc98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 196)));
label_53fc9c:
    // 0x53fc9c: 0x50600037  beql        $v1, $zero, . + 4 + (0x37 << 2)
label_53fca0:
    if (ctx->pc == 0x53FCA0u) {
        ctx->pc = 0x53FCA0u;
            // 0x53fca0: 0x8e230074  lw          $v1, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->pc = 0x53FCA4u;
        goto label_53fca4;
    }
    ctx->pc = 0x53FC9Cu;
    {
        const bool branch_taken_0x53fc9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fc9c) {
            ctx->pc = 0x53FCA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FC9Cu;
            // 0x53fca0: 0x8e230074  lw          $v1, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FD7Cu;
            goto label_53fd7c;
        }
    }
    ctx->pc = 0x53FCA4u;
label_53fca4:
    // 0x53fca4: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x53fca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_53fca8:
    // 0x53fca8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x53fca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53fcac:
    // 0x53fcac: 0x5083001a  beql        $a0, $v1, . + 4 + (0x1A << 2)
label_53fcb0:
    if (ctx->pc == 0x53FCB0u) {
        ctx->pc = 0x53FCB0u;
            // 0x53fcb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FCB4u;
        goto label_53fcb4;
    }
    ctx->pc = 0x53FCACu;
    {
        const bool branch_taken_0x53fcac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x53fcac) {
            ctx->pc = 0x53FCB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FCACu;
            // 0x53fcb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FD18u;
            goto label_53fd18;
        }
    }
    ctx->pc = 0x53FCB4u;
label_53fcb4:
    // 0x53fcb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53fcb8:
    // 0x53fcb8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_53fcbc:
    if (ctx->pc == 0x53FCBCu) {
        ctx->pc = 0x53FCC0u;
        goto label_53fcc0;
    }
    ctx->pc = 0x53FCB8u;
    {
        const bool branch_taken_0x53fcb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x53fcb8) {
            ctx->pc = 0x53FCE8u;
            goto label_53fce8;
        }
    }
    ctx->pc = 0x53FCC0u;
label_53fcc0:
    // 0x53fcc0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_53fcc4:
    if (ctx->pc == 0x53FCC4u) {
        ctx->pc = 0x53FCC4u;
            // 0x53fcc4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x53FCC8u;
        goto label_53fcc8;
    }
    ctx->pc = 0x53FCC0u;
    {
        const bool branch_taken_0x53fcc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fcc0) {
            ctx->pc = 0x53FCC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FCC0u;
            // 0x53fcc4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FCD0u;
            goto label_53fcd0;
        }
    }
    ctx->pc = 0x53FCC8u;
label_53fcc8:
    // 0x53fcc8: 0x10000012  b           . + 4 + (0x12 << 2)
label_53fccc:
    if (ctx->pc == 0x53FCCCu) {
        ctx->pc = 0x53FCD0u;
        goto label_53fcd0;
    }
    ctx->pc = 0x53FCC8u;
    {
        const bool branch_taken_0x53fcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fcc8) {
            ctx->pc = 0x53FD14u;
            goto label_53fd14;
        }
    }
    ctx->pc = 0x53FCD0u;
label_53fcd0:
    // 0x53fcd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53fcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53fcd4:
    // 0x53fcd4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x53fcd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_53fcd8:
    // 0x53fcd8: 0x320f809  jalr        $t9
label_53fcdc:
    if (ctx->pc == 0x53FCDCu) {
        ctx->pc = 0x53FCDCu;
            // 0x53fcdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FCE0u;
        goto label_53fce0;
    }
    ctx->pc = 0x53FCD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53FCE0u);
        ctx->pc = 0x53FCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FCD8u;
            // 0x53fcdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53FCE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53FCE0u; }
            if (ctx->pc != 0x53FCE0u) { return; }
        }
        }
    }
    ctx->pc = 0x53FCE0u;
label_53fce0:
    // 0x53fce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53fce4:
    // 0x53fce4: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x53fce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
label_53fce8:
    // 0x53fce8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53fcec:
    // 0x53fcec: 0x8c443e28  lw          $a0, 0x3E28($v0)
    ctx->pc = 0x53fcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
label_53fcf0:
    // 0x53fcf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53fcf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53fcf4:
    // 0x53fcf4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x53fcf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_53fcf8:
    // 0x53fcf8: 0x320f809  jalr        $t9
label_53fcfc:
    if (ctx->pc == 0x53FCFCu) {
        ctx->pc = 0x53FCFCu;
            // 0x53fcfc: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x53FD00u;
        goto label_53fd00;
    }
    ctx->pc = 0x53FCF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53FD00u);
        ctx->pc = 0x53FCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FCF8u;
            // 0x53fcfc: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53FD00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53FD00u; }
            if (ctx->pc != 0x53FD00u) { return; }
        }
        }
    }
    ctx->pc = 0x53FD00u;
label_53fd00:
    // 0x53fd00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_53fd04:
    if (ctx->pc == 0x53FD04u) {
        ctx->pc = 0x53FD08u;
        goto label_53fd08;
    }
    ctx->pc = 0x53FD00u;
    {
        const bool branch_taken_0x53fd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fd00) {
            ctx->pc = 0x53FD14u;
            goto label_53fd14;
        }
    }
    ctx->pc = 0x53FD08u;
label_53fd08:
    // 0x53fd08: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x53fd08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
label_53fd0c:
    // 0x53fd0c: 0x10000002  b           . + 4 + (0x2 << 2)
label_53fd10:
    if (ctx->pc == 0x53FD10u) {
        ctx->pc = 0x53FD10u;
            // 0x53fd10: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x53FD14u;
        goto label_53fd14;
    }
    ctx->pc = 0x53FD0Cu;
    {
        const bool branch_taken_0x53fd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53FD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FD0Cu;
            // 0x53fd10: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x53fd0c) {
            ctx->pc = 0x53FD18u;
            goto label_53fd18;
        }
    }
    ctx->pc = 0x53FD14u;
label_53fd14:
    // 0x53fd14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x53fd14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53fd18:
    // 0x53fd18: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
label_53fd1c:
    if (ctx->pc == 0x53FD1Cu) {
        ctx->pc = 0x53FD1Cu;
            // 0x53fd1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FD20u;
        goto label_53fd20;
    }
    ctx->pc = 0x53FD18u;
    {
        const bool branch_taken_0x53fd18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fd18) {
            ctx->pc = 0x53FD1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FD18u;
            // 0x53fd1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FD70u;
            goto label_53fd70;
        }
    }
    ctx->pc = 0x53FD20u;
label_53fd20:
    // 0x53fd20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53fd24:
    // 0x53fd24: 0xc14d588  jal         func_535620
label_53fd28:
    if (ctx->pc == 0x53FD28u) {
        ctx->pc = 0x53FD28u;
            // 0x53fd28: 0x8c443e28  lw          $a0, 0x3E28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
        ctx->pc = 0x53FD2Cu;
        goto label_53fd2c;
    }
    ctx->pc = 0x53FD24u;
    SET_GPR_U32(ctx, 31, 0x53FD2Cu);
    ctx->pc = 0x53FD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FD24u;
            // 0x53fd28: 0x8c443e28  lw          $a0, 0x3E28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x535620u;
    if (runtime->hasFunction(0x535620u)) {
        auto targetFn = runtime->lookupFunction(0x535620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FD2Cu; }
        if (ctx->pc != 0x53FD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535620_0x535620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FD2Cu; }
        if (ctx->pc != 0x53FD2Cu) { return; }
    }
    ctx->pc = 0x53FD2Cu;
label_53fd2c:
    // 0x53fd2c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_53fd30:
    if (ctx->pc == 0x53FD30u) {
        ctx->pc = 0x53FD34u;
        goto label_53fd34;
    }
    ctx->pc = 0x53FD2Cu;
    {
        const bool branch_taken_0x53fd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fd2c) {
            ctx->pc = 0x53FD6Cu;
            goto label_53fd6c;
        }
    }
    ctx->pc = 0x53FD34u;
label_53fd34:
    // 0x53fd34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53fd38:
    // 0x53fd38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53fd3c:
    // 0x53fd3c: 0x8c423e28  lw          $v0, 0x3E28($v0)
    ctx->pc = 0x53fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
label_53fd40:
    // 0x53fd40: 0xa0400022  sb          $zero, 0x22($v0)
    ctx->pc = 0x53fd40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 34), (uint8_t)GPR_U32(ctx, 0));
label_53fd44:
    // 0x53fd44: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x53fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_53fd48:
    // 0x53fd48: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_53fd4c:
    if (ctx->pc == 0x53FD4Cu) {
        ctx->pc = 0x53FD4Cu;
            // 0x53fd4c: 0x8e25006c  lw          $a1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->pc = 0x53FD50u;
        goto label_53fd50;
    }
    ctx->pc = 0x53FD48u;
    {
        const bool branch_taken_0x53fd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x53fd48) {
            ctx->pc = 0x53FD4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FD48u;
            // 0x53fd4c: 0x8e25006c  lw          $a1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FD5Cu;
            goto label_53fd5c;
        }
    }
    ctx->pc = 0x53FD50u;
label_53fd50:
    // 0x53fd50: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x53fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_53fd54:
    // 0x53fd54: 0xa043b6e8  sb          $v1, -0x4918($v0)
    ctx->pc = 0x53fd54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948584), (uint8_t)GPR_U32(ctx, 3));
label_53fd58:
    // 0x53fd58: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x53fd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_53fd5c:
    // 0x53fd5c: 0xc14f648  jal         func_53D920
label_53fd60:
    if (ctx->pc == 0x53FD60u) {
        ctx->pc = 0x53FD60u;
            // 0x53fd60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FD64u;
        goto label_53fd64;
    }
    ctx->pc = 0x53FD5Cu;
    SET_GPR_U32(ctx, 31, 0x53FD64u);
    ctx->pc = 0x53FD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FD5Cu;
            // 0x53fd60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D920u;
    if (runtime->hasFunction(0x53D920u)) {
        auto targetFn = runtime->lookupFunction(0x53D920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FD64u; }
        if (ctx->pc != 0x53FD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D920_0x53d920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FD64u; }
        if (ctx->pc != 0x53FD64u) { return; }
    }
    ctx->pc = 0x53FD64u;
label_53fd64:
    // 0x53fd64: 0x10000002  b           . + 4 + (0x2 << 2)
label_53fd68:
    if (ctx->pc == 0x53FD68u) {
        ctx->pc = 0x53FD68u;
            // 0x53fd68: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x53FD6Cu;
        goto label_53fd6c;
    }
    ctx->pc = 0x53FD64u;
    {
        const bool branch_taken_0x53fd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53FD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FD64u;
            // 0x53fd68: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x53fd64) {
            ctx->pc = 0x53FD70u;
            goto label_53fd70;
        }
    }
    ctx->pc = 0x53FD6Cu;
label_53fd6c:
    // 0x53fd6c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x53fd6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53fd70:
    // 0x53fd70: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_53fd74:
    if (ctx->pc == 0x53FD74u) {
        ctx->pc = 0x53FD78u;
        goto label_53fd78;
    }
    ctx->pc = 0x53FD70u;
    {
        const bool branch_taken_0x53fd70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x53fd70) {
            ctx->pc = 0x53FDFCu;
            goto label_53fdfc;
        }
    }
    ctx->pc = 0x53FD78u;
label_53fd78:
    // 0x53fd78: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x53fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_53fd7c:
    // 0x53fd7c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x53fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_53fd80:
    // 0x53fd80: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_53fd84:
    if (ctx->pc == 0x53FD84u) {
        ctx->pc = 0x53FD84u;
            // 0x53fd84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FD88u;
        goto label_53fd88;
    }
    ctx->pc = 0x53FD80u;
    {
        const bool branch_taken_0x53fd80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x53fd80) {
            ctx->pc = 0x53FD84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FD80u;
            // 0x53fd84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FD90u;
            goto label_53fd90;
        }
    }
    ctx->pc = 0x53FD88u;
label_53fd88:
    // 0x53fd88: 0x10000018  b           . + 4 + (0x18 << 2)
label_53fd8c:
    if (ctx->pc == 0x53FD8Cu) {
        ctx->pc = 0x53FD8Cu;
            // 0x53fd8c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x53FD90u;
        goto label_53fd90;
    }
    ctx->pc = 0x53FD88u;
    {
        const bool branch_taken_0x53fd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53FD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FD88u;
            // 0x53fd8c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53fd88) {
            ctx->pc = 0x53FDECu;
            goto label_53fdec;
        }
    }
    ctx->pc = 0x53FD90u;
label_53fd90:
    // 0x53fd90: 0xc14f604  jal         func_53D810
label_53fd94:
    if (ctx->pc == 0x53FD94u) {
        ctx->pc = 0x53FD94u;
            // 0x53fd94: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x53FD98u;
        goto label_53fd98;
    }
    ctx->pc = 0x53FD90u;
    SET_GPR_U32(ctx, 31, 0x53FD98u);
    ctx->pc = 0x53FD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FD90u;
            // 0x53fd94: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D810u;
    if (runtime->hasFunction(0x53D810u)) {
        auto targetFn = runtime->lookupFunction(0x53D810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FD98u; }
        if (ctx->pc != 0x53FD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D810_0x53d810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FD98u; }
        if (ctx->pc != 0x53FD98u) { return; }
    }
    ctx->pc = 0x53FD98u;
label_53fd98:
    // 0x53fd98: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x53fd98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_53fd9c:
    // 0x53fd9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53fd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53fda0:
    // 0x53fda0: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x53fda0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_53fda4:
    // 0x53fda4: 0x320f809  jalr        $t9
label_53fda8:
    if (ctx->pc == 0x53FDA8u) {
        ctx->pc = 0x53FDA8u;
            // 0x53fda8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FDACu;
        goto label_53fdac;
    }
    ctx->pc = 0x53FDA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53FDACu);
        ctx->pc = 0x53FDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FDA4u;
            // 0x53fda8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53FDACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53FDACu; }
            if (ctx->pc != 0x53FDACu) { return; }
        }
        }
    }
    ctx->pc = 0x53FDACu;
label_53fdac:
    // 0x53fdac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x53fdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53fdb0:
    // 0x53fdb0: 0x5045000a  beql        $v0, $a1, . + 4 + (0xA << 2)
label_53fdb4:
    if (ctx->pc == 0x53FDB4u) {
        ctx->pc = 0x53FDB4u;
            // 0x53fdb4: 0x8e25006c  lw          $a1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->pc = 0x53FDB8u;
        goto label_53fdb8;
    }
    ctx->pc = 0x53FDB0u;
    {
        const bool branch_taken_0x53fdb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x53fdb0) {
            ctx->pc = 0x53FDB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FDB0u;
            // 0x53fdb4: 0x8e25006c  lw          $a1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FDDCu;
            goto label_53fddc;
        }
    }
    ctx->pc = 0x53FDB8u;
label_53fdb8:
    // 0x53fdb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x53fdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53fdbc:
    // 0x53fdbc: 0x50460003  beql        $v0, $a2, . + 4 + (0x3 << 2)
label_53fdc0:
    if (ctx->pc == 0x53FDC0u) {
        ctx->pc = 0x53FDC0u;
            // 0x53fdc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FDC4u;
        goto label_53fdc4;
    }
    ctx->pc = 0x53FDBCu;
    {
        const bool branch_taken_0x53fdbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x53fdbc) {
            ctx->pc = 0x53FDC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FDBCu;
            // 0x53fdc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FDCCu;
            goto label_53fdcc;
        }
    }
    ctx->pc = 0x53FDC4u;
label_53fdc4:
    // 0x53fdc4: 0x1000000d  b           . + 4 + (0xD << 2)
label_53fdc8:
    if (ctx->pc == 0x53FDC8u) {
        ctx->pc = 0x53FDCCu;
        goto label_53fdcc;
    }
    ctx->pc = 0x53FDC4u;
    {
        const bool branch_taken_0x53fdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fdc4) {
            ctx->pc = 0x53FDFCu;
            goto label_53fdfc;
        }
    }
    ctx->pc = 0x53FDCCu;
label_53fdcc:
    // 0x53fdcc: 0xc14f5bc  jal         func_53D6F0
label_53fdd0:
    if (ctx->pc == 0x53FDD0u) {
        ctx->pc = 0x53FDD4u;
        goto label_53fdd4;
    }
    ctx->pc = 0x53FDCCu;
    SET_GPR_U32(ctx, 31, 0x53FDD4u);
    ctx->pc = 0x53D6F0u;
    if (runtime->hasFunction(0x53D6F0u)) {
        auto targetFn = runtime->lookupFunction(0x53D6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FDD4u; }
        if (ctx->pc != 0x53FDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D6F0_0x53d6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FDD4u; }
        if (ctx->pc != 0x53FDD4u) { return; }
    }
    ctx->pc = 0x53FDD4u;
label_53fdd4:
    // 0x53fdd4: 0x10000009  b           . + 4 + (0x9 << 2)
label_53fdd8:
    if (ctx->pc == 0x53FDD8u) {
        ctx->pc = 0x53FDDCu;
        goto label_53fddc;
    }
    ctx->pc = 0x53FDD4u;
    {
        const bool branch_taken_0x53fdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fdd4) {
            ctx->pc = 0x53FDFCu;
            goto label_53fdfc;
        }
    }
    ctx->pc = 0x53FDDCu;
label_53fddc:
    // 0x53fddc: 0xc14f648  jal         func_53D920
label_53fde0:
    if (ctx->pc == 0x53FDE0u) {
        ctx->pc = 0x53FDE0u;
            // 0x53fde0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FDE4u;
        goto label_53fde4;
    }
    ctx->pc = 0x53FDDCu;
    SET_GPR_U32(ctx, 31, 0x53FDE4u);
    ctx->pc = 0x53FDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FDDCu;
            // 0x53fde0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D920u;
    if (runtime->hasFunction(0x53D920u)) {
        auto targetFn = runtime->lookupFunction(0x53D920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FDE4u; }
        if (ctx->pc != 0x53FDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D920_0x53d920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FDE4u; }
        if (ctx->pc != 0x53FDE4u) { return; }
    }
    ctx->pc = 0x53FDE4u;
label_53fde4:
    // 0x53fde4: 0x10000005  b           . + 4 + (0x5 << 2)
label_53fde8:
    if (ctx->pc == 0x53FDE8u) {
        ctx->pc = 0x53FDECu;
        goto label_53fdec;
    }
    ctx->pc = 0x53FDE4u;
    {
        const bool branch_taken_0x53fde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fde4) {
            ctx->pc = 0x53FDFCu;
            goto label_53fdfc;
        }
    }
    ctx->pc = 0x53FDECu;
label_53fdec:
    // 0x53fdec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53fdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53fdf0:
    // 0x53fdf0: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x53fdf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_53fdf4:
    // 0x53fdf4: 0x320f809  jalr        $t9
label_53fdf8:
    if (ctx->pc == 0x53FDF8u) {
        ctx->pc = 0x53FDF8u;
            // 0x53fdf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FDFCu;
        goto label_53fdfc;
    }
    ctx->pc = 0x53FDF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53FDFCu);
        ctx->pc = 0x53FDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FDF4u;
            // 0x53fdf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53FDFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53FDFCu; }
            if (ctx->pc != 0x53FDFCu) { return; }
        }
        }
    }
    ctx->pc = 0x53FDFCu;
label_53fdfc:
    // 0x53fdfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53fdfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_53fe00:
    // 0x53fe00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53fe00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53fe04:
    // 0x53fe04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53fe04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53fe08:
    // 0x53fe08: 0x3e00008  jr          $ra
label_53fe0c:
    if (ctx->pc == 0x53FE0Cu) {
        ctx->pc = 0x53FE0Cu;
            // 0x53fe0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x53FE10u;
        goto label_53fe10;
    }
    ctx->pc = 0x53FE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53FE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FE08u;
            // 0x53fe0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53FE10u;
label_53fe10:
    // 0x53fe10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x53fe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_53fe14:
    // 0x53fe14: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x53fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_53fe18:
    // 0x53fe18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x53fe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_53fe1c:
    // 0x53fe1c: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x53fe1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53fe20:
    // 0x53fe20: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_53fe24:
    if (ctx->pc == 0x53FE24u) {
        ctx->pc = 0x53FE24u;
            // 0x53fe24: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x53FE28u;
        goto label_53fe28;
    }
    ctx->pc = 0x53FE20u;
    {
        const bool branch_taken_0x53fe20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x53fe20) {
            ctx->pc = 0x53FE24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FE20u;
            // 0x53fe24: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FE30u;
            goto label_53fe30;
        }
    }
    ctx->pc = 0x53FE28u;
label_53fe28:
    // 0x53fe28: 0x10000006  b           . + 4 + (0x6 << 2)
label_53fe2c:
    if (ctx->pc == 0x53FE2Cu) {
        ctx->pc = 0x53FE30u;
        goto label_53fe30;
    }
    ctx->pc = 0x53FE28u;
    {
        const bool branch_taken_0x53fe28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53fe28) {
            ctx->pc = 0x53FE44u;
            goto label_53fe44;
        }
    }
    ctx->pc = 0x53FE30u;
label_53fe30:
    // 0x53fe30: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x53fe30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_53fe34:
    // 0x53fe34: 0x320f809  jalr        $t9
label_53fe38:
    if (ctx->pc == 0x53FE38u) {
        ctx->pc = 0x53FE3Cu;
        goto label_53fe3c;
    }
    ctx->pc = 0x53FE34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53FE3Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53FE3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53FE3Cu; }
            if (ctx->pc != 0x53FE3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53FE3Cu;
label_53fe3c:
    // 0x53fe3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_53fe40:
    if (ctx->pc == 0x53FE40u) {
        ctx->pc = 0x53FE40u;
            // 0x53fe40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x53FE44u;
        goto label_53fe44;
    }
    ctx->pc = 0x53FE3Cu;
    {
        const bool branch_taken_0x53fe3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53FE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FE3Cu;
            // 0x53fe40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53fe3c) {
            ctx->pc = 0x53FE50u;
            goto label_53fe50;
        }
    }
    ctx->pc = 0x53FE44u;
label_53fe44:
    // 0x53fe44: 0xc1501b4  jal         func_5406D0
label_53fe48:
    if (ctx->pc == 0x53FE48u) {
        ctx->pc = 0x53FE4Cu;
        goto label_53fe4c;
    }
    ctx->pc = 0x53FE44u;
    SET_GPR_U32(ctx, 31, 0x53FE4Cu);
    ctx->pc = 0x5406D0u;
    if (runtime->hasFunction(0x5406D0u)) {
        auto targetFn = runtime->lookupFunction(0x5406D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FE4Cu; }
        if (ctx->pc != 0x53FE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005406D0_0x5406d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FE4Cu; }
        if (ctx->pc != 0x53FE4Cu) { return; }
    }
    ctx->pc = 0x53FE4Cu;
label_53fe4c:
    // 0x53fe4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x53fe4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_53fe50:
    // 0x53fe50: 0x3e00008  jr          $ra
label_53fe54:
    if (ctx->pc == 0x53FE54u) {
        ctx->pc = 0x53FE54u;
            // 0x53fe54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x53FE58u;
        goto label_53fe58;
    }
    ctx->pc = 0x53FE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53FE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FE50u;
            // 0x53fe54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53FE58u;
label_53fe58:
    // 0x53fe58: 0x0  nop
    ctx->pc = 0x53fe58u;
    // NOP
label_53fe5c:
    // 0x53fe5c: 0x0  nop
    ctx->pc = 0x53fe5cu;
    // NOP
label_53fe60:
    // 0x53fe60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x53fe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_53fe64:
    // 0x53fe64: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x53fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_53fe68:
    // 0x53fe68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x53fe68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_53fe6c:
    // 0x53fe6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x53fe6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_53fe70:
    // 0x53fe70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53fe70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53fe74:
    // 0x53fe74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53fe74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53fe78:
    // 0x53fe78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53fe78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53fe7c:
    // 0x53fe7c: 0x8c703e28  lw          $s0, 0x3E28($v1)
    ctx->pc = 0x53fe7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15912)));
label_53fe80:
    // 0x53fe80: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x53fe80u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53fe84:
    // 0x53fe84: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x53fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_53fe88:
    // 0x53fe88: 0x10a3018c  beq         $a1, $v1, . + 4 + (0x18C << 2)
label_53fe8c:
    if (ctx->pc == 0x53FE8Cu) {
        ctx->pc = 0x53FE8Cu;
            // 0x53fe8c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FE90u;
        goto label_53fe90;
    }
    ctx->pc = 0x53FE88u;
    {
        const bool branch_taken_0x53fe88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x53FE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FE88u;
            // 0x53fe8c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53fe88) {
            ctx->pc = 0x5404BCu;
            goto label_5404bc;
        }
    }
    ctx->pc = 0x53FE90u;
label_53fe90:
    // 0x53fe90: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x53fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_53fe94:
    // 0x53fe94: 0x50a3016c  beql        $a1, $v1, . + 4 + (0x16C << 2)
label_53fe98:
    if (ctx->pc == 0x53FE98u) {
        ctx->pc = 0x53FE98u;
            // 0x53fe98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x53FE9Cu;
        goto label_53fe9c;
    }
    ctx->pc = 0x53FE94u;
    {
        const bool branch_taken_0x53fe94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53fe94) {
            ctx->pc = 0x53FE98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FE94u;
            // 0x53fe98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x540448u;
            goto label_540448;
        }
    }
    ctx->pc = 0x53FE9Cu;
label_53fe9c:
    // 0x53fe9c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x53fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_53fea0:
    // 0x53fea0: 0x50a30137  beql        $a1, $v1, . + 4 + (0x137 << 2)
label_53fea4:
    if (ctx->pc == 0x53FEA4u) {
        ctx->pc = 0x53FEA4u;
            // 0x53fea4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x53FEA8u;
        goto label_53fea8;
    }
    ctx->pc = 0x53FEA0u;
    {
        const bool branch_taken_0x53fea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53fea0) {
            ctx->pc = 0x53FEA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FEA0u;
            // 0x53fea4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x540380u;
            goto label_540380;
        }
    }
    ctx->pc = 0x53FEA8u;
label_53fea8:
    // 0x53fea8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x53fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_53feac:
    // 0x53feac: 0x50a3010b  beql        $a1, $v1, . + 4 + (0x10B << 2)
label_53feb0:
    if (ctx->pc == 0x53FEB0u) {
        ctx->pc = 0x53FEB0u;
            // 0x53feb0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x53FEB4u;
        goto label_53feb4;
    }
    ctx->pc = 0x53FEACu;
    {
        const bool branch_taken_0x53feac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53feac) {
            ctx->pc = 0x53FEB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FEACu;
            // 0x53feb0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5402DCu;
            goto label_5402dc;
        }
    }
    ctx->pc = 0x53FEB4u;
label_53feb4:
    // 0x53feb4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x53feb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_53feb8:
    // 0x53feb8: 0x50a300d5  beql        $a1, $v1, . + 4 + (0xD5 << 2)
label_53febc:
    if (ctx->pc == 0x53FEBCu) {
        ctx->pc = 0x53FEBCu;
            // 0x53febc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x53FEC0u;
        goto label_53fec0;
    }
    ctx->pc = 0x53FEB8u;
    {
        const bool branch_taken_0x53feb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53feb8) {
            ctx->pc = 0x53FEBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FEB8u;
            // 0x53febc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x540210u;
            goto label_540210;
        }
    }
    ctx->pc = 0x53FEC0u;
label_53fec0:
    // 0x53fec0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x53fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_53fec4:
    // 0x53fec4: 0x50a30093  beql        $a1, $v1, . + 4 + (0x93 << 2)
label_53fec8:
    if (ctx->pc == 0x53FEC8u) {
        ctx->pc = 0x53FEC8u;
            // 0x53fec8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x53FECCu;
        goto label_53fecc;
    }
    ctx->pc = 0x53FEC4u;
    {
        const bool branch_taken_0x53fec4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53fec4) {
            ctx->pc = 0x53FEC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FEC4u;
            // 0x53fec8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x540114u;
            goto label_540114;
        }
    }
    ctx->pc = 0x53FECCu;
label_53fecc:
    // 0x53fecc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x53feccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_53fed0:
    // 0x53fed0: 0x50a3003b  beql        $a1, $v1, . + 4 + (0x3B << 2)
label_53fed4:
    if (ctx->pc == 0x53FED4u) {
        ctx->pc = 0x53FED4u;
            // 0x53fed4: 0x8e2400c0  lw          $a0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->pc = 0x53FED8u;
        goto label_53fed8;
    }
    ctx->pc = 0x53FED0u;
    {
        const bool branch_taken_0x53fed0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53fed0) {
            ctx->pc = 0x53FED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FED0u;
            // 0x53fed4: 0x8e2400c0  lw          $a0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FFC0u;
            goto label_53ffc0;
        }
    }
    ctx->pc = 0x53FED8u;
label_53fed8:
    // 0x53fed8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x53fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_53fedc:
    // 0x53fedc: 0x50a3000b  beql        $a1, $v1, . + 4 + (0xB << 2)
label_53fee0:
    if (ctx->pc == 0x53FEE0u) {
        ctx->pc = 0x53FEE0u;
            // 0x53fee0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x53FEE4u;
        goto label_53fee4;
    }
    ctx->pc = 0x53FEDCu;
    {
        const bool branch_taken_0x53fedc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53fedc) {
            ctx->pc = 0x53FEE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FEDCu;
            // 0x53fee0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FF0Cu;
            goto label_53ff0c;
        }
    }
    ctx->pc = 0x53FEE4u;
label_53fee4:
    // 0x53fee4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x53fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53fee8:
    // 0x53fee8: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_53feec:
    if (ctx->pc == 0x53FEECu) {
        ctx->pc = 0x53FEECu;
            // 0x53feec: 0xae2000cc  sw          $zero, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
        ctx->pc = 0x53FEF0u;
        goto label_53fef0;
    }
    ctx->pc = 0x53FEE8u;
    {
        const bool branch_taken_0x53fee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53fee8) {
            ctx->pc = 0x53FEECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FEE8u;
            // 0x53feec: 0xae2000cc  sw          $zero, 0xCC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FEF8u;
            goto label_53fef8;
        }
    }
    ctx->pc = 0x53FEF0u;
label_53fef0:
    // 0x53fef0: 0x1000017b  b           . + 4 + (0x17B << 2)
label_53fef4:
    if (ctx->pc == 0x53FEF4u) {
        ctx->pc = 0x53FEF4u;
            // 0x53fef4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x53FEF8u;
        goto label_53fef8;
    }
    ctx->pc = 0x53FEF0u;
    {
        const bool branch_taken_0x53fef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53FEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FEF0u;
            // 0x53fef4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53fef0) {
            ctx->pc = 0x5404E0u;
            goto label_5404e0;
        }
    }
    ctx->pc = 0x53FEF8u;
label_53fef8:
    // 0x53fef8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53fef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53fefc:
    // 0x53fefc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x53fefcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_53ff00:
    // 0x53ff00: 0x320f809  jalr        $t9
label_53ff04:
    if (ctx->pc == 0x53FF04u) {
        ctx->pc = 0x53FF08u;
        goto label_53ff08;
    }
    ctx->pc = 0x53FF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53FF08u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53FF08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53FF08u; }
            if (ctx->pc != 0x53FF08u) { return; }
        }
        }
    }
    ctx->pc = 0x53FF08u;
label_53ff08:
    // 0x53ff08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x53ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53ff0c:
    // 0x53ff0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53ff0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53ff10:
    // 0x53ff10: 0xc1502f0  jal         func_540BC0
label_53ff14:
    if (ctx->pc == 0x53FF14u) {
        ctx->pc = 0x53FF14u;
            // 0x53ff14: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->pc = 0x53FF18u;
        goto label_53ff18;
    }
    ctx->pc = 0x53FF10u;
    SET_GPR_U32(ctx, 31, 0x53FF18u);
    ctx->pc = 0x53FF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FF10u;
            // 0x53ff14: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x540BC0u;
    if (runtime->hasFunction(0x540BC0u)) {
        auto targetFn = runtime->lookupFunction(0x540BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FF18u; }
        if (ctx->pc != 0x53FF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00540BC0_0x540bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FF18u; }
        if (ctx->pc != 0x53FF18u) { return; }
    }
    ctx->pc = 0x53FF18u;
label_53ff18:
    // 0x53ff18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53ff18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53ff1c:
    // 0x53ff1c: 0xc14f564  jal         func_53D590
label_53ff20:
    if (ctx->pc == 0x53FF20u) {
        ctx->pc = 0x53FF20u;
            // 0x53ff20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x53FF24u;
        goto label_53ff24;
    }
    ctx->pc = 0x53FF1Cu;
    SET_GPR_U32(ctx, 31, 0x53FF24u);
    ctx->pc = 0x53FF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FF1Cu;
            // 0x53ff20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D590u;
    if (runtime->hasFunction(0x53D590u)) {
        auto targetFn = runtime->lookupFunction(0x53D590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FF24u; }
        if (ctx->pc != 0x53FF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D590_0x53d590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FF24u; }
        if (ctx->pc != 0x53FF24u) { return; }
    }
    ctx->pc = 0x53FF24u;
label_53ff24:
    // 0x53ff24: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_53ff28:
    if (ctx->pc == 0x53FF28u) {
        ctx->pc = 0x53FF28u;
            // 0x53ff28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53FF2Cu;
        goto label_53ff2c;
    }
    ctx->pc = 0x53FF24u;
    {
        const bool branch_taken_0x53ff24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x53ff24) {
            ctx->pc = 0x53FF28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FF24u;
            // 0x53ff28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FF74u;
            goto label_53ff74;
        }
    }
    ctx->pc = 0x53FF2Cu;
label_53ff2c:
    // 0x53ff2c: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x53ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_53ff30:
    // 0x53ff30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53ff34:
    // 0x53ff34: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_53ff38:
    if (ctx->pc == 0x53FF38u) {
        ctx->pc = 0x53FF38u;
            // 0x53ff38: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x53FF3Cu;
        goto label_53ff3c;
    }
    ctx->pc = 0x53FF34u;
    {
        const bool branch_taken_0x53ff34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x53ff34) {
            ctx->pc = 0x53FF38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FF34u;
            // 0x53ff38: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FF5Cu;
            goto label_53ff5c;
        }
    }
    ctx->pc = 0x53FF3Cu;
label_53ff3c:
    // 0x53ff3c: 0xc14d588  jal         func_535620
label_53ff40:
    if (ctx->pc == 0x53FF40u) {
        ctx->pc = 0x53FF40u;
            // 0x53ff40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FF44u;
        goto label_53ff44;
    }
    ctx->pc = 0x53FF3Cu;
    SET_GPR_U32(ctx, 31, 0x53FF44u);
    ctx->pc = 0x53FF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FF3Cu;
            // 0x53ff40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x535620u;
    if (runtime->hasFunction(0x535620u)) {
        auto targetFn = runtime->lookupFunction(0x535620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FF44u; }
        if (ctx->pc != 0x53FF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535620_0x535620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FF44u; }
        if (ctx->pc != 0x53FF44u) { return; }
    }
    ctx->pc = 0x53FF44u;
label_53ff44:
    // 0x53ff44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_53ff48:
    if (ctx->pc == 0x53FF48u) {
        ctx->pc = 0x53FF4Cu;
        goto label_53ff4c;
    }
    ctx->pc = 0x53FF44u;
    {
        const bool branch_taken_0x53ff44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ff44) {
            ctx->pc = 0x53FF58u;
            goto label_53ff58;
        }
    }
    ctx->pc = 0x53FF4Cu;
label_53ff4c:
    // 0x53ff4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53ff50:
    // 0x53ff50: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x53ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_53ff54:
    // 0x53ff54: 0xa043b6e8  sb          $v1, -0x4918($v0)
    ctx->pc = 0x53ff54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948584), (uint8_t)GPR_U32(ctx, 3));
label_53ff58:
    // 0x53ff58: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x53ff58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_53ff5c:
    // 0x53ff5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53ff5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53ff60:
    // 0x53ff60: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x53ff60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_53ff64:
    // 0x53ff64: 0x320f809  jalr        $t9
label_53ff68:
    if (ctx->pc == 0x53FF68u) {
        ctx->pc = 0x53FF68u;
            // 0x53ff68: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x53FF6Cu;
        goto label_53ff6c;
    }
    ctx->pc = 0x53FF64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53FF6Cu);
        ctx->pc = 0x53FF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FF64u;
            // 0x53ff68: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53FF6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53FF6Cu; }
            if (ctx->pc != 0x53FF6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53FF6Cu;
label_53ff6c:
    // 0x53ff6c: 0x1000015b  b           . + 4 + (0x15B << 2)
label_53ff70:
    if (ctx->pc == 0x53FF70u) {
        ctx->pc = 0x53FF74u;
        goto label_53ff74;
    }
    ctx->pc = 0x53FF6Cu;
    {
        const bool branch_taken_0x53ff6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ff6c) {
            ctx->pc = 0x5404DCu;
            goto label_5404dc;
        }
    }
    ctx->pc = 0x53FF74u;
label_53ff74:
    // 0x53ff74: 0x14430159  bne         $v0, $v1, . + 4 + (0x159 << 2)
label_53ff78:
    if (ctx->pc == 0x53FF78u) {
        ctx->pc = 0x53FF7Cu;
        goto label_53ff7c;
    }
    ctx->pc = 0x53FF74u;
    {
        const bool branch_taken_0x53ff74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x53ff74) {
            ctx->pc = 0x5404DCu;
            goto label_5404dc;
        }
    }
    ctx->pc = 0x53FF7Cu;
label_53ff7c:
    // 0x53ff7c: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x53ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_53ff80:
    // 0x53ff80: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
label_53ff84:
    if (ctx->pc == 0x53FF84u) {
        ctx->pc = 0x53FF84u;
            // 0x53ff84: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x53FF88u;
        goto label_53ff88;
    }
    ctx->pc = 0x53FF80u;
    {
        const bool branch_taken_0x53ff80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x53ff80) {
            ctx->pc = 0x53FF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FF80u;
            // 0x53ff84: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FFA8u;
            goto label_53ffa8;
        }
    }
    ctx->pc = 0x53FF88u;
label_53ff88:
    // 0x53ff88: 0xc14d588  jal         func_535620
label_53ff8c:
    if (ctx->pc == 0x53FF8Cu) {
        ctx->pc = 0x53FF8Cu;
            // 0x53ff8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FF90u;
        goto label_53ff90;
    }
    ctx->pc = 0x53FF88u;
    SET_GPR_U32(ctx, 31, 0x53FF90u);
    ctx->pc = 0x53FF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53FF88u;
            // 0x53ff8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x535620u;
    if (runtime->hasFunction(0x535620u)) {
        auto targetFn = runtime->lookupFunction(0x535620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FF90u; }
        if (ctx->pc != 0x53FF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535620_0x535620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53FF90u; }
        if (ctx->pc != 0x53FF90u) { return; }
    }
    ctx->pc = 0x53FF90u;
label_53ff90:
    // 0x53ff90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_53ff94:
    if (ctx->pc == 0x53FF94u) {
        ctx->pc = 0x53FF98u;
        goto label_53ff98;
    }
    ctx->pc = 0x53FF90u;
    {
        const bool branch_taken_0x53ff90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ff90) {
            ctx->pc = 0x53FFA4u;
            goto label_53ffa4;
        }
    }
    ctx->pc = 0x53FF98u;
label_53ff98:
    // 0x53ff98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53ff9c:
    // 0x53ff9c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x53ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_53ffa0:
    // 0x53ffa0: 0xa043b6e8  sb          $v1, -0x4918($v0)
    ctx->pc = 0x53ffa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948584), (uint8_t)GPR_U32(ctx, 3));
label_53ffa4:
    // 0x53ffa4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x53ffa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_53ffa8:
    // 0x53ffa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53ffa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53ffac:
    // 0x53ffac: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x53ffacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_53ffb0:
    // 0x53ffb0: 0x320f809  jalr        $t9
label_53ffb4:
    if (ctx->pc == 0x53FFB4u) {
        ctx->pc = 0x53FFB4u;
            // 0x53ffb4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x53FFB8u;
        goto label_53ffb8;
    }
    ctx->pc = 0x53FFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53FFB8u);
        ctx->pc = 0x53FFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FFB0u;
            // 0x53ffb4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53FFB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53FFB8u; }
            if (ctx->pc != 0x53FFB8u) { return; }
        }
        }
    }
    ctx->pc = 0x53FFB8u;
label_53ffb8:
    // 0x53ffb8: 0x10000148  b           . + 4 + (0x148 << 2)
label_53ffbc:
    if (ctx->pc == 0x53FFBCu) {
        ctx->pc = 0x53FFC0u;
        goto label_53ffc0;
    }
    ctx->pc = 0x53FFB8u;
    {
        const bool branch_taken_0x53ffb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ffb8) {
            ctx->pc = 0x5404DCu;
            goto label_5404dc;
        }
    }
    ctx->pc = 0x53FFC0u;
label_53ffc0:
    // 0x53ffc0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x53ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53ffc4:
    // 0x53ffc4: 0x5083001a  beql        $a0, $v1, . + 4 + (0x1A << 2)
label_53ffc8:
    if (ctx->pc == 0x53FFC8u) {
        ctx->pc = 0x53FFC8u;
            // 0x53ffc8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FFCCu;
        goto label_53ffcc;
    }
    ctx->pc = 0x53FFC4u;
    {
        const bool branch_taken_0x53ffc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x53ffc4) {
            ctx->pc = 0x53FFC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FFC4u;
            // 0x53ffc8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x540030u;
            goto label_540030;
        }
    }
    ctx->pc = 0x53FFCCu;
label_53ffcc:
    // 0x53ffcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53ffd0:
    // 0x53ffd0: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_53ffd4:
    if (ctx->pc == 0x53FFD4u) {
        ctx->pc = 0x53FFD8u;
        goto label_53ffd8;
    }
    ctx->pc = 0x53FFD0u;
    {
        const bool branch_taken_0x53ffd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x53ffd0) {
            ctx->pc = 0x540000u;
            goto label_540000;
        }
    }
    ctx->pc = 0x53FFD8u;
label_53ffd8:
    // 0x53ffd8: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_53ffdc:
    if (ctx->pc == 0x53FFDCu) {
        ctx->pc = 0x53FFDCu;
            // 0x53ffdc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x53FFE0u;
        goto label_53ffe0;
    }
    ctx->pc = 0x53FFD8u;
    {
        const bool branch_taken_0x53ffd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ffd8) {
            ctx->pc = 0x53FFDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53FFD8u;
            // 0x53ffdc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53FFE8u;
            goto label_53ffe8;
        }
    }
    ctx->pc = 0x53FFE0u;
label_53ffe0:
    // 0x53ffe0: 0x10000012  b           . + 4 + (0x12 << 2)
label_53ffe4:
    if (ctx->pc == 0x53FFE4u) {
        ctx->pc = 0x53FFE8u;
        goto label_53ffe8;
    }
    ctx->pc = 0x53FFE0u;
    {
        const bool branch_taken_0x53ffe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ffe0) {
            ctx->pc = 0x54002Cu;
            goto label_54002c;
        }
    }
    ctx->pc = 0x53FFE8u;
label_53ffe8:
    // 0x53ffe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53ffe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53ffec:
    // 0x53ffec: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x53ffecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_53fff0:
    // 0x53fff0: 0x320f809  jalr        $t9
label_53fff4:
    if (ctx->pc == 0x53FFF4u) {
        ctx->pc = 0x53FFF4u;
            // 0x53fff4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53FFF8u;
        goto label_53fff8;
    }
    ctx->pc = 0x53FFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53FFF8u);
        ctx->pc = 0x53FFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53FFF0u;
            // 0x53fff4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53FFF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53FFF8u; }
            if (ctx->pc != 0x53FFF8u) { return; }
        }
        }
    }
    ctx->pc = 0x53FFF8u;
label_53fff8:
    // 0x53fff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x53fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53fffc:
    // 0x53fffc: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x53fffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
label_540000:
    // 0x540000: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x540000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_540004:
    // 0x540004: 0x8c443e28  lw          $a0, 0x3E28($v0)
    ctx->pc = 0x540004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
label_540008:
    // 0x540008: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x540008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54000c:
    // 0x54000c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x54000cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_540010:
    // 0x540010: 0x320f809  jalr        $t9
label_540014:
    if (ctx->pc == 0x540014u) {
        ctx->pc = 0x540014u;
            // 0x540014: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->pc = 0x540018u;
        goto label_540018;
    }
    ctx->pc = 0x540010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x540018u);
        ctx->pc = 0x540014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x540010u;
            // 0x540014: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x540018u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x540018u; }
            if (ctx->pc != 0x540018u) { return; }
        }
        }
    }
    ctx->pc = 0x540018u;
label_540018:
    // 0x540018: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_54001c:
    if (ctx->pc == 0x54001Cu) {
        ctx->pc = 0x540020u;
        goto label_540020;
    }
    ctx->pc = 0x540018u;
    {
        const bool branch_taken_0x540018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x540018) {
            ctx->pc = 0x54002Cu;
            goto label_54002c;
        }
    }
    ctx->pc = 0x540020u;
label_540020:
    // 0x540020: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x540020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
label_540024:
    // 0x540024: 0x10000002  b           . + 4 + (0x2 << 2)
label_540028:
    if (ctx->pc == 0x540028u) {
        ctx->pc = 0x540028u;
            // 0x540028: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x54002Cu;
        goto label_54002c;
    }
    ctx->pc = 0x540024u;
    {
        const bool branch_taken_0x540024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x540028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x540024u;
            // 0x540028: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x540024) {
            ctx->pc = 0x540030u;
            goto label_540030;
        }
    }
    ctx->pc = 0x54002Cu;
label_54002c:
    // 0x54002c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x54002cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_540030:
    // 0x540030: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
label_540034:
    if (ctx->pc == 0x540034u) {
        ctx->pc = 0x540034u;
            // 0x540034: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x540038u;
        goto label_540038;
    }
    ctx->pc = 0x540030u;
    {
        const bool branch_taken_0x540030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x540030) {
            ctx->pc = 0x540034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x540030u;
            // 0x540034: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x540088u;
            goto label_540088;
        }
    }
    ctx->pc = 0x540038u;
label_540038:
    // 0x540038: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x540038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54003c:
    // 0x54003c: 0xc14d588  jal         func_535620
label_540040:
    if (ctx->pc == 0x540040u) {
        ctx->pc = 0x540040u;
            // 0x540040: 0x8c443e28  lw          $a0, 0x3E28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
        ctx->pc = 0x540044u;
        goto label_540044;
    }
    ctx->pc = 0x54003Cu;
    SET_GPR_U32(ctx, 31, 0x540044u);
    ctx->pc = 0x540040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54003Cu;
            // 0x540040: 0x8c443e28  lw          $a0, 0x3E28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x535620u;
    if (runtime->hasFunction(0x535620u)) {
        auto targetFn = runtime->lookupFunction(0x535620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540044u; }
        if (ctx->pc != 0x540044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535620_0x535620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540044u; }
        if (ctx->pc != 0x540044u) { return; }
    }
    ctx->pc = 0x540044u;
label_540044:
    // 0x540044: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_540048:
    if (ctx->pc == 0x540048u) {
        ctx->pc = 0x54004Cu;
        goto label_54004c;
    }
    ctx->pc = 0x540044u;
    {
        const bool branch_taken_0x540044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x540044) {
            ctx->pc = 0x540084u;
            goto label_540084;
        }
    }
    ctx->pc = 0x54004Cu;
label_54004c:
    // 0x54004c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54004cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_540050:
    // 0x540050: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x540050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_540054:
    // 0x540054: 0x8c423e28  lw          $v0, 0x3E28($v0)
    ctx->pc = 0x540054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15912)));
label_540058:
    // 0x540058: 0xa0400022  sb          $zero, 0x22($v0)
    ctx->pc = 0x540058u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 34), (uint8_t)GPR_U32(ctx, 0));
label_54005c:
    // 0x54005c: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x54005cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_540060:
    // 0x540060: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_540064:
    if (ctx->pc == 0x540064u) {
        ctx->pc = 0x540064u;
            // 0x540064: 0x8e25006c  lw          $a1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->pc = 0x540068u;
        goto label_540068;
    }
    ctx->pc = 0x540060u;
    {
        const bool branch_taken_0x540060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x540060) {
            ctx->pc = 0x540064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x540060u;
            // 0x540064: 0x8e25006c  lw          $a1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x540074u;
            goto label_540074;
        }
    }
    ctx->pc = 0x540068u;
label_540068:
    // 0x540068: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x540068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_54006c:
    // 0x54006c: 0xa043b6e8  sb          $v1, -0x4918($v0)
    ctx->pc = 0x54006cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948584), (uint8_t)GPR_U32(ctx, 3));
label_540070:
    // 0x540070: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x540070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_540074:
    // 0x540074: 0xc14f648  jal         func_53D920
label_540078:
    if (ctx->pc == 0x540078u) {
        ctx->pc = 0x540078u;
            // 0x540078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54007Cu;
        goto label_54007c;
    }
    ctx->pc = 0x540074u;
    SET_GPR_U32(ctx, 31, 0x54007Cu);
    ctx->pc = 0x540078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540074u;
            // 0x540078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D920u;
    if (runtime->hasFunction(0x53D920u)) {
        auto targetFn = runtime->lookupFunction(0x53D920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54007Cu; }
        if (ctx->pc != 0x54007Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D920_0x53d920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54007Cu; }
        if (ctx->pc != 0x54007Cu) { return; }
    }
    ctx->pc = 0x54007Cu;
label_54007c:
    // 0x54007c: 0x10000002  b           . + 4 + (0x2 << 2)
label_540080:
    if (ctx->pc == 0x540080u) {
        ctx->pc = 0x540080u;
            // 0x540080: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x540084u;
        goto label_540084;
    }
    ctx->pc = 0x54007Cu;
    {
        const bool branch_taken_0x54007c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x540080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54007Cu;
            // 0x540080: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54007c) {
            ctx->pc = 0x540088u;
            goto label_540088;
        }
    }
    ctx->pc = 0x540084u;
label_540084:
    // 0x540084: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x540084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_540088:
    // 0x540088: 0x14600114  bnez        $v1, . + 4 + (0x114 << 2)
label_54008c:
    if (ctx->pc == 0x54008Cu) {
        ctx->pc = 0x540090u;
        goto label_540090;
    }
    ctx->pc = 0x540088u;
    {
        const bool branch_taken_0x540088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x540088) {
            ctx->pc = 0x5404DCu;
            goto label_5404dc;
        }
    }
    ctx->pc = 0x540090u;
label_540090:
    // 0x540090: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x540090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_540094:
    // 0x540094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x540094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_540098:
    // 0x540098: 0xc1502f0  jal         func_540BC0
label_54009c:
    if (ctx->pc == 0x54009Cu) {
        ctx->pc = 0x54009Cu;
            // 0x54009c: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->pc = 0x5400A0u;
        goto label_5400a0;
    }
    ctx->pc = 0x540098u;
    SET_GPR_U32(ctx, 31, 0x5400A0u);
    ctx->pc = 0x54009Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540098u;
            // 0x54009c: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x540BC0u;
    if (runtime->hasFunction(0x540BC0u)) {
        auto targetFn = runtime->lookupFunction(0x540BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5400A0u; }
        if (ctx->pc != 0x5400A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00540BC0_0x540bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5400A0u; }
        if (ctx->pc != 0x5400A0u) { return; }
    }
    ctx->pc = 0x5400A0u;
label_5400a0:
    // 0x5400a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5400a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5400a4:
    // 0x5400a4: 0xc14f5d0  jal         func_53D740
label_5400a8:
    if (ctx->pc == 0x5400A8u) {
        ctx->pc = 0x5400A8u;
            // 0x5400a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5400ACu;
        goto label_5400ac;
    }
    ctx->pc = 0x5400A4u;
    SET_GPR_U32(ctx, 31, 0x5400ACu);
    ctx->pc = 0x5400A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5400A4u;
            // 0x5400a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D740u;
    if (runtime->hasFunction(0x53D740u)) {
        auto targetFn = runtime->lookupFunction(0x53D740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5400ACu; }
        if (ctx->pc != 0x5400ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D740_0x53d740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5400ACu; }
        if (ctx->pc != 0x5400ACu) { return; }
    }
    ctx->pc = 0x5400ACu;
label_5400ac:
    // 0x5400ac: 0x1040010b  beqz        $v0, . + 4 + (0x10B << 2)
label_5400b0:
    if (ctx->pc == 0x5400B0u) {
        ctx->pc = 0x5400B4u;
        goto label_5400b4;
    }
    ctx->pc = 0x5400ACu;
    {
        const bool branch_taken_0x5400ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5400ac) {
            ctx->pc = 0x5404DCu;
            goto label_5404dc;
        }
    }
    ctx->pc = 0x5400B4u;
label_5400b4:
    // 0x5400b4: 0x822200a1  lb          $v0, 0xA1($s1)
    ctx->pc = 0x5400b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 161)));
label_5400b8:
    // 0x5400b8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_5400bc:
    if (ctx->pc == 0x5400BCu) {
        ctx->pc = 0x5400BCu;
            // 0x5400bc: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x5400C0u;
        goto label_5400c0;
    }
    ctx->pc = 0x5400B8u;
    {
        const bool branch_taken_0x5400b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5400b8) {
            ctx->pc = 0x5400BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5400B8u;
            // 0x5400bc: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5400FCu;
            goto label_5400fc;
        }
    }
    ctx->pc = 0x5400C0u;
label_5400c0:
    // 0x5400c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5400c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5400c4:
    // 0x5400c4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5400c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5400c8:
    // 0x5400c8: 0x8c470ec8  lw          $a3, 0xEC8($v0)
    ctx->pc = 0x5400c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_5400cc:
    // 0x5400cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5400ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5400d0:
    // 0x5400d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5400d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5400d4:
    // 0x5400d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5400d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5400d8:
    // 0x5400d8: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x5400d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
label_5400dc:
    // 0x5400dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5400dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5400e0:
    // 0x5400e0: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x5400e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_5400e4:
    // 0x5400e4: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x5400e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
label_5400e8:
    // 0x5400e8: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x5400e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_5400ec:
    // 0x5400ec: 0xc14f5bc  jal         func_53D6F0
label_5400f0:
    if (ctx->pc == 0x5400F0u) {
        ctx->pc = 0x5400F0u;
            // 0x5400f0: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x5400F4u;
        goto label_5400f4;
    }
    ctx->pc = 0x5400ECu;
    SET_GPR_U32(ctx, 31, 0x5400F4u);
    ctx->pc = 0x5400F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5400ECu;
            // 0x5400f0: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D6F0u;
    if (runtime->hasFunction(0x53D6F0u)) {
        auto targetFn = runtime->lookupFunction(0x53D6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5400F4u; }
        if (ctx->pc != 0x5400F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D6F0_0x53d6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5400F4u; }
        if (ctx->pc != 0x5400F4u) { return; }
    }
    ctx->pc = 0x5400F4u;
label_5400f4:
    // 0x5400f4: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_5400f8:
    if (ctx->pc == 0x5400F8u) {
        ctx->pc = 0x5400FCu;
        goto label_5400fc;
    }
    ctx->pc = 0x5400F4u;
    {
        const bool branch_taken_0x5400f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5400f4) {
            ctx->pc = 0x5404DCu;
            goto label_5404dc;
        }
    }
    ctx->pc = 0x5400FCu;
label_5400fc:
    // 0x5400fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5400fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_540100:
    // 0x540100: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x540100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_540104:
    // 0x540104: 0x320f809  jalr        $t9
label_540108:
    if (ctx->pc == 0x540108u) {
        ctx->pc = 0x540108u;
            // 0x540108: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54010Cu;
        goto label_54010c;
    }
    ctx->pc = 0x540104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54010Cu);
        ctx->pc = 0x540108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x540104u;
            // 0x540108: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54010Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54010Cu; }
            if (ctx->pc != 0x54010Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54010Cu;
label_54010c:
    // 0x54010c: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_540110:
    if (ctx->pc == 0x540110u) {
        ctx->pc = 0x540114u;
        goto label_540114;
    }
    ctx->pc = 0x54010Cu;
    {
        const bool branch_taken_0x54010c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54010c) {
            ctx->pc = 0x5404DCu;
            goto label_5404dc;
        }
    }
    ctx->pc = 0x540114u;
label_540114:
    // 0x540114: 0xc1502f0  jal         func_540BC0
label_540118:
    if (ctx->pc == 0x540118u) {
        ctx->pc = 0x540118u;
            // 0x540118: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->pc = 0x54011Cu;
        goto label_54011c;
    }
    ctx->pc = 0x540114u;
    SET_GPR_U32(ctx, 31, 0x54011Cu);
    ctx->pc = 0x540118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540114u;
            // 0x540118: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x540BC0u;
    if (runtime->hasFunction(0x540BC0u)) {
        auto targetFn = runtime->lookupFunction(0x540BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54011Cu; }
        if (ctx->pc != 0x54011Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00540BC0_0x540bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54011Cu; }
        if (ctx->pc != 0x54011Cu) { return; }
    }
    ctx->pc = 0x54011Cu;
label_54011c:
    // 0x54011c: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x54011cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_540120:
    // 0x540120: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x540120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_540124:
    // 0x540124: 0x2442d618  addiu       $v0, $v0, -0x29E8
    ctx->pc = 0x540124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956568));
label_540128:
    // 0x540128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x540128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54012c:
    // 0x54012c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x54012cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_540130:
    // 0x540130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x540130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_540134:
    // 0x540134: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x540134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_540138:
    // 0x540138: 0xc14d724  jal         func_535C90
label_54013c:
    if (ctx->pc == 0x54013Cu) {
        ctx->pc = 0x54013Cu;
            // 0x54013c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x540140u;
        goto label_540140;
    }
    ctx->pc = 0x540138u;
    SET_GPR_U32(ctx, 31, 0x540140u);
    ctx->pc = 0x54013Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540138u;
            // 0x54013c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x535C90u;
    if (runtime->hasFunction(0x535C90u)) {
        auto targetFn = runtime->lookupFunction(0x535C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540140u; }
        if (ctx->pc != 0x540140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535C90_0x535c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540140u; }
        if (ctx->pc != 0x540140u) { return; }
    }
    ctx->pc = 0x540140u;
label_540140:
    // 0x540140: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x540140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_540144:
    // 0x540144: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x540144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_540148:
    // 0x540148: 0x8e2500cc  lw          $a1, 0xCC($s1)
    ctx->pc = 0x540148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_54014c:
    // 0x54014c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54014cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_540150:
    // 0x540150: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x540150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_540154:
    // 0x540154: 0x320f809  jalr        $t9
label_540158:
    if (ctx->pc == 0x540158u) {
        ctx->pc = 0x540158u;
            // 0x540158: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x54015Cu;
        goto label_54015c;
    }
    ctx->pc = 0x540154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54015Cu);
        ctx->pc = 0x540158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x540154u;
            // 0x540158: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54015Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54015Cu; }
            if (ctx->pc != 0x54015Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54015Cu;
label_54015c:
    // 0x54015c: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x54015cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_540160:
    // 0x540160: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x540160u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_540164:
    // 0x540164: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x540164u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
label_540168:
    // 0x540168: 0x262400a8  addiu       $a0, $s1, 0xA8
    ctx->pc = 0x540168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
label_54016c:
    // 0x54016c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x54016cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_540170:
    // 0x540170: 0x24c6daa0  addiu       $a2, $a2, -0x2560
    ctx->pc = 0x540170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957728));
label_540174:
    // 0x540174: 0x24e7daa8  addiu       $a3, $a3, -0x2558
    ctx->pc = 0x540174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957736));
label_540178:
    // 0x540178: 0xc043be4  jal         func_10EF90
label_54017c:
    if (ctx->pc == 0x54017Cu) {
        ctx->pc = 0x54017Cu;
            // 0x54017c: 0x24480004  addiu       $t0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x540180u;
        goto label_540180;
    }
    ctx->pc = 0x540178u;
    SET_GPR_U32(ctx, 31, 0x540180u);
    ctx->pc = 0x54017Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540178u;
            // 0x54017c: 0x24480004  addiu       $t0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540180u; }
        if (ctx->pc != 0x540180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540180u; }
        if (ctx->pc != 0x540180u) { return; }
    }
    ctx->pc = 0x540180u;
label_540180:
    // 0x540180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x540180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_540184:
    // 0x540184: 0xc14d720  jal         func_535C80
label_540188:
    if (ctx->pc == 0x540188u) {
        ctx->pc = 0x540188u;
            // 0x540188: 0x262500a8  addiu       $a1, $s1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
        ctx->pc = 0x54018Cu;
        goto label_54018c;
    }
    ctx->pc = 0x540184u;
    SET_GPR_U32(ctx, 31, 0x54018Cu);
    ctx->pc = 0x540188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540184u;
            // 0x540188: 0x262500a8  addiu       $a1, $s1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x535C80u;
    if (runtime->hasFunction(0x535C80u)) {
        auto targetFn = runtime->lookupFunction(0x535C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54018Cu; }
        if (ctx->pc != 0x54018Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535C80_0x535c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54018Cu; }
        if (ctx->pc != 0x54018Cu) { return; }
    }
    ctx->pc = 0x54018Cu;
label_54018c:
    // 0x54018c: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x54018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_540190:
    // 0x540190: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x540190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_540194:
    // 0x540194: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x540194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_540198:
    // 0x540198: 0xc043be4  jal         func_10EF90
label_54019c:
    if (ctx->pc == 0x54019Cu) {
        ctx->pc = 0x54019Cu;
            // 0x54019c: 0x24460004  addiu       $a2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x5401A0u;
        goto label_5401a0;
    }
    ctx->pc = 0x540198u;
    SET_GPR_U32(ctx, 31, 0x5401A0u);
    ctx->pc = 0x54019Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540198u;
            // 0x54019c: 0x24460004  addiu       $a2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5401A0u; }
        if (ctx->pc != 0x5401A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5401A0u; }
        if (ctx->pc != 0x5401A0u) { return; }
    }
    ctx->pc = 0x5401A0u;
label_5401a0:
    // 0x5401a0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x5401a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5401a4:
    // 0x5401a4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x5401a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_5401a8:
    // 0x5401a8: 0x320f809  jalr        $t9
label_5401ac:
    if (ctx->pc == 0x5401ACu) {
        ctx->pc = 0x5401ACu;
            // 0x5401ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5401B0u;
        goto label_5401b0;
    }
    ctx->pc = 0x5401A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5401B0u);
        ctx->pc = 0x5401ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5401A8u;
            // 0x5401ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5401B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5401B0u; }
            if (ctx->pc != 0x5401B0u) { return; }
        }
        }
    }
    ctx->pc = 0x5401B0u;
label_5401b0:
    // 0x5401b0: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x5401b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_5401b4:
    // 0x5401b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5401b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5401b8:
    // 0x5401b8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x5401b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_5401bc:
    // 0x5401bc: 0x320f809  jalr        $t9
label_5401c0:
    if (ctx->pc == 0x5401C0u) {
        ctx->pc = 0x5401C4u;
        goto label_5401c4;
    }
    ctx->pc = 0x5401BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5401C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5401C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5401C4u; }
            if (ctx->pc != 0x5401C4u) { return; }
        }
        }
    }
    ctx->pc = 0x5401C4u;
label_5401c4:
    // 0x5401c4: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x5401c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_5401c8:
    // 0x5401c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x5401c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5401cc:
    // 0x5401cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5401ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5401d0:
    // 0x5401d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5401d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5401d4:
    // 0x5401d4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x5401d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_5401d8:
    // 0x5401d8: 0x320f809  jalr        $t9
label_5401dc:
    if (ctx->pc == 0x5401DCu) {
        ctx->pc = 0x5401DCu;
            // 0x5401dc: 0x8c537378  lw          $s3, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x5401E0u;
        goto label_5401e0;
    }
    ctx->pc = 0x5401D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5401E0u);
        ctx->pc = 0x5401DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5401D8u;
            // 0x5401dc: 0x8c537378  lw          $s3, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5401E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5401E0u; }
            if (ctx->pc != 0x5401E0u) { return; }
        }
        }
    }
    ctx->pc = 0x5401E0u;
label_5401e0:
    // 0x5401e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5401e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5401e4:
    // 0x5401e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x5401e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5401e8:
    // 0x5401e8: 0xc0fe54c  jal         func_3F9530
label_5401ec:
    if (ctx->pc == 0x5401ECu) {
        ctx->pc = 0x5401ECu;
            // 0x5401ec: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x5401F0u;
        goto label_5401f0;
    }
    ctx->pc = 0x5401E8u;
    SET_GPR_U32(ctx, 31, 0x5401F0u);
    ctx->pc = 0x5401ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5401E8u;
            // 0x5401ec: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5401F0u; }
        if (ctx->pc != 0x5401F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5401F0u; }
        if (ctx->pc != 0x5401F0u) { return; }
    }
    ctx->pc = 0x5401F0u;
label_5401f0:
    // 0x5401f0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x5401f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_5401f4:
    // 0x5401f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5401f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5401f8:
    // 0x5401f8: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x5401f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
label_5401fc:
    // 0x5401fc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x5401fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_540200:
    // 0x540200: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x540200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_540204:
    // 0x540204: 0x320f809  jalr        $t9
label_540208:
    if (ctx->pc == 0x540208u) {
        ctx->pc = 0x540208u;
            // 0x540208: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x54020Cu;
        goto label_54020c;
    }
    ctx->pc = 0x540204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54020Cu);
        ctx->pc = 0x540208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x540204u;
            // 0x540208: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54020Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54020Cu; }
            if (ctx->pc != 0x54020Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54020Cu;
label_54020c:
    // 0x54020c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x54020cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_540210:
    // 0x540210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x540210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_540214:
    // 0x540214: 0xc1502f0  jal         func_540BC0
label_540218:
    if (ctx->pc == 0x540218u) {
        ctx->pc = 0x540218u;
            // 0x540218: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->pc = 0x54021Cu;
        goto label_54021c;
    }
    ctx->pc = 0x540214u;
    SET_GPR_U32(ctx, 31, 0x54021Cu);
    ctx->pc = 0x540218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540214u;
            // 0x540218: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x540BC0u;
    if (runtime->hasFunction(0x540BC0u)) {
        auto targetFn = runtime->lookupFunction(0x540BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54021Cu; }
        if (ctx->pc != 0x54021Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00540BC0_0x540bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54021Cu; }
        if (ctx->pc != 0x54021Cu) { return; }
    }
    ctx->pc = 0x54021Cu;
label_54021c:
    // 0x54021c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x54021cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_540220:
    // 0x540220: 0xc14f564  jal         func_53D590
label_540224:
    if (ctx->pc == 0x540224u) {
        ctx->pc = 0x540224u;
            // 0x540224: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x540228u;
        goto label_540228;
    }
    ctx->pc = 0x540220u;
    SET_GPR_U32(ctx, 31, 0x540228u);
    ctx->pc = 0x540224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540220u;
            // 0x540224: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D590u;
    if (runtime->hasFunction(0x53D590u)) {
        auto targetFn = runtime->lookupFunction(0x53D590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540228u; }
        if (ctx->pc != 0x540228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D590_0x53d590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540228u; }
        if (ctx->pc != 0x540228u) { return; }
    }
    ctx->pc = 0x540228u;
label_540228:
    // 0x540228: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_54022c:
    if (ctx->pc == 0x54022Cu) {
        ctx->pc = 0x54022Cu;
            // 0x54022c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x540230u;
        goto label_540230;
    }
    ctx->pc = 0x540228u;
    {
        const bool branch_taken_0x540228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x540228) {
            ctx->pc = 0x54022Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x540228u;
            // 0x54022c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54024Cu;
            goto label_54024c;
        }
    }
    ctx->pc = 0x540230u;
label_540230:
    // 0x540230: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x540230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_540234:
    // 0x540234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x540234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_540238:
    // 0x540238: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x540238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54023c:
    // 0x54023c: 0x320f809  jalr        $t9
label_540240:
    if (ctx->pc == 0x540240u) {
        ctx->pc = 0x540240u;
            // 0x540240: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x540244u;
        goto label_540244;
    }
    ctx->pc = 0x54023Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x540244u);
        ctx->pc = 0x540240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54023Cu;
            // 0x540240: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x540244u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x540244u; }
            if (ctx->pc != 0x540244u) { return; }
        }
        }
    }
    ctx->pc = 0x540244u;
label_540244:
    // 0x540244: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_540248:
    if (ctx->pc == 0x540248u) {
        ctx->pc = 0x54024Cu;
        goto label_54024c;
    }
    ctx->pc = 0x540244u;
    {
        const bool branch_taken_0x540244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540244) {
            ctx->pc = 0x5404DCu;
            goto label_5404dc;
        }
    }
    ctx->pc = 0x54024Cu;
label_54024c:
    // 0x54024c: 0x144300a3  bne         $v0, $v1, . + 4 + (0xA3 << 2)
label_540250:
    if (ctx->pc == 0x540250u) {
        ctx->pc = 0x540254u;
        goto label_540254;
    }
    ctx->pc = 0x54024Cu;
    {
        const bool branch_taken_0x54024c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x54024c) {
            ctx->pc = 0x5404DCu;
            goto label_5404dc;
        }
    }
    ctx->pc = 0x540254u;
label_540254:
    // 0x540254: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x540254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_540258:
    // 0x540258: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x540258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_54025c:
    // 0x54025c: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_540260:
    if (ctx->pc == 0x540260u) {
        ctx->pc = 0x540260u;
            // 0x540260: 0x8e2300cc  lw          $v1, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->pc = 0x540264u;
        goto label_540264;
    }
    ctx->pc = 0x54025Cu;
    {
        const bool branch_taken_0x54025c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x54025c) {
            ctx->pc = 0x540260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54025Cu;
            // 0x540260: 0x8e2300cc  lw          $v1, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54028Cu;
            goto label_54028c;
        }
    }
    ctx->pc = 0x540264u;
label_540264:
    // 0x540264: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x540264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_540268:
    // 0x540268: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_54026c:
    if (ctx->pc == 0x54026Cu) {
        ctx->pc = 0x540270u;
        goto label_540270;
    }
    ctx->pc = 0x540268u;
    {
        const bool branch_taken_0x540268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x540268) {
            ctx->pc = 0x540288u;
            goto label_540288;
        }
    }
    ctx->pc = 0x540270u;
label_540270:
    // 0x540270: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x540270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_540274:
    // 0x540274: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_540278:
    if (ctx->pc == 0x540278u) {
        ctx->pc = 0x540278u;
            // 0x540278: 0x8e2300cc  lw          $v1, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->pc = 0x54027Cu;
        goto label_54027c;
    }
    ctx->pc = 0x540274u;
    {
        const bool branch_taken_0x540274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x540274) {
            ctx->pc = 0x540278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x540274u;
            // 0x540278: 0x8e2300cc  lw          $v1, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5402ACu;
            goto label_5402ac;
        }
    }
    ctx->pc = 0x54027Cu;
label_54027c:
    // 0x54027c: 0x922200d5  lbu         $v0, 0xD5($s1)
    ctx->pc = 0x54027cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 213)));
label_540280:
    // 0x540280: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_540284:
    if (ctx->pc == 0x540284u) {
        ctx->pc = 0x540288u;
        goto label_540288;
    }
    ctx->pc = 0x540280u;
    {
        const bool branch_taken_0x540280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x540280) {
            ctx->pc = 0x5402A8u;
            goto label_5402a8;
        }
    }
    ctx->pc = 0x540288u;
label_540288:
    // 0x540288: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x540288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_54028c:
    // 0x54028c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54028cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_540290:
    // 0x540290: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x540290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_540294:
    // 0x540294: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x540294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_540298:
    // 0x540298: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x540298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_54029c:
    // 0x54029c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x54029cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_5402a0:
    // 0x5402a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_5402a4:
    if (ctx->pc == 0x5402A4u) {
        ctx->pc = 0x5402A4u;
            // 0x5402a4: 0xac44001c  sw          $a0, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
        ctx->pc = 0x5402A8u;
        goto label_5402a8;
    }
    ctx->pc = 0x5402A0u;
    {
        const bool branch_taken_0x5402a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5402A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5402A0u;
            // 0x5402a4: 0xac44001c  sw          $a0, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5402a0) {
            ctx->pc = 0x5402C0u;
            goto label_5402c0;
        }
    }
    ctx->pc = 0x5402A8u;
label_5402a8:
    // 0x5402a8: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x5402a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_5402ac:
    // 0x5402ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5402acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5402b0:
    // 0x5402b0: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x5402b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_5402b4:
    // 0x5402b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5402b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_5402b8:
    // 0x5402b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x5402b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_5402bc:
    // 0x5402bc: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x5402bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_5402c0:
    // 0x5402c0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x5402c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5402c4:
    // 0x5402c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5402c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5402c8:
    // 0x5402c8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x5402c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_5402cc:
    // 0x5402cc: 0x320f809  jalr        $t9
label_5402d0:
    if (ctx->pc == 0x5402D0u) {
        ctx->pc = 0x5402D0u;
            // 0x5402d0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x5402D4u;
        goto label_5402d4;
    }
    ctx->pc = 0x5402CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5402D4u);
        ctx->pc = 0x5402D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5402CCu;
            // 0x5402d0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5402D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5402D4u; }
            if (ctx->pc != 0x5402D4u) { return; }
        }
        }
    }
    ctx->pc = 0x5402D4u;
label_5402d4:
    // 0x5402d4: 0x10000081  b           . + 4 + (0x81 << 2)
label_5402d8:
    if (ctx->pc == 0x5402D8u) {
        ctx->pc = 0x5402DCu;
        goto label_5402dc;
    }
    ctx->pc = 0x5402D4u;
    {
        const bool branch_taken_0x5402d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5402d4) {
            ctx->pc = 0x5404DCu;
            goto label_5404dc;
        }
    }
    ctx->pc = 0x5402DCu;
label_5402dc:
    // 0x5402dc: 0xc1502f0  jal         func_540BC0
label_5402e0:
    if (ctx->pc == 0x5402E0u) {
        ctx->pc = 0x5402E0u;
            // 0x5402e0: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->pc = 0x5402E4u;
        goto label_5402e4;
    }
    ctx->pc = 0x5402DCu;
    SET_GPR_U32(ctx, 31, 0x5402E4u);
    ctx->pc = 0x5402E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5402DCu;
            // 0x5402e0: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x540BC0u;
    if (runtime->hasFunction(0x540BC0u)) {
        auto targetFn = runtime->lookupFunction(0x540BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5402E4u; }
        if (ctx->pc != 0x5402E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00540BC0_0x540bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5402E4u; }
        if (ctx->pc != 0x5402E4u) { return; }
    }
    ctx->pc = 0x5402E4u;
label_5402e4:
    // 0x5402e4: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x5402e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_5402e8:
    // 0x5402e8: 0x40f809  jalr        $v0
label_5402ec:
    if (ctx->pc == 0x5402ECu) {
        ctx->pc = 0x5402ECu;
            // 0x5402ec: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->pc = 0x5402F0u;
        goto label_5402f0;
    }
    ctx->pc = 0x5402E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x5402F0u);
        ctx->pc = 0x5402ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5402E8u;
            // 0x5402ec: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5402F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5402F0u; }
            if (ctx->pc != 0x5402F0u) { return; }
        }
        }
    }
    ctx->pc = 0x5402F0u;
label_5402f0:
    // 0x5402f0: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_5402f4:
    if (ctx->pc == 0x5402F4u) {
        ctx->pc = 0x5402F4u;
            // 0x5402f4: 0x8e2300cc  lw          $v1, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->pc = 0x5402F8u;
        goto label_5402f8;
    }
    ctx->pc = 0x5402F0u;
    {
        const bool branch_taken_0x5402f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5402f0) {
            ctx->pc = 0x5402F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5402F0u;
            // 0x5402f4: 0x8e2300cc  lw          $v1, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54034Cu;
            goto label_54034c;
        }
    }
    ctx->pc = 0x5402F8u;
label_5402f8:
    // 0x5402f8: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x5402f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_5402fc:
    // 0x5402fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5402fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_540300:
    // 0x540300: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x540300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_540304:
    // 0x540304: 0x320f809  jalr        $t9
label_540308:
    if (ctx->pc == 0x540308u) {
        ctx->pc = 0x540308u;
            // 0x540308: 0x8e2500cc  lw          $a1, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->pc = 0x54030Cu;
        goto label_54030c;
    }
    ctx->pc = 0x540304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54030Cu);
        ctx->pc = 0x540308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x540304u;
            // 0x540308: 0x8e2500cc  lw          $a1, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54030Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54030Cu; }
            if (ctx->pc != 0x54030Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54030Cu;
label_54030c:
    // 0x54030c: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x54030cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_540310:
    // 0x540310: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x540310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_540314:
    // 0x540314: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x540314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_540318:
    // 0x540318: 0x320f809  jalr        $t9
label_54031c:
    if (ctx->pc == 0x54031Cu) {
        ctx->pc = 0x54031Cu;
            // 0x54031c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x540320u;
        goto label_540320;
    }
    ctx->pc = 0x540318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x540320u);
        ctx->pc = 0x54031Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x540318u;
            // 0x54031c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x540320u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x540320u; }
            if (ctx->pc != 0x540320u) { return; }
        }
        }
    }
    ctx->pc = 0x540320u;
label_540320:
    // 0x540320: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x540320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_540324:
    // 0x540324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x540324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_540328:
    // 0x540328: 0xc04a508  jal         func_129420
label_54032c:
    if (ctx->pc == 0x54032Cu) {
        ctx->pc = 0x54032Cu;
            // 0x54032c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x540330u;
        goto label_540330;
    }
    ctx->pc = 0x540328u;
    SET_GPR_U32(ctx, 31, 0x540330u);
    ctx->pc = 0x54032Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540328u;
            // 0x54032c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540330u; }
        if (ctx->pc != 0x540330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540330u; }
        if (ctx->pc != 0x540330u) { return; }
    }
    ctx->pc = 0x540330u;
label_540330:
    // 0x540330: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x540330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_540334:
    // 0x540334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x540334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_540338:
    // 0x540338: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x540338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_54033c:
    // 0x54033c: 0x320f809  jalr        $t9
label_540340:
    if (ctx->pc == 0x540340u) {
        ctx->pc = 0x540340u;
            // 0x540340: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x540344u;
        goto label_540344;
    }
    ctx->pc = 0x54033Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x540344u);
        ctx->pc = 0x540340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54033Cu;
            // 0x540340: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x540344u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x540344u; }
            if (ctx->pc != 0x540344u) { return; }
        }
        }
    }
    ctx->pc = 0x540344u;
label_540344:
    // 0x540344: 0x10000065  b           . + 4 + (0x65 << 2)
label_540348:
    if (ctx->pc == 0x540348u) {
        ctx->pc = 0x54034Cu;
        goto label_54034c;
    }
    ctx->pc = 0x540344u;
    {
        const bool branch_taken_0x540344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540344) {
            ctx->pc = 0x5404DCu;
            goto label_5404dc;
        }
    }
    ctx->pc = 0x54034Cu;
label_54034c:
    // 0x54034c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x54034cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_540350:
    // 0x540350: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x540350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_540354:
    // 0x540354: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_540358:
    // 0x540358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x540358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_54035c:
    // 0x54035c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x54035cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_540360:
    // 0x540360: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x540360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_540364:
    // 0x540364: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x540364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
label_540368:
    // 0x540368: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x540368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_54036c:
    // 0x54036c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x54036cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_540370:
    // 0x540370: 0x320f809  jalr        $t9
label_540374:
    if (ctx->pc == 0x540374u) {
        ctx->pc = 0x540374u;
            // 0x540374: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x540378u;
        goto label_540378;
    }
    ctx->pc = 0x540370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x540378u);
        ctx->pc = 0x540374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x540370u;
            // 0x540374: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x540378u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x540378u; }
            if (ctx->pc != 0x540378u) { return; }
        }
        }
    }
    ctx->pc = 0x540378u;
label_540378:
    // 0x540378: 0x10000058  b           . + 4 + (0x58 << 2)
label_54037c:
    if (ctx->pc == 0x54037Cu) {
        ctx->pc = 0x540380u;
        goto label_540380;
    }
    ctx->pc = 0x540378u;
    {
        const bool branch_taken_0x540378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540378) {
            ctx->pc = 0x5404DCu;
            goto label_5404dc;
        }
    }
    ctx->pc = 0x540380u;
label_540380:
    // 0x540380: 0xc1502f0  jal         func_540BC0
label_540384:
    if (ctx->pc == 0x540384u) {
        ctx->pc = 0x540384u;
            // 0x540384: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->pc = 0x540388u;
        goto label_540388;
    }
    ctx->pc = 0x540380u;
    SET_GPR_U32(ctx, 31, 0x540388u);
    ctx->pc = 0x540384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540380u;
            // 0x540384: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x540BC0u;
    if (runtime->hasFunction(0x540BC0u)) {
        auto targetFn = runtime->lookupFunction(0x540BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540388u; }
        if (ctx->pc != 0x540388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00540BC0_0x540bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540388u; }
        if (ctx->pc != 0x540388u) { return; }
    }
    ctx->pc = 0x540388u;
label_540388:
    // 0x540388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x540388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_54038c:
    // 0x54038c: 0xc14f564  jal         func_53D590
label_540390:
    if (ctx->pc == 0x540390u) {
        ctx->pc = 0x540390u;
            // 0x540390: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x540394u;
        goto label_540394;
    }
    ctx->pc = 0x54038Cu;
    SET_GPR_U32(ctx, 31, 0x540394u);
    ctx->pc = 0x540390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54038Cu;
            // 0x540390: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D590u;
    if (runtime->hasFunction(0x53D590u)) {
        auto targetFn = runtime->lookupFunction(0x53D590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540394u; }
        if (ctx->pc != 0x540394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D590_0x53d590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540394u; }
        if (ctx->pc != 0x540394u) { return; }
    }
    ctx->pc = 0x540394u;
label_540394:
    // 0x540394: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_540398:
    if (ctx->pc == 0x540398u) {
        ctx->pc = 0x540398u;
            // 0x540398: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x54039Cu;
        goto label_54039c;
    }
    ctx->pc = 0x540394u;
    {
        const bool branch_taken_0x540394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x540394) {
            ctx->pc = 0x540398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x540394u;
            // 0x540398: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54040Cu;
            goto label_54040c;
        }
    }
    ctx->pc = 0x54039Cu;
label_54039c:
    // 0x54039c: 0x920207c0  lbu         $v0, 0x7C0($s0)
    ctx->pc = 0x54039cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1984)));
label_5403a0:
    // 0x5403a0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_5403a4:
    if (ctx->pc == 0x5403A4u) {
        ctx->pc = 0x5403A4u;
            // 0x5403a4: 0x8e2300cc  lw          $v1, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->pc = 0x5403A8u;
        goto label_5403a8;
    }
    ctx->pc = 0x5403A0u;
    {
        const bool branch_taken_0x5403a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5403a0) {
            ctx->pc = 0x5403A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5403A0u;
            // 0x5403a4: 0x8e2300cc  lw          $v1, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5403D8u;
            goto label_5403d8;
        }
    }
    ctx->pc = 0x5403A8u;
label_5403a8:
    // 0x5403a8: 0x920207c2  lbu         $v0, 0x7C2($s0)
    ctx->pc = 0x5403a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1986)));
label_5403ac:
    // 0x5403ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_5403b0:
    if (ctx->pc == 0x5403B0u) {
        ctx->pc = 0x5403B4u;
        goto label_5403b4;
    }
    ctx->pc = 0x5403ACu;
    {
        const bool branch_taken_0x5403ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5403ac) {
            ctx->pc = 0x5403D4u;
            goto label_5403d4;
        }
    }
    ctx->pc = 0x5403B4u;
label_5403b4:
    // 0x5403b4: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x5403b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_5403b8:
    // 0x5403b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5403b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5403bc:
    // 0x5403bc: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x5403bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_5403c0:
    // 0x5403c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x5403c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5403c4:
    // 0x5403c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5403c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_5403c8:
    // 0x5403c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x5403c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_5403cc:
    // 0x5403cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_5403d0:
    if (ctx->pc == 0x5403D0u) {
        ctx->pc = 0x5403D0u;
            // 0x5403d0: 0xac44001c  sw          $a0, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
        ctx->pc = 0x5403D4u;
        goto label_5403d4;
    }
    ctx->pc = 0x5403CCu;
    {
        const bool branch_taken_0x5403cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5403D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5403CCu;
            // 0x5403d0: 0xac44001c  sw          $a0, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5403cc) {
            ctx->pc = 0x5403F0u;
            goto label_5403f0;
        }
    }
    ctx->pc = 0x5403D4u;
label_5403d4:
    // 0x5403d4: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x5403d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_5403d8:
    // 0x5403d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5403d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5403dc:
    // 0x5403dc: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x5403dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_5403e0:
    // 0x5403e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x5403e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5403e4:
    // 0x5403e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5403e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_5403e8:
    // 0x5403e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x5403e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_5403ec:
    // 0x5403ec: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x5403ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
label_5403f0:
    // 0x5403f0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x5403f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5403f4:
    // 0x5403f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5403f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5403f8:
    // 0x5403f8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x5403f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_5403fc:
    // 0x5403fc: 0x320f809  jalr        $t9
label_540400:
    if (ctx->pc == 0x540400u) {
        ctx->pc = 0x540400u;
            // 0x540400: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x540404u;
        goto label_540404;
    }
    ctx->pc = 0x5403FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x540404u);
        ctx->pc = 0x540400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5403FCu;
            // 0x540400: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x540404u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x540404u; }
            if (ctx->pc != 0x540404u) { return; }
        }
        }
    }
    ctx->pc = 0x540404u;
label_540404:
    // 0x540404: 0x10000035  b           . + 4 + (0x35 << 2)
label_540408:
    if (ctx->pc == 0x540408u) {
        ctx->pc = 0x54040Cu;
        goto label_54040c;
    }
    ctx->pc = 0x540404u;
    {
        const bool branch_taken_0x540404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540404) {
            ctx->pc = 0x5404DCu;
            goto label_5404dc;
        }
    }
    ctx->pc = 0x54040Cu;
label_54040c:
    // 0x54040c: 0x14460033  bne         $v0, $a2, . + 4 + (0x33 << 2)
label_540410:
    if (ctx->pc == 0x540410u) {
        ctx->pc = 0x540414u;
        goto label_540414;
    }
    ctx->pc = 0x54040Cu;
    {
        const bool branch_taken_0x54040c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x54040c) {
            ctx->pc = 0x5404DCu;
            goto label_5404dc;
        }
    }
    ctx->pc = 0x540414u;
label_540414:
    // 0x540414: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x540414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_540418:
    // 0x540418: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x540418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54041c:
    // 0x54041c: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x54041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_540420:
    // 0x540420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x540420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_540424:
    // 0x540424: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x540424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_540428:
    // 0x540428: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x540428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_54042c:
    // 0x54042c: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x54042cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
label_540430:
    // 0x540430: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x540430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_540434:
    // 0x540434: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x540434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_540438:
    // 0x540438: 0x320f809  jalr        $t9
label_54043c:
    if (ctx->pc == 0x54043Cu) {
        ctx->pc = 0x54043Cu;
            // 0x54043c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x540440u;
        goto label_540440;
    }
    ctx->pc = 0x540438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x540440u);
        ctx->pc = 0x54043Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x540438u;
            // 0x54043c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x540440u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x540440u; }
            if (ctx->pc != 0x540440u) { return; }
        }
        }
    }
    ctx->pc = 0x540440u;
label_540440:
    // 0x540440: 0x10000026  b           . + 4 + (0x26 << 2)
label_540444:
    if (ctx->pc == 0x540444u) {
        ctx->pc = 0x540448u;
        goto label_540448;
    }
    ctx->pc = 0x540440u;
    {
        const bool branch_taken_0x540440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540440) {
            ctx->pc = 0x5404DCu;
            goto label_5404dc;
        }
    }
    ctx->pc = 0x540448u;
label_540448:
    // 0x540448: 0xc1502f0  jal         func_540BC0
label_54044c:
    if (ctx->pc == 0x54044Cu) {
        ctx->pc = 0x54044Cu;
            // 0x54044c: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->pc = 0x540450u;
        goto label_540450;
    }
    ctx->pc = 0x540448u;
    SET_GPR_U32(ctx, 31, 0x540450u);
    ctx->pc = 0x54044Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540448u;
            // 0x54044c: 0xae2200c8  sw          $v0, 0xC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x540BC0u;
    if (runtime->hasFunction(0x540BC0u)) {
        auto targetFn = runtime->lookupFunction(0x540BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540450u; }
        if (ctx->pc != 0x540450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00540BC0_0x540bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540450u; }
        if (ctx->pc != 0x540450u) { return; }
    }
    ctx->pc = 0x540450u;
label_540450:
    // 0x540450: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x540450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_540454:
    // 0x540454: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x540454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_540458:
    // 0x540458: 0xae3000cc  sw          $s0, 0xCC($s1)
    ctx->pc = 0x540458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 16));
label_54045c:
    // 0x54045c: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x54045cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_540460:
    // 0x540460: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x540460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_540464:
    // 0x540464: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x540464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_540468:
    // 0x540468: 0x320f809  jalr        $t9
label_54046c:
    if (ctx->pc == 0x54046Cu) {
        ctx->pc = 0x540470u;
        goto label_540470;
    }
    ctx->pc = 0x540468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x540470u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x540470u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x540470u; }
            if (ctx->pc != 0x540470u) { return; }
        }
        }
    }
    ctx->pc = 0x540470u;
label_540470:
    // 0x540470: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x540470u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_540474:
    // 0x540474: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_540478:
    if (ctx->pc == 0x540478u) {
        ctx->pc = 0x540478u;
            // 0x540478: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x54047Cu;
        goto label_54047c;
    }
    ctx->pc = 0x540474u;
    {
        const bool branch_taken_0x540474 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x540474) {
            ctx->pc = 0x540478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x540474u;
            // 0x540478: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x540498u;
            goto label_540498;
        }
    }
    ctx->pc = 0x54047Cu;
label_54047c:
    // 0x54047c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x54047cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_540480:
    // 0x540480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x540480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_540484:
    // 0x540484: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x540484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_540488:
    // 0x540488: 0x320f809  jalr        $t9
label_54048c:
    if (ctx->pc == 0x54048Cu) {
        ctx->pc = 0x54048Cu;
            // 0x54048c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x540490u;
        goto label_540490;
    }
    ctx->pc = 0x540488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x540490u);
        ctx->pc = 0x54048Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x540488u;
            // 0x54048c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x540490u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x540490u; }
            if (ctx->pc != 0x540490u) { return; }
        }
        }
    }
    ctx->pc = 0x540490u;
label_540490:
    // 0x540490: 0x10000012  b           . + 4 + (0x12 << 2)
label_540494:
    if (ctx->pc == 0x540494u) {
        ctx->pc = 0x540498u;
        goto label_540498;
    }
    ctx->pc = 0x540490u;
    {
        const bool branch_taken_0x540490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540490) {
            ctx->pc = 0x5404DCu;
            goto label_5404dc;
        }
    }
    ctx->pc = 0x540498u;
label_540498:
    // 0x540498: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x540498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_54049c:
    // 0x54049c: 0x320f809  jalr        $t9
label_5404a0:
    if (ctx->pc == 0x5404A0u) {
        ctx->pc = 0x5404A0u;
            // 0x5404a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5404A4u;
        goto label_5404a4;
    }
    ctx->pc = 0x54049Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5404A4u);
        ctx->pc = 0x5404A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54049Cu;
            // 0x5404a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5404A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5404A4u; }
            if (ctx->pc != 0x5404A4u) { return; }
        }
        }
    }
    ctx->pc = 0x5404A4u;
label_5404a4:
    // 0x5404a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5404a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5404a8:
    // 0x5404a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x5404a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5404ac:
    // 0x5404ac: 0xc14f5bc  jal         func_53D6F0
label_5404b0:
    if (ctx->pc == 0x5404B0u) {
        ctx->pc = 0x5404B0u;
            // 0x5404b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5404B4u;
        goto label_5404b4;
    }
    ctx->pc = 0x5404ACu;
    SET_GPR_U32(ctx, 31, 0x5404B4u);
    ctx->pc = 0x5404B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5404ACu;
            // 0x5404b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D6F0u;
    if (runtime->hasFunction(0x53D6F0u)) {
        auto targetFn = runtime->lookupFunction(0x53D6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5404B4u; }
        if (ctx->pc != 0x5404B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D6F0_0x53d6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5404B4u; }
        if (ctx->pc != 0x5404B4u) { return; }
    }
    ctx->pc = 0x5404B4u;
label_5404b4:
    // 0x5404b4: 0x10000009  b           . + 4 + (0x9 << 2)
label_5404b8:
    if (ctx->pc == 0x5404B8u) {
        ctx->pc = 0x5404BCu;
        goto label_5404bc;
    }
    ctx->pc = 0x5404B4u;
    {
        const bool branch_taken_0x5404b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5404b4) {
            ctx->pc = 0x5404DCu;
            goto label_5404dc;
        }
    }
    ctx->pc = 0x5404BCu;
label_5404bc:
    // 0x5404bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5404bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5404c0:
    // 0x5404c0: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x5404c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_5404c4:
    // 0x5404c4: 0x320f809  jalr        $t9
label_5404c8:
    if (ctx->pc == 0x5404C8u) {
        ctx->pc = 0x5404C8u;
            // 0x5404c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5404CCu;
        goto label_5404cc;
    }
    ctx->pc = 0x5404C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5404CCu);
        ctx->pc = 0x5404C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5404C4u;
            // 0x5404c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5404CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5404CCu; }
            if (ctx->pc != 0x5404CCu) { return; }
        }
        }
    }
    ctx->pc = 0x5404CCu;
label_5404cc:
    // 0x5404cc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x5404ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5404d0:
    // 0x5404d0: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x5404d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_5404d4:
    // 0x5404d4: 0x320f809  jalr        $t9
label_5404d8:
    if (ctx->pc == 0x5404D8u) {
        ctx->pc = 0x5404D8u;
            // 0x5404d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5404DCu;
        goto label_5404dc;
    }
    ctx->pc = 0x5404D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5404DCu);
        ctx->pc = 0x5404D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5404D4u;
            // 0x5404d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5404DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5404DCu; }
            if (ctx->pc != 0x5404DCu) { return; }
        }
        }
    }
    ctx->pc = 0x5404DCu;
label_5404dc:
    // 0x5404dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x5404dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_5404e0:
    // 0x5404e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5404e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5404e4:
    // 0x5404e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5404e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5404e8:
    // 0x5404e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5404e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5404ec:
    // 0x5404ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5404ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5404f0:
    // 0x5404f0: 0x3e00008  jr          $ra
label_5404f4:
    if (ctx->pc == 0x5404F4u) {
        ctx->pc = 0x5404F4u;
            // 0x5404f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x5404F8u;
        goto label_5404f8;
    }
    ctx->pc = 0x5404F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5404F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5404F0u;
            // 0x5404f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5404F8u;
label_5404f8:
    // 0x5404f8: 0x0  nop
    ctx->pc = 0x5404f8u;
    // NOP
label_5404fc:
    // 0x5404fc: 0x0  nop
    ctx->pc = 0x5404fcu;
    // NOP
label_540500:
    // 0x540500: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x540500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_540504:
    // 0x540504: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x540504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_540508:
    // 0x540508: 0x3e00008  jr          $ra
label_54050c:
    if (ctx->pc == 0x54050Cu) {
        ctx->pc = 0x54050Cu;
            // 0x54050c: 0x8c420048  lw          $v0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->pc = 0x540510u;
        goto label_540510;
    }
    ctx->pc = 0x540508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54050Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x540508u;
            // 0x54050c: 0x8c420048  lw          $v0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x540510u;
label_540510:
    // 0x540510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x540510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_540514:
    // 0x540514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x540514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_540518:
    // 0x540518: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x540518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_54051c:
    // 0x54051c: 0x2c61000f  sltiu       $at, $v1, 0xF
    ctx->pc = 0x54051cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_540520:
    // 0x540520: 0x50200069  beql        $at, $zero, . + 4 + (0x69 << 2)
label_540524:
    if (ctx->pc == 0x540524u) {
        ctx->pc = 0x540524u;
            // 0x540524: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x540528u;
        goto label_540528;
    }
    ctx->pc = 0x540520u;
    {
        const bool branch_taken_0x540520 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x540520) {
            ctx->pc = 0x540524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x540520u;
            // 0x540524: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5406C8u;
            goto label_5406c8;
        }
    }
    ctx->pc = 0x540528u;
label_540528:
    // 0x540528: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x540528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54052c:
    // 0x54052c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x54052cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_540530:
    // 0x540530: 0x24a5dab0  addiu       $a1, $a1, -0x2550
    ctx->pc = 0x540530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957744));
label_540534:
    // 0x540534: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x540534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_540538:
    // 0x540538: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x540538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_54053c:
    // 0x54053c: 0x600008  jr          $v1
label_540540:
    if (ctx->pc == 0x540540u) {
        ctx->pc = 0x540544u;
        goto label_540544;
    }
    ctx->pc = 0x54053Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x540544u: goto label_540544;
            case 0x540560u: goto label_540560;
            case 0x5405A0u: goto label_5405a0;
            case 0x5405BCu: goto label_5405bc;
            case 0x5405D8u: goto label_5405d8;
            case 0x5405F4u: goto label_5405f4;
            case 0x540678u: goto label_540678;
            case 0x540694u: goto label_540694;
            case 0x5406B0u: goto label_5406b0;
            case 0x5406C4u: goto label_5406c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x540544u;
label_540544:
    // 0x540544: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x540544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_540548:
    // 0x540548: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54054c:
    // 0x54054c: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x54054cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540550:
    // 0x540550: 0xc14f45c  jal         func_53D170
label_540554:
    if (ctx->pc == 0x540554u) {
        ctx->pc = 0x540554u;
            // 0x540554: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540558u;
        goto label_540558;
    }
    ctx->pc = 0x540550u;
    SET_GPR_U32(ctx, 31, 0x540558u);
    ctx->pc = 0x540554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540550u;
            // 0x540554: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540558u; }
        if (ctx->pc != 0x540558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540558u; }
        if (ctx->pc != 0x540558u) { return; }
    }
    ctx->pc = 0x540558u;
label_540558:
    // 0x540558: 0x1000005a  b           . + 4 + (0x5A << 2)
label_54055c:
    if (ctx->pc == 0x54055Cu) {
        ctx->pc = 0x540560u;
        goto label_540560;
    }
    ctx->pc = 0x540558u;
    {
        const bool branch_taken_0x540558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540558) {
            ctx->pc = 0x5406C4u;
            goto label_5406c4;
        }
    }
    ctx->pc = 0x540560u;
label_540560:
    // 0x540560: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x540560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_540564:
    // 0x540564: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_540568:
    if (ctx->pc == 0x540568u) {
        ctx->pc = 0x540568u;
            // 0x540568: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->pc = 0x54056Cu;
        goto label_54056c;
    }
    ctx->pc = 0x540564u;
    {
        const bool branch_taken_0x540564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x540564) {
            ctx->pc = 0x540568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x540564u;
            // 0x540568: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
            ctx->pc = 0x540588u;
            goto label_540588;
        }
    }
    ctx->pc = 0x54056Cu;
label_54056c:
    // 0x54056c: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x54056cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_540570:
    // 0x540570: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_540574:
    // 0x540574: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x540574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540578:
    // 0x540578: 0xc14f45c  jal         func_53D170
label_54057c:
    if (ctx->pc == 0x54057Cu) {
        ctx->pc = 0x54057Cu;
            // 0x54057c: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540580u;
        goto label_540580;
    }
    ctx->pc = 0x540578u;
    SET_GPR_U32(ctx, 31, 0x540580u);
    ctx->pc = 0x54057Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540578u;
            // 0x54057c: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540580u; }
        if (ctx->pc != 0x540580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540580u; }
        if (ctx->pc != 0x540580u) { return; }
    }
    ctx->pc = 0x540580u;
label_540580:
    // 0x540580: 0x10000050  b           . + 4 + (0x50 << 2)
label_540584:
    if (ctx->pc == 0x540584u) {
        ctx->pc = 0x540588u;
        goto label_540588;
    }
    ctx->pc = 0x540580u;
    {
        const bool branch_taken_0x540580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540580) {
            ctx->pc = 0x5406C4u;
            goto label_5406c4;
        }
    }
    ctx->pc = 0x540588u;
label_540588:
    // 0x540588: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54058c:
    // 0x54058c: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x54058cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540590:
    // 0x540590: 0xc14f45c  jal         func_53D170
label_540594:
    if (ctx->pc == 0x540594u) {
        ctx->pc = 0x540594u;
            // 0x540594: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540598u;
        goto label_540598;
    }
    ctx->pc = 0x540590u;
    SET_GPR_U32(ctx, 31, 0x540598u);
    ctx->pc = 0x540594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540590u;
            // 0x540594: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540598u; }
        if (ctx->pc != 0x540598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540598u; }
        if (ctx->pc != 0x540598u) { return; }
    }
    ctx->pc = 0x540598u;
label_540598:
    // 0x540598: 0x1000004a  b           . + 4 + (0x4A << 2)
label_54059c:
    if (ctx->pc == 0x54059Cu) {
        ctx->pc = 0x5405A0u;
        goto label_5405a0;
    }
    ctx->pc = 0x540598u;
    {
        const bool branch_taken_0x540598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540598) {
            ctx->pc = 0x5406C4u;
            goto label_5406c4;
        }
    }
    ctx->pc = 0x5405A0u;
label_5405a0:
    // 0x5405a0: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x5405a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_5405a4:
    // 0x5405a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5405a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5405a8:
    // 0x5405a8: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x5405a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_5405ac:
    // 0x5405ac: 0xc14f45c  jal         func_53D170
label_5405b0:
    if (ctx->pc == 0x5405B0u) {
        ctx->pc = 0x5405B0u;
            // 0x5405b0: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x5405B4u;
        goto label_5405b4;
    }
    ctx->pc = 0x5405ACu;
    SET_GPR_U32(ctx, 31, 0x5405B4u);
    ctx->pc = 0x5405B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5405ACu;
            // 0x5405b0: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5405B4u; }
        if (ctx->pc != 0x5405B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5405B4u; }
        if (ctx->pc != 0x5405B4u) { return; }
    }
    ctx->pc = 0x5405B4u;
label_5405b4:
    // 0x5405b4: 0x10000043  b           . + 4 + (0x43 << 2)
label_5405b8:
    if (ctx->pc == 0x5405B8u) {
        ctx->pc = 0x5405BCu;
        goto label_5405bc;
    }
    ctx->pc = 0x5405B4u;
    {
        const bool branch_taken_0x5405b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5405b4) {
            ctx->pc = 0x5406C4u;
            goto label_5406c4;
        }
    }
    ctx->pc = 0x5405BCu;
label_5405bc:
    // 0x5405bc: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x5405bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_5405c0:
    // 0x5405c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5405c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5405c4:
    // 0x5405c4: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x5405c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_5405c8:
    // 0x5405c8: 0xc14f45c  jal         func_53D170
label_5405cc:
    if (ctx->pc == 0x5405CCu) {
        ctx->pc = 0x5405CCu;
            // 0x5405cc: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x5405D0u;
        goto label_5405d0;
    }
    ctx->pc = 0x5405C8u;
    SET_GPR_U32(ctx, 31, 0x5405D0u);
    ctx->pc = 0x5405CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5405C8u;
            // 0x5405cc: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5405D0u; }
        if (ctx->pc != 0x5405D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5405D0u; }
        if (ctx->pc != 0x5405D0u) { return; }
    }
    ctx->pc = 0x5405D0u;
label_5405d0:
    // 0x5405d0: 0x1000003c  b           . + 4 + (0x3C << 2)
label_5405d4:
    if (ctx->pc == 0x5405D4u) {
        ctx->pc = 0x5405D8u;
        goto label_5405d8;
    }
    ctx->pc = 0x5405D0u;
    {
        const bool branch_taken_0x5405d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5405d0) {
            ctx->pc = 0x5406C4u;
            goto label_5406c4;
        }
    }
    ctx->pc = 0x5405D8u;
label_5405d8:
    // 0x5405d8: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x5405d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_5405dc:
    // 0x5405dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5405dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5405e0:
    // 0x5405e0: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x5405e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_5405e4:
    // 0x5405e4: 0xc14f45c  jal         func_53D170
label_5405e8:
    if (ctx->pc == 0x5405E8u) {
        ctx->pc = 0x5405E8u;
            // 0x5405e8: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x5405ECu;
        goto label_5405ec;
    }
    ctx->pc = 0x5405E4u;
    SET_GPR_U32(ctx, 31, 0x5405ECu);
    ctx->pc = 0x5405E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5405E4u;
            // 0x5405e8: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5405ECu; }
        if (ctx->pc != 0x5405ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5405ECu; }
        if (ctx->pc != 0x5405ECu) { return; }
    }
    ctx->pc = 0x5405ECu;
label_5405ec:
    // 0x5405ec: 0x10000035  b           . + 4 + (0x35 << 2)
label_5405f0:
    if (ctx->pc == 0x5405F0u) {
        ctx->pc = 0x5405F4u;
        goto label_5405f4;
    }
    ctx->pc = 0x5405ECu;
    {
        const bool branch_taken_0x5405ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5405ec) {
            ctx->pc = 0x5406C4u;
            goto label_5406c4;
        }
    }
    ctx->pc = 0x5405F4u;
label_5405f4:
    // 0x5405f4: 0x8c85006c  lw          $a1, 0x6C($a0)
    ctx->pc = 0x5405f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_5405f8:
    // 0x5405f8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x5405f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_5405fc:
    // 0x5405fc: 0x50a30018  beql        $a1, $v1, . + 4 + (0x18 << 2)
label_540600:
    if (ctx->pc == 0x540600u) {
        ctx->pc = 0x540600u;
            // 0x540600: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x540604u;
        goto label_540604;
    }
    ctx->pc = 0x5405FCu;
    {
        const bool branch_taken_0x5405fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5405fc) {
            ctx->pc = 0x540600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5405FCu;
            // 0x540600: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
            ctx->pc = 0x540660u;
            goto label_540660;
        }
    }
    ctx->pc = 0x540604u;
label_540604:
    // 0x540604: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x540604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_540608:
    // 0x540608: 0x50a3000f  beql        $a1, $v1, . + 4 + (0xF << 2)
label_54060c:
    if (ctx->pc == 0x54060Cu) {
        ctx->pc = 0x54060Cu;
            // 0x54060c: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x540610u;
        goto label_540610;
    }
    ctx->pc = 0x540608u;
    {
        const bool branch_taken_0x540608 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x540608) {
            ctx->pc = 0x54060Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x540608u;
            // 0x54060c: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
            ctx->pc = 0x540648u;
            goto label_540648;
        }
    }
    ctx->pc = 0x540610u;
label_540610:
    // 0x540610: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x540610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_540614:
    // 0x540614: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_540618:
    if (ctx->pc == 0x540618u) {
        ctx->pc = 0x54061Cu;
        goto label_54061c;
    }
    ctx->pc = 0x540614u;
    {
        const bool branch_taken_0x540614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x540614) {
            ctx->pc = 0x540644u;
            goto label_540644;
        }
    }
    ctx->pc = 0x54061Cu;
label_54061c:
    // 0x54061c: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_540620:
    if (ctx->pc == 0x540620u) {
        ctx->pc = 0x540620u;
            // 0x540620: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x540624u;
        goto label_540624;
    }
    ctx->pc = 0x54061Cu;
    {
        const bool branch_taken_0x54061c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x54061c) {
            ctx->pc = 0x540620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54061Cu;
            // 0x540620: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54062Cu;
            goto label_54062c;
        }
    }
    ctx->pc = 0x540624u;
label_540624:
    // 0x540624: 0x10000027  b           . + 4 + (0x27 << 2)
label_540628:
    if (ctx->pc == 0x540628u) {
        ctx->pc = 0x54062Cu;
        goto label_54062c;
    }
    ctx->pc = 0x540624u;
    {
        const bool branch_taken_0x540624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540624) {
            ctx->pc = 0x5406C4u;
            goto label_5406c4;
        }
    }
    ctx->pc = 0x54062Cu;
label_54062c:
    // 0x54062c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x54062cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_540630:
    // 0x540630: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x540630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540634:
    // 0x540634: 0xc14f45c  jal         func_53D170
label_540638:
    if (ctx->pc == 0x540638u) {
        ctx->pc = 0x540638u;
            // 0x540638: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x54063Cu;
        goto label_54063c;
    }
    ctx->pc = 0x540634u;
    SET_GPR_U32(ctx, 31, 0x54063Cu);
    ctx->pc = 0x540638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540634u;
            // 0x540638: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54063Cu; }
        if (ctx->pc != 0x54063Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54063Cu; }
        if (ctx->pc != 0x54063Cu) { return; }
    }
    ctx->pc = 0x54063Cu;
label_54063c:
    // 0x54063c: 0x10000021  b           . + 4 + (0x21 << 2)
label_540640:
    if (ctx->pc == 0x540640u) {
        ctx->pc = 0x540644u;
        goto label_540644;
    }
    ctx->pc = 0x54063Cu;
    {
        const bool branch_taken_0x54063c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54063c) {
            ctx->pc = 0x5406C4u;
            goto label_5406c4;
        }
    }
    ctx->pc = 0x540644u;
label_540644:
    // 0x540644: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x540644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_540648:
    // 0x540648: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54064c:
    // 0x54064c: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x54064cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540650:
    // 0x540650: 0xc14f45c  jal         func_53D170
label_540654:
    if (ctx->pc == 0x540654u) {
        ctx->pc = 0x540654u;
            // 0x540654: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540658u;
        goto label_540658;
    }
    ctx->pc = 0x540650u;
    SET_GPR_U32(ctx, 31, 0x540658u);
    ctx->pc = 0x540654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540650u;
            // 0x540654: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540658u; }
        if (ctx->pc != 0x540658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540658u; }
        if (ctx->pc != 0x540658u) { return; }
    }
    ctx->pc = 0x540658u;
label_540658:
    // 0x540658: 0x1000001a  b           . + 4 + (0x1A << 2)
label_54065c:
    if (ctx->pc == 0x54065Cu) {
        ctx->pc = 0x540660u;
        goto label_540660;
    }
    ctx->pc = 0x540658u;
    {
        const bool branch_taken_0x540658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540658) {
            ctx->pc = 0x5406C4u;
            goto label_5406c4;
        }
    }
    ctx->pc = 0x540660u;
label_540660:
    // 0x540660: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_540664:
    // 0x540664: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x540664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540668:
    // 0x540668: 0xc14f45c  jal         func_53D170
label_54066c:
    if (ctx->pc == 0x54066Cu) {
        ctx->pc = 0x54066Cu;
            // 0x54066c: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x540670u;
        goto label_540670;
    }
    ctx->pc = 0x540668u;
    SET_GPR_U32(ctx, 31, 0x540670u);
    ctx->pc = 0x54066Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540668u;
            // 0x54066c: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540670u; }
        if (ctx->pc != 0x540670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x540670u; }
        if (ctx->pc != 0x540670u) { return; }
    }
    ctx->pc = 0x540670u;
label_540670:
    // 0x540670: 0x10000014  b           . + 4 + (0x14 << 2)
label_540674:
    if (ctx->pc == 0x540674u) {
        ctx->pc = 0x540678u;
        goto label_540678;
    }
    ctx->pc = 0x540670u;
    {
        const bool branch_taken_0x540670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x540670) {
            ctx->pc = 0x5406C4u;
            goto label_5406c4;
        }
    }
    ctx->pc = 0x540678u;
label_540678:
    // 0x540678: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x540678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_54067c:
    // 0x54067c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x54067cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_540680:
    // 0x540680: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x540680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_540684:
    // 0x540684: 0xc14f45c  jal         func_53D170
label_540688:
    if (ctx->pc == 0x540688u) {
        ctx->pc = 0x540688u;
            // 0x540688: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x54068Cu;
        goto label_54068c;
    }
    ctx->pc = 0x540684u;
    SET_GPR_U32(ctx, 31, 0x54068Cu);
    ctx->pc = 0x540688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x540684u;
            // 0x540688: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54068Cu; }
        if (ctx->pc != 0x54068Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54068Cu; }
        if (ctx->pc != 0x54068Cu) { return; }
    }
    ctx->pc = 0x54068Cu;
label_54068c:
    // 0x54068c: 0x1000000d  b           . + 4 + (0xD << 2)
label_540690:
    if (ctx->pc == 0x540690u) {
        ctx->pc = 0x540694u;
        goto label_540694;
    }
    ctx->pc = 0x54068Cu;
    {
        const bool branch_taken_0x54068c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x54068c) {
            ctx->pc = 0x5406C4u;
            goto label_5406c4;
        }
    }
    ctx->pc = 0x540694u;
label_540694:
    // 0x540694: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x540694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_540698:
    // 0x540698: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x540698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54069c:
    // 0x54069c: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x54069cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_5406a0:
    // 0x5406a0: 0xc14f45c  jal         func_53D170
label_5406a4:
    if (ctx->pc == 0x5406A4u) {
        ctx->pc = 0x5406A4u;
            // 0x5406a4: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x5406A8u;
        goto label_5406a8;
    }
    ctx->pc = 0x5406A0u;
    SET_GPR_U32(ctx, 31, 0x5406A8u);
    ctx->pc = 0x5406A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5406A0u;
            // 0x5406a4: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5406A8u; }
        if (ctx->pc != 0x5406A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5406A8u; }
        if (ctx->pc != 0x5406A8u) { return; }
    }
    ctx->pc = 0x5406A8u;
label_5406a8:
    // 0x5406a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_5406ac:
    if (ctx->pc == 0x5406ACu) {
        ctx->pc = 0x5406B0u;
        goto label_5406b0;
    }
    ctx->pc = 0x5406A8u;
    {
        const bool branch_taken_0x5406a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5406a8) {
            ctx->pc = 0x5406C4u;
            goto label_5406c4;
        }
    }
    ctx->pc = 0x5406B0u;
label_5406b0:
    // 0x5406b0: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x5406b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_5406b4:
    // 0x5406b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5406b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5406b8:
    // 0x5406b8: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x5406b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_5406bc:
    // 0x5406bc: 0xc14f45c  jal         func_53D170
label_5406c0:
    if (ctx->pc == 0x5406C0u) {
        ctx->pc = 0x5406C0u;
            // 0x5406c0: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x5406C4u;
        goto label_5406c4;
    }
    ctx->pc = 0x5406BCu;
    SET_GPR_U32(ctx, 31, 0x5406C4u);
    ctx->pc = 0x5406C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5406BCu;
            // 0x5406c0: 0x24080104  addiu       $t0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53D170u;
    if (runtime->hasFunction(0x53D170u)) {
        auto targetFn = runtime->lookupFunction(0x53D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5406C4u; }
        if (ctx->pc != 0x5406C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053D170_0x53d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5406C4u; }
        if (ctx->pc != 0x5406C4u) { return; }
    }
    ctx->pc = 0x5406C4u;
label_5406c4:
    // 0x5406c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x5406c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_5406c8:
    // 0x5406c8: 0x3e00008  jr          $ra
label_5406cc:
    if (ctx->pc == 0x5406CCu) {
        ctx->pc = 0x5406CCu;
            // 0x5406cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x5406D0u;
        goto label_fallthrough_0x5406c8;
    }
    ctx->pc = 0x5406C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5406CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5406C8u;
            // 0x5406cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x5406c8:
    ctx->pc = 0x5406D0u;
}
