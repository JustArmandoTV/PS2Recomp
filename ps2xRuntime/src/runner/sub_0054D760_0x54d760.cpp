#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0054D760
// Address: 0x54d760 - 0x54de40
void sub_0054D760_0x54d760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0054D760_0x54d760");
#endif

    switch (ctx->pc) {
        case 0x54d760u: goto label_54d760;
        case 0x54d764u: goto label_54d764;
        case 0x54d768u: goto label_54d768;
        case 0x54d76cu: goto label_54d76c;
        case 0x54d770u: goto label_54d770;
        case 0x54d774u: goto label_54d774;
        case 0x54d778u: goto label_54d778;
        case 0x54d77cu: goto label_54d77c;
        case 0x54d780u: goto label_54d780;
        case 0x54d784u: goto label_54d784;
        case 0x54d788u: goto label_54d788;
        case 0x54d78cu: goto label_54d78c;
        case 0x54d790u: goto label_54d790;
        case 0x54d794u: goto label_54d794;
        case 0x54d798u: goto label_54d798;
        case 0x54d79cu: goto label_54d79c;
        case 0x54d7a0u: goto label_54d7a0;
        case 0x54d7a4u: goto label_54d7a4;
        case 0x54d7a8u: goto label_54d7a8;
        case 0x54d7acu: goto label_54d7ac;
        case 0x54d7b0u: goto label_54d7b0;
        case 0x54d7b4u: goto label_54d7b4;
        case 0x54d7b8u: goto label_54d7b8;
        case 0x54d7bcu: goto label_54d7bc;
        case 0x54d7c0u: goto label_54d7c0;
        case 0x54d7c4u: goto label_54d7c4;
        case 0x54d7c8u: goto label_54d7c8;
        case 0x54d7ccu: goto label_54d7cc;
        case 0x54d7d0u: goto label_54d7d0;
        case 0x54d7d4u: goto label_54d7d4;
        case 0x54d7d8u: goto label_54d7d8;
        case 0x54d7dcu: goto label_54d7dc;
        case 0x54d7e0u: goto label_54d7e0;
        case 0x54d7e4u: goto label_54d7e4;
        case 0x54d7e8u: goto label_54d7e8;
        case 0x54d7ecu: goto label_54d7ec;
        case 0x54d7f0u: goto label_54d7f0;
        case 0x54d7f4u: goto label_54d7f4;
        case 0x54d7f8u: goto label_54d7f8;
        case 0x54d7fcu: goto label_54d7fc;
        case 0x54d800u: goto label_54d800;
        case 0x54d804u: goto label_54d804;
        case 0x54d808u: goto label_54d808;
        case 0x54d80cu: goto label_54d80c;
        case 0x54d810u: goto label_54d810;
        case 0x54d814u: goto label_54d814;
        case 0x54d818u: goto label_54d818;
        case 0x54d81cu: goto label_54d81c;
        case 0x54d820u: goto label_54d820;
        case 0x54d824u: goto label_54d824;
        case 0x54d828u: goto label_54d828;
        case 0x54d82cu: goto label_54d82c;
        case 0x54d830u: goto label_54d830;
        case 0x54d834u: goto label_54d834;
        case 0x54d838u: goto label_54d838;
        case 0x54d83cu: goto label_54d83c;
        case 0x54d840u: goto label_54d840;
        case 0x54d844u: goto label_54d844;
        case 0x54d848u: goto label_54d848;
        case 0x54d84cu: goto label_54d84c;
        case 0x54d850u: goto label_54d850;
        case 0x54d854u: goto label_54d854;
        case 0x54d858u: goto label_54d858;
        case 0x54d85cu: goto label_54d85c;
        case 0x54d860u: goto label_54d860;
        case 0x54d864u: goto label_54d864;
        case 0x54d868u: goto label_54d868;
        case 0x54d86cu: goto label_54d86c;
        case 0x54d870u: goto label_54d870;
        case 0x54d874u: goto label_54d874;
        case 0x54d878u: goto label_54d878;
        case 0x54d87cu: goto label_54d87c;
        case 0x54d880u: goto label_54d880;
        case 0x54d884u: goto label_54d884;
        case 0x54d888u: goto label_54d888;
        case 0x54d88cu: goto label_54d88c;
        case 0x54d890u: goto label_54d890;
        case 0x54d894u: goto label_54d894;
        case 0x54d898u: goto label_54d898;
        case 0x54d89cu: goto label_54d89c;
        case 0x54d8a0u: goto label_54d8a0;
        case 0x54d8a4u: goto label_54d8a4;
        case 0x54d8a8u: goto label_54d8a8;
        case 0x54d8acu: goto label_54d8ac;
        case 0x54d8b0u: goto label_54d8b0;
        case 0x54d8b4u: goto label_54d8b4;
        case 0x54d8b8u: goto label_54d8b8;
        case 0x54d8bcu: goto label_54d8bc;
        case 0x54d8c0u: goto label_54d8c0;
        case 0x54d8c4u: goto label_54d8c4;
        case 0x54d8c8u: goto label_54d8c8;
        case 0x54d8ccu: goto label_54d8cc;
        case 0x54d8d0u: goto label_54d8d0;
        case 0x54d8d4u: goto label_54d8d4;
        case 0x54d8d8u: goto label_54d8d8;
        case 0x54d8dcu: goto label_54d8dc;
        case 0x54d8e0u: goto label_54d8e0;
        case 0x54d8e4u: goto label_54d8e4;
        case 0x54d8e8u: goto label_54d8e8;
        case 0x54d8ecu: goto label_54d8ec;
        case 0x54d8f0u: goto label_54d8f0;
        case 0x54d8f4u: goto label_54d8f4;
        case 0x54d8f8u: goto label_54d8f8;
        case 0x54d8fcu: goto label_54d8fc;
        case 0x54d900u: goto label_54d900;
        case 0x54d904u: goto label_54d904;
        case 0x54d908u: goto label_54d908;
        case 0x54d90cu: goto label_54d90c;
        case 0x54d910u: goto label_54d910;
        case 0x54d914u: goto label_54d914;
        case 0x54d918u: goto label_54d918;
        case 0x54d91cu: goto label_54d91c;
        case 0x54d920u: goto label_54d920;
        case 0x54d924u: goto label_54d924;
        case 0x54d928u: goto label_54d928;
        case 0x54d92cu: goto label_54d92c;
        case 0x54d930u: goto label_54d930;
        case 0x54d934u: goto label_54d934;
        case 0x54d938u: goto label_54d938;
        case 0x54d93cu: goto label_54d93c;
        case 0x54d940u: goto label_54d940;
        case 0x54d944u: goto label_54d944;
        case 0x54d948u: goto label_54d948;
        case 0x54d94cu: goto label_54d94c;
        case 0x54d950u: goto label_54d950;
        case 0x54d954u: goto label_54d954;
        case 0x54d958u: goto label_54d958;
        case 0x54d95cu: goto label_54d95c;
        case 0x54d960u: goto label_54d960;
        case 0x54d964u: goto label_54d964;
        case 0x54d968u: goto label_54d968;
        case 0x54d96cu: goto label_54d96c;
        case 0x54d970u: goto label_54d970;
        case 0x54d974u: goto label_54d974;
        case 0x54d978u: goto label_54d978;
        case 0x54d97cu: goto label_54d97c;
        case 0x54d980u: goto label_54d980;
        case 0x54d984u: goto label_54d984;
        case 0x54d988u: goto label_54d988;
        case 0x54d98cu: goto label_54d98c;
        case 0x54d990u: goto label_54d990;
        case 0x54d994u: goto label_54d994;
        case 0x54d998u: goto label_54d998;
        case 0x54d99cu: goto label_54d99c;
        case 0x54d9a0u: goto label_54d9a0;
        case 0x54d9a4u: goto label_54d9a4;
        case 0x54d9a8u: goto label_54d9a8;
        case 0x54d9acu: goto label_54d9ac;
        case 0x54d9b0u: goto label_54d9b0;
        case 0x54d9b4u: goto label_54d9b4;
        case 0x54d9b8u: goto label_54d9b8;
        case 0x54d9bcu: goto label_54d9bc;
        case 0x54d9c0u: goto label_54d9c0;
        case 0x54d9c4u: goto label_54d9c4;
        case 0x54d9c8u: goto label_54d9c8;
        case 0x54d9ccu: goto label_54d9cc;
        case 0x54d9d0u: goto label_54d9d0;
        case 0x54d9d4u: goto label_54d9d4;
        case 0x54d9d8u: goto label_54d9d8;
        case 0x54d9dcu: goto label_54d9dc;
        case 0x54d9e0u: goto label_54d9e0;
        case 0x54d9e4u: goto label_54d9e4;
        case 0x54d9e8u: goto label_54d9e8;
        case 0x54d9ecu: goto label_54d9ec;
        case 0x54d9f0u: goto label_54d9f0;
        case 0x54d9f4u: goto label_54d9f4;
        case 0x54d9f8u: goto label_54d9f8;
        case 0x54d9fcu: goto label_54d9fc;
        case 0x54da00u: goto label_54da00;
        case 0x54da04u: goto label_54da04;
        case 0x54da08u: goto label_54da08;
        case 0x54da0cu: goto label_54da0c;
        case 0x54da10u: goto label_54da10;
        case 0x54da14u: goto label_54da14;
        case 0x54da18u: goto label_54da18;
        case 0x54da1cu: goto label_54da1c;
        case 0x54da20u: goto label_54da20;
        case 0x54da24u: goto label_54da24;
        case 0x54da28u: goto label_54da28;
        case 0x54da2cu: goto label_54da2c;
        case 0x54da30u: goto label_54da30;
        case 0x54da34u: goto label_54da34;
        case 0x54da38u: goto label_54da38;
        case 0x54da3cu: goto label_54da3c;
        case 0x54da40u: goto label_54da40;
        case 0x54da44u: goto label_54da44;
        case 0x54da48u: goto label_54da48;
        case 0x54da4cu: goto label_54da4c;
        case 0x54da50u: goto label_54da50;
        case 0x54da54u: goto label_54da54;
        case 0x54da58u: goto label_54da58;
        case 0x54da5cu: goto label_54da5c;
        case 0x54da60u: goto label_54da60;
        case 0x54da64u: goto label_54da64;
        case 0x54da68u: goto label_54da68;
        case 0x54da6cu: goto label_54da6c;
        case 0x54da70u: goto label_54da70;
        case 0x54da74u: goto label_54da74;
        case 0x54da78u: goto label_54da78;
        case 0x54da7cu: goto label_54da7c;
        case 0x54da80u: goto label_54da80;
        case 0x54da84u: goto label_54da84;
        case 0x54da88u: goto label_54da88;
        case 0x54da8cu: goto label_54da8c;
        case 0x54da90u: goto label_54da90;
        case 0x54da94u: goto label_54da94;
        case 0x54da98u: goto label_54da98;
        case 0x54da9cu: goto label_54da9c;
        case 0x54daa0u: goto label_54daa0;
        case 0x54daa4u: goto label_54daa4;
        case 0x54daa8u: goto label_54daa8;
        case 0x54daacu: goto label_54daac;
        case 0x54dab0u: goto label_54dab0;
        case 0x54dab4u: goto label_54dab4;
        case 0x54dab8u: goto label_54dab8;
        case 0x54dabcu: goto label_54dabc;
        case 0x54dac0u: goto label_54dac0;
        case 0x54dac4u: goto label_54dac4;
        case 0x54dac8u: goto label_54dac8;
        case 0x54daccu: goto label_54dacc;
        case 0x54dad0u: goto label_54dad0;
        case 0x54dad4u: goto label_54dad4;
        case 0x54dad8u: goto label_54dad8;
        case 0x54dadcu: goto label_54dadc;
        case 0x54dae0u: goto label_54dae0;
        case 0x54dae4u: goto label_54dae4;
        case 0x54dae8u: goto label_54dae8;
        case 0x54daecu: goto label_54daec;
        case 0x54daf0u: goto label_54daf0;
        case 0x54daf4u: goto label_54daf4;
        case 0x54daf8u: goto label_54daf8;
        case 0x54dafcu: goto label_54dafc;
        case 0x54db00u: goto label_54db00;
        case 0x54db04u: goto label_54db04;
        case 0x54db08u: goto label_54db08;
        case 0x54db0cu: goto label_54db0c;
        case 0x54db10u: goto label_54db10;
        case 0x54db14u: goto label_54db14;
        case 0x54db18u: goto label_54db18;
        case 0x54db1cu: goto label_54db1c;
        case 0x54db20u: goto label_54db20;
        case 0x54db24u: goto label_54db24;
        case 0x54db28u: goto label_54db28;
        case 0x54db2cu: goto label_54db2c;
        case 0x54db30u: goto label_54db30;
        case 0x54db34u: goto label_54db34;
        case 0x54db38u: goto label_54db38;
        case 0x54db3cu: goto label_54db3c;
        case 0x54db40u: goto label_54db40;
        case 0x54db44u: goto label_54db44;
        case 0x54db48u: goto label_54db48;
        case 0x54db4cu: goto label_54db4c;
        case 0x54db50u: goto label_54db50;
        case 0x54db54u: goto label_54db54;
        case 0x54db58u: goto label_54db58;
        case 0x54db5cu: goto label_54db5c;
        case 0x54db60u: goto label_54db60;
        case 0x54db64u: goto label_54db64;
        case 0x54db68u: goto label_54db68;
        case 0x54db6cu: goto label_54db6c;
        case 0x54db70u: goto label_54db70;
        case 0x54db74u: goto label_54db74;
        case 0x54db78u: goto label_54db78;
        case 0x54db7cu: goto label_54db7c;
        case 0x54db80u: goto label_54db80;
        case 0x54db84u: goto label_54db84;
        case 0x54db88u: goto label_54db88;
        case 0x54db8cu: goto label_54db8c;
        case 0x54db90u: goto label_54db90;
        case 0x54db94u: goto label_54db94;
        case 0x54db98u: goto label_54db98;
        case 0x54db9cu: goto label_54db9c;
        case 0x54dba0u: goto label_54dba0;
        case 0x54dba4u: goto label_54dba4;
        case 0x54dba8u: goto label_54dba8;
        case 0x54dbacu: goto label_54dbac;
        case 0x54dbb0u: goto label_54dbb0;
        case 0x54dbb4u: goto label_54dbb4;
        case 0x54dbb8u: goto label_54dbb8;
        case 0x54dbbcu: goto label_54dbbc;
        case 0x54dbc0u: goto label_54dbc0;
        case 0x54dbc4u: goto label_54dbc4;
        case 0x54dbc8u: goto label_54dbc8;
        case 0x54dbccu: goto label_54dbcc;
        case 0x54dbd0u: goto label_54dbd0;
        case 0x54dbd4u: goto label_54dbd4;
        case 0x54dbd8u: goto label_54dbd8;
        case 0x54dbdcu: goto label_54dbdc;
        case 0x54dbe0u: goto label_54dbe0;
        case 0x54dbe4u: goto label_54dbe4;
        case 0x54dbe8u: goto label_54dbe8;
        case 0x54dbecu: goto label_54dbec;
        case 0x54dbf0u: goto label_54dbf0;
        case 0x54dbf4u: goto label_54dbf4;
        case 0x54dbf8u: goto label_54dbf8;
        case 0x54dbfcu: goto label_54dbfc;
        case 0x54dc00u: goto label_54dc00;
        case 0x54dc04u: goto label_54dc04;
        case 0x54dc08u: goto label_54dc08;
        case 0x54dc0cu: goto label_54dc0c;
        case 0x54dc10u: goto label_54dc10;
        case 0x54dc14u: goto label_54dc14;
        case 0x54dc18u: goto label_54dc18;
        case 0x54dc1cu: goto label_54dc1c;
        case 0x54dc20u: goto label_54dc20;
        case 0x54dc24u: goto label_54dc24;
        case 0x54dc28u: goto label_54dc28;
        case 0x54dc2cu: goto label_54dc2c;
        case 0x54dc30u: goto label_54dc30;
        case 0x54dc34u: goto label_54dc34;
        case 0x54dc38u: goto label_54dc38;
        case 0x54dc3cu: goto label_54dc3c;
        case 0x54dc40u: goto label_54dc40;
        case 0x54dc44u: goto label_54dc44;
        case 0x54dc48u: goto label_54dc48;
        case 0x54dc4cu: goto label_54dc4c;
        case 0x54dc50u: goto label_54dc50;
        case 0x54dc54u: goto label_54dc54;
        case 0x54dc58u: goto label_54dc58;
        case 0x54dc5cu: goto label_54dc5c;
        case 0x54dc60u: goto label_54dc60;
        case 0x54dc64u: goto label_54dc64;
        case 0x54dc68u: goto label_54dc68;
        case 0x54dc6cu: goto label_54dc6c;
        case 0x54dc70u: goto label_54dc70;
        case 0x54dc74u: goto label_54dc74;
        case 0x54dc78u: goto label_54dc78;
        case 0x54dc7cu: goto label_54dc7c;
        case 0x54dc80u: goto label_54dc80;
        case 0x54dc84u: goto label_54dc84;
        case 0x54dc88u: goto label_54dc88;
        case 0x54dc8cu: goto label_54dc8c;
        case 0x54dc90u: goto label_54dc90;
        case 0x54dc94u: goto label_54dc94;
        case 0x54dc98u: goto label_54dc98;
        case 0x54dc9cu: goto label_54dc9c;
        case 0x54dca0u: goto label_54dca0;
        case 0x54dca4u: goto label_54dca4;
        case 0x54dca8u: goto label_54dca8;
        case 0x54dcacu: goto label_54dcac;
        case 0x54dcb0u: goto label_54dcb0;
        case 0x54dcb4u: goto label_54dcb4;
        case 0x54dcb8u: goto label_54dcb8;
        case 0x54dcbcu: goto label_54dcbc;
        case 0x54dcc0u: goto label_54dcc0;
        case 0x54dcc4u: goto label_54dcc4;
        case 0x54dcc8u: goto label_54dcc8;
        case 0x54dcccu: goto label_54dccc;
        case 0x54dcd0u: goto label_54dcd0;
        case 0x54dcd4u: goto label_54dcd4;
        case 0x54dcd8u: goto label_54dcd8;
        case 0x54dcdcu: goto label_54dcdc;
        case 0x54dce0u: goto label_54dce0;
        case 0x54dce4u: goto label_54dce4;
        case 0x54dce8u: goto label_54dce8;
        case 0x54dcecu: goto label_54dcec;
        case 0x54dcf0u: goto label_54dcf0;
        case 0x54dcf4u: goto label_54dcf4;
        case 0x54dcf8u: goto label_54dcf8;
        case 0x54dcfcu: goto label_54dcfc;
        case 0x54dd00u: goto label_54dd00;
        case 0x54dd04u: goto label_54dd04;
        case 0x54dd08u: goto label_54dd08;
        case 0x54dd0cu: goto label_54dd0c;
        case 0x54dd10u: goto label_54dd10;
        case 0x54dd14u: goto label_54dd14;
        case 0x54dd18u: goto label_54dd18;
        case 0x54dd1cu: goto label_54dd1c;
        case 0x54dd20u: goto label_54dd20;
        case 0x54dd24u: goto label_54dd24;
        case 0x54dd28u: goto label_54dd28;
        case 0x54dd2cu: goto label_54dd2c;
        case 0x54dd30u: goto label_54dd30;
        case 0x54dd34u: goto label_54dd34;
        case 0x54dd38u: goto label_54dd38;
        case 0x54dd3cu: goto label_54dd3c;
        case 0x54dd40u: goto label_54dd40;
        case 0x54dd44u: goto label_54dd44;
        case 0x54dd48u: goto label_54dd48;
        case 0x54dd4cu: goto label_54dd4c;
        case 0x54dd50u: goto label_54dd50;
        case 0x54dd54u: goto label_54dd54;
        case 0x54dd58u: goto label_54dd58;
        case 0x54dd5cu: goto label_54dd5c;
        case 0x54dd60u: goto label_54dd60;
        case 0x54dd64u: goto label_54dd64;
        case 0x54dd68u: goto label_54dd68;
        case 0x54dd6cu: goto label_54dd6c;
        case 0x54dd70u: goto label_54dd70;
        case 0x54dd74u: goto label_54dd74;
        case 0x54dd78u: goto label_54dd78;
        case 0x54dd7cu: goto label_54dd7c;
        case 0x54dd80u: goto label_54dd80;
        case 0x54dd84u: goto label_54dd84;
        case 0x54dd88u: goto label_54dd88;
        case 0x54dd8cu: goto label_54dd8c;
        case 0x54dd90u: goto label_54dd90;
        case 0x54dd94u: goto label_54dd94;
        case 0x54dd98u: goto label_54dd98;
        case 0x54dd9cu: goto label_54dd9c;
        case 0x54dda0u: goto label_54dda0;
        case 0x54dda4u: goto label_54dda4;
        case 0x54dda8u: goto label_54dda8;
        case 0x54ddacu: goto label_54ddac;
        case 0x54ddb0u: goto label_54ddb0;
        case 0x54ddb4u: goto label_54ddb4;
        case 0x54ddb8u: goto label_54ddb8;
        case 0x54ddbcu: goto label_54ddbc;
        case 0x54ddc0u: goto label_54ddc0;
        case 0x54ddc4u: goto label_54ddc4;
        case 0x54ddc8u: goto label_54ddc8;
        case 0x54ddccu: goto label_54ddcc;
        case 0x54ddd0u: goto label_54ddd0;
        case 0x54ddd4u: goto label_54ddd4;
        case 0x54ddd8u: goto label_54ddd8;
        case 0x54dddcu: goto label_54dddc;
        case 0x54dde0u: goto label_54dde0;
        case 0x54dde4u: goto label_54dde4;
        case 0x54dde8u: goto label_54dde8;
        case 0x54ddecu: goto label_54ddec;
        case 0x54ddf0u: goto label_54ddf0;
        case 0x54ddf4u: goto label_54ddf4;
        case 0x54ddf8u: goto label_54ddf8;
        case 0x54ddfcu: goto label_54ddfc;
        case 0x54de00u: goto label_54de00;
        case 0x54de04u: goto label_54de04;
        case 0x54de08u: goto label_54de08;
        case 0x54de0cu: goto label_54de0c;
        case 0x54de10u: goto label_54de10;
        case 0x54de14u: goto label_54de14;
        case 0x54de18u: goto label_54de18;
        case 0x54de1cu: goto label_54de1c;
        case 0x54de20u: goto label_54de20;
        case 0x54de24u: goto label_54de24;
        case 0x54de28u: goto label_54de28;
        case 0x54de2cu: goto label_54de2c;
        case 0x54de30u: goto label_54de30;
        case 0x54de34u: goto label_54de34;
        case 0x54de38u: goto label_54de38;
        case 0x54de3cu: goto label_54de3c;
        default: break;
    }

    ctx->pc = 0x54d760u;

