#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038D960
// Address: 0x38d960 - 0x38e3b0
void sub_0038D960_0x38d960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D960_0x38d960");
#endif

    switch (ctx->pc) {
        case 0x38d960u: goto label_38d960;
        case 0x38d964u: goto label_38d964;
        case 0x38d968u: goto label_38d968;
        case 0x38d96cu: goto label_38d96c;
        case 0x38d970u: goto label_38d970;
        case 0x38d974u: goto label_38d974;
        case 0x38d978u: goto label_38d978;
        case 0x38d97cu: goto label_38d97c;
        case 0x38d980u: goto label_38d980;
        case 0x38d984u: goto label_38d984;
        case 0x38d988u: goto label_38d988;
        case 0x38d98cu: goto label_38d98c;
        case 0x38d990u: goto label_38d990;
        case 0x38d994u: goto label_38d994;
        case 0x38d998u: goto label_38d998;
        case 0x38d99cu: goto label_38d99c;
        case 0x38d9a0u: goto label_38d9a0;
        case 0x38d9a4u: goto label_38d9a4;
        case 0x38d9a8u: goto label_38d9a8;
        case 0x38d9acu: goto label_38d9ac;
        case 0x38d9b0u: goto label_38d9b0;
        case 0x38d9b4u: goto label_38d9b4;
        case 0x38d9b8u: goto label_38d9b8;
        case 0x38d9bcu: goto label_38d9bc;
        case 0x38d9c0u: goto label_38d9c0;
        case 0x38d9c4u: goto label_38d9c4;
        case 0x38d9c8u: goto label_38d9c8;
        case 0x38d9ccu: goto label_38d9cc;
        case 0x38d9d0u: goto label_38d9d0;
        case 0x38d9d4u: goto label_38d9d4;
        case 0x38d9d8u: goto label_38d9d8;
        case 0x38d9dcu: goto label_38d9dc;
        case 0x38d9e0u: goto label_38d9e0;
        case 0x38d9e4u: goto label_38d9e4;
        case 0x38d9e8u: goto label_38d9e8;
        case 0x38d9ecu: goto label_38d9ec;
        case 0x38d9f0u: goto label_38d9f0;
        case 0x38d9f4u: goto label_38d9f4;
        case 0x38d9f8u: goto label_38d9f8;
        case 0x38d9fcu: goto label_38d9fc;
        case 0x38da00u: goto label_38da00;
        case 0x38da04u: goto label_38da04;
        case 0x38da08u: goto label_38da08;
        case 0x38da0cu: goto label_38da0c;
        case 0x38da10u: goto label_38da10;
        case 0x38da14u: goto label_38da14;
        case 0x38da18u: goto label_38da18;
        case 0x38da1cu: goto label_38da1c;
        case 0x38da20u: goto label_38da20;
        case 0x38da24u: goto label_38da24;
        case 0x38da28u: goto label_38da28;
        case 0x38da2cu: goto label_38da2c;
        case 0x38da30u: goto label_38da30;
        case 0x38da34u: goto label_38da34;
        case 0x38da38u: goto label_38da38;
        case 0x38da3cu: goto label_38da3c;
        case 0x38da40u: goto label_38da40;
        case 0x38da44u: goto label_38da44;
        case 0x38da48u: goto label_38da48;
        case 0x38da4cu: goto label_38da4c;
        case 0x38da50u: goto label_38da50;
        case 0x38da54u: goto label_38da54;
        case 0x38da58u: goto label_38da58;
        case 0x38da5cu: goto label_38da5c;
        case 0x38da60u: goto label_38da60;
        case 0x38da64u: goto label_38da64;
        case 0x38da68u: goto label_38da68;
        case 0x38da6cu: goto label_38da6c;
        case 0x38da70u: goto label_38da70;
        case 0x38da74u: goto label_38da74;
        case 0x38da78u: goto label_38da78;
        case 0x38da7cu: goto label_38da7c;
        case 0x38da80u: goto label_38da80;
        case 0x38da84u: goto label_38da84;
        case 0x38da88u: goto label_38da88;
        case 0x38da8cu: goto label_38da8c;
        case 0x38da90u: goto label_38da90;
        case 0x38da94u: goto label_38da94;
        case 0x38da98u: goto label_38da98;
        case 0x38da9cu: goto label_38da9c;
        case 0x38daa0u: goto label_38daa0;
        case 0x38daa4u: goto label_38daa4;
        case 0x38daa8u: goto label_38daa8;
        case 0x38daacu: goto label_38daac;
        case 0x38dab0u: goto label_38dab0;
        case 0x38dab4u: goto label_38dab4;
        case 0x38dab8u: goto label_38dab8;
        case 0x38dabcu: goto label_38dabc;
        case 0x38dac0u: goto label_38dac0;
        case 0x38dac4u: goto label_38dac4;
        case 0x38dac8u: goto label_38dac8;
        case 0x38daccu: goto label_38dacc;
        case 0x38dad0u: goto label_38dad0;
        case 0x38dad4u: goto label_38dad4;
        case 0x38dad8u: goto label_38dad8;
        case 0x38dadcu: goto label_38dadc;
        case 0x38dae0u: goto label_38dae0;
        case 0x38dae4u: goto label_38dae4;
        case 0x38dae8u: goto label_38dae8;
        case 0x38daecu: goto label_38daec;
        case 0x38daf0u: goto label_38daf0;
        case 0x38daf4u: goto label_38daf4;
        case 0x38daf8u: goto label_38daf8;
        case 0x38dafcu: goto label_38dafc;
        case 0x38db00u: goto label_38db00;
        case 0x38db04u: goto label_38db04;
        case 0x38db08u: goto label_38db08;
        case 0x38db0cu: goto label_38db0c;
        case 0x38db10u: goto label_38db10;
        case 0x38db14u: goto label_38db14;
        case 0x38db18u: goto label_38db18;
        case 0x38db1cu: goto label_38db1c;
        case 0x38db20u: goto label_38db20;
        case 0x38db24u: goto label_38db24;
        case 0x38db28u: goto label_38db28;
        case 0x38db2cu: goto label_38db2c;
        case 0x38db30u: goto label_38db30;
        case 0x38db34u: goto label_38db34;
        case 0x38db38u: goto label_38db38;
        case 0x38db3cu: goto label_38db3c;
        case 0x38db40u: goto label_38db40;
        case 0x38db44u: goto label_38db44;
        case 0x38db48u: goto label_38db48;
        case 0x38db4cu: goto label_38db4c;
        case 0x38db50u: goto label_38db50;
        case 0x38db54u: goto label_38db54;
        case 0x38db58u: goto label_38db58;
        case 0x38db5cu: goto label_38db5c;
        case 0x38db60u: goto label_38db60;
        case 0x38db64u: goto label_38db64;
        case 0x38db68u: goto label_38db68;
        case 0x38db6cu: goto label_38db6c;
        case 0x38db70u: goto label_38db70;
        case 0x38db74u: goto label_38db74;
        case 0x38db78u: goto label_38db78;
        case 0x38db7cu: goto label_38db7c;
        case 0x38db80u: goto label_38db80;
        case 0x38db84u: goto label_38db84;
        case 0x38db88u: goto label_38db88;
        case 0x38db8cu: goto label_38db8c;
        case 0x38db90u: goto label_38db90;
        case 0x38db94u: goto label_38db94;
        case 0x38db98u: goto label_38db98;
        case 0x38db9cu: goto label_38db9c;
        case 0x38dba0u: goto label_38dba0;
        case 0x38dba4u: goto label_38dba4;
        case 0x38dba8u: goto label_38dba8;
        case 0x38dbacu: goto label_38dbac;
        case 0x38dbb0u: goto label_38dbb0;
        case 0x38dbb4u: goto label_38dbb4;
        case 0x38dbb8u: goto label_38dbb8;
        case 0x38dbbcu: goto label_38dbbc;
        case 0x38dbc0u: goto label_38dbc0;
        case 0x38dbc4u: goto label_38dbc4;
        case 0x38dbc8u: goto label_38dbc8;
        case 0x38dbccu: goto label_38dbcc;
        case 0x38dbd0u: goto label_38dbd0;
        case 0x38dbd4u: goto label_38dbd4;
        case 0x38dbd8u: goto label_38dbd8;
        case 0x38dbdcu: goto label_38dbdc;
        case 0x38dbe0u: goto label_38dbe0;
        case 0x38dbe4u: goto label_38dbe4;
        case 0x38dbe8u: goto label_38dbe8;
        case 0x38dbecu: goto label_38dbec;
        case 0x38dbf0u: goto label_38dbf0;
        case 0x38dbf4u: goto label_38dbf4;
        case 0x38dbf8u: goto label_38dbf8;
        case 0x38dbfcu: goto label_38dbfc;
        case 0x38dc00u: goto label_38dc00;
        case 0x38dc04u: goto label_38dc04;
        case 0x38dc08u: goto label_38dc08;
        case 0x38dc0cu: goto label_38dc0c;
        case 0x38dc10u: goto label_38dc10;
        case 0x38dc14u: goto label_38dc14;
        case 0x38dc18u: goto label_38dc18;
        case 0x38dc1cu: goto label_38dc1c;
        case 0x38dc20u: goto label_38dc20;
        case 0x38dc24u: goto label_38dc24;
        case 0x38dc28u: goto label_38dc28;
        case 0x38dc2cu: goto label_38dc2c;
        case 0x38dc30u: goto label_38dc30;
        case 0x38dc34u: goto label_38dc34;
        case 0x38dc38u: goto label_38dc38;
        case 0x38dc3cu: goto label_38dc3c;
        case 0x38dc40u: goto label_38dc40;
        case 0x38dc44u: goto label_38dc44;
        case 0x38dc48u: goto label_38dc48;
        case 0x38dc4cu: goto label_38dc4c;
        case 0x38dc50u: goto label_38dc50;
        case 0x38dc54u: goto label_38dc54;
        case 0x38dc58u: goto label_38dc58;
        case 0x38dc5cu: goto label_38dc5c;
        case 0x38dc60u: goto label_38dc60;
        case 0x38dc64u: goto label_38dc64;
        case 0x38dc68u: goto label_38dc68;
        case 0x38dc6cu: goto label_38dc6c;
        case 0x38dc70u: goto label_38dc70;
        case 0x38dc74u: goto label_38dc74;
        case 0x38dc78u: goto label_38dc78;
        case 0x38dc7cu: goto label_38dc7c;
        case 0x38dc80u: goto label_38dc80;
        case 0x38dc84u: goto label_38dc84;
        case 0x38dc88u: goto label_38dc88;
        case 0x38dc8cu: goto label_38dc8c;
        case 0x38dc90u: goto label_38dc90;
        case 0x38dc94u: goto label_38dc94;
        case 0x38dc98u: goto label_38dc98;
        case 0x38dc9cu: goto label_38dc9c;
        case 0x38dca0u: goto label_38dca0;
        case 0x38dca4u: goto label_38dca4;
        case 0x38dca8u: goto label_38dca8;
        case 0x38dcacu: goto label_38dcac;
        case 0x38dcb0u: goto label_38dcb0;
        case 0x38dcb4u: goto label_38dcb4;
        case 0x38dcb8u: goto label_38dcb8;
        case 0x38dcbcu: goto label_38dcbc;
        case 0x38dcc0u: goto label_38dcc0;
        case 0x38dcc4u: goto label_38dcc4;
        case 0x38dcc8u: goto label_38dcc8;
        case 0x38dcccu: goto label_38dccc;
        case 0x38dcd0u: goto label_38dcd0;
        case 0x38dcd4u: goto label_38dcd4;
        case 0x38dcd8u: goto label_38dcd8;
        case 0x38dcdcu: goto label_38dcdc;
        case 0x38dce0u: goto label_38dce0;
        case 0x38dce4u: goto label_38dce4;
        case 0x38dce8u: goto label_38dce8;
        case 0x38dcecu: goto label_38dcec;
        case 0x38dcf0u: goto label_38dcf0;
        case 0x38dcf4u: goto label_38dcf4;
        case 0x38dcf8u: goto label_38dcf8;
        case 0x38dcfcu: goto label_38dcfc;
        case 0x38dd00u: goto label_38dd00;
        case 0x38dd04u: goto label_38dd04;
        case 0x38dd08u: goto label_38dd08;
        case 0x38dd0cu: goto label_38dd0c;
        case 0x38dd10u: goto label_38dd10;
        case 0x38dd14u: goto label_38dd14;
        case 0x38dd18u: goto label_38dd18;
        case 0x38dd1cu: goto label_38dd1c;
        case 0x38dd20u: goto label_38dd20;
        case 0x38dd24u: goto label_38dd24;
        case 0x38dd28u: goto label_38dd28;
        case 0x38dd2cu: goto label_38dd2c;
        case 0x38dd30u: goto label_38dd30;
        case 0x38dd34u: goto label_38dd34;
        case 0x38dd38u: goto label_38dd38;
        case 0x38dd3cu: goto label_38dd3c;
        case 0x38dd40u: goto label_38dd40;
        case 0x38dd44u: goto label_38dd44;
        case 0x38dd48u: goto label_38dd48;
        case 0x38dd4cu: goto label_38dd4c;
        case 0x38dd50u: goto label_38dd50;
        case 0x38dd54u: goto label_38dd54;
        case 0x38dd58u: goto label_38dd58;
        case 0x38dd5cu: goto label_38dd5c;
        case 0x38dd60u: goto label_38dd60;
        case 0x38dd64u: goto label_38dd64;
        case 0x38dd68u: goto label_38dd68;
        case 0x38dd6cu: goto label_38dd6c;
        case 0x38dd70u: goto label_38dd70;
        case 0x38dd74u: goto label_38dd74;
        case 0x38dd78u: goto label_38dd78;
        case 0x38dd7cu: goto label_38dd7c;
        case 0x38dd80u: goto label_38dd80;
        case 0x38dd84u: goto label_38dd84;
        case 0x38dd88u: goto label_38dd88;
        case 0x38dd8cu: goto label_38dd8c;
        case 0x38dd90u: goto label_38dd90;
        case 0x38dd94u: goto label_38dd94;
        case 0x38dd98u: goto label_38dd98;
        case 0x38dd9cu: goto label_38dd9c;
        case 0x38dda0u: goto label_38dda0;
        case 0x38dda4u: goto label_38dda4;
        case 0x38dda8u: goto label_38dda8;
        case 0x38ddacu: goto label_38ddac;
        case 0x38ddb0u: goto label_38ddb0;
        case 0x38ddb4u: goto label_38ddb4;
        case 0x38ddb8u: goto label_38ddb8;
        case 0x38ddbcu: goto label_38ddbc;
        case 0x38ddc0u: goto label_38ddc0;
        case 0x38ddc4u: goto label_38ddc4;
        case 0x38ddc8u: goto label_38ddc8;
        case 0x38ddccu: goto label_38ddcc;
        case 0x38ddd0u: goto label_38ddd0;
        case 0x38ddd4u: goto label_38ddd4;
        case 0x38ddd8u: goto label_38ddd8;
        case 0x38dddcu: goto label_38dddc;
        case 0x38dde0u: goto label_38dde0;
        case 0x38dde4u: goto label_38dde4;
        case 0x38dde8u: goto label_38dde8;
        case 0x38ddecu: goto label_38ddec;
        case 0x38ddf0u: goto label_38ddf0;
        case 0x38ddf4u: goto label_38ddf4;
        case 0x38ddf8u: goto label_38ddf8;
        case 0x38ddfcu: goto label_38ddfc;
        case 0x38de00u: goto label_38de00;
        case 0x38de04u: goto label_38de04;
        case 0x38de08u: goto label_38de08;
        case 0x38de0cu: goto label_38de0c;
        case 0x38de10u: goto label_38de10;
        case 0x38de14u: goto label_38de14;
        case 0x38de18u: goto label_38de18;
        case 0x38de1cu: goto label_38de1c;
        case 0x38de20u: goto label_38de20;
        case 0x38de24u: goto label_38de24;
        case 0x38de28u: goto label_38de28;
        case 0x38de2cu: goto label_38de2c;
        case 0x38de30u: goto label_38de30;
        case 0x38de34u: goto label_38de34;
        case 0x38de38u: goto label_38de38;
        case 0x38de3cu: goto label_38de3c;
        case 0x38de40u: goto label_38de40;
        case 0x38de44u: goto label_38de44;
        case 0x38de48u: goto label_38de48;
        case 0x38de4cu: goto label_38de4c;
        case 0x38de50u: goto label_38de50;
        case 0x38de54u: goto label_38de54;
        case 0x38de58u: goto label_38de58;
        case 0x38de5cu: goto label_38de5c;
        case 0x38de60u: goto label_38de60;
        case 0x38de64u: goto label_38de64;
        case 0x38de68u: goto label_38de68;
        case 0x38de6cu: goto label_38de6c;
        case 0x38de70u: goto label_38de70;
        case 0x38de74u: goto label_38de74;
        case 0x38de78u: goto label_38de78;
        case 0x38de7cu: goto label_38de7c;
        case 0x38de80u: goto label_38de80;
        case 0x38de84u: goto label_38de84;
        case 0x38de88u: goto label_38de88;
        case 0x38de8cu: goto label_38de8c;
        case 0x38de90u: goto label_38de90;
        case 0x38de94u: goto label_38de94;
        case 0x38de98u: goto label_38de98;
        case 0x38de9cu: goto label_38de9c;
        case 0x38dea0u: goto label_38dea0;
        case 0x38dea4u: goto label_38dea4;
        case 0x38dea8u: goto label_38dea8;
        case 0x38deacu: goto label_38deac;
        case 0x38deb0u: goto label_38deb0;
        case 0x38deb4u: goto label_38deb4;
        case 0x38deb8u: goto label_38deb8;
        case 0x38debcu: goto label_38debc;
        case 0x38dec0u: goto label_38dec0;
        case 0x38dec4u: goto label_38dec4;
        case 0x38dec8u: goto label_38dec8;
        case 0x38deccu: goto label_38decc;
        case 0x38ded0u: goto label_38ded0;
        case 0x38ded4u: goto label_38ded4;
        case 0x38ded8u: goto label_38ded8;
        case 0x38dedcu: goto label_38dedc;
        case 0x38dee0u: goto label_38dee0;
        case 0x38dee4u: goto label_38dee4;
        case 0x38dee8u: goto label_38dee8;
        case 0x38deecu: goto label_38deec;
        case 0x38def0u: goto label_38def0;
        case 0x38def4u: goto label_38def4;
        case 0x38def8u: goto label_38def8;
        case 0x38defcu: goto label_38defc;
        case 0x38df00u: goto label_38df00;
        case 0x38df04u: goto label_38df04;
        case 0x38df08u: goto label_38df08;
        case 0x38df0cu: goto label_38df0c;
        case 0x38df10u: goto label_38df10;
        case 0x38df14u: goto label_38df14;
        case 0x38df18u: goto label_38df18;
        case 0x38df1cu: goto label_38df1c;
        case 0x38df20u: goto label_38df20;
        case 0x38df24u: goto label_38df24;
        case 0x38df28u: goto label_38df28;
        case 0x38df2cu: goto label_38df2c;
        case 0x38df30u: goto label_38df30;
        case 0x38df34u: goto label_38df34;
        case 0x38df38u: goto label_38df38;
        case 0x38df3cu: goto label_38df3c;
        case 0x38df40u: goto label_38df40;
        case 0x38df44u: goto label_38df44;
        case 0x38df48u: goto label_38df48;
        case 0x38df4cu: goto label_38df4c;
        case 0x38df50u: goto label_38df50;
        case 0x38df54u: goto label_38df54;
        case 0x38df58u: goto label_38df58;
        case 0x38df5cu: goto label_38df5c;
        case 0x38df60u: goto label_38df60;
        case 0x38df64u: goto label_38df64;
        case 0x38df68u: goto label_38df68;
        case 0x38df6cu: goto label_38df6c;
        case 0x38df70u: goto label_38df70;
        case 0x38df74u: goto label_38df74;
        case 0x38df78u: goto label_38df78;
        case 0x38df7cu: goto label_38df7c;
        case 0x38df80u: goto label_38df80;
        case 0x38df84u: goto label_38df84;
        case 0x38df88u: goto label_38df88;
        case 0x38df8cu: goto label_38df8c;
        case 0x38df90u: goto label_38df90;
        case 0x38df94u: goto label_38df94;
        case 0x38df98u: goto label_38df98;
        case 0x38df9cu: goto label_38df9c;
        case 0x38dfa0u: goto label_38dfa0;
        case 0x38dfa4u: goto label_38dfa4;
        case 0x38dfa8u: goto label_38dfa8;
        case 0x38dfacu: goto label_38dfac;
        case 0x38dfb0u: goto label_38dfb0;
        case 0x38dfb4u: goto label_38dfb4;
        case 0x38dfb8u: goto label_38dfb8;
        case 0x38dfbcu: goto label_38dfbc;
        case 0x38dfc0u: goto label_38dfc0;
        case 0x38dfc4u: goto label_38dfc4;
        case 0x38dfc8u: goto label_38dfc8;
        case 0x38dfccu: goto label_38dfcc;
        case 0x38dfd0u: goto label_38dfd0;
        case 0x38dfd4u: goto label_38dfd4;
        case 0x38dfd8u: goto label_38dfd8;
        case 0x38dfdcu: goto label_38dfdc;
        case 0x38dfe0u: goto label_38dfe0;
        case 0x38dfe4u: goto label_38dfe4;
        case 0x38dfe8u: goto label_38dfe8;
        case 0x38dfecu: goto label_38dfec;
        case 0x38dff0u: goto label_38dff0;
        case 0x38dff4u: goto label_38dff4;
        case 0x38dff8u: goto label_38dff8;
        case 0x38dffcu: goto label_38dffc;
        case 0x38e000u: goto label_38e000;
        case 0x38e004u: goto label_38e004;
        case 0x38e008u: goto label_38e008;
        case 0x38e00cu: goto label_38e00c;
        case 0x38e010u: goto label_38e010;
        case 0x38e014u: goto label_38e014;
        case 0x38e018u: goto label_38e018;
        case 0x38e01cu: goto label_38e01c;
        case 0x38e020u: goto label_38e020;
        case 0x38e024u: goto label_38e024;
        case 0x38e028u: goto label_38e028;
        case 0x38e02cu: goto label_38e02c;
        case 0x38e030u: goto label_38e030;
        case 0x38e034u: goto label_38e034;
        case 0x38e038u: goto label_38e038;
        case 0x38e03cu: goto label_38e03c;
        case 0x38e040u: goto label_38e040;
        case 0x38e044u: goto label_38e044;
        case 0x38e048u: goto label_38e048;
        case 0x38e04cu: goto label_38e04c;
        case 0x38e050u: goto label_38e050;
        case 0x38e054u: goto label_38e054;
        case 0x38e058u: goto label_38e058;
        case 0x38e05cu: goto label_38e05c;
        case 0x38e060u: goto label_38e060;
        case 0x38e064u: goto label_38e064;
        case 0x38e068u: goto label_38e068;
        case 0x38e06cu: goto label_38e06c;
        case 0x38e070u: goto label_38e070;
        case 0x38e074u: goto label_38e074;
        case 0x38e078u: goto label_38e078;
        case 0x38e07cu: goto label_38e07c;
        case 0x38e080u: goto label_38e080;
        case 0x38e084u: goto label_38e084;
        case 0x38e088u: goto label_38e088;
        case 0x38e08cu: goto label_38e08c;
        case 0x38e090u: goto label_38e090;
        case 0x38e094u: goto label_38e094;
        case 0x38e098u: goto label_38e098;
        case 0x38e09cu: goto label_38e09c;
        case 0x38e0a0u: goto label_38e0a0;
        case 0x38e0a4u: goto label_38e0a4;
        case 0x38e0a8u: goto label_38e0a8;
        case 0x38e0acu: goto label_38e0ac;
        case 0x38e0b0u: goto label_38e0b0;
        case 0x38e0b4u: goto label_38e0b4;
        case 0x38e0b8u: goto label_38e0b8;
        case 0x38e0bcu: goto label_38e0bc;
        case 0x38e0c0u: goto label_38e0c0;
        case 0x38e0c4u: goto label_38e0c4;
        case 0x38e0c8u: goto label_38e0c8;
        case 0x38e0ccu: goto label_38e0cc;
        case 0x38e0d0u: goto label_38e0d0;
        case 0x38e0d4u: goto label_38e0d4;
        case 0x38e0d8u: goto label_38e0d8;
        case 0x38e0dcu: goto label_38e0dc;
        case 0x38e0e0u: goto label_38e0e0;
        case 0x38e0e4u: goto label_38e0e4;
        case 0x38e0e8u: goto label_38e0e8;
        case 0x38e0ecu: goto label_38e0ec;
        case 0x38e0f0u: goto label_38e0f0;
        case 0x38e0f4u: goto label_38e0f4;
        case 0x38e0f8u: goto label_38e0f8;
        case 0x38e0fcu: goto label_38e0fc;
        case 0x38e100u: goto label_38e100;
        case 0x38e104u: goto label_38e104;
        case 0x38e108u: goto label_38e108;
        case 0x38e10cu: goto label_38e10c;
        case 0x38e110u: goto label_38e110;
        case 0x38e114u: goto label_38e114;
        case 0x38e118u: goto label_38e118;
        case 0x38e11cu: goto label_38e11c;
        case 0x38e120u: goto label_38e120;
        case 0x38e124u: goto label_38e124;
        case 0x38e128u: goto label_38e128;
        case 0x38e12cu: goto label_38e12c;
        case 0x38e130u: goto label_38e130;
        case 0x38e134u: goto label_38e134;
        case 0x38e138u: goto label_38e138;
        case 0x38e13cu: goto label_38e13c;
        case 0x38e140u: goto label_38e140;
        case 0x38e144u: goto label_38e144;
        case 0x38e148u: goto label_38e148;
        case 0x38e14cu: goto label_38e14c;
        case 0x38e150u: goto label_38e150;
        case 0x38e154u: goto label_38e154;
        case 0x38e158u: goto label_38e158;
        case 0x38e15cu: goto label_38e15c;
        case 0x38e160u: goto label_38e160;
        case 0x38e164u: goto label_38e164;
        case 0x38e168u: goto label_38e168;
        case 0x38e16cu: goto label_38e16c;
        case 0x38e170u: goto label_38e170;
        case 0x38e174u: goto label_38e174;
        case 0x38e178u: goto label_38e178;
        case 0x38e17cu: goto label_38e17c;
        case 0x38e180u: goto label_38e180;
        case 0x38e184u: goto label_38e184;
        case 0x38e188u: goto label_38e188;
        case 0x38e18cu: goto label_38e18c;
        case 0x38e190u: goto label_38e190;
        case 0x38e194u: goto label_38e194;
        case 0x38e198u: goto label_38e198;
        case 0x38e19cu: goto label_38e19c;
        case 0x38e1a0u: goto label_38e1a0;
        case 0x38e1a4u: goto label_38e1a4;
        case 0x38e1a8u: goto label_38e1a8;
        case 0x38e1acu: goto label_38e1ac;
        case 0x38e1b0u: goto label_38e1b0;
        case 0x38e1b4u: goto label_38e1b4;
        case 0x38e1b8u: goto label_38e1b8;
        case 0x38e1bcu: goto label_38e1bc;
        case 0x38e1c0u: goto label_38e1c0;
        case 0x38e1c4u: goto label_38e1c4;
        case 0x38e1c8u: goto label_38e1c8;
        case 0x38e1ccu: goto label_38e1cc;
        case 0x38e1d0u: goto label_38e1d0;
        case 0x38e1d4u: goto label_38e1d4;
        case 0x38e1d8u: goto label_38e1d8;
        case 0x38e1dcu: goto label_38e1dc;
        case 0x38e1e0u: goto label_38e1e0;
        case 0x38e1e4u: goto label_38e1e4;
        case 0x38e1e8u: goto label_38e1e8;
        case 0x38e1ecu: goto label_38e1ec;
        case 0x38e1f0u: goto label_38e1f0;
        case 0x38e1f4u: goto label_38e1f4;
        case 0x38e1f8u: goto label_38e1f8;
        case 0x38e1fcu: goto label_38e1fc;
        case 0x38e200u: goto label_38e200;
        case 0x38e204u: goto label_38e204;
        case 0x38e208u: goto label_38e208;
        case 0x38e20cu: goto label_38e20c;
        case 0x38e210u: goto label_38e210;
        case 0x38e214u: goto label_38e214;
        case 0x38e218u: goto label_38e218;
        case 0x38e21cu: goto label_38e21c;
        case 0x38e220u: goto label_38e220;
        case 0x38e224u: goto label_38e224;
        case 0x38e228u: goto label_38e228;
        case 0x38e22cu: goto label_38e22c;
        case 0x38e230u: goto label_38e230;
        case 0x38e234u: goto label_38e234;
        case 0x38e238u: goto label_38e238;
        case 0x38e23cu: goto label_38e23c;
        case 0x38e240u: goto label_38e240;
        case 0x38e244u: goto label_38e244;
        case 0x38e248u: goto label_38e248;
        case 0x38e24cu: goto label_38e24c;
        case 0x38e250u: goto label_38e250;
        case 0x38e254u: goto label_38e254;
        case 0x38e258u: goto label_38e258;
        case 0x38e25cu: goto label_38e25c;
        case 0x38e260u: goto label_38e260;
        case 0x38e264u: goto label_38e264;
        case 0x38e268u: goto label_38e268;
        case 0x38e26cu: goto label_38e26c;
        case 0x38e270u: goto label_38e270;
        case 0x38e274u: goto label_38e274;
        case 0x38e278u: goto label_38e278;
        case 0x38e27cu: goto label_38e27c;
        case 0x38e280u: goto label_38e280;
        case 0x38e284u: goto label_38e284;
        case 0x38e288u: goto label_38e288;
        case 0x38e28cu: goto label_38e28c;
        case 0x38e290u: goto label_38e290;
        case 0x38e294u: goto label_38e294;
        case 0x38e298u: goto label_38e298;
        case 0x38e29cu: goto label_38e29c;
        case 0x38e2a0u: goto label_38e2a0;
        case 0x38e2a4u: goto label_38e2a4;
        case 0x38e2a8u: goto label_38e2a8;
        case 0x38e2acu: goto label_38e2ac;
        case 0x38e2b0u: goto label_38e2b0;
        case 0x38e2b4u: goto label_38e2b4;
        case 0x38e2b8u: goto label_38e2b8;
        case 0x38e2bcu: goto label_38e2bc;
        case 0x38e2c0u: goto label_38e2c0;
        case 0x38e2c4u: goto label_38e2c4;
        case 0x38e2c8u: goto label_38e2c8;
        case 0x38e2ccu: goto label_38e2cc;
        case 0x38e2d0u: goto label_38e2d0;
        case 0x38e2d4u: goto label_38e2d4;
        case 0x38e2d8u: goto label_38e2d8;
        case 0x38e2dcu: goto label_38e2dc;
        case 0x38e2e0u: goto label_38e2e0;
        case 0x38e2e4u: goto label_38e2e4;
        case 0x38e2e8u: goto label_38e2e8;
        case 0x38e2ecu: goto label_38e2ec;
        case 0x38e2f0u: goto label_38e2f0;
        case 0x38e2f4u: goto label_38e2f4;
        case 0x38e2f8u: goto label_38e2f8;
        case 0x38e2fcu: goto label_38e2fc;
        case 0x38e300u: goto label_38e300;
        case 0x38e304u: goto label_38e304;
        case 0x38e308u: goto label_38e308;
        case 0x38e30cu: goto label_38e30c;
        case 0x38e310u: goto label_38e310;
        case 0x38e314u: goto label_38e314;
        case 0x38e318u: goto label_38e318;
        case 0x38e31cu: goto label_38e31c;
        case 0x38e320u: goto label_38e320;
        case 0x38e324u: goto label_38e324;
        case 0x38e328u: goto label_38e328;
        case 0x38e32cu: goto label_38e32c;
        case 0x38e330u: goto label_38e330;
        case 0x38e334u: goto label_38e334;
        case 0x38e338u: goto label_38e338;
        case 0x38e33cu: goto label_38e33c;
        case 0x38e340u: goto label_38e340;
        case 0x38e344u: goto label_38e344;
        case 0x38e348u: goto label_38e348;
        case 0x38e34cu: goto label_38e34c;
        case 0x38e350u: goto label_38e350;
        case 0x38e354u: goto label_38e354;
        case 0x38e358u: goto label_38e358;
        case 0x38e35cu: goto label_38e35c;
        case 0x38e360u: goto label_38e360;
        case 0x38e364u: goto label_38e364;
        case 0x38e368u: goto label_38e368;
        case 0x38e36cu: goto label_38e36c;
        case 0x38e370u: goto label_38e370;
        case 0x38e374u: goto label_38e374;
        case 0x38e378u: goto label_38e378;
        case 0x38e37cu: goto label_38e37c;
        case 0x38e380u: goto label_38e380;
        case 0x38e384u: goto label_38e384;
        case 0x38e388u: goto label_38e388;
        case 0x38e38cu: goto label_38e38c;
        case 0x38e390u: goto label_38e390;
        case 0x38e394u: goto label_38e394;
        case 0x38e398u: goto label_38e398;
        case 0x38e39cu: goto label_38e39c;
        case 0x38e3a0u: goto label_38e3a0;
        case 0x38e3a4u: goto label_38e3a4;
        case 0x38e3a8u: goto label_38e3a8;
        case 0x38e3acu: goto label_38e3ac;
        default: break;
    }

    ctx->pc = 0x38d960u;

