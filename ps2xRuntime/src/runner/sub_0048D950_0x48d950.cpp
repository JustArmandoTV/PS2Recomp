#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048D950
// Address: 0x48d950 - 0x48e120
void sub_0048D950_0x48d950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048D950_0x48d950");
#endif

    switch (ctx->pc) {
        case 0x48d950u: goto label_48d950;
        case 0x48d954u: goto label_48d954;
        case 0x48d958u: goto label_48d958;
        case 0x48d95cu: goto label_48d95c;
        case 0x48d960u: goto label_48d960;
        case 0x48d964u: goto label_48d964;
        case 0x48d968u: goto label_48d968;
        case 0x48d96cu: goto label_48d96c;
        case 0x48d970u: goto label_48d970;
        case 0x48d974u: goto label_48d974;
        case 0x48d978u: goto label_48d978;
        case 0x48d97cu: goto label_48d97c;
        case 0x48d980u: goto label_48d980;
        case 0x48d984u: goto label_48d984;
        case 0x48d988u: goto label_48d988;
        case 0x48d98cu: goto label_48d98c;
        case 0x48d990u: goto label_48d990;
        case 0x48d994u: goto label_48d994;
        case 0x48d998u: goto label_48d998;
        case 0x48d99cu: goto label_48d99c;
        case 0x48d9a0u: goto label_48d9a0;
        case 0x48d9a4u: goto label_48d9a4;
        case 0x48d9a8u: goto label_48d9a8;
        case 0x48d9acu: goto label_48d9ac;
        case 0x48d9b0u: goto label_48d9b0;
        case 0x48d9b4u: goto label_48d9b4;
        case 0x48d9b8u: goto label_48d9b8;
        case 0x48d9bcu: goto label_48d9bc;
        case 0x48d9c0u: goto label_48d9c0;
        case 0x48d9c4u: goto label_48d9c4;
        case 0x48d9c8u: goto label_48d9c8;
        case 0x48d9ccu: goto label_48d9cc;
        case 0x48d9d0u: goto label_48d9d0;
        case 0x48d9d4u: goto label_48d9d4;
        case 0x48d9d8u: goto label_48d9d8;
        case 0x48d9dcu: goto label_48d9dc;
        case 0x48d9e0u: goto label_48d9e0;
        case 0x48d9e4u: goto label_48d9e4;
        case 0x48d9e8u: goto label_48d9e8;
        case 0x48d9ecu: goto label_48d9ec;
        case 0x48d9f0u: goto label_48d9f0;
        case 0x48d9f4u: goto label_48d9f4;
        case 0x48d9f8u: goto label_48d9f8;
        case 0x48d9fcu: goto label_48d9fc;
        case 0x48da00u: goto label_48da00;
        case 0x48da04u: goto label_48da04;
        case 0x48da08u: goto label_48da08;
        case 0x48da0cu: goto label_48da0c;
        case 0x48da10u: goto label_48da10;
        case 0x48da14u: goto label_48da14;
        case 0x48da18u: goto label_48da18;
        case 0x48da1cu: goto label_48da1c;
        case 0x48da20u: goto label_48da20;
        case 0x48da24u: goto label_48da24;
        case 0x48da28u: goto label_48da28;
        case 0x48da2cu: goto label_48da2c;
        case 0x48da30u: goto label_48da30;
        case 0x48da34u: goto label_48da34;
        case 0x48da38u: goto label_48da38;
        case 0x48da3cu: goto label_48da3c;
        case 0x48da40u: goto label_48da40;
        case 0x48da44u: goto label_48da44;
        case 0x48da48u: goto label_48da48;
        case 0x48da4cu: goto label_48da4c;
        case 0x48da50u: goto label_48da50;
        case 0x48da54u: goto label_48da54;
        case 0x48da58u: goto label_48da58;
        case 0x48da5cu: goto label_48da5c;
        case 0x48da60u: goto label_48da60;
        case 0x48da64u: goto label_48da64;
        case 0x48da68u: goto label_48da68;
        case 0x48da6cu: goto label_48da6c;
        case 0x48da70u: goto label_48da70;
        case 0x48da74u: goto label_48da74;
        case 0x48da78u: goto label_48da78;
        case 0x48da7cu: goto label_48da7c;
        case 0x48da80u: goto label_48da80;
        case 0x48da84u: goto label_48da84;
        case 0x48da88u: goto label_48da88;
        case 0x48da8cu: goto label_48da8c;
        case 0x48da90u: goto label_48da90;
        case 0x48da94u: goto label_48da94;
        case 0x48da98u: goto label_48da98;
        case 0x48da9cu: goto label_48da9c;
        case 0x48daa0u: goto label_48daa0;
        case 0x48daa4u: goto label_48daa4;
        case 0x48daa8u: goto label_48daa8;
        case 0x48daacu: goto label_48daac;
        case 0x48dab0u: goto label_48dab0;
        case 0x48dab4u: goto label_48dab4;
        case 0x48dab8u: goto label_48dab8;
        case 0x48dabcu: goto label_48dabc;
        case 0x48dac0u: goto label_48dac0;
        case 0x48dac4u: goto label_48dac4;
        case 0x48dac8u: goto label_48dac8;
        case 0x48daccu: goto label_48dacc;
        case 0x48dad0u: goto label_48dad0;
        case 0x48dad4u: goto label_48dad4;
        case 0x48dad8u: goto label_48dad8;
        case 0x48dadcu: goto label_48dadc;
        case 0x48dae0u: goto label_48dae0;
        case 0x48dae4u: goto label_48dae4;
        case 0x48dae8u: goto label_48dae8;
        case 0x48daecu: goto label_48daec;
        case 0x48daf0u: goto label_48daf0;
        case 0x48daf4u: goto label_48daf4;
        case 0x48daf8u: goto label_48daf8;
        case 0x48dafcu: goto label_48dafc;
        case 0x48db00u: goto label_48db00;
        case 0x48db04u: goto label_48db04;
        case 0x48db08u: goto label_48db08;
        case 0x48db0cu: goto label_48db0c;
        case 0x48db10u: goto label_48db10;
        case 0x48db14u: goto label_48db14;
        case 0x48db18u: goto label_48db18;
        case 0x48db1cu: goto label_48db1c;
        case 0x48db20u: goto label_48db20;
        case 0x48db24u: goto label_48db24;
        case 0x48db28u: goto label_48db28;
        case 0x48db2cu: goto label_48db2c;
        case 0x48db30u: goto label_48db30;
        case 0x48db34u: goto label_48db34;
        case 0x48db38u: goto label_48db38;
        case 0x48db3cu: goto label_48db3c;
        case 0x48db40u: goto label_48db40;
        case 0x48db44u: goto label_48db44;
        case 0x48db48u: goto label_48db48;
        case 0x48db4cu: goto label_48db4c;
        case 0x48db50u: goto label_48db50;
        case 0x48db54u: goto label_48db54;
        case 0x48db58u: goto label_48db58;
        case 0x48db5cu: goto label_48db5c;
        case 0x48db60u: goto label_48db60;
        case 0x48db64u: goto label_48db64;
        case 0x48db68u: goto label_48db68;
        case 0x48db6cu: goto label_48db6c;
        case 0x48db70u: goto label_48db70;
        case 0x48db74u: goto label_48db74;
        case 0x48db78u: goto label_48db78;
        case 0x48db7cu: goto label_48db7c;
        case 0x48db80u: goto label_48db80;
        case 0x48db84u: goto label_48db84;
        case 0x48db88u: goto label_48db88;
        case 0x48db8cu: goto label_48db8c;
        case 0x48db90u: goto label_48db90;
        case 0x48db94u: goto label_48db94;
        case 0x48db98u: goto label_48db98;
        case 0x48db9cu: goto label_48db9c;
        case 0x48dba0u: goto label_48dba0;
        case 0x48dba4u: goto label_48dba4;
        case 0x48dba8u: goto label_48dba8;
        case 0x48dbacu: goto label_48dbac;
        case 0x48dbb0u: goto label_48dbb0;
        case 0x48dbb4u: goto label_48dbb4;
        case 0x48dbb8u: goto label_48dbb8;
        case 0x48dbbcu: goto label_48dbbc;
        case 0x48dbc0u: goto label_48dbc0;
        case 0x48dbc4u: goto label_48dbc4;
        case 0x48dbc8u: goto label_48dbc8;
        case 0x48dbccu: goto label_48dbcc;
        case 0x48dbd0u: goto label_48dbd0;
        case 0x48dbd4u: goto label_48dbd4;
        case 0x48dbd8u: goto label_48dbd8;
        case 0x48dbdcu: goto label_48dbdc;
        case 0x48dbe0u: goto label_48dbe0;
        case 0x48dbe4u: goto label_48dbe4;
        case 0x48dbe8u: goto label_48dbe8;
        case 0x48dbecu: goto label_48dbec;
        case 0x48dbf0u: goto label_48dbf0;
        case 0x48dbf4u: goto label_48dbf4;
        case 0x48dbf8u: goto label_48dbf8;
        case 0x48dbfcu: goto label_48dbfc;
        case 0x48dc00u: goto label_48dc00;
        case 0x48dc04u: goto label_48dc04;
        case 0x48dc08u: goto label_48dc08;
        case 0x48dc0cu: goto label_48dc0c;
        case 0x48dc10u: goto label_48dc10;
        case 0x48dc14u: goto label_48dc14;
        case 0x48dc18u: goto label_48dc18;
        case 0x48dc1cu: goto label_48dc1c;
        case 0x48dc20u: goto label_48dc20;
        case 0x48dc24u: goto label_48dc24;
        case 0x48dc28u: goto label_48dc28;
        case 0x48dc2cu: goto label_48dc2c;
        case 0x48dc30u: goto label_48dc30;
        case 0x48dc34u: goto label_48dc34;
        case 0x48dc38u: goto label_48dc38;
        case 0x48dc3cu: goto label_48dc3c;
        case 0x48dc40u: goto label_48dc40;
        case 0x48dc44u: goto label_48dc44;
        case 0x48dc48u: goto label_48dc48;
        case 0x48dc4cu: goto label_48dc4c;
        case 0x48dc50u: goto label_48dc50;
        case 0x48dc54u: goto label_48dc54;
        case 0x48dc58u: goto label_48dc58;
        case 0x48dc5cu: goto label_48dc5c;
        case 0x48dc60u: goto label_48dc60;
        case 0x48dc64u: goto label_48dc64;
        case 0x48dc68u: goto label_48dc68;
        case 0x48dc6cu: goto label_48dc6c;
        case 0x48dc70u: goto label_48dc70;
        case 0x48dc74u: goto label_48dc74;
        case 0x48dc78u: goto label_48dc78;
        case 0x48dc7cu: goto label_48dc7c;
        case 0x48dc80u: goto label_48dc80;
        case 0x48dc84u: goto label_48dc84;
        case 0x48dc88u: goto label_48dc88;
        case 0x48dc8cu: goto label_48dc8c;
        case 0x48dc90u: goto label_48dc90;
        case 0x48dc94u: goto label_48dc94;
        case 0x48dc98u: goto label_48dc98;
        case 0x48dc9cu: goto label_48dc9c;
        case 0x48dca0u: goto label_48dca0;
        case 0x48dca4u: goto label_48dca4;
        case 0x48dca8u: goto label_48dca8;
        case 0x48dcacu: goto label_48dcac;
        case 0x48dcb0u: goto label_48dcb0;
        case 0x48dcb4u: goto label_48dcb4;
        case 0x48dcb8u: goto label_48dcb8;
        case 0x48dcbcu: goto label_48dcbc;
        case 0x48dcc0u: goto label_48dcc0;
        case 0x48dcc4u: goto label_48dcc4;
        case 0x48dcc8u: goto label_48dcc8;
        case 0x48dcccu: goto label_48dccc;
        case 0x48dcd0u: goto label_48dcd0;
        case 0x48dcd4u: goto label_48dcd4;
        case 0x48dcd8u: goto label_48dcd8;
        case 0x48dcdcu: goto label_48dcdc;
        case 0x48dce0u: goto label_48dce0;
        case 0x48dce4u: goto label_48dce4;
        case 0x48dce8u: goto label_48dce8;
        case 0x48dcecu: goto label_48dcec;
        case 0x48dcf0u: goto label_48dcf0;
        case 0x48dcf4u: goto label_48dcf4;
        case 0x48dcf8u: goto label_48dcf8;
        case 0x48dcfcu: goto label_48dcfc;
        case 0x48dd00u: goto label_48dd00;
        case 0x48dd04u: goto label_48dd04;
        case 0x48dd08u: goto label_48dd08;
        case 0x48dd0cu: goto label_48dd0c;
        case 0x48dd10u: goto label_48dd10;
        case 0x48dd14u: goto label_48dd14;
        case 0x48dd18u: goto label_48dd18;
        case 0x48dd1cu: goto label_48dd1c;
        case 0x48dd20u: goto label_48dd20;
        case 0x48dd24u: goto label_48dd24;
        case 0x48dd28u: goto label_48dd28;
        case 0x48dd2cu: goto label_48dd2c;
        case 0x48dd30u: goto label_48dd30;
        case 0x48dd34u: goto label_48dd34;
        case 0x48dd38u: goto label_48dd38;
        case 0x48dd3cu: goto label_48dd3c;
        case 0x48dd40u: goto label_48dd40;
        case 0x48dd44u: goto label_48dd44;
        case 0x48dd48u: goto label_48dd48;
        case 0x48dd4cu: goto label_48dd4c;
        case 0x48dd50u: goto label_48dd50;
        case 0x48dd54u: goto label_48dd54;
        case 0x48dd58u: goto label_48dd58;
        case 0x48dd5cu: goto label_48dd5c;
        case 0x48dd60u: goto label_48dd60;
        case 0x48dd64u: goto label_48dd64;
        case 0x48dd68u: goto label_48dd68;
        case 0x48dd6cu: goto label_48dd6c;
        case 0x48dd70u: goto label_48dd70;
        case 0x48dd74u: goto label_48dd74;
        case 0x48dd78u: goto label_48dd78;
        case 0x48dd7cu: goto label_48dd7c;
        case 0x48dd80u: goto label_48dd80;
        case 0x48dd84u: goto label_48dd84;
        case 0x48dd88u: goto label_48dd88;
        case 0x48dd8cu: goto label_48dd8c;
        case 0x48dd90u: goto label_48dd90;
        case 0x48dd94u: goto label_48dd94;
        case 0x48dd98u: goto label_48dd98;
        case 0x48dd9cu: goto label_48dd9c;
        case 0x48dda0u: goto label_48dda0;
        case 0x48dda4u: goto label_48dda4;
        case 0x48dda8u: goto label_48dda8;
        case 0x48ddacu: goto label_48ddac;
        case 0x48ddb0u: goto label_48ddb0;
        case 0x48ddb4u: goto label_48ddb4;
        case 0x48ddb8u: goto label_48ddb8;
        case 0x48ddbcu: goto label_48ddbc;
        case 0x48ddc0u: goto label_48ddc0;
        case 0x48ddc4u: goto label_48ddc4;
        case 0x48ddc8u: goto label_48ddc8;
        case 0x48ddccu: goto label_48ddcc;
        case 0x48ddd0u: goto label_48ddd0;
        case 0x48ddd4u: goto label_48ddd4;
        case 0x48ddd8u: goto label_48ddd8;
        case 0x48dddcu: goto label_48dddc;
        case 0x48dde0u: goto label_48dde0;
        case 0x48dde4u: goto label_48dde4;
        case 0x48dde8u: goto label_48dde8;
        case 0x48ddecu: goto label_48ddec;
        case 0x48ddf0u: goto label_48ddf0;
        case 0x48ddf4u: goto label_48ddf4;
        case 0x48ddf8u: goto label_48ddf8;
        case 0x48ddfcu: goto label_48ddfc;
        case 0x48de00u: goto label_48de00;
        case 0x48de04u: goto label_48de04;
        case 0x48de08u: goto label_48de08;
        case 0x48de0cu: goto label_48de0c;
        case 0x48de10u: goto label_48de10;
        case 0x48de14u: goto label_48de14;
        case 0x48de18u: goto label_48de18;
        case 0x48de1cu: goto label_48de1c;
        case 0x48de20u: goto label_48de20;
        case 0x48de24u: goto label_48de24;
        case 0x48de28u: goto label_48de28;
        case 0x48de2cu: goto label_48de2c;
        case 0x48de30u: goto label_48de30;
        case 0x48de34u: goto label_48de34;
        case 0x48de38u: goto label_48de38;
        case 0x48de3cu: goto label_48de3c;
        case 0x48de40u: goto label_48de40;
        case 0x48de44u: goto label_48de44;
        case 0x48de48u: goto label_48de48;
        case 0x48de4cu: goto label_48de4c;
        case 0x48de50u: goto label_48de50;
        case 0x48de54u: goto label_48de54;
        case 0x48de58u: goto label_48de58;
        case 0x48de5cu: goto label_48de5c;
        case 0x48de60u: goto label_48de60;
        case 0x48de64u: goto label_48de64;
        case 0x48de68u: goto label_48de68;
        case 0x48de6cu: goto label_48de6c;
        case 0x48de70u: goto label_48de70;
        case 0x48de74u: goto label_48de74;
        case 0x48de78u: goto label_48de78;
        case 0x48de7cu: goto label_48de7c;
        case 0x48de80u: goto label_48de80;
        case 0x48de84u: goto label_48de84;
        case 0x48de88u: goto label_48de88;
        case 0x48de8cu: goto label_48de8c;
        case 0x48de90u: goto label_48de90;
        case 0x48de94u: goto label_48de94;
        case 0x48de98u: goto label_48de98;
        case 0x48de9cu: goto label_48de9c;
        case 0x48dea0u: goto label_48dea0;
        case 0x48dea4u: goto label_48dea4;
        case 0x48dea8u: goto label_48dea8;
        case 0x48deacu: goto label_48deac;
        case 0x48deb0u: goto label_48deb0;
        case 0x48deb4u: goto label_48deb4;
        case 0x48deb8u: goto label_48deb8;
        case 0x48debcu: goto label_48debc;
        case 0x48dec0u: goto label_48dec0;
        case 0x48dec4u: goto label_48dec4;
        case 0x48dec8u: goto label_48dec8;
        case 0x48deccu: goto label_48decc;
        case 0x48ded0u: goto label_48ded0;
        case 0x48ded4u: goto label_48ded4;
        case 0x48ded8u: goto label_48ded8;
        case 0x48dedcu: goto label_48dedc;
        case 0x48dee0u: goto label_48dee0;
        case 0x48dee4u: goto label_48dee4;
        case 0x48dee8u: goto label_48dee8;
        case 0x48deecu: goto label_48deec;
        case 0x48def0u: goto label_48def0;
        case 0x48def4u: goto label_48def4;
        case 0x48def8u: goto label_48def8;
        case 0x48defcu: goto label_48defc;
        case 0x48df00u: goto label_48df00;
        case 0x48df04u: goto label_48df04;
        case 0x48df08u: goto label_48df08;
        case 0x48df0cu: goto label_48df0c;
        case 0x48df10u: goto label_48df10;
        case 0x48df14u: goto label_48df14;
        case 0x48df18u: goto label_48df18;
        case 0x48df1cu: goto label_48df1c;
        case 0x48df20u: goto label_48df20;
        case 0x48df24u: goto label_48df24;
        case 0x48df28u: goto label_48df28;
        case 0x48df2cu: goto label_48df2c;
        case 0x48df30u: goto label_48df30;
        case 0x48df34u: goto label_48df34;
        case 0x48df38u: goto label_48df38;
        case 0x48df3cu: goto label_48df3c;
        case 0x48df40u: goto label_48df40;
        case 0x48df44u: goto label_48df44;
        case 0x48df48u: goto label_48df48;
        case 0x48df4cu: goto label_48df4c;
        case 0x48df50u: goto label_48df50;
        case 0x48df54u: goto label_48df54;
        case 0x48df58u: goto label_48df58;
        case 0x48df5cu: goto label_48df5c;
        case 0x48df60u: goto label_48df60;
        case 0x48df64u: goto label_48df64;
        case 0x48df68u: goto label_48df68;
        case 0x48df6cu: goto label_48df6c;
        case 0x48df70u: goto label_48df70;
        case 0x48df74u: goto label_48df74;
        case 0x48df78u: goto label_48df78;
        case 0x48df7cu: goto label_48df7c;
        case 0x48df80u: goto label_48df80;
        case 0x48df84u: goto label_48df84;
        case 0x48df88u: goto label_48df88;
        case 0x48df8cu: goto label_48df8c;
        case 0x48df90u: goto label_48df90;
        case 0x48df94u: goto label_48df94;
        case 0x48df98u: goto label_48df98;
        case 0x48df9cu: goto label_48df9c;
        case 0x48dfa0u: goto label_48dfa0;
        case 0x48dfa4u: goto label_48dfa4;
        case 0x48dfa8u: goto label_48dfa8;
        case 0x48dfacu: goto label_48dfac;
        case 0x48dfb0u: goto label_48dfb0;
        case 0x48dfb4u: goto label_48dfb4;
        case 0x48dfb8u: goto label_48dfb8;
        case 0x48dfbcu: goto label_48dfbc;
        case 0x48dfc0u: goto label_48dfc0;
        case 0x48dfc4u: goto label_48dfc4;
        case 0x48dfc8u: goto label_48dfc8;
        case 0x48dfccu: goto label_48dfcc;
        case 0x48dfd0u: goto label_48dfd0;
        case 0x48dfd4u: goto label_48dfd4;
        case 0x48dfd8u: goto label_48dfd8;
        case 0x48dfdcu: goto label_48dfdc;
        case 0x48dfe0u: goto label_48dfe0;
        case 0x48dfe4u: goto label_48dfe4;
        case 0x48dfe8u: goto label_48dfe8;
        case 0x48dfecu: goto label_48dfec;
        case 0x48dff0u: goto label_48dff0;
        case 0x48dff4u: goto label_48dff4;
        case 0x48dff8u: goto label_48dff8;
        case 0x48dffcu: goto label_48dffc;
        case 0x48e000u: goto label_48e000;
        case 0x48e004u: goto label_48e004;
        case 0x48e008u: goto label_48e008;
        case 0x48e00cu: goto label_48e00c;
        case 0x48e010u: goto label_48e010;
        case 0x48e014u: goto label_48e014;
        case 0x48e018u: goto label_48e018;
        case 0x48e01cu: goto label_48e01c;
        case 0x48e020u: goto label_48e020;
        case 0x48e024u: goto label_48e024;
        case 0x48e028u: goto label_48e028;
        case 0x48e02cu: goto label_48e02c;
        case 0x48e030u: goto label_48e030;
        case 0x48e034u: goto label_48e034;
        case 0x48e038u: goto label_48e038;
        case 0x48e03cu: goto label_48e03c;
        case 0x48e040u: goto label_48e040;
        case 0x48e044u: goto label_48e044;
        case 0x48e048u: goto label_48e048;
        case 0x48e04cu: goto label_48e04c;
        case 0x48e050u: goto label_48e050;
        case 0x48e054u: goto label_48e054;
        case 0x48e058u: goto label_48e058;
        case 0x48e05cu: goto label_48e05c;
        case 0x48e060u: goto label_48e060;
        case 0x48e064u: goto label_48e064;
        case 0x48e068u: goto label_48e068;
        case 0x48e06cu: goto label_48e06c;
        case 0x48e070u: goto label_48e070;
        case 0x48e074u: goto label_48e074;
        case 0x48e078u: goto label_48e078;
        case 0x48e07cu: goto label_48e07c;
        case 0x48e080u: goto label_48e080;
        case 0x48e084u: goto label_48e084;
        case 0x48e088u: goto label_48e088;
        case 0x48e08cu: goto label_48e08c;
        case 0x48e090u: goto label_48e090;
        case 0x48e094u: goto label_48e094;
        case 0x48e098u: goto label_48e098;
        case 0x48e09cu: goto label_48e09c;
        case 0x48e0a0u: goto label_48e0a0;
        case 0x48e0a4u: goto label_48e0a4;
        case 0x48e0a8u: goto label_48e0a8;
        case 0x48e0acu: goto label_48e0ac;
        case 0x48e0b0u: goto label_48e0b0;
        case 0x48e0b4u: goto label_48e0b4;
        case 0x48e0b8u: goto label_48e0b8;
        case 0x48e0bcu: goto label_48e0bc;
        case 0x48e0c0u: goto label_48e0c0;
        case 0x48e0c4u: goto label_48e0c4;
        case 0x48e0c8u: goto label_48e0c8;
        case 0x48e0ccu: goto label_48e0cc;
        case 0x48e0d0u: goto label_48e0d0;
        case 0x48e0d4u: goto label_48e0d4;
        case 0x48e0d8u: goto label_48e0d8;
        case 0x48e0dcu: goto label_48e0dc;
        case 0x48e0e0u: goto label_48e0e0;
        case 0x48e0e4u: goto label_48e0e4;
        case 0x48e0e8u: goto label_48e0e8;
        case 0x48e0ecu: goto label_48e0ec;
        case 0x48e0f0u: goto label_48e0f0;
        case 0x48e0f4u: goto label_48e0f4;
        case 0x48e0f8u: goto label_48e0f8;
        case 0x48e0fcu: goto label_48e0fc;
        case 0x48e100u: goto label_48e100;
        case 0x48e104u: goto label_48e104;
        case 0x48e108u: goto label_48e108;
        case 0x48e10cu: goto label_48e10c;
        case 0x48e110u: goto label_48e110;
        case 0x48e114u: goto label_48e114;
        case 0x48e118u: goto label_48e118;
        case 0x48e11cu: goto label_48e11c;
        default: break;
    }

    ctx->pc = 0x48d950u;