label_54d760:
    // 0x54d760: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x54d760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_54d764:
    // 0x54d764: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d768:
    // 0x54d768: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x54d768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_54d76c:
    // 0x54d76c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x54d76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_54d770:
    // 0x54d770: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x54d770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_54d774:
    // 0x54d774: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x54d774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_54d778:
    // 0x54d778: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x54d778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_54d77c:
    // 0x54d77c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x54d77cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_54d780:
    // 0x54d780: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x54d780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_54d784:
    // 0x54d784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x54d784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54d788:
    // 0x54d788: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x54d788u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_54d78c:
    // 0x54d78c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x54d78cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_54d790:
    // 0x54d790: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x54d790u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_54d794:
    // 0x54d794: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x54d794u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_54d798:
    // 0x54d798: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x54d798u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_54d79c:
    // 0x54d79c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x54d79cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_54d7a0:
    // 0x54d7a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x54d7a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_54d7a4:
    // 0x54d7a4: 0x9451db28  lhu         $s1, -0x24D8($v0)
    ctx->pc = 0x54d7a4u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957864)));
label_54d7a8:
    // 0x54d7a8: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x54d7a8u;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
label_54d7ac:
    // 0x54d7ac: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d7b0:
    // 0x54d7b0: 0x9450db2a  lhu         $s0, -0x24D6($v0)
    ctx->pc = 0x54d7b0u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957866)));
