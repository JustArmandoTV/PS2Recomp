#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030D6D0
// Address: 0x30d6d0 - 0x30e220
void sub_0030D6D0_0x30d6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D6D0_0x30d6d0");
#endif

    switch (ctx->pc) {
        case 0x30d6d0u: goto label_30d6d0;
        case 0x30d6d4u: goto label_30d6d4;
        case 0x30d6d8u: goto label_30d6d8;
        case 0x30d6dcu: goto label_30d6dc;
        case 0x30d6e0u: goto label_30d6e0;
        case 0x30d6e4u: goto label_30d6e4;
        case 0x30d6e8u: goto label_30d6e8;
        case 0x30d6ecu: goto label_30d6ec;
        case 0x30d6f0u: goto label_30d6f0;
        case 0x30d6f4u: goto label_30d6f4;
        case 0x30d6f8u: goto label_30d6f8;
        case 0x30d6fcu: goto label_30d6fc;
        case 0x30d700u: goto label_30d700;
        case 0x30d704u: goto label_30d704;
        case 0x30d708u: goto label_30d708;
        case 0x30d70cu: goto label_30d70c;
        case 0x30d710u: goto label_30d710;
        case 0x30d714u: goto label_30d714;
        case 0x30d718u: goto label_30d718;
        case 0x30d71cu: goto label_30d71c;
        case 0x30d720u: goto label_30d720;
        case 0x30d724u: goto label_30d724;
        case 0x30d728u: goto label_30d728;
        case 0x30d72cu: goto label_30d72c;
        case 0x30d730u: goto label_30d730;
        case 0x30d734u: goto label_30d734;
        case 0x30d738u: goto label_30d738;
        case 0x30d73cu: goto label_30d73c;
        case 0x30d740u: goto label_30d740;
        case 0x30d744u: goto label_30d744;
        case 0x30d748u: goto label_30d748;
        case 0x30d74cu: goto label_30d74c;
        case 0x30d750u: goto label_30d750;
        case 0x30d754u: goto label_30d754;
        case 0x30d758u: goto label_30d758;
        case 0x30d75cu: goto label_30d75c;
        case 0x30d760u: goto label_30d760;
        case 0x30d764u: goto label_30d764;
        case 0x30d768u: goto label_30d768;
        case 0x30d76cu: goto label_30d76c;
        case 0x30d770u: goto label_30d770;
        case 0x30d774u: goto label_30d774;
        case 0x30d778u: goto label_30d778;
        case 0x30d77cu: goto label_30d77c;
        case 0x30d780u: goto label_30d780;
        case 0x30d784u: goto label_30d784;
        case 0x30d788u: goto label_30d788;
        case 0x30d78cu: goto label_30d78c;
        case 0x30d790u: goto label_30d790;
        case 0x30d794u: goto label_30d794;
        case 0x30d798u: goto label_30d798;
        case 0x30d79cu: goto label_30d79c;
        case 0x30d7a0u: goto label_30d7a0;
        case 0x30d7a4u: goto label_30d7a4;
        case 0x30d7a8u: goto label_30d7a8;
        case 0x30d7acu: goto label_30d7ac;
        case 0x30d7b0u: goto label_30d7b0;
        case 0x30d7b4u: goto label_30d7b4;
        case 0x30d7b8u: goto label_30d7b8;
        case 0x30d7bcu: goto label_30d7bc;
        case 0x30d7c0u: goto label_30d7c0;
        case 0x30d7c4u: goto label_30d7c4;
        case 0x30d7c8u: goto label_30d7c8;
        case 0x30d7ccu: goto label_30d7cc;
        case 0x30d7d0u: goto label_30d7d0;
        case 0x30d7d4u: goto label_30d7d4;
        case 0x30d7d8u: goto label_30d7d8;
        case 0x30d7dcu: goto label_30d7dc;
        case 0x30d7e0u: goto label_30d7e0;
        case 0x30d7e4u: goto label_30d7e4;
        case 0x30d7e8u: goto label_30d7e8;
        case 0x30d7ecu: goto label_30d7ec;
        case 0x30d7f0u: goto label_30d7f0;
        case 0x30d7f4u: goto label_30d7f4;
        case 0x30d7f8u: goto label_30d7f8;
        case 0x30d7fcu: goto label_30d7fc;
        case 0x30d800u: goto label_30d800;
        case 0x30d804u: goto label_30d804;
        case 0x30d808u: goto label_30d808;
        case 0x30d80cu: goto label_30d80c;
        case 0x30d810u: goto label_30d810;
        case 0x30d814u: goto label_30d814;
        case 0x30d818u: goto label_30d818;
        case 0x30d81cu: goto label_30d81c;
        case 0x30d820u: goto label_30d820;
        case 0x30d824u: goto label_30d824;
        case 0x30d828u: goto label_30d828;
        case 0x30d82cu: goto label_30d82c;
        case 0x30d830u: goto label_30d830;
        case 0x30d834u: goto label_30d834;
        case 0x30d838u: goto label_30d838;
        case 0x30d83cu: goto label_30d83c;
        case 0x30d840u: goto label_30d840;
        case 0x30d844u: goto label_30d844;
        case 0x30d848u: goto label_30d848;
        case 0x30d84cu: goto label_30d84c;
        case 0x30d850u: goto label_30d850;
        case 0x30d854u: goto label_30d854;
        case 0x30d858u: goto label_30d858;
        case 0x30d85cu: goto label_30d85c;
        case 0x30d860u: goto label_30d860;
        case 0x30d864u: goto label_30d864;
        case 0x30d868u: goto label_30d868;
        case 0x30d86cu: goto label_30d86c;
        case 0x30d870u: goto label_30d870;
        case 0x30d874u: goto label_30d874;
        case 0x30d878u: goto label_30d878;
        case 0x30d87cu: goto label_30d87c;
        case 0x30d880u: goto label_30d880;
        case 0x30d884u: goto label_30d884;
        case 0x30d888u: goto label_30d888;
        case 0x30d88cu: goto label_30d88c;
        case 0x30d890u: goto label_30d890;
        case 0x30d894u: goto label_30d894;
        case 0x30d898u: goto label_30d898;
        case 0x30d89cu: goto label_30d89c;
        case 0x30d8a0u: goto label_30d8a0;
        case 0x30d8a4u: goto label_30d8a4;
        case 0x30d8a8u: goto label_30d8a8;
        case 0x30d8acu: goto label_30d8ac;
        case 0x30d8b0u: goto label_30d8b0;
        case 0x30d8b4u: goto label_30d8b4;
        case 0x30d8b8u: goto label_30d8b8;
        case 0x30d8bcu: goto label_30d8bc;
        case 0x30d8c0u: goto label_30d8c0;
        case 0x30d8c4u: goto label_30d8c4;
        case 0x30d8c8u: goto label_30d8c8;
        case 0x30d8ccu: goto label_30d8cc;
        case 0x30d8d0u: goto label_30d8d0;
        case 0x30d8d4u: goto label_30d8d4;
        case 0x30d8d8u: goto label_30d8d8;
        case 0x30d8dcu: goto label_30d8dc;
        case 0x30d8e0u: goto label_30d8e0;
        case 0x30d8e4u: goto label_30d8e4;
        case 0x30d8e8u: goto label_30d8e8;
        case 0x30d8ecu: goto label_30d8ec;
        case 0x30d8f0u: goto label_30d8f0;
        case 0x30d8f4u: goto label_30d8f4;
        case 0x30d8f8u: goto label_30d8f8;
        case 0x30d8fcu: goto label_30d8fc;
        case 0x30d900u: goto label_30d900;
        case 0x30d904u: goto label_30d904;
        case 0x30d908u: goto label_30d908;
        case 0x30d90cu: goto label_30d90c;
        case 0x30d910u: goto label_30d910;
        case 0x30d914u: goto label_30d914;
        case 0x30d918u: goto label_30d918;
        case 0x30d91cu: goto label_30d91c;
        case 0x30d920u: goto label_30d920;
        case 0x30d924u: goto label_30d924;
        case 0x30d928u: goto label_30d928;
        case 0x30d92cu: goto label_30d92c;
        case 0x30d930u: goto label_30d930;
        case 0x30d934u: goto label_30d934;
        case 0x30d938u: goto label_30d938;
        case 0x30d93cu: goto label_30d93c;
        case 0x30d940u: goto label_30d940;
        case 0x30d944u: goto label_30d944;
        case 0x30d948u: goto label_30d948;
        case 0x30d94cu: goto label_30d94c;
        case 0x30d950u: goto label_30d950;
        case 0x30d954u: goto label_30d954;
        case 0x30d958u: goto label_30d958;
        case 0x30d95cu: goto label_30d95c;
        case 0x30d960u: goto label_30d960;
        case 0x30d964u: goto label_30d964;
        case 0x30d968u: goto label_30d968;
        case 0x30d96cu: goto label_30d96c;
        case 0x30d970u: goto label_30d970;
        case 0x30d974u: goto label_30d974;
        case 0x30d978u: goto label_30d978;
        case 0x30d97cu: goto label_30d97c;
        case 0x30d980u: goto label_30d980;
        case 0x30d984u: goto label_30d984;
        case 0x30d988u: goto label_30d988;
        case 0x30d98cu: goto label_30d98c;
        case 0x30d990u: goto label_30d990;
        case 0x30d994u: goto label_30d994;
        case 0x30d998u: goto label_30d998;
        case 0x30d99cu: goto label_30d99c;
        case 0x30d9a0u: goto label_30d9a0;
        case 0x30d9a4u: goto label_30d9a4;
        case 0x30d9a8u: goto label_30d9a8;
        case 0x30d9acu: goto label_30d9ac;
        case 0x30d9b0u: goto label_30d9b0;
        case 0x30d9b4u: goto label_30d9b4;
        case 0x30d9b8u: goto label_30d9b8;
        case 0x30d9bcu: goto label_30d9bc;
        case 0x30d9c0u: goto label_30d9c0;
        case 0x30d9c4u: goto label_30d9c4;
        case 0x30d9c8u: goto label_30d9c8;
        case 0x30d9ccu: goto label_30d9cc;
        case 0x30d9d0u: goto label_30d9d0;
        case 0x30d9d4u: goto label_30d9d4;
        case 0x30d9d8u: goto label_30d9d8;
        case 0x30d9dcu: goto label_30d9dc;
        case 0x30d9e0u: goto label_30d9e0;
        case 0x30d9e4u: goto label_30d9e4;
        case 0x30d9e8u: goto label_30d9e8;
        case 0x30d9ecu: goto label_30d9ec;
        case 0x30d9f0u: goto label_30d9f0;
        case 0x30d9f4u: goto label_30d9f4;
        case 0x30d9f8u: goto label_30d9f8;
        case 0x30d9fcu: goto label_30d9fc;
        case 0x30da00u: goto label_30da00;
        case 0x30da04u: goto label_30da04;
        case 0x30da08u: goto label_30da08;
        case 0x30da0cu: goto label_30da0c;
        case 0x30da10u: goto label_30da10;
        case 0x30da14u: goto label_30da14;
        case 0x30da18u: goto label_30da18;
        case 0x30da1cu: goto label_30da1c;
        case 0x30da20u: goto label_30da20;
        case 0x30da24u: goto label_30da24;
        case 0x30da28u: goto label_30da28;
        case 0x30da2cu: goto label_30da2c;
        case 0x30da30u: goto label_30da30;
        case 0x30da34u: goto label_30da34;
        case 0x30da38u: goto label_30da38;
        case 0x30da3cu: goto label_30da3c;
        case 0x30da40u: goto label_30da40;
        case 0x30da44u: goto label_30da44;
        case 0x30da48u: goto label_30da48;
        case 0x30da4cu: goto label_30da4c;
        case 0x30da50u: goto label_30da50;
        case 0x30da54u: goto label_30da54;
        case 0x30da58u: goto label_30da58;
        case 0x30da5cu: goto label_30da5c;
        case 0x30da60u: goto label_30da60;
        case 0x30da64u: goto label_30da64;
        case 0x30da68u: goto label_30da68;
        case 0x30da6cu: goto label_30da6c;
        case 0x30da70u: goto label_30da70;
        case 0x30da74u: goto label_30da74;
        case 0x30da78u: goto label_30da78;
        case 0x30da7cu: goto label_30da7c;
        case 0x30da80u: goto label_30da80;
        case 0x30da84u: goto label_30da84;
        case 0x30da88u: goto label_30da88;
        case 0x30da8cu: goto label_30da8c;
        case 0x30da90u: goto label_30da90;
        case 0x30da94u: goto label_30da94;
        case 0x30da98u: goto label_30da98;
        case 0x30da9cu: goto label_30da9c;
        case 0x30daa0u: goto label_30daa0;
        case 0x30daa4u: goto label_30daa4;
        case 0x30daa8u: goto label_30daa8;
        case 0x30daacu: goto label_30daac;
        case 0x30dab0u: goto label_30dab0;
        case 0x30dab4u: goto label_30dab4;
        case 0x30dab8u: goto label_30dab8;
        case 0x30dabcu: goto label_30dabc;
        case 0x30dac0u: goto label_30dac0;
        case 0x30dac4u: goto label_30dac4;
        case 0x30dac8u: goto label_30dac8;
        case 0x30daccu: goto label_30dacc;
        case 0x30dad0u: goto label_30dad0;
        case 0x30dad4u: goto label_30dad4;
        case 0x30dad8u: goto label_30dad8;
        case 0x30dadcu: goto label_30dadc;
        case 0x30dae0u: goto label_30dae0;
        case 0x30dae4u: goto label_30dae4;
        case 0x30dae8u: goto label_30dae8;
        case 0x30daecu: goto label_30daec;
        case 0x30daf0u: goto label_30daf0;
        case 0x30daf4u: goto label_30daf4;
        case 0x30daf8u: goto label_30daf8;
        case 0x30dafcu: goto label_30dafc;
        case 0x30db00u: goto label_30db00;
        case 0x30db04u: goto label_30db04;
        case 0x30db08u: goto label_30db08;
        case 0x30db0cu: goto label_30db0c;
        case 0x30db10u: goto label_30db10;
        case 0x30db14u: goto label_30db14;
        case 0x30db18u: goto label_30db18;
        case 0x30db1cu: goto label_30db1c;
        case 0x30db20u: goto label_30db20;
        case 0x30db24u: goto label_30db24;
        case 0x30db28u: goto label_30db28;
        case 0x30db2cu: goto label_30db2c;
        case 0x30db30u: goto label_30db30;
        case 0x30db34u: goto label_30db34;
        case 0x30db38u: goto label_30db38;
        case 0x30db3cu: goto label_30db3c;
        case 0x30db40u: goto label_30db40;
        case 0x30db44u: goto label_30db44;
        case 0x30db48u: goto label_30db48;
        case 0x30db4cu: goto label_30db4c;
        case 0x30db50u: goto label_30db50;
        case 0x30db54u: goto label_30db54;
        case 0x30db58u: goto label_30db58;
        case 0x30db5cu: goto label_30db5c;
        case 0x30db60u: goto label_30db60;
        case 0x30db64u: goto label_30db64;
        case 0x30db68u: goto label_30db68;
        case 0x30db6cu: goto label_30db6c;
        case 0x30db70u: goto label_30db70;
        case 0x30db74u: goto label_30db74;
        case 0x30db78u: goto label_30db78;
        case 0x30db7cu: goto label_30db7c;
        case 0x30db80u: goto label_30db80;
        case 0x30db84u: goto label_30db84;
        case 0x30db88u: goto label_30db88;
        case 0x30db8cu: goto label_30db8c;
        case 0x30db90u: goto label_30db90;
        case 0x30db94u: goto label_30db94;
        case 0x30db98u: goto label_30db98;
        case 0x30db9cu: goto label_30db9c;
        case 0x30dba0u: goto label_30dba0;
        case 0x30dba4u: goto label_30dba4;
        case 0x30dba8u: goto label_30dba8;
        case 0x30dbacu: goto label_30dbac;
        case 0x30dbb0u: goto label_30dbb0;
        case 0x30dbb4u: goto label_30dbb4;
        case 0x30dbb8u: goto label_30dbb8;
        case 0x30dbbcu: goto label_30dbbc;
        case 0x30dbc0u: goto label_30dbc0;
        case 0x30dbc4u: goto label_30dbc4;
        case 0x30dbc8u: goto label_30dbc8;
        case 0x30dbccu: goto label_30dbcc;
        case 0x30dbd0u: goto label_30dbd0;
        case 0x30dbd4u: goto label_30dbd4;
        case 0x30dbd8u: goto label_30dbd8;
        case 0x30dbdcu: goto label_30dbdc;
        case 0x30dbe0u: goto label_30dbe0;
        case 0x30dbe4u: goto label_30dbe4;
        case 0x30dbe8u: goto label_30dbe8;
        case 0x30dbecu: goto label_30dbec;
        case 0x30dbf0u: goto label_30dbf0;
        case 0x30dbf4u: goto label_30dbf4;
        case 0x30dbf8u: goto label_30dbf8;
        case 0x30dbfcu: goto label_30dbfc;
        case 0x30dc00u: goto label_30dc00;
        case 0x30dc04u: goto label_30dc04;
        case 0x30dc08u: goto label_30dc08;
        case 0x30dc0cu: goto label_30dc0c;
        case 0x30dc10u: goto label_30dc10;
        case 0x30dc14u: goto label_30dc14;
        case 0x30dc18u: goto label_30dc18;
        case 0x30dc1cu: goto label_30dc1c;
        case 0x30dc20u: goto label_30dc20;
        case 0x30dc24u: goto label_30dc24;
        case 0x30dc28u: goto label_30dc28;
        case 0x30dc2cu: goto label_30dc2c;
        case 0x30dc30u: goto label_30dc30;
        case 0x30dc34u: goto label_30dc34;
        case 0x30dc38u: goto label_30dc38;
        case 0x30dc3cu: goto label_30dc3c;
        case 0x30dc40u: goto label_30dc40;
        case 0x30dc44u: goto label_30dc44;
        case 0x30dc48u: goto label_30dc48;
        case 0x30dc4cu: goto label_30dc4c;
        case 0x30dc50u: goto label_30dc50;
        case 0x30dc54u: goto label_30dc54;
        case 0x30dc58u: goto label_30dc58;
        case 0x30dc5cu: goto label_30dc5c;
        case 0x30dc60u: goto label_30dc60;
        case 0x30dc64u: goto label_30dc64;
        case 0x30dc68u: goto label_30dc68;
        case 0x30dc6cu: goto label_30dc6c;
        case 0x30dc70u: goto label_30dc70;
        case 0x30dc74u: goto label_30dc74;
        case 0x30dc78u: goto label_30dc78;
        case 0x30dc7cu: goto label_30dc7c;
        case 0x30dc80u: goto label_30dc80;
        case 0x30dc84u: goto label_30dc84;
        case 0x30dc88u: goto label_30dc88;
        case 0x30dc8cu: goto label_30dc8c;
        case 0x30dc90u: goto label_30dc90;
        case 0x30dc94u: goto label_30dc94;
        case 0x30dc98u: goto label_30dc98;
        case 0x30dc9cu: goto label_30dc9c;
        case 0x30dca0u: goto label_30dca0;
        case 0x30dca4u: goto label_30dca4;
        case 0x30dca8u: goto label_30dca8;
        case 0x30dcacu: goto label_30dcac;
        case 0x30dcb0u: goto label_30dcb0;
        case 0x30dcb4u: goto label_30dcb4;
        case 0x30dcb8u: goto label_30dcb8;
        case 0x30dcbcu: goto label_30dcbc;
        case 0x30dcc0u: goto label_30dcc0;
        case 0x30dcc4u: goto label_30dcc4;
        case 0x30dcc8u: goto label_30dcc8;
        case 0x30dcccu: goto label_30dccc;
        case 0x30dcd0u: goto label_30dcd0;
        case 0x30dcd4u: goto label_30dcd4;
        case 0x30dcd8u: goto label_30dcd8;
        case 0x30dcdcu: goto label_30dcdc;
        case 0x30dce0u: goto label_30dce0;
        case 0x30dce4u: goto label_30dce4;
        case 0x30dce8u: goto label_30dce8;
        case 0x30dcecu: goto label_30dcec;
        case 0x30dcf0u: goto label_30dcf0;
        case 0x30dcf4u: goto label_30dcf4;
        case 0x30dcf8u: goto label_30dcf8;
        case 0x30dcfcu: goto label_30dcfc;
        case 0x30dd00u: goto label_30dd00;
        case 0x30dd04u: goto label_30dd04;
        case 0x30dd08u: goto label_30dd08;
        case 0x30dd0cu: goto label_30dd0c;
        case 0x30dd10u: goto label_30dd10;
        case 0x30dd14u: goto label_30dd14;
        case 0x30dd18u: goto label_30dd18;
        case 0x30dd1cu: goto label_30dd1c;
        case 0x30dd20u: goto label_30dd20;
        case 0x30dd24u: goto label_30dd24;
        case 0x30dd28u: goto label_30dd28;
        case 0x30dd2cu: goto label_30dd2c;
        case 0x30dd30u: goto label_30dd30;
        case 0x30dd34u: goto label_30dd34;
        case 0x30dd38u: goto label_30dd38;
        case 0x30dd3cu: goto label_30dd3c;
        case 0x30dd40u: goto label_30dd40;
        case 0x30dd44u: goto label_30dd44;
        case 0x30dd48u: goto label_30dd48;
        case 0x30dd4cu: goto label_30dd4c;
        case 0x30dd50u: goto label_30dd50;
        case 0x30dd54u: goto label_30dd54;
        case 0x30dd58u: goto label_30dd58;
        case 0x30dd5cu: goto label_30dd5c;
        case 0x30dd60u: goto label_30dd60;
        case 0x30dd64u: goto label_30dd64;
        case 0x30dd68u: goto label_30dd68;
        case 0x30dd6cu: goto label_30dd6c;
        case 0x30dd70u: goto label_30dd70;
        case 0x30dd74u: goto label_30dd74;
        case 0x30dd78u: goto label_30dd78;
        case 0x30dd7cu: goto label_30dd7c;
        case 0x30dd80u: goto label_30dd80;
        case 0x30dd84u: goto label_30dd84;
        case 0x30dd88u: goto label_30dd88;
        case 0x30dd8cu: goto label_30dd8c;
        case 0x30dd90u: goto label_30dd90;
        case 0x30dd94u: goto label_30dd94;
        case 0x30dd98u: goto label_30dd98;
        case 0x30dd9cu: goto label_30dd9c;
        case 0x30dda0u: goto label_30dda0;
        case 0x30dda4u: goto label_30dda4;
        case 0x30dda8u: goto label_30dda8;
        case 0x30ddacu: goto label_30ddac;
        case 0x30ddb0u: goto label_30ddb0;
        case 0x30ddb4u: goto label_30ddb4;
        case 0x30ddb8u: goto label_30ddb8;
        case 0x30ddbcu: goto label_30ddbc;
        case 0x30ddc0u: goto label_30ddc0;
        case 0x30ddc4u: goto label_30ddc4;
        case 0x30ddc8u: goto label_30ddc8;
        case 0x30ddccu: goto label_30ddcc;
        case 0x30ddd0u: goto label_30ddd0;
        case 0x30ddd4u: goto label_30ddd4;
        case 0x30ddd8u: goto label_30ddd8;
        case 0x30dddcu: goto label_30dddc;
        case 0x30dde0u: goto label_30dde0;
        case 0x30dde4u: goto label_30dde4;
        case 0x30dde8u: goto label_30dde8;
        case 0x30ddecu: goto label_30ddec;
        case 0x30ddf0u: goto label_30ddf0;
        case 0x30ddf4u: goto label_30ddf4;
        case 0x30ddf8u: goto label_30ddf8;
        case 0x30ddfcu: goto label_30ddfc;
        case 0x30de00u: goto label_30de00;
        case 0x30de04u: goto label_30de04;
        case 0x30de08u: goto label_30de08;
        case 0x30de0cu: goto label_30de0c;
        case 0x30de10u: goto label_30de10;
        case 0x30de14u: goto label_30de14;
        case 0x30de18u: goto label_30de18;
        case 0x30de1cu: goto label_30de1c;
        case 0x30de20u: goto label_30de20;
        case 0x30de24u: goto label_30de24;
        case 0x30de28u: goto label_30de28;
        case 0x30de2cu: goto label_30de2c;
        case 0x30de30u: goto label_30de30;
        case 0x30de34u: goto label_30de34;
        case 0x30de38u: goto label_30de38;
        case 0x30de3cu: goto label_30de3c;
        case 0x30de40u: goto label_30de40;
        case 0x30de44u: goto label_30de44;
        case 0x30de48u: goto label_30de48;
        case 0x30de4cu: goto label_30de4c;
        case 0x30de50u: goto label_30de50;
        case 0x30de54u: goto label_30de54;
        case 0x30de58u: goto label_30de58;
        case 0x30de5cu: goto label_30de5c;
        case 0x30de60u: goto label_30de60;
        case 0x30de64u: goto label_30de64;
        case 0x30de68u: goto label_30de68;
        case 0x30de6cu: goto label_30de6c;
        case 0x30de70u: goto label_30de70;
        case 0x30de74u: goto label_30de74;
        case 0x30de78u: goto label_30de78;
        case 0x30de7cu: goto label_30de7c;
        case 0x30de80u: goto label_30de80;
        case 0x30de84u: goto label_30de84;
        case 0x30de88u: goto label_30de88;
        case 0x30de8cu: goto label_30de8c;
        case 0x30de90u: goto label_30de90;
        case 0x30de94u: goto label_30de94;
        case 0x30de98u: goto label_30de98;
        case 0x30de9cu: goto label_30de9c;
        case 0x30dea0u: goto label_30dea0;
        case 0x30dea4u: goto label_30dea4;
        case 0x30dea8u: goto label_30dea8;
        case 0x30deacu: goto label_30deac;
        case 0x30deb0u: goto label_30deb0;
        case 0x30deb4u: goto label_30deb4;
        case 0x30deb8u: goto label_30deb8;
        case 0x30debcu: goto label_30debc;
        case 0x30dec0u: goto label_30dec0;
        case 0x30dec4u: goto label_30dec4;
        case 0x30dec8u: goto label_30dec8;
        case 0x30deccu: goto label_30decc;
        case 0x30ded0u: goto label_30ded0;
        case 0x30ded4u: goto label_30ded4;
        case 0x30ded8u: goto label_30ded8;
        case 0x30dedcu: goto label_30dedc;
        case 0x30dee0u: goto label_30dee0;
        case 0x30dee4u: goto label_30dee4;
        case 0x30dee8u: goto label_30dee8;
        case 0x30deecu: goto label_30deec;
        case 0x30def0u: goto label_30def0;
        case 0x30def4u: goto label_30def4;
        case 0x30def8u: goto label_30def8;
        case 0x30defcu: goto label_30defc;
        case 0x30df00u: goto label_30df00;
        case 0x30df04u: goto label_30df04;
        case 0x30df08u: goto label_30df08;
        case 0x30df0cu: goto label_30df0c;
        case 0x30df10u: goto label_30df10;
        case 0x30df14u: goto label_30df14;
        case 0x30df18u: goto label_30df18;
        case 0x30df1cu: goto label_30df1c;
        case 0x30df20u: goto label_30df20;
        case 0x30df24u: goto label_30df24;
        case 0x30df28u: goto label_30df28;
        case 0x30df2cu: goto label_30df2c;
        case 0x30df30u: goto label_30df30;
        case 0x30df34u: goto label_30df34;
        case 0x30df38u: goto label_30df38;
        case 0x30df3cu: goto label_30df3c;
        case 0x30df40u: goto label_30df40;
        case 0x30df44u: goto label_30df44;
        case 0x30df48u: goto label_30df48;
        case 0x30df4cu: goto label_30df4c;
        case 0x30df50u: goto label_30df50;
        case 0x30df54u: goto label_30df54;
        case 0x30df58u: goto label_30df58;
        case 0x30df5cu: goto label_30df5c;
        case 0x30df60u: goto label_30df60;
        case 0x30df64u: goto label_30df64;
        case 0x30df68u: goto label_30df68;
        case 0x30df6cu: goto label_30df6c;
        case 0x30df70u: goto label_30df70;
        case 0x30df74u: goto label_30df74;
        case 0x30df78u: goto label_30df78;
        case 0x30df7cu: goto label_30df7c;
        case 0x30df80u: goto label_30df80;
        case 0x30df84u: goto label_30df84;
        case 0x30df88u: goto label_30df88;
        case 0x30df8cu: goto label_30df8c;
        case 0x30df90u: goto label_30df90;
        case 0x30df94u: goto label_30df94;
        case 0x30df98u: goto label_30df98;
        case 0x30df9cu: goto label_30df9c;
        case 0x30dfa0u: goto label_30dfa0;
        case 0x30dfa4u: goto label_30dfa4;
        case 0x30dfa8u: goto label_30dfa8;
        case 0x30dfacu: goto label_30dfac;
        case 0x30dfb0u: goto label_30dfb0;
        case 0x30dfb4u: goto label_30dfb4;
        case 0x30dfb8u: goto label_30dfb8;
        case 0x30dfbcu: goto label_30dfbc;
        case 0x30dfc0u: goto label_30dfc0;
        case 0x30dfc4u: goto label_30dfc4;
        case 0x30dfc8u: goto label_30dfc8;
        case 0x30dfccu: goto label_30dfcc;
        case 0x30dfd0u: goto label_30dfd0;
        case 0x30dfd4u: goto label_30dfd4;
        case 0x30dfd8u: goto label_30dfd8;
        case 0x30dfdcu: goto label_30dfdc;
        case 0x30dfe0u: goto label_30dfe0;
        case 0x30dfe4u: goto label_30dfe4;
        case 0x30dfe8u: goto label_30dfe8;
        case 0x30dfecu: goto label_30dfec;
        case 0x30dff0u: goto label_30dff0;
        case 0x30dff4u: goto label_30dff4;
        case 0x30dff8u: goto label_30dff8;
        case 0x30dffcu: goto label_30dffc;
        case 0x30e000u: goto label_30e000;
        case 0x30e004u: goto label_30e004;
        case 0x30e008u: goto label_30e008;
        case 0x30e00cu: goto label_30e00c;
        case 0x30e010u: goto label_30e010;
        case 0x30e014u: goto label_30e014;
        case 0x30e018u: goto label_30e018;
        case 0x30e01cu: goto label_30e01c;
        case 0x30e020u: goto label_30e020;
        case 0x30e024u: goto label_30e024;
        case 0x30e028u: goto label_30e028;
        case 0x30e02cu: goto label_30e02c;
        case 0x30e030u: goto label_30e030;
        case 0x30e034u: goto label_30e034;
        case 0x30e038u: goto label_30e038;
        case 0x30e03cu: goto label_30e03c;
        case 0x30e040u: goto label_30e040;
        case 0x30e044u: goto label_30e044;
        case 0x30e048u: goto label_30e048;
        case 0x30e04cu: goto label_30e04c;
        case 0x30e050u: goto label_30e050;
        case 0x30e054u: goto label_30e054;
        case 0x30e058u: goto label_30e058;
        case 0x30e05cu: goto label_30e05c;
        case 0x30e060u: goto label_30e060;
        case 0x30e064u: goto label_30e064;
        case 0x30e068u: goto label_30e068;
        case 0x30e06cu: goto label_30e06c;
        case 0x30e070u: goto label_30e070;
        case 0x30e074u: goto label_30e074;
        case 0x30e078u: goto label_30e078;
        case 0x30e07cu: goto label_30e07c;
        case 0x30e080u: goto label_30e080;
        case 0x30e084u: goto label_30e084;
        case 0x30e088u: goto label_30e088;
        case 0x30e08cu: goto label_30e08c;
        case 0x30e090u: goto label_30e090;
        case 0x30e094u: goto label_30e094;
        case 0x30e098u: goto label_30e098;
        case 0x30e09cu: goto label_30e09c;
        case 0x30e0a0u: goto label_30e0a0;
        case 0x30e0a4u: goto label_30e0a4;
        case 0x30e0a8u: goto label_30e0a8;
        case 0x30e0acu: goto label_30e0ac;
        case 0x30e0b0u: goto label_30e0b0;
        case 0x30e0b4u: goto label_30e0b4;
        case 0x30e0b8u: goto label_30e0b8;
        case 0x30e0bcu: goto label_30e0bc;
        case 0x30e0c0u: goto label_30e0c0;
        case 0x30e0c4u: goto label_30e0c4;
        case 0x30e0c8u: goto label_30e0c8;
        case 0x30e0ccu: goto label_30e0cc;
        case 0x30e0d0u: goto label_30e0d0;
        case 0x30e0d4u: goto label_30e0d4;
        case 0x30e0d8u: goto label_30e0d8;
        case 0x30e0dcu: goto label_30e0dc;
        case 0x30e0e0u: goto label_30e0e0;
        case 0x30e0e4u: goto label_30e0e4;
        case 0x30e0e8u: goto label_30e0e8;
        case 0x30e0ecu: goto label_30e0ec;
        case 0x30e0f0u: goto label_30e0f0;
        case 0x30e0f4u: goto label_30e0f4;
        case 0x30e0f8u: goto label_30e0f8;
        case 0x30e0fcu: goto label_30e0fc;
        case 0x30e100u: goto label_30e100;
        case 0x30e104u: goto label_30e104;
        case 0x30e108u: goto label_30e108;
        case 0x30e10cu: goto label_30e10c;
        case 0x30e110u: goto label_30e110;
        case 0x30e114u: goto label_30e114;
        case 0x30e118u: goto label_30e118;
        case 0x30e11cu: goto label_30e11c;
        case 0x30e120u: goto label_30e120;
        case 0x30e124u: goto label_30e124;
        case 0x30e128u: goto label_30e128;
        case 0x30e12cu: goto label_30e12c;
        case 0x30e130u: goto label_30e130;
        case 0x30e134u: goto label_30e134;
        case 0x30e138u: goto label_30e138;
        case 0x30e13cu: goto label_30e13c;
        case 0x30e140u: goto label_30e140;
        case 0x30e144u: goto label_30e144;
        case 0x30e148u: goto label_30e148;
        case 0x30e14cu: goto label_30e14c;
        case 0x30e150u: goto label_30e150;
        case 0x30e154u: goto label_30e154;
        case 0x30e158u: goto label_30e158;
        case 0x30e15cu: goto label_30e15c;
        case 0x30e160u: goto label_30e160;
        case 0x30e164u: goto label_30e164;
        case 0x30e168u: goto label_30e168;
        case 0x30e16cu: goto label_30e16c;
        case 0x30e170u: goto label_30e170;
        case 0x30e174u: goto label_30e174;
        case 0x30e178u: goto label_30e178;
        case 0x30e17cu: goto label_30e17c;
        case 0x30e180u: goto label_30e180;
        case 0x30e184u: goto label_30e184;
        case 0x30e188u: goto label_30e188;
        case 0x30e18cu: goto label_30e18c;
        case 0x30e190u: goto label_30e190;
        case 0x30e194u: goto label_30e194;
        case 0x30e198u: goto label_30e198;
        case 0x30e19cu: goto label_30e19c;
        case 0x30e1a0u: goto label_30e1a0;
        case 0x30e1a4u: goto label_30e1a4;
        case 0x30e1a8u: goto label_30e1a8;
        case 0x30e1acu: goto label_30e1ac;
        case 0x30e1b0u: goto label_30e1b0;
        case 0x30e1b4u: goto label_30e1b4;
        case 0x30e1b8u: goto label_30e1b8;
        case 0x30e1bcu: goto label_30e1bc;
        case 0x30e1c0u: goto label_30e1c0;
        case 0x30e1c4u: goto label_30e1c4;
        case 0x30e1c8u: goto label_30e1c8;
        case 0x30e1ccu: goto label_30e1cc;
        case 0x30e1d0u: goto label_30e1d0;
        case 0x30e1d4u: goto label_30e1d4;
        case 0x30e1d8u: goto label_30e1d8;
        case 0x30e1dcu: goto label_30e1dc;
        case 0x30e1e0u: goto label_30e1e0;
        case 0x30e1e4u: goto label_30e1e4;
        case 0x30e1e8u: goto label_30e1e8;
        case 0x30e1ecu: goto label_30e1ec;
        case 0x30e1f0u: goto label_30e1f0;
        case 0x30e1f4u: goto label_30e1f4;
        case 0x30e1f8u: goto label_30e1f8;
        case 0x30e1fcu: goto label_30e1fc;
        case 0x30e200u: goto label_30e200;
        case 0x30e204u: goto label_30e204;
        case 0x30e208u: goto label_30e208;
        case 0x30e20cu: goto label_30e20c;
        case 0x30e210u: goto label_30e210;
        case 0x30e214u: goto label_30e214;
        case 0x30e218u: goto label_30e218;
        case 0x30e21cu: goto label_30e21c;
        default: break;
    }

    ctx->pc = 0x30d6d0u;