label_48d950:
    // 0x48d950: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x48d950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_48d954:
    // 0x48d954: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x48d954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_48d958:
    // 0x48d958: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x48d958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_48d95c:
    // 0x48d95c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48d95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48d960:
    // 0x48d960: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x48d960u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48d964:
    // 0x48d964: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48d964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48d968:
    // 0x48d968: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x48d968u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_48d96c:
    // 0x48d96c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48d96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48d970:
    // 0x48d970: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x48d970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_48d974:
    // 0x48d974: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48d974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48d978:
    // 0x48d978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48d978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48d97c:
    // 0x48d97c: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x48d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_48d980:
    // 0x48d980: 0x8c850038  lw          $a1, 0x38($a0)
    ctx->pc = 0x48d980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_48d984:
    // 0x48d984: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x48d984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_48d988:
    // 0x48d988: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x48d988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_48d98c:
    // 0x48d98c: 0xa31026  xor         $v0, $a1, $v1
    ctx->pc = 0x48d98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
label_48d990:
    // 0x48d990: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48d990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48d994:
    // 0x48d994: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48d994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48d998:
    // 0x48d998: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_48d99c:
    if (ctx->pc == 0x48D99Cu) {
        ctx->pc = 0x48D99Cu;
            // 0x48d99c: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48D9A0u;
        goto label_48d9a0;
    }
    ctx->pc = 0x48D998u;
    {
        const bool branch_taken_0x48d998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48D99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48D998u;
            // 0x48d99c: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48d998) {
            ctx->pc = 0x48D9D8u;
            goto label_48d9d8;
        }
    }
    ctx->pc = 0x48D9A0u;
