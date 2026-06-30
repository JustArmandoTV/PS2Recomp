#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045D970
// Address: 0x45d970 - 0x45e000
void sub_0045D970_0x45d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045D970_0x45d970");
#endif

    switch (ctx->pc) {
        case 0x45d970u: goto label_45d970;
        case 0x45d974u: goto label_45d974;
        case 0x45d978u: goto label_45d978;
        case 0x45d97cu: goto label_45d97c;
        case 0x45d980u: goto label_45d980;
        case 0x45d984u: goto label_45d984;
        case 0x45d988u: goto label_45d988;
        case 0x45d98cu: goto label_45d98c;
        case 0x45d990u: goto label_45d990;
        case 0x45d994u: goto label_45d994;
        case 0x45d998u: goto label_45d998;
        case 0x45d99cu: goto label_45d99c;
        case 0x45d9a0u: goto label_45d9a0;
        case 0x45d9a4u: goto label_45d9a4;
        case 0x45d9a8u: goto label_45d9a8;
        case 0x45d9acu: goto label_45d9ac;
        case 0x45d9b0u: goto label_45d9b0;
        case 0x45d9b4u: goto label_45d9b4;
        case 0x45d9b8u: goto label_45d9b8;
        case 0x45d9bcu: goto label_45d9bc;
        case 0x45d9c0u: goto label_45d9c0;
        case 0x45d9c4u: goto label_45d9c4;
        case 0x45d9c8u: goto label_45d9c8;
        case 0x45d9ccu: goto label_45d9cc;
        case 0x45d9d0u: goto label_45d9d0;
        case 0x45d9d4u: goto label_45d9d4;
        case 0x45d9d8u: goto label_45d9d8;
        case 0x45d9dcu: goto label_45d9dc;
        case 0x45d9e0u: goto label_45d9e0;
        case 0x45d9e4u: goto label_45d9e4;
        case 0x45d9e8u: goto label_45d9e8;
        case 0x45d9ecu: goto label_45d9ec;
        case 0x45d9f0u: goto label_45d9f0;
        case 0x45d9f4u: goto label_45d9f4;
        case 0x45d9f8u: goto label_45d9f8;
        case 0x45d9fcu: goto label_45d9fc;
        case 0x45da00u: goto label_45da00;
        case 0x45da04u: goto label_45da04;
        case 0x45da08u: goto label_45da08;
        case 0x45da0cu: goto label_45da0c;
        case 0x45da10u: goto label_45da10;
        case 0x45da14u: goto label_45da14;
        case 0x45da18u: goto label_45da18;
        case 0x45da1cu: goto label_45da1c;
        case 0x45da20u: goto label_45da20;
        case 0x45da24u: goto label_45da24;
        case 0x45da28u: goto label_45da28;
        case 0x45da2cu: goto label_45da2c;
        case 0x45da30u: goto label_45da30;
        case 0x45da34u: goto label_45da34;
        case 0x45da38u: goto label_45da38;
        case 0x45da3cu: goto label_45da3c;
        case 0x45da40u: goto label_45da40;
        case 0x45da44u: goto label_45da44;
        case 0x45da48u: goto label_45da48;
        case 0x45da4cu: goto label_45da4c;
        case 0x45da50u: goto label_45da50;
        case 0x45da54u: goto label_45da54;
        case 0x45da58u: goto label_45da58;
        case 0x45da5cu: goto label_45da5c;
        case 0x45da60u: goto label_45da60;
        case 0x45da64u: goto label_45da64;
        case 0x45da68u: goto label_45da68;
        case 0x45da6cu: goto label_45da6c;
        case 0x45da70u: goto label_45da70;
        case 0x45da74u: goto label_45da74;
        case 0x45da78u: goto label_45da78;
        case 0x45da7cu: goto label_45da7c;
        case 0x45da80u: goto label_45da80;
        case 0x45da84u: goto label_45da84;
        case 0x45da88u: goto label_45da88;
        case 0x45da8cu: goto label_45da8c;
        case 0x45da90u: goto label_45da90;
        case 0x45da94u: goto label_45da94;
        case 0x45da98u: goto label_45da98;
        case 0x45da9cu: goto label_45da9c;
        case 0x45daa0u: goto label_45daa0;
        case 0x45daa4u: goto label_45daa4;
        case 0x45daa8u: goto label_45daa8;
        case 0x45daacu: goto label_45daac;
        case 0x45dab0u: goto label_45dab0;
        case 0x45dab4u: goto label_45dab4;
        case 0x45dab8u: goto label_45dab8;
        case 0x45dabcu: goto label_45dabc;
        case 0x45dac0u: goto label_45dac0;
        case 0x45dac4u: goto label_45dac4;
        case 0x45dac8u: goto label_45dac8;
        case 0x45daccu: goto label_45dacc;
        case 0x45dad0u: goto label_45dad0;
        case 0x45dad4u: goto label_45dad4;
        case 0x45dad8u: goto label_45dad8;
        case 0x45dadcu: goto label_45dadc;
        case 0x45dae0u: goto label_45dae0;
        case 0x45dae4u: goto label_45dae4;
        case 0x45dae8u: goto label_45dae8;
        case 0x45daecu: goto label_45daec;
        case 0x45daf0u: goto label_45daf0;
        case 0x45daf4u: goto label_45daf4;
        case 0x45daf8u: goto label_45daf8;
        case 0x45dafcu: goto label_45dafc;
        case 0x45db00u: goto label_45db00;
        case 0x45db04u: goto label_45db04;
        case 0x45db08u: goto label_45db08;
        case 0x45db0cu: goto label_45db0c;
        case 0x45db10u: goto label_45db10;
        case 0x45db14u: goto label_45db14;
        case 0x45db18u: goto label_45db18;
        case 0x45db1cu: goto label_45db1c;
        case 0x45db20u: goto label_45db20;
        case 0x45db24u: goto label_45db24;
        case 0x45db28u: goto label_45db28;
        case 0x45db2cu: goto label_45db2c;
        case 0x45db30u: goto label_45db30;
        case 0x45db34u: goto label_45db34;
        case 0x45db38u: goto label_45db38;
        case 0x45db3cu: goto label_45db3c;
        case 0x45db40u: goto label_45db40;
        case 0x45db44u: goto label_45db44;
        case 0x45db48u: goto label_45db48;
        case 0x45db4cu: goto label_45db4c;
        case 0x45db50u: goto label_45db50;
        case 0x45db54u: goto label_45db54;
        case 0x45db58u: goto label_45db58;
        case 0x45db5cu: goto label_45db5c;
        case 0x45db60u: goto label_45db60;
        case 0x45db64u: goto label_45db64;
        case 0x45db68u: goto label_45db68;
        case 0x45db6cu: goto label_45db6c;
        case 0x45db70u: goto label_45db70;
        case 0x45db74u: goto label_45db74;
        case 0x45db78u: goto label_45db78;
        case 0x45db7cu: goto label_45db7c;
        case 0x45db80u: goto label_45db80;
        case 0x45db84u: goto label_45db84;
        case 0x45db88u: goto label_45db88;
        case 0x45db8cu: goto label_45db8c;
        case 0x45db90u: goto label_45db90;
        case 0x45db94u: goto label_45db94;
        case 0x45db98u: goto label_45db98;
        case 0x45db9cu: goto label_45db9c;
        case 0x45dba0u: goto label_45dba0;
        case 0x45dba4u: goto label_45dba4;
        case 0x45dba8u: goto label_45dba8;
        case 0x45dbacu: goto label_45dbac;
        case 0x45dbb0u: goto label_45dbb0;
        case 0x45dbb4u: goto label_45dbb4;
        case 0x45dbb8u: goto label_45dbb8;
        case 0x45dbbcu: goto label_45dbbc;
        case 0x45dbc0u: goto label_45dbc0;
        case 0x45dbc4u: goto label_45dbc4;
        case 0x45dbc8u: goto label_45dbc8;
        case 0x45dbccu: goto label_45dbcc;
        case 0x45dbd0u: goto label_45dbd0;
        case 0x45dbd4u: goto label_45dbd4;
        case 0x45dbd8u: goto label_45dbd8;
        case 0x45dbdcu: goto label_45dbdc;
        case 0x45dbe0u: goto label_45dbe0;
        case 0x45dbe4u: goto label_45dbe4;
        case 0x45dbe8u: goto label_45dbe8;
        case 0x45dbecu: goto label_45dbec;
        case 0x45dbf0u: goto label_45dbf0;
        case 0x45dbf4u: goto label_45dbf4;
        case 0x45dbf8u: goto label_45dbf8;
        case 0x45dbfcu: goto label_45dbfc;
        case 0x45dc00u: goto label_45dc00;
        case 0x45dc04u: goto label_45dc04;
        case 0x45dc08u: goto label_45dc08;
        case 0x45dc0cu: goto label_45dc0c;
        case 0x45dc10u: goto label_45dc10;
        case 0x45dc14u: goto label_45dc14;
        case 0x45dc18u: goto label_45dc18;
        case 0x45dc1cu: goto label_45dc1c;
        case 0x45dc20u: goto label_45dc20;
        case 0x45dc24u: goto label_45dc24;
        case 0x45dc28u: goto label_45dc28;
        case 0x45dc2cu: goto label_45dc2c;
        case 0x45dc30u: goto label_45dc30;
        case 0x45dc34u: goto label_45dc34;
        case 0x45dc38u: goto label_45dc38;
        case 0x45dc3cu: goto label_45dc3c;
        case 0x45dc40u: goto label_45dc40;
        case 0x45dc44u: goto label_45dc44;
        case 0x45dc48u: goto label_45dc48;
        case 0x45dc4cu: goto label_45dc4c;
        case 0x45dc50u: goto label_45dc50;
        case 0x45dc54u: goto label_45dc54;
        case 0x45dc58u: goto label_45dc58;
        case 0x45dc5cu: goto label_45dc5c;
        case 0x45dc60u: goto label_45dc60;
        case 0x45dc64u: goto label_45dc64;
        case 0x45dc68u: goto label_45dc68;
        case 0x45dc6cu: goto label_45dc6c;
        case 0x45dc70u: goto label_45dc70;
        case 0x45dc74u: goto label_45dc74;
        case 0x45dc78u: goto label_45dc78;
        case 0x45dc7cu: goto label_45dc7c;
        case 0x45dc80u: goto label_45dc80;
        case 0x45dc84u: goto label_45dc84;
        case 0x45dc88u: goto label_45dc88;
        case 0x45dc8cu: goto label_45dc8c;
        case 0x45dc90u: goto label_45dc90;
        case 0x45dc94u: goto label_45dc94;
        case 0x45dc98u: goto label_45dc98;
        case 0x45dc9cu: goto label_45dc9c;
        case 0x45dca0u: goto label_45dca0;
        case 0x45dca4u: goto label_45dca4;
        case 0x45dca8u: goto label_45dca8;
        case 0x45dcacu: goto label_45dcac;
        case 0x45dcb0u: goto label_45dcb0;
        case 0x45dcb4u: goto label_45dcb4;
        case 0x45dcb8u: goto label_45dcb8;
        case 0x45dcbcu: goto label_45dcbc;
        case 0x45dcc0u: goto label_45dcc0;
        case 0x45dcc4u: goto label_45dcc4;
        case 0x45dcc8u: goto label_45dcc8;
        case 0x45dcccu: goto label_45dccc;
        case 0x45dcd0u: goto label_45dcd0;
        case 0x45dcd4u: goto label_45dcd4;
        case 0x45dcd8u: goto label_45dcd8;
        case 0x45dcdcu: goto label_45dcdc;
        case 0x45dce0u: goto label_45dce0;
        case 0x45dce4u: goto label_45dce4;
        case 0x45dce8u: goto label_45dce8;
        case 0x45dcecu: goto label_45dcec;
        case 0x45dcf0u: goto label_45dcf0;
        case 0x45dcf4u: goto label_45dcf4;
        case 0x45dcf8u: goto label_45dcf8;
        case 0x45dcfcu: goto label_45dcfc;
        case 0x45dd00u: goto label_45dd00;
        case 0x45dd04u: goto label_45dd04;
        case 0x45dd08u: goto label_45dd08;
        case 0x45dd0cu: goto label_45dd0c;
        case 0x45dd10u: goto label_45dd10;
        case 0x45dd14u: goto label_45dd14;
        case 0x45dd18u: goto label_45dd18;
        case 0x45dd1cu: goto label_45dd1c;
        case 0x45dd20u: goto label_45dd20;
        case 0x45dd24u: goto label_45dd24;
        case 0x45dd28u: goto label_45dd28;
        case 0x45dd2cu: goto label_45dd2c;
        case 0x45dd30u: goto label_45dd30;
        case 0x45dd34u: goto label_45dd34;
        case 0x45dd38u: goto label_45dd38;
        case 0x45dd3cu: goto label_45dd3c;
        case 0x45dd40u: goto label_45dd40;
        case 0x45dd44u: goto label_45dd44;
        case 0x45dd48u: goto label_45dd48;
        case 0x45dd4cu: goto label_45dd4c;
        case 0x45dd50u: goto label_45dd50;
        case 0x45dd54u: goto label_45dd54;
        case 0x45dd58u: goto label_45dd58;
        case 0x45dd5cu: goto label_45dd5c;
        case 0x45dd60u: goto label_45dd60;
        case 0x45dd64u: goto label_45dd64;
        case 0x45dd68u: goto label_45dd68;
        case 0x45dd6cu: goto label_45dd6c;
        case 0x45dd70u: goto label_45dd70;
        case 0x45dd74u: goto label_45dd74;
        case 0x45dd78u: goto label_45dd78;
        case 0x45dd7cu: goto label_45dd7c;
        case 0x45dd80u: goto label_45dd80;
        case 0x45dd84u: goto label_45dd84;
        case 0x45dd88u: goto label_45dd88;
        case 0x45dd8cu: goto label_45dd8c;
        case 0x45dd90u: goto label_45dd90;
        case 0x45dd94u: goto label_45dd94;
        case 0x45dd98u: goto label_45dd98;
        case 0x45dd9cu: goto label_45dd9c;
        case 0x45dda0u: goto label_45dda0;
        case 0x45dda4u: goto label_45dda4;
        case 0x45dda8u: goto label_45dda8;
        case 0x45ddacu: goto label_45ddac;
        case 0x45ddb0u: goto label_45ddb0;
        case 0x45ddb4u: goto label_45ddb4;
        case 0x45ddb8u: goto label_45ddb8;
        case 0x45ddbcu: goto label_45ddbc;
        case 0x45ddc0u: goto label_45ddc0;
        case 0x45ddc4u: goto label_45ddc4;
        case 0x45ddc8u: goto label_45ddc8;
        case 0x45ddccu: goto label_45ddcc;
        case 0x45ddd0u: goto label_45ddd0;
        case 0x45ddd4u: goto label_45ddd4;
        case 0x45ddd8u: goto label_45ddd8;
        case 0x45dddcu: goto label_45dddc;
        case 0x45dde0u: goto label_45dde0;
        case 0x45dde4u: goto label_45dde4;
        case 0x45dde8u: goto label_45dde8;
        case 0x45ddecu: goto label_45ddec;
        case 0x45ddf0u: goto label_45ddf0;
        case 0x45ddf4u: goto label_45ddf4;
        case 0x45ddf8u: goto label_45ddf8;
        case 0x45ddfcu: goto label_45ddfc;
        case 0x45de00u: goto label_45de00;
        case 0x45de04u: goto label_45de04;
        case 0x45de08u: goto label_45de08;
        case 0x45de0cu: goto label_45de0c;
        case 0x45de10u: goto label_45de10;
        case 0x45de14u: goto label_45de14;
        case 0x45de18u: goto label_45de18;
        case 0x45de1cu: goto label_45de1c;
        case 0x45de20u: goto label_45de20;
        case 0x45de24u: goto label_45de24;
        case 0x45de28u: goto label_45de28;
        case 0x45de2cu: goto label_45de2c;
        case 0x45de30u: goto label_45de30;
        case 0x45de34u: goto label_45de34;
        case 0x45de38u: goto label_45de38;
        case 0x45de3cu: goto label_45de3c;
        case 0x45de40u: goto label_45de40;
        case 0x45de44u: goto label_45de44;
        case 0x45de48u: goto label_45de48;
        case 0x45de4cu: goto label_45de4c;
        case 0x45de50u: goto label_45de50;
        case 0x45de54u: goto label_45de54;
        case 0x45de58u: goto label_45de58;
        case 0x45de5cu: goto label_45de5c;
        case 0x45de60u: goto label_45de60;
        case 0x45de64u: goto label_45de64;
        case 0x45de68u: goto label_45de68;
        case 0x45de6cu: goto label_45de6c;
        case 0x45de70u: goto label_45de70;
        case 0x45de74u: goto label_45de74;
        case 0x45de78u: goto label_45de78;
        case 0x45de7cu: goto label_45de7c;
        case 0x45de80u: goto label_45de80;
        case 0x45de84u: goto label_45de84;
        case 0x45de88u: goto label_45de88;
        case 0x45de8cu: goto label_45de8c;
        case 0x45de90u: goto label_45de90;
        case 0x45de94u: goto label_45de94;
        case 0x45de98u: goto label_45de98;
        case 0x45de9cu: goto label_45de9c;
        case 0x45dea0u: goto label_45dea0;
        case 0x45dea4u: goto label_45dea4;
        case 0x45dea8u: goto label_45dea8;
        case 0x45deacu: goto label_45deac;
        case 0x45deb0u: goto label_45deb0;
        case 0x45deb4u: goto label_45deb4;
        case 0x45deb8u: goto label_45deb8;
        case 0x45debcu: goto label_45debc;
        case 0x45dec0u: goto label_45dec0;
        case 0x45dec4u: goto label_45dec4;
        case 0x45dec8u: goto label_45dec8;
        case 0x45deccu: goto label_45decc;
        case 0x45ded0u: goto label_45ded0;
        case 0x45ded4u: goto label_45ded4;
        case 0x45ded8u: goto label_45ded8;
        case 0x45dedcu: goto label_45dedc;
        case 0x45dee0u: goto label_45dee0;
        case 0x45dee4u: goto label_45dee4;
        case 0x45dee8u: goto label_45dee8;
        case 0x45deecu: goto label_45deec;
        case 0x45def0u: goto label_45def0;
        case 0x45def4u: goto label_45def4;
        case 0x45def8u: goto label_45def8;
        case 0x45defcu: goto label_45defc;
        case 0x45df00u: goto label_45df00;
        case 0x45df04u: goto label_45df04;
        case 0x45df08u: goto label_45df08;
        case 0x45df0cu: goto label_45df0c;
        case 0x45df10u: goto label_45df10;
        case 0x45df14u: goto label_45df14;
        case 0x45df18u: goto label_45df18;
        case 0x45df1cu: goto label_45df1c;
        case 0x45df20u: goto label_45df20;
        case 0x45df24u: goto label_45df24;
        case 0x45df28u: goto label_45df28;
        case 0x45df2cu: goto label_45df2c;
        case 0x45df30u: goto label_45df30;
        case 0x45df34u: goto label_45df34;
        case 0x45df38u: goto label_45df38;
        case 0x45df3cu: goto label_45df3c;
        case 0x45df40u: goto label_45df40;
        case 0x45df44u: goto label_45df44;
        case 0x45df48u: goto label_45df48;
        case 0x45df4cu: goto label_45df4c;
        case 0x45df50u: goto label_45df50;
        case 0x45df54u: goto label_45df54;
        case 0x45df58u: goto label_45df58;
        case 0x45df5cu: goto label_45df5c;
        case 0x45df60u: goto label_45df60;
        case 0x45df64u: goto label_45df64;
        case 0x45df68u: goto label_45df68;
        case 0x45df6cu: goto label_45df6c;
        case 0x45df70u: goto label_45df70;
        case 0x45df74u: goto label_45df74;
        case 0x45df78u: goto label_45df78;
        case 0x45df7cu: goto label_45df7c;
        case 0x45df80u: goto label_45df80;
        case 0x45df84u: goto label_45df84;
        case 0x45df88u: goto label_45df88;
        case 0x45df8cu: goto label_45df8c;
        case 0x45df90u: goto label_45df90;
        case 0x45df94u: goto label_45df94;
        case 0x45df98u: goto label_45df98;
        case 0x45df9cu: goto label_45df9c;
        case 0x45dfa0u: goto label_45dfa0;
        case 0x45dfa4u: goto label_45dfa4;
        case 0x45dfa8u: goto label_45dfa8;
        case 0x45dfacu: goto label_45dfac;
        case 0x45dfb0u: goto label_45dfb0;
        case 0x45dfb4u: goto label_45dfb4;
        case 0x45dfb8u: goto label_45dfb8;
        case 0x45dfbcu: goto label_45dfbc;
        case 0x45dfc0u: goto label_45dfc0;
        case 0x45dfc4u: goto label_45dfc4;
        case 0x45dfc8u: goto label_45dfc8;
        case 0x45dfccu: goto label_45dfcc;
        case 0x45dfd0u: goto label_45dfd0;
        case 0x45dfd4u: goto label_45dfd4;
        case 0x45dfd8u: goto label_45dfd8;
        case 0x45dfdcu: goto label_45dfdc;
        case 0x45dfe0u: goto label_45dfe0;
        case 0x45dfe4u: goto label_45dfe4;
        case 0x45dfe8u: goto label_45dfe8;
        case 0x45dfecu: goto label_45dfec;
        case 0x45dff0u: goto label_45dff0;
        case 0x45dff4u: goto label_45dff4;
        case 0x45dff8u: goto label_45dff8;
        case 0x45dffcu: goto label_45dffc;
        default: break;
    }

    ctx->pc = 0x45d970u;