label_38d960:
    // 0x38d960: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x38d960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_38d964:
    // 0x38d964: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38d964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_38d968:
    // 0x38d968: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38d968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38d96c:
    // 0x38d96c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38d96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38d970:
    // 0x38d970: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38d970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38d974:
    // 0x38d974: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38d974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38d978:
    // 0x38d978: 0x8c84009c  lw          $a0, 0x9C($a0)
    ctx->pc = 0x38d978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_38d97c:
    // 0x38d97c: 0x50800046  beql        $a0, $zero, . + 4 + (0x46 << 2)
label_38d980:
    if (ctx->pc == 0x38D980u) {
        ctx->pc = 0x38D980u;
            // 0x38d980: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->pc = 0x38D984u;
        goto label_38d984;
    }
    ctx->pc = 0x38D97Cu;
    {
        const bool branch_taken_0x38d97c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d97c) {
            ctx->pc = 0x38D980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38D97Cu;
            // 0x38d980: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38DA98u;
            goto label_38da98;
        }
    }
    ctx->pc = 0x38D984u;
label_38d984:
    // 0x38d984: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x38d984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_38d988:
    // 0x38d988: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x38d988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_38d98c:
    // 0x38d98c: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_38d990:
    if (ctx->pc == 0x38D990u) {
        ctx->pc = 0x38D994u;
        goto label_38d994;
    }
    ctx->pc = 0x38D98Cu;
    {
        const bool branch_taken_0x38d98c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d98c) {
            ctx->pc = 0x38DA94u;
            goto label_38da94;
        }
    }
    ctx->pc = 0x38D994u;
label_38d994:
    // 0x38d994: 0xc0e328c  jal         func_38CA30
label_38d998:
    if (ctx->pc == 0x38D998u) {
        ctx->pc = 0x38D99Cu;
        goto label_38d99c;
    }
    ctx->pc = 0x38D994u;
    SET_GPR_U32(ctx, 31, 0x38D99Cu);
    ctx->pc = 0x38CA30u;
    if (runtime->hasFunction(0x38CA30u)) {
        auto targetFn = runtime->lookupFunction(0x38CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D99Cu; }
        if (ctx->pc != 0x38D99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA30_0x38ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D99Cu; }
        if (ctx->pc != 0x38D99Cu) { return; }
    }
    ctx->pc = 0x38D99Cu;
label_38d99c:
    // 0x38d99c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x38d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38d9a0:
    // 0x38d9a0: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x38d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_38d9a4:
    // 0x38d9a4: 0xc4620188  lwc1        $f2, 0x188($v1)
    ctx->pc = 0x38d9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38d9a8:
    // 0x38d9a8: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x38d9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38d9ac:
    // 0x38d9ac: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x38d9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38d9b0:
    // 0x38d9b0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x38d9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_38d9b4:
    // 0x38d9b4: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x38d9b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_38d9b8:
    // 0x38d9b8: 0xe442001c  swc1        $f2, 0x1C($v0)
    ctx->pc = 0x38d9b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_38d9bc:
    // 0x38d9bc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38d9bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38d9c0:
    // 0x38d9c0: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x38d9c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_38d9c4:
    // 0x38d9c4: 0x320f809  jalr        $t9
label_38d9c8:
    if (ctx->pc == 0x38D9C8u) {
        ctx->pc = 0x38D9C8u;
            // 0x38d9c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38D9CCu;
        goto label_38d9cc;
    }
    ctx->pc = 0x38D9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38D9CCu);
        ctx->pc = 0x38D9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38D9C4u;
            // 0x38d9c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38D9CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38D9CCu; }
            if (ctx->pc != 0x38D9CCu) { return; }
        }
        }
    }
    ctx->pc = 0x38D9CCu;
label_38d9cc:
    // 0x38d9cc: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_38d9d0:
    if (ctx->pc == 0x38D9D0u) {
        ctx->pc = 0x38D9D4u;
        goto label_38d9d4;
    }
    ctx->pc = 0x38D9CCu;
    {
        const bool branch_taken_0x38d9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d9cc) {
            ctx->pc = 0x38DA94u;
            goto label_38da94;
        }
    }
    ctx->pc = 0x38D9D4u;
label_38d9d4:
    // 0x38d9d4: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x38d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_38d9d8:
    // 0x38d9d8: 0x90630020  lbu         $v1, 0x20($v1)
    ctx->pc = 0x38d9d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_38d9dc:
    // 0x38d9dc: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
label_38d9e0:
    if (ctx->pc == 0x38D9E0u) {
        ctx->pc = 0x38D9E4u;
        goto label_38d9e4;
    }
    ctx->pc = 0x38D9DCu;
    {
        const bool branch_taken_0x38d9dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d9dc) {
            ctx->pc = 0x38DA94u;
            goto label_38da94;
        }
    }
    ctx->pc = 0x38D9E4u;
label_38d9e4:
    // 0x38d9e4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x38d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_38d9e8:
    // 0x38d9e8: 0xc04f278  jal         func_13C9E0
label_38d9ec:
    if (ctx->pc == 0x38D9ECu) {
        ctx->pc = 0x38D9ECu;
            // 0x38d9ec: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x38D9F0u;
        goto label_38d9f0;
    }
    ctx->pc = 0x38D9E8u;
    SET_GPR_U32(ctx, 31, 0x38D9F0u);
    ctx->pc = 0x38D9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D9E8u;
            // 0x38d9ec: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D9F0u; }
        if (ctx->pc != 0x38D9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D9F0u; }
        if (ctx->pc != 0x38D9F0u) { return; }
    }
    ctx->pc = 0x38D9F0u;
