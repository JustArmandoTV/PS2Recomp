#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044F6C0
// Address: 0x44f6c0 - 0x4500e0
void sub_0044F6C0_0x44f6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F6C0_0x44f6c0");
#endif

    switch (ctx->pc) {
        case 0x44f6c0u: goto label_44f6c0;
        case 0x44f6c4u: goto label_44f6c4;
        case 0x44f6c8u: goto label_44f6c8;
        case 0x44f6ccu: goto label_44f6cc;
        case 0x44f6d0u: goto label_44f6d0;
        case 0x44f6d4u: goto label_44f6d4;
        case 0x44f6d8u: goto label_44f6d8;
        case 0x44f6dcu: goto label_44f6dc;
        case 0x44f6e0u: goto label_44f6e0;
        case 0x44f6e4u: goto label_44f6e4;
        case 0x44f6e8u: goto label_44f6e8;
        case 0x44f6ecu: goto label_44f6ec;
        case 0x44f6f0u: goto label_44f6f0;
        case 0x44f6f4u: goto label_44f6f4;
        case 0x44f6f8u: goto label_44f6f8;
        case 0x44f6fcu: goto label_44f6fc;
        case 0x44f700u: goto label_44f700;
        case 0x44f704u: goto label_44f704;
        case 0x44f708u: goto label_44f708;
        case 0x44f70cu: goto label_44f70c;
        case 0x44f710u: goto label_44f710;
        case 0x44f714u: goto label_44f714;
        case 0x44f718u: goto label_44f718;
        case 0x44f71cu: goto label_44f71c;
        case 0x44f720u: goto label_44f720;
        case 0x44f724u: goto label_44f724;
        case 0x44f728u: goto label_44f728;
        case 0x44f72cu: goto label_44f72c;
        case 0x44f730u: goto label_44f730;
        case 0x44f734u: goto label_44f734;
        case 0x44f738u: goto label_44f738;
        case 0x44f73cu: goto label_44f73c;
        case 0x44f740u: goto label_44f740;
        case 0x44f744u: goto label_44f744;
        case 0x44f748u: goto label_44f748;
        case 0x44f74cu: goto label_44f74c;
        case 0x44f750u: goto label_44f750;
        case 0x44f754u: goto label_44f754;
        case 0x44f758u: goto label_44f758;
        case 0x44f75cu: goto label_44f75c;
        case 0x44f760u: goto label_44f760;
        case 0x44f764u: goto label_44f764;
        case 0x44f768u: goto label_44f768;
        case 0x44f76cu: goto label_44f76c;
        case 0x44f770u: goto label_44f770;
        case 0x44f774u: goto label_44f774;
        case 0x44f778u: goto label_44f778;
        case 0x44f77cu: goto label_44f77c;
        case 0x44f780u: goto label_44f780;
        case 0x44f784u: goto label_44f784;
        case 0x44f788u: goto label_44f788;
        case 0x44f78cu: goto label_44f78c;
        case 0x44f790u: goto label_44f790;
        case 0x44f794u: goto label_44f794;
        case 0x44f798u: goto label_44f798;
        case 0x44f79cu: goto label_44f79c;
        case 0x44f7a0u: goto label_44f7a0;
        case 0x44f7a4u: goto label_44f7a4;
        case 0x44f7a8u: goto label_44f7a8;
        case 0x44f7acu: goto label_44f7ac;
        case 0x44f7b0u: goto label_44f7b0;
        case 0x44f7b4u: goto label_44f7b4;
        case 0x44f7b8u: goto label_44f7b8;
        case 0x44f7bcu: goto label_44f7bc;
        case 0x44f7c0u: goto label_44f7c0;
        case 0x44f7c4u: goto label_44f7c4;
        case 0x44f7c8u: goto label_44f7c8;
        case 0x44f7ccu: goto label_44f7cc;
        case 0x44f7d0u: goto label_44f7d0;
        case 0x44f7d4u: goto label_44f7d4;
        case 0x44f7d8u: goto label_44f7d8;
        case 0x44f7dcu: goto label_44f7dc;
        case 0x44f7e0u: goto label_44f7e0;
        case 0x44f7e4u: goto label_44f7e4;
        case 0x44f7e8u: goto label_44f7e8;
        case 0x44f7ecu: goto label_44f7ec;
        case 0x44f7f0u: goto label_44f7f0;
        case 0x44f7f4u: goto label_44f7f4;
        case 0x44f7f8u: goto label_44f7f8;
        case 0x44f7fcu: goto label_44f7fc;
        case 0x44f800u: goto label_44f800;
        case 0x44f804u: goto label_44f804;
        case 0x44f808u: goto label_44f808;
        case 0x44f80cu: goto label_44f80c;
        case 0x44f810u: goto label_44f810;
        case 0x44f814u: goto label_44f814;
        case 0x44f818u: goto label_44f818;
        case 0x44f81cu: goto label_44f81c;
        case 0x44f820u: goto label_44f820;
        case 0x44f824u: goto label_44f824;
        case 0x44f828u: goto label_44f828;
        case 0x44f82cu: goto label_44f82c;
        case 0x44f830u: goto label_44f830;
        case 0x44f834u: goto label_44f834;
        case 0x44f838u: goto label_44f838;
        case 0x44f83cu: goto label_44f83c;
        case 0x44f840u: goto label_44f840;
        case 0x44f844u: goto label_44f844;
        case 0x44f848u: goto label_44f848;
        case 0x44f84cu: goto label_44f84c;
        case 0x44f850u: goto label_44f850;
        case 0x44f854u: goto label_44f854;
        case 0x44f858u: goto label_44f858;
        case 0x44f85cu: goto label_44f85c;
        case 0x44f860u: goto label_44f860;
        case 0x44f864u: goto label_44f864;
        case 0x44f868u: goto label_44f868;
        case 0x44f86cu: goto label_44f86c;
        case 0x44f870u: goto label_44f870;
        case 0x44f874u: goto label_44f874;
        case 0x44f878u: goto label_44f878;
        case 0x44f87cu: goto label_44f87c;
        case 0x44f880u: goto label_44f880;
        case 0x44f884u: goto label_44f884;
        case 0x44f888u: goto label_44f888;
        case 0x44f88cu: goto label_44f88c;
        case 0x44f890u: goto label_44f890;
        case 0x44f894u: goto label_44f894;
        case 0x44f898u: goto label_44f898;
        case 0x44f89cu: goto label_44f89c;
        case 0x44f8a0u: goto label_44f8a0;
        case 0x44f8a4u: goto label_44f8a4;
        case 0x44f8a8u: goto label_44f8a8;
        case 0x44f8acu: goto label_44f8ac;
        case 0x44f8b0u: goto label_44f8b0;
        case 0x44f8b4u: goto label_44f8b4;
        case 0x44f8b8u: goto label_44f8b8;
        case 0x44f8bcu: goto label_44f8bc;
        case 0x44f8c0u: goto label_44f8c0;
        case 0x44f8c4u: goto label_44f8c4;
        case 0x44f8c8u: goto label_44f8c8;
        case 0x44f8ccu: goto label_44f8cc;
        case 0x44f8d0u: goto label_44f8d0;
        case 0x44f8d4u: goto label_44f8d4;
        case 0x44f8d8u: goto label_44f8d8;
        case 0x44f8dcu: goto label_44f8dc;
        case 0x44f8e0u: goto label_44f8e0;
        case 0x44f8e4u: goto label_44f8e4;
        case 0x44f8e8u: goto label_44f8e8;
        case 0x44f8ecu: goto label_44f8ec;
        case 0x44f8f0u: goto label_44f8f0;
        case 0x44f8f4u: goto label_44f8f4;
        case 0x44f8f8u: goto label_44f8f8;
        case 0x44f8fcu: goto label_44f8fc;
        case 0x44f900u: goto label_44f900;
        case 0x44f904u: goto label_44f904;
        case 0x44f908u: goto label_44f908;
        case 0x44f90cu: goto label_44f90c;
        case 0x44f910u: goto label_44f910;
        case 0x44f914u: goto label_44f914;
        case 0x44f918u: goto label_44f918;
        case 0x44f91cu: goto label_44f91c;
        case 0x44f920u: goto label_44f920;
        case 0x44f924u: goto label_44f924;
        case 0x44f928u: goto label_44f928;
        case 0x44f92cu: goto label_44f92c;
        case 0x44f930u: goto label_44f930;
        case 0x44f934u: goto label_44f934;
        case 0x44f938u: goto label_44f938;
        case 0x44f93cu: goto label_44f93c;
        case 0x44f940u: goto label_44f940;
        case 0x44f944u: goto label_44f944;
        case 0x44f948u: goto label_44f948;
        case 0x44f94cu: goto label_44f94c;
        case 0x44f950u: goto label_44f950;
        case 0x44f954u: goto label_44f954;
        case 0x44f958u: goto label_44f958;
        case 0x44f95cu: goto label_44f95c;
        case 0x44f960u: goto label_44f960;
        case 0x44f964u: goto label_44f964;
        case 0x44f968u: goto label_44f968;
        case 0x44f96cu: goto label_44f96c;
        case 0x44f970u: goto label_44f970;
        case 0x44f974u: goto label_44f974;
        case 0x44f978u: goto label_44f978;
        case 0x44f97cu: goto label_44f97c;
        case 0x44f980u: goto label_44f980;
        case 0x44f984u: goto label_44f984;
        case 0x44f988u: goto label_44f988;
        case 0x44f98cu: goto label_44f98c;
        case 0x44f990u: goto label_44f990;
        case 0x44f994u: goto label_44f994;
        case 0x44f998u: goto label_44f998;
        case 0x44f99cu: goto label_44f99c;
        case 0x44f9a0u: goto label_44f9a0;
        case 0x44f9a4u: goto label_44f9a4;
        case 0x44f9a8u: goto label_44f9a8;
        case 0x44f9acu: goto label_44f9ac;
        case 0x44f9b0u: goto label_44f9b0;
        case 0x44f9b4u: goto label_44f9b4;
        case 0x44f9b8u: goto label_44f9b8;
        case 0x44f9bcu: goto label_44f9bc;
        case 0x44f9c0u: goto label_44f9c0;
        case 0x44f9c4u: goto label_44f9c4;
        case 0x44f9c8u: goto label_44f9c8;
        case 0x44f9ccu: goto label_44f9cc;
        case 0x44f9d0u: goto label_44f9d0;
        case 0x44f9d4u: goto label_44f9d4;
        case 0x44f9d8u: goto label_44f9d8;
        case 0x44f9dcu: goto label_44f9dc;
        case 0x44f9e0u: goto label_44f9e0;
        case 0x44f9e4u: goto label_44f9e4;
        case 0x44f9e8u: goto label_44f9e8;
        case 0x44f9ecu: goto label_44f9ec;
        case 0x44f9f0u: goto label_44f9f0;
        case 0x44f9f4u: goto label_44f9f4;
        case 0x44f9f8u: goto label_44f9f8;
        case 0x44f9fcu: goto label_44f9fc;
        case 0x44fa00u: goto label_44fa00;
        case 0x44fa04u: goto label_44fa04;
        case 0x44fa08u: goto label_44fa08;
        case 0x44fa0cu: goto label_44fa0c;
        case 0x44fa10u: goto label_44fa10;
        case 0x44fa14u: goto label_44fa14;
        case 0x44fa18u: goto label_44fa18;
        case 0x44fa1cu: goto label_44fa1c;
        case 0x44fa20u: goto label_44fa20;
        case 0x44fa24u: goto label_44fa24;
        case 0x44fa28u: goto label_44fa28;
        case 0x44fa2cu: goto label_44fa2c;
        case 0x44fa30u: goto label_44fa30;
        case 0x44fa34u: goto label_44fa34;
        case 0x44fa38u: goto label_44fa38;
        case 0x44fa3cu: goto label_44fa3c;
        case 0x44fa40u: goto label_44fa40;
        case 0x44fa44u: goto label_44fa44;
        case 0x44fa48u: goto label_44fa48;
        case 0x44fa4cu: goto label_44fa4c;
        case 0x44fa50u: goto label_44fa50;
        case 0x44fa54u: goto label_44fa54;
        case 0x44fa58u: goto label_44fa58;
        case 0x44fa5cu: goto label_44fa5c;
        case 0x44fa60u: goto label_44fa60;
        case 0x44fa64u: goto label_44fa64;
        case 0x44fa68u: goto label_44fa68;
        case 0x44fa6cu: goto label_44fa6c;
        case 0x44fa70u: goto label_44fa70;
        case 0x44fa74u: goto label_44fa74;
        case 0x44fa78u: goto label_44fa78;
        case 0x44fa7cu: goto label_44fa7c;
        case 0x44fa80u: goto label_44fa80;
        case 0x44fa84u: goto label_44fa84;
        case 0x44fa88u: goto label_44fa88;
        case 0x44fa8cu: goto label_44fa8c;
        case 0x44fa90u: goto label_44fa90;
        case 0x44fa94u: goto label_44fa94;
        case 0x44fa98u: goto label_44fa98;
        case 0x44fa9cu: goto label_44fa9c;
        case 0x44faa0u: goto label_44faa0;
        case 0x44faa4u: goto label_44faa4;
        case 0x44faa8u: goto label_44faa8;
        case 0x44faacu: goto label_44faac;
        case 0x44fab0u: goto label_44fab0;
        case 0x44fab4u: goto label_44fab4;
        case 0x44fab8u: goto label_44fab8;
        case 0x44fabcu: goto label_44fabc;
        case 0x44fac0u: goto label_44fac0;
        case 0x44fac4u: goto label_44fac4;
        case 0x44fac8u: goto label_44fac8;
        case 0x44faccu: goto label_44facc;
        case 0x44fad0u: goto label_44fad0;
        case 0x44fad4u: goto label_44fad4;
        case 0x44fad8u: goto label_44fad8;
        case 0x44fadcu: goto label_44fadc;
        case 0x44fae0u: goto label_44fae0;
        case 0x44fae4u: goto label_44fae4;
        case 0x44fae8u: goto label_44fae8;
        case 0x44faecu: goto label_44faec;
        case 0x44faf0u: goto label_44faf0;
        case 0x44faf4u: goto label_44faf4;
        case 0x44faf8u: goto label_44faf8;
        case 0x44fafcu: goto label_44fafc;
        case 0x44fb00u: goto label_44fb00;
        case 0x44fb04u: goto label_44fb04;
        case 0x44fb08u: goto label_44fb08;
        case 0x44fb0cu: goto label_44fb0c;
        case 0x44fb10u: goto label_44fb10;
        case 0x44fb14u: goto label_44fb14;
        case 0x44fb18u: goto label_44fb18;
        case 0x44fb1cu: goto label_44fb1c;
        case 0x44fb20u: goto label_44fb20;
        case 0x44fb24u: goto label_44fb24;
        case 0x44fb28u: goto label_44fb28;
        case 0x44fb2cu: goto label_44fb2c;
        case 0x44fb30u: goto label_44fb30;
        case 0x44fb34u: goto label_44fb34;
        case 0x44fb38u: goto label_44fb38;
        case 0x44fb3cu: goto label_44fb3c;
        case 0x44fb40u: goto label_44fb40;
        case 0x44fb44u: goto label_44fb44;
        case 0x44fb48u: goto label_44fb48;
        case 0x44fb4cu: goto label_44fb4c;
        case 0x44fb50u: goto label_44fb50;
        case 0x44fb54u: goto label_44fb54;
        case 0x44fb58u: goto label_44fb58;
        case 0x44fb5cu: goto label_44fb5c;
        case 0x44fb60u: goto label_44fb60;
        case 0x44fb64u: goto label_44fb64;
        case 0x44fb68u: goto label_44fb68;
        case 0x44fb6cu: goto label_44fb6c;
        case 0x44fb70u: goto label_44fb70;
        case 0x44fb74u: goto label_44fb74;
        case 0x44fb78u: goto label_44fb78;
        case 0x44fb7cu: goto label_44fb7c;
        case 0x44fb80u: goto label_44fb80;
        case 0x44fb84u: goto label_44fb84;
        case 0x44fb88u: goto label_44fb88;
        case 0x44fb8cu: goto label_44fb8c;
        case 0x44fb90u: goto label_44fb90;
        case 0x44fb94u: goto label_44fb94;
        case 0x44fb98u: goto label_44fb98;
        case 0x44fb9cu: goto label_44fb9c;
        case 0x44fba0u: goto label_44fba0;
        case 0x44fba4u: goto label_44fba4;
        case 0x44fba8u: goto label_44fba8;
        case 0x44fbacu: goto label_44fbac;
        case 0x44fbb0u: goto label_44fbb0;
        case 0x44fbb4u: goto label_44fbb4;
        case 0x44fbb8u: goto label_44fbb8;
        case 0x44fbbcu: goto label_44fbbc;
        case 0x44fbc0u: goto label_44fbc0;
        case 0x44fbc4u: goto label_44fbc4;
        case 0x44fbc8u: goto label_44fbc8;
        case 0x44fbccu: goto label_44fbcc;
        case 0x44fbd0u: goto label_44fbd0;
        case 0x44fbd4u: goto label_44fbd4;
        case 0x44fbd8u: goto label_44fbd8;
        case 0x44fbdcu: goto label_44fbdc;
        case 0x44fbe0u: goto label_44fbe0;
        case 0x44fbe4u: goto label_44fbe4;
        case 0x44fbe8u: goto label_44fbe8;
        case 0x44fbecu: goto label_44fbec;
        case 0x44fbf0u: goto label_44fbf0;
        case 0x44fbf4u: goto label_44fbf4;
        case 0x44fbf8u: goto label_44fbf8;
        case 0x44fbfcu: goto label_44fbfc;
        case 0x44fc00u: goto label_44fc00;
        case 0x44fc04u: goto label_44fc04;
        case 0x44fc08u: goto label_44fc08;
        case 0x44fc0cu: goto label_44fc0c;
        case 0x44fc10u: goto label_44fc10;
        case 0x44fc14u: goto label_44fc14;
        case 0x44fc18u: goto label_44fc18;
        case 0x44fc1cu: goto label_44fc1c;
        case 0x44fc20u: goto label_44fc20;
        case 0x44fc24u: goto label_44fc24;
        case 0x44fc28u: goto label_44fc28;
        case 0x44fc2cu: goto label_44fc2c;
        case 0x44fc30u: goto label_44fc30;
        case 0x44fc34u: goto label_44fc34;
        case 0x44fc38u: goto label_44fc38;
        case 0x44fc3cu: goto label_44fc3c;
        case 0x44fc40u: goto label_44fc40;
        case 0x44fc44u: goto label_44fc44;
        case 0x44fc48u: goto label_44fc48;
        case 0x44fc4cu: goto label_44fc4c;
        case 0x44fc50u: goto label_44fc50;
        case 0x44fc54u: goto label_44fc54;
        case 0x44fc58u: goto label_44fc58;
        case 0x44fc5cu: goto label_44fc5c;
        case 0x44fc60u: goto label_44fc60;
        case 0x44fc64u: goto label_44fc64;
        case 0x44fc68u: goto label_44fc68;
        case 0x44fc6cu: goto label_44fc6c;
        case 0x44fc70u: goto label_44fc70;
        case 0x44fc74u: goto label_44fc74;
        case 0x44fc78u: goto label_44fc78;
        case 0x44fc7cu: goto label_44fc7c;
        case 0x44fc80u: goto label_44fc80;
        case 0x44fc84u: goto label_44fc84;
        case 0x44fc88u: goto label_44fc88;
        case 0x44fc8cu: goto label_44fc8c;
        case 0x44fc90u: goto label_44fc90;
        case 0x44fc94u: goto label_44fc94;
        case 0x44fc98u: goto label_44fc98;
        case 0x44fc9cu: goto label_44fc9c;
        case 0x44fca0u: goto label_44fca0;
        case 0x44fca4u: goto label_44fca4;
        case 0x44fca8u: goto label_44fca8;
        case 0x44fcacu: goto label_44fcac;
        case 0x44fcb0u: goto label_44fcb0;
        case 0x44fcb4u: goto label_44fcb4;
        case 0x44fcb8u: goto label_44fcb8;
        case 0x44fcbcu: goto label_44fcbc;
        case 0x44fcc0u: goto label_44fcc0;
        case 0x44fcc4u: goto label_44fcc4;
        case 0x44fcc8u: goto label_44fcc8;
        case 0x44fcccu: goto label_44fccc;
        case 0x44fcd0u: goto label_44fcd0;
        case 0x44fcd4u: goto label_44fcd4;
        case 0x44fcd8u: goto label_44fcd8;
        case 0x44fcdcu: goto label_44fcdc;
        case 0x44fce0u: goto label_44fce0;
        case 0x44fce4u: goto label_44fce4;
        case 0x44fce8u: goto label_44fce8;
        case 0x44fcecu: goto label_44fcec;
        case 0x44fcf0u: goto label_44fcf0;
        case 0x44fcf4u: goto label_44fcf4;
        case 0x44fcf8u: goto label_44fcf8;
        case 0x44fcfcu: goto label_44fcfc;
        case 0x44fd00u: goto label_44fd00;
        case 0x44fd04u: goto label_44fd04;
        case 0x44fd08u: goto label_44fd08;
        case 0x44fd0cu: goto label_44fd0c;
        case 0x44fd10u: goto label_44fd10;
        case 0x44fd14u: goto label_44fd14;
        case 0x44fd18u: goto label_44fd18;
        case 0x44fd1cu: goto label_44fd1c;
        case 0x44fd20u: goto label_44fd20;
        case 0x44fd24u: goto label_44fd24;
        case 0x44fd28u: goto label_44fd28;
        case 0x44fd2cu: goto label_44fd2c;
        case 0x44fd30u: goto label_44fd30;
        case 0x44fd34u: goto label_44fd34;
        case 0x44fd38u: goto label_44fd38;
        case 0x44fd3cu: goto label_44fd3c;
        case 0x44fd40u: goto label_44fd40;
        case 0x44fd44u: goto label_44fd44;
        case 0x44fd48u: goto label_44fd48;
        case 0x44fd4cu: goto label_44fd4c;
        case 0x44fd50u: goto label_44fd50;
        case 0x44fd54u: goto label_44fd54;
        case 0x44fd58u: goto label_44fd58;
        case 0x44fd5cu: goto label_44fd5c;
        case 0x44fd60u: goto label_44fd60;
        case 0x44fd64u: goto label_44fd64;
        case 0x44fd68u: goto label_44fd68;
        case 0x44fd6cu: goto label_44fd6c;
        case 0x44fd70u: goto label_44fd70;
        case 0x44fd74u: goto label_44fd74;
        case 0x44fd78u: goto label_44fd78;
        case 0x44fd7cu: goto label_44fd7c;
        case 0x44fd80u: goto label_44fd80;
        case 0x44fd84u: goto label_44fd84;
        case 0x44fd88u: goto label_44fd88;
        case 0x44fd8cu: goto label_44fd8c;
        case 0x44fd90u: goto label_44fd90;
        case 0x44fd94u: goto label_44fd94;
        case 0x44fd98u: goto label_44fd98;
        case 0x44fd9cu: goto label_44fd9c;
        case 0x44fda0u: goto label_44fda0;
        case 0x44fda4u: goto label_44fda4;
        case 0x44fda8u: goto label_44fda8;
        case 0x44fdacu: goto label_44fdac;
        case 0x44fdb0u: goto label_44fdb0;
        case 0x44fdb4u: goto label_44fdb4;
        case 0x44fdb8u: goto label_44fdb8;
        case 0x44fdbcu: goto label_44fdbc;
        case 0x44fdc0u: goto label_44fdc0;
        case 0x44fdc4u: goto label_44fdc4;
        case 0x44fdc8u: goto label_44fdc8;
        case 0x44fdccu: goto label_44fdcc;
        case 0x44fdd0u: goto label_44fdd0;
        case 0x44fdd4u: goto label_44fdd4;
        case 0x44fdd8u: goto label_44fdd8;
        case 0x44fddcu: goto label_44fddc;
        case 0x44fde0u: goto label_44fde0;
        case 0x44fde4u: goto label_44fde4;
        case 0x44fde8u: goto label_44fde8;
        case 0x44fdecu: goto label_44fdec;
        case 0x44fdf0u: goto label_44fdf0;
        case 0x44fdf4u: goto label_44fdf4;
        case 0x44fdf8u: goto label_44fdf8;
        case 0x44fdfcu: goto label_44fdfc;
        case 0x44fe00u: goto label_44fe00;
        case 0x44fe04u: goto label_44fe04;
        case 0x44fe08u: goto label_44fe08;
        case 0x44fe0cu: goto label_44fe0c;
        case 0x44fe10u: goto label_44fe10;
        case 0x44fe14u: goto label_44fe14;
        case 0x44fe18u: goto label_44fe18;
        case 0x44fe1cu: goto label_44fe1c;
        case 0x44fe20u: goto label_44fe20;
        case 0x44fe24u: goto label_44fe24;
        case 0x44fe28u: goto label_44fe28;
        case 0x44fe2cu: goto label_44fe2c;
        case 0x44fe30u: goto label_44fe30;
        case 0x44fe34u: goto label_44fe34;
        case 0x44fe38u: goto label_44fe38;
        case 0x44fe3cu: goto label_44fe3c;
        case 0x44fe40u: goto label_44fe40;
        case 0x44fe44u: goto label_44fe44;
        case 0x44fe48u: goto label_44fe48;
        case 0x44fe4cu: goto label_44fe4c;
        case 0x44fe50u: goto label_44fe50;
        case 0x44fe54u: goto label_44fe54;
        case 0x44fe58u: goto label_44fe58;
        case 0x44fe5cu: goto label_44fe5c;
        case 0x44fe60u: goto label_44fe60;
        case 0x44fe64u: goto label_44fe64;
        case 0x44fe68u: goto label_44fe68;
        case 0x44fe6cu: goto label_44fe6c;
        case 0x44fe70u: goto label_44fe70;
        case 0x44fe74u: goto label_44fe74;
        case 0x44fe78u: goto label_44fe78;
        case 0x44fe7cu: goto label_44fe7c;
        case 0x44fe80u: goto label_44fe80;
        case 0x44fe84u: goto label_44fe84;
        case 0x44fe88u: goto label_44fe88;
        case 0x44fe8cu: goto label_44fe8c;
        case 0x44fe90u: goto label_44fe90;
        case 0x44fe94u: goto label_44fe94;
        case 0x44fe98u: goto label_44fe98;
        case 0x44fe9cu: goto label_44fe9c;
        case 0x44fea0u: goto label_44fea0;
        case 0x44fea4u: goto label_44fea4;
        case 0x44fea8u: goto label_44fea8;
        case 0x44feacu: goto label_44feac;
        case 0x44feb0u: goto label_44feb0;
        case 0x44feb4u: goto label_44feb4;
        case 0x44feb8u: goto label_44feb8;
        case 0x44febcu: goto label_44febc;
        case 0x44fec0u: goto label_44fec0;
        case 0x44fec4u: goto label_44fec4;
        case 0x44fec8u: goto label_44fec8;
        case 0x44feccu: goto label_44fecc;
        case 0x44fed0u: goto label_44fed0;
        case 0x44fed4u: goto label_44fed4;
        case 0x44fed8u: goto label_44fed8;
        case 0x44fedcu: goto label_44fedc;
        case 0x44fee0u: goto label_44fee0;
        case 0x44fee4u: goto label_44fee4;
        case 0x44fee8u: goto label_44fee8;
        case 0x44feecu: goto label_44feec;
        case 0x44fef0u: goto label_44fef0;
        case 0x44fef4u: goto label_44fef4;
        case 0x44fef8u: goto label_44fef8;
        case 0x44fefcu: goto label_44fefc;
        case 0x44ff00u: goto label_44ff00;
        case 0x44ff04u: goto label_44ff04;
        case 0x44ff08u: goto label_44ff08;
        case 0x44ff0cu: goto label_44ff0c;
        case 0x44ff10u: goto label_44ff10;
        case 0x44ff14u: goto label_44ff14;
        case 0x44ff18u: goto label_44ff18;
        case 0x44ff1cu: goto label_44ff1c;
        case 0x44ff20u: goto label_44ff20;
        case 0x44ff24u: goto label_44ff24;
        case 0x44ff28u: goto label_44ff28;
        case 0x44ff2cu: goto label_44ff2c;
        case 0x44ff30u: goto label_44ff30;
        case 0x44ff34u: goto label_44ff34;
        case 0x44ff38u: goto label_44ff38;
        case 0x44ff3cu: goto label_44ff3c;
        case 0x44ff40u: goto label_44ff40;
        case 0x44ff44u: goto label_44ff44;
        case 0x44ff48u: goto label_44ff48;
        case 0x44ff4cu: goto label_44ff4c;
        case 0x44ff50u: goto label_44ff50;
        case 0x44ff54u: goto label_44ff54;
        case 0x44ff58u: goto label_44ff58;
        case 0x44ff5cu: goto label_44ff5c;
        case 0x44ff60u: goto label_44ff60;
        case 0x44ff64u: goto label_44ff64;
        case 0x44ff68u: goto label_44ff68;
        case 0x44ff6cu: goto label_44ff6c;
        case 0x44ff70u: goto label_44ff70;
        case 0x44ff74u: goto label_44ff74;
        case 0x44ff78u: goto label_44ff78;
        case 0x44ff7cu: goto label_44ff7c;
        case 0x44ff80u: goto label_44ff80;
        case 0x44ff84u: goto label_44ff84;
        case 0x44ff88u: goto label_44ff88;
        case 0x44ff8cu: goto label_44ff8c;
        case 0x44ff90u: goto label_44ff90;
        case 0x44ff94u: goto label_44ff94;
        case 0x44ff98u: goto label_44ff98;
        case 0x44ff9cu: goto label_44ff9c;
        case 0x44ffa0u: goto label_44ffa0;
        case 0x44ffa4u: goto label_44ffa4;
        case 0x44ffa8u: goto label_44ffa8;
        case 0x44ffacu: goto label_44ffac;
        case 0x44ffb0u: goto label_44ffb0;
        case 0x44ffb4u: goto label_44ffb4;
        case 0x44ffb8u: goto label_44ffb8;
        case 0x44ffbcu: goto label_44ffbc;
        case 0x44ffc0u: goto label_44ffc0;
        case 0x44ffc4u: goto label_44ffc4;
        case 0x44ffc8u: goto label_44ffc8;
        case 0x44ffccu: goto label_44ffcc;
        case 0x44ffd0u: goto label_44ffd0;
        case 0x44ffd4u: goto label_44ffd4;
        case 0x44ffd8u: goto label_44ffd8;
        case 0x44ffdcu: goto label_44ffdc;
        case 0x44ffe0u: goto label_44ffe0;
        case 0x44ffe4u: goto label_44ffe4;
        case 0x44ffe8u: goto label_44ffe8;
        case 0x44ffecu: goto label_44ffec;
        case 0x44fff0u: goto label_44fff0;
        case 0x44fff4u: goto label_44fff4;
        case 0x44fff8u: goto label_44fff8;
        case 0x44fffcu: goto label_44fffc;
        case 0x450000u: goto label_450000;
        case 0x450004u: goto label_450004;
        case 0x450008u: goto label_450008;
        case 0x45000cu: goto label_45000c;
        case 0x450010u: goto label_450010;
        case 0x450014u: goto label_450014;
        case 0x450018u: goto label_450018;
        case 0x45001cu: goto label_45001c;
        case 0x450020u: goto label_450020;
        case 0x450024u: goto label_450024;
        case 0x450028u: goto label_450028;
        case 0x45002cu: goto label_45002c;
        case 0x450030u: goto label_450030;
        case 0x450034u: goto label_450034;
        case 0x450038u: goto label_450038;
        case 0x45003cu: goto label_45003c;
        case 0x450040u: goto label_450040;
        case 0x450044u: goto label_450044;
        case 0x450048u: goto label_450048;
        case 0x45004cu: goto label_45004c;
        case 0x450050u: goto label_450050;
        case 0x450054u: goto label_450054;
        case 0x450058u: goto label_450058;
        case 0x45005cu: goto label_45005c;
        case 0x450060u: goto label_450060;
        case 0x450064u: goto label_450064;
        case 0x450068u: goto label_450068;
        case 0x45006cu: goto label_45006c;
        case 0x450070u: goto label_450070;
        case 0x450074u: goto label_450074;
        case 0x450078u: goto label_450078;
        case 0x45007cu: goto label_45007c;
        case 0x450080u: goto label_450080;
        case 0x450084u: goto label_450084;
        case 0x450088u: goto label_450088;
        case 0x45008cu: goto label_45008c;
        case 0x450090u: goto label_450090;
        case 0x450094u: goto label_450094;
        case 0x450098u: goto label_450098;
        case 0x45009cu: goto label_45009c;
        case 0x4500a0u: goto label_4500a0;
        case 0x4500a4u: goto label_4500a4;
        case 0x4500a8u: goto label_4500a8;
        case 0x4500acu: goto label_4500ac;
        case 0x4500b0u: goto label_4500b0;
        case 0x4500b4u: goto label_4500b4;
        case 0x4500b8u: goto label_4500b8;
        case 0x4500bcu: goto label_4500bc;
        case 0x4500c0u: goto label_4500c0;
        case 0x4500c4u: goto label_4500c4;
        case 0x4500c8u: goto label_4500c8;
        case 0x4500ccu: goto label_4500cc;
        case 0x4500d0u: goto label_4500d0;
        case 0x4500d4u: goto label_4500d4;
        case 0x4500d8u: goto label_4500d8;
        case 0x4500dcu: goto label_4500dc;
        default: break;
    }

    ctx->pc = 0x44f6c0u;

