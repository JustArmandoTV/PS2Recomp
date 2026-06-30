#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050D700
// Address: 0x50d700 - 0x50e7b0
void sub_0050D700_0x50d700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050D700_0x50d700");
#endif

    switch (ctx->pc) {
        case 0x50d700u: goto label_50d700;
        case 0x50d704u: goto label_50d704;
        case 0x50d708u: goto label_50d708;
        case 0x50d70cu: goto label_50d70c;
        case 0x50d710u: goto label_50d710;
        case 0x50d714u: goto label_50d714;
        case 0x50d718u: goto label_50d718;
        case 0x50d71cu: goto label_50d71c;
        case 0x50d720u: goto label_50d720;
        case 0x50d724u: goto label_50d724;
        case 0x50d728u: goto label_50d728;
        case 0x50d72cu: goto label_50d72c;
        case 0x50d730u: goto label_50d730;
        case 0x50d734u: goto label_50d734;
        case 0x50d738u: goto label_50d738;
        case 0x50d73cu: goto label_50d73c;
        case 0x50d740u: goto label_50d740;
        case 0x50d744u: goto label_50d744;
        case 0x50d748u: goto label_50d748;
        case 0x50d74cu: goto label_50d74c;
        case 0x50d750u: goto label_50d750;
        case 0x50d754u: goto label_50d754;
        case 0x50d758u: goto label_50d758;
        case 0x50d75cu: goto label_50d75c;
        case 0x50d760u: goto label_50d760;
        case 0x50d764u: goto label_50d764;
        case 0x50d768u: goto label_50d768;
        case 0x50d76cu: goto label_50d76c;
        case 0x50d770u: goto label_50d770;
        case 0x50d774u: goto label_50d774;
        case 0x50d778u: goto label_50d778;
        case 0x50d77cu: goto label_50d77c;
        case 0x50d780u: goto label_50d780;
        case 0x50d784u: goto label_50d784;
        case 0x50d788u: goto label_50d788;
        case 0x50d78cu: goto label_50d78c;
        case 0x50d790u: goto label_50d790;
        case 0x50d794u: goto label_50d794;
        case 0x50d798u: goto label_50d798;
        case 0x50d79cu: goto label_50d79c;
        case 0x50d7a0u: goto label_50d7a0;
        case 0x50d7a4u: goto label_50d7a4;
        case 0x50d7a8u: goto label_50d7a8;
        case 0x50d7acu: goto label_50d7ac;
        case 0x50d7b0u: goto label_50d7b0;
        case 0x50d7b4u: goto label_50d7b4;
        case 0x50d7b8u: goto label_50d7b8;
        case 0x50d7bcu: goto label_50d7bc;
        case 0x50d7c0u: goto label_50d7c0;
        case 0x50d7c4u: goto label_50d7c4;
        case 0x50d7c8u: goto label_50d7c8;
        case 0x50d7ccu: goto label_50d7cc;
        case 0x50d7d0u: goto label_50d7d0;
        case 0x50d7d4u: goto label_50d7d4;
        case 0x50d7d8u: goto label_50d7d8;
        case 0x50d7dcu: goto label_50d7dc;
        case 0x50d7e0u: goto label_50d7e0;
        case 0x50d7e4u: goto label_50d7e4;
        case 0x50d7e8u: goto label_50d7e8;
        case 0x50d7ecu: goto label_50d7ec;
        case 0x50d7f0u: goto label_50d7f0;
        case 0x50d7f4u: goto label_50d7f4;
        case 0x50d7f8u: goto label_50d7f8;
        case 0x50d7fcu: goto label_50d7fc;
        case 0x50d800u: goto label_50d800;
        case 0x50d804u: goto label_50d804;
        case 0x50d808u: goto label_50d808;
        case 0x50d80cu: goto label_50d80c;
        case 0x50d810u: goto label_50d810;
        case 0x50d814u: goto label_50d814;
        case 0x50d818u: goto label_50d818;
        case 0x50d81cu: goto label_50d81c;
        case 0x50d820u: goto label_50d820;
        case 0x50d824u: goto label_50d824;
        case 0x50d828u: goto label_50d828;
        case 0x50d82cu: goto label_50d82c;
        case 0x50d830u: goto label_50d830;
        case 0x50d834u: goto label_50d834;
        case 0x50d838u: goto label_50d838;
        case 0x50d83cu: goto label_50d83c;
        case 0x50d840u: goto label_50d840;
        case 0x50d844u: goto label_50d844;
        case 0x50d848u: goto label_50d848;
        case 0x50d84cu: goto label_50d84c;
        case 0x50d850u: goto label_50d850;
        case 0x50d854u: goto label_50d854;
        case 0x50d858u: goto label_50d858;
        case 0x50d85cu: goto label_50d85c;
        case 0x50d860u: goto label_50d860;
        case 0x50d864u: goto label_50d864;
        case 0x50d868u: goto label_50d868;
        case 0x50d86cu: goto label_50d86c;
        case 0x50d870u: goto label_50d870;
        case 0x50d874u: goto label_50d874;
        case 0x50d878u: goto label_50d878;
        case 0x50d87cu: goto label_50d87c;
        case 0x50d880u: goto label_50d880;
        case 0x50d884u: goto label_50d884;
        case 0x50d888u: goto label_50d888;
        case 0x50d88cu: goto label_50d88c;
        case 0x50d890u: goto label_50d890;
        case 0x50d894u: goto label_50d894;
        case 0x50d898u: goto label_50d898;
        case 0x50d89cu: goto label_50d89c;
        case 0x50d8a0u: goto label_50d8a0;
        case 0x50d8a4u: goto label_50d8a4;
        case 0x50d8a8u: goto label_50d8a8;
        case 0x50d8acu: goto label_50d8ac;
        case 0x50d8b0u: goto label_50d8b0;
        case 0x50d8b4u: goto label_50d8b4;
        case 0x50d8b8u: goto label_50d8b8;
        case 0x50d8bcu: goto label_50d8bc;
        case 0x50d8c0u: goto label_50d8c0;
        case 0x50d8c4u: goto label_50d8c4;
        case 0x50d8c8u: goto label_50d8c8;
        case 0x50d8ccu: goto label_50d8cc;
        case 0x50d8d0u: goto label_50d8d0;
        case 0x50d8d4u: goto label_50d8d4;
        case 0x50d8d8u: goto label_50d8d8;
        case 0x50d8dcu: goto label_50d8dc;
        case 0x50d8e0u: goto label_50d8e0;
        case 0x50d8e4u: goto label_50d8e4;
        case 0x50d8e8u: goto label_50d8e8;
        case 0x50d8ecu: goto label_50d8ec;
        case 0x50d8f0u: goto label_50d8f0;
        case 0x50d8f4u: goto label_50d8f4;
        case 0x50d8f8u: goto label_50d8f8;
        case 0x50d8fcu: goto label_50d8fc;
        case 0x50d900u: goto label_50d900;
        case 0x50d904u: goto label_50d904;
        case 0x50d908u: goto label_50d908;
        case 0x50d90cu: goto label_50d90c;
        case 0x50d910u: goto label_50d910;
        case 0x50d914u: goto label_50d914;
        case 0x50d918u: goto label_50d918;
        case 0x50d91cu: goto label_50d91c;
        case 0x50d920u: goto label_50d920;
        case 0x50d924u: goto label_50d924;
        case 0x50d928u: goto label_50d928;
        case 0x50d92cu: goto label_50d92c;
        case 0x50d930u: goto label_50d930;
        case 0x50d934u: goto label_50d934;
        case 0x50d938u: goto label_50d938;
        case 0x50d93cu: goto label_50d93c;
        case 0x50d940u: goto label_50d940;
        case 0x50d944u: goto label_50d944;
        case 0x50d948u: goto label_50d948;
        case 0x50d94cu: goto label_50d94c;
        case 0x50d950u: goto label_50d950;
        case 0x50d954u: goto label_50d954;
        case 0x50d958u: goto label_50d958;
        case 0x50d95cu: goto label_50d95c;
        case 0x50d960u: goto label_50d960;
        case 0x50d964u: goto label_50d964;
        case 0x50d968u: goto label_50d968;
        case 0x50d96cu: goto label_50d96c;
        case 0x50d970u: goto label_50d970;
        case 0x50d974u: goto label_50d974;
        case 0x50d978u: goto label_50d978;
        case 0x50d97cu: goto label_50d97c;
        case 0x50d980u: goto label_50d980;
        case 0x50d984u: goto label_50d984;
        case 0x50d988u: goto label_50d988;
        case 0x50d98cu: goto label_50d98c;
        case 0x50d990u: goto label_50d990;
        case 0x50d994u: goto label_50d994;
        case 0x50d998u: goto label_50d998;
        case 0x50d99cu: goto label_50d99c;
        case 0x50d9a0u: goto label_50d9a0;
        case 0x50d9a4u: goto label_50d9a4;
        case 0x50d9a8u: goto label_50d9a8;
        case 0x50d9acu: goto label_50d9ac;
        case 0x50d9b0u: goto label_50d9b0;
        case 0x50d9b4u: goto label_50d9b4;
        case 0x50d9b8u: goto label_50d9b8;
        case 0x50d9bcu: goto label_50d9bc;
        case 0x50d9c0u: goto label_50d9c0;
        case 0x50d9c4u: goto label_50d9c4;
        case 0x50d9c8u: goto label_50d9c8;
        case 0x50d9ccu: goto label_50d9cc;
        case 0x50d9d0u: goto label_50d9d0;
        case 0x50d9d4u: goto label_50d9d4;
        case 0x50d9d8u: goto label_50d9d8;
        case 0x50d9dcu: goto label_50d9dc;
        case 0x50d9e0u: goto label_50d9e0;
        case 0x50d9e4u: goto label_50d9e4;
        case 0x50d9e8u: goto label_50d9e8;
        case 0x50d9ecu: goto label_50d9ec;
        case 0x50d9f0u: goto label_50d9f0;
        case 0x50d9f4u: goto label_50d9f4;
        case 0x50d9f8u: goto label_50d9f8;
        case 0x50d9fcu: goto label_50d9fc;
        case 0x50da00u: goto label_50da00;
        case 0x50da04u: goto label_50da04;
        case 0x50da08u: goto label_50da08;
        case 0x50da0cu: goto label_50da0c;
        case 0x50da10u: goto label_50da10;
        case 0x50da14u: goto label_50da14;
        case 0x50da18u: goto label_50da18;
        case 0x50da1cu: goto label_50da1c;
        case 0x50da20u: goto label_50da20;
        case 0x50da24u: goto label_50da24;
        case 0x50da28u: goto label_50da28;
        case 0x50da2cu: goto label_50da2c;
        case 0x50da30u: goto label_50da30;
        case 0x50da34u: goto label_50da34;
        case 0x50da38u: goto label_50da38;
        case 0x50da3cu: goto label_50da3c;
        case 0x50da40u: goto label_50da40;
        case 0x50da44u: goto label_50da44;
        case 0x50da48u: goto label_50da48;
        case 0x50da4cu: goto label_50da4c;
        case 0x50da50u: goto label_50da50;
        case 0x50da54u: goto label_50da54;
        case 0x50da58u: goto label_50da58;
        case 0x50da5cu: goto label_50da5c;
        case 0x50da60u: goto label_50da60;
        case 0x50da64u: goto label_50da64;
        case 0x50da68u: goto label_50da68;
        case 0x50da6cu: goto label_50da6c;
        case 0x50da70u: goto label_50da70;
        case 0x50da74u: goto label_50da74;
        case 0x50da78u: goto label_50da78;
        case 0x50da7cu: goto label_50da7c;
        case 0x50da80u: goto label_50da80;
        case 0x50da84u: goto label_50da84;
        case 0x50da88u: goto label_50da88;
        case 0x50da8cu: goto label_50da8c;
        case 0x50da90u: goto label_50da90;
        case 0x50da94u: goto label_50da94;
        case 0x50da98u: goto label_50da98;
        case 0x50da9cu: goto label_50da9c;
        case 0x50daa0u: goto label_50daa0;
        case 0x50daa4u: goto label_50daa4;
        case 0x50daa8u: goto label_50daa8;
        case 0x50daacu: goto label_50daac;
        case 0x50dab0u: goto label_50dab0;
        case 0x50dab4u: goto label_50dab4;
        case 0x50dab8u: goto label_50dab8;
        case 0x50dabcu: goto label_50dabc;
        case 0x50dac0u: goto label_50dac0;
        case 0x50dac4u: goto label_50dac4;
        case 0x50dac8u: goto label_50dac8;
        case 0x50daccu: goto label_50dacc;
        case 0x50dad0u: goto label_50dad0;
        case 0x50dad4u: goto label_50dad4;
        case 0x50dad8u: goto label_50dad8;
        case 0x50dadcu: goto label_50dadc;
        case 0x50dae0u: goto label_50dae0;
        case 0x50dae4u: goto label_50dae4;
        case 0x50dae8u: goto label_50dae8;
        case 0x50daecu: goto label_50daec;
        case 0x50daf0u: goto label_50daf0;
        case 0x50daf4u: goto label_50daf4;
        case 0x50daf8u: goto label_50daf8;
        case 0x50dafcu: goto label_50dafc;
        case 0x50db00u: goto label_50db00;
        case 0x50db04u: goto label_50db04;
        case 0x50db08u: goto label_50db08;
        case 0x50db0cu: goto label_50db0c;
        case 0x50db10u: goto label_50db10;
        case 0x50db14u: goto label_50db14;
        case 0x50db18u: goto label_50db18;
        case 0x50db1cu: goto label_50db1c;
        case 0x50db20u: goto label_50db20;
        case 0x50db24u: goto label_50db24;
        case 0x50db28u: goto label_50db28;
        case 0x50db2cu: goto label_50db2c;
        case 0x50db30u: goto label_50db30;
        case 0x50db34u: goto label_50db34;
        case 0x50db38u: goto label_50db38;
        case 0x50db3cu: goto label_50db3c;
        case 0x50db40u: goto label_50db40;
        case 0x50db44u: goto label_50db44;
        case 0x50db48u: goto label_50db48;
        case 0x50db4cu: goto label_50db4c;
        case 0x50db50u: goto label_50db50;
        case 0x50db54u: goto label_50db54;
        case 0x50db58u: goto label_50db58;
        case 0x50db5cu: goto label_50db5c;
        case 0x50db60u: goto label_50db60;
        case 0x50db64u: goto label_50db64;
        case 0x50db68u: goto label_50db68;
        case 0x50db6cu: goto label_50db6c;
        case 0x50db70u: goto label_50db70;
        case 0x50db74u: goto label_50db74;
        case 0x50db78u: goto label_50db78;
        case 0x50db7cu: goto label_50db7c;
        case 0x50db80u: goto label_50db80;
        case 0x50db84u: goto label_50db84;
        case 0x50db88u: goto label_50db88;
        case 0x50db8cu: goto label_50db8c;
        case 0x50db90u: goto label_50db90;
        case 0x50db94u: goto label_50db94;
        case 0x50db98u: goto label_50db98;
        case 0x50db9cu: goto label_50db9c;
        case 0x50dba0u: goto label_50dba0;
        case 0x50dba4u: goto label_50dba4;
        case 0x50dba8u: goto label_50dba8;
        case 0x50dbacu: goto label_50dbac;
        case 0x50dbb0u: goto label_50dbb0;
        case 0x50dbb4u: goto label_50dbb4;
        case 0x50dbb8u: goto label_50dbb8;
        case 0x50dbbcu: goto label_50dbbc;
        case 0x50dbc0u: goto label_50dbc0;
        case 0x50dbc4u: goto label_50dbc4;
        case 0x50dbc8u: goto label_50dbc8;
        case 0x50dbccu: goto label_50dbcc;
        case 0x50dbd0u: goto label_50dbd0;
        case 0x50dbd4u: goto label_50dbd4;
        case 0x50dbd8u: goto label_50dbd8;
        case 0x50dbdcu: goto label_50dbdc;
        case 0x50dbe0u: goto label_50dbe0;
        case 0x50dbe4u: goto label_50dbe4;
        case 0x50dbe8u: goto label_50dbe8;
        case 0x50dbecu: goto label_50dbec;
        case 0x50dbf0u: goto label_50dbf0;
        case 0x50dbf4u: goto label_50dbf4;
        case 0x50dbf8u: goto label_50dbf8;
        case 0x50dbfcu: goto label_50dbfc;
        case 0x50dc00u: goto label_50dc00;
        case 0x50dc04u: goto label_50dc04;
        case 0x50dc08u: goto label_50dc08;
        case 0x50dc0cu: goto label_50dc0c;
        case 0x50dc10u: goto label_50dc10;
        case 0x50dc14u: goto label_50dc14;
        case 0x50dc18u: goto label_50dc18;
        case 0x50dc1cu: goto label_50dc1c;
        case 0x50dc20u: goto label_50dc20;
        case 0x50dc24u: goto label_50dc24;
        case 0x50dc28u: goto label_50dc28;
        case 0x50dc2cu: goto label_50dc2c;
        case 0x50dc30u: goto label_50dc30;
        case 0x50dc34u: goto label_50dc34;
        case 0x50dc38u: goto label_50dc38;
        case 0x50dc3cu: goto label_50dc3c;
        case 0x50dc40u: goto label_50dc40;
        case 0x50dc44u: goto label_50dc44;
        case 0x50dc48u: goto label_50dc48;
        case 0x50dc4cu: goto label_50dc4c;
        case 0x50dc50u: goto label_50dc50;
        case 0x50dc54u: goto label_50dc54;
        case 0x50dc58u: goto label_50dc58;
        case 0x50dc5cu: goto label_50dc5c;
        case 0x50dc60u: goto label_50dc60;
        case 0x50dc64u: goto label_50dc64;
        case 0x50dc68u: goto label_50dc68;
        case 0x50dc6cu: goto label_50dc6c;
        case 0x50dc70u: goto label_50dc70;
        case 0x50dc74u: goto label_50dc74;
        case 0x50dc78u: goto label_50dc78;
        case 0x50dc7cu: goto label_50dc7c;
        case 0x50dc80u: goto label_50dc80;
        case 0x50dc84u: goto label_50dc84;
        case 0x50dc88u: goto label_50dc88;
        case 0x50dc8cu: goto label_50dc8c;
        case 0x50dc90u: goto label_50dc90;
        case 0x50dc94u: goto label_50dc94;
        case 0x50dc98u: goto label_50dc98;
        case 0x50dc9cu: goto label_50dc9c;
        case 0x50dca0u: goto label_50dca0;
        case 0x50dca4u: goto label_50dca4;
        case 0x50dca8u: goto label_50dca8;
        case 0x50dcacu: goto label_50dcac;
        case 0x50dcb0u: goto label_50dcb0;
        case 0x50dcb4u: goto label_50dcb4;
        case 0x50dcb8u: goto label_50dcb8;
        case 0x50dcbcu: goto label_50dcbc;
        case 0x50dcc0u: goto label_50dcc0;
        case 0x50dcc4u: goto label_50dcc4;
        case 0x50dcc8u: goto label_50dcc8;
        case 0x50dcccu: goto label_50dccc;
        case 0x50dcd0u: goto label_50dcd0;
        case 0x50dcd4u: goto label_50dcd4;
        case 0x50dcd8u: goto label_50dcd8;
        case 0x50dcdcu: goto label_50dcdc;
        case 0x50dce0u: goto label_50dce0;
        case 0x50dce4u: goto label_50dce4;
        case 0x50dce8u: goto label_50dce8;
        case 0x50dcecu: goto label_50dcec;
        case 0x50dcf0u: goto label_50dcf0;
        case 0x50dcf4u: goto label_50dcf4;
        case 0x50dcf8u: goto label_50dcf8;
        case 0x50dcfcu: goto label_50dcfc;
        case 0x50dd00u: goto label_50dd00;
        case 0x50dd04u: goto label_50dd04;
        case 0x50dd08u: goto label_50dd08;
        case 0x50dd0cu: goto label_50dd0c;
        case 0x50dd10u: goto label_50dd10;
        case 0x50dd14u: goto label_50dd14;
        case 0x50dd18u: goto label_50dd18;
        case 0x50dd1cu: goto label_50dd1c;
        case 0x50dd20u: goto label_50dd20;
        case 0x50dd24u: goto label_50dd24;
        case 0x50dd28u: goto label_50dd28;
        case 0x50dd2cu: goto label_50dd2c;
        case 0x50dd30u: goto label_50dd30;
        case 0x50dd34u: goto label_50dd34;
        case 0x50dd38u: goto label_50dd38;
        case 0x50dd3cu: goto label_50dd3c;
        case 0x50dd40u: goto label_50dd40;
        case 0x50dd44u: goto label_50dd44;
        case 0x50dd48u: goto label_50dd48;
        case 0x50dd4cu: goto label_50dd4c;
        case 0x50dd50u: goto label_50dd50;
        case 0x50dd54u: goto label_50dd54;
        case 0x50dd58u: goto label_50dd58;
        case 0x50dd5cu: goto label_50dd5c;
        case 0x50dd60u: goto label_50dd60;
        case 0x50dd64u: goto label_50dd64;
        case 0x50dd68u: goto label_50dd68;
        case 0x50dd6cu: goto label_50dd6c;
        case 0x50dd70u: goto label_50dd70;
        case 0x50dd74u: goto label_50dd74;
        case 0x50dd78u: goto label_50dd78;
        case 0x50dd7cu: goto label_50dd7c;
        case 0x50dd80u: goto label_50dd80;
        case 0x50dd84u: goto label_50dd84;
        case 0x50dd88u: goto label_50dd88;
        case 0x50dd8cu: goto label_50dd8c;
        case 0x50dd90u: goto label_50dd90;
        case 0x50dd94u: goto label_50dd94;
        case 0x50dd98u: goto label_50dd98;
        case 0x50dd9cu: goto label_50dd9c;
        case 0x50dda0u: goto label_50dda0;
        case 0x50dda4u: goto label_50dda4;
        case 0x50dda8u: goto label_50dda8;
        case 0x50ddacu: goto label_50ddac;
        case 0x50ddb0u: goto label_50ddb0;
        case 0x50ddb4u: goto label_50ddb4;
        case 0x50ddb8u: goto label_50ddb8;
        case 0x50ddbcu: goto label_50ddbc;
        case 0x50ddc0u: goto label_50ddc0;
        case 0x50ddc4u: goto label_50ddc4;
        case 0x50ddc8u: goto label_50ddc8;
        case 0x50ddccu: goto label_50ddcc;
        case 0x50ddd0u: goto label_50ddd0;
        case 0x50ddd4u: goto label_50ddd4;
        case 0x50ddd8u: goto label_50ddd8;
        case 0x50dddcu: goto label_50dddc;
        case 0x50dde0u: goto label_50dde0;
        case 0x50dde4u: goto label_50dde4;
        case 0x50dde8u: goto label_50dde8;
        case 0x50ddecu: goto label_50ddec;
        case 0x50ddf0u: goto label_50ddf0;
        case 0x50ddf4u: goto label_50ddf4;
        case 0x50ddf8u: goto label_50ddf8;
        case 0x50ddfcu: goto label_50ddfc;
        case 0x50de00u: goto label_50de00;
        case 0x50de04u: goto label_50de04;
        case 0x50de08u: goto label_50de08;
        case 0x50de0cu: goto label_50de0c;
        case 0x50de10u: goto label_50de10;
        case 0x50de14u: goto label_50de14;
        case 0x50de18u: goto label_50de18;
        case 0x50de1cu: goto label_50de1c;
        case 0x50de20u: goto label_50de20;
        case 0x50de24u: goto label_50de24;
        case 0x50de28u: goto label_50de28;
        case 0x50de2cu: goto label_50de2c;
        case 0x50de30u: goto label_50de30;
        case 0x50de34u: goto label_50de34;
        case 0x50de38u: goto label_50de38;
        case 0x50de3cu: goto label_50de3c;
        case 0x50de40u: goto label_50de40;
        case 0x50de44u: goto label_50de44;
        case 0x50de48u: goto label_50de48;
        case 0x50de4cu: goto label_50de4c;
        case 0x50de50u: goto label_50de50;
        case 0x50de54u: goto label_50de54;
        case 0x50de58u: goto label_50de58;
        case 0x50de5cu: goto label_50de5c;
        case 0x50de60u: goto label_50de60;
        case 0x50de64u: goto label_50de64;
        case 0x50de68u: goto label_50de68;
        case 0x50de6cu: goto label_50de6c;
        case 0x50de70u: goto label_50de70;
        case 0x50de74u: goto label_50de74;
        case 0x50de78u: goto label_50de78;
        case 0x50de7cu: goto label_50de7c;
        case 0x50de80u: goto label_50de80;
        case 0x50de84u: goto label_50de84;
        case 0x50de88u: goto label_50de88;
        case 0x50de8cu: goto label_50de8c;
        case 0x50de90u: goto label_50de90;
        case 0x50de94u: goto label_50de94;
        case 0x50de98u: goto label_50de98;
        case 0x50de9cu: goto label_50de9c;
        case 0x50dea0u: goto label_50dea0;
        case 0x50dea4u: goto label_50dea4;
        case 0x50dea8u: goto label_50dea8;
        case 0x50deacu: goto label_50deac;
        case 0x50deb0u: goto label_50deb0;
        case 0x50deb4u: goto label_50deb4;
        case 0x50deb8u: goto label_50deb8;
        case 0x50debcu: goto label_50debc;
        case 0x50dec0u: goto label_50dec0;
        case 0x50dec4u: goto label_50dec4;
        case 0x50dec8u: goto label_50dec8;
        case 0x50deccu: goto label_50decc;
        case 0x50ded0u: goto label_50ded0;
        case 0x50ded4u: goto label_50ded4;
        case 0x50ded8u: goto label_50ded8;
        case 0x50dedcu: goto label_50dedc;
        case 0x50dee0u: goto label_50dee0;
        case 0x50dee4u: goto label_50dee4;
        case 0x50dee8u: goto label_50dee8;
        case 0x50deecu: goto label_50deec;
        case 0x50def0u: goto label_50def0;
        case 0x50def4u: goto label_50def4;
        case 0x50def8u: goto label_50def8;
        case 0x50defcu: goto label_50defc;
        case 0x50df00u: goto label_50df00;
        case 0x50df04u: goto label_50df04;
        case 0x50df08u: goto label_50df08;
        case 0x50df0cu: goto label_50df0c;
        case 0x50df10u: goto label_50df10;
        case 0x50df14u: goto label_50df14;
        case 0x50df18u: goto label_50df18;
        case 0x50df1cu: goto label_50df1c;
        case 0x50df20u: goto label_50df20;
        case 0x50df24u: goto label_50df24;
        case 0x50df28u: goto label_50df28;
        case 0x50df2cu: goto label_50df2c;
        case 0x50df30u: goto label_50df30;
        case 0x50df34u: goto label_50df34;
        case 0x50df38u: goto label_50df38;
        case 0x50df3cu: goto label_50df3c;
        case 0x50df40u: goto label_50df40;
        case 0x50df44u: goto label_50df44;
        case 0x50df48u: goto label_50df48;
        case 0x50df4cu: goto label_50df4c;
        case 0x50df50u: goto label_50df50;
        case 0x50df54u: goto label_50df54;
        case 0x50df58u: goto label_50df58;
        case 0x50df5cu: goto label_50df5c;
        case 0x50df60u: goto label_50df60;
        case 0x50df64u: goto label_50df64;
        case 0x50df68u: goto label_50df68;
        case 0x50df6cu: goto label_50df6c;
        case 0x50df70u: goto label_50df70;
        case 0x50df74u: goto label_50df74;
        case 0x50df78u: goto label_50df78;
        case 0x50df7cu: goto label_50df7c;
        case 0x50df80u: goto label_50df80;
        case 0x50df84u: goto label_50df84;
        case 0x50df88u: goto label_50df88;
        case 0x50df8cu: goto label_50df8c;
        case 0x50df90u: goto label_50df90;
        case 0x50df94u: goto label_50df94;
        case 0x50df98u: goto label_50df98;
        case 0x50df9cu: goto label_50df9c;
        case 0x50dfa0u: goto label_50dfa0;
        case 0x50dfa4u: goto label_50dfa4;
        case 0x50dfa8u: goto label_50dfa8;
        case 0x50dfacu: goto label_50dfac;
        case 0x50dfb0u: goto label_50dfb0;
        case 0x50dfb4u: goto label_50dfb4;
        case 0x50dfb8u: goto label_50dfb8;
        case 0x50dfbcu: goto label_50dfbc;
        case 0x50dfc0u: goto label_50dfc0;
        case 0x50dfc4u: goto label_50dfc4;
        case 0x50dfc8u: goto label_50dfc8;
        case 0x50dfccu: goto label_50dfcc;
        case 0x50dfd0u: goto label_50dfd0;
        case 0x50dfd4u: goto label_50dfd4;
        case 0x50dfd8u: goto label_50dfd8;
        case 0x50dfdcu: goto label_50dfdc;
        case 0x50dfe0u: goto label_50dfe0;
        case 0x50dfe4u: goto label_50dfe4;
        case 0x50dfe8u: goto label_50dfe8;
        case 0x50dfecu: goto label_50dfec;
        case 0x50dff0u: goto label_50dff0;
        case 0x50dff4u: goto label_50dff4;
        case 0x50dff8u: goto label_50dff8;
        case 0x50dffcu: goto label_50dffc;
        case 0x50e000u: goto label_50e000;
        case 0x50e004u: goto label_50e004;
        case 0x50e008u: goto label_50e008;
        case 0x50e00cu: goto label_50e00c;
        case 0x50e010u: goto label_50e010;
        case 0x50e014u: goto label_50e014;
        case 0x50e018u: goto label_50e018;
        case 0x50e01cu: goto label_50e01c;
        case 0x50e020u: goto label_50e020;
        case 0x50e024u: goto label_50e024;
        case 0x50e028u: goto label_50e028;
        case 0x50e02cu: goto label_50e02c;
        case 0x50e030u: goto label_50e030;
        case 0x50e034u: goto label_50e034;
        case 0x50e038u: goto label_50e038;
        case 0x50e03cu: goto label_50e03c;
        case 0x50e040u: goto label_50e040;
        case 0x50e044u: goto label_50e044;
        case 0x50e048u: goto label_50e048;
        case 0x50e04cu: goto label_50e04c;
        case 0x50e050u: goto label_50e050;
        case 0x50e054u: goto label_50e054;
        case 0x50e058u: goto label_50e058;
        case 0x50e05cu: goto label_50e05c;
        case 0x50e060u: goto label_50e060;
        case 0x50e064u: goto label_50e064;
        case 0x50e068u: goto label_50e068;
        case 0x50e06cu: goto label_50e06c;
        case 0x50e070u: goto label_50e070;
        case 0x50e074u: goto label_50e074;
        case 0x50e078u: goto label_50e078;
        case 0x50e07cu: goto label_50e07c;
        case 0x50e080u: goto label_50e080;
        case 0x50e084u: goto label_50e084;
        case 0x50e088u: goto label_50e088;
        case 0x50e08cu: goto label_50e08c;
        case 0x50e090u: goto label_50e090;
        case 0x50e094u: goto label_50e094;
        case 0x50e098u: goto label_50e098;
        case 0x50e09cu: goto label_50e09c;
        case 0x50e0a0u: goto label_50e0a0;
        case 0x50e0a4u: goto label_50e0a4;
        case 0x50e0a8u: goto label_50e0a8;
        case 0x50e0acu: goto label_50e0ac;
        case 0x50e0b0u: goto label_50e0b0;
        case 0x50e0b4u: goto label_50e0b4;
        case 0x50e0b8u: goto label_50e0b8;
        case 0x50e0bcu: goto label_50e0bc;
        case 0x50e0c0u: goto label_50e0c0;
        case 0x50e0c4u: goto label_50e0c4;
        case 0x50e0c8u: goto label_50e0c8;
        case 0x50e0ccu: goto label_50e0cc;
        case 0x50e0d0u: goto label_50e0d0;
        case 0x50e0d4u: goto label_50e0d4;
        case 0x50e0d8u: goto label_50e0d8;
        case 0x50e0dcu: goto label_50e0dc;
        case 0x50e0e0u: goto label_50e0e0;
        case 0x50e0e4u: goto label_50e0e4;
        case 0x50e0e8u: goto label_50e0e8;
        case 0x50e0ecu: goto label_50e0ec;
        case 0x50e0f0u: goto label_50e0f0;
        case 0x50e0f4u: goto label_50e0f4;
        case 0x50e0f8u: goto label_50e0f8;
        case 0x50e0fcu: goto label_50e0fc;
        case 0x50e100u: goto label_50e100;
        case 0x50e104u: goto label_50e104;
        case 0x50e108u: goto label_50e108;
        case 0x50e10cu: goto label_50e10c;
        case 0x50e110u: goto label_50e110;
        case 0x50e114u: goto label_50e114;
        case 0x50e118u: goto label_50e118;
        case 0x50e11cu: goto label_50e11c;
        case 0x50e120u: goto label_50e120;
        case 0x50e124u: goto label_50e124;
        case 0x50e128u: goto label_50e128;
        case 0x50e12cu: goto label_50e12c;
        case 0x50e130u: goto label_50e130;
        case 0x50e134u: goto label_50e134;
        case 0x50e138u: goto label_50e138;
        case 0x50e13cu: goto label_50e13c;
        case 0x50e140u: goto label_50e140;
        case 0x50e144u: goto label_50e144;
        case 0x50e148u: goto label_50e148;
        case 0x50e14cu: goto label_50e14c;
        case 0x50e150u: goto label_50e150;
        case 0x50e154u: goto label_50e154;
        case 0x50e158u: goto label_50e158;
        case 0x50e15cu: goto label_50e15c;
        case 0x50e160u: goto label_50e160;
        case 0x50e164u: goto label_50e164;
        case 0x50e168u: goto label_50e168;
        case 0x50e16cu: goto label_50e16c;
        case 0x50e170u: goto label_50e170;
        case 0x50e174u: goto label_50e174;
        case 0x50e178u: goto label_50e178;
        case 0x50e17cu: goto label_50e17c;
        case 0x50e180u: goto label_50e180;
        case 0x50e184u: goto label_50e184;
        case 0x50e188u: goto label_50e188;
        case 0x50e18cu: goto label_50e18c;
        case 0x50e190u: goto label_50e190;
        case 0x50e194u: goto label_50e194;
        case 0x50e198u: goto label_50e198;
        case 0x50e19cu: goto label_50e19c;
        case 0x50e1a0u: goto label_50e1a0;
        case 0x50e1a4u: goto label_50e1a4;
        case 0x50e1a8u: goto label_50e1a8;
        case 0x50e1acu: goto label_50e1ac;
        case 0x50e1b0u: goto label_50e1b0;
        case 0x50e1b4u: goto label_50e1b4;
        case 0x50e1b8u: goto label_50e1b8;
        case 0x50e1bcu: goto label_50e1bc;
        case 0x50e1c0u: goto label_50e1c0;
        case 0x50e1c4u: goto label_50e1c4;
        case 0x50e1c8u: goto label_50e1c8;
        case 0x50e1ccu: goto label_50e1cc;
        case 0x50e1d0u: goto label_50e1d0;
        case 0x50e1d4u: goto label_50e1d4;
        case 0x50e1d8u: goto label_50e1d8;
        case 0x50e1dcu: goto label_50e1dc;
        case 0x50e1e0u: goto label_50e1e0;
        case 0x50e1e4u: goto label_50e1e4;
        case 0x50e1e8u: goto label_50e1e8;
        case 0x50e1ecu: goto label_50e1ec;
        case 0x50e1f0u: goto label_50e1f0;
        case 0x50e1f4u: goto label_50e1f4;
        case 0x50e1f8u: goto label_50e1f8;
        case 0x50e1fcu: goto label_50e1fc;
        case 0x50e200u: goto label_50e200;
        case 0x50e204u: goto label_50e204;
        case 0x50e208u: goto label_50e208;
        case 0x50e20cu: goto label_50e20c;
        case 0x50e210u: goto label_50e210;
        case 0x50e214u: goto label_50e214;
        case 0x50e218u: goto label_50e218;
        case 0x50e21cu: goto label_50e21c;
        case 0x50e220u: goto label_50e220;
        case 0x50e224u: goto label_50e224;
        case 0x50e228u: goto label_50e228;
        case 0x50e22cu: goto label_50e22c;
        case 0x50e230u: goto label_50e230;
        case 0x50e234u: goto label_50e234;
        case 0x50e238u: goto label_50e238;
        case 0x50e23cu: goto label_50e23c;
        case 0x50e240u: goto label_50e240;
        case 0x50e244u: goto label_50e244;
        case 0x50e248u: goto label_50e248;
        case 0x50e24cu: goto label_50e24c;
        case 0x50e250u: goto label_50e250;
        case 0x50e254u: goto label_50e254;
        case 0x50e258u: goto label_50e258;
        case 0x50e25cu: goto label_50e25c;
        case 0x50e260u: goto label_50e260;
        case 0x50e264u: goto label_50e264;
        case 0x50e268u: goto label_50e268;
        case 0x50e26cu: goto label_50e26c;
        case 0x50e270u: goto label_50e270;
        case 0x50e274u: goto label_50e274;
        case 0x50e278u: goto label_50e278;
        case 0x50e27cu: goto label_50e27c;
        case 0x50e280u: goto label_50e280;
        case 0x50e284u: goto label_50e284;
        case 0x50e288u: goto label_50e288;
        case 0x50e28cu: goto label_50e28c;
        case 0x50e290u: goto label_50e290;
        case 0x50e294u: goto label_50e294;
        case 0x50e298u: goto label_50e298;
        case 0x50e29cu: goto label_50e29c;
        case 0x50e2a0u: goto label_50e2a0;
        case 0x50e2a4u: goto label_50e2a4;
        case 0x50e2a8u: goto label_50e2a8;
        case 0x50e2acu: goto label_50e2ac;
        case 0x50e2b0u: goto label_50e2b0;
        case 0x50e2b4u: goto label_50e2b4;
        case 0x50e2b8u: goto label_50e2b8;
        case 0x50e2bcu: goto label_50e2bc;
        case 0x50e2c0u: goto label_50e2c0;
        case 0x50e2c4u: goto label_50e2c4;
        case 0x50e2c8u: goto label_50e2c8;
        case 0x50e2ccu: goto label_50e2cc;
        case 0x50e2d0u: goto label_50e2d0;
        case 0x50e2d4u: goto label_50e2d4;
        case 0x50e2d8u: goto label_50e2d8;
        case 0x50e2dcu: goto label_50e2dc;
        case 0x50e2e0u: goto label_50e2e0;
        case 0x50e2e4u: goto label_50e2e4;
        case 0x50e2e8u: goto label_50e2e8;
        case 0x50e2ecu: goto label_50e2ec;
        case 0x50e2f0u: goto label_50e2f0;
        case 0x50e2f4u: goto label_50e2f4;
        case 0x50e2f8u: goto label_50e2f8;
        case 0x50e2fcu: goto label_50e2fc;
        case 0x50e300u: goto label_50e300;
        case 0x50e304u: goto label_50e304;
        case 0x50e308u: goto label_50e308;
        case 0x50e30cu: goto label_50e30c;
        case 0x50e310u: goto label_50e310;
        case 0x50e314u: goto label_50e314;
        case 0x50e318u: goto label_50e318;
        case 0x50e31cu: goto label_50e31c;
        case 0x50e320u: goto label_50e320;
        case 0x50e324u: goto label_50e324;
        case 0x50e328u: goto label_50e328;
        case 0x50e32cu: goto label_50e32c;
        case 0x50e330u: goto label_50e330;
        case 0x50e334u: goto label_50e334;
        case 0x50e338u: goto label_50e338;
        case 0x50e33cu: goto label_50e33c;
        case 0x50e340u: goto label_50e340;
        case 0x50e344u: goto label_50e344;
        case 0x50e348u: goto label_50e348;
        case 0x50e34cu: goto label_50e34c;
        case 0x50e350u: goto label_50e350;
        case 0x50e354u: goto label_50e354;
        case 0x50e358u: goto label_50e358;
        case 0x50e35cu: goto label_50e35c;
        case 0x50e360u: goto label_50e360;
        case 0x50e364u: goto label_50e364;
        case 0x50e368u: goto label_50e368;
        case 0x50e36cu: goto label_50e36c;
        case 0x50e370u: goto label_50e370;
        case 0x50e374u: goto label_50e374;
        case 0x50e378u: goto label_50e378;
        case 0x50e37cu: goto label_50e37c;
        case 0x50e380u: goto label_50e380;
        case 0x50e384u: goto label_50e384;
        case 0x50e388u: goto label_50e388;
        case 0x50e38cu: goto label_50e38c;
        case 0x50e390u: goto label_50e390;
        case 0x50e394u: goto label_50e394;
        case 0x50e398u: goto label_50e398;
        case 0x50e39cu: goto label_50e39c;
        case 0x50e3a0u: goto label_50e3a0;
        case 0x50e3a4u: goto label_50e3a4;
        case 0x50e3a8u: goto label_50e3a8;
        case 0x50e3acu: goto label_50e3ac;
        case 0x50e3b0u: goto label_50e3b0;
        case 0x50e3b4u: goto label_50e3b4;
        case 0x50e3b8u: goto label_50e3b8;
        case 0x50e3bcu: goto label_50e3bc;
        case 0x50e3c0u: goto label_50e3c0;
        case 0x50e3c4u: goto label_50e3c4;
        case 0x50e3c8u: goto label_50e3c8;
        case 0x50e3ccu: goto label_50e3cc;
        case 0x50e3d0u: goto label_50e3d0;
        case 0x50e3d4u: goto label_50e3d4;
        case 0x50e3d8u: goto label_50e3d8;
        case 0x50e3dcu: goto label_50e3dc;
        case 0x50e3e0u: goto label_50e3e0;
        case 0x50e3e4u: goto label_50e3e4;
        case 0x50e3e8u: goto label_50e3e8;
        case 0x50e3ecu: goto label_50e3ec;
        case 0x50e3f0u: goto label_50e3f0;
        case 0x50e3f4u: goto label_50e3f4;
        case 0x50e3f8u: goto label_50e3f8;
        case 0x50e3fcu: goto label_50e3fc;
        case 0x50e400u: goto label_50e400;
        case 0x50e404u: goto label_50e404;
        case 0x50e408u: goto label_50e408;
        case 0x50e40cu: goto label_50e40c;
        case 0x50e410u: goto label_50e410;
        case 0x50e414u: goto label_50e414;
        case 0x50e418u: goto label_50e418;
        case 0x50e41cu: goto label_50e41c;
        case 0x50e420u: goto label_50e420;
        case 0x50e424u: goto label_50e424;
        case 0x50e428u: goto label_50e428;
        case 0x50e42cu: goto label_50e42c;
        case 0x50e430u: goto label_50e430;
        case 0x50e434u: goto label_50e434;
        case 0x50e438u: goto label_50e438;
        case 0x50e43cu: goto label_50e43c;
        case 0x50e440u: goto label_50e440;
        case 0x50e444u: goto label_50e444;
        case 0x50e448u: goto label_50e448;
        case 0x50e44cu: goto label_50e44c;
        case 0x50e450u: goto label_50e450;
        case 0x50e454u: goto label_50e454;
        case 0x50e458u: goto label_50e458;
        case 0x50e45cu: goto label_50e45c;
        case 0x50e460u: goto label_50e460;
        case 0x50e464u: goto label_50e464;
        case 0x50e468u: goto label_50e468;
        case 0x50e46cu: goto label_50e46c;
        case 0x50e470u: goto label_50e470;
        case 0x50e474u: goto label_50e474;
        case 0x50e478u: goto label_50e478;
        case 0x50e47cu: goto label_50e47c;
        case 0x50e480u: goto label_50e480;
        case 0x50e484u: goto label_50e484;
        case 0x50e488u: goto label_50e488;
        case 0x50e48cu: goto label_50e48c;
        case 0x50e490u: goto label_50e490;
        case 0x50e494u: goto label_50e494;
        case 0x50e498u: goto label_50e498;
        case 0x50e49cu: goto label_50e49c;
        case 0x50e4a0u: goto label_50e4a0;
        case 0x50e4a4u: goto label_50e4a4;
        case 0x50e4a8u: goto label_50e4a8;
        case 0x50e4acu: goto label_50e4ac;
        case 0x50e4b0u: goto label_50e4b0;
        case 0x50e4b4u: goto label_50e4b4;
        case 0x50e4b8u: goto label_50e4b8;
        case 0x50e4bcu: goto label_50e4bc;
        case 0x50e4c0u: goto label_50e4c0;
        case 0x50e4c4u: goto label_50e4c4;
        case 0x50e4c8u: goto label_50e4c8;
        case 0x50e4ccu: goto label_50e4cc;
        case 0x50e4d0u: goto label_50e4d0;
        case 0x50e4d4u: goto label_50e4d4;
        case 0x50e4d8u: goto label_50e4d8;
        case 0x50e4dcu: goto label_50e4dc;
        case 0x50e4e0u: goto label_50e4e0;
        case 0x50e4e4u: goto label_50e4e4;
        case 0x50e4e8u: goto label_50e4e8;
        case 0x50e4ecu: goto label_50e4ec;
        case 0x50e4f0u: goto label_50e4f0;
        case 0x50e4f4u: goto label_50e4f4;
        case 0x50e4f8u: goto label_50e4f8;
        case 0x50e4fcu: goto label_50e4fc;
        case 0x50e500u: goto label_50e500;
        case 0x50e504u: goto label_50e504;
        case 0x50e508u: goto label_50e508;
        case 0x50e50cu: goto label_50e50c;
        case 0x50e510u: goto label_50e510;
        case 0x50e514u: goto label_50e514;
        case 0x50e518u: goto label_50e518;
        case 0x50e51cu: goto label_50e51c;
        case 0x50e520u: goto label_50e520;
        case 0x50e524u: goto label_50e524;
        case 0x50e528u: goto label_50e528;
        case 0x50e52cu: goto label_50e52c;
        case 0x50e530u: goto label_50e530;
        case 0x50e534u: goto label_50e534;
        case 0x50e538u: goto label_50e538;
        case 0x50e53cu: goto label_50e53c;
        case 0x50e540u: goto label_50e540;
        case 0x50e544u: goto label_50e544;
        case 0x50e548u: goto label_50e548;
        case 0x50e54cu: goto label_50e54c;
        case 0x50e550u: goto label_50e550;
        case 0x50e554u: goto label_50e554;
        case 0x50e558u: goto label_50e558;
        case 0x50e55cu: goto label_50e55c;
        case 0x50e560u: goto label_50e560;
        case 0x50e564u: goto label_50e564;
        case 0x50e568u: goto label_50e568;
        case 0x50e56cu: goto label_50e56c;
        case 0x50e570u: goto label_50e570;
        case 0x50e574u: goto label_50e574;
        case 0x50e578u: goto label_50e578;
        case 0x50e57cu: goto label_50e57c;
        case 0x50e580u: goto label_50e580;
        case 0x50e584u: goto label_50e584;
        case 0x50e588u: goto label_50e588;
        case 0x50e58cu: goto label_50e58c;
        case 0x50e590u: goto label_50e590;
        case 0x50e594u: goto label_50e594;
        case 0x50e598u: goto label_50e598;
        case 0x50e59cu: goto label_50e59c;
        case 0x50e5a0u: goto label_50e5a0;
        case 0x50e5a4u: goto label_50e5a4;
        case 0x50e5a8u: goto label_50e5a8;
        case 0x50e5acu: goto label_50e5ac;
        case 0x50e5b0u: goto label_50e5b0;
        case 0x50e5b4u: goto label_50e5b4;
        case 0x50e5b8u: goto label_50e5b8;
        case 0x50e5bcu: goto label_50e5bc;
        case 0x50e5c0u: goto label_50e5c0;
        case 0x50e5c4u: goto label_50e5c4;
        case 0x50e5c8u: goto label_50e5c8;
        case 0x50e5ccu: goto label_50e5cc;
        case 0x50e5d0u: goto label_50e5d0;
        case 0x50e5d4u: goto label_50e5d4;
        case 0x50e5d8u: goto label_50e5d8;
        case 0x50e5dcu: goto label_50e5dc;
        case 0x50e5e0u: goto label_50e5e0;
        case 0x50e5e4u: goto label_50e5e4;
        case 0x50e5e8u: goto label_50e5e8;
        case 0x50e5ecu: goto label_50e5ec;
        case 0x50e5f0u: goto label_50e5f0;
        case 0x50e5f4u: goto label_50e5f4;
        case 0x50e5f8u: goto label_50e5f8;
        case 0x50e5fcu: goto label_50e5fc;
        case 0x50e600u: goto label_50e600;
        case 0x50e604u: goto label_50e604;
        case 0x50e608u: goto label_50e608;
        case 0x50e60cu: goto label_50e60c;
        case 0x50e610u: goto label_50e610;
        case 0x50e614u: goto label_50e614;
        case 0x50e618u: goto label_50e618;
        case 0x50e61cu: goto label_50e61c;
        case 0x50e620u: goto label_50e620;
        case 0x50e624u: goto label_50e624;
        case 0x50e628u: goto label_50e628;
        case 0x50e62cu: goto label_50e62c;
        case 0x50e630u: goto label_50e630;
        case 0x50e634u: goto label_50e634;
        case 0x50e638u: goto label_50e638;
        case 0x50e63cu: goto label_50e63c;
        case 0x50e640u: goto label_50e640;
        case 0x50e644u: goto label_50e644;
        case 0x50e648u: goto label_50e648;
        case 0x50e64cu: goto label_50e64c;
        case 0x50e650u: goto label_50e650;
        case 0x50e654u: goto label_50e654;
        case 0x50e658u: goto label_50e658;
        case 0x50e65cu: goto label_50e65c;
        case 0x50e660u: goto label_50e660;
        case 0x50e664u: goto label_50e664;
        case 0x50e668u: goto label_50e668;
        case 0x50e66cu: goto label_50e66c;
        case 0x50e670u: goto label_50e670;
        case 0x50e674u: goto label_50e674;
        case 0x50e678u: goto label_50e678;
        case 0x50e67cu: goto label_50e67c;
        case 0x50e680u: goto label_50e680;
        case 0x50e684u: goto label_50e684;
        case 0x50e688u: goto label_50e688;
        case 0x50e68cu: goto label_50e68c;
        case 0x50e690u: goto label_50e690;
        case 0x50e694u: goto label_50e694;
        case 0x50e698u: goto label_50e698;
        case 0x50e69cu: goto label_50e69c;
        case 0x50e6a0u: goto label_50e6a0;
        case 0x50e6a4u: goto label_50e6a4;
        case 0x50e6a8u: goto label_50e6a8;
        case 0x50e6acu: goto label_50e6ac;
        case 0x50e6b0u: goto label_50e6b0;
        case 0x50e6b4u: goto label_50e6b4;
        case 0x50e6b8u: goto label_50e6b8;
        case 0x50e6bcu: goto label_50e6bc;
        case 0x50e6c0u: goto label_50e6c0;
        case 0x50e6c4u: goto label_50e6c4;
        case 0x50e6c8u: goto label_50e6c8;
        case 0x50e6ccu: goto label_50e6cc;
        case 0x50e6d0u: goto label_50e6d0;
        case 0x50e6d4u: goto label_50e6d4;
        case 0x50e6d8u: goto label_50e6d8;
        case 0x50e6dcu: goto label_50e6dc;
        case 0x50e6e0u: goto label_50e6e0;
        case 0x50e6e4u: goto label_50e6e4;
        case 0x50e6e8u: goto label_50e6e8;
        case 0x50e6ecu: goto label_50e6ec;
        case 0x50e6f0u: goto label_50e6f0;
        case 0x50e6f4u: goto label_50e6f4;
        case 0x50e6f8u: goto label_50e6f8;
        case 0x50e6fcu: goto label_50e6fc;
        case 0x50e700u: goto label_50e700;
        case 0x50e704u: goto label_50e704;
        case 0x50e708u: goto label_50e708;
        case 0x50e70cu: goto label_50e70c;
        case 0x50e710u: goto label_50e710;
        case 0x50e714u: goto label_50e714;
        case 0x50e718u: goto label_50e718;
        case 0x50e71cu: goto label_50e71c;
        case 0x50e720u: goto label_50e720;
        case 0x50e724u: goto label_50e724;
        case 0x50e728u: goto label_50e728;
        case 0x50e72cu: goto label_50e72c;
        case 0x50e730u: goto label_50e730;
        case 0x50e734u: goto label_50e734;
        case 0x50e738u: goto label_50e738;
        case 0x50e73cu: goto label_50e73c;
        case 0x50e740u: goto label_50e740;
        case 0x50e744u: goto label_50e744;
        case 0x50e748u: goto label_50e748;
        case 0x50e74cu: goto label_50e74c;
        case 0x50e750u: goto label_50e750;
        case 0x50e754u: goto label_50e754;
        case 0x50e758u: goto label_50e758;
        case 0x50e75cu: goto label_50e75c;
        case 0x50e760u: goto label_50e760;
        case 0x50e764u: goto label_50e764;
        case 0x50e768u: goto label_50e768;
        case 0x50e76cu: goto label_50e76c;
        case 0x50e770u: goto label_50e770;
        case 0x50e774u: goto label_50e774;
        case 0x50e778u: goto label_50e778;
        case 0x50e77cu: goto label_50e77c;
        case 0x50e780u: goto label_50e780;
        case 0x50e784u: goto label_50e784;
        case 0x50e788u: goto label_50e788;
        case 0x50e78cu: goto label_50e78c;
        case 0x50e790u: goto label_50e790;
        case 0x50e794u: goto label_50e794;
        case 0x50e798u: goto label_50e798;
        case 0x50e79cu: goto label_50e79c;
        case 0x50e7a0u: goto label_50e7a0;
        case 0x50e7a4u: goto label_50e7a4;
        case 0x50e7a8u: goto label_50e7a8;
        case 0x50e7acu: goto label_50e7ac;
        default: break;
    }

    ctx->pc = 0x50d700u;