label_38d9f0:
    // 0x38d9f0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x38d9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_38d9f4:
    // 0x38d9f4: 0xc04ce80  jal         func_133A00
label_38d9f8:
    if (ctx->pc == 0x38D9F8u) {
        ctx->pc = 0x38D9F8u;
            // 0x38d9f8: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x38D9FCu;
        goto label_38d9fc;
    }
    ctx->pc = 0x38D9F4u;
    SET_GPR_U32(ctx, 31, 0x38D9FCu);
    ctx->pc = 0x38D9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38D9F4u;
            // 0x38d9f8: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D9FCu; }
        if (ctx->pc != 0x38D9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38D9FCu; }
        if (ctx->pc != 0x38D9FCu) { return; }
    }
    ctx->pc = 0x38D9FCu;
label_38d9fc:
    // 0x38d9fc: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x38d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_38da00:
    // 0x38da00: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x38da00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_38da04:
    // 0x38da04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38da04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38da08:
    // 0x38da08: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x38da08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_38da0c:
    // 0x38da0c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x38da0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38da10:
    // 0x38da10: 0xc46c0014  lwc1        $f12, 0x14($v1)
    ctx->pc = 0x38da10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38da14:
    // 0x38da14: 0xc46e001c  lwc1        $f14, 0x1C($v1)
    ctx->pc = 0x38da14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_38da18:
    // 0x38da18: 0xc04cbd8  jal         func_132F60
label_38da1c:
    if (ctx->pc == 0x38DA1Cu) {
        ctx->pc = 0x38DA1Cu;
            // 0x38da1c: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x38DA20u;
        goto label_38da20;
    }
    ctx->pc = 0x38DA18u;
    SET_GPR_U32(ctx, 31, 0x38DA20u);
    ctx->pc = 0x38DA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DA18u;
            // 0x38da1c: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DA20u; }
        if (ctx->pc != 0x38DA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DA20u; }
        if (ctx->pc != 0x38DA20u) { return; }
    }
    ctx->pc = 0x38DA20u;
label_38da20:
    // 0x38da20: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x38da20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_38da24:
    // 0x38da24: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x38da24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_38da28:
    // 0x38da28: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x38da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_38da2c:
    // 0x38da2c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x38da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_38da30:
    // 0x38da30: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x38da30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
label_38da34:
    // 0x38da34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x38da34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38da38:
    // 0x38da38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38da38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38da3c:
    // 0x38da3c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x38da3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38da40:
    // 0x38da40: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x38da40u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_38da44:
    // 0x38da44: 0x0  nop
    ctx->pc = 0x38da44u;
    // NOP
label_38da48:
    // 0x38da48: 0x0  nop
    ctx->pc = 0x38da48u;
    // NOP
label_38da4c:
    // 0x38da4c: 0xc04cc70  jal         func_1331C0
label_38da50:
    if (ctx->pc == 0x38DA50u) {
        ctx->pc = 0x38DA54u;
        goto label_38da54;
    }
    ctx->pc = 0x38DA4Cu;
    SET_GPR_U32(ctx, 31, 0x38DA54u);
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DA54u; }
        if (ctx->pc != 0x38DA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DA54u; }
        if (ctx->pc != 0x38DA54u) { return; }
    }
    ctx->pc = 0x38DA54u;
label_38da54:
    // 0x38da54: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x38da54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38da58:
    // 0x38da58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38da58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_38da5c:
    // 0x38da5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38da5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38da60:
    // 0x38da60: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x38da60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_38da64:
    // 0x38da64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38da64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38da68:
    // 0x38da68: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_38da6c:
    if (ctx->pc == 0x38DA6Cu) {
        ctx->pc = 0x38DA6Cu;
            // 0x38da6c: 0x8e24009c  lw          $a0, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->pc = 0x38DA70u;
        goto label_38da70;
    }
    ctx->pc = 0x38DA68u;
    {
        const bool branch_taken_0x38da68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38da68) {
            ctx->pc = 0x38DA6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38DA68u;
            // 0x38da6c: 0x8e24009c  lw          $a0, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38DA88u;
            goto label_38da88;
        }
    }
    ctx->pc = 0x38DA70u;
label_38da70:
    // 0x38da70: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x38da70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_38da74:
    // 0x38da74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38da74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38da78:
    // 0x38da78: 0x0  nop
    ctx->pc = 0x38da78u;
    // NOP
label_38da7c:
    // 0x38da7c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x38da7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_38da80:
    // 0x38da80: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x38da80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_38da84:
    // 0x38da84: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x38da84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_38da88:
    // 0x38da88: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x38da88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_38da8c:
    // 0x38da8c: 0xc0e3160  jal         func_38C580
label_38da90:
    if (ctx->pc == 0x38DA90u) {
        ctx->pc = 0x38DA90u;
            // 0x38da90: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x38DA94u;
        goto label_38da94;
    }
    ctx->pc = 0x38DA8Cu;
    SET_GPR_U32(ctx, 31, 0x38DA94u);
    ctx->pc = 0x38DA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DA8Cu;
            // 0x38da90: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C580u;
    if (runtime->hasFunction(0x38C580u)) {
        auto targetFn = runtime->lookupFunction(0x38C580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DA94u; }
        if (ctx->pc != 0x38DA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C580_0x38c580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DA94u; }
        if (ctx->pc != 0x38DA94u) { return; }
    }
    ctx->pc = 0x38DA94u;
label_38da94:
    // 0x38da94: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x38da94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_38da98:
    // 0x38da98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38da98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38da9c:
    // 0x38da9c: 0x5483003c  bnel        $a0, $v1, . + 4 + (0x3C << 2)
label_38daa0:
    if (ctx->pc == 0x38DAA0u) {
        ctx->pc = 0x38DAA0u;
            // 0x38daa0: 0x8e2400ac  lw          $a0, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->pc = 0x38DAA4u;
        goto label_38daa4;
    }
    ctx->pc = 0x38DA9Cu;
    {
        const bool branch_taken_0x38da9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x38da9c) {
            ctx->pc = 0x38DAA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38DA9Cu;
            // 0x38daa0: 0x8e2400ac  lw          $a0, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38DB90u;
            goto label_38db90;
        }
    }
    ctx->pc = 0x38DAA4u;
label_38daa4:
    // 0x38daa4: 0xc0e2504  jal         func_389410
label_38daa8:
    if (ctx->pc == 0x38DAA8u) {
        ctx->pc = 0x38DAA8u;
            // 0x38daa8: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x38DAACu;
        goto label_38daac;
    }
    ctx->pc = 0x38DAA4u;
    SET_GPR_U32(ctx, 31, 0x38DAACu);
    ctx->pc = 0x38DAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DAA4u;
            // 0x38daa8: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x389410u;
    if (runtime->hasFunction(0x389410u)) {
        auto targetFn = runtime->lookupFunction(0x389410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DAACu; }
        if (ctx->pc != 0x38DAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00389410_0x389410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DAACu; }
        if (ctx->pc != 0x38DAACu) { return; }
    }
    ctx->pc = 0x38DAACu;
label_38daac:
    // 0x38daac: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x38daacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_38dab0:
    // 0x38dab0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38dab4:
    // 0x38dab4: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
label_38dab8:
    if (ctx->pc == 0x38DAB8u) {
        ctx->pc = 0x38DABCu;
        goto label_38dabc;
    }
    ctx->pc = 0x38DAB4u;
    {
        const bool branch_taken_0x38dab4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x38dab4) {
            ctx->pc = 0x38DB8Cu;
            goto label_38db8c;
        }
    }
    ctx->pc = 0x38DABCu;
label_38dabc:
    // 0x38dabc: 0x8e3000b4  lw          $s0, 0xB4($s1)
    ctx->pc = 0x38dabcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_38dac0:
    // 0x38dac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38dac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38dac4:
    // 0x38dac4: 0xc0e32a4  jal         func_38CA90
label_38dac8:
    if (ctx->pc == 0x38DAC8u) {
        ctx->pc = 0x38DAC8u;
            // 0x38dac8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38DACCu;
        goto label_38dacc;
    }
    ctx->pc = 0x38DAC4u;
    SET_GPR_U32(ctx, 31, 0x38DACCu);
    ctx->pc = 0x38DAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DAC4u;
            // 0x38dac8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DACCu; }
        if (ctx->pc != 0x38DACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DACCu; }
        if (ctx->pc != 0x38DACCu) { return; }
    }
    ctx->pc = 0x38DACCu;
label_38dacc:
    // 0x38dacc: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x38daccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_38dad0:
    // 0x38dad0: 0xc0e082c  jal         func_3820B0
label_38dad4:
    if (ctx->pc == 0x38DAD4u) {
        ctx->pc = 0x38DAD4u;
            // 0x38dad4: 0xae3000b4  sw          $s0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 16));
        ctx->pc = 0x38DAD8u;
        goto label_38dad8;
    }
    ctx->pc = 0x38DAD0u;
    SET_GPR_U32(ctx, 31, 0x38DAD8u);
    ctx->pc = 0x38DAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DAD0u;
            // 0x38dad4: 0xae3000b4  sw          $s0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DAD8u; }
        if (ctx->pc != 0x38DAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DAD8u; }
        if (ctx->pc != 0x38DAD8u) { return; }
    }
    ctx->pc = 0x38DAD8u;
label_38dad8:
    // 0x38dad8: 0xc0e0828  jal         func_3820A0
label_38dadc:
    if (ctx->pc == 0x38DADCu) {
        ctx->pc = 0x38DADCu;
            // 0x38dadc: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x38DAE0u;
        goto label_38dae0;
    }
    ctx->pc = 0x38DAD8u;
    SET_GPR_U32(ctx, 31, 0x38DAE0u);
    ctx->pc = 0x38DADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DAD8u;
            // 0x38dadc: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DAE0u; }
        if (ctx->pc != 0x38DAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DAE0u; }
        if (ctx->pc != 0x38DAE0u) { return; }
    }
    ctx->pc = 0x38DAE0u;
label_38dae0:
    // 0x38dae0: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x38dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_38dae4:
    // 0x38dae4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_38dae8:
    if (ctx->pc == 0x38DAE8u) {
        ctx->pc = 0x38DAE8u;
            // 0x38dae8: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x38DAECu;
        goto label_38daec;
    }
    ctx->pc = 0x38DAE4u;
    {
        const bool branch_taken_0x38dae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dae4) {
            ctx->pc = 0x38DAE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38DAE4u;
            // 0x38dae8: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38DB1Cu;
            goto label_38db1c;
        }
    }
    ctx->pc = 0x38DAECu;
label_38daec:
    // 0x38daec: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x38daecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_38daf0:
    // 0x38daf0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x38daf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_38daf4:
    // 0x38daf4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_38daf8:
    if (ctx->pc == 0x38DAF8u) {
        ctx->pc = 0x38DAFCu;
        goto label_38dafc;
    }
    ctx->pc = 0x38DAF4u;
    {
        const bool branch_taken_0x38daf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38daf4) {
            ctx->pc = 0x38DB18u;
            goto label_38db18;
        }
    }
    ctx->pc = 0x38DAFCu;
label_38dafc:
    // 0x38dafc: 0xc0dc408  jal         func_371020
label_38db00:
    if (ctx->pc == 0x38DB00u) {
        ctx->pc = 0x38DB00u;
            // 0x38db00: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x38DB04u;
        goto label_38db04;
    }
    ctx->pc = 0x38DAFCu;
    SET_GPR_U32(ctx, 31, 0x38DB04u);
    ctx->pc = 0x38DB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DAFCu;
            // 0x38db00: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DB04u; }
        if (ctx->pc != 0x38DB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DB04u; }
        if (ctx->pc != 0x38DB04u) { return; }
    }
    ctx->pc = 0x38DB04u;
label_38db04:
    // 0x38db04: 0xc0e0824  jal         func_382090
label_38db08:
    if (ctx->pc == 0x38DB08u) {
        ctx->pc = 0x38DB08u;
            // 0x38db08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DB0Cu;
        goto label_38db0c;
    }
    ctx->pc = 0x38DB04u;
    SET_GPR_U32(ctx, 31, 0x38DB0Cu);
    ctx->pc = 0x38DB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DB04u;
            // 0x38db08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DB0Cu; }
        if (ctx->pc != 0x38DB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DB0Cu; }
        if (ctx->pc != 0x38DB0Cu) { return; }
    }
    ctx->pc = 0x38DB0Cu;
label_38db0c:
    // 0x38db0c: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x38db0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_38db10:
    // 0x38db10: 0xc0e081c  jal         func_382070
label_38db14:
    if (ctx->pc == 0x38DB14u) {
        ctx->pc = 0x38DB14u;
            // 0x38db14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DB18u;
        goto label_38db18;
    }
    ctx->pc = 0x38DB10u;
    SET_GPR_U32(ctx, 31, 0x38DB18u);
    ctx->pc = 0x38DB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DB10u;
            // 0x38db14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DB18u; }
        if (ctx->pc != 0x38DB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DB18u; }
        if (ctx->pc != 0x38DB18u) { return; }
    }
    ctx->pc = 0x38DB18u;
label_38db18:
    // 0x38db18: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x38db18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38db1c:
    // 0x38db1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38db1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38db20:
    // 0x38db20: 0xc0e080c  jal         func_382030
label_38db24:
    if (ctx->pc == 0x38DB24u) {
        ctx->pc = 0x38DB24u;
            // 0x38db24: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x38DB28u;
        goto label_38db28;
    }
    ctx->pc = 0x38DB20u;
    SET_GPR_U32(ctx, 31, 0x38DB28u);
    ctx->pc = 0x38DB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DB20u;
            // 0x38db24: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DB28u; }
        if (ctx->pc != 0x38DB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DB28u; }
        if (ctx->pc != 0x38DB28u) { return; }
    }
    ctx->pc = 0x38DB28u;
label_38db28:
    // 0x38db28: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x38db28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38db2c:
    // 0x38db2c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x38db2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38db30:
    // 0x38db30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38db30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38db34:
    // 0x38db34: 0xc08914c  jal         func_224530
label_38db38:
    if (ctx->pc == 0x38DB38u) {
        ctx->pc = 0x38DB38u;
            // 0x38db38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DB3Cu;
        goto label_38db3c;
    }
    ctx->pc = 0x38DB34u;
    SET_GPR_U32(ctx, 31, 0x38DB3Cu);
    ctx->pc = 0x38DB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DB34u;
            // 0x38db38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DB3Cu; }
        if (ctx->pc != 0x38DB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DB3Cu; }
        if (ctx->pc != 0x38DB3Cu) { return; }
    }
    ctx->pc = 0x38DB3Cu;
label_38db3c:
    // 0x38db3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38db3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38db40:
    // 0x38db40: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x38db40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_38db44:
    // 0x38db44: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x38db44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_38db48:
    // 0x38db48: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x38db48u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_38db4c:
    // 0x38db4c: 0xc0b6df0  jal         func_2DB7C0
label_38db50:
    if (ctx->pc == 0x38DB50u) {
        ctx->pc = 0x38DB50u;
            // 0x38db50: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x38DB54u;
        goto label_38db54;
    }
    ctx->pc = 0x38DB4Cu;
    SET_GPR_U32(ctx, 31, 0x38DB54u);
    ctx->pc = 0x38DB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DB4Cu;
            // 0x38db50: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DB54u; }
        if (ctx->pc != 0x38DB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DB54u; }
        if (ctx->pc != 0x38DB54u) { return; }
    }
    ctx->pc = 0x38DB54u;
label_38db54:
    // 0x38db54: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x38db54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38db58:
    // 0x38db58: 0xc0e07f8  jal         func_381FE0
label_38db5c:
    if (ctx->pc == 0x38DB5Cu) {
        ctx->pc = 0x38DB5Cu;
            // 0x38db5c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x38DB60u;
        goto label_38db60;
    }
    ctx->pc = 0x38DB58u;
    SET_GPR_U32(ctx, 31, 0x38DB60u);
    ctx->pc = 0x38DB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DB58u;
            // 0x38db5c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DB60u; }
        if (ctx->pc != 0x38DB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DB60u; }
        if (ctx->pc != 0x38DB60u) { return; }
    }
    ctx->pc = 0x38DB60u;
label_38db60:
    // 0x38db60: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x38db60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38db64:
    // 0x38db64: 0xc0dc3f4  jal         func_370FD0
label_38db68:
    if (ctx->pc == 0x38DB68u) {
        ctx->pc = 0x38DB68u;
            // 0x38db68: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x38DB6Cu;
        goto label_38db6c;
    }
    ctx->pc = 0x38DB64u;
    SET_GPR_U32(ctx, 31, 0x38DB6Cu);
    ctx->pc = 0x38DB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DB64u;
            // 0x38db68: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DB6Cu; }
        if (ctx->pc != 0x38DB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DB6Cu; }
        if (ctx->pc != 0x38DB6Cu) { return; }
    }
    ctx->pc = 0x38DB6Cu;
label_38db6c:
    // 0x38db6c: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x38db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_38db70:
    // 0x38db70: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x38db70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_38db74:
    // 0x38db74: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_38db78:
    if (ctx->pc == 0x38DB78u) {
        ctx->pc = 0x38DB7Cu;
        goto label_38db7c;
    }
    ctx->pc = 0x38DB74u;
    {
        const bool branch_taken_0x38db74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38db74) {
            ctx->pc = 0x38DB8Cu;
            goto label_38db8c;
        }
    }
    ctx->pc = 0x38DB7Cu;
label_38db7c:
    // 0x38db7c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38db7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38db80:
    // 0x38db80: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x38db80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_38db84:
    // 0x38db84: 0x320f809  jalr        $t9
label_38db88:
    if (ctx->pc == 0x38DB88u) {
        ctx->pc = 0x38DB88u;
            // 0x38db88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DB8Cu;
        goto label_38db8c;
    }
    ctx->pc = 0x38DB84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38DB8Cu);
        ctx->pc = 0x38DB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38DB84u;
            // 0x38db88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38DB8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38DB8Cu; }
            if (ctx->pc != 0x38DB8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38DB8Cu;
label_38db8c:
    // 0x38db8c: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x38db8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_38db90:
    // 0x38db90: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38db90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38db94:
    // 0x38db94: 0x508301b7  beql        $a0, $v1, . + 4 + (0x1B7 << 2)
label_38db98:
    if (ctx->pc == 0x38DB98u) {
        ctx->pc = 0x38DB98u;
            // 0x38db98: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x38DB9Cu;
        goto label_38db9c;
    }
    ctx->pc = 0x38DB94u;
    {
        const bool branch_taken_0x38db94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38db94) {
            ctx->pc = 0x38DB98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38DB94u;
            // 0x38db98: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38E274u;
            goto label_38e274;
        }
    }
    ctx->pc = 0x38DB9Cu;
label_38db9c:
    // 0x38db9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38dba0:
    // 0x38dba0: 0x5083013f  beql        $a0, $v1, . + 4 + (0x13F << 2)
label_38dba4:
    if (ctx->pc == 0x38DBA4u) {
        ctx->pc = 0x38DBA4u;
            // 0x38dba4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x38DBA8u;
        goto label_38dba8;
    }
    ctx->pc = 0x38DBA0u;
    {
        const bool branch_taken_0x38dba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38dba0) {
            ctx->pc = 0x38DBA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38DBA0u;
            // 0x38dba4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38E0A0u;
            goto label_38e0a0;
        }
    }
    ctx->pc = 0x38DBA8u;