label_44f6c0:
    // 0x44f6c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x44f6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_44f6c4:
    // 0x44f6c4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x44f6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_44f6c8:
    // 0x44f6c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x44f6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_44f6cc:
    // 0x44f6cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44f6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44f6d0:
    // 0x44f6d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44f6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44f6d4:
    // 0x44f6d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x44f6d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44f6d8:
    // 0x44f6d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44f6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44f6dc:
    // 0x44f6dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44f6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44f6e0:
    // 0x44f6e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x44f6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44f6e4:
    // 0x44f6e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x44f6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_44f6e8:
    // 0x44f6e8: 0xc10ca68  jal         func_4329A0
label_44f6ec:
    if (ctx->pc == 0x44F6ECu) {
        ctx->pc = 0x44F6ECu;
            // 0x44f6ec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x44F6F0u;
        goto label_44f6f0;
    }
    ctx->pc = 0x44F6E8u;
    SET_GPR_U32(ctx, 31, 0x44F6F0u);
    ctx->pc = 0x44F6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F6E8u;
            // 0x44f6ec: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F6F0u; }
        if (ctx->pc != 0x44F6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F6F0u; }
        if (ctx->pc != 0x44F6F0u) { return; }
    }
    ctx->pc = 0x44F6F0u;
label_44f6f0:
    // 0x44f6f0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_44f6f4:
    // 0x44f6f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44f6f8:
    // 0x44f6f8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x44f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_44f6fc:
    // 0x44f6fc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x44f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_44f700:
    // 0x44f700: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x44f700u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_44f704:
    // 0x44f704: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x44f704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_44f708:
    // 0x44f708: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x44f708u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_44f70c:
    // 0x44f70c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x44f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_44f710:
    // 0x44f710: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x44f710u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_44f714:
    // 0x44f714: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44f714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44f718:
    // 0x44f718: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x44f718u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_44f71c:
    // 0x44f71c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x44f71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_44f720:
    // 0x44f720: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x44f720u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_44f724:
    // 0x44f724: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x44f724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_44f728:
    // 0x44f728: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x44f728u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_44f72c:
    // 0x44f72c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x44f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_44f730:
    // 0x44f730: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x44f730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_44f734:
    // 0x44f734: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x44f734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_44f738:
    // 0x44f738: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x44f738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_44f73c:
    // 0x44f73c: 0xc0582cc  jal         func_160B30
