#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055D7A0
// Address: 0x55d7a0 - 0x55e2d0
void sub_0055D7A0_0x55d7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055D7A0_0x55d7a0");
#endif

    switch (ctx->pc) {
        case 0x55d7a0u: goto label_55d7a0;
        case 0x55d7a4u: goto label_55d7a4;
        case 0x55d7a8u: goto label_55d7a8;
        case 0x55d7acu: goto label_55d7ac;
        case 0x55d7b0u: goto label_55d7b0;
        case 0x55d7b4u: goto label_55d7b4;
        case 0x55d7b8u: goto label_55d7b8;
        case 0x55d7bcu: goto label_55d7bc;
        case 0x55d7c0u: goto label_55d7c0;
        case 0x55d7c4u: goto label_55d7c4;
        case 0x55d7c8u: goto label_55d7c8;
        case 0x55d7ccu: goto label_55d7cc;
        case 0x55d7d0u: goto label_55d7d0;
        case 0x55d7d4u: goto label_55d7d4;
        case 0x55d7d8u: goto label_55d7d8;
        case 0x55d7dcu: goto label_55d7dc;
        case 0x55d7e0u: goto label_55d7e0;
        case 0x55d7e4u: goto label_55d7e4;
        case 0x55d7e8u: goto label_55d7e8;
        case 0x55d7ecu: goto label_55d7ec;
        case 0x55d7f0u: goto label_55d7f0;
        case 0x55d7f4u: goto label_55d7f4;
        case 0x55d7f8u: goto label_55d7f8;
        case 0x55d7fcu: goto label_55d7fc;
        case 0x55d800u: goto label_55d800;
        case 0x55d804u: goto label_55d804;
        case 0x55d808u: goto label_55d808;
        case 0x55d80cu: goto label_55d80c;
        case 0x55d810u: goto label_55d810;
        case 0x55d814u: goto label_55d814;
        case 0x55d818u: goto label_55d818;
        case 0x55d81cu: goto label_55d81c;
        case 0x55d820u: goto label_55d820;
        case 0x55d824u: goto label_55d824;
        case 0x55d828u: goto label_55d828;
        case 0x55d82cu: goto label_55d82c;
        case 0x55d830u: goto label_55d830;
        case 0x55d834u: goto label_55d834;
        case 0x55d838u: goto label_55d838;
        case 0x55d83cu: goto label_55d83c;
        case 0x55d840u: goto label_55d840;
        case 0x55d844u: goto label_55d844;
        case 0x55d848u: goto label_55d848;
        case 0x55d84cu: goto label_55d84c;
        case 0x55d850u: goto label_55d850;
        case 0x55d854u: goto label_55d854;
        case 0x55d858u: goto label_55d858;
        case 0x55d85cu: goto label_55d85c;
        case 0x55d860u: goto label_55d860;
        case 0x55d864u: goto label_55d864;
        case 0x55d868u: goto label_55d868;
        case 0x55d86cu: goto label_55d86c;
        case 0x55d870u: goto label_55d870;
        case 0x55d874u: goto label_55d874;
        case 0x55d878u: goto label_55d878;
        case 0x55d87cu: goto label_55d87c;
        case 0x55d880u: goto label_55d880;
        case 0x55d884u: goto label_55d884;
        case 0x55d888u: goto label_55d888;
        case 0x55d88cu: goto label_55d88c;
        case 0x55d890u: goto label_55d890;
        case 0x55d894u: goto label_55d894;
        case 0x55d898u: goto label_55d898;
        case 0x55d89cu: goto label_55d89c;
        case 0x55d8a0u: goto label_55d8a0;
        case 0x55d8a4u: goto label_55d8a4;
        case 0x55d8a8u: goto label_55d8a8;
        case 0x55d8acu: goto label_55d8ac;
        case 0x55d8b0u: goto label_55d8b0;
        case 0x55d8b4u: goto label_55d8b4;
        case 0x55d8b8u: goto label_55d8b8;
        case 0x55d8bcu: goto label_55d8bc;
        case 0x55d8c0u: goto label_55d8c0;
        case 0x55d8c4u: goto label_55d8c4;
        case 0x55d8c8u: goto label_55d8c8;
        case 0x55d8ccu: goto label_55d8cc;
        case 0x55d8d0u: goto label_55d8d0;
        case 0x55d8d4u: goto label_55d8d4;
        case 0x55d8d8u: goto label_55d8d8;
        case 0x55d8dcu: goto label_55d8dc;
        case 0x55d8e0u: goto label_55d8e0;
        case 0x55d8e4u: goto label_55d8e4;
        case 0x55d8e8u: goto label_55d8e8;
        case 0x55d8ecu: goto label_55d8ec;
        case 0x55d8f0u: goto label_55d8f0;
        case 0x55d8f4u: goto label_55d8f4;
        case 0x55d8f8u: goto label_55d8f8;
        case 0x55d8fcu: goto label_55d8fc;
        case 0x55d900u: goto label_55d900;
        case 0x55d904u: goto label_55d904;
        case 0x55d908u: goto label_55d908;
        case 0x55d90cu: goto label_55d90c;
        case 0x55d910u: goto label_55d910;
        case 0x55d914u: goto label_55d914;
        case 0x55d918u: goto label_55d918;
        case 0x55d91cu: goto label_55d91c;
        case 0x55d920u: goto label_55d920;
        case 0x55d924u: goto label_55d924;
        case 0x55d928u: goto label_55d928;
        case 0x55d92cu: goto label_55d92c;
        case 0x55d930u: goto label_55d930;
        case 0x55d934u: goto label_55d934;
        case 0x55d938u: goto label_55d938;
        case 0x55d93cu: goto label_55d93c;
        case 0x55d940u: goto label_55d940;
        case 0x55d944u: goto label_55d944;
        case 0x55d948u: goto label_55d948;
        case 0x55d94cu: goto label_55d94c;
        case 0x55d950u: goto label_55d950;
        case 0x55d954u: goto label_55d954;
        case 0x55d958u: goto label_55d958;
        case 0x55d95cu: goto label_55d95c;
        case 0x55d960u: goto label_55d960;
        case 0x55d964u: goto label_55d964;
        case 0x55d968u: goto label_55d968;
        case 0x55d96cu: goto label_55d96c;
        case 0x55d970u: goto label_55d970;
        case 0x55d974u: goto label_55d974;
        case 0x55d978u: goto label_55d978;
        case 0x55d97cu: goto label_55d97c;
        case 0x55d980u: goto label_55d980;
        case 0x55d984u: goto label_55d984;
        case 0x55d988u: goto label_55d988;
        case 0x55d98cu: goto label_55d98c;
        case 0x55d990u: goto label_55d990;
        case 0x55d994u: goto label_55d994;
        case 0x55d998u: goto label_55d998;
        case 0x55d99cu: goto label_55d99c;
        case 0x55d9a0u: goto label_55d9a0;
        case 0x55d9a4u: goto label_55d9a4;
        case 0x55d9a8u: goto label_55d9a8;
        case 0x55d9acu: goto label_55d9ac;
        case 0x55d9b0u: goto label_55d9b0;
        case 0x55d9b4u: goto label_55d9b4;
        case 0x55d9b8u: goto label_55d9b8;
        case 0x55d9bcu: goto label_55d9bc;
        case 0x55d9c0u: goto label_55d9c0;
        case 0x55d9c4u: goto label_55d9c4;
        case 0x55d9c8u: goto label_55d9c8;
        case 0x55d9ccu: goto label_55d9cc;
        case 0x55d9d0u: goto label_55d9d0;
        case 0x55d9d4u: goto label_55d9d4;
        case 0x55d9d8u: goto label_55d9d8;
        case 0x55d9dcu: goto label_55d9dc;
        case 0x55d9e0u: goto label_55d9e0;
        case 0x55d9e4u: goto label_55d9e4;
        case 0x55d9e8u: goto label_55d9e8;
        case 0x55d9ecu: goto label_55d9ec;
        case 0x55d9f0u: goto label_55d9f0;
        case 0x55d9f4u: goto label_55d9f4;
        case 0x55d9f8u: goto label_55d9f8;
        case 0x55d9fcu: goto label_55d9fc;
        case 0x55da00u: goto label_55da00;
        case 0x55da04u: goto label_55da04;
        case 0x55da08u: goto label_55da08;
        case 0x55da0cu: goto label_55da0c;
        case 0x55da10u: goto label_55da10;
        case 0x55da14u: goto label_55da14;
        case 0x55da18u: goto label_55da18;
        case 0x55da1cu: goto label_55da1c;
        case 0x55da20u: goto label_55da20;
        case 0x55da24u: goto label_55da24;
        case 0x55da28u: goto label_55da28;
        case 0x55da2cu: goto label_55da2c;
        case 0x55da30u: goto label_55da30;
        case 0x55da34u: goto label_55da34;
        case 0x55da38u: goto label_55da38;
        case 0x55da3cu: goto label_55da3c;
        case 0x55da40u: goto label_55da40;
        case 0x55da44u: goto label_55da44;
        case 0x55da48u: goto label_55da48;
        case 0x55da4cu: goto label_55da4c;
        case 0x55da50u: goto label_55da50;
        case 0x55da54u: goto label_55da54;
        case 0x55da58u: goto label_55da58;
        case 0x55da5cu: goto label_55da5c;
        case 0x55da60u: goto label_55da60;
        case 0x55da64u: goto label_55da64;
        case 0x55da68u: goto label_55da68;
        case 0x55da6cu: goto label_55da6c;
        case 0x55da70u: goto label_55da70;
        case 0x55da74u: goto label_55da74;
        case 0x55da78u: goto label_55da78;
        case 0x55da7cu: goto label_55da7c;
        case 0x55da80u: goto label_55da80;
        case 0x55da84u: goto label_55da84;
        case 0x55da88u: goto label_55da88;
        case 0x55da8cu: goto label_55da8c;
        case 0x55da90u: goto label_55da90;
        case 0x55da94u: goto label_55da94;
        case 0x55da98u: goto label_55da98;
        case 0x55da9cu: goto label_55da9c;
        case 0x55daa0u: goto label_55daa0;
        case 0x55daa4u: goto label_55daa4;
        case 0x55daa8u: goto label_55daa8;
        case 0x55daacu: goto label_55daac;
        case 0x55dab0u: goto label_55dab0;
        case 0x55dab4u: goto label_55dab4;
        case 0x55dab8u: goto label_55dab8;
        case 0x55dabcu: goto label_55dabc;
        case 0x55dac0u: goto label_55dac0;
        case 0x55dac4u: goto label_55dac4;
        case 0x55dac8u: goto label_55dac8;
        case 0x55daccu: goto label_55dacc;
        case 0x55dad0u: goto label_55dad0;
        case 0x55dad4u: goto label_55dad4;
        case 0x55dad8u: goto label_55dad8;
        case 0x55dadcu: goto label_55dadc;
        case 0x55dae0u: goto label_55dae0;
        case 0x55dae4u: goto label_55dae4;
        case 0x55dae8u: goto label_55dae8;
        case 0x55daecu: goto label_55daec;
        case 0x55daf0u: goto label_55daf0;
        case 0x55daf4u: goto label_55daf4;
        case 0x55daf8u: goto label_55daf8;
        case 0x55dafcu: goto label_55dafc;
        case 0x55db00u: goto label_55db00;
        case 0x55db04u: goto label_55db04;
        case 0x55db08u: goto label_55db08;
        case 0x55db0cu: goto label_55db0c;
        case 0x55db10u: goto label_55db10;
        case 0x55db14u: goto label_55db14;
        case 0x55db18u: goto label_55db18;
        case 0x55db1cu: goto label_55db1c;
        case 0x55db20u: goto label_55db20;
        case 0x55db24u: goto label_55db24;
        case 0x55db28u: goto label_55db28;
        case 0x55db2cu: goto label_55db2c;
        case 0x55db30u: goto label_55db30;
        case 0x55db34u: goto label_55db34;
        case 0x55db38u: goto label_55db38;
        case 0x55db3cu: goto label_55db3c;
        case 0x55db40u: goto label_55db40;
        case 0x55db44u: goto label_55db44;
        case 0x55db48u: goto label_55db48;
        case 0x55db4cu: goto label_55db4c;
        case 0x55db50u: goto label_55db50;
        case 0x55db54u: goto label_55db54;
        case 0x55db58u: goto label_55db58;
        case 0x55db5cu: goto label_55db5c;
        case 0x55db60u: goto label_55db60;
        case 0x55db64u: goto label_55db64;
        case 0x55db68u: goto label_55db68;
        case 0x55db6cu: goto label_55db6c;
        case 0x55db70u: goto label_55db70;
        case 0x55db74u: goto label_55db74;
        case 0x55db78u: goto label_55db78;
        case 0x55db7cu: goto label_55db7c;
        case 0x55db80u: goto label_55db80;
        case 0x55db84u: goto label_55db84;
        case 0x55db88u: goto label_55db88;
        case 0x55db8cu: goto label_55db8c;
        case 0x55db90u: goto label_55db90;
        case 0x55db94u: goto label_55db94;
        case 0x55db98u: goto label_55db98;
        case 0x55db9cu: goto label_55db9c;
        case 0x55dba0u: goto label_55dba0;
        case 0x55dba4u: goto label_55dba4;
        case 0x55dba8u: goto label_55dba8;
        case 0x55dbacu: goto label_55dbac;
        case 0x55dbb0u: goto label_55dbb0;
        case 0x55dbb4u: goto label_55dbb4;
        case 0x55dbb8u: goto label_55dbb8;
        case 0x55dbbcu: goto label_55dbbc;
        case 0x55dbc0u: goto label_55dbc0;
        case 0x55dbc4u: goto label_55dbc4;
        case 0x55dbc8u: goto label_55dbc8;
        case 0x55dbccu: goto label_55dbcc;
        case 0x55dbd0u: goto label_55dbd0;
        case 0x55dbd4u: goto label_55dbd4;
        case 0x55dbd8u: goto label_55dbd8;
        case 0x55dbdcu: goto label_55dbdc;
        case 0x55dbe0u: goto label_55dbe0;
        case 0x55dbe4u: goto label_55dbe4;
        case 0x55dbe8u: goto label_55dbe8;
        case 0x55dbecu: goto label_55dbec;
        case 0x55dbf0u: goto label_55dbf0;
        case 0x55dbf4u: goto label_55dbf4;
        case 0x55dbf8u: goto label_55dbf8;
        case 0x55dbfcu: goto label_55dbfc;
        case 0x55dc00u: goto label_55dc00;
        case 0x55dc04u: goto label_55dc04;
        case 0x55dc08u: goto label_55dc08;
        case 0x55dc0cu: goto label_55dc0c;
        case 0x55dc10u: goto label_55dc10;
        case 0x55dc14u: goto label_55dc14;
        case 0x55dc18u: goto label_55dc18;
        case 0x55dc1cu: goto label_55dc1c;
        case 0x55dc20u: goto label_55dc20;
        case 0x55dc24u: goto label_55dc24;
        case 0x55dc28u: goto label_55dc28;
        case 0x55dc2cu: goto label_55dc2c;
        case 0x55dc30u: goto label_55dc30;
        case 0x55dc34u: goto label_55dc34;
        case 0x55dc38u: goto label_55dc38;
        case 0x55dc3cu: goto label_55dc3c;
        case 0x55dc40u: goto label_55dc40;
        case 0x55dc44u: goto label_55dc44;
        case 0x55dc48u: goto label_55dc48;
        case 0x55dc4cu: goto label_55dc4c;
        case 0x55dc50u: goto label_55dc50;
        case 0x55dc54u: goto label_55dc54;
        case 0x55dc58u: goto label_55dc58;
        case 0x55dc5cu: goto label_55dc5c;
        case 0x55dc60u: goto label_55dc60;
        case 0x55dc64u: goto label_55dc64;
        case 0x55dc68u: goto label_55dc68;
        case 0x55dc6cu: goto label_55dc6c;
        case 0x55dc70u: goto label_55dc70;
        case 0x55dc74u: goto label_55dc74;
        case 0x55dc78u: goto label_55dc78;
        case 0x55dc7cu: goto label_55dc7c;
        case 0x55dc80u: goto label_55dc80;
        case 0x55dc84u: goto label_55dc84;
        case 0x55dc88u: goto label_55dc88;
        case 0x55dc8cu: goto label_55dc8c;
        case 0x55dc90u: goto label_55dc90;
        case 0x55dc94u: goto label_55dc94;
        case 0x55dc98u: goto label_55dc98;
        case 0x55dc9cu: goto label_55dc9c;
        case 0x55dca0u: goto label_55dca0;
        case 0x55dca4u: goto label_55dca4;
        case 0x55dca8u: goto label_55dca8;
        case 0x55dcacu: goto label_55dcac;
        case 0x55dcb0u: goto label_55dcb0;
        case 0x55dcb4u: goto label_55dcb4;
        case 0x55dcb8u: goto label_55dcb8;
        case 0x55dcbcu: goto label_55dcbc;
        case 0x55dcc0u: goto label_55dcc0;
        case 0x55dcc4u: goto label_55dcc4;
        case 0x55dcc8u: goto label_55dcc8;
        case 0x55dcccu: goto label_55dccc;
        case 0x55dcd0u: goto label_55dcd0;
        case 0x55dcd4u: goto label_55dcd4;
        case 0x55dcd8u: goto label_55dcd8;
        case 0x55dcdcu: goto label_55dcdc;
        case 0x55dce0u: goto label_55dce0;
        case 0x55dce4u: goto label_55dce4;
        case 0x55dce8u: goto label_55dce8;
        case 0x55dcecu: goto label_55dcec;
        case 0x55dcf0u: goto label_55dcf0;
        case 0x55dcf4u: goto label_55dcf4;
        case 0x55dcf8u: goto label_55dcf8;
        case 0x55dcfcu: goto label_55dcfc;
        case 0x55dd00u: goto label_55dd00;
        case 0x55dd04u: goto label_55dd04;
        case 0x55dd08u: goto label_55dd08;
        case 0x55dd0cu: goto label_55dd0c;
        case 0x55dd10u: goto label_55dd10;
        case 0x55dd14u: goto label_55dd14;
        case 0x55dd18u: goto label_55dd18;
        case 0x55dd1cu: goto label_55dd1c;
        case 0x55dd20u: goto label_55dd20;
        case 0x55dd24u: goto label_55dd24;
        case 0x55dd28u: goto label_55dd28;
        case 0x55dd2cu: goto label_55dd2c;
        case 0x55dd30u: goto label_55dd30;
        case 0x55dd34u: goto label_55dd34;
        case 0x55dd38u: goto label_55dd38;
        case 0x55dd3cu: goto label_55dd3c;
        case 0x55dd40u: goto label_55dd40;
        case 0x55dd44u: goto label_55dd44;
        case 0x55dd48u: goto label_55dd48;
        case 0x55dd4cu: goto label_55dd4c;
        case 0x55dd50u: goto label_55dd50;
        case 0x55dd54u: goto label_55dd54;
        case 0x55dd58u: goto label_55dd58;
        case 0x55dd5cu: goto label_55dd5c;
        case 0x55dd60u: goto label_55dd60;
        case 0x55dd64u: goto label_55dd64;
        case 0x55dd68u: goto label_55dd68;
        case 0x55dd6cu: goto label_55dd6c;
        case 0x55dd70u: goto label_55dd70;
        case 0x55dd74u: goto label_55dd74;
        case 0x55dd78u: goto label_55dd78;
        case 0x55dd7cu: goto label_55dd7c;
        case 0x55dd80u: goto label_55dd80;
        case 0x55dd84u: goto label_55dd84;
        case 0x55dd88u: goto label_55dd88;
        case 0x55dd8cu: goto label_55dd8c;
        case 0x55dd90u: goto label_55dd90;
        case 0x55dd94u: goto label_55dd94;
        case 0x55dd98u: goto label_55dd98;
        case 0x55dd9cu: goto label_55dd9c;
        case 0x55dda0u: goto label_55dda0;
        case 0x55dda4u: goto label_55dda4;
        case 0x55dda8u: goto label_55dda8;
        case 0x55ddacu: goto label_55ddac;
        case 0x55ddb0u: goto label_55ddb0;
        case 0x55ddb4u: goto label_55ddb4;
        case 0x55ddb8u: goto label_55ddb8;
        case 0x55ddbcu: goto label_55ddbc;
        case 0x55ddc0u: goto label_55ddc0;
        case 0x55ddc4u: goto label_55ddc4;
        case 0x55ddc8u: goto label_55ddc8;
        case 0x55ddccu: goto label_55ddcc;
        case 0x55ddd0u: goto label_55ddd0;
        case 0x55ddd4u: goto label_55ddd4;
        case 0x55ddd8u: goto label_55ddd8;
        case 0x55dddcu: goto label_55dddc;
        case 0x55dde0u: goto label_55dde0;
        case 0x55dde4u: goto label_55dde4;
        case 0x55dde8u: goto label_55dde8;
        case 0x55ddecu: goto label_55ddec;
        case 0x55ddf0u: goto label_55ddf0;
        case 0x55ddf4u: goto label_55ddf4;
        case 0x55ddf8u: goto label_55ddf8;
        case 0x55ddfcu: goto label_55ddfc;
        case 0x55de00u: goto label_55de00;
        case 0x55de04u: goto label_55de04;
        case 0x55de08u: goto label_55de08;
        case 0x55de0cu: goto label_55de0c;
        case 0x55de10u: goto label_55de10;
        case 0x55de14u: goto label_55de14;
        case 0x55de18u: goto label_55de18;
        case 0x55de1cu: goto label_55de1c;
        case 0x55de20u: goto label_55de20;
        case 0x55de24u: goto label_55de24;
        case 0x55de28u: goto label_55de28;
        case 0x55de2cu: goto label_55de2c;
        case 0x55de30u: goto label_55de30;
        case 0x55de34u: goto label_55de34;
        case 0x55de38u: goto label_55de38;
        case 0x55de3cu: goto label_55de3c;
        case 0x55de40u: goto label_55de40;
        case 0x55de44u: goto label_55de44;
        case 0x55de48u: goto label_55de48;
        case 0x55de4cu: goto label_55de4c;
        case 0x55de50u: goto label_55de50;
        case 0x55de54u: goto label_55de54;
        case 0x55de58u: goto label_55de58;
        case 0x55de5cu: goto label_55de5c;
        case 0x55de60u: goto label_55de60;
        case 0x55de64u: goto label_55de64;
        case 0x55de68u: goto label_55de68;
        case 0x55de6cu: goto label_55de6c;
        case 0x55de70u: goto label_55de70;
        case 0x55de74u: goto label_55de74;
        case 0x55de78u: goto label_55de78;
        case 0x55de7cu: goto label_55de7c;
        case 0x55de80u: goto label_55de80;
        case 0x55de84u: goto label_55de84;
        case 0x55de88u: goto label_55de88;
        case 0x55de8cu: goto label_55de8c;
        case 0x55de90u: goto label_55de90;
        case 0x55de94u: goto label_55de94;
        case 0x55de98u: goto label_55de98;
        case 0x55de9cu: goto label_55de9c;
        case 0x55dea0u: goto label_55dea0;
        case 0x55dea4u: goto label_55dea4;
        case 0x55dea8u: goto label_55dea8;
        case 0x55deacu: goto label_55deac;
        case 0x55deb0u: goto label_55deb0;
        case 0x55deb4u: goto label_55deb4;
        case 0x55deb8u: goto label_55deb8;
        case 0x55debcu: goto label_55debc;
        case 0x55dec0u: goto label_55dec0;
        case 0x55dec4u: goto label_55dec4;
        case 0x55dec8u: goto label_55dec8;
        case 0x55deccu: goto label_55decc;
        case 0x55ded0u: goto label_55ded0;
        case 0x55ded4u: goto label_55ded4;
        case 0x55ded8u: goto label_55ded8;
        case 0x55dedcu: goto label_55dedc;
        case 0x55dee0u: goto label_55dee0;
        case 0x55dee4u: goto label_55dee4;
        case 0x55dee8u: goto label_55dee8;
        case 0x55deecu: goto label_55deec;
        case 0x55def0u: goto label_55def0;
        case 0x55def4u: goto label_55def4;
        case 0x55def8u: goto label_55def8;
        case 0x55defcu: goto label_55defc;
        case 0x55df00u: goto label_55df00;
        case 0x55df04u: goto label_55df04;
        case 0x55df08u: goto label_55df08;
        case 0x55df0cu: goto label_55df0c;
        case 0x55df10u: goto label_55df10;
        case 0x55df14u: goto label_55df14;
        case 0x55df18u: goto label_55df18;
        case 0x55df1cu: goto label_55df1c;
        case 0x55df20u: goto label_55df20;
        case 0x55df24u: goto label_55df24;
        case 0x55df28u: goto label_55df28;
        case 0x55df2cu: goto label_55df2c;
        case 0x55df30u: goto label_55df30;
        case 0x55df34u: goto label_55df34;
        case 0x55df38u: goto label_55df38;
        case 0x55df3cu: goto label_55df3c;
        case 0x55df40u: goto label_55df40;
        case 0x55df44u: goto label_55df44;
        case 0x55df48u: goto label_55df48;
        case 0x55df4cu: goto label_55df4c;
        case 0x55df50u: goto label_55df50;
        case 0x55df54u: goto label_55df54;
        case 0x55df58u: goto label_55df58;
        case 0x55df5cu: goto label_55df5c;
        case 0x55df60u: goto label_55df60;
        case 0x55df64u: goto label_55df64;
        case 0x55df68u: goto label_55df68;
        case 0x55df6cu: goto label_55df6c;
        case 0x55df70u: goto label_55df70;
        case 0x55df74u: goto label_55df74;
        case 0x55df78u: goto label_55df78;
        case 0x55df7cu: goto label_55df7c;
        case 0x55df80u: goto label_55df80;
        case 0x55df84u: goto label_55df84;
        case 0x55df88u: goto label_55df88;
        case 0x55df8cu: goto label_55df8c;
        case 0x55df90u: goto label_55df90;
        case 0x55df94u: goto label_55df94;
        case 0x55df98u: goto label_55df98;
        case 0x55df9cu: goto label_55df9c;
        case 0x55dfa0u: goto label_55dfa0;
        case 0x55dfa4u: goto label_55dfa4;
        case 0x55dfa8u: goto label_55dfa8;
        case 0x55dfacu: goto label_55dfac;
        case 0x55dfb0u: goto label_55dfb0;
        case 0x55dfb4u: goto label_55dfb4;
        case 0x55dfb8u: goto label_55dfb8;
        case 0x55dfbcu: goto label_55dfbc;
        case 0x55dfc0u: goto label_55dfc0;
        case 0x55dfc4u: goto label_55dfc4;
        case 0x55dfc8u: goto label_55dfc8;
        case 0x55dfccu: goto label_55dfcc;
        case 0x55dfd0u: goto label_55dfd0;
        case 0x55dfd4u: goto label_55dfd4;
        case 0x55dfd8u: goto label_55dfd8;
        case 0x55dfdcu: goto label_55dfdc;
        case 0x55dfe0u: goto label_55dfe0;
        case 0x55dfe4u: goto label_55dfe4;
        case 0x55dfe8u: goto label_55dfe8;
        case 0x55dfecu: goto label_55dfec;
        case 0x55dff0u: goto label_55dff0;
        case 0x55dff4u: goto label_55dff4;
        case 0x55dff8u: goto label_55dff8;
        case 0x55dffcu: goto label_55dffc;
        case 0x55e000u: goto label_55e000;
        case 0x55e004u: goto label_55e004;
        case 0x55e008u: goto label_55e008;
        case 0x55e00cu: goto label_55e00c;
        case 0x55e010u: goto label_55e010;
        case 0x55e014u: goto label_55e014;
        case 0x55e018u: goto label_55e018;
        case 0x55e01cu: goto label_55e01c;
        case 0x55e020u: goto label_55e020;
        case 0x55e024u: goto label_55e024;
        case 0x55e028u: goto label_55e028;
        case 0x55e02cu: goto label_55e02c;
        case 0x55e030u: goto label_55e030;
        case 0x55e034u: goto label_55e034;
        case 0x55e038u: goto label_55e038;
        case 0x55e03cu: goto label_55e03c;
        case 0x55e040u: goto label_55e040;
        case 0x55e044u: goto label_55e044;
        case 0x55e048u: goto label_55e048;
        case 0x55e04cu: goto label_55e04c;
        case 0x55e050u: goto label_55e050;
        case 0x55e054u: goto label_55e054;
        case 0x55e058u: goto label_55e058;
        case 0x55e05cu: goto label_55e05c;
        case 0x55e060u: goto label_55e060;
        case 0x55e064u: goto label_55e064;
        case 0x55e068u: goto label_55e068;
        case 0x55e06cu: goto label_55e06c;
        case 0x55e070u: goto label_55e070;
        case 0x55e074u: goto label_55e074;
        case 0x55e078u: goto label_55e078;
        case 0x55e07cu: goto label_55e07c;
        case 0x55e080u: goto label_55e080;
        case 0x55e084u: goto label_55e084;
        case 0x55e088u: goto label_55e088;
        case 0x55e08cu: goto label_55e08c;
        case 0x55e090u: goto label_55e090;
        case 0x55e094u: goto label_55e094;
        case 0x55e098u: goto label_55e098;
        case 0x55e09cu: goto label_55e09c;
        case 0x55e0a0u: goto label_55e0a0;
        case 0x55e0a4u: goto label_55e0a4;
        case 0x55e0a8u: goto label_55e0a8;
        case 0x55e0acu: goto label_55e0ac;
        case 0x55e0b0u: goto label_55e0b0;
        case 0x55e0b4u: goto label_55e0b4;
        case 0x55e0b8u: goto label_55e0b8;
        case 0x55e0bcu: goto label_55e0bc;
        case 0x55e0c0u: goto label_55e0c0;
        case 0x55e0c4u: goto label_55e0c4;
        case 0x55e0c8u: goto label_55e0c8;
        case 0x55e0ccu: goto label_55e0cc;
        case 0x55e0d0u: goto label_55e0d0;
        case 0x55e0d4u: goto label_55e0d4;
        case 0x55e0d8u: goto label_55e0d8;
        case 0x55e0dcu: goto label_55e0dc;
        case 0x55e0e0u: goto label_55e0e0;
        case 0x55e0e4u: goto label_55e0e4;
        case 0x55e0e8u: goto label_55e0e8;
        case 0x55e0ecu: goto label_55e0ec;
        case 0x55e0f0u: goto label_55e0f0;
        case 0x55e0f4u: goto label_55e0f4;
        case 0x55e0f8u: goto label_55e0f8;
        case 0x55e0fcu: goto label_55e0fc;
        case 0x55e100u: goto label_55e100;
        case 0x55e104u: goto label_55e104;
        case 0x55e108u: goto label_55e108;
        case 0x55e10cu: goto label_55e10c;
        case 0x55e110u: goto label_55e110;
        case 0x55e114u: goto label_55e114;
        case 0x55e118u: goto label_55e118;
        case 0x55e11cu: goto label_55e11c;
        case 0x55e120u: goto label_55e120;
        case 0x55e124u: goto label_55e124;
        case 0x55e128u: goto label_55e128;
        case 0x55e12cu: goto label_55e12c;
        case 0x55e130u: goto label_55e130;
        case 0x55e134u: goto label_55e134;
        case 0x55e138u: goto label_55e138;
        case 0x55e13cu: goto label_55e13c;
        case 0x55e140u: goto label_55e140;
        case 0x55e144u: goto label_55e144;
        case 0x55e148u: goto label_55e148;
        case 0x55e14cu: goto label_55e14c;
        case 0x55e150u: goto label_55e150;
        case 0x55e154u: goto label_55e154;
        case 0x55e158u: goto label_55e158;
        case 0x55e15cu: goto label_55e15c;
        case 0x55e160u: goto label_55e160;
        case 0x55e164u: goto label_55e164;
        case 0x55e168u: goto label_55e168;
        case 0x55e16cu: goto label_55e16c;
        case 0x55e170u: goto label_55e170;
        case 0x55e174u: goto label_55e174;
        case 0x55e178u: goto label_55e178;
        case 0x55e17cu: goto label_55e17c;
        case 0x55e180u: goto label_55e180;
        case 0x55e184u: goto label_55e184;
        case 0x55e188u: goto label_55e188;
        case 0x55e18cu: goto label_55e18c;
        case 0x55e190u: goto label_55e190;
        case 0x55e194u: goto label_55e194;
        case 0x55e198u: goto label_55e198;
        case 0x55e19cu: goto label_55e19c;
        case 0x55e1a0u: goto label_55e1a0;
        case 0x55e1a4u: goto label_55e1a4;
        case 0x55e1a8u: goto label_55e1a8;
        case 0x55e1acu: goto label_55e1ac;
        case 0x55e1b0u: goto label_55e1b0;
        case 0x55e1b4u: goto label_55e1b4;
        case 0x55e1b8u: goto label_55e1b8;
        case 0x55e1bcu: goto label_55e1bc;
        case 0x55e1c0u: goto label_55e1c0;
        case 0x55e1c4u: goto label_55e1c4;
        case 0x55e1c8u: goto label_55e1c8;
        case 0x55e1ccu: goto label_55e1cc;
        case 0x55e1d0u: goto label_55e1d0;
        case 0x55e1d4u: goto label_55e1d4;
        case 0x55e1d8u: goto label_55e1d8;
        case 0x55e1dcu: goto label_55e1dc;
        case 0x55e1e0u: goto label_55e1e0;
        case 0x55e1e4u: goto label_55e1e4;
        case 0x55e1e8u: goto label_55e1e8;
        case 0x55e1ecu: goto label_55e1ec;
        case 0x55e1f0u: goto label_55e1f0;
        case 0x55e1f4u: goto label_55e1f4;
        case 0x55e1f8u: goto label_55e1f8;
        case 0x55e1fcu: goto label_55e1fc;
        case 0x55e200u: goto label_55e200;
        case 0x55e204u: goto label_55e204;
        case 0x55e208u: goto label_55e208;
        case 0x55e20cu: goto label_55e20c;
        case 0x55e210u: goto label_55e210;
        case 0x55e214u: goto label_55e214;
        case 0x55e218u: goto label_55e218;
        case 0x55e21cu: goto label_55e21c;
        case 0x55e220u: goto label_55e220;
        case 0x55e224u: goto label_55e224;
        case 0x55e228u: goto label_55e228;
        case 0x55e22cu: goto label_55e22c;
        case 0x55e230u: goto label_55e230;
        case 0x55e234u: goto label_55e234;
        case 0x55e238u: goto label_55e238;
        case 0x55e23cu: goto label_55e23c;
        case 0x55e240u: goto label_55e240;
        case 0x55e244u: goto label_55e244;
        case 0x55e248u: goto label_55e248;
        case 0x55e24cu: goto label_55e24c;
        case 0x55e250u: goto label_55e250;
        case 0x55e254u: goto label_55e254;
        case 0x55e258u: goto label_55e258;
        case 0x55e25cu: goto label_55e25c;
        case 0x55e260u: goto label_55e260;
        case 0x55e264u: goto label_55e264;
        case 0x55e268u: goto label_55e268;
        case 0x55e26cu: goto label_55e26c;
        case 0x55e270u: goto label_55e270;
        case 0x55e274u: goto label_55e274;
        case 0x55e278u: goto label_55e278;
        case 0x55e27cu: goto label_55e27c;
        case 0x55e280u: goto label_55e280;
        case 0x55e284u: goto label_55e284;
        case 0x55e288u: goto label_55e288;
        case 0x55e28cu: goto label_55e28c;
        case 0x55e290u: goto label_55e290;
        case 0x55e294u: goto label_55e294;
        case 0x55e298u: goto label_55e298;
        case 0x55e29cu: goto label_55e29c;
        case 0x55e2a0u: goto label_55e2a0;
        case 0x55e2a4u: goto label_55e2a4;
        case 0x55e2a8u: goto label_55e2a8;
        case 0x55e2acu: goto label_55e2ac;
        case 0x55e2b0u: goto label_55e2b0;
        case 0x55e2b4u: goto label_55e2b4;
        case 0x55e2b8u: goto label_55e2b8;
        case 0x55e2bcu: goto label_55e2bc;
        case 0x55e2c0u: goto label_55e2c0;
        case 0x55e2c4u: goto label_55e2c4;
        case 0x55e2c8u: goto label_55e2c8;
        case 0x55e2ccu: goto label_55e2cc;
        default: break;
    }

    ctx->pc = 0x55d7a0u;