label_38dba8:
    // 0x38dba8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38dbac:
    // 0x38dbac: 0x5083010f  beql        $a0, $v1, . + 4 + (0x10F << 2)
label_38dbb0:
    if (ctx->pc == 0x38DBB0u) {
        ctx->pc = 0x38DBB0u;
            // 0x38dbb0: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x38DBB4u;
        goto label_38dbb4;
    }
    ctx->pc = 0x38DBACu;
    {
        const bool branch_taken_0x38dbac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38dbac) {
            ctx->pc = 0x38DBB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38DBACu;
            // 0x38dbb0: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38DFECu;
            goto label_38dfec;
        }
    }
    ctx->pc = 0x38DBB4u;
label_38dbb4:
    // 0x38dbb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38dbb8:
    // 0x38dbb8: 0x50830052  beql        $a0, $v1, . + 4 + (0x52 << 2)
label_38dbbc:
    if (ctx->pc == 0x38DBBCu) {
        ctx->pc = 0x38DBBCu;
            // 0x38dbbc: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x38DBC0u;
        goto label_38dbc0;
    }
    ctx->pc = 0x38DBB8u;
    {
        const bool branch_taken_0x38dbb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38dbb8) {
            ctx->pc = 0x38DBBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38DBB8u;
            // 0x38dbbc: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38DD04u;
            goto label_38dd04;
        }
    }
    ctx->pc = 0x38DBC0u;
label_38dbc0:
    // 0x38dbc0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_38dbc4:
    if (ctx->pc == 0x38DBC4u) {
        ctx->pc = 0x38DBC4u;
            // 0x38dbc4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x38DBC8u;
        goto label_38dbc8;
    }
    ctx->pc = 0x38DBC0u;
    {
        const bool branch_taken_0x38dbc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dbc0) {
            ctx->pc = 0x38DBC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38DBC0u;
            // 0x38dbc4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38DBD0u;
            goto label_38dbd0;
        }
    }
    ctx->pc = 0x38DBC8u;
label_38dbc8:
    // 0x38dbc8: 0x100001f2  b           . + 4 + (0x1F2 << 2)
label_38dbcc:
    if (ctx->pc == 0x38DBCCu) {
        ctx->pc = 0x38DBCCu;
            // 0x38dbcc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x38DBD0u;
        goto label_38dbd0;
    }
    ctx->pc = 0x38DBC8u;
    {
        const bool branch_taken_0x38dbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38DBC8u;
            // 0x38dbcc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dbc8) {
            ctx->pc = 0x38E394u;
            goto label_38e394;
        }
    }
    ctx->pc = 0x38DBD0u;
label_38dbd0:
    // 0x38dbd0: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x38dbd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_38dbd4:
    // 0x38dbd4: 0x320f809  jalr        $t9
label_38dbd8:
    if (ctx->pc == 0x38DBD8u) {
        ctx->pc = 0x38DBD8u;
            // 0x38dbd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DBDCu;
        goto label_38dbdc;
    }
    ctx->pc = 0x38DBD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38DBDCu);
        ctx->pc = 0x38DBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38DBD4u;
            // 0x38dbd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38DBDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38DBDCu; }
            if (ctx->pc != 0x38DBDCu) { return; }
        }
        }
    }
    ctx->pc = 0x38DBDCu;
label_38dbdc:
    // 0x38dbdc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x38dbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_38dbe0:
    // 0x38dbe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38dbe4:
    // 0x38dbe4: 0x5483000f  bnel        $a0, $v1, . + 4 + (0xF << 2)
label_38dbe8:
    if (ctx->pc == 0x38DBE8u) {
        ctx->pc = 0x38DBE8u;
            // 0x38dbe8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x38DBECu;
        goto label_38dbec;
    }
    ctx->pc = 0x38DBE4u;
    {
        const bool branch_taken_0x38dbe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x38dbe4) {
            ctx->pc = 0x38DBE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38DBE4u;
            // 0x38dbe8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38DC24u;
            goto label_38dc24;
        }
    }
    ctx->pc = 0x38DBECu;
label_38dbec:
    // 0x38dbec: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x38dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
label_38dbf0:
    // 0x38dbf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38dbf4:
    // 0x38dbf4: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x38dbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38dbf8:
    // 0x38dbf8: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x38dbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_38dbfc:
    // 0x38dbfc: 0xae2200ac  sw          $v0, 0xAC($s1)
    ctx->pc = 0x38dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
label_38dc00:
    // 0x38dc00: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38dc00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38dc04:
    // 0x38dc04: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x38dc04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_38dc08:
    // 0x38dc08: 0x320f809  jalr        $t9
label_38dc0c:
    if (ctx->pc == 0x38DC0Cu) {
        ctx->pc = 0x38DC0Cu;
            // 0x38dc0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DC10u;
        goto label_38dc10;
    }
    ctx->pc = 0x38DC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38DC10u);
        ctx->pc = 0x38DC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38DC08u;
            // 0x38dc0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38DC10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38DC10u; }
            if (ctx->pc != 0x38DC10u) { return; }
        }
        }
    }
    ctx->pc = 0x38DC10u;
label_38dc10:
    // 0x38dc10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x38dc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38dc14:
    // 0x38dc14: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x38dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_38dc18:
    // 0x38dc18: 0xae2400b4  sw          $a0, 0xB4($s1)
    ctx->pc = 0x38dc18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 4));
label_38dc1c:
    // 0x38dc1c: 0x100001dc  b           . + 4 + (0x1DC << 2)
label_38dc20:
    if (ctx->pc == 0x38DC20u) {
        ctx->pc = 0x38DC20u;
            // 0x38dc20: 0xa223004c  sb          $v1, 0x4C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x38DC24u;
        goto label_38dc24;
    }
    ctx->pc = 0x38DC1Cu;
    {
        const bool branch_taken_0x38dc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38DC1Cu;
            // 0x38dc20: 0xa223004c  sb          $v1, 0x4C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dc1c) {
            ctx->pc = 0x38E390u;
            goto label_38e390;
        }
    }
    ctx->pc = 0x38DC24u;
label_38dc24:
    // 0x38dc24: 0x148301da  bne         $a0, $v1, . + 4 + (0x1DA << 2)
label_38dc28:
    if (ctx->pc == 0x38DC28u) {
        ctx->pc = 0x38DC2Cu;
        goto label_38dc2c;
    }
    ctx->pc = 0x38DC24u;
    {
        const bool branch_taken_0x38dc24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x38dc24) {
            ctx->pc = 0x38E390u;
            goto label_38e390;
        }
    }
    ctx->pc = 0x38DC2Cu;
label_38dc2c:
    // 0x38dc2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38dc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38dc30:
    // 0x38dc30: 0xc0e32a4  jal         func_38CA90
label_38dc34:
    if (ctx->pc == 0x38DC34u) {
        ctx->pc = 0x38DC34u;
            // 0x38dc34: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38DC38u;
        goto label_38dc38;
    }
    ctx->pc = 0x38DC30u;
    SET_GPR_U32(ctx, 31, 0x38DC38u);
    ctx->pc = 0x38DC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DC30u;
            // 0x38dc34: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DC38u; }
        if (ctx->pc != 0x38DC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DC38u; }
        if (ctx->pc != 0x38DC38u) { return; }
    }
    ctx->pc = 0x38DC38u;
label_38dc38:
    // 0x38dc38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38dc3c:
    // 0x38dc3c: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x38dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_38dc40:
    // 0x38dc40: 0xc0e082c  jal         func_3820B0
label_38dc44:
    if (ctx->pc == 0x38DC44u) {
        ctx->pc = 0x38DC44u;
            // 0x38dc44: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
        ctx->pc = 0x38DC48u;
        goto label_38dc48;
    }
    ctx->pc = 0x38DC40u;
    SET_GPR_U32(ctx, 31, 0x38DC48u);
    ctx->pc = 0x38DC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DC40u;
            // 0x38dc44: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DC48u; }
        if (ctx->pc != 0x38DC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DC48u; }
        if (ctx->pc != 0x38DC48u) { return; }
    }
    ctx->pc = 0x38DC48u;
label_38dc48:
    // 0x38dc48: 0xc0e0828  jal         func_3820A0
label_38dc4c:
    if (ctx->pc == 0x38DC4Cu) {
        ctx->pc = 0x38DC4Cu;
            // 0x38dc4c: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x38DC50u;
        goto label_38dc50;
    }
    ctx->pc = 0x38DC48u;
    SET_GPR_U32(ctx, 31, 0x38DC50u);
    ctx->pc = 0x38DC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DC48u;
            // 0x38dc4c: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DC50u; }
        if (ctx->pc != 0x38DC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DC50u; }
        if (ctx->pc != 0x38DC50u) { return; }
    }
    ctx->pc = 0x38DC50u;
label_38dc50:
    // 0x38dc50: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x38dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_38dc54:
    // 0x38dc54: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_38dc58:
    if (ctx->pc == 0x38DC58u) {
        ctx->pc = 0x38DC58u;
            // 0x38dc58: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x38DC5Cu;
        goto label_38dc5c;
    }
    ctx->pc = 0x38DC54u;
    {
        const bool branch_taken_0x38dc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dc54) {
            ctx->pc = 0x38DC58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38DC54u;
            // 0x38dc58: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38DC8Cu;
            goto label_38dc8c;
        }
    }
    ctx->pc = 0x38DC5Cu;
label_38dc5c:
    // 0x38dc5c: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x38dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_38dc60:
    // 0x38dc60: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x38dc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_38dc64:
    // 0x38dc64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_38dc68:
    if (ctx->pc == 0x38DC68u) {
        ctx->pc = 0x38DC6Cu;
        goto label_38dc6c;
    }
    ctx->pc = 0x38DC64u;
    {
        const bool branch_taken_0x38dc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dc64) {
            ctx->pc = 0x38DC88u;
            goto label_38dc88;
        }
    }
    ctx->pc = 0x38DC6Cu;
label_38dc6c:
    // 0x38dc6c: 0xc0dc408  jal         func_371020
label_38dc70:
    if (ctx->pc == 0x38DC70u) {
        ctx->pc = 0x38DC70u;
            // 0x38dc70: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x38DC74u;
        goto label_38dc74;
    }
    ctx->pc = 0x38DC6Cu;
    SET_GPR_U32(ctx, 31, 0x38DC74u);
    ctx->pc = 0x38DC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DC6Cu;
            // 0x38dc70: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DC74u; }
        if (ctx->pc != 0x38DC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DC74u; }
        if (ctx->pc != 0x38DC74u) { return; }
    }
    ctx->pc = 0x38DC74u;
label_38dc74:
    // 0x38dc74: 0xc0e0824  jal         func_382090
label_38dc78:
    if (ctx->pc == 0x38DC78u) {
        ctx->pc = 0x38DC78u;
            // 0x38dc78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DC7Cu;
        goto label_38dc7c;
    }
    ctx->pc = 0x38DC74u;
    SET_GPR_U32(ctx, 31, 0x38DC7Cu);
    ctx->pc = 0x38DC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DC74u;
            // 0x38dc78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DC7Cu; }
        if (ctx->pc != 0x38DC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DC7Cu; }
        if (ctx->pc != 0x38DC7Cu) { return; }
    }
    ctx->pc = 0x38DC7Cu;
label_38dc7c:
    // 0x38dc7c: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x38dc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_38dc80:
    // 0x38dc80: 0xc0e081c  jal         func_382070
label_38dc84:
    if (ctx->pc == 0x38DC84u) {
        ctx->pc = 0x38DC84u;
            // 0x38dc84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DC88u;
        goto label_38dc88;
    }
    ctx->pc = 0x38DC80u;
    SET_GPR_U32(ctx, 31, 0x38DC88u);
    ctx->pc = 0x38DC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DC80u;
            // 0x38dc84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DC88u; }
        if (ctx->pc != 0x38DC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DC88u; }
        if (ctx->pc != 0x38DC88u) { return; }
    }
    ctx->pc = 0x38DC88u;
label_38dc88:
    // 0x38dc88: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x38dc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38dc8c:
    // 0x38dc8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38dc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38dc90:
    // 0x38dc90: 0xc0e080c  jal         func_382030
label_38dc94:
    if (ctx->pc == 0x38DC94u) {
        ctx->pc = 0x38DC94u;
            // 0x38dc94: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x38DC98u;
        goto label_38dc98;
    }
    ctx->pc = 0x38DC90u;
    SET_GPR_U32(ctx, 31, 0x38DC98u);
    ctx->pc = 0x38DC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DC90u;
            // 0x38dc94: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DC98u; }
        if (ctx->pc != 0x38DC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DC98u; }
        if (ctx->pc != 0x38DC98u) { return; }
    }
    ctx->pc = 0x38DC98u;
label_38dc98:
    // 0x38dc98: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x38dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38dc9c:
    // 0x38dc9c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x38dc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38dca0:
    // 0x38dca0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38dca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38dca4:
    // 0x38dca4: 0xc08914c  jal         func_224530
label_38dca8:
    if (ctx->pc == 0x38DCA8u) {
        ctx->pc = 0x38DCA8u;
            // 0x38dca8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DCACu;
        goto label_38dcac;
    }
    ctx->pc = 0x38DCA4u;
    SET_GPR_U32(ctx, 31, 0x38DCACu);
    ctx->pc = 0x38DCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DCA4u;
            // 0x38dca8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DCACu; }
        if (ctx->pc != 0x38DCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DCACu; }
        if (ctx->pc != 0x38DCACu) { return; }
    }
    ctx->pc = 0x38DCACu;
label_38dcac:
    // 0x38dcac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38dcacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38dcb0:
    // 0x38dcb0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x38dcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_38dcb4:
    // 0x38dcb4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x38dcb4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_38dcb8:
    // 0x38dcb8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x38dcb8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_38dcbc:
    // 0x38dcbc: 0xc0b6df0  jal         func_2DB7C0
label_38dcc0:
    if (ctx->pc == 0x38DCC0u) {
        ctx->pc = 0x38DCC0u;
            // 0x38dcc0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x38DCC4u;
        goto label_38dcc4;
    }
    ctx->pc = 0x38DCBCu;
    SET_GPR_U32(ctx, 31, 0x38DCC4u);
    ctx->pc = 0x38DCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DCBCu;
            // 0x38dcc0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DCC4u; }
        if (ctx->pc != 0x38DCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DCC4u; }
        if (ctx->pc != 0x38DCC4u) { return; }
    }
    ctx->pc = 0x38DCC4u;
label_38dcc4:
    // 0x38dcc4: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x38dcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38dcc8:
    // 0x38dcc8: 0xc0e07f8  jal         func_381FE0
label_38dccc:
    if (ctx->pc == 0x38DCCCu) {
        ctx->pc = 0x38DCCCu;
            // 0x38dccc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x38DCD0u;
        goto label_38dcd0;
    }
    ctx->pc = 0x38DCC8u;
    SET_GPR_U32(ctx, 31, 0x38DCD0u);
    ctx->pc = 0x38DCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DCC8u;
            // 0x38dccc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DCD0u; }
        if (ctx->pc != 0x38DCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DCD0u; }
        if (ctx->pc != 0x38DCD0u) { return; }
    }
    ctx->pc = 0x38DCD0u;
label_38dcd0:
    // 0x38dcd0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x38dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38dcd4:
    // 0x38dcd4: 0xc0dc3f4  jal         func_370FD0
label_38dcd8:
    if (ctx->pc == 0x38DCD8u) {
        ctx->pc = 0x38DCD8u;
            // 0x38dcd8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x38DCDCu;
        goto label_38dcdc;
    }
    ctx->pc = 0x38DCD4u;
    SET_GPR_U32(ctx, 31, 0x38DCDCu);
    ctx->pc = 0x38DCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DCD4u;
            // 0x38dcd8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DCDCu; }
        if (ctx->pc != 0x38DCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DCDCu; }
        if (ctx->pc != 0x38DCDCu) { return; }
    }
    ctx->pc = 0x38DCDCu;
label_38dcdc:
    // 0x38dcdc: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x38dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_38dce0:
    // 0x38dce0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x38dce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_38dce4:
    // 0x38dce4: 0x106001aa  beqz        $v1, . + 4 + (0x1AA << 2)
label_38dce8:
    if (ctx->pc == 0x38DCE8u) {
        ctx->pc = 0x38DCECu;
        goto label_38dcec;
    }
    ctx->pc = 0x38DCE4u;
    {
        const bool branch_taken_0x38dce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dce4) {
            ctx->pc = 0x38E390u;
            goto label_38e390;
        }
    }
    ctx->pc = 0x38DCECu;
label_38dcec:
    // 0x38dcec: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38dcecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38dcf0:
    // 0x38dcf0: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x38dcf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_38dcf4:
    // 0x38dcf4: 0x320f809  jalr        $t9
label_38dcf8:
    if (ctx->pc == 0x38DCF8u) {
        ctx->pc = 0x38DCF8u;
            // 0x38dcf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DCFCu;
        goto label_38dcfc;
    }
    ctx->pc = 0x38DCF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38DCFCu);
        ctx->pc = 0x38DCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38DCF4u;
            // 0x38dcf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38DCFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38DCFCu; }
            if (ctx->pc != 0x38DCFCu) { return; }
        }
        }
    }
    ctx->pc = 0x38DCFCu;
label_38dcfc:
    // 0x38dcfc: 0x100001a4  b           . + 4 + (0x1A4 << 2)
label_38dd00:
    if (ctx->pc == 0x38DD00u) {
        ctx->pc = 0x38DD04u;
        goto label_38dd04;
    }
    ctx->pc = 0x38DCFCu;
    {
        const bool branch_taken_0x38dcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dcfc) {
            ctx->pc = 0x38E390u;
            goto label_38e390;
        }
    }
    ctx->pc = 0x38DD04u;
label_38dd04:
    // 0x38dd04: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x38dd04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_38dd08:
    // 0x38dd08: 0x320f809  jalr        $t9
label_38dd0c:
    if (ctx->pc == 0x38DD0Cu) {
        ctx->pc = 0x38DD0Cu;
            // 0x38dd0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DD10u;
        goto label_38dd10;
    }
    ctx->pc = 0x38DD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38DD10u);
        ctx->pc = 0x38DD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38DD08u;
            // 0x38dd0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38DD10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38DD10u; }
            if (ctx->pc != 0x38DD10u) { return; }
        }
        }
    }
    ctx->pc = 0x38DD10u;
label_38dd10:
    // 0x38dd10: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x38dd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_38dd14:
    // 0x38dd14: 0x1080008b  beqz        $a0, . + 4 + (0x8B << 2)
label_38dd18:
    if (ctx->pc == 0x38DD18u) {
        ctx->pc = 0x38DD1Cu;
        goto label_38dd1c;
    }
    ctx->pc = 0x38DD14u;
    {
        const bool branch_taken_0x38dd14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dd14) {
            ctx->pc = 0x38DF44u;
            goto label_38df44;
        }
    }
    ctx->pc = 0x38DD1Cu;
label_38dd1c:
    // 0x38dd1c: 0xc0e4a60  jal         func_392980
label_38dd20:
    if (ctx->pc == 0x38DD20u) {
        ctx->pc = 0x38DD24u;
        goto label_38dd24;
    }
    ctx->pc = 0x38DD1Cu;
    SET_GPR_U32(ctx, 31, 0x38DD24u);
    ctx->pc = 0x392980u;
    if (runtime->hasFunction(0x392980u)) {
        auto targetFn = runtime->lookupFunction(0x392980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DD24u; }
        if (ctx->pc != 0x38DD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00392980_0x392980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DD24u; }
        if (ctx->pc != 0x38DD24u) { return; }
    }
    ctx->pc = 0x38DD24u;