label_44f740:
    if (ctx->pc == 0x44F740u) {
        ctx->pc = 0x44F740u;
            // 0x44f740: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x44F744u;
        goto label_44f744;
    }
    ctx->pc = 0x44F73Cu;
    SET_GPR_U32(ctx, 31, 0x44F744u);
    ctx->pc = 0x44F740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F73Cu;
            // 0x44f740: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F744u; }
        if (ctx->pc != 0x44F744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F744u; }
        if (ctx->pc != 0x44F744u) { return; }
    }
    ctx->pc = 0x44F744u;
label_44f744:
    // 0x44f744: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44f744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44f748:
    // 0x44f748: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x44f748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_44f74c:
    // 0x44f74c: 0x2463dc48  addiu       $v1, $v1, -0x23B8
    ctx->pc = 0x44f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958152));
label_44f750:
    // 0x44f750: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x44f750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_44f754:
    // 0x44f754: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x44f754u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_44f758:
    // 0x44f758: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44f758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44f75c:
    // 0x44f75c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44f760:
    // 0x44f760: 0xac4475a0  sw          $a0, 0x75A0($v0)
    ctx->pc = 0x44f760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30112), GPR_U32(ctx, 4));
label_44f764:
    // 0x44f764: 0x2463dc60  addiu       $v1, $v1, -0x23A0
    ctx->pc = 0x44f764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958176));
label_44f768:
    // 0x44f768: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44f768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_44f76c:
    // 0x44f76c: 0x2442dc98  addiu       $v0, $v0, -0x2368
    ctx->pc = 0x44f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958232));
label_44f770:
    // 0x44f770: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x44f770u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_44f774:
    // 0x44f774: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x44f774u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_44f778:
    // 0x44f778: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x44f778u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_44f77c:
    // 0x44f77c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x44f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_44f780:
    // 0x44f780: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x44f780u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_44f784:
    // 0x44f784: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x44f784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_44f788:
    // 0x44f788: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x44f788u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_44f78c:
    // 0x44f78c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x44f78cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_44f790:
    // 0x44f790: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x44f790u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_44f794:
    // 0x44f794: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x44f794u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_44f798:
    // 0x44f798: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x44f798u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_44f79c:
    // 0x44f79c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x44f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_44f7a0:
    // 0x44f7a0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x44f7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_44f7a4:
    // 0x44f7a4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x44f7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_44f7a8:
    // 0x44f7a8: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x44f7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
label_44f7ac:
    // 0x44f7ac: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x44f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
label_44f7b0:
    // 0x44f7b0: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x44f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
label_44f7b4:
    // 0x44f7b4: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x44f7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
label_44f7b8:
    // 0x44f7b8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x44f7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_44f7bc:
    // 0x44f7bc: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_44f7c0:
    if (ctx->pc == 0x44F7C0u) {
        ctx->pc = 0x44F7C4u;
        goto label_44f7c4;
    }
    ctx->pc = 0x44F7BCu;
    {
        const bool branch_taken_0x44f7bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f7bc) {
            ctx->pc = 0x44F848u;
            goto label_44f848;
        }
    }
    ctx->pc = 0x44F7C4u;
label_44f7c4:
    // 0x44f7c4: 0x1011c0  sll         $v0, $s0, 7
    ctx->pc = 0x44f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
label_44f7c8:
    // 0x44f7c8: 0xc040138  jal         func_1004E0
label_44f7cc:
    if (ctx->pc == 0x44F7CCu) {
        ctx->pc = 0x44F7CCu;
            // 0x44f7cc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x44F7D0u;
        goto label_44f7d0;
    }
    ctx->pc = 0x44F7C8u;
    SET_GPR_U32(ctx, 31, 0x44F7D0u);
    ctx->pc = 0x44F7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F7C8u;
            // 0x44f7cc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F7D0u; }
        if (ctx->pc != 0x44F7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F7D0u; }
        if (ctx->pc != 0x44F7D0u) { return; }
    }
    ctx->pc = 0x44F7D0u;
label_44f7d0:
    // 0x44f7d0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x44f7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_44f7d4:
    // 0x44f7d4: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x44f7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
label_44f7d8:
    // 0x44f7d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44f7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44f7dc:
    // 0x44f7dc: 0x24a5f870  addiu       $a1, $a1, -0x790
    ctx->pc = 0x44f7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965360));
label_44f7e0:
    // 0x44f7e0: 0x24c6ee50  addiu       $a2, $a2, -0x11B0
    ctx->pc = 0x44f7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962768));
label_44f7e4:
    // 0x44f7e4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x44f7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_44f7e8:
    // 0x44f7e8: 0xc040840  jal         func_102100
label_44f7ec:
    if (ctx->pc == 0x44F7ECu) {
        ctx->pc = 0x44F7ECu;
            // 0x44f7ec: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44F7F0u;
        goto label_44f7f0;
    }
    ctx->pc = 0x44F7E8u;
    SET_GPR_U32(ctx, 31, 0x44F7F0u);
    ctx->pc = 0x44F7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F7E8u;
            // 0x44f7ec: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F7F0u; }
        if (ctx->pc != 0x44F7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F7F0u; }
        if (ctx->pc != 0x44F7F0u) { return; }
    }
    ctx->pc = 0x44F7F0u;
label_44f7f0:
    // 0x44f7f0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x44f7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_44f7f4:
    // 0x44f7f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x44f7f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44f7f8:
    // 0x44f7f8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x44f7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_44f7fc:
    // 0x44f7fc: 0xc0788fc  jal         func_1E23F0
label_44f800:
    if (ctx->pc == 0x44F800u) {
        ctx->pc = 0x44F800u;
            // 0x44f800: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44F804u;
        goto label_44f804;
    }
    ctx->pc = 0x44F7FCu;
    SET_GPR_U32(ctx, 31, 0x44F804u);
    ctx->pc = 0x44F800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F7FCu;
            // 0x44f800: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F804u; }
        if (ctx->pc != 0x44F804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F804u; }
        if (ctx->pc != 0x44F804u) { return; }
    }
    ctx->pc = 0x44F804u;
label_44f804:
    // 0x44f804: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x44f804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_44f808:
    // 0x44f808: 0xc0788fc  jal         func_1E23F0
label_44f80c:
    if (ctx->pc == 0x44F80Cu) {
        ctx->pc = 0x44F80Cu;
            // 0x44f80c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44F810u;
        goto label_44f810;
    }
    ctx->pc = 0x44F808u;
    SET_GPR_U32(ctx, 31, 0x44F810u);
    ctx->pc = 0x44F80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F808u;
            // 0x44f80c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F810u; }
        if (ctx->pc != 0x44F810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F810u; }
        if (ctx->pc != 0x44F810u) { return; }
    }
    ctx->pc = 0x44F810u;
label_44f810:
    // 0x44f810: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x44f810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44f814:
    // 0x44f814: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x44f814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_44f818:
    // 0x44f818: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x44f818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_44f81c:
    // 0x44f81c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x44f81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_44f820:
    // 0x44f820: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x44f820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44f824:
    // 0x44f824: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x44f824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_44f828:
    // 0x44f828: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x44f828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_44f82c:
    // 0x44f82c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_44f830:
    // 0x44f830: 0xc0a997c  jal         func_2A65F0
label_44f834:
    if (ctx->pc == 0x44F834u) {
        ctx->pc = 0x44F834u;
            // 0x44f834: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x44F838u;
        goto label_44f838;
    }
    ctx->pc = 0x44F830u;
    SET_GPR_U32(ctx, 31, 0x44F838u);
    ctx->pc = 0x44F834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F830u;
            // 0x44f834: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F838u; }
        if (ctx->pc != 0x44F838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F838u; }
        if (ctx->pc != 0x44F838u) { return; }
    }
    ctx->pc = 0x44F838u;