label_30d6d0:
    // 0x30d6d0: 0x27bdeee0  addiu       $sp, $sp, -0x1120
    ctx->pc = 0x30d6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294962912));
label_30d6d4:
    // 0x30d6d4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x30d6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_30d6d8:
    // 0x30d6d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x30d6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_30d6dc:
    // 0x30d6dc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30d6e0:
    // 0x30d6e0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x30d6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_30d6e4:
    // 0x30d6e4: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x30d6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_30d6e8:
    // 0x30d6e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x30d6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_30d6ec:
    // 0x30d6ec: 0x2442f2f0  addiu       $v0, $v0, -0xD10
    ctx->pc = 0x30d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
label_30d6f0:
    // 0x30d6f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x30d6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_30d6f4:
    // 0x30d6f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30d6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_30d6f8:
    // 0x30d6f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30d6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_30d6fc:
    // 0x30d6fc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x30d6fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30d700:
    // 0x30d700: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30d700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_30d704:
    // 0x30d704: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30d704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_30d708:
    // 0x30d708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30d708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30d70c:
    // 0x30d70c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30d70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30d710:
    // 0x30d710: 0x84840062  lh          $a0, 0x62($a0)
    ctx->pc = 0x30d710u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 98)));
label_30d714:
    // 0x30d714: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x30d714u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30d718:
    // 0x30d718: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30d718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_30d71c:
    // 0x30d71c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x30d71cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30d720:
    // 0x30d720: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x30d720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_30d724:
    // 0x30d724: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x30d724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_30d728:
    // 0x30d728: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30d72c:
    // 0x30d72c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30d730:
    // 0x30d730: 0xc0bd780  jal         func_2F5E00