label_54d7b4:
    // 0x54d7b4: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x54d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_54d7b8:
    // 0x54d7b8: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x54d7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_54d7bc:
    // 0x54d7bc: 0xc0506ac  jal         func_141AB0
label_54d7c0:
    if (ctx->pc == 0x54D7C0u) {
        ctx->pc = 0x54D7C0u;
            // 0x54d7c0: 0x46006e46  mov.s       $f25, $f13 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x54D7C4u;
        goto label_54d7c4;
    }
    ctx->pc = 0x54D7BCu;
    SET_GPR_U32(ctx, 31, 0x54D7C4u);
    ctx->pc = 0x54D7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54D7BCu;
            // 0x54d7c0: 0x46006e46  mov.s       $f25, $f13 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D7C4u; }
        if (ctx->pc != 0x54D7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D7C4u; }
        if (ctx->pc != 0x54D7C4u) { return; }
    }
    ctx->pc = 0x54D7C4u;
label_54d7c4:
    // 0x54d7c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54d7c8:
    // 0x54d7c8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54d7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54d7cc:
    // 0x54d7cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54d7ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54d7d0:
    // 0x54d7d0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54d7d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54d7d4:
    // 0x54d7d4: 0x320f809  jalr        $t9
label_54d7d8:
    if (ctx->pc == 0x54D7D8u) {
        ctx->pc = 0x54D7D8u;
            // 0x54d7d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54D7DCu;
        goto label_54d7dc;
    }
    ctx->pc = 0x54D7D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54D7DCu);
        ctx->pc = 0x54D7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D7D4u;
            // 0x54d7d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54D7DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54D7DCu; }
            if (ctx->pc != 0x54D7DCu) { return; }
        }
        }
    }
    ctx->pc = 0x54D7DCu;
label_54d7dc:
    // 0x54d7dc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54d7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54d7e0:
    // 0x54d7e0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54d7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54d7e4:
    // 0x54d7e4: 0x8464d982  lh          $a0, -0x267E($v1)
    ctx->pc = 0x54d7e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957442)));
label_54d7e8:
    // 0x54d7e8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d7ec:
    // 0x54d7ec: 0x24a5e110  addiu       $a1, $a1, -0x1EF0
    ctx->pc = 0x54d7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959376));
label_54d7f0:
    // 0x54d7f0: 0xc4b40008  lwc1        $f20, 0x8($a1)
    ctx->pc = 0x54d7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54d7f4:
    // 0x54d7f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x54d7f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d7f8:
    // 0x54d7f8: 0x8443d984  lh          $v1, -0x267C($v0)
    ctx->pc = 0x54d7f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957444)));
label_54d7fc:
    // 0x54d7fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54d7fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54d800:
    // 0x54d800: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54d800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54d804:
    // 0x54d804: 0x4600d540  add.s       $f21, $f26, $f0
    ctx->pc = 0x54d804u;
    ctx->f[21] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
label_54d808:
    // 0x54d808: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d80c:
    // 0x54d80c: 0x0  nop
    ctx->pc = 0x54d80cu;
    // NOP
label_54d810:
    // 0x54d810: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54d810u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54d814:
    // 0x54d814: 0x4600c818  adda.s      $f25, $f0
    ctx->pc = 0x54d814u;
    ctx->f[31] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
label_54d818:
    // 0x54d818: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x54d818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54d81c:
    // 0x54d81c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x54d81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54d820:
    // 0x54d820: 0x0  nop
    ctx->pc = 0x54d820u;
    // NOP
label_54d824:
    // 0x54d824: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x54d824u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_54d828:
    // 0x54d828: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54d82c:
    if (ctx->pc == 0x54D82Cu) {
        ctx->pc = 0x54D82Cu;
            // 0x54d82c: 0x46000e1c  madd.s      $f24, $f1, $f0 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->pc = 0x54D830u;
        goto label_54d830;
    }
    ctx->pc = 0x54D828u;
    {
        const bool branch_taken_0x54d828 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54D82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D828u;
            // 0x54d82c: 0x46000e1c  madd.s      $f24, $f1, $f0 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d828) {
            ctx->pc = 0x54D83Cu;
            goto label_54d83c;
        }
    }
    ctx->pc = 0x54D830u;
label_54d830:
    // 0x54d830: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54d830u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d834:
    // 0x54d834: 0x10000008  b           . + 4 + (0x8 << 2)
label_54d838:
    if (ctx->pc == 0x54D838u) {
        ctx->pc = 0x54D838u;
            // 0x54d838: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54D83Cu;
        goto label_54d83c;
    }
    ctx->pc = 0x54D834u;
    {
        const bool branch_taken_0x54d834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54D838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D834u;
            // 0x54d838: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d834) {
            ctx->pc = 0x54D858u;
            goto label_54d858;
        }
    }
    ctx->pc = 0x54D83Cu;
label_54d83c:
    // 0x54d83c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54d83cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54d840:
    // 0x54d840: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54d840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54d844:
    // 0x54d844: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54d844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54d848:
    // 0x54d848: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d84c:
    // 0x54d84c: 0x0  nop
    ctx->pc = 0x54d84cu;
    // NOP
label_54d850:
    // 0x54d850: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54d850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54d854:
    // 0x54d854: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54d854u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54d858:
    // 0x54d858: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54d85c:
    if (ctx->pc == 0x54D85Cu) {
        ctx->pc = 0x54D85Cu;
            // 0x54d85c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54D860u;
        goto label_54d860;
    }
    ctx->pc = 0x54D858u;
    {
        const bool branch_taken_0x54d858 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54d858) {
            ctx->pc = 0x54D85Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54D858u;
            // 0x54d85c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54D86Cu;
            goto label_54d86c;
        }
    }
    ctx->pc = 0x54D860u;
label_54d860:
    // 0x54d860: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54d860u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d864:
    // 0x54d864: 0x10000007  b           . + 4 + (0x7 << 2)
label_54d868:
    if (ctx->pc == 0x54D868u) {
        ctx->pc = 0x54D868u;
            // 0x54d868: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54D86Cu;
        goto label_54d86c;
    }
    ctx->pc = 0x54D864u;
    {
        const bool branch_taken_0x54d864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54D868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D864u;
            // 0x54d868: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d864) {
            ctx->pc = 0x54D884u;
            goto label_54d884;
        }
    }
    ctx->pc = 0x54D86Cu;
label_54d86c:
    // 0x54d86c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54d86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54d870:
    // 0x54d870: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54d870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54d874:
    // 0x54d874: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d878:
    // 0x54d878: 0x0  nop
    ctx->pc = 0x54d878u;
    // NOP