label_45d970:
    // 0x45d970: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x45d970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_45d974:
    // 0x45d974: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x45d974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_45d978:
    // 0x45d978: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x45d978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_45d97c:
    // 0x45d97c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_45d980:
    // 0x45d980: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x45d980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_45d984:
    // 0x45d984: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x45d984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45d988:
    // 0x45d988: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x45d988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_45d98c:
    // 0x45d98c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x45d98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_45d990:
    // 0x45d990: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x45d990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_45d994:
    // 0x45d994: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x45d994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_45d998:
    // 0x45d998: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x45d998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_45d99c:
    // 0x45d99c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x45d99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_45d9a0:
    // 0x45d9a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x45d9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_45d9a4:
    // 0x45d9a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x45d9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_45d9a8:
    // 0x45d9a8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x45d9a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_45d9ac:
    // 0x45d9ac: 0xafa400ec  sw          $a0, 0xEC($sp)
    ctx->pc = 0x45d9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
label_45d9b0:
    // 0x45d9b0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x45d9b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_45d9b4:
    // 0x45d9b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x45d9b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_45d9b8:
    // 0x45d9b8: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x45d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_45d9bc:
    // 0x45d9bc: 0x8c5289e0  lw          $s2, -0x7620($v0)
    ctx->pc = 0x45d9bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_45d9c0:
    // 0x45d9c0: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45d9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_45d9c4:
    // 0x45d9c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x45d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_45d9c8:
    // 0x45d9c8: 0xc0c9a58  jal         func_326960