label_30d734:
    if (ctx->pc == 0x30D734u) {
        ctx->pc = 0x30D734u;
            // 0x30d734: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x30D738u;
        goto label_30d738;
    }
    ctx->pc = 0x30D730u;
    SET_GPR_U32(ctx, 31, 0x30D738u);
    ctx->pc = 0x30D734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D730u;
            // 0x30d734: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D738u; }
        if (ctx->pc != 0x30D738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D738u; }
        if (ctx->pc != 0x30D738u) { return; }
    }
    ctx->pc = 0x30D738u;
label_30d738:
    // 0x30d738: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30d738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30d73c:
    // 0x30d73c: 0x8ea50094  lw          $a1, 0x94($s5)
    ctx->pc = 0x30d73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_30d740:
    // 0x30d740: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x30d740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30d744:
    // 0x30d744: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x30d744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_30d748:
    // 0x30d748: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x30d748u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_30d74c:
    // 0x30d74c: 0x24632e6c  addiu       $v1, $v1, 0x2E6C
    ctx->pc = 0x30d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11884));
label_30d750:
    // 0x30d750: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x30d750u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_30d754:
    // 0x30d754: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30d754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_30d758:
    // 0x30d758: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x30d758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_30d75c:
    // 0x30d75c: 0x8c760000  lw          $s6, 0x0($v1)
    ctx->pc = 0x30d75cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30d760:
    // 0x30d760: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x30d760u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_30d764:
    // 0x30d764: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x30d764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30d768:
    // 0x30d768: 0x14440171  bne         $v0, $a0, . + 4 + (0x171 << 2)
label_30d76c:
    if (ctx->pc == 0x30D76Cu) {
        ctx->pc = 0x30D76Cu;
            // 0x30d76c: 0x225b821  addu        $s7, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->pc = 0x30D770u;
        goto label_30d770;
    }
    ctx->pc = 0x30D768u;
    {
        const bool branch_taken_0x30d768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x30D76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D768u;
            // 0x30d76c: 0x225b821  addu        $s7, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d768) {
            ctx->pc = 0x30DD30u;
            goto label_30dd30;
        }
    }
    ctx->pc = 0x30D770u;
label_30d770:
    // 0x30d770: 0x86a30062  lh          $v1, 0x62($s5)
    ctx->pc = 0x30d770u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 98)));
label_30d774:
    // 0x30d774: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x30d774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_30d778:
    // 0x30d778: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x30d778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_30d77c:
    // 0x30d77c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30d780:
    // 0x30d780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30d784:
    // 0x30d784: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x30d784u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30d788:
    // 0x30d788: 0xc0772f0  jal         func_1DCBC0
label_30d78c:
    if (ctx->pc == 0x30D78Cu) {
        ctx->pc = 0x30D78Cu;
            // 0x30d78c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D790u;
        goto label_30d790;
    }
    ctx->pc = 0x30D788u;
    SET_GPR_U32(ctx, 31, 0x30D790u);
    ctx->pc = 0x30D78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D788u;
            // 0x30d78c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBC0u;
    if (runtime->hasFunction(0x1DCBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D790u; }
        if (ctx->pc != 0x30D790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBC0_0x1dcbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D790u; }
        if (ctx->pc != 0x30D790u) { return; }
    }
    ctx->pc = 0x30D790u;
label_30d790:
    // 0x30d790: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30d790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30d794:
    // 0x30d794: 0xc07725c  jal         func_1DC970
label_30d798:
    if (ctx->pc == 0x30D798u) {
        ctx->pc = 0x30D798u;
            // 0x30d798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D79Cu;
        goto label_30d79c;
    }
    ctx->pc = 0x30D794u;
    SET_GPR_U32(ctx, 31, 0x30D79Cu);
    ctx->pc = 0x30D798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D794u;
            // 0x30d798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC970u;
    if (runtime->hasFunction(0x1DC970u)) {
        auto targetFn = runtime->lookupFunction(0x1DC970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D79Cu; }
        if (ctx->pc != 0x30D79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC970_0x1dc970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D79Cu; }
        if (ctx->pc != 0x30D79Cu) { return; }
    }
    ctx->pc = 0x30D79Cu;
label_30d79c:
    // 0x30d79c: 0xc0c2180  jal         func_308600
label_30d7a0:
    if (ctx->pc == 0x30D7A0u) {
        ctx->pc = 0x30D7A0u;
            // 0x30d7a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D7A4u;
        goto label_30d7a4;
    }
    ctx->pc = 0x30D79Cu;
    SET_GPR_U32(ctx, 31, 0x30D7A4u);
    ctx->pc = 0x30D7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D79Cu;
            // 0x30d7a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x308600u;
    if (runtime->hasFunction(0x308600u)) {
        auto targetFn = runtime->lookupFunction(0x308600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D7A4u; }
        if (ctx->pc != 0x30D7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00308600_0x308600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D7A4u; }
        if (ctx->pc != 0x30D7A4u) { return; }
    }
    ctx->pc = 0x30D7A4u;
label_30d7a4:
    // 0x30d7a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30d7a8:
    // 0x30d7a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30d7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30d7ac:
    // 0x30d7ac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30d7b0:
    // 0x30d7b0: 0x2442f2f0  addiu       $v0, $v0, -0xD10
    ctx->pc = 0x30d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
label_30d7b4:
    // 0x30d7b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30d7b8:
    // 0x30d7b8: 0xc0bd780  jal         func_2F5E00
label_30d7bc:
    if (ctx->pc == 0x30D7BCu) {
        ctx->pc = 0x30D7BCu;
            // 0x30d7bc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x30D7C0u;
        goto label_30d7c0;
    }
    ctx->pc = 0x30D7B8u;
    SET_GPR_U32(ctx, 31, 0x30D7C0u);
    ctx->pc = 0x30D7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D7B8u;
            // 0x30d7bc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D7C0u; }
        if (ctx->pc != 0x30D7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D7C0u; }
        if (ctx->pc != 0x30D7C0u) { return; }
    }
    ctx->pc = 0x30D7C0u;
label_30d7c0:
    // 0x30d7c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30d7c4:
    // 0x30d7c4: 0x8ea40094  lw          $a0, 0x94($s5)
    ctx->pc = 0x30d7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_30d7c8:
    // 0x30d7c8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x30d7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30d7cc:
    // 0x30d7cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30d7ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30d7d0:
    // 0x30d7d0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x30d7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_30d7d4:
    // 0x30d7d4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x30d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_30d7d8:
    // 0x30d7d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x30d7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_30d7dc:
    // 0x30d7dc: 0x24632e6c  addiu       $v1, $v1, 0x2E6C
    ctx->pc = 0x30d7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11884));
label_30d7e0:
    // 0x30d7e0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x30d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30d7e4:
    // 0x30d7e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30d7e8:
    // 0x30d7e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30d7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30d7ec:
    // 0x30d7ec: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x30d7ecu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30d7f0:
    // 0x30d7f0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x30d7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_30d7f4:
    // 0x30d7f4: 0xc077290  jal         func_1DCA40
label_30d7f8:
    if (ctx->pc == 0x30D7F8u) {
        ctx->pc = 0x30D7F8u;
            // 0x30d7f8: 0x2039821  addu        $s3, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->pc = 0x30D7FCu;
        goto label_30d7fc;
    }
    ctx->pc = 0x30D7F4u;
    SET_GPR_U32(ctx, 31, 0x30D7FCu);
    ctx->pc = 0x30D7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D7F4u;
            // 0x30d7f8: 0x2039821  addu        $s3, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D7FCu; }
        if (ctx->pc != 0x30D7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D7FCu; }
        if (ctx->pc != 0x30D7FCu) { return; }
    }
    ctx->pc = 0x30D7FCu;
label_30d7fc:
    // 0x30d7fc: 0xc077224  jal         func_1DC890
label_30d800:
    if (ctx->pc == 0x30D800u) {
        ctx->pc = 0x30D800u;
            // 0x30d800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D804u;
        goto label_30d804;
    }
    ctx->pc = 0x30D7FCu;
    SET_GPR_U32(ctx, 31, 0x30D804u);
    ctx->pc = 0x30D800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D7FCu;
            // 0x30d800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC890u;
    if (runtime->hasFunction(0x1DC890u)) {
        auto targetFn = runtime->lookupFunction(0x1DC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D804u; }
        if (ctx->pc != 0x30D804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC890_0x1dc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D804u; }
        if (ctx->pc != 0x30D804u) { return; }
    }
    ctx->pc = 0x30D804u;
label_30d804:
    // 0x30d804: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x30d804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_30d808:
    // 0x30d808: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x30d808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_30d80c:
    // 0x30d80c: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
label_30d810:
    if (ctx->pc == 0x30D810u) {
        ctx->pc = 0x30D810u;
            // 0x30d810: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x30D814u;
        goto label_30d814;
    }
    ctx->pc = 0x30D80Cu;
    {
        const bool branch_taken_0x30d80c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30d80c) {
            ctx->pc = 0x30D810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D80Cu;
            // 0x30d810: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D850u;
            goto label_30d850;
        }
    }
    ctx->pc = 0x30D814u;
label_30d814:
    // 0x30d814: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30d814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_30d818:
    // 0x30d818: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_30d81c:
    if (ctx->pc == 0x30D81Cu) {
        ctx->pc = 0x30D81Cu;
            // 0x30d81c: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x30D820u;
        goto label_30d820;
    }
    ctx->pc = 0x30D818u;
    {
        const bool branch_taken_0x30d818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30d818) {
            ctx->pc = 0x30D81Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D818u;
            // 0x30d81c: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D850u;
            goto label_30d850;
        }
    }
    ctx->pc = 0x30D820u;
label_30d820:
    // 0x30d820: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x30d820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_30d824:
    // 0x30d824: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_30d828:
    if (ctx->pc == 0x30D828u) {
        ctx->pc = 0x30D828u;
            // 0x30d828: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30D82Cu;
        goto label_30d82c;
    }
    ctx->pc = 0x30D824u;
    {
        const bool branch_taken_0x30d824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30d824) {
            ctx->pc = 0x30D828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D824u;
            // 0x30d828: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D850u;
            goto label_30d850;
        }
    }
    ctx->pc = 0x30D82Cu;
label_30d82c:
    // 0x30d82c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x30d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_30d830:
    // 0x30d830: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_30d834:
    if (ctx->pc == 0x30D834u) {
        ctx->pc = 0x30D838u;
        goto label_30d838;
    }
    ctx->pc = 0x30D830u;
    {
        const bool branch_taken_0x30d830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30d830) {
            ctx->pc = 0x30D84Cu;
            goto label_30d84c;
        }
    }
    ctx->pc = 0x30D838u;
label_30d838:
    // 0x30d838: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x30d838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_30d83c:
    // 0x30d83c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_30d840:
    if (ctx->pc == 0x30D840u) {
        ctx->pc = 0x30D844u;
        goto label_30d844;
    }
    ctx->pc = 0x30D83Cu;
    {
        const bool branch_taken_0x30d83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30d83c) {
            ctx->pc = 0x30D84Cu;
            goto label_30d84c;
        }
    }
    ctx->pc = 0x30D844u;
label_30d844:
    // 0x30d844: 0x10000002  b           . + 4 + (0x2 << 2)
label_30d848:
    if (ctx->pc == 0x30D848u) {
        ctx->pc = 0x30D84Cu;
        goto label_30d84c;
    }
    ctx->pc = 0x30D844u;
    {
        const bool branch_taken_0x30d844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d844) {
            ctx->pc = 0x30D850u;
            goto label_30d850;
        }
    }
    ctx->pc = 0x30D84Cu;
label_30d84c:
    // 0x30d84c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x30d84cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d850:
    // 0x30d850: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30d850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30d854:
    // 0x30d854: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30d854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_30d858:
    // 0x30d858: 0xc440f4a0  lwc1        $f0, -0xB60($v0)
    ctx->pc = 0x30d858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30d85c:
    // 0x30d85c: 0xc462f4a4  lwc1        $f2, -0xB5C($v1)
    ctx->pc = 0x30d85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30d860:
    // 0x30d860: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30d860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30d864:
    // 0x30d864: 0xc441f4a8  lwc1        $f1, -0xB58($v0)
    ctx->pc = 0x30d864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30d868:
    // 0x30d868: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30d868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_30d86c:
    // 0x30d86c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x30d86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_30d870:
    // 0x30d870: 0xc460f4ac  lwc1        $f0, -0xB54($v1)
    ctx->pc = 0x30d870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30d874:
    // 0x30d874: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30d874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30d878:
    // 0x30d878: 0xc448f4b0  lwc1        $f8, -0xB50($v0)
    ctx->pc = 0x30d878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_30d87c:
    // 0x30d87c: 0xe7a20154  swc1        $f2, 0x154($sp)
    ctx->pc = 0x30d87cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_30d880:
    // 0x30d880: 0xe7a10158  swc1        $f1, 0x158($sp)
    ctx->pc = 0x30d880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_30d884:
    // 0x30d884: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30d884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30d888:
    // 0x30d888: 0xc447f4b4  lwc1        $f7, -0xB4C($v0)
    ctx->pc = 0x30d888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_30d88c:
    // 0x30d88c: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x30d88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_30d890:
    // 0x30d890: 0x8ea300cc  lw          $v1, 0xCC($s5)
    ctx->pc = 0x30d890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
label_30d894:
    // 0x30d894: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30d894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30d898:
    // 0x30d898: 0xc446f4b8  lwc1        $f6, -0xB48($v0)
    ctx->pc = 0x30d898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_30d89c:
    // 0x30d89c: 0xc4690020  lwc1        $f9, 0x20($v1)
    ctx->pc = 0x30d89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_30d8a0:
    // 0x30d8a0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30d8a4:
    // 0x30d8a4: 0xc445f4bc  lwc1        $f5, -0xB44($v0)
    ctx->pc = 0x30d8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_30d8a8:
    // 0x30d8a8: 0xe7a90150  swc1        $f9, 0x150($sp)
    ctx->pc = 0x30d8a8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_30d8ac:
    // 0x30d8ac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30d8b0:
    // 0x30d8b0: 0xc444f4c0  lwc1        $f4, -0xB40($v0)
    ctx->pc = 0x30d8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_30d8b4:
    // 0x30d8b4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30d8b8:
    // 0x30d8b8: 0xc443f4c4  lwc1        $f3, -0xB3C($v0)
    ctx->pc = 0x30d8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_30d8bc:
    // 0x30d8bc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30d8c0:
    // 0x30d8c0: 0xc442f4c8  lwc1        $f2, -0xB38($v0)
    ctx->pc = 0x30d8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30d8c4:
    // 0x30d8c4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30d8c8:
    // 0x30d8c8: 0xc441f4cc  lwc1        $f1, -0xB34($v0)
    ctx->pc = 0x30d8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30d8cc:
    // 0x30d8cc: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x30d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_30d8d0:
    // 0x30d8d0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30d8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_30d8d4:
    // 0x30d8d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30d8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30d8d8:
    // 0x30d8d8: 0x0  nop
    ctx->pc = 0x30d8d8u;
    // NOP
label_30d8dc:
    // 0x30d8dc: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x30d8dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_30d8e0:
    // 0x30d8e0: 0xc4690024  lwc1        $f9, 0x24($v1)
    ctx->pc = 0x30d8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_30d8e4:
    // 0x30d8e4: 0xe7a90154  swc1        $f9, 0x154($sp)
    ctx->pc = 0x30d8e4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_30d8e8:
    // 0x30d8e8: 0xc4690028  lwc1        $f9, 0x28($v1)
    ctx->pc = 0x30d8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_30d8ec:
    // 0x30d8ec: 0xe7a90158  swc1        $f9, 0x158($sp)
    ctx->pc = 0x30d8ecu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_30d8f0:
    // 0x30d8f0: 0xe7a80140  swc1        $f8, 0x140($sp)
    ctx->pc = 0x30d8f0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_30d8f4:
    // 0x30d8f4: 0xe7a70144  swc1        $f7, 0x144($sp)
    ctx->pc = 0x30d8f4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_30d8f8:
    // 0x30d8f8: 0xe7a60148  swc1        $f6, 0x148($sp)
    ctx->pc = 0x30d8f8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_30d8fc:
    // 0x30d8fc: 0xe7a5014c  swc1        $f5, 0x14C($sp)
    ctx->pc = 0x30d8fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_30d900:
    // 0x30d900: 0xc4650030  lwc1        $f5, 0x30($v1)
    ctx->pc = 0x30d900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_30d904:
    // 0x30d904: 0xe7a50140  swc1        $f5, 0x140($sp)
    ctx->pc = 0x30d904u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_30d908:
    // 0x30d908: 0xc4650034  lwc1        $f5, 0x34($v1)
    ctx->pc = 0x30d908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_30d90c:
    // 0x30d90c: 0xe7a50144  swc1        $f5, 0x144($sp)
    ctx->pc = 0x30d90cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_30d910:
    // 0x30d910: 0xc4650038  lwc1        $f5, 0x38($v1)
    ctx->pc = 0x30d910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_30d914:
    // 0x30d914: 0xe7a50148  swc1        $f5, 0x148($sp)
    ctx->pc = 0x30d914u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_30d918:
    // 0x30d918: 0xe7a40130  swc1        $f4, 0x130($sp)
    ctx->pc = 0x30d918u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_30d91c:
    // 0x30d91c: 0xe7a30134  swc1        $f3, 0x134($sp)
    ctx->pc = 0x30d91cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_30d920:
    // 0x30d920: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x30d920u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_30d924:
    // 0x30d924: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x30d924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_30d928:
    // 0x30d928: 0xc0576f4  jal         func_15DBD0
label_30d92c:
    if (ctx->pc == 0x30D92Cu) {
        ctx->pc = 0x30D92Cu;
            // 0x30d92c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x30D930u;
        goto label_30d930;
    }
    ctx->pc = 0x30D928u;
    SET_GPR_U32(ctx, 31, 0x30D930u);
    ctx->pc = 0x30D92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D928u;
            // 0x30d92c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D930u; }
        if (ctx->pc != 0x30D930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D930u; }
        if (ctx->pc != 0x30D930u) { return; }
    }
    ctx->pc = 0x30D930u;
label_30d930:
    // 0x30d930: 0xc0b36b4  jal         func_2CDAD0
label_30d934:
    if (ctx->pc == 0x30D934u) {
        ctx->pc = 0x30D934u;
            // 0x30d934: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D938u;
        goto label_30d938;
    }
    ctx->pc = 0x30D930u;
    SET_GPR_U32(ctx, 31, 0x30D938u);
    ctx->pc = 0x30D934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D930u;
            // 0x30d934: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D938u; }
        if (ctx->pc != 0x30D938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D938u; }
        if (ctx->pc != 0x30D938u) { return; }
    }
    ctx->pc = 0x30D938u;
label_30d938:
    // 0x30d938: 0xc0b9c64  jal         func_2E7190
label_30d93c:
    if (ctx->pc == 0x30D93Cu) {
        ctx->pc = 0x30D93Cu;
            // 0x30d93c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D940u;
        goto label_30d940;
    }
    ctx->pc = 0x30D938u;
    SET_GPR_U32(ctx, 31, 0x30D940u);
    ctx->pc = 0x30D93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D938u;
            // 0x30d93c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D940u; }
        if (ctx->pc != 0x30D940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D940u; }
        if (ctx->pc != 0x30D940u) { return; }
    }
    ctx->pc = 0x30D940u;
label_30d940:
    // 0x30d940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30d940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30d944:
    // 0x30d944: 0xc076984  jal         func_1DA610