label_54d87c:
    // 0x54d87c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54d87cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54d880:
    // 0x54d880: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54d880u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54d884:
    // 0x54d884: 0x4602c341  sub.s       $f13, $f24, $f2
    ctx->pc = 0x54d884u;
    ctx->f[13] = FPU_SUB_S(ctx->f[24], ctx->f[2]);
label_54d888:
    // 0x54d888: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54d888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54d88c:
    // 0x54d88c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54d88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54d890:
    // 0x54d890: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54d890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54d894:
    // 0x54d894: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54d894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54d898:
    // 0x54d898: 0x4602c3c0  add.s       $f15, $f24, $f2
    ctx->pc = 0x54d898u;
    ctx->f[15] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
label_54d89c:
    // 0x54d89c: 0x4614ab80  add.s       $f14, $f21, $f20
    ctx->pc = 0x54d89cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_54d8a0:
    // 0x54d8a0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54d8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54d8a4:
    // 0x54d8a4: 0xc0bc284  jal         func_2F0A10
label_54d8a8:
    if (ctx->pc == 0x54D8A8u) {
        ctx->pc = 0x54D8A8u;
            // 0x54d8a8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x54D8ACu;
        goto label_54d8ac;
    }
    ctx->pc = 0x54D8A4u;
    SET_GPR_U32(ctx, 31, 0x54D8ACu);
    ctx->pc = 0x54D8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54D8A4u;
            // 0x54d8a8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D8ACu; }
        if (ctx->pc != 0x54D8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D8ACu; }
        if (ctx->pc != 0x54D8ACu) { return; }
    }
    ctx->pc = 0x54D8ACu;
label_54d8ac:
    // 0x54d8ac: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54d8acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54d8b0:
    // 0x54d8b0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x54d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_54d8b4:
    // 0x54d8b4: 0x24a5e180  addiu       $a1, $a1, -0x1E80
    ctx->pc = 0x54d8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959488));
label_54d8b8:
    // 0x54d8b8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d8bc:
    // 0x54d8bc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x54d8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54d8c0:
    // 0x54d8c0: 0x9042d996  lbu         $v0, -0x266A($v0)
    ctx->pc = 0x54d8c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957462)));
label_54d8c4:
    // 0x54d8c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x54d8c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54d8c8:
    // 0x54d8c8: 0x4614ad40  add.s       $f21, $f21, $f20
    ctx->pc = 0x54d8c8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_54d8cc:
    // 0x54d8cc: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x54d8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_54d8d0:
    // 0x54d8d0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_54d8d4:
    if (ctx->pc == 0x54D8D4u) {
        ctx->pc = 0x54D8D4u;
            // 0x54d8d4: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x54D8D8u;
        goto label_54d8d8;
    }
    ctx->pc = 0x54D8D0u;
    {
        const bool branch_taken_0x54d8d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x54D8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D8D0u;
            // 0x54d8d4: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d8d0) {
            ctx->pc = 0x54D8E4u;
            goto label_54d8e4;
        }
    }
    ctx->pc = 0x54D8D8u;
label_54d8d8:
    // 0x54d8d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x54d8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d8dc:
    // 0x54d8dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_54d8e0:
    if (ctx->pc == 0x54D8E0u) {
        ctx->pc = 0x54D8E0u;
            // 0x54d8e0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54D8E4u;
        goto label_54d8e4;
    }
    ctx->pc = 0x54D8DCu;
    {
        const bool branch_taken_0x54d8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54D8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D8DCu;
            // 0x54d8e0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d8dc) {
            ctx->pc = 0x54D900u;
            goto label_54d900;
        }
    }
    ctx->pc = 0x54D8E4u;
label_54d8e4:
    // 0x54d8e4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x54d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_54d8e8:
    // 0x54d8e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x54d8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_54d8ec:
    // 0x54d8ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54d8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54d8f0:
    // 0x54d8f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d8f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d8f4:
    // 0x54d8f4: 0x0  nop
    ctx->pc = 0x54d8f4u;
    // NOP
label_54d8f8:
    // 0x54d8f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54d8f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54d8fc:
    // 0x54d8fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x54d8fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_54d900:
    // 0x54d900: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54d904:
    if (ctx->pc == 0x54D904u) {
        ctx->pc = 0x54D904u;
            // 0x54d904: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x54D908u;
        goto label_54d908;
    }
    ctx->pc = 0x54D900u;
    {
        const bool branch_taken_0x54d900 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54D904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D900u;
            // 0x54d904: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d900) {
            ctx->pc = 0x54D914u;
            goto label_54d914;
        }
    }
    ctx->pc = 0x54D908u;
label_54d908:
    // 0x54d908: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54d908u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d90c:
    // 0x54d90c: 0x10000008  b           . + 4 + (0x8 << 2)
label_54d910:
    if (ctx->pc == 0x54D910u) {
        ctx->pc = 0x54D910u;
            // 0x54d910: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54D914u;
        goto label_54d914;
    }
    ctx->pc = 0x54D90Cu;
    {
        const bool branch_taken_0x54d90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54D910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D90Cu;
            // 0x54d910: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d90c) {
            ctx->pc = 0x54D930u;
            goto label_54d930;
        }
    }
    ctx->pc = 0x54D914u;
label_54d914:
    // 0x54d914: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54d914u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54d918:
    // 0x54d918: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54d918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54d91c:
    // 0x54d91c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54d91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54d920:
    // 0x54d920: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d920u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d924:
    // 0x54d924: 0x0  nop
    ctx->pc = 0x54d924u;
    // NOP
label_54d928:
    // 0x54d928: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54d928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54d92c:
    // 0x54d92c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54d92cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54d930:
    // 0x54d930: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54d934:
    if (ctx->pc == 0x54D934u) {
        ctx->pc = 0x54D934u;
            // 0x54d934: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54D938u;
        goto label_54d938;
    }
    ctx->pc = 0x54D930u;
    {
        const bool branch_taken_0x54d930 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54d930) {
            ctx->pc = 0x54D934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54D930u;
            // 0x54d934: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54D944u;
            goto label_54d944;
        }
    }
    ctx->pc = 0x54D938u;
label_54d938:
    // 0x54d938: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54d938u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d93c:
    // 0x54d93c: 0x10000007  b           . + 4 + (0x7 << 2)
label_54d940:
    if (ctx->pc == 0x54D940u) {
        ctx->pc = 0x54D940u;
            // 0x54d940: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54D944u;
        goto label_54d944;
    }
    ctx->pc = 0x54D93Cu;
    {
        const bool branch_taken_0x54d93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54D940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D93Cu;
            // 0x54d940: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d93c) {
            ctx->pc = 0x54D95Cu;
            goto label_54d95c;
        }
    }
    ctx->pc = 0x54D944u;
label_54d944:
    // 0x54d944: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54d944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54d948:
    // 0x54d948: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54d948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54d94c:
    // 0x54d94c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d94cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d950:
    // 0x54d950: 0x0  nop
    ctx->pc = 0x54d950u;
    // NOP
label_54d954:
    // 0x54d954: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54d954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54d958:
    // 0x54d958: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54d958u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54d95c:
    // 0x54d95c: 0x460c1380  add.s       $f14, $f2, $f12
    ctx->pc = 0x54d95cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
label_54d960:
    // 0x54d960: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54d960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54d964:
    // 0x54d964: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54d964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54d968:
    // 0x54d968: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54d968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54d96c:
    // 0x54d96c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54d96cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54d970:
    // 0x54d970: 0x4601c341  sub.s       $f13, $f24, $f1
    ctx->pc = 0x54d970u;
    ctx->f[13] = FPU_SUB_S(ctx->f[24], ctx->f[1]);
label_54d974:
    // 0x54d974: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54d974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54d978:
    // 0x54d978: 0xc0bc284  jal         func_2F0A10
label_54d97c:
    if (ctx->pc == 0x54D97Cu) {
        ctx->pc = 0x54D97Cu;
            // 0x54d97c: 0x4601c3c0  add.s       $f15, $f24, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
        ctx->pc = 0x54D980u;
        goto label_54d980;
    }
    ctx->pc = 0x54D978u;
    SET_GPR_U32(ctx, 31, 0x54D980u);
    ctx->pc = 0x54D97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54D978u;
            // 0x54d97c: 0x4601c3c0  add.s       $f15, $f24, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D980u; }
        if (ctx->pc != 0x54D980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54D980u; }
        if (ctx->pc != 0x54D980u) { return; }
    }
    ctx->pc = 0x54D980u;
label_54d980:
    // 0x54d980: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d984:
    // 0x54d984: 0x9042d997  lbu         $v0, -0x2669($v0)
    ctx->pc = 0x54d984u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957463)));
label_54d988:
    // 0x54d988: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_54d98c:
    if (ctx->pc == 0x54D98Cu) {
        ctx->pc = 0x54D98Cu;
            // 0x54d98c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x54D990u;
        goto label_54d990;
    }
    ctx->pc = 0x54D988u;
    {
        const bool branch_taken_0x54d988 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x54d988) {
            ctx->pc = 0x54D98Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54D988u;
            // 0x54d98c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54D99Cu;
            goto label_54d99c;
        }
    }
    ctx->pc = 0x54D990u;
label_54d990:
    // 0x54d990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x54d990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d994:
    // 0x54d994: 0x10000007  b           . + 4 + (0x7 << 2)
label_54d998:
    if (ctx->pc == 0x54D998u) {
        ctx->pc = 0x54D998u;
            // 0x54d998: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54D99Cu;
        goto label_54d99c;
    }
    ctx->pc = 0x54D994u;
    {
        const bool branch_taken_0x54d994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54D998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54D994u;
            // 0x54d998: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54d994) {
            ctx->pc = 0x54D9B4u;
            goto label_54d9b4;
        }
    }
    ctx->pc = 0x54D99Cu;
label_54d99c:
    // 0x54d99c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x54d99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_54d9a0:
    // 0x54d9a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54d9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54d9a4:
    // 0x54d9a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d9a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d9a8:
    // 0x54d9a8: 0x0  nop
    ctx->pc = 0x54d9a8u;
    // NOP
label_54d9ac:
    // 0x54d9ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54d9acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54d9b0:
    // 0x54d9b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x54d9b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_54d9b4:
    // 0x54d9b4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d9b8:
    // 0x54d9b8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54d9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54d9bc:
    // 0x54d9bc: 0x8443d986  lh          $v1, -0x267A($v0)
    ctx->pc = 0x54d9bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957446)));