label_45d9cc:
    if (ctx->pc == 0x45D9CCu) {
        ctx->pc = 0x45D9CCu;
            // 0x45d9cc: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->pc = 0x45D9D0u;
        goto label_45d9d0;
    }
    ctx->pc = 0x45D9C8u;
    SET_GPR_U32(ctx, 31, 0x45D9D0u);
    ctx->pc = 0x45D9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D9C8u;
            // 0x45d9cc: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D9D0u; }
        if (ctx->pc != 0x45D9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D9D0u; }
        if (ctx->pc != 0x45D9D0u) { return; }
    }
    ctx->pc = 0x45D9D0u;
label_45d9d0:
    // 0x45d9d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45d9d4:
    // 0x45d9d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45d9d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45d9d8:
    // 0x45d9d8: 0xc123328  jal         func_48CCA0
label_45d9dc:
    if (ctx->pc == 0x45D9DCu) {
        ctx->pc = 0x45D9DCu;
            // 0x45d9dc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x45D9E0u;
        goto label_45d9e0;
    }
    ctx->pc = 0x45D9D8u;
    SET_GPR_U32(ctx, 31, 0x45D9E0u);
    ctx->pc = 0x45D9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D9D8u;
            // 0x45d9dc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D9E0u; }
        if (ctx->pc != 0x45D9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D9E0u; }
        if (ctx->pc != 0x45D9E0u) { return; }
    }
    ctx->pc = 0x45D9E0u;
label_45d9e0:
    // 0x45d9e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45d9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_45d9e4:
    // 0x45d9e4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x45d9e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45d9e8:
    // 0x45d9e8: 0xc123328  jal         func_48CCA0
label_45d9ec:
    if (ctx->pc == 0x45D9ECu) {
        ctx->pc = 0x45D9ECu;
            // 0x45d9ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x45D9F0u;
        goto label_45d9f0;
    }
    ctx->pc = 0x45D9E8u;
    SET_GPR_U32(ctx, 31, 0x45D9F0u);
    ctx->pc = 0x45D9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D9E8u;
            // 0x45d9ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D9F0u; }
        if (ctx->pc != 0x45D9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D9F0u; }
        if (ctx->pc != 0x45D9F0u) { return; }
    }
    ctx->pc = 0x45D9F0u;
label_45d9f0:
    // 0x45d9f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45d9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_45d9f4:
    // 0x45d9f4: 0xc123328  jal         func_48CCA0
label_45d9f8:
    if (ctx->pc == 0x45D9F8u) {
        ctx->pc = 0x45D9F8u;
            // 0x45d9f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45D9FCu;
        goto label_45d9fc;
    }
    ctx->pc = 0x45D9F4u;
    SET_GPR_U32(ctx, 31, 0x45D9FCu);
    ctx->pc = 0x45D9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45D9F4u;
            // 0x45d9f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D9FCu; }
        if (ctx->pc != 0x45D9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45D9FCu; }
        if (ctx->pc != 0x45D9FCu) { return; }
    }
    ctx->pc = 0x45D9FCu;