label_48d9a0:
    // 0x48d9a0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x48d9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_48d9a4:
    // 0x48d9a4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x48d9a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_48d9a8:
    // 0x48d9a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x48d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_48d9ac:
    // 0x48d9ac: 0x56820005  bnel        $s4, $v0, . + 4 + (0x5 << 2)
label_48d9b0:
    if (ctx->pc == 0x48D9B0u) {
        ctx->pc = 0x48D9B0u;
            // 0x48d9b0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x48D9B4u;
        goto label_48d9b4;
    }
    ctx->pc = 0x48D9ACu;
    {
        const bool branch_taken_0x48d9ac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x48d9ac) {
            ctx->pc = 0x48D9B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48D9ACu;
            // 0x48d9b0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48D9C4u;
            goto label_48d9c4;
        }
    }
    ctx->pc = 0x48D9B4u;
label_48d9b4:
    // 0x48d9b4: 0xc1257ac  jal         func_495EB0
label_48d9b8:
    if (ctx->pc == 0x48D9B8u) {
        ctx->pc = 0x48D9B8u;
            // 0x48d9b8: 0x26a40030  addiu       $a0, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->pc = 0x48D9BCu;
        goto label_48d9bc;
    }
    ctx->pc = 0x48D9B4u;
    SET_GPR_U32(ctx, 31, 0x48D9BCu);
    ctx->pc = 0x48D9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D9B4u;
            // 0x48d9b8: 0x26a40030  addiu       $a0, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x495EB0u;
    if (runtime->hasFunction(0x495EB0u)) {
        auto targetFn = runtime->lookupFunction(0x495EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D9BCu; }
        if (ctx->pc != 0x48D9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00495EB0_0x495eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48D9BCu; }
        if (ctx->pc != 0x48D9BCu) { return; }
    }
    ctx->pc = 0x48D9BCu;
label_48d9bc:
    // 0x48d9bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_48d9c0:
    if (ctx->pc == 0x48D9C0u) {
        ctx->pc = 0x48D9C4u;
        goto label_48d9c4;
    }
    ctx->pc = 0x48D9BCu;
    {
        const bool branch_taken_0x48d9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48d9bc) {
            ctx->pc = 0x48D9D8u;
            goto label_48d9d8;
        }
    }
    ctx->pc = 0x48D9C4u;
label_48d9c4:
    // 0x48d9c4: 0xa31026  xor         $v0, $a1, $v1
    ctx->pc = 0x48d9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
label_48d9c8:
    // 0x48d9c8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48d9c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48d9cc:
    // 0x48d9cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48d9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48d9d0:
    // 0x48d9d0: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_48d9d4:
    if (ctx->pc == 0x48D9D4u) {
        ctx->pc = 0x48D9D4u;
            // 0x48d9d4: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->pc = 0x48D9D8u;
        goto label_48d9d8;
    }
    ctx->pc = 0x48D9D0u;
    {
        const bool branch_taken_0x48d9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48d9d0) {
            ctx->pc = 0x48D9D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48D9D0u;
            // 0x48d9d4: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48D9A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48d9a4;
        }
    }
    ctx->pc = 0x48D9D8u;
label_48d9d8:
    // 0x48d9d8: 0xafb40070  sw          $s4, 0x70($sp)
    ctx->pc = 0x48d9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 20));
label_48d9dc:
    // 0x48d9dc: 0xafb30074  sw          $s3, 0x74($sp)
    ctx->pc = 0x48d9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 19));
label_48d9e0:
    // 0x48d9e0: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x48d9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_48d9e4:
    // 0x48d9e4: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x48d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_48d9e8:
    // 0x48d9e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x48d9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48d9ec:
    // 0x48d9ec: 0x8ea20038  lw          $v0, 0x38($s5)
    ctx->pc = 0x48d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_48d9f0:
    // 0x48d9f0: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x48d9f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_48d9f4:
    // 0x48d9f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x48d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_48d9f8:
    // 0x48d9f8: 0xc125810  jal         func_496040
label_48d9fc:
    if (ctx->pc == 0x48D9FCu) {
        ctx->pc = 0x48D9FCu;
            // 0x48d9fc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x48DA00u;
        goto label_48da00;
    }
    ctx->pc = 0x48D9F8u;
    SET_GPR_U32(ctx, 31, 0x48DA00u);
    ctx->pc = 0x48D9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48D9F8u;
            // 0x48d9fc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x496040u;
    if (runtime->hasFunction(0x496040u)) {
        auto targetFn = runtime->lookupFunction(0x496040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48DA00u; }
        if (ctx->pc != 0x48DA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00496040_0x496040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48DA00u; }
        if (ctx->pc != 0x48DA00u) { return; }
    }
    ctx->pc = 0x48DA00u;
label_48da00:
    // 0x48da00: 0x8ea30028  lw          $v1, 0x28($s5)
    ctx->pc = 0x48da00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_48da04:
    // 0x48da04: 0x8eb0002c  lw          $s0, 0x2C($s5)
    ctx->pc = 0x48da04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_48da08:
    // 0x48da08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48da08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48da0c:
    // 0x48da0c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x48da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_48da10:
    // 0x48da10: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x48da10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
label_48da14:
    // 0x48da14: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48da14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48da18:
    // 0x48da18: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48da18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_48da1c:
    // 0x48da1c: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
label_48da20:
    if (ctx->pc == 0x48DA20u) {
        ctx->pc = 0x48DA24u;
        goto label_48da24;
    }
    ctx->pc = 0x48DA1Cu;
    {
        const bool branch_taken_0x48da1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48da1c) {
            ctx->pc = 0x48DB28u;
            goto label_48db28;
        }
    }
    ctx->pc = 0x48DA24u;
label_48da24:
    // 0x48da24: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48da24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_48da28:
    // 0x48da28: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48da28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48da2c:
    // 0x48da2c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x48da2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48da30:
    // 0x48da30: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x48da30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_48da34:
    // 0x48da34: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
label_48da38:
    if (ctx->pc == 0x48DA38u) {
        ctx->pc = 0x48DA3Cu;
        goto label_48da3c;
    }
    ctx->pc = 0x48DA34u;
    {
        const bool branch_taken_0x48da34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48da34) {
            ctx->pc = 0x48DAF8u;
            goto label_48daf8;
        }
    }
    ctx->pc = 0x48DA3Cu;
label_48da3c:
    // 0x48da3c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x48da3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_48da40:
    // 0x48da40: 0x1683002d  bne         $s4, $v1, . + 4 + (0x2D << 2)