label_30d948:
    if (ctx->pc == 0x30D948u) {
        ctx->pc = 0x30D948u;
            // 0x30d948: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D94Cu;
        goto label_30d94c;
    }
    ctx->pc = 0x30D944u;
    SET_GPR_U32(ctx, 31, 0x30D94Cu);
    ctx->pc = 0x30D948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D944u;
            // 0x30d948: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D94Cu; }
        if (ctx->pc != 0x30D94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D94Cu; }
        if (ctx->pc != 0x30D94Cu) { return; }
    }
    ctx->pc = 0x30D94Cu;
label_30d94c:
    // 0x30d94c: 0xc07697c  jal         func_1DA5F0
label_30d950:
    if (ctx->pc == 0x30D950u) {
        ctx->pc = 0x30D950u;
            // 0x30d950: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D954u;
        goto label_30d954;
    }
    ctx->pc = 0x30D94Cu;
    SET_GPR_U32(ctx, 31, 0x30D954u);
    ctx->pc = 0x30D950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D94Cu;
            // 0x30d950: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D954u; }
        if (ctx->pc != 0x30D954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D954u; }
        if (ctx->pc != 0x30D954u) { return; }
    }
    ctx->pc = 0x30D954u;
label_30d954:
    // 0x30d954: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x30d954u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30d958:
    // 0x30d958: 0xc07725c  jal         func_1DC970
label_30d95c:
    if (ctx->pc == 0x30D95Cu) {
        ctx->pc = 0x30D95Cu;
            // 0x30d95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D960u;
        goto label_30d960;
    }
    ctx->pc = 0x30D958u;
    SET_GPR_U32(ctx, 31, 0x30D960u);
    ctx->pc = 0x30D95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D958u;
            // 0x30d95c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC970u;
    if (runtime->hasFunction(0x1DC970u)) {
        auto targetFn = runtime->lookupFunction(0x1DC970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D960u; }
        if (ctx->pc != 0x30D960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC970_0x1dc970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D960u; }
        if (ctx->pc != 0x30D960u) { return; }
    }
    ctx->pc = 0x30D960u;
label_30d960:
    // 0x30d960: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30d960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30d964:
    // 0x30d964: 0xc0772e8  jal         func_1DCBA0
label_30d968:
    if (ctx->pc == 0x30D968u) {
        ctx->pc = 0x30D968u;
            // 0x30d968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D96Cu;
        goto label_30d96c;
    }
    ctx->pc = 0x30D964u;
    SET_GPR_U32(ctx, 31, 0x30D96Cu);
    ctx->pc = 0x30D968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D964u;
            // 0x30d968: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D96Cu; }
        if (ctx->pc != 0x30D96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D96Cu; }
        if (ctx->pc != 0x30D96Cu) { return; }
    }
    ctx->pc = 0x30D96Cu;
label_30d96c:
    // 0x30d96c: 0xc0c388c  jal         func_30E230
label_30d970:
    if (ctx->pc == 0x30D970u) {
        ctx->pc = 0x30D970u;
            // 0x30d970: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D974u;
        goto label_30d974;
    }
    ctx->pc = 0x30D96Cu;
    SET_GPR_U32(ctx, 31, 0x30D974u);
    ctx->pc = 0x30D970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D96Cu;
            // 0x30d970: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E230u;
    if (runtime->hasFunction(0x30E230u)) {
        auto targetFn = runtime->lookupFunction(0x30E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D974u; }
        if (ctx->pc != 0x30D974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030E230_0x30e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D974u; }
        if (ctx->pc != 0x30D974u) { return; }
    }
    ctx->pc = 0x30D974u;
label_30d974:
    // 0x30d974: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30d974u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30d978:
    // 0x30d978: 0xc077290  jal         func_1DCA40
label_30d97c:
    if (ctx->pc == 0x30D97Cu) {
        ctx->pc = 0x30D97Cu;
            // 0x30d97c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D980u;
        goto label_30d980;
    }
    ctx->pc = 0x30D978u;
    SET_GPR_U32(ctx, 31, 0x30D980u);
    ctx->pc = 0x30D97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D978u;
            // 0x30d97c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D980u; }
        if (ctx->pc != 0x30D980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D980u; }
        if (ctx->pc != 0x30D980u) { return; }
    }
    ctx->pc = 0x30D980u;
label_30d980:
    // 0x30d980: 0xc0c3888  jal         func_30E220
label_30d984:
    if (ctx->pc == 0x30D984u) {
        ctx->pc = 0x30D984u;
            // 0x30d984: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D988u;
        goto label_30d988;
    }
    ctx->pc = 0x30D980u;
    SET_GPR_U32(ctx, 31, 0x30D988u);
    ctx->pc = 0x30D984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D980u;
            // 0x30d984: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E220u;
    if (runtime->hasFunction(0x30E220u)) {
        auto targetFn = runtime->lookupFunction(0x30E220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D988u; }
        if (ctx->pc != 0x30D988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030E220_0x30e220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D988u; }
        if (ctx->pc != 0x30D988u) { return; }
    }
    ctx->pc = 0x30D988u;
label_30d988:
    // 0x30d988: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30d988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30d98c:
    // 0x30d98c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30d98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30d990:
    // 0x30d990: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30d990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30d994:
    // 0x30d994: 0x8c670034  lw          $a3, 0x34($v1)
    ctx->pc = 0x30d994u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_30d998:
    // 0x30d998: 0x8c44e370  lw          $a0, -0x1C90($v0)
    ctx->pc = 0x30d998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_30d99c:
    // 0x30d99c: 0xc04e4cc  jal         func_139330
label_30d9a0:
    if (ctx->pc == 0x30D9A0u) {
        ctx->pc = 0x30D9A0u;
            // 0x30d9a0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D9A4u;
        goto label_30d9a4;
    }
    ctx->pc = 0x30D99Cu;
    SET_GPR_U32(ctx, 31, 0x30D9A4u);
    ctx->pc = 0x30D9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D99Cu;
            // 0x30d9a0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139330u;
    if (runtime->hasFunction(0x139330u)) {
        auto targetFn = runtime->lookupFunction(0x139330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9A4u; }
        if (ctx->pc != 0x30D9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139330_0x139330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9A4u; }
        if (ctx->pc != 0x30D9A4u) { return; }
    }
    ctx->pc = 0x30D9A4u;
label_30d9a4:
    // 0x30d9a4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x30d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_30d9a8:
    // 0x30d9a8: 0x8c50bac0  lw          $s0, -0x4540($v0)
    ctx->pc = 0x30d9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949568)));
label_30d9ac:
    // 0x30d9ac: 0xc077290  jal         func_1DCA40
label_30d9b0:
    if (ctx->pc == 0x30D9B0u) {
        ctx->pc = 0x30D9B0u;
            // 0x30d9b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D9B4u;
        goto label_30d9b4;
    }
    ctx->pc = 0x30D9ACu;
    SET_GPR_U32(ctx, 31, 0x30D9B4u);
    ctx->pc = 0x30D9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D9ACu;
            // 0x30d9b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9B4u; }
        if (ctx->pc != 0x30D9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9B4u; }
        if (ctx->pc != 0x30D9B4u) { return; }
    }
    ctx->pc = 0x30D9B4u;
label_30d9b4:
    // 0x30d9b4: 0x8c590054  lw          $t9, 0x54($v0)
    ctx->pc = 0x30d9b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30d9b8:
    // 0x30d9b8: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x30d9b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
label_30d9bc:
    // 0x30d9bc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x30d9bcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_30d9c0:
    // 0x30d9c0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x30d9c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_30d9c4:
    // 0x30d9c4: 0x320f809  jalr        $t9
label_30d9c8:
    if (ctx->pc == 0x30D9C8u) {
        ctx->pc = 0x30D9C8u;
            // 0x30d9c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D9CCu;
        goto label_30d9cc;
    }
    ctx->pc = 0x30D9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30D9CCu);
        ctx->pc = 0x30D9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D9C4u;
            // 0x30d9c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30D9CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30D9CCu; }
            if (ctx->pc != 0x30D9CCu) { return; }
        }
        }
    }
    ctx->pc = 0x30D9CCu;
label_30d9cc:
    // 0x30d9cc: 0x2a63c  dsll32      $s4, $v0, 24
    ctx->pc = 0x30d9ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 24));
label_30d9d0:
    // 0x30d9d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30d9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30d9d4:
    // 0x30d9d4: 0xc077290  jal         func_1DCA40
label_30d9d8:
    if (ctx->pc == 0x30D9D8u) {
        ctx->pc = 0x30D9D8u;
            // 0x30d9d8: 0x14a63f  dsra32      $s4, $s4, 24 (Delay Slot)
        SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 24));
        ctx->pc = 0x30D9DCu;
        goto label_30d9dc;
    }
    ctx->pc = 0x30D9D4u;
    SET_GPR_U32(ctx, 31, 0x30D9DCu);
    ctx->pc = 0x30D9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D9D4u;
            // 0x30d9d8: 0x14a63f  dsra32      $s4, $s4, 24 (Delay Slot)
        SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9DCu; }
        if (ctx->pc != 0x30D9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9DCu; }
        if (ctx->pc != 0x30D9DCu) { return; }
    }
    ctx->pc = 0x30D9DCu;
label_30d9dc:
    // 0x30d9dc: 0x8c590054  lw          $t9, 0x54($v0)
    ctx->pc = 0x30d9dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30d9e0:
    // 0x30d9e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30d9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30d9e4:
    // 0x30d9e4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x30d9e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_30d9e8:
    // 0x30d9e8: 0x320f809  jalr        $t9
label_30d9ec:
    if (ctx->pc == 0x30D9ECu) {
        ctx->pc = 0x30D9ECu;
            // 0x30d9ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D9F0u;
        goto label_30d9f0;
    }
    ctx->pc = 0x30D9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30D9F0u);
        ctx->pc = 0x30D9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D9E8u;
            // 0x30d9ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30D9F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30D9F0u; }
            if (ctx->pc != 0x30D9F0u) { return; }
        }
        }
    }
    ctx->pc = 0x30D9F0u;
label_30d9f0:
    // 0x30d9f0: 0x2f63c  dsll32      $fp, $v0, 24
    ctx->pc = 0x30d9f0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 24));
label_30d9f4:
    // 0x30d9f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30d9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30d9f8:
    // 0x30d9f8: 0xc077290  jal         func_1DCA40
label_30d9fc:
    if (ctx->pc == 0x30D9FCu) {
        ctx->pc = 0x30D9FCu;
            // 0x30d9fc: 0x1ef63f  dsra32      $fp, $fp, 24 (Delay Slot)
        SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 24));
        ctx->pc = 0x30DA00u;
        goto label_30da00;
    }
    ctx->pc = 0x30D9F8u;
    SET_GPR_U32(ctx, 31, 0x30DA00u);
    ctx->pc = 0x30D9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D9F8u;
            // 0x30d9fc: 0x1ef63f  dsra32      $fp, $fp, 24 (Delay Slot)
        SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA00u; }
        if (ctx->pc != 0x30DA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA00u; }
        if (ctx->pc != 0x30DA00u) { return; }
    }
    ctx->pc = 0x30DA00u;
label_30da00:
    // 0x30da00: 0x8c590054  lw          $t9, 0x54($v0)
    ctx->pc = 0x30da00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30da04:
    // 0x30da04: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x30da04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_30da08:
    // 0x30da08: 0x8c65bac4  lw          $a1, -0x453C($v1)
    ctx->pc = 0x30da08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949572)));
label_30da0c:
    // 0x30da0c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x30da0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_30da10:
    // 0x30da10: 0x320f809  jalr        $t9
label_30da14:
    if (ctx->pc == 0x30DA14u) {
        ctx->pc = 0x30DA14u;
            // 0x30da14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30DA18u;
        goto label_30da18;
    }
    ctx->pc = 0x30DA10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30DA18u);
        ctx->pc = 0x30DA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DA10u;
            // 0x30da14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30DA18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30DA18u; }
            if (ctx->pc != 0x30DA18u) { return; }
        }
        }
    }
    ctx->pc = 0x30DA18u;
label_30da18:
    // 0x30da18: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x30da18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_30da1c:
    // 0x30da1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30da1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30da20:
    // 0x30da20: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x30da20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_30da24:
    // 0x30da24: 0xc077290  jal         func_1DCA40
label_30da28:
    if (ctx->pc == 0x30DA28u) {
        ctx->pc = 0x30DA28u;
            // 0x30da28: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->pc = 0x30DA2Cu;
        goto label_30da2c;
    }
    ctx->pc = 0x30DA24u;
    SET_GPR_U32(ctx, 31, 0x30DA2Cu);
    ctx->pc = 0x30DA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DA24u;
            // 0x30da28: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA2Cu; }
        if (ctx->pc != 0x30DA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA2Cu; }
        if (ctx->pc != 0x30DA2Cu) { return; }
    }
    ctx->pc = 0x30DA2Cu;
label_30da2c:
    // 0x30da2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x30da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30da30:
    // 0x30da30: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x30da30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30da34:
    // 0x30da34: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x30da34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_30da38:
    // 0x30da38: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x30da38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_30da3c:
    // 0x30da3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30da40:
    // 0x30da40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30da40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_30da44:
    // 0x30da44: 0x8ca50030  lw          $a1, 0x30($a1)
    ctx->pc = 0x30da44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_30da48:
    // 0x30da48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30da48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30da4c:
    // 0x30da4c: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x30da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_30da50:
    // 0x30da50: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30da50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_30da54:
    // 0x30da54: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x30da54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_30da58:
    // 0x30da58: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x30da58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_30da5c:
    // 0x30da5c: 0xc077290  jal         func_1DCA40
label_30da60:
    if (ctx->pc == 0x30DA60u) {
        ctx->pc = 0x30DA60u;
            // 0x30da60: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x30DA64u;
        goto label_30da64;
    }
    ctx->pc = 0x30DA5Cu;
    SET_GPR_U32(ctx, 31, 0x30DA64u);
    ctx->pc = 0x30DA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DA5Cu;
            // 0x30da60: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA64u; }
        if (ctx->pc != 0x30DA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA64u; }
        if (ctx->pc != 0x30DA64u) { return; }
    }
    ctx->pc = 0x30DA64u;
label_30da64:
    // 0x30da64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30da64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30da68:
    // 0x30da68: 0x1e18c0  sll         $v1, $fp, 3
    ctx->pc = 0x30da68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
label_30da6c:
    // 0x30da6c: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x30da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_30da70:
    // 0x30da70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30da70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30da74:
    // 0x30da74: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30da74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_30da78:
    // 0x30da78: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x30da78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30da7c:
    // 0x30da7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30da80:
    // 0x30da80: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x30da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_30da84:
    // 0x30da84: 0x8ca50030  lw          $a1, 0x30($a1)
    ctx->pc = 0x30da84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_30da88:
    // 0x30da88: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30da88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_30da8c:
    // 0x30da8c: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x30da8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_30da90:
    // 0x30da90: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x30da90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_30da94:
    // 0x30da94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30da94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30da98:
    // 0x30da98: 0xc077290  jal         func_1DCA40
label_30da9c:
    if (ctx->pc == 0x30DA9Cu) {
        ctx->pc = 0x30DA9Cu;
            // 0x30da9c: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x30DAA0u;
        goto label_30daa0;
    }
    ctx->pc = 0x30DA98u;
    SET_GPR_U32(ctx, 31, 0x30DAA0u);
    ctx->pc = 0x30DA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DA98u;
            // 0x30da9c: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DAA0u; }
        if (ctx->pc != 0x30DAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DAA0u; }
        if (ctx->pc != 0x30DAA0u) { return; }
    }
    ctx->pc = 0x30DAA0u;
label_30daa0:
    // 0x30daa0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x30daa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30daa4:
    // 0x30daa4: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x30daa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_30daa8:
    // 0x30daa8: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x30daa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_30daac:
    // 0x30daac: 0x24c6bbf0  addiu       $a2, $a2, -0x4410
    ctx->pc = 0x30daacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949872));
label_30dab0:
    // 0x30dab0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x30dab0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30dab4:
    // 0x30dab4: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x30dab4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_30dab8:
    // 0x30dab8: 0x8ce70030  lw          $a3, 0x30($a3)
    ctx->pc = 0x30dab8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_30dabc:
    // 0x30dabc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x30dabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_30dac0:
    // 0x30dac0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x30dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_30dac4:
    // 0x30dac4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30dac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30dac8:
    // 0x30dac8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_30dacc:
    // 0x30dacc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30daccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30dad0:
    // 0x30dad0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x30dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_30dad4:
    // 0x30dad4: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x30dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_30dad8:
    // 0x30dad8: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x30dad8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_30dadc:
    // 0x30dadc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x30dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_30dae0:
    // 0x30dae0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30dae4:
    // 0x30dae4: 0xc04cca0  jal         func_133280
label_30dae8:
    if (ctx->pc == 0x30DAE8u) {
        ctx->pc = 0x30DAE8u;
            // 0x30dae8: 0xafa20114  sw          $v0, 0x114($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
        ctx->pc = 0x30DAECu;
        goto label_30daec;
    }
    ctx->pc = 0x30DAE4u;
    SET_GPR_U32(ctx, 31, 0x30DAECu);
    ctx->pc = 0x30DAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DAE4u;
            // 0x30dae8: 0xafa20114  sw          $v0, 0x114($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DAECu; }
        if (ctx->pc != 0x30DAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DAECu; }
        if (ctx->pc != 0x30DAECu) { return; }
    }
    ctx->pc = 0x30DAECu;
label_30daec:
    // 0x30daec: 0x8fa50114  lw          $a1, 0x114($sp)
    ctx->pc = 0x30daecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_30daf0:
    // 0x30daf0: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x30daf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_30daf4:
    // 0x30daf4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x30daf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_30daf8:
    // 0x30daf8: 0xc04cca0  jal         func_133280
label_30dafc:
    if (ctx->pc == 0x30DAFCu) {
        ctx->pc = 0x30DAFCu;
            // 0x30dafc: 0x24c6bbf0  addiu       $a2, $a2, -0x4410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949872));
        ctx->pc = 0x30DB00u;
        goto label_30db00;
    }
    ctx->pc = 0x30DAF8u;
    SET_GPR_U32(ctx, 31, 0x30DB00u);
    ctx->pc = 0x30DAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DAF8u;
            // 0x30dafc: 0x24c6bbf0  addiu       $a2, $a2, -0x4410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB00u; }
        if (ctx->pc != 0x30DB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB00u; }
        if (ctx->pc != 0x30DB00u) { return; }
    }
    ctx->pc = 0x30DB00u;
label_30db00:
    // 0x30db00: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x30db00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_30db04:
    // 0x30db04: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x30db04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_30db08:
    // 0x30db08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30db08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30db0c:
    // 0x30db0c: 0xc04cca0  jal         func_133280
label_30db10:
    if (ctx->pc == 0x30DB10u) {
        ctx->pc = 0x30DB10u;
            // 0x30db10: 0x24c6bbf0  addiu       $a2, $a2, -0x4410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949872));
        ctx->pc = 0x30DB14u;
        goto label_30db14;
    }
    ctx->pc = 0x30DB0Cu;
    SET_GPR_U32(ctx, 31, 0x30DB14u);
    ctx->pc = 0x30DB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DB0Cu;
            // 0x30db10: 0x24c6bbf0  addiu       $a2, $a2, -0x4410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB14u; }
        if (ctx->pc != 0x30DB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB14u; }
        if (ctx->pc != 0x30DB14u) { return; }
    }
    ctx->pc = 0x30DB14u;
label_30db14:
    // 0x30db14: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x30db14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_30db18:
    // 0x30db18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30db18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30db1c:
    // 0x30db1c: 0xc04ccc4  jal         func_133310