label_45d9fc:
    // 0x45d9fc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x45d9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_45da00:
    // 0x45da00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_45da04:
    if (ctx->pc == 0x45DA04u) {
        ctx->pc = 0x45DA08u;
        goto label_45da08;
    }
    ctx->pc = 0x45DA00u;
    {
        const bool branch_taken_0x45da00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45da00) {
            ctx->pc = 0x45DA18u;
            goto label_45da18;
        }
    }
    ctx->pc = 0x45DA08u;
label_45da08:
    // 0x45da08: 0x2ea10009  sltiu       $at, $s5, 0x9
    ctx->pc = 0x45da08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_45da0c:
    // 0x45da0c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_45da10:
    if (ctx->pc == 0x45DA10u) {
        ctx->pc = 0x45DA14u;
        goto label_45da14;
    }
    ctx->pc = 0x45DA0Cu;
    {
        const bool branch_taken_0x45da0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45da0c) {
            ctx->pc = 0x45DA18u;
            goto label_45da18;
        }
    }
    ctx->pc = 0x45DA14u;
label_45da14:
    // 0x45da14: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x45da14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_45da18:
    // 0x45da18: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
label_45da1c:
    if (ctx->pc == 0x45DA1Cu) {
        ctx->pc = 0x45DA20u;
        goto label_45da20;
    }
    ctx->pc = 0x45DA18u;
    {
        const bool branch_taken_0x45da18 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x45da18) {
            ctx->pc = 0x45DA24u;
            goto label_45da24;
        }
    }
    ctx->pc = 0x45DA20u;
label_45da20:
    // 0x45da20: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x45da20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_45da24:
    // 0x45da24: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x45da24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_45da28:
    // 0x45da28: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x45da28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_45da2c:
    // 0x45da2c: 0x845704da  lh          $s7, 0x4DA($v0)
    ctx->pc = 0x45da2cu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1242)));
label_45da30:
    // 0x45da30: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x45da30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_45da34:
    // 0x45da34: 0x847604d8  lh          $s6, 0x4D8($v1)
    ctx->pc = 0x45da34u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1240)));
label_45da38:
    // 0x45da38: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x45da38u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
label_45da3c:
    // 0x45da3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45da3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_45da40:
    // 0x45da40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45da40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45da44:
    // 0x45da44: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x45da44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_45da48:
    // 0x45da48: 0x2631c150  addiu       $s1, $s1, -0x3EB0
    ctx->pc = 0x45da48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294951248));
label_45da4c:
    // 0x45da4c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x45da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_45da50:
    // 0x45da50: 0x844204e2  lh          $v0, 0x4E2($v0)
    ctx->pc = 0x45da50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1250)));
label_45da54:
    // 0x45da54: 0x847e04e0  lh          $fp, 0x4E0($v1)
    ctx->pc = 0x45da54u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1248)));
label_45da58:
    // 0x45da58: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x45da58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_45da5c:
    // 0x45da5c: 0x2610c230  addiu       $s0, $s0, -0x3DD0
    ctx->pc = 0x45da5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951472));
label_45da60:
    // 0x45da60: 0x2694c270  addiu       $s4, $s4, -0x3D90
    ctx->pc = 0x45da60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951536));
label_45da64:
    // 0x45da64: 0xc123328  jal         func_48CCA0
label_45da68:
    if (ctx->pc == 0x45DA68u) {
        ctx->pc = 0x45DA68u;
            // 0x45da68: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->pc = 0x45DA6Cu;
        goto label_45da6c;
    }
    ctx->pc = 0x45DA64u;
    SET_GPR_U32(ctx, 31, 0x45DA6Cu);
    ctx->pc = 0x45DA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45DA64u;
            // 0x45da68: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DA6Cu; }
        if (ctx->pc != 0x45DA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DA6Cu; }
        if (ctx->pc != 0x45DA6Cu) { return; }
    }
    ctx->pc = 0x45DA6Cu;
label_45da6c:
    // 0x45da6c: 0x2442ffc3  addiu       $v0, $v0, -0x3D
    ctx->pc = 0x45da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967235));
label_45da70:
    // 0x45da70: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x45da70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_45da74:
    // 0x45da74: 0x3c02c180  lui         $v0, 0xC180
    ctx->pc = 0x45da74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49536 << 16));
label_45da78:
    // 0x45da78: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x45da78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_45da7c:
    // 0x45da7c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_45da80:
    // 0x45da80: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x45da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_45da84:
    // 0x45da84: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x45da84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_45da88:
    // 0x45da88: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_45da8c:
    if (ctx->pc == 0x45DA8Cu) {
        ctx->pc = 0x45DA8Cu;
            // 0x45da8c: 0x8fa200ec  lw          $v0, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->pc = 0x45DA90u;
        goto label_45da90;
    }
    ctx->pc = 0x45DA88u;
    {
        const bool branch_taken_0x45da88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45da88) {
            ctx->pc = 0x45DA8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45DA88u;
            // 0x45da8c: 0x8fa200ec  lw          $v0, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45DAA4u;
            goto label_45daa4;
        }
    }
    ctx->pc = 0x45DA90u;
label_45da90:
    // 0x45da90: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x45da90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_45da94:
    // 0x45da94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45da94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45da98:
    // 0x45da98: 0x0  nop
    ctx->pc = 0x45da98u;
    // NOP
label_45da9c:
    // 0x45da9c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x45da9cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_45daa0:
    // 0x45daa0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x45daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_45daa4:
    // 0x45daa4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x45daa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_45daa8:
    // 0x45daa8: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x45daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_45daac:
    // 0x45daac: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x45daacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_45dab0:
    // 0x45dab0: 0xc0506ac  jal         func_141AB0
label_45dab4:
    if (ctx->pc == 0x45DAB4u) {
        ctx->pc = 0x45DAB4u;
            // 0x45dab4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45DAB8u;
        goto label_45dab8;
    }
    ctx->pc = 0x45DAB0u;
    SET_GPR_U32(ctx, 31, 0x45DAB8u);
    ctx->pc = 0x45DAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45DAB0u;
            // 0x45dab4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DAB8u; }
        if (ctx->pc != 0x45DAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DAB8u; }
        if (ctx->pc != 0x45DAB8u) { return; }
    }
    ctx->pc = 0x45DAB8u;
label_45dab8:
    // 0x45dab8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x45dab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_45dabc:
    // 0x45dabc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x45dabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45dac0:
    // 0x45dac0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x45dac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_45dac4:
    // 0x45dac4: 0x320f809  jalr        $t9
label_45dac8:
    if (ctx->pc == 0x45DAC8u) {
        ctx->pc = 0x45DAC8u;
            // 0x45dac8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45DACCu;
        goto label_45dacc;
    }
    ctx->pc = 0x45DAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45DACCu);
        ctx->pc = 0x45DAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45DAC4u;
            // 0x45dac8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45DACCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45DACCu; }
            if (ctx->pc != 0x45DACCu) { return; }
        }
        }
    }
    ctx->pc = 0x45DACCu;
label_45dacc:
    // 0x45dacc: 0x3c02438e  lui         $v0, 0x438E
    ctx->pc = 0x45daccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17294 << 16));
label_45dad0:
    // 0x45dad0: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x45dad0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
label_45dad4:
    // 0x45dad4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x45dad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_45dad8:
    // 0x45dad8: 0x3c034302  lui         $v1, 0x4302
    ctx->pc = 0x45dad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
label_45dadc:
    // 0x45dadc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45dadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45dae0:
    // 0x45dae0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x45dae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_45dae4:
    // 0x45dae4: 0x449e0800  mtc1        $fp, $f1
    ctx->pc = 0x45dae4u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45dae8:
    // 0x45dae8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45daec:
    // 0x45daec: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45daecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45daf0:
    // 0x45daf0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45daf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45daf4:
    // 0x45daf4: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x45daf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45daf8:
    // 0x45daf8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x45daf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_45dafc:
    // 0x45dafc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45dafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45db00:
    // 0x45db00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45db00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45db04:
    // 0x45db04: 0x46140540  add.s       $f21, $f0, $f20
    ctx->pc = 0x45db04u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45db08:
    // 0x45db08: 0xc602002c  lwc1        $f2, 0x2C($s0)
    ctx->pc = 0x45db08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45db0c:
    // 0x45db0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45db0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45db10:
    // 0x45db10: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x45db10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45db14:
    // 0x45db14: 0x44882000  mtc1        $t0, $f4
    ctx->pc = 0x45db14u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_45db18:
    // 0x45db18: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x45db18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45db1c:
    // 0x45db1c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x45db1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_45db20:
    // 0x45db20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x45db20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45db24:
    // 0x45db24: 0x4602abc0  add.s       $f15, $f21, $f2
    ctx->pc = 0x45db24u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_45db28:
    // 0x45db28: 0x46030301  sub.s       $f12, $f0, $f3
    ctx->pc = 0x45db28u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_45db2c:
    // 0x45db2c: 0x46030380  add.s       $f14, $f0, $f3
    ctx->pc = 0x45db2cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_45db30:
    // 0x45db30: 0xc0bc284  jal         func_2F0A10