label_48da44:
    if (ctx->pc == 0x48DA44u) {
        ctx->pc = 0x48DA48u;
        goto label_48da48;
    }
    ctx->pc = 0x48DA40u;
    {
        const bool branch_taken_0x48da40 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x48da40) {
            ctx->pc = 0x48DAF8u;
            goto label_48daf8;
        }
    }
    ctx->pc = 0x48DA48u;
label_48da48:
    // 0x48da48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48da48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48da4c:
    // 0x48da4c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x48da4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_48da50:
    // 0x48da50: 0x320f809  jalr        $t9
label_48da54:
    if (ctx->pc == 0x48DA54u) {
        ctx->pc = 0x48DA58u;
        goto label_48da58;
    }
    ctx->pc = 0x48DA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48DA58u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x48DA58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48DA58u; }
            if (ctx->pc != 0x48DA58u) { return; }
        }
        }
    }
    ctx->pc = 0x48DA58u;
label_48da58:
    // 0x48da58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48da58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48da5c:
    // 0x48da5c: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x48da5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_48da60:
    // 0x48da60: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48da60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48da64:
    // 0x48da64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48da64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48da68:
    // 0x48da68: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x48da68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48da6c:
    // 0x48da6c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_48da70:
    if (ctx->pc == 0x48DA70u) {
        ctx->pc = 0x48DA74u;
        goto label_48da74;
    }
    ctx->pc = 0x48DA6Cu;
    {
        const bool branch_taken_0x48da6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48da6c) {
            ctx->pc = 0x48DA88u;
            goto label_48da88;
        }
    }
    ctx->pc = 0x48DA74u;
label_48da74:
    // 0x48da74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48da74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48da78:
    // 0x48da78: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x48da78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_48da7c:
    // 0x48da7c: 0x320f809  jalr        $t9
label_48da80:
    if (ctx->pc == 0x48DA80u) {
        ctx->pc = 0x48DA80u;
            // 0x48da80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x48DA84u;
        goto label_48da84;
    }
    ctx->pc = 0x48DA7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48DA84u);
        ctx->pc = 0x48DA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DA7Cu;
            // 0x48da80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48DA84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48DA84u; }
            if (ctx->pc != 0x48DA84u) { return; }
        }
        }
    }
    ctx->pc = 0x48DA84u;
label_48da84:
    // 0x48da84: 0x0  nop
    ctx->pc = 0x48da84u;
    // NOP
label_48da88:
    // 0x48da88: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x48da88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_48da8c:
    // 0x48da8c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x48da8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_48da90:
    // 0x48da90: 0x320f809  jalr        $t9
label_48da94:
    if (ctx->pc == 0x48DA94u) {
        ctx->pc = 0x48DA94u;
            // 0x48da94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48DA98u;
        goto label_48da98;
    }
    ctx->pc = 0x48DA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48DA98u);
        ctx->pc = 0x48DA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DA90u;
            // 0x48da94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48DA98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48DA98u; }
            if (ctx->pc != 0x48DA98u) { return; }
        }
        }
    }
    ctx->pc = 0x48DA98u;
label_48da98:
    // 0x48da98: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x48da98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
label_48da9c:
    // 0x48da9c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x48da9cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_48daa0:
    // 0x48daa0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x48daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48daa4:
    // 0x48daa4: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x48daa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_48daa8:
    // 0x48daa8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x48daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48daac:
    // 0x48daac: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x48daacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48dab0:
    // 0x48dab0: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x48dab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_48dab4:
    // 0x48dab4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x48dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48dab8:
    // 0x48dab8: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x48dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48dabc:
    // 0x48dabc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48dabcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48dac0:
    // 0x48dac0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x48dac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_48dac4:
    // 0x48dac4: 0x320f809  jalr        $t9
label_48dac8:
    if (ctx->pc == 0x48DAC8u) {
        ctx->pc = 0x48DAC8u;
            // 0x48dac8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48DACCu;
        goto label_48dacc;
    }
    ctx->pc = 0x48DAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48DACCu);
        ctx->pc = 0x48DAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DAC4u;
            // 0x48dac8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48DACCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48DACCu; }
            if (ctx->pc != 0x48DACCu) { return; }
        }
        }
    }
    ctx->pc = 0x48DACCu;
label_48dacc:
    // 0x48dacc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48daccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48dad0:
    // 0x48dad0: 0x16430009  bne         $s2, $v1, . + 4 + (0x9 << 2)
label_48dad4:
    if (ctx->pc == 0x48DAD4u) {
        ctx->pc = 0x48DAD8u;
        goto label_48dad8;
    }
    ctx->pc = 0x48DAD0u;
    {
        const bool branch_taken_0x48dad0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x48dad0) {
            ctx->pc = 0x48DAF8u;
            goto label_48daf8;
        }
    }
    ctx->pc = 0x48DAD8u;
label_48dad8:
    // 0x48dad8: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x48dad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_48dadc:
    // 0x48dadc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48dadcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48dae0:
    // 0x48dae0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48dae4:
    // 0x48dae4: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x48dae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48dae8:
    // 0x48dae8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48dae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48daec:
    // 0x48daec: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x48daecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_48daf0:
    // 0x48daf0: 0x320f809  jalr        $t9
label_48daf4:
    if (ctx->pc == 0x48DAF4u) {
        ctx->pc = 0x48DAF4u;
            // 0x48daf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48DAF8u;
        goto label_48daf8;
    }
    ctx->pc = 0x48DAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48DAF8u);
        ctx->pc = 0x48DAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DAF0u;
            // 0x48daf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48DAF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48DAF8u; }
            if (ctx->pc != 0x48DAF8u) { return; }
        }
        }
    }
    ctx->pc = 0x48DAF8u;
label_48daf8:
    // 0x48daf8: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48daf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_48dafc:
    // 0x48dafc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48dafcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48db00:
    // 0x48db00: 0x8ea40028  lw          $a0, 0x28($s5)
    ctx->pc = 0x48db00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_48db04:
    // 0x48db04: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x48db04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_48db08:
    // 0x48db08: 0x8ea3002c  lw          $v1, 0x2C($s5)
    ctx->pc = 0x48db08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_48db0c:
    // 0x48db0c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x48db0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_48db10:
    // 0x48db10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48db10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_48db14:
    // 0x48db14: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x48db14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
label_48db18:
    // 0x48db18: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48db18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48db1c:
    // 0x48db1c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48db1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_48db20:
    // 0x48db20: 0x5460ffc1  bnel        $v1, $zero, . + 4 + (-0x3F << 2)
label_48db24:
    if (ctx->pc == 0x48DB24u) {
        ctx->pc = 0x48DB24u;
            // 0x48db24: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x48DB28u;
        goto label_48db28;
    }
    ctx->pc = 0x48DB20u;
    {
        const bool branch_taken_0x48db20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48db20) {
            ctx->pc = 0x48DB24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48DB20u;
            // 0x48db24: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48DA28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48da28;
        }
    }
    ctx->pc = 0x48DB28u;
label_48db28:
    // 0x48db28: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x48db28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_48db2c:
    // 0x48db2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x48db2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_48db30:
    // 0x48db30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x48db30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48db34:
    // 0x48db34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48db34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48db38:
    // 0x48db38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48db38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48db3c:
    // 0x48db3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48db3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48db40:
    // 0x48db40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48db40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48db44:
    // 0x48db44: 0x3e00008  jr          $ra
label_48db48:
    if (ctx->pc == 0x48DB48u) {
        ctx->pc = 0x48DB48u;
            // 0x48db48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x48DB4Cu;
        goto label_48db4c;
    }
    ctx->pc = 0x48DB44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48DB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DB44u;
            // 0x48db48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48DB4Cu;
label_48db4c:
    // 0x48db4c: 0x0  nop
    ctx->pc = 0x48db4cu;
    // NOP
label_48db50:
    // 0x48db50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x48db50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_48db54:
    // 0x48db54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x48db54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_48db58:
    // 0x48db58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48db58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48db5c:
    // 0x48db5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48db5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48db60:
    // 0x48db60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48db60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48db64:
    // 0x48db64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48db64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48db68:
    // 0x48db68: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x48db68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_48db6c:
    // 0x48db6c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x48db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_48db70:
    // 0x48db70: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x48db70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48db74:
    // 0x48db74: 0x40f809  jalr        $v0
label_48db78:
    if (ctx->pc == 0x48DB78u) {
        ctx->pc = 0x48DB78u;
            // 0x48db78: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48DB7Cu;
        goto label_48db7c;
    }
    ctx->pc = 0x48DB74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48DB7Cu);
        ctx->pc = 0x48DB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DB74u;
            // 0x48db78: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48DB7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48DB7Cu; }
            if (ctx->pc != 0x48DB7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48DB7Cu;
label_48db7c:
    // 0x48db7c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x48db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_48db80:
    // 0x48db80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48db80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48db84:
    // 0x48db84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x48db84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48db88:
    // 0x48db88: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x48db88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_48db8c:
    // 0x48db8c: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x48db8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_48db90:
    // 0x48db90: 0xc125200  jal         func_494800
label_48db94:
    if (ctx->pc == 0x48DB94u) {
        ctx->pc = 0x48DB94u;
            // 0x48db94: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48DB98u;
        goto label_48db98;
    }
    ctx->pc = 0x48DB90u;
    SET_GPR_U32(ctx, 31, 0x48DB98u);
    ctx->pc = 0x48DB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48DB90u;
            // 0x48db94: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x494800u;
    if (runtime->hasFunction(0x494800u)) {
        auto targetFn = runtime->lookupFunction(0x494800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48DB98u; }
        if (ctx->pc != 0x48DB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00494800_0x494800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48DB98u; }
        if (ctx->pc != 0x48DB98u) { return; }
    }
    ctx->pc = 0x48DB98u;
label_48db98:
    // 0x48db98: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x48db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_48db9c:
    // 0x48db9c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x48db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_48dba0:
    // 0x48dba0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x48dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_48dba4:
    // 0x48dba4: 0x8e50002c  lw          $s0, 0x2C($s2)
    ctx->pc = 0x48dba4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_48dba8:
    // 0x48dba8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48dbac:
    // 0x48dbac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x48dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_48dbb0:
    // 0x48dbb0: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x48dbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_48dbb4:
    // 0x48dbb4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48dbb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48dbb8:
    // 0x48dbb8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48dbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48dbbc:
    // 0x48dbbc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_48dbc0:
    if (ctx->pc == 0x48DBC0u) {
        ctx->pc = 0x48DBC0u;
            // 0x48dbc0: 0x8e33002c  lw          $s3, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->pc = 0x48DBC4u;
        goto label_48dbc4;
    }
    ctx->pc = 0x48DBBCu;
    {
        const bool branch_taken_0x48dbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48DBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DBBCu;
            // 0x48dbc0: 0x8e33002c  lw          $s3, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dbbc) {
            ctx->pc = 0x48DC40u;
            goto label_48dc40;
        }
    }
    ctx->pc = 0x48DBC4u;
label_48dbc4:
    // 0x48dbc4: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x48dbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_48dbc8:
    // 0x48dbc8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48dbc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48dbcc:
    // 0x48dbcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48dbd0:
    // 0x48dbd0: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x48dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48dbd4:
    // 0x48dbd4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_48dbd8:
    if (ctx->pc == 0x48DBD8u) {
        ctx->pc = 0x48DBDCu;
        goto label_48dbdc;
    }
    ctx->pc = 0x48DBD4u;
    {
        const bool branch_taken_0x48dbd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48dbd4) {
            ctx->pc = 0x48DC00u;
            goto label_48dc00;
        }
    }
    ctx->pc = 0x48DBDCu;