label_50d700:
    // 0x50d700: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x50d700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_50d704:
    // 0x50d704: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x50d704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_50d708:
    // 0x50d708: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x50d708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_50d70c:
    // 0x50d70c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x50d70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_50d710:
    // 0x50d710: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x50d710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_50d714:
    // 0x50d714: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x50d714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_50d718:
    // 0x50d718: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x50d718u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_50d71c:
    // 0x50d71c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x50d71cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_50d720:
    // 0x50d720: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x50d720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_50d724:
    // 0x50d724: 0xc4950074  lwc1        $f21, 0x74($a0)
    ctx->pc = 0x50d724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_50d728:
    // 0x50d728: 0x8c900080  lw          $s0, 0x80($a0)
    ctx->pc = 0x50d728u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_50d72c:
    // 0x50d72c: 0x8c85006c  lw          $a1, 0x6C($a0)
    ctx->pc = 0x50d72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_50d730:
    // 0x50d730: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x50d730u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_50d734:
    // 0x50d734: 0xc4740020  lwc1        $f20, 0x20($v1)
    ctx->pc = 0x50d734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_50d738:
    // 0x50d738: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x50d738u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_50d73c:
    // 0x50d73c: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_50d740:
    if (ctx->pc == 0x50D740u) {
        ctx->pc = 0x50D740u;
            // 0x50d740: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x50D744u;
        goto label_50d744;
    }
    ctx->pc = 0x50D73Cu;
    {
        const bool branch_taken_0x50d73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x50d73c) {
            ctx->pc = 0x50D740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50D73Cu;
            // 0x50d740: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50D77Cu;
            goto label_50d77c;
        }
    }
    ctx->pc = 0x50D744u;