label_55d7a0:
    // 0x55d7a0: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x55d7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
label_55d7a4:
    // 0x55d7a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x55d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55d7a8:
    // 0x55d7a8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x55d7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_55d7ac:
    // 0x55d7ac: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x55d7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_55d7b0:
    // 0x55d7b0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x55d7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_55d7b4:
    // 0x55d7b4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x55d7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_55d7b8:
    // 0x55d7b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x55d7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_55d7bc:
    // 0x55d7bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x55d7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_55d7c0:
    // 0x55d7c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x55d7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_55d7c4:
    // 0x55d7c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x55d7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_55d7c8:
    // 0x55d7c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x55d7c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55d7cc:
    // 0x55d7cc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x55d7ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_55d7d0:
    // 0x55d7d0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x55d7d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_55d7d4:
    // 0x55d7d4: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x55d7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_55d7d8:
    // 0x55d7d8: 0x10830241  beq         $a0, $v1, . + 4 + (0x241 << 2)
label_55d7dc:
    if (ctx->pc == 0x55D7DCu) {
        ctx->pc = 0x55D7E0u;
        goto label_55d7e0;
    }
    ctx->pc = 0x55D7D8u;
    {
        const bool branch_taken_0x55d7d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x55d7d8) {
            ctx->pc = 0x55E0E0u;
            goto label_55e0e0;
        }
    }
    ctx->pc = 0x55D7E0u;