label_48dbdc:
    // 0x48dbdc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48dbdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48dbe0:
    // 0x48dbe0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x48dbe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_48dbe4:
    // 0x48dbe4: 0x320f809  jalr        $t9
label_48dbe8:
    if (ctx->pc == 0x48DBE8u) {
        ctx->pc = 0x48DBECu;
        goto label_48dbec;
    }
    ctx->pc = 0x48DBE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48DBECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x48DBECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48DBECu; }
            if (ctx->pc != 0x48DBECu) { return; }
        }
        }
    }
    ctx->pc = 0x48DBECu;
label_48dbec:
    // 0x48dbec: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x48dbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
label_48dbf0:
    // 0x48dbf0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48dbf0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48dbf4:
    // 0x48dbf4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x48dbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48dbf8:
    // 0x48dbf8: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x48dbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_48dbfc:
    // 0x48dbfc: 0x0  nop
    ctx->pc = 0x48dbfcu;
    // NOP
label_48dc00:
    // 0x48dc00: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x48dc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_48dc04:
    // 0x48dc04: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48dc04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48dc08:
    // 0x48dc08: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x48dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_48dc0c:
    // 0x48dc0c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x48dc0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_48dc10:
    // 0x48dc10: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x48dc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
label_48dc14:
    // 0x48dc14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48dc14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48dc18:
    // 0x48dc18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48dc1c:
    // 0x48dc1c: 0x24530004  addiu       $s3, $v0, 0x4
    ctx->pc = 0x48dc1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_48dc20:
    // 0x48dc20: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x48dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_48dc24:
    // 0x48dc24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48dc28:
    // 0x48dc28: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x48dc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_48dc2c:
    // 0x48dc2c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48dc2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48dc30:
    // 0x48dc30: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48dc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48dc34:
    // 0x48dc34: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
label_48dc38:
    if (ctx->pc == 0x48DC38u) {
        ctx->pc = 0x48DC38u;
            // 0x48dc38: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x48DC3Cu;
        goto label_48dc3c;
    }
    ctx->pc = 0x48DC34u;
    {
        const bool branch_taken_0x48dc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48dc34) {
            ctx->pc = 0x48DC38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48DC34u;
            // 0x48dc38: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48DBC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48dbc8;
        }
    }
    ctx->pc = 0x48DC3Cu;
label_48dc3c:
    // 0x48dc3c: 0x0  nop
    ctx->pc = 0x48dc3cu;
    // NOP
label_48dc40:
    // 0x48dc40: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x48dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_48dc44:
    // 0x48dc44: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
label_48dc48:
    if (ctx->pc == 0x48DC48u) {
        ctx->pc = 0x48DC48u;
            // 0x48dc48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48DC4Cu;
        goto label_48dc4c;
    }
    ctx->pc = 0x48DC44u;
    {
        const bool branch_taken_0x48dc44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48dc44) {
            ctx->pc = 0x48DC48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48DC44u;
            // 0x48dc48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48DC74u;
            goto label_48dc74;
        }
    }
    ctx->pc = 0x48DC4Cu;
label_48dc4c:
    // 0x48dc4c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x48dc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_48dc50:
    // 0x48dc50: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x48dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_48dc54:
    // 0x48dc54: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_48dc58:
    if (ctx->pc == 0x48DC58u) {
        ctx->pc = 0x48DC5Cu;
        goto label_48dc5c;
    }
    ctx->pc = 0x48DC54u;
    {
        const bool branch_taken_0x48dc54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x48dc54) {
            ctx->pc = 0x48DC70u;
            goto label_48dc70;
        }
    }
    ctx->pc = 0x48DC5Cu;
label_48dc5c:
    // 0x48dc5c: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x48dc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_48dc60:
    // 0x48dc60: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x48dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_48dc64:
    // 0x48dc64: 0x83a70054  lb          $a3, 0x54($sp)
    ctx->pc = 0x48dc64u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 84)));
label_48dc68:
    // 0x48dc68: 0xc125694  jal         func_495A50
label_48dc6c:
    if (ctx->pc == 0x48DC6Cu) {
        ctx->pc = 0x48DC6Cu;
            // 0x48dc6c: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x48DC70u;
        goto label_48dc70;
    }
    ctx->pc = 0x48DC68u;
    SET_GPR_U32(ctx, 31, 0x48DC70u);
    ctx->pc = 0x48DC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48DC68u;
            // 0x48dc6c: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x495A50u;
    if (runtime->hasFunction(0x495A50u)) {
        auto targetFn = runtime->lookupFunction(0x495A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48DC70u; }
        if (ctx->pc != 0x48DC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00495A50_0x495a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48DC70u; }
        if (ctx->pc != 0x48DC70u) { return; }
    }
    ctx->pc = 0x48DC70u;
label_48dc70:
    // 0x48dc70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x48dc70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48dc74:
    // 0x48dc74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x48dc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_48dc78:
    // 0x48dc78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48dc78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48dc7c:
    // 0x48dc7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48dc7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48dc80:
    // 0x48dc80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48dc80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48dc84:
    // 0x48dc84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48dc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48dc88:
    // 0x48dc88: 0x3e00008  jr          $ra
label_48dc8c:
    if (ctx->pc == 0x48DC8Cu) {
        ctx->pc = 0x48DC8Cu;
            // 0x48dc8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x48DC90u;
        goto label_48dc90;
    }
    ctx->pc = 0x48DC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48DC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DC88u;
            // 0x48dc8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48DC90u;
label_48dc90:
    // 0x48dc90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48dc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_48dc94:
    // 0x48dc94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x48dc94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48dc98:
    // 0x48dc98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48dc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48dc9c:
    // 0x48dc9c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x48dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_48dca0:
    // 0x48dca0: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x48dca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_48dca4:
    // 0x48dca4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48dca8:
    // 0x48dca8: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x48dca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_48dcac:
    // 0x48dcac: 0xc31026  xor         $v0, $a2, $v1
    ctx->pc = 0x48dcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
label_48dcb0:
    // 0x48dcb0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48dcb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48dcb4:
    // 0x48dcb4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48dcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48dcb8:
    // 0x48dcb8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_48dcbc:
    if (ctx->pc == 0x48DCBCu) {
        ctx->pc = 0x48DCBCu;
            // 0x48dcbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48DCC0u;
        goto label_48dcc0;
    }
    ctx->pc = 0x48DCB8u;
    {
        const bool branch_taken_0x48dcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48DCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DCB8u;
            // 0x48dcbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dcb8) {
            ctx->pc = 0x48DD08u;
            goto label_48dd08;
        }
    }
    ctx->pc = 0x48DCC0u;
label_48dcc0:
    // 0x48dcc0: 0x55050009  bnel        $t0, $a1, . + 4 + (0x9 << 2)
label_48dcc4:
    if (ctx->pc == 0x48DCC4u) {
        ctx->pc = 0x48DCC4u;
            // 0x48dcc4: 0x6103c  dsll32      $v0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
        ctx->pc = 0x48DCC8u;
        goto label_48dcc8;
    }
    ctx->pc = 0x48DCC0u;
    {
        const bool branch_taken_0x48dcc0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x48dcc0) {
            ctx->pc = 0x48DCC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48DCC0u;
            // 0x48dcc4: 0x6103c  dsll32      $v0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48DCE8u;
            goto label_48dce8;
        }
    }
    ctx->pc = 0x48DCC8u;
label_48dcc8:
    // 0x48dcc8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x48dcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_48dccc:
    // 0x48dccc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48dcccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48dcd0:
    // 0x48dcd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48dcd4:
    // 0x48dcd4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x48dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48dcd8:
    // 0x48dcd8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_48dcdc:
    if (ctx->pc == 0x48DCDCu) {
        ctx->pc = 0x48DCE0u;
        goto label_48dce0;
    }
    ctx->pc = 0x48DCD8u;
    {
        const bool branch_taken_0x48dcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48dcd8) {
            ctx->pc = 0x48DD08u;
            goto label_48dd08;
        }
    }
    ctx->pc = 0x48DCE0u;
label_48dce0:
    // 0x48dce0: 0x10000009  b           . + 4 + (0x9 << 2)
label_48dce4:
    if (ctx->pc == 0x48DCE4u) {
        ctx->pc = 0x48DCE4u;
            // 0x48dce4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48DCE8u;
        goto label_48dce8;
    }
    ctx->pc = 0x48DCE0u;
    {
        const bool branch_taken_0x48dce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48DCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DCE0u;
            // 0x48dce4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dce0) {
            ctx->pc = 0x48DD08u;
            goto label_48dd08;
        }
    }
    ctx->pc = 0x48DCE8u;
label_48dce8:
    // 0x48dce8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48dce8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48dcec:
    // 0x48dcec: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x48dcecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_48dcf0:
    // 0x48dcf0: 0xc31026  xor         $v0, $a2, $v1
    ctx->pc = 0x48dcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
label_48dcf4:
    // 0x48dcf4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48dcf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48dcf8:
    // 0x48dcf8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48dcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48dcfc:
    // 0x48dcfc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_48dd00:
    if (ctx->pc == 0x48DD00u) {
        ctx->pc = 0x48DD00u;
            // 0x48dd00: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->pc = 0x48DD04u;
        goto label_48dd04;
    }
    ctx->pc = 0x48DCFCu;
    {
        const bool branch_taken_0x48dcfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48DD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DCFCu;
            // 0x48dd00: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dcfc) {
            ctx->pc = 0x48DCC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48dcc0;
        }
    }
    ctx->pc = 0x48DD04u;
label_48dd04:
    // 0x48dd04: 0x0  nop
    ctx->pc = 0x48dd04u;
    // NOP
label_48dd08:
    // 0x48dd08: 0x54e00003  bnel        $a3, $zero, . + 4 + (0x3 << 2)
label_48dd0c:
    if (ctx->pc == 0x48DD0Cu) {
        ctx->pc = 0x48DD0Cu;
            // 0x48dd0c: 0x8cf90000  lw          $t9, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->pc = 0x48DD10u;
        goto label_48dd10;
    }
    ctx->pc = 0x48DD08u;
    {
        const bool branch_taken_0x48dd08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x48dd08) {
            ctx->pc = 0x48DD0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48DD08u;
            // 0x48dd0c: 0x8cf90000  lw          $t9, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48DD18u;
            goto label_48dd18;
        }
    }
    ctx->pc = 0x48DD10u;
label_48dd10:
    // 0x48dd10: 0x10000004  b           . + 4 + (0x4 << 2)
label_48dd14:
    if (ctx->pc == 0x48DD14u) {
        ctx->pc = 0x48DD14u;
            // 0x48dd14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48DD18u;
        goto label_48dd18;
    }
    ctx->pc = 0x48DD10u;
    {
        const bool branch_taken_0x48dd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48DD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DD10u;
            // 0x48dd14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dd10) {
            ctx->pc = 0x48DD24u;
            goto label_48dd24;
        }
    }
    ctx->pc = 0x48DD18u;
label_48dd18:
    // 0x48dd18: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x48dd18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_48dd1c:
    // 0x48dd1c: 0x320f809  jalr        $t9