label_44f838:
    // 0x44f838: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x44f838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_44f83c:
    // 0x44f83c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x44f83cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_44f840:
    // 0x44f840: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_44f844:
    if (ctx->pc == 0x44F844u) {
        ctx->pc = 0x44F844u;
            // 0x44f844: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->pc = 0x44F848u;
        goto label_44f848;
    }
    ctx->pc = 0x44F840u;
    {
        const bool branch_taken_0x44f840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44F844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F840u;
            // 0x44f844: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f840) {
            ctx->pc = 0x44F814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44f814;
        }
    }
    ctx->pc = 0x44F848u;
label_44f848:
    // 0x44f848: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x44f848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_44f84c:
    // 0x44f84c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x44f84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_44f850:
    // 0x44f850: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44f850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44f854:
    // 0x44f854: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44f854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44f858:
    // 0x44f858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44f858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44f85c:
    // 0x44f85c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44f85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44f860:
    // 0x44f860: 0x3e00008  jr          $ra
label_44f864:
    if (ctx->pc == 0x44F864u) {
        ctx->pc = 0x44F864u;
            // 0x44f864: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x44F868u;
        goto label_44f868;
    }
    ctx->pc = 0x44F860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44F864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F860u;
            // 0x44f864: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44F868u;
label_44f868:
    // 0x44f868: 0x0  nop
    ctx->pc = 0x44f868u;
    // NOP
label_44f86c:
    // 0x44f86c: 0x0  nop
    ctx->pc = 0x44f86cu;
    // NOP
label_44f870:
    // 0x44f870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44f870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44f874:
    // 0x44f874: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44f874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44f878:
    // 0x44f878: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44f878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44f87c:
    // 0x44f87c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x44f87cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_44f880:
    // 0x44f880: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44f880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44f884:
    // 0x44f884: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x44f884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_44f888:
    // 0x44f888: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44f888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_44f88c:
    // 0x44f88c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x44f88cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_44f890:
    // 0x44f890: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x44f890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_44f894:
    // 0x44f894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44f894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44f898:
    // 0x44f898: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x44f898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_44f89c:
    // 0x44f89c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44f89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44f8a0:
    // 0x44f8a0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x44f8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_44f8a4:
    // 0x44f8a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x44f8a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_44f8a8:
    // 0x44f8a8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x44f8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_44f8ac:
    // 0x44f8ac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x44f8acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_44f8b0:
    // 0x44f8b0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x44f8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_44f8b4:
    // 0x44f8b4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x44f8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_44f8b8:
    // 0x44f8b8: 0xc04cbd8  jal         func_132F60
label_44f8bc:
    if (ctx->pc == 0x44F8BCu) {
        ctx->pc = 0x44F8BCu;
            // 0x44f8bc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x44F8C0u;
        goto label_44f8c0;
    }
    ctx->pc = 0x44F8B8u;
    SET_GPR_U32(ctx, 31, 0x44F8C0u);
    ctx->pc = 0x44F8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F8B8u;
            // 0x44f8bc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F8C0u; }
        if (ctx->pc != 0x44F8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F8C0u; }
        if (ctx->pc != 0x44F8C0u) { return; }
    }
    ctx->pc = 0x44F8C0u;
label_44f8c0:
    // 0x44f8c0: 0xc04c968  jal         func_1325A0
label_44f8c4:
    if (ctx->pc == 0x44F8C4u) {
        ctx->pc = 0x44F8C4u;
            // 0x44f8c4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x44F8C8u;
        goto label_44f8c8;
    }
    ctx->pc = 0x44F8C0u;
    SET_GPR_U32(ctx, 31, 0x44F8C8u);
    ctx->pc = 0x44F8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F8C0u;
            // 0x44f8c4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F8C8u; }
        if (ctx->pc != 0x44F8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F8C8u; }
        if (ctx->pc != 0x44F8C8u) { return; }
    }
    ctx->pc = 0x44F8C8u;
label_44f8c8:
    // 0x44f8c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44f8cc:
    // 0x44f8cc: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x44f8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_44f8d0:
    // 0x44f8d0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x44f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_44f8d4:
    // 0x44f8d4: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x44f8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_44f8d8:
    // 0x44f8d8: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x44f8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_44f8dc:
    // 0x44f8dc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x44f8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_44f8e0:
    // 0x44f8e0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x44f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_44f8e4:
    // 0x44f8e4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44f8e8:
    // 0x44f8e8: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x44f8e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_44f8ec:
    // 0x44f8ec: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x44f8ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
label_44f8f0:
    // 0x44f8f0: 0x24e72660  addiu       $a3, $a3, 0x2660
    ctx->pc = 0x44f8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9824));
label_44f8f4:
    // 0x44f8f4: 0x24c62670  addiu       $a2, $a2, 0x2670
    ctx->pc = 0x44f8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9840));
label_44f8f8:
    // 0x44f8f8: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x44f8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
label_44f8fc:
    // 0x44f8fc: 0x2484dd00  addiu       $a0, $a0, -0x2300
    ctx->pc = 0x44f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958336));
label_44f900:
    // 0x44f900: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x44f900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_44f904:
    // 0x44f904: 0x2463dd40  addiu       $v1, $v1, -0x22C0
    ctx->pc = 0x44f904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958400));
label_44f908:
    // 0x44f908: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x44f908u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_44f90c:
    // 0x44f90c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44f90cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44f910:
    // 0x44f910: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x44f910u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
label_44f914:
    // 0x44f914: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x44f914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_44f918:
    // 0x44f918: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x44f918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_44f91c:
    // 0x44f91c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x44f91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_44f920:
    // 0x44f920: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x44f920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
label_44f924:
    // 0x44f924: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x44f924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_44f928:
    // 0x44f928: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x44f928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_44f92c:
    // 0x44f92c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x44f92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_44f930:
    // 0x44f930: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44f930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44f934:
    // 0x44f934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44f934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44f938:
    // 0x44f938: 0x3e00008  jr          $ra
label_44f93c:
    if (ctx->pc == 0x44F93Cu) {
        ctx->pc = 0x44F93Cu;
            // 0x44f93c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x44F940u;
        goto label_44f940;
    }
    ctx->pc = 0x44F938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44F93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F938u;
            // 0x44f93c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44F940u;
label_44f940:
    // 0x44f940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44f940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44f944:
    // 0x44f944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44f944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44f948:
    // 0x44f948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44f948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44f94c:
    // 0x44f94c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44f94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44f950:
    // 0x44f950: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x44f950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_44f954:
    // 0x44f954: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_44f958:
    if (ctx->pc == 0x44F958u) {
        ctx->pc = 0x44F958u;
            // 0x44f958: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x44F95Cu;
        goto label_44f95c;
    }
    ctx->pc = 0x44F954u;
    {
        const bool branch_taken_0x44f954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f954) {
            ctx->pc = 0x44F958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44F954u;
            // 0x44f958: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44F97Cu;
            goto label_44f97c;
        }
    }
    ctx->pc = 0x44F95Cu;
label_44f95c:
    // 0x44f95c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44f960:
    if (ctx->pc == 0x44F960u) {
        ctx->pc = 0x44F960u;
            // 0x44f960: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x44F964u;
        goto label_44f964;
    }
    ctx->pc = 0x44F95Cu;
    {
        const bool branch_taken_0x44f95c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44f95c) {
            ctx->pc = 0x44F960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44F95Cu;
            // 0x44f960: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44F978u;
            goto label_44f978;
        }
    }
    ctx->pc = 0x44F964u;
label_44f964:
    // 0x44f964: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44f964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44f968:
    // 0x44f968: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44f968u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44f96c:
    // 0x44f96c: 0x320f809  jalr        $t9
label_44f970:
    if (ctx->pc == 0x44F970u) {
        ctx->pc = 0x44F970u;
            // 0x44f970: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44F974u;
        goto label_44f974;
    }
    ctx->pc = 0x44F96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44F974u);
        ctx->pc = 0x44F970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F96Cu;
            // 0x44f970: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44F974u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44F974u; }
            if (ctx->pc != 0x44F974u) { return; }
        }
        }
    }
    ctx->pc = 0x44F974u;
label_44f974:
    // 0x44f974: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x44f974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_44f978:
    // 0x44f978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44f978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44f97c:
    // 0x44f97c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44f97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44f980:
    // 0x44f980: 0x3e00008  jr          $ra
label_44f984:
    if (ctx->pc == 0x44F984u) {
        ctx->pc = 0x44F984u;
            // 0x44f984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x44F988u;
        goto label_44f988;
    }
    ctx->pc = 0x44F980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44F984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F980u;
            // 0x44f984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44F988u;
label_44f988:
    // 0x44f988: 0x0  nop
    ctx->pc = 0x44f988u;
    // NOP
label_44f98c:
    // 0x44f98c: 0x0  nop
    ctx->pc = 0x44f98cu;
    // NOP
label_44f990:
    // 0x44f990: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x44f990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_44f994:
    // 0x44f994: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44f994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44f998:
    // 0x44f998: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44f998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_44f99c:
    // 0x44f99c: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x44f99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_44f9a0:
    // 0x44f9a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44f9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44f9a4:
    // 0x44f9a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44f9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44f9a8:
    // 0x44f9a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44f9a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44f9ac:
    // 0x44f9ac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x44f9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_44f9b0:
    // 0x44f9b0: 0xc0a7a88  jal         func_29EA20
label_44f9b4:
    if (ctx->pc == 0x44F9B4u) {
        ctx->pc = 0x44F9B4u;
            // 0x44f9b4: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x44F9B8u;
        goto label_44f9b8;
    }
    ctx->pc = 0x44F9B0u;
    SET_GPR_U32(ctx, 31, 0x44F9B8u);
    ctx->pc = 0x44F9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F9B0u;
            // 0x44f9b4: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F9B8u; }
        if (ctx->pc != 0x44F9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F9B8u; }
        if (ctx->pc != 0x44F9B8u) { return; }
    }
    ctx->pc = 0x44F9B8u;
label_44f9b8:
    // 0x44f9b8: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x44f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_44f9bc:
    // 0x44f9bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x44f9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44f9c0:
    // 0x44f9c0: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_44f9c4:
    if (ctx->pc == 0x44F9C4u) {
        ctx->pc = 0x44F9C4u;
            // 0x44f9c4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x44F9C8u;
        goto label_44f9c8;
    }
    ctx->pc = 0x44F9C0u;
    {
        const bool branch_taken_0x44f9c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44F9C0u;
            // 0x44f9c4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f9c0) {
            ctx->pc = 0x44F9FCu;
            goto label_44f9fc;
        }
    }
    ctx->pc = 0x44F9C8u;
label_44f9c8:
    // 0x44f9c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44f9cc:
    // 0x44f9cc: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x44f9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_44f9d0:
    // 0x44f9d0: 0x8c4275a0  lw          $v0, 0x75A0($v0)
    ctx->pc = 0x44f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30112)));
label_44f9d4:
    // 0x44f9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44f9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44f9d8:
    // 0x44f9d8: 0x24c6d6e0  addiu       $a2, $a2, -0x2920
    ctx->pc = 0x44f9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956768));
label_44f9dc:
    // 0x44f9dc: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x44f9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_44f9e0:
    // 0x44f9e0: 0xc08afe0  jal         func_22BF80
label_44f9e4:
    if (ctx->pc == 0x44F9E4u) {
        ctx->pc = 0x44F9E4u;
            // 0x44f9e4: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x44F9E8u;
        goto label_44f9e8;
    }
    ctx->pc = 0x44F9E0u;
    SET_GPR_U32(ctx, 31, 0x44F9E8u);
    ctx->pc = 0x44F9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44F9E0u;
            // 0x44f9e4: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F9E8u; }
        if (ctx->pc != 0x44F9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44F9E8u; }
        if (ctx->pc != 0x44F9E8u) { return; }
    }
    ctx->pc = 0x44F9E8u;
label_44f9e8:
    // 0x44f9e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44f9ec:
    // 0x44f9ec: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x44f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_44f9f0:
    // 0x44f9f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x44f9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_44f9f4:
    // 0x44f9f4: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x44f9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
label_44f9f8:
    // 0x44f9f8: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x44f9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_44f9fc:
    // 0x44f9fc: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x44f9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_44fa00:
    // 0x44fa00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44fa04:
    // 0x44fa04: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x44fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_44fa08:
    // 0x44fa08: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x44fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_44fa0c:
    // 0x44fa0c: 0xc08c798  jal         func_231E60
label_44fa10:
    if (ctx->pc == 0x44FA10u) {
        ctx->pc = 0x44FA10u;
            // 0x44fa10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44FA14u;
        goto label_44fa14;
    }
    ctx->pc = 0x44FA0Cu;
    SET_GPR_U32(ctx, 31, 0x44FA14u);
    ctx->pc = 0x44FA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44FA0Cu;
            // 0x44fa10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FA14u; }
        if (ctx->pc != 0x44FA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FA14u; }
        if (ctx->pc != 0x44FA14u) { return; }
    }
    ctx->pc = 0x44FA14u;
label_44fa14:
    // 0x44fa14: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x44fa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_44fa18:
    // 0x44fa18: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x44fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_44fa1c:
    // 0x44fa1c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x44fa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44fa20:
    // 0x44fa20: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x44fa20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_44fa24:
    // 0x44fa24: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x44fa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44fa28:
    // 0x44fa28: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x44fa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44fa2c:
    // 0x44fa2c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x44fa2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_44fa30:
    // 0x44fa30: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x44fa30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_44fa34:
    // 0x44fa34: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x44fa34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_44fa38:
    // 0x44fa38: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x44fa38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_44fa3c:
    // 0x44fa3c: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x44fa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_44fa40:
    // 0x44fa40: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x44fa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44fa44:
    // 0x44fa44: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x44fa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44fa48:
    // 0x44fa48: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x44fa48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_44fa4c:
    // 0x44fa4c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x44fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_44fa50:
    // 0x44fa50: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x44fa50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_44fa54:
    // 0x44fa54: 0xc0a3830  jal         func_28E0C0
label_44fa58:
    if (ctx->pc == 0x44FA58u) {
        ctx->pc = 0x44FA58u;
            // 0x44fa58: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->pc = 0x44FA5Cu;
        goto label_44fa5c;
    }
    ctx->pc = 0x44FA54u;
    SET_GPR_U32(ctx, 31, 0x44FA5Cu);
    ctx->pc = 0x44FA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44FA54u;
            // 0x44fa58: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FA5Cu; }
        if (ctx->pc != 0x44FA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FA5Cu; }
        if (ctx->pc != 0x44FA5Cu) { return; }
    }
    ctx->pc = 0x44FA5Cu;
label_44fa5c:
    // 0x44fa5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44fa5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44fa60:
    // 0x44fa60: 0xc08af10  jal         func_22BC40