label_30db20:
    if (ctx->pc == 0x30DB20u) {
        ctx->pc = 0x30DB20u;
            // 0x30db20: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30DB24u;
        goto label_30db24;
    }
    ctx->pc = 0x30DB1Cu;
    SET_GPR_U32(ctx, 31, 0x30DB24u);
    ctx->pc = 0x30DB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DB1Cu;
            // 0x30db20: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB24u; }
        if (ctx->pc != 0x30DB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB24u; }
        if (ctx->pc != 0x30DB24u) { return; }
    }
    ctx->pc = 0x30DB24u;
label_30db24:
    // 0x30db24: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x30db24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_30db28:
    // 0x30db28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30db28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30db2c:
    // 0x30db2c: 0xc04ccc4  jal         func_133310
label_30db30:
    if (ctx->pc == 0x30DB30u) {
        ctx->pc = 0x30DB30u;
            // 0x30db30: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30DB34u;
        goto label_30db34;
    }
    ctx->pc = 0x30DB2Cu;
    SET_GPR_U32(ctx, 31, 0x30DB34u);
    ctx->pc = 0x30DB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DB2Cu;
            // 0x30db30: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB34u; }
        if (ctx->pc != 0x30DB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB34u; }
        if (ctx->pc != 0x30DB34u) { return; }
    }
    ctx->pc = 0x30DB34u;
label_30db34:
    // 0x30db34: 0xc0c3890  jal         func_30E240
label_30db38:
    if (ctx->pc == 0x30DB38u) {
        ctx->pc = 0x30DB38u;
            // 0x30db38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30DB3Cu;
        goto label_30db3c;
    }
    ctx->pc = 0x30DB34u;
    SET_GPR_U32(ctx, 31, 0x30DB3Cu);
    ctx->pc = 0x30DB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DB34u;
            // 0x30db38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E240u;
    if (runtime->hasFunction(0x30E240u)) {
        auto targetFn = runtime->lookupFunction(0x30E240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB3Cu; }
        if (ctx->pc != 0x30DB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030E240_0x30e240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB3Cu; }
        if (ctx->pc != 0x30DB3Cu) { return; }
    }
    ctx->pc = 0x30DB3Cu;
label_30db3c:
    // 0x30db3c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x30db3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_30db40:
    // 0x30db40: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x30db40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_30db44:
    // 0x30db44: 0x5060002e  beql        $v1, $zero, . + 4 + (0x2E << 2)
label_30db48:
    if (ctx->pc == 0x30DB48u) {
        ctx->pc = 0x30DB48u;
            // 0x30db48: 0x86a30066  lh          $v1, 0x66($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
        ctx->pc = 0x30DB4Cu;
        goto label_30db4c;
    }
    ctx->pc = 0x30DB44u;
    {
        const bool branch_taken_0x30db44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30db44) {
            ctx->pc = 0x30DB48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30DB44u;
            // 0x30db48: 0x86a30066  lh          $v1, 0x66($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30DC00u;
            goto label_30dc00;
        }
    }
    ctx->pc = 0x30DB4Cu;
label_30db4c:
    // 0x30db4c: 0x8ea200cc  lw          $v0, 0xCC($s5)
    ctx->pc = 0x30db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
label_30db50:
    // 0x30db50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30db50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30db54:
    // 0x30db54: 0x84510006  lh          $s1, 0x6($v0)
    ctx->pc = 0x30db54u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_30db58:
    // 0x30db58: 0xc0772c8  jal         func_1DCB20
label_30db5c:
    if (ctx->pc == 0x30DB5Cu) {
        ctx->pc = 0x30DB5Cu;
            // 0x30db5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x30DB60u;
        goto label_30db60;
    }
    ctx->pc = 0x30DB58u;
    SET_GPR_U32(ctx, 31, 0x30DB60u);
    ctx->pc = 0x30DB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DB58u;
            // 0x30db5c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB20u;
    if (runtime->hasFunction(0x1DCB20u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB60u; }
        if (ctx->pc != 0x30DB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB20_0x1dcb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB60u; }
        if (ctx->pc != 0x30DB60u) { return; }
    }
    ctx->pc = 0x30DB60u;
label_30db60:
    // 0x30db60: 0xc0c3890  jal         func_30E240
label_30db64:
    if (ctx->pc == 0x30DB64u) {
        ctx->pc = 0x30DB64u;
            // 0x30db64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30DB68u;
        goto label_30db68;
    }
    ctx->pc = 0x30DB60u;
    SET_GPR_U32(ctx, 31, 0x30DB68u);
    ctx->pc = 0x30DB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DB60u;
            // 0x30db64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E240u;
    if (runtime->hasFunction(0x30E240u)) {
        auto targetFn = runtime->lookupFunction(0x30E240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB68u; }
        if (ctx->pc != 0x30DB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030E240_0x30e240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB68u; }
        if (ctx->pc != 0x30DB68u) { return; }
    }
    ctx->pc = 0x30DB68u;
label_30db68:
    // 0x30db68: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x30db68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_30db6c:
    // 0x30db6c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x30db6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_30db70:
    // 0x30db70: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_30db74:
    if (ctx->pc == 0x30DB74u) {
        ctx->pc = 0x30DB78u;
        goto label_30db78;
    }
    ctx->pc = 0x30DB70u;
    {
        const bool branch_taken_0x30db70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30db70) {
            ctx->pc = 0x30DBD4u;
            goto label_30dbd4;
        }
    }
    ctx->pc = 0x30DB78u;
label_30db78:
    // 0x30db78: 0x8ea200d0  lw          $v0, 0xD0($s5)
    ctx->pc = 0x30db78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
label_30db7c:
    // 0x30db7c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x30db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_30db80:
    // 0x30db80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30db80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30db84:
    // 0x30db84: 0x84510000  lh          $s1, 0x0($v0)
    ctx->pc = 0x30db84u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_30db88:
    // 0x30db88: 0xc04ccc4  jal         func_133310
label_30db8c:
    if (ctx->pc == 0x30DB8Cu) {
        ctx->pc = 0x30DB8Cu;
            // 0x30db8c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30DB90u;
        goto label_30db90;
    }
    ctx->pc = 0x30DB88u;
    SET_GPR_U32(ctx, 31, 0x30DB90u);
    ctx->pc = 0x30DB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DB88u;
            // 0x30db8c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB90u; }
        if (ctx->pc != 0x30DB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB90u; }
        if (ctx->pc != 0x30DB90u) { return; }
    }
    ctx->pc = 0x30DB90u;
label_30db90:
    // 0x30db90: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x30db90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_30db94:
    // 0x30db94: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x30db94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_30db98:
    // 0x30db98: 0xc04cbe0  jal         func_132F80
label_30db9c:
    if (ctx->pc == 0x30DB9Cu) {
        ctx->pc = 0x30DB9Cu;
            // 0x30db9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30DBA0u;
        goto label_30dba0;
    }
    ctx->pc = 0x30DB98u;
    SET_GPR_U32(ctx, 31, 0x30DBA0u);
    ctx->pc = 0x30DB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DB98u;
            // 0x30db9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DBA0u; }
        if (ctx->pc != 0x30DBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DBA0u; }
        if (ctx->pc != 0x30DBA0u) { return; }
    }
    ctx->pc = 0x30DBA0u;
label_30dba0:
    // 0x30dba0: 0x8ea200d0  lw          $v0, 0xD0($s5)
    ctx->pc = 0x30dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
label_30dba4:
    // 0x30dba4: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x30dba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30dba8:
    // 0x30dba8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30dba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30dbac:
    // 0x30dbac: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x30dbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_30dbb0:
    // 0x30dbb0: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x30dbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_30dbb4:
    // 0x30dbb4: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x30dbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_30dbb8:
    // 0x30dbb8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x30dbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30dbbc:
    // 0x30dbbc: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x30dbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_30dbc0:
    // 0x30dbc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30dbc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30dbc4:
    // 0x30dbc4: 0xc0c3da0  jal         func_30F680
label_30dbc8:
    if (ctx->pc == 0x30DBC8u) {
        ctx->pc = 0x30DBC8u;
            // 0x30dbc8: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x30DBCCu;
        goto label_30dbcc;
    }
    ctx->pc = 0x30DBC4u;
    SET_GPR_U32(ctx, 31, 0x30DBCCu);
    ctx->pc = 0x30DBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DBC4u;
            // 0x30dbc8: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F680u;
    if (runtime->hasFunction(0x30F680u)) {
        auto targetFn = runtime->lookupFunction(0x30F680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DBCCu; }
        if (ctx->pc != 0x30DBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030F680_0x30f680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DBCCu; }
        if (ctx->pc != 0x30DBCCu) { return; }
    }
    ctx->pc = 0x30DBCCu;
label_30dbcc:
    // 0x30dbcc: 0x10000009  b           . + 4 + (0x9 << 2)
label_30dbd0:
    if (ctx->pc == 0x30DBD0u) {
        ctx->pc = 0x30DBD0u;
            // 0x30dbd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30DBD4u;
        goto label_30dbd4;
    }
    ctx->pc = 0x30DBCCu;
    {
        const bool branch_taken_0x30dbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DBCCu;
            // 0x30dbd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dbcc) {
            ctx->pc = 0x30DBF4u;
            goto label_30dbf4;
        }
    }
    ctx->pc = 0x30DBD4u;
label_30dbd4:
    // 0x30dbd4: 0x3c080065  lui         $t0, 0x65
    ctx->pc = 0x30dbd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)101 << 16));
label_30dbd8:
    // 0x30dbd8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30dbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30dbdc:
    // 0x30dbdc: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x30dbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_30dbe0:
    // 0x30dbe0: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x30dbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_30dbe4:
    // 0x30dbe4: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x30dbe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_30dbe8:
    // 0x30dbe8: 0xc0c3c68  jal         func_30F1A0
label_30dbec:
    if (ctx->pc == 0x30DBECu) {
        ctx->pc = 0x30DBECu;
            // 0x30dbec: 0x2508bbf0  addiu       $t0, $t0, -0x4410 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949872));
        ctx->pc = 0x30DBF0u;
        goto label_30dbf0;
    }
    ctx->pc = 0x30DBE8u;
    SET_GPR_U32(ctx, 31, 0x30DBF0u);
    ctx->pc = 0x30DBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DBE8u;
            // 0x30dbec: 0x2508bbf0  addiu       $t0, $t0, -0x4410 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F1A0u;
    if (runtime->hasFunction(0x30F1A0u)) {
        auto targetFn = runtime->lookupFunction(0x30F1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DBF0u; }
        if (ctx->pc != 0x30DBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030F1A0_0x30f1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DBF0u; }
        if (ctx->pc != 0x30DBF0u) { return; }
    }
    ctx->pc = 0x30DBF0u;
label_30dbf0:
    // 0x30dbf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30dbf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30dbf4:
    // 0x30dbf4: 0xc0c3f1c  jal         func_30FC70
label_30dbf8:
    if (ctx->pc == 0x30DBF8u) {
        ctx->pc = 0x30DBF8u;
            // 0x30dbf8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30DBFCu;
        goto label_30dbfc;
    }
    ctx->pc = 0x30DBF4u;
    SET_GPR_U32(ctx, 31, 0x30DBFCu);
    ctx->pc = 0x30DBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DBF4u;
            // 0x30dbf8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FC70u;
    if (runtime->hasFunction(0x30FC70u)) {
        auto targetFn = runtime->lookupFunction(0x30FC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DBFCu; }
        if (ctx->pc != 0x30DBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FC70_0x30fc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DBFCu; }
        if (ctx->pc != 0x30DBFCu) { return; }
    }
    ctx->pc = 0x30DBFCu;
label_30dbfc:
    // 0x30dbfc: 0x86a30066  lh          $v1, 0x66($s5)
    ctx->pc = 0x30dbfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
label_30dc00:
    // 0x30dc00: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x30dc00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_30dc04:
    // 0x30dc04: 0x14200048  bnez        $at, . + 4 + (0x48 << 2)
label_30dc08:
    if (ctx->pc == 0x30DC08u) {
        ctx->pc = 0x30DC0Cu;
        goto label_30dc0c;
    }
    ctx->pc = 0x30DC04u;
    {
        const bool branch_taken_0x30dc04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30dc04) {
            ctx->pc = 0x30DD28u;
            goto label_30dd28;
        }
    }
    ctx->pc = 0x30DC0Cu;
label_30dc0c:
    // 0x30dc0c: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x30dc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_30dc10:
    // 0x30dc10: 0xc04cc04  jal         func_133010
label_30dc14:
    if (ctx->pc == 0x30DC14u) {
        ctx->pc = 0x30DC14u;
            // 0x30dc14: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x30DC18u;
        goto label_30dc18;
    }
    ctx->pc = 0x30DC10u;
    SET_GPR_U32(ctx, 31, 0x30DC18u);
    ctx->pc = 0x30DC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DC10u;
            // 0x30dc14: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC18u; }
        if (ctx->pc != 0x30DC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC18u; }
        if (ctx->pc != 0x30DC18u) { return; }
    }
    ctx->pc = 0x30DC18u;
label_30dc18:
    // 0x30dc18: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x30dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_30dc1c:
    // 0x30dc1c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x30dc1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30dc20:
    // 0x30dc20: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x30dc20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_30dc24:
    // 0x30dc24: 0x27b20110  addiu       $s2, $sp, 0x110
    ctx->pc = 0x30dc24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_30dc28:
    // 0x30dc28: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x30dc28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_30dc2c:
    // 0x30dc2c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x30dc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30dc30:
    // 0x30dc30: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x30dc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_30dc34:
    // 0x30dc34: 0xc04ccc4  jal         func_133310
label_30dc38:
    if (ctx->pc == 0x30DC38u) {
        ctx->pc = 0x30DC38u;
            // 0x30dc38: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x30DC3Cu;
        goto label_30dc3c;
    }
    ctx->pc = 0x30DC34u;
    SET_GPR_U32(ctx, 31, 0x30DC3Cu);
    ctx->pc = 0x30DC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DC34u;
            // 0x30dc38: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC3Cu; }
        if (ctx->pc != 0x30DC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC3Cu; }
        if (ctx->pc != 0x30DC3Cu) { return; }
    }
    ctx->pc = 0x30DC3Cu;
label_30dc3c:
    // 0x30dc3c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x30dc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30dc40:
    // 0x30dc40: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x30dc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_30dc44:
    // 0x30dc44: 0xc04ccc4  jal         func_133310
label_30dc48:
    if (ctx->pc == 0x30DC48u) {
        ctx->pc = 0x30DC48u;
            // 0x30dc48: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x30DC4Cu;
        goto label_30dc4c;
    }
    ctx->pc = 0x30DC44u;
    SET_GPR_U32(ctx, 31, 0x30DC4Cu);
    ctx->pc = 0x30DC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DC44u;
            // 0x30dc48: 0x26260030  addiu       $a2, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC4Cu; }
        if (ctx->pc != 0x30DC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC4Cu; }
        if (ctx->pc != 0x30DC4Cu) { return; }
    }
    ctx->pc = 0x30DC4Cu;
label_30dc4c:
    // 0x30dc4c: 0xc0c3890  jal         func_30E240
label_30dc50:
    if (ctx->pc == 0x30DC50u) {
        ctx->pc = 0x30DC50u;
            // 0x30dc50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30DC54u;
        goto label_30dc54;
    }
    ctx->pc = 0x30DC4Cu;
    SET_GPR_U32(ctx, 31, 0x30DC54u);
    ctx->pc = 0x30DC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DC4Cu;
            // 0x30dc50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E240u;
    if (runtime->hasFunction(0x30E240u)) {
        auto targetFn = runtime->lookupFunction(0x30E240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC54u; }
        if (ctx->pc != 0x30DC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030E240_0x30e240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC54u; }
        if (ctx->pc != 0x30DC54u) { return; }
    }
    ctx->pc = 0x30DC54u;
label_30dc54:
    // 0x30dc54: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x30dc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_30dc58:
    // 0x30dc58: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x30dc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_30dc5c:
    // 0x30dc5c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_30dc60:
    if (ctx->pc == 0x30DC60u) {
        ctx->pc = 0x30DC64u;
        goto label_30dc64;
    }
    ctx->pc = 0x30DC5Cu;
    {
        const bool branch_taken_0x30dc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dc5c) {
            ctx->pc = 0x30DC90u;
            goto label_30dc90;
        }
    }
    ctx->pc = 0x30DC64u;
label_30dc64:
    // 0x30dc64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30dc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30dc68:
    // 0x30dc68: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x30dc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_30dc6c:
    // 0x30dc6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30dc6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30dc70:
    // 0x30dc70: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x30dc70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_30dc74:
    // 0x30dc74: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x30dc74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_30dc78:
    // 0x30dc78: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x30dc78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_30dc7c:
    // 0x30dc7c: 0xc0c3894  jal         func_30E250
label_30dc80:
    if (ctx->pc == 0x30DC80u) {
        ctx->pc = 0x30DC80u;
            // 0x30dc80: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30DC84u;
        goto label_30dc84;
    }
    ctx->pc = 0x30DC7Cu;
    SET_GPR_U32(ctx, 31, 0x30DC84u);
    ctx->pc = 0x30DC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DC7Cu;
            // 0x30dc80: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E250u;
    if (runtime->hasFunction(0x30E250u)) {
        auto targetFn = runtime->lookupFunction(0x30E250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC84u; }
        if (ctx->pc != 0x30DC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030E250_0x30e250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC84u; }
        if (ctx->pc != 0x30DC84u) { return; }
    }
    ctx->pc = 0x30DC84u;
label_30dc84:
    // 0x30dc84: 0x1000000a  b           . + 4 + (0xA << 2)
label_30dc88:
    if (ctx->pc == 0x30DC88u) {
        ctx->pc = 0x30DC8Cu;
        goto label_30dc8c;
    }
    ctx->pc = 0x30DC84u;
    {
        const bool branch_taken_0x30dc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dc84) {
            ctx->pc = 0x30DCB0u;
            goto label_30dcb0;
        }
    }
    ctx->pc = 0x30DC8Cu;
label_30dc8c:
    // 0x30dc8c: 0x0  nop
    ctx->pc = 0x30dc8cu;
    // NOP
label_30dc90:
    // 0x30dc90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30dc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30dc94:
    // 0x30dc94: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x30dc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_30dc98:
    // 0x30dc98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30dc98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30dc9c:
    // 0x30dc9c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x30dc9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_30dca0:
    // 0x30dca0: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x30dca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_30dca4:
    // 0x30dca4: 0xc0c393c  jal         func_30E4F0
label_30dca8:
    if (ctx->pc == 0x30DCA8u) {
        ctx->pc = 0x30DCA8u;
            // 0x30dca8: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30DCACu;
        goto label_30dcac;
    }
    ctx->pc = 0x30DCA4u;
    SET_GPR_U32(ctx, 31, 0x30DCACu);
    ctx->pc = 0x30DCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DCA4u;
            // 0x30dca8: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E4F0u;
    if (runtime->hasFunction(0x30E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x30E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DCACu; }
        if (ctx->pc != 0x30DCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030E4F0_0x30e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DCACu; }
        if (ctx->pc != 0x30DCACu) { return; }
    }
    ctx->pc = 0x30DCACu;
label_30dcac:
    // 0x30dcac: 0x0  nop
    ctx->pc = 0x30dcacu;
    // NOP
label_30dcb0:
    // 0x30dcb0: 0xc0508b0  jal         func_1422C0