label_48dd20:
    if (ctx->pc == 0x48DD20u) {
        ctx->pc = 0x48DD20u;
            // 0x48dd20: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48DD24u;
        goto label_48dd24;
    }
    ctx->pc = 0x48DD1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48DD24u);
        ctx->pc = 0x48DD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DD1Cu;
            // 0x48dd20: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48DD24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48DD24u; }
            if (ctx->pc != 0x48DD24u) { return; }
        }
        }
    }
    ctx->pc = 0x48DD24u;
label_48dd24:
    // 0x48dd24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48dd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48dd28:
    // 0x48dd28: 0x3e00008  jr          $ra
label_48dd2c:
    if (ctx->pc == 0x48DD2Cu) {
        ctx->pc = 0x48DD2Cu;
            // 0x48dd2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x48DD30u;
        goto label_48dd30;
    }
    ctx->pc = 0x48DD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48DD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DD28u;
            // 0x48dd2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48DD30u;
label_48dd30:
    // 0x48dd30: 0x3e00008  jr          $ra
label_48dd34:
    if (ctx->pc == 0x48DD34u) {
        ctx->pc = 0x48DD34u;
            // 0x48dd34: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->pc = 0x48DD38u;
        goto label_48dd38;
    }
    ctx->pc = 0x48DD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48DD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DD30u;
            // 0x48dd34: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48DD38u;
label_48dd38:
    // 0x48dd38: 0x0  nop
    ctx->pc = 0x48dd38u;
    // NOP
label_48dd3c:
    // 0x48dd3c: 0x0  nop
    ctx->pc = 0x48dd3cu;
    // NOP
label_48dd40:
    // 0x48dd40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48dd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_48dd44:
    // 0x48dd44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48dd44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48dd48:
    // 0x48dd48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48dd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48dd4c:
    // 0x48dd4c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x48dd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_48dd50:
    // 0x48dd50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48dd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48dd54:
    // 0x48dd54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48dd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48dd58:
    // 0x48dd58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48dd58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48dd5c:
    // 0x48dd5c: 0xa4800046  sh          $zero, 0x46($a0)
    ctx->pc = 0x48dd5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 0));
label_48dd60:
    // 0x48dd60: 0xc04a576  jal         func_1295D8
label_48dd64:
    if (ctx->pc == 0x48DD64u) {
        ctx->pc = 0x48DD64u;
            // 0x48dd64: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->pc = 0x48DD68u;
        goto label_48dd68;
    }
    ctx->pc = 0x48DD60u;
    SET_GPR_U32(ctx, 31, 0x48DD68u);
    ctx->pc = 0x48DD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48DD60u;
            // 0x48dd64: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48DD68u; }
        if (ctx->pc != 0x48DD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48DD68u; }
        if (ctx->pc != 0x48DD68u) { return; }
    }
    ctx->pc = 0x48DD68u;
label_48dd68:
    // 0x48dd68: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x48dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
label_48dd6c:
    // 0x48dd6c: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x48dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_48dd70:
    // 0x48dd70: 0x8e30002c  lw          $s0, 0x2C($s1)
    ctx->pc = 0x48dd70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_48dd74:
    // 0x48dd74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48dd74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48dd78:
    // 0x48dd78: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x48dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_48dd7c:
    // 0x48dd7c: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x48dd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
label_48dd80:
    // 0x48dd80: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48dd80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48dd84:
    // 0x48dd84: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48dd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_48dd88:
    // 0x48dd88: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_48dd8c:
    if (ctx->pc == 0x48DD8Cu) {
        ctx->pc = 0x48DD90u;
        goto label_48dd90;
    }
    ctx->pc = 0x48DD88u;
    {
        const bool branch_taken_0x48dd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48dd88) {
            ctx->pc = 0x48DDE8u;
            goto label_48dde8;
        }
    }
    ctx->pc = 0x48DD90u;
label_48dd90:
    // 0x48dd90: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48dd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_48dd94:
    // 0x48dd94: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48dd94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48dd98:
    // 0x48dd98: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x48dd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48dd9c:
    // 0x48dd9c: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x48dd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_48dda0:
    // 0x48dda0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_48dda4:
    if (ctx->pc == 0x48DDA4u) {
        ctx->pc = 0x48DDA8u;
        goto label_48dda8;
    }
    ctx->pc = 0x48DDA0u;
    {
        const bool branch_taken_0x48dda0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48dda0) {
            ctx->pc = 0x48DDB8u;
            goto label_48ddb8;
        }
    }
    ctx->pc = 0x48DDA8u;
label_48dda8:
    // 0x48dda8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48dda8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48ddac:
    // 0x48ddac: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x48ddacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_48ddb0:
    // 0x48ddb0: 0x320f809  jalr        $t9
label_48ddb4:
    if (ctx->pc == 0x48DDB4u) {
        ctx->pc = 0x48DDB8u;
        goto label_48ddb8;
    }
    ctx->pc = 0x48DDB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48DDB8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x48DDB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48DDB8u; }
            if (ctx->pc != 0x48DDB8u) { return; }
        }
        }
    }
    ctx->pc = 0x48DDB8u;
label_48ddb8:
    // 0x48ddb8: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48ddb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_48ddbc:
    // 0x48ddbc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48ddbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48ddc0:
    // 0x48ddc0: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x48ddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_48ddc4:
    // 0x48ddc4: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x48ddc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_48ddc8:
    // 0x48ddc8: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x48ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_48ddcc:
    // 0x48ddcc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x48ddccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_48ddd0:
    // 0x48ddd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48ddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_48ddd4:
    // 0x48ddd4: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x48ddd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
label_48ddd8:
    // 0x48ddd8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48ddd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48dddc:
    // 0x48dddc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48dddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_48dde0:
    // 0x48dde0: 0x5460ffec  bnel        $v1, $zero, . + 4 + (-0x14 << 2)
label_48dde4:
    if (ctx->pc == 0x48DDE4u) {
        ctx->pc = 0x48DDE4u;
            // 0x48dde4: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x48DDE8u;
        goto label_48dde8;
    }
    ctx->pc = 0x48DDE0u;
    {
        const bool branch_taken_0x48dde0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48dde0) {
            ctx->pc = 0x48DDE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48DDE0u;
            // 0x48dde4: 0x10183c  dsll32      $v1, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48DD94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48dd94;
        }
    }
    ctx->pc = 0x48DDE8u;
label_48dde8:
    // 0x48dde8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48dde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48ddec:
    // 0x48ddec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48ddecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48ddf0:
    // 0x48ddf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48ddf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48ddf4:
    // 0x48ddf4: 0x3e00008  jr          $ra
label_48ddf8:
    if (ctx->pc == 0x48DDF8u) {
        ctx->pc = 0x48DDF8u;
            // 0x48ddf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x48DDFCu;
        goto label_48ddfc;
    }
    ctx->pc = 0x48DDF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48DDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DDF4u;
            // 0x48ddf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48DDFCu;
label_48ddfc:
    // 0x48ddfc: 0x0  nop
    ctx->pc = 0x48ddfcu;
    // NOP
label_48de00:
    // 0x48de00: 0x3e00008  jr          $ra
label_48de04:
    if (ctx->pc == 0x48DE04u) {
        ctx->pc = 0x48DE08u;
        goto label_48de08;
    }
    ctx->pc = 0x48DE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48DE08u;
label_48de08:
    // 0x48de08: 0x0  nop
    ctx->pc = 0x48de08u;
    // NOP
label_48de0c:
    // 0x48de0c: 0x0  nop
    ctx->pc = 0x48de0cu;
    // NOP
label_48de10:
    // 0x48de10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x48de10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_48de14:
    // 0x48de14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x48de14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_48de18:
    // 0x48de18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x48de18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_48de1c:
    // 0x48de1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48de1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48de20:
    // 0x48de20: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x48de20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48de24:
    // 0x48de24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48de24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48de28:
    // 0x48de28: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x48de28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_48de2c:
    // 0x48de2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48de2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48de30:
    // 0x48de30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48de30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48de34:
    // 0x48de34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48de34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48de38:
    // 0x48de38: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x48de38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
label_48de3c:
    // 0x48de3c: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
label_48de40:
    if (ctx->pc == 0x48DE40u) {
        ctx->pc = 0x48DE40u;
            // 0x48de40: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48DE44u;
        goto label_48de44;
    }
    ctx->pc = 0x48DE3Cu;
    {
        const bool branch_taken_0x48de3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48DE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DE3Cu;
            // 0x48de40: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48de3c) {
            ctx->pc = 0x48E090u;
            goto label_48e090;
        }
    }
    ctx->pc = 0x48DE44u;
label_48de44:
    // 0x48de44: 0x92a500e8  lbu         $a1, 0xE8($s5)
    ctx->pc = 0x48de44u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 232)));
label_48de48:
    // 0x48de48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x48de48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48de4c:
    // 0x48de4c: 0x8eb0002c  lw          $s0, 0x2C($s5)
    ctx->pc = 0x48de4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_48de50:
    // 0x48de50: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x48de50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_48de54:
    // 0x48de54: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
label_48de58:
    if (ctx->pc == 0x48DE58u) {
        ctx->pc = 0x48DE58u;
            // 0x48de58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48DE5Cu;
        goto label_48de5c;
    }
    ctx->pc = 0x48DE54u;
    {
        const bool branch_taken_0x48de54 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x48DE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DE54u;
            // 0x48de58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48de54) {
            ctx->pc = 0x48DE9Cu;
            goto label_48de9c;
        }
    }
    ctx->pc = 0x48DE5Cu;
label_48de5c:
    // 0x48de5c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x48de5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_48de60:
    // 0x48de60: 0x50a3000b  beql        $a1, $v1, . + 4 + (0xB << 2)
label_48de64:
    if (ctx->pc == 0x48DE64u) {
        ctx->pc = 0x48DE64u;
            // 0x48de64: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x48DE68u;
        goto label_48de68;
    }
    ctx->pc = 0x48DE60u;
    {
        const bool branch_taken_0x48de60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x48de60) {
            ctx->pc = 0x48DE64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48DE60u;
            // 0x48de64: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48DE90u;
            goto label_48de90;
        }
    }
    ctx->pc = 0x48DE68u;
label_48de68:
    // 0x48de68: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x48de68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_48de6c:
    // 0x48de6c: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_48de70:
    if (ctx->pc == 0x48DE70u) {
        ctx->pc = 0x48DE70u;
            // 0x48de70: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x48DE74u;
        goto label_48de74;
    }
    ctx->pc = 0x48DE6Cu;
    {
        const bool branch_taken_0x48de6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x48de6c) {
            ctx->pc = 0x48DE70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48DE6Cu;
            // 0x48de70: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48DE7Cu;
            goto label_48de7c;
        }
    }
    ctx->pc = 0x48DE74u;
label_48de74:
    // 0x48de74: 0x1000000a  b           . + 4 + (0xA << 2)
label_48de78:
    if (ctx->pc == 0x48DE78u) {
        ctx->pc = 0x48DE78u;
            // 0x48de78: 0x8ea50028  lw          $a1, 0x28($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
        ctx->pc = 0x48DE7Cu;
        goto label_48de7c;
    }
    ctx->pc = 0x48DE74u;
    {
        const bool branch_taken_0x48de74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48DE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DE74u;
            // 0x48de78: 0x8ea50028  lw          $a1, 0x28($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48de74) {
            ctx->pc = 0x48DEA0u;
            goto label_48dea0;
        }
    }
    ctx->pc = 0x48DE7Cu;