label_50d744:
    // 0x50d744: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x50d744u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_50d748:
    // 0x50d748: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x50d748u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50d74c:
    // 0x50d74c: 0xc1430dc  jal         func_50C370
label_50d750:
    if (ctx->pc == 0x50D750u) {
        ctx->pc = 0x50D750u;
            // 0x50d750: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50D754u;
        goto label_50d754;
    }
    ctx->pc = 0x50D74Cu;
    SET_GPR_U32(ctx, 31, 0x50D754u);
    ctx->pc = 0x50D750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D74Cu;
            // 0x50d750: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50C370u;
    if (runtime->hasFunction(0x50C370u)) {
        auto targetFn = runtime->lookupFunction(0x50C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D754u; }
        if (ctx->pc != 0x50D754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050C370_0x50c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D754u; }
        if (ctx->pc != 0x50D754u) { return; }
    }
    ctx->pc = 0x50D754u;
label_50d754:
    // 0x50d754: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x50d754u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_50d758:
    // 0x50d758: 0x267302d0  addiu       $s3, $s3, 0x2D0
    ctx->pc = 0x50d758u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 720));
label_50d75c:
    // 0x50d75c: 0x251182a  slt         $v1, $s2, $s1
    ctx->pc = 0x50d75cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_50d760:
    // 0x50d760: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_50d764:
    if (ctx->pc == 0x50D764u) {
        ctx->pc = 0x50D768u;
        goto label_50d768;
    }
    ctx->pc = 0x50D760u;
    {
        const bool branch_taken_0x50d760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x50d760) {
            ctx->pc = 0x50D74Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50d74c;
        }
    }
    ctx->pc = 0x50D768u;
label_50d768:
    // 0x50d768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50d768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50d76c:
    // 0x50d76c: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x50d76cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
label_50d770:
    // 0x50d770: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x50d770u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_50d774:
    // 0x50d774: 0x10000004  b           . + 4 + (0x4 << 2)
label_50d778:
    if (ctx->pc == 0x50D778u) {
        ctx->pc = 0x50D778u;
            // 0x50d778: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->pc = 0x50D77Cu;
        goto label_50d77c;
    }
    ctx->pc = 0x50D774u;
    {
        const bool branch_taken_0x50d774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D774u;
            // 0x50d778: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d774) {
            ctx->pc = 0x50D788u;
            goto label_50d788;
        }
    }
    ctx->pc = 0x50D77Cu;
label_50d77c:
    // 0x50d77c: 0x14a0ffee  bnez        $a1, . + 4 + (-0x12 << 2)
label_50d780:
    if (ctx->pc == 0x50D780u) {
        ctx->pc = 0x50D780u;
            // 0x50d780: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->pc = 0x50D784u;
        goto label_50d784;
    }
    ctx->pc = 0x50D77Cu;
    {
        const bool branch_taken_0x50d77c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x50D780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D77Cu;
            // 0x50d780: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d77c) {
            ctx->pc = 0x50D738u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50d738;
        }
    }
    ctx->pc = 0x50D784u;
label_50d784:
    // 0x50d784: 0x0  nop
    ctx->pc = 0x50d784u;
    // NOP
label_50d788:
    // 0x50d788: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x50d788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_50d78c:
    // 0x50d78c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x50d78cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_50d790:
    // 0x50d790: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x50d790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_50d794:
    // 0x50d794: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x50d794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_50d798:
    // 0x50d798: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x50d798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_50d79c:
    // 0x50d79c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x50d79cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50d7a0:
    // 0x50d7a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x50d7a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50d7a4:
    // 0x50d7a4: 0x3e00008  jr          $ra
label_50d7a8:
    if (ctx->pc == 0x50D7A8u) {
        ctx->pc = 0x50D7A8u;
            // 0x50d7a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x50D7ACu;
        goto label_50d7ac;
    }
    ctx->pc = 0x50D7A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50D7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D7A4u;
            // 0x50d7a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50D7ACu;
label_50d7ac:
    // 0x50d7ac: 0x0  nop
    ctx->pc = 0x50d7acu;
    // NOP
label_50d7b0:
    // 0x50d7b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x50d7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_50d7b4:
    // 0x50d7b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x50d7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_50d7b8:
    // 0x50d7b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50d7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_50d7bc:
    // 0x50d7bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50d7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50d7c0:
    // 0x50d7c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50d7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50d7c4:
    // 0x50d7c4: 0x8c910080  lw          $s1, 0x80($a0)
    ctx->pc = 0x50d7c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_50d7c8:
    // 0x50d7c8: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_50d7cc:
    if (ctx->pc == 0x50D7CCu) {
        ctx->pc = 0x50D7CCu;
            // 0x50d7cc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50D7D0u;
        goto label_50d7d0;
    }
    ctx->pc = 0x50D7C8u;
    {
        const bool branch_taken_0x50d7c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D7C8u;
            // 0x50d7cc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d7c8) {
            ctx->pc = 0x50D804u;
            goto label_50d804;
        }
    }
    ctx->pc = 0x50D7D0u;
label_50d7d0:
    // 0x50d7d0: 0x8e50006c  lw          $s0, 0x6C($s2)
    ctx->pc = 0x50d7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_50d7d4:
    // 0x50d7d4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x50d7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_50d7d8:
    // 0x50d7d8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_50d7dc:
    if (ctx->pc == 0x50D7DCu) {
        ctx->pc = 0x50D7E0u;
        goto label_50d7e0;
    }
    ctx->pc = 0x50D7D8u;
    {
        const bool branch_taken_0x50d7d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d7d8) {
            ctx->pc = 0x50D7F0u;
            goto label_50d7f0;
        }
    }
    ctx->pc = 0x50D7E0u;
label_50d7e0:
    // 0x50d7e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50d7e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50d7e4:
    // 0x50d7e4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x50d7e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_50d7e8:
    // 0x50d7e8: 0x320f809  jalr        $t9
label_50d7ec:
    if (ctx->pc == 0x50D7ECu) {
        ctx->pc = 0x50D7ECu;
            // 0x50d7ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50D7F0u;
        goto label_50d7f0;
    }
    ctx->pc = 0x50D7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50D7F0u);
        ctx->pc = 0x50D7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D7E8u;
            // 0x50d7ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50D7F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50D7F0u; }
            if (ctx->pc != 0x50D7F0u) { return; }
        }
        }
    }
    ctx->pc = 0x50D7F0u;
label_50d7f0:
    // 0x50d7f0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x50d7f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_50d7f4:
    // 0x50d7f4: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_50d7f8:
    if (ctx->pc == 0x50D7F8u) {
        ctx->pc = 0x50D7F8u;
            // 0x50d7f8: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->pc = 0x50D7FCu;
        goto label_50d7fc;
    }
    ctx->pc = 0x50D7F4u;
    {
        const bool branch_taken_0x50d7f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x50D7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D7F4u;
            // 0x50d7f8: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d7f4) {
            ctx->pc = 0x50D7D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50d7d4;
        }
    }
    ctx->pc = 0x50D7FCu;
label_50d7fc:
    // 0x50d7fc: 0xc04008c  jal         func_100230
label_50d800:
    if (ctx->pc == 0x50D800u) {
        ctx->pc = 0x50D800u;
            // 0x50d800: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->pc = 0x50D804u;
        goto label_50d804;
    }
    ctx->pc = 0x50D7FCu;
    SET_GPR_U32(ctx, 31, 0x50D804u);
    ctx->pc = 0x50D800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D7FCu;
            // 0x50d800: 0x8e440080  lw          $a0, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D804u; }
        if (ctx->pc != 0x50D804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D804u; }
        if (ctx->pc != 0x50D804u) { return; }
    }
    ctx->pc = 0x50D804u;
label_50d804:
    // 0x50d804: 0xae400080  sw          $zero, 0x80($s2)
    ctx->pc = 0x50d804u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
label_50d808:
    // 0x50d808: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x50d808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_50d80c:
    // 0x50d80c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_50d810:
    if (ctx->pc == 0x50D810u) {
        ctx->pc = 0x50D810u;
            // 0x50d810: 0xae400084  sw          $zero, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x50D814u;
        goto label_50d814;
    }
    ctx->pc = 0x50D80Cu;
    {
        const bool branch_taken_0x50d80c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d80c) {
            ctx->pc = 0x50D810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50D80Cu;
            // 0x50d810: 0xae400084  sw          $zero, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50D824u;
            goto label_50d824;
        }
    }
    ctx->pc = 0x50D814u;
label_50d814:
    // 0x50d814: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x50d814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_50d818:
    // 0x50d818: 0xc0407c0  jal         func_101F00
label_50d81c:
    if (ctx->pc == 0x50D81Cu) {
        ctx->pc = 0x50D81Cu;
            // 0x50d81c: 0x24a5cce0  addiu       $a1, $a1, -0x3320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954208));
        ctx->pc = 0x50D820u;
        goto label_50d820;
    }
    ctx->pc = 0x50D818u;
    SET_GPR_U32(ctx, 31, 0x50D820u);
    ctx->pc = 0x50D81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D818u;
            // 0x50d81c: 0x24a5cce0  addiu       $a1, $a1, -0x3320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D820u; }
        if (ctx->pc != 0x50D820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D820u; }
        if (ctx->pc != 0x50D820u) { return; }
    }
    ctx->pc = 0x50D820u;
label_50d820:
    // 0x50d820: 0xae400084  sw          $zero, 0x84($s2)
    ctx->pc = 0x50d820u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
label_50d824:
    // 0x50d824: 0x8e44007c  lw          $a0, 0x7C($s2)
    ctx->pc = 0x50d824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_50d828:
    // 0x50d828: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_50d82c:
    if (ctx->pc == 0x50D82Cu) {
        ctx->pc = 0x50D82Cu;
            // 0x50d82c: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x50D830u;
        goto label_50d830;
    }
    ctx->pc = 0x50D828u;
    {
        const bool branch_taken_0x50d828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d828) {
            ctx->pc = 0x50D82Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50D828u;
            // 0x50d82c: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50D83Cu;
            goto label_50d83c;
        }
    }
    ctx->pc = 0x50D830u;
label_50d830:
    // 0x50d830: 0xc04008c  jal         func_100230
label_50d834:
    if (ctx->pc == 0x50D834u) {
        ctx->pc = 0x50D838u;
        goto label_50d838;
    }
    ctx->pc = 0x50D830u;
    SET_GPR_U32(ctx, 31, 0x50D838u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D838u; }
        if (ctx->pc != 0x50D838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D838u; }
        if (ctx->pc != 0x50D838u) { return; }
    }
    ctx->pc = 0x50D838u;
label_50d838:
    // 0x50d838: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x50d838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_50d83c:
    // 0x50d83c: 0xc0d37dc  jal         func_34DF70
label_50d840:
    if (ctx->pc == 0x50D840u) {
        ctx->pc = 0x50D840u;
            // 0x50d840: 0xae40007c  sw          $zero, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x50D844u;
        goto label_50d844;
    }
    ctx->pc = 0x50D83Cu;
    SET_GPR_U32(ctx, 31, 0x50D844u);
    ctx->pc = 0x50D840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D83Cu;
            // 0x50d840: 0xae40007c  sw          $zero, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D844u; }
        if (ctx->pc != 0x50D844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D844u; }
        if (ctx->pc != 0x50D844u) { return; }
    }
    ctx->pc = 0x50D844u;
label_50d844:
    // 0x50d844: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x50d844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_50d848:
    // 0x50d848: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x50d848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50d84c:
    // 0x50d84c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50d84cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50d850:
    // 0x50d850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50d850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50d854:
    // 0x50d854: 0x3e00008  jr          $ra
label_50d858:
    if (ctx->pc == 0x50D858u) {
        ctx->pc = 0x50D858u;
            // 0x50d858: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x50D85Cu;
        goto label_50d85c;
    }
    ctx->pc = 0x50D854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50D858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50D854u;
            // 0x50d858: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50D85Cu;
label_50d85c:
    // 0x50d85c: 0x0  nop
    ctx->pc = 0x50d85cu;
    // NOP
label_50d860:
    // 0x50d860: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x50d860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_50d864:
    // 0x50d864: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x50d864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_50d868:
    // 0x50d868: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x50d868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_50d86c:
    // 0x50d86c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x50d86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_50d870:
    // 0x50d870: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x50d870u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50d874:
    // 0x50d874: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x50d874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_50d878:
    // 0x50d878: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x50d878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_50d87c:
    // 0x50d87c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x50d87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_50d880:
    // 0x50d880: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x50d880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_50d884:
    // 0x50d884: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x50d884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_50d888:
    // 0x50d888: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x50d888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_50d88c:
    // 0x50d88c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x50d88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_50d890:
    // 0x50d890: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x50d890u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_50d894:
    // 0x50d894: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x50d894u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_50d898:
    // 0x50d898: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x50d898u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_50d89c:
    // 0x50d89c: 0x8c97006c  lw          $s7, 0x6C($a0)
    ctx->pc = 0x50d89cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_50d8a0:
    // 0x50d8a0: 0x8c950070  lw          $s5, 0x70($a0)
    ctx->pc = 0x50d8a0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_50d8a4:
    // 0x50d8a4: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x50d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_50d8a8:
    // 0x50d8a8: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x50d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_50d8ac:
    // 0x50d8ac: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x50d8acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_50d8b0:
    // 0x50d8b0: 0x2f51018  mult        $v0, $s7, $s5
    ctx->pc = 0x50d8b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_50d8b4:
    // 0x50d8b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50d8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50d8b8:
    // 0x50d8b8: 0xc040138  jal         func_1004E0
label_50d8bc:
    if (ctx->pc == 0x50D8BCu) {
        ctx->pc = 0x50D8BCu;
            // 0x50d8bc: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x50D8C0u;
        goto label_50d8c0;
    }
    ctx->pc = 0x50D8B8u;
    SET_GPR_U32(ctx, 31, 0x50D8C0u);
    ctx->pc = 0x50D8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D8B8u;
            // 0x50d8bc: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D8C0u; }
        if (ctx->pc != 0x50D8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D8C0u; }
        if (ctx->pc != 0x50D8C0u) { return; }
    }
    ctx->pc = 0x50D8C0u;
label_50d8c0:
    // 0x50d8c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x50d8c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50d8c4:
    // 0x50d8c4: 0xafc20080  sw          $v0, 0x80($fp)
    ctx->pc = 0x50d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 128), GPR_U32(ctx, 2));
label_50d8c8:
    // 0x50d8c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x50d8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50d8cc:
    // 0x50d8cc: 0xc04a576  jal         func_1295D8
label_50d8d0:
    if (ctx->pc == 0x50D8D0u) {
        ctx->pc = 0x50D8D0u;
            // 0x50d8d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50D8D4u;
        goto label_50d8d4;
    }
    ctx->pc = 0x50D8CCu;
    SET_GPR_U32(ctx, 31, 0x50D8D4u);
    ctx->pc = 0x50D8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D8CCu;
            // 0x50d8d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D8D4u; }
        if (ctx->pc != 0x50D8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D8D4u; }
        if (ctx->pc != 0x50D8D4u) { return; }
    }
    ctx->pc = 0x50D8D4u;
label_50d8d4:
    // 0x50d8d4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x50d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_50d8d8:
    // 0x50d8d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x50d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_50d8dc:
    // 0x50d8dc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x50d8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_50d8e0:
    // 0x50d8e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x50d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_50d8e4:
    // 0x50d8e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x50d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_50d8e8:
    // 0x50d8e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x50d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_50d8ec:
    // 0x50d8ec: 0xc040138  jal         func_1004E0
label_50d8f0:
    if (ctx->pc == 0x50D8F0u) {
        ctx->pc = 0x50D8F0u;
            // 0x50d8f0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x50D8F4u;
        goto label_50d8f4;
    }
    ctx->pc = 0x50D8ECu;
    SET_GPR_U32(ctx, 31, 0x50D8F4u);
    ctx->pc = 0x50D8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D8ECu;
            // 0x50d8f0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D8F4u; }
        if (ctx->pc != 0x50D8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D8F4u; }
        if (ctx->pc != 0x50D8F4u) { return; }
    }
    ctx->pc = 0x50D8F4u;
label_50d8f4:
    // 0x50d8f4: 0x8fa800b0  lw          $t0, 0xB0($sp)
    ctx->pc = 0x50d8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_50d8f8:
    // 0x50d8f8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x50d8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_50d8fc:
    // 0x50d8fc: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x50d8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_50d900:
    // 0x50d900: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x50d900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50d904:
    // 0x50d904: 0x24a5cdf0  addiu       $a1, $a1, -0x3210
    ctx->pc = 0x50d904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954480));
label_50d908:
    // 0x50d908: 0x24c6cce0  addiu       $a2, $a2, -0x3320
    ctx->pc = 0x50d908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954208));
label_50d90c:
    // 0x50d90c: 0xc040840  jal         func_102100
label_50d910:
    if (ctx->pc == 0x50D910u) {
        ctx->pc = 0x50D910u;
            // 0x50d910: 0x240702d0  addiu       $a3, $zero, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
        ctx->pc = 0x50D914u;
        goto label_50d914;
    }
    ctx->pc = 0x50D90Cu;
    SET_GPR_U32(ctx, 31, 0x50D914u);
    ctx->pc = 0x50D910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D90Cu;
            // 0x50d910: 0x240702d0  addiu       $a3, $zero, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D914u; }
        if (ctx->pc != 0x50D914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D914u; }
        if (ctx->pc != 0x50D914u) { return; }
    }
    ctx->pc = 0x50D914u;
label_50d914:
    // 0x50d914: 0xafc20084  sw          $v0, 0x84($fp)
    ctx->pc = 0x50d914u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 132), GPR_U32(ctx, 2));
label_50d918:
    // 0x50d918: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x50d918u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50d91c:
    // 0x50d91c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50d920:
    // 0x50d920: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x50d920u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_50d924:
    // 0x50d924: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x50d924u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_50d928:
    // 0x50d928: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x50d928u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_50d92c:
    // 0x50d92c: 0x8fd30080  lw          $s3, 0x80($fp)
    ctx->pc = 0x50d92cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
label_50d930:
    // 0x50d930: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x50d930u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50d934:
    // 0x50d934: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x50d934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_50d938:
    // 0x50d938: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x50d938u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_50d93c:
    // 0x50d93c: 0x2b100  sll         $s6, $v0, 4
    ctx->pc = 0x50d93cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_50d940:
    // 0x50d940: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x50d940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_50d944:
    // 0x50d944: 0xc040180  jal         func_100600
label_50d948:
    if (ctx->pc == 0x50D948u) {
        ctx->pc = 0x50D948u;
            // 0x50d948: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->pc = 0x50D94Cu;
        goto label_50d94c;
    }
    ctx->pc = 0x50D944u;
    SET_GPR_U32(ctx, 31, 0x50D94Cu);
    ctx->pc = 0x50D948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D944u;
            // 0x50d948: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D94Cu; }
        if (ctx->pc != 0x50D94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D94Cu; }
        if (ctx->pc != 0x50D94Cu) { return; }
    }
    ctx->pc = 0x50D94Cu;
label_50d94c:
    // 0x50d94c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x50d94cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50d950:
    // 0x50d950: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_50d954:
    if (ctx->pc == 0x50D954u) {
        ctx->pc = 0x50D958u;
        goto label_50d958;
    }
    ctx->pc = 0x50D950u;
    {
        const bool branch_taken_0x50d950 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x50d950) {
            ctx->pc = 0x50D990u;
            goto label_50d990;
        }
    }
    ctx->pc = 0x50D958u;
label_50d958:
    // 0x50d958: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x50d958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_50d95c:
    // 0x50d95c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x50d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50d960:
    // 0x50d960: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x50d960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_50d964:
    // 0x50d964: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x50d964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_50d968:
    // 0x50d968: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x50d968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_50d96c:
    // 0x50d96c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x50d96cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_50d970:
    // 0x50d970: 0xc040138  jal         func_1004E0
label_50d974:
    if (ctx->pc == 0x50D974u) {
        ctx->pc = 0x50D974u;
            // 0x50d974: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x50D978u;
        goto label_50d978;
    }
    ctx->pc = 0x50D970u;
    SET_GPR_U32(ctx, 31, 0x50D978u);
    ctx->pc = 0x50D974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D970u;
            // 0x50d974: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D978u; }
        if (ctx->pc != 0x50D978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D978u; }
        if (ctx->pc != 0x50D978u) { return; }
    }
    ctx->pc = 0x50D978u;
label_50d978:
    // 0x50d978: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x50d978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_50d97c:
    // 0x50d97c: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x50d97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_50d980:
    // 0x50d980: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x50d980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50d984:
    // 0x50d984: 0xc04a576  jal         func_1295D8
label_50d988:
    if (ctx->pc == 0x50D988u) {
        ctx->pc = 0x50D988u;
            // 0x50d988: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x50D98Cu;
        goto label_50d98c;
    }
    ctx->pc = 0x50D984u;
    SET_GPR_U32(ctx, 31, 0x50D98Cu);
    ctx->pc = 0x50D988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D984u;
            // 0x50d988: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D98Cu; }
        if (ctx->pc != 0x50D98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D98Cu; }
        if (ctx->pc != 0x50D98Cu) { return; }
    }
    ctx->pc = 0x50D98Cu;
label_50d98c:
    // 0x50d98c: 0x0  nop
    ctx->pc = 0x50d98cu;
    // NOP
label_50d990:
    // 0x50d990: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x50d990u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
label_50d994:
    // 0x50d994: 0x92040c6a  lbu         $a0, 0xC6A($s0)
    ctx->pc = 0x50d994u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3178)));
label_50d998:
    // 0x50d998: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x50d998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_50d99c:
    // 0x50d99c: 0x3c0346fd  lui         $v1, 0x46FD
    ctx->pc = 0x50d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18173 << 16));
label_50d9a0:
    // 0x50d9a0: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x50d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_50d9a4:
    // 0x50d9a4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x50d9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_50d9a8:
    // 0x50d9a8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x50d9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_50d9ac:
    // 0x50d9ac: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x50d9acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_50d9b0:
    // 0x50d9b0: 0x24a5b658  addiu       $a1, $a1, -0x49A8
    ctx->pc = 0x50d9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948440));