label_55d7e0:
    // 0x55d7e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x55d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_55d7e4:
    // 0x55d7e4: 0x508300f2  beql        $a0, $v1, . + 4 + (0xF2 << 2)
label_55d7e8:
    if (ctx->pc == 0x55D7E8u) {
        ctx->pc = 0x55D7E8u;
            // 0x55d7e8: 0x8e320054  lw          $s2, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->pc = 0x55D7ECu;
        goto label_55d7ec;
    }
    ctx->pc = 0x55D7E4u;
    {
        const bool branch_taken_0x55d7e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x55d7e4) {
            ctx->pc = 0x55D7E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55D7E4u;
            // 0x55d7e8: 0x8e320054  lw          $s2, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55DBB0u;
            goto label_55dbb0;
        }
    }
    ctx->pc = 0x55D7ECu;
label_55d7ec:
    // 0x55d7ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x55d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55d7f0:
    // 0x55d7f0: 0x5083003c  beql        $a0, $v1, . + 4 + (0x3C << 2)
label_55d7f4:
    if (ctx->pc == 0x55D7F4u) {
        ctx->pc = 0x55D7F4u;
            // 0x55d7f4: 0x8e220284  lw          $v0, 0x284($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
        ctx->pc = 0x55D7F8u;
        goto label_55d7f8;
    }
    ctx->pc = 0x55D7F0u;
    {
        const bool branch_taken_0x55d7f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x55d7f0) {
            ctx->pc = 0x55D7F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55D7F0u;
            // 0x55d7f4: 0x8e220284  lw          $v0, 0x284($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55D8E4u;
            goto label_55d8e4;
        }
    }
    ctx->pc = 0x55D7F8u;
label_55d7f8:
    // 0x55d7f8: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_55d7fc:
    if (ctx->pc == 0x55D7FCu) {
        ctx->pc = 0x55D7FCu;
            // 0x55d7fc: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->pc = 0x55D800u;
        goto label_55d800;
    }
    ctx->pc = 0x55D7F8u;
    {
        const bool branch_taken_0x55d7f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x55d7f8) {
            ctx->pc = 0x55D7FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55D7F8u;
            // 0x55d7fc: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55D808u;
            goto label_55d808;
        }
    }
    ctx->pc = 0x55D800u;
label_55d800:
    // 0x55d800: 0x10000237  b           . + 4 + (0x237 << 2)
label_55d804:
    if (ctx->pc == 0x55D804u) {
        ctx->pc = 0x55D808u;
        goto label_55d808;
    }
    ctx->pc = 0x55D800u;
    {
        const bool branch_taken_0x55d800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55d800) {
            ctx->pc = 0x55E0E0u;
            goto label_55e0e0;
        }
    }
    ctx->pc = 0x55D808u;
label_55d808:
    // 0x55d808: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x55d808u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_55d80c:
    // 0x55d80c: 0x8c820e38  lw          $v0, 0xE38($a0)
    ctx->pc = 0x55d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
label_55d810:
    // 0x55d810: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_55d814:
    if (ctx->pc == 0x55D814u) {
        ctx->pc = 0x55D814u;
            // 0x55d814: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D818u;
        goto label_55d818;
    }
    ctx->pc = 0x55D810u;
    {
        const bool branch_taken_0x55d810 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x55D814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55D810u;
            // 0x55d814: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55d810) {
            ctx->pc = 0x55D828u;
            goto label_55d828;
        }
    }
    ctx->pc = 0x55D818u;
label_55d818:
    // 0x55d818: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x55d818u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_55d81c:
    // 0x55d81c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_55d820:
    if (ctx->pc == 0x55D820u) {
        ctx->pc = 0x55D824u;
        goto label_55d824;
    }
    ctx->pc = 0x55D81Cu;
    {
        const bool branch_taken_0x55d81c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x55d81c) {
            ctx->pc = 0x55D828u;
            goto label_55d828;
        }
    }
    ctx->pc = 0x55D824u;
label_55d824:
    // 0x55d824: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x55d824u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55d828:
    // 0x55d828: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_55d82c:
    if (ctx->pc == 0x55D82Cu) {
        ctx->pc = 0x55D830u;
        goto label_55d830;
    }
    ctx->pc = 0x55D828u;
    {
        const bool branch_taken_0x55d828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x55d828) {
            ctx->pc = 0x55D844u;
            goto label_55d844;
        }
    }
    ctx->pc = 0x55D830u;
label_55d830:
    // 0x55d830: 0xc075eb4  jal         func_1D7AD0
label_55d834:
    if (ctx->pc == 0x55D834u) {
        ctx->pc = 0x55D838u;
        goto label_55d838;
    }
    ctx->pc = 0x55D830u;
    SET_GPR_U32(ctx, 31, 0x55D838u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D838u; }
        if (ctx->pc != 0x55D838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D838u; }
        if (ctx->pc != 0x55D838u) { return; }
    }
    ctx->pc = 0x55D838u;
label_55d838:
    // 0x55d838: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_55d83c:
    if (ctx->pc == 0x55D83Cu) {
        ctx->pc = 0x55D840u;
        goto label_55d840;
    }
    ctx->pc = 0x55D838u;
    {
        const bool branch_taken_0x55d838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x55d838) {
            ctx->pc = 0x55D844u;
            goto label_55d844;
        }
    }
    ctx->pc = 0x55D840u;
label_55d840:
    // 0x55d840: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x55d840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55d844:
    // 0x55d844: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
label_55d848:
    if (ctx->pc == 0x55D848u) {
        ctx->pc = 0x55D848u;
            // 0x55d848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D84Cu;
        goto label_55d84c;
    }
    ctx->pc = 0x55D844u;
    {
        const bool branch_taken_0x55d844 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x55d844) {
            ctx->pc = 0x55D848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55D844u;
            // 0x55d848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55D864u;
            goto label_55d864;
        }
    }
    ctx->pc = 0x55D84Cu;
label_55d84c:
    // 0x55d84c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x55d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_55d850:
    // 0x55d850: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x55d850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_55d854:
    // 0x55d854: 0x8c630e34  lw          $v1, 0xE34($v1)
    ctx->pc = 0x55d854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3636)));
label_55d858:
    // 0x55d858: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_55d85c:
    if (ctx->pc == 0x55D85Cu) {
        ctx->pc = 0x55D85Cu;
            // 0x55d85c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x55D860u;
        goto label_55d860;
    }
    ctx->pc = 0x55D858u;
    {
        const bool branch_taken_0x55d858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x55d858) {
            ctx->pc = 0x55D85Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55D858u;
            // 0x55d85c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55D878u;
            goto label_55d878;
        }
    }
    ctx->pc = 0x55D860u;
label_55d860:
    // 0x55d860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x55d860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_55d864:
    // 0x55d864: 0xc157924  jal         func_55E490
label_55d868:
    if (ctx->pc == 0x55D868u) {
        ctx->pc = 0x55D86Cu;
        goto label_55d86c;
    }
    ctx->pc = 0x55D864u;
    SET_GPR_U32(ctx, 31, 0x55D86Cu);
    ctx->pc = 0x55E490u;
    if (runtime->hasFunction(0x55E490u)) {
        auto targetFn = runtime->lookupFunction(0x55E490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D86Cu; }
        if (ctx->pc != 0x55D86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055E490_0x55e490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D86Cu; }
        if (ctx->pc != 0x55D86Cu) { return; }
    }
    ctx->pc = 0x55D86Cu;
label_55d86c:
    // 0x55d86c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x55d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55d870:
    // 0x55d870: 0x10000002  b           . + 4 + (0x2 << 2)
label_55d874:
    if (ctx->pc == 0x55D874u) {
        ctx->pc = 0x55D874u;
            // 0x55d874: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x55D878u;
        goto label_55d878;
    }
    ctx->pc = 0x55D870u;
    {
        const bool branch_taken_0x55d870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55D874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55D870u;
            // 0x55d874: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55d870) {
            ctx->pc = 0x55D87Cu;
            goto label_55d87c;
        }
    }
    ctx->pc = 0x55D878u;
label_55d878:
    // 0x55d878: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x55d878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_55d87c:
    // 0x55d87c: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x55d87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_55d880:
    // 0x55d880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x55d880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55d884:
    // 0x55d884: 0xc04a576  jal         func_1295D8
label_55d888:
    if (ctx->pc == 0x55D888u) {
        ctx->pc = 0x55D888u;
            // 0x55d888: 0x24060210  addiu       $a2, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->pc = 0x55D88Cu;
        goto label_55d88c;
    }
    ctx->pc = 0x55D884u;
    SET_GPR_U32(ctx, 31, 0x55D88Cu);
    ctx->pc = 0x55D888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D884u;
            // 0x55d888: 0x24060210  addiu       $a2, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D88Cu; }
        if (ctx->pc != 0x55D88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D88Cu; }
        if (ctx->pc != 0x55D88Cu) { return; }
    }
    ctx->pc = 0x55D88Cu;
label_55d88c:
    // 0x55d88c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x55d88cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55d890:
    // 0x55d890: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x55d890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_55d894:
    // 0x55d894: 0xc04c968  jal         func_1325A0
label_55d898:
    if (ctx->pc == 0x55D898u) {
        ctx->pc = 0x55D898u;
            // 0x55d898: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x55D89Cu;
        goto label_55d89c;
    }
    ctx->pc = 0x55D894u;
    SET_GPR_U32(ctx, 31, 0x55D89Cu);
    ctx->pc = 0x55D898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D894u;
            // 0x55d898: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D89Cu; }
        if (ctx->pc != 0x55D89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D89Cu; }
        if (ctx->pc != 0x55D89Cu) { return; }
    }
    ctx->pc = 0x55D89Cu;
label_55d89c:
    // 0x55d89c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x55d89cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_55d8a0:
    // 0x55d8a0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x55d8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_55d8a4:
    // 0x55d8a4: 0x2e43000b  sltiu       $v1, $s2, 0xB
    ctx->pc = 0x55d8a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_55d8a8:
    // 0x55d8a8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_55d8ac:
    if (ctx->pc == 0x55D8ACu) {
        ctx->pc = 0x55D8B0u;
        goto label_55d8b0;
    }
    ctx->pc = 0x55D8A8u;
    {
        const bool branch_taken_0x55d8a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x55d8a8) {
            ctx->pc = 0x55D894u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55d894;
        }
    }
    ctx->pc = 0x55D8B0u;
label_55d8b0:
    // 0x55d8b0: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x55d8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55d8b4:
    // 0x55d8b4: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x55d8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
label_55d8b8:
    // 0x55d8b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x55d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55d8bc:
    // 0x55d8bc: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x55d8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_55d8c0:
    // 0x55d8c0: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x55d8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_55d8c4:
    // 0x55d8c4: 0x8ca60d60  lw          $a2, 0xD60($a1)
    ctx->pc = 0x55d8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3424)));
label_55d8c8:
    // 0x55d8c8: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x55d8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_55d8cc:
    // 0x55d8cc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x55d8ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_55d8d0:
    // 0x55d8d0: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x55d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
label_55d8d4:
    // 0x55d8d4: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x55d8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_55d8d8:
    // 0x55d8d8: 0x14830201  bne         $a0, $v1, . + 4 + (0x201 << 2)
label_55d8dc:
    if (ctx->pc == 0x55D8DCu) {
        ctx->pc = 0x55D8E0u;
        goto label_55d8e0;
    }
    ctx->pc = 0x55D8D8u;
    {
        const bool branch_taken_0x55d8d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x55d8d8) {
            ctx->pc = 0x55E0E0u;
            goto label_55e0e0;
        }
    }
    ctx->pc = 0x55D8E0u;
label_55d8e0:
    // 0x55d8e0: 0x8e220284  lw          $v0, 0x284($s1)
    ctx->pc = 0x55d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
label_55d8e4:
    // 0x55d8e4: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x55d8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_55d8e8:
    // 0x55d8e8: 0x8e320280  lw          $s2, 0x280($s1)
    ctx->pc = 0x55d8e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
label_55d8ec:
    // 0x55d8ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x55d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_55d8f0:
    // 0x55d8f0: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x55d8f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_55d8f4:
    // 0x55d8f4: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x55d8f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_55d8f8:
    // 0x55d8f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55d8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55d8fc:
    // 0x55d8fc: 0xc0dc9bc  jal         func_3726F0
label_55d900:
    if (ctx->pc == 0x55D900u) {
        ctx->pc = 0x55D900u;
            // 0x55d900: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55D904u;
        goto label_55d904;
    }
    ctx->pc = 0x55D8FCu;
    SET_GPR_U32(ctx, 31, 0x55D904u);
    ctx->pc = 0x55D900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D8FCu;
            // 0x55d900: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D904u; }
        if (ctx->pc != 0x55D904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D904u; }
        if (ctx->pc != 0x55D904u) { return; }
    }
    ctx->pc = 0x55D904u;
label_55d904:
    // 0x55d904: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x55d904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55d908:
    // 0x55d908: 0xc0dc9a0  jal         func_372680
label_55d90c:
    if (ctx->pc == 0x55D90Cu) {
        ctx->pc = 0x55D90Cu;
            // 0x55d90c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x55D910u;
        goto label_55d910;
    }
    ctx->pc = 0x55D908u;
    SET_GPR_U32(ctx, 31, 0x55D910u);
    ctx->pc = 0x55D90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D908u;
            // 0x55d90c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D910u; }
        if (ctx->pc != 0x55D910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D910u; }
        if (ctx->pc != 0x55D910u) { return; }
    }
    ctx->pc = 0x55D910u;
label_55d910:
    // 0x55d910: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x55d910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_55d914:
    // 0x55d914: 0x1653fff7  bne         $s2, $s3, . + 4 + (-0x9 << 2)
label_55d918:
    if (ctx->pc == 0x55D918u) {
        ctx->pc = 0x55D918u;
            // 0x55d918: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x55D91Cu;
        goto label_55d91c;
    }
    ctx->pc = 0x55D914u;
    {
        const bool branch_taken_0x55d914 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x55D918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55D914u;
            // 0x55d918: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55d914) {
            ctx->pc = 0x55D8F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55d8f4;
        }
    }
    ctx->pc = 0x55D91Cu;
label_55d91c:
    // 0x55d91c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x55d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_55d920:
    // 0x55d920: 0xc0bd778  jal         func_2F5DE0
label_55d924:
    if (ctx->pc == 0x55D924u) {
        ctx->pc = 0x55D924u;
            // 0x55d924: 0x8c440d70  lw          $a0, 0xD70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
        ctx->pc = 0x55D928u;
        goto label_55d928;
    }
    ctx->pc = 0x55D920u;
    SET_GPR_U32(ctx, 31, 0x55D928u);
    ctx->pc = 0x55D924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D920u;
            // 0x55d924: 0x8c440d70  lw          $a0, 0xD70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5DE0u;
    if (runtime->hasFunction(0x2F5DE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D928u; }
        if (ctx->pc != 0x55D928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5DE0_0x2f5de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D928u; }
        if (ctx->pc != 0x55D928u) { return; }
    }
    ctx->pc = 0x55D928u;
label_55d928:
    // 0x55d928: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x55d928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_55d92c:
    // 0x55d92c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_55d930:
    if (ctx->pc == 0x55D930u) {
        ctx->pc = 0x55D930u;
            // 0x55d930: 0x21900  sll         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x55D934u;
        goto label_55d934;
    }
    ctx->pc = 0x55D92Cu;
    {
        const bool branch_taken_0x55d92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x55d92c) {
            ctx->pc = 0x55D930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55D92Cu;
            // 0x55d930: 0x21900  sll         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55D940u;
            goto label_55d940;
        }
    }
    ctx->pc = 0x55D934u;
label_55d934:
    // 0x55d934: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55d934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55d938:
    // 0x55d938: 0x10000004  b           . + 4 + (0x4 << 2)
label_55d93c:
    if (ctx->pc == 0x55D93Cu) {
        ctx->pc = 0x55D93Cu;
            // 0x55d93c: 0x2442f600  addiu       $v0, $v0, -0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
        ctx->pc = 0x55D940u;
        goto label_55d940;
    }
    ctx->pc = 0x55D938u;
    {
        const bool branch_taken_0x55d938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55D93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55D938u;
            // 0x55d93c: 0x2442f600  addiu       $v0, $v0, -0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55d938) {
            ctx->pc = 0x55D94Cu;
            goto label_55d94c;
        }
    }
    ctx->pc = 0x55D940u;
label_55d940:
    // 0x55d940: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55d940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55d944:
    // 0x55d944: 0x2442f580  addiu       $v0, $v0, -0xA80
    ctx->pc = 0x55d944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964608));
label_55d948:
    // 0x55d948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x55d948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_55d94c:
    // 0x55d94c: 0xae220270  sw          $v0, 0x270($s1)
    ctx->pc = 0x55d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 2));
label_55d950:
    // 0x55d950: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x55d950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_55d954:
    // 0x55d954: 0xc0bd778  jal         func_2F5DE0
label_55d958:
    if (ctx->pc == 0x55D958u) {
        ctx->pc = 0x55D958u;
            // 0x55d958: 0x8c440d70  lw          $a0, 0xD70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
        ctx->pc = 0x55D95Cu;
        goto label_55d95c;
    }
    ctx->pc = 0x55D954u;
    SET_GPR_U32(ctx, 31, 0x55D95Cu);
    ctx->pc = 0x55D958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D954u;
            // 0x55d958: 0x8c440d70  lw          $a0, 0xD70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5DE0u;
    if (runtime->hasFunction(0x2F5DE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D95Cu; }
        if (ctx->pc != 0x55D95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5DE0_0x2f5de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D95Cu; }
        if (ctx->pc != 0x55D95Cu) { return; }
    }
    ctx->pc = 0x55D95Cu;
label_55d95c:
    // 0x55d95c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x55d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_55d960:
    // 0x55d960: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_55d964:
    if (ctx->pc == 0x55D964u) {
        ctx->pc = 0x55D964u;
            // 0x55d964: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x55D968u;
        goto label_55d968;
    }
    ctx->pc = 0x55D960u;
    {
        const bool branch_taken_0x55d960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x55d960) {
            ctx->pc = 0x55D964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55D960u;
            // 0x55d964: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55D974u;
            goto label_55d974;
        }
    }
    ctx->pc = 0x55D968u;
label_55d968:
    // 0x55d968: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55d968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55d96c:
    // 0x55d96c: 0x10000005  b           . + 4 + (0x5 << 2)
label_55d970:
    if (ctx->pc == 0x55D970u) {
        ctx->pc = 0x55D970u;
            // 0x55d970: 0x8c42f630  lw          $v0, -0x9D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964784)));
        ctx->pc = 0x55D974u;
        goto label_55d974;
    }
    ctx->pc = 0x55D96Cu;
    {
        const bool branch_taken_0x55d96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55D970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55D96Cu;
            // 0x55d970: 0x8c42f630  lw          $v0, -0x9D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55d96c) {
            ctx->pc = 0x55D984u;
            goto label_55d984;
        }
    }
    ctx->pc = 0x55D974u;