label_48de7c:
    // 0x48de7c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x48de7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_48de80:
    // 0x48de80: 0x320f809  jalr        $t9
label_48de84:
    if (ctx->pc == 0x48DE84u) {
        ctx->pc = 0x48DE88u;
        goto label_48de88;
    }
    ctx->pc = 0x48DE80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48DE88u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x48DE88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48DE88u; }
            if (ctx->pc != 0x48DE88u) { return; }
        }
        }
    }
    ctx->pc = 0x48DE88u;
label_48de88:
    // 0x48de88: 0x10000004  b           . + 4 + (0x4 << 2)
label_48de8c:
    if (ctx->pc == 0x48DE8Cu) {
        ctx->pc = 0x48DE90u;
        goto label_48de90;
    }
    ctx->pc = 0x48DE88u;
    {
        const bool branch_taken_0x48de88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48de88) {
            ctx->pc = 0x48DE9Cu;
            goto label_48de9c;
        }
    }
    ctx->pc = 0x48DE90u;
label_48de90:
    // 0x48de90: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x48de90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_48de94:
    // 0x48de94: 0x320f809  jalr        $t9
label_48de98:
    if (ctx->pc == 0x48DE98u) {
        ctx->pc = 0x48DE9Cu;
        goto label_48de9c;
    }
    ctx->pc = 0x48DE94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48DE9Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x48DE9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48DE9Cu; }
            if (ctx->pc != 0x48DE9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48DE9Cu;
label_48de9c:
    // 0x48de9c: 0x8ea50028  lw          $a1, 0x28($s5)
    ctx->pc = 0x48de9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_48dea0:
    // 0x48dea0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48dea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_48dea4:
    // 0x48dea4: 0x8ea4002c  lw          $a0, 0x2C($s5)
    ctx->pc = 0x48dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_48dea8:
    // 0x48dea8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48dea8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48deac:
    // 0x48deac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x48deacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_48deb0:
    // 0x48deb0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x48deb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_48deb4:
    // 0x48deb4: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x48deb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_48deb8:
    // 0x48deb8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48deb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48debc:
    // 0x48debc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48debcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_48dec0:
    // 0x48dec0: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
label_48dec4:
    if (ctx->pc == 0x48DEC4u) {
        ctx->pc = 0x48DEC8u;
        goto label_48dec8;
    }
    ctx->pc = 0x48DEC0u;
    {
        const bool branch_taken_0x48dec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48dec0) {
            ctx->pc = 0x48E018u;
            goto label_48e018;
        }
    }
    ctx->pc = 0x48DEC8u;
label_48dec8:
    // 0x48dec8: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
label_48decc:
    if (ctx->pc == 0x48DECCu) {
        ctx->pc = 0x48DED0u;
        goto label_48ded0;
    }
    ctx->pc = 0x48DEC8u;
    {
        const bool branch_taken_0x48dec8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x48dec8) {
            ctx->pc = 0x48DF20u;
            goto label_48df20;
        }
    }
    ctx->pc = 0x48DED0u;
label_48ded0:
    // 0x48ded0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48ded0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_48ded4:
    // 0x48ded4: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x48ded4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_48ded8:
    // 0x48ded8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48ded8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48dedc:
    // 0x48dedc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x48dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48dee0:
    // 0x48dee0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x48dee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48dee4:
    // 0x48dee4: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x48dee4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_48dee8:
    // 0x48dee8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_48deec:
    if (ctx->pc == 0x48DEECu) {
        ctx->pc = 0x48DEF0u;
        goto label_48def0;
    }
    ctx->pc = 0x48DEE8u;
    {
        const bool branch_taken_0x48dee8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x48dee8) {
            ctx->pc = 0x48DF20u;
            goto label_48df20;
        }
    }
    ctx->pc = 0x48DEF0u;
label_48def0:
    // 0x48def0: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x48def0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_48def4:
    // 0x48def4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x48def4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_48def8:
    // 0x48def8: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x48def8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_48defc:
    // 0x48defc: 0x320f809  jalr        $t9
label_48df00:
    if (ctx->pc == 0x48DF00u) {
        ctx->pc = 0x48DF00u;
            // 0x48df00: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48DF04u;
        goto label_48df04;
    }
    ctx->pc = 0x48DEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48DF04u);
        ctx->pc = 0x48DF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DEFCu;
            // 0x48df00: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48DF04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48DF04u; }
            if (ctx->pc != 0x48DF04u) { return; }
        }
        }
    }
    ctx->pc = 0x48DF04u;
label_48df04:
    // 0x48df04: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x48df04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_48df08:
    // 0x48df08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x48df08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_48df0c:
    // 0x48df0c: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x48df0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_48df10:
    // 0x48df10: 0x320f809  jalr        $t9
label_48df14:
    if (ctx->pc == 0x48DF14u) {
        ctx->pc = 0x48DF14u;
            // 0x48df14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48DF18u;
        goto label_48df18;
    }
    ctx->pc = 0x48DF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48DF18u);
        ctx->pc = 0x48DF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DF10u;
            // 0x48df14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48DF18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48DF18u; }
            if (ctx->pc != 0x48DF18u) { return; }
        }
        }
    }
    ctx->pc = 0x48DF18u;
label_48df18:
    // 0x48df18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x48df18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48df1c:
    // 0x48df1c: 0x0  nop
    ctx->pc = 0x48df1cu;
    // NOP
label_48df20:
    // 0x48df20: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48df20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_48df24:
    // 0x48df24: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48df24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48df28:
    // 0x48df28: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x48df28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_48df2c:
    // 0x48df2c: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x48df2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_48df30:
    // 0x48df30: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
label_48df34:
    if (ctx->pc == 0x48DF34u) {
        ctx->pc = 0x48DF38u;
        goto label_48df38;
    }
    ctx->pc = 0x48DF30u;
    {
        const bool branch_taken_0x48df30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48df30) {
            ctx->pc = 0x48DFE8u;
            goto label_48dfe8;
        }
    }
    ctx->pc = 0x48DF38u;
label_48df38:
    // 0x48df38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48df38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48df3c:
    // 0x48df3c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x48df3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_48df40:
    // 0x48df40: 0x320f809  jalr        $t9
label_48df44:
    if (ctx->pc == 0x48DF44u) {
        ctx->pc = 0x48DF48u;
        goto label_48df48;
    }
    ctx->pc = 0x48DF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48DF48u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x48DF48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48DF48u; }
            if (ctx->pc != 0x48DF48u) { return; }
        }
        }
    }
    ctx->pc = 0x48DF48u;
label_48df48:
    // 0x48df48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_48df4c:
    if (ctx->pc == 0x48DF4Cu) {
        ctx->pc = 0x48DF50u;
        goto label_48df50;
    }
    ctx->pc = 0x48DF48u;
    {
        const bool branch_taken_0x48df48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48df48) {
            ctx->pc = 0x48DF68u;
            goto label_48df68;
        }
    }
    ctx->pc = 0x48DF50u;
label_48df50:
    // 0x48df50: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x48df50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_48df54:
    // 0x48df54: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x48df54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_48df58:
    // 0x48df58: 0x320f809  jalr        $t9
label_48df5c:
    if (ctx->pc == 0x48DF5Cu) {
        ctx->pc = 0x48DF5Cu;
            // 0x48df5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48DF60u;
        goto label_48df60;
    }
    ctx->pc = 0x48DF58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48DF60u);
        ctx->pc = 0x48DF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DF58u;
            // 0x48df5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48DF60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48DF60u; }
            if (ctx->pc != 0x48DF60u) { return; }
        }
        }
    }
    ctx->pc = 0x48DF60u;
label_48df60:
    // 0x48df60: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x48df60u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_48df64:
    // 0x48df64: 0x0  nop
    ctx->pc = 0x48df64u;
    // NOP
label_48df68:
    // 0x48df68: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x48df68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_48df6c:
    // 0x48df6c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48df6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48df70:
    // 0x48df70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x48df70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_48df74:
    // 0x48df74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48df74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48df78:
    // 0x48df78: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x48df78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48df7c:
    // 0x48df7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48df7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48df80:
    // 0x48df80: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x48df80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_48df84:
    // 0x48df84: 0x320f809  jalr        $t9
label_48df88:
    if (ctx->pc == 0x48DF88u) {
        ctx->pc = 0x48DF88u;
            // 0x48df88: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48DF8Cu;
        goto label_48df8c;
    }
    ctx->pc = 0x48DF84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48DF8Cu);
        ctx->pc = 0x48DF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DF84u;
            // 0x48df88: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48DF8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48DF8Cu; }
            if (ctx->pc != 0x48DF8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48DF8Cu;
label_48df8c:
    // 0x48df8c: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x48df8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_48df90:
    // 0x48df90: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48df90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48df94:
    // 0x48df94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48df94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48df98:
    // 0x48df98: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x48df98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48df9c:
    // 0x48df9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48df9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48dfa0:
    // 0x48dfa0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x48dfa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_48dfa4:
    // 0x48dfa4: 0x320f809  jalr        $t9
label_48dfa8:
    if (ctx->pc == 0x48DFA8u) {
        ctx->pc = 0x48DFACu;
        goto label_48dfac;
    }
    ctx->pc = 0x48DFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48DFACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x48DFACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48DFACu; }
            if (ctx->pc != 0x48DFACu) { return; }
        }
        }
    }
    ctx->pc = 0x48DFACu;
label_48dfac:
    // 0x48dfac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_48dfb0:
    if (ctx->pc == 0x48DFB0u) {
        ctx->pc = 0x48DFB4u;
        goto label_48dfb4;
    }
    ctx->pc = 0x48DFACu;
    {
        const bool branch_taken_0x48dfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48dfac) {
            ctx->pc = 0x48DFE8u;
            goto label_48dfe8;
        }
    }
    ctx->pc = 0x48DFB4u;
label_48dfb4:
    // 0x48dfb4: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x48dfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_48dfb8:
    // 0x48dfb8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48dfb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48dfbc:
    // 0x48dfbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48dfc0:
    // 0x48dfc0: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x48dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48dfc4:
    // 0x48dfc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48dfc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48dfc8:
    // 0x48dfc8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x48dfc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_48dfcc:
    // 0x48dfcc: 0x320f809  jalr        $t9
label_48dfd0:
    if (ctx->pc == 0x48DFD0u) {
        ctx->pc = 0x48DFD4u;
        goto label_48dfd4;
    }
    ctx->pc = 0x48DFCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48DFD4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x48DFD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48DFD4u; }
            if (ctx->pc != 0x48DFD4u) { return; }
        }
        }
    }
    ctx->pc = 0x48DFD4u;
label_48dfd4:
    // 0x48dfd4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x48dfd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_48dfd8:
    // 0x48dfd8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x48dfd8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48dfdc:
    // 0x48dfdc: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x48dfdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_48dfe0:
    // 0x48dfe0: 0x320f809  jalr        $t9
label_48dfe4:
    if (ctx->pc == 0x48DFE4u) {
        ctx->pc = 0x48DFE4u;
            // 0x48dfe4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48DFE8u;
        goto label_48dfe8;
    }
    ctx->pc = 0x48DFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48DFE8u);
        ctx->pc = 0x48DFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48DFE0u;
            // 0x48dfe4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48DFE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48DFE8u; }
            if (ctx->pc != 0x48DFE8u) { return; }
        }
        }
    }
    ctx->pc = 0x48DFE8u;