label_44fa64:
    if (ctx->pc == 0x44FA64u) {
        ctx->pc = 0x44FA64u;
            // 0x44fa64: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44FA68u;
        goto label_44fa68;
    }
    ctx->pc = 0x44FA60u;
    SET_GPR_U32(ctx, 31, 0x44FA68u);
    ctx->pc = 0x44FA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44FA60u;
            // 0x44fa64: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BC40u;
    if (runtime->hasFunction(0x22BC40u)) {
        auto targetFn = runtime->lookupFunction(0x22BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FA68u; }
        if (ctx->pc != 0x44FA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BC40_0x22bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FA68u; }
        if (ctx->pc != 0x44FA68u) { return; }
    }
    ctx->pc = 0x44FA68u;
label_44fa68:
    // 0x44fa68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44fa68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44fa6c:
    // 0x44fa6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44fa6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44fa70:
    // 0x44fa70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44fa70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44fa74:
    // 0x44fa74: 0x3e00008  jr          $ra
label_44fa78:
    if (ctx->pc == 0x44FA78u) {
        ctx->pc = 0x44FA78u;
            // 0x44fa78: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x44FA7Cu;
        goto label_44fa7c;
    }
    ctx->pc = 0x44FA74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44FA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44FA74u;
            // 0x44fa78: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44FA7Cu;
label_44fa7c:
    // 0x44fa7c: 0x0  nop
    ctx->pc = 0x44fa7cu;
    // NOP
label_44fa80:
    // 0x44fa80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x44fa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_44fa84:
    // 0x44fa84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x44fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44fa88:
    // 0x44fa88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x44fa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_44fa8c:
    // 0x44fa8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44fa8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44fa90:
    // 0x44fa90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44fa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44fa94:
    // 0x44fa94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44fa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44fa98:
    // 0x44fa98: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x44fa98u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_44fa9c:
    // 0x44fa9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44fa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44faa0:
    // 0x44faa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44faa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44faa4:
    // 0x44faa4: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x44faa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44faa8:
    // 0x44faa8: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x44faa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
label_44faac:
    // 0x44faac: 0xac830060  sw          $v1, 0x60($a0)
    ctx->pc = 0x44faacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
label_44fab0:
    // 0x44fab0: 0x8cc30e34  lw          $v1, 0xE34($a2)
    ctx->pc = 0x44fab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3636)));
label_44fab4:
    // 0x44fab4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_44fab8:
    if (ctx->pc == 0x44FAB8u) {
        ctx->pc = 0x44FAB8u;
            // 0x44fab8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44FABCu;
        goto label_44fabc;
    }
    ctx->pc = 0x44FAB4u;
    {
        const bool branch_taken_0x44fab4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x44FAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44FAB4u;
            // 0x44fab8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fab4) {
            ctx->pc = 0x44FACCu;
            goto label_44facc;
        }
    }
    ctx->pc = 0x44FABCu;
label_44fabc:
    // 0x44fabc: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x44fabcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_44fac0:
    // 0x44fac0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_44fac4:
    if (ctx->pc == 0x44FAC4u) {
        ctx->pc = 0x44FAC8u;
        goto label_44fac8;
    }
    ctx->pc = 0x44FAC0u;
    {
        const bool branch_taken_0x44fac0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fac0) {
            ctx->pc = 0x44FACCu;
            goto label_44facc;
        }
    }
    ctx->pc = 0x44FAC8u;
label_44fac8:
    // 0x44fac8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x44fac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_44facc:
    // 0x44facc: 0x54a00007  bnel        $a1, $zero, . + 4 + (0x7 << 2)
label_44fad0:
    if (ctx->pc == 0x44FAD0u) {
        ctx->pc = 0x44FAD0u;
            // 0x44fad0: 0x324300ff  andi        $v1, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x44FAD4u;
        goto label_44fad4;
    }
    ctx->pc = 0x44FACCu;
    {
        const bool branch_taken_0x44facc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x44facc) {
            ctx->pc = 0x44FAD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44FACCu;
            // 0x44fad0: 0x324300ff  andi        $v1, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x44FAECu;
            goto label_44faec;
        }
    }
    ctx->pc = 0x44FAD4u;
label_44fad4:
    // 0x44fad4: 0xc075eb4  jal         func_1D7AD0
label_44fad8:
    if (ctx->pc == 0x44FAD8u) {
        ctx->pc = 0x44FAD8u;
            // 0x44fad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44FADCu;
        goto label_44fadc;
    }
    ctx->pc = 0x44FAD4u;
    SET_GPR_U32(ctx, 31, 0x44FADCu);
    ctx->pc = 0x44FAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44FAD4u;
            // 0x44fad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FADCu; }
        if (ctx->pc != 0x44FADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FADCu; }
        if (ctx->pc != 0x44FADCu) { return; }
    }
    ctx->pc = 0x44FADCu;
label_44fadc:
    // 0x44fadc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_44fae0:
    if (ctx->pc == 0x44FAE0u) {
        ctx->pc = 0x44FAE4u;
        goto label_44fae4;
    }
    ctx->pc = 0x44FADCu;
    {
        const bool branch_taken_0x44fadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44fadc) {
            ctx->pc = 0x44FAE8u;
            goto label_44fae8;
        }
    }
    ctx->pc = 0x44FAE4u;
label_44fae4:
    // 0x44fae4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44fae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44fae8:
    // 0x44fae8: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x44fae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_44faec:
    // 0x44faec: 0x50600042  beql        $v1, $zero, . + 4 + (0x42 << 2)
label_44faf0:
    if (ctx->pc == 0x44FAF0u) {
        ctx->pc = 0x44FAF0u;
            // 0x44faf0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x44FAF4u;
        goto label_44faf4;
    }
    ctx->pc = 0x44FAECu;
    {
        const bool branch_taken_0x44faec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44faec) {
            ctx->pc = 0x44FAF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44FAECu;
            // 0x44faf0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44FBF8u;
            goto label_44fbf8;
        }
    }
    ctx->pc = 0x44FAF4u;
label_44faf4:
    // 0x44faf4: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x44faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_44faf8:
    // 0x44faf8: 0x38630005  xori        $v1, $v1, 0x5
    ctx->pc = 0x44faf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
label_44fafc:
    // 0x44fafc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x44fafcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_44fb00:
    // 0x44fb00: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_44fb04:
    if (ctx->pc == 0x44FB04u) {
        ctx->pc = 0x44FB08u;
        goto label_44fb08;
    }
    ctx->pc = 0x44FB00u;
    {
        const bool branch_taken_0x44fb00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fb00) {
            ctx->pc = 0x44FBF4u;
            goto label_44fbf4;
        }
    }
    ctx->pc = 0x44FB08u;
label_44fb08:
    // 0x44fb08: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x44fb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_44fb0c:
    // 0x44fb0c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x44fb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44fb10:
    // 0x44fb10: 0x10660003  beq         $v1, $a2, . + 4 + (0x3 << 2)
label_44fb14:
    if (ctx->pc == 0x44FB14u) {
        ctx->pc = 0x44FB18u;
        goto label_44fb18;
    }
    ctx->pc = 0x44FB10u;
    {
        const bool branch_taken_0x44fb10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x44fb10) {
            ctx->pc = 0x44FB20u;
            goto label_44fb20;
        }
    }
    ctx->pc = 0x44FB18u;
label_44fb18:
    // 0x44fb18: 0x10000036  b           . + 4 + (0x36 << 2)
label_44fb1c:
    if (ctx->pc == 0x44FB1Cu) {
        ctx->pc = 0x44FB20u;
        goto label_44fb20;
    }
    ctx->pc = 0x44FB18u;
    {
        const bool branch_taken_0x44fb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fb18) {
            ctx->pc = 0x44FBF4u;
            goto label_44fbf4;
        }
    }
    ctx->pc = 0x44FB20u;
label_44fb20:
    // 0x44fb20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44fb24:
    // 0x44fb24: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x44fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_44fb28:
    // 0x44fb28: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x44fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_44fb2c:
    // 0x44fb2c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x44fb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_44fb30:
    // 0x44fb30: 0x8c42078c  lw          $v0, 0x78C($v0)
    ctx->pc = 0x44fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1932)));
label_44fb34:
    // 0x44fb34: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
label_44fb38:
    if (ctx->pc == 0x44FB38u) {
        ctx->pc = 0x44FB38u;
            // 0x44fb38: 0x8c6589e8  lw          $a1, -0x7618($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
        ctx->pc = 0x44FB3Cu;
        goto label_44fb3c;
    }
    ctx->pc = 0x44FB34u;
    {
        const bool branch_taken_0x44fb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x44FB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44FB34u;
            // 0x44fb38: 0x8c6589e8  lw          $a1, -0x7618($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fb34) {
            ctx->pc = 0x44FB54u;
            goto label_44fb54;
        }
    }
    ctx->pc = 0x44FB3Cu;
label_44fb3c:
    // 0x44fb3c: 0x8ca40198  lw          $a0, 0x198($a1)
    ctx->pc = 0x44fb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 408)));
label_44fb40:
    // 0x44fb40: 0x24060056  addiu       $a2, $zero, 0x56
    ctx->pc = 0x44fb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_44fb44:
    // 0x44fb44: 0xc05d7c2  jal         func_175F08
label_44fb48:
    if (ctx->pc == 0x44FB48u) {
        ctx->pc = 0x44FB48u;
            // 0x44fb48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44FB4Cu;
        goto label_44fb4c;
    }
    ctx->pc = 0x44FB44u;
    SET_GPR_U32(ctx, 31, 0x44FB4Cu);
    ctx->pc = 0x44FB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44FB44u;
            // 0x44fb48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175F08u;
    if (runtime->hasFunction(0x175F08u)) {
        auto targetFn = runtime->lookupFunction(0x175F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FB4Cu; }
        if (ctx->pc != 0x44FB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175F08_0x175f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FB4Cu; }
        if (ctx->pc != 0x44FB4Cu) { return; }
    }
    ctx->pc = 0x44FB4Cu;
label_44fb4c:
    // 0x44fb4c: 0x10000029  b           . + 4 + (0x29 << 2)
label_44fb50:
    if (ctx->pc == 0x44FB50u) {
        ctx->pc = 0x44FB54u;
        goto label_44fb54;
    }
    ctx->pc = 0x44FB4Cu;
    {
        const bool branch_taken_0x44fb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fb4c) {
            ctx->pc = 0x44FBF4u;
            goto label_44fbf4;
        }
    }
    ctx->pc = 0x44FB54u;
label_44fb54:
    // 0x44fb54: 0x8e020d78  lw          $v0, 0xD78($s0)
    ctx->pc = 0x44fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
label_44fb58:
    // 0x44fb58: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x44fb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_44fb5c:
    // 0x44fb5c: 0x50640017  beql        $v1, $a0, . + 4 + (0x17 << 2)
label_44fb60:
    if (ctx->pc == 0x44FB60u) {
        ctx->pc = 0x44FB60u;
            // 0x44fb60: 0x8ca40198  lw          $a0, 0x198($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 408)));
        ctx->pc = 0x44FB64u;
        goto label_44fb64;
    }
    ctx->pc = 0x44FB5Cu;
    {
        const bool branch_taken_0x44fb5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x44fb5c) {
            ctx->pc = 0x44FB60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44FB5Cu;
            // 0x44fb60: 0x8ca40198  lw          $a0, 0x198($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44FBBCu;
            goto label_44fbbc;
        }
    }
    ctx->pc = 0x44FB64u;
label_44fb64:
    // 0x44fb64: 0x5066000f  beql        $v1, $a2, . + 4 + (0xF << 2)
label_44fb68:
    if (ctx->pc == 0x44FB68u) {
        ctx->pc = 0x44FB68u;
            // 0x44fb68: 0x8ca40198  lw          $a0, 0x198($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 408)));
        ctx->pc = 0x44FB6Cu;
        goto label_44fb6c;
    }
    ctx->pc = 0x44FB64u;
    {
        const bool branch_taken_0x44fb64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x44fb64) {
            ctx->pc = 0x44FB68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44FB64u;
            // 0x44fb68: 0x8ca40198  lw          $a0, 0x198($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44FBA4u;
            goto label_44fba4;
        }
    }
    ctx->pc = 0x44FB6Cu;
label_44fb6c:
    // 0x44fb6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44fb70:
    // 0x44fb70: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_44fb74:
    if (ctx->pc == 0x44FB74u) {
        ctx->pc = 0x44FB74u;
            // 0x44fb74: 0x8ca40198  lw          $a0, 0x198($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 408)));
        ctx->pc = 0x44FB78u;
        goto label_44fb78;
    }
    ctx->pc = 0x44FB70u;
    {
        const bool branch_taken_0x44fb70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x44fb70) {
            ctx->pc = 0x44FB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44FB70u;
            // 0x44fb74: 0x8ca40198  lw          $a0, 0x198($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44FB8Cu;
            goto label_44fb8c;
        }
    }
    ctx->pc = 0x44FB78u;
label_44fb78:
    // 0x44fb78: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_44fb7c:
    if (ctx->pc == 0x44FB7Cu) {
        ctx->pc = 0x44FB80u;
        goto label_44fb80;
    }
    ctx->pc = 0x44FB78u;
    {
        const bool branch_taken_0x44fb78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fb78) {
            ctx->pc = 0x44FBD0u;
            goto label_44fbd0;
        }
    }
    ctx->pc = 0x44FB80u;
label_44fb80:
    // 0x44fb80: 0x10000013  b           . + 4 + (0x13 << 2)
label_44fb84:
    if (ctx->pc == 0x44FB84u) {
        ctx->pc = 0x44FB88u;
        goto label_44fb88;
    }
    ctx->pc = 0x44FB80u;
    {
        const bool branch_taken_0x44fb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fb80) {
            ctx->pc = 0x44FBD0u;
            goto label_44fbd0;
        }
    }
    ctx->pc = 0x44FB88u;
label_44fb88:
    // 0x44fb88: 0x8ca40198  lw          $a0, 0x198($a1)
    ctx->pc = 0x44fb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 408)));
label_44fb8c:
    // 0x44fb8c: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x44fb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_44fb90:
    // 0x44fb90: 0xc05d7c2  jal         func_175F08
label_44fb94:
    if (ctx->pc == 0x44FB94u) {
        ctx->pc = 0x44FB94u;
            // 0x44fb94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44FB98u;
        goto label_44fb98;
    }
    ctx->pc = 0x44FB90u;
    SET_GPR_U32(ctx, 31, 0x44FB98u);
    ctx->pc = 0x44FB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44FB90u;
            // 0x44fb94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175F08u;
    if (runtime->hasFunction(0x175F08u)) {
        auto targetFn = runtime->lookupFunction(0x175F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FB98u; }
        if (ctx->pc != 0x44FB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175F08_0x175f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FB98u; }
        if (ctx->pc != 0x44FB98u) { return; }
    }
    ctx->pc = 0x44FB98u;