label_38dd24:
    // 0x38dd24: 0xc0e49b0  jal         func_3926C0
label_38dd28:
    if (ctx->pc == 0x38DD28u) {
        ctx->pc = 0x38DD28u;
            // 0x38dd28: 0x8e2400a0  lw          $a0, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->pc = 0x38DD2Cu;
        goto label_38dd2c;
    }
    ctx->pc = 0x38DD24u;
    SET_GPR_U32(ctx, 31, 0x38DD2Cu);
    ctx->pc = 0x38DD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DD24u;
            // 0x38dd28: 0x8e2400a0  lw          $a0, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3926C0u;
    if (runtime->hasFunction(0x3926C0u)) {
        auto targetFn = runtime->lookupFunction(0x3926C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DD2Cu; }
        if (ctx->pc != 0x38DD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003926C0_0x3926c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DD2Cu; }
        if (ctx->pc != 0x38DD2Cu) { return; }
    }
    ctx->pc = 0x38DD2Cu;
label_38dd2c:
    // 0x38dd2c: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x38dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_38dd30:
    // 0x38dd30: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x38dd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38dd34:
    // 0x38dd34: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x38dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_38dd38:
    // 0x38dd38: 0x5045004f  beql        $v0, $a1, . + 4 + (0x4F << 2)
label_38dd3c:
    if (ctx->pc == 0x38DD3Cu) {
        ctx->pc = 0x38DD3Cu;
            // 0x38dd3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DD40u;
        goto label_38dd40;
    }
    ctx->pc = 0x38DD38u;
    {
        const bool branch_taken_0x38dd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x38dd38) {
            ctx->pc = 0x38DD3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38DD38u;
            // 0x38dd3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38DE78u;
            goto label_38de78;
        }
    }
    ctx->pc = 0x38DD40u;
label_38dd40:
    // 0x38dd40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38dd44:
    // 0x38dd44: 0x5043003f  beql        $v0, $v1, . + 4 + (0x3F << 2)
label_38dd48:
    if (ctx->pc == 0x38DD48u) {
        ctx->pc = 0x38DD48u;
            // 0x38dd48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38DD4Cu;
        goto label_38dd4c;
    }
    ctx->pc = 0x38DD44u;
    {
        const bool branch_taken_0x38dd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x38dd44) {
            ctx->pc = 0x38DD48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38DD44u;
            // 0x38dd48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38DE44u;
            goto label_38de44;
        }
    }
    ctx->pc = 0x38DD4Cu;
label_38dd4c:
    // 0x38dd4c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_38dd50:
    if (ctx->pc == 0x38DD50u) {
        ctx->pc = 0x38DD50u;
            // 0x38dd50: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->pc = 0x38DD54u;
        goto label_38dd54;
    }
    ctx->pc = 0x38DD4Cu;
    {
        const bool branch_taken_0x38dd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dd4c) {
            ctx->pc = 0x38DD50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38DD4Cu;
            // 0x38dd50: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38DD5Cu;
            goto label_38dd5c;
        }
    }
    ctx->pc = 0x38DD54u;
label_38dd54:
    // 0x38dd54: 0x1000007b  b           . + 4 + (0x7B << 2)
label_38dd58:
    if (ctx->pc == 0x38DD58u) {
        ctx->pc = 0x38DD5Cu;
        goto label_38dd5c;
    }
    ctx->pc = 0x38DD54u;
    {
        const bool branch_taken_0x38dd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dd54) {
            ctx->pc = 0x38DF44u;
            goto label_38df44;
        }
    }
    ctx->pc = 0x38DD5Cu;
label_38dd5c:
    // 0x38dd5c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x38dd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_38dd60:
    // 0x38dd60: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
label_38dd64:
    if (ctx->pc == 0x38DD64u) {
        ctx->pc = 0x38DD64u;
            // 0x38dd64: 0xae2000ac  sw          $zero, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
        ctx->pc = 0x38DD68u;
        goto label_38dd68;
    }
    ctx->pc = 0x38DD60u;
    {
        const bool branch_taken_0x38dd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dd60) {
            ctx->pc = 0x38DD64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38DD60u;
            // 0x38dd64: 0xae2000ac  sw          $zero, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38DE3Cu;
            goto label_38de3c;
        }
    }
    ctx->pc = 0x38DD68u;
label_38dd68:
    // 0x38dd68: 0xc0e32a4  jal         func_38CA90
label_38dd6c:
    if (ctx->pc == 0x38DD6Cu) {
        ctx->pc = 0x38DD6Cu;
            // 0x38dd6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DD70u;
        goto label_38dd70;
    }
    ctx->pc = 0x38DD68u;
    SET_GPR_U32(ctx, 31, 0x38DD70u);
    ctx->pc = 0x38DD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DD68u;
            // 0x38dd6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DD70u; }
        if (ctx->pc != 0x38DD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DD70u; }
        if (ctx->pc != 0x38DD70u) { return; }
    }
    ctx->pc = 0x38DD70u;
label_38dd70:
    // 0x38dd70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38dd74:
    // 0x38dd74: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x38dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_38dd78:
    // 0x38dd78: 0xc0e082c  jal         func_3820B0
label_38dd7c:
    if (ctx->pc == 0x38DD7Cu) {
        ctx->pc = 0x38DD7Cu;
            // 0x38dd7c: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
        ctx->pc = 0x38DD80u;
        goto label_38dd80;
    }
    ctx->pc = 0x38DD78u;
    SET_GPR_U32(ctx, 31, 0x38DD80u);
    ctx->pc = 0x38DD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DD78u;
            // 0x38dd7c: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DD80u; }
        if (ctx->pc != 0x38DD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DD80u; }
        if (ctx->pc != 0x38DD80u) { return; }
    }
    ctx->pc = 0x38DD80u;
label_38dd80:
    // 0x38dd80: 0xc0e0828  jal         func_3820A0
label_38dd84:
    if (ctx->pc == 0x38DD84u) {
        ctx->pc = 0x38DD84u;
            // 0x38dd84: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x38DD88u;
        goto label_38dd88;
    }
    ctx->pc = 0x38DD80u;
    SET_GPR_U32(ctx, 31, 0x38DD88u);
    ctx->pc = 0x38DD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DD80u;
            // 0x38dd84: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DD88u; }
        if (ctx->pc != 0x38DD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DD88u; }
        if (ctx->pc != 0x38DD88u) { return; }
    }
    ctx->pc = 0x38DD88u;
label_38dd88:
    // 0x38dd88: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x38dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_38dd8c:
    // 0x38dd8c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_38dd90:
    if (ctx->pc == 0x38DD90u) {
        ctx->pc = 0x38DD90u;
            // 0x38dd90: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x38DD94u;
        goto label_38dd94;
    }
    ctx->pc = 0x38DD8Cu;
    {
        const bool branch_taken_0x38dd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dd8c) {
            ctx->pc = 0x38DD90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38DD8Cu;
            // 0x38dd90: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38DDC4u;
            goto label_38ddc4;
        }
    }
    ctx->pc = 0x38DD94u;
label_38dd94:
    // 0x38dd94: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x38dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_38dd98:
    // 0x38dd98: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x38dd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_38dd9c:
    // 0x38dd9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_38dda0:
    if (ctx->pc == 0x38DDA0u) {
        ctx->pc = 0x38DDA4u;
        goto label_38dda4;
    }
    ctx->pc = 0x38DD9Cu;
    {
        const bool branch_taken_0x38dd9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dd9c) {
            ctx->pc = 0x38DDC0u;
            goto label_38ddc0;
        }
    }
    ctx->pc = 0x38DDA4u;
label_38dda4:
    // 0x38dda4: 0xc0dc408  jal         func_371020
label_38dda8:
    if (ctx->pc == 0x38DDA8u) {
        ctx->pc = 0x38DDA8u;
            // 0x38dda8: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x38DDACu;
        goto label_38ddac;
    }
    ctx->pc = 0x38DDA4u;
    SET_GPR_U32(ctx, 31, 0x38DDACu);
    ctx->pc = 0x38DDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DDA4u;
            // 0x38dda8: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DDACu; }
        if (ctx->pc != 0x38DDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DDACu; }
        if (ctx->pc != 0x38DDACu) { return; }
    }
    ctx->pc = 0x38DDACu;
label_38ddac:
    // 0x38ddac: 0xc0e0824  jal         func_382090
label_38ddb0:
    if (ctx->pc == 0x38DDB0u) {
        ctx->pc = 0x38DDB0u;
            // 0x38ddb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DDB4u;
        goto label_38ddb4;
    }
    ctx->pc = 0x38DDACu;
    SET_GPR_U32(ctx, 31, 0x38DDB4u);
    ctx->pc = 0x38DDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DDACu;
            // 0x38ddb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DDB4u; }
        if (ctx->pc != 0x38DDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DDB4u; }
        if (ctx->pc != 0x38DDB4u) { return; }
    }
    ctx->pc = 0x38DDB4u;
label_38ddb4:
    // 0x38ddb4: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x38ddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_38ddb8:
    // 0x38ddb8: 0xc0e081c  jal         func_382070
label_38ddbc:
    if (ctx->pc == 0x38DDBCu) {
        ctx->pc = 0x38DDBCu;
            // 0x38ddbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DDC0u;
        goto label_38ddc0;
    }
    ctx->pc = 0x38DDB8u;
    SET_GPR_U32(ctx, 31, 0x38DDC0u);
    ctx->pc = 0x38DDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DDB8u;
            // 0x38ddbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DDC0u; }
        if (ctx->pc != 0x38DDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DDC0u; }
        if (ctx->pc != 0x38DDC0u) { return; }
    }
    ctx->pc = 0x38DDC0u;
label_38ddc0:
    // 0x38ddc0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x38ddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38ddc4:
    // 0x38ddc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38ddc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38ddc8:
    // 0x38ddc8: 0xc0e080c  jal         func_382030
label_38ddcc:
    if (ctx->pc == 0x38DDCCu) {
        ctx->pc = 0x38DDCCu;
            // 0x38ddcc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x38DDD0u;
        goto label_38ddd0;
    }
    ctx->pc = 0x38DDC8u;
    SET_GPR_U32(ctx, 31, 0x38DDD0u);
    ctx->pc = 0x38DDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DDC8u;
            // 0x38ddcc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DDD0u; }
        if (ctx->pc != 0x38DDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DDD0u; }
        if (ctx->pc != 0x38DDD0u) { return; }
    }
    ctx->pc = 0x38DDD0u;
label_38ddd0:
    // 0x38ddd0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x38ddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38ddd4:
    // 0x38ddd4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x38ddd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38ddd8:
    // 0x38ddd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38ddd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38dddc:
    // 0x38dddc: 0xc08914c  jal         func_224530
label_38dde0:
    if (ctx->pc == 0x38DDE0u) {
        ctx->pc = 0x38DDE0u;
            // 0x38dde0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DDE4u;
        goto label_38dde4;
    }
    ctx->pc = 0x38DDDCu;
    SET_GPR_U32(ctx, 31, 0x38DDE4u);
    ctx->pc = 0x38DDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DDDCu;
            // 0x38dde0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DDE4u; }
        if (ctx->pc != 0x38DDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DDE4u; }
        if (ctx->pc != 0x38DDE4u) { return; }
    }
    ctx->pc = 0x38DDE4u;
label_38dde4:
    // 0x38dde4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38dde4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38dde8:
    // 0x38dde8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x38dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_38ddec:
    // 0x38ddec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x38ddecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_38ddf0:
    // 0x38ddf0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x38ddf0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_38ddf4:
    // 0x38ddf4: 0xc0b6df0  jal         func_2DB7C0
label_38ddf8:
    if (ctx->pc == 0x38DDF8u) {
        ctx->pc = 0x38DDF8u;
            // 0x38ddf8: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x38DDFCu;
        goto label_38ddfc;
    }
    ctx->pc = 0x38DDF4u;
    SET_GPR_U32(ctx, 31, 0x38DDFCu);
    ctx->pc = 0x38DDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DDF4u;
            // 0x38ddf8: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DDFCu; }
        if (ctx->pc != 0x38DDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DDFCu; }
        if (ctx->pc != 0x38DDFCu) { return; }
    }
    ctx->pc = 0x38DDFCu;
label_38ddfc:
    // 0x38ddfc: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x38ddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38de00:
    // 0x38de00: 0xc0e07f8  jal         func_381FE0
label_38de04:
    if (ctx->pc == 0x38DE04u) {
        ctx->pc = 0x38DE04u;
            // 0x38de04: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x38DE08u;
        goto label_38de08;
    }
    ctx->pc = 0x38DE00u;
    SET_GPR_U32(ctx, 31, 0x38DE08u);
    ctx->pc = 0x38DE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DE00u;
            // 0x38de04: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DE08u; }
        if (ctx->pc != 0x38DE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DE08u; }
        if (ctx->pc != 0x38DE08u) { return; }
    }
    ctx->pc = 0x38DE08u;
label_38de08:
    // 0x38de08: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x38de08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38de0c:
    // 0x38de0c: 0xc0dc3f4  jal         func_370FD0
label_38de10:
    if (ctx->pc == 0x38DE10u) {
        ctx->pc = 0x38DE10u;
            // 0x38de10: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x38DE14u;
        goto label_38de14;
    }
    ctx->pc = 0x38DE0Cu;
    SET_GPR_U32(ctx, 31, 0x38DE14u);
    ctx->pc = 0x38DE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DE0Cu;
            // 0x38de10: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DE14u; }
        if (ctx->pc != 0x38DE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DE14u; }
        if (ctx->pc != 0x38DE14u) { return; }
    }
    ctx->pc = 0x38DE14u;
label_38de14:
    // 0x38de14: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x38de14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_38de18:
    // 0x38de18: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x38de18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_38de1c:
    // 0x38de1c: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_38de20:
    if (ctx->pc == 0x38DE20u) {
        ctx->pc = 0x38DE24u;
        goto label_38de24;
    }
    ctx->pc = 0x38DE1Cu;
    {
        const bool branch_taken_0x38de1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38de1c) {
            ctx->pc = 0x38DF44u;
            goto label_38df44;
        }
    }
    ctx->pc = 0x38DE24u;
label_38de24:
    // 0x38de24: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38de24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38de28:
    // 0x38de28: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x38de28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_38de2c:
    // 0x38de2c: 0x320f809  jalr        $t9
label_38de30:
    if (ctx->pc == 0x38DE30u) {
        ctx->pc = 0x38DE30u;
            // 0x38de30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DE34u;
        goto label_38de34;
    }
    ctx->pc = 0x38DE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38DE34u);
        ctx->pc = 0x38DE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38DE2Cu;
            // 0x38de30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38DE34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38DE34u; }
            if (ctx->pc != 0x38DE34u) { return; }
        }
        }
    }
    ctx->pc = 0x38DE34u;
label_38de34:
    // 0x38de34: 0x10000043  b           . + 4 + (0x43 << 2)
label_38de38:
    if (ctx->pc == 0x38DE38u) {
        ctx->pc = 0x38DE3Cu;
        goto label_38de3c;
    }
    ctx->pc = 0x38DE34u;
    {
        const bool branch_taken_0x38de34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38de34) {
            ctx->pc = 0x38DF44u;
            goto label_38df44;
        }
    }
    ctx->pc = 0x38DE3Cu;
label_38de3c:
    // 0x38de3c: 0x10000041  b           . + 4 + (0x41 << 2)
label_38de40:
    if (ctx->pc == 0x38DE40u) {
        ctx->pc = 0x38DE40u;
            // 0x38de40: 0xae2000c0  sw          $zero, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
        ctx->pc = 0x38DE44u;
        goto label_38de44;
    }
    ctx->pc = 0x38DE3Cu;
    {
        const bool branch_taken_0x38de3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38DE3Cu;
            // 0x38de40: 0xae2000c0  sw          $zero, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de3c) {
            ctx->pc = 0x38DF44u;
            goto label_38df44;
        }
    }
    ctx->pc = 0x38DE44u;
label_38de44:
    // 0x38de44: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x38de44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_38de48:
    // 0x38de48: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x38de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38de4c:
    // 0x38de4c: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x38de4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_38de50:
    // 0x38de50: 0xae2300ac  sw          $v1, 0xAC($s1)
    ctx->pc = 0x38de50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 3));
label_38de54:
    // 0x38de54: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38de54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38de58:
    // 0x38de58: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x38de58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_38de5c:
    // 0x38de5c: 0x320f809  jalr        $t9
label_38de60:
    if (ctx->pc == 0x38DE60u) {
        ctx->pc = 0x38DE60u;
            // 0x38de60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DE64u;
        goto label_38de64;
    }
    ctx->pc = 0x38DE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38DE64u);
        ctx->pc = 0x38DE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38DE5Cu;
            // 0x38de60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38DE64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38DE64u; }
            if (ctx->pc != 0x38DE64u) { return; }
        }
        }
    }
    ctx->pc = 0x38DE64u;
label_38de64:
    // 0x38de64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38de64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38de68:
    // 0x38de68: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x38de68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_38de6c:
    // 0x38de6c: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x38de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_38de70:
    // 0x38de70: 0x10000034  b           . + 4 + (0x34 << 2)
label_38de74:
    if (ctx->pc == 0x38DE74u) {
        ctx->pc = 0x38DE74u;
            // 0x38de74: 0xa222004c  sb          $v0, 0x4C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x38DE78u;
        goto label_38de78;
    }
    ctx->pc = 0x38DE70u;
    {
        const bool branch_taken_0x38de70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38DE70u;
            // 0x38de74: 0xa222004c  sb          $v0, 0x4C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38de70) {
            ctx->pc = 0x38DF44u;
            goto label_38df44;
        }
    }
    ctx->pc = 0x38DE78u;
label_38de78:
    // 0x38de78: 0xc0e32a4  jal         func_38CA90
label_38de7c:
    if (ctx->pc == 0x38DE7Cu) {
        ctx->pc = 0x38DE80u;
        goto label_38de80;
    }
    ctx->pc = 0x38DE78u;
    SET_GPR_U32(ctx, 31, 0x38DE80u);
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DE80u; }
        if (ctx->pc != 0x38DE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DE80u; }
        if (ctx->pc != 0x38DE80u) { return; }
    }
    ctx->pc = 0x38DE80u;
label_38de80:
    // 0x38de80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38de80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38de84:
    // 0x38de84: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x38de84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_38de88:
    // 0x38de88: 0xc0e082c  jal         func_3820B0
label_38de8c:
    if (ctx->pc == 0x38DE8Cu) {
        ctx->pc = 0x38DE8Cu;
            // 0x38de8c: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
        ctx->pc = 0x38DE90u;
        goto label_38de90;
    }
    ctx->pc = 0x38DE88u;
    SET_GPR_U32(ctx, 31, 0x38DE90u);
    ctx->pc = 0x38DE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DE88u;
            // 0x38de8c: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DE90u; }
        if (ctx->pc != 0x38DE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DE90u; }
        if (ctx->pc != 0x38DE90u) { return; }
    }
    ctx->pc = 0x38DE90u;
label_38de90:
    // 0x38de90: 0xc0e0828  jal         func_3820A0