label_30dcb4:
    if (ctx->pc == 0x30DCB4u) {
        ctx->pc = 0x30DCB4u;
            // 0x30dcb4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30DCB8u;
        goto label_30dcb8;
    }
    ctx->pc = 0x30DCB0u;
    SET_GPR_U32(ctx, 31, 0x30DCB8u);
    ctx->pc = 0x30DCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DCB0u;
            // 0x30dcb4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DCB8u; }
        if (ctx->pc != 0x30DCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DCB8u; }
        if (ctx->pc != 0x30DCB8u) { return; }
    }
    ctx->pc = 0x30DCB8u;
label_30dcb8:
    // 0x30dcb8: 0x8ea200cc  lw          $v0, 0xCC($s5)
    ctx->pc = 0x30dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
label_30dcbc:
    // 0x30dcbc: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x30dcbcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_30dcc0:
    // 0x30dcc0: 0xc0506ac  jal         func_141AB0
label_30dcc4:
    if (ctx->pc == 0x30DCC4u) {
        ctx->pc = 0x30DCC4u;
            // 0x30dcc4: 0x8ea404b0  lw          $a0, 0x4B0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1200)));
        ctx->pc = 0x30DCC8u;
        goto label_30dcc8;
    }
    ctx->pc = 0x30DCC0u;
    SET_GPR_U32(ctx, 31, 0x30DCC8u);
    ctx->pc = 0x30DCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DCC0u;
            // 0x30dcc4: 0x8ea404b0  lw          $a0, 0x4B0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DCC8u; }
        if (ctx->pc != 0x30DCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DCC8u; }
        if (ctx->pc != 0x30DCC8u) { return; }
    }
    ctx->pc = 0x30DCC8u;
label_30dcc8:
    // 0x30dcc8: 0xc05068c  jal         func_141A30
label_30dccc:
    if (ctx->pc == 0x30DCCCu) {
        ctx->pc = 0x30DCCCu;
            // 0x30dccc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30DCD0u;
        goto label_30dcd0;
    }
    ctx->pc = 0x30DCC8u;
    SET_GPR_U32(ctx, 31, 0x30DCD0u);
    ctx->pc = 0x30DCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DCC8u;
            // 0x30dccc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DCD0u; }
        if (ctx->pc != 0x30DCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DCD0u; }
        if (ctx->pc != 0x30DCD0u) { return; }
    }
    ctx->pc = 0x30DCD0u;
label_30dcd0:
    // 0x30dcd0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x30dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30dcd4:
    // 0x30dcd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30dcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30dcd8:
    // 0x30dcd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30dcd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30dcdc:
    // 0x30dcdc: 0xc0508b4  jal         func_1422D0
label_30dce0:
    if (ctx->pc == 0x30DCE0u) {
        ctx->pc = 0x30DCE0u;
            // 0x30dce0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30DCE4u;
        goto label_30dce4;
    }
    ctx->pc = 0x30DCDCu;
    SET_GPR_U32(ctx, 31, 0x30DCE4u);
    ctx->pc = 0x30DCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DCDCu;
            // 0x30dce0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DCE4u; }
        if (ctx->pc != 0x30DCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DCE4u; }
        if (ctx->pc != 0x30DCE4u) { return; }
    }
    ctx->pc = 0x30DCE4u;
label_30dce4:
    // 0x30dce4: 0x86a20066  lh          $v0, 0x66($s5)
    ctx->pc = 0x30dce4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
label_30dce8:
    // 0x30dce8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30dcec:
    // 0x30dcec: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x30dcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_30dcf0:
    // 0x30dcf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30dcf4:
    // 0x30dcf4: 0xc050a08  jal         func_142820
label_30dcf8:
    if (ctx->pc == 0x30DCF8u) {
        ctx->pc = 0x30DCF8u;
            // 0x30dcf8: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x30DCFCu;
        goto label_30dcfc;
    }
    ctx->pc = 0x30DCF4u;
    SET_GPR_U32(ctx, 31, 0x30DCFCu);
    ctx->pc = 0x30DCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DCF4u;
            // 0x30dcf8: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DCFCu; }
        if (ctx->pc != 0x30DCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DCFCu; }
        if (ctx->pc != 0x30DCFCu) { return; }
    }
    ctx->pc = 0x30DCFCu;
label_30dcfc:
    // 0x30dcfc: 0xc050a88  jal         func_142A20
label_30dd00:
    if (ctx->pc == 0x30DD00u) {
        ctx->pc = 0x30DD04u;
        goto label_30dd04;
    }
    ctx->pc = 0x30DCFCu;
    SET_GPR_U32(ctx, 31, 0x30DD04u);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DD04u; }
        if (ctx->pc != 0x30DD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DD04u; }
        if (ctx->pc != 0x30DD04u) { return; }
    }
    ctx->pc = 0x30DD04u;
label_30dd04:
    // 0x30dd04: 0xc05068c  jal         func_141A30
label_30dd08:
    if (ctx->pc == 0x30DD08u) {
        ctx->pc = 0x30DD08u;
            // 0x30dd08: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30DD0Cu;
        goto label_30dd0c;
    }
    ctx->pc = 0x30DD04u;
    SET_GPR_U32(ctx, 31, 0x30DD0Cu);
    ctx->pc = 0x30DD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD04u;
            // 0x30dd08: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DD0Cu; }
        if (ctx->pc != 0x30DD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DD0Cu; }
        if (ctx->pc != 0x30DD0Cu) { return; }
    }
    ctx->pc = 0x30DD0Cu;
label_30dd0c:
    // 0x30dd0c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x30dd0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_30dd10:
    // 0x30dd10: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x30dd10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_30dd14:
    // 0x30dd14: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x30dd14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_30dd18:
    // 0x30dd18: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x30dd18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_30dd1c:
    // 0x30dd1c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x30dd1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_30dd20:
    // 0x30dd20: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
label_30dd24:
    if (ctx->pc == 0x30DD24u) {
        ctx->pc = 0x30DD24u;
            // 0x30dd24: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x30DD28u;
        goto label_30dd28;
    }
    ctx->pc = 0x30DD20u;
    {
        const bool branch_taken_0x30dd20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD20u;
            // 0x30dd24: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd20) {
            ctx->pc = 0x30DC2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30dc2c;
        }
    }
    ctx->pc = 0x30DD28u;
label_30dd28:
    // 0x30dd28: 0x10000131  b           . + 4 + (0x131 << 2)
label_30dd2c:
    if (ctx->pc == 0x30DD2Cu) {
        ctx->pc = 0x30DD2Cu;
            // 0x30dd2c: 0xaea00094  sw          $zero, 0x94($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 148), GPR_U32(ctx, 0));
        ctx->pc = 0x30DD30u;
        goto label_30dd30;
    }
    ctx->pc = 0x30DD28u;
    {
        const bool branch_taken_0x30dd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD28u;
            // 0x30dd2c: 0xaea00094  sw          $zero, 0x94($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd28) {
            ctx->pc = 0x30E1F0u;
            goto label_30e1f0;
        }
    }
    ctx->pc = 0x30DD30u;
label_30dd30:
    // 0x30dd30: 0x8e030d6c  lw          $v1, 0xD6C($s0)
    ctx->pc = 0x30dd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_30dd34:
    // 0x30dd34: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x30dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_30dd38:
    // 0x30dd38: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x30dd38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_30dd3c:
    // 0x30dd3c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_30dd40:
    if (ctx->pc == 0x30DD40u) {
        ctx->pc = 0x30DD40u;
            // 0x30dd40: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        ctx->pc = 0x30DD44u;
        goto label_30dd44;
    }
    ctx->pc = 0x30DD3Cu;
    {
        const bool branch_taken_0x30dd3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30DD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD3Cu;
            // 0x30dd40: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd3c) {
            ctx->pc = 0x30DD90u;
            goto label_30dd90;
        }
    }
    ctx->pc = 0x30DD44u;
label_30dd44:
    // 0x30dd44: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_30dd48:
    // 0x30dd48: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
label_30dd4c:
    if (ctx->pc == 0x30DD4Cu) {
        ctx->pc = 0x30DD4Cu;
            // 0x30dd4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x30DD50u;
        goto label_30dd50;
    }
    ctx->pc = 0x30DD48u;
    {
        const bool branch_taken_0x30dd48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30dd48) {
            ctx->pc = 0x30DD4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD48u;
            // 0x30dd4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30DD88u;
            goto label_30dd88;
        }
    }
    ctx->pc = 0x30DD50u;
label_30dd50:
    // 0x30dd50: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x30dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_30dd54:
    // 0x30dd54: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_30dd58:
    if (ctx->pc == 0x30DD58u) {
        ctx->pc = 0x30DD58u;
            // 0x30dd58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30DD5Cu;
        goto label_30dd5c;
    }
    ctx->pc = 0x30DD54u;
    {
        const bool branch_taken_0x30dd54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30dd54) {
            ctx->pc = 0x30DD58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD54u;
            // 0x30dd58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30DD80u;
            goto label_30dd80;
        }
    }
    ctx->pc = 0x30DD5Cu;
label_30dd5c:
    // 0x30dd5c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x30dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_30dd60:
    // 0x30dd60: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_30dd64:
    if (ctx->pc == 0x30DD64u) {
        ctx->pc = 0x30DD68u;
        goto label_30dd68;
    }
    ctx->pc = 0x30DD60u;
    {
        const bool branch_taken_0x30dd60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30dd60) {
            ctx->pc = 0x30DD7Cu;
            goto label_30dd7c;
        }
    }
    ctx->pc = 0x30DD68u;
label_30dd68:
    // 0x30dd68: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x30dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_30dd6c:
    // 0x30dd6c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_30dd70:
    if (ctx->pc == 0x30DD70u) {
        ctx->pc = 0x30DD74u;
        goto label_30dd74;
    }
    ctx->pc = 0x30DD6Cu;
    {
        const bool branch_taken_0x30dd6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30dd6c) {
            ctx->pc = 0x30DD7Cu;
            goto label_30dd7c;
        }
    }
    ctx->pc = 0x30DD74u;
label_30dd74:
    // 0x30dd74: 0x10000008  b           . + 4 + (0x8 << 2)
label_30dd78:
    if (ctx->pc == 0x30DD78u) {
        ctx->pc = 0x30DD78u;
            // 0x30dd78: 0xaea00094  sw          $zero, 0x94($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 148), GPR_U32(ctx, 0));
        ctx->pc = 0x30DD7Cu;
        goto label_30dd7c;
    }
    ctx->pc = 0x30DD74u;
    {
        const bool branch_taken_0x30dd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD74u;
            // 0x30dd78: 0xaea00094  sw          $zero, 0x94($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd74) {
            ctx->pc = 0x30DD98u;
            goto label_30dd98;
        }
    }
    ctx->pc = 0x30DD7Cu;
label_30dd7c:
    // 0x30dd7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30dd80:
    // 0x30dd80: 0x10000004  b           . + 4 + (0x4 << 2)
label_30dd84:
    if (ctx->pc == 0x30DD84u) {
        ctx->pc = 0x30DD84u;
            // 0x30dd84: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x30DD88u;
        goto label_30dd88;
    }
    ctx->pc = 0x30DD80u;
    {
        const bool branch_taken_0x30dd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD80u;
            // 0x30dd84: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd80) {
            ctx->pc = 0x30DD94u;
            goto label_30dd94;
        }
    }
    ctx->pc = 0x30DD88u;
label_30dd88:
    // 0x30dd88: 0x10000002  b           . + 4 + (0x2 << 2)
label_30dd8c:
    if (ctx->pc == 0x30DD8Cu) {
        ctx->pc = 0x30DD8Cu;
            // 0x30dd8c: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x30DD90u;
        goto label_30dd90;
    }
    ctx->pc = 0x30DD88u;
    {
        const bool branch_taken_0x30dd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD88u;
            // 0x30dd8c: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dd88) {
            ctx->pc = 0x30DD94u;
            goto label_30dd94;
        }
    }
    ctx->pc = 0x30DD90u;
label_30dd90:
    // 0x30dd90: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x30dd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_30dd94:
    // 0x30dd94: 0xaea00094  sw          $zero, 0x94($s5)
    ctx->pc = 0x30dd94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 148), GPR_U32(ctx, 0));
label_30dd98:
    // 0x30dd98: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30dd9c:
    // 0x30dd9c: 0xc440f4d0  lwc1        $f0, -0xB30($v0)
    ctx->pc = 0x30dd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30dda0:
    // 0x30dda0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_30dda4:
    // 0x30dda4: 0xc464f4ec  lwc1        $f4, -0xB14($v1)
    ctx->pc = 0x30dda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_30dda8:
    // 0x30dda8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30ddac:
    // 0x30ddac: 0xc442f4d4  lwc1        $f2, -0xB2C($v0)
    ctx->pc = 0x30ddacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30ddb0:
    // 0x30ddb0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_30ddb4:
    // 0x30ddb4: 0xe7a00960  swc1        $f0, 0x960($sp)
    ctx->pc = 0x30ddb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2400), bits); }
label_30ddb8:
    // 0x30ddb8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30ddbc:
    // 0x30ddbc: 0xc441f4d8  lwc1        $f1, -0xB28($v0)
    ctx->pc = 0x30ddbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30ddc0:
    // 0x30ddc0: 0xe7a20964  swc1        $f2, 0x964($sp)
    ctx->pc = 0x30ddc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2404), bits); }
label_30ddc4:
    // 0x30ddc4: 0xc462f4f4  lwc1        $f2, -0xB0C($v1)
    ctx->pc = 0x30ddc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30ddc8:
    // 0x30ddc8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30ddcc:
    // 0x30ddcc: 0xc440f4dc  lwc1        $f0, -0xB24($v0)
    ctx->pc = 0x30ddccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30ddd0:
    // 0x30ddd0: 0xe7a10968  swc1        $f1, 0x968($sp)
    ctx->pc = 0x30ddd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2408), bits); }
label_30ddd4:
    // 0x30ddd4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_30ddd8:
    // 0x30ddd8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30dddc:
    // 0x30dddc: 0xc447f4e0  lwc1        $f7, -0xB20($v0)
    ctx->pc = 0x30dddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_30dde0:
    // 0x30dde0: 0xe7a0096c  swc1        $f0, 0x96C($sp)
    ctx->pc = 0x30dde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2412), bits); }
label_30dde4:
    // 0x30dde4: 0x8ea600cc  lw          $a2, 0xCC($s5)
    ctx->pc = 0x30dde4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
label_30dde8:
    // 0x30dde8: 0xc460f4fc  lwc1        $f0, -0xB04($v1)
    ctx->pc = 0x30dde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30ddec:
    // 0x30ddec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30ddf0:
    // 0x30ddf0: 0xc446f4e4  lwc1        $f6, -0xB1C($v0)
    ctx->pc = 0x30ddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_30ddf4:
    // 0x30ddf4: 0xc4c80020  lwc1        $f8, 0x20($a2)
    ctx->pc = 0x30ddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_30ddf8:
    // 0x30ddf8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30ddfc:
    // 0x30ddfc: 0xc445f4e8  lwc1        $f5, -0xB18($v0)
    ctx->pc = 0x30ddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_30de00:
    // 0x30de00: 0xe7a80960  swc1        $f8, 0x960($sp)
    ctx->pc = 0x30de00u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2400), bits); }
label_30de04:
    // 0x30de04: 0xc4c80024  lwc1        $f8, 0x24($a2)
    ctx->pc = 0x30de04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_30de08:
    // 0x30de08: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30de08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30de0c:
    // 0x30de0c: 0xc443f4f0  lwc1        $f3, -0xB10($v0)
    ctx->pc = 0x30de0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_30de10:
    // 0x30de10: 0xe7a80964  swc1        $f8, 0x964($sp)
    ctx->pc = 0x30de10u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2404), bits); }
label_30de14:
    // 0x30de14: 0xc4c80028  lwc1        $f8, 0x28($a2)
    ctx->pc = 0x30de14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_30de18:
    // 0x30de18: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30de18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30de1c:
    // 0x30de1c: 0xc441f4f8  lwc1        $f1, -0xB08($v0)
    ctx->pc = 0x30de1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30de20:
    // 0x30de20: 0xe7a80968  swc1        $f8, 0x968($sp)
    ctx->pc = 0x30de20u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2408), bits); }
label_30de24:
    // 0x30de24: 0xe7a70950  swc1        $f7, 0x950($sp)
    ctx->pc = 0x30de24u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2384), bits); }
label_30de28:
    // 0x30de28: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x30de28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_30de2c:
    // 0x30de2c: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x30de2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_30de30:
    // 0x30de30: 0xe7a60954  swc1        $f6, 0x954($sp)
    ctx->pc = 0x30de30u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2388), bits); }
label_30de34:
    // 0x30de34: 0xe7a50958  swc1        $f5, 0x958($sp)
    ctx->pc = 0x30de34u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2392), bits); }
label_30de38:
    // 0x30de38: 0xe7a4095c  swc1        $f4, 0x95C($sp)
    ctx->pc = 0x30de38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2396), bits); }
label_30de3c:
    // 0x30de3c: 0xc4c40030  lwc1        $f4, 0x30($a2)
    ctx->pc = 0x30de3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_30de40:
    // 0x30de40: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x30de40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_30de44:
    // 0x30de44: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x30de44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_30de48:
    // 0x30de48: 0xe7a40950  swc1        $f4, 0x950($sp)
    ctx->pc = 0x30de48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2384), bits); }
label_30de4c:
    // 0x30de4c: 0xc4c40034  lwc1        $f4, 0x34($a2)
    ctx->pc = 0x30de4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_30de50:
    // 0x30de50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30de50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30de54:
    // 0x30de54: 0x8c44e370  lw          $a0, -0x1C90($v0)
    ctx->pc = 0x30de54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_30de58:
    // 0x30de58: 0xe7a40954  swc1        $f4, 0x954($sp)
    ctx->pc = 0x30de58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2388), bits); }
label_30de5c:
    // 0x30de5c: 0xc4c40038  lwc1        $f4, 0x38($a2)
    ctx->pc = 0x30de5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_30de60:
    // 0x30de60: 0xe7a40958  swc1        $f4, 0x958($sp)
    ctx->pc = 0x30de60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2392), bits); }
label_30de64:
    // 0x30de64: 0xe7a30940  swc1        $f3, 0x940($sp)
    ctx->pc = 0x30de64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2368), bits); }
label_30de68:
    // 0x30de68: 0xe7a20944  swc1        $f2, 0x944($sp)
    ctx->pc = 0x30de68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2372), bits); }
label_30de6c:
    // 0x30de6c: 0xe7a10948  swc1        $f1, 0x948($sp)
    ctx->pc = 0x30de6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2376), bits); }
label_30de70:
    // 0x30de70: 0xe7a0094c  swc1        $f0, 0x94C($sp)
    ctx->pc = 0x30de70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2380), bits); }
label_30de74:
    // 0x30de74: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x30de74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_30de78:
    // 0x30de78: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x30de78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_30de7c:
    // 0x30de7c: 0x84d10004  lh          $s1, 0x4($a2)
    ctx->pc = 0x30de7cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_30de80:
    // 0x30de80: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x30de80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30de84:
    // 0x30de84: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x30de84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_30de88:
    // 0x30de88: 0x92020e3d  lbu         $v0, 0xE3D($s0)
    ctx->pc = 0x30de88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3645)));