label_44fb98:
    // 0x44fb98: 0x1000000d  b           . + 4 + (0xD << 2)
label_44fb9c:
    if (ctx->pc == 0x44FB9Cu) {
        ctx->pc = 0x44FBA0u;
        goto label_44fba0;
    }
    ctx->pc = 0x44FB98u;
    {
        const bool branch_taken_0x44fb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fb98) {
            ctx->pc = 0x44FBD0u;
            goto label_44fbd0;
        }
    }
    ctx->pc = 0x44FBA0u;
label_44fba0:
    // 0x44fba0: 0x8ca40198  lw          $a0, 0x198($a1)
    ctx->pc = 0x44fba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 408)));
label_44fba4:
    // 0x44fba4: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x44fba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_44fba8:
    // 0x44fba8: 0xc05d7c2  jal         func_175F08
label_44fbac:
    if (ctx->pc == 0x44FBACu) {
        ctx->pc = 0x44FBACu;
            // 0x44fbac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44FBB0u;
        goto label_44fbb0;
    }
    ctx->pc = 0x44FBA8u;
    SET_GPR_U32(ctx, 31, 0x44FBB0u);
    ctx->pc = 0x44FBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44FBA8u;
            // 0x44fbac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175F08u;
    if (runtime->hasFunction(0x175F08u)) {
        auto targetFn = runtime->lookupFunction(0x175F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FBB0u; }
        if (ctx->pc != 0x44FBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175F08_0x175f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FBB0u; }
        if (ctx->pc != 0x44FBB0u) { return; }
    }
    ctx->pc = 0x44FBB0u;
label_44fbb0:
    // 0x44fbb0: 0x10000007  b           . + 4 + (0x7 << 2)
label_44fbb4:
    if (ctx->pc == 0x44FBB4u) {
        ctx->pc = 0x44FBB8u;
        goto label_44fbb8;
    }
    ctx->pc = 0x44FBB0u;
    {
        const bool branch_taken_0x44fbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fbb0) {
            ctx->pc = 0x44FBD0u;
            goto label_44fbd0;
        }
    }
    ctx->pc = 0x44FBB8u;
label_44fbb8:
    // 0x44fbb8: 0x8ca40198  lw          $a0, 0x198($a1)
    ctx->pc = 0x44fbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 408)));
label_44fbbc:
    // 0x44fbbc: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x44fbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_44fbc0:
    // 0x44fbc0: 0xc05d7c2  jal         func_175F08
label_44fbc4:
    if (ctx->pc == 0x44FBC4u) {
        ctx->pc = 0x44FBC4u;
            // 0x44fbc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44FBC8u;
        goto label_44fbc8;
    }
    ctx->pc = 0x44FBC0u;
    SET_GPR_U32(ctx, 31, 0x44FBC8u);
    ctx->pc = 0x44FBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44FBC0u;
            // 0x44fbc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175F08u;
    if (runtime->hasFunction(0x175F08u)) {
        auto targetFn = runtime->lookupFunction(0x175F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FBC8u; }
        if (ctx->pc != 0x44FBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175F08_0x175f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FBC8u; }
        if (ctx->pc != 0x44FBC8u) { return; }
    }
    ctx->pc = 0x44FBC8u;
label_44fbc8:
    // 0x44fbc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44fbcc:
    // 0x44fbcc: 0xa2220070  sb          $v0, 0x70($s1)
    ctx->pc = 0x44fbccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 2));
label_44fbd0:
    // 0x44fbd0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44fbd4:
    // 0x44fbd4: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x44fbd4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_44fbd8:
    // 0x44fbd8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x44fbd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_44fbdc:
    // 0x44fbdc: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x44fbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_44fbe0:
    // 0x44fbe0: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x44fbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_44fbe4:
    // 0x44fbe4: 0x260702c0  addiu       $a3, $s0, 0x2C0
    ctx->pc = 0x44fbe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_44fbe8:
    // 0x44fbe8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x44fbe8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44fbec:
    // 0x44fbec: 0xc0bb404  jal         func_2ED010
label_44fbf0:
    if (ctx->pc == 0x44FBF0u) {
        ctx->pc = 0x44FBF0u;
            // 0x44fbf0: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x44FBF4u;
        goto label_44fbf4;
    }
    ctx->pc = 0x44FBECu;
    SET_GPR_U32(ctx, 31, 0x44FBF4u);
    ctx->pc = 0x44FBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44FBECu;
            // 0x44fbf0: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FBF4u; }
        if (ctx->pc != 0x44FBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FBF4u; }
        if (ctx->pc != 0x44FBF4u) { return; }
    }
    ctx->pc = 0x44FBF4u;
label_44fbf4:
    // 0x44fbf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x44fbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_44fbf8:
    // 0x44fbf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44fbf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44fbfc:
    // 0x44fbfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44fbfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44fc00:
    // 0x44fc00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44fc00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44fc04:
    // 0x44fc04: 0x3e00008  jr          $ra
label_44fc08:
    if (ctx->pc == 0x44FC08u) {
        ctx->pc = 0x44FC08u;
            // 0x44fc08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x44FC0Cu;
        goto label_44fc0c;
    }
    ctx->pc = 0x44FC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44FC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44FC04u;
            // 0x44fc08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44FC0Cu;
label_44fc0c:
    // 0x44fc0c: 0x0  nop
    ctx->pc = 0x44fc0cu;
    // NOP
label_44fc10:
    // 0x44fc10: 0x3e00008  jr          $ra
label_44fc14:
    if (ctx->pc == 0x44FC14u) {
        ctx->pc = 0x44FC14u;
            // 0x44fc14: 0x24023e94  addiu       $v0, $zero, 0x3E94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16020));
        ctx->pc = 0x44FC18u;
        goto label_44fc18;
    }
    ctx->pc = 0x44FC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44FC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44FC10u;
            // 0x44fc14: 0x24023e94  addiu       $v0, $zero, 0x3E94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16020));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44FC18u;
label_44fc18:
    // 0x44fc18: 0x0  nop
    ctx->pc = 0x44fc18u;
    // NOP
label_44fc1c:
    // 0x44fc1c: 0x0  nop
    ctx->pc = 0x44fc1cu;
    // NOP
label_44fc20:
    // 0x44fc20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x44fc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_44fc24:
    // 0x44fc24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x44fc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_44fc28:
    // 0x44fc28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x44fc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_44fc2c:
    // 0x44fc2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44fc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44fc30:
    // 0x44fc30: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x44fc30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44fc34:
    // 0x44fc34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44fc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44fc38:
    // 0x44fc38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44fc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44fc3c:
    // 0x44fc3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44fc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44fc40:
    // 0x44fc40: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x44fc40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_44fc44:
    // 0x44fc44: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_44fc48:
    if (ctx->pc == 0x44FC48u) {
        ctx->pc = 0x44FC48u;
            // 0x44fc48: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44FC4Cu;
        goto label_44fc4c;
    }
    ctx->pc = 0x44FC44u;
    {
        const bool branch_taken_0x44fc44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44FC44u;
            // 0x44fc48: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fc44) {
            ctx->pc = 0x44FC88u;
            goto label_44fc88;
        }
    }
    ctx->pc = 0x44FC4Cu;
label_44fc4c:
    // 0x44fc4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44fc4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44fc50:
    // 0x44fc50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x44fc50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44fc54:
    // 0x44fc54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x44fc54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44fc58:
    // 0x44fc58: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x44fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_44fc5c:
    // 0x44fc5c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x44fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_44fc60:
    // 0x44fc60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x44fc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_44fc64:
    // 0x44fc64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44fc64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44fc68:
    // 0x44fc68: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x44fc68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_44fc6c:
    // 0x44fc6c: 0x320f809  jalr        $t9
label_44fc70:
    if (ctx->pc == 0x44FC70u) {
        ctx->pc = 0x44FC74u;
        goto label_44fc74;
    }
    ctx->pc = 0x44FC6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44FC74u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x44FC74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44FC74u; }
            if (ctx->pc != 0x44FC74u) { return; }
        }
        }
    }
    ctx->pc = 0x44FC74u;
label_44fc74:
    // 0x44fc74: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x44fc74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_44fc78:
    // 0x44fc78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x44fc78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_44fc7c:
    // 0x44fc7c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x44fc7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_44fc80:
    // 0x44fc80: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_44fc84:
    if (ctx->pc == 0x44FC84u) {
        ctx->pc = 0x44FC84u;
            // 0x44fc84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x44FC88u;
        goto label_44fc88;
    }
    ctx->pc = 0x44FC80u;
    {
        const bool branch_taken_0x44fc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44FC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44FC80u;
            // 0x44fc84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fc80) {
            ctx->pc = 0x44FC58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44fc58;
        }
    }
    ctx->pc = 0x44FC88u;
label_44fc88:
    // 0x44fc88: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x44fc88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_44fc8c:
    // 0x44fc8c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x44fc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_44fc90:
    // 0x44fc90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x44fc90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44fc94:
    // 0x44fc94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44fc94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44fc98:
    // 0x44fc98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44fc98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44fc9c:
    // 0x44fc9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44fc9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44fca0:
    // 0x44fca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44fca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44fca4:
    // 0x44fca4: 0x3e00008  jr          $ra
label_44fca8:
    if (ctx->pc == 0x44FCA8u) {
        ctx->pc = 0x44FCA8u;
            // 0x44fca8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x44FCACu;
        goto label_44fcac;
    }
    ctx->pc = 0x44FCA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44FCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44FCA4u;
            // 0x44fca8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44FCACu;
label_44fcac:
    // 0x44fcac: 0x0  nop
    ctx->pc = 0x44fcacu;
    // NOP
label_44fcb0:
    // 0x44fcb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44fcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_44fcb4:
    // 0x44fcb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x44fcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44fcb8:
    // 0x44fcb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44fcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44fcbc:
    // 0x44fcbc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x44fcbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_44fcc0:
    // 0x44fcc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44fcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44fcc4:
    // 0x44fcc4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x44fcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_44fcc8:
    // 0x44fcc8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x44fcc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44fccc:
    // 0x44fccc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x44fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_44fcd0:
    // 0x44fcd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44fcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_44fcd4:
    // 0x44fcd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44fcd8:
    // 0x44fcd8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x44fcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_44fcdc:
    // 0x44fcdc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x44fcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44fce0:
    // 0x44fce0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x44fce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_44fce4:
    // 0x44fce4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x44fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_44fce8:
    // 0x44fce8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x44fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_44fcec:
    // 0x44fcec: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x44fcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_44fcf0:
    // 0x44fcf0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x44fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_44fcf4:
    // 0x44fcf4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x44fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_44fcf8:
    // 0x44fcf8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x44fcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_44fcfc:
    // 0x44fcfc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x44fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_44fd00:
    // 0x44fd00: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x44fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_44fd04:
    // 0x44fd04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44fd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_44fd08:
    // 0x44fd08: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x44fd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44fd0c:
    // 0x44fd0c: 0xc0a997c  jal         func_2A65F0
label_44fd10:
    if (ctx->pc == 0x44FD10u) {
        ctx->pc = 0x44FD10u;
            // 0x44fd10: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x44FD14u;
        goto label_44fd14;
    }
    ctx->pc = 0x44FD0Cu;
    SET_GPR_U32(ctx, 31, 0x44FD14u);
    ctx->pc = 0x44FD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44FD0Cu;
            // 0x44fd10: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FD14u; }
        if (ctx->pc != 0x44FD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FD14u; }
        if (ctx->pc != 0x44FD14u) { return; }
    }
    ctx->pc = 0x44FD14u;
label_44fd14:
    // 0x44fd14: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x44fd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_44fd18:
    // 0x44fd18: 0xc0d879c  jal         func_361E70
label_44fd1c:
    if (ctx->pc == 0x44FD1Cu) {
        ctx->pc = 0x44FD1Cu;
            // 0x44fd1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44FD20u;
        goto label_44fd20;
    }
    ctx->pc = 0x44FD18u;
    SET_GPR_U32(ctx, 31, 0x44FD20u);
    ctx->pc = 0x44FD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44FD18u;
            // 0x44fd1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FD20u; }
        if (ctx->pc != 0x44FD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FD20u; }
        if (ctx->pc != 0x44FD20u) { return; }
    }
    ctx->pc = 0x44FD20u;
label_44fd20:
    // 0x44fd20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44fd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44fd24:
    // 0x44fd24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44fd24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44fd28:
    // 0x44fd28: 0x3e00008  jr          $ra
label_44fd2c:
    if (ctx->pc == 0x44FD2Cu) {
        ctx->pc = 0x44FD2Cu;
            // 0x44fd2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44FD30u;
        goto label_44fd30;
    }
    ctx->pc = 0x44FD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44FD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44FD28u;
            // 0x44fd2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44FD30u;
label_44fd30:
    // 0x44fd30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44fd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44fd34:
    // 0x44fd34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44fd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_44fd38:
    // 0x44fd38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44fd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44fd3c:
    // 0x44fd3c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x44fd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_44fd40:
    // 0x44fd40: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_44fd44:
    if (ctx->pc == 0x44FD44u) {
        ctx->pc = 0x44FD44u;
            // 0x44fd44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44FD48u;
        goto label_44fd48;
    }
    ctx->pc = 0x44FD40u;
    {
        const bool branch_taken_0x44fd40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44FD40u;
            // 0x44fd44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fd40) {
            ctx->pc = 0x44FE60u;
            goto label_44fe60;
        }
    }
    ctx->pc = 0x44FD48u;
label_44fd48:
    // 0x44fd48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x44fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44fd4c:
    // 0x44fd4c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x44fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_44fd50:
    // 0x44fd50: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x44fd50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_44fd54:
    // 0x44fd54: 0xc075128  jal         func_1D44A0
label_44fd58:
    if (ctx->pc == 0x44FD58u) {
        ctx->pc = 0x44FD58u;
            // 0x44fd58: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x44FD5Cu;
        goto label_44fd5c;
    }
    ctx->pc = 0x44FD54u;
    SET_GPR_U32(ctx, 31, 0x44FD5Cu);
    ctx->pc = 0x44FD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44FD54u;
            // 0x44fd58: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FD5Cu; }
        if (ctx->pc != 0x44FD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FD5Cu; }
        if (ctx->pc != 0x44FD5Cu) { return; }
    }
    ctx->pc = 0x44FD5Cu;