label_54d9c0:
    // 0x54d9c0: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x54d9c0u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_54d9c4:
    // 0x54d9c4: 0x24a5e0e0  addiu       $a1, $a1, -0x1F20
    ctx->pc = 0x54d9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959328));
label_54d9c8:
    // 0x54d9c8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x54d9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_54d9cc:
    // 0x54d9cc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54d9d0:
    // 0x54d9d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54d9d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d9d4:
    // 0x54d9d4: 0x8442d98a  lh          $v0, -0x2676($v0)
    ctx->pc = 0x54d9d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957450)));
label_54d9d8:
    // 0x54d9d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x54d9d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_54d9dc:
    // 0x54d9dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x54d9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d9e0:
    // 0x54d9e0: 0x0  nop
    ctx->pc = 0x54d9e0u;
    // NOP
label_54d9e4:
    // 0x54d9e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54d9e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54d9e8:
    // 0x54d9e8: 0x4600d540  add.s       $f21, $f26, $f0
    ctx->pc = 0x54d9e8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
label_54d9ec:
    // 0x54d9ec: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x54d9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_54d9f0:
    // 0x54d9f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x54d9f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54d9f4:
    // 0x54d9f4: 0xc4b40008  lwc1        $f20, 0x8($a1)
    ctx->pc = 0x54d9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54d9f8:
    // 0x54d9f8: 0x4603c580  add.s       $f22, $f24, $f3
    ctx->pc = 0x54d9f8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[24], ctx->f[3]);
label_54d9fc:
    // 0x54d9fc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x54d9fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_54da00:
    // 0x54da00: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x54da00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_54da04:
    // 0x54da04: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54da08:
    if (ctx->pc == 0x54DA08u) {
        ctx->pc = 0x54DA08u;
            // 0x54da08: 0x461415dd  msub.s      $f23, $f2, $f20 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
        ctx->pc = 0x54DA0Cu;
        goto label_54da0c;
    }
    ctx->pc = 0x54DA04u;
    {
        const bool branch_taken_0x54da04 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54DA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DA04u;
            // 0x54da08: 0x461415dd  msub.s      $f23, $f2, $f20 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54da04) {
            ctx->pc = 0x54DA18u;
            goto label_54da18;
        }
    }
    ctx->pc = 0x54DA0Cu;
label_54da0c:
    // 0x54da0c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54da0cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54da10:
    // 0x54da10: 0x10000008  b           . + 4 + (0x8 << 2)
label_54da14:
    if (ctx->pc == 0x54DA14u) {
        ctx->pc = 0x54DA14u;
            // 0x54da14: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54DA18u;
        goto label_54da18;
    }
    ctx->pc = 0x54DA10u;
    {
        const bool branch_taken_0x54da10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DA10u;
            // 0x54da14: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54da10) {
            ctx->pc = 0x54DA34u;
            goto label_54da34;
        }
    }
    ctx->pc = 0x54DA18u;
label_54da18:
    // 0x54da18: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54da18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54da1c:
    // 0x54da1c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54da1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54da20:
    // 0x54da20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54da20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54da24:
    // 0x54da24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54da24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54da28:
    // 0x54da28: 0x0  nop
    ctx->pc = 0x54da28u;
    // NOP
label_54da2c:
    // 0x54da2c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54da2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54da30:
    // 0x54da30: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54da30u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54da34:
    // 0x54da34: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54da38:
    if (ctx->pc == 0x54DA38u) {
        ctx->pc = 0x54DA38u;
            // 0x54da38: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54DA3Cu;
        goto label_54da3c;
    }
    ctx->pc = 0x54DA34u;
    {
        const bool branch_taken_0x54da34 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54da34) {
            ctx->pc = 0x54DA38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54DA34u;
            // 0x54da38: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54DA48u;
            goto label_54da48;
        }
    }
    ctx->pc = 0x54DA3Cu;
label_54da3c:
    // 0x54da3c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54da3cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54da40:
    // 0x54da40: 0x10000007  b           . + 4 + (0x7 << 2)
label_54da44:
    if (ctx->pc == 0x54DA44u) {
        ctx->pc = 0x54DA44u;
            // 0x54da44: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54DA48u;
        goto label_54da48;
    }
    ctx->pc = 0x54DA40u;
    {
        const bool branch_taken_0x54da40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DA40u;
            // 0x54da44: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54da40) {
            ctx->pc = 0x54DA60u;
            goto label_54da60;
        }
    }
    ctx->pc = 0x54DA48u;
label_54da48:
    // 0x54da48: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54da48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54da4c:
    // 0x54da4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54da4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54da50:
    // 0x54da50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54da50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54da54:
    // 0x54da54: 0x0  nop
    ctx->pc = 0x54da54u;
    // NOP
label_54da58:
    // 0x54da58: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54da58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54da5c:
    // 0x54da5c: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54da5cu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54da60:
    // 0x54da60: 0x4614ab80  add.s       $f14, $f21, $f20
    ctx->pc = 0x54da60u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_54da64:
    // 0x54da64: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54da64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54da68:
    // 0x54da68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54da68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54da6c:
    // 0x54da6c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54da6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54da70:
    // 0x54da70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54da70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54da74:
    // 0x54da74: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x54da74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_54da78:
    // 0x54da78: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x54da78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_54da7c:
    // 0x54da7c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54da7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54da80:
    // 0x54da80: 0xc0bc284  jal         func_2F0A10
label_54da84:
    if (ctx->pc == 0x54DA84u) {
        ctx->pc = 0x54DA84u;
            // 0x54da84: 0x4600b3c6  mov.s       $f15, $f22 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x54DA88u;
        goto label_54da88;
    }
    ctx->pc = 0x54DA80u;
    SET_GPR_U32(ctx, 31, 0x54DA88u);
    ctx->pc = 0x54DA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54DA80u;
            // 0x54da84: 0x4600b3c6  mov.s       $f15, $f22 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54DA88u; }
        if (ctx->pc != 0x54DA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54DA88u; }
        if (ctx->pc != 0x54DA88u) { return; }
    }
    ctx->pc = 0x54DA88u;
label_54da88:
    // 0x54da88: 0x4614ad40  add.s       $f21, $f21, $f20
    ctx->pc = 0x54da88u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_54da8c:
    // 0x54da8c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54da8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54da90:
    // 0x54da90: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54da94:
    if (ctx->pc == 0x54DA94u) {
        ctx->pc = 0x54DA94u;
            // 0x54da94: 0x24a5e3a0  addiu       $a1, $a1, -0x1C60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960032));
        ctx->pc = 0x54DA98u;
        goto label_54da98;
    }
    ctx->pc = 0x54DA90u;
    {
        const bool branch_taken_0x54da90 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54DA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DA90u;
            // 0x54da94: 0x24a5e3a0  addiu       $a1, $a1, -0x1C60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54da90) {
            ctx->pc = 0x54DAA4u;
            goto label_54daa4;
        }
    }
    ctx->pc = 0x54DA98u;
label_54da98:
    // 0x54da98: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54da98u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54da9c:
    // 0x54da9c: 0x10000008  b           . + 4 + (0x8 << 2)
label_54daa0:
    if (ctx->pc == 0x54DAA0u) {
        ctx->pc = 0x54DAA0u;
            // 0x54daa0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54DAA4u;
        goto label_54daa4;
    }
    ctx->pc = 0x54DA9Cu;
    {
        const bool branch_taken_0x54da9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DA9Cu;
            // 0x54daa0: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54da9c) {
            ctx->pc = 0x54DAC0u;
            goto label_54dac0;
        }
    }
    ctx->pc = 0x54DAA4u;
label_54daa4:
    // 0x54daa4: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54daa8:
    // 0x54daa8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54daa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54daac:
    // 0x54daac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54daacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54dab0:
    // 0x54dab0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54dab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54dab4:
    // 0x54dab4: 0x0  nop
    ctx->pc = 0x54dab4u;
    // NOP
label_54dab8:
    // 0x54dab8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54dab8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54dabc:
    // 0x54dabc: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54dabcu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54dac0:
    // 0x54dac0: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54dac4:
    if (ctx->pc == 0x54DAC4u) {
        ctx->pc = 0x54DAC4u;
            // 0x54dac4: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54DAC8u;
        goto label_54dac8;
    }
    ctx->pc = 0x54DAC0u;
    {
        const bool branch_taken_0x54dac0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54dac0) {
            ctx->pc = 0x54DAC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54DAC0u;
            // 0x54dac4: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54DAD4u;
            goto label_54dad4;
        }
    }
    ctx->pc = 0x54DAC8u;
label_54dac8:
    // 0x54dac8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54dac8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54dacc:
    // 0x54dacc: 0x10000007  b           . + 4 + (0x7 << 2)
label_54dad0:
    if (ctx->pc == 0x54DAD0u) {
        ctx->pc = 0x54DAD0u;
            // 0x54dad0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54DAD4u;
        goto label_54dad4;
    }
    ctx->pc = 0x54DACCu;
    {
        const bool branch_taken_0x54dacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DACCu;
            // 0x54dad0: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dacc) {
            ctx->pc = 0x54DAECu;
            goto label_54daec;
        }
    }
    ctx->pc = 0x54DAD4u;
label_54dad4:
    // 0x54dad4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54dad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54dad8:
    // 0x54dad8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54dad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54dadc:
    // 0x54dadc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54dadcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54dae0:
    // 0x54dae0: 0x0  nop
    ctx->pc = 0x54dae0u;
    // NOP
label_54dae4:
    // 0x54dae4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54dae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54dae8:
    // 0x54dae8: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54dae8u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54daec:
    // 0x54daec: 0x4617ab80  add.s       $f14, $f21, $f23
    ctx->pc = 0x54daecu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_54daf0:
    // 0x54daf0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54daf4:
    // 0x54daf4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54daf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54daf8:
    // 0x54daf8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54daf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54dafc:
    // 0x54dafc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54dafcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54db00:
    // 0x54db00: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x54db00u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
label_54db04:
    // 0x54db04: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54db04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54db08:
    // 0x54db08: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x54db08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_54db0c:
    // 0x54db0c: 0xc0bc284  jal         func_2F0A10