label_38de94:
    if (ctx->pc == 0x38DE94u) {
        ctx->pc = 0x38DE94u;
            // 0x38de94: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x38DE98u;
        goto label_38de98;
    }
    ctx->pc = 0x38DE90u;
    SET_GPR_U32(ctx, 31, 0x38DE98u);
    ctx->pc = 0x38DE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DE90u;
            // 0x38de94: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DE98u; }
        if (ctx->pc != 0x38DE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DE98u; }
        if (ctx->pc != 0x38DE98u) { return; }
    }
    ctx->pc = 0x38DE98u;
label_38de98:
    // 0x38de98: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x38de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_38de9c:
    // 0x38de9c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_38dea0:
    if (ctx->pc == 0x38DEA0u) {
        ctx->pc = 0x38DEA0u;
            // 0x38dea0: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x38DEA4u;
        goto label_38dea4;
    }
    ctx->pc = 0x38DE9Cu;
    {
        const bool branch_taken_0x38de9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38de9c) {
            ctx->pc = 0x38DEA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38DE9Cu;
            // 0x38dea0: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38DED4u;
            goto label_38ded4;
        }
    }
    ctx->pc = 0x38DEA4u;
label_38dea4:
    // 0x38dea4: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x38dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_38dea8:
    // 0x38dea8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x38dea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_38deac:
    // 0x38deac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_38deb0:
    if (ctx->pc == 0x38DEB0u) {
        ctx->pc = 0x38DEB4u;
        goto label_38deb4;
    }
    ctx->pc = 0x38DEACu;
    {
        const bool branch_taken_0x38deac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38deac) {
            ctx->pc = 0x38DED0u;
            goto label_38ded0;
        }
    }
    ctx->pc = 0x38DEB4u;
label_38deb4:
    // 0x38deb4: 0xc0dc408  jal         func_371020
label_38deb8:
    if (ctx->pc == 0x38DEB8u) {
        ctx->pc = 0x38DEB8u;
            // 0x38deb8: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x38DEBCu;
        goto label_38debc;
    }
    ctx->pc = 0x38DEB4u;
    SET_GPR_U32(ctx, 31, 0x38DEBCu);
    ctx->pc = 0x38DEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DEB4u;
            // 0x38deb8: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DEBCu; }
        if (ctx->pc != 0x38DEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DEBCu; }
        if (ctx->pc != 0x38DEBCu) { return; }
    }
    ctx->pc = 0x38DEBCu;
label_38debc:
    // 0x38debc: 0xc0e0824  jal         func_382090
label_38dec0:
    if (ctx->pc == 0x38DEC0u) {
        ctx->pc = 0x38DEC0u;
            // 0x38dec0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DEC4u;
        goto label_38dec4;
    }
    ctx->pc = 0x38DEBCu;
    SET_GPR_U32(ctx, 31, 0x38DEC4u);
    ctx->pc = 0x38DEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DEBCu;
            // 0x38dec0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DEC4u; }
        if (ctx->pc != 0x38DEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DEC4u; }
        if (ctx->pc != 0x38DEC4u) { return; }
    }
    ctx->pc = 0x38DEC4u;
label_38dec4:
    // 0x38dec4: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x38dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_38dec8:
    // 0x38dec8: 0xc0e081c  jal         func_382070
label_38decc:
    if (ctx->pc == 0x38DECCu) {
        ctx->pc = 0x38DECCu;
            // 0x38decc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DED0u;
        goto label_38ded0;
    }
    ctx->pc = 0x38DEC8u;
    SET_GPR_U32(ctx, 31, 0x38DED0u);
    ctx->pc = 0x38DECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DEC8u;
            // 0x38decc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DED0u; }
        if (ctx->pc != 0x38DED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DED0u; }
        if (ctx->pc != 0x38DED0u) { return; }
    }
    ctx->pc = 0x38DED0u;
label_38ded0:
    // 0x38ded0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x38ded0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38ded4:
    // 0x38ded4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38ded4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38ded8:
    // 0x38ded8: 0xc0e080c  jal         func_382030
label_38dedc:
    if (ctx->pc == 0x38DEDCu) {
        ctx->pc = 0x38DEDCu;
            // 0x38dedc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x38DEE0u;
        goto label_38dee0;
    }
    ctx->pc = 0x38DED8u;
    SET_GPR_U32(ctx, 31, 0x38DEE0u);
    ctx->pc = 0x38DEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DED8u;
            // 0x38dedc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DEE0u; }
        if (ctx->pc != 0x38DEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DEE0u; }
        if (ctx->pc != 0x38DEE0u) { return; }
    }
    ctx->pc = 0x38DEE0u;
label_38dee0:
    // 0x38dee0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x38dee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38dee4:
    // 0x38dee4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x38dee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38dee8:
    // 0x38dee8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38dee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38deec:
    // 0x38deec: 0xc08914c  jal         func_224530
label_38def0:
    if (ctx->pc == 0x38DEF0u) {
        ctx->pc = 0x38DEF0u;
            // 0x38def0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DEF4u;
        goto label_38def4;
    }
    ctx->pc = 0x38DEECu;
    SET_GPR_U32(ctx, 31, 0x38DEF4u);
    ctx->pc = 0x38DEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DEECu;
            // 0x38def0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DEF4u; }
        if (ctx->pc != 0x38DEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DEF4u; }
        if (ctx->pc != 0x38DEF4u) { return; }
    }
    ctx->pc = 0x38DEF4u;
label_38def4:
    // 0x38def4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38def4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38def8:
    // 0x38def8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x38def8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_38defc:
    // 0x38defc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x38defcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_38df00:
    // 0x38df00: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x38df00u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_38df04:
    // 0x38df04: 0xc0b6df0  jal         func_2DB7C0
label_38df08:
    if (ctx->pc == 0x38DF08u) {
        ctx->pc = 0x38DF08u;
            // 0x38df08: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x38DF0Cu;
        goto label_38df0c;
    }
    ctx->pc = 0x38DF04u;
    SET_GPR_U32(ctx, 31, 0x38DF0Cu);
    ctx->pc = 0x38DF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DF04u;
            // 0x38df08: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DF0Cu; }
        if (ctx->pc != 0x38DF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DF0Cu; }
        if (ctx->pc != 0x38DF0Cu) { return; }
    }
    ctx->pc = 0x38DF0Cu;
label_38df0c:
    // 0x38df0c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x38df0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38df10:
    // 0x38df10: 0xc0e07f8  jal         func_381FE0
label_38df14:
    if (ctx->pc == 0x38DF14u) {
        ctx->pc = 0x38DF14u;
            // 0x38df14: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x38DF18u;
        goto label_38df18;
    }
    ctx->pc = 0x38DF10u;
    SET_GPR_U32(ctx, 31, 0x38DF18u);
    ctx->pc = 0x38DF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DF10u;
            // 0x38df14: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DF18u; }
        if (ctx->pc != 0x38DF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DF18u; }
        if (ctx->pc != 0x38DF18u) { return; }
    }
    ctx->pc = 0x38DF18u;
label_38df18:
    // 0x38df18: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x38df18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38df1c:
    // 0x38df1c: 0xc0dc3f4  jal         func_370FD0
label_38df20:
    if (ctx->pc == 0x38DF20u) {
        ctx->pc = 0x38DF20u;
            // 0x38df20: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x38DF24u;
        goto label_38df24;
    }
    ctx->pc = 0x38DF1Cu;
    SET_GPR_U32(ctx, 31, 0x38DF24u);
    ctx->pc = 0x38DF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DF1Cu;
            // 0x38df20: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DF24u; }
        if (ctx->pc != 0x38DF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DF24u; }
        if (ctx->pc != 0x38DF24u) { return; }
    }
    ctx->pc = 0x38DF24u;
label_38df24:
    // 0x38df24: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x38df24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_38df28:
    // 0x38df28: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x38df28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_38df2c:
    // 0x38df2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_38df30:
    if (ctx->pc == 0x38DF30u) {
        ctx->pc = 0x38DF34u;
        goto label_38df34;
    }
    ctx->pc = 0x38DF2Cu;
    {
        const bool branch_taken_0x38df2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38df2c) {
            ctx->pc = 0x38DF44u;
            goto label_38df44;
        }
    }
    ctx->pc = 0x38DF34u;
label_38df34:
    // 0x38df34: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38df34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38df38:
    // 0x38df38: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x38df38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_38df3c:
    // 0x38df3c: 0x320f809  jalr        $t9
label_38df40:
    if (ctx->pc == 0x38DF40u) {
        ctx->pc = 0x38DF40u;
            // 0x38df40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DF44u;
        goto label_38df44;
    }
    ctx->pc = 0x38DF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38DF44u);
        ctx->pc = 0x38DF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38DF3Cu;
            // 0x38df40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38DF44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38DF44u; }
            if (ctx->pc != 0x38DF44u) { return; }
        }
        }
    }
    ctx->pc = 0x38DF44u;
label_38df44:
    // 0x38df44: 0xc0775b0  jal         func_1DD6C0
label_38df48:
    if (ctx->pc == 0x38DF48u) {
        ctx->pc = 0x38DF4Cu;
        goto label_38df4c;
    }
    ctx->pc = 0x38DF44u;
    SET_GPR_U32(ctx, 31, 0x38DF4Cu);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DF4Cu; }
        if (ctx->pc != 0x38DF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DF4Cu; }
        if (ctx->pc != 0x38DF4Cu) { return; }
    }
    ctx->pc = 0x38DF4Cu;
label_38df4c:
    // 0x38df4c: 0xc0775ac  jal         func_1DD6B0
label_38df50:
    if (ctx->pc == 0x38DF50u) {
        ctx->pc = 0x38DF50u;
            // 0x38df50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DF54u;
        goto label_38df54;
    }
    ctx->pc = 0x38DF4Cu;
    SET_GPR_U32(ctx, 31, 0x38DF54u);
    ctx->pc = 0x38DF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DF4Cu;
            // 0x38df50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DF54u; }
        if (ctx->pc != 0x38DF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DF54u; }
        if (ctx->pc != 0x38DF54u) { return; }
    }
    ctx->pc = 0x38DF54u;
label_38df54:
    // 0x38df54: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x38df54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_38df58:
    // 0x38df58: 0x5443001c  bnel        $v0, $v1, . + 4 + (0x1C << 2)
label_38df5c:
    if (ctx->pc == 0x38DF5Cu) {
        ctx->pc = 0x38DF5Cu;
            // 0x38df5c: 0x8e300050  lw          $s0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x38DF60u;
        goto label_38df60;
    }
    ctx->pc = 0x38DF58u;
    {
        const bool branch_taken_0x38df58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38df58) {
            ctx->pc = 0x38DF5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38DF58u;
            // 0x38df5c: 0x8e300050  lw          $s0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38DFCCu;
            goto label_38dfcc;
        }
    }
    ctx->pc = 0x38DF60u;
label_38df60:
    // 0x38df60: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x38df60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_38df64:
    // 0x38df64: 0xc0775a8  jal         func_1DD6A0
label_38df68:
    if (ctx->pc == 0x38DF68u) {
        ctx->pc = 0x38DF68u;
            // 0x38df68: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x38DF6Cu;
        goto label_38df6c;
    }
    ctx->pc = 0x38DF64u;
    SET_GPR_U32(ctx, 31, 0x38DF6Cu);
    ctx->pc = 0x38DF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DF64u;
            // 0x38df68: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6A0u;
    if (runtime->hasFunction(0x1DD6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DF6Cu; }
        if (ctx->pc != 0x38DF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6A0_0x1dd6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DF6Cu; }
        if (ctx->pc != 0x38DF6Cu) { return; }
    }
    ctx->pc = 0x38DF6Cu;
label_38df6c:
    // 0x38df6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x38df6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_38df70:
    // 0x38df70: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x38df70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_38df74:
    // 0x38df74: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_38df78:
    if (ctx->pc == 0x38DF78u) {
        ctx->pc = 0x38DF7Cu;
        goto label_38df7c;
    }
    ctx->pc = 0x38DF74u;
    {
        const bool branch_taken_0x38df74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38df74) {
            ctx->pc = 0x38DFC8u;
            goto label_38dfc8;
        }
    }
    ctx->pc = 0x38DF7Cu;
label_38df7c:
    // 0x38df7c: 0xc62200c0  lwc1        $f2, 0xC0($s1)
    ctx->pc = 0x38df7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38df80:
    // 0x38df80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38df80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_38df84:
    // 0x38df84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38df84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38df88:
    // 0x38df88: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x38df88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_38df8c:
    // 0x38df8c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x38df8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_38df90:
    // 0x38df90: 0xc440fea0  lwc1        $f0, -0x160($v0)
    ctx->pc = 0x38df90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38df94:
    // 0x38df94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38df94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38df98:
    // 0x38df98: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_38df9c:
    if (ctx->pc == 0x38DF9Cu) {
        ctx->pc = 0x38DF9Cu;
            // 0x38df9c: 0xe62100c0  swc1        $f1, 0xC0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
        ctx->pc = 0x38DFA0u;
        goto label_38dfa0;
    }
    ctx->pc = 0x38DF98u;
    {
        const bool branch_taken_0x38df98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38DF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38DF98u;
            // 0x38df9c: 0xe62100c0  swc1        $f1, 0xC0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38df98) {
            ctx->pc = 0x38DFC8u;
            goto label_38dfc8;
        }
    }
    ctx->pc = 0x38DFA0u;
label_38dfa0:
    // 0x38dfa0: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x38dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_38dfa4:
    // 0x38dfa4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_38dfa8:
    if (ctx->pc == 0x38DFA8u) {
        ctx->pc = 0x38DFA8u;
            // 0x38dfa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DFACu;
        goto label_38dfac;
    }
    ctx->pc = 0x38DFA4u;
    {
        const bool branch_taken_0x38dfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38dfa4) {
            ctx->pc = 0x38DFA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38DFA4u;
            // 0x38dfa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38DFC0u;
            goto label_38dfc0;
        }
    }
    ctx->pc = 0x38DFACu;
label_38dfac:
    // 0x38dfac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38dfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38dfb0:
    // 0x38dfb0: 0xc0e38ec  jal         func_38E3B0
label_38dfb4:
    if (ctx->pc == 0x38DFB4u) {
        ctx->pc = 0x38DFB4u;
            // 0x38dfb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38DFB8u;
        goto label_38dfb8;
    }
    ctx->pc = 0x38DFB0u;
    SET_GPR_U32(ctx, 31, 0x38DFB8u);
    ctx->pc = 0x38DFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DFB0u;
            // 0x38dfb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E3B0u;
    if (runtime->hasFunction(0x38E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x38E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DFB8u; }
        if (ctx->pc != 0x38DFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E3B0_0x38e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DFB8u; }
        if (ctx->pc != 0x38DFB8u) { return; }
    }
    ctx->pc = 0x38DFB8u;
label_38dfb8:
    // 0x38dfb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_38dfbc:
    if (ctx->pc == 0x38DFBCu) {
        ctx->pc = 0x38DFC0u;
        goto label_38dfc0;
    }
    ctx->pc = 0x38DFB8u;
    {
        const bool branch_taken_0x38dfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dfb8) {
            ctx->pc = 0x38DFC8u;
            goto label_38dfc8;
        }
    }
    ctx->pc = 0x38DFC0u;
label_38dfc0:
    // 0x38dfc0: 0xc0e38ec  jal         func_38E3B0
label_38dfc4:
    if (ctx->pc == 0x38DFC4u) {
        ctx->pc = 0x38DFC4u;
            // 0x38dfc4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38DFC8u;
        goto label_38dfc8;
    }
    ctx->pc = 0x38DFC0u;
    SET_GPR_U32(ctx, 31, 0x38DFC8u);
    ctx->pc = 0x38DFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DFC0u;
            // 0x38dfc4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E3B0u;
    if (runtime->hasFunction(0x38E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x38E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DFC8u; }
        if (ctx->pc != 0x38DFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E3B0_0x38e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DFC8u; }
        if (ctx->pc != 0x38DFC8u) { return; }
    }
    ctx->pc = 0x38DFC8u;
label_38dfc8:
    // 0x38dfc8: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x38dfc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38dfcc:
    // 0x38dfcc: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x38dfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_38dfd0:
    // 0x38dfd0: 0xc0dc9bc  jal         func_3726F0
label_38dfd4:
    if (ctx->pc == 0x38DFD4u) {
        ctx->pc = 0x38DFD4u;
            // 0x38dfd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DFD8u;
        goto label_38dfd8;
    }
    ctx->pc = 0x38DFD0u;
    SET_GPR_U32(ctx, 31, 0x38DFD8u);
    ctx->pc = 0x38DFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DFD0u;
            // 0x38dfd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DFD8u; }
        if (ctx->pc != 0x38DFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DFD8u; }
        if (ctx->pc != 0x38DFD8u) { return; }
    }
    ctx->pc = 0x38DFD8u;
label_38dfd8:
    // 0x38dfd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38dfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38dfdc:
    // 0x38dfdc: 0xc0dc9a0  jal         func_372680
label_38dfe0:
    if (ctx->pc == 0x38DFE0u) {
        ctx->pc = 0x38DFE0u;
            // 0x38dfe0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x38DFE4u;
        goto label_38dfe4;
    }
    ctx->pc = 0x38DFDCu;
    SET_GPR_U32(ctx, 31, 0x38DFE4u);
    ctx->pc = 0x38DFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38DFDCu;
            // 0x38dfe0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DFE4u; }
        if (ctx->pc != 0x38DFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38DFE4u; }
        if (ctx->pc != 0x38DFE4u) { return; }
    }
    ctx->pc = 0x38DFE4u;
label_38dfe4:
    // 0x38dfe4: 0x100000ea  b           . + 4 + (0xEA << 2)
label_38dfe8:
    if (ctx->pc == 0x38DFE8u) {
        ctx->pc = 0x38DFECu;
        goto label_38dfec;
    }
    ctx->pc = 0x38DFE4u;
    {
        const bool branch_taken_0x38dfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dfe4) {
            ctx->pc = 0x38E390u;
            goto label_38e390;
        }
    }
    ctx->pc = 0x38DFECu;
label_38dfec:
    // 0x38dfec: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x38dfecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_38dff0:
    // 0x38dff0: 0x320f809  jalr        $t9
label_38dff4:
    if (ctx->pc == 0x38DFF4u) {
        ctx->pc = 0x38DFF4u;
            // 0x38dff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38DFF8u;
        goto label_38dff8;
    }
    ctx->pc = 0x38DFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38DFF8u);
        ctx->pc = 0x38DFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38DFF0u;
            // 0x38dff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38DFF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38DFF8u; }
            if (ctx->pc != 0x38DFF8u) { return; }
        }
        }
    }
    ctx->pc = 0x38DFF8u;
label_38dff8:
    // 0x38dff8: 0xc0775b0  jal         func_1DD6C0
label_38dffc:
    if (ctx->pc == 0x38DFFCu) {
        ctx->pc = 0x38E000u;
        goto label_38e000;
    }
    ctx->pc = 0x38DFF8u;
    SET_GPR_U32(ctx, 31, 0x38E000u);
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E000u; }
        if (ctx->pc != 0x38E000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E000u; }
        if (ctx->pc != 0x38E000u) { return; }
    }
    ctx->pc = 0x38E000u;
label_38e000:
    // 0x38e000: 0xc0775ac  jal         func_1DD6B0
label_38e004:
    if (ctx->pc == 0x38E004u) {
        ctx->pc = 0x38E004u;
            // 0x38e004: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E008u;
        goto label_38e008;
    }
    ctx->pc = 0x38E000u;
    SET_GPR_U32(ctx, 31, 0x38E008u);
    ctx->pc = 0x38E004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E000u;
            // 0x38e004: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E008u; }
        if (ctx->pc != 0x38E008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E008u; }
        if (ctx->pc != 0x38E008u) { return; }
    }
    ctx->pc = 0x38E008u;