label_48dfe8:
    // 0x48dfe8: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x48dfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_48dfec:
    // 0x48dfec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x48dfecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_48dff0:
    // 0x48dff0: 0x8ea40028  lw          $a0, 0x28($s5)
    ctx->pc = 0x48dff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_48dff4:
    // 0x48dff4: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x48dff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_48dff8:
    // 0x48dff8: 0x8ea3002c  lw          $v1, 0x2C($s5)
    ctx->pc = 0x48dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_48dffc:
    // 0x48dffc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x48dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_48e000:
    // 0x48e000: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x48e000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_48e004:
    // 0x48e004: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x48e004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
label_48e008:
    // 0x48e008: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x48e008u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48e00c:
    // 0x48e00c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x48e00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_48e010:
    // 0x48e010: 0x1460ffad  bnez        $v1, . + 4 + (-0x53 << 2)
label_48e014:
    if (ctx->pc == 0x48E014u) {
        ctx->pc = 0x48E018u;
        goto label_48e018;
    }
    ctx->pc = 0x48E010u;
    {
        const bool branch_taken_0x48e010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e010) {
            ctx->pc = 0x48DEC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48dec8;
        }
    }
    ctx->pc = 0x48E018u;
label_48e018:
    // 0x48e018: 0xa2a00044  sb          $zero, 0x44($s5)
    ctx->pc = 0x48e018u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 68), (uint8_t)GPR_U32(ctx, 0));
label_48e01c:
    // 0x48e01c: 0xaea00040  sw          $zero, 0x40($s5)
    ctx->pc = 0x48e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 0));
label_48e020:
    // 0x48e020: 0xaea000e0  sw          $zero, 0xE0($s5)
    ctx->pc = 0x48e020u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 224), GPR_U32(ctx, 0));
label_48e024:
    // 0x48e024: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_48e028:
    if (ctx->pc == 0x48E028u) {
        ctx->pc = 0x48E028u;
            // 0x48e028: 0xaea000e4  sw          $zero, 0xE4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x48E02Cu;
        goto label_48e02c;
    }
    ctx->pc = 0x48E024u;
    {
        const bool branch_taken_0x48e024 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E024u;
            // 0x48e028: 0xaea000e4  sw          $zero, 0xE4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e024) {
            ctx->pc = 0x48E050u;
            goto label_48e050;
        }
    }
    ctx->pc = 0x48E02Cu;
label_48e02c:
    // 0x48e02c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x48e02cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_48e030:
    // 0x48e030: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x48e030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_48e034:
    // 0x48e034: 0x320f809  jalr        $t9
label_48e038:
    if (ctx->pc == 0x48E038u) {
        ctx->pc = 0x48E038u;
            // 0x48e038: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48E03Cu;
        goto label_48e03c;
    }
    ctx->pc = 0x48E034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48E03Cu);
        ctx->pc = 0x48E038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E034u;
            // 0x48e038: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48E03Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48E03Cu; }
            if (ctx->pc != 0x48E03Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48E03Cu;
label_48e03c:
    // 0x48e03c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x48e03cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_48e040:
    // 0x48e040: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x48e040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_48e044:
    // 0x48e044: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x48e044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_48e048:
    // 0x48e048: 0x320f809  jalr        $t9
label_48e04c:
    if (ctx->pc == 0x48E04Cu) {
        ctx->pc = 0x48E04Cu;
            // 0x48e04c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48E050u;
        goto label_48e050;
    }
    ctx->pc = 0x48E048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48E050u);
        ctx->pc = 0x48E04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E048u;
            // 0x48e04c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48E050u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48E050u; }
            if (ctx->pc != 0x48E050u) { return; }
        }
        }
    }
    ctx->pc = 0x48E050u;
label_48e050:
    // 0x48e050: 0x92a400e8  lbu         $a0, 0xE8($s5)
    ctx->pc = 0x48e050u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 232)));
label_48e054:
    // 0x48e054: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x48e054u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_48e058:
    // 0x48e058: 0x5420000e  bnel        $at, $zero, . + 4 + (0xE << 2)
label_48e05c:
    if (ctx->pc == 0x48E05Cu) {
        ctx->pc = 0x48E05Cu;
            // 0x48e05c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x48E060u;
        goto label_48e060;
    }
    ctx->pc = 0x48E058u;
    {
        const bool branch_taken_0x48e058 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x48e058) {
            ctx->pc = 0x48E05Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E058u;
            // 0x48e05c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E094u;
            goto label_48e094;
        }
    }
    ctx->pc = 0x48E060u;
label_48e060:
    // 0x48e060: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x48e060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_48e064:
    // 0x48e064: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_48e068:
    if (ctx->pc == 0x48E068u) {
        ctx->pc = 0x48E068u;
            // 0x48e068: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x48E06Cu;
        goto label_48e06c;
    }
    ctx->pc = 0x48E064u;
    {
        const bool branch_taken_0x48e064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x48e064) {
            ctx->pc = 0x48E068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48E064u;
            // 0x48e068: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48E084u;
            goto label_48e084;
        }
    }
    ctx->pc = 0x48E06Cu;
label_48e06c:
    // 0x48e06c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x48e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_48e070:
    // 0x48e070: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_48e074:
    if (ctx->pc == 0x48E074u) {
        ctx->pc = 0x48E078u;
        goto label_48e078;
    }
    ctx->pc = 0x48E070u;
    {
        const bool branch_taken_0x48e070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x48e070) {
            ctx->pc = 0x48E080u;
            goto label_48e080;
        }
    }
    ctx->pc = 0x48E078u;
label_48e078:
    // 0x48e078: 0x10000005  b           . + 4 + (0x5 << 2)
label_48e07c:
    if (ctx->pc == 0x48E07Cu) {
        ctx->pc = 0x48E080u;
        goto label_48e080;
    }
    ctx->pc = 0x48E078u;
    {
        const bool branch_taken_0x48e078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48e078) {
            ctx->pc = 0x48E090u;
            goto label_48e090;
        }
    }
    ctx->pc = 0x48E080u;
label_48e080:
    // 0x48e080: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x48e080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_48e084:
    // 0x48e084: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x48e084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_48e088:
    // 0x48e088: 0x320f809  jalr        $t9
label_48e08c:
    if (ctx->pc == 0x48E08Cu) {
        ctx->pc = 0x48E08Cu;
            // 0x48e08c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48E090u;
        goto label_48e090;
    }
    ctx->pc = 0x48E088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48E090u);
        ctx->pc = 0x48E08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E088u;
            // 0x48e08c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48E090u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48E090u; }
            if (ctx->pc != 0x48E090u) { return; }
        }
        }
    }
    ctx->pc = 0x48E090u;
label_48e090:
    // 0x48e090: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x48e090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_48e094:
    // 0x48e094: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x48e094u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_48e098:
    // 0x48e098: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x48e098u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48e09c:
    // 0x48e09c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48e09cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48e0a0:
    // 0x48e0a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48e0a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48e0a4:
    // 0x48e0a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48e0a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48e0a8:
    // 0x48e0a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48e0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48e0ac:
    // 0x48e0ac: 0x3e00008  jr          $ra
label_48e0b0:
    if (ctx->pc == 0x48E0B0u) {
        ctx->pc = 0x48E0B0u;
            // 0x48e0b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x48E0B4u;
        goto label_48e0b4;
    }
    ctx->pc = 0x48E0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E0ACu;
            // 0x48e0b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48E0B4u;
label_48e0b4:
    // 0x48e0b4: 0x0  nop
    ctx->pc = 0x48e0b4u;
    // NOP
label_48e0b8:
    // 0x48e0b8: 0x0  nop
    ctx->pc = 0x48e0b8u;
    // NOP
label_48e0bc:
    // 0x48e0bc: 0x0  nop
    ctx->pc = 0x48e0bcu;
    // NOP
label_48e0c0:
    // 0x48e0c0: 0x3e00008  jr          $ra
label_48e0c4:
    if (ctx->pc == 0x48E0C4u) {
        ctx->pc = 0x48E0C8u;
        goto label_48e0c8;
    }
    ctx->pc = 0x48E0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48E0C8u;
label_48e0c8:
    // 0x48e0c8: 0x0  nop
    ctx->pc = 0x48e0c8u;
    // NOP
label_48e0cc:
    // 0x48e0cc: 0x0  nop
    ctx->pc = 0x48e0ccu;
    // NOP
label_48e0d0:
    // 0x48e0d0: 0x3e00008  jr          $ra
label_48e0d4:
    if (ctx->pc == 0x48E0D4u) {
        ctx->pc = 0x48E0D8u;
        goto label_48e0d8;
    }
    ctx->pc = 0x48E0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48E0D8u;
label_48e0d8:
    // 0x48e0d8: 0x0  nop
    ctx->pc = 0x48e0d8u;
    // NOP
label_48e0dc:
    // 0x48e0dc: 0x0  nop
    ctx->pc = 0x48e0dcu;
    // NOP
label_48e0e0:
    // 0x48e0e0: 0x3e00008  jr          $ra
label_48e0e4:
    if (ctx->pc == 0x48E0E4u) {
        ctx->pc = 0x48E0E8u;
        goto label_48e0e8;
    }
    ctx->pc = 0x48E0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48E0E8u;
label_48e0e8:
    // 0x48e0e8: 0x0  nop
    ctx->pc = 0x48e0e8u;
    // NOP
label_48e0ec:
    // 0x48e0ec: 0x0  nop
    ctx->pc = 0x48e0ecu;
    // NOP
label_48e0f0:
    // 0x48e0f0: 0x3e00008  jr          $ra
label_48e0f4:
    if (ctx->pc == 0x48E0F4u) {
        ctx->pc = 0x48E0F4u;
            // 0x48e0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48E0F8u;
        goto label_48e0f8;
    }
    ctx->pc = 0x48E0F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48E0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48E0F0u;
            // 0x48e0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48E0F8u;
label_48e0f8:
    // 0x48e0f8: 0x0  nop
    ctx->pc = 0x48e0f8u;
    // NOP
label_48e0fc:
    // 0x48e0fc: 0x0  nop
    ctx->pc = 0x48e0fcu;
    // NOP
label_48e100:
    // 0x48e100: 0x3e00008  jr          $ra
label_48e104:
    if (ctx->pc == 0x48E104u) {
        ctx->pc = 0x48E108u;
        goto label_48e108;
    }
    ctx->pc = 0x48E100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48E108u;
label_48e108:
    // 0x48e108: 0x0  nop
    ctx->pc = 0x48e108u;
    // NOP
label_48e10c:
    // 0x48e10c: 0x0  nop
    ctx->pc = 0x48e10cu;
    // NOP
label_48e110:
    // 0x48e110: 0x3e00008  jr          $ra
label_48e114:
    if (ctx->pc == 0x48E114u) {
        ctx->pc = 0x48E118u;
        goto label_48e118;
    }
    ctx->pc = 0x48E110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48E118u;
label_48e118:
    // 0x48e118: 0x0  nop
    ctx->pc = 0x48e118u;
    // NOP
label_48e11c:
    // 0x48e11c: 0x0  nop
    ctx->pc = 0x48e11cu;
    // NOP
}