label_54db10:
    if (ctx->pc == 0x54DB10u) {
        ctx->pc = 0x54DB10u;
            // 0x54db10: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x54DB14u;
        goto label_54db14;
    }
    ctx->pc = 0x54DB0Cu;
    SET_GPR_U32(ctx, 31, 0x54DB14u);
    ctx->pc = 0x54DB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54DB0Cu;
            // 0x54db10: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54DB14u; }
        if (ctx->pc != 0x54DB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54DB14u; }
        if (ctx->pc != 0x54DB14u) { return; }
    }
    ctx->pc = 0x54DB14u;
label_54db14:
    // 0x54db14: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54db14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54db18:
    // 0x54db18: 0x24a5e0e0  addiu       $a1, $a1, -0x1F20
    ctx->pc = 0x54db18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959328));
label_54db1c:
    // 0x54db1c: 0x4617ad40  add.s       $f21, $f21, $f23
    ctx->pc = 0x54db1cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_54db20:
    // 0x54db20: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x54db20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54db24:
    // 0x54db24: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x54db24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54db28:
    // 0x54db28: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54db2c:
    if (ctx->pc == 0x54DB2Cu) {
        ctx->pc = 0x54DB2Cu;
            // 0x54db2c: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x54DB30u;
        goto label_54db30;
    }
    ctx->pc = 0x54DB28u;
    {
        const bool branch_taken_0x54db28 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54DB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DB28u;
            // 0x54db2c: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54db28) {
            ctx->pc = 0x54DB3Cu;
            goto label_54db3c;
        }
    }
    ctx->pc = 0x54DB30u;
label_54db30:
    // 0x54db30: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54db30u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54db34:
    // 0x54db34: 0x10000008  b           . + 4 + (0x8 << 2)
label_54db38:
    if (ctx->pc == 0x54DB38u) {
        ctx->pc = 0x54DB38u;
            // 0x54db38: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54DB3Cu;
        goto label_54db3c;
    }
    ctx->pc = 0x54DB34u;
    {
        const bool branch_taken_0x54db34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DB34u;
            // 0x54db38: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54db34) {
            ctx->pc = 0x54DB58u;
            goto label_54db58;
        }
    }
    ctx->pc = 0x54DB3Cu;
label_54db3c:
    // 0x54db3c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54db40:
    // 0x54db40: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54db40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54db44:
    // 0x54db44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54db44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54db48:
    // 0x54db48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54db48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54db4c:
    // 0x54db4c: 0x0  nop
    ctx->pc = 0x54db4cu;
    // NOP
label_54db50:
    // 0x54db50: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54db50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54db54:
    // 0x54db54: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54db54u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54db58:
    // 0x54db58: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54db5c:
    if (ctx->pc == 0x54DB5Cu) {
        ctx->pc = 0x54DB5Cu;
            // 0x54db5c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54DB60u;
        goto label_54db60;
    }
    ctx->pc = 0x54DB58u;
    {
        const bool branch_taken_0x54db58 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54db58) {
            ctx->pc = 0x54DB5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54DB58u;
            // 0x54db5c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54DB6Cu;
            goto label_54db6c;
        }
    }
    ctx->pc = 0x54DB60u;
label_54db60:
    // 0x54db60: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54db60u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54db64:
    // 0x54db64: 0x10000007  b           . + 4 + (0x7 << 2)
label_54db68:
    if (ctx->pc == 0x54DB68u) {
        ctx->pc = 0x54DB68u;
            // 0x54db68: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54DB6Cu;
        goto label_54db6c;
    }
    ctx->pc = 0x54DB64u;
    {
        const bool branch_taken_0x54db64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DB64u;
            // 0x54db68: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54db64) {
            ctx->pc = 0x54DB84u;
            goto label_54db84;
        }
    }
    ctx->pc = 0x54DB6Cu;
label_54db6c:
    // 0x54db6c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54db6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54db70:
    // 0x54db70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54db70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54db74:
    // 0x54db74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54db74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54db78:
    // 0x54db78: 0x0  nop
    ctx->pc = 0x54db78u;
    // NOP
label_54db7c:
    // 0x54db7c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54db7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54db80:
    // 0x54db80: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54db80u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54db84:
    // 0x54db84: 0x4601c3c0  add.s       $f15, $f24, $f1
    ctx->pc = 0x54db84u;
    ctx->f[15] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
label_54db88:
    // 0x54db88: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54db88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54db8c:
    // 0x54db8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54db8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54db90:
    // 0x54db90: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54db90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54db94:
    // 0x54db94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54db94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54db98:
    // 0x54db98: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x54db98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_54db9c:
    // 0x54db9c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54db9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54dba0:
    // 0x54dba0: 0xc0bc284  jal         func_2F0A10
label_54dba4:
    if (ctx->pc == 0x54DBA4u) {
        ctx->pc = 0x54DBA4u;
            // 0x54dba4: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x54DBA8u;
        goto label_54dba8;
    }
    ctx->pc = 0x54DBA0u;
    SET_GPR_U32(ctx, 31, 0x54DBA8u);
    ctx->pc = 0x54DBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54DBA0u;
            // 0x54dba4: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54DBA8u; }
        if (ctx->pc != 0x54DBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54DBA8u; }
        if (ctx->pc != 0x54DBA8u) { return; }
    }
    ctx->pc = 0x54DBA8u;
label_54dba8:
    // 0x54dba8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54dbac:
    // 0x54dbac: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54dbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54dbb0:
    // 0x54dbb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54dbb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54dbb4:
    // 0x54dbb4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x54dbb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_54dbb8:
    // 0x54dbb8: 0x320f809  jalr        $t9
label_54dbbc:
    if (ctx->pc == 0x54DBBCu) {
        ctx->pc = 0x54DBC0u;
        goto label_54dbc0;
    }
    ctx->pc = 0x54DBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54DBC0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54DBC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54DBC0u; }
            if (ctx->pc != 0x54DBC0u) { return; }
        }
        }
    }
    ctx->pc = 0x54DBC0u;
label_54dbc0:
    // 0x54dbc0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54dbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54dbc4:
    // 0x54dbc4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x54dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_54dbc8:
    // 0x54dbc8: 0x8464d984  lh          $a0, -0x267C($v1)
    ctx->pc = 0x54dbc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957444)));
label_54dbcc:
    // 0x54dbcc: 0xc442e11c  lwc1        $f2, -0x1EE4($v0)
    ctx->pc = 0x54dbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_54dbd0:
    // 0x54dbd0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x54dbd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54dbd4:
    // 0x54dbd4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54dbd8:
    // 0x54dbd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54dbd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54dbdc:
    // 0x54dbdc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x54dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_54dbe0:
    // 0x54dbe0: 0x9042d997  lbu         $v0, -0x2669($v0)
    ctx->pc = 0x54dbe0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957463)));
label_54dbe4:
    // 0x54dbe4: 0x4600c8c0  add.s       $f3, $f25, $f0
    ctx->pc = 0x54dbe4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
label_54dbe8:
    // 0x54dbe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x54dbe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54dbec:
    // 0x54dbec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x54dbecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54dbf0:
    // 0x54dbf0: 0x0  nop
    ctx->pc = 0x54dbf0u;
    // NOP
label_54dbf4:
    // 0x54dbf4: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x54dbf4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_54dbf8:
    // 0x54dbf8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_54dbfc:
    if (ctx->pc == 0x54DBFCu) {
        ctx->pc = 0x54DBFCu;
            // 0x54dbfc: 0x46020d1c  madd.s      $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x54DC00u;
        goto label_54dc00;
    }
    ctx->pc = 0x54DBF8u;
    {
        const bool branch_taken_0x54dbf8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x54DBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DBF8u;
            // 0x54dbfc: 0x46020d1c  madd.s      $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dbf8) {
            ctx->pc = 0x54DC0Cu;
            goto label_54dc0c;
        }
    }
    ctx->pc = 0x54DC00u;
label_54dc00:
    // 0x54dc00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x54dc00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54dc04:
    // 0x54dc04: 0x10000008  b           . + 4 + (0x8 << 2)
label_54dc08:
    if (ctx->pc == 0x54DC08u) {
        ctx->pc = 0x54DC08u;
            // 0x54dc08: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54DC0Cu;
        goto label_54dc0c;
    }
    ctx->pc = 0x54DC04u;
    {
        const bool branch_taken_0x54dc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DC04u;
            // 0x54dc08: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dc04) {
            ctx->pc = 0x54DC28u;
            goto label_54dc28;
        }
    }
    ctx->pc = 0x54DC0Cu;
label_54dc0c:
    // 0x54dc0c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x54dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_54dc10:
    // 0x54dc10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x54dc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_54dc14:
    // 0x54dc14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54dc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54dc18:
    // 0x54dc18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54dc18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54dc1c:
    // 0x54dc1c: 0x0  nop
    ctx->pc = 0x54dc1cu;
    // NOP
label_54dc20:
    // 0x54dc20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54dc20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54dc24:
    // 0x54dc24: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x54dc24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_54dc28:
    // 0x54dc28: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54dc2c:
    // 0x54dc2c: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x54dc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_54dc30:
    // 0x54dc30: 0x8443d982  lh          $v1, -0x267E($v0)
    ctx->pc = 0x54dc30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957442)));
label_54dc34:
    // 0x54dc34: 0x4600a0c0  add.s       $f3, $f20, $f0
    ctx->pc = 0x54dc34u;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_54dc38:
    // 0x54dc38: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x54dc38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_54dc3c:
    // 0x54dc3c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54dc40:
    // 0x54dc40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54dc40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54dc44:
    // 0x54dc44: 0x8445d986  lh          $a1, -0x267A($v0)
    ctx->pc = 0x54dc44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957446)));
label_54dc48:
    // 0x54dc48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54dc48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54dc4c:
    // 0x54dc4c: 0x2a430035  slti        $v1, $s2, 0x35
    ctx->pc = 0x54dc4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)53) ? 1 : 0);
label_54dc50:
    // 0x54dc50: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x54dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_54dc54:
    // 0x54dc54: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x54dc54u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_54dc58:
    // 0x54dc58: 0x4600d040  add.s       $f1, $f26, $f0
    ctx->pc = 0x54dc58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
label_54dc5c:
    // 0x54dc5c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x54dc5cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54dc60:
    // 0x54dc60: 0x0  nop
    ctx->pc = 0x54dc60u;
    // NOP