label_38e008:
    // 0x38e008: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x38e008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_38e00c:
    // 0x38e00c: 0x5443001c  bnel        $v0, $v1, . + 4 + (0x1C << 2)
label_38e010:
    if (ctx->pc == 0x38E010u) {
        ctx->pc = 0x38E010u;
            // 0x38e010: 0x8e300050  lw          $s0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x38E014u;
        goto label_38e014;
    }
    ctx->pc = 0x38E00Cu;
    {
        const bool branch_taken_0x38e00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38e00c) {
            ctx->pc = 0x38E010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38E00Cu;
            // 0x38e010: 0x8e300050  lw          $s0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38E080u;
            goto label_38e080;
        }
    }
    ctx->pc = 0x38E014u;
label_38e014:
    // 0x38e014: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x38e014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_38e018:
    // 0x38e018: 0xc0775a8  jal         func_1DD6A0
label_38e01c:
    if (ctx->pc == 0x38E01Cu) {
        ctx->pc = 0x38E01Cu;
            // 0x38e01c: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x38E020u;
        goto label_38e020;
    }
    ctx->pc = 0x38E018u;
    SET_GPR_U32(ctx, 31, 0x38E020u);
    ctx->pc = 0x38E01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E018u;
            // 0x38e01c: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6A0u;
    if (runtime->hasFunction(0x1DD6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E020u; }
        if (ctx->pc != 0x38E020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6A0_0x1dd6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E020u; }
        if (ctx->pc != 0x38E020u) { return; }
    }
    ctx->pc = 0x38E020u;
label_38e020:
    // 0x38e020: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x38e020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_38e024:
    // 0x38e024: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x38e024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_38e028:
    // 0x38e028: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_38e02c:
    if (ctx->pc == 0x38E02Cu) {
        ctx->pc = 0x38E030u;
        goto label_38e030;
    }
    ctx->pc = 0x38E028u;
    {
        const bool branch_taken_0x38e028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38e028) {
            ctx->pc = 0x38E07Cu;
            goto label_38e07c;
        }
    }
    ctx->pc = 0x38E030u;
label_38e030:
    // 0x38e030: 0xc62200c0  lwc1        $f2, 0xC0($s1)
    ctx->pc = 0x38e030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38e034:
    // 0x38e034: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x38e034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_38e038:
    // 0x38e038: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x38e038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_38e03c:
    // 0x38e03c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x38e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_38e040:
    // 0x38e040: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x38e040u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_38e044:
    // 0x38e044: 0xc440fea0  lwc1        $f0, -0x160($v0)
    ctx->pc = 0x38e044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38e048:
    // 0x38e048: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38e048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38e04c:
    // 0x38e04c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_38e050:
    if (ctx->pc == 0x38E050u) {
        ctx->pc = 0x38E050u;
            // 0x38e050: 0xe62100c0  swc1        $f1, 0xC0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
        ctx->pc = 0x38E054u;
        goto label_38e054;
    }
    ctx->pc = 0x38E04Cu;
    {
        const bool branch_taken_0x38e04c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38E050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E04Cu;
            // 0x38e050: 0xe62100c0  swc1        $f1, 0xC0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e04c) {
            ctx->pc = 0x38E07Cu;
            goto label_38e07c;
        }
    }
    ctx->pc = 0x38E054u;
label_38e054:
    // 0x38e054: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x38e054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_38e058:
    // 0x38e058: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_38e05c:
    if (ctx->pc == 0x38E05Cu) {
        ctx->pc = 0x38E05Cu;
            // 0x38e05c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E060u;
        goto label_38e060;
    }
    ctx->pc = 0x38E058u;
    {
        const bool branch_taken_0x38e058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e058) {
            ctx->pc = 0x38E05Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38E058u;
            // 0x38e05c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38E074u;
            goto label_38e074;
        }
    }
    ctx->pc = 0x38E060u;
label_38e060:
    // 0x38e060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38e064:
    // 0x38e064: 0xc0e38ec  jal         func_38E3B0
label_38e068:
    if (ctx->pc == 0x38E068u) {
        ctx->pc = 0x38E068u;
            // 0x38e068: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x38E06Cu;
        goto label_38e06c;
    }
    ctx->pc = 0x38E064u;
    SET_GPR_U32(ctx, 31, 0x38E06Cu);
    ctx->pc = 0x38E068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E064u;
            // 0x38e068: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E3B0u;
    if (runtime->hasFunction(0x38E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x38E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E06Cu; }
        if (ctx->pc != 0x38E06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E3B0_0x38e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E06Cu; }
        if (ctx->pc != 0x38E06Cu) { return; }
    }
    ctx->pc = 0x38E06Cu;
label_38e06c:
    // 0x38e06c: 0x10000003  b           . + 4 + (0x3 << 2)
label_38e070:
    if (ctx->pc == 0x38E070u) {
        ctx->pc = 0x38E074u;
        goto label_38e074;
    }
    ctx->pc = 0x38E06Cu;
    {
        const bool branch_taken_0x38e06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e06c) {
            ctx->pc = 0x38E07Cu;
            goto label_38e07c;
        }
    }
    ctx->pc = 0x38E074u;
label_38e074:
    // 0x38e074: 0xc0e38ec  jal         func_38E3B0
label_38e078:
    if (ctx->pc == 0x38E078u) {
        ctx->pc = 0x38E078u;
            // 0x38e078: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x38E07Cu;
        goto label_38e07c;
    }
    ctx->pc = 0x38E074u;
    SET_GPR_U32(ctx, 31, 0x38E07Cu);
    ctx->pc = 0x38E078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E074u;
            // 0x38e078: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E3B0u;
    if (runtime->hasFunction(0x38E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x38E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E07Cu; }
        if (ctx->pc != 0x38E07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E3B0_0x38e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E07Cu; }
        if (ctx->pc != 0x38E07Cu) { return; }
    }
    ctx->pc = 0x38E07Cu;
label_38e07c:
    // 0x38e07c: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x38e07cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_38e080:
    // 0x38e080: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x38e080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_38e084:
    // 0x38e084: 0xc0dc9bc  jal         func_3726F0
label_38e088:
    if (ctx->pc == 0x38E088u) {
        ctx->pc = 0x38E088u;
            // 0x38e088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E08Cu;
        goto label_38e08c;
    }
    ctx->pc = 0x38E084u;
    SET_GPR_U32(ctx, 31, 0x38E08Cu);
    ctx->pc = 0x38E088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E084u;
            // 0x38e088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E08Cu; }
        if (ctx->pc != 0x38E08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E08Cu; }
        if (ctx->pc != 0x38E08Cu) { return; }
    }
    ctx->pc = 0x38E08Cu;
label_38e08c:
    // 0x38e08c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e090:
    // 0x38e090: 0xc0dc9a0  jal         func_372680
label_38e094:
    if (ctx->pc == 0x38E094u) {
        ctx->pc = 0x38E094u;
            // 0x38e094: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x38E098u;
        goto label_38e098;
    }
    ctx->pc = 0x38E090u;
    SET_GPR_U32(ctx, 31, 0x38E098u);
    ctx->pc = 0x38E094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E090u;
            // 0x38e094: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E098u; }
        if (ctx->pc != 0x38E098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E098u; }
        if (ctx->pc != 0x38E098u) { return; }
    }
    ctx->pc = 0x38E098u;
label_38e098:
    // 0x38e098: 0x100000bd  b           . + 4 + (0xBD << 2)
label_38e09c:
    if (ctx->pc == 0x38E09Cu) {
        ctx->pc = 0x38E0A0u;
        goto label_38e0a0;
    }
    ctx->pc = 0x38E098u;
    {
        const bool branch_taken_0x38e098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e098) {
            ctx->pc = 0x38E390u;
            goto label_38e390;
        }
    }
    ctx->pc = 0x38E0A0u;
label_38e0a0:
    // 0x38e0a0: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x38e0a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_38e0a4:
    // 0x38e0a4: 0x320f809  jalr        $t9
label_38e0a8:
    if (ctx->pc == 0x38E0A8u) {
        ctx->pc = 0x38E0A8u;
            // 0x38e0a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E0ACu;
        goto label_38e0ac;
    }
    ctx->pc = 0x38E0A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38E0ACu);
        ctx->pc = 0x38E0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E0A4u;
            // 0x38e0a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38E0ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38E0ACu; }
            if (ctx->pc != 0x38E0ACu) { return; }
        }
        }
    }
    ctx->pc = 0x38E0ACu;
label_38e0ac:
    // 0x38e0ac: 0x8e2300b4  lw          $v1, 0xB4($s1)
    ctx->pc = 0x38e0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_38e0b0:
    // 0x38e0b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38e0b4:
    // 0x38e0b4: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_38e0b8:
    if (ctx->pc == 0x38E0B8u) {
        ctx->pc = 0x38E0B8u;
            // 0x38e0b8: 0x8e2200a0  lw          $v0, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->pc = 0x38E0BCu;
        goto label_38e0bc;
    }
    ctx->pc = 0x38E0B4u;
    {
        const bool branch_taken_0x38e0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38e0b4) {
            ctx->pc = 0x38E0B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38E0B4u;
            // 0x38e0b8: 0x8e2200a0  lw          $v0, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38E0E4u;
            goto label_38e0e4;
        }
    }
    ctx->pc = 0x38E0BCu;
label_38e0bc:
    // 0x38e0bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38e0c0:
    // 0x38e0c0: 0x50620065  beql        $v1, $v0, . + 4 + (0x65 << 2)
label_38e0c4:
    if (ctx->pc == 0x38E0C4u) {
        ctx->pc = 0x38E0C4u;
            // 0x38e0c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x38E0C8u;
        goto label_38e0c8;
    }
    ctx->pc = 0x38E0C0u;
    {
        const bool branch_taken_0x38e0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38e0c0) {
            ctx->pc = 0x38E0C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38E0C0u;
            // 0x38e0c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38E258u;
            goto label_38e258;
        }
    }
    ctx->pc = 0x38E0C8u;
label_38e0c8:
    // 0x38e0c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38e0cc:
    // 0x38e0cc: 0x10620061  beq         $v1, $v0, . + 4 + (0x61 << 2)
label_38e0d0:
    if (ctx->pc == 0x38E0D0u) {
        ctx->pc = 0x38E0D4u;
        goto label_38e0d4;
    }
    ctx->pc = 0x38E0CCu;
    {
        const bool branch_taken_0x38e0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38e0cc) {
            ctx->pc = 0x38E254u;
            goto label_38e254;
        }
    }
    ctx->pc = 0x38E0D4u;
label_38e0d4:
    // 0x38e0d4: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
label_38e0d8:
    if (ctx->pc == 0x38E0D8u) {
        ctx->pc = 0x38E0DCu;
        goto label_38e0dc;
    }
    ctx->pc = 0x38E0D4u;
    {
        const bool branch_taken_0x38e0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e0d4) {
            ctx->pc = 0x38E254u;
            goto label_38e254;
        }
    }
    ctx->pc = 0x38E0DCu;
label_38e0dc:
    // 0x38e0dc: 0x1000005d  b           . + 4 + (0x5D << 2)
label_38e0e0:
    if (ctx->pc == 0x38E0E0u) {
        ctx->pc = 0x38E0E4u;
        goto label_38e0e4;
    }
    ctx->pc = 0x38E0DCu;
    {
        const bool branch_taken_0x38e0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e0dc) {
            ctx->pc = 0x38E254u;
            goto label_38e254;
        }
    }
    ctx->pc = 0x38E0E4u;
label_38e0e4:
    // 0x38e0e4: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x38e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_38e0e8:
    // 0x38e0e8: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_38e0ec:
    if (ctx->pc == 0x38E0ECu) {
        ctx->pc = 0x38E0F0u;
        goto label_38e0f0;
    }
    ctx->pc = 0x38E0E8u;
    {
        const bool branch_taken_0x38e0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e0e8) {
            ctx->pc = 0x38E254u;
            goto label_38e254;
        }
    }
    ctx->pc = 0x38E0F0u;
label_38e0f0:
    // 0x38e0f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x38e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_38e0f4:
    // 0x38e0f4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x38e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_38e0f8:
    // 0x38e0f8: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x38e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_38e0fc:
    // 0x38e0fc: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x38e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_38e100:
    // 0x38e100: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
label_38e104:
    if (ctx->pc == 0x38E104u) {
        ctx->pc = 0x38E104u;
            // 0x38e104: 0x8e2200a0  lw          $v0, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->pc = 0x38E108u;
        goto label_38e108;
    }
    ctx->pc = 0x38E100u;
    {
        const bool branch_taken_0x38e100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38e100) {
            ctx->pc = 0x38E104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38E100u;
            // 0x38e104: 0x8e2200a0  lw          $v0, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38E170u;
            goto label_38e170;
        }
    }
    ctx->pc = 0x38E108u;
label_38e108:
    // 0x38e108: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x38e108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_38e10c:
    // 0x38e10c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x38e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_38e110:
    // 0x38e110: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x38e110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_38e114:
    // 0x38e114: 0x90420ce4  lbu         $v0, 0xCE4($v0)
    ctx->pc = 0x38e114u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3300)));
label_38e118:
    // 0x38e118: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
label_38e11c:
    if (ctx->pc == 0x38E11Cu) {
        ctx->pc = 0x38E120u;
        goto label_38e120;
    }
    ctx->pc = 0x38E118u;
    {
        const bool branch_taken_0x38e118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38e118) {
            ctx->pc = 0x38E16Cu;
            goto label_38e16c;
        }
    }
    ctx->pc = 0x38E120u;
label_38e120:
    // 0x38e120: 0xc040180  jal         func_100600
label_38e124:
    if (ctx->pc == 0x38E124u) {
        ctx->pc = 0x38E124u;
            // 0x38e124: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->pc = 0x38E128u;
        goto label_38e128;
    }
    ctx->pc = 0x38E120u;
    SET_GPR_U32(ctx, 31, 0x38E128u);
    ctx->pc = 0x38E124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E120u;
            // 0x38e124: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E128u; }
        if (ctx->pc != 0x38E128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E128u; }
        if (ctx->pc != 0x38E128u) { return; }
    }
    ctx->pc = 0x38E128u;
label_38e128:
    // 0x38e128: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_38e12c:
    if (ctx->pc == 0x38E12Cu) {
        ctx->pc = 0x38E12Cu;
            // 0x38e12c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E130u;
        goto label_38e130;
    }
    ctx->pc = 0x38E128u;
    {
        const bool branch_taken_0x38e128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E128u;
            // 0x38e12c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e128) {
            ctx->pc = 0x38E16Cu;
            goto label_38e16c;
        }
    }
    ctx->pc = 0x38E130u;
label_38e130:
    // 0x38e130: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x38e130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_38e134:
    // 0x38e134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e138:
    // 0x38e138: 0x3445a598  ori         $a1, $v0, 0xA598
    ctx->pc = 0x38e138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42392);
label_38e13c:
    // 0x38e13c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x38e13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_38e140:
    // 0x38e140: 0xc10ca68  jal         func_4329A0
label_38e144:
    if (ctx->pc == 0x38E144u) {
        ctx->pc = 0x38E144u;
            // 0x38e144: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x38E148u;
        goto label_38e148;
    }
    ctx->pc = 0x38E140u;
    SET_GPR_U32(ctx, 31, 0x38E148u);
    ctx->pc = 0x38E144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E140u;
            // 0x38e144: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E148u; }
        if (ctx->pc != 0x38E148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E148u; }
        if (ctx->pc != 0x38E148u) { return; }
    }
    ctx->pc = 0x38E148u;
label_38e148:
    // 0x38e148: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38e148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_38e14c:
    // 0x38e14c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_38e150:
    // 0x38e150: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x38e150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_38e154:
    // 0x38e154: 0x24637bc0  addiu       $v1, $v1, 0x7BC0
    ctx->pc = 0x38e154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31680));
label_38e158:
    // 0x38e158: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x38e158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_38e15c:
    // 0x38e15c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x38e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_38e160:
    // 0x38e160: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38e160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_38e164:
    // 0x38e164: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x38e164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_38e168:
    // 0x38e168: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x38e168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_38e16c:
    // 0x38e16c: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x38e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_38e170:
    // 0x38e170: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x38e170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_38e174:
    // 0x38e174: 0x8c620a8c  lw          $v0, 0xA8C($v1)
    ctx->pc = 0x38e174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2700)));
label_38e178:
    // 0x38e178: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38e178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38e17c:
    // 0x38e17c: 0xac620a8c  sw          $v0, 0xA8C($v1)
    ctx->pc = 0x38e17cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2700), GPR_U32(ctx, 2));
label_38e180:
    // 0x38e180: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x38e180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_38e184:
    // 0x38e184: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x38e184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_38e188:
    // 0x38e188: 0xc0754b4  jal         func_1D52D0
label_38e18c:
    if (ctx->pc == 0x38E18Cu) {
        ctx->pc = 0x38E18Cu;
            // 0x38e18c: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->pc = 0x38E190u;
        goto label_38e190;
    }
    ctx->pc = 0x38E188u;
    SET_GPR_U32(ctx, 31, 0x38E190u);
    ctx->pc = 0x38E18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E188u;
            // 0x38e18c: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E190u; }
        if (ctx->pc != 0x38E190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E190u; }
        if (ctx->pc != 0x38E190u) { return; }
    }
    ctx->pc = 0x38E190u;
label_38e190:
    // 0x38e190: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x38e190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_38e194:
    // 0x38e194: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x38e194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_38e198:
    // 0x38e198: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_38e19c:
    if (ctx->pc == 0x38E19Cu) {
        ctx->pc = 0x38E1A0u;
        goto label_38e1a0;
    }
    ctx->pc = 0x38E198u;
    {
        const bool branch_taken_0x38e198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e198) {
            ctx->pc = 0x38E254u;
            goto label_38e254;
        }
    }
    ctx->pc = 0x38E1A0u;
label_38e1a0:
    // 0x38e1a0: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x38e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_38e1a4:
    // 0x38e1a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38e1a8:
    // 0x38e1a8: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x38e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_38e1ac:
    // 0x38e1ac: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
label_38e1b0:
    if (ctx->pc == 0x38E1B0u) {
        ctx->pc = 0x38E1B4u;
        goto label_38e1b4;
    }
    ctx->pc = 0x38E1ACu;
    {
        const bool branch_taken_0x38e1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38e1ac) {
            ctx->pc = 0x38E254u;
            goto label_38e254;
        }
    }
    ctx->pc = 0x38E1B4u;
label_38e1b4:
    // 0x38e1b4: 0x8c900020  lw          $s0, 0x20($a0)
    ctx->pc = 0x38e1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_38e1b8:
    // 0x38e1b8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x38e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_38e1bc:
    // 0x38e1bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38e1bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38e1c0:
    // 0x38e1c0: 0xc6010a7c  lwc1        $f1, 0xA7C($s0)
    ctx->pc = 0x38e1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38e1c4:
    // 0x38e1c4: 0x26040a50  addiu       $a0, $s0, 0xA50
    ctx->pc = 0x38e1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_38e1c8:
    // 0x38e1c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x38e1c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_38e1cc:
    // 0x38e1cc: 0xc0eea24  jal         func_3BA890