label_30de8c:
    // 0x30de8c: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x30de8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30de90:
    // 0x30de90: 0x8e030550  lw          $v1, 0x550($s0)
    ctx->pc = 0x30de90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_30de94:
    // 0x30de94: 0x22980  sll         $a1, $v0, 6
    ctx->pc = 0x30de94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_30de98:
    // 0x30de98: 0x24fe0010  addiu       $fp, $a3, 0x10
    ctx->pc = 0x30de98u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_30de9c:
    // 0x30de9c: 0x8e020d6c  lw          $v0, 0xD6C($s0)
    ctx->pc = 0x30de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_30dea0:
    // 0x30dea0: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x30dea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_30dea4:
    // 0x30dea4: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x30dea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_30dea8:
    // 0x30dea8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30deac:
    // 0x30deac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30deacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30deb0:
    // 0x30deb0: 0x8c470034  lw          $a3, 0x34($v0)
    ctx->pc = 0x30deb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_30deb4:
    // 0x30deb4: 0xc04e4cc  jal         func_139330
label_30deb8:
    if (ctx->pc == 0x30DEB8u) {
        ctx->pc = 0x30DEB8u;
            // 0x30deb8: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->pc = 0x30DEBCu;
        goto label_30debc;
    }
    ctx->pc = 0x30DEB4u;
    SET_GPR_U32(ctx, 31, 0x30DEBCu);
    ctx->pc = 0x30DEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DEB4u;
            // 0x30deb8: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139330u;
    if (runtime->hasFunction(0x139330u)) {
        auto targetFn = runtime->lookupFunction(0x139330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DEBCu; }
        if (ctx->pc != 0x30DEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139330_0x139330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DEBCu; }
        if (ctx->pc != 0x30DEBCu) { return; }
    }
    ctx->pc = 0x30DEBCu;
label_30debc:
    // 0x30debc: 0x8e040d6c  lw          $a0, 0xD6C($s0)
    ctx->pc = 0x30debcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_30dec0:
    // 0x30dec0: 0x112c3c  dsll32      $a1, $s1, 16
    ctx->pc = 0x30dec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 16));
label_30dec4:
    // 0x30dec4: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x30dec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_30dec8:
    // 0x30dec8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x30dec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_30decc:
    // 0x30decc: 0x320f809  jalr        $t9
label_30ded0:
    if (ctx->pc == 0x30DED0u) {
        ctx->pc = 0x30DED0u;
            // 0x30ded0: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->pc = 0x30DED4u;
        goto label_30ded4;
    }
    ctx->pc = 0x30DECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30DED4u);
        ctx->pc = 0x30DED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DECCu;
            // 0x30ded0: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30DED4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30DED4u; }
            if (ctx->pc != 0x30DED4u) { return; }
        }
        }
    }
    ctx->pc = 0x30DED4u;
label_30ded4:
    // 0x30ded4: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x30ded4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_30ded8:
    // 0x30ded8: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x30ded8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_30dedc:
    // 0x30dedc: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x30dedcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_30dee0:
    // 0x30dee0: 0x8e040d6c  lw          $a0, 0xD6C($s0)
    ctx->pc = 0x30dee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_30dee4:
    // 0x30dee4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x30dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_30dee8:
    // 0x30dee8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x30dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_30deec:
    // 0x30deec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30deecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_30def0:
    // 0x30def0: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x30def0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_30def4:
    // 0x30def4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x30def4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30def8:
    // 0x30def8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30def8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_30defc:
    // 0x30defc: 0x24c6bbf0  addiu       $a2, $a2, -0x4410
    ctx->pc = 0x30defcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949872));
label_30df00:
    // 0x30df00: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x30df00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30df04:
    // 0x30df04: 0x27a40930  addiu       $a0, $sp, 0x930
    ctx->pc = 0x30df04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
label_30df08:
    // 0x30df08: 0x8ca50030  lw          $a1, 0x30($a1)
    ctx->pc = 0x30df08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_30df0c:
    // 0x30df0c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_30df10:
    // 0x30df10: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x30df10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_30df14:
    // 0x30df14: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x30df14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_30df18:
    // 0x30df18: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x30df18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30df1c:
    // 0x30df1c: 0xc04cca0  jal         func_133280
label_30df20:
    if (ctx->pc == 0x30DF20u) {
        ctx->pc = 0x30DF20u;
            // 0x30df20: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30DF24u;
        goto label_30df24;
    }
    ctx->pc = 0x30DF1Cu;
    SET_GPR_U32(ctx, 31, 0x30DF24u);
    ctx->pc = 0x30DF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DF1Cu;
            // 0x30df20: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DF24u; }
        if (ctx->pc != 0x30DF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DF24u; }
        if (ctx->pc != 0x30DF24u) { return; }
    }
    ctx->pc = 0x30DF24u;
label_30df24:
    // 0x30df24: 0x27a40960  addiu       $a0, $sp, 0x960
    ctx->pc = 0x30df24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
label_30df28:
    // 0x30df28: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30df28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30df2c:
    // 0x30df2c: 0xc04ccc4  jal         func_133310
label_30df30:
    if (ctx->pc == 0x30DF30u) {
        ctx->pc = 0x30DF30u;
            // 0x30df30: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30DF34u;
        goto label_30df34;
    }
    ctx->pc = 0x30DF2Cu;
    SET_GPR_U32(ctx, 31, 0x30DF34u);
    ctx->pc = 0x30DF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DF2Cu;
            // 0x30df30: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DF34u; }
        if (ctx->pc != 0x30DF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DF34u; }
        if (ctx->pc != 0x30DF34u) { return; }
    }
    ctx->pc = 0x30DF34u;
label_30df34:
    // 0x30df34: 0x27a40950  addiu       $a0, $sp, 0x950
    ctx->pc = 0x30df34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
label_30df38:
    // 0x30df38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30df38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30df3c:
    // 0x30df3c: 0xc04ccc4  jal         func_133310
label_30df40:
    if (ctx->pc == 0x30DF40u) {
        ctx->pc = 0x30DF40u;
            // 0x30df40: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30DF44u;
        goto label_30df44;
    }
    ctx->pc = 0x30DF3Cu;
    SET_GPR_U32(ctx, 31, 0x30DF44u);
    ctx->pc = 0x30DF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DF3Cu;
            // 0x30df40: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DF44u; }
        if (ctx->pc != 0x30DF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DF44u; }
        if (ctx->pc != 0x30DF44u) { return; }
    }
    ctx->pc = 0x30DF44u;
label_30df44:
    // 0x30df44: 0x96a30064  lhu         $v1, 0x64($s5)
    ctx->pc = 0x30df44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 100)));
label_30df48:
    // 0x30df48: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x30df48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_30df4c:
    // 0x30df4c: 0x5060005f  beql        $v1, $zero, . + 4 + (0x5F << 2)
label_30df50:
    if (ctx->pc == 0x30DF50u) {
        ctx->pc = 0x30DF50u;
            // 0x30df50: 0x86a30066  lh          $v1, 0x66($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
        ctx->pc = 0x30DF54u;
        goto label_30df54;
    }
    ctx->pc = 0x30DF4Cu;
    {
        const bool branch_taken_0x30df4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30df4c) {
            ctx->pc = 0x30DF50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30DF4Cu;
            // 0x30df50: 0x86a30066  lh          $v1, 0x66($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30E0CCu;
            goto label_30e0cc;
        }
    }
    ctx->pc = 0x30DF54u;
label_30df54:
    // 0x30df54: 0x8ea200cc  lw          $v0, 0xCC($s5)
    ctx->pc = 0x30df54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
label_30df58:
    // 0x30df58: 0x96a30064  lhu         $v1, 0x64($s5)
    ctx->pc = 0x30df58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 100)));
label_30df5c:
    // 0x30df5c: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x30df5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_30df60:
    // 0x30df60: 0xa7a200b0  sh          $v0, 0xB0($sp)
    ctx->pc = 0x30df60u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
label_30df64:
    // 0x30df64: 0x3062fffd  andi        $v0, $v1, 0xFFFD
    ctx->pc = 0x30df64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
label_30df68:
    // 0x30df68: 0xa6a20064  sh          $v0, 0x64($s5)
    ctx->pc = 0x30df68u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 100), (uint16_t)GPR_U32(ctx, 2));
label_30df6c:
    // 0x30df6c: 0x96a20064  lhu         $v0, 0x64($s5)
    ctx->pc = 0x30df6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 100)));
label_30df70:
    // 0x30df70: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x30df70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_30df74:
    // 0x30df74: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_30df78:
    if (ctx->pc == 0x30DF78u) {
        ctx->pc = 0x30DF78u;
            // 0x30df78: 0x86b20066  lh          $s2, 0x66($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
        ctx->pc = 0x30DF7Cu;
        goto label_30df7c;
    }
    ctx->pc = 0x30DF74u;
    {
        const bool branch_taken_0x30df74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30df74) {
            ctx->pc = 0x30DF78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30DF74u;
            // 0x30df78: 0x86b20066  lh          $s2, 0x66($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30DFDCu;
            goto label_30dfdc;
        }
    }
    ctx->pc = 0x30DF7Cu;
label_30df7c:
    // 0x30df7c: 0x8ea200d0  lw          $v0, 0xD0($s5)
    ctx->pc = 0x30df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
label_30df80:
    // 0x30df80: 0x27a40940  addiu       $a0, $sp, 0x940
    ctx->pc = 0x30df80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2368));
label_30df84:
    // 0x30df84: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30df84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30df88:
    // 0x30df88: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x30df88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30df8c:
    // 0x30df8c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x30df8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_30df90:
    // 0x30df90: 0xc04ccc4  jal         func_133310
label_30df94:
    if (ctx->pc == 0x30DF94u) {
        ctx->pc = 0x30DF94u;
            // 0x30df94: 0xa7a200b0  sh          $v0, 0xB0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x30DF98u;
        goto label_30df98;
    }
    ctx->pc = 0x30DF90u;
    SET_GPR_U32(ctx, 31, 0x30DF98u);
    ctx->pc = 0x30DF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DF90u;
            // 0x30df94: 0xa7a200b0  sh          $v0, 0xB0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DF98u; }
        if (ctx->pc != 0x30DF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DF98u; }
        if (ctx->pc != 0x30DF98u) { return; }
    }
    ctx->pc = 0x30DF98u;
label_30df98:
    // 0x30df98: 0x27a40940  addiu       $a0, $sp, 0x940
    ctx->pc = 0x30df98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2368));
label_30df9c:
    // 0x30df9c: 0x27a60950  addiu       $a2, $sp, 0x950
    ctx->pc = 0x30df9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
label_30dfa0:
    // 0x30dfa0: 0xc04cbe0  jal         func_132F80
label_30dfa4:
    if (ctx->pc == 0x30DFA4u) {
        ctx->pc = 0x30DFA4u;
            // 0x30dfa4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30DFA8u;
        goto label_30dfa8;
    }
    ctx->pc = 0x30DFA0u;
    SET_GPR_U32(ctx, 31, 0x30DFA8u);
    ctx->pc = 0x30DFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DFA0u;
            // 0x30dfa4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DFA8u; }
        if (ctx->pc != 0x30DFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DFA8u; }
        if (ctx->pc != 0x30DFA8u) { return; }
    }
    ctx->pc = 0x30DFA8u;
label_30dfa8:
    // 0x30dfa8: 0x8ea200d0  lw          $v0, 0xD0($s5)
    ctx->pc = 0x30dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
label_30dfac:
    // 0x30dfac: 0xc7a00960  lwc1        $f0, 0x960($sp)
    ctx->pc = 0x30dfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30dfb0:
    // 0x30dfb0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30dfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30dfb4:
    // 0x30dfb4: 0x27a50930  addiu       $a1, $sp, 0x930
    ctx->pc = 0x30dfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
label_30dfb8:
    // 0x30dfb8: 0x27a60960  addiu       $a2, $sp, 0x960
    ctx->pc = 0x30dfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
label_30dfbc:
    // 0x30dfbc: 0x27a70940  addiu       $a3, $sp, 0x940
    ctx->pc = 0x30dfbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2368));
label_30dfc0:
    // 0x30dfc0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x30dfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30dfc4:
    // 0x30dfc4: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x30dfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_30dfc8:
    // 0x30dfc8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30dfc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30dfcc:
    // 0x30dfcc: 0xc0c3da0  jal         func_30F680
label_30dfd0:
    if (ctx->pc == 0x30DFD0u) {
        ctx->pc = 0x30DFD0u;
            // 0x30dfd0: 0xe7a00960  swc1        $f0, 0x960($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2400), bits); }
        ctx->pc = 0x30DFD4u;
        goto label_30dfd4;
    }
    ctx->pc = 0x30DFCCu;
    SET_GPR_U32(ctx, 31, 0x30DFD4u);
    ctx->pc = 0x30DFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DFCCu;
            // 0x30dfd0: 0xe7a00960  swc1        $f0, 0x960($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2400), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F680u;
    if (runtime->hasFunction(0x30F680u)) {
        auto targetFn = runtime->lookupFunction(0x30F680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DFD4u; }
        if (ctx->pc != 0x30DFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030F680_0x30f680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DFD4u; }
        if (ctx->pc != 0x30DFD4u) { return; }
    }
    ctx->pc = 0x30DFD4u;
label_30dfd4:
    // 0x30dfd4: 0x10000031  b           . + 4 + (0x31 << 2)
label_30dfd8:
    if (ctx->pc == 0x30DFD8u) {
        ctx->pc = 0x30DFD8u;
            // 0x30dfd8: 0x86a40066  lh          $a0, 0x66($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
        ctx->pc = 0x30DFDCu;
        goto label_30dfdc;
    }
    ctx->pc = 0x30DFD4u;
    {
        const bool branch_taken_0x30dfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DFD4u;
            // 0x30dfd8: 0x86a40066  lh          $a0, 0x66($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dfd4) {
            ctx->pc = 0x30E09Cu;
            goto label_30e09c;
        }
    }
    ctx->pc = 0x30DFDCu;
label_30dfdc:
    // 0x30dfdc: 0x1a40001e  blez        $s2, . + 4 + (0x1E << 2)
label_30dfe0:
    if (ctx->pc == 0x30DFE0u) {
        ctx->pc = 0x30DFE0u;
            // 0x30dfe0: 0x26b300d8  addiu       $s3, $s5, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 216));
        ctx->pc = 0x30DFE4u;
        goto label_30dfe4;
    }
    ctx->pc = 0x30DFDCu;
    {
        const bool branch_taken_0x30dfdc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x30DFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DFDCu;
            // 0x30dfe0: 0x26b300d8  addiu       $s3, $s5, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dfdc) {
            ctx->pc = 0x30E058u;
            goto label_30e058;
        }
    }
    ctx->pc = 0x30DFE4u;
label_30dfe4:
    // 0x30dfe4: 0x128840  sll         $s1, $s2, 1
    ctx->pc = 0x30dfe4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_30dfe8:
    // 0x30dfe8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x30dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_30dfec:
    // 0x30dfec: 0x2644ffff  addiu       $a0, $s2, -0x1
    ctx->pc = 0x30dfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_30dff0:
    // 0x30dff0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x30dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_30dff4:
    // 0x30dff4: 0x48040  sll         $s0, $a0, 1
    ctx->pc = 0x30dff4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_30dff8:
    // 0x30dff8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30dffc:
    // 0x30dffc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x30dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30e000:
    // 0x30e000: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x30e000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_30e004:
    // 0x30e004: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x30e004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_30e008:
    // 0x30e008: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30e008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30e00c:
    // 0x30e00c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x30e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_30e010:
    // 0x30e010: 0xc04cb1c  jal         func_132C70
label_30e014:
    if (ctx->pc == 0x30E014u) {
        ctx->pc = 0x30E014u;
            // 0x30e014: 0x244500d8  addiu       $a1, $v0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
        ctx->pc = 0x30E018u;
        goto label_30e018;
    }
    ctx->pc = 0x30E010u;
    SET_GPR_U32(ctx, 31, 0x30E018u);
    ctx->pc = 0x30E014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E010u;
            // 0x30e014: 0x244500d8  addiu       $a1, $v0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E018u; }
        if (ctx->pc != 0x30E018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E018u; }
        if (ctx->pc != 0x30E018u) { return; }
    }
    ctx->pc = 0x30E018u;
label_30e018:
    // 0x30e018: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x30e018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_30e01c:
    // 0x30e01c: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x30e01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_30e020:
    // 0x30e020: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30e020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_30e024:
    // 0x30e024: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x30e024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_30e028:
    // 0x30e028: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30e028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30e02c:
    // 0x30e02c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x30e02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_30e030:
    // 0x30e030: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30e030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30e034:
    // 0x30e034: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30e034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30e038:
    // 0x30e038: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x30e038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_30e03c:
    // 0x30e03c: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x30e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_30e040:
    // 0x30e040: 0xc04cb1c  jal         func_132C70
label_30e044:
    if (ctx->pc == 0x30E044u) {
        ctx->pc = 0x30E044u;
            // 0x30e044: 0x244500d8  addiu       $a1, $v0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
        ctx->pc = 0x30E048u;
        goto label_30e048;
    }
    ctx->pc = 0x30E040u;
    SET_GPR_U32(ctx, 31, 0x30E048u);
    ctx->pc = 0x30E044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E040u;
            // 0x30e044: 0x244500d8  addiu       $a1, $v0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E048u; }
        if (ctx->pc != 0x30E048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E048u; }
        if (ctx->pc != 0x30E048u) { return; }
    }
    ctx->pc = 0x30E048u;
label_30e048:
    // 0x30e048: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x30e048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_30e04c:
    // 0x30e04c: 0x1e40ffe6  bgtz        $s2, . + 4 + (-0x1A << 2)
label_30e050:
    if (ctx->pc == 0x30E050u) {
        ctx->pc = 0x30E050u;
            // 0x30e050: 0x2631fffe  addiu       $s1, $s1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
        ctx->pc = 0x30E054u;
        goto label_30e054;
    }
    ctx->pc = 0x30E04Cu;
    {
        const bool branch_taken_0x30e04c = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x30E050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E04Cu;
            // 0x30e050: 0x2631fffe  addiu       $s1, $s1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e04c) {
            ctx->pc = 0x30DFE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30dfe8;
        }
    }
    ctx->pc = 0x30E054u;
label_30e054:
    // 0x30e054: 0x0  nop
    ctx->pc = 0x30e054u;
    // NOP
label_30e058:
    // 0x30e058: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30e058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30e05c:
    // 0x30e05c: 0x27a50930  addiu       $a1, $sp, 0x930
    ctx->pc = 0x30e05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
label_30e060:
    // 0x30e060: 0xc04cafc  jal         func_132BF0
label_30e064:
    if (ctx->pc == 0x30E064u) {
        ctx->pc = 0x30E064u;
            // 0x30e064: 0x27a60950  addiu       $a2, $sp, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
        ctx->pc = 0x30E068u;
        goto label_30e068;
    }
    ctx->pc = 0x30E060u;
    SET_GPR_U32(ctx, 31, 0x30E068u);
    ctx->pc = 0x30E064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E060u;
            // 0x30e064: 0x27a60950  addiu       $a2, $sp, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E068u; }
        if (ctx->pc != 0x30E068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E068u; }
        if (ctx->pc != 0x30E068u) { return; }
    }
    ctx->pc = 0x30E068u;
label_30e068:
    // 0x30e068: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x30e068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_30e06c:
    // 0x30e06c: 0x27a50930  addiu       $a1, $sp, 0x930
    ctx->pc = 0x30e06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
label_30e070:
    // 0x30e070: 0xc04cafc  jal         func_132BF0