label_54dc64:
    // 0x54dc64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54dc64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54dc68:
    // 0x54dc68: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x54dc68u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_54dc6c:
    // 0x54dc6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x54dc6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54dc70:
    // 0x54dc70: 0xc442e0ec  lwc1        $f2, -0x1F14($v0)
    ctx->pc = 0x54dc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_54dc74:
    // 0x54dc74: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x54dc74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54dc78:
    // 0x54dc78: 0x0  nop
    ctx->pc = 0x54dc78u;
    // NOP
label_54dc7c:
    // 0x54dc7c: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x54dc7cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_54dc80:
    // 0x54dc80: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_54dc84:
    if (ctx->pc == 0x54DC84u) {
        ctx->pc = 0x54DC84u;
            // 0x54dc84: 0x46020d1c  madd.s      $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x54DC88u;
        goto label_54dc88;
    }
    ctx->pc = 0x54DC80u;
    {
        const bool branch_taken_0x54dc80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x54DC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DC80u;
            // 0x54dc84: 0x46020d1c  madd.s      $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dc80) {
            ctx->pc = 0x54DC8Cu;
            goto label_54dc8c;
        }
    }
    ctx->pc = 0x54DC88u;
label_54dc88:
    // 0x54dc88: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x54dc88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_54dc8c:
    // 0x54dc8c: 0x2a42003a  slti        $v0, $s2, 0x3A
    ctx->pc = 0x54dc8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)58) ? 1 : 0);
label_54dc90:
    // 0x54dc90: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_54dc94:
    if (ctx->pc == 0x54DC94u) {
        ctx->pc = 0x54DC94u;
            // 0x54dc94: 0x8e640054  lw          $a0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->pc = 0x54DC98u;
        goto label_54dc98;
    }
    ctx->pc = 0x54DC90u;
    {
        const bool branch_taken_0x54dc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54dc90) {
            ctx->pc = 0x54DC94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54DC90u;
            // 0x54dc94: 0x8e640054  lw          $a0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54DCA0u;
            goto label_54dca0;
        }
    }
    ctx->pc = 0x54DC98u;
label_54dc98:
    // 0x54dc98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x54dc98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_54dc9c:
    // 0x54dc9c: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x54dc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_54dca0:
    // 0x54dca0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x54dca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_54dca4:
    // 0x54dca4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x54dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_54dca8:
    // 0x54dca8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x54dca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_54dcac:
    // 0x54dcac: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x54dcacu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_54dcb0:
    // 0x54dcb0: 0xc0c85d8  jal         func_321760
label_54dcb4:
    if (ctx->pc == 0x54DCB4u) {
        ctx->pc = 0x54DCB4u;
            // 0x54dcb4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x54DCB8u;
        goto label_54dcb8;
    }
    ctx->pc = 0x54DCB0u;
    SET_GPR_U32(ctx, 31, 0x54DCB8u);
    ctx->pc = 0x54DCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54DCB0u;
            // 0x54dcb4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x321760u;
    if (runtime->hasFunction(0x321760u)) {
        auto targetFn = runtime->lookupFunction(0x321760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54DCB8u; }
        if (ctx->pc != 0x54DCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321760_0x321760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54DCB8u; }
        if (ctx->pc != 0x54DCB8u) { return; }
    }
    ctx->pc = 0x54DCB8u;
label_54dcb8:
    // 0x54dcb8: 0x2e010010  sltiu       $at, $s0, 0x10
    ctx->pc = 0x54dcb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_54dcbc:
    // 0x54dcbc: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_54dcc0:
    if (ctx->pc == 0x54DCC0u) {
        ctx->pc = 0x54DCC0u;
            // 0x54dcc0: 0x26050002  addiu       $a1, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x54DCC4u;
        goto label_54dcc4;
    }
    ctx->pc = 0x54DCBCu;
    {
        const bool branch_taken_0x54dcbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DCBCu;
            // 0x54dcc0: 0x26050002  addiu       $a1, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dcbc) {
            ctx->pc = 0x54DD5Cu;
            goto label_54dd5c;
        }
    }
    ctx->pc = 0x54DCC4u;
label_54dcc4:
    // 0x54dcc4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x54dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_54dcc8:
    // 0x54dcc8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x54dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_54dccc:
    // 0x54dccc: 0x2463eb50  addiu       $v1, $v1, -0x14B0
    ctx->pc = 0x54dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962000));
label_54dcd0:
    // 0x54dcd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x54dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_54dcd4:
    // 0x54dcd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x54dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_54dcd8:
    // 0x54dcd8: 0x400008  jr          $v0
label_54dcdc:
    if (ctx->pc == 0x54DCDCu) {
        ctx->pc = 0x54DCE0u;
        goto label_54dce0;
    }
    ctx->pc = 0x54DCD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x54DCE0u: goto label_54dce0;
            case 0x54DCE8u: goto label_54dce8;
            case 0x54DCF0u: goto label_54dcf0;
            case 0x54DCF8u: goto label_54dcf8;
            case 0x54DD00u: goto label_54dd00;
            case 0x54DD08u: goto label_54dd08;
            case 0x54DD10u: goto label_54dd10;
            case 0x54DD18u: goto label_54dd18;
            case 0x54DD20u: goto label_54dd20;
            case 0x54DD28u: goto label_54dd28;
            case 0x54DD30u: goto label_54dd30;
            case 0x54DD38u: goto label_54dd38;
            case 0x54DD40u: goto label_54dd40;
            case 0x54DD48u: goto label_54dd48;
            case 0x54DD50u: goto label_54dd50;
            case 0x54DD58u: goto label_54dd58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x54DCE0u;
label_54dce0:
    // 0x54dce0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_54dce4:
    if (ctx->pc == 0x54DCE4u) {
        ctx->pc = 0x54DCE4u;
            // 0x54dce4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x54DCE8u;
        goto label_54dce8;
    }
    ctx->pc = 0x54DCE0u;
    {
        const bool branch_taken_0x54dce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DCE0u;
            // 0x54dce4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dce0) {
            ctx->pc = 0x54DD5Cu;
            goto label_54dd5c;
        }
    }
    ctx->pc = 0x54DCE8u;
label_54dce8:
    // 0x54dce8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_54dcec:
    if (ctx->pc == 0x54DCECu) {
        ctx->pc = 0x54DCECu;
            // 0x54dcec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54DCF0u;
        goto label_54dcf0;
    }
    ctx->pc = 0x54DCE8u;
    {
        const bool branch_taken_0x54dce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DCE8u;
            // 0x54dcec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dce8) {
            ctx->pc = 0x54DD5Cu;
            goto label_54dd5c;
        }
    }
    ctx->pc = 0x54DCF0u;
label_54dcf0:
    // 0x54dcf0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_54dcf4:
    if (ctx->pc == 0x54DCF4u) {
        ctx->pc = 0x54DCF4u;
            // 0x54dcf4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x54DCF8u;
        goto label_54dcf8;
    }
    ctx->pc = 0x54DCF0u;
    {
        const bool branch_taken_0x54dcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DCF0u;
            // 0x54dcf4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dcf0) {
            ctx->pc = 0x54DD5Cu;
            goto label_54dd5c;
        }
    }
    ctx->pc = 0x54DCF8u;
label_54dcf8:
    // 0x54dcf8: 0x10000018  b           . + 4 + (0x18 << 2)
label_54dcfc:
    if (ctx->pc == 0x54DCFCu) {
        ctx->pc = 0x54DCFCu;
            // 0x54dcfc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x54DD00u;
        goto label_54dd00;
    }
    ctx->pc = 0x54DCF8u;
    {
        const bool branch_taken_0x54dcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DCF8u;
            // 0x54dcfc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dcf8) {
            ctx->pc = 0x54DD5Cu;
            goto label_54dd5c;
        }
    }
    ctx->pc = 0x54DD00u;
label_54dd00:
    // 0x54dd00: 0x10000016  b           . + 4 + (0x16 << 2)
label_54dd04:
    if (ctx->pc == 0x54DD04u) {
        ctx->pc = 0x54DD04u;
            // 0x54dd04: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x54DD08u;
        goto label_54dd08;
    }
    ctx->pc = 0x54DD00u;
    {
        const bool branch_taken_0x54dd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DD00u;
            // 0x54dd04: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dd00) {
            ctx->pc = 0x54DD5Cu;
            goto label_54dd5c;
        }
    }
    ctx->pc = 0x54DD08u;
label_54dd08:
    // 0x54dd08: 0x10000014  b           . + 4 + (0x14 << 2)
label_54dd0c:
    if (ctx->pc == 0x54DD0Cu) {
        ctx->pc = 0x54DD0Cu;
            // 0x54dd0c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x54DD10u;
        goto label_54dd10;
    }
    ctx->pc = 0x54DD08u;
    {
        const bool branch_taken_0x54dd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DD08u;
            // 0x54dd0c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dd08) {
            ctx->pc = 0x54DD5Cu;
            goto label_54dd5c;
        }
    }
    ctx->pc = 0x54DD10u;
label_54dd10:
    // 0x54dd10: 0x10000012  b           . + 4 + (0x12 << 2)
label_54dd14:
    if (ctx->pc == 0x54DD14u) {
        ctx->pc = 0x54DD14u;
            // 0x54dd14: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x54DD18u;
        goto label_54dd18;
    }
    ctx->pc = 0x54DD10u;
    {
        const bool branch_taken_0x54dd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DD10u;
            // 0x54dd14: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dd10) {
            ctx->pc = 0x54DD5Cu;
            goto label_54dd5c;
        }
    }
    ctx->pc = 0x54DD18u;
label_54dd18:
    // 0x54dd18: 0x10000010  b           . + 4 + (0x10 << 2)
label_54dd1c:
    if (ctx->pc == 0x54DD1Cu) {
        ctx->pc = 0x54DD1Cu;
            // 0x54dd1c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x54DD20u;
        goto label_54dd20;
    }
    ctx->pc = 0x54DD18u;
    {
        const bool branch_taken_0x54dd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DD18u;
            // 0x54dd1c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dd18) {
            ctx->pc = 0x54DD5Cu;
            goto label_54dd5c;
        }
    }
    ctx->pc = 0x54DD20u;
label_54dd20:
    // 0x54dd20: 0x1000000e  b           . + 4 + (0xE << 2)