label_55d974:
    // 0x55d974: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55d974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55d978:
    // 0x55d978: 0x2442f610  addiu       $v0, $v0, -0x9F0
    ctx->pc = 0x55d978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964752));
label_55d97c:
    // 0x55d97c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x55d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_55d980:
    // 0x55d980: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x55d980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_55d984:
    // 0x55d984: 0xae220274  sw          $v0, 0x274($s1)
    ctx->pc = 0x55d984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 2));
label_55d988:
    // 0x55d988: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x55d988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_55d98c:
    // 0x55d98c: 0x8e250280  lw          $a1, 0x280($s1)
    ctx->pc = 0x55d98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
label_55d990:
    // 0x55d990: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x55d990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_55d994:
    // 0x55d994: 0x92230274  lbu         $v1, 0x274($s1)
    ctx->pc = 0x55d994u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 628)));
label_55d998:
    // 0x55d998: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x55d998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_55d99c:
    // 0x55d99c: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x55d99cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_55d9a0:
    // 0x55d9a0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x55d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_55d9a4:
    // 0x55d9a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x55d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_55d9a8:
    // 0x55d9a8: 0xc04cce8  jal         func_1333A0
label_55d9ac:
    if (ctx->pc == 0x55D9ACu) {
        ctx->pc = 0x55D9ACu;
            // 0x55d9ac: 0x24450f40  addiu       $a1, $v0, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
        ctx->pc = 0x55D9B0u;
        goto label_55d9b0;
    }
    ctx->pc = 0x55D9A8u;
    SET_GPR_U32(ctx, 31, 0x55D9B0u);
    ctx->pc = 0x55D9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D9A8u;
            // 0x55d9ac: 0x24450f40  addiu       $a1, $v0, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D9B0u; }
        if (ctx->pc != 0x55D9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D9B0u; }
        if (ctx->pc != 0x55D9B0u) { return; }
    }
    ctx->pc = 0x55D9B0u;
label_55d9b0:
    // 0x55d9b0: 0x92230274  lbu         $v1, 0x274($s1)
    ctx->pc = 0x55d9b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 628)));
label_55d9b4:
    // 0x55d9b4: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x55d9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_55d9b8:
    // 0x55d9b8: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x55d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_55d9bc:
    // 0x55d9bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x55d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_55d9c0:
    // 0x55d9c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x55d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_55d9c4:
    // 0x55d9c4: 0xc04ce80  jal         func_133A00
label_55d9c8:
    if (ctx->pc == 0x55D9C8u) {
        ctx->pc = 0x55D9C8u;
            // 0x55d9c8: 0x24450ec0  addiu       $a1, $v0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3776));
        ctx->pc = 0x55D9CCu;
        goto label_55d9cc;
    }
    ctx->pc = 0x55D9C4u;
    SET_GPR_U32(ctx, 31, 0x55D9CCu);
    ctx->pc = 0x55D9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D9C4u;
            // 0x55d9c8: 0x24450ec0  addiu       $a1, $v0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D9CCu; }
        if (ctx->pc != 0x55D9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D9CCu; }
        if (ctx->pc != 0x55D9CCu) { return; }
    }
    ctx->pc = 0x55D9CCu;
label_55d9cc:
    // 0x55d9cc: 0x8e260270  lw          $a2, 0x270($s1)
    ctx->pc = 0x55d9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_55d9d0:
    // 0x55d9d0: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x55d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_55d9d4:
    // 0x55d9d4: 0xc04cca0  jal         func_133280
label_55d9d8:
    if (ctx->pc == 0x55D9D8u) {
        ctx->pc = 0x55D9D8u;
            // 0x55d9d8: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x55D9DCu;
        goto label_55d9dc;
    }
    ctx->pc = 0x55D9D4u;
    SET_GPR_U32(ctx, 31, 0x55D9DCu);
    ctx->pc = 0x55D9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D9D4u;
            // 0x55d9d8: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D9DCu; }
        if (ctx->pc != 0x55D9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D9DCu; }
        if (ctx->pc != 0x55D9DCu) { return; }
    }
    ctx->pc = 0x55D9DCu;
label_55d9dc:
    // 0x55d9dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x55d9dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55d9e0:
    // 0x55d9e0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x55d9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_55d9e4:
    // 0x55d9e4: 0xc04cc90  jal         func_133240
label_55d9e8:
    if (ctx->pc == 0x55D9E8u) {
        ctx->pc = 0x55D9E8u;
            // 0x55d9e8: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x55D9ECu;
        goto label_55d9ec;
    }
    ctx->pc = 0x55D9E4u;
    SET_GPR_U32(ctx, 31, 0x55D9ECu);
    ctx->pc = 0x55D9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D9E4u;
            // 0x55d9e8: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D9ECu; }
        if (ctx->pc != 0x55D9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55D9ECu; }
        if (ctx->pc != 0x55D9ECu) { return; }
    }
    ctx->pc = 0x55D9ECu;
label_55d9ec:
    // 0x55d9ec: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x55d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_55d9f0:
    // 0x55d9f0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x55d9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_55d9f4:
    // 0x55d9f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x55d9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55d9f8:
    // 0x55d9f8: 0xc04cbe0  jal         func_132F80
label_55d9fc:
    if (ctx->pc == 0x55D9FCu) {
        ctx->pc = 0x55D9FCu;
            // 0x55d9fc: 0x24460300  addiu       $a2, $v0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
        ctx->pc = 0x55DA00u;
        goto label_55da00;
    }
    ctx->pc = 0x55D9F8u;
    SET_GPR_U32(ctx, 31, 0x55DA00u);
    ctx->pc = 0x55D9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55D9F8u;
            // 0x55d9fc: 0x24460300  addiu       $a2, $v0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DA00u; }
        if (ctx->pc != 0x55DA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DA00u; }
        if (ctx->pc != 0x55DA00u) { return; }
    }
    ctx->pc = 0x55DA00u;
label_55da00:
    // 0x55da00: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x55da00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55da04:
    // 0x55da04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55da04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55da08:
    // 0x55da08: 0xc7a401e4  lwc1        $f4, 0x1E4($sp)
    ctx->pc = 0x55da08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_55da0c:
    // 0x55da0c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x55da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_55da10:
    // 0x55da10: 0xc7a101e8  lwc1        $f1, 0x1E8($sp)
    ctx->pc = 0x55da10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55da14:
    // 0x55da14: 0xafa001cc  sw          $zero, 0x1CC($sp)
    ctx->pc = 0x55da14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 0));
label_55da18:
    // 0x55da18: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x55da18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_55da1c:
    // 0x55da1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x55da1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55da20:
    // 0x55da20: 0xe7a401c4  swc1        $f4, 0x1C4($sp)
    ctx->pc = 0x55da20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_55da24:
    // 0x55da24: 0xe7a101c8  swc1        $f1, 0x1C8($sp)
    ctx->pc = 0x55da24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_55da28:
    // 0x55da28: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x55da28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55da2c:
    // 0x55da2c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x55da2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_55da30:
    // 0x55da30: 0x0  nop
    ctx->pc = 0x55da30u;
    // NOP
label_55da34:
    // 0x55da34: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x55da34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_55da38:
    // 0x55da38: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x55da38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_55da3c:
    // 0x55da3c: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x55da3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_55da40:
    // 0x55da40: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x55da40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_55da44:
    // 0x55da44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x55da44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_55da48:
    // 0x55da48: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x55da48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_55da4c:
    // 0x55da4c: 0xe7a101c8  swc1        $f1, 0x1C8($sp)
    ctx->pc = 0x55da4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_55da50:
    // 0x55da50: 0xc088b74  jal         func_222DD0
label_55da54:
    if (ctx->pc == 0x55DA54u) {
        ctx->pc = 0x55DA54u;
            // 0x55da54: 0xe7a001cc  swc1        $f0, 0x1CC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
        ctx->pc = 0x55DA58u;
        goto label_55da58;
    }
    ctx->pc = 0x55DA50u;
    SET_GPR_U32(ctx, 31, 0x55DA58u);
    ctx->pc = 0x55DA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DA50u;
            // 0x55da54: 0xe7a001cc  swc1        $f0, 0x1CC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DA58u; }
        if (ctx->pc != 0x55DA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DA58u; }
        if (ctx->pc != 0x55DA58u) { return; }
    }
    ctx->pc = 0x55DA58u;
label_55da58:
    // 0x55da58: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x55da58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_55da5c:
    // 0x55da5c: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x55da5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_55da60:
    // 0x55da60: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x55da60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_55da64:
    // 0x55da64: 0x320f809  jalr        $t9
label_55da68:
    if (ctx->pc == 0x55DA68u) {
        ctx->pc = 0x55DA68u;
            // 0x55da68: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x55DA6Cu;
        goto label_55da6c;
    }
    ctx->pc = 0x55DA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55DA6Cu);
        ctx->pc = 0x55DA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55DA64u;
            // 0x55da68: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55DA6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55DA6Cu; }
            if (ctx->pc != 0x55DA6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x55DA6Cu;
label_55da6c:
    // 0x55da6c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x55da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_55da70:
    // 0x55da70: 0x26530120  addiu       $s3, $s2, 0x120
    ctx->pc = 0x55da70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
label_55da74:
    // 0x55da74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x55da74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55da78:
    // 0x55da78: 0xc44308ec  lwc1        $f3, 0x8EC($v0)
    ctx->pc = 0x55da78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_55da7c:
    // 0x55da7c: 0xc44208e8  lwc1        $f2, 0x8E8($v0)
    ctx->pc = 0x55da7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55da80:
    // 0x55da80: 0xc44108e4  lwc1        $f1, 0x8E4($v0)
    ctx->pc = 0x55da80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55da84:
    // 0x55da84: 0xc44008e0  lwc1        $f0, 0x8E0($v0)
    ctx->pc = 0x55da84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55da88:
    // 0x55da88: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x55da88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_55da8c:
    // 0x55da8c: 0xe7a101a4  swc1        $f1, 0x1A4($sp)
    ctx->pc = 0x55da8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_55da90:
    // 0x55da90: 0xe7a201a8  swc1        $f2, 0x1A8($sp)
    ctx->pc = 0x55da90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_55da94:
    // 0x55da94: 0xc0d8a80  jal         func_362A00
label_55da98:
    if (ctx->pc == 0x55DA98u) {
        ctx->pc = 0x55DA98u;
            // 0x55da98: 0xe7a301ac  swc1        $f3, 0x1AC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
        ctx->pc = 0x55DA9Cu;
        goto label_55da9c;
    }
    ctx->pc = 0x55DA94u;
    SET_GPR_U32(ctx, 31, 0x55DA9Cu);
    ctx->pc = 0x55DA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DA94u;
            // 0x55da98: 0xe7a301ac  swc1        $f3, 0x1AC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DA9Cu; }
        if (ctx->pc != 0x55DA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DA9Cu; }
        if (ctx->pc != 0x55DA9Cu) { return; }
    }
    ctx->pc = 0x55DA9Cu;
label_55da9c:
    // 0x55da9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x55da9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_55daa0:
    // 0x55daa0: 0xc0d8a80  jal         func_362A00
label_55daa4:
    if (ctx->pc == 0x55DAA4u) {
        ctx->pc = 0x55DAA4u;
            // 0x55daa4: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x55DAA8u;
        goto label_55daa8;
    }
    ctx->pc = 0x55DAA0u;
    SET_GPR_U32(ctx, 31, 0x55DAA8u);
    ctx->pc = 0x55DAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DAA0u;
            // 0x55daa4: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DAA8u; }
        if (ctx->pc != 0x55DAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DAA8u; }
        if (ctx->pc != 0x55DAA8u) { return; }
    }
    ctx->pc = 0x55DAA8u;
label_55daa8:
    // 0x55daa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55daa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55daac:
    // 0x55daac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x55daacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_55dab0:
    // 0x55dab0: 0xc0d8a6c  jal         func_3629B0
label_55dab4:
    if (ctx->pc == 0x55DAB4u) {
        ctx->pc = 0x55DAB4u;
            // 0x55dab4: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x55DAB8u;
        goto label_55dab8;
    }
    ctx->pc = 0x55DAB0u;
    SET_GPR_U32(ctx, 31, 0x55DAB8u);
    ctx->pc = 0x55DAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DAB0u;
            // 0x55dab4: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3629B0u;
    if (runtime->hasFunction(0x3629B0u)) {
        auto targetFn = runtime->lookupFunction(0x3629B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DAB8u; }
        if (ctx->pc != 0x55DAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003629B0_0x3629b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DAB8u; }
        if (ctx->pc != 0x55DAB8u) { return; }
    }
    ctx->pc = 0x55DAB8u;
label_55dab8:
    // 0x55dab8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x55dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_55dabc:
    // 0x55dabc: 0xc0b6e90  jal         func_2DBA40
label_55dac0:
    if (ctx->pc == 0x55DAC0u) {
        ctx->pc = 0x55DAC0u;
            // 0x55dac0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x55DAC4u;
        goto label_55dac4;
    }
    ctx->pc = 0x55DABCu;
    SET_GPR_U32(ctx, 31, 0x55DAC4u);
    ctx->pc = 0x55DAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DABCu;
            // 0x55dac0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DAC4u; }
        if (ctx->pc != 0x55DAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DAC4u; }
        if (ctx->pc != 0x55DAC4u) { return; }
    }
    ctx->pc = 0x55DAC4u;
label_55dac4:
    // 0x55dac4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x55dac4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_55dac8:
    // 0x55dac8: 0xc0d8a80  jal         func_362A00
label_55dacc:
    if (ctx->pc == 0x55DACCu) {
        ctx->pc = 0x55DACCu;
            // 0x55dacc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55DAD0u;
        goto label_55dad0;
    }
    ctx->pc = 0x55DAC8u;
    SET_GPR_U32(ctx, 31, 0x55DAD0u);
    ctx->pc = 0x55DACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DAC8u;
            // 0x55dacc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DAD0u; }
        if (ctx->pc != 0x55DAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DAD0u; }
        if (ctx->pc != 0x55DAD0u) { return; }
    }
    ctx->pc = 0x55DAD0u;
label_55dad0:
    // 0x55dad0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x55dad0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_55dad4:
    // 0x55dad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x55dad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_55dad8:
    // 0x55dad8: 0xc0d8a54  jal         func_362950
label_55dadc:
    if (ctx->pc == 0x55DADCu) {
        ctx->pc = 0x55DADCu;
            // 0x55dadc: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x55DAE0u;
        goto label_55dae0;
    }
    ctx->pc = 0x55DAD8u;
    SET_GPR_U32(ctx, 31, 0x55DAE0u);
    ctx->pc = 0x55DADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DAD8u;
            // 0x55dadc: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362950u;
    if (runtime->hasFunction(0x362950u)) {
        auto targetFn = runtime->lookupFunction(0x362950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DAE0u; }
        if (ctx->pc != 0x55DAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362950_0x362950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DAE0u; }
        if (ctx->pc != 0x55DAE0u) { return; }
    }
    ctx->pc = 0x55DAE0u;
label_55dae0:
    // 0x55dae0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x55dae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55dae4:
    // 0x55dae4: 0xc0b6e90  jal         func_2DBA40
label_55dae8:
    if (ctx->pc == 0x55DAE8u) {
        ctx->pc = 0x55DAE8u;
            // 0x55dae8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x55DAECu;
        goto label_55daec;
    }
    ctx->pc = 0x55DAE4u;
    SET_GPR_U32(ctx, 31, 0x55DAECu);
    ctx->pc = 0x55DAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DAE4u;
            // 0x55dae8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DAECu; }
        if (ctx->pc != 0x55DAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DAECu; }
        if (ctx->pc != 0x55DAECu) { return; }
    }
    ctx->pc = 0x55DAECu;
label_55daec:
    // 0x55daec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x55daecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_55daf0:
    // 0x55daf0: 0xc0d8a80  jal         func_362A00
label_55daf4:
    if (ctx->pc == 0x55DAF4u) {
        ctx->pc = 0x55DAF4u;
            // 0x55daf4: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x55DAF8u;
        goto label_55daf8;
    }
    ctx->pc = 0x55DAF0u;
    SET_GPR_U32(ctx, 31, 0x55DAF8u);
    ctx->pc = 0x55DAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DAF0u;
            // 0x55daf4: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DAF8u; }
        if (ctx->pc != 0x55DAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DAF8u; }
        if (ctx->pc != 0x55DAF8u) { return; }
    }
    ctx->pc = 0x55DAF8u;
label_55daf8:
    // 0x55daf8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x55daf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_55dafc:
    // 0x55dafc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x55dafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_55db00:
    // 0x55db00: 0xc0d8a3c  jal         func_3628F0
label_55db04:
    if (ctx->pc == 0x55DB04u) {
        ctx->pc = 0x55DB04u;
            // 0x55db04: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x55DB08u;
        goto label_55db08;
    }
    ctx->pc = 0x55DB00u;
    SET_GPR_U32(ctx, 31, 0x55DB08u);
    ctx->pc = 0x55DB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DB00u;
            // 0x55db04: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628F0u;
    if (runtime->hasFunction(0x3628F0u)) {
        auto targetFn = runtime->lookupFunction(0x3628F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DB08u; }
        if (ctx->pc != 0x55DB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628F0_0x3628f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DB08u; }
        if (ctx->pc != 0x55DB08u) { return; }
    }
    ctx->pc = 0x55DB08u;
label_55db08:
    // 0x55db08: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x55db08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_55db0c:
    // 0x55db0c: 0xc0b6e00  jal         func_2DB800
label_55db10:
    if (ctx->pc == 0x55DB10u) {
        ctx->pc = 0x55DB10u;
            // 0x55db10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55DB14u;
        goto label_55db14;
    }
    ctx->pc = 0x55DB0Cu;
    SET_GPR_U32(ctx, 31, 0x55DB14u);
    ctx->pc = 0x55DB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DB0Cu;
            // 0x55db10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB800u;
    if (runtime->hasFunction(0x2DB800u)) {
        auto targetFn = runtime->lookupFunction(0x2DB800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DB14u; }
        if (ctx->pc != 0x55DB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB800_0x2db800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DB14u; }
        if (ctx->pc != 0x55DB14u) { return; }
    }
    ctx->pc = 0x55DB14u;
label_55db14:
    // 0x55db14: 0xc0d8a80  jal         func_362A00
label_55db18:
    if (ctx->pc == 0x55DB18u) {
        ctx->pc = 0x55DB18u;
            // 0x55db18: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x55DB1Cu;
        goto label_55db1c;
    }
    ctx->pc = 0x55DB14u;
    SET_GPR_U32(ctx, 31, 0x55DB1Cu);
    ctx->pc = 0x55DB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DB14u;
            // 0x55db18: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DB1Cu; }
        if (ctx->pc != 0x55DB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DB1Cu; }
        if (ctx->pc != 0x55DB1Cu) { return; }
    }
    ctx->pc = 0x55DB1Cu;