label_45db34:
    if (ctx->pc == 0x45DB34u) {
        ctx->pc = 0x45DB34u;
            // 0x45db34: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45DB38u;
        goto label_45db38;
    }
    ctx->pc = 0x45DB30u;
    SET_GPR_U32(ctx, 31, 0x45DB38u);
    ctx->pc = 0x45DB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45DB30u;
            // 0x45db34: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DB38u; }
        if (ctx->pc != 0x45DB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DB38u; }
        if (ctx->pc != 0x45DB38u) { return; }
    }
    ctx->pc = 0x45DB38u;
label_45db38:
    // 0x45db38: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x45db38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_45db3c:
    // 0x45db3c: 0x3c034090  lui         $v1, 0x4090
    ctx->pc = 0x45db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16528 << 16));
label_45db40:
    // 0x45db40: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x45db40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_45db44:
    // 0x45db44: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x45db44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_45db48:
    // 0x45db48: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x45db48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_45db4c:
    // 0x45db4c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45db4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45db50:
    // 0x45db50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45db50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45db54:
    // 0x45db54: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45db54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45db58:
    // 0x45db58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45db58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45db5c:
    // 0x45db5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45db5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45db60:
    // 0x45db60: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x45db60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45db64:
    // 0x45db64: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45db64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45db68:
    // 0x45db68: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x45db68u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_45db6c:
    // 0x45db6c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45db6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45db70:
    // 0x45db70: 0x46011802  mul.s       $f0, $f3, $f1
    ctx->pc = 0x45db70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_45db74:
    // 0x45db74: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x45db74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_45db78:
    // 0x45db78: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x45db78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_45db7c:
    // 0x45db7c: 0x0  nop
    ctx->pc = 0x45db7cu;
    // NOP
label_45db80:
    // 0x45db80: 0x4600131c  madd.s      $f12, $f2, $f0
    ctx->pc = 0x45db80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_45db84:
    // 0x45db84: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x45db84u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45db88:
    // 0x45db88: 0x0  nop
    ctx->pc = 0x45db88u;
    // NOP
label_45db8c:
    // 0x45db8c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45db8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45db90:
    // 0x45db90: 0xc6020038  lwc1        $f2, 0x38($s0)
    ctx->pc = 0x45db90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45db94:
    // 0x45db94: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x45db94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45db98:
    // 0x45db98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45db98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45db9c:
    // 0x45db9c: 0x0  nop
    ctx->pc = 0x45db9cu;
    // NOP
label_45dba0:
    // 0x45dba0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45dba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45dba4:
    // 0x45dba4: 0x46026380  add.s       $f14, $f12, $f2
    ctx->pc = 0x45dba4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_45dba8:
    // 0x45dba8: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45dba8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45dbac:
    // 0x45dbac: 0xc0bc284  jal         func_2F0A10
label_45dbb0:
    if (ctx->pc == 0x45DBB0u) {
        ctx->pc = 0x45DBB0u;
            // 0x45dbb0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45DBB4u;
        goto label_45dbb4;
    }
    ctx->pc = 0x45DBACu;
    SET_GPR_U32(ctx, 31, 0x45DBB4u);
    ctx->pc = 0x45DBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45DBACu;
            // 0x45dbb0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DBB4u; }
        if (ctx->pc != 0x45DBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DBB4u; }
        if (ctx->pc != 0x45DBB4u) { return; }
    }
    ctx->pc = 0x45DBB4u;
label_45dbb4:
    // 0x45dbb4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x45dbb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_45dbb8:
    // 0x45dbb8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x45dbb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_45dbbc:
    // 0x45dbbc: 0x320f809  jalr        $t9
label_45dbc0:
    if (ctx->pc == 0x45DBC0u) {
        ctx->pc = 0x45DBC0u;
            // 0x45dbc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45DBC4u;
        goto label_45dbc4;
    }
    ctx->pc = 0x45DBBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45DBC4u);
        ctx->pc = 0x45DBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45DBBCu;
            // 0x45dbc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45DBC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45DBC4u; }
            if (ctx->pc != 0x45DBC4u) { return; }
        }
        }
    }
    ctx->pc = 0x45DBC4u;
label_45dbc4:
    // 0x45dbc4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x45dbc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_45dbc8:
    // 0x45dbc8: 0x15a8c0  sll         $s5, $s5, 3
    ctx->pc = 0x45dbc8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_45dbcc:
    // 0x45dbcc: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x45dbccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45dbd0:
    // 0x45dbd0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x45dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45dbd4:
    // 0x45dbd4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x45dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_45dbd8:
    // 0x45dbd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45dbdc:
    // 0x45dbdc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x45dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_45dbe0:
    // 0x45dbe0: 0x90430448  lbu         $v1, 0x448($v0)
    ctx->pc = 0x45dbe0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1096)));
label_45dbe4:
    // 0x45dbe4: 0x5070000f  beql        $v1, $s0, . + 4 + (0xF << 2)
label_45dbe8:
    if (ctx->pc == 0x45DBE8u) {
        ctx->pc = 0x45DBE8u;
            // 0x45dbe8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x45DBECu;
        goto label_45dbec;
    }
    ctx->pc = 0x45DBE4u;
    {
        const bool branch_taken_0x45dbe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x45dbe4) {
            ctx->pc = 0x45DBE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45DBE4u;
            // 0x45dbe8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45DC24u;
            goto label_45dc24;
        }
    }
    ctx->pc = 0x45DBECu;
label_45dbec:
    // 0x45dbec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45dbf0:
    // 0x45dbf0: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_45dbf4:
    if (ctx->pc == 0x45DBF4u) {
        ctx->pc = 0x45DBF4u;
            // 0x45dbf4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45DBF8u;
        goto label_45dbf8;
    }
    ctx->pc = 0x45DBF0u;
    {
        const bool branch_taken_0x45dbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45dbf0) {
            ctx->pc = 0x45DBF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45DBF0u;
            // 0x45dbf4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45DC24u;
            goto label_45dc24;
        }
    }
    ctx->pc = 0x45DBF8u;
label_45dbf8:
    // 0x45dbf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45dbfc:
    // 0x45dbfc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_45dc00:
    if (ctx->pc == 0x45DC00u) {
        ctx->pc = 0x45DC04u;
        goto label_45dc04;
    }
    ctx->pc = 0x45DBFCu;
    {
        const bool branch_taken_0x45dbfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45dbfc) {
            ctx->pc = 0x45DC24u;
            goto label_45dc24;
        }
    }
    ctx->pc = 0x45DC04u;
label_45dc04:
    // 0x45dc04: 0x5060004a  beql        $v1, $zero, . + 4 + (0x4A << 2)
label_45dc08:
    if (ctx->pc == 0x45DC08u) {
        ctx->pc = 0x45DC08u;
            // 0x45dc08: 0x8fa200ec  lw          $v0, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->pc = 0x45DC0Cu;
        goto label_45dc0c;
    }
    ctx->pc = 0x45DC04u;
    {
        const bool branch_taken_0x45dc04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45dc04) {
            ctx->pc = 0x45DC08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45DC04u;
            // 0x45dc08: 0x8fa200ec  lw          $v0, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45DD30u;
            goto label_45dd30;
        }
    }
    ctx->pc = 0x45DC0Cu;
label_45dc0c:
    // 0x45dc0c: 0x10000005  b           . + 4 + (0x5 << 2)
label_45dc10:
    if (ctx->pc == 0x45DC10u) {
        ctx->pc = 0x45DC14u;
        goto label_45dc14;
    }
    ctx->pc = 0x45DC0Cu;
    {
        const bool branch_taken_0x45dc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45dc0c) {
            ctx->pc = 0x45DC24u;
            goto label_45dc24;
        }
    }
    ctx->pc = 0x45DC14u;
label_45dc14:
    // 0x45dc14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45dc14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45dc18:
    // 0x45dc18: 0x10000002  b           . + 4 + (0x2 << 2)
label_45dc1c:
    if (ctx->pc == 0x45DC1Cu) {
        ctx->pc = 0x45DC20u;
        goto label_45dc20;
    }
    ctx->pc = 0x45DC18u;
    {
        const bool branch_taken_0x45dc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45dc18) {
            ctx->pc = 0x45DC24u;
            goto label_45dc24;
        }
    }
    ctx->pc = 0x45DC20u;