label_54dd24:
    if (ctx->pc == 0x54DD24u) {
        ctx->pc = 0x54DD24u;
            // 0x54dd24: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x54DD28u;
        goto label_54dd28;
    }
    ctx->pc = 0x54DD20u;
    {
        const bool branch_taken_0x54dd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DD20u;
            // 0x54dd24: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dd20) {
            ctx->pc = 0x54DD5Cu;
            goto label_54dd5c;
        }
    }
    ctx->pc = 0x54DD28u;
label_54dd28:
    // 0x54dd28: 0x1000000c  b           . + 4 + (0xC << 2)
label_54dd2c:
    if (ctx->pc == 0x54DD2Cu) {
        ctx->pc = 0x54DD2Cu;
            // 0x54dd2c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x54DD30u;
        goto label_54dd30;
    }
    ctx->pc = 0x54DD28u;
    {
        const bool branch_taken_0x54dd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DD28u;
            // 0x54dd2c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dd28) {
            ctx->pc = 0x54DD5Cu;
            goto label_54dd5c;
        }
    }
    ctx->pc = 0x54DD30u;
label_54dd30:
    // 0x54dd30: 0x1000000a  b           . + 4 + (0xA << 2)
label_54dd34:
    if (ctx->pc == 0x54DD34u) {
        ctx->pc = 0x54DD34u;
            // 0x54dd34: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x54DD38u;
        goto label_54dd38;
    }
    ctx->pc = 0x54DD30u;
    {
        const bool branch_taken_0x54dd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DD30u;
            // 0x54dd34: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dd30) {
            ctx->pc = 0x54DD5Cu;
            goto label_54dd5c;
        }
    }
    ctx->pc = 0x54DD38u;
label_54dd38:
    // 0x54dd38: 0x10000008  b           . + 4 + (0x8 << 2)
label_54dd3c:
    if (ctx->pc == 0x54DD3Cu) {
        ctx->pc = 0x54DD3Cu;
            // 0x54dd3c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x54DD40u;
        goto label_54dd40;
    }
    ctx->pc = 0x54DD38u;
    {
        const bool branch_taken_0x54dd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DD38u;
            // 0x54dd3c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dd38) {
            ctx->pc = 0x54DD5Cu;
            goto label_54dd5c;
        }
    }
    ctx->pc = 0x54DD40u;
label_54dd40:
    // 0x54dd40: 0x10000006  b           . + 4 + (0x6 << 2)
label_54dd44:
    if (ctx->pc == 0x54DD44u) {
        ctx->pc = 0x54DD44u;
            // 0x54dd44: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x54DD48u;
        goto label_54dd48;
    }
    ctx->pc = 0x54DD40u;
    {
        const bool branch_taken_0x54dd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DD40u;
            // 0x54dd44: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dd40) {
            ctx->pc = 0x54DD5Cu;
            goto label_54dd5c;
        }
    }
    ctx->pc = 0x54DD48u;
label_54dd48:
    // 0x54dd48: 0x10000004  b           . + 4 + (0x4 << 2)
label_54dd4c:
    if (ctx->pc == 0x54DD4Cu) {
        ctx->pc = 0x54DD4Cu;
            // 0x54dd4c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x54DD50u;
        goto label_54dd50;
    }
    ctx->pc = 0x54DD48u;
    {
        const bool branch_taken_0x54dd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DD48u;
            // 0x54dd4c: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dd48) {
            ctx->pc = 0x54DD5Cu;
            goto label_54dd5c;
        }
    }
    ctx->pc = 0x54DD50u;
label_54dd50:
    // 0x54dd50: 0x10000002  b           . + 4 + (0x2 << 2)
label_54dd54:
    if (ctx->pc == 0x54DD54u) {
        ctx->pc = 0x54DD54u;
            // 0x54dd54: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x54DD58u;
        goto label_54dd58;
    }
    ctx->pc = 0x54DD50u;
    {
        const bool branch_taken_0x54dd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DD50u;
            // 0x54dd54: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dd50) {
            ctx->pc = 0x54DD5Cu;
            goto label_54dd5c;
        }
    }
    ctx->pc = 0x54DD58u;
label_54dd58:
    // 0x54dd58: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x54dd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_54dd5c:
    // 0x54dd5c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54dd60:
    // 0x54dd60: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x54dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_54dd64:
    // 0x54dd64: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x54dd64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_54dd68:
    // 0x54dd68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_54dd6c:
    if (ctx->pc == 0x54DD6Cu) {
        ctx->pc = 0x54DD70u;
        goto label_54dd70;
    }
    ctx->pc = 0x54DD68u;
    {
        const bool branch_taken_0x54dd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54dd68) {
            ctx->pc = 0x54DD80u;
            goto label_54dd80;
        }
    }
    ctx->pc = 0x54DD70u;
label_54dd70:
    // 0x54dd70: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x54dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_54dd74:
    // 0x54dd74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x54dd74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54dd78:
    // 0x54dd78: 0x0  nop
    ctx->pc = 0x54dd78u;
    // NOP
label_54dd7c:
    // 0x54dd7c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x54dd7cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_54dd80:
    // 0x54dd80: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54dd84:
    // 0x54dd84: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x54dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_54dd88:
    // 0x54dd88: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x54dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_54dd8c:
    // 0x54dd8c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x54dd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_54dd90:
    // 0x54dd90: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x54dd90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_54dd94:
    // 0x54dd94: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x54dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_54dd98:
    // 0x54dd98: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_54dd9c:
    if (ctx->pc == 0x54DD9Cu) {
        ctx->pc = 0x54DD9Cu;
            // 0x54dd9c: 0x3c024180  lui         $v0, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
        ctx->pc = 0x54DDA0u;
        goto label_54dda0;
    }
    ctx->pc = 0x54DD98u;
    {
        const bool branch_taken_0x54dd98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x54dd98) {
            ctx->pc = 0x54DD9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54DD98u;
            // 0x54dd9c: 0x3c024180  lui         $v0, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54DDBCu;
            goto label_54ddbc;
        }
    }
    ctx->pc = 0x54DDA0u;
label_54dda0:
    // 0x54dda0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x54dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54dda4:
    // 0x54dda4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_54dda8:
    if (ctx->pc == 0x54DDA8u) {
        ctx->pc = 0x54DDACu;
        goto label_54ddac;
    }
    ctx->pc = 0x54DDA4u;
    {
        const bool branch_taken_0x54dda4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x54dda4) {
            ctx->pc = 0x54DDB8u;
            goto label_54ddb8;
        }
    }
    ctx->pc = 0x54DDACu;
label_54ddac:
    // 0x54ddac: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x54ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
label_54ddb0:
    // 0x54ddb0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x54ddb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_54ddb4:
    // 0x54ddb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x54ddb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_54ddb8:
    // 0x54ddb8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x54ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_54ddbc:
    // 0x54ddbc: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x54ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_54ddc0:
    // 0x54ddc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x54ddc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54ddc4:
    // 0x54ddc4: 0x0  nop
    ctx->pc = 0x54ddc4u;
    // NOP
label_54ddc8:
    // 0x54ddc8: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x54ddc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_54ddcc:
    // 0x54ddcc: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x54ddccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_54ddd0:
    // 0x54ddd0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x54ddd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_54ddd4:
    // 0x54ddd4: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x54ddd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_54ddd8:
    // 0x54ddd8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x54ddd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_54dddc:
    // 0x54dddc: 0xc0c85cc  jal         func_321730
label_54dde0:
    if (ctx->pc == 0x54DDE0u) {
        ctx->pc = 0x54DDE0u;
            // 0x54dde0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54DDE4u;
        goto label_54dde4;
    }
    ctx->pc = 0x54DDDCu;
    SET_GPR_U32(ctx, 31, 0x54DDE4u);
    ctx->pc = 0x54DDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54DDDCu;
            // 0x54dde0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321730u;
    if (runtime->hasFunction(0x321730u)) {
        auto targetFn = runtime->lookupFunction(0x321730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54DDE4u; }
        if (ctx->pc != 0x54DDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321730_0x321730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54DDE4u; }
        if (ctx->pc != 0x54DDE4u) { return; }
    }
    ctx->pc = 0x54DDE4u;
label_54dde4:
    // 0x54dde4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x54dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_54dde8:
    // 0x54dde8: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x54dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_54ddec:
    // 0x54ddec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x54ddecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_54ddf0:
    // 0x54ddf0: 0x0  nop
    ctx->pc = 0x54ddf0u;
    // NOP
label_54ddf4:
    // 0x54ddf4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x54ddf4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_54ddf8:
    // 0x54ddf8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x54ddf8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_54ddfc:
    // 0x54ddfc: 0xc0c85d8  jal         func_321760
label_54de00:
    if (ctx->pc == 0x54DE00u) {
        ctx->pc = 0x54DE00u;
            // 0x54de00: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x54DE04u;
        goto label_54de04;
    }
    ctx->pc = 0x54DDFCu;
    SET_GPR_U32(ctx, 31, 0x54DE04u);
    ctx->pc = 0x54DE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54DDFCu;
            // 0x54de00: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x321760u;
    if (runtime->hasFunction(0x321760u)) {
        auto targetFn = runtime->lookupFunction(0x321760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54DE04u; }
        if (ctx->pc != 0x54DE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321760_0x321760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54DE04u; }
        if (ctx->pc != 0x54DE04u) { return; }
    }
    ctx->pc = 0x54DE04u;
label_54de04:
    // 0x54de04: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x54de04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_54de08:
    // 0x54de08: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x54de08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_54de0c:
    // 0x54de0c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x54de0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_54de10:
    // 0x54de10: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x54de10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_54de14:
    // 0x54de14: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x54de14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_54de18:
    // 0x54de18: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x54de18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_54de1c:
    // 0x54de1c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x54de1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_54de20:
    // 0x54de20: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x54de20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_54de24:
    // 0x54de24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x54de24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_54de28:
    // 0x54de28: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x54de28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_54de2c:
    // 0x54de2c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x54de2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_54de30:
    // 0x54de30: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x54de30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54de34:
    // 0x54de34: 0x3e00008  jr          $ra
label_54de38:
    if (ctx->pc == 0x54DE38u) {
        ctx->pc = 0x54DE38u;
            // 0x54de38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x54DE3Cu;
        goto label_54de3c;
    }
    ctx->pc = 0x54DE34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54DE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DE34u;
            // 0x54de38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x54DE3Cu;
label_54de3c:
    // 0x54de3c: 0x0  nop
    ctx->pc = 0x54de3cu;
    // NOP
}