label_50d9b4:
    // 0x50d9b4: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x50d9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_50d9b8:
    // 0x50d9b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50d9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50d9bc:
    // 0x50d9bc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x50d9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_50d9c0:
    // 0x50d9c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x50d9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50d9c4:
    // 0x50d9c4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x50d9c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50d9c8:
    // 0x50d9c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x50d9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_50d9cc:
    // 0x50d9cc: 0xc122cd8  jal         func_48B360
label_50d9d0:
    if (ctx->pc == 0x50D9D0u) {
        ctx->pc = 0x50D9D0u;
            // 0x50d9d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50D9D4u;
        goto label_50d9d4;
    }
    ctx->pc = 0x50D9CCu;
    SET_GPR_U32(ctx, 31, 0x50D9D4u);
    ctx->pc = 0x50D9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50D9CCu;
            // 0x50d9d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D9D4u; }
        if (ctx->pc != 0x50D9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50D9D4u; }
        if (ctx->pc != 0x50D9D4u) { return; }
    }
    ctx->pc = 0x50D9D4u;
label_50d9d4:
    // 0x50d9d4: 0x92050c6a  lbu         $a1, 0xC6A($s0)
    ctx->pc = 0x50d9d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3178)));
label_50d9d8:
    // 0x50d9d8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x50d9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_50d9dc:
    // 0x50d9dc: 0x3c024561  lui         $v0, 0x4561
    ctx->pc = 0x50d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17761 << 16));
label_50d9e0:
    // 0x50d9e0: 0x2463b650  addiu       $v1, $v1, -0x49B0
    ctx->pc = 0x50d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948432));
label_50d9e4:
    // 0x50d9e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x50d9e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50d9e8:
    // 0x50d9e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50d9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50d9ec:
    // 0x50d9ec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x50d9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_50d9f0:
    // 0x50d9f0: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x50d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_50d9f4:
    // 0x50d9f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x50d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_50d9f8:
    // 0x50d9f8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x50d9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_50d9fc:
    // 0x50d9fc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x50d9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_50da00:
    // 0x50da00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x50da00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50da04:
    // 0x50da04: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x50da04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_50da08:
    // 0x50da08: 0xc122cd8  jal         func_48B360
label_50da0c:
    if (ctx->pc == 0x50DA0Cu) {
        ctx->pc = 0x50DA0Cu;
            // 0x50da0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50DA10u;
        goto label_50da10;
    }
    ctx->pc = 0x50DA08u;
    SET_GPR_U32(ctx, 31, 0x50DA10u);
    ctx->pc = 0x50DA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50DA08u;
            // 0x50da0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DA10u; }
        if (ctx->pc != 0x50DA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DA10u; }
        if (ctx->pc != 0x50DA10u) { return; }
    }
    ctx->pc = 0x50DA10u;
label_50da10:
    // 0x50da10: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x50da10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_50da14:
    // 0x50da14: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x50da14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_50da18:
    // 0x50da18: 0x297102a  slt         $v0, $s4, $s7
    ctx->pc = 0x50da18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_50da1c:
    // 0x50da1c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_50da20:
    if (ctx->pc == 0x50DA20u) {
        ctx->pc = 0x50DA20u;
            // 0x50da20: 0x2569021  addu        $s2, $s2, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
        ctx->pc = 0x50DA24u;
        goto label_50da24;
    }
    ctx->pc = 0x50DA1Cu;
    {
        const bool branch_taken_0x50da1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x50DA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DA1Cu;
            // 0x50da20: 0x2569021  addu        $s2, $s2, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50da1c) {
            ctx->pc = 0x50D940u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50d940;
        }
    }
    ctx->pc = 0x50DA24u;
label_50da24:
    // 0x50da24: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x50da24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_50da28:
    // 0x50da28: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x50da28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_50da2c:
    // 0x50da2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x50da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_50da30:
    // 0x50da30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x50da30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_50da34:
    // 0x50da34: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x50da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_50da38:
    // 0x50da38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x50da38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_50da3c:
    // 0x50da3c: 0xc040138  jal         func_1004E0
label_50da40:
    if (ctx->pc == 0x50DA40u) {
        ctx->pc = 0x50DA40u;
            // 0x50da40: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x50DA44u;
        goto label_50da44;
    }
    ctx->pc = 0x50DA3Cu;
    SET_GPR_U32(ctx, 31, 0x50DA44u);
    ctx->pc = 0x50DA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50DA3Cu;
            // 0x50da40: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DA44u; }
        if (ctx->pc != 0x50DA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DA44u; }
        if (ctx->pc != 0x50DA44u) { return; }
    }
    ctx->pc = 0x50DA44u;
label_50da44:
    // 0x50da44: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x50da44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_50da48:
    // 0x50da48: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x50da48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50da4c:
    // 0x50da4c: 0xafc2007c  sw          $v0, 0x7C($fp)
    ctx->pc = 0x50da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 124), GPR_U32(ctx, 2));
label_50da50:
    // 0x50da50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x50da50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50da54:
    // 0x50da54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x50da54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_50da58:
    // 0x50da58: 0xc04a576  jal         func_1295D8
label_50da5c:
    if (ctx->pc == 0x50DA5Cu) {
        ctx->pc = 0x50DA5Cu;
            // 0x50da5c: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x50DA60u;
        goto label_50da60;
    }
    ctx->pc = 0x50DA58u;
    SET_GPR_U32(ctx, 31, 0x50DA60u);
    ctx->pc = 0x50DA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50DA58u;
            // 0x50da5c: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DA60u; }
        if (ctx->pc != 0x50DA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DA60u; }
        if (ctx->pc != 0x50DA60u) { return; }
    }
    ctx->pc = 0x50DA60u;
label_50da60:
    // 0x50da60: 0x8fc2003c  lw          $v0, 0x3C($fp)
    ctx->pc = 0x50da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
label_50da64:
    // 0x50da64: 0xc7d60030  lwc1        $f22, 0x30($fp)
    ctx->pc = 0x50da64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_50da68:
    // 0x50da68: 0x8fd60080  lw          $s6, 0x80($fp)
    ctx->pc = 0x50da68u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
label_50da6c:
    // 0x50da6c: 0x8fd00040  lw          $s0, 0x40($fp)
    ctx->pc = 0x50da6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_50da70:
    // 0x50da70: 0xc44c0018  lwc1        $f12, 0x18($v0)
    ctx->pc = 0x50da70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50da74:
    // 0x50da74: 0xc049514  jal         func_125450
label_50da78:
    if (ctx->pc == 0x50DA78u) {
        ctx->pc = 0x50DA78u;
            // 0x50da78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50DA7Cu;
        goto label_50da7c;
    }
    ctx->pc = 0x50DA74u;
    SET_GPR_U32(ctx, 31, 0x50DA7Cu);
    ctx->pc = 0x50DA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50DA74u;
            // 0x50da78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DA7Cu; }
        if (ctx->pc != 0x50DA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DA7Cu; }
        if (ctx->pc != 0x50DA7Cu) { return; }
    }
    ctx->pc = 0x50DA7Cu;
label_50da7c:
    // 0x50da7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x50da7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50da80:
    // 0x50da80: 0xc04020c  jal         func_100830
label_50da84:
    if (ctx->pc == 0x50DA84u) {
        ctx->pc = 0x50DA84u;
            // 0x50da84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50DA88u;
        goto label_50da88;
    }
    ctx->pc = 0x50DA80u;
    SET_GPR_U32(ctx, 31, 0x50DA88u);
    ctx->pc = 0x50DA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50DA80u;
            // 0x50da84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100830u;
    if (runtime->hasFunction(0x100830u)) {
        auto targetFn = runtime->lookupFunction(0x100830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DA88u; }
        if (ctx->pc != 0x50DA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100830_0x100830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DA88u; }
        if (ctx->pc != 0x50DA88u) { return; }
    }
    ctx->pc = 0x50DA88u;
label_50da88:
    // 0x50da88: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_50da8c:
    if (ctx->pc == 0x50DA8Cu) {
        ctx->pc = 0x50DA8Cu;
            // 0x50da8c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x50DA90u;
        goto label_50da90;
    }
    ctx->pc = 0x50DA88u;
    {
        const bool branch_taken_0x50da88 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x50da88) {
            ctx->pc = 0x50DA8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50DA88u;
            // 0x50da8c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50DA9Cu;
            goto label_50da9c;
        }
    }
    ctx->pc = 0x50DA90u;
label_50da90:
    // 0x50da90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50da90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50da94:
    // 0x50da94: 0x10000007  b           . + 4 + (0x7 << 2)
label_50da98:
    if (ctx->pc == 0x50DA98u) {
        ctx->pc = 0x50DA98u;
            // 0x50da98: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x50DA9Cu;
        goto label_50da9c;
    }
    ctx->pc = 0x50DA94u;
    {
        const bool branch_taken_0x50da94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50DA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DA94u;
            // 0x50da98: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50da94) {
            ctx->pc = 0x50DAB4u;
            goto label_50dab4;
        }
    }
    ctx->pc = 0x50DA9Cu;
label_50da9c:
    // 0x50da9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x50da9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_50daa0:
    // 0x50daa0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x50daa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_50daa4:
    // 0x50daa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x50daa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50daa8:
    // 0x50daa8: 0x0  nop
    ctx->pc = 0x50daa8u;
    // NOP
label_50daac:
    // 0x50daac: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x50daacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_50dab0:
    // 0x50dab0: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x50dab0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_50dab4:
    // 0x50dab4: 0x8ed10000  lw          $s1, 0x0($s6)
    ctx->pc = 0x50dab4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_50dab8:
    // 0x50dab8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x50dab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_50dabc:
    // 0x50dabc: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x50dabcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_50dac0:
    // 0x50dac0: 0x24022b20  addiu       $v0, $zero, 0x2B20
    ctx->pc = 0x50dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11040));
label_50dac4:
    // 0x50dac4: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x50dac4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_50dac8:
    // 0x50dac8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x50dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_50dacc:
    // 0x50dacc: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
label_50dad0:
    if (ctx->pc == 0x50DAD0u) {
        ctx->pc = 0x50DAD0u;
            // 0x50dad0: 0xa2820003  sb          $v0, 0x3($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x50DAD4u;
        goto label_50dad4;
    }
    ctx->pc = 0x50DACCu;
    {
        const bool branch_taken_0x50dacc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x50DAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DACCu;
            // 0x50dad0: 0xa2820003  sb          $v0, 0x3($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50dacc) {
            ctx->pc = 0x50DAE0u;
            goto label_50dae0;
        }
    }
    ctx->pc = 0x50DAD4u;
label_50dad4:
    // 0x50dad4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x50dad4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50dad8:
    // 0x50dad8: 0x10000008  b           . + 4 + (0x8 << 2)
label_50dadc:
    if (ctx->pc == 0x50DADCu) {
        ctx->pc = 0x50DADCu;
            // 0x50dadc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x50DAE0u;
        goto label_50dae0;
    }
    ctx->pc = 0x50DAD8u;
    {
        const bool branch_taken_0x50dad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50DADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DAD8u;
            // 0x50dadc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x50dad8) {
            ctx->pc = 0x50DAFCu;
            goto label_50dafc;
        }
    }
    ctx->pc = 0x50DAE0u;
label_50dae0:
    // 0x50dae0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x50dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_50dae4:
    // 0x50dae4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x50dae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_50dae8:
    // 0x50dae8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x50dae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_50daec:
    // 0x50daec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x50daecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50daf0:
    // 0x50daf0: 0x0  nop
    ctx->pc = 0x50daf0u;
    // NOP
label_50daf4:
    // 0x50daf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x50daf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_50daf8:
    // 0x50daf8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x50daf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_50dafc:
    // 0x50dafc: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x50dafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_50db00:
    // 0x50db00: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x50db00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_50db04:
    // 0x50db04: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x50db04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_50db08:
    // 0x50db08: 0xe6960028  swc1        $f22, 0x28($s4)
    ctx->pc = 0x50db08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_50db0c:
    // 0x50db0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50db10:
    // 0x50db10: 0xae83002c  sw          $v1, 0x2C($s4)
    ctx->pc = 0x50db10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 3));
label_50db14:
    // 0x50db14: 0xe6940018  swc1        $f20, 0x18($s4)
    ctx->pc = 0x50db14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
label_50db18:
    // 0x50db18: 0xae800020  sw          $zero, 0x20($s4)
    ctx->pc = 0x50db18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 0));
label_50db1c:
    // 0x50db1c: 0xae80001c  sw          $zero, 0x1C($s4)
    ctx->pc = 0x50db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 0));
label_50db20:
    // 0x50db20: 0xe695000c  swc1        $f21, 0xC($s4)
    ctx->pc = 0x50db20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_50db24:
    // 0x50db24: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x50db24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
label_50db28:
    // 0x50db28: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
label_50db2c:
    if (ctx->pc == 0x50DB2Cu) {
        ctx->pc = 0x50DB2Cu;
            // 0x50db2c: 0xae800010  sw          $zero, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x50DB30u;
        goto label_50db30;
    }
    ctx->pc = 0x50DB28u;
    {
        const bool branch_taken_0x50db28 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x50DB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DB28u;
            // 0x50db2c: 0xae800010  sw          $zero, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50db28) {
            ctx->pc = 0x50DB40u;
            goto label_50db40;
        }
    }
    ctx->pc = 0x50DB30u;
label_50db30:
    // 0x50db30: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x50db30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_50db34:
    // 0x50db34: 0x1000000a  b           . + 4 + (0xA << 2)
label_50db38:
    if (ctx->pc == 0x50DB38u) {
        ctx->pc = 0x50DB38u;
            // 0x50db38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50DB3Cu;
        goto label_50db3c;
    }
    ctx->pc = 0x50DB34u;
    {
        const bool branch_taken_0x50db34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50DB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DB34u;
            // 0x50db38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50db34) {
            ctx->pc = 0x50DB60u;
            goto label_50db60;
        }
    }
    ctx->pc = 0x50DB3Cu;
label_50db3c:
    // 0x50db3c: 0x0  nop
    ctx->pc = 0x50db3cu;
    // NOP
label_50db40:
    // 0x50db40: 0x16750005  bne         $s3, $s5, . + 4 + (0x5 << 2)
label_50db44:
    if (ctx->pc == 0x50DB44u) {
        ctx->pc = 0x50DB48u;
        goto label_50db48;
    }
    ctx->pc = 0x50DB40u;
    {
        const bool branch_taken_0x50db40 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        if (branch_taken_0x50db40) {
            ctx->pc = 0x50DB58u;
            goto label_50db58;
        }
    }
    ctx->pc = 0x50DB48u;
label_50db48:
    // 0x50db48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x50db48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50db4c:
    // 0x50db4c: 0x262302d0  addiu       $v1, $s1, 0x2D0
    ctx->pc = 0x50db4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
label_50db50:
    // 0x50db50: 0x10000003  b           . + 4 + (0x3 << 2)
label_50db54:
    if (ctx->pc == 0x50DB54u) {
        ctx->pc = 0x50DB54u;
            // 0x50db54: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x50DB58u;
        goto label_50db58;
    }
    ctx->pc = 0x50DB50u;
    {
        const bool branch_taken_0x50db50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50DB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DB50u;
            // 0x50db54: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50db50) {
            ctx->pc = 0x50DB60u;
            goto label_50db60;
        }
    }
    ctx->pc = 0x50DB58u;
label_50db58:
    // 0x50db58: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x50db58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_50db5c:
    // 0x50db5c: 0x262302d0  addiu       $v1, $s1, 0x2D0
    ctx->pc = 0x50db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
label_50db60:
    // 0x50db60: 0xae230274  sw          $v1, 0x274($s1)
    ctx->pc = 0x50db60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 3));
label_50db64:
    // 0x50db64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50db64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50db68:
    // 0x50db68: 0xc0d879c  jal         func_361E70
label_50db6c:
    if (ctx->pc == 0x50DB6Cu) {
        ctx->pc = 0x50DB6Cu;
            // 0x50db6c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50DB70u;
        goto label_50db70;
    }
    ctx->pc = 0x50DB68u;
    SET_GPR_U32(ctx, 31, 0x50DB70u);
    ctx->pc = 0x50DB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50DB68u;
            // 0x50db6c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DB70u; }
        if (ctx->pc != 0x50DB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DB70u; }
        if (ctx->pc != 0x50DB70u) { return; }
    }
    ctx->pc = 0x50DB70u;
label_50db70:
    // 0x50db70: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x50db70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
label_50db74:
    // 0x50db74: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x50db74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_50db78:
    // 0x50db78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50db78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50db7c:
    // 0x50db7c: 0x26940034  addiu       $s4, $s4, 0x34
    ctx->pc = 0x50db7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
label_50db80:
    // 0x50db80: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x50db80u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_50db84:
    // 0x50db84: 0x1e60ffce  bgtz        $s3, . + 4 + (-0x32 << 2)
label_50db88:
    if (ctx->pc == 0x50DB88u) {
        ctx->pc = 0x50DB88u;
            // 0x50db88: 0x263102d0  addiu       $s1, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->pc = 0x50DB8Cu;
        goto label_50db8c;
    }
    ctx->pc = 0x50DB84u;
    {
        const bool branch_taken_0x50db84 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x50DB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DB84u;
            // 0x50db88: 0x263102d0  addiu       $s1, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50db84) {
            ctx->pc = 0x50DAC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50dac0;
        }
    }
    ctx->pc = 0x50DB8Cu;
label_50db8c:
    // 0x50db8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x50db8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_50db90:
    // 0x50db90: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x50db90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_50db94:
    // 0x50db94: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
label_50db98:
    if (ctx->pc == 0x50DB98u) {
        ctx->pc = 0x50DB98u;
            // 0x50db98: 0x26d60014  addiu       $s6, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->pc = 0x50DB9Cu;
        goto label_50db9c;
    }
    ctx->pc = 0x50DB94u;
    {
        const bool branch_taken_0x50db94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x50DB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DB94u;
            // 0x50db98: 0x26d60014  addiu       $s6, $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50db94) {
            ctx->pc = 0x50DAB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50dab4;
        }
    }
    ctx->pc = 0x50DB9Cu;
label_50db9c:
    // 0x50db9c: 0xc049514  jal         func_125450
label_50dba0:
    if (ctx->pc == 0x50DBA0u) {
        ctx->pc = 0x50DBA0u;
            // 0x50dba0: 0xc7cc0038  lwc1        $f12, 0x38($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x50DBA4u;
        goto label_50dba4;
    }
    ctx->pc = 0x50DB9Cu;
    SET_GPR_U32(ctx, 31, 0x50DBA4u);
    ctx->pc = 0x50DBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50DB9Cu;
            // 0x50dba0: 0xc7cc0038  lwc1        $f12, 0x38($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DBA4u; }
        if (ctx->pc != 0x50DBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DBA4u; }
        if (ctx->pc != 0x50DBA4u) { return; }
    }
    ctx->pc = 0x50DBA4u;
label_50dba4:
    // 0x50dba4: 0xc0474b6  jal         func_11D2D8
label_50dba8:
    if (ctx->pc == 0x50DBA8u) {
        ctx->pc = 0x50DBA8u;
            // 0x50dba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50DBACu;
        goto label_50dbac;
    }
    ctx->pc = 0x50DBA4u;
    SET_GPR_U32(ctx, 31, 0x50DBACu);
    ctx->pc = 0x50DBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50DBA4u;
            // 0x50dba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DBACu; }
        if (ctx->pc != 0x50DBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DBACu; }
        if (ctx->pc != 0x50DBACu) { return; }
    }
    ctx->pc = 0x50DBACu;
label_50dbac:
    // 0x50dbac: 0xc0497dc  jal         func_125F70
label_50dbb0:
    if (ctx->pc == 0x50DBB0u) {
        ctx->pc = 0x50DBB0u;
            // 0x50dbb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50DBB4u;
        goto label_50dbb4;
    }
    ctx->pc = 0x50DBACu;
    SET_GPR_U32(ctx, 31, 0x50DBB4u);
    ctx->pc = 0x50DBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50DBACu;
            // 0x50dbb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DBB4u; }
        if (ctx->pc != 0x50DBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DBB4u; }
        if (ctx->pc != 0x50DBB4u) { return; }
    }
    ctx->pc = 0x50DBB4u;
label_50dbb4:
    // 0x50dbb4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x50dbb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_50dbb8:
    // 0x50dbb8: 0x0  nop
    ctx->pc = 0x50dbb8u;
    // NOP
label_50dbbc:
    // 0x50dbbc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x50dbbcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50dbc0:
    // 0x50dbc0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_50dbc4:
    if (ctx->pc == 0x50DBC4u) {
        ctx->pc = 0x50DBC4u;
            // 0x50dbc4: 0xc7c10034  lwc1        $f1, 0x34($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x50DBC8u;
        goto label_50dbc8;
    }
    ctx->pc = 0x50DBC0u;
    {
        const bool branch_taken_0x50dbc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50dbc0) {
            ctx->pc = 0x50DBC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50DBC0u;
            // 0x50dbc4: 0xc7c10034  lwc1        $f1, 0x34($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x50DBD4u;
            goto label_50dbd4;
        }
    }
    ctx->pc = 0x50DBC8u;
label_50dbc8:
    // 0x50dbc8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x50dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_50dbcc:
    // 0x50dbcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50dbccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50dbd0:
    // 0x50dbd0: 0xc7c10034  lwc1        $f1, 0x34($fp)
    ctx->pc = 0x50dbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50dbd4:
    // 0x50dbd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50dbd8:
    // 0x50dbd8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x50dbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_50dbdc:
    // 0x50dbdc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x50dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_50dbe0:
    // 0x50dbe0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x50dbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_50dbe4:
    // 0x50dbe4: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x50dbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_50dbe8:
    // 0x50dbe8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x50dbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_50dbec:
    // 0x50dbec: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x50dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
label_50dbf0:
    // 0x50dbf0: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x50dbf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_50dbf4:
    // 0x50dbf4: 0xc0a7a88  jal         func_29EA20
label_50dbf8:
    if (ctx->pc == 0x50DBF8u) {
        ctx->pc = 0x50DBF8u;
            // 0x50dbf8: 0xafa000dc  sw          $zero, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x50DBFCu;
        goto label_50dbfc;
    }
    ctx->pc = 0x50DBF4u;
    SET_GPR_U32(ctx, 31, 0x50DBFCu);
    ctx->pc = 0x50DBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50DBF4u;
            // 0x50dbf8: 0xafa000dc  sw          $zero, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DBFCu; }
        if (ctx->pc != 0x50DBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DBFCu; }
        if (ctx->pc != 0x50DBFCu) { return; }
    }
    ctx->pc = 0x50DBFCu;
label_50dbfc:
    // 0x50dbfc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x50dbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_50dc00:
    // 0x50dc00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x50dc00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50dc04:
    // 0x50dc04: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_50dc08:
    if (ctx->pc == 0x50DC08u) {
        ctx->pc = 0x50DC08u;
            // 0x50dc08: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x50DC0Cu;
        goto label_50dc0c;
    }
    ctx->pc = 0x50DC04u;
    {
        const bool branch_taken_0x50dc04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x50DC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DC04u;
            // 0x50dc08: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50dc04) {
            ctx->pc = 0x50DC24u;
            goto label_50dc24;
        }
    }
    ctx->pc = 0x50DC0Cu;
label_50dc0c:
    // 0x50dc0c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x50dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_50dc10:
    // 0x50dc10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50dc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50dc14:
    // 0x50dc14: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x50dc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_50dc18:
    // 0x50dc18: 0xc0804bc  jal         func_2012F0
label_50dc1c:
    if (ctx->pc == 0x50DC1Cu) {
        ctx->pc = 0x50DC1Cu;
            // 0x50dc1c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x50DC20u;
        goto label_50dc20;
    }
    ctx->pc = 0x50DC18u;
    SET_GPR_U32(ctx, 31, 0x50DC20u);
    ctx->pc = 0x50DC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50DC18u;
            // 0x50dc1c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DC20u; }
        if (ctx->pc != 0x50DC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DC20u; }
        if (ctx->pc != 0x50DC20u) { return; }
    }
    ctx->pc = 0x50DC20u;
label_50dc20:
    // 0x50dc20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x50dc20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50dc24:
    // 0x50dc24: 0xc04c968  jal         func_1325A0
label_50dc28:
    if (ctx->pc == 0x50DC28u) {
        ctx->pc = 0x50DC28u;
            // 0x50dc28: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x50DC2Cu;
        goto label_50dc2c;
    }
    ctx->pc = 0x50DC24u;
    SET_GPR_U32(ctx, 31, 0x50DC2Cu);
    ctx->pc = 0x50DC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50DC24u;
            // 0x50dc28: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DC2Cu; }
        if (ctx->pc != 0x50DC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DC2Cu; }
        if (ctx->pc != 0x50DC2Cu) { return; }
    }
    ctx->pc = 0x50DC2Cu;
label_50dc2c:
    // 0x50dc2c: 0x27c40050  addiu       $a0, $fp, 0x50
    ctx->pc = 0x50dc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
label_50dc30:
    // 0x50dc30: 0x27c50010  addiu       $a1, $fp, 0x10
    ctx->pc = 0x50dc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
label_50dc34:
    // 0x50dc34: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x50dc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_50dc38:
    // 0x50dc38: 0xc0d37ec  jal         func_34DFB0
label_50dc3c:
    if (ctx->pc == 0x50DC3Cu) {
        ctx->pc = 0x50DC3Cu;
            // 0x50dc3c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50DC40u;
        goto label_50dc40;
    }
    ctx->pc = 0x50DC38u;
    SET_GPR_U32(ctx, 31, 0x50DC40u);
    ctx->pc = 0x50DC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50DC38u;
            // 0x50dc3c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DC40u; }
        if (ctx->pc != 0x50DC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DC40u; }
        if (ctx->pc != 0x50DC40u) { return; }
    }
    ctx->pc = 0x50DC40u;
label_50dc40:
    // 0x50dc40: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x50dc40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_50dc44:
    // 0x50dc44: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_50dc48:
    if (ctx->pc == 0x50DC48u) {
        ctx->pc = 0x50DC48u;
            // 0x50dc48: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x50DC4Cu;
        goto label_50dc4c;
    }
    ctx->pc = 0x50DC44u;
    {
        const bool branch_taken_0x50dc44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50dc44) {
            ctx->pc = 0x50DC48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50DC44u;
            // 0x50dc48: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50DC88u;
            goto label_50dc88;
        }
    }
    ctx->pc = 0x50DC4Cu;