label_55db1c:
    // 0x55db1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x55db1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55db20:
    // 0x55db20: 0xc0d8a80  jal         func_362A00
label_55db24:
    if (ctx->pc == 0x55DB24u) {
        ctx->pc = 0x55DB24u;
            // 0x55db24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55DB28u;
        goto label_55db28;
    }
    ctx->pc = 0x55DB20u;
    SET_GPR_U32(ctx, 31, 0x55DB28u);
    ctx->pc = 0x55DB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DB20u;
            // 0x55db24: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A00u;
    if (runtime->hasFunction(0x362A00u)) {
        auto targetFn = runtime->lookupFunction(0x362A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DB28u; }
        if (ctx->pc != 0x55DB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A00_0x362a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DB28u; }
        if (ctx->pc != 0x55DB28u) { return; }
    }
    ctx->pc = 0x55DB28u;
label_55db28:
    // 0x55db28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55db28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55db2c:
    // 0x55db2c: 0xc0d8a2c  jal         func_3628B0
label_55db30:
    if (ctx->pc == 0x55DB30u) {
        ctx->pc = 0x55DB30u;
            // 0x55db30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55DB34u;
        goto label_55db34;
    }
    ctx->pc = 0x55DB2Cu;
    SET_GPR_U32(ctx, 31, 0x55DB34u);
    ctx->pc = 0x55DB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DB2Cu;
            // 0x55db30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3628B0u;
    if (runtime->hasFunction(0x3628B0u)) {
        auto targetFn = runtime->lookupFunction(0x3628B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DB34u; }
        if (ctx->pc != 0x55DB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003628B0_0x3628b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DB34u; }
        if (ctx->pc != 0x55DB34u) { return; }
    }
    ctx->pc = 0x55DB34u;
label_55db34:
    // 0x55db34: 0xc0d8a24  jal         func_362890
label_55db38:
    if (ctx->pc == 0x55DB38u) {
        ctx->pc = 0x55DB38u;
            // 0x55db38: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x55DB3Cu;
        goto label_55db3c;
    }
    ctx->pc = 0x55DB34u;
    SET_GPR_U32(ctx, 31, 0x55DB3Cu);
    ctx->pc = 0x55DB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DB34u;
            // 0x55db38: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x362890u;
    if (runtime->hasFunction(0x362890u)) {
        auto targetFn = runtime->lookupFunction(0x362890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DB3Cu; }
        if (ctx->pc != 0x55DB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362890_0x362890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DB3Cu; }
        if (ctx->pc != 0x55DB3Cu) { return; }
    }
    ctx->pc = 0x55DB3Cu;
label_55db3c:
    // 0x55db3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_55db40:
    if (ctx->pc == 0x55DB40u) {
        ctx->pc = 0x55DB44u;
        goto label_55db44;
    }
    ctx->pc = 0x55DB3Cu;
    {
        const bool branch_taken_0x55db3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55db3c) {
            ctx->pc = 0x55DB50u;
            goto label_55db50;
        }
    }
    ctx->pc = 0x55DB44u;
label_55db44:
    // 0x55db44: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x55db44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_55db48:
    // 0x55db48: 0xc0d8a14  jal         func_362850
label_55db4c:
    if (ctx->pc == 0x55DB4Cu) {
        ctx->pc = 0x55DB4Cu;
            // 0x55db4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55DB50u;
        goto label_55db50;
    }
    ctx->pc = 0x55DB48u;
    SET_GPR_U32(ctx, 31, 0x55DB50u);
    ctx->pc = 0x55DB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DB48u;
            // 0x55db4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362850u;
    if (runtime->hasFunction(0x362850u)) {
        auto targetFn = runtime->lookupFunction(0x362850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DB50u; }
        if (ctx->pc != 0x55DB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362850_0x362850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DB50u; }
        if (ctx->pc != 0x55DB50u) { return; }
    }
    ctx->pc = 0x55DB50u;
label_55db50:
    // 0x55db50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55db50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55db54:
    // 0x55db54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x55db54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55db58:
    // 0x55db58: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x55db58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_55db5c:
    // 0x55db5c: 0xc7a301b0  lwc1        $f3, 0x1B0($sp)
    ctx->pc = 0x55db5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_55db60:
    // 0x55db60: 0xc7a201b4  lwc1        $f2, 0x1B4($sp)
    ctx->pc = 0x55db60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55db64:
    // 0x55db64: 0xc7a101b8  lwc1        $f1, 0x1B8($sp)
    ctx->pc = 0x55db64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55db68:
    // 0x55db68: 0xc444001c  lwc1        $f4, 0x1C($v0)
    ctx->pc = 0x55db68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_55db6c:
    // 0x55db6c: 0xc7a001bc  lwc1        $f0, 0x1BC($sp)
    ctx->pc = 0x55db6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55db70:
    // 0x55db70: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x55db70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_55db74:
    // 0x55db74: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x55db74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_55db78:
    // 0x55db78: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x55db78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_55db7c:
    // 0x55db7c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x55db7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_55db80:
    // 0x55db80: 0xe7a301b0  swc1        $f3, 0x1B0($sp)
    ctx->pc = 0x55db80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_55db84:
    // 0x55db84: 0xe7a201b4  swc1        $f2, 0x1B4($sp)
    ctx->pc = 0x55db84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_55db88:
    // 0x55db88: 0xe7a101b8  swc1        $f1, 0x1B8($sp)
    ctx->pc = 0x55db88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_55db8c:
    // 0x55db8c: 0xc088b74  jal         func_222DD0
label_55db90:
    if (ctx->pc == 0x55DB90u) {
        ctx->pc = 0x55DB90u;
            // 0x55db90: 0xe7a001bc  swc1        $f0, 0x1BC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
        ctx->pc = 0x55DB94u;
        goto label_55db94;
    }
    ctx->pc = 0x55DB8Cu;
    SET_GPR_U32(ctx, 31, 0x55DB94u);
    ctx->pc = 0x55DB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DB8Cu;
            // 0x55db90: 0xe7a001bc  swc1        $f0, 0x1BC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DB94u; }
        if (ctx->pc != 0x55DB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DB94u; }
        if (ctx->pc != 0x55DB94u) { return; }
    }
    ctx->pc = 0x55DB94u;
label_55db94:
    // 0x55db94: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x55db94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_55db98:
    // 0x55db98: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x55db98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_55db9c:
    // 0x55db9c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x55db9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_55dba0:
    // 0x55dba0: 0x320f809  jalr        $t9
label_55dba4:
    if (ctx->pc == 0x55DBA4u) {
        ctx->pc = 0x55DBA4u;
            // 0x55dba4: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x55DBA8u;
        goto label_55dba8;
    }
    ctx->pc = 0x55DBA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55DBA8u);
        ctx->pc = 0x55DBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55DBA0u;
            // 0x55dba4: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55DBA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55DBA8u; }
            if (ctx->pc != 0x55DBA8u) { return; }
        }
        }
    }
    ctx->pc = 0x55DBA8u;
label_55dba8:
    // 0x55dba8: 0x1000014d  b           . + 4 + (0x14D << 2)
label_55dbac:
    if (ctx->pc == 0x55DBACu) {
        ctx->pc = 0x55DBB0u;
        goto label_55dbb0;
    }
    ctx->pc = 0x55DBA8u;
    {
        const bool branch_taken_0x55dba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x55dba8) {
            ctx->pc = 0x55E0E0u;
            goto label_55e0e0;
        }
    }
    ctx->pc = 0x55DBB0u;
label_55dbb0:
    // 0x55dbb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x55dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_55dbb4:
    // 0x55dbb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x55dbb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_55dbb8:
    // 0x55dbb8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x55dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_55dbbc:
    // 0x55dbbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x55dbbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55dbc0:
    // 0x55dbc0: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x55dbc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_55dbc4:
    // 0x55dbc4: 0x8e420da0  lw          $v0, 0xDA0($s2)
    ctx->pc = 0x55dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_55dbc8:
    // 0x55dbc8: 0xc6430dec  lwc1        $f3, 0xDEC($s2)
    ctx->pc = 0x55dbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_55dbcc:
    // 0x55dbcc: 0x8e440d70  lw          $a0, 0xD70($s2)
    ctx->pc = 0x55dbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_55dbd0:
    // 0x55dbd0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x55dbd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55dbd4:
    // 0x55dbd4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x55dbd4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_55dbd8:
    // 0x55dbd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x55dbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_55dbdc:
    // 0x55dbdc: 0x4603151d  msub.s      $f20, $f2, $f3
    ctx->pc = 0x55dbdcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_55dbe0:
    // 0x55dbe0: 0xc0bd778  jal         func_2F5DE0
label_55dbe4:
    if (ctx->pc == 0x55DBE4u) {
        ctx->pc = 0x55DBE4u;
            // 0x55dbe4: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x55DBE8u;
        goto label_55dbe8;
    }
    ctx->pc = 0x55DBE0u;
    SET_GPR_U32(ctx, 31, 0x55DBE8u);
    ctx->pc = 0x55DBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DBE0u;
            // 0x55dbe4: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5DE0u;
    if (runtime->hasFunction(0x2F5DE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DBE8u; }
        if (ctx->pc != 0x55DBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5DE0_0x2f5de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DBE8u; }
        if (ctx->pc != 0x55DBE8u) { return; }
    }
    ctx->pc = 0x55DBE8u;
label_55dbe8:
    // 0x55dbe8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x55dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_55dbec:
    // 0x55dbec: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_55dbf0:
    if (ctx->pc == 0x55DBF0u) {
        ctx->pc = 0x55DBF0u;
            // 0x55dbf0: 0x21900  sll         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x55DBF4u;
        goto label_55dbf4;
    }
    ctx->pc = 0x55DBECu;
    {
        const bool branch_taken_0x55dbec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x55dbec) {
            ctx->pc = 0x55DBF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55DBECu;
            // 0x55dbf0: 0x21900  sll         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55DC00u;
            goto label_55dc00;
        }
    }
    ctx->pc = 0x55DBF4u;
label_55dbf4:
    // 0x55dbf4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55dbf8:
    // 0x55dbf8: 0x10000004  b           . + 4 + (0x4 << 2)
label_55dbfc:
    if (ctx->pc == 0x55DBFCu) {
        ctx->pc = 0x55DBFCu;
            // 0x55dbfc: 0x2442f600  addiu       $v0, $v0, -0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
        ctx->pc = 0x55DC00u;
        goto label_55dc00;
    }
    ctx->pc = 0x55DBF8u;
    {
        const bool branch_taken_0x55dbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55DBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55DBF8u;
            // 0x55dbfc: 0x2442f600  addiu       $v0, $v0, -0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55dbf8) {
            ctx->pc = 0x55DC0Cu;
            goto label_55dc0c;
        }
    }
    ctx->pc = 0x55DC00u;
label_55dc00:
    // 0x55dc00: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55dc04:
    // 0x55dc04: 0x2442f580  addiu       $v0, $v0, -0xA80
    ctx->pc = 0x55dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964608));
label_55dc08:
    // 0x55dc08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x55dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_55dc0c:
    // 0x55dc0c: 0xae220270  sw          $v0, 0x270($s1)
    ctx->pc = 0x55dc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 2));
label_55dc10:
    // 0x55dc10: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x55dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_55dc14:
    // 0x55dc14: 0xc0bd778  jal         func_2F5DE0
label_55dc18:
    if (ctx->pc == 0x55DC18u) {
        ctx->pc = 0x55DC18u;
            // 0x55dc18: 0x8c440d70  lw          $a0, 0xD70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
        ctx->pc = 0x55DC1Cu;
        goto label_55dc1c;
    }
    ctx->pc = 0x55DC14u;
    SET_GPR_U32(ctx, 31, 0x55DC1Cu);
    ctx->pc = 0x55DC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DC14u;
            // 0x55dc18: 0x8c440d70  lw          $a0, 0xD70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5DE0u;
    if (runtime->hasFunction(0x2F5DE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DC1Cu; }
        if (ctx->pc != 0x55DC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5DE0_0x2f5de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DC1Cu; }
        if (ctx->pc != 0x55DC1Cu) { return; }
    }
    ctx->pc = 0x55DC1Cu;
label_55dc1c:
    // 0x55dc1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x55dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_55dc20:
    // 0x55dc20: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_55dc24:
    if (ctx->pc == 0x55DC24u) {
        ctx->pc = 0x55DC24u;
            // 0x55dc24: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x55DC28u;
        goto label_55dc28;
    }
    ctx->pc = 0x55DC20u;
    {
        const bool branch_taken_0x55dc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x55dc20) {
            ctx->pc = 0x55DC24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55DC20u;
            // 0x55dc24: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55DC34u;
            goto label_55dc34;
        }
    }
    ctx->pc = 0x55DC28u;
label_55dc28:
    // 0x55dc28: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55dc2c:
    // 0x55dc2c: 0x10000005  b           . + 4 + (0x5 << 2)
label_55dc30:
    if (ctx->pc == 0x55DC30u) {
        ctx->pc = 0x55DC30u;
            // 0x55dc30: 0x8c42f630  lw          $v0, -0x9D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964784)));
        ctx->pc = 0x55DC34u;
        goto label_55dc34;
    }
    ctx->pc = 0x55DC2Cu;
    {
        const bool branch_taken_0x55dc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55DC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55DC2Cu;
            // 0x55dc30: 0x8c42f630  lw          $v0, -0x9D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55dc2c) {
            ctx->pc = 0x55DC44u;
            goto label_55dc44;
        }
    }
    ctx->pc = 0x55DC34u;
label_55dc34:
    // 0x55dc34: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55dc38:
    // 0x55dc38: 0x2442f610  addiu       $v0, $v0, -0x9F0
    ctx->pc = 0x55dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964752));
label_55dc3c:
    // 0x55dc3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x55dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_55dc40:
    // 0x55dc40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x55dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_55dc44:
    // 0x55dc44: 0xae220274  sw          $v0, 0x274($s1)
    ctx->pc = 0x55dc44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 2));
label_55dc48:
    // 0x55dc48: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55dc4c:
    // 0x55dc4c: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x55dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_55dc50:
    // 0x55dc50: 0xc6410dbc  lwc1        $f1, 0xDBC($s2)
    ctx->pc = 0x55dc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55dc54:
    // 0x55dc54: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x55dc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55dc58:
    // 0x55dc58: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x55dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_55dc5c:
    // 0x55dc5c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x55dc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_55dc60:
    // 0x55dc60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55dc60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55dc64:
    // 0x55dc64: 0x0  nop
    ctx->pc = 0x55dc64u;
    // NOP
label_55dc68:
    // 0x55dc68: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x55dc68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_55dc6c:
    // 0x55dc6c: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
label_55dc70:
    if (ctx->pc == 0x55DC70u) {
        ctx->pc = 0x55DC70u;
            // 0x55dc70: 0x460100c2  mul.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x55DC74u;
        goto label_55dc74;
    }
    ctx->pc = 0x55DC6Cu;
    {
        const bool branch_taken_0x55dc6c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x55DC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55DC6Cu;
            // 0x55dc70: 0x460100c2  mul.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55dc6c) {
            ctx->pc = 0x55DC80u;
            goto label_55dc80;
        }
    }
    ctx->pc = 0x55DC74u;
label_55dc74:
    // 0x55dc74: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x55dc74u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55dc78:
    // 0x55dc78: 0x10000008  b           . + 4 + (0x8 << 2)
label_55dc7c:
    if (ctx->pc == 0x55DC7Cu) {
        ctx->pc = 0x55DC7Cu;
            // 0x55dc7c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x55DC80u;
        goto label_55dc80;
    }
    ctx->pc = 0x55DC78u;
    {
        const bool branch_taken_0x55dc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55DC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55DC78u;
            // 0x55dc7c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55dc78) {
            ctx->pc = 0x55DC9Cu;
            goto label_55dc9c;
        }
    }
    ctx->pc = 0x55DC80u;
label_55dc80:
    // 0x55dc80: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x55dc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_55dc84:
    // 0x55dc84: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x55dc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_55dc88:
    // 0x55dc88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x55dc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55dc8c:
    // 0x55dc8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55dc8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55dc90:
    // 0x55dc90: 0x0  nop
    ctx->pc = 0x55dc90u;
    // NOP
label_55dc94:
    // 0x55dc94: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x55dc94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_55dc98:
    // 0x55dc98: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x55dc98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_55dc9c:
    // 0x55dc9c: 0xc6210278  lwc1        $f1, 0x278($s1)
    ctx->pc = 0x55dc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55dca0:
    // 0x55dca0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x55dca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_55dca4:
    // 0x55dca4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x55dca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55dca8:
    // 0x55dca8: 0x0  nop
    ctx->pc = 0x55dca8u;
    // NOP
label_55dcac:
    // 0x55dcac: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x55dcacu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_55dcb0:
    // 0x55dcb0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x55dcb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_55dcb4:
    // 0x55dcb4: 0xe6200278  swc1        $f0, 0x278($s1)
    ctx->pc = 0x55dcb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 632), bits); }
label_55dcb8:
    // 0x55dcb8: 0x92220274  lbu         $v0, 0x274($s1)
    ctx->pc = 0x55dcb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 628)));
label_55dcbc:
    // 0x55dcbc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x55dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_55dcc0:
    // 0x55dcc0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x55dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_55dcc4:
    // 0x55dcc4: 0xc04cce8  jal         func_1333A0
label_55dcc8:
    if (ctx->pc == 0x55DCC8u) {
        ctx->pc = 0x55DCC8u;
            // 0x55dcc8: 0x24450f40  addiu       $a1, $v0, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
        ctx->pc = 0x55DCCCu;
        goto label_55dccc;
    }
    ctx->pc = 0x55DCC4u;
    SET_GPR_U32(ctx, 31, 0x55DCCCu);
    ctx->pc = 0x55DCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DCC4u;
            // 0x55dcc8: 0x24450f40  addiu       $a1, $v0, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DCCCu; }
        if (ctx->pc != 0x55DCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DCCCu; }
        if (ctx->pc != 0x55DCCCu) { return; }
    }
    ctx->pc = 0x55DCCCu;
label_55dccc:
    // 0x55dccc: 0xc0477a8  jal         func_11DEA0
label_55dcd0:
    if (ctx->pc == 0x55DCD0u) {
        ctx->pc = 0x55DCD0u;
            // 0x55dcd0: 0xc62c0278  lwc1        $f12, 0x278($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x55DCD4u;
        goto label_55dcd4;
    }
    ctx->pc = 0x55DCCCu;
    SET_GPR_U32(ctx, 31, 0x55DCD4u);
    ctx->pc = 0x55DCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DCCCu;
            // 0x55dcd0: 0xc62c0278  lwc1        $f12, 0x278($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DCD4u; }
        if (ctx->pc != 0x55DCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DCD4u; }
        if (ctx->pc != 0x55DCD4u) { return; }
    }
    ctx->pc = 0x55DCD4u;