label_45dc20:
    // 0x45dc20: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x45dc20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45dc24:
    // 0x45dc24: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x45dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_45dc28:
    // 0x45dc28: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x45dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_45dc2c:
    // 0x45dc2c: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x45dc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_45dc30:
    // 0x45dc30: 0xc0506ac  jal         func_141AB0
label_45dc34:
    if (ctx->pc == 0x45DC34u) {
        ctx->pc = 0x45DC34u;
            // 0x45dc34: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x45DC38u;
        goto label_45dc38;
    }
    ctx->pc = 0x45DC30u;
    SET_GPR_U32(ctx, 31, 0x45DC38u);
    ctx->pc = 0x45DC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45DC30u;
            // 0x45dc34: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DC38u; }
        if (ctx->pc != 0x45DC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DC38u; }
        if (ctx->pc != 0x45DC38u) { return; }
    }
    ctx->pc = 0x45DC38u;
label_45dc38:
    // 0x45dc38: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x45dc38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_45dc3c:
    // 0x45dc3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x45dc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45dc40:
    // 0x45dc40: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x45dc40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_45dc44:
    // 0x45dc44: 0x320f809  jalr        $t9
label_45dc48:
    if (ctx->pc == 0x45DC48u) {
        ctx->pc = 0x45DC48u;
            // 0x45dc48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45DC4Cu;
        goto label_45dc4c;
    }
    ctx->pc = 0x45DC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45DC4Cu);
        ctx->pc = 0x45DC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45DC44u;
            // 0x45dc48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45DC4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45DC4Cu; }
            if (ctx->pc != 0x45DC4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x45DC4Cu;
label_45dc4c:
    // 0x45dc4c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x45dc4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45dc50:
    // 0x45dc50: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x45dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_45dc54:
    // 0x45dc54: 0x46150818  adda.s      $f1, $f21
    ctx->pc = 0x45dc54u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_45dc58:
    // 0x45dc58: 0x3c0343be  lui         $v1, 0x43BE
    ctx->pc = 0x45dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17342 << 16));
label_45dc5c:
    // 0x45dc5c: 0x449e0800  mtc1        $fp, $f1
    ctx->pc = 0x45dc5cu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45dc60:
    // 0x45dc60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45dc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45dc64:
    // 0x45dc64: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x45dc64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_45dc68:
    // 0x45dc68: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x45dc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_45dc6c:
    // 0x45dc6c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45dc70:
    // 0x45dc70: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45dc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45dc74:
    // 0x45dc74: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x45dc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45dc78:
    // 0x45dc78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45dc78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45dc7c:
    // 0x45dc7c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45dc7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45dc80:
    // 0x45dc80: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x45dc80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45dc84:
    // 0x45dc84: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x45dc84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_45dc88:
    // 0x45dc88: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x45dc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45dc8c:
    // 0x45dc8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x45dc8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45dc90:
    // 0x45dc90: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x45dc90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_45dc94:
    // 0x45dc94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x45dc94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45dc98:
    // 0x45dc98: 0x0  nop
    ctx->pc = 0x45dc98u;
    // NOP
label_45dc9c:
    // 0x45dc9c: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x45dc9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45dca0:
    // 0x45dca0: 0x4602abc0  add.s       $f15, $f21, $f2
    ctx->pc = 0x45dca0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_45dca4:
    // 0x45dca4: 0x46030301  sub.s       $f12, $f0, $f3
    ctx->pc = 0x45dca4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_45dca8:
    // 0x45dca8: 0x46030380  add.s       $f14, $f0, $f3
    ctx->pc = 0x45dca8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_45dcac:
    // 0x45dcac: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x45dcacu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_45dcb0:
    // 0x45dcb0: 0xc0bc284  jal         func_2F0A10
label_45dcb4:
    if (ctx->pc == 0x45DCB4u) {
        ctx->pc = 0x45DCB4u;
            // 0x45dcb4: 0x4602251c  madd.s      $f20, $f4, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
        ctx->pc = 0x45DCB8u;
        goto label_45dcb8;
    }
    ctx->pc = 0x45DCB0u;
    SET_GPR_U32(ctx, 31, 0x45DCB8u);
    ctx->pc = 0x45DCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45DCB0u;
            // 0x45dcb4: 0x4602251c  madd.s      $f20, $f4, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DCB8u; }
        if (ctx->pc != 0x45DCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DCB8u; }
        if (ctx->pc != 0x45DCB8u) { return; }
    }
    ctx->pc = 0x45DCB8u;
label_45dcb8:
    // 0x45dcb8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x45dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_45dcbc:
    // 0x45dcbc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x45dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_45dcc0:
    // 0x45dcc0: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x45dcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_45dcc4:
    // 0x45dcc4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45dcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45dcc8:
    // 0x45dcc8: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x45dcc8u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45dccc:
    // 0x45dccc: 0x3c0243cf  lui         $v0, 0x43CF
    ctx->pc = 0x45dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17359 << 16));
label_45dcd0:
    // 0x45dcd0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x45dcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_45dcd4:
    // 0x45dcd4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45dcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45dcd8:
    // 0x45dcd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x45dcd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45dcdc:
    // 0x45dcdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45dcdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45dce0:
    // 0x45dce0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45dce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45dce4:
    // 0x45dce4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x45dce4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_45dce8:
    // 0x45dce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45dce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45dcec:
    // 0x45dcec: 0x0  nop
    ctx->pc = 0x45dcecu;
    // NOP
label_45dcf0:
    // 0x45dcf0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45dcf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45dcf4:
    // 0x45dcf4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45dcf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45dcf8:
    // 0x45dcf8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x45dcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45dcfc:
    // 0x45dcfc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x45dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_45dd00:
    // 0x45dd00: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x45dd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45dd04:
    // 0x45dd04: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x45dd04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45dd08:
    // 0x45dd08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x45dd08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_45dd0c:
    // 0x45dd0c: 0x46026380  add.s       $f14, $f12, $f2
    ctx->pc = 0x45dd0cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_45dd10:
    // 0x45dd10: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x45dd10u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_45dd14:
    // 0x45dd14: 0xc0bc284  jal         func_2F0A10
label_45dd18:
    if (ctx->pc == 0x45DD18u) {
        ctx->pc = 0x45DD18u;
            // 0x45dd18: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x45DD1Cu;
        goto label_45dd1c;
    }
    ctx->pc = 0x45DD14u;
    SET_GPR_U32(ctx, 31, 0x45DD1Cu);
    ctx->pc = 0x45DD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45DD14u;
            // 0x45dd18: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DD1Cu; }
        if (ctx->pc != 0x45DD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DD1Cu; }
        if (ctx->pc != 0x45DD1Cu) { return; }
    }
    ctx->pc = 0x45DD1Cu;
label_45dd1c:
    // 0x45dd1c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x45dd1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_45dd20:
    // 0x45dd20: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x45dd20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_45dd24:
    // 0x45dd24: 0x320f809  jalr        $t9
label_45dd28:
    if (ctx->pc == 0x45DD28u) {
        ctx->pc = 0x45DD28u;
            // 0x45dd28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45DD2Cu;
        goto label_45dd2c;
    }
    ctx->pc = 0x45DD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45DD2Cu);
        ctx->pc = 0x45DD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45DD24u;
            // 0x45dd28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45DD2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45DD2Cu; }
            if (ctx->pc != 0x45DD2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x45DD2Cu;
label_45dd2c:
    // 0x45dd2c: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x45dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_45dd30:
    // 0x45dd30: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x45dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_45dd34:
    // 0x45dd34: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x45dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_45dd38:
    // 0x45dd38: 0xc0506ac  jal         func_141AB0
label_45dd3c:
    if (ctx->pc == 0x45DD3Cu) {
        ctx->pc = 0x45DD3Cu;
            // 0x45dd3c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45DD40u;
        goto label_45dd40;
    }
    ctx->pc = 0x45DD38u;
    SET_GPR_U32(ctx, 31, 0x45DD40u);
    ctx->pc = 0x45DD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45DD38u;
            // 0x45dd3c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DD40u; }
        if (ctx->pc != 0x45DD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DD40u; }
        if (ctx->pc != 0x45DD40u) { return; }
    }
    ctx->pc = 0x45DD40u;
label_45dd40:
    // 0x45dd40: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x45dd40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_45dd44:
    // 0x45dd44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x45dd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45dd48:
    // 0x45dd48: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x45dd48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_45dd4c:
    // 0x45dd4c: 0x320f809  jalr        $t9