label_50dc4c:
    // 0x50dc4c: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x50dc4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_50dc50:
    // 0x50dc50: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x50dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_50dc54:
    // 0x50dc54: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x50dc54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_50dc58:
    // 0x50dc58: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x50dc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_50dc5c:
    // 0x50dc5c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x50dc5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_50dc60:
    // 0x50dc60: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_50dc64:
    if (ctx->pc == 0x50DC64u) {
        ctx->pc = 0x50DC68u;
        goto label_50dc68;
    }
    ctx->pc = 0x50DC60u;
    {
        const bool branch_taken_0x50dc60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x50dc60) {
            ctx->pc = 0x50DC84u;
            goto label_50dc84;
        }
    }
    ctx->pc = 0x50DC68u;
label_50dc68:
    // 0x50dc68: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_50dc6c:
    if (ctx->pc == 0x50DC6Cu) {
        ctx->pc = 0x50DC70u;
        goto label_50dc70;
    }
    ctx->pc = 0x50DC68u;
    {
        const bool branch_taken_0x50dc68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x50dc68) {
            ctx->pc = 0x50DC84u;
            goto label_50dc84;
        }
    }
    ctx->pc = 0x50DC70u;
label_50dc70:
    // 0x50dc70: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x50dc70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_50dc74:
    // 0x50dc74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50dc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50dc78:
    // 0x50dc78: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x50dc78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_50dc7c:
    // 0x50dc7c: 0x320f809  jalr        $t9
label_50dc80:
    if (ctx->pc == 0x50DC80u) {
        ctx->pc = 0x50DC80u;
            // 0x50dc80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x50DC84u;
        goto label_50dc84;
    }
    ctx->pc = 0x50DC7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50DC84u);
        ctx->pc = 0x50DC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DC7Cu;
            // 0x50dc80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50DC84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50DC84u; }
            if (ctx->pc != 0x50DC84u) { return; }
        }
        }
    }
    ctx->pc = 0x50DC84u;
label_50dc84:
    // 0x50dc84: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x50dc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_50dc88:
    // 0x50dc88: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x50dc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_50dc8c:
    // 0x50dc8c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x50dc8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_50dc90:
    // 0x50dc90: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x50dc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_50dc94:
    // 0x50dc94: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x50dc94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_50dc98:
    // 0x50dc98: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x50dc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_50dc9c:
    // 0x50dc9c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x50dc9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_50dca0:
    // 0x50dca0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x50dca0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_50dca4:
    // 0x50dca4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x50dca4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_50dca8:
    // 0x50dca8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x50dca8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_50dcac:
    // 0x50dcac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x50dcacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_50dcb0:
    // 0x50dcb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x50dcb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50dcb4:
    // 0x50dcb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x50dcb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50dcb8:
    // 0x50dcb8: 0x3e00008  jr          $ra
label_50dcbc:
    if (ctx->pc == 0x50DCBCu) {
        ctx->pc = 0x50DCBCu;
            // 0x50dcbc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x50DCC0u;
        goto label_50dcc0;
    }
    ctx->pc = 0x50DCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50DCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DCB8u;
            // 0x50dcbc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50DCC0u;
label_50dcc0:
    // 0x50dcc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x50dcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_50dcc4:
    // 0x50dcc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x50dcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_50dcc8:
    // 0x50dcc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50dcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50dccc:
    // 0x50dccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50dcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50dcd0:
    // 0x50dcd0: 0x8c91003c  lw          $s1, 0x3C($a0)
    ctx->pc = 0x50dcd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_50dcd4:
    // 0x50dcd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50dcd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50dcd8:
    // 0x50dcd8: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x50dcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50dcdc:
    // 0x50dcdc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x50dcdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_50dce0:
    // 0x50dce0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x50dce0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_50dce4:
    // 0x50dce4: 0xc049820  jal         func_126080
label_50dce8:
    if (ctx->pc == 0x50DCE8u) {
        ctx->pc = 0x50DCECu;
        goto label_50dcec;
    }
    ctx->pc = 0x50DCE4u;
    SET_GPR_U32(ctx, 31, 0x50DCECu);
    ctx->pc = 0x126080u;
    if (runtime->hasFunction(0x126080u)) {
        auto targetFn = runtime->lookupFunction(0x126080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DCECu; }
        if (ctx->pc != 0x50DCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126080_0x126080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DCECu; }
        if (ctx->pc != 0x50DCECu) { return; }
    }
    ctx->pc = 0x50DCECu;
label_50dcec:
    // 0x50dcec: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x50dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_50dcf0:
    // 0x50dcf0: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x50dcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50dcf4:
    // 0x50dcf4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x50dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_50dcf8:
    // 0x50dcf8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x50dcf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_50dcfc:
    // 0x50dcfc: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x50dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_50dd00:
    // 0x50dd00: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x50dd00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_50dd04:
    // 0x50dd04: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x50dd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_50dd08:
    // 0x50dd08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x50dd08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50dd0c:
    // 0x50dd0c: 0x0  nop
    ctx->pc = 0x50dd0cu;
    // NOP
label_50dd10:
    // 0x50dd10: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x50dd10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_50dd14:
    // 0x50dd14: 0x0  nop
    ctx->pc = 0x50dd14u;
    // NOP
label_50dd18:
    // 0x50dd18: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x50dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_50dd1c:
    // 0x50dd1c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x50dd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50dd20:
    // 0x50dd20: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x50dd20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_50dd24:
    // 0x50dd24: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x50dd24u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_50dd28:
    // 0x50dd28: 0x0  nop
    ctx->pc = 0x50dd28u;
    // NOP
label_50dd2c:
    // 0x50dd2c: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x50dd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_50dd30:
    // 0x50dd30: 0xc049514  jal         func_125450
label_50dd34:
    if (ctx->pc == 0x50DD34u) {
        ctx->pc = 0x50DD34u;
            // 0x50dd34: 0xc62c0020  lwc1        $f12, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x50DD38u;
        goto label_50dd38;
    }
    ctx->pc = 0x50DD30u;
    SET_GPR_U32(ctx, 31, 0x50DD38u);
    ctx->pc = 0x50DD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50DD30u;
            // 0x50dd34: 0xc62c0020  lwc1        $f12, 0x20($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DD38u; }
        if (ctx->pc != 0x50DD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DD38u; }
        if (ctx->pc != 0x50DD38u) { return; }
    }
    ctx->pc = 0x50DD38u;
label_50dd38:
    // 0x50dd38: 0xc0474b6  jal         func_11D2D8
label_50dd3c:
    if (ctx->pc == 0x50DD3Cu) {
        ctx->pc = 0x50DD3Cu;
            // 0x50dd3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50DD40u;
        goto label_50dd40;
    }
    ctx->pc = 0x50DD38u;
    SET_GPR_U32(ctx, 31, 0x50DD40u);
    ctx->pc = 0x50DD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50DD38u;
            // 0x50dd3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DD40u; }
        if (ctx->pc != 0x50DD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DD40u; }
        if (ctx->pc != 0x50DD40u) { return; }
    }
    ctx->pc = 0x50DD40u;
label_50dd40:
    // 0x50dd40: 0xc0497dc  jal         func_125F70
label_50dd44:
    if (ctx->pc == 0x50DD44u) {
        ctx->pc = 0x50DD44u;
            // 0x50dd44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50DD48u;
        goto label_50dd48;
    }
    ctx->pc = 0x50DD40u;
    SET_GPR_U32(ctx, 31, 0x50DD48u);
    ctx->pc = 0x50DD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50DD40u;
            // 0x50dd44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DD48u; }
        if (ctx->pc != 0x50DD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DD48u; }
        if (ctx->pc != 0x50DD48u) { return; }
    }
    ctx->pc = 0x50DD48u;
label_50dd48:
    // 0x50dd48: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x50dd48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_50dd4c:
    // 0x50dd4c: 0x0  nop
    ctx->pc = 0x50dd4cu;
    // NOP
label_50dd50:
    // 0x50dd50: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x50dd50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50dd54:
    // 0x50dd54: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_50dd58:
    if (ctx->pc == 0x50DD58u) {
        ctx->pc = 0x50DD58u;
            // 0x50dd58: 0xe6000060  swc1        $f0, 0x60($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
        ctx->pc = 0x50DD5Cu;
        goto label_50dd5c;
    }
    ctx->pc = 0x50DD54u;
    {
        const bool branch_taken_0x50dd54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50dd54) {
            ctx->pc = 0x50DD58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50DD54u;
            // 0x50dd58: 0xe6000060  swc1        $f0, 0x60($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x50DD68u;
            goto label_50dd68;
        }
    }
    ctx->pc = 0x50DD5Cu;
label_50dd5c:
    // 0x50dd5c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x50dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_50dd60:
    // 0x50dd60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x50dd60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50dd64:
    // 0x50dd64: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x50dd64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
label_50dd68:
    // 0x50dd68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50dd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_50dd6c:
    // 0x50dd6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50dd6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50dd70:
    // 0x50dd70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50dd70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50dd74:
    // 0x50dd74: 0x3e00008  jr          $ra
label_50dd78:
    if (ctx->pc == 0x50DD78u) {
        ctx->pc = 0x50DD78u;
            // 0x50dd78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x50DD7Cu;
        goto label_50dd7c;
    }
    ctx->pc = 0x50DD74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50DD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DD74u;
            // 0x50dd78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50DD7Cu;
label_50dd7c:
    // 0x50dd7c: 0x0  nop
    ctx->pc = 0x50dd7cu;
    // NOP
label_50dd80:
    // 0x50dd80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x50dd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_50dd84:
    // 0x50dd84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x50dd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_50dd88:
    // 0x50dd88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x50dd88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50dd8c:
    // 0x50dd8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50dd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50dd90:
    // 0x50dd90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50dd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50dd94:
    // 0x50dd94: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x50dd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50dd98:
    // 0x50dd98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x50dd98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50dd9c:
    // 0x50dd9c: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_50dda0:
    if (ctx->pc == 0x50DDA0u) {
        ctx->pc = 0x50DDA0u;
            // 0x50dda0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50DDA4u;
        goto label_50dda4;
    }
    ctx->pc = 0x50DD9Cu;
    {
        const bool branch_taken_0x50dd9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x50DDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DD9Cu;
            // 0x50dda0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50dd9c) {
            ctx->pc = 0x50DE20u;
            goto label_50de20;
        }
    }
    ctx->pc = 0x50DDA4u;
label_50dda4:
    // 0x50dda4: 0x8ca30e38  lw          $v1, 0xE38($a1)
    ctx->pc = 0x50dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3640)));
label_50dda8:
    // 0x50dda8: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x50dda8u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_50ddac:
    // 0x50ddac: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_50ddb0:
    if (ctx->pc == 0x50DDB0u) {
        ctx->pc = 0x50DDB0u;
            // 0x50ddb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50DDB4u;
        goto label_50ddb4;
    }
    ctx->pc = 0x50DDACu;
    {
        const bool branch_taken_0x50ddac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x50DDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DDACu;
            // 0x50ddb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ddac) {
            ctx->pc = 0x50DDC4u;
            goto label_50ddc4;
        }
    }
    ctx->pc = 0x50DDB4u;
label_50ddb4:
    // 0x50ddb4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x50ddb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_50ddb8:
    // 0x50ddb8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_50ddbc:
    if (ctx->pc == 0x50DDBCu) {
        ctx->pc = 0x50DDC0u;
        goto label_50ddc0;
    }
    ctx->pc = 0x50DDB8u;
    {
        const bool branch_taken_0x50ddb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x50ddb8) {
            ctx->pc = 0x50DDC4u;
            goto label_50ddc4;
        }
    }
    ctx->pc = 0x50DDC0u;
label_50ddc0:
    // 0x50ddc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50ddc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50ddc4:
    // 0x50ddc4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_50ddc8:
    if (ctx->pc == 0x50DDC8u) {
        ctx->pc = 0x50DDCCu;
        goto label_50ddcc;
    }
    ctx->pc = 0x50DDC4u;
    {
        const bool branch_taken_0x50ddc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x50ddc4) {
            ctx->pc = 0x50DDE0u;
            goto label_50dde0;
        }
    }
    ctx->pc = 0x50DDCCu;
label_50ddcc:
    // 0x50ddcc: 0xc075eb4  jal         func_1D7AD0
label_50ddd0:
    if (ctx->pc == 0x50DDD0u) {
        ctx->pc = 0x50DDD0u;
            // 0x50ddd0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50DDD4u;
        goto label_50ddd4;
    }
    ctx->pc = 0x50DDCCu;
    SET_GPR_U32(ctx, 31, 0x50DDD4u);
    ctx->pc = 0x50DDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50DDCCu;
            // 0x50ddd0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DDD4u; }
        if (ctx->pc != 0x50DDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DDD4u; }
        if (ctx->pc != 0x50DDD4u) { return; }
    }
    ctx->pc = 0x50DDD4u;
label_50ddd4:
    // 0x50ddd4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_50ddd8:
    if (ctx->pc == 0x50DDD8u) {
        ctx->pc = 0x50DDDCu;
        goto label_50dddc;
    }
    ctx->pc = 0x50DDD4u;
    {
        const bool branch_taken_0x50ddd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50ddd4) {
            ctx->pc = 0x50DDE0u;
            goto label_50dde0;
        }
    }
    ctx->pc = 0x50DDDCu;
label_50dddc:
    // 0x50dddc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x50dddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50dde0:
    // 0x50dde0: 0x52200010  beql        $s1, $zero, . + 4 + (0x10 << 2)
label_50dde4:
    if (ctx->pc == 0x50DDE4u) {
        ctx->pc = 0x50DDE4u;
            // 0x50dde4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x50DDE8u;
        goto label_50dde8;
    }
    ctx->pc = 0x50DDE0u;
    {
        const bool branch_taken_0x50dde0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x50dde0) {
            ctx->pc = 0x50DDE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50DDE0u;
            // 0x50dde4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50DE24u;
            goto label_50de24;
        }
    }
    ctx->pc = 0x50DDE8u;
label_50dde8:
    // 0x50dde8: 0x82030014  lb          $v1, 0x14($s0)
    ctx->pc = 0x50dde8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
label_50ddec:
    // 0x50ddec: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x50ddecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_50ddf0:
    // 0x50ddf0: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_50ddf4:
    if (ctx->pc == 0x50DDF4u) {
        ctx->pc = 0x50DDF4u;
            // 0x50ddf4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x50DDF8u;
        goto label_50ddf8;
    }
    ctx->pc = 0x50DDF0u;
    {
        const bool branch_taken_0x50ddf0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x50ddf0) {
            ctx->pc = 0x50DDF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50DDF0u;
            // 0x50ddf4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50DE04u;
            goto label_50de04;
        }
    }
    ctx->pc = 0x50DDF8u;
label_50ddf8:
    // 0x50ddf8: 0x10000009  b           . + 4 + (0x9 << 2)
label_50ddfc:
    if (ctx->pc == 0x50DDFCu) {
        ctx->pc = 0x50DE00u;
        goto label_50de00;
    }
    ctx->pc = 0x50DDF8u;
    {
        const bool branch_taken_0x50ddf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50ddf8) {
            ctx->pc = 0x50DE20u;
            goto label_50de20;
        }
    }
    ctx->pc = 0x50DE00u;
label_50de00:
    // 0x50de00: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x50de00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_50de04:
    // 0x50de04: 0xc1435c0  jal         func_50D700
label_50de08:
    if (ctx->pc == 0x50DE08u) {
        ctx->pc = 0x50DE0Cu;
        goto label_50de0c;
    }
    ctx->pc = 0x50DE04u;
    SET_GPR_U32(ctx, 31, 0x50DE0Cu);
    ctx->pc = 0x50D700u;
    goto label_50d700;
    ctx->pc = 0x50DE0Cu;
label_50de0c:
    // 0x50de0c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x50de0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50de10:
    // 0x50de10: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x50de10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_50de14:
    // 0x50de14: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x50de14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_50de18:
    // 0x50de18: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x50de18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_50de1c:
    // 0x50de1c: 0xa2030014  sb          $v1, 0x14($s0)
    ctx->pc = 0x50de1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 3));
label_50de20:
    // 0x50de20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50de20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_50de24:
    // 0x50de24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50de24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50de28:
    // 0x50de28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50de28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50de2c:
    // 0x50de2c: 0x3e00008  jr          $ra
label_50de30:
    if (ctx->pc == 0x50DE30u) {
        ctx->pc = 0x50DE30u;
            // 0x50de30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x50DE34u;
        goto label_50de34;
    }
    ctx->pc = 0x50DE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50DE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DE2Cu;
            // 0x50de30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50DE34u;
label_50de34:
    // 0x50de34: 0x0  nop
    ctx->pc = 0x50de34u;
    // NOP
label_50de38:
    // 0x50de38: 0x0  nop
    ctx->pc = 0x50de38u;
    // NOP
label_50de3c:
    // 0x50de3c: 0x0  nop
    ctx->pc = 0x50de3cu;
    // NOP
label_50de40:
    // 0x50de40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x50de40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_50de44:
    // 0x50de44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50de44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50de48:
    // 0x50de48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x50de48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_50de4c:
    // 0x50de4c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x50de4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_50de50:
    // 0x50de50: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x50de50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_50de54:
    // 0x50de54: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x50de54u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50de58:
    // 0x50de58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x50de58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_50de5c:
    // 0x50de5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x50de5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_50de60:
    // 0x50de60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x50de60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_50de64:
    // 0x50de64: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x50de64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50de68:
    // 0x50de68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x50de68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_50de6c:
    // 0x50de6c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x50de6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50de70:
    // 0x50de70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50de70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_50de74:
    // 0x50de74: 0x26b300b0  addiu       $s3, $s5, 0xB0
    ctx->pc = 0x50de74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
label_50de78:
    // 0x50de78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50de78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50de7c:
    // 0x50de7c: 0x26b200b4  addiu       $s2, $s5, 0xB4
    ctx->pc = 0x50de7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 180));
label_50de80:
    // 0x50de80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50de80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50de84:
    // 0x50de84: 0x8c500e80  lw          $s0, 0xE80($v0)
    ctx->pc = 0x50de84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_50de88:
    // 0x50de88: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50de88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_50de8c:
    // 0x50de8c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x50de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_50de90:
    // 0x50de90: 0x8057007a  lb          $s7, 0x7A($v0)
    ctx->pc = 0x50de90u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_50de94:
    // 0x50de94: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x50de94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_50de98:
    // 0x50de98: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x50de98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_50de9c:
    // 0x50de9c: 0x24630e80  addiu       $v1, $v1, 0xE80
    ctx->pc = 0x50de9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3712));
label_50dea0:
    // 0x50dea0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_50dea4:
    // 0x50dea4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x50dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_50dea8:
    // 0x50dea8: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x50dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_50deac:
    // 0x50deac: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x50deacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_50deb0:
    // 0x50deb0: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x50deb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_50deb4:
    // 0x50deb4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x50deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_50deb8:
    // 0x50deb8: 0x14620033  bne         $v1, $v0, . + 4 + (0x33 << 2)
label_50debc:
    if (ctx->pc == 0x50DEBCu) {
        ctx->pc = 0x50DEBCu;
            // 0x50debc: 0xafb400ac  sw          $s4, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 20));
        ctx->pc = 0x50DEC0u;
        goto label_50dec0;
    }
    ctx->pc = 0x50DEB8u;
    {
        const bool branch_taken_0x50deb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x50DEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DEB8u;
            // 0x50debc: 0xafb400ac  sw          $s4, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50deb8) {
            ctx->pc = 0x50DF88u;
            goto label_50df88;
        }
    }
    ctx->pc = 0x50DEC0u;
label_50dec0:
    // 0x50dec0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50dec4:
    // 0x50dec4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x50dec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_50dec8:
    // 0x50dec8: 0x8c520e80  lw          $s2, 0xE80($v0)
    ctx->pc = 0x50dec8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_50decc:
    // 0x50decc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x50deccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_50ded0:
    // 0x50ded0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x50ded0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_50ded4:
    // 0x50ded4: 0x320f809  jalr        $t9
label_50ded8:
    if (ctx->pc == 0x50DED8u) {
        ctx->pc = 0x50DED8u;
            // 0x50ded8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50DEDCu;
        goto label_50dedc;
    }
    ctx->pc = 0x50DED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50DEDCu);
        ctx->pc = 0x50DED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DED4u;
            // 0x50ded8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50DEDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50DEDCu; }
            if (ctx->pc != 0x50DEDCu) { return; }
        }
        }
    }
    ctx->pc = 0x50DEDCu;
label_50dedc:
    // 0x50dedc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x50dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_50dee0:
    // 0x50dee0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x50dee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_50dee4:
    // 0x50dee4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50dee8:
    // 0x50dee8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x50dee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50deec:
    // 0x50deec: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x50deecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_50def0:
    // 0x50def0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50def0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_50def4:
    // 0x50def4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x50def4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_50def8:
    // 0x50def8: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x50def8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_50defc:
    // 0x50defc: 0x320f809  jalr        $t9
label_50df00:
    if (ctx->pc == 0x50DF00u) {
        ctx->pc = 0x50DF00u;
            // 0x50df00: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50DF04u;
        goto label_50df04;
    }
    ctx->pc = 0x50DEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50DF04u);
        ctx->pc = 0x50DF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DEFCu;
            // 0x50df00: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50DF04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50DF04u; }
            if (ctx->pc != 0x50DF04u) { return; }
        }
        }
    }
    ctx->pc = 0x50DF04u;
label_50df04:
    // 0x50df04: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x50df04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_50df08:
    // 0x50df08: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x50df08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_50df0c:
    // 0x50df0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x50df0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_50df10:
    // 0x50df10: 0x245300b0  addiu       $s3, $v0, 0xB0
    ctx->pc = 0x50df10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_50df14:
    // 0x50df14: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x50df14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_50df18:
    // 0x50df18: 0x320f809  jalr        $t9
label_50df1c:
    if (ctx->pc == 0x50DF1Cu) {
        ctx->pc = 0x50DF1Cu;
            // 0x50df1c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50DF20u;
        goto label_50df20;
    }
    ctx->pc = 0x50DF18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50DF20u);
        ctx->pc = 0x50DF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DF18u;
            // 0x50df1c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50DF20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50DF20u; }
            if (ctx->pc != 0x50DF20u) { return; }
        }
        }
    }
    ctx->pc = 0x50DF20u;
label_50df20:
    // 0x50df20: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x50df20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_50df24:
    // 0x50df24: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x50df24u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_50df28:
    // 0x50df28: 0x245200b4  addiu       $s2, $v0, 0xB4
    ctx->pc = 0x50df28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_50df2c:
    // 0x50df2c: 0x8e220e38  lw          $v0, 0xE38($s1)
    ctx->pc = 0x50df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
label_50df30:
    // 0x50df30: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_50df34:
    if (ctx->pc == 0x50DF34u) {
        ctx->pc = 0x50DF34u;
            // 0x50df34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50DF38u;
        goto label_50df38;
    }
    ctx->pc = 0x50DF30u;
    {
        const bool branch_taken_0x50df30 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50DF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DF30u;
            // 0x50df34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50df30) {
            ctx->pc = 0x50DF48u;
            goto label_50df48;
        }
    }
    ctx->pc = 0x50DF38u;
label_50df38:
    // 0x50df38: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x50df38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_50df3c:
    // 0x50df3c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_50df40:
    if (ctx->pc == 0x50DF40u) {
        ctx->pc = 0x50DF44u;
        goto label_50df44;
    }
    ctx->pc = 0x50DF3Cu;
    {
        const bool branch_taken_0x50df3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x50df3c) {
            ctx->pc = 0x50DF48u;
            goto label_50df48;
        }
    }
    ctx->pc = 0x50DF44u;
label_50df44:
    // 0x50df44: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x50df44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_50df48:
    // 0x50df48: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_50df4c:
    if (ctx->pc == 0x50DF4Cu) {
        ctx->pc = 0x50DF50u;
        goto label_50df50;
    }
    ctx->pc = 0x50DF48u;
    {
        const bool branch_taken_0x50df48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x50df48) {
            ctx->pc = 0x50DF68u;
            goto label_50df68;
        }
    }
    ctx->pc = 0x50DF50u;
label_50df50:
    // 0x50df50: 0xc075eb4  jal         func_1D7AD0
label_50df54:
    if (ctx->pc == 0x50DF54u) {
        ctx->pc = 0x50DF54u;
            // 0x50df54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50DF58u;
        goto label_50df58;
    }
    ctx->pc = 0x50DF50u;
    SET_GPR_U32(ctx, 31, 0x50DF58u);
    ctx->pc = 0x50DF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50DF50u;
            // 0x50df54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DF58u; }
        if (ctx->pc != 0x50DF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50DF58u; }
        if (ctx->pc != 0x50DF58u) { return; }
    }
    ctx->pc = 0x50DF58u;
label_50df58:
    // 0x50df58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_50df5c:
    if (ctx->pc == 0x50DF5Cu) {
        ctx->pc = 0x50DF60u;
        goto label_50df60;
    }
    ctx->pc = 0x50DF58u;
    {
        const bool branch_taken_0x50df58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50df58) {
            ctx->pc = 0x50DF68u;
            goto label_50df68;
        }
    }
    ctx->pc = 0x50DF60u;
label_50df60:
    // 0x50df60: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x50df60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50df64:
    // 0x50df64: 0x0  nop
    ctx->pc = 0x50df64u;
    // NOP
label_50df68:
    // 0x50df68: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
label_50df6c:
    if (ctx->pc == 0x50DF6Cu) {
        ctx->pc = 0x50DF70u;
        goto label_50df70;
    }
    ctx->pc = 0x50DF68u;
    {
        const bool branch_taken_0x50df68 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x50df68) {
            ctx->pc = 0x50DF80u;
            goto label_50df80;
        }
    }
    ctx->pc = 0x50DF70u;