label_55dcd4:
    // 0x55dcd4: 0x3c024463  lui         $v0, 0x4463
    ctx->pc = 0x55dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17507 << 16));
label_55dcd8:
    // 0x55dcd8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x55dcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_55dcdc:
    // 0x55dcdc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x55dcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_55dce0:
    // 0x55dce0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x55dce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55dce4:
    // 0x55dce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x55dce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_55dce8:
    // 0x55dce8: 0x0  nop
    ctx->pc = 0x55dce8u;
    // NOP
label_55dcec:
    // 0x55dcec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x55dcecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_55dcf0:
    // 0x55dcf0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x55dcf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_55dcf4:
    // 0x55dcf4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55dcf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_55dcf8:
    // 0x55dcf8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x55dcf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_55dcfc:
    // 0x55dcfc: 0xc04f380  jal         func_13CE00
label_55dd00:
    if (ctx->pc == 0x55DD00u) {
        ctx->pc = 0x55DD00u;
            // 0x55dd00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55DD04u;
        goto label_55dd04;
    }
    ctx->pc = 0x55DCFCu;
    SET_GPR_U32(ctx, 31, 0x55DD04u);
    ctx->pc = 0x55DD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DCFCu;
            // 0x55dd00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CE00u;
    if (runtime->hasFunction(0x13CE00u)) {
        auto targetFn = runtime->lookupFunction(0x13CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DD04u; }
        if (ctx->pc != 0x55DD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CE00_0x13ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DD04u; }
        if (ctx->pc != 0x55DD04u) { return; }
    }
    ctx->pc = 0x55DD04u;
label_55dd04:
    // 0x55dd04: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x55dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_55dd08:
    // 0x55dd08: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x55dd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_55dd0c:
    // 0x55dd0c: 0xc04cd60  jal         func_133580
label_55dd10:
    if (ctx->pc == 0x55DD10u) {
        ctx->pc = 0x55DD10u;
            // 0x55dd10: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55DD14u;
        goto label_55dd14;
    }
    ctx->pc = 0x55DD0Cu;
    SET_GPR_U32(ctx, 31, 0x55DD14u);
    ctx->pc = 0x55DD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DD0Cu;
            // 0x55dd10: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DD14u; }
        if (ctx->pc != 0x55DD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DD14u; }
        if (ctx->pc != 0x55DD14u) { return; }
    }
    ctx->pc = 0x55DD14u;
label_55dd14:
    // 0x55dd14: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x55dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_55dd18:
    // 0x55dd18: 0xc04c994  jal         func_132650
label_55dd1c:
    if (ctx->pc == 0x55DD1Cu) {
        ctx->pc = 0x55DD1Cu;
            // 0x55dd1c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x55DD20u;
        goto label_55dd20;
    }
    ctx->pc = 0x55DD18u;
    SET_GPR_U32(ctx, 31, 0x55DD20u);
    ctx->pc = 0x55DD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DD18u;
            // 0x55dd1c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DD20u; }
        if (ctx->pc != 0x55DD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DD20u; }
        if (ctx->pc != 0x55DD20u) { return; }
    }
    ctx->pc = 0x55DD20u;
label_55dd20:
    // 0x55dd20: 0x92220274  lbu         $v0, 0x274($s1)
    ctx->pc = 0x55dd20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 628)));
label_55dd24:
    // 0x55dd24: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x55dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_55dd28:
    // 0x55dd28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x55dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_55dd2c:
    // 0x55dd2c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x55dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_55dd30:
    // 0x55dd30: 0xc04ce80  jal         func_133A00
label_55dd34:
    if (ctx->pc == 0x55DD34u) {
        ctx->pc = 0x55DD34u;
            // 0x55dd34: 0x24450ec0  addiu       $a1, $v0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3776));
        ctx->pc = 0x55DD38u;
        goto label_55dd38;
    }
    ctx->pc = 0x55DD30u;
    SET_GPR_U32(ctx, 31, 0x55DD38u);
    ctx->pc = 0x55DD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DD30u;
            // 0x55dd34: 0x24450ec0  addiu       $a1, $v0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DD38u; }
        if (ctx->pc != 0x55DD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DD38u; }
        if (ctx->pc != 0x55DD38u) { return; }
    }
    ctx->pc = 0x55DD38u;
label_55dd38:
    // 0x55dd38: 0x8e260270  lw          $a2, 0x270($s1)
    ctx->pc = 0x55dd38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
label_55dd3c:
    // 0x55dd3c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x55dd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_55dd40:
    // 0x55dd40: 0xc04cca0  jal         func_133280
label_55dd44:
    if (ctx->pc == 0x55DD44u) {
        ctx->pc = 0x55DD44u;
            // 0x55dd44: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x55DD48u;
        goto label_55dd48;
    }
    ctx->pc = 0x55DD40u;
    SET_GPR_U32(ctx, 31, 0x55DD48u);
    ctx->pc = 0x55DD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DD40u;
            // 0x55dd44: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DD48u; }
        if (ctx->pc != 0x55DD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DD48u; }
        if (ctx->pc != 0x55DD48u) { return; }
    }
    ctx->pc = 0x55DD48u;
label_55dd48:
    // 0x55dd48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55dd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55dd4c:
    // 0x55dd4c: 0xc04cc04  jal         func_133010
label_55dd50:
    if (ctx->pc == 0x55DD50u) {
        ctx->pc = 0x55DD50u;
            // 0x55dd50: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x55DD54u;
        goto label_55dd54;
    }
    ctx->pc = 0x55DD4Cu;
    SET_GPR_U32(ctx, 31, 0x55DD54u);
    ctx->pc = 0x55DD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DD4Cu;
            // 0x55dd50: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DD54u; }
        if (ctx->pc != 0x55DD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DD54u; }
        if (ctx->pc != 0x55DD54u) { return; }
    }
    ctx->pc = 0x55DD54u;
label_55dd54:
    // 0x55dd54: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x55dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_55dd58:
    // 0x55dd58: 0x3c09447a  lui         $t1, 0x447A
    ctx->pc = 0x55dd58u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17530 << 16));
label_55dd5c:
    // 0x55dd5c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x55dd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_55dd60:
    // 0x55dd60: 0x3c0842f0  lui         $t0, 0x42F0
    ctx->pc = 0x55dd60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17136 << 16));
label_55dd64:
    // 0x55dd64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55dd64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55dd68:
    // 0x55dd68: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x55dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_55dd6c:
    // 0x55dd6c: 0xc6410de4  lwc1        $f1, 0xDE4($s2)
    ctx->pc = 0x55dd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55dd70:
    // 0x55dd70: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x55dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
label_55dd74:
    // 0x55dd74: 0x3447c28f  ori         $a3, $v0, 0xC28F
    ctx->pc = 0x55dd74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_55dd78:
    // 0x55dd78: 0x264505d0  addiu       $a1, $s2, 0x5D0
    ctx->pc = 0x55dd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1488));
label_55dd7c:
    // 0x55dd7c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55dd80:
    // 0x55dd80: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x55dd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_55dd84:
    // 0x55dd84: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x55dd84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_55dd88:
    // 0x55dd88: 0x8c468a08  lw          $a2, -0x75F8($v0)
    ctx->pc = 0x55dd88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_55dd8c:
    // 0x55dd8c: 0x265502e0  addiu       $s5, $s2, 0x2E0
    ctx->pc = 0x55dd8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
label_55dd90:
    // 0x55dd90: 0x26560390  addiu       $s6, $s2, 0x390
    ctx->pc = 0x55dd90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 912));
label_55dd94:
    // 0x55dd94: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x55dd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_55dd98:
    // 0x55dd98: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x55dd98u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55dd9c:
    // 0x55dd9c: 0x0  nop
    ctx->pc = 0x55dd9cu;
    // NOP
label_55dda0:
    // 0x55dda0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x55dda0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_55dda4:
    // 0x55dda4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x55dda4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55dda8:
    // 0x55dda8: 0x0  nop
    ctx->pc = 0x55dda8u;
    // NOP
label_55ddac:
    // 0x55ddac: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x55ddacu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_55ddb0:
    // 0x55ddb0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x55ddb0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55ddb4:
    // 0x55ddb4: 0x0  nop
    ctx->pc = 0x55ddb4u;
    // NOP
label_55ddb8:
    // 0x55ddb8: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x55ddb8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_55ddbc:
    // 0x55ddbc: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x55ddbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55ddc0:
    // 0x55ddc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55ddc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55ddc4:
    // 0x55ddc4: 0x0  nop
    ctx->pc = 0x55ddc4u;
    // NOP
label_55ddc8:
    // 0x55ddc8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x55ddc8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_55ddcc:
    // 0x55ddcc: 0xc04cc70  jal         func_1331C0
label_55ddd0:
    if (ctx->pc == 0x55DDD0u) {
        ctx->pc = 0x55DDD0u;
            // 0x55ddd0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x55DDD4u;
        goto label_55ddd4;
    }
    ctx->pc = 0x55DDCCu;
    SET_GPR_U32(ctx, 31, 0x55DDD4u);
    ctx->pc = 0x55DDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DDCCu;
            // 0x55ddd0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DDD4u; }
        if (ctx->pc != 0x55DDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DDD4u; }
        if (ctx->pc != 0x55DDD4u) { return; }
    }
    ctx->pc = 0x55DDD4u;
label_55ddd4:
    // 0x55ddd4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x55ddd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_55ddd8:
    // 0x55ddd8: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x55ddd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_55dddc:
    // 0x55dddc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x55dddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_55dde0:
    // 0x55dde0: 0xc04cc04  jal         func_133010
label_55dde4:
    if (ctx->pc == 0x55DDE4u) {
        ctx->pc = 0x55DDE4u;
            // 0x55dde4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55DDE8u;
        goto label_55dde8;
    }
    ctx->pc = 0x55DDE0u;
    SET_GPR_U32(ctx, 31, 0x55DDE8u);
    ctx->pc = 0x55DDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DDE0u;
            // 0x55dde4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DDE8u; }
        if (ctx->pc != 0x55DDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DDE8u; }
        if (ctx->pc != 0x55DDE8u) { return; }
    }
    ctx->pc = 0x55DDE8u;
label_55dde8:
    // 0x55dde8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x55dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_55ddec:
    // 0x55ddec: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x55ddecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_55ddf0:
    // 0x55ddf0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x55ddf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_55ddf4:
    // 0x55ddf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x55ddf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_55ddf8:
    // 0x55ddf8: 0xc04cc70  jal         func_1331C0
label_55ddfc:
    if (ctx->pc == 0x55DDFCu) {
        ctx->pc = 0x55DDFCu;
            // 0x55ddfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55DE00u;
        goto label_55de00;
    }
    ctx->pc = 0x55DDF8u;
    SET_GPR_U32(ctx, 31, 0x55DE00u);
    ctx->pc = 0x55DDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DDF8u;
            // 0x55ddfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DE00u; }
        if (ctx->pc != 0x55DE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DE00u; }
        if (ctx->pc != 0x55DE00u) { return; }
    }
    ctx->pc = 0x55DE00u;
label_55de00:
    // 0x55de00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55de00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55de04:
    // 0x55de04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55de04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55de08:
    // 0x55de08: 0xc04cbe0  jal         func_132F80
label_55de0c:
    if (ctx->pc == 0x55DE0Cu) {
        ctx->pc = 0x55DE0Cu;
            // 0x55de0c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x55DE10u;
        goto label_55de10;
    }
    ctx->pc = 0x55DE08u;
    SET_GPR_U32(ctx, 31, 0x55DE10u);
    ctx->pc = 0x55DE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DE08u;
            // 0x55de0c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DE10u; }
        if (ctx->pc != 0x55DE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DE10u; }
        if (ctx->pc != 0x55DE10u) { return; }
    }
    ctx->pc = 0x55DE10u;
label_55de10:
    // 0x55de10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55de10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55de14:
    // 0x55de14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55de14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55de18:
    // 0x55de18: 0xc04cbe0  jal         func_132F80
label_55de1c:
    if (ctx->pc == 0x55DE1Cu) {
        ctx->pc = 0x55DE1Cu;
            // 0x55de1c: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x55DE20u;
        goto label_55de20;
    }
    ctx->pc = 0x55DE18u;
    SET_GPR_U32(ctx, 31, 0x55DE20u);
    ctx->pc = 0x55DE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DE18u;
            // 0x55de1c: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DE20u; }
        if (ctx->pc != 0x55DE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DE20u; }
        if (ctx->pc != 0x55DE20u) { return; }
    }
    ctx->pc = 0x55DE20u;
label_55de20:
    // 0x55de20: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x55de20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_55de24:
    // 0x55de24: 0xc04cc04  jal         func_133010
label_55de28:
    if (ctx->pc == 0x55DE28u) {
        ctx->pc = 0x55DE28u;
            // 0x55de28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55DE2Cu;
        goto label_55de2c;
    }
    ctx->pc = 0x55DE24u;
    SET_GPR_U32(ctx, 31, 0x55DE2Cu);
    ctx->pc = 0x55DE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DE24u;
            // 0x55de28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DE2Cu; }
        if (ctx->pc != 0x55DE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DE2Cu; }
        if (ctx->pc != 0x55DE2Cu) { return; }
    }
    ctx->pc = 0x55DE2Cu;
label_55de2c:
    // 0x55de2c: 0x3c02be99  lui         $v0, 0xBE99
    ctx->pc = 0x55de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48793 << 16));
label_55de30:
    // 0x55de30: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x55de30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_55de34:
    // 0x55de34: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x55de34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_55de38:
    // 0x55de38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55de38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55de3c:
    // 0x55de3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x55de3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_55de40:
    // 0x55de40: 0xc04cc7c  jal         func_1331F0
label_55de44:
    if (ctx->pc == 0x55DE44u) {
        ctx->pc = 0x55DE44u;
            // 0x55de44: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55DE48u;
        goto label_55de48;
    }
    ctx->pc = 0x55DE40u;
    SET_GPR_U32(ctx, 31, 0x55DE48u);
    ctx->pc = 0x55DE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DE40u;
            // 0x55de44: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DE48u; }
        if (ctx->pc != 0x55DE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DE48u; }
        if (ctx->pc != 0x55DE48u) { return; }
    }
    ctx->pc = 0x55DE48u;
label_55de48:
    // 0x55de48: 0x1260005d  beqz        $s3, . + 4 + (0x5D << 2)
label_55de4c:
    if (ctx->pc == 0x55DE4Cu) {
        ctx->pc = 0x55DE50u;
        goto label_55de50;
    }
    ctx->pc = 0x55DE48u;
    {
        const bool branch_taken_0x55de48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x55de48) {
            ctx->pc = 0x55DFC0u;
            goto label_55dfc0;
        }
    }
    ctx->pc = 0x55DE50u;
label_55de50:
    // 0x55de50: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x55de50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_55de54:
    // 0x55de54: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x55de54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_55de58:
    // 0x55de58: 0xc04cc90  jal         func_133240
label_55de5c:
    if (ctx->pc == 0x55DE5Cu) {
        ctx->pc = 0x55DE5Cu;
            // 0x55de5c: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x55DE60u;
        goto label_55de60;
    }
    ctx->pc = 0x55DE58u;
    SET_GPR_U32(ctx, 31, 0x55DE60u);
    ctx->pc = 0x55DE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DE58u;
            // 0x55de5c: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DE60u; }
        if (ctx->pc != 0x55DE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DE60u; }
        if (ctx->pc != 0x55DE60u) { return; }
    }
    ctx->pc = 0x55DE60u;
label_55de60:
    // 0x55de60: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x55de60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_55de64:
    // 0x55de64: 0xc04cc08  jal         func_133020
label_55de68:
    if (ctx->pc == 0x55DE68u) {
        ctx->pc = 0x55DE68u;
            // 0x55de68: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55DE6Cu;
        goto label_55de6c;
    }
    ctx->pc = 0x55DE64u;
    SET_GPR_U32(ctx, 31, 0x55DE6Cu);
    ctx->pc = 0x55DE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DE64u;
            // 0x55de68: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DE6Cu; }
        if (ctx->pc != 0x55DE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DE6Cu; }
        if (ctx->pc != 0x55DE6Cu) { return; }
    }
    ctx->pc = 0x55DE6Cu;
label_55de6c:
    // 0x55de6c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x55de6cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_55de70:
    // 0x55de70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x55de70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55de74:
    // 0x55de74: 0x0  nop
    ctx->pc = 0x55de74u;
    // NOP
label_55de78:
    // 0x55de78: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x55de78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55de7c:
    // 0x55de7c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_55de80:
    if (ctx->pc == 0x55DE80u) {
        ctx->pc = 0x55DE84u;
        goto label_55de84;
    }
    ctx->pc = 0x55DE7Cu;
    {
        const bool branch_taken_0x55de7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x55de7c) {
            ctx->pc = 0x55DE90u;
            goto label_55de90;
        }
    }
    ctx->pc = 0x55DE84u;
label_55de84:
    // 0x55de84: 0x1000002c  b           . + 4 + (0x2C << 2)
label_55de88:
    if (ctx->pc == 0x55DE88u) {
        ctx->pc = 0x55DE88u;
            // 0x55de88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55DE8Cu;
        goto label_55de8c;
    }
    ctx->pc = 0x55DE84u;
    {
        const bool branch_taken_0x55de84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55DE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55DE84u;
            // 0x55de88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55de84) {
            ctx->pc = 0x55DF38u;
            goto label_55df38;
        }
    }
    ctx->pc = 0x55DE8Cu;
label_55de8c:
    // 0x55de8c: 0x0  nop
    ctx->pc = 0x55de8cu;
    // NOP
label_55de90:
    // 0x55de90: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x55de90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_55de94:
    // 0x55de94: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x55de94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_55de98:
    // 0x55de98: 0xc04cc90  jal         func_133240
label_55de9c:
    if (ctx->pc == 0x55DE9Cu) {
        ctx->pc = 0x55DE9Cu;
            // 0x55de9c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55DEA0u;
        goto label_55dea0;
    }
    ctx->pc = 0x55DE98u;
    SET_GPR_U32(ctx, 31, 0x55DEA0u);
    ctx->pc = 0x55DE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DE98u;
            // 0x55de9c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DEA0u; }
        if (ctx->pc != 0x55DEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DEA0u; }
        if (ctx->pc != 0x55DEA0u) { return; }
    }
    ctx->pc = 0x55DEA0u;
label_55dea0:
    // 0x55dea0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x55dea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_55dea4:
    // 0x55dea4: 0xc04cc08  jal         func_133020
label_55dea8:
    if (ctx->pc == 0x55DEA8u) {
        ctx->pc = 0x55DEA8u;
            // 0x55dea8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55DEACu;
        goto label_55deac;
    }
    ctx->pc = 0x55DEA4u;
    SET_GPR_U32(ctx, 31, 0x55DEACu);
    ctx->pc = 0x55DEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DEA4u;
            // 0x55dea8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DEACu; }
        if (ctx->pc != 0x55DEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DEACu; }
        if (ctx->pc != 0x55DEACu) { return; }
    }
    ctx->pc = 0x55DEACu;