label_44fd5c:
    // 0x44fd5c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x44fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_44fd60:
    // 0x44fd60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44fd64:
    // 0x44fd64: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x44fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_44fd68:
    // 0x44fd68: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x44fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_44fd6c:
    // 0x44fd6c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x44fd6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44fd70:
    // 0x44fd70: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_44fd74:
    if (ctx->pc == 0x44FD74u) {
        ctx->pc = 0x44FD74u;
            // 0x44fd74: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x44FD78u;
        goto label_44fd78;
    }
    ctx->pc = 0x44FD70u;
    {
        const bool branch_taken_0x44fd70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44FD70u;
            // 0x44fd74: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fd70) {
            ctx->pc = 0x44FD80u;
            goto label_44fd80;
        }
    }
    ctx->pc = 0x44FD78u;
label_44fd78:
    // 0x44fd78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44fd7c:
    // 0x44fd7c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x44fd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_44fd80:
    // 0x44fd80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x44fd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44fd84:
    // 0x44fd84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44fd88:
    // 0x44fd88: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x44fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_44fd8c:
    // 0x44fd8c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x44fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_44fd90:
    // 0x44fd90: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x44fd90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44fd94:
    // 0x44fd94: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_44fd98:
    if (ctx->pc == 0x44FD98u) {
        ctx->pc = 0x44FD98u;
            // 0x44fd98: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x44FD9Cu;
        goto label_44fd9c;
    }
    ctx->pc = 0x44FD94u;
    {
        const bool branch_taken_0x44fd94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fd94) {
            ctx->pc = 0x44FD98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44FD94u;
            // 0x44fd98: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44FDA8u;
            goto label_44fda8;
        }
    }
    ctx->pc = 0x44FD9Cu;
label_44fd9c:
    // 0x44fd9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44fda0:
    // 0x44fda0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x44fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_44fda4:
    // 0x44fda4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x44fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44fda8:
    // 0x44fda8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44fdac:
    // 0x44fdac: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x44fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_44fdb0:
    // 0x44fdb0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x44fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_44fdb4:
    // 0x44fdb4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x44fdb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_44fdb8:
    // 0x44fdb8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_44fdbc:
    if (ctx->pc == 0x44FDBCu) {
        ctx->pc = 0x44FDBCu;
            // 0x44fdbc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x44FDC0u;
        goto label_44fdc0;
    }
    ctx->pc = 0x44FDB8u;
    {
        const bool branch_taken_0x44fdb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fdb8) {
            ctx->pc = 0x44FDBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44FDB8u;
            // 0x44fdbc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44FDCCu;
            goto label_44fdcc;
        }
    }
    ctx->pc = 0x44FDC0u;
label_44fdc0:
    // 0x44fdc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_44fdc4:
    // 0x44fdc4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x44fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_44fdc8:
    // 0x44fdc8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x44fdc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_44fdcc:
    // 0x44fdcc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x44fdccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_44fdd0:
    // 0x44fdd0: 0x320f809  jalr        $t9
label_44fdd4:
    if (ctx->pc == 0x44FDD4u) {
        ctx->pc = 0x44FDD4u;
            // 0x44fdd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44FDD8u;
        goto label_44fdd8;
    }
    ctx->pc = 0x44FDD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44FDD8u);
        ctx->pc = 0x44FDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44FDD0u;
            // 0x44fdd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44FDD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44FDD8u; }
            if (ctx->pc != 0x44FDD8u) { return; }
        }
        }
    }
    ctx->pc = 0x44FDD8u;
label_44fdd8:
    // 0x44fdd8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x44fdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_44fddc:
    // 0x44fddc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44fddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44fde0:
    // 0x44fde0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x44fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_44fde4:
    // 0x44fde4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x44fde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_44fde8:
    // 0x44fde8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x44fde8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_44fdec:
    // 0x44fdec: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x44fdecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_44fdf0:
    // 0x44fdf0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_44fdf4:
    if (ctx->pc == 0x44FDF4u) {
        ctx->pc = 0x44FDF4u;
            // 0x44fdf4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x44FDF8u;
        goto label_44fdf8;
    }
    ctx->pc = 0x44FDF0u;
    {
        const bool branch_taken_0x44fdf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fdf0) {
            ctx->pc = 0x44FDF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44FDF0u;
            // 0x44fdf4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44FE04u;
            goto label_44fe04;
        }
    }
    ctx->pc = 0x44FDF8u;
label_44fdf8:
    // 0x44fdf8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44fdfc:
    // 0x44fdfc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x44fdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_44fe00:
    // 0x44fe00: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x44fe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_44fe04:
    // 0x44fe04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44fe08:
    // 0x44fe08: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x44fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_44fe0c:
    // 0x44fe0c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x44fe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_44fe10:
    // 0x44fe10: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x44fe10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_44fe14:
    // 0x44fe14: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x44fe14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_44fe18:
    // 0x44fe18: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_44fe1c:
    if (ctx->pc == 0x44FE1Cu) {
        ctx->pc = 0x44FE20u;
        goto label_44fe20;
    }
    ctx->pc = 0x44FE18u;
    {
        const bool branch_taken_0x44fe18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fe18) {
            ctx->pc = 0x44FE28u;
            goto label_44fe28;
        }
    }
    ctx->pc = 0x44FE20u;
label_44fe20:
    // 0x44fe20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44fe24:
    // 0x44fe24: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x44fe24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_44fe28:
    // 0x44fe28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44fe2c:
    // 0x44fe2c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x44fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_44fe30:
    // 0x44fe30: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x44fe30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44fe34:
    // 0x44fe34: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_44fe38:
    if (ctx->pc == 0x44FE38u) {
        ctx->pc = 0x44FE3Cu;
        goto label_44fe3c;
    }
    ctx->pc = 0x44FE34u;
    {
        const bool branch_taken_0x44fe34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fe34) {
            ctx->pc = 0x44FE44u;
            goto label_44fe44;
        }
    }
    ctx->pc = 0x44FE3Cu;
label_44fe3c:
    // 0x44fe3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44fe40:
    // 0x44fe40: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x44fe40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_44fe44:
    // 0x44fe44: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44fe48:
    // 0x44fe48: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x44fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_44fe4c:
    // 0x44fe4c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x44fe4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44fe50:
    // 0x44fe50: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_44fe54:
    if (ctx->pc == 0x44FE54u) {
        ctx->pc = 0x44FE54u;
            // 0x44fe54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x44FE58u;
        goto label_44fe58;
    }
    ctx->pc = 0x44FE50u;
    {
        const bool branch_taken_0x44fe50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fe50) {
            ctx->pc = 0x44FE54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44FE50u;
            // 0x44fe54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44FE64u;
            goto label_44fe64;
        }
    }
    ctx->pc = 0x44FE58u;
label_44fe58:
    // 0x44fe58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x44fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_44fe5c:
    // 0x44fe5c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x44fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_44fe60:
    // 0x44fe60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44fe60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_44fe64:
    // 0x44fe64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44fe64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44fe68:
    // 0x44fe68: 0x3e00008  jr          $ra
label_44fe6c:
    if (ctx->pc == 0x44FE6Cu) {
        ctx->pc = 0x44FE6Cu;
            // 0x44fe6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x44FE70u;
        goto label_44fe70;
    }
    ctx->pc = 0x44FE68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44FE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44FE68u;
            // 0x44fe6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44FE70u;
label_44fe70:
    // 0x44fe70: 0x8113b94  j           func_44EE50
label_44fe74:
    if (ctx->pc == 0x44FE74u) {
        ctx->pc = 0x44FE74u;
            // 0x44fe74: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x44FE78u;
        goto label_44fe78;
    }
    ctx->pc = 0x44FE70u;
    ctx->pc = 0x44FE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44FE70u;
            // 0x44fe74: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44EE50u;
    {
        auto targetFn = runtime->lookupFunction(0x44EE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x44FE78u;
label_44fe78:
    // 0x44fe78: 0x0  nop
    ctx->pc = 0x44fe78u;
    // NOP
label_44fe7c:
    // 0x44fe7c: 0x0  nop
    ctx->pc = 0x44fe7cu;
    // NOP
label_44fe80:
    // 0x44fe80: 0x8113d44  j           func_44F510
label_44fe84:
    if (ctx->pc == 0x44FE84u) {
        ctx->pc = 0x44FE84u;
            // 0x44fe84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x44FE88u;
        goto label_44fe88;
    }
    ctx->pc = 0x44FE80u;
    ctx->pc = 0x44FE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44FE80u;
            // 0x44fe84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44F510u;
    {
        auto targetFn = runtime->lookupFunction(0x44F510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x44FE88u;
label_44fe88:
    // 0x44fe88: 0x0  nop
    ctx->pc = 0x44fe88u;
    // NOP
label_44fe8c:
    // 0x44fe8c: 0x0  nop
    ctx->pc = 0x44fe8cu;
    // NOP
label_44fe90:
    // 0x44fe90: 0x8113b3c  j           func_44ECF0
label_44fe94:
    if (ctx->pc == 0x44FE94u) {
        ctx->pc = 0x44FE94u;
            // 0x44fe94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x44FE98u;
        goto label_44fe98;
    }
    ctx->pc = 0x44FE90u;
    ctx->pc = 0x44FE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44FE90u;
            // 0x44fe94: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44ECF0u;
    if (runtime->hasFunction(0x44ECF0u)) {
        auto targetFn = runtime->lookupFunction(0x44ECF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0044ECF0_0x44ecf0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x44FE98u;
label_44fe98:
    // 0x44fe98: 0x0  nop
    ctx->pc = 0x44fe98u;
    // NOP
label_44fe9c:
    // 0x44fe9c: 0x0  nop
    ctx->pc = 0x44fe9cu;
    // NOP
label_44fea0:
    // 0x44fea0: 0x8113b18  j           func_44EC60
label_44fea4:
    if (ctx->pc == 0x44FEA4u) {
        ctx->pc = 0x44FEA4u;
            // 0x44fea4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x44FEA8u;
        goto label_44fea8;
    }
    ctx->pc = 0x44FEA0u;
    ctx->pc = 0x44FEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44FEA0u;
            // 0x44fea4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44EC60u;
    {
        auto targetFn = runtime->lookupFunction(0x44EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x44FEA8u;
label_44fea8:
    // 0x44fea8: 0x0  nop
    ctx->pc = 0x44fea8u;
    // NOP
label_44feac:
    // 0x44feac: 0x0  nop
    ctx->pc = 0x44feacu;
    // NOP
label_44feb0:
    // 0x44feb0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x44feb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44feb4:
    // 0x44feb4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x44feb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_44feb8:
    // 0x44feb8: 0x0  nop
    ctx->pc = 0x44feb8u;
    // NOP
label_44febc:
    // 0x44febc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x44febcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44fec0:
    // 0x44fec0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_44fec4:
    if (ctx->pc == 0x44FEC4u) {
        ctx->pc = 0x44FEC8u;
        goto label_44fec8;
    }
    ctx->pc = 0x44FEC0u;
    {
        const bool branch_taken_0x44fec0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x44fec0) {
            ctx->pc = 0x44FEF0u;
            goto label_44fef0;
        }
    }
    ctx->pc = 0x44FEC8u;
label_44fec8:
    // 0x44fec8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x44fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_44fecc:
    // 0x44fecc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x44feccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_44fed0:
    // 0x44fed0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x44fed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44fed4:
    // 0x44fed4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x44fed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44fed8:
    // 0x44fed8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x44fed8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_44fedc:
    // 0x44fedc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x44fedcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44fee0:
    // 0x44fee0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_44fee4:
    if (ctx->pc == 0x44FEE4u) {
        ctx->pc = 0x44FEE4u;
            // 0x44fee4: 0xe4800028  swc1        $f0, 0x28($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->pc = 0x44FEE8u;
        goto label_44fee8;
    }
    ctx->pc = 0x44FEE0u;
    {
        const bool branch_taken_0x44fee0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x44FEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44FEE0u;
            // 0x44fee4: 0xe4800028  swc1        $f0, 0x28($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fee0) {
            ctx->pc = 0x44FF04u;
            goto label_44ff04;
        }
    }
    ctx->pc = 0x44FEE8u;
label_44fee8:
    // 0x44fee8: 0x10000006  b           . + 4 + (0x6 << 2)
label_44feec:
    if (ctx->pc == 0x44FEECu) {
        ctx->pc = 0x44FEECu;
            // 0x44feec: 0xe4820028  swc1        $f2, 0x28($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->pc = 0x44FEF0u;
        goto label_44fef0;
    }
    ctx->pc = 0x44FEE8u;
    {
        const bool branch_taken_0x44fee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44FEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44FEE8u;
            // 0x44feec: 0xe4820028  swc1        $f2, 0x28($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44fee8) {
            ctx->pc = 0x44FF04u;
            goto label_44ff04;
        }
    }
    ctx->pc = 0x44FEF0u;
label_44fef0:
    // 0x44fef0: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x44fef0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44fef4:
    // 0x44fef4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_44fef8:
    if (ctx->pc == 0x44FEF8u) {
        ctx->pc = 0x44FEF8u;
            // 0x44fef8: 0xc4810028  lwc1        $f1, 0x28($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x44FEFCu;
        goto label_44fefc;
    }
    ctx->pc = 0x44FEF4u;
    {
        const bool branch_taken_0x44fef4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x44fef4) {
            ctx->pc = 0x44FEF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44FEF4u;
            // 0x44fef8: 0xc4810028  lwc1        $f1, 0x28($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x44FF08u;
            goto label_44ff08;
        }
    }
    ctx->pc = 0x44FEFCu;
label_44fefc:
    // 0x44fefc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x44fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_44ff00:
    // 0x44ff00: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x44ff00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
label_44ff04:
    // 0x44ff04: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x44ff04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44ff08:
    // 0x44ff08: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x44ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_44ff0c:
    // 0x44ff0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x44ff0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44ff10:
    // 0x44ff10: 0x0  nop
    ctx->pc = 0x44ff10u;
    // NOP
label_44ff14:
    // 0x44ff14: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x44ff14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44ff18:
    // 0x44ff18: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_44ff1c:
    if (ctx->pc == 0x44FF1Cu) {
        ctx->pc = 0x44FF1Cu;
            // 0x44ff1c: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x44FF20u;
        goto label_44ff20;
    }
    ctx->pc = 0x44FF18u;
    {
        const bool branch_taken_0x44ff18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x44FF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44FF18u;
            // 0x44ff1c: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44ff18) {
            ctx->pc = 0x44FF38u;
            goto label_44ff38;
        }
    }
    ctx->pc = 0x44FF20u;
label_44ff20:
    // 0x44ff20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x44ff20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44ff24:
    // 0x44ff24: 0x0  nop
    ctx->pc = 0x44ff24u;
    // NOP
label_44ff28:
    // 0x44ff28: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x44ff28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44ff2c:
    // 0x44ff2c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_44ff30:
    if (ctx->pc == 0x44FF30u) {
        ctx->pc = 0x44FF34u;
        goto label_44ff34;
    }
    ctx->pc = 0x44FF2Cu;
    {
        const bool branch_taken_0x44ff2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x44ff2c) {
            ctx->pc = 0x44FF38u;
            goto label_44ff38;
        }
    }
    ctx->pc = 0x44FF34u;
label_44ff34:
    // 0x44ff34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44ff34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44ff38:
    // 0x44ff38: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_44ff3c:
    if (ctx->pc == 0x44FF3Cu) {
        ctx->pc = 0x44FF40u;
        goto label_44ff40;
    }
    ctx->pc = 0x44FF38u;
    {
        const bool branch_taken_0x44ff38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ff38) {
            ctx->pc = 0x44FF54u;
            goto label_44ff54;
        }
    }
    ctx->pc = 0x44FF40u;
label_44ff40:
    // 0x44ff40: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x44ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_44ff44:
    // 0x44ff44: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x44ff44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
label_44ff48:
    // 0x44ff48: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x44ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_44ff4c:
    // 0x44ff4c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x44ff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_44ff50:
    // 0x44ff50: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x44ff50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_44ff54:
    // 0x44ff54: 0x3e00008  jr          $ra
label_44ff58:
    if (ctx->pc == 0x44FF58u) {
        ctx->pc = 0x44FF5Cu;
        goto label_44ff5c;
    }
    ctx->pc = 0x44FF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44FF5Cu;
label_44ff5c:
    // 0x44ff5c: 0x0  nop
    ctx->pc = 0x44ff5cu;
    // NOP
label_44ff60:
    // 0x44ff60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44ff60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_44ff64:
    // 0x44ff64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44ff64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_44ff68:
    // 0x44ff68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44ff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44ff6c:
    // 0x44ff6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44ff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44ff70:
    // 0x44ff70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44ff70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44ff74:
    // 0x44ff74: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x44ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_44ff78:
    // 0x44ff78: 0xc114038  jal         func_4500E0
label_44ff7c:
    if (ctx->pc == 0x44FF7Cu) {
        ctx->pc = 0x44FF7Cu;
            // 0x44ff7c: 0x24500a50  addiu       $s0, $v0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2640));
        ctx->pc = 0x44FF80u;
        goto label_44ff80;
    }
    ctx->pc = 0x44FF78u;
    SET_GPR_U32(ctx, 31, 0x44FF80u);
    ctx->pc = 0x44FF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44FF78u;
            // 0x44ff7c: 0x24500a50  addiu       $s0, $v0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4500E0u;
    if (runtime->hasFunction(0x4500E0u)) {
        auto targetFn = runtime->lookupFunction(0x4500E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FF80u; }
        if (ctx->pc != 0x44FF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004500E0_0x4500e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FF80u; }
        if (ctx->pc != 0x44FF80u) { return; }
    }
    ctx->pc = 0x44FF80u;
label_44ff80:
    // 0x44ff80: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x44ff80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_44ff84:
    // 0x44ff84: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x44ff84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_44ff88:
    // 0x44ff88: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_44ff8c:
    if (ctx->pc == 0x44FF8Cu) {
        ctx->pc = 0x44FF8Cu;
            // 0x44ff8c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x44FF90u;
        goto label_44ff90;
    }
    ctx->pc = 0x44FF88u;
    {
        const bool branch_taken_0x44ff88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x44ff88) {
            ctx->pc = 0x44FF8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44FF88u;
            // 0x44ff8c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44FF9Cu;
            goto label_44ff9c;
        }
    }
    ctx->pc = 0x44FF90u;