label_50df70:
    // 0x50df70: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x50df70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_50df74:
    // 0x50df74: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x50df74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_50df78:
    // 0x50df78: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_50df7c:
    if (ctx->pc == 0x50DF7Cu) {
        ctx->pc = 0x50DF80u;
        goto label_50df80;
    }
    ctx->pc = 0x50DF78u;
    {
        const bool branch_taken_0x50df78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x50df78) {
            ctx->pc = 0x50DF88u;
            goto label_50df88;
        }
    }
    ctx->pc = 0x50DF80u;
label_50df80:
    // 0x50df80: 0x8e340d98  lw          $s4, 0xD98($s1)
    ctx->pc = 0x50df80u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_50df84:
    // 0x50df84: 0x0  nop
    ctx->pc = 0x50df84u;
    // NOP
label_50df88:
    // 0x50df88: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x50df88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_50df8c:
    // 0x50df8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50df90:
    // 0x50df90: 0x14620057  bne         $v1, $v0, . + 4 + (0x57 << 2)
label_50df94:
    if (ctx->pc == 0x50DF94u) {
        ctx->pc = 0x50DF98u;
        goto label_50df98;
    }
    ctx->pc = 0x50DF90u;
    {
        const bool branch_taken_0x50df90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x50df90) {
            ctx->pc = 0x50E0F0u;
            goto label_50e0f0;
        }
    }
    ctx->pc = 0x50DF98u;
label_50df98:
    // 0x50df98: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x50df98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_50df9c:
    // 0x50df9c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x50df9cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_50dfa0:
    // 0x50dfa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x50dfa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50dfa4:
    // 0x50dfa4: 0xc6210a7c  lwc1        $f1, 0xA7C($s1)
    ctx->pc = 0x50dfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50dfa8:
    // 0x50dfa8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x50dfa8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50dfac:
    // 0x50dfac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_50dfb0:
    if (ctx->pc == 0x50DFB0u) {
        ctx->pc = 0x50DFB4u;
        goto label_50dfb4;
    }
    ctx->pc = 0x50DFACu;
    {
        const bool branch_taken_0x50dfac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50dfac) {
            ctx->pc = 0x50DFC0u;
            goto label_50dfc0;
        }
    }
    ctx->pc = 0x50DFB4u;
label_50dfb4:
    // 0x50dfb4: 0x10000018  b           . + 4 + (0x18 << 2)
label_50dfb8:
    if (ctx->pc == 0x50DFB8u) {
        ctx->pc = 0x50DFB8u;
            // 0x50dfb8: 0x26160078  addiu       $s6, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = 0x50DFBCu;
        goto label_50dfbc;
    }
    ctx->pc = 0x50DFB4u;
    {
        const bool branch_taken_0x50dfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50DFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50DFB4u;
            // 0x50dfb8: 0x26160078  addiu       $s6, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50dfb4) {
            ctx->pc = 0x50E018u;
            goto label_50e018;
        }
    }
    ctx->pc = 0x50DFBCu;
label_50dfbc:
    // 0x50dfbc: 0x0  nop
    ctx->pc = 0x50dfbcu;
    // NOP
label_50dfc0:
    // 0x50dfc0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50dfc4:
    // 0x50dfc4: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x50dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_50dfc8:
    // 0x50dfc8: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x50dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_50dfcc:
    // 0x50dfcc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x50dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_50dfd0:
    // 0x50dfd0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_50dfd4:
    if (ctx->pc == 0x50DFD4u) {
        ctx->pc = 0x50DFD8u;
        goto label_50dfd8;
    }
    ctx->pc = 0x50DFD0u;
    {
        const bool branch_taken_0x50dfd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50dfd0) {
            ctx->pc = 0x50E008u;
            goto label_50e008;
        }
    }
    ctx->pc = 0x50DFD8u;
label_50dfd8:
    // 0x50dfd8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x50dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_50dfdc:
    // 0x50dfdc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_50dfe0:
    if (ctx->pc == 0x50DFE0u) {
        ctx->pc = 0x50DFE4u;
        goto label_50dfe4;
    }
    ctx->pc = 0x50DFDCu;
    {
        const bool branch_taken_0x50dfdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50dfdc) {
            ctx->pc = 0x50E008u;
            goto label_50e008;
        }
    }
    ctx->pc = 0x50DFE4u;
label_50dfe4:
    // 0x50dfe4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x50dfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_50dfe8:
    // 0x50dfe8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_50dfec:
    if (ctx->pc == 0x50DFECu) {
        ctx->pc = 0x50DFF0u;
        goto label_50dff0;
    }
    ctx->pc = 0x50DFE8u;
    {
        const bool branch_taken_0x50dfe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50dfe8) {
            ctx->pc = 0x50E008u;
            goto label_50e008;
        }
    }
    ctx->pc = 0x50DFF0u;
label_50dff0:
    // 0x50dff0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x50dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_50dff4:
    // 0x50dff4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_50dff8:
    if (ctx->pc == 0x50DFF8u) {
        ctx->pc = 0x50DFFCu;
        goto label_50dffc;
    }
    ctx->pc = 0x50DFF4u;
    {
        const bool branch_taken_0x50dff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x50dff4) {
            ctx->pc = 0x50E008u;
            goto label_50e008;
        }
    }
    ctx->pc = 0x50DFFCu;
label_50dffc:
    // 0x50dffc: 0x10000004  b           . + 4 + (0x4 << 2)
label_50e000:
    if (ctx->pc == 0x50E000u) {
        ctx->pc = 0x50E004u;
        goto label_50e004;
    }
    ctx->pc = 0x50DFFCu;
    {
        const bool branch_taken_0x50dffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50dffc) {
            ctx->pc = 0x50E010u;
            goto label_50e010;
        }
    }
    ctx->pc = 0x50E004u;
label_50e004:
    // 0x50e004: 0x0  nop
    ctx->pc = 0x50e004u;
    // NOP
label_50e008:
    // 0x50e008: 0x10000003  b           . + 4 + (0x3 << 2)
label_50e00c:
    if (ctx->pc == 0x50E00Cu) {
        ctx->pc = 0x50E00Cu;
            // 0x50e00c: 0x26160098  addiu       $s6, $s0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
        ctx->pc = 0x50E010u;
        goto label_50e010;
    }
    ctx->pc = 0x50E008u;
    {
        const bool branch_taken_0x50e008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50E00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E008u;
            // 0x50e00c: 0x26160098  addiu       $s6, $s0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e008) {
            ctx->pc = 0x50E018u;
            goto label_50e018;
        }
    }
    ctx->pc = 0x50E010u;
label_50e010:
    // 0x50e010: 0x26160058  addiu       $s6, $s0, 0x58
    ctx->pc = 0x50e010u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_50e014:
    // 0x50e014: 0x0  nop
    ctx->pc = 0x50e014u;
    // NOP
label_50e018:
    // 0x50e018: 0xc040180  jal         func_100600
label_50e01c:
    if (ctx->pc == 0x50E01Cu) {
        ctx->pc = 0x50E01Cu;
            // 0x50e01c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x50E020u;
        goto label_50e020;
    }
    ctx->pc = 0x50E018u;
    SET_GPR_U32(ctx, 31, 0x50E020u);
    ctx->pc = 0x50E01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E018u;
            // 0x50e01c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E020u; }
        if (ctx->pc != 0x50E020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E020u; }
        if (ctx->pc != 0x50E020u) { return; }
    }
    ctx->pc = 0x50E020u;
label_50e020:
    // 0x50e020: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_50e024:
    if (ctx->pc == 0x50E024u) {
        ctx->pc = 0x50E028u;
        goto label_50e028;
    }
    ctx->pc = 0x50E020u;
    {
        const bool branch_taken_0x50e020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50e020) {
            ctx->pc = 0x50E058u;
            goto label_50e058;
        }
    }
    ctx->pc = 0x50E028u;
label_50e028:
    // 0x50e028: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x50e028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50e02c:
    // 0x50e02c: 0x822911aa  lb          $t1, 0x11AA($s1)
    ctx->pc = 0x50e02cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_50e030:
    // 0x50e030: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x50e030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_50e034:
    // 0x50e034: 0x8e2a0d98  lw          $t2, 0xD98($s1)
    ctx->pc = 0x50e034u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_50e038:
    // 0x50e038: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x50e038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_50e03c:
    // 0x50e03c: 0x3445cc18  ori         $a1, $v0, 0xCC18
    ctx->pc = 0x50e03cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52248);
label_50e040:
    // 0x50e040: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50e040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50e044:
    // 0x50e044: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x50e044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_50e048:
    // 0x50e048: 0x24080041  addiu       $t0, $zero, 0x41
    ctx->pc = 0x50e048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_50e04c:
    // 0x50e04c: 0xc0b9404  jal         func_2E5010
label_50e050:
    if (ctx->pc == 0x50E050u) {
        ctx->pc = 0x50E050u;
            // 0x50e050: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E054u;
        goto label_50e054;
    }
    ctx->pc = 0x50E04Cu;
    SET_GPR_U32(ctx, 31, 0x50E054u);
    ctx->pc = 0x50E050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E04Cu;
            // 0x50e050: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E054u; }
        if (ctx->pc != 0x50E054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E054u; }
        if (ctx->pc != 0x50E054u) { return; }
    }
    ctx->pc = 0x50E054u;
label_50e054:
    // 0x50e054: 0x0  nop
    ctx->pc = 0x50e054u;
    // NOP
label_50e058:
    // 0x50e058: 0x14b080  sll         $s6, $s4, 2
    ctx->pc = 0x50e058u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_50e05c:
    // 0x50e05c: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x50e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
label_50e060:
    // 0x50e060: 0x2b61021  addu        $v0, $s5, $s6
    ctx->pc = 0x50e060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
label_50e064:
    // 0x50e064: 0xac4300a0  sw          $v1, 0xA0($v0)
    ctx->pc = 0x50e064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 3));
label_50e068:
    // 0x50e068: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x50e068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_50e06c:
    // 0x50e06c: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x50e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_50e070:
    // 0x50e070: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x50e070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_50e074:
    // 0x50e074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50e074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50e078:
    // 0x50e078: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x50e078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_50e07c:
    // 0x50e07c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x50e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_50e080:
    // 0x50e080: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x50e080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_50e084:
    // 0x50e084: 0x16e2001a  bne         $s7, $v0, . + 4 + (0x1A << 2)
label_50e088:
    if (ctx->pc == 0x50E088u) {
        ctx->pc = 0x50E088u;
            // 0x50e088: 0xac6000e8  sw          $zero, 0xE8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 0));
        ctx->pc = 0x50E08Cu;
        goto label_50e08c;
    }
    ctx->pc = 0x50E084u;
    {
        const bool branch_taken_0x50e084 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x50E088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E084u;
            // 0x50e088: 0xac6000e8  sw          $zero, 0xE8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e084) {
            ctx->pc = 0x50E0F0u;
            goto label_50e0f0;
        }
    }
    ctx->pc = 0x50E08Cu;
label_50e08c:
    // 0x50e08c: 0xc040180  jal         func_100600
label_50e090:
    if (ctx->pc == 0x50E090u) {
        ctx->pc = 0x50E090u;
            // 0x50e090: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x50E094u;
        goto label_50e094;
    }
    ctx->pc = 0x50E08Cu;
    SET_GPR_U32(ctx, 31, 0x50E094u);
    ctx->pc = 0x50E090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E08Cu;
            // 0x50e090: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E094u; }
        if (ctx->pc != 0x50E094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E094u; }
        if (ctx->pc != 0x50E094u) { return; }
    }
    ctx->pc = 0x50E094u;
label_50e094:
    // 0x50e094: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_50e098:
    if (ctx->pc == 0x50E098u) {
        ctx->pc = 0x50E098u;
            // 0x50e098: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E09Cu;
        goto label_50e09c;
    }
    ctx->pc = 0x50E094u;
    {
        const bool branch_taken_0x50e094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50E098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E094u;
            // 0x50e098: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e094) {
            ctx->pc = 0x50E0F0u;
            goto label_50e0f0;
        }
    }
    ctx->pc = 0x50E09Cu;
label_50e09c:
    // 0x50e09c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x50e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_50e0a0:
    // 0x50e0a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50e0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50e0a4:
    // 0x50e0a4: 0x34458704  ori         $a1, $v0, 0x8704
    ctx->pc = 0x50e0a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34564);
label_50e0a8:
    // 0x50e0a8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x50e0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_50e0ac:
    // 0x50e0ac: 0xc10ca68  jal         func_4329A0
label_50e0b0:
    if (ctx->pc == 0x50E0B0u) {
        ctx->pc = 0x50E0B0u;
            // 0x50e0b0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x50E0B4u;
        goto label_50e0b4;
    }
    ctx->pc = 0x50E0ACu;
    SET_GPR_U32(ctx, 31, 0x50E0B4u);
    ctx->pc = 0x50E0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E0ACu;
            // 0x50e0b0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E0B4u; }
        if (ctx->pc != 0x50E0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E0B4u; }
        if (ctx->pc != 0x50E0B4u) { return; }
    }
    ctx->pc = 0x50E0B4u;
label_50e0b4:
    // 0x50e0b4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x50e0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_50e0b8:
    // 0x50e0b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x50e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_50e0bc:
    // 0x50e0bc: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x50e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_50e0c0:
    // 0x50e0c0: 0x244231c0  addiu       $v0, $v0, 0x31C0
    ctx->pc = 0x50e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12736));
label_50e0c4:
    // 0x50e0c4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x50e0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_50e0c8:
    // 0x50e0c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x50e0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_50e0cc:
    // 0x50e0cc: 0x3c03c0e0  lui         $v1, 0xC0E0
    ctx->pc = 0x50e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49376 << 16));
label_50e0d0:
    // 0x50e0d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50e0d4:
    // 0x50e0d4: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x50e0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_50e0d8:
    // 0x50e0d8: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x50e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_50e0dc:
    // 0x50e0dc: 0xae340058  sw          $s4, 0x58($s1)
    ctx->pc = 0x50e0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 20));
label_50e0e0:
    // 0x50e0e0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x50e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_50e0e4:
    // 0x50e0e4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x50e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_50e0e8:
    // 0x50e0e8: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x50e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_50e0ec:
    // 0x50e0ec: 0x0  nop
    ctx->pc = 0x50e0ecu;
    // NOP
label_50e0f0:
    // 0x50e0f0: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x50e0f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_50e0f4:
    // 0x50e0f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x50e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50e0f8:
    // 0x50e0f8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_50e0fc:
    if (ctx->pc == 0x50E0FCu) {
        ctx->pc = 0x50E100u;
        goto label_50e100;
    }
    ctx->pc = 0x50E0F8u;
    {
        const bool branch_taken_0x50e0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x50e0f8) {
            ctx->pc = 0x50E128u;
            goto label_50e128;
        }
    }
    ctx->pc = 0x50E100u;
label_50e100:
    // 0x50e100: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x50e100u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_50e104:
    // 0x50e104: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x50e104u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50e108:
    // 0x50e108: 0x145e0007  bne         $v0, $fp, . + 4 + (0x7 << 2)
label_50e10c:
    if (ctx->pc == 0x50E10Cu) {
        ctx->pc = 0x50E110u;
        goto label_50e110;
    }
    ctx->pc = 0x50E108u;
    {
        const bool branch_taken_0x50e108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x50e108) {
            ctx->pc = 0x50E128u;
            goto label_50e128;
        }
    }
    ctx->pc = 0x50E110u;
label_50e110:
    // 0x50e110: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x50e110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_50e114:
    // 0x50e114: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x50e114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_50e118:
    // 0x50e118: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x50e118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_50e11c:
    // 0x50e11c: 0x320f809  jalr        $t9
label_50e120:
    if (ctx->pc == 0x50E120u) {
        ctx->pc = 0x50E120u;
            // 0x50e120: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E124u;
        goto label_50e124;
    }
    ctx->pc = 0x50E11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50E124u);
        ctx->pc = 0x50E120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E11Cu;
            // 0x50e120: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50E124u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50E124u; }
            if (ctx->pc != 0x50E124u) { return; }
        }
        }
    }
    ctx->pc = 0x50E124u;
label_50e124:
    // 0x50e124: 0x0  nop
    ctx->pc = 0x50e124u;
    // NOP
label_50e128:
    // 0x50e128: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x50e128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_50e12c:
    // 0x50e12c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x50e12cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_50e130:
    // 0x50e130: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x50e130u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_50e134:
    // 0x50e134: 0x297102b  sltu        $v0, $s4, $s7
    ctx->pc = 0x50e134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_50e138:
    // 0x50e138: 0x1440ff56  bnez        $v0, . + 4 + (-0xAA << 2)
label_50e13c:
    if (ctx->pc == 0x50E13Cu) {
        ctx->pc = 0x50E13Cu;
            // 0x50e13c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x50E140u;
        goto label_50e140;
    }
    ctx->pc = 0x50E138u;
    {
        const bool branch_taken_0x50e138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x50E13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E138u;
            // 0x50e13c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e138) {
            ctx->pc = 0x50DE94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50de94;
        }
    }
    ctx->pc = 0x50E140u;
label_50e140:
    // 0x50e140: 0x53c00006  beql        $fp, $zero, . + 4 + (0x6 << 2)
label_50e144:
    if (ctx->pc == 0x50E144u) {
        ctx->pc = 0x50E144u;
            // 0x50e144: 0x26b200b0  addiu       $s2, $s5, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
        ctx->pc = 0x50E148u;
        goto label_50e148;
    }
    ctx->pc = 0x50E140u;
    {
        const bool branch_taken_0x50e140 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x50e140) {
            ctx->pc = 0x50E144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50E140u;
            // 0x50e144: 0x26b200b0  addiu       $s2, $s5, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50E15Cu;
            goto label_50e15c;
        }
    }
    ctx->pc = 0x50E148u;
label_50e148:
    // 0x50e148: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x50e148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_50e14c:
    // 0x50e14c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x50e14cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_50e150:
    // 0x50e150: 0x320f809  jalr        $t9
label_50e154:
    if (ctx->pc == 0x50E154u) {
        ctx->pc = 0x50E154u;
            // 0x50e154: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E158u;
        goto label_50e158;
    }
    ctx->pc = 0x50E150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50E158u);
        ctx->pc = 0x50E154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E150u;
            // 0x50e154: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50E158u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50E158u; }
            if (ctx->pc != 0x50E158u) { return; }
        }
        }
    }
    ctx->pc = 0x50E158u;
label_50e158:
    // 0x50e158: 0x26b200b0  addiu       $s2, $s5, 0xB0
    ctx->pc = 0x50e158u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
label_50e15c:
    // 0x50e15c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x50e15cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50e160:
    // 0x50e160: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50e160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_50e164:
    // 0x50e164: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x50e164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_50e168:
    // 0x50e168: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x50e168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_50e16c:
    // 0x50e16c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x50e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_50e170:
    // 0x50e170: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
label_50e174:
    if (ctx->pc == 0x50E174u) {
        ctx->pc = 0x50E174u;
            // 0x50e174: 0x260b02d  daddu       $s6, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E178u;
        goto label_50e178;
    }
    ctx->pc = 0x50E170u;
    {
        const bool branch_taken_0x50e170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x50E174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E170u;
            // 0x50e174: 0x260b02d  daddu       $s6, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e170) {
            ctx->pc = 0x50E228u;
            goto label_50e228;
        }
    }
    ctx->pc = 0x50E178u;
label_50e178:
    // 0x50e178: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50e178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50e17c:
    // 0x50e17c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x50e17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50e180:
    // 0x50e180: 0x8c510e80  lw          $s1, 0xE80($v0)
    ctx->pc = 0x50e180u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_50e184:
    // 0x50e184: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x50e184u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_50e188:
    // 0x50e188: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x50e188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_50e18c:
    // 0x50e18c: 0x320f809  jalr        $t9
label_50e190:
    if (ctx->pc == 0x50E190u) {
        ctx->pc = 0x50E190u;
            // 0x50e190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E194u;
        goto label_50e194;
    }
    ctx->pc = 0x50E18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50E194u);
        ctx->pc = 0x50E190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E18Cu;
            // 0x50e190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50E194u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50E194u; }
            if (ctx->pc != 0x50E194u) { return; }
        }
        }
    }
    ctx->pc = 0x50E194u;
label_50e194:
    // 0x50e194: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x50e194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_50e198:
    // 0x50e198: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x50e198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_50e19c:
    // 0x50e19c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50e19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_50e1a0:
    // 0x50e1a0: 0x245200b0  addiu       $s2, $v0, 0xB0
    ctx->pc = 0x50e1a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_50e1a4:
    // 0x50e1a4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x50e1a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_50e1a8:
    // 0x50e1a8: 0x320f809  jalr        $t9
label_50e1ac:
    if (ctx->pc == 0x50E1ACu) {
        ctx->pc = 0x50E1ACu;
            // 0x50e1ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E1B0u;
        goto label_50e1b0;
    }
    ctx->pc = 0x50E1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50E1B0u);
        ctx->pc = 0x50E1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E1A8u;
            // 0x50e1ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50E1B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50E1B0u; }
            if (ctx->pc != 0x50E1B0u) { return; }
        }
        }
    }
    ctx->pc = 0x50E1B0u;
label_50e1b0:
    // 0x50e1b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x50e1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_50e1b4:
    // 0x50e1b4: 0x64140001  daddiu      $s4, $zero, 0x1
    ctx->pc = 0x50e1b4u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_50e1b8:
    // 0x50e1b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50e1bc:
    // 0x50e1bc: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x50e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_50e1c0:
    // 0x50e1c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_50e1c4:
    // 0x50e1c4: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x50e1c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_50e1c8:
    // 0x50e1c8: 0x8e220e38  lw          $v0, 0xE38($s1)
    ctx->pc = 0x50e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
label_50e1cc:
    // 0x50e1cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_50e1d0:
    if (ctx->pc == 0x50E1D0u) {
        ctx->pc = 0x50E1D0u;
            // 0x50e1d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E1D4u;
        goto label_50e1d4;
    }
    ctx->pc = 0x50E1CCu;
    {
        const bool branch_taken_0x50e1cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50E1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E1CCu;
            // 0x50e1d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e1cc) {
            ctx->pc = 0x50E1E8u;
            goto label_50e1e8;
        }
    }
    ctx->pc = 0x50E1D4u;
label_50e1d4:
    // 0x50e1d4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x50e1d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_50e1d8:
    // 0x50e1d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_50e1dc:
    if (ctx->pc == 0x50E1DCu) {
        ctx->pc = 0x50E1E0u;
        goto label_50e1e0;
    }
    ctx->pc = 0x50E1D8u;
    {
        const bool branch_taken_0x50e1d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x50e1d8) {
            ctx->pc = 0x50E1E8u;
            goto label_50e1e8;
        }
    }
    ctx->pc = 0x50E1E0u;
label_50e1e0:
    // 0x50e1e0: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x50e1e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_50e1e4:
    // 0x50e1e4: 0x0  nop
    ctx->pc = 0x50e1e4u;
    // NOP
label_50e1e8:
    // 0x50e1e8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_50e1ec:
    if (ctx->pc == 0x50E1ECu) {
        ctx->pc = 0x50E1F0u;
        goto label_50e1f0;
    }
    ctx->pc = 0x50E1E8u;
    {
        const bool branch_taken_0x50e1e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x50e1e8) {
            ctx->pc = 0x50E208u;
            goto label_50e208;
        }
    }
    ctx->pc = 0x50E1F0u;
label_50e1f0:
    // 0x50e1f0: 0xc075eb4  jal         func_1D7AD0
label_50e1f4:
    if (ctx->pc == 0x50E1F4u) {
        ctx->pc = 0x50E1F4u;
            // 0x50e1f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E1F8u;
        goto label_50e1f8;
    }
    ctx->pc = 0x50E1F0u;
    SET_GPR_U32(ctx, 31, 0x50E1F8u);
    ctx->pc = 0x50E1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E1F0u;
            // 0x50e1f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E1F8u; }
        if (ctx->pc != 0x50E1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E1F8u; }
        if (ctx->pc != 0x50E1F8u) { return; }
    }
    ctx->pc = 0x50E1F8u;
label_50e1f8:
    // 0x50e1f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_50e1fc:
    if (ctx->pc == 0x50E1FCu) {
        ctx->pc = 0x50E200u;
        goto label_50e200;
    }
    ctx->pc = 0x50E1F8u;
    {
        const bool branch_taken_0x50e1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50e1f8) {
            ctx->pc = 0x50E208u;
            goto label_50e208;
        }
    }
    ctx->pc = 0x50E200u;
label_50e200:
    // 0x50e200: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x50e200u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50e204:
    // 0x50e204: 0x0  nop
    ctx->pc = 0x50e204u;
    // NOP
label_50e208:
    // 0x50e208: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_50e20c:
    if (ctx->pc == 0x50E20Cu) {
        ctx->pc = 0x50E210u;
        goto label_50e210;
    }
    ctx->pc = 0x50E208u;
    {
        const bool branch_taken_0x50e208 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x50e208) {
            ctx->pc = 0x50E220u;
            goto label_50e220;
        }
    }
    ctx->pc = 0x50E210u;
label_50e210:
    // 0x50e210: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x50e210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_50e214:
    // 0x50e214: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x50e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_50e218:
    // 0x50e218: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_50e21c:
    if (ctx->pc == 0x50E21Cu) {
        ctx->pc = 0x50E220u;
        goto label_50e220;
    }
    ctx->pc = 0x50E218u;
    {
        const bool branch_taken_0x50e218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x50e218) {
            ctx->pc = 0x50E228u;
            goto label_50e228;
        }
    }
    ctx->pc = 0x50E220u;
label_50e220:
    // 0x50e220: 0x8e330d98  lw          $s3, 0xD98($s1)
    ctx->pc = 0x50e220u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_50e224:
    // 0x50e224: 0x0  nop
    ctx->pc = 0x50e224u;
    // NOP
label_50e228:
    // 0x50e228: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x50e228u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_50e22c:
    // 0x50e22c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x50e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50e230:
    // 0x50e230: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_50e234:
    if (ctx->pc == 0x50E234u) {
        ctx->pc = 0x50E238u;
        goto label_50e238;
    }
    ctx->pc = 0x50E230u;
    {
        const bool branch_taken_0x50e230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x50e230) {
            ctx->pc = 0x50E280u;
            goto label_50e280;
        }
    }
    ctx->pc = 0x50E238u;