label_55deac:
    // 0x55deac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x55deacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_55deb0:
    // 0x55deb0: 0x0  nop
    ctx->pc = 0x55deb0u;
    // NOP
label_55deb4:
    // 0x55deb4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x55deb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55deb8:
    // 0x55deb8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_55debc:
    if (ctx->pc == 0x55DEBCu) {
        ctx->pc = 0x55DEC0u;
        goto label_55dec0;
    }
    ctx->pc = 0x55DEB8u;
    {
        const bool branch_taken_0x55deb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x55deb8) {
            ctx->pc = 0x55DEC8u;
            goto label_55dec8;
        }
    }
    ctx->pc = 0x55DEC0u;
label_55dec0:
    // 0x55dec0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_55dec4:
    if (ctx->pc == 0x55DEC4u) {
        ctx->pc = 0x55DEC4u;
            // 0x55dec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55DEC8u;
        goto label_55dec8;
    }
    ctx->pc = 0x55DEC0u;
    {
        const bool branch_taken_0x55dec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55DEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55DEC0u;
            // 0x55dec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55dec0) {
            ctx->pc = 0x55DF38u;
            goto label_55df38;
        }
    }
    ctx->pc = 0x55DEC8u;
label_55dec8:
    // 0x55dec8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x55dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_55decc:
    // 0x55decc: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x55deccu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
label_55ded0:
    // 0x55ded0: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x55ded0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_55ded4:
    // 0x55ded4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55ded4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55ded8:
    // 0x55ded8: 0x0  nop
    ctx->pc = 0x55ded8u;
    // NOP
label_55dedc:
    // 0x55dedc: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x55dedcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55dee0:
    // 0x55dee0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_55dee4:
    if (ctx->pc == 0x55DEE4u) {
        ctx->pc = 0x55DEE4u;
            // 0x55dee4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55DEE8u;
        goto label_55dee8;
    }
    ctx->pc = 0x55DEE0u;
    {
        const bool branch_taken_0x55dee0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x55DEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55DEE0u;
            // 0x55dee4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55dee0) {
            ctx->pc = 0x55DEECu;
            goto label_55deec;
        }
    }
    ctx->pc = 0x55DEE8u;
label_55dee8:
    // 0x55dee8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x55dee8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55deec:
    // 0x55deec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x55deecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55def0:
    // 0x55def0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x55def0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_55def4:
    // 0x55def4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x55def4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55def8:
    // 0x55def8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_55defc:
    if (ctx->pc == 0x55DEFCu) {
        ctx->pc = 0x55DEFCu;
            // 0x55defc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55DF00u;
        goto label_55df00;
    }
    ctx->pc = 0x55DEF8u;
    {
        const bool branch_taken_0x55def8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x55DEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55DEF8u;
            // 0x55defc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55def8) {
            ctx->pc = 0x55DF04u;
            goto label_55df04;
        }
    }
    ctx->pc = 0x55DF00u;
label_55df00:
    // 0x55df00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x55df00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55df04:
    // 0x55df04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x55df04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_55df08:
    // 0x55df08: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x55df08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55df0c:
    // 0x55df0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_55df10:
    if (ctx->pc == 0x55DF10u) {
        ctx->pc = 0x55DF14u;
        goto label_55df14;
    }
    ctx->pc = 0x55DF0Cu;
    {
        const bool branch_taken_0x55df0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55df0c) {
            ctx->pc = 0x55DF20u;
            goto label_55df20;
        }
    }
    ctx->pc = 0x55DF14u;
label_55df14:
    // 0x55df14: 0x10000008  b           . + 4 + (0x8 << 2)
label_55df18:
    if (ctx->pc == 0x55DF18u) {
        ctx->pc = 0x55DF18u;
            // 0x55df18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55DF1Cu;
        goto label_55df1c;
    }
    ctx->pc = 0x55DF14u;
    {
        const bool branch_taken_0x55df14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55DF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55DF14u;
            // 0x55df18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55df14) {
            ctx->pc = 0x55DF38u;
            goto label_55df38;
        }
    }
    ctx->pc = 0x55DF1Cu;
label_55df1c:
    // 0x55df1c: 0x0  nop
    ctx->pc = 0x55df1cu;
    // NOP
label_55df20:
    // 0x55df20: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x55df20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_55df24:
    // 0x55df24: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x55df24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_55df28:
    // 0x55df28: 0xc04cc7c  jal         func_1331F0
label_55df2c:
    if (ctx->pc == 0x55DF2Cu) {
        ctx->pc = 0x55DF2Cu;
            // 0x55df2c: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x55DF30u;
        goto label_55df30;
    }
    ctx->pc = 0x55DF28u;
    SET_GPR_U32(ctx, 31, 0x55DF30u);
    ctx->pc = 0x55DF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DF28u;
            // 0x55df2c: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DF30u; }
        if (ctx->pc != 0x55DF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DF30u; }
        if (ctx->pc != 0x55DF30u) { return; }
    }
    ctx->pc = 0x55DF30u;
label_55df30:
    // 0x55df30: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x55df30u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_55df34:
    // 0x55df34: 0x0  nop
    ctx->pc = 0x55df34u;
    // NOP
label_55df38:
    // 0x55df38: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_55df3c:
    if (ctx->pc == 0x55DF3Cu) {
        ctx->pc = 0x55DF40u;
        goto label_55df40;
    }
    ctx->pc = 0x55DF38u;
    {
        const bool branch_taken_0x55df38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55df38) {
            ctx->pc = 0x55DFC0u;
            goto label_55dfc0;
        }
    }
    ctx->pc = 0x55DF40u;
label_55df40:
    // 0x55df40: 0xc04ab66  jal         func_12AD98
label_55df44:
    if (ctx->pc == 0x55DF44u) {
        ctx->pc = 0x55DF48u;
        goto label_55df48;
    }
    ctx->pc = 0x55DF40u;
    SET_GPR_U32(ctx, 31, 0x55DF48u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DF48u; }
        if (ctx->pc != 0x55DF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DF48u; }
        if (ctx->pc != 0x55DF48u) { return; }
    }
    ctx->pc = 0x55DF48u;
label_55df48:
    // 0x55df48: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x55df48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_55df4c:
    // 0x55df4c: 0xc04ab66  jal         func_12AD98
label_55df50:
    if (ctx->pc == 0x55DF50u) {
        ctx->pc = 0x55DF50u;
            // 0x55df50: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x55DF54u;
        goto label_55df54;
    }
    ctx->pc = 0x55DF4Cu;
    SET_GPR_U32(ctx, 31, 0x55DF54u);
    ctx->pc = 0x55DF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DF4Cu;
            // 0x55df50: 0x29740  sll         $s2, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DF54u; }
        if (ctx->pc != 0x55DF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DF54u; }
        if (ctx->pc != 0x55DF54u) { return; }
    }
    ctx->pc = 0x55DF54u;
label_55df54:
    // 0x55df54: 0x522025  or          $a0, $v0, $s2
    ctx->pc = 0x55df54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_55df58:
    // 0x55df58: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x55df58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_55df5c:
    // 0x55df5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x55df5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_55df60:
    // 0x55df60: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_55df64:
    if (ctx->pc == 0x55DF64u) {
        ctx->pc = 0x55DF64u;
            // 0x55df64: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x55DF68u;
        goto label_55df68;
    }
    ctx->pc = 0x55DF60u;
    {
        const bool branch_taken_0x55df60 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x55df60) {
            ctx->pc = 0x55DF64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55DF60u;
            // 0x55df64: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55DF74u;
            goto label_55df74;
        }
    }
    ctx->pc = 0x55DF68u;
label_55df68:
    // 0x55df68: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x55df68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55df6c:
    // 0x55df6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_55df70:
    if (ctx->pc == 0x55DF70u) {
        ctx->pc = 0x55DF70u;
            // 0x55df70: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x55DF74u;
        goto label_55df74;
    }
    ctx->pc = 0x55DF6Cu;
    {
        const bool branch_taken_0x55df6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55DF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55DF6Cu;
            // 0x55df70: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55df6c) {
            ctx->pc = 0x55DF8Cu;
            goto label_55df8c;
        }
    }
    ctx->pc = 0x55DF74u;
label_55df74:
    // 0x55df74: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x55df74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_55df78:
    // 0x55df78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x55df78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55df7c:
    // 0x55df7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55df7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55df80:
    // 0x55df80: 0x0  nop
    ctx->pc = 0x55df80u;
    // NOP
label_55df84:
    // 0x55df84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x55df84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_55df88:
    // 0x55df88: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x55df88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_55df8c:
    // 0x55df8c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x55df8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_55df90:
    // 0x55df90: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x55df90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_55df94:
    // 0x55df94: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x55df94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_55df98:
    // 0x55df98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55df98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55df9c:
    // 0x55df9c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x55df9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_55dfa0:
    // 0x55dfa0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x55dfa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_55dfa4:
    // 0x55dfa4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x55dfa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_55dfa8:
    // 0x55dfa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x55dfa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55dfac:
    // 0x55dfac: 0x0  nop
    ctx->pc = 0x55dfacu;
    // NOP
label_55dfb0:
    // 0x55dfb0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x55dfb0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_55dfb4:
    // 0x55dfb4: 0xc04cc7c  jal         func_1331F0
label_55dfb8:
    if (ctx->pc == 0x55DFB8u) {
        ctx->pc = 0x55DFB8u;
            // 0x55dfb8: 0x4602a31c  madd.s      $f12, $f20, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
        ctx->pc = 0x55DFBCu;
        goto label_55dfbc;
    }
    ctx->pc = 0x55DFB4u;
    SET_GPR_U32(ctx, 31, 0x55DFBCu);
    ctx->pc = 0x55DFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DFB4u;
            // 0x55dfb8: 0x4602a31c  madd.s      $f12, $f20, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DFBCu; }
        if (ctx->pc != 0x55DFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DFBCu; }
        if (ctx->pc != 0x55DFBCu) { return; }
    }
    ctx->pc = 0x55DFBCu;
label_55dfbc:
    // 0x55dfbc: 0x0  nop
    ctx->pc = 0x55dfbcu;
    // NOP
label_55dfc0:
    // 0x55dfc0: 0x2612ffd0  addiu       $s2, $s0, -0x30
    ctx->pc = 0x55dfc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
label_55dfc4:
    // 0x55dfc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55dfc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55dfc8:
    // 0x55dfc8: 0xc04cc1c  jal         func_133070
label_55dfcc:
    if (ctx->pc == 0x55DFCCu) {
        ctx->pc = 0x55DFCCu;
            // 0x55dfcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55DFD0u;
        goto label_55dfd0;
    }
    ctx->pc = 0x55DFC8u;
    SET_GPR_U32(ctx, 31, 0x55DFD0u);
    ctx->pc = 0x55DFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DFC8u;
            // 0x55dfcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DFD0u; }
        if (ctx->pc != 0x55DFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55DFD0u; }
        if (ctx->pc != 0x55DFD0u) { return; }
    }
    ctx->pc = 0x55DFD0u;
label_55dfd0:
    // 0x55dfd0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x55dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_55dfd4:
    // 0x55dfd4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x55dfd4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_55dfd8:
    // 0x55dfd8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x55dfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_55dfdc:
    // 0x55dfdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55dfdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55dfe0:
    // 0x55dfe0: 0x0  nop
    ctx->pc = 0x55dfe0u;
    // NOP
label_55dfe4:
    // 0x55dfe4: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x55dfe4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55dfe8:
    // 0x55dfe8: 0x45010015  bc1t        . + 4 + (0x15 << 2)
label_55dfec:
    if (ctx->pc == 0x55DFECu) {
        ctx->pc = 0x55DFF0u;
        goto label_55dff0;
    }
    ctx->pc = 0x55DFE8u;
    {
        const bool branch_taken_0x55dfe8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x55dfe8) {
            ctx->pc = 0x55E040u;
            goto label_55e040;
        }
    }
    ctx->pc = 0x55DFF0u;
label_55dff0:
    // 0x55dff0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x55dff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_55dff4:
    // 0x55dff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55dff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55dff8:
    // 0x55dff8: 0xc04cc90  jal         func_133240
label_55dffc:
    if (ctx->pc == 0x55DFFCu) {
        ctx->pc = 0x55DFFCu;
            // 0x55dffc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55E000u;
        goto label_55e000;
    }
    ctx->pc = 0x55DFF8u;
    SET_GPR_U32(ctx, 31, 0x55E000u);
    ctx->pc = 0x55DFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55DFF8u;
            // 0x55dffc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E000u; }
        if (ctx->pc != 0x55E000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E000u; }
        if (ctx->pc != 0x55E000u) { return; }
    }
    ctx->pc = 0x55E000u;
label_55e000:
    // 0x55e000: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x55e000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_55e004:
    // 0x55e004: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x55e004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_55e008:
    // 0x55e008: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x55e008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_55e00c:
    // 0x55e00c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x55e00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_55e010:
    // 0x55e010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55e010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55e014:
    // 0x55e014: 0x0  nop
    ctx->pc = 0x55e014u;
    // NOP
label_55e018:
    // 0x55e018: 0x46150303  div.s       $f12, $f0, $f21
    ctx->pc = 0x55e018u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[21];
label_55e01c:
    // 0x55e01c: 0x0  nop
    ctx->pc = 0x55e01cu;
    // NOP
label_55e020:
    // 0x55e020: 0x0  nop
    ctx->pc = 0x55e020u;
    // NOP
label_55e024:
    // 0x55e024: 0xc04cc70  jal         func_1331C0
label_55e028:
    if (ctx->pc == 0x55E028u) {
        ctx->pc = 0x55E02Cu;
        goto label_55e02c;
    }
    ctx->pc = 0x55E024u;
    SET_GPR_U32(ctx, 31, 0x55E02Cu);
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E02Cu; }
        if (ctx->pc != 0x55E02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E02Cu; }
        if (ctx->pc != 0x55E02Cu) { return; }
    }
    ctx->pc = 0x55E02Cu;
label_55e02c:
    // 0x55e02c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55e02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55e030:
    // 0x55e030: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x55e030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_55e034:
    // 0x55e034: 0xc04cbe0  jal         func_132F80
label_55e038:
    if (ctx->pc == 0x55E038u) {
        ctx->pc = 0x55E038u;
            // 0x55e038: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55E03Cu;
        goto label_55e03c;
    }
    ctx->pc = 0x55E034u;
    SET_GPR_U32(ctx, 31, 0x55E03Cu);
    ctx->pc = 0x55E038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E034u;
            // 0x55e038: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E03Cu; }
        if (ctx->pc != 0x55E03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E03Cu; }
        if (ctx->pc != 0x55E03Cu) { return; }
    }
    ctx->pc = 0x55E03Cu;
label_55e03c:
    // 0x55e03c: 0x0  nop
    ctx->pc = 0x55e03cu;
    // NOP
label_55e040:
    // 0x55e040: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x55e040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55e044:
    // 0x55e044: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x55e044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_55e048:
    // 0x55e048: 0xc04cc90  jal         func_133240
label_55e04c:
    if (ctx->pc == 0x55E04Cu) {
        ctx->pc = 0x55E04Cu;
            // 0x55e04c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55E050u;
        goto label_55e050;
    }
    ctx->pc = 0x55E048u;
    SET_GPR_U32(ctx, 31, 0x55E050u);
    ctx->pc = 0x55E04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E048u;
            // 0x55e04c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E050u; }
        if (ctx->pc != 0x55E050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E050u; }
        if (ctx->pc != 0x55E050u) { return; }
    }
    ctx->pc = 0x55E050u;
label_55e050:
    // 0x55e050: 0xc7ad00d8  lwc1        $f13, 0xD8($sp)
    ctx->pc = 0x55e050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_55e054:
    // 0x55e054: 0xc04780a  jal         func_11E028
label_55e058:
    if (ctx->pc == 0x55E058u) {
        ctx->pc = 0x55E058u;
            // 0x55e058: 0xc7ac00d0  lwc1        $f12, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x55E05Cu;
        goto label_55e05c;
    }
    ctx->pc = 0x55E054u;
    SET_GPR_U32(ctx, 31, 0x55E05Cu);
    ctx->pc = 0x55E058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E054u;
            // 0x55e058: 0xc7ac00d0  lwc1        $f12, 0xD0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E05Cu; }
        if (ctx->pc != 0x55E05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E05Cu; }
        if (ctx->pc != 0x55E05Cu) { return; }
    }
    ctx->pc = 0x55E05Cu;
label_55e05c:
    // 0x55e05c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x55e05cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_55e060:
    // 0x55e060: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x55e060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55e064:
    // 0x55e064: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x55e064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55e068:
    // 0x55e068: 0xc7ac00d4  lwc1        $f12, 0xD4($sp)
    ctx->pc = 0x55e068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_55e06c:
    // 0x55e06c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x55e06cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_55e070:
    // 0x55e070: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x55e070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_55e074:
    // 0x55e074: 0x46000344  c1          0x344
    ctx->pc = 0x55e074u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_55e078:
    // 0x55e078: 0x0  nop
    ctx->pc = 0x55e078u;
    // NOP
label_55e07c:
    // 0x55e07c: 0x0  nop
    ctx->pc = 0x55e07cu;
    // NOP
label_55e080:
    // 0x55e080: 0xc04780a  jal         func_11E028
label_55e084:
    if (ctx->pc == 0x55E084u) {
        ctx->pc = 0x55E088u;
        goto label_55e088;
    }
    ctx->pc = 0x55E080u;
    SET_GPR_U32(ctx, 31, 0x55E088u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E088u; }
        if (ctx->pc != 0x55E088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E088u; }
        if (ctx->pc != 0x55E088u) { return; }
    }
    ctx->pc = 0x55E088u;
label_55e088:
    // 0x55e088: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x55e088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_55e08c:
    // 0x55e08c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x55e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_55e090:
    // 0x55e090: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x55e090u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_55e094:
    // 0x55e094: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x55e094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_55e098:
    // 0x55e098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55e098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55e09c:
    // 0x55e09c: 0x0  nop
    ctx->pc = 0x55e09cu;
    // NOP
label_55e0a0:
    // 0x55e0a0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x55e0a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_55e0a4:
    // 0x55e0a4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x55e0a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_55e0a8:
    // 0x55e0a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55e0a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_55e0ac:
    // 0x55e0ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55e0acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_55e0b0:
    // 0x55e0b0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x55e0b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_55e0b4:
    // 0x55e0b4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x55e0b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_55e0b8:
    // 0x55e0b8: 0xc04cab0  jal         func_132AC0
label_55e0bc:
    if (ctx->pc == 0x55E0BCu) {
        ctx->pc = 0x55E0BCu;
            // 0x55e0bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55E0C0u;
        goto label_55e0c0;
    }
    ctx->pc = 0x55E0B8u;
    SET_GPR_U32(ctx, 31, 0x55E0C0u);
    ctx->pc = 0x55E0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E0B8u;
            // 0x55e0bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E0C0u; }
        if (ctx->pc != 0x55E0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E0C0u; }
        if (ctx->pc != 0x55E0C0u) { return; }
    }
    ctx->pc = 0x55E0C0u;