label_30e074:
    if (ctx->pc == 0x30E074u) {
        ctx->pc = 0x30E074u;
            // 0x30e074: 0x27a60950  addiu       $a2, $sp, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
        ctx->pc = 0x30E078u;
        goto label_30e078;
    }
    ctx->pc = 0x30E070u;
    SET_GPR_U32(ctx, 31, 0x30E078u);
    ctx->pc = 0x30E074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E070u;
            // 0x30e074: 0x27a60950  addiu       $a2, $sp, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E078u; }
        if (ctx->pc != 0x30E078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E078u; }
        if (ctx->pc != 0x30E078u) { return; }
    }
    ctx->pc = 0x30E078u;
label_30e078:
    // 0x30e078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30e078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30e07c:
    // 0x30e07c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30e07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30e080:
    // 0x30e080: 0xc04cafc  jal         func_132BF0
label_30e084:
    if (ctx->pc == 0x30E084u) {
        ctx->pc = 0x30E084u;
            // 0x30e084: 0x27a60960  addiu       $a2, $sp, 0x960 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
        ctx->pc = 0x30E088u;
        goto label_30e088;
    }
    ctx->pc = 0x30E080u;
    SET_GPR_U32(ctx, 31, 0x30E088u);
    ctx->pc = 0x30E084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E080u;
            // 0x30e084: 0x27a60960  addiu       $a2, $sp, 0x960 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E088u; }
        if (ctx->pc != 0x30E088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E088u; }
        if (ctx->pc != 0x30E088u) { return; }
    }
    ctx->pc = 0x30E088u;
label_30e088:
    // 0x30e088: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x30e088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_30e08c:
    // 0x30e08c: 0x27a60960  addiu       $a2, $sp, 0x960
    ctx->pc = 0x30e08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
label_30e090:
    // 0x30e090: 0xc04cb8c  jal         func_132E30
label_30e094:
    if (ctx->pc == 0x30E094u) {
        ctx->pc = 0x30E094u;
            // 0x30e094: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30E098u;
        goto label_30e098;
    }
    ctx->pc = 0x30E090u;
    SET_GPR_U32(ctx, 31, 0x30E098u);
    ctx->pc = 0x30E094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E090u;
            // 0x30e094: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E30u;
    if (runtime->hasFunction(0x132E30u)) {
        auto targetFn = runtime->lookupFunction(0x132E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E098u; }
        if (ctx->pc != 0x30E098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E30_0x132e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E098u; }
        if (ctx->pc != 0x30E098u) { return; }
    }
    ctx->pc = 0x30E098u;
label_30e098:
    // 0x30e098: 0x86a40066  lh          $a0, 0x66($s5)
    ctx->pc = 0x30e098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
label_30e09c:
    // 0x30e09c: 0x87a300b0  lh          $v1, 0xB0($sp)
    ctx->pc = 0x30e09cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
label_30e0a0:
    // 0x30e0a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_30e0a4:
    // 0x30e0a4: 0xa6a40066  sh          $a0, 0x66($s5)
    ctx->pc = 0x30e0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 102), (uint16_t)GPR_U32(ctx, 4));
label_30e0a8:
    // 0x30e0a8: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x30e0a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_30e0ac:
    // 0x30e0ac: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x30e0acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_30e0b0:
    // 0x30e0b0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30e0b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_30e0b4:
    // 0x30e0b4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x30e0b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_30e0b8:
    // 0x30e0b8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_30e0bc:
    if (ctx->pc == 0x30E0BCu) {
        ctx->pc = 0x30E0C0u;
        goto label_30e0c0;
    }
    ctx->pc = 0x30E0B8u;
    {
        const bool branch_taken_0x30e0b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e0b8) {
            ctx->pc = 0x30E0C8u;
            goto label_30e0c8;
        }
    }
    ctx->pc = 0x30E0C0u;
label_30e0c0:
    // 0x30e0c0: 0x87a300b0  lh          $v1, 0xB0($sp)
    ctx->pc = 0x30e0c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
label_30e0c4:
    // 0x30e0c4: 0xa6a30066  sh          $v1, 0x66($s5)
    ctx->pc = 0x30e0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 102), (uint16_t)GPR_U32(ctx, 3));
label_30e0c8:
    // 0x30e0c8: 0x86a30066  lh          $v1, 0x66($s5)
    ctx->pc = 0x30e0c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
label_30e0cc:
    // 0x30e0cc: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x30e0ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_30e0d0:
    // 0x30e0d0: 0x14200047  bnez        $at, . + 4 + (0x47 << 2)
label_30e0d4:
    if (ctx->pc == 0x30E0D4u) {
        ctx->pc = 0x30E0D8u;
        goto label_30e0d8;
    }
    ctx->pc = 0x30E0D0u;
    {
        const bool branch_taken_0x30e0d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e0d0) {
            ctx->pc = 0x30E1F0u;
            goto label_30e1f0;
        }
    }
    ctx->pc = 0x30E0D8u;
label_30e0d8:
    // 0x30e0d8: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x30e0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_30e0dc:
    // 0x30e0dc: 0xc04cc04  jal         func_133010
label_30e0e0:
    if (ctx->pc == 0x30E0E0u) {
        ctx->pc = 0x30E0E0u;
            // 0x30e0e0: 0x27a50930  addiu       $a1, $sp, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
        ctx->pc = 0x30E0E4u;
        goto label_30e0e4;
    }
    ctx->pc = 0x30E0DCu;
    SET_GPR_U32(ctx, 31, 0x30E0E4u);
    ctx->pc = 0x30E0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E0DCu;
            // 0x30e0e0: 0x27a50930  addiu       $a1, $sp, 0x930 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E0E4u; }
        if (ctx->pc != 0x30E0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E0E4u; }
        if (ctx->pc != 0x30E0E4u) { return; }
    }
    ctx->pc = 0x30E0E4u;
label_30e0e4:
    // 0x30e0e4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x30e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_30e0e8:
    // 0x30e0e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30e0e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30e0ec:
    // 0x30e0ec: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x30e0ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30e0f0:
    // 0x30e0f0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x30e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_30e0f4:
    // 0x30e0f4: 0x2e28021  addu        $s0, $s7, $v0
    ctx->pc = 0x30e0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_30e0f8:
    // 0x30e0f8: 0x27a40920  addiu       $a0, $sp, 0x920
    ctx->pc = 0x30e0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2336));
label_30e0fc:
    // 0x30e0fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30e0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30e100:
    // 0x30e100: 0xc04ccc4  jal         func_133310
label_30e104:
    if (ctx->pc == 0x30E104u) {
        ctx->pc = 0x30E104u;
            // 0x30e104: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x30E108u;
        goto label_30e108;
    }
    ctx->pc = 0x30E100u;
    SET_GPR_U32(ctx, 31, 0x30E108u);
    ctx->pc = 0x30E104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E100u;
            // 0x30e104: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E108u; }
        if (ctx->pc != 0x30E108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E108u; }
        if (ctx->pc != 0x30E108u) { return; }
    }
    ctx->pc = 0x30E108u;
label_30e108:
    // 0x30e108: 0x27a40910  addiu       $a0, $sp, 0x910
    ctx->pc = 0x30e108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2320));
label_30e10c:
    // 0x30e10c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30e10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30e110:
    // 0x30e110: 0xc04ccc4  jal         func_133310
label_30e114:
    if (ctx->pc == 0x30E114u) {
        ctx->pc = 0x30E114u;
            // 0x30e114: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x30E118u;
        goto label_30e118;
    }
    ctx->pc = 0x30E110u;
    SET_GPR_U32(ctx, 31, 0x30E118u);
    ctx->pc = 0x30E114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E110u;
            // 0x30e114: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E118u; }
        if (ctx->pc != 0x30E118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E118u; }
        if (ctx->pc != 0x30E118u) { return; }
    }
    ctx->pc = 0x30E118u;
label_30e118:
    // 0x30e118: 0x96a20064  lhu         $v0, 0x64($s5)
    ctx->pc = 0x30e118u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 100)));
label_30e11c:
    // 0x30e11c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x30e11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_30e120:
    // 0x30e120: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_30e124:
    if (ctx->pc == 0x30E124u) {
        ctx->pc = 0x30E128u;
        goto label_30e128;
    }
    ctx->pc = 0x30E120u;
    {
        const bool branch_taken_0x30e120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e120) {
            ctx->pc = 0x30E150u;
            goto label_30e150;
        }
    }
    ctx->pc = 0x30E128u;
label_30e128:
    // 0x30e128: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30e128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30e12c:
    // 0x30e12c: 0x27a50970  addiu       $a1, $sp, 0x970
    ctx->pc = 0x30e12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2416));
label_30e130:
    // 0x30e130: 0x27a60930  addiu       $a2, $sp, 0x930
    ctx->pc = 0x30e130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
label_30e134:
    // 0x30e134: 0x27a70960  addiu       $a3, $sp, 0x960
    ctx->pc = 0x30e134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
label_30e138:
    // 0x30e138: 0x27a80920  addiu       $t0, $sp, 0x920
    ctx->pc = 0x30e138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2336));
label_30e13c:
    // 0x30e13c: 0x27a90910  addiu       $t1, $sp, 0x910
    ctx->pc = 0x30e13cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2320));
label_30e140:
    // 0x30e140: 0xc0c3894  jal         func_30E250
label_30e144:
    if (ctx->pc == 0x30E144u) {
        ctx->pc = 0x30E144u;
            // 0x30e144: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30E148u;
        goto label_30e148;
    }
    ctx->pc = 0x30E140u;
    SET_GPR_U32(ctx, 31, 0x30E148u);
    ctx->pc = 0x30E144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E140u;
            // 0x30e144: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E250u;
    if (runtime->hasFunction(0x30E250u)) {
        auto targetFn = runtime->lookupFunction(0x30E250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E148u; }
        if (ctx->pc != 0x30E148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030E250_0x30e250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E148u; }
        if (ctx->pc != 0x30E148u) { return; }
    }
    ctx->pc = 0x30E148u;
label_30e148:
    // 0x30e148: 0x1000000b  b           . + 4 + (0xB << 2)
label_30e14c:
    if (ctx->pc == 0x30E14Cu) {
        ctx->pc = 0x30E150u;
        goto label_30e150;
    }
    ctx->pc = 0x30E148u;
    {
        const bool branch_taken_0x30e148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e148) {
            ctx->pc = 0x30E178u;
            goto label_30e178;
        }
    }
    ctx->pc = 0x30E150u;
label_30e150:
    // 0x30e150: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30e150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30e154:
    // 0x30e154: 0x27a50970  addiu       $a1, $sp, 0x970
    ctx->pc = 0x30e154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2416));
label_30e158:
    // 0x30e158: 0x27a60930  addiu       $a2, $sp, 0x930
    ctx->pc = 0x30e158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2352));
label_30e15c:
    // 0x30e15c: 0x27a70960  addiu       $a3, $sp, 0x960
    ctx->pc = 0x30e15cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
label_30e160:
    // 0x30e160: 0x27a80950  addiu       $t0, $sp, 0x950
    ctx->pc = 0x30e160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
label_30e164:
    // 0x30e164: 0x27a90920  addiu       $t1, $sp, 0x920
    ctx->pc = 0x30e164u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2336));
label_30e168:
    // 0x30e168: 0x27aa0910  addiu       $t2, $sp, 0x910
    ctx->pc = 0x30e168u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 2320));
label_30e16c:
    // 0x30e16c: 0xc0c3b5c  jal         func_30ED70
label_30e170:
    if (ctx->pc == 0x30E170u) {
        ctx->pc = 0x30E170u;
            // 0x30e170: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30E174u;
        goto label_30e174;
    }
    ctx->pc = 0x30E16Cu;
    SET_GPR_U32(ctx, 31, 0x30E174u);
    ctx->pc = 0x30E170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E16Cu;
            // 0x30e170: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30ED70u;
    if (runtime->hasFunction(0x30ED70u)) {
        auto targetFn = runtime->lookupFunction(0x30ED70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E174u; }
        if (ctx->pc != 0x30E174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030ED70_0x30ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E174u; }
        if (ctx->pc != 0x30E174u) { return; }
    }
    ctx->pc = 0x30E174u;
label_30e174:
    // 0x30e174: 0x0  nop
    ctx->pc = 0x30e174u;
    // NOP
label_30e178:
    // 0x30e178: 0xc0508b0  jal         func_1422C0
label_30e17c:
    if (ctx->pc == 0x30E17Cu) {
        ctx->pc = 0x30E17Cu;
            // 0x30e17c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30E180u;
        goto label_30e180;
    }
    ctx->pc = 0x30E178u;
    SET_GPR_U32(ctx, 31, 0x30E180u);
    ctx->pc = 0x30E17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E178u;
            // 0x30e17c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E180u; }
        if (ctx->pc != 0x30E180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E180u; }
        if (ctx->pc != 0x30E180u) { return; }
    }
    ctx->pc = 0x30E180u;
label_30e180:
    // 0x30e180: 0x8ea200cc  lw          $v0, 0xCC($s5)
    ctx->pc = 0x30e180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
label_30e184:
    // 0x30e184: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x30e184u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_30e188:
    // 0x30e188: 0xc0506ac  jal         func_141AB0
label_30e18c:
    if (ctx->pc == 0x30E18Cu) {
        ctx->pc = 0x30E18Cu;
            // 0x30e18c: 0x8ea404b0  lw          $a0, 0x4B0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1200)));
        ctx->pc = 0x30E190u;
        goto label_30e190;
    }
    ctx->pc = 0x30E188u;
    SET_GPR_U32(ctx, 31, 0x30E190u);
    ctx->pc = 0x30E18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E188u;
            // 0x30e18c: 0x8ea404b0  lw          $a0, 0x4B0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E190u; }
        if (ctx->pc != 0x30E190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E190u; }
        if (ctx->pc != 0x30E190u) { return; }
    }
    ctx->pc = 0x30E190u;
label_30e190:
    // 0x30e190: 0xc05068c  jal         func_141A30
label_30e194:
    if (ctx->pc == 0x30E194u) {
        ctx->pc = 0x30E194u;
            // 0x30e194: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30E198u;
        goto label_30e198;
    }
    ctx->pc = 0x30E190u;
    SET_GPR_U32(ctx, 31, 0x30E198u);
    ctx->pc = 0x30E194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E190u;
            // 0x30e194: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E198u; }
        if (ctx->pc != 0x30E198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E198u; }
        if (ctx->pc != 0x30E198u) { return; }
    }
    ctx->pc = 0x30E198u;
label_30e198:
    // 0x30e198: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x30e198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30e19c:
    // 0x30e19c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30e19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30e1a0:
    // 0x30e1a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30e1a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30e1a4:
    // 0x30e1a4: 0xc0508b4  jal         func_1422D0
label_30e1a8:
    if (ctx->pc == 0x30E1A8u) {
        ctx->pc = 0x30E1A8u;
            // 0x30e1a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30E1ACu;
        goto label_30e1ac;
    }
    ctx->pc = 0x30E1A4u;
    SET_GPR_U32(ctx, 31, 0x30E1ACu);
    ctx->pc = 0x30E1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E1A4u;
            // 0x30e1a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1ACu; }
        if (ctx->pc != 0x30E1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1ACu; }
        if (ctx->pc != 0x30E1ACu) { return; }
    }
    ctx->pc = 0x30E1ACu;
label_30e1ac:
    // 0x30e1ac: 0x86a20066  lh          $v0, 0x66($s5)
    ctx->pc = 0x30e1acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
label_30e1b0:
    // 0x30e1b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30e1b4:
    // 0x30e1b4: 0x27a50970  addiu       $a1, $sp, 0x970
    ctx->pc = 0x30e1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2416));
label_30e1b8:
    // 0x30e1b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30e1bc:
    // 0x30e1bc: 0xc050a08  jal         func_142820
label_30e1c0:
    if (ctx->pc == 0x30E1C0u) {
        ctx->pc = 0x30E1C0u;
            // 0x30e1c0: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x30E1C4u;
        goto label_30e1c4;
    }
    ctx->pc = 0x30E1BCu;
    SET_GPR_U32(ctx, 31, 0x30E1C4u);
    ctx->pc = 0x30E1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E1BCu;
            // 0x30e1c0: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1C4u; }
        if (ctx->pc != 0x30E1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1C4u; }
        if (ctx->pc != 0x30E1C4u) { return; }
    }
    ctx->pc = 0x30E1C4u;
label_30e1c4:
    // 0x30e1c4: 0xc050a88  jal         func_142A20
label_30e1c8:
    if (ctx->pc == 0x30E1C8u) {
        ctx->pc = 0x30E1CCu;
        goto label_30e1cc;
    }
    ctx->pc = 0x30E1C4u;
    SET_GPR_U32(ctx, 31, 0x30E1CCu);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1CCu; }
        if (ctx->pc != 0x30E1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1CCu; }
        if (ctx->pc != 0x30E1CCu) { return; }
    }
    ctx->pc = 0x30E1CCu;
label_30e1cc:
    // 0x30e1cc: 0xc05068c  jal         func_141A30
label_30e1d0:
    if (ctx->pc == 0x30E1D0u) {
        ctx->pc = 0x30E1D0u;
            // 0x30e1d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30E1D4u;
        goto label_30e1d4;
    }
    ctx->pc = 0x30E1CCu;
    SET_GPR_U32(ctx, 31, 0x30E1D4u);
    ctx->pc = 0x30E1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E1CCu;
            // 0x30e1d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1D4u; }
        if (ctx->pc != 0x30E1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E1D4u; }
        if (ctx->pc != 0x30E1D4u) { return; }
    }
    ctx->pc = 0x30E1D4u;
label_30e1d4:
    // 0x30e1d4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x30e1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_30e1d8:
    // 0x30e1d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30e1d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_30e1dc:
    // 0x30e1dc: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x30e1dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_30e1e0:
    // 0x30e1e0: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x30e1e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_30e1e4:
    // 0x30e1e4: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
label_30e1e8:
    if (ctx->pc == 0x30E1E8u) {
        ctx->pc = 0x30E1E8u;
            // 0x30e1e8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x30E1ECu;
        goto label_30e1ec;
    }
    ctx->pc = 0x30E1E4u;
    {
        const bool branch_taken_0x30e1e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E1E4u;
            // 0x30e1e8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e1e4) {
            ctx->pc = 0x30E0F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30e0f8;
        }
    }
    ctx->pc = 0x30E1ECu;
label_30e1ec:
    // 0x30e1ec: 0x0  nop
    ctx->pc = 0x30e1ecu;
    // NOP
label_30e1f0:
    // 0x30e1f0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x30e1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_30e1f4:
    // 0x30e1f4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x30e1f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_30e1f8:
    // 0x30e1f8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x30e1f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30e1fc:
    // 0x30e1fc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x30e1fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30e200:
    // 0x30e200: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30e200u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_30e204:
    // 0x30e204: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30e204u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30e208:
    // 0x30e208: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30e208u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30e20c:
    // 0x30e20c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30e20cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30e210:
    // 0x30e210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30e210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30e214:
    // 0x30e214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30e214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30e218:
    // 0x30e218: 0x3e00008  jr          $ra
label_30e21c:
    if (ctx->pc == 0x30E21Cu) {
        ctx->pc = 0x30E21Cu;
            // 0x30e21c: 0x27bd1120  addiu       $sp, $sp, 0x1120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4384));
        ctx->pc = 0x30E220u;
        goto label_fallthrough_0x30e218;
    }
    ctx->pc = 0x30E218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E218u;
            // 0x30e21c: 0x27bd1120  addiu       $sp, $sp, 0x1120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x30e218:
    ctx->pc = 0x30E220u;
}