label_38e1d0:
    if (ctx->pc == 0x38E1D0u) {
        ctx->pc = 0x38E1D0u;
            // 0x38e1d0: 0xe6000a7c  swc1        $f0, 0xA7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2684), bits); }
        ctx->pc = 0x38E1D4u;
        goto label_38e1d4;
    }
    ctx->pc = 0x38E1CCu;
    SET_GPR_U32(ctx, 31, 0x38E1D4u);
    ctx->pc = 0x38E1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E1CCu;
            // 0x38e1d0: 0xe6000a7c  swc1        $f0, 0xA7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2684), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E1D4u; }
        if (ctx->pc != 0x38E1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E1D4u; }
        if (ctx->pc != 0x38E1D4u) { return; }
    }
    ctx->pc = 0x38E1D4u;
label_38e1d4:
    // 0x38e1d4: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x38e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_38e1d8:
    // 0x38e1d8: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x38e1d8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_38e1dc:
    // 0x38e1dc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_38e1e0:
    if (ctx->pc == 0x38E1E0u) {
        ctx->pc = 0x38E1E0u;
            // 0x38e1e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E1E4u;
        goto label_38e1e4;
    }
    ctx->pc = 0x38E1DCu;
    {
        const bool branch_taken_0x38e1dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x38E1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E1DCu;
            // 0x38e1e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e1dc) {
            ctx->pc = 0x38E1F4u;
            goto label_38e1f4;
        }
    }
    ctx->pc = 0x38E1E4u;
label_38e1e4:
    // 0x38e1e4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x38e1e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_38e1e8:
    // 0x38e1e8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_38e1ec:
    if (ctx->pc == 0x38E1ECu) {
        ctx->pc = 0x38E1F0u;
        goto label_38e1f0;
    }
    ctx->pc = 0x38E1E8u;
    {
        const bool branch_taken_0x38e1e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e1e8) {
            ctx->pc = 0x38E1F4u;
            goto label_38e1f4;
        }
    }
    ctx->pc = 0x38E1F0u;
label_38e1f0:
    // 0x38e1f0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x38e1f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38e1f4:
    // 0x38e1f4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_38e1f8:
    if (ctx->pc == 0x38E1F8u) {
        ctx->pc = 0x38E1FCu;
        goto label_38e1fc;
    }
    ctx->pc = 0x38E1F4u;
    {
        const bool branch_taken_0x38e1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e1f4) {
            ctx->pc = 0x38E210u;
            goto label_38e210;
        }
    }
    ctx->pc = 0x38E1FCu;
label_38e1fc:
    // 0x38e1fc: 0xc075eb4  jal         func_1D7AD0
label_38e200:
    if (ctx->pc == 0x38E200u) {
        ctx->pc = 0x38E200u;
            // 0x38e200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E204u;
        goto label_38e204;
    }
    ctx->pc = 0x38E1FCu;
    SET_GPR_U32(ctx, 31, 0x38E204u);
    ctx->pc = 0x38E200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E1FCu;
            // 0x38e200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E204u; }
        if (ctx->pc != 0x38E204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E204u; }
        if (ctx->pc != 0x38E204u) { return; }
    }
    ctx->pc = 0x38E204u;
label_38e204:
    // 0x38e204: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_38e208:
    if (ctx->pc == 0x38E208u) {
        ctx->pc = 0x38E20Cu;
        goto label_38e20c;
    }
    ctx->pc = 0x38E204u;
    {
        const bool branch_taken_0x38e204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e204) {
            ctx->pc = 0x38E210u;
            goto label_38e210;
        }
    }
    ctx->pc = 0x38E20Cu;
label_38e20c:
    // 0x38e20c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38e20cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e210:
    // 0x38e210: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
label_38e214:
    if (ctx->pc == 0x38E214u) {
        ctx->pc = 0x38E214u;
            // 0x38e214: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x38E218u;
        goto label_38e218;
    }
    ctx->pc = 0x38E210u;
    {
        const bool branch_taken_0x38e210 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e210) {
            ctx->pc = 0x38E214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38E210u;
            // 0x38e214: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38E22Cu;
            goto label_38e22c;
        }
    }
    ctx->pc = 0x38E218u;
label_38e218:
    // 0x38e218: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x38e218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_38e21c:
    // 0x38e21c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x38e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_38e220:
    // 0x38e220: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_38e224:
    if (ctx->pc == 0x38E224u) {
        ctx->pc = 0x38E228u;
        goto label_38e228;
    }
    ctx->pc = 0x38E220u;
    {
        const bool branch_taken_0x38e220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38e220) {
            ctx->pc = 0x38E254u;
            goto label_38e254;
        }
    }
    ctx->pc = 0x38E228u;
label_38e228:
    // 0x38e228: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x38e228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_38e22c:
    // 0x38e22c: 0xc040180  jal         func_100600
label_38e230:
    if (ctx->pc == 0x38E230u) {
        ctx->pc = 0x38E234u;
        goto label_38e234;
    }
    ctx->pc = 0x38E22Cu;
    SET_GPR_U32(ctx, 31, 0x38E234u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E234u; }
        if (ctx->pc != 0x38E234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E234u; }
        if (ctx->pc != 0x38E234u) { return; }
    }
    ctx->pc = 0x38E234u;
label_38e234:
    // 0x38e234: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_38e238:
    if (ctx->pc == 0x38E238u) {
        ctx->pc = 0x38E23Cu;
        goto label_38e23c;
    }
    ctx->pc = 0x38E234u;
    {
        const bool branch_taken_0x38e234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e234) {
            ctx->pc = 0x38E254u;
            goto label_38e254;
        }
    }
    ctx->pc = 0x38E23Cu;
label_38e23c:
    // 0x38e23c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38e23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38e240:
    // 0x38e240: 0x8e050d98  lw          $a1, 0xD98($s0)
    ctx->pc = 0x38e240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_38e244:
    // 0x38e244: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x38e244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_38e248:
    // 0x38e248: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38e248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_38e24c:
    // 0x38e24c: 0xc11ebc4  jal         func_47AF10
label_38e250:
    if (ctx->pc == 0x38E250u) {
        ctx->pc = 0x38E250u;
            // 0x38e250: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E254u;
        goto label_38e254;
    }
    ctx->pc = 0x38E24Cu;
    SET_GPR_U32(ctx, 31, 0x38E254u);
    ctx->pc = 0x38E250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38E24Cu;
            // 0x38e250: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47AF10u;
    if (runtime->hasFunction(0x47AF10u)) {
        auto targetFn = runtime->lookupFunction(0x47AF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E254u; }
        if (ctx->pc != 0x38E254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047AF10_0x47af10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38E254u; }
        if (ctx->pc != 0x38E254u) { return; }
    }
    ctx->pc = 0x38E254u;
label_38e254:
    // 0x38e254: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x38e254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38e258:
    // 0x38e258: 0xae2200ac  sw          $v0, 0xAC($s1)
    ctx->pc = 0x38e258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
label_38e25c:
    // 0x38e25c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38e25cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38e260:
    // 0x38e260: 0x8f390090  lw          $t9, 0x90($t9)
    ctx->pc = 0x38e260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 144)));
label_38e264:
    // 0x38e264: 0x320f809  jalr        $t9
label_38e268:
    if (ctx->pc == 0x38E268u) {
        ctx->pc = 0x38E268u;
            // 0x38e268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E26Cu;
        goto label_38e26c;
    }
    ctx->pc = 0x38E264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38E26Cu);
        ctx->pc = 0x38E268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E264u;
            // 0x38e268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38E26Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38E26Cu; }
            if (ctx->pc != 0x38E26Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38E26Cu;
label_38e26c:
    // 0x38e26c: 0x10000048  b           . + 4 + (0x48 << 2)
label_38e270:
    if (ctx->pc == 0x38E270u) {
        ctx->pc = 0x38E274u;
        goto label_38e274;
    }
    ctx->pc = 0x38E26Cu;
    {
        const bool branch_taken_0x38e26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e26c) {
            ctx->pc = 0x38E390u;
            goto label_38e390;
        }
    }
    ctx->pc = 0x38E274u;
label_38e274:
    // 0x38e274: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x38e274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_38e278:
    // 0x38e278: 0x320f809  jalr        $t9
label_38e27c:
    if (ctx->pc == 0x38E27Cu) {
        ctx->pc = 0x38E27Cu;
            // 0x38e27c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E280u;
        goto label_38e280;
    }
    ctx->pc = 0x38E278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38E280u);
        ctx->pc = 0x38E27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E278u;
            // 0x38e27c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38E280u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38E280u; }
            if (ctx->pc != 0x38E280u) { return; }
        }
        }
    }
    ctx->pc = 0x38E280u;
label_38e280:
    // 0x38e280: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x38e280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_38e284:
    // 0x38e284: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x38e284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_38e288:
    // 0x38e288: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x38e288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_38e28c:
    // 0x38e28c: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x38e28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_38e290:
    // 0x38e290: 0x54640016  bnel        $v1, $a0, . + 4 + (0x16 << 2)
label_38e294:
    if (ctx->pc == 0x38E294u) {
        ctx->pc = 0x38E294u;
            // 0x38e294: 0xc620007c  lwc1        $f0, 0x7C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x38E298u;
        goto label_38e298;
    }
    ctx->pc = 0x38E290u;
    {
        const bool branch_taken_0x38e290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x38e290) {
            ctx->pc = 0x38E294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38E290u;
            // 0x38e294: 0xc620007c  lwc1        $f0, 0x7C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x38E2ECu;
            goto label_38e2ec;
        }
    }
    ctx->pc = 0x38E298u;
label_38e298:
    // 0x38e298: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x38e298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_38e29c:
    // 0x38e29c: 0x8c650e84  lw          $a1, 0xE84($v1)
    ctx->pc = 0x38e29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3716)));
label_38e2a0:
    // 0x38e2a0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x38e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_38e2a4:
    // 0x38e2a4: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x38e2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_38e2a8:
    // 0x38e2a8: 0x90840ce4  lbu         $a0, 0xCE4($a0)
    ctx->pc = 0x38e2a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3300)));
label_38e2ac:
    // 0x38e2ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38e2b0:
    // 0x38e2b0: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_38e2b4:
    if (ctx->pc == 0x38E2B4u) {
        ctx->pc = 0x38E2B4u;
            // 0x38e2b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E2B8u;
        goto label_38e2b8;
    }
    ctx->pc = 0x38E2B0u;
    {
        const bool branch_taken_0x38e2b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x38E2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E2B0u;
            // 0x38e2b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e2b0) {
            ctx->pc = 0x38E2CCu;
            goto label_38e2cc;
        }
    }
    ctx->pc = 0x38E2B8u;
label_38e2b8:
    // 0x38e2b8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x38e2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_38e2bc:
    // 0x38e2bc: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
label_38e2c0:
    if (ctx->pc == 0x38E2C0u) {
        ctx->pc = 0x38E2C0u;
            // 0x38e2c0: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x38E2C4u;
        goto label_38e2c4;
    }
    ctx->pc = 0x38E2BCu;
    {
        const bool branch_taken_0x38e2bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38e2bc) {
            ctx->pc = 0x38E2C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38E2BCu;
            // 0x38e2c0: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x38E2E0u;
            goto label_38e2e0;
        }
    }
    ctx->pc = 0x38E2C4u;
label_38e2c4:
    // 0x38e2c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_38e2c8:
    if (ctx->pc == 0x38E2C8u) {
        ctx->pc = 0x38E2CCu;
        goto label_38e2cc;
    }
    ctx->pc = 0x38E2C4u;
    {
        const bool branch_taken_0x38e2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e2c4) {
            ctx->pc = 0x38E2E0u;
            goto label_38e2e0;
        }
    }
    ctx->pc = 0x38E2CCu;
label_38e2cc:
    // 0x38e2cc: 0x8ca30518  lw          $v1, 0x518($a1)
    ctx->pc = 0x38e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1304)));
label_38e2d0:
    // 0x38e2d0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x38e2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_38e2d4:
    // 0x38e2d4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_38e2d8:
    if (ctx->pc == 0x38E2D8u) {
        ctx->pc = 0x38E2DCu;
        goto label_38e2dc;
    }
    ctx->pc = 0x38E2D4u;
    {
        const bool branch_taken_0x38e2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e2d4) {
            ctx->pc = 0x38E2E0u;
            goto label_38e2e0;
        }
    }
    ctx->pc = 0x38E2DCu;
label_38e2dc:
    // 0x38e2dc: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x38e2dcu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_38e2e0:
    // 0x38e2e0: 0x14c0002b  bnez        $a2, . + 4 + (0x2B << 2)
label_38e2e4:
    if (ctx->pc == 0x38E2E4u) {
        ctx->pc = 0x38E2E8u;
        goto label_38e2e8;
    }
    ctx->pc = 0x38E2E0u;
    {
        const bool branch_taken_0x38e2e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e2e0) {
            ctx->pc = 0x38E390u;
            goto label_38e390;
        }
    }
    ctx->pc = 0x38E2E8u;
label_38e2e8:
    // 0x38e2e8: 0xc620007c  lwc1        $f0, 0x7C($s1)
    ctx->pc = 0x38e2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38e2ec:
    // 0x38e2ec: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x38e2ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_38e2f0:
    // 0x38e2f0: 0x0  nop
    ctx->pc = 0x38e2f0u;
    // NOP
label_38e2f4:
    // 0x38e2f4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x38e2f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38e2f8:
    // 0x38e2f8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_38e2fc:
    if (ctx->pc == 0x38E2FCu) {
        ctx->pc = 0x38E300u;
        goto label_38e300;
    }
    ctx->pc = 0x38E2F8u;
    {
        const bool branch_taken_0x38e2f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38e2f8) {
            ctx->pc = 0x38E328u;
            goto label_38e328;
        }
    }
    ctx->pc = 0x38E300u;
label_38e300:
    // 0x38e300: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x38e300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_38e304:
    // 0x38e304: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x38e304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_38e308:
    // 0x38e308: 0xc620007c  lwc1        $f0, 0x7C($s1)
    ctx->pc = 0x38e308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38e30c:
    // 0x38e30c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x38e30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38e310:
    // 0x38e310: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x38e310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_38e314:
    // 0x38e314: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x38e314u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38e318:
    // 0x38e318: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_38e31c:
    if (ctx->pc == 0x38E31Cu) {
        ctx->pc = 0x38E31Cu;
            // 0x38e31c: 0xe620007c  swc1        $f0, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->pc = 0x38E320u;
        goto label_38e320;
    }
    ctx->pc = 0x38E318u;
    {
        const bool branch_taken_0x38e318 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x38E31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E318u;
            // 0x38e31c: 0xe620007c  swc1        $f0, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e318) {
            ctx->pc = 0x38E33Cu;
            goto label_38e33c;
        }
    }
    ctx->pc = 0x38E320u;
label_38e320:
    // 0x38e320: 0x10000006  b           . + 4 + (0x6 << 2)
label_38e324:
    if (ctx->pc == 0x38E324u) {
        ctx->pc = 0x38E324u;
            // 0x38e324: 0xe622007c  swc1        $f2, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->pc = 0x38E328u;
        goto label_38e328;
    }
    ctx->pc = 0x38E320u;
    {
        const bool branch_taken_0x38e320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E320u;
            // 0x38e324: 0xe622007c  swc1        $f2, 0x7C($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e320) {
            ctx->pc = 0x38E33Cu;
            goto label_38e33c;
        }
    }
    ctx->pc = 0x38E328u;
label_38e328:
    // 0x38e328: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x38e328u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38e32c:
    // 0x38e32c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_38e330:
    if (ctx->pc == 0x38E330u) {
        ctx->pc = 0x38E330u;
            // 0x38e330: 0xc621007c  lwc1        $f1, 0x7C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x38E334u;
        goto label_38e334;
    }
    ctx->pc = 0x38E32Cu;
    {
        const bool branch_taken_0x38e32c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38e32c) {
            ctx->pc = 0x38E330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38E32Cu;
            // 0x38e330: 0xc621007c  lwc1        $f1, 0x7C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x38E340u;
            goto label_38e340;
        }
    }
    ctx->pc = 0x38E334u;
label_38e334:
    // 0x38e334: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x38e334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_38e338:
    // 0x38e338: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x38e338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
label_38e33c:
    // 0x38e33c: 0xc621007c  lwc1        $f1, 0x7C($s1)
    ctx->pc = 0x38e33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_38e340:
    // 0x38e340: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x38e340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_38e344:
    // 0x38e344: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38e344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38e348:
    // 0x38e348: 0x0  nop
    ctx->pc = 0x38e348u;
    // NOP
label_38e34c:
    // 0x38e34c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x38e34cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38e350:
    // 0x38e350: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_38e354:
    if (ctx->pc == 0x38E354u) {
        ctx->pc = 0x38E354u;
            // 0x38e354: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x38E358u;
        goto label_38e358;
    }
    ctx->pc = 0x38E350u;
    {
        const bool branch_taken_0x38e350 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x38E354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E350u;
            // 0x38e354: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e350) {
            ctx->pc = 0x38E370u;
            goto label_38e370;
        }
    }
    ctx->pc = 0x38E358u;
label_38e358:
    // 0x38e358: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x38e358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38e35c:
    // 0x38e35c: 0x0  nop
    ctx->pc = 0x38e35cu;
    // NOP
label_38e360:
    // 0x38e360: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x38e360u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_38e364:
    // 0x38e364: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_38e368:
    if (ctx->pc == 0x38E368u) {
        ctx->pc = 0x38E36Cu;
        goto label_38e36c;
    }
    ctx->pc = 0x38E364u;
    {
        const bool branch_taken_0x38e364 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38e364) {
            ctx->pc = 0x38E370u;
            goto label_38e370;
        }
    }
    ctx->pc = 0x38E36Cu;
label_38e36c:
    // 0x38e36c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38e36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e370:
    // 0x38e370: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_38e374:
    if (ctx->pc == 0x38E374u) {
        ctx->pc = 0x38E378u;
        goto label_38e378;
    }
    ctx->pc = 0x38E370u;
    {
        const bool branch_taken_0x38e370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e370) {
            ctx->pc = 0x38E390u;
            goto label_38e390;
        }
    }
    ctx->pc = 0x38E378u;
label_38e378:
    // 0x38e378: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38e378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38e37c:
    // 0x38e37c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x38e37cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_38e380:
    // 0x38e380: 0x320f809  jalr        $t9
label_38e384:
    if (ctx->pc == 0x38E384u) {
        ctx->pc = 0x38E384u;
            // 0x38e384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38E388u;
        goto label_38e388;
    }
    ctx->pc = 0x38E380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38E388u);
        ctx->pc = 0x38E384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E380u;
            // 0x38e384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38E388u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38E388u; }
            if (ctx->pc != 0x38E388u) { return; }
        }
        }
    }
    ctx->pc = 0x38E388u;
label_38e388:
    // 0x38e388: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x38e388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
label_38e38c:
    // 0x38e38c: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x38e38cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
label_38e390:
    // 0x38e390: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38e390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38e394:
    // 0x38e394: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38e394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38e398:
    // 0x38e398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38e398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38e39c:
    // 0x38e39c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38e39cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38e3a0:
    // 0x38e3a0: 0x3e00008  jr          $ra
label_38e3a4:
    if (ctx->pc == 0x38E3A4u) {
        ctx->pc = 0x38E3A4u;
            // 0x38e3a4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x38E3A8u;
        goto label_38e3a8;
    }
    ctx->pc = 0x38E3A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38E3A0u;
            // 0x38e3a4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38E3A8u;
label_38e3a8:
    // 0x38e3a8: 0x0  nop
    ctx->pc = 0x38e3a8u;
    // NOP
label_38e3ac:
    // 0x38e3ac: 0x0  nop
    ctx->pc = 0x38e3acu;
    // NOP
}