label_50e238:
    // 0x50e238: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50e238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_50e23c:
    // 0x50e23c: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x50e23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_50e240:
    // 0x50e240: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50e240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50e244:
    // 0x50e244: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x50e244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_50e248:
    // 0x50e248: 0x320f809  jalr        $t9
label_50e24c:
    if (ctx->pc == 0x50E24Cu) {
        ctx->pc = 0x50E24Cu;
            // 0x50e24c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E250u;
        goto label_50e250;
    }
    ctx->pc = 0x50E248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50E250u);
        ctx->pc = 0x50E24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E248u;
            // 0x50e24c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50E250u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50E250u; }
            if (ctx->pc != 0x50E250u) { return; }
        }
        }
    }
    ctx->pc = 0x50E250u;
label_50e250:
    // 0x50e250: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x50e250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_50e254:
    // 0x50e254: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x50e254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_50e258:
    // 0x50e258: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x50e258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_50e25c:
    // 0x50e25c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x50e25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_50e260:
    // 0x50e260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x50e260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_50e264:
    // 0x50e264: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x50e264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50e268:
    // 0x50e268: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x50e268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_50e26c:
    // 0x50e26c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x50e26cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_50e270:
    // 0x50e270: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x50e270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_50e274:
    // 0x50e274: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x50e274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_50e278:
    // 0x50e278: 0x320f809  jalr        $t9
label_50e27c:
    if (ctx->pc == 0x50E27Cu) {
        ctx->pc = 0x50E27Cu;
            // 0x50e27c: 0x244600b8  addiu       $a2, $v0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
        ctx->pc = 0x50E280u;
        goto label_50e280;
    }
    ctx->pc = 0x50E278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50E280u);
        ctx->pc = 0x50E27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E278u;
            // 0x50e27c: 0x244600b8  addiu       $a2, $v0, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50E280u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50E280u; }
            if (ctx->pc != 0x50E280u) { return; }
        }
        }
    }
    ctx->pc = 0x50E280u;
label_50e280:
    // 0x50e280: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x50e280u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_50e284:
    // 0x50e284: 0x277102b  sltu        $v0, $s3, $s7
    ctx->pc = 0x50e284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_50e288:
    // 0x50e288: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
label_50e28c:
    if (ctx->pc == 0x50E28Cu) {
        ctx->pc = 0x50E28Cu;
            // 0x50e28c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x50E290u;
        goto label_50e290;
    }
    ctx->pc = 0x50E288u;
    {
        const bool branch_taken_0x50e288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x50E28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E288u;
            // 0x50e28c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e288) {
            ctx->pc = 0x50E160u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50e160;
        }
    }
    ctx->pc = 0x50E290u;
label_50e290:
    // 0x50e290: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x50e290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_50e294:
    // 0x50e294: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x50e294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_50e298:
    // 0x50e298: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50e298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50e29c:
    // 0x50e29c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x50e29cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_50e2a0:
    // 0x50e2a0: 0x320f809  jalr        $t9
label_50e2a4:
    if (ctx->pc == 0x50E2A4u) {
        ctx->pc = 0x50E2A4u;
            // 0x50e2a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x50E2A8u;
        goto label_50e2a8;
    }
    ctx->pc = 0x50E2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50E2A8u);
        ctx->pc = 0x50E2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E2A0u;
            // 0x50e2a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50E2A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50E2A8u; }
            if (ctx->pc != 0x50E2A8u) { return; }
        }
        }
    }
    ctx->pc = 0x50E2A8u;
label_50e2a8:
    // 0x50e2a8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x50e2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_50e2ac:
    // 0x50e2ac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x50e2acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_50e2b0:
    // 0x50e2b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x50e2b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_50e2b4:
    // 0x50e2b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x50e2b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_50e2b8:
    // 0x50e2b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x50e2b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_50e2bc:
    // 0x50e2bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x50e2bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_50e2c0:
    // 0x50e2c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x50e2c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_50e2c4:
    // 0x50e2c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x50e2c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50e2c8:
    // 0x50e2c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50e2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50e2cc:
    // 0x50e2cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50e2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50e2d0:
    // 0x50e2d0: 0x3e00008  jr          $ra
label_50e2d4:
    if (ctx->pc == 0x50E2D4u) {
        ctx->pc = 0x50E2D4u;
            // 0x50e2d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x50E2D8u;
        goto label_50e2d8;
    }
    ctx->pc = 0x50E2D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50E2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E2D0u;
            // 0x50e2d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50E2D8u;
label_50e2d8:
    // 0x50e2d8: 0x0  nop
    ctx->pc = 0x50e2d8u;
    // NOP
label_50e2dc:
    // 0x50e2dc: 0x0  nop
    ctx->pc = 0x50e2dcu;
    // NOP
label_50e2e0:
    // 0x50e2e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x50e2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_50e2e4:
    // 0x50e2e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x50e2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_50e2e8:
    // 0x50e2e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x50e2e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_50e2ec:
    // 0x50e2ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50e2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_50e2f0:
    // 0x50e2f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50e2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50e2f4:
    // 0x50e2f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50e2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50e2f8:
    // 0x50e2f8: 0x8c830d60  lw          $v1, 0xD60($a0)
    ctx->pc = 0x50e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
label_50e2fc:
    // 0x50e2fc: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x50e2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50e300:
    // 0x50e300: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x50e300u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50e304:
    // 0x50e304: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_50e308:
    if (ctx->pc == 0x50E308u) {
        ctx->pc = 0x50E308u;
            // 0x50e308: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E30Cu;
        goto label_50e30c;
    }
    ctx->pc = 0x50E304u;
    {
        const bool branch_taken_0x50e304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x50E308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E304u;
            // 0x50e308: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e304) {
            ctx->pc = 0x50E38Cu;
            goto label_50e38c;
        }
    }
    ctx->pc = 0x50E30Cu;
label_50e30c:
    // 0x50e30c: 0x8e220d70  lw          $v0, 0xD70($s1)
    ctx->pc = 0x50e30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_50e310:
    // 0x50e310: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x50e310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_50e314:
    // 0x50e314: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_50e318:
    if (ctx->pc == 0x50E318u) {
        ctx->pc = 0x50E318u;
            // 0x50e318: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x50E31Cu;
        goto label_50e31c;
    }
    ctx->pc = 0x50E314u;
    {
        const bool branch_taken_0x50e314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50e314) {
            ctx->pc = 0x50E318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50E314u;
            // 0x50e318: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50E334u;
            goto label_50e334;
        }
    }
    ctx->pc = 0x50E31Cu;
label_50e31c:
    // 0x50e31c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x50e31cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_50e320:
    // 0x50e320: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x50e320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_50e324:
    // 0x50e324: 0x320f809  jalr        $t9
label_50e328:
    if (ctx->pc == 0x50E328u) {
        ctx->pc = 0x50E328u;
            // 0x50e328: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x50E32Cu;
        goto label_50e32c;
    }
    ctx->pc = 0x50E324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50E32Cu);
        ctx->pc = 0x50E328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E324u;
            // 0x50e328: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50E32Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50E32Cu; }
            if (ctx->pc != 0x50E32Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50E32Cu;
label_50e32c:
    // 0x50e32c: 0x10000005  b           . + 4 + (0x5 << 2)
label_50e330:
    if (ctx->pc == 0x50E330u) {
        ctx->pc = 0x50E330u;
            // 0x50e330: 0x8e300d74  lw          $s0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->pc = 0x50E334u;
        goto label_50e334;
    }
    ctx->pc = 0x50E32Cu;
    {
        const bool branch_taken_0x50e32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50E330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E32Cu;
            // 0x50e330: 0x8e300d74  lw          $s0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e32c) {
            ctx->pc = 0x50E344u;
            goto label_50e344;
        }
    }
    ctx->pc = 0x50E334u;
label_50e334:
    // 0x50e334: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x50e334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_50e338:
    // 0x50e338: 0x320f809  jalr        $t9
label_50e33c:
    if (ctx->pc == 0x50E33Cu) {
        ctx->pc = 0x50E33Cu;
            // 0x50e33c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x50E340u;
        goto label_50e340;
    }
    ctx->pc = 0x50E338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50E340u);
        ctx->pc = 0x50E33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E338u;
            // 0x50e33c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50E340u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50E340u; }
            if (ctx->pc != 0x50E340u) { return; }
        }
        }
    }
    ctx->pc = 0x50E340u;
label_50e340:
    // 0x50e340: 0x8e300d74  lw          $s0, 0xD74($s1)
    ctx->pc = 0x50e340u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_50e344:
    // 0x50e344: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x50e344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_50e348:
    // 0x50e348: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x50e348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_50e34c:
    // 0x50e34c: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x50e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_50e350:
    // 0x50e350: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x50e350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_50e354:
    // 0x50e354: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x50e354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_50e358:
    // 0x50e358: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x50e358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_50e35c:
    // 0x50e35c: 0xc0a545c  jal         func_295170
label_50e360:
    if (ctx->pc == 0x50E360u) {
        ctx->pc = 0x50E360u;
            // 0x50e360: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x50E364u;
        goto label_50e364;
    }
    ctx->pc = 0x50E35Cu;
    SET_GPR_U32(ctx, 31, 0x50E364u);
    ctx->pc = 0x50E360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E35Cu;
            // 0x50e360: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E364u; }
        if (ctx->pc != 0x50E364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E364u; }
        if (ctx->pc != 0x50E364u) { return; }
    }
    ctx->pc = 0x50E364u;
label_50e364:
    // 0x50e364: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x50e364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
label_50e368:
    // 0x50e368: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50e368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50e36c:
    // 0x50e36c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x50e36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_50e370:
    // 0x50e370: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x50e370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_50e374:
    // 0x50e374: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x50e374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_50e378:
    // 0x50e378: 0xc08bf20  jal         func_22FC80
label_50e37c:
    if (ctx->pc == 0x50E37Cu) {
        ctx->pc = 0x50E37Cu;
            // 0x50e37c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E380u;
        goto label_50e380;
    }
    ctx->pc = 0x50E378u;
    SET_GPR_U32(ctx, 31, 0x50E380u);
    ctx->pc = 0x50E37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E378u;
            // 0x50e37c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E380u; }
        if (ctx->pc != 0x50E380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E380u; }
        if (ctx->pc != 0x50E380u) { return; }
    }
    ctx->pc = 0x50E380u;
label_50e380:
    // 0x50e380: 0x8e230d9c  lw          $v1, 0xD9C($s1)
    ctx->pc = 0x50e380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3484)));
label_50e384:
    // 0x50e384: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x50e384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_50e388:
    // 0x50e388: 0xae230d9c  sw          $v1, 0xD9C($s1)
    ctx->pc = 0x50e388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3484), GPR_U32(ctx, 3));
label_50e38c:
    // 0x50e38c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x50e38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_50e390:
    // 0x50e390: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x50e390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50e394:
    // 0x50e394: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50e394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50e398:
    // 0x50e398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50e398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50e39c:
    // 0x50e39c: 0x3e00008  jr          $ra
label_50e3a0:
    if (ctx->pc == 0x50E3A0u) {
        ctx->pc = 0x50E3A0u;
            // 0x50e3a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x50E3A4u;
        goto label_50e3a4;
    }
    ctx->pc = 0x50E39Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50E3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E39Cu;
            // 0x50e3a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50E3A4u;
label_50e3a4:
    // 0x50e3a4: 0x0  nop
    ctx->pc = 0x50e3a4u;
    // NOP
label_50e3a8:
    // 0x50e3a8: 0x0  nop
    ctx->pc = 0x50e3a8u;
    // NOP
label_50e3ac:
    // 0x50e3ac: 0x0  nop
    ctx->pc = 0x50e3acu;
    // NOP
label_50e3b0:
    // 0x50e3b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x50e3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_50e3b4:
    // 0x50e3b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x50e3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_50e3b8:
    // 0x50e3b8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x50e3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_50e3bc:
    // 0x50e3bc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x50e3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_50e3c0:
    // 0x50e3c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x50e3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_50e3c4:
    // 0x50e3c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x50e3c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50e3c8:
    // 0x50e3c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x50e3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_50e3cc:
    // 0x50e3cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x50e3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_50e3d0:
    // 0x50e3d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x50e3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_50e3d4:
    // 0x50e3d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x50e3d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_50e3d8:
    // 0x50e3d8: 0x8c930550  lw          $s3, 0x550($a0)
    ctx->pc = 0x50e3d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_50e3dc:
    // 0x50e3dc: 0x8c920d74  lw          $s2, 0xD74($a0)
    ctx->pc = 0x50e3dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3444)));
label_50e3e0:
    // 0x50e3e0: 0xc0754b4  jal         func_1D52D0
label_50e3e4:
    if (ctx->pc == 0x50E3E4u) {
        ctx->pc = 0x50E3E4u;
            // 0x50e3e4: 0x26840440  addiu       $a0, $s4, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1088));
        ctx->pc = 0x50E3E8u;
        goto label_50e3e8;
    }
    ctx->pc = 0x50E3E0u;
    SET_GPR_U32(ctx, 31, 0x50E3E8u);
    ctx->pc = 0x50E3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E3E0u;
            // 0x50e3e4: 0x26840440  addiu       $a0, $s4, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E3E8u; }
        if (ctx->pc != 0x50E3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E3E8u; }
        if (ctx->pc != 0x50E3E8u) { return; }
    }
    ctx->pc = 0x50E3E8u;
label_50e3e8:
    // 0x50e3e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x50e3e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_50e3ec:
    // 0x50e3ec: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x50e3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_50e3f0:
    // 0x50e3f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50e3f4:
    // 0x50e3f4: 0x26840340  addiu       $a0, $s4, 0x340
    ctx->pc = 0x50e3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 832));
label_50e3f8:
    // 0x50e3f8: 0xa28211c0  sb          $v0, 0x11C0($s4)
    ctx->pc = 0x50e3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4544), (uint8_t)GPR_U32(ctx, 2));
label_50e3fc:
    // 0x50e3fc: 0x24a5b6d0  addiu       $a1, $a1, -0x4930
    ctx->pc = 0x50e3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948560));
label_50e400:
    // 0x50e400: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x50e400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_50e404:
    // 0x50e404: 0xc04cc04  jal         func_133010
label_50e408:
    if (ctx->pc == 0x50E408u) {
        ctx->pc = 0x50E408u;
            // 0x50e408: 0xae820db8  sw          $v0, 0xDB8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3512), GPR_U32(ctx, 2));
        ctx->pc = 0x50E40Cu;
        goto label_50e40c;
    }
    ctx->pc = 0x50E404u;
    SET_GPR_U32(ctx, 31, 0x50E40Cu);
    ctx->pc = 0x50E408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E404u;
            // 0x50e408: 0xae820db8  sw          $v0, 0xDB8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E40Cu; }
        if (ctx->pc != 0x50E40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E40Cu; }
        if (ctx->pc != 0x50E40Cu) { return; }
    }
    ctx->pc = 0x50E40Cu;
label_50e40c:
    // 0x50e40c: 0x8e900d74  lw          $s0, 0xD74($s4)
    ctx->pc = 0x50e40cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3444)));
label_50e410:
    // 0x50e410: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x50e410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_50e414:
    // 0x50e414: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x50e414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_50e418:
    // 0x50e418: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x50e418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_50e41c:
    // 0x50e41c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x50e41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_50e420:
    // 0x50e420: 0xc0a545c  jal         func_295170
label_50e424:
    if (ctx->pc == 0x50E424u) {
        ctx->pc = 0x50E424u;
            // 0x50e424: 0x62a824  and         $s5, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x50E428u;
        goto label_50e428;
    }
    ctx->pc = 0x50E420u;
    SET_GPR_U32(ctx, 31, 0x50E428u);
    ctx->pc = 0x50E424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E420u;
            // 0x50e424: 0x62a824  and         $s5, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E428u; }
        if (ctx->pc != 0x50E428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E428u; }
        if (ctx->pc != 0x50E428u) { return; }
    }
    ctx->pc = 0x50E428u;
label_50e428:
    // 0x50e428: 0xac55002c  sw          $s5, 0x2C($v0)
    ctx->pc = 0x50e428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 21));
label_50e42c:
    // 0x50e42c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x50e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_50e430:
    // 0x50e430: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x50e430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_50e434:
    // 0x50e434: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x50e434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_50e438:
    // 0x50e438: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x50e438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_50e43c:
    // 0x50e43c: 0xc08bf20  jal         func_22FC80
label_50e440:
    if (ctx->pc == 0x50E440u) {
        ctx->pc = 0x50E440u;
            // 0x50e440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E444u;
        goto label_50e444;
    }
    ctx->pc = 0x50E43Cu;
    SET_GPR_U32(ctx, 31, 0x50E444u);
    ctx->pc = 0x50E440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E43Cu;
            // 0x50e440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E444u; }
        if (ctx->pc != 0x50E444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E444u; }
        if (ctx->pc != 0x50E444u) { return; }
    }
    ctx->pc = 0x50E444u;
label_50e444:
    // 0x50e444: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x50e444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_50e448:
    // 0x50e448: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x50e448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_50e44c:
    // 0x50e44c: 0xc440c6b8  lwc1        $f0, -0x3948($v0)
    ctx->pc = 0x50e44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_50e450:
    // 0x50e450: 0xae830dbc  sw          $v1, 0xDBC($s4)
    ctx->pc = 0x50e450u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3516), GPR_U32(ctx, 3));
label_50e454:
    // 0x50e454: 0xae830694  sw          $v1, 0x694($s4)
    ctx->pc = 0x50e454u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1684), GPR_U32(ctx, 3));
label_50e458:
    // 0x50e458: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x50e458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_50e45c:
    // 0x50e45c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x50e45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50e460:
    // 0x50e460: 0x8e820550  lw          $v0, 0x550($s4)
    ctx->pc = 0x50e460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
label_50e464:
    // 0x50e464: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x50e464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_50e468:
    // 0x50e468: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x50e468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_50e46c:
    // 0x50e46c: 0xe6810de0  swc1        $f1, 0xDE0($s4)
    ctx->pc = 0x50e46cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3552), bits); }
label_50e470:
    // 0x50e470: 0xe6800ddc  swc1        $f0, 0xDDC($s4)
    ctx->pc = 0x50e470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3548), bits); }
label_50e474:
    // 0x50e474: 0xae800de4  sw          $zero, 0xDE4($s4)
    ctx->pc = 0x50e474u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3556), GPR_U32(ctx, 0));
label_50e478:
    // 0x50e478: 0xc077fb0  jal         func_1DFEC0
label_50e47c:
    if (ctx->pc == 0x50E47Cu) {
        ctx->pc = 0x50E47Cu;
            // 0x50e47c: 0xae800de8  sw          $zero, 0xDE8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3560), GPR_U32(ctx, 0));
        ctx->pc = 0x50E480u;
        goto label_50e480;
    }
    ctx->pc = 0x50E478u;
    SET_GPR_U32(ctx, 31, 0x50E480u);
    ctx->pc = 0x50E47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E478u;
            // 0x50e47c: 0xae800de8  sw          $zero, 0xDE8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E480u; }
        if (ctx->pc != 0x50E480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E480u; }
        if (ctx->pc != 0x50E480u) { return; }
    }
    ctx->pc = 0x50E480u;
label_50e480:
    // 0x50e480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50e480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50e484:
    // 0x50e484: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x50e484u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_50e488:
    // 0x50e488: 0x268402e0  addiu       $a0, $s4, 0x2E0
    ctx->pc = 0x50e488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
label_50e48c:
    // 0x50e48c: 0xae4202b0  sw          $v0, 0x2B0($s2)
    ctx->pc = 0x50e48cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 688), GPR_U32(ctx, 2));
label_50e490:
    // 0x50e490: 0x26850580  addiu       $a1, $s4, 0x580
    ctx->pc = 0x50e490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1408));
label_50e494:
    // 0x50e494: 0xc04cca0  jal         func_133280
label_50e498:
    if (ctx->pc == 0x50E498u) {
        ctx->pc = 0x50E498u;
            // 0x50e498: 0x24c6b6c0  addiu       $a2, $a2, -0x4940 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948544));
        ctx->pc = 0x50E49Cu;
        goto label_50e49c;
    }
    ctx->pc = 0x50E494u;
    SET_GPR_U32(ctx, 31, 0x50E49Cu);
    ctx->pc = 0x50E498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E494u;
            // 0x50e498: 0x24c6b6c0  addiu       $a2, $a2, -0x4940 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E49Cu; }
        if (ctx->pc != 0x50E49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E49Cu; }
        if (ctx->pc != 0x50E49Cu) { return; }
    }
    ctx->pc = 0x50E49Cu;
label_50e49c:
    // 0x50e49c: 0x8e830d9c  lw          $v1, 0xD9C($s4)
    ctx->pc = 0x50e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3484)));
label_50e4a0:
    // 0x50e4a0: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x50e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_50e4a4:
    // 0x50e4a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50e4a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50e4a8:
    // 0x50e4a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x50e4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_50e4ac:
    // 0x50e4ac: 0xae820d9c  sw          $v0, 0xD9C($s4)
    ctx->pc = 0x50e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3484), GPR_U32(ctx, 2));
label_50e4b0:
    // 0x50e4b0: 0xae800e1c  sw          $zero, 0xE1C($s4)
    ctx->pc = 0x50e4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3612), GPR_U32(ctx, 0));
label_50e4b4:
    // 0x50e4b4: 0xae800e20  sw          $zero, 0xE20($s4)
    ctx->pc = 0x50e4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3616), GPR_U32(ctx, 0));
label_50e4b8:
    // 0x50e4b8: 0x8e820d70  lw          $v0, 0xD70($s4)
    ctx->pc = 0x50e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3440)));
label_50e4bc:
    // 0x50e4bc: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x50e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_50e4c0:
    // 0x50e4c0: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_50e4c4:
    if (ctx->pc == 0x50E4C4u) {
        ctx->pc = 0x50E4C4u;
            // 0x50e4c4: 0x8265010c  lb          $a1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->pc = 0x50E4C8u;
        goto label_50e4c8;
    }
    ctx->pc = 0x50E4C0u;
    {
        const bool branch_taken_0x50e4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50e4c0) {
            ctx->pc = 0x50E4C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50E4C0u;
            // 0x50e4c4: 0x8265010c  lb          $a1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50E558u;
            goto label_50e558;
        }
    }
    ctx->pc = 0x50E4C8u;
label_50e4c8:
    // 0x50e4c8: 0x8265010c  lb          $a1, 0x10C($s3)
    ctx->pc = 0x50e4c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_50e4cc:
    // 0x50e4cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50e4d0:
    // 0x50e4d0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x50e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_50e4d4:
    // 0x50e4d4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x50e4d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_50e4d8:
    // 0x50e4d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x50e4d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_50e4dc:
    // 0x50e4dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50e4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50e4e0:
    // 0x50e4e0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x50e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_50e4e4:
    // 0x50e4e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x50e4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50e4e8:
    // 0x50e4e8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x50e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_50e4ec:
    // 0x50e4ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_50e4f0:
    // 0x50e4f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x50e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_50e4f4:
    // 0x50e4f4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x50e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_50e4f8:
    // 0x50e4f8: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x50e4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_50e4fc:
    // 0x50e4fc: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x50e4fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_50e500:
    // 0x50e500: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x50e500u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_50e504:
    // 0x50e504: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x50e504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_50e508:
    // 0x50e508: 0x320f809  jalr        $t9
label_50e50c:
    if (ctx->pc == 0x50E50Cu) {
        ctx->pc = 0x50E50Cu;
            // 0x50e50c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x50E510u;
        goto label_50e510;
    }
    ctx->pc = 0x50E508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50E510u);
        ctx->pc = 0x50E50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E508u;
            // 0x50e50c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50E510u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50E510u; }
            if (ctx->pc != 0x50E510u) { return; }
        }
        }
    }
    ctx->pc = 0x50E510u;
label_50e510:
    // 0x50e510: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x50e510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_50e514:
    // 0x50e514: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x50e514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_50e518:
    // 0x50e518: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x50e518u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_50e51c:
    // 0x50e51c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50e51cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50e520:
    // 0x50e520: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x50e520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_50e524:
    // 0x50e524: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50e524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50e528:
    // 0x50e528: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x50e528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_50e52c:
    // 0x50e52c: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x50e52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_50e530:
    // 0x50e530: 0x320f809  jalr        $t9
label_50e534:
    if (ctx->pc == 0x50E534u) {
        ctx->pc = 0x50E534u;
            // 0x50e534: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x50E538u;
        goto label_50e538;
    }
    ctx->pc = 0x50E530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50E538u);
        ctx->pc = 0x50E534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E530u;
            // 0x50e534: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50E538u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50E538u; }
            if (ctx->pc != 0x50E538u) { return; }
        }
        }
    }
    ctx->pc = 0x50E538u;
label_50e538:
    // 0x50e538: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x50e538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_50e53c:
    // 0x50e53c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50e53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50e540:
    // 0x50e540: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x50e540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_50e544:
    // 0x50e544: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x50e544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_50e548:
    // 0x50e548: 0x320f809  jalr        $t9
label_50e54c:
    if (ctx->pc == 0x50E54Cu) {
        ctx->pc = 0x50E54Cu;
            // 0x50e54c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x50E550u;
        goto label_50e550;
    }
    ctx->pc = 0x50E548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50E550u);
        ctx->pc = 0x50E54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E548u;
            // 0x50e54c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50E550u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50E550u; }
            if (ctx->pc != 0x50E550u) { return; }
        }
        }
    }
    ctx->pc = 0x50E550u;
label_50e550:
    // 0x50e550: 0x10000019  b           . + 4 + (0x19 << 2)