label_45dd50:
    if (ctx->pc == 0x45DD50u) {
        ctx->pc = 0x45DD50u;
            // 0x45dd50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45DD54u;
        goto label_45dd54;
    }
    ctx->pc = 0x45DD4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45DD54u);
        ctx->pc = 0x45DD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45DD4Cu;
            // 0x45dd50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45DD54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45DD54u; }
            if (ctx->pc != 0x45DD54u) { return; }
        }
        }
    }
    ctx->pc = 0x45DD54u;
label_45dd54:
    // 0x45dd54: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x45dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_45dd58:
    // 0x45dd58: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x45dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_45dd5c:
    // 0x45dd5c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x45dd5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_45dd60:
    // 0x45dd60: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45dd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45dd64:
    // 0x45dd64: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x45dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45dd68:
    // 0x45dd68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x45dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_45dd6c:
    // 0x45dd6c: 0x8c500208  lw          $s0, 0x208($v0)
    ctx->pc = 0x45dd6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 520)));
label_45dd70:
    // 0x45dd70: 0x2e012710  sltiu       $at, $s0, 0x2710
    ctx->pc = 0x45dd70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10000) ? 1 : 0);
label_45dd74:
    // 0x45dd74: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_45dd78:
    if (ctx->pc == 0x45DD78u) {
        ctx->pc = 0x45DD7Cu;
        goto label_45dd7c;
    }
    ctx->pc = 0x45DD74u;
    {
        const bool branch_taken_0x45dd74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x45dd74) {
            ctx->pc = 0x45DD80u;
            goto label_45dd80;
        }
    }
    ctx->pc = 0x45DD7Cu;
label_45dd7c:
    // 0x45dd7c: 0x2410270f  addiu       $s0, $zero, 0x270F
    ctx->pc = 0x45dd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_45dd80:
    // 0x45dd80: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_45dd84:
    if (ctx->pc == 0x45DD84u) {
        ctx->pc = 0x45DD84u;
            // 0x45dd84: 0x3c021062  lui         $v0, 0x1062 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
        ctx->pc = 0x45DD88u;
        goto label_45dd88;
    }
    ctx->pc = 0x45DD80u;
    {
        const bool branch_taken_0x45dd80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x45dd80) {
            ctx->pc = 0x45DD84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45DD80u;
            // 0x45dd84: 0x3c021062  lui         $v0, 0x1062 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45DD90u;
            goto label_45dd90;
        }
    }
    ctx->pc = 0x45DD88u;
label_45dd88:
    // 0x45dd88: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x45dd88u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_45dd8c:
    // 0x45dd8c: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x45dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_45dd90:
    // 0x45dd90: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x45dd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_45dd94:
    // 0x45dd94: 0x34424dd3  ori         $v0, $v0, 0x4DD3
    ctx->pc = 0x45dd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_45dd98:
    // 0x45dd98: 0x500019  multu       $v0, $s0
    ctx->pc = 0x45dd98u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45dd9c:
    // 0x45dd9c: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x45dd9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_45dda0:
    // 0x45dda0: 0x0  nop
    ctx->pc = 0x45dda0u;
    // NOP
label_45dda4:
    // 0x45dda4: 0x1010  mfhi        $v0
    ctx->pc = 0x45dda4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45dda8:
    // 0x45dda8: 0x22182  srl         $a0, $v0, 6
    ctx->pc = 0x45dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_45ddac:
    // 0x45ddac: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x45ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_45ddb0:
    // 0x45ddb0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x45ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_45ddb4:
    // 0x45ddb4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x45ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45ddb8:
    // 0x45ddb8: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x45ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_45ddbc:
    // 0x45ddbc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x45ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45ddc0:
    // 0x45ddc0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x45ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_45ddc4:
    // 0x45ddc4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x45ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_45ddc8:
    // 0x45ddc8: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_45ddcc:
    if (ctx->pc == 0x45DDCCu) {
        ctx->pc = 0x45DDCCu;
            // 0x45ddcc: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x45DDD0u;
        goto label_45ddd0;
    }
    ctx->pc = 0x45DDC8u;
    {
        const bool branch_taken_0x45ddc8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x45DDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45DDC8u;
            // 0x45ddcc: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ddc8) {
            ctx->pc = 0x45DDD4u;
            goto label_45ddd4;
        }
    }
    ctx->pc = 0x45DDD0u;
label_45ddd0:
    // 0x45ddd0: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x45ddd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_45ddd4:
    // 0x45ddd4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x45ddd4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ddd8:
    // 0x45ddd8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x45ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_45dddc:
    // 0x45dddc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45dddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45dde0:
    // 0x45dde0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45dde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45dde4:
    // 0x45dde4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45dde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45dde8:
    // 0x45dde8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45dde8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45ddec:
    // 0x45ddec: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45ddecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45ddf0:
    // 0x45ddf0: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x45ddf0u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45ddf4:
    // 0x45ddf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x45ddf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45ddf8:
    // 0x45ddf8: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45ddf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45ddfc:
    // 0x45ddfc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45de00:
    // 0x45de00: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45de00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45de04:
    // 0x45de04: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45de04u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45de08:
    // 0x45de08: 0x46166380  add.s       $f14, $f12, $f22
    ctx->pc = 0x45de08u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[22]);
label_45de0c:
    // 0x45de0c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45de0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45de10:
    // 0x45de10: 0xc0bc284  jal         func_2F0A10
label_45de14:
    if (ctx->pc == 0x45DE14u) {
        ctx->pc = 0x45DE14u;
            // 0x45de14: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45DE18u;
        goto label_45de18;
    }
    ctx->pc = 0x45DE10u;
    SET_GPR_U32(ctx, 31, 0x45DE18u);
    ctx->pc = 0x45DE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45DE10u;
            // 0x45de14: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DE18u; }
        if (ctx->pc != 0x45DE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DE18u; }
        if (ctx->pc != 0x45DE18u) { return; }
    }
    ctx->pc = 0x45DE18u;
label_45de18:
    // 0x45de18: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x45de18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_45de1c:
    // 0x45de1c: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45de20:
    // 0x45de20: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x45de20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_45de24:
    // 0x45de24: 0x500019  multu       $v0, $s0
    ctx->pc = 0x45de24u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45de28:
    // 0x45de28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45de28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45de2c:
    // 0x45de2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45de2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45de30:
    // 0x45de30: 0x0  nop
    ctx->pc = 0x45de30u;
    // NOP
label_45de34:
    // 0x45de34: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45de34u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45de38:
    // 0x45de38: 0x4601b51c  madd.s      $f20, $f22, $f1
    ctx->pc = 0x45de38u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45de3c:
    // 0x45de3c: 0x1010  mfhi        $v0
    ctx->pc = 0x45de3cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45de40:
    // 0x45de40: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x45de40u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_45de44:
    // 0x45de44: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x45de44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45de48:
    // 0x45de48: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x45de48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_45de4c:
    // 0x45de4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45de4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45de50:
    // 0x45de50: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x45de50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_45de54:
    // 0x45de54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x45de54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45de58:
    // 0x45de58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x45de58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45de5c:
    // 0x45de5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45de60:
    // 0x45de60: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_45de64:
    if (ctx->pc == 0x45DE64u) {
        ctx->pc = 0x45DE64u;
            // 0x45de64: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x45DE68u;
        goto label_45de68;
    }
    ctx->pc = 0x45DE60u;
    {
        const bool branch_taken_0x45de60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x45DE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45DE60u;
            // 0x45de64: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45de60) {
            ctx->pc = 0x45DE6Cu;
            goto label_45de6c;
        }
    }
    ctx->pc = 0x45DE68u;
label_45de68:
    // 0x45de68: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x45de68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_45de6c:
    // 0x45de6c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x45de6cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45de70:
    // 0x45de70: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45de70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45de74:
    // 0x45de74: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45de74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45de78:
    // 0x45de78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45de78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45de7c:
    // 0x45de7c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45de7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45de80:
    // 0x45de80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45de80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45de84:
    // 0x45de84: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45de84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45de88:
    // 0x45de88: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45de88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45de8c:
    // 0x45de8c: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x45de8cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45de90:
    // 0x45de90: 0x0  nop
    ctx->pc = 0x45de90u;
    // NOP
label_45de94:
    // 0x45de94: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45de94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45de98:
    // 0x45de98: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45de98u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45de9c:
    // 0x45de9c: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45de9cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45dea0:
    // 0x45dea0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45dea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45dea4:
    // 0x45dea4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45dea4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45dea8:
    // 0x45dea8: 0xc0bc284  jal         func_2F0A10