label_44ff90:
    // 0x44ff90: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x44ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_44ff94:
    // 0x44ff94: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x44ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_44ff98:
    // 0x44ff98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44ff98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44ff9c:
    // 0x44ff9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44ff9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44ffa0:
    // 0x44ffa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44ffa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44ffa4:
    // 0x44ffa4: 0x3e00008  jr          $ra
label_44ffa8:
    if (ctx->pc == 0x44FFA8u) {
        ctx->pc = 0x44FFA8u;
            // 0x44ffa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44FFACu;
        goto label_44ffac;
    }
    ctx->pc = 0x44FFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44FFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44FFA4u;
            // 0x44ffa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44FFACu;
label_44ffac:
    // 0x44ffac: 0x0  nop
    ctx->pc = 0x44ffacu;
    // NOP
label_44ffb0:
    // 0x44ffb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44ffb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_44ffb4:
    // 0x44ffb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44ffb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_44ffb8:
    // 0x44ffb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44ffb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44ffbc:
    // 0x44ffbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44ffbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44ffc0:
    // 0x44ffc0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x44ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_44ffc4:
    // 0x44ffc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44ffc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44ffc8:
    // 0x44ffc8: 0xc114038  jal         func_4500E0
label_44ffcc:
    if (ctx->pc == 0x44FFCCu) {
        ctx->pc = 0x44FFCCu;
            // 0x44ffcc: 0x24510a50  addiu       $s1, $v0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2640));
        ctx->pc = 0x44FFD0u;
        goto label_44ffd0;
    }
    ctx->pc = 0x44FFC8u;
    SET_GPR_U32(ctx, 31, 0x44FFD0u);
    ctx->pc = 0x44FFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44FFC8u;
            // 0x44ffcc: 0x24510a50  addiu       $s1, $v0, 0xA50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4500E0u;
    if (runtime->hasFunction(0x4500E0u)) {
        auto targetFn = runtime->lookupFunction(0x4500E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FFD0u; }
        if (ctx->pc != 0x44FFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004500E0_0x4500e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44FFD0u; }
        if (ctx->pc != 0x44FFD0u) { return; }
    }
    ctx->pc = 0x44FFD0u;
label_44ffd0:
    // 0x44ffd0: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x44ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44ffd4:
    // 0x44ffd4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x44ffd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_44ffd8:
    // 0x44ffd8: 0x0  nop
    ctx->pc = 0x44ffd8u;
    // NOP
label_44ffdc:
    // 0x44ffdc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x44ffdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_44ffe0:
    // 0x44ffe0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_44ffe4:
    if (ctx->pc == 0x44FFE4u) {
        ctx->pc = 0x44FFE8u;
        goto label_44ffe8;
    }
    ctx->pc = 0x44FFE0u;
    {
        const bool branch_taken_0x44ffe0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x44ffe0) {
            ctx->pc = 0x450010u;
            goto label_450010;
        }
    }
    ctx->pc = 0x44FFE8u;
label_44ffe8:
    // 0x44ffe8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x44ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_44ffec:
    // 0x44ffec: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x44ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_44fff0:
    // 0x44fff0: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x44fff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_44fff4:
    // 0x44fff4: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x44fff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_44fff8:
    // 0x44fff8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x44fff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_44fffc:
    // 0x44fffc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x44fffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450000:
    // 0x450000: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_450004:
    if (ctx->pc == 0x450004u) {
        ctx->pc = 0x450004u;
            // 0x450004: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->pc = 0x450008u;
        goto label_450008;
    }
    ctx->pc = 0x450000u;
    {
        const bool branch_taken_0x450000 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x450004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450000u;
            // 0x450004: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x450000) {
            ctx->pc = 0x450024u;
            goto label_450024;
        }
    }
    ctx->pc = 0x450008u;
label_450008:
    // 0x450008: 0x10000006  b           . + 4 + (0x6 << 2)
label_45000c:
    if (ctx->pc == 0x45000Cu) {
        ctx->pc = 0x45000Cu;
            // 0x45000c: 0xe6020028  swc1        $f2, 0x28($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->pc = 0x450010u;
        goto label_450010;
    }
    ctx->pc = 0x450008u;
    {
        const bool branch_taken_0x450008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45000Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450008u;
            // 0x45000c: 0xe6020028  swc1        $f2, 0x28($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x450008) {
            ctx->pc = 0x450024u;
            goto label_450024;
        }
    }
    ctx->pc = 0x450010u;
label_450010:
    // 0x450010: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x450010u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450014:
    // 0x450014: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_450018:
    if (ctx->pc == 0x450018u) {
        ctx->pc = 0x450018u;
            // 0x450018: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = 0x45001Cu;
        goto label_45001c;
    }
    ctx->pc = 0x450014u;
    {
        const bool branch_taken_0x450014 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x450014) {
            ctx->pc = 0x450018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x450014u;
            // 0x450018: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x450028u;
            goto label_450028;
        }
    }
    ctx->pc = 0x45001Cu;
label_45001c:
    // 0x45001c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x45001cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_450020:
    // 0x450020: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x450020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_450024:
    // 0x450024: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x450024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_450028:
    // 0x450028: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x450028u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_45002c:
    // 0x45002c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_450030:
    if (ctx->pc == 0x450030u) {
        ctx->pc = 0x450030u;
            // 0x450030: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x450034u;
        goto label_450034;
    }
    ctx->pc = 0x45002Cu;
    {
        const bool branch_taken_0x45002c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45002c) {
            ctx->pc = 0x450030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45002Cu;
            // 0x450030: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x450040u;
            goto label_450040;
        }
    }
    ctx->pc = 0x450034u;
label_450034:
    // 0x450034: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_450038:
    if (ctx->pc == 0x450038u) {
        ctx->pc = 0x450038u;
            // 0x450038: 0xc6010028  lwc1        $f1, 0x28($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x45003Cu;
        goto label_45003c;
    }
    ctx->pc = 0x450034u;
    {
        const bool branch_taken_0x450034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x450034) {
            ctx->pc = 0x450038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x450034u;
            // 0x450038: 0xc6010028  lwc1        $f1, 0x28($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x450048u;
            goto label_450048;
        }
    }
    ctx->pc = 0x45003Cu;
label_45003c:
    // 0x45003c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x45003cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_450040:
    // 0x450040: 0x10000011  b           . + 4 + (0x11 << 2)
label_450044:
    if (ctx->pc == 0x450044u) {
        ctx->pc = 0x450044u;
            // 0x450044: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
        ctx->pc = 0x450048u;
        goto label_450048;
    }
    ctx->pc = 0x450040u;
    {
        const bool branch_taken_0x450040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x450044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450040u;
            // 0x450044: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450040) {
            ctx->pc = 0x450088u;
            goto label_450088;
        }
    }
    ctx->pc = 0x450048u;
label_450048:
    // 0x450048: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x450048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_45004c:
    // 0x45004c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x45004cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450050:
    // 0x450050: 0x0  nop
    ctx->pc = 0x450050u;
    // NOP
label_450054:
    // 0x450054: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x450054u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_450058:
    // 0x450058: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_45005c:
    if (ctx->pc == 0x45005Cu) {
        ctx->pc = 0x45005Cu;
            // 0x45005c: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x450060u;
        goto label_450060;
    }
    ctx->pc = 0x450058u;
    {
        const bool branch_taken_0x450058 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x45005Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450058u;
            // 0x45005c: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x450058) {
            ctx->pc = 0x450078u;
            goto label_450078;
        }
    }
    ctx->pc = 0x450060u;
label_450060:
    // 0x450060: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x450060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_450064:
    // 0x450064: 0x0  nop
    ctx->pc = 0x450064u;
    // NOP
label_450068:
    // 0x450068: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x450068u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45006c:
    // 0x45006c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_450070:
    if (ctx->pc == 0x450070u) {
        ctx->pc = 0x450074u;
        goto label_450074;
    }
    ctx->pc = 0x45006Cu;
    {
        const bool branch_taken_0x45006c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x45006c) {
            ctx->pc = 0x450078u;
            goto label_450078;
        }
    }
    ctx->pc = 0x450074u;
label_450074:
    // 0x450074: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x450074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_450078:
    // 0x450078: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_45007c:
    if (ctx->pc == 0x45007Cu) {
        ctx->pc = 0x45007Cu;
            // 0x45007c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x450080u;
        goto label_450080;
    }
    ctx->pc = 0x450078u;
    {
        const bool branch_taken_0x450078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x450078) {
            ctx->pc = 0x45007Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x450078u;
            // 0x45007c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45008Cu;
            goto label_45008c;
        }
    }
    ctx->pc = 0x450080u;
label_450080:
    // 0x450080: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x450080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_450084:
    // 0x450084: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x450084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_450088:
    // 0x450088: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x450088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_45008c:
    // 0x45008c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45008cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_450090:
    // 0x450090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x450090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_450094:
    // 0x450094: 0x3e00008  jr          $ra
label_450098:
    if (ctx->pc == 0x450098u) {
        ctx->pc = 0x450098u;
            // 0x450098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x45009Cu;
        goto label_45009c;
    }
    ctx->pc = 0x450094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x450098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x450094u;
            // 0x450098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45009Cu;
label_45009c:
    // 0x45009c: 0x0  nop
    ctx->pc = 0x45009cu;
    // NOP
label_4500a0:
    // 0x4500a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4500a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4500a4:
    // 0x4500a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4500a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4500a8:
    // 0x4500a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4500a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4500ac:
    // 0x4500ac: 0xc0e45fc  jal         func_3917F0
label_4500b0:
    if (ctx->pc == 0x4500B0u) {
        ctx->pc = 0x4500B0u;
            // 0x4500b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4500B4u;
        goto label_4500b4;
    }
    ctx->pc = 0x4500ACu;
    SET_GPR_U32(ctx, 31, 0x4500B4u);
    ctx->pc = 0x4500B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4500ACu;
            // 0x4500b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3917F0u;
    if (runtime->hasFunction(0x3917F0u)) {
        auto targetFn = runtime->lookupFunction(0x3917F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4500B4u; }
        if (ctx->pc != 0x4500B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003917F0_0x3917f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4500B4u; }
        if (ctx->pc != 0x4500B4u) { return; }
    }
    ctx->pc = 0x4500B4u;
label_4500b4:
    // 0x4500b4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x4500b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4500b8:
    // 0x4500b8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x4500b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4500bc:
    // 0x4500bc: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x4500bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4500c0:
    // 0x4500c0: 0xac8300a4  sw          $v1, 0xA4($a0)
    ctx->pc = 0x4500c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 3));
label_4500c4:
    // 0x4500c4: 0xac800118  sw          $zero, 0x118($a0)
    ctx->pc = 0x4500c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 0));
label_4500c8:
    // 0x4500c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4500c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4500cc:
    // 0x4500cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4500ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4500d0:
    // 0x4500d0: 0x3e00008  jr          $ra
label_4500d4:
    if (ctx->pc == 0x4500D4u) {
        ctx->pc = 0x4500D4u;
            // 0x4500d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4500D8u;
        goto label_4500d8;
    }
    ctx->pc = 0x4500D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4500D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4500D0u;
            // 0x4500d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4500D8u;
label_4500d8:
    // 0x4500d8: 0x0  nop
    ctx->pc = 0x4500d8u;
    // NOP
label_4500dc:
    // 0x4500dc: 0x0  nop
    ctx->pc = 0x4500dcu;
    // NOP
}