label_55e0c0:
    // 0x55e0c0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x55e0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_55e0c4:
    // 0x55e0c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55e0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55e0c8:
    // 0x55e0c8: 0xc04cc90  jal         func_133240
label_55e0cc:
    if (ctx->pc == 0x55E0CCu) {
        ctx->pc = 0x55E0CCu;
            // 0x55e0cc: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x55E0D0u;
        goto label_55e0d0;
    }
    ctx->pc = 0x55E0C8u;
    SET_GPR_U32(ctx, 31, 0x55E0D0u);
    ctx->pc = 0x55E0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E0C8u;
            // 0x55e0cc: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E0D0u; }
        if (ctx->pc != 0x55E0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E0D0u; }
        if (ctx->pc != 0x55E0D0u) { return; }
    }
    ctx->pc = 0x55E0D0u;
label_55e0d0:
    // 0x55e0d0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x55e0d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_55e0d4:
    // 0x55e0d4: 0x1680ff41  bnez        $s4, . + 4 + (-0xBF << 2)
label_55e0d8:
    if (ctx->pc == 0x55E0D8u) {
        ctx->pc = 0x55E0D8u;
            // 0x55e0d8: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x55E0DCu;
        goto label_55e0dc;
    }
    ctx->pc = 0x55E0D4u;
    {
        const bool branch_taken_0x55e0d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x55E0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55E0D4u;
            // 0x55e0d8: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55e0d4) {
            ctx->pc = 0x55DDDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55dddc;
        }
    }
    ctx->pc = 0x55E0DCu;
label_55e0dc:
    // 0x55e0dc: 0x0  nop
    ctx->pc = 0x55e0dcu;
    // NOP
label_55e0e0:
    // 0x55e0e0: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x55e0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_55e0e4:
    // 0x55e0e4: 0x5860006d  blezl       $v1, . + 4 + (0x6D << 2)
label_55e0e8:
    if (ctx->pc == 0x55E0E8u) {
        ctx->pc = 0x55E0E8u;
            // 0x55e0e8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x55E0ECu;
        goto label_55e0ec;
    }
    ctx->pc = 0x55E0E4u;
    {
        const bool branch_taken_0x55e0e4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x55e0e4) {
            ctx->pc = 0x55E0E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55E0E4u;
            // 0x55e0e8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55E29Cu;
            goto label_55e29c;
        }
    }
    ctx->pc = 0x55E0ECu;
label_55e0ec:
    // 0x55e0ec: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x55e0ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_55e0f0:
    // 0x55e0f0: 0x10200069  beqz        $at, . + 4 + (0x69 << 2)
label_55e0f4:
    if (ctx->pc == 0x55E0F4u) {
        ctx->pc = 0x55E0F8u;
        goto label_55e0f8;
    }
    ctx->pc = 0x55E0F0u;
    {
        const bool branch_taken_0x55e0f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x55e0f0) {
            ctx->pc = 0x55E298u;
            goto label_55e298;
        }
    }
    ctx->pc = 0x55E0F8u;
label_55e0f8:
    // 0x55e0f8: 0x8e300054  lw          $s0, 0x54($s1)
    ctx->pc = 0x55e0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_55e0fc:
    // 0x55e0fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x55e0fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55e100:
    // 0x55e100: 0xc6010df4  lwc1        $f1, 0xDF4($s0)
    ctx->pc = 0x55e100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55e104:
    // 0x55e104: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x55e104u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55e108:
    // 0x55e108: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_55e10c:
    if (ctx->pc == 0x55E10Cu) {
        ctx->pc = 0x55E10Cu;
            // 0x55e10c: 0xc6010de0  lwc1        $f1, 0xDE0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x55E110u;
        goto label_55e110;
    }
    ctx->pc = 0x55E108u;
    {
        const bool branch_taken_0x55e108 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x55e108) {
            ctx->pc = 0x55E10Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55E108u;
            // 0x55e10c: 0xc6010de0  lwc1        $f1, 0xDE0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x55E110u;
            goto label_55e110;
        }
    }
    ctx->pc = 0x55E110u;
label_55e110:
    // 0x55e110: 0x3c033f3d  lui         $v1, 0x3F3D
    ctx->pc = 0x55e110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16189 << 16));
label_55e114:
    // 0x55e114: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x55e114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
label_55e118:
    // 0x55e118: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55e118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55e11c:
    // 0x55e11c: 0x0  nop
    ctx->pc = 0x55e11cu;
    // NOP
label_55e120:
    // 0x55e120: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x55e120u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_55e124:
    // 0x55e124: 0xe621027c  swc1        $f1, 0x27C($s1)
    ctx->pc = 0x55e124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 636), bits); }
label_55e128:
    // 0x55e128: 0xc6010de4  lwc1        $f1, 0xDE4($s0)
    ctx->pc = 0x55e128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55e12c:
    // 0x55e12c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x55e12cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55e130:
    // 0x55e130: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
label_55e134:
    if (ctx->pc == 0x55E134u) {
        ctx->pc = 0x55E134u;
            // 0x55e134: 0xc6200058  lwc1        $f0, 0x58($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x55E138u;
        goto label_55e138;
    }
    ctx->pc = 0x55E130u;
    {
        const bool branch_taken_0x55e130 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x55e130) {
            ctx->pc = 0x55E134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55E130u;
            // 0x55e134: 0xc6200058  lwc1        $f0, 0x58($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x55E164u;
            goto label_55e164;
        }
    }
    ctx->pc = 0x55E138u;
label_55e138:
    // 0x55e138: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x55e138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_55e13c:
    // 0x55e13c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x55e13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_55e140:
    // 0x55e140: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_55e144:
    if (ctx->pc == 0x55E144u) {
        ctx->pc = 0x55E148u;
        goto label_55e148;
    }
    ctx->pc = 0x55E140u;
    {
        const bool branch_taken_0x55e140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x55e140) {
            ctx->pc = 0x55E160u;
            goto label_55e160;
        }
    }
    ctx->pc = 0x55E148u;
label_55e148:
    // 0x55e148: 0x3c033b97  lui         $v1, 0x3B97
    ctx->pc = 0x55e148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15255 << 16));
label_55e14c:
    // 0x55e14c: 0x3463b426  ori         $v1, $v1, 0xB426
    ctx->pc = 0x55e14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46118);
label_55e150:
    // 0x55e150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55e150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55e154:
    // 0x55e154: 0x0  nop
    ctx->pc = 0x55e154u;
    // NOP
label_55e158:
    // 0x55e158: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x55e158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_55e15c:
    // 0x55e15c: 0xe6000de4  swc1        $f0, 0xDE4($s0)
    ctx->pc = 0x55e15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3556), bits); }
label_55e160:
    // 0x55e160: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x55e160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55e164:
    // 0x55e164: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x55e164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55e168:
    // 0x55e168: 0x0  nop
    ctx->pc = 0x55e168u;
    // NOP
label_55e16c:
    // 0x55e16c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x55e16cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55e170:
    // 0x55e170: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_55e174:
    if (ctx->pc == 0x55E174u) {
        ctx->pc = 0x55E174u;
            // 0x55e174: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->pc = 0x55E178u;
        goto label_55e178;
    }
    ctx->pc = 0x55E170u;
    {
        const bool branch_taken_0x55e170 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x55E174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55E170u;
            // 0x55e174: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55e170) {
            ctx->pc = 0x55E1A0u;
            goto label_55e1a0;
        }
    }
    ctx->pc = 0x55E178u;
label_55e178:
    // 0x55e178: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x55e178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_55e17c:
    // 0x55e17c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x55e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_55e180:
    // 0x55e180: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x55e180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55e184:
    // 0x55e184: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x55e184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55e188:
    // 0x55e188: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x55e188u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_55e18c:
    // 0x55e18c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x55e18cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55e190:
    // 0x55e190: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_55e194:
    if (ctx->pc == 0x55E194u) {
        ctx->pc = 0x55E194u;
            // 0x55e194: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x55E198u;
        goto label_55e198;
    }
    ctx->pc = 0x55E190u;
    {
        const bool branch_taken_0x55e190 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x55E194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55E190u;
            // 0x55e194: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55e190) {
            ctx->pc = 0x55E1B4u;
            goto label_55e1b4;
        }
    }
    ctx->pc = 0x55E198u;
label_55e198:
    // 0x55e198: 0x10000006  b           . + 4 + (0x6 << 2)
label_55e19c:
    if (ctx->pc == 0x55E19Cu) {
        ctx->pc = 0x55E19Cu;
            // 0x55e19c: 0xe4820000  swc1        $f2, 0x0($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x55E1A0u;
        goto label_55e1a0;
    }
    ctx->pc = 0x55E198u;
    {
        const bool branch_taken_0x55e198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55E19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55E198u;
            // 0x55e19c: 0xe4820000  swc1        $f2, 0x0($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55e198) {
            ctx->pc = 0x55E1B4u;
            goto label_55e1b4;
        }
    }
    ctx->pc = 0x55E1A0u;
label_55e1a0:
    // 0x55e1a0: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x55e1a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55e1a4:
    // 0x55e1a4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_55e1a8:
    if (ctx->pc == 0x55E1A8u) {
        ctx->pc = 0x55E1A8u;
            // 0x55e1a8: 0xc4810000  lwc1        $f1, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x55E1ACu;
        goto label_55e1ac;
    }
    ctx->pc = 0x55E1A4u;
    {
        const bool branch_taken_0x55e1a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x55e1a4) {
            ctx->pc = 0x55E1A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55E1A4u;
            // 0x55e1a8: 0xc4810000  lwc1        $f1, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x55E1B8u;
            goto label_55e1b8;
        }
    }
    ctx->pc = 0x55E1ACu;
label_55e1ac:
    // 0x55e1ac: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x55e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_55e1b0:
    // 0x55e1b0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x55e1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_55e1b4:
    // 0x55e1b4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x55e1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55e1b8:
    // 0x55e1b8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x55e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_55e1bc:
    // 0x55e1bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55e1bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55e1c0:
    // 0x55e1c0: 0x0  nop
    ctx->pc = 0x55e1c0u;
    // NOP
label_55e1c4:
    // 0x55e1c4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x55e1c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55e1c8:
    // 0x55e1c8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_55e1cc:
    if (ctx->pc == 0x55E1CCu) {
        ctx->pc = 0x55E1CCu;
            // 0x55e1cc: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x55E1D0u;
        goto label_55e1d0;
    }
    ctx->pc = 0x55E1C8u;
    {
        const bool branch_taken_0x55e1c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x55E1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55E1C8u;
            // 0x55e1cc: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55e1c8) {
            ctx->pc = 0x55E1E8u;
            goto label_55e1e8;
        }
    }
    ctx->pc = 0x55E1D0u;
label_55e1d0:
    // 0x55e1d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x55e1d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55e1d4:
    // 0x55e1d4: 0x0  nop
    ctx->pc = 0x55e1d4u;
    // NOP
label_55e1d8:
    // 0x55e1d8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x55e1d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55e1dc:
    // 0x55e1dc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_55e1e0:
    if (ctx->pc == 0x55E1E0u) {
        ctx->pc = 0x55E1E4u;
        goto label_55e1e4;
    }
    ctx->pc = 0x55E1DCu;
    {
        const bool branch_taken_0x55e1dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x55e1dc) {
            ctx->pc = 0x55E1E8u;
            goto label_55e1e8;
        }
    }
    ctx->pc = 0x55E1E4u;
label_55e1e4:
    // 0x55e1e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x55e1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55e1e8:
    // 0x55e1e8: 0x54800019  bnel        $a0, $zero, . + 4 + (0x19 << 2)
label_55e1ec:
    if (ctx->pc == 0x55E1ECu) {
        ctx->pc = 0x55E1ECu;
            // 0x55e1ec: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->pc = 0x55E1F0u;
        goto label_55e1f0;
    }
    ctx->pc = 0x55E1E8u;
    {
        const bool branch_taken_0x55e1e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x55e1e8) {
            ctx->pc = 0x55E1ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55E1E8u;
            // 0x55e1ec: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55E250u;
            goto label_55e250;
        }
    }
    ctx->pc = 0x55E1F0u;
label_55e1f0:
    // 0x55e1f0: 0x8e260054  lw          $a2, 0x54($s1)
    ctx->pc = 0x55e1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_55e1f4:
    // 0x55e1f4: 0x8cc40db0  lw          $a0, 0xDB0($a2)
    ctx->pc = 0x55e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3504)));
label_55e1f8:
    // 0x55e1f8: 0x2c810020  sltiu       $at, $a0, 0x20
    ctx->pc = 0x55e1f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_55e1fc:
    // 0x55e1fc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_55e200:
    if (ctx->pc == 0x55E200u) {
        ctx->pc = 0x55E200u;
            // 0x55e200: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55E204u;
        goto label_55e204;
    }
    ctx->pc = 0x55E1FCu;
    {
        const bool branch_taken_0x55e1fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x55E200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55E1FCu;
            // 0x55e200: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55e1fc) {
            ctx->pc = 0x55E224u;
            goto label_55e224;
        }
    }
    ctx->pc = 0x55E204u;
label_55e204:
    // 0x55e204: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x55e204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55e208:
    // 0x55e208: 0x3c038c1f  lui         $v1, 0x8C1F
    ctx->pc = 0x55e208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35871 << 16));
label_55e20c:
    // 0x55e20c: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x55e20cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_55e210:
    // 0x55e210: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x55e210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_55e214:
    // 0x55e214: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x55e214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_55e218:
    // 0x55e218: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_55e21c:
    if (ctx->pc == 0x55E21Cu) {
        ctx->pc = 0x55E21Cu;
            // 0x55e21c: 0x90c311ac  lbu         $v1, 0x11AC($a2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4524)));
        ctx->pc = 0x55E220u;
        goto label_55e220;
    }
    ctx->pc = 0x55E218u;
    {
        const bool branch_taken_0x55e218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x55e218) {
            ctx->pc = 0x55E21Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55E218u;
            // 0x55e21c: 0x90c311ac  lbu         $v1, 0x11AC($a2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4524)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55E228u;
            goto label_55e228;
        }
    }
    ctx->pc = 0x55E220u;
label_55e220:
    // 0x55e220: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x55e220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_55e224:
    // 0x55e224: 0x90c311ac  lbu         $v1, 0x11AC($a2)
    ctx->pc = 0x55e224u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4524)));
label_55e228:
    // 0x55e228: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x55e228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_55e22c:
    // 0x55e22c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x55e22cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_55e230:
    // 0x55e230: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x55e230u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_55e234:
    // 0x55e234: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x55e234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_55e238:
    // 0x55e238: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x55e238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_55e23c:
    // 0x55e23c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x55e23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_55e240:
    // 0x55e240: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x55e240u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_55e244:
    // 0x55e244: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_55e248:
    if (ctx->pc == 0x55E248u) {
        ctx->pc = 0x55E24Cu;
        goto label_55e24c;
    }
    ctx->pc = 0x55E244u;
    {
        const bool branch_taken_0x55e244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x55e244) {
            ctx->pc = 0x55E298u;
            goto label_55e298;
        }
    }
    ctx->pc = 0x55E24Cu;
label_55e24c:
    // 0x55e24c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x55e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_55e250:
    // 0x55e250: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_55e254:
    if (ctx->pc == 0x55E254u) {
        ctx->pc = 0x55E254u;
            // 0x55e254: 0xae200054  sw          $zero, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x55E258u;
        goto label_55e258;
    }
    ctx->pc = 0x55E250u;
    {
        const bool branch_taken_0x55e250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55e250) {
            ctx->pc = 0x55E254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55E250u;
            // 0x55e254: 0xae200054  sw          $zero, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55E274u;
            goto label_55e274;
        }
    }
    ctx->pc = 0x55E258u;
label_55e258:
    // 0x55e258: 0x8c440d60  lw          $a0, 0xD60($v0)
    ctx->pc = 0x55e258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
label_55e25c:
    // 0x55e25c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x55e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_55e260:
    // 0x55e260: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x55e260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
label_55e264:
    // 0x55e264: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x55e264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_55e268:
    // 0x55e268: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x55e268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_55e26c:
    // 0x55e26c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x55e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_55e270:
    // 0x55e270: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x55e270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_55e274:
    // 0x55e274: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x55e274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_55e278:
    // 0x55e278: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x55e278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_55e27c:
    // 0x55e27c: 0x320f809  jalr        $t9
label_55e280:
    if (ctx->pc == 0x55E280u) {
        ctx->pc = 0x55E280u;
            // 0x55e280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55E284u;
        goto label_55e284;
    }
    ctx->pc = 0x55E27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55E284u);
        ctx->pc = 0x55E280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55E27Cu;
            // 0x55e280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55E284u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55E284u; }
            if (ctx->pc != 0x55E284u) { return; }
        }
        }
    }
    ctx->pc = 0x55E284u;
label_55e284:
    // 0x55e284: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x55e284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_55e288:
    // 0x55e288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x55e288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55e28c:
    // 0x55e28c: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x55e28cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_55e290:
    // 0x55e290: 0xc077fb0  jal         func_1DFEC0
label_55e294:
    if (ctx->pc == 0x55E294u) {
        ctx->pc = 0x55E294u;
            // 0x55e294: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x55E298u;
        goto label_55e298;
    }
    ctx->pc = 0x55E290u;
    SET_GPR_U32(ctx, 31, 0x55E298u);
    ctx->pc = 0x55E294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55E290u;
            // 0x55e294: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E298u; }
        if (ctx->pc != 0x55E298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55E298u; }
        if (ctx->pc != 0x55E298u) { return; }
    }
    ctx->pc = 0x55E298u;
label_55e298:
    // 0x55e298: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x55e298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_55e29c:
    // 0x55e29c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x55e29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_55e2a0:
    // 0x55e2a0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x55e2a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_55e2a4:
    // 0x55e2a4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x55e2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55e2a8:
    // 0x55e2a8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x55e2a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_55e2ac:
    // 0x55e2ac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x55e2acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_55e2b0:
    // 0x55e2b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x55e2b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55e2b4:
    // 0x55e2b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x55e2b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55e2b8:
    // 0x55e2b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x55e2b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55e2bc:
    // 0x55e2bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x55e2bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55e2c0:
    // 0x55e2c0: 0x3e00008  jr          $ra
label_55e2c4:
    if (ctx->pc == 0x55E2C4u) {
        ctx->pc = 0x55E2C4u;
            // 0x55e2c4: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x55E2C8u;
        goto label_55e2c8;
    }
    ctx->pc = 0x55E2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55E2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55E2C0u;
            // 0x55e2c4: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55E2C8u;
label_55e2c8:
    // 0x55e2c8: 0x0  nop
    ctx->pc = 0x55e2c8u;
    // NOP
label_55e2cc:
    // 0x55e2cc: 0x0  nop
    ctx->pc = 0x55e2ccu;
    // NOP
}