label_45deac:
    if (ctx->pc == 0x45DEACu) {
        ctx->pc = 0x45DEACu;
            // 0x45deac: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45DEB0u;
        goto label_45deb0;
    }
    ctx->pc = 0x45DEA8u;
    SET_GPR_U32(ctx, 31, 0x45DEB0u);
    ctx->pc = 0x45DEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45DEA8u;
            // 0x45deac: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DEB0u; }
        if (ctx->pc != 0x45DEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DEB0u; }
        if (ctx->pc != 0x45DEB0u) { return; }
    }
    ctx->pc = 0x45DEB0u;
label_45deb0:
    // 0x45deb0: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x45deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_45deb4:
    // 0x45deb4: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45deb8:
    // 0x45deb8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x45deb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_45debc:
    // 0x45debc: 0x500019  multu       $v0, $s0
    ctx->pc = 0x45debcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_45dec0:
    // 0x45dec0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45dec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45dec4:
    // 0x45dec4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45dec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45dec8:
    // 0x45dec8: 0x0  nop
    ctx->pc = 0x45dec8u;
    // NOP
label_45decc:
    // 0x45decc: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45deccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45ded0:
    // 0x45ded0: 0x4601b51c  madd.s      $f20, $f22, $f1
    ctx->pc = 0x45ded0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_45ded4:
    // 0x45ded4: 0x1010  mfhi        $v0
    ctx->pc = 0x45ded4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45ded8:
    // 0x45ded8: 0x220c2  srl         $a0, $v0, 3
    ctx->pc = 0x45ded8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
label_45dedc:
    // 0x45dedc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x45dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45dee0:
    // 0x45dee0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x45dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_45dee4:
    // 0x45dee4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45dee8:
    // 0x45dee8: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x45dee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_45deec:
    // 0x45deec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x45deecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_45def0:
    // 0x45def0: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_45def4:
    if (ctx->pc == 0x45DEF4u) {
        ctx->pc = 0x45DEF4u;
            // 0x45def4: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x45DEF8u;
        goto label_45def8;
    }
    ctx->pc = 0x45DEF0u;
    {
        const bool branch_taken_0x45def0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x45DEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45DEF0u;
            // 0x45def4: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45def0) {
            ctx->pc = 0x45DEFCu;
            goto label_45defc;
        }
    }
    ctx->pc = 0x45DEF8u;
label_45def8:
    // 0x45def8: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x45def8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_45defc:
    // 0x45defc: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x45defcu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45df00:
    // 0x45df00: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45df00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45df04:
    // 0x45df04: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45df04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45df08:
    // 0x45df08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45df08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45df0c:
    // 0x45df0c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45df0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45df10:
    // 0x45df10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45df10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45df14:
    // 0x45df14: 0xc4b60008  lwc1        $f22, 0x8($a1)
    ctx->pc = 0x45df14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45df18:
    // 0x45df18: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x45df18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45df1c:
    // 0x45df1c: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x45df1cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45df20:
    // 0x45df20: 0x0  nop
    ctx->pc = 0x45df20u;
    // NOP
label_45df24:
    // 0x45df24: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45df24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45df28:
    // 0x45df28: 0x4601abc0  add.s       $f15, $f21, $f1
    ctx->pc = 0x45df28u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_45df2c:
    // 0x45df2c: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x45df2cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_45df30:
    // 0x45df30: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45df30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45df34:
    // 0x45df34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45df34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45df38:
    // 0x45df38: 0xc0bc284  jal         func_2F0A10
label_45df3c:
    if (ctx->pc == 0x45DF3Cu) {
        ctx->pc = 0x45DF3Cu;
            // 0x45df3c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45DF40u;
        goto label_45df40;
    }
    ctx->pc = 0x45DF38u;
    SET_GPR_U32(ctx, 31, 0x45DF40u);
    ctx->pc = 0x45DF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45DF38u;
            // 0x45df3c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DF40u; }
        if (ctx->pc != 0x45DF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DF40u; }
        if (ctx->pc != 0x45DF40u) { return; }
    }
    ctx->pc = 0x45DF40u;
label_45df40:
    // 0x45df40: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x45df40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_45df44:
    // 0x45df44: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x45df44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_45df48:
    // 0x45df48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x45df48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45df4c:
    // 0x45df4c: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x45df4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_45df50:
    // 0x45df50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45df50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45df54:
    // 0x45df54: 0x0  nop
    ctx->pc = 0x45df54u;
    // NOP
label_45df58:
    // 0x45df58: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x45df58u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_45df5c:
    // 0x45df5c: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_45df60:
    if (ctx->pc == 0x45DF60u) {
        ctx->pc = 0x45DF60u;
            // 0x45df60: 0x4601b51c  madd.s      $f20, $f22, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->pc = 0x45DF64u;
        goto label_45df64;
    }
    ctx->pc = 0x45DF5Cu;
    {
        const bool branch_taken_0x45df5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x45DF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45DF5Cu;
            // 0x45df60: 0x4601b51c  madd.s      $f20, $f22, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45df5c) {
            ctx->pc = 0x45DF68u;
            goto label_45df68;
        }
    }
    ctx->pc = 0x45DF64u;
label_45df64:
    // 0x45df64: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x45df64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_45df68:
    // 0x45df68: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x45df68u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45df6c:
    // 0x45df6c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x45df6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45df70:
    // 0x45df70: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x45df70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_45df74:
    // 0x45df74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x45df74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45df78:
    // 0x45df78: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x45df78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45df7c:
    // 0x45df7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45df7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45df80:
    // 0x45df80: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x45df80u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45df84:
    // 0x45df84: 0x0  nop
    ctx->pc = 0x45df84u;
    // NOP
label_45df88:
    // 0x45df88: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x45df88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_45df8c:
    // 0x45df8c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x45df8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45df90:
    // 0x45df90: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x45df90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45df94:
    // 0x45df94: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x45df94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_45df98:
    // 0x45df98: 0x4601a380  add.s       $f14, $f20, $f1
    ctx->pc = 0x45df98u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_45df9c:
    // 0x45df9c: 0x4600abc0  add.s       $f15, $f21, $f0
    ctx->pc = 0x45df9cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_45dfa0:
    // 0x45dfa0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x45dfa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_45dfa4:
    // 0x45dfa4: 0xc0bc284  jal         func_2F0A10
label_45dfa8:
    if (ctx->pc == 0x45DFA8u) {
        ctx->pc = 0x45DFA8u;
            // 0x45dfa8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x45DFACu;
        goto label_45dfac;
    }
    ctx->pc = 0x45DFA4u;
    SET_GPR_U32(ctx, 31, 0x45DFACu);
    ctx->pc = 0x45DFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45DFA4u;
            // 0x45dfa8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DFACu; }
        if (ctx->pc != 0x45DFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45DFACu; }
        if (ctx->pc != 0x45DFACu) { return; }
    }
    ctx->pc = 0x45DFACu;
label_45dfac:
    // 0x45dfac: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x45dfacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_45dfb0:
    // 0x45dfb0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x45dfb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_45dfb4:
    // 0x45dfb4: 0x320f809  jalr        $t9
label_45dfb8:
    if (ctx->pc == 0x45DFB8u) {
        ctx->pc = 0x45DFB8u;
            // 0x45dfb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45DFBCu;
        goto label_45dfbc;
    }
    ctx->pc = 0x45DFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45DFBCu);
        ctx->pc = 0x45DFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45DFB4u;
            // 0x45dfb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45DFBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45DFBCu; }
            if (ctx->pc != 0x45DFBCu) { return; }
        }
        }
    }
    ctx->pc = 0x45DFBCu;
label_45dfbc:
    // 0x45dfbc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x45dfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_45dfc0:
    // 0x45dfc0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x45dfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_45dfc4:
    // 0x45dfc4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x45dfc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_45dfc8:
    // 0x45dfc8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x45dfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_45dfcc:
    // 0x45dfcc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x45dfccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_45dfd0:
    // 0x45dfd0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x45dfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_45dfd4:
    // 0x45dfd4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x45dfd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_45dfd8:
    // 0x45dfd8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x45dfd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_45dfdc:
    // 0x45dfdc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x45dfdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_45dfe0:
    // 0x45dfe0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x45dfe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_45dfe4:
    // 0x45dfe4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x45dfe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45dfe8:
    // 0x45dfe8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x45dfe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45dfec:
    // 0x45dfec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x45dfecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45dff0:
    // 0x45dff0: 0x3e00008  jr          $ra
label_45dff4:
    if (ctx->pc == 0x45DFF4u) {
        ctx->pc = 0x45DFF4u;
            // 0x45dff4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x45DFF8u;
        goto label_45dff8;
    }
    ctx->pc = 0x45DFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45DFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45DFF0u;
            // 0x45dff4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45DFF8u;
label_45dff8:
    // 0x45dff8: 0x0  nop
    ctx->pc = 0x45dff8u;
    // NOP
label_45dffc:
    // 0x45dffc: 0x0  nop
    ctx->pc = 0x45dffcu;
    // NOP
}