label_50e554:
    if (ctx->pc == 0x50E554u) {
        ctx->pc = 0x50E554u;
            // 0x50e554: 0x26840560  addiu       $a0, $s4, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
        ctx->pc = 0x50E558u;
        goto label_50e558;
    }
    ctx->pc = 0x50E550u;
    {
        const bool branch_taken_0x50e550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50E554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E550u;
            // 0x50e554: 0x26840560  addiu       $a0, $s4, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e550) {
            ctx->pc = 0x50E5B8u;
            goto label_50e5b8;
        }
    }
    ctx->pc = 0x50E558u;
label_50e558:
    // 0x50e558: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50e558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50e55c:
    // 0x50e55c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x50e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_50e560:
    // 0x50e560: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x50e560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_50e564:
    // 0x50e564: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x50e564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_50e568:
    // 0x50e568: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50e568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50e56c:
    // 0x50e56c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x50e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_50e570:
    // 0x50e570: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x50e570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_50e574:
    // 0x50e574: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x50e574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_50e578:
    // 0x50e578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x50e578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_50e57c:
    // 0x50e57c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x50e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_50e580:
    // 0x50e580: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x50e580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_50e584:
    // 0x50e584: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x50e584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_50e588:
    // 0x50e588: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x50e588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_50e58c:
    // 0x50e58c: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x50e58cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_50e590:
    // 0x50e590: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x50e590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_50e594:
    // 0x50e594: 0x320f809  jalr        $t9
label_50e598:
    if (ctx->pc == 0x50E598u) {
        ctx->pc = 0x50E598u;
            // 0x50e598: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x50E59Cu;
        goto label_50e59c;
    }
    ctx->pc = 0x50E594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50E59Cu);
        ctx->pc = 0x50E598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E594u;
            // 0x50e598: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50E59Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50E59Cu; }
            if (ctx->pc != 0x50E59Cu) { return; }
        }
        }
    }
    ctx->pc = 0x50E59Cu;
label_50e59c:
    // 0x50e59c: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x50e59cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_50e5a0:
    // 0x50e5a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50e5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50e5a4:
    // 0x50e5a4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x50e5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_50e5a8:
    // 0x50e5a8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x50e5a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_50e5ac:
    // 0x50e5ac: 0x320f809  jalr        $t9
label_50e5b0:
    if (ctx->pc == 0x50E5B0u) {
        ctx->pc = 0x50E5B0u;
            // 0x50e5b0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x50E5B4u;
        goto label_50e5b4;
    }
    ctx->pc = 0x50E5ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50E5B4u);
        ctx->pc = 0x50E5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E5ACu;
            // 0x50e5b0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50E5B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50E5B4u; }
            if (ctx->pc != 0x50E5B4u) { return; }
        }
        }
    }
    ctx->pc = 0x50E5B4u;
label_50e5b4:
    // 0x50e5b4: 0x26840560  addiu       $a0, $s4, 0x560
    ctx->pc = 0x50e5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
label_50e5b8:
    // 0x50e5b8: 0x268508d0  addiu       $a1, $s4, 0x8D0
    ctx->pc = 0x50e5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2256));
label_50e5bc:
    // 0x50e5bc: 0xc075378  jal         func_1D4DE0
label_50e5c0:
    if (ctx->pc == 0x50E5C0u) {
        ctx->pc = 0x50E5C0u;
            // 0x50e5c0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E5C4u;
        goto label_50e5c4;
    }
    ctx->pc = 0x50E5BCu;
    SET_GPR_U32(ctx, 31, 0x50E5C4u);
    ctx->pc = 0x50E5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E5BCu;
            // 0x50e5c0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E5C4u; }
        if (ctx->pc != 0x50E5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E5C4u; }
        if (ctx->pc != 0x50E5C4u) { return; }
    }
    ctx->pc = 0x50E5C4u;
label_50e5c4:
    // 0x50e5c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x50e5c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_50e5c8:
    // 0x50e5c8: 0x2684092c  addiu       $a0, $s4, 0x92C
    ctx->pc = 0x50e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2348));
label_50e5cc:
    // 0x50e5cc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x50e5ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_50e5d0:
    // 0x50e5d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x50e5d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_50e5d4:
    // 0x50e5d4: 0xc0c753c  jal         func_31D4F0
label_50e5d8:
    if (ctx->pc == 0x50E5D8u) {
        ctx->pc = 0x50E5D8u;
            // 0x50e5d8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x50E5DCu;
        goto label_50e5dc;
    }
    ctx->pc = 0x50E5D4u;
    SET_GPR_U32(ctx, 31, 0x50E5DCu);
    ctx->pc = 0x50E5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E5D4u;
            // 0x50e5d8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E5DCu; }
        if (ctx->pc != 0x50E5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E5DCu; }
        if (ctx->pc != 0x50E5DCu) { return; }
    }
    ctx->pc = 0x50E5DCu;
label_50e5dc:
    // 0x50e5dc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x50e5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_50e5e0:
    // 0x50e5e0: 0x2684087c  addiu       $a0, $s4, 0x87C
    ctx->pc = 0x50e5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2172));
label_50e5e4:
    // 0x50e5e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x50e5e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_50e5e8:
    // 0x50e5e8: 0xc0c753c  jal         func_31D4F0
label_50e5ec:
    if (ctx->pc == 0x50E5ECu) {
        ctx->pc = 0x50E5ECu;
            // 0x50e5ec: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x50E5F0u;
        goto label_50e5f0;
    }
    ctx->pc = 0x50E5E8u;
    SET_GPR_U32(ctx, 31, 0x50E5F0u);
    ctx->pc = 0x50E5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E5E8u;
            // 0x50e5ec: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E5F0u; }
        if (ctx->pc != 0x50E5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E5F0u; }
        if (ctx->pc != 0x50E5F0u) { return; }
    }
    ctx->pc = 0x50E5F0u;
label_50e5f0:
    // 0x50e5f0: 0xc0b9210  jal         func_2E4840
label_50e5f4:
    if (ctx->pc == 0x50E5F4u) {
        ctx->pc = 0x50E5F4u;
            // 0x50e5f4: 0x268407e0  addiu       $a0, $s4, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2016));
        ctx->pc = 0x50E5F8u;
        goto label_50e5f8;
    }
    ctx->pc = 0x50E5F0u;
    SET_GPR_U32(ctx, 31, 0x50E5F8u);
    ctx->pc = 0x50E5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E5F0u;
            // 0x50e5f4: 0x268407e0  addiu       $a0, $s4, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E5F8u; }
        if (ctx->pc != 0x50E5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E5F8u; }
        if (ctx->pc != 0x50E5F8u) { return; }
    }
    ctx->pc = 0x50E5F8u;
label_50e5f8:
    // 0x50e5f8: 0x26850560  addiu       $a1, $s4, 0x560
    ctx->pc = 0x50e5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
label_50e5fc:
    // 0x50e5fc: 0x268408f0  addiu       $a0, $s4, 0x8F0
    ctx->pc = 0x50e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2288));
label_50e600:
    // 0x50e600: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50e600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50e604:
    // 0x50e604: 0xc0c6250  jal         func_318940
label_50e608:
    if (ctx->pc == 0x50E608u) {
        ctx->pc = 0x50E608u;
            // 0x50e608: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E60Cu;
        goto label_50e60c;
    }
    ctx->pc = 0x50E604u;
    SET_GPR_U32(ctx, 31, 0x50E60Cu);
    ctx->pc = 0x50E608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E604u;
            // 0x50e608: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E60Cu; }
        if (ctx->pc != 0x50E60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E60Cu; }
        if (ctx->pc != 0x50E60Cu) { return; }
    }
    ctx->pc = 0x50E60Cu;
label_50e60c:
    // 0x50e60c: 0x8e820e34  lw          $v0, 0xE34($s4)
    ctx->pc = 0x50e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_50e610:
    // 0x50e610: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x50e610u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_50e614:
    // 0x50e614: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_50e618:
    if (ctx->pc == 0x50E618u) {
        ctx->pc = 0x50E618u;
            // 0x50e618: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E61Cu;
        goto label_50e61c;
    }
    ctx->pc = 0x50E614u;
    {
        const bool branch_taken_0x50e614 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50E618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E614u;
            // 0x50e618: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e614) {
            ctx->pc = 0x50E62Cu;
            goto label_50e62c;
        }
    }
    ctx->pc = 0x50E61Cu;
label_50e61c:
    // 0x50e61c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x50e61cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_50e620:
    // 0x50e620: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_50e624:
    if (ctx->pc == 0x50E624u) {
        ctx->pc = 0x50E628u;
        goto label_50e628;
    }
    ctx->pc = 0x50E620u;
    {
        const bool branch_taken_0x50e620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x50e620) {
            ctx->pc = 0x50E62Cu;
            goto label_50e62c;
        }
    }
    ctx->pc = 0x50E628u;
label_50e628:
    // 0x50e628: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x50e628u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50e62c:
    // 0x50e62c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_50e630:
    if (ctx->pc == 0x50E630u) {
        ctx->pc = 0x50E634u;
        goto label_50e634;
    }
    ctx->pc = 0x50E62Cu;
    {
        const bool branch_taken_0x50e62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x50e62c) {
            ctx->pc = 0x50E648u;
            goto label_50e648;
        }
    }
    ctx->pc = 0x50E634u;
label_50e634:
    // 0x50e634: 0xc075eb4  jal         func_1D7AD0
label_50e638:
    if (ctx->pc == 0x50E638u) {
        ctx->pc = 0x50E638u;
            // 0x50e638: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E63Cu;
        goto label_50e63c;
    }
    ctx->pc = 0x50E634u;
    SET_GPR_U32(ctx, 31, 0x50E63Cu);
    ctx->pc = 0x50E638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E634u;
            // 0x50e638: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E63Cu; }
        if (ctx->pc != 0x50E63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E63Cu; }
        if (ctx->pc != 0x50E63Cu) { return; }
    }
    ctx->pc = 0x50E63Cu;
label_50e63c:
    // 0x50e63c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_50e640:
    if (ctx->pc == 0x50E640u) {
        ctx->pc = 0x50E644u;
        goto label_50e644;
    }
    ctx->pc = 0x50E63Cu;
    {
        const bool branch_taken_0x50e63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50e63c) {
            ctx->pc = 0x50E648u;
            goto label_50e648;
        }
    }
    ctx->pc = 0x50E644u;
label_50e644:
    // 0x50e644: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x50e644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50e648:
    // 0x50e648: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_50e64c:
    if (ctx->pc == 0x50E64Cu) {
        ctx->pc = 0x50E64Cu;
            // 0x50e64c: 0x9284005c  lbu         $a0, 0x5C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->pc = 0x50E650u;
        goto label_50e650;
    }
    ctx->pc = 0x50E648u;
    {
        const bool branch_taken_0x50e648 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x50e648) {
            ctx->pc = 0x50E64Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50E648u;
            // 0x50e64c: 0x9284005c  lbu         $a0, 0x5C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50E664u;
            goto label_50e664;
        }
    }
    ctx->pc = 0x50E650u;
label_50e650:
    // 0x50e650: 0x8e830e34  lw          $v1, 0xE34($s4)
    ctx->pc = 0x50e650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_50e654:
    // 0x50e654: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x50e654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_50e658:
    // 0x50e658: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_50e65c:
    if (ctx->pc == 0x50E65Cu) {
        ctx->pc = 0x50E660u;
        goto label_50e660;
    }
    ctx->pc = 0x50E658u;
    {
        const bool branch_taken_0x50e658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x50e658) {
            ctx->pc = 0x50E688u;
            goto label_50e688;
        }
    }
    ctx->pc = 0x50E660u;
label_50e660:
    // 0x50e660: 0x9284005c  lbu         $a0, 0x5C($s4)
    ctx->pc = 0x50e660u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
label_50e664:
    // 0x50e664: 0xc072b78  jal         func_1CADE0
label_50e668:
    if (ctx->pc == 0x50E668u) {
        ctx->pc = 0x50E66Cu;
        goto label_50e66c;
    }
    ctx->pc = 0x50E664u;
    SET_GPR_U32(ctx, 31, 0x50E66Cu);
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E66Cu; }
        if (ctx->pc != 0x50E66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E66Cu; }
        if (ctx->pc != 0x50E66Cu) { return; }
    }
    ctx->pc = 0x50E66Cu;
label_50e66c:
    // 0x50e66c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_50e670:
    if (ctx->pc == 0x50E670u) {
        ctx->pc = 0x50E670u;
            // 0x50e670: 0x8e840d70  lw          $a0, 0xD70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3440)));
        ctx->pc = 0x50E674u;
        goto label_50e674;
    }
    ctx->pc = 0x50E66Cu;
    {
        const bool branch_taken_0x50e66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50e66c) {
            ctx->pc = 0x50E670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50E66Cu;
            // 0x50e670: 0x8e840d70  lw          $a0, 0xD70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50E680u;
            goto label_50e680;
        }
    }
    ctx->pc = 0x50E674u;
label_50e674:
    // 0x50e674: 0xc072aaa  jal         func_1CAAA8
label_50e678:
    if (ctx->pc == 0x50E678u) {
        ctx->pc = 0x50E678u;
            // 0x50e678: 0x9284005c  lbu         $a0, 0x5C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->pc = 0x50E67Cu;
        goto label_50e67c;
    }
    ctx->pc = 0x50E674u;
    SET_GPR_U32(ctx, 31, 0x50E67Cu);
    ctx->pc = 0x50E678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E674u;
            // 0x50e678: 0x9284005c  lbu         $a0, 0x5C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E67Cu; }
        if (ctx->pc != 0x50E67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E67Cu; }
        if (ctx->pc != 0x50E67Cu) { return; }
    }
    ctx->pc = 0x50E67Cu;
label_50e67c:
    // 0x50e67c: 0x8e840d70  lw          $a0, 0xD70($s4)
    ctx->pc = 0x50e67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3440)));
label_50e680:
    // 0x50e680: 0xc0bd98c  jal         func_2F6630
label_50e684:
    if (ctx->pc == 0x50E684u) {
        ctx->pc = 0x50E688u;
        goto label_50e688;
    }
    ctx->pc = 0x50E680u;
    SET_GPR_U32(ctx, 31, 0x50E688u);
    ctx->pc = 0x2F6630u;
    if (runtime->hasFunction(0x2F6630u)) {
        auto targetFn = runtime->lookupFunction(0x2F6630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E688u; }
        if (ctx->pc != 0x50E688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6630_0x2f6630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E688u; }
        if (ctx->pc != 0x50E688u) { return; }
    }
    ctx->pc = 0x50E688u;
label_50e688:
    // 0x50e688: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x50e688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_50e68c:
    // 0x50e68c: 0x26840330  addiu       $a0, $s4, 0x330
    ctx->pc = 0x50e68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 816));
label_50e690:
    // 0x50e690: 0xc04cc04  jal         func_133010
label_50e694:
    if (ctx->pc == 0x50E694u) {
        ctx->pc = 0x50E694u;
            // 0x50e694: 0x24a5b6d0  addiu       $a1, $a1, -0x4930 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948560));
        ctx->pc = 0x50E698u;
        goto label_50e698;
    }
    ctx->pc = 0x50E690u;
    SET_GPR_U32(ctx, 31, 0x50E698u);
    ctx->pc = 0x50E694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E690u;
            // 0x50e694: 0x24a5b6d0  addiu       $a1, $a1, -0x4930 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E698u; }
        if (ctx->pc != 0x50E698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E698u; }
        if (ctx->pc != 0x50E698u) { return; }
    }
    ctx->pc = 0x50E698u;
label_50e698:
    // 0x50e698: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x50e698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_50e69c:
    // 0x50e69c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x50e69cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_50e6a0:
    // 0x50e6a0: 0xa6820c68  sh          $v0, 0xC68($s4)
    ctx->pc = 0x50e6a0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 3176), (uint16_t)GPR_U32(ctx, 2));
label_50e6a4:
    // 0x50e6a4: 0x8e820e34  lw          $v0, 0xE34($s4)
    ctx->pc = 0x50e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_50e6a8:
    // 0x50e6a8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_50e6ac:
    if (ctx->pc == 0x50E6ACu) {
        ctx->pc = 0x50E6ACu;
            // 0x50e6ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E6B0u;
        goto label_50e6b0;
    }
    ctx->pc = 0x50E6A8u;
    {
        const bool branch_taken_0x50e6a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50E6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E6A8u;
            // 0x50e6ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e6a8) {
            ctx->pc = 0x50E6C0u;
            goto label_50e6c0;
        }
    }
    ctx->pc = 0x50E6B0u;
label_50e6b0:
    // 0x50e6b0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x50e6b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_50e6b4:
    // 0x50e6b4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_50e6b8:
    if (ctx->pc == 0x50E6B8u) {
        ctx->pc = 0x50E6BCu;
        goto label_50e6bc;
    }
    ctx->pc = 0x50E6B4u;
    {
        const bool branch_taken_0x50e6b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x50e6b4) {
            ctx->pc = 0x50E6C0u;
            goto label_50e6c0;
        }
    }
    ctx->pc = 0x50E6BCu;
label_50e6bc:
    // 0x50e6bc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x50e6bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_50e6c0:
    // 0x50e6c0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_50e6c4:
    if (ctx->pc == 0x50E6C4u) {
        ctx->pc = 0x50E6C8u;
        goto label_50e6c8;
    }
    ctx->pc = 0x50E6C0u;
    {
        const bool branch_taken_0x50e6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x50e6c0) {
            ctx->pc = 0x50E6DCu;
            goto label_50e6dc;
        }
    }
    ctx->pc = 0x50E6C8u;
label_50e6c8:
    // 0x50e6c8: 0xc075eb4  jal         func_1D7AD0
label_50e6cc:
    if (ctx->pc == 0x50E6CCu) {
        ctx->pc = 0x50E6CCu;
            // 0x50e6cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E6D0u;
        goto label_50e6d0;
    }
    ctx->pc = 0x50E6C8u;
    SET_GPR_U32(ctx, 31, 0x50E6D0u);
    ctx->pc = 0x50E6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E6C8u;
            // 0x50e6cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E6D0u; }
        if (ctx->pc != 0x50E6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E6D0u; }
        if (ctx->pc != 0x50E6D0u) { return; }
    }
    ctx->pc = 0x50E6D0u;
label_50e6d0:
    // 0x50e6d0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_50e6d4:
    if (ctx->pc == 0x50E6D4u) {
        ctx->pc = 0x50E6D8u;
        goto label_50e6d8;
    }
    ctx->pc = 0x50E6D0u;
    {
        const bool branch_taken_0x50e6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x50e6d0) {
            ctx->pc = 0x50E6DCu;
            goto label_50e6dc;
        }
    }
    ctx->pc = 0x50E6D8u;
label_50e6d8:
    // 0x50e6d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x50e6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50e6dc:
    // 0x50e6dc: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_50e6e0:
    if (ctx->pc == 0x50E6E0u) {
        ctx->pc = 0x50E6E0u;
            // 0x50e6e0: 0x26841150  addiu       $a0, $s4, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4432));
        ctx->pc = 0x50E6E4u;
        goto label_50e6e4;
    }
    ctx->pc = 0x50E6DCu;
    {
        const bool branch_taken_0x50e6dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x50e6dc) {
            ctx->pc = 0x50E6E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50E6DCu;
            // 0x50e6e0: 0x26841150  addiu       $a0, $s4, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4432));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50E6F8u;
            goto label_50e6f8;
        }
    }
    ctx->pc = 0x50E6E4u;
label_50e6e4:
    // 0x50e6e4: 0x8e830e34  lw          $v1, 0xE34($s4)
    ctx->pc = 0x50e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_50e6e8:
    // 0x50e6e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x50e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_50e6ec:
    // 0x50e6ec: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_50e6f0:
    if (ctx->pc == 0x50E6F0u) {
        ctx->pc = 0x50E6F0u;
            // 0x50e6f0: 0x8e850d60  lw          $a1, 0xD60($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3424)));
        ctx->pc = 0x50E6F4u;
        goto label_50e6f4;
    }
    ctx->pc = 0x50E6ECu;
    {
        const bool branch_taken_0x50e6ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x50e6ec) {
            ctx->pc = 0x50E6F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50E6ECu;
            // 0x50e6f0: 0x8e850d60  lw          $a1, 0xD60($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50E704u;
            goto label_50e704;
        }
    }
    ctx->pc = 0x50E6F4u;
label_50e6f4:
    // 0x50e6f4: 0x26841150  addiu       $a0, $s4, 0x1150
    ctx->pc = 0x50e6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4432));
label_50e6f8:
    // 0x50e6f8: 0xc12ca3c  jal         func_4B28F0
label_50e6fc:
    if (ctx->pc == 0x50E6FCu) {
        ctx->pc = 0x50E6FCu;
            // 0x50e6fc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x50E700u;
        goto label_50e700;
    }
    ctx->pc = 0x50E6F8u;
    SET_GPR_U32(ctx, 31, 0x50E700u);
    ctx->pc = 0x50E6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E6F8u;
            // 0x50e6fc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E700u; }
        if (ctx->pc != 0x50E700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E700u; }
        if (ctx->pc != 0x50E700u) { return; }
    }
    ctx->pc = 0x50E700u;
label_50e700:
    // 0x50e700: 0x8e850d60  lw          $a1, 0xD60($s4)
    ctx->pc = 0x50e700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3424)));
label_50e704:
    // 0x50e704: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x50e704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
label_50e708:
    // 0x50e708: 0x3c023e3d  lui         $v0, 0x3E3D
    ctx->pc = 0x50e708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15933 << 16));
label_50e70c:
    // 0x50e70c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x50e70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_50e710:
    // 0x50e710: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x50e710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_50e714:
    // 0x50e714: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x50e714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_50e718:
    // 0x50e718: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x50e718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_50e71c:
    // 0x50e71c: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x50e71cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_50e720:
    // 0x50e720: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x50e720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50e724:
    // 0x50e724: 0xc0767f0  jal         func_1D9FC0
label_50e728:
    if (ctx->pc == 0x50E728u) {
        ctx->pc = 0x50E728u;
            // 0x50e728: 0x26850bc0  addiu       $a1, $s4, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 3008));
        ctx->pc = 0x50E72Cu;
        goto label_50e72c;
    }
    ctx->pc = 0x50E724u;
    SET_GPR_U32(ctx, 31, 0x50E72Cu);
    ctx->pc = 0x50E728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E724u;
            // 0x50e728: 0x26850bc0  addiu       $a1, $s4, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 3008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E72Cu; }
        if (ctx->pc != 0x50E72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E72Cu; }
        if (ctx->pc != 0x50E72Cu) { return; }
    }
    ctx->pc = 0x50E72Cu;
label_50e72c:
    // 0x50e72c: 0xae800e30  sw          $zero, 0xE30($s4)
    ctx->pc = 0x50e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3632), GPR_U32(ctx, 0));
label_50e730:
    // 0x50e730: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x50e730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_50e734:
    // 0x50e734: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x50e734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_50e738:
    // 0x50e738: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x50e738u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_50e73c:
    // 0x50e73c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x50e73cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_50e740:
    // 0x50e740: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x50e740u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_50e744:
    // 0x50e744: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x50e744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_50e748:
    // 0x50e748: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x50e748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50e74c:
    // 0x50e74c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x50e74cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50e750:
    // 0x50e750: 0x3e00008  jr          $ra
label_50e754:
    if (ctx->pc == 0x50E754u) {
        ctx->pc = 0x50E754u;
            // 0x50e754: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x50E758u;
        goto label_50e758;
    }
    ctx->pc = 0x50E750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50E754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E750u;
            // 0x50e754: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50E758u;
label_50e758:
    // 0x50e758: 0x0  nop
    ctx->pc = 0x50e758u;
    // NOP
label_50e75c:
    // 0x50e75c: 0x0  nop
    ctx->pc = 0x50e75cu;
    // NOP
label_50e760:
    // 0x50e760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x50e760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_50e764:
    // 0x50e764: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x50e764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_50e768:
    // 0x50e768: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x50e768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_50e76c:
    // 0x50e76c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x50e76cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_50e770:
    // 0x50e770: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50e770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50e774:
    // 0x50e774: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50e774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50e778:
    // 0x50e778: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x50e778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_50e77c:
    // 0x50e77c: 0xc0bb2e8  jal         func_2ECBA0
label_50e780:
    if (ctx->pc == 0x50E780u) {
        ctx->pc = 0x50E780u;
            // 0x50e780: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x50E784u;
        goto label_50e784;
    }
    ctx->pc = 0x50E77Cu;
    SET_GPR_U32(ctx, 31, 0x50E784u);
    ctx->pc = 0x50E780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E77Cu;
            // 0x50e780: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E784u; }
        if (ctx->pc != 0x50E784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E784u; }
        if (ctx->pc != 0x50E784u) { return; }
    }
    ctx->pc = 0x50E784u;
label_50e784:
    // 0x50e784: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x50e784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_50e788:
    // 0x50e788: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x50e788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_50e78c:
    // 0x50e78c: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x50e78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_50e790:
    // 0x50e790: 0xc0bb2e8  jal         func_2ECBA0
label_50e794:
    if (ctx->pc == 0x50E794u) {
        ctx->pc = 0x50E794u;
            // 0x50e794: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x50E798u;
        goto label_50e798;
    }
    ctx->pc = 0x50E790u;
    SET_GPR_U32(ctx, 31, 0x50E798u);
    ctx->pc = 0x50E794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E790u;
            // 0x50e794: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E798u; }
        if (ctx->pc != 0x50E798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E798u; }
        if (ctx->pc != 0x50E798u) { return; }
    }
    ctx->pc = 0x50E798u;
label_50e798:
    // 0x50e798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50e798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_50e79c:
    // 0x50e79c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50e79cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50e7a0:
    // 0x50e7a0: 0x3e00008  jr          $ra
label_50e7a4:
    if (ctx->pc == 0x50E7A4u) {
        ctx->pc = 0x50E7A4u;
            // 0x50e7a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x50E7A8u;
        goto label_50e7a8;
    }
    ctx->pc = 0x50E7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50E7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E7A0u;
            // 0x50e7a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50E7A8u;
label_50e7a8:
    // 0x50e7a8: 0x0  nop
    ctx->pc = 0x50e7a8u;
    // NOP
label_50e7ac:
    // 0x50e7ac: 0x0  nop
    ctx->pc = 0x50e7acu;
    // NOP
}
