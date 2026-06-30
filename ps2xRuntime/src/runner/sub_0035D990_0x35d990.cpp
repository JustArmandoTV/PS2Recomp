#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035D990
// Address: 0x35d990 - 0x35ee00
void sub_0035D990_0x35d990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D990_0x35d990");
#endif

    switch (ctx->pc) {
        case 0x35d990u: goto label_35d990;
        case 0x35d994u: goto label_35d994;
        case 0x35d998u: goto label_35d998;
        case 0x35d99cu: goto label_35d99c;
        case 0x35d9a0u: goto label_35d9a0;
        case 0x35d9a4u: goto label_35d9a4;
        case 0x35d9a8u: goto label_35d9a8;
        case 0x35d9acu: goto label_35d9ac;
        case 0x35d9b0u: goto label_35d9b0;
        case 0x35d9b4u: goto label_35d9b4;
        case 0x35d9b8u: goto label_35d9b8;
        case 0x35d9bcu: goto label_35d9bc;
        case 0x35d9c0u: goto label_35d9c0;
        case 0x35d9c4u: goto label_35d9c4;
        case 0x35d9c8u: goto label_35d9c8;
        case 0x35d9ccu: goto label_35d9cc;
        case 0x35d9d0u: goto label_35d9d0;
        case 0x35d9d4u: goto label_35d9d4;
        case 0x35d9d8u: goto label_35d9d8;
        case 0x35d9dcu: goto label_35d9dc;
        case 0x35d9e0u: goto label_35d9e0;
        case 0x35d9e4u: goto label_35d9e4;
        case 0x35d9e8u: goto label_35d9e8;
        case 0x35d9ecu: goto label_35d9ec;
        case 0x35d9f0u: goto label_35d9f0;
        case 0x35d9f4u: goto label_35d9f4;
        case 0x35d9f8u: goto label_35d9f8;
        case 0x35d9fcu: goto label_35d9fc;
        case 0x35da00u: goto label_35da00;
        case 0x35da04u: goto label_35da04;
        case 0x35da08u: goto label_35da08;
        case 0x35da0cu: goto label_35da0c;
        case 0x35da10u: goto label_35da10;
        case 0x35da14u: goto label_35da14;
        case 0x35da18u: goto label_35da18;
        case 0x35da1cu: goto label_35da1c;
        case 0x35da20u: goto label_35da20;
        case 0x35da24u: goto label_35da24;
        case 0x35da28u: goto label_35da28;
        case 0x35da2cu: goto label_35da2c;
        case 0x35da30u: goto label_35da30;
        case 0x35da34u: goto label_35da34;
        case 0x35da38u: goto label_35da38;
        case 0x35da3cu: goto label_35da3c;
        case 0x35da40u: goto label_35da40;
        case 0x35da44u: goto label_35da44;
        case 0x35da48u: goto label_35da48;
        case 0x35da4cu: goto label_35da4c;
        case 0x35da50u: goto label_35da50;
        case 0x35da54u: goto label_35da54;
        case 0x35da58u: goto label_35da58;
        case 0x35da5cu: goto label_35da5c;
        case 0x35da60u: goto label_35da60;
        case 0x35da64u: goto label_35da64;
        case 0x35da68u: goto label_35da68;
        case 0x35da6cu: goto label_35da6c;
        case 0x35da70u: goto label_35da70;
        case 0x35da74u: goto label_35da74;
        case 0x35da78u: goto label_35da78;
        case 0x35da7cu: goto label_35da7c;
        case 0x35da80u: goto label_35da80;
        case 0x35da84u: goto label_35da84;
        case 0x35da88u: goto label_35da88;
        case 0x35da8cu: goto label_35da8c;
        case 0x35da90u: goto label_35da90;
        case 0x35da94u: goto label_35da94;
        case 0x35da98u: goto label_35da98;
        case 0x35da9cu: goto label_35da9c;
        case 0x35daa0u: goto label_35daa0;
        case 0x35daa4u: goto label_35daa4;
        case 0x35daa8u: goto label_35daa8;
        case 0x35daacu: goto label_35daac;
        case 0x35dab0u: goto label_35dab0;
        case 0x35dab4u: goto label_35dab4;
        case 0x35dab8u: goto label_35dab8;
        case 0x35dabcu: goto label_35dabc;
        case 0x35dac0u: goto label_35dac0;
        case 0x35dac4u: goto label_35dac4;
        case 0x35dac8u: goto label_35dac8;
        case 0x35daccu: goto label_35dacc;
        case 0x35dad0u: goto label_35dad0;
        case 0x35dad4u: goto label_35dad4;
        case 0x35dad8u: goto label_35dad8;
        case 0x35dadcu: goto label_35dadc;
        case 0x35dae0u: goto label_35dae0;
        case 0x35dae4u: goto label_35dae4;
        case 0x35dae8u: goto label_35dae8;
        case 0x35daecu: goto label_35daec;
        case 0x35daf0u: goto label_35daf0;
        case 0x35daf4u: goto label_35daf4;
        case 0x35daf8u: goto label_35daf8;
        case 0x35dafcu: goto label_35dafc;
        case 0x35db00u: goto label_35db00;
        case 0x35db04u: goto label_35db04;
        case 0x35db08u: goto label_35db08;
        case 0x35db0cu: goto label_35db0c;
        case 0x35db10u: goto label_35db10;
        case 0x35db14u: goto label_35db14;
        case 0x35db18u: goto label_35db18;
        case 0x35db1cu: goto label_35db1c;
        case 0x35db20u: goto label_35db20;
        case 0x35db24u: goto label_35db24;
        case 0x35db28u: goto label_35db28;
        case 0x35db2cu: goto label_35db2c;
        case 0x35db30u: goto label_35db30;
        case 0x35db34u: goto label_35db34;
        case 0x35db38u: goto label_35db38;
        case 0x35db3cu: goto label_35db3c;
        case 0x35db40u: goto label_35db40;
        case 0x35db44u: goto label_35db44;
        case 0x35db48u: goto label_35db48;
        case 0x35db4cu: goto label_35db4c;
        case 0x35db50u: goto label_35db50;
        case 0x35db54u: goto label_35db54;
        case 0x35db58u: goto label_35db58;
        case 0x35db5cu: goto label_35db5c;
        case 0x35db60u: goto label_35db60;
        case 0x35db64u: goto label_35db64;
        case 0x35db68u: goto label_35db68;
        case 0x35db6cu: goto label_35db6c;
        case 0x35db70u: goto label_35db70;
        case 0x35db74u: goto label_35db74;
        case 0x35db78u: goto label_35db78;
        case 0x35db7cu: goto label_35db7c;
        case 0x35db80u: goto label_35db80;
        case 0x35db84u: goto label_35db84;
        case 0x35db88u: goto label_35db88;
        case 0x35db8cu: goto label_35db8c;
        case 0x35db90u: goto label_35db90;
        case 0x35db94u: goto label_35db94;
        case 0x35db98u: goto label_35db98;
        case 0x35db9cu: goto label_35db9c;
        case 0x35dba0u: goto label_35dba0;
        case 0x35dba4u: goto label_35dba4;
        case 0x35dba8u: goto label_35dba8;
        case 0x35dbacu: goto label_35dbac;
        case 0x35dbb0u: goto label_35dbb0;
        case 0x35dbb4u: goto label_35dbb4;
        case 0x35dbb8u: goto label_35dbb8;
        case 0x35dbbcu: goto label_35dbbc;
        case 0x35dbc0u: goto label_35dbc0;
        case 0x35dbc4u: goto label_35dbc4;
        case 0x35dbc8u: goto label_35dbc8;
        case 0x35dbccu: goto label_35dbcc;
        case 0x35dbd0u: goto label_35dbd0;
        case 0x35dbd4u: goto label_35dbd4;
        case 0x35dbd8u: goto label_35dbd8;
        case 0x35dbdcu: goto label_35dbdc;
        case 0x35dbe0u: goto label_35dbe0;
        case 0x35dbe4u: goto label_35dbe4;
        case 0x35dbe8u: goto label_35dbe8;
        case 0x35dbecu: goto label_35dbec;
        case 0x35dbf0u: goto label_35dbf0;
        case 0x35dbf4u: goto label_35dbf4;
        case 0x35dbf8u: goto label_35dbf8;
        case 0x35dbfcu: goto label_35dbfc;
        case 0x35dc00u: goto label_35dc00;
        case 0x35dc04u: goto label_35dc04;
        case 0x35dc08u: goto label_35dc08;
        case 0x35dc0cu: goto label_35dc0c;
        case 0x35dc10u: goto label_35dc10;
        case 0x35dc14u: goto label_35dc14;
        case 0x35dc18u: goto label_35dc18;
        case 0x35dc1cu: goto label_35dc1c;
        case 0x35dc20u: goto label_35dc20;
        case 0x35dc24u: goto label_35dc24;
        case 0x35dc28u: goto label_35dc28;
        case 0x35dc2cu: goto label_35dc2c;
        case 0x35dc30u: goto label_35dc30;
        case 0x35dc34u: goto label_35dc34;
        case 0x35dc38u: goto label_35dc38;
        case 0x35dc3cu: goto label_35dc3c;
        case 0x35dc40u: goto label_35dc40;
        case 0x35dc44u: goto label_35dc44;
        case 0x35dc48u: goto label_35dc48;
        case 0x35dc4cu: goto label_35dc4c;
        case 0x35dc50u: goto label_35dc50;
        case 0x35dc54u: goto label_35dc54;
        case 0x35dc58u: goto label_35dc58;
        case 0x35dc5cu: goto label_35dc5c;
        case 0x35dc60u: goto label_35dc60;
        case 0x35dc64u: goto label_35dc64;
        case 0x35dc68u: goto label_35dc68;
        case 0x35dc6cu: goto label_35dc6c;
        case 0x35dc70u: goto label_35dc70;
        case 0x35dc74u: goto label_35dc74;
        case 0x35dc78u: goto label_35dc78;
        case 0x35dc7cu: goto label_35dc7c;
        case 0x35dc80u: goto label_35dc80;
        case 0x35dc84u: goto label_35dc84;
        case 0x35dc88u: goto label_35dc88;
        case 0x35dc8cu: goto label_35dc8c;
        case 0x35dc90u: goto label_35dc90;
        case 0x35dc94u: goto label_35dc94;
        case 0x35dc98u: goto label_35dc98;
        case 0x35dc9cu: goto label_35dc9c;
        case 0x35dca0u: goto label_35dca0;
        case 0x35dca4u: goto label_35dca4;
        case 0x35dca8u: goto label_35dca8;
        case 0x35dcacu: goto label_35dcac;
        case 0x35dcb0u: goto label_35dcb0;
        case 0x35dcb4u: goto label_35dcb4;
        case 0x35dcb8u: goto label_35dcb8;
        case 0x35dcbcu: goto label_35dcbc;
        case 0x35dcc0u: goto label_35dcc0;
        case 0x35dcc4u: goto label_35dcc4;
        case 0x35dcc8u: goto label_35dcc8;
        case 0x35dcccu: goto label_35dccc;
        case 0x35dcd0u: goto label_35dcd0;
        case 0x35dcd4u: goto label_35dcd4;
        case 0x35dcd8u: goto label_35dcd8;
        case 0x35dcdcu: goto label_35dcdc;
        case 0x35dce0u: goto label_35dce0;
        case 0x35dce4u: goto label_35dce4;
        case 0x35dce8u: goto label_35dce8;
        case 0x35dcecu: goto label_35dcec;
        case 0x35dcf0u: goto label_35dcf0;
        case 0x35dcf4u: goto label_35dcf4;
        case 0x35dcf8u: goto label_35dcf8;
        case 0x35dcfcu: goto label_35dcfc;
        case 0x35dd00u: goto label_35dd00;
        case 0x35dd04u: goto label_35dd04;
        case 0x35dd08u: goto label_35dd08;
        case 0x35dd0cu: goto label_35dd0c;
        case 0x35dd10u: goto label_35dd10;
        case 0x35dd14u: goto label_35dd14;
        case 0x35dd18u: goto label_35dd18;
        case 0x35dd1cu: goto label_35dd1c;
        case 0x35dd20u: goto label_35dd20;
        case 0x35dd24u: goto label_35dd24;
        case 0x35dd28u: goto label_35dd28;
        case 0x35dd2cu: goto label_35dd2c;
        case 0x35dd30u: goto label_35dd30;
        case 0x35dd34u: goto label_35dd34;
        case 0x35dd38u: goto label_35dd38;
        case 0x35dd3cu: goto label_35dd3c;
        case 0x35dd40u: goto label_35dd40;
        case 0x35dd44u: goto label_35dd44;
        case 0x35dd48u: goto label_35dd48;
        case 0x35dd4cu: goto label_35dd4c;
        case 0x35dd50u: goto label_35dd50;
        case 0x35dd54u: goto label_35dd54;
        case 0x35dd58u: goto label_35dd58;
        case 0x35dd5cu: goto label_35dd5c;
        case 0x35dd60u: goto label_35dd60;
        case 0x35dd64u: goto label_35dd64;
        case 0x35dd68u: goto label_35dd68;
        case 0x35dd6cu: goto label_35dd6c;
        case 0x35dd70u: goto label_35dd70;
        case 0x35dd74u: goto label_35dd74;
        case 0x35dd78u: goto label_35dd78;
        case 0x35dd7cu: goto label_35dd7c;
        case 0x35dd80u: goto label_35dd80;
        case 0x35dd84u: goto label_35dd84;
        case 0x35dd88u: goto label_35dd88;
        case 0x35dd8cu: goto label_35dd8c;
        case 0x35dd90u: goto label_35dd90;
        case 0x35dd94u: goto label_35dd94;
        case 0x35dd98u: goto label_35dd98;
        case 0x35dd9cu: goto label_35dd9c;
        case 0x35dda0u: goto label_35dda0;
        case 0x35dda4u: goto label_35dda4;
        case 0x35dda8u: goto label_35dda8;
        case 0x35ddacu: goto label_35ddac;
        case 0x35ddb0u: goto label_35ddb0;
        case 0x35ddb4u: goto label_35ddb4;
        case 0x35ddb8u: goto label_35ddb8;
        case 0x35ddbcu: goto label_35ddbc;
        case 0x35ddc0u: goto label_35ddc0;
        case 0x35ddc4u: goto label_35ddc4;
        case 0x35ddc8u: goto label_35ddc8;
        case 0x35ddccu: goto label_35ddcc;
        case 0x35ddd0u: goto label_35ddd0;
        case 0x35ddd4u: goto label_35ddd4;
        case 0x35ddd8u: goto label_35ddd8;
        case 0x35dddcu: goto label_35dddc;
        case 0x35dde0u: goto label_35dde0;
        case 0x35dde4u: goto label_35dde4;
        case 0x35dde8u: goto label_35dde8;
        case 0x35ddecu: goto label_35ddec;
        case 0x35ddf0u: goto label_35ddf0;
        case 0x35ddf4u: goto label_35ddf4;
        case 0x35ddf8u: goto label_35ddf8;
        case 0x35ddfcu: goto label_35ddfc;
        case 0x35de00u: goto label_35de00;
        case 0x35de04u: goto label_35de04;
        case 0x35de08u: goto label_35de08;
        case 0x35de0cu: goto label_35de0c;
        case 0x35de10u: goto label_35de10;
        case 0x35de14u: goto label_35de14;
        case 0x35de18u: goto label_35de18;
        case 0x35de1cu: goto label_35de1c;
        case 0x35de20u: goto label_35de20;
        case 0x35de24u: goto label_35de24;
        case 0x35de28u: goto label_35de28;
        case 0x35de2cu: goto label_35de2c;
        case 0x35de30u: goto label_35de30;
        case 0x35de34u: goto label_35de34;
        case 0x35de38u: goto label_35de38;
        case 0x35de3cu: goto label_35de3c;
        case 0x35de40u: goto label_35de40;
        case 0x35de44u: goto label_35de44;
        case 0x35de48u: goto label_35de48;
        case 0x35de4cu: goto label_35de4c;
        case 0x35de50u: goto label_35de50;
        case 0x35de54u: goto label_35de54;
        case 0x35de58u: goto label_35de58;
        case 0x35de5cu: goto label_35de5c;
        case 0x35de60u: goto label_35de60;
        case 0x35de64u: goto label_35de64;
        case 0x35de68u: goto label_35de68;
        case 0x35de6cu: goto label_35de6c;
        case 0x35de70u: goto label_35de70;
        case 0x35de74u: goto label_35de74;
        case 0x35de78u: goto label_35de78;
        case 0x35de7cu: goto label_35de7c;
        case 0x35de80u: goto label_35de80;
        case 0x35de84u: goto label_35de84;
        case 0x35de88u: goto label_35de88;
        case 0x35de8cu: goto label_35de8c;
        case 0x35de90u: goto label_35de90;
        case 0x35de94u: goto label_35de94;
        case 0x35de98u: goto label_35de98;
        case 0x35de9cu: goto label_35de9c;
        case 0x35dea0u: goto label_35dea0;
        case 0x35dea4u: goto label_35dea4;
        case 0x35dea8u: goto label_35dea8;
        case 0x35deacu: goto label_35deac;
        case 0x35deb0u: goto label_35deb0;
        case 0x35deb4u: goto label_35deb4;
        case 0x35deb8u: goto label_35deb8;
        case 0x35debcu: goto label_35debc;
        case 0x35dec0u: goto label_35dec0;
        case 0x35dec4u: goto label_35dec4;
        case 0x35dec8u: goto label_35dec8;
        case 0x35deccu: goto label_35decc;
        case 0x35ded0u: goto label_35ded0;
        case 0x35ded4u: goto label_35ded4;
        case 0x35ded8u: goto label_35ded8;
        case 0x35dedcu: goto label_35dedc;
        case 0x35dee0u: goto label_35dee0;
        case 0x35dee4u: goto label_35dee4;
        case 0x35dee8u: goto label_35dee8;
        case 0x35deecu: goto label_35deec;
        case 0x35def0u: goto label_35def0;
        case 0x35def4u: goto label_35def4;
        case 0x35def8u: goto label_35def8;
        case 0x35defcu: goto label_35defc;
        case 0x35df00u: goto label_35df00;
        case 0x35df04u: goto label_35df04;
        case 0x35df08u: goto label_35df08;
        case 0x35df0cu: goto label_35df0c;
        case 0x35df10u: goto label_35df10;
        case 0x35df14u: goto label_35df14;
        case 0x35df18u: goto label_35df18;
        case 0x35df1cu: goto label_35df1c;
        case 0x35df20u: goto label_35df20;
        case 0x35df24u: goto label_35df24;
        case 0x35df28u: goto label_35df28;
        case 0x35df2cu: goto label_35df2c;
        case 0x35df30u: goto label_35df30;
        case 0x35df34u: goto label_35df34;
        case 0x35df38u: goto label_35df38;
        case 0x35df3cu: goto label_35df3c;
        case 0x35df40u: goto label_35df40;
        case 0x35df44u: goto label_35df44;
        case 0x35df48u: goto label_35df48;
        case 0x35df4cu: goto label_35df4c;
        case 0x35df50u: goto label_35df50;
        case 0x35df54u: goto label_35df54;
        case 0x35df58u: goto label_35df58;
        case 0x35df5cu: goto label_35df5c;
        case 0x35df60u: goto label_35df60;
        case 0x35df64u: goto label_35df64;
        case 0x35df68u: goto label_35df68;
        case 0x35df6cu: goto label_35df6c;
        case 0x35df70u: goto label_35df70;
        case 0x35df74u: goto label_35df74;
        case 0x35df78u: goto label_35df78;
        case 0x35df7cu: goto label_35df7c;
        case 0x35df80u: goto label_35df80;
        case 0x35df84u: goto label_35df84;
        case 0x35df88u: goto label_35df88;
        case 0x35df8cu: goto label_35df8c;
        case 0x35df90u: goto label_35df90;
        case 0x35df94u: goto label_35df94;
        case 0x35df98u: goto label_35df98;
        case 0x35df9cu: goto label_35df9c;
        case 0x35dfa0u: goto label_35dfa0;
        case 0x35dfa4u: goto label_35dfa4;
        case 0x35dfa8u: goto label_35dfa8;
        case 0x35dfacu: goto label_35dfac;
        case 0x35dfb0u: goto label_35dfb0;
        case 0x35dfb4u: goto label_35dfb4;
        case 0x35dfb8u: goto label_35dfb8;
        case 0x35dfbcu: goto label_35dfbc;
        case 0x35dfc0u: goto label_35dfc0;
        case 0x35dfc4u: goto label_35dfc4;
        case 0x35dfc8u: goto label_35dfc8;
        case 0x35dfccu: goto label_35dfcc;
        case 0x35dfd0u: goto label_35dfd0;
        case 0x35dfd4u: goto label_35dfd4;
        case 0x35dfd8u: goto label_35dfd8;
        case 0x35dfdcu: goto label_35dfdc;
        case 0x35dfe0u: goto label_35dfe0;
        case 0x35dfe4u: goto label_35dfe4;
        case 0x35dfe8u: goto label_35dfe8;
        case 0x35dfecu: goto label_35dfec;
        case 0x35dff0u: goto label_35dff0;
        case 0x35dff4u: goto label_35dff4;
        case 0x35dff8u: goto label_35dff8;
        case 0x35dffcu: goto label_35dffc;
        case 0x35e000u: goto label_35e000;
        case 0x35e004u: goto label_35e004;
        case 0x35e008u: goto label_35e008;
        case 0x35e00cu: goto label_35e00c;
        case 0x35e010u: goto label_35e010;
        case 0x35e014u: goto label_35e014;
        case 0x35e018u: goto label_35e018;
        case 0x35e01cu: goto label_35e01c;
        case 0x35e020u: goto label_35e020;
        case 0x35e024u: goto label_35e024;
        case 0x35e028u: goto label_35e028;
        case 0x35e02cu: goto label_35e02c;
        case 0x35e030u: goto label_35e030;
        case 0x35e034u: goto label_35e034;
        case 0x35e038u: goto label_35e038;
        case 0x35e03cu: goto label_35e03c;
        case 0x35e040u: goto label_35e040;
        case 0x35e044u: goto label_35e044;
        case 0x35e048u: goto label_35e048;
        case 0x35e04cu: goto label_35e04c;
        case 0x35e050u: goto label_35e050;
        case 0x35e054u: goto label_35e054;
        case 0x35e058u: goto label_35e058;
        case 0x35e05cu: goto label_35e05c;
        case 0x35e060u: goto label_35e060;
        case 0x35e064u: goto label_35e064;
        case 0x35e068u: goto label_35e068;
        case 0x35e06cu: goto label_35e06c;
        case 0x35e070u: goto label_35e070;
        case 0x35e074u: goto label_35e074;
        case 0x35e078u: goto label_35e078;
        case 0x35e07cu: goto label_35e07c;
        case 0x35e080u: goto label_35e080;
        case 0x35e084u: goto label_35e084;
        case 0x35e088u: goto label_35e088;
        case 0x35e08cu: goto label_35e08c;
        case 0x35e090u: goto label_35e090;
        case 0x35e094u: goto label_35e094;
        case 0x35e098u: goto label_35e098;
        case 0x35e09cu: goto label_35e09c;
        case 0x35e0a0u: goto label_35e0a0;
        case 0x35e0a4u: goto label_35e0a4;
        case 0x35e0a8u: goto label_35e0a8;
        case 0x35e0acu: goto label_35e0ac;
        case 0x35e0b0u: goto label_35e0b0;
        case 0x35e0b4u: goto label_35e0b4;
        case 0x35e0b8u: goto label_35e0b8;
        case 0x35e0bcu: goto label_35e0bc;
        case 0x35e0c0u: goto label_35e0c0;
        case 0x35e0c4u: goto label_35e0c4;
        case 0x35e0c8u: goto label_35e0c8;
        case 0x35e0ccu: goto label_35e0cc;
        case 0x35e0d0u: goto label_35e0d0;
        case 0x35e0d4u: goto label_35e0d4;
        case 0x35e0d8u: goto label_35e0d8;
        case 0x35e0dcu: goto label_35e0dc;
        case 0x35e0e0u: goto label_35e0e0;
        case 0x35e0e4u: goto label_35e0e4;
        case 0x35e0e8u: goto label_35e0e8;
        case 0x35e0ecu: goto label_35e0ec;
        case 0x35e0f0u: goto label_35e0f0;
        case 0x35e0f4u: goto label_35e0f4;
        case 0x35e0f8u: goto label_35e0f8;
        case 0x35e0fcu: goto label_35e0fc;
        case 0x35e100u: goto label_35e100;
        case 0x35e104u: goto label_35e104;
        case 0x35e108u: goto label_35e108;
        case 0x35e10cu: goto label_35e10c;
        case 0x35e110u: goto label_35e110;
        case 0x35e114u: goto label_35e114;
        case 0x35e118u: goto label_35e118;
        case 0x35e11cu: goto label_35e11c;
        case 0x35e120u: goto label_35e120;
        case 0x35e124u: goto label_35e124;
        case 0x35e128u: goto label_35e128;
        case 0x35e12cu: goto label_35e12c;
        case 0x35e130u: goto label_35e130;
        case 0x35e134u: goto label_35e134;
        case 0x35e138u: goto label_35e138;
        case 0x35e13cu: goto label_35e13c;
        case 0x35e140u: goto label_35e140;
        case 0x35e144u: goto label_35e144;
        case 0x35e148u: goto label_35e148;
        case 0x35e14cu: goto label_35e14c;
        case 0x35e150u: goto label_35e150;
        case 0x35e154u: goto label_35e154;
        case 0x35e158u: goto label_35e158;
        case 0x35e15cu: goto label_35e15c;
        case 0x35e160u: goto label_35e160;
        case 0x35e164u: goto label_35e164;
        case 0x35e168u: goto label_35e168;
        case 0x35e16cu: goto label_35e16c;
        case 0x35e170u: goto label_35e170;
        case 0x35e174u: goto label_35e174;
        case 0x35e178u: goto label_35e178;
        case 0x35e17cu: goto label_35e17c;
        case 0x35e180u: goto label_35e180;
        case 0x35e184u: goto label_35e184;
        case 0x35e188u: goto label_35e188;
        case 0x35e18cu: goto label_35e18c;
        case 0x35e190u: goto label_35e190;
        case 0x35e194u: goto label_35e194;
        case 0x35e198u: goto label_35e198;
        case 0x35e19cu: goto label_35e19c;
        case 0x35e1a0u: goto label_35e1a0;
        case 0x35e1a4u: goto label_35e1a4;
        case 0x35e1a8u: goto label_35e1a8;
        case 0x35e1acu: goto label_35e1ac;
        case 0x35e1b0u: goto label_35e1b0;
        case 0x35e1b4u: goto label_35e1b4;
        case 0x35e1b8u: goto label_35e1b8;
        case 0x35e1bcu: goto label_35e1bc;
        case 0x35e1c0u: goto label_35e1c0;
        case 0x35e1c4u: goto label_35e1c4;
        case 0x35e1c8u: goto label_35e1c8;
        case 0x35e1ccu: goto label_35e1cc;
        case 0x35e1d0u: goto label_35e1d0;
        case 0x35e1d4u: goto label_35e1d4;
        case 0x35e1d8u: goto label_35e1d8;
        case 0x35e1dcu: goto label_35e1dc;
        case 0x35e1e0u: goto label_35e1e0;
        case 0x35e1e4u: goto label_35e1e4;
        case 0x35e1e8u: goto label_35e1e8;
        case 0x35e1ecu: goto label_35e1ec;
        case 0x35e1f0u: goto label_35e1f0;
        case 0x35e1f4u: goto label_35e1f4;
        case 0x35e1f8u: goto label_35e1f8;
        case 0x35e1fcu: goto label_35e1fc;
        case 0x35e200u: goto label_35e200;
        case 0x35e204u: goto label_35e204;
        case 0x35e208u: goto label_35e208;
        case 0x35e20cu: goto label_35e20c;
        case 0x35e210u: goto label_35e210;
        case 0x35e214u: goto label_35e214;
        case 0x35e218u: goto label_35e218;
        case 0x35e21cu: goto label_35e21c;
        case 0x35e220u: goto label_35e220;
        case 0x35e224u: goto label_35e224;
        case 0x35e228u: goto label_35e228;
        case 0x35e22cu: goto label_35e22c;
        case 0x35e230u: goto label_35e230;
        case 0x35e234u: goto label_35e234;
        case 0x35e238u: goto label_35e238;
        case 0x35e23cu: goto label_35e23c;
        case 0x35e240u: goto label_35e240;
        case 0x35e244u: goto label_35e244;
        case 0x35e248u: goto label_35e248;
        case 0x35e24cu: goto label_35e24c;
        case 0x35e250u: goto label_35e250;
        case 0x35e254u: goto label_35e254;
        case 0x35e258u: goto label_35e258;
        case 0x35e25cu: goto label_35e25c;
        case 0x35e260u: goto label_35e260;
        case 0x35e264u: goto label_35e264;
        case 0x35e268u: goto label_35e268;
        case 0x35e26cu: goto label_35e26c;
        case 0x35e270u: goto label_35e270;
        case 0x35e274u: goto label_35e274;
        case 0x35e278u: goto label_35e278;
        case 0x35e27cu: goto label_35e27c;
        case 0x35e280u: goto label_35e280;
        case 0x35e284u: goto label_35e284;
        case 0x35e288u: goto label_35e288;
        case 0x35e28cu: goto label_35e28c;
        case 0x35e290u: goto label_35e290;
        case 0x35e294u: goto label_35e294;
        case 0x35e298u: goto label_35e298;
        case 0x35e29cu: goto label_35e29c;
        case 0x35e2a0u: goto label_35e2a0;
        case 0x35e2a4u: goto label_35e2a4;
        case 0x35e2a8u: goto label_35e2a8;
        case 0x35e2acu: goto label_35e2ac;
        case 0x35e2b0u: goto label_35e2b0;
        case 0x35e2b4u: goto label_35e2b4;
        case 0x35e2b8u: goto label_35e2b8;
        case 0x35e2bcu: goto label_35e2bc;
        case 0x35e2c0u: goto label_35e2c0;
        case 0x35e2c4u: goto label_35e2c4;
        case 0x35e2c8u: goto label_35e2c8;
        case 0x35e2ccu: goto label_35e2cc;
        case 0x35e2d0u: goto label_35e2d0;
        case 0x35e2d4u: goto label_35e2d4;
        case 0x35e2d8u: goto label_35e2d8;
        case 0x35e2dcu: goto label_35e2dc;
        case 0x35e2e0u: goto label_35e2e0;
        case 0x35e2e4u: goto label_35e2e4;
        case 0x35e2e8u: goto label_35e2e8;
        case 0x35e2ecu: goto label_35e2ec;
        case 0x35e2f0u: goto label_35e2f0;
        case 0x35e2f4u: goto label_35e2f4;
        case 0x35e2f8u: goto label_35e2f8;
        case 0x35e2fcu: goto label_35e2fc;
        case 0x35e300u: goto label_35e300;
        case 0x35e304u: goto label_35e304;
        case 0x35e308u: goto label_35e308;
        case 0x35e30cu: goto label_35e30c;
        case 0x35e310u: goto label_35e310;
        case 0x35e314u: goto label_35e314;
        case 0x35e318u: goto label_35e318;
        case 0x35e31cu: goto label_35e31c;
        case 0x35e320u: goto label_35e320;
        case 0x35e324u: goto label_35e324;
        case 0x35e328u: goto label_35e328;
        case 0x35e32cu: goto label_35e32c;
        case 0x35e330u: goto label_35e330;
        case 0x35e334u: goto label_35e334;
        case 0x35e338u: goto label_35e338;
        case 0x35e33cu: goto label_35e33c;
        case 0x35e340u: goto label_35e340;
        case 0x35e344u: goto label_35e344;
        case 0x35e348u: goto label_35e348;
        case 0x35e34cu: goto label_35e34c;
        case 0x35e350u: goto label_35e350;
        case 0x35e354u: goto label_35e354;
        case 0x35e358u: goto label_35e358;
        case 0x35e35cu: goto label_35e35c;
        case 0x35e360u: goto label_35e360;
        case 0x35e364u: goto label_35e364;
        case 0x35e368u: goto label_35e368;
        case 0x35e36cu: goto label_35e36c;
        case 0x35e370u: goto label_35e370;
        case 0x35e374u: goto label_35e374;
        case 0x35e378u: goto label_35e378;
        case 0x35e37cu: goto label_35e37c;
        case 0x35e380u: goto label_35e380;
        case 0x35e384u: goto label_35e384;
        case 0x35e388u: goto label_35e388;
        case 0x35e38cu: goto label_35e38c;
        case 0x35e390u: goto label_35e390;
        case 0x35e394u: goto label_35e394;
        case 0x35e398u: goto label_35e398;
        case 0x35e39cu: goto label_35e39c;
        case 0x35e3a0u: goto label_35e3a0;
        case 0x35e3a4u: goto label_35e3a4;
        case 0x35e3a8u: goto label_35e3a8;
        case 0x35e3acu: goto label_35e3ac;
        case 0x35e3b0u: goto label_35e3b0;
        case 0x35e3b4u: goto label_35e3b4;
        case 0x35e3b8u: goto label_35e3b8;
        case 0x35e3bcu: goto label_35e3bc;
        case 0x35e3c0u: goto label_35e3c0;
        case 0x35e3c4u: goto label_35e3c4;
        case 0x35e3c8u: goto label_35e3c8;
        case 0x35e3ccu: goto label_35e3cc;
        case 0x35e3d0u: goto label_35e3d0;
        case 0x35e3d4u: goto label_35e3d4;
        case 0x35e3d8u: goto label_35e3d8;
        case 0x35e3dcu: goto label_35e3dc;
        case 0x35e3e0u: goto label_35e3e0;
        case 0x35e3e4u: goto label_35e3e4;
        case 0x35e3e8u: goto label_35e3e8;
        case 0x35e3ecu: goto label_35e3ec;
        case 0x35e3f0u: goto label_35e3f0;
        case 0x35e3f4u: goto label_35e3f4;
        case 0x35e3f8u: goto label_35e3f8;
        case 0x35e3fcu: goto label_35e3fc;
        case 0x35e400u: goto label_35e400;
        case 0x35e404u: goto label_35e404;
        case 0x35e408u: goto label_35e408;
        case 0x35e40cu: goto label_35e40c;
        case 0x35e410u: goto label_35e410;
        case 0x35e414u: goto label_35e414;
        case 0x35e418u: goto label_35e418;
        case 0x35e41cu: goto label_35e41c;
        case 0x35e420u: goto label_35e420;
        case 0x35e424u: goto label_35e424;
        case 0x35e428u: goto label_35e428;
        case 0x35e42cu: goto label_35e42c;
        case 0x35e430u: goto label_35e430;
        case 0x35e434u: goto label_35e434;
        case 0x35e438u: goto label_35e438;
        case 0x35e43cu: goto label_35e43c;
        case 0x35e440u: goto label_35e440;
        case 0x35e444u: goto label_35e444;
        case 0x35e448u: goto label_35e448;
        case 0x35e44cu: goto label_35e44c;
        case 0x35e450u: goto label_35e450;
        case 0x35e454u: goto label_35e454;
        case 0x35e458u: goto label_35e458;
        case 0x35e45cu: goto label_35e45c;
        case 0x35e460u: goto label_35e460;
        case 0x35e464u: goto label_35e464;
        case 0x35e468u: goto label_35e468;
        case 0x35e46cu: goto label_35e46c;
        case 0x35e470u: goto label_35e470;
        case 0x35e474u: goto label_35e474;
        case 0x35e478u: goto label_35e478;
        case 0x35e47cu: goto label_35e47c;
        case 0x35e480u: goto label_35e480;
        case 0x35e484u: goto label_35e484;
        case 0x35e488u: goto label_35e488;
        case 0x35e48cu: goto label_35e48c;
        case 0x35e490u: goto label_35e490;
        case 0x35e494u: goto label_35e494;
        case 0x35e498u: goto label_35e498;
        case 0x35e49cu: goto label_35e49c;
        case 0x35e4a0u: goto label_35e4a0;
        case 0x35e4a4u: goto label_35e4a4;
        case 0x35e4a8u: goto label_35e4a8;
        case 0x35e4acu: goto label_35e4ac;
        case 0x35e4b0u: goto label_35e4b0;
        case 0x35e4b4u: goto label_35e4b4;
        case 0x35e4b8u: goto label_35e4b8;
        case 0x35e4bcu: goto label_35e4bc;
        case 0x35e4c0u: goto label_35e4c0;
        case 0x35e4c4u: goto label_35e4c4;
        case 0x35e4c8u: goto label_35e4c8;
        case 0x35e4ccu: goto label_35e4cc;
        case 0x35e4d0u: goto label_35e4d0;
        case 0x35e4d4u: goto label_35e4d4;
        case 0x35e4d8u: goto label_35e4d8;
        case 0x35e4dcu: goto label_35e4dc;
        case 0x35e4e0u: goto label_35e4e0;
        case 0x35e4e4u: goto label_35e4e4;
        case 0x35e4e8u: goto label_35e4e8;
        case 0x35e4ecu: goto label_35e4ec;
        case 0x35e4f0u: goto label_35e4f0;
        case 0x35e4f4u: goto label_35e4f4;
        case 0x35e4f8u: goto label_35e4f8;
        case 0x35e4fcu: goto label_35e4fc;
        case 0x35e500u: goto label_35e500;
        case 0x35e504u: goto label_35e504;
        case 0x35e508u: goto label_35e508;
        case 0x35e50cu: goto label_35e50c;
        case 0x35e510u: goto label_35e510;
        case 0x35e514u: goto label_35e514;
        case 0x35e518u: goto label_35e518;
        case 0x35e51cu: goto label_35e51c;
        case 0x35e520u: goto label_35e520;
        case 0x35e524u: goto label_35e524;
        case 0x35e528u: goto label_35e528;
        case 0x35e52cu: goto label_35e52c;
        case 0x35e530u: goto label_35e530;
        case 0x35e534u: goto label_35e534;
        case 0x35e538u: goto label_35e538;
        case 0x35e53cu: goto label_35e53c;
        case 0x35e540u: goto label_35e540;
        case 0x35e544u: goto label_35e544;
        case 0x35e548u: goto label_35e548;
        case 0x35e54cu: goto label_35e54c;
        case 0x35e550u: goto label_35e550;
        case 0x35e554u: goto label_35e554;
        case 0x35e558u: goto label_35e558;
        case 0x35e55cu: goto label_35e55c;
        case 0x35e560u: goto label_35e560;
        case 0x35e564u: goto label_35e564;
        case 0x35e568u: goto label_35e568;
        case 0x35e56cu: goto label_35e56c;
        case 0x35e570u: goto label_35e570;
        case 0x35e574u: goto label_35e574;
        case 0x35e578u: goto label_35e578;
        case 0x35e57cu: goto label_35e57c;
        case 0x35e580u: goto label_35e580;
        case 0x35e584u: goto label_35e584;
        case 0x35e588u: goto label_35e588;
        case 0x35e58cu: goto label_35e58c;
        case 0x35e590u: goto label_35e590;
        case 0x35e594u: goto label_35e594;
        case 0x35e598u: goto label_35e598;
        case 0x35e59cu: goto label_35e59c;
        case 0x35e5a0u: goto label_35e5a0;
        case 0x35e5a4u: goto label_35e5a4;
        case 0x35e5a8u: goto label_35e5a8;
        case 0x35e5acu: goto label_35e5ac;
        case 0x35e5b0u: goto label_35e5b0;
        case 0x35e5b4u: goto label_35e5b4;
        case 0x35e5b8u: goto label_35e5b8;
        case 0x35e5bcu: goto label_35e5bc;
        case 0x35e5c0u: goto label_35e5c0;
        case 0x35e5c4u: goto label_35e5c4;
        case 0x35e5c8u: goto label_35e5c8;
        case 0x35e5ccu: goto label_35e5cc;
        case 0x35e5d0u: goto label_35e5d0;
        case 0x35e5d4u: goto label_35e5d4;
        case 0x35e5d8u: goto label_35e5d8;
        case 0x35e5dcu: goto label_35e5dc;
        case 0x35e5e0u: goto label_35e5e0;
        case 0x35e5e4u: goto label_35e5e4;
        case 0x35e5e8u: goto label_35e5e8;
        case 0x35e5ecu: goto label_35e5ec;
        case 0x35e5f0u: goto label_35e5f0;
        case 0x35e5f4u: goto label_35e5f4;
        case 0x35e5f8u: goto label_35e5f8;
        case 0x35e5fcu: goto label_35e5fc;
        case 0x35e600u: goto label_35e600;
        case 0x35e604u: goto label_35e604;
        case 0x35e608u: goto label_35e608;
        case 0x35e60cu: goto label_35e60c;
        case 0x35e610u: goto label_35e610;
        case 0x35e614u: goto label_35e614;
        case 0x35e618u: goto label_35e618;
        case 0x35e61cu: goto label_35e61c;
        case 0x35e620u: goto label_35e620;
        case 0x35e624u: goto label_35e624;
        case 0x35e628u: goto label_35e628;
        case 0x35e62cu: goto label_35e62c;
        case 0x35e630u: goto label_35e630;
        case 0x35e634u: goto label_35e634;
        case 0x35e638u: goto label_35e638;
        case 0x35e63cu: goto label_35e63c;
        case 0x35e640u: goto label_35e640;
        case 0x35e644u: goto label_35e644;
        case 0x35e648u: goto label_35e648;
        case 0x35e64cu: goto label_35e64c;
        case 0x35e650u: goto label_35e650;
        case 0x35e654u: goto label_35e654;
        case 0x35e658u: goto label_35e658;
        case 0x35e65cu: goto label_35e65c;
        case 0x35e660u: goto label_35e660;
        case 0x35e664u: goto label_35e664;
        case 0x35e668u: goto label_35e668;
        case 0x35e66cu: goto label_35e66c;
        case 0x35e670u: goto label_35e670;
        case 0x35e674u: goto label_35e674;
        case 0x35e678u: goto label_35e678;
        case 0x35e67cu: goto label_35e67c;
        case 0x35e680u: goto label_35e680;
        case 0x35e684u: goto label_35e684;
        case 0x35e688u: goto label_35e688;
        case 0x35e68cu: goto label_35e68c;
        case 0x35e690u: goto label_35e690;
        case 0x35e694u: goto label_35e694;
        case 0x35e698u: goto label_35e698;
        case 0x35e69cu: goto label_35e69c;
        case 0x35e6a0u: goto label_35e6a0;
        case 0x35e6a4u: goto label_35e6a4;
        case 0x35e6a8u: goto label_35e6a8;
        case 0x35e6acu: goto label_35e6ac;
        case 0x35e6b0u: goto label_35e6b0;
        case 0x35e6b4u: goto label_35e6b4;
        case 0x35e6b8u: goto label_35e6b8;
        case 0x35e6bcu: goto label_35e6bc;
        case 0x35e6c0u: goto label_35e6c0;
        case 0x35e6c4u: goto label_35e6c4;
        case 0x35e6c8u: goto label_35e6c8;
        case 0x35e6ccu: goto label_35e6cc;
        case 0x35e6d0u: goto label_35e6d0;
        case 0x35e6d4u: goto label_35e6d4;
        case 0x35e6d8u: goto label_35e6d8;
        case 0x35e6dcu: goto label_35e6dc;
        case 0x35e6e0u: goto label_35e6e0;
        case 0x35e6e4u: goto label_35e6e4;
        case 0x35e6e8u: goto label_35e6e8;
        case 0x35e6ecu: goto label_35e6ec;
        case 0x35e6f0u: goto label_35e6f0;
        case 0x35e6f4u: goto label_35e6f4;
        case 0x35e6f8u: goto label_35e6f8;
        case 0x35e6fcu: goto label_35e6fc;
        case 0x35e700u: goto label_35e700;
        case 0x35e704u: goto label_35e704;
        case 0x35e708u: goto label_35e708;
        case 0x35e70cu: goto label_35e70c;
        case 0x35e710u: goto label_35e710;
        case 0x35e714u: goto label_35e714;
        case 0x35e718u: goto label_35e718;
        case 0x35e71cu: goto label_35e71c;
        case 0x35e720u: goto label_35e720;
        case 0x35e724u: goto label_35e724;
        case 0x35e728u: goto label_35e728;
        case 0x35e72cu: goto label_35e72c;
        case 0x35e730u: goto label_35e730;
        case 0x35e734u: goto label_35e734;
        case 0x35e738u: goto label_35e738;
        case 0x35e73cu: goto label_35e73c;
        case 0x35e740u: goto label_35e740;
        case 0x35e744u: goto label_35e744;
        case 0x35e748u: goto label_35e748;
        case 0x35e74cu: goto label_35e74c;
        case 0x35e750u: goto label_35e750;
        case 0x35e754u: goto label_35e754;
        case 0x35e758u: goto label_35e758;
        case 0x35e75cu: goto label_35e75c;
        case 0x35e760u: goto label_35e760;
        case 0x35e764u: goto label_35e764;
        case 0x35e768u: goto label_35e768;
        case 0x35e76cu: goto label_35e76c;
        case 0x35e770u: goto label_35e770;
        case 0x35e774u: goto label_35e774;
        case 0x35e778u: goto label_35e778;
        case 0x35e77cu: goto label_35e77c;
        case 0x35e780u: goto label_35e780;
        case 0x35e784u: goto label_35e784;
        case 0x35e788u: goto label_35e788;
        case 0x35e78cu: goto label_35e78c;
        case 0x35e790u: goto label_35e790;
        case 0x35e794u: goto label_35e794;
        case 0x35e798u: goto label_35e798;
        case 0x35e79cu: goto label_35e79c;
        case 0x35e7a0u: goto label_35e7a0;
        case 0x35e7a4u: goto label_35e7a4;
        case 0x35e7a8u: goto label_35e7a8;
        case 0x35e7acu: goto label_35e7ac;
        case 0x35e7b0u: goto label_35e7b0;
        case 0x35e7b4u: goto label_35e7b4;
        case 0x35e7b8u: goto label_35e7b8;
        case 0x35e7bcu: goto label_35e7bc;
        case 0x35e7c0u: goto label_35e7c0;
        case 0x35e7c4u: goto label_35e7c4;
        case 0x35e7c8u: goto label_35e7c8;
        case 0x35e7ccu: goto label_35e7cc;
        case 0x35e7d0u: goto label_35e7d0;
        case 0x35e7d4u: goto label_35e7d4;
        case 0x35e7d8u: goto label_35e7d8;
        case 0x35e7dcu: goto label_35e7dc;
        case 0x35e7e0u: goto label_35e7e0;
        case 0x35e7e4u: goto label_35e7e4;
        case 0x35e7e8u: goto label_35e7e8;
        case 0x35e7ecu: goto label_35e7ec;
        case 0x35e7f0u: goto label_35e7f0;
        case 0x35e7f4u: goto label_35e7f4;
        case 0x35e7f8u: goto label_35e7f8;
        case 0x35e7fcu: goto label_35e7fc;
        case 0x35e800u: goto label_35e800;
        case 0x35e804u: goto label_35e804;
        case 0x35e808u: goto label_35e808;
        case 0x35e80cu: goto label_35e80c;
        case 0x35e810u: goto label_35e810;
        case 0x35e814u: goto label_35e814;
        case 0x35e818u: goto label_35e818;
        case 0x35e81cu: goto label_35e81c;
        case 0x35e820u: goto label_35e820;
        case 0x35e824u: goto label_35e824;
        case 0x35e828u: goto label_35e828;
        case 0x35e82cu: goto label_35e82c;
        case 0x35e830u: goto label_35e830;
        case 0x35e834u: goto label_35e834;
        case 0x35e838u: goto label_35e838;
        case 0x35e83cu: goto label_35e83c;
        case 0x35e840u: goto label_35e840;
        case 0x35e844u: goto label_35e844;
        case 0x35e848u: goto label_35e848;
        case 0x35e84cu: goto label_35e84c;
        case 0x35e850u: goto label_35e850;
        case 0x35e854u: goto label_35e854;
        case 0x35e858u: goto label_35e858;
        case 0x35e85cu: goto label_35e85c;
        case 0x35e860u: goto label_35e860;
        case 0x35e864u: goto label_35e864;
        case 0x35e868u: goto label_35e868;
        case 0x35e86cu: goto label_35e86c;
        case 0x35e870u: goto label_35e870;
        case 0x35e874u: goto label_35e874;
        case 0x35e878u: goto label_35e878;
        case 0x35e87cu: goto label_35e87c;
        case 0x35e880u: goto label_35e880;
        case 0x35e884u: goto label_35e884;
        case 0x35e888u: goto label_35e888;
        case 0x35e88cu: goto label_35e88c;
        case 0x35e890u: goto label_35e890;
        case 0x35e894u: goto label_35e894;
        case 0x35e898u: goto label_35e898;
        case 0x35e89cu: goto label_35e89c;
        case 0x35e8a0u: goto label_35e8a0;
        case 0x35e8a4u: goto label_35e8a4;
        case 0x35e8a8u: goto label_35e8a8;
        case 0x35e8acu: goto label_35e8ac;
        case 0x35e8b0u: goto label_35e8b0;
        case 0x35e8b4u: goto label_35e8b4;
        case 0x35e8b8u: goto label_35e8b8;
        case 0x35e8bcu: goto label_35e8bc;
        case 0x35e8c0u: goto label_35e8c0;
        case 0x35e8c4u: goto label_35e8c4;
        case 0x35e8c8u: goto label_35e8c8;
        case 0x35e8ccu: goto label_35e8cc;
        case 0x35e8d0u: goto label_35e8d0;
        case 0x35e8d4u: goto label_35e8d4;
        case 0x35e8d8u: goto label_35e8d8;
        case 0x35e8dcu: goto label_35e8dc;
        case 0x35e8e0u: goto label_35e8e0;
        case 0x35e8e4u: goto label_35e8e4;
        case 0x35e8e8u: goto label_35e8e8;
        case 0x35e8ecu: goto label_35e8ec;
        case 0x35e8f0u: goto label_35e8f0;
        case 0x35e8f4u: goto label_35e8f4;
        case 0x35e8f8u: goto label_35e8f8;
        case 0x35e8fcu: goto label_35e8fc;
        case 0x35e900u: goto label_35e900;
        case 0x35e904u: goto label_35e904;
        case 0x35e908u: goto label_35e908;
        case 0x35e90cu: goto label_35e90c;
        case 0x35e910u: goto label_35e910;
        case 0x35e914u: goto label_35e914;
        case 0x35e918u: goto label_35e918;
        case 0x35e91cu: goto label_35e91c;
        case 0x35e920u: goto label_35e920;
        case 0x35e924u: goto label_35e924;
        case 0x35e928u: goto label_35e928;
        case 0x35e92cu: goto label_35e92c;
        case 0x35e930u: goto label_35e930;
        case 0x35e934u: goto label_35e934;
        case 0x35e938u: goto label_35e938;
        case 0x35e93cu: goto label_35e93c;
        case 0x35e940u: goto label_35e940;
        case 0x35e944u: goto label_35e944;
        case 0x35e948u: goto label_35e948;
        case 0x35e94cu: goto label_35e94c;
        case 0x35e950u: goto label_35e950;
        case 0x35e954u: goto label_35e954;
        case 0x35e958u: goto label_35e958;
        case 0x35e95cu: goto label_35e95c;
        case 0x35e960u: goto label_35e960;
        case 0x35e964u: goto label_35e964;
        case 0x35e968u: goto label_35e968;
        case 0x35e96cu: goto label_35e96c;
        case 0x35e970u: goto label_35e970;
        case 0x35e974u: goto label_35e974;
        case 0x35e978u: goto label_35e978;
        case 0x35e97cu: goto label_35e97c;
        case 0x35e980u: goto label_35e980;
        case 0x35e984u: goto label_35e984;
        case 0x35e988u: goto label_35e988;
        case 0x35e98cu: goto label_35e98c;
        case 0x35e990u: goto label_35e990;
        case 0x35e994u: goto label_35e994;
        case 0x35e998u: goto label_35e998;
        case 0x35e99cu: goto label_35e99c;
        case 0x35e9a0u: goto label_35e9a0;
        case 0x35e9a4u: goto label_35e9a4;
        case 0x35e9a8u: goto label_35e9a8;
        case 0x35e9acu: goto label_35e9ac;
        case 0x35e9b0u: goto label_35e9b0;
        case 0x35e9b4u: goto label_35e9b4;
        case 0x35e9b8u: goto label_35e9b8;
        case 0x35e9bcu: goto label_35e9bc;
        case 0x35e9c0u: goto label_35e9c0;
        case 0x35e9c4u: goto label_35e9c4;
        case 0x35e9c8u: goto label_35e9c8;
        case 0x35e9ccu: goto label_35e9cc;
        case 0x35e9d0u: goto label_35e9d0;
        case 0x35e9d4u: goto label_35e9d4;
        case 0x35e9d8u: goto label_35e9d8;
        case 0x35e9dcu: goto label_35e9dc;
        case 0x35e9e0u: goto label_35e9e0;
        case 0x35e9e4u: goto label_35e9e4;
        case 0x35e9e8u: goto label_35e9e8;
        case 0x35e9ecu: goto label_35e9ec;
        case 0x35e9f0u: goto label_35e9f0;
        case 0x35e9f4u: goto label_35e9f4;
        case 0x35e9f8u: goto label_35e9f8;
        case 0x35e9fcu: goto label_35e9fc;
        case 0x35ea00u: goto label_35ea00;
        case 0x35ea04u: goto label_35ea04;
        case 0x35ea08u: goto label_35ea08;
        case 0x35ea0cu: goto label_35ea0c;
        case 0x35ea10u: goto label_35ea10;
        case 0x35ea14u: goto label_35ea14;
        case 0x35ea18u: goto label_35ea18;
        case 0x35ea1cu: goto label_35ea1c;
        case 0x35ea20u: goto label_35ea20;
        case 0x35ea24u: goto label_35ea24;
        case 0x35ea28u: goto label_35ea28;
        case 0x35ea2cu: goto label_35ea2c;
        case 0x35ea30u: goto label_35ea30;
        case 0x35ea34u: goto label_35ea34;
        case 0x35ea38u: goto label_35ea38;
        case 0x35ea3cu: goto label_35ea3c;
        case 0x35ea40u: goto label_35ea40;
        case 0x35ea44u: goto label_35ea44;
        case 0x35ea48u: goto label_35ea48;
        case 0x35ea4cu: goto label_35ea4c;
        case 0x35ea50u: goto label_35ea50;
        case 0x35ea54u: goto label_35ea54;
        case 0x35ea58u: goto label_35ea58;
        case 0x35ea5cu: goto label_35ea5c;
        case 0x35ea60u: goto label_35ea60;
        case 0x35ea64u: goto label_35ea64;
        case 0x35ea68u: goto label_35ea68;
        case 0x35ea6cu: goto label_35ea6c;
        case 0x35ea70u: goto label_35ea70;
        case 0x35ea74u: goto label_35ea74;
        case 0x35ea78u: goto label_35ea78;
        case 0x35ea7cu: goto label_35ea7c;
        case 0x35ea80u: goto label_35ea80;
        case 0x35ea84u: goto label_35ea84;
        case 0x35ea88u: goto label_35ea88;
        case 0x35ea8cu: goto label_35ea8c;
        case 0x35ea90u: goto label_35ea90;
        case 0x35ea94u: goto label_35ea94;
        case 0x35ea98u: goto label_35ea98;
        case 0x35ea9cu: goto label_35ea9c;
        case 0x35eaa0u: goto label_35eaa0;
        case 0x35eaa4u: goto label_35eaa4;
        case 0x35eaa8u: goto label_35eaa8;
        case 0x35eaacu: goto label_35eaac;
        case 0x35eab0u: goto label_35eab0;
        case 0x35eab4u: goto label_35eab4;
        case 0x35eab8u: goto label_35eab8;
        case 0x35eabcu: goto label_35eabc;
        case 0x35eac0u: goto label_35eac0;
        case 0x35eac4u: goto label_35eac4;
        case 0x35eac8u: goto label_35eac8;
        case 0x35eaccu: goto label_35eacc;
        case 0x35ead0u: goto label_35ead0;
        case 0x35ead4u: goto label_35ead4;
        case 0x35ead8u: goto label_35ead8;
        case 0x35eadcu: goto label_35eadc;
        case 0x35eae0u: goto label_35eae0;
        case 0x35eae4u: goto label_35eae4;
        case 0x35eae8u: goto label_35eae8;
        case 0x35eaecu: goto label_35eaec;
        case 0x35eaf0u: goto label_35eaf0;
        case 0x35eaf4u: goto label_35eaf4;
        case 0x35eaf8u: goto label_35eaf8;
        case 0x35eafcu: goto label_35eafc;
        case 0x35eb00u: goto label_35eb00;
        case 0x35eb04u: goto label_35eb04;
        case 0x35eb08u: goto label_35eb08;
        case 0x35eb0cu: goto label_35eb0c;
        case 0x35eb10u: goto label_35eb10;
        case 0x35eb14u: goto label_35eb14;
        case 0x35eb18u: goto label_35eb18;
        case 0x35eb1cu: goto label_35eb1c;
        case 0x35eb20u: goto label_35eb20;
        case 0x35eb24u: goto label_35eb24;
        case 0x35eb28u: goto label_35eb28;
        case 0x35eb2cu: goto label_35eb2c;
        case 0x35eb30u: goto label_35eb30;
        case 0x35eb34u: goto label_35eb34;
        case 0x35eb38u: goto label_35eb38;
        case 0x35eb3cu: goto label_35eb3c;
        case 0x35eb40u: goto label_35eb40;
        case 0x35eb44u: goto label_35eb44;
        case 0x35eb48u: goto label_35eb48;
        case 0x35eb4cu: goto label_35eb4c;
        case 0x35eb50u: goto label_35eb50;
        case 0x35eb54u: goto label_35eb54;
        case 0x35eb58u: goto label_35eb58;
        case 0x35eb5cu: goto label_35eb5c;
        case 0x35eb60u: goto label_35eb60;
        case 0x35eb64u: goto label_35eb64;
        case 0x35eb68u: goto label_35eb68;
        case 0x35eb6cu: goto label_35eb6c;
        case 0x35eb70u: goto label_35eb70;
        case 0x35eb74u: goto label_35eb74;
        case 0x35eb78u: goto label_35eb78;
        case 0x35eb7cu: goto label_35eb7c;
        case 0x35eb80u: goto label_35eb80;
        case 0x35eb84u: goto label_35eb84;
        case 0x35eb88u: goto label_35eb88;
        case 0x35eb8cu: goto label_35eb8c;
        case 0x35eb90u: goto label_35eb90;
        case 0x35eb94u: goto label_35eb94;
        case 0x35eb98u: goto label_35eb98;
        case 0x35eb9cu: goto label_35eb9c;
        case 0x35eba0u: goto label_35eba0;
        case 0x35eba4u: goto label_35eba4;
        case 0x35eba8u: goto label_35eba8;
        case 0x35ebacu: goto label_35ebac;
        case 0x35ebb0u: goto label_35ebb0;
        case 0x35ebb4u: goto label_35ebb4;
        case 0x35ebb8u: goto label_35ebb8;
        case 0x35ebbcu: goto label_35ebbc;
        case 0x35ebc0u: goto label_35ebc0;
        case 0x35ebc4u: goto label_35ebc4;
        case 0x35ebc8u: goto label_35ebc8;
        case 0x35ebccu: goto label_35ebcc;
        case 0x35ebd0u: goto label_35ebd0;
        case 0x35ebd4u: goto label_35ebd4;
        case 0x35ebd8u: goto label_35ebd8;
        case 0x35ebdcu: goto label_35ebdc;
        case 0x35ebe0u: goto label_35ebe0;
        case 0x35ebe4u: goto label_35ebe4;
        case 0x35ebe8u: goto label_35ebe8;
        case 0x35ebecu: goto label_35ebec;
        case 0x35ebf0u: goto label_35ebf0;
        case 0x35ebf4u: goto label_35ebf4;
        case 0x35ebf8u: goto label_35ebf8;
        case 0x35ebfcu: goto label_35ebfc;
        case 0x35ec00u: goto label_35ec00;
        case 0x35ec04u: goto label_35ec04;
        case 0x35ec08u: goto label_35ec08;
        case 0x35ec0cu: goto label_35ec0c;
        case 0x35ec10u: goto label_35ec10;
        case 0x35ec14u: goto label_35ec14;
        case 0x35ec18u: goto label_35ec18;
        case 0x35ec1cu: goto label_35ec1c;
        case 0x35ec20u: goto label_35ec20;
        case 0x35ec24u: goto label_35ec24;
        case 0x35ec28u: goto label_35ec28;
        case 0x35ec2cu: goto label_35ec2c;
        case 0x35ec30u: goto label_35ec30;
        case 0x35ec34u: goto label_35ec34;
        case 0x35ec38u: goto label_35ec38;
        case 0x35ec3cu: goto label_35ec3c;
        case 0x35ec40u: goto label_35ec40;
        case 0x35ec44u: goto label_35ec44;
        case 0x35ec48u: goto label_35ec48;
        case 0x35ec4cu: goto label_35ec4c;
        case 0x35ec50u: goto label_35ec50;
        case 0x35ec54u: goto label_35ec54;
        case 0x35ec58u: goto label_35ec58;
        case 0x35ec5cu: goto label_35ec5c;
        case 0x35ec60u: goto label_35ec60;
        case 0x35ec64u: goto label_35ec64;
        case 0x35ec68u: goto label_35ec68;
        case 0x35ec6cu: goto label_35ec6c;
        case 0x35ec70u: goto label_35ec70;
        case 0x35ec74u: goto label_35ec74;
        case 0x35ec78u: goto label_35ec78;
        case 0x35ec7cu: goto label_35ec7c;
        case 0x35ec80u: goto label_35ec80;
        case 0x35ec84u: goto label_35ec84;
        case 0x35ec88u: goto label_35ec88;
        case 0x35ec8cu: goto label_35ec8c;
        case 0x35ec90u: goto label_35ec90;
        case 0x35ec94u: goto label_35ec94;
        case 0x35ec98u: goto label_35ec98;
        case 0x35ec9cu: goto label_35ec9c;
        case 0x35eca0u: goto label_35eca0;
        case 0x35eca4u: goto label_35eca4;
        case 0x35eca8u: goto label_35eca8;
        case 0x35ecacu: goto label_35ecac;
        case 0x35ecb0u: goto label_35ecb0;
        case 0x35ecb4u: goto label_35ecb4;
        case 0x35ecb8u: goto label_35ecb8;
        case 0x35ecbcu: goto label_35ecbc;
        case 0x35ecc0u: goto label_35ecc0;
        case 0x35ecc4u: goto label_35ecc4;
        case 0x35ecc8u: goto label_35ecc8;
        case 0x35ecccu: goto label_35eccc;
        case 0x35ecd0u: goto label_35ecd0;
        case 0x35ecd4u: goto label_35ecd4;
        case 0x35ecd8u: goto label_35ecd8;
        case 0x35ecdcu: goto label_35ecdc;
        case 0x35ece0u: goto label_35ece0;
        case 0x35ece4u: goto label_35ece4;
        case 0x35ece8u: goto label_35ece8;
        case 0x35ececu: goto label_35ecec;
        case 0x35ecf0u: goto label_35ecf0;
        case 0x35ecf4u: goto label_35ecf4;
        case 0x35ecf8u: goto label_35ecf8;
        case 0x35ecfcu: goto label_35ecfc;
        case 0x35ed00u: goto label_35ed00;
        case 0x35ed04u: goto label_35ed04;
        case 0x35ed08u: goto label_35ed08;
        case 0x35ed0cu: goto label_35ed0c;
        case 0x35ed10u: goto label_35ed10;
        case 0x35ed14u: goto label_35ed14;
        case 0x35ed18u: goto label_35ed18;
        case 0x35ed1cu: goto label_35ed1c;
        case 0x35ed20u: goto label_35ed20;
        case 0x35ed24u: goto label_35ed24;
        case 0x35ed28u: goto label_35ed28;
        case 0x35ed2cu: goto label_35ed2c;
        case 0x35ed30u: goto label_35ed30;
        case 0x35ed34u: goto label_35ed34;
        case 0x35ed38u: goto label_35ed38;
        case 0x35ed3cu: goto label_35ed3c;
        case 0x35ed40u: goto label_35ed40;
        case 0x35ed44u: goto label_35ed44;
        case 0x35ed48u: goto label_35ed48;
        case 0x35ed4cu: goto label_35ed4c;
        case 0x35ed50u: goto label_35ed50;
        case 0x35ed54u: goto label_35ed54;
        case 0x35ed58u: goto label_35ed58;
        case 0x35ed5cu: goto label_35ed5c;
        case 0x35ed60u: goto label_35ed60;
        case 0x35ed64u: goto label_35ed64;
        case 0x35ed68u: goto label_35ed68;
        case 0x35ed6cu: goto label_35ed6c;
        case 0x35ed70u: goto label_35ed70;
        case 0x35ed74u: goto label_35ed74;
        case 0x35ed78u: goto label_35ed78;
        case 0x35ed7cu: goto label_35ed7c;
        case 0x35ed80u: goto label_35ed80;
        case 0x35ed84u: goto label_35ed84;
        case 0x35ed88u: goto label_35ed88;
        case 0x35ed8cu: goto label_35ed8c;
        case 0x35ed90u: goto label_35ed90;
        case 0x35ed94u: goto label_35ed94;
        case 0x35ed98u: goto label_35ed98;
        case 0x35ed9cu: goto label_35ed9c;
        case 0x35eda0u: goto label_35eda0;
        case 0x35eda4u: goto label_35eda4;
        case 0x35eda8u: goto label_35eda8;
        case 0x35edacu: goto label_35edac;
        case 0x35edb0u: goto label_35edb0;
        case 0x35edb4u: goto label_35edb4;
        case 0x35edb8u: goto label_35edb8;
        case 0x35edbcu: goto label_35edbc;
        case 0x35edc0u: goto label_35edc0;
        case 0x35edc4u: goto label_35edc4;
        case 0x35edc8u: goto label_35edc8;
        case 0x35edccu: goto label_35edcc;
        case 0x35edd0u: goto label_35edd0;
        case 0x35edd4u: goto label_35edd4;
        case 0x35edd8u: goto label_35edd8;
        case 0x35eddcu: goto label_35eddc;
        case 0x35ede0u: goto label_35ede0;
        case 0x35ede4u: goto label_35ede4;
        case 0x35ede8u: goto label_35ede8;
        case 0x35edecu: goto label_35edec;
        case 0x35edf0u: goto label_35edf0;
        case 0x35edf4u: goto label_35edf4;
        case 0x35edf8u: goto label_35edf8;
        case 0x35edfcu: goto label_35edfc;
        default: break;
    }

    ctx->pc = 0x35d990u;

label_35d990:
    // 0x35d990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35d990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_35d994:
    // 0x35d994: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35d994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35d998:
    // 0x35d998: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35d998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_35d99c:
    // 0x35d99c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35d99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35d9a0:
    // 0x35d9a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35d9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35d9a4:
    // 0x35d9a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35d9a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35d9a8:
    // 0x35d9a8: 0x8ca30e38  lw          $v1, 0xE38($a1)
    ctx->pc = 0x35d9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3640)));
label_35d9ac:
    // 0x35d9ac: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_35d9b0:
    if (ctx->pc == 0x35D9B0u) {
        ctx->pc = 0x35D9B0u;
            // 0x35d9b0: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x35D9B4u;
        goto label_35d9b4;
    }
    ctx->pc = 0x35D9ACu;
    {
        const bool branch_taken_0x35d9ac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x35D9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35D9ACu;
            // 0x35d9b0: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d9ac) {
            ctx->pc = 0x35D9C4u;
            goto label_35d9c4;
        }
    }
    ctx->pc = 0x35D9B4u;
label_35d9b4:
    // 0x35d9b4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x35d9b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_35d9b8:
    // 0x35d9b8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_35d9bc:
    if (ctx->pc == 0x35D9BCu) {
        ctx->pc = 0x35D9C0u;
        goto label_35d9c0;
    }
    ctx->pc = 0x35D9B8u;
    {
        const bool branch_taken_0x35d9b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d9b8) {
            ctx->pc = 0x35D9C4u;
            goto label_35d9c4;
        }
    }
    ctx->pc = 0x35D9C0u;
label_35d9c0:
    // 0x35d9c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35d9c4:
    // 0x35d9c4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_35d9c8:
    if (ctx->pc == 0x35D9C8u) {
        ctx->pc = 0x35D9CCu;
        goto label_35d9cc;
    }
    ctx->pc = 0x35D9C4u;
    {
        const bool branch_taken_0x35d9c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d9c4) {
            ctx->pc = 0x35D9E0u;
            goto label_35d9e0;
        }
    }
    ctx->pc = 0x35D9CCu;
label_35d9cc:
    // 0x35d9cc: 0xc075eb4  jal         func_1D7AD0
label_35d9d0:
    if (ctx->pc == 0x35D9D0u) {
        ctx->pc = 0x35D9D0u;
            // 0x35d9d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35D9D4u;
        goto label_35d9d4;
    }
    ctx->pc = 0x35D9CCu;
    SET_GPR_U32(ctx, 31, 0x35D9D4u);
    ctx->pc = 0x35D9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D9CCu;
            // 0x35d9d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D9D4u; }
        if (ctx->pc != 0x35D9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D9D4u; }
        if (ctx->pc != 0x35D9D4u) { return; }
    }
    ctx->pc = 0x35D9D4u;
label_35d9d4:
    // 0x35d9d4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_35d9d8:
    if (ctx->pc == 0x35D9D8u) {
        ctx->pc = 0x35D9DCu;
        goto label_35d9dc;
    }
    ctx->pc = 0x35D9D4u;
    {
        const bool branch_taken_0x35d9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d9d4) {
            ctx->pc = 0x35D9E0u;
            goto label_35d9e0;
        }
    }
    ctx->pc = 0x35D9DCu;
label_35d9dc:
    // 0x35d9dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35d9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35d9e0:
    // 0x35d9e0: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_35d9e4:
    if (ctx->pc == 0x35D9E4u) {
        ctx->pc = 0x35D9E4u;
            // 0x35d9e4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x35D9E8u;
        goto label_35d9e8;
    }
    ctx->pc = 0x35D9E0u;
    {
        const bool branch_taken_0x35d9e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d9e0) {
            ctx->pc = 0x35D9E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35D9E0u;
            // 0x35d9e4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35DA04u;
            goto label_35da04;
        }
    }
    ctx->pc = 0x35D9E8u;
label_35d9e8:
    // 0x35d9e8: 0xc072b78  jal         func_1CADE0
label_35d9ec:
    if (ctx->pc == 0x35D9ECu) {
        ctx->pc = 0x35D9ECu;
            // 0x35d9ec: 0x9224005c  lbu         $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->pc = 0x35D9F0u;
        goto label_35d9f0;
    }
    ctx->pc = 0x35D9E8u;
    SET_GPR_U32(ctx, 31, 0x35D9F0u);
    ctx->pc = 0x35D9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D9E8u;
            // 0x35d9ec: 0x9224005c  lbu         $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D9F0u; }
        if (ctx->pc != 0x35D9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35D9F0u; }
        if (ctx->pc != 0x35D9F0u) { return; }
    }
    ctx->pc = 0x35D9F0u;
label_35d9f0:
    // 0x35d9f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_35d9f4:
    if (ctx->pc == 0x35D9F4u) {
        ctx->pc = 0x35D9F8u;
        goto label_35d9f8;
    }
    ctx->pc = 0x35D9F0u;
    {
        const bool branch_taken_0x35d9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d9f0) {
            ctx->pc = 0x35DA00u;
            goto label_35da00;
        }
    }
    ctx->pc = 0x35D9F8u;
label_35d9f8:
    // 0x35d9f8: 0xc072aaa  jal         func_1CAAA8
label_35d9fc:
    if (ctx->pc == 0x35D9FCu) {
        ctx->pc = 0x35D9FCu;
            // 0x35d9fc: 0x9224005c  lbu         $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->pc = 0x35DA00u;
        goto label_35da00;
    }
    ctx->pc = 0x35D9F8u;
    SET_GPR_U32(ctx, 31, 0x35DA00u);
    ctx->pc = 0x35D9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35D9F8u;
            // 0x35d9fc: 0x9224005c  lbu         $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DA00u; }
        if (ctx->pc != 0x35DA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DA00u; }
        if (ctx->pc != 0x35DA00u) { return; }
    }
    ctx->pc = 0x35DA00u;
label_35da00:
    // 0x35da00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35da00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35da04:
    // 0x35da04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35da04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35da08:
    // 0x35da08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35da08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35da0c:
    // 0x35da0c: 0x3e00008  jr          $ra
label_35da10:
    if (ctx->pc == 0x35DA10u) {
        ctx->pc = 0x35DA10u;
            // 0x35da10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x35DA14u;
        goto label_35da14;
    }
    ctx->pc = 0x35DA0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35DA0Cu;
            // 0x35da10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35DA14u;
label_35da14:
    // 0x35da14: 0x0  nop
    ctx->pc = 0x35da14u;
    // NOP
label_35da18:
    // 0x35da18: 0x0  nop
    ctx->pc = 0x35da18u;
    // NOP
label_35da1c:
    // 0x35da1c: 0x0  nop
    ctx->pc = 0x35da1cu;
    // NOP
label_35da20:
    // 0x35da20: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x35da20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_35da24:
    // 0x35da24: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x35da24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_35da28:
    // 0x35da28: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x35da28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_35da2c:
    // 0x35da2c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x35da2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_35da30:
    // 0x35da30: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x35da30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_35da34:
    // 0x35da34: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x35da34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35da38:
    // 0x35da38: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x35da38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_35da3c:
    // 0x35da3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x35da3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_35da40:
    // 0x35da40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35da40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_35da44:
    // 0x35da44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35da44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_35da48:
    // 0x35da48: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x35da48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_35da4c:
    // 0x35da4c: 0x9083004e  lbu         $v1, 0x4E($a0)
    ctx->pc = 0x35da4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 78)));
label_35da50:
    // 0x35da50: 0x10600266  beqz        $v1, . + 4 + (0x266 << 2)
label_35da54:
    if (ctx->pc == 0x35DA54u) {
        ctx->pc = 0x35DA54u;
            // 0x35da54: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35DA58u;
        goto label_35da58;
    }
    ctx->pc = 0x35DA50u;
    {
        const bool branch_taken_0x35da50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35DA50u;
            // 0x35da54: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35da50) {
            ctx->pc = 0x35E3ECu;
            goto label_35e3ec;
        }
    }
    ctx->pc = 0x35DA58u;
label_35da58:
    // 0x35da58: 0x8e840db0  lw          $a0, 0xDB0($s4)
    ctx->pc = 0x35da58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3504)));
label_35da5c:
    // 0x35da5c: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x35da5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_35da60:
    // 0x35da60: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_35da64:
    if (ctx->pc == 0x35DA64u) {
        ctx->pc = 0x35DA68u;
        goto label_35da68;
    }
    ctx->pc = 0x35DA60u;
    {
        const bool branch_taken_0x35da60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35da60) {
            ctx->pc = 0x35DA74u;
            goto label_35da74;
        }
    }
    ctx->pc = 0x35DA68u;
label_35da68:
    // 0x35da68: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x35da68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_35da6c:
    // 0x35da6c: 0x54200009  bnel        $at, $zero, . + 4 + (0x9 << 2)
label_35da70:
    if (ctx->pc == 0x35DA70u) {
        ctx->pc = 0x35DA70u;
            // 0x35da70: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x35DA74u;
        goto label_35da74;
    }
    ctx->pc = 0x35DA6Cu;
    {
        const bool branch_taken_0x35da6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35da6c) {
            ctx->pc = 0x35DA70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35DA6Cu;
            // 0x35da70: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x35DA94u;
            goto label_35da94;
        }
    }
    ctx->pc = 0x35DA74u;
label_35da74:
    // 0x35da74: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_35da78:
    if (ctx->pc == 0x35DA78u) {
        ctx->pc = 0x35DA7Cu;
        goto label_35da7c;
    }
    ctx->pc = 0x35DA74u;
    {
        const bool branch_taken_0x35da74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35da74) {
            ctx->pc = 0x35DA90u;
            goto label_35da90;
        }
    }
    ctx->pc = 0x35DA7Cu;
label_35da7c:
    // 0x35da7c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x35da7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_35da80:
    // 0x35da80: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_35da84:
    if (ctx->pc == 0x35DA84u) {
        ctx->pc = 0x35DA88u;
        goto label_35da88;
    }
    ctx->pc = 0x35DA80u;
    {
        const bool branch_taken_0x35da80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35da80) {
            ctx->pc = 0x35DA90u;
            goto label_35da90;
        }
    }
    ctx->pc = 0x35DA88u;
label_35da88:
    // 0x35da88: 0x10000002  b           . + 4 + (0x2 << 2)
label_35da8c:
    if (ctx->pc == 0x35DA8Cu) {
        ctx->pc = 0x35DA8Cu;
            // 0x35da8c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35DA90u;
        goto label_35da90;
    }
    ctx->pc = 0x35DA88u;
    {
        const bool branch_taken_0x35da88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35DA88u;
            // 0x35da8c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35da88) {
            ctx->pc = 0x35DA94u;
            goto label_35da94;
        }
    }
    ctx->pc = 0x35DA90u;
label_35da90:
    // 0x35da90: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x35da90u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_35da94:
    // 0x35da94: 0x50600256  beql        $v1, $zero, . + 4 + (0x256 << 2)
label_35da98:
    if (ctx->pc == 0x35DA98u) {
        ctx->pc = 0x35DA98u;
            // 0x35da98: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x35DA9Cu;
        goto label_35da9c;
    }
    ctx->pc = 0x35DA94u;
    {
        const bool branch_taken_0x35da94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35da94) {
            ctx->pc = 0x35DA98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35DA94u;
            // 0x35da98: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35E3F0u;
            goto label_35e3f0;
        }
    }
    ctx->pc = 0x35DA9Cu;
label_35da9c:
    // 0x35da9c: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x35da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_35daa0:
    // 0x35daa0: 0x54740005  bnel        $v1, $s4, . + 4 + (0x5 << 2)
label_35daa4:
    if (ctx->pc == 0x35DAA4u) {
        ctx->pc = 0x35DAA4u;
            // 0x35daa4: 0x8e830db0  lw          $v1, 0xDB0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3504)));
        ctx->pc = 0x35DAA8u;
        goto label_35daa8;
    }
    ctx->pc = 0x35DAA0u;
    {
        const bool branch_taken_0x35daa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x35daa0) {
            ctx->pc = 0x35DAA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35DAA0u;
            // 0x35daa4: 0x8e830db0  lw          $v1, 0xDB0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35DAB8u;
            goto label_35dab8;
        }
    }
    ctx->pc = 0x35DAA8u;
label_35daa8:
    // 0x35daa8: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x35daa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_35daac:
    // 0x35daac: 0x1c60024f  bgtz        $v1, . + 4 + (0x24F << 2)
label_35dab0:
    if (ctx->pc == 0x35DAB0u) {
        ctx->pc = 0x35DAB4u;
        goto label_35dab4;
    }
    ctx->pc = 0x35DAACu;
    {
        const bool branch_taken_0x35daac = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x35daac) {
            ctx->pc = 0x35E3ECu;
            goto label_35e3ec;
        }
    }
    ctx->pc = 0x35DAB4u;
label_35dab4:
    // 0x35dab4: 0x8e830db0  lw          $v1, 0xDB0($s4)
    ctx->pc = 0x35dab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3504)));
label_35dab8:
    // 0x35dab8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x35dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_35dabc:
    // 0x35dabc: 0x8e910d74  lw          $s1, 0xD74($s4)
    ctx->pc = 0x35dabcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3444)));
label_35dac0:
    // 0x35dac0: 0x8e920550  lw          $s2, 0x550($s4)
    ctx->pc = 0x35dac0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
label_35dac4:
    // 0x35dac4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_35dac8:
    if (ctx->pc == 0x35DAC8u) {
        ctx->pc = 0x35DAC8u;
            // 0x35dac8: 0x26930580  addiu       $s3, $s4, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1408));
        ctx->pc = 0x35DACCu;
        goto label_35dacc;
    }
    ctx->pc = 0x35DAC4u;
    {
        const bool branch_taken_0x35dac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35DAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35DAC4u;
            // 0x35dac8: 0x26930580  addiu       $s3, $s4, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dac4) {
            ctx->pc = 0x35DAD4u;
            goto label_35dad4;
        }
    }
    ctx->pc = 0x35DACCu;
label_35dacc:
    // 0x35dacc: 0xc0b6764  jal         func_2D9D90
label_35dad0:
    if (ctx->pc == 0x35DAD0u) {
        ctx->pc = 0x35DAD0u;
            // 0x35dad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35DAD4u;
        goto label_35dad4;
    }
    ctx->pc = 0x35DACCu;
    SET_GPR_U32(ctx, 31, 0x35DAD4u);
    ctx->pc = 0x35DAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DACCu;
            // 0x35dad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D90u;
    if (runtime->hasFunction(0x2D9D90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DAD4u; }
        if (ctx->pc != 0x35DAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9D90_0x2d9d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DAD4u; }
        if (ctx->pc != 0x35DAD4u) { return; }
    }
    ctx->pc = 0x35DAD4u;
label_35dad4:
    // 0x35dad4: 0xae80118c  sw          $zero, 0x118C($s4)
    ctx->pc = 0x35dad4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4492), GPR_U32(ctx, 0));
label_35dad8:
    // 0x35dad8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x35dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_35dadc:
    // 0x35dadc: 0xaea00064  sw          $zero, 0x64($s5)
    ctx->pc = 0x35dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 0));
label_35dae0:
    // 0x35dae0: 0xaeb40070  sw          $s4, 0x70($s5)
    ctx->pc = 0x35dae0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 20));
label_35dae4:
    // 0x35dae4: 0xaea20074  sw          $v0, 0x74($s5)
    ctx->pc = 0x35dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 2));
label_35dae8:
    // 0x35dae8: 0x8ea20040  lw          $v0, 0x40($s5)
    ctx->pc = 0x35dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_35daec:
    // 0x35daec: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
label_35daf0:
    if (ctx->pc == 0x35DAF0u) {
        ctx->pc = 0x35DAF0u;
            // 0x35daf0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x35DAF4u;
        goto label_35daf4;
    }
    ctx->pc = 0x35DAECu;
    {
        const bool branch_taken_0x35daec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35daec) {
            ctx->pc = 0x35DAF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35DAECu;
            // 0x35daf0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35DC2Cu;
            goto label_35dc2c;
        }
    }
    ctx->pc = 0x35DAF4u;
label_35daf4:
    // 0x35daf4: 0x8243010f  lb          $v1, 0x10F($s2)
    ctx->pc = 0x35daf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 271)));
label_35daf8:
    // 0x35daf8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x35daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_35dafc:
    // 0x35dafc: 0x5462002d  bnel        $v1, $v0, . + 4 + (0x2D << 2)
label_35db00:
    if (ctx->pc == 0x35DB00u) {
        ctx->pc = 0x35DB00u;
            // 0x35db00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35DB04u;
        goto label_35db04;
    }
    ctx->pc = 0x35DAFCu;
    {
        const bool branch_taken_0x35dafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35dafc) {
            ctx->pc = 0x35DB00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35DAFCu;
            // 0x35db00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35DBB4u;
            goto label_35dbb4;
        }
    }
    ctx->pc = 0x35DB04u;
label_35db04:
    // 0x35db04: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x35db04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_35db08:
    // 0x35db08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35db08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35db0c:
    // 0x35db0c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x35db0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_35db10:
    // 0x35db10: 0x320f809  jalr        $t9
label_35db14:
    if (ctx->pc == 0x35DB14u) {
        ctx->pc = 0x35DB14u;
            // 0x35db14: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x35DB18u;
        goto label_35db18;
    }
    ctx->pc = 0x35DB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35DB18u);
        ctx->pc = 0x35DB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35DB10u;
            // 0x35db14: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35DB18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35DB18u; }
            if (ctx->pc != 0x35DB18u) { return; }
        }
        }
    }
    ctx->pc = 0x35DB18u;
label_35db18:
    // 0x35db18: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x35db18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_35db1c:
    // 0x35db1c: 0x26840320  addiu       $a0, $s4, 0x320
    ctx->pc = 0x35db1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 800));
label_35db20:
    // 0x35db20: 0xae820db8  sw          $v0, 0xDB8($s4)
    ctx->pc = 0x35db20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3512), GPR_U32(ctx, 2));
label_35db24:
    // 0x35db24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35db24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35db28:
    // 0x35db28: 0x8e820d9c  lw          $v0, 0xD9C($s4)
    ctx->pc = 0x35db28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3484)));
label_35db2c:
    // 0x35db2c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x35db2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_35db30:
    // 0x35db30: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x35db30u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_35db34:
    // 0x35db34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x35db34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_35db38:
    // 0x35db38: 0xc04cbd8  jal         func_132F60
label_35db3c:
    if (ctx->pc == 0x35DB3Cu) {
        ctx->pc = 0x35DB3Cu;
            // 0x35db3c: 0xae820d9c  sw          $v0, 0xD9C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3484), GPR_U32(ctx, 2));
        ctx->pc = 0x35DB40u;
        goto label_35db40;
    }
    ctx->pc = 0x35DB38u;
    SET_GPR_U32(ctx, 31, 0x35DB40u);
    ctx->pc = 0x35DB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DB38u;
            // 0x35db3c: 0xae820d9c  sw          $v0, 0xD9C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DB40u; }
        if (ctx->pc != 0x35DB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DB40u; }
        if (ctx->pc != 0x35DB40u) { return; }
    }
    ctx->pc = 0x35DB40u;
label_35db40:
    // 0x35db40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35db40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35db44:
    // 0x35db44: 0x26840330  addiu       $a0, $s4, 0x330
    ctx->pc = 0x35db44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 816));
label_35db48:
    // 0x35db48: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x35db48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_35db4c:
    // 0x35db4c: 0xc04cbd8  jal         func_132F60
label_35db50:
    if (ctx->pc == 0x35DB50u) {
        ctx->pc = 0x35DB50u;
            // 0x35db50: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x35DB54u;
        goto label_35db54;
    }
    ctx->pc = 0x35DB4Cu;
    SET_GPR_U32(ctx, 31, 0x35DB54u);
    ctx->pc = 0x35DB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DB4Cu;
            // 0x35db50: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DB54u; }
        if (ctx->pc != 0x35DB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DB54u; }
        if (ctx->pc != 0x35DB54u) { return; }
    }
    ctx->pc = 0x35DB54u;
label_35db54:
    // 0x35db54: 0x8e820d60  lw          $v0, 0xD60($s4)
    ctx->pc = 0x35db54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3424)));
label_35db58:
    // 0x35db58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35db58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35db5c:
    // 0x35db5c: 0x3c031405  lui         $v1, 0x1405
    ctx->pc = 0x35db5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5125 << 16));
label_35db60:
    // 0x35db60: 0xa044001c  sb          $a0, 0x1C($v0)
    ctx->pc = 0x35db60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 4));
label_35db64:
    // 0x35db64: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x35db64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_35db68:
    // 0x35db68: 0x8e2202c8  lw          $v0, 0x2C8($s1)
    ctx->pc = 0x35db68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_35db6c:
    // 0x35db6c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x35db6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_35db70:
    // 0x35db70: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x35db70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_35db74:
    // 0x35db74: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x35db74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_35db78:
    // 0x35db78: 0xc0a545c  jal         func_295170
label_35db7c:
    if (ctx->pc == 0x35DB7Cu) {
        ctx->pc = 0x35DB7Cu;
            // 0x35db7c: 0x628024  and         $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x35DB80u;
        goto label_35db80;
    }
    ctx->pc = 0x35DB78u;
    SET_GPR_U32(ctx, 31, 0x35DB80u);
    ctx->pc = 0x35DB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DB78u;
            // 0x35db7c: 0x628024  and         $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DB80u; }
        if (ctx->pc != 0x35DB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DB80u; }
        if (ctx->pc != 0x35DB80u) { return; }
    }
    ctx->pc = 0x35DB80u;
label_35db80:
    // 0x35db80: 0xac50002c  sw          $s0, 0x2C($v0)
    ctx->pc = 0x35db80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 16));
label_35db84:
    // 0x35db84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35db84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35db88:
    // 0x35db88: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x35db88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_35db8c:
    // 0x35db8c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x35db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_35db90:
    // 0x35db90: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35db90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35db94:
    // 0x35db94: 0xc08bf20  jal         func_22FC80
label_35db98:
    if (ctx->pc == 0x35DB98u) {
        ctx->pc = 0x35DB98u;
            // 0x35db98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35DB9Cu;
        goto label_35db9c;
    }
    ctx->pc = 0x35DB94u;
    SET_GPR_U32(ctx, 31, 0x35DB9Cu);
    ctx->pc = 0x35DB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DB94u;
            // 0x35db98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DB9Cu; }
        if (ctx->pc != 0x35DB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DB9Cu; }
        if (ctx->pc != 0x35DB9Cu) { return; }
    }
    ctx->pc = 0x35DB9Cu;
label_35db9c:
    // 0x35db9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35db9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35dba0:
    // 0x35dba0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35dba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35dba4:
    // 0x35dba4: 0xae2502b0  sw          $a1, 0x2B0($s1)
    ctx->pc = 0x35dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 5));
label_35dba8:
    // 0x35dba8: 0xc0ab808  jal         func_2AE020
label_35dbac:
    if (ctx->pc == 0x35DBACu) {
        ctx->pc = 0x35DBACu;
            // 0x35dbac: 0xae600118  sw          $zero, 0x118($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 0));
        ctx->pc = 0x35DBB0u;
        goto label_35dbb0;
    }
    ctx->pc = 0x35DBA8u;
    SET_GPR_U32(ctx, 31, 0x35DBB0u);
    ctx->pc = 0x35DBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DBA8u;
            // 0x35dbac: 0xae600118  sw          $zero, 0x118($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DBB0u; }
        if (ctx->pc != 0x35DBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DBB0u; }
        if (ctx->pc != 0x35DBB0u) { return; }
    }
    ctx->pc = 0x35DBB0u;
label_35dbb0:
    // 0x35dbb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35dbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35dbb4:
    // 0x35dbb4: 0xc07626c  jal         func_1D89B0
label_35dbb8:
    if (ctx->pc == 0x35DBB8u) {
        ctx->pc = 0x35DBB8u;
            // 0x35dbb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35DBBCu;
        goto label_35dbbc;
    }
    ctx->pc = 0x35DBB4u;
    SET_GPR_U32(ctx, 31, 0x35DBBCu);
    ctx->pc = 0x35DBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DBB4u;
            // 0x35dbb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DBBCu; }
        if (ctx->pc != 0x35DBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DBBCu; }
        if (ctx->pc != 0x35DBBCu) { return; }
    }
    ctx->pc = 0x35DBBCu;
label_35dbbc:
    // 0x35dbbc: 0xc0bbec8  jal         func_2EFB20
label_35dbc0:
    if (ctx->pc == 0x35DBC0u) {
        ctx->pc = 0x35DBC0u;
            // 0x35dbc0: 0x26840ab0  addiu       $a0, $s4, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2736));
        ctx->pc = 0x35DBC4u;
        goto label_35dbc4;
    }
    ctx->pc = 0x35DBBCu;
    SET_GPR_U32(ctx, 31, 0x35DBC4u);
    ctx->pc = 0x35DBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DBBCu;
            // 0x35dbc0: 0x26840ab0  addiu       $a0, $s4, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EFB20u;
    if (runtime->hasFunction(0x2EFB20u)) {
        auto targetFn = runtime->lookupFunction(0x2EFB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DBC4u; }
        if (ctx->pc != 0x35DBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EFB20_0x2efb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DBC4u; }
        if (ctx->pc != 0x35DBC4u) { return; }
    }
    ctx->pc = 0x35DBC4u;
label_35dbc4:
    // 0x35dbc4: 0x8e830e38  lw          $v1, 0xE38($s4)
    ctx->pc = 0x35dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3640)));
label_35dbc8:
    // 0x35dbc8: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x35dbc8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_35dbcc:
    // 0x35dbcc: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_35dbd0:
    if (ctx->pc == 0x35DBD0u) {
        ctx->pc = 0x35DBD0u;
            // 0x35dbd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35DBD4u;
        goto label_35dbd4;
    }
    ctx->pc = 0x35DBCCu;
    {
        const bool branch_taken_0x35dbcc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x35DBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35DBCCu;
            // 0x35dbd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dbcc) {
            ctx->pc = 0x35DBE4u;
            goto label_35dbe4;
        }
    }
    ctx->pc = 0x35DBD4u;
label_35dbd4:
    // 0x35dbd4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x35dbd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_35dbd8:
    // 0x35dbd8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_35dbdc:
    if (ctx->pc == 0x35DBDCu) {
        ctx->pc = 0x35DBE0u;
        goto label_35dbe0;
    }
    ctx->pc = 0x35DBD8u;
    {
        const bool branch_taken_0x35dbd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dbd8) {
            ctx->pc = 0x35DBE4u;
            goto label_35dbe4;
        }
    }
    ctx->pc = 0x35DBE0u;
label_35dbe0:
    // 0x35dbe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35dbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35dbe4:
    // 0x35dbe4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_35dbe8:
    if (ctx->pc == 0x35DBE8u) {
        ctx->pc = 0x35DBECu;
        goto label_35dbec;
    }
    ctx->pc = 0x35DBE4u;
    {
        const bool branch_taken_0x35dbe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x35dbe4) {
            ctx->pc = 0x35DC00u;
            goto label_35dc00;
        }
    }
    ctx->pc = 0x35DBECu;
label_35dbec:
    // 0x35dbec: 0xc075eb4  jal         func_1D7AD0
label_35dbf0:
    if (ctx->pc == 0x35DBF0u) {
        ctx->pc = 0x35DBF0u;
            // 0x35dbf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35DBF4u;
        goto label_35dbf4;
    }
    ctx->pc = 0x35DBECu;
    SET_GPR_U32(ctx, 31, 0x35DBF4u);
    ctx->pc = 0x35DBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DBECu;
            // 0x35dbf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DBF4u; }
        if (ctx->pc != 0x35DBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DBF4u; }
        if (ctx->pc != 0x35DBF4u) { return; }
    }
    ctx->pc = 0x35DBF4u;
label_35dbf4:
    // 0x35dbf4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_35dbf8:
    if (ctx->pc == 0x35DBF8u) {
        ctx->pc = 0x35DBFCu;
        goto label_35dbfc;
    }
    ctx->pc = 0x35DBF4u;
    {
        const bool branch_taken_0x35dbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35dbf4) {
            ctx->pc = 0x35DC00u;
            goto label_35dc00;
        }
    }
    ctx->pc = 0x35DBFCu;
label_35dbfc:
    // 0x35dbfc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35dbfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35dc00:
    // 0x35dc00: 0x120001fa  beqz        $s0, . + 4 + (0x1FA << 2)
label_35dc04:
    if (ctx->pc == 0x35DC04u) {
        ctx->pc = 0x35DC08u;
        goto label_35dc08;
    }
    ctx->pc = 0x35DC00u;
    {
        const bool branch_taken_0x35dc00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dc00) {
            ctx->pc = 0x35E3ECu;
            goto label_35e3ec;
        }
    }
    ctx->pc = 0x35DC08u;
label_35dc08:
    // 0x35dc08: 0xc072b78  jal         func_1CADE0
label_35dc0c:
    if (ctx->pc == 0x35DC0Cu) {
        ctx->pc = 0x35DC0Cu;
            // 0x35dc0c: 0x9284005c  lbu         $a0, 0x5C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->pc = 0x35DC10u;
        goto label_35dc10;
    }
    ctx->pc = 0x35DC08u;
    SET_GPR_U32(ctx, 31, 0x35DC10u);
    ctx->pc = 0x35DC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DC08u;
            // 0x35dc0c: 0x9284005c  lbu         $a0, 0x5C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DC10u; }
        if (ctx->pc != 0x35DC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DC10u; }
        if (ctx->pc != 0x35DC10u) { return; }
    }
    ctx->pc = 0x35DC10u;
label_35dc10:
    // 0x35dc10: 0x104001f6  beqz        $v0, . + 4 + (0x1F6 << 2)
label_35dc14:
    if (ctx->pc == 0x35DC14u) {
        ctx->pc = 0x35DC18u;
        goto label_35dc18;
    }
    ctx->pc = 0x35DC10u;
    {
        const bool branch_taken_0x35dc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dc10) {
            ctx->pc = 0x35E3ECu;
            goto label_35e3ec;
        }
    }
    ctx->pc = 0x35DC18u;
label_35dc18:
    // 0x35dc18: 0xc072aaa  jal         func_1CAAA8
label_35dc1c:
    if (ctx->pc == 0x35DC1Cu) {
        ctx->pc = 0x35DC1Cu;
            // 0x35dc1c: 0x9284005c  lbu         $a0, 0x5C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->pc = 0x35DC20u;
        goto label_35dc20;
    }
    ctx->pc = 0x35DC18u;
    SET_GPR_U32(ctx, 31, 0x35DC20u);
    ctx->pc = 0x35DC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DC18u;
            // 0x35dc1c: 0x9284005c  lbu         $a0, 0x5C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DC20u; }
        if (ctx->pc != 0x35DC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DC20u; }
        if (ctx->pc != 0x35DC20u) { return; }
    }
    ctx->pc = 0x35DC20u;
label_35dc20:
    // 0x35dc20: 0x100001f2  b           . + 4 + (0x1F2 << 2)
label_35dc24:
    if (ctx->pc == 0x35DC24u) {
        ctx->pc = 0x35DC28u;
        goto label_35dc28;
    }
    ctx->pc = 0x35DC20u;
    {
        const bool branch_taken_0x35dc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dc20) {
            ctx->pc = 0x35E3ECu;
            goto label_35e3ec;
        }
    }
    ctx->pc = 0x35DC28u;
label_35dc28:
    // 0x35dc28: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x35dc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_35dc2c:
    // 0x35dc2c: 0xc0a5440  jal         func_295100
label_35dc30:
    if (ctx->pc == 0x35DC30u) {
        ctx->pc = 0x35DC34u;
        goto label_35dc34;
    }
    ctx->pc = 0x35DC2Cu;
    SET_GPR_U32(ctx, 31, 0x35DC34u);
    ctx->pc = 0x295100u;
    if (runtime->hasFunction(0x295100u)) {
        auto targetFn = runtime->lookupFunction(0x295100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DC34u; }
        if (ctx->pc != 0x35DC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295100_0x295100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DC34u; }
        if (ctx->pc != 0x35DC34u) { return; }
    }
    ctx->pc = 0x35DC34u;
label_35dc34:
    // 0x35dc34: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x35dc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_35dc38:
    // 0x35dc38: 0xc0a5440  jal         func_295100
label_35dc3c:
    if (ctx->pc == 0x35DC3Cu) {
        ctx->pc = 0x35DC3Cu;
            // 0x35dc3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35DC40u;
        goto label_35dc40;
    }
    ctx->pc = 0x35DC38u;
    SET_GPR_U32(ctx, 31, 0x35DC40u);
    ctx->pc = 0x35DC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DC38u;
            // 0x35dc3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295100u;
    if (runtime->hasFunction(0x295100u)) {
        auto targetFn = runtime->lookupFunction(0x295100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DC40u; }
        if (ctx->pc != 0x35DC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295100_0x295100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DC40u; }
        if (ctx->pc != 0x35DC40u) { return; }
    }
    ctx->pc = 0x35DC40u;
label_35dc40:
    // 0x35dc40: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x35dc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_35dc44:
    // 0x35dc44: 0xc0a5440  jal         func_295100
label_35dc48:
    if (ctx->pc == 0x35DC48u) {
        ctx->pc = 0x35DC48u;
            // 0x35dc48: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35DC4Cu;
        goto label_35dc4c;
    }
    ctx->pc = 0x35DC44u;
    SET_GPR_U32(ctx, 31, 0x35DC4Cu);
    ctx->pc = 0x35DC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DC44u;
            // 0x35dc48: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295100u;
    if (runtime->hasFunction(0x295100u)) {
        auto targetFn = runtime->lookupFunction(0x295100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DC4Cu; }
        if (ctx->pc != 0x35DC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295100_0x295100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DC4Cu; }
        if (ctx->pc != 0x35DC4Cu) { return; }
    }
    ctx->pc = 0x35DC4Cu;
label_35dc4c:
    // 0x35dc4c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x35dc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_35dc50:
    // 0x35dc50: 0xc6cd0004  lwc1        $f13, 0x4($s6)
    ctx->pc = 0x35dc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_35dc54:
    // 0x35dc54: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x35dc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_35dc58:
    // 0x35dc58: 0xc04cbd8  jal         func_132F60
label_35dc5c:
    if (ctx->pc == 0x35DC5Cu) {
        ctx->pc = 0x35DC5Cu;
            // 0x35dc5c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x35DC60u;
        goto label_35dc60;
    }
    ctx->pc = 0x35DC58u;
    SET_GPR_U32(ctx, 31, 0x35DC60u);
    ctx->pc = 0x35DC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DC58u;
            // 0x35dc5c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DC60u; }
        if (ctx->pc != 0x35DC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DC60u; }
        if (ctx->pc != 0x35DC60u) { return; }
    }
    ctx->pc = 0x35DC60u;
label_35dc60:
    // 0x35dc60: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x35dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_35dc64:
    // 0x35dc64: 0x54400082  bnel        $v0, $zero, . + 4 + (0x82 << 2)
label_35dc68:
    if (ctx->pc == 0x35DC68u) {
        ctx->pc = 0x35DC68u;
            // 0x35dc68: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x35DC6Cu;
        goto label_35dc6c;
    }
    ctx->pc = 0x35DC64u;
    {
        const bool branch_taken_0x35dc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35dc64) {
            ctx->pc = 0x35DC68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35DC64u;
            // 0x35dc68: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35DE70u;
            goto label_35de70;
        }
    }
    ctx->pc = 0x35DC6Cu;
label_35dc6c:
    // 0x35dc6c: 0x8e830d60  lw          $v1, 0xD60($s4)
    ctx->pc = 0x35dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3424)));
label_35dc70:
    // 0x35dc70: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x35dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_35dc74:
    // 0x35dc74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35dc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35dc78:
    // 0x35dc78: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x35dc78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_35dc7c:
    // 0x35dc7c: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x35dc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_35dc80:
    // 0x35dc80: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x35dc80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_35dc84:
    // 0x35dc84: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x35dc84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_35dc88:
    // 0x35dc88: 0x320f809  jalr        $t9
label_35dc8c:
    if (ctx->pc == 0x35DC8Cu) {
        ctx->pc = 0x35DC8Cu;
            // 0x35dc8c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x35DC90u;
        goto label_35dc90;
    }
    ctx->pc = 0x35DC88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35DC90u);
        ctx->pc = 0x35DC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35DC88u;
            // 0x35dc8c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35DC90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35DC90u; }
            if (ctx->pc != 0x35DC90u) { return; }
        }
        }
    }
    ctx->pc = 0x35DC90u;
label_35dc90:
    // 0x35dc90: 0x8e830d9c  lw          $v1, 0xD9C($s4)
    ctx->pc = 0x35dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3484)));
label_35dc94:
    // 0x35dc94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35dc94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35dc98:
    // 0x35dc98: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x35dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_35dc9c:
    // 0x35dc9c: 0x26840320  addiu       $a0, $s4, 0x320
    ctx->pc = 0x35dc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 800));
label_35dca0:
    // 0x35dca0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x35dca0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_35dca4:
    // 0x35dca4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x35dca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_35dca8:
    // 0x35dca8: 0xae830d9c  sw          $v1, 0xD9C($s4)
    ctx->pc = 0x35dca8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3484), GPR_U32(ctx, 3));
label_35dcac:
    // 0x35dcac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x35dcacu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_35dcb0:
    // 0x35dcb0: 0xae820db8  sw          $v0, 0xDB8($s4)
    ctx->pc = 0x35dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3512), GPR_U32(ctx, 2));
label_35dcb4:
    // 0x35dcb4: 0xae800de8  sw          $zero, 0xDE8($s4)
    ctx->pc = 0x35dcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3560), GPR_U32(ctx, 0));
label_35dcb8:
    // 0x35dcb8: 0xc04cbd8  jal         func_132F60
label_35dcbc:
    if (ctx->pc == 0x35DCBCu) {
        ctx->pc = 0x35DCBCu;
            // 0x35dcbc: 0xae800de4  sw          $zero, 0xDE4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3556), GPR_U32(ctx, 0));
        ctx->pc = 0x35DCC0u;
        goto label_35dcc0;
    }
    ctx->pc = 0x35DCB8u;
    SET_GPR_U32(ctx, 31, 0x35DCC0u);
    ctx->pc = 0x35DCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DCB8u;
            // 0x35dcbc: 0xae800de4  sw          $zero, 0xDE4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DCC0u; }
        if (ctx->pc != 0x35DCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DCC0u; }
        if (ctx->pc != 0x35DCC0u) { return; }
    }
    ctx->pc = 0x35DCC0u;
label_35dcc0:
    // 0x35dcc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35dcc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35dcc4:
    // 0x35dcc4: 0x26840330  addiu       $a0, $s4, 0x330
    ctx->pc = 0x35dcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 816));
label_35dcc8:
    // 0x35dcc8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x35dcc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_35dccc:
    // 0x35dccc: 0xc04cbd8  jal         func_132F60
label_35dcd0:
    if (ctx->pc == 0x35DCD0u) {
        ctx->pc = 0x35DCD0u;
            // 0x35dcd0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x35DCD4u;
        goto label_35dcd4;
    }
    ctx->pc = 0x35DCCCu;
    SET_GPR_U32(ctx, 31, 0x35DCD4u);
    ctx->pc = 0x35DCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DCCCu;
            // 0x35dcd0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DCD4u; }
        if (ctx->pc != 0x35DCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DCD4u; }
        if (ctx->pc != 0x35DCD4u) { return; }
    }
    ctx->pc = 0x35DCD4u;
label_35dcd4:
    // 0x35dcd4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x35dcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_35dcd8:
    // 0x35dcd8: 0x3c031405  lui         $v1, 0x1405
    ctx->pc = 0x35dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5125 << 16));
label_35dcdc:
    // 0x35dcdc: 0x8e2202c8  lw          $v0, 0x2C8($s1)
    ctx->pc = 0x35dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_35dce0:
    // 0x35dce0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x35dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_35dce4:
    // 0x35dce4: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x35dce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_35dce8:
    // 0x35dce8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x35dce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_35dcec:
    // 0x35dcec: 0xc0a545c  jal         func_295170
label_35dcf0:
    if (ctx->pc == 0x35DCF0u) {
        ctx->pc = 0x35DCF0u;
            // 0x35dcf0: 0x628024  and         $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x35DCF4u;
        goto label_35dcf4;
    }
    ctx->pc = 0x35DCECu;
    SET_GPR_U32(ctx, 31, 0x35DCF4u);
    ctx->pc = 0x35DCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DCECu;
            // 0x35dcf0: 0x628024  and         $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DCF4u; }
        if (ctx->pc != 0x35DCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DCF4u; }
        if (ctx->pc != 0x35DCF4u) { return; }
    }
    ctx->pc = 0x35DCF4u;
label_35dcf4:
    // 0x35dcf4: 0xac50002c  sw          $s0, 0x2C($v0)
    ctx->pc = 0x35dcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 16));
label_35dcf8:
    // 0x35dcf8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35dcfc:
    // 0x35dcfc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x35dcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_35dd00:
    // 0x35dd00: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x35dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_35dd04:
    // 0x35dd04: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35dd08:
    // 0x35dd08: 0xc08bf20  jal         func_22FC80
label_35dd0c:
    if (ctx->pc == 0x35DD0Cu) {
        ctx->pc = 0x35DD0Cu;
            // 0x35dd0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35DD10u;
        goto label_35dd10;
    }
    ctx->pc = 0x35DD08u;
    SET_GPR_U32(ctx, 31, 0x35DD10u);
    ctx->pc = 0x35DD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DD08u;
            // 0x35dd0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DD10u; }
        if (ctx->pc != 0x35DD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DD10u; }
        if (ctx->pc != 0x35DD10u) { return; }
    }
    ctx->pc = 0x35DD10u;
label_35dd10:
    // 0x35dd10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35dd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35dd14:
    // 0x35dd14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35dd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35dd18:
    // 0x35dd18: 0xae2502b0  sw          $a1, 0x2B0($s1)
    ctx->pc = 0x35dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 5));
label_35dd1c:
    // 0x35dd1c: 0xc0ab808  jal         func_2AE020
label_35dd20:
    if (ctx->pc == 0x35DD20u) {
        ctx->pc = 0x35DD20u;
            // 0x35dd20: 0xae600118  sw          $zero, 0x118($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 0));
        ctx->pc = 0x35DD24u;
        goto label_35dd24;
    }
    ctx->pc = 0x35DD1Cu;
    SET_GPR_U32(ctx, 31, 0x35DD24u);
    ctx->pc = 0x35DD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DD1Cu;
            // 0x35dd20: 0xae600118  sw          $zero, 0x118($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DD24u; }
        if (ctx->pc != 0x35DD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DD24u; }
        if (ctx->pc != 0x35DD24u) { return; }
    }
    ctx->pc = 0x35DD24u;
label_35dd24:
    // 0x35dd24: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x35dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_35dd28:
    // 0x35dd28: 0xc04cc04  jal         func_133010
label_35dd2c:
    if (ctx->pc == 0x35DD2Cu) {
        ctx->pc = 0x35DD2Cu;
            // 0x35dd2c: 0x26a50080  addiu       $a1, $s5, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
        ctx->pc = 0x35DD30u;
        goto label_35dd30;
    }
    ctx->pc = 0x35DD28u;
    SET_GPR_U32(ctx, 31, 0x35DD30u);
    ctx->pc = 0x35DD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DD28u;
            // 0x35dd2c: 0x26a50080  addiu       $a1, $s5, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DD30u; }
        if (ctx->pc != 0x35DD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DD30u; }
        if (ctx->pc != 0x35DD30u) { return; }
    }
    ctx->pc = 0x35DD30u;
label_35dd30:
    // 0x35dd30: 0xc6b40068  lwc1        $f20, 0x68($s5)
    ctx->pc = 0x35dd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35dd34:
    // 0x35dd34: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x35dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_35dd38:
    // 0x35dd38: 0xc04cc04  jal         func_133010
label_35dd3c:
    if (ctx->pc == 0x35DD3Cu) {
        ctx->pc = 0x35DD3Cu;
            // 0x35dd3c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x35DD40u;
        goto label_35dd40;
    }
    ctx->pc = 0x35DD38u;
    SET_GPR_U32(ctx, 31, 0x35DD40u);
    ctx->pc = 0x35DD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DD38u;
            // 0x35dd3c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DD40u; }
        if (ctx->pc != 0x35DD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DD40u; }
        if (ctx->pc != 0x35DD40u) { return; }
    }
    ctx->pc = 0x35DD40u;
label_35dd40:
    // 0x35dd40: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x35dd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35dd44:
    // 0x35dd44: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x35dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_35dd48:
    // 0x35dd48: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x35dd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35dd4c:
    // 0x35dd4c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35dd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35dd50:
    // 0x35dd50: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x35dd50u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_35dd54:
    // 0x35dd54: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x35dd54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_35dd58:
    // 0x35dd58: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x35dd58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
label_35dd5c:
    // 0x35dd5c: 0x46000004  c1          0x4
    ctx->pc = 0x35dd5cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_35dd60:
    // 0x35dd60: 0x0  nop
    ctx->pc = 0x35dd60u;
    // NOP
label_35dd64:
    // 0x35dd64: 0x0  nop
    ctx->pc = 0x35dd64u;
    // NOP
label_35dd68:
    // 0x35dd68: 0xc04cc44  jal         func_133110
label_35dd6c:
    if (ctx->pc == 0x35DD6Cu) {
        ctx->pc = 0x35DD6Cu;
            // 0x35dd6c: 0xe7a00148  swc1        $f0, 0x148($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
        ctx->pc = 0x35DD70u;
        goto label_35dd70;
    }
    ctx->pc = 0x35DD68u;
    SET_GPR_U32(ctx, 31, 0x35DD70u);
    ctx->pc = 0x35DD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DD68u;
            // 0x35dd6c: 0xe7a00148  swc1        $f0, 0x148($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DD70u; }
        if (ctx->pc != 0x35DD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DD70u; }
        if (ctx->pc != 0x35DD70u) { return; }
    }
    ctx->pc = 0x35DD70u;
label_35dd70:
    // 0x35dd70: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x35dd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35dd74:
    // 0x35dd74: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x35dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_35dd78:
    // 0x35dd78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35dd78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35dd7c:
    // 0x35dd7c: 0x0  nop
    ctx->pc = 0x35dd7cu;
    // NOP
label_35dd80:
    // 0x35dd80: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x35dd80u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_35dd84:
    // 0x35dd84: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x35dd84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_35dd88:
    // 0x35dd88: 0xe6800de4  swc1        $f0, 0xDE4($s4)
    ctx->pc = 0x35dd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
label_35dd8c:
    // 0x35dd8c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x35dd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35dd90:
    // 0x35dd90: 0xc04cbd8  jal         func_132F60
label_35dd94:
    if (ctx->pc == 0x35DD94u) {
        ctx->pc = 0x35DD94u;
            // 0x35dd94: 0x4600a342  mul.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x35DD98u;
        goto label_35dd98;
    }
    ctx->pc = 0x35DD90u;
    SET_GPR_U32(ctx, 31, 0x35DD98u);
    ctx->pc = 0x35DD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DD90u;
            // 0x35dd94: 0x4600a342  mul.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DD98u; }
        if (ctx->pc != 0x35DD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DD98u; }
        if (ctx->pc != 0x35DD98u) { return; }
    }
    ctx->pc = 0x35DD98u;
label_35dd98:
    // 0x35dd98: 0x26840320  addiu       $a0, $s4, 0x320
    ctx->pc = 0x35dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 800));
label_35dd9c:
    // 0x35dd9c: 0x268507e0  addiu       $a1, $s4, 0x7E0
    ctx->pc = 0x35dd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2016));
label_35dda0:
    // 0x35dda0: 0xc04cca0  jal         func_133280
label_35dda4:
    if (ctx->pc == 0x35DDA4u) {
        ctx->pc = 0x35DDA4u;
            // 0x35dda4: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x35DDA8u;
        goto label_35dda8;
    }
    ctx->pc = 0x35DDA0u;
    SET_GPR_U32(ctx, 31, 0x35DDA8u);
    ctx->pc = 0x35DDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DDA0u;
            // 0x35dda4: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DDA8u; }
        if (ctx->pc != 0x35DDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DDA8u; }
        if (ctx->pc != 0x35DDA8u) { return; }
    }
    ctx->pc = 0x35DDA8u;
label_35dda8:
    // 0x35dda8: 0x8e820af0  lw          $v0, 0xAF0($s4)
    ctx->pc = 0x35dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2800)));
label_35ddac:
    // 0x35ddac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35ddb0:
    // 0x35ddb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35ddb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35ddb4:
    // 0x35ddb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35ddb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35ddb8:
    // 0x35ddb8: 0xae820afc  sw          $v0, 0xAFC($s4)
    ctx->pc = 0x35ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2812), GPR_U32(ctx, 2));
label_35ddbc:
    // 0x35ddbc: 0x8e820d60  lw          $v0, 0xD60($s4)
    ctx->pc = 0x35ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3424)));
label_35ddc0:
    // 0x35ddc0: 0xc07626c  jal         func_1D89B0
label_35ddc4:
    if (ctx->pc == 0x35DDC4u) {
        ctx->pc = 0x35DDC4u;
            // 0x35ddc4: 0xa043001c  sb          $v1, 0x1C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x35DDC8u;
        goto label_35ddc8;
    }
    ctx->pc = 0x35DDC0u;
    SET_GPR_U32(ctx, 31, 0x35DDC8u);
    ctx->pc = 0x35DDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DDC0u;
            // 0x35ddc4: 0xa043001c  sb          $v1, 0x1C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DDC8u; }
        if (ctx->pc != 0x35DDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DDC8u; }
        if (ctx->pc != 0x35DDC8u) { return; }
    }
    ctx->pc = 0x35DDC8u;
label_35ddc8:
    // 0x35ddc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35ddc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35ddcc:
    // 0x35ddcc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x35ddccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_35ddd0:
    // 0x35ddd0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x35ddd0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_35ddd4:
    // 0x35ddd4: 0xc04cbd8  jal         func_132F60
label_35ddd8:
    if (ctx->pc == 0x35DDD8u) {
        ctx->pc = 0x35DDD8u;
            // 0x35ddd8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x35DDDCu;
        goto label_35dddc;
    }
    ctx->pc = 0x35DDD4u;
    SET_GPR_U32(ctx, 31, 0x35DDDCu);
    ctx->pc = 0x35DDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DDD4u;
            // 0x35ddd8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DDDCu; }
        if (ctx->pc != 0x35DDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DDDCu; }
        if (ctx->pc != 0x35DDDCu) { return; }
    }
    ctx->pc = 0x35DDDCu;
label_35dddc:
    // 0x35dddc: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x35dddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35dde0:
    // 0x35dde0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35dde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35dde4:
    // 0x35dde4: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x35dde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_35dde8:
    // 0x35dde8: 0xe68003b0  swc1        $f0, 0x3B0($s4)
    ctx->pc = 0x35dde8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 944), bits); }
label_35ddec:
    // 0x35ddec: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x35ddecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35ddf0:
    // 0x35ddf0: 0xe68003b4  swc1        $f0, 0x3B4($s4)
    ctx->pc = 0x35ddf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 948), bits); }
label_35ddf4:
    // 0x35ddf4: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x35ddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35ddf8:
    // 0x35ddf8: 0xe68003b8  swc1        $f0, 0x3B8($s4)
    ctx->pc = 0x35ddf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 952), bits); }
label_35ddfc:
    // 0x35ddfc: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x35ddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35de00:
    // 0x35de00: 0xc07649c  jal         func_1D9270
label_35de04:
    if (ctx->pc == 0x35DE04u) {
        ctx->pc = 0x35DE04u;
            // 0x35de04: 0xe68003bc  swc1        $f0, 0x3BC($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 956), bits); }
        ctx->pc = 0x35DE08u;
        goto label_35de08;
    }
    ctx->pc = 0x35DE00u;
    SET_GPR_U32(ctx, 31, 0x35DE08u);
    ctx->pc = 0x35DE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DE00u;
            // 0x35de04: 0xe68003bc  swc1        $f0, 0x3BC($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 956), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DE08u; }
        if (ctx->pc != 0x35DE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DE08u; }
        if (ctx->pc != 0x35DE08u) { return; }
    }
    ctx->pc = 0x35DE08u;
label_35de08:
    // 0x35de08: 0x8e820e38  lw          $v0, 0xE38($s4)
    ctx->pc = 0x35de08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3640)));
label_35de0c:
    // 0x35de0c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x35de0cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_35de10:
    // 0x35de10: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_35de14:
    if (ctx->pc == 0x35DE14u) {
        ctx->pc = 0x35DE14u;
            // 0x35de14: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35DE18u;
        goto label_35de18;
    }
    ctx->pc = 0x35DE10u;
    {
        const bool branch_taken_0x35de10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x35DE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35DE10u;
            // 0x35de14: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35de10) {
            ctx->pc = 0x35DE28u;
            goto label_35de28;
        }
    }
    ctx->pc = 0x35DE18u;
label_35de18:
    // 0x35de18: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x35de18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_35de1c:
    // 0x35de1c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_35de20:
    if (ctx->pc == 0x35DE20u) {
        ctx->pc = 0x35DE24u;
        goto label_35de24;
    }
    ctx->pc = 0x35DE1Cu;
    {
        const bool branch_taken_0x35de1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35de1c) {
            ctx->pc = 0x35DE28u;
            goto label_35de28;
        }
    }
    ctx->pc = 0x35DE24u;
label_35de24:
    // 0x35de24: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x35de24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35de28:
    // 0x35de28: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_35de2c:
    if (ctx->pc == 0x35DE2Cu) {
        ctx->pc = 0x35DE30u;
        goto label_35de30;
    }
    ctx->pc = 0x35DE28u;
    {
        const bool branch_taken_0x35de28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35de28) {
            ctx->pc = 0x35DE44u;
            goto label_35de44;
        }
    }
    ctx->pc = 0x35DE30u;
label_35de30:
    // 0x35de30: 0xc075eb4  jal         func_1D7AD0
label_35de34:
    if (ctx->pc == 0x35DE34u) {
        ctx->pc = 0x35DE34u;
            // 0x35de34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35DE38u;
        goto label_35de38;
    }
    ctx->pc = 0x35DE30u;
    SET_GPR_U32(ctx, 31, 0x35DE38u);
    ctx->pc = 0x35DE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DE30u;
            // 0x35de34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DE38u; }
        if (ctx->pc != 0x35DE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DE38u; }
        if (ctx->pc != 0x35DE38u) { return; }
    }
    ctx->pc = 0x35DE38u;
label_35de38:
    // 0x35de38: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_35de3c:
    if (ctx->pc == 0x35DE3Cu) {
        ctx->pc = 0x35DE40u;
        goto label_35de40;
    }
    ctx->pc = 0x35DE38u;
    {
        const bool branch_taken_0x35de38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35de38) {
            ctx->pc = 0x35DE44u;
            goto label_35de44;
        }
    }
    ctx->pc = 0x35DE40u;
label_35de40:
    // 0x35de40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35de40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35de44:
    // 0x35de44: 0x520000a4  beql        $s0, $zero, . + 4 + (0xA4 << 2)
label_35de48:
    if (ctx->pc == 0x35DE48u) {
        ctx->pc = 0x35DE48u;
            // 0x35de48: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x35DE4Cu;
        goto label_35de4c;
    }
    ctx->pc = 0x35DE44u;
    {
        const bool branch_taken_0x35de44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x35de44) {
            ctx->pc = 0x35DE48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35DE44u;
            // 0x35de48: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35E0D8u;
            goto label_35e0d8;
        }
    }
    ctx->pc = 0x35DE4Cu;
label_35de4c:
    // 0x35de4c: 0xc072b78  jal         func_1CADE0
label_35de50:
    if (ctx->pc == 0x35DE50u) {
        ctx->pc = 0x35DE50u;
            // 0x35de50: 0x9284005c  lbu         $a0, 0x5C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->pc = 0x35DE54u;
        goto label_35de54;
    }
    ctx->pc = 0x35DE4Cu;
    SET_GPR_U32(ctx, 31, 0x35DE54u);
    ctx->pc = 0x35DE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DE4Cu;
            // 0x35de50: 0x9284005c  lbu         $a0, 0x5C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DE54u; }
        if (ctx->pc != 0x35DE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DE54u; }
        if (ctx->pc != 0x35DE54u) { return; }
    }
    ctx->pc = 0x35DE54u;
label_35de54:
    // 0x35de54: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
label_35de58:
    if (ctx->pc == 0x35DE58u) {
        ctx->pc = 0x35DE5Cu;
        goto label_35de5c;
    }
    ctx->pc = 0x35DE54u;
    {
        const bool branch_taken_0x35de54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35de54) {
            ctx->pc = 0x35E0D4u;
            goto label_35e0d4;
        }
    }
    ctx->pc = 0x35DE5Cu;
label_35de5c:
    // 0x35de5c: 0xc072aaa  jal         func_1CAAA8
label_35de60:
    if (ctx->pc == 0x35DE60u) {
        ctx->pc = 0x35DE60u;
            // 0x35de60: 0x9284005c  lbu         $a0, 0x5C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->pc = 0x35DE64u;
        goto label_35de64;
    }
    ctx->pc = 0x35DE5Cu;
    SET_GPR_U32(ctx, 31, 0x35DE64u);
    ctx->pc = 0x35DE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DE5Cu;
            // 0x35de60: 0x9284005c  lbu         $a0, 0x5C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DE64u; }
        if (ctx->pc != 0x35DE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DE64u; }
        if (ctx->pc != 0x35DE64u) { return; }
    }
    ctx->pc = 0x35DE64u;
label_35de64:
    // 0x35de64: 0x1000009b  b           . + 4 + (0x9B << 2)
label_35de68:
    if (ctx->pc == 0x35DE68u) {
        ctx->pc = 0x35DE6Cu;
        goto label_35de6c;
    }
    ctx->pc = 0x35DE64u;
    {
        const bool branch_taken_0x35de64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35de64) {
            ctx->pc = 0x35E0D4u;
            goto label_35e0d4;
        }
    }
    ctx->pc = 0x35DE6Cu;
label_35de6c:
    // 0x35de6c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x35de6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_35de70:
    // 0x35de70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35de70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35de74:
    // 0x35de74: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x35de74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_35de78:
    // 0x35de78: 0x320f809  jalr        $t9
label_35de7c:
    if (ctx->pc == 0x35DE7Cu) {
        ctx->pc = 0x35DE7Cu;
            // 0x35de7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35DE80u;
        goto label_35de80;
    }
    ctx->pc = 0x35DE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35DE80u);
        ctx->pc = 0x35DE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35DE78u;
            // 0x35de7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35DE80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35DE80u; }
            if (ctx->pc != 0x35DE80u) { return; }
        }
        }
    }
    ctx->pc = 0x35DE80u;
label_35de80:
    // 0x35de80: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x35de80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_35de84:
    // 0x35de84: 0x3c02ebfa  lui         $v0, 0xEBFA
    ctx->pc = 0x35de84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60410 << 16));
label_35de88:
    // 0x35de88: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x35de88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_35de8c:
    // 0x35de8c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x35de8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_35de90:
    // 0x35de90: 0x8e2202c8  lw          $v0, 0x2C8($s1)
    ctx->pc = 0x35de90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_35de94:
    // 0x35de94: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x35de94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_35de98:
    // 0x35de98: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x35de98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_35de9c:
    // 0x35de9c: 0xc0a545c  jal         func_295170
label_35dea0:
    if (ctx->pc == 0x35DEA0u) {
        ctx->pc = 0x35DEA0u;
            // 0x35dea0: 0x628024  and         $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x35DEA4u;
        goto label_35dea4;
    }
    ctx->pc = 0x35DE9Cu;
    SET_GPR_U32(ctx, 31, 0x35DEA4u);
    ctx->pc = 0x35DEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DE9Cu;
            // 0x35dea0: 0x628024  and         $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DEA4u; }
        if (ctx->pc != 0x35DEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DEA4u; }
        if (ctx->pc != 0x35DEA4u) { return; }
    }
    ctx->pc = 0x35DEA4u;
label_35dea4:
    // 0x35dea4: 0xac50002c  sw          $s0, 0x2C($v0)
    ctx->pc = 0x35dea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 16));
label_35dea8:
    // 0x35dea8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35deac:
    // 0x35deac: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x35deacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_35deb0:
    // 0x35deb0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x35deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_35deb4:
    // 0x35deb4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35deb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35deb8:
    // 0x35deb8: 0xc08bf20  jal         func_22FC80
label_35debc:
    if (ctx->pc == 0x35DEBCu) {
        ctx->pc = 0x35DEBCu;
            // 0x35debc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35DEC0u;
        goto label_35dec0;
    }
    ctx->pc = 0x35DEB8u;
    SET_GPR_U32(ctx, 31, 0x35DEC0u);
    ctx->pc = 0x35DEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DEB8u;
            // 0x35debc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DEC0u; }
        if (ctx->pc != 0x35DEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DEC0u; }
        if (ctx->pc != 0x35DEC0u) { return; }
    }
    ctx->pc = 0x35DEC0u;
label_35dec0:
    // 0x35dec0: 0xae2002b0  sw          $zero, 0x2B0($s1)
    ctx->pc = 0x35dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 0));
label_35dec4:
    // 0x35dec4: 0x3c023727  lui         $v0, 0x3727
    ctx->pc = 0x35dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14119 << 16));
label_35dec8:
    // 0x35dec8: 0xae800de8  sw          $zero, 0xDE8($s4)
    ctx->pc = 0x35dec8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3560), GPR_U32(ctx, 0));
label_35decc:
    // 0x35decc: 0x3442c5ac  ori         $v0, $v0, 0xC5AC
    ctx->pc = 0x35deccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
label_35ded0:
    // 0x35ded0: 0xc6a10068  lwc1        $f1, 0x68($s5)
    ctx->pc = 0x35ded0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35ded4:
    // 0x35ded4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x35ded4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_35ded8:
    // 0x35ded8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35ded8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35dedc:
    // 0x35dedc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35dedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35dee0:
    // 0x35dee0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35dee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35dee4:
    // 0x35dee4: 0x24a545e0  addiu       $a1, $a1, 0x45E0
    ctx->pc = 0x35dee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17888));
label_35dee8:
    // 0x35dee8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35dee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_35deec:
    // 0x35deec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x35deecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_35def0:
    // 0x35def0: 0xc0767f0  jal         func_1D9FC0
label_35def4:
    if (ctx->pc == 0x35DEF4u) {
        ctx->pc = 0x35DEF4u;
            // 0x35def4: 0xe6800de4  swc1        $f0, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->pc = 0x35DEF8u;
        goto label_35def8;
    }
    ctx->pc = 0x35DEF0u;
    SET_GPR_U32(ctx, 31, 0x35DEF8u);
    ctx->pc = 0x35DEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DEF0u;
            // 0x35def4: 0xe6800de4  swc1        $f0, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DEF8u; }
        if (ctx->pc != 0x35DEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DEF8u; }
        if (ctx->pc != 0x35DEF8u) { return; }
    }
    ctx->pc = 0x35DEF8u;
label_35def8:
    // 0x35def8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35def8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35defc:
    // 0x35defc: 0x26840320  addiu       $a0, $s4, 0x320
    ctx->pc = 0x35defcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 800));
label_35df00:
    // 0x35df00: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x35df00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_35df04:
    // 0x35df04: 0xc04cbd8  jal         func_132F60
label_35df08:
    if (ctx->pc == 0x35DF08u) {
        ctx->pc = 0x35DF08u;
            // 0x35df08: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x35DF0Cu;
        goto label_35df0c;
    }
    ctx->pc = 0x35DF04u;
    SET_GPR_U32(ctx, 31, 0x35DF0Cu);
    ctx->pc = 0x35DF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DF04u;
            // 0x35df08: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DF0Cu; }
        if (ctx->pc != 0x35DF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DF0Cu; }
        if (ctx->pc != 0x35DF0Cu) { return; }
    }
    ctx->pc = 0x35DF0Cu;
label_35df0c:
    // 0x35df0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35df0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35df10:
    // 0x35df10: 0x26840330  addiu       $a0, $s4, 0x330
    ctx->pc = 0x35df10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 816));
label_35df14:
    // 0x35df14: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x35df14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_35df18:
    // 0x35df18: 0xc04cbd8  jal         func_132F60
label_35df1c:
    if (ctx->pc == 0x35DF1Cu) {
        ctx->pc = 0x35DF1Cu;
            // 0x35df1c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x35DF20u;
        goto label_35df20;
    }
    ctx->pc = 0x35DF18u;
    SET_GPR_U32(ctx, 31, 0x35DF20u);
    ctx->pc = 0x35DF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DF18u;
            // 0x35df1c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DF20u; }
        if (ctx->pc != 0x35DF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DF20u; }
        if (ctx->pc != 0x35DF20u) { return; }
    }
    ctx->pc = 0x35DF20u;
label_35df20:
    // 0x35df20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35df20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35df24:
    // 0x35df24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35df24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35df28:
    // 0x35df28: 0xae620118  sw          $v0, 0x118($s3)
    ctx->pc = 0x35df28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 2));
label_35df2c:
    // 0x35df2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35df2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35df30:
    // 0x35df30: 0xae600110  sw          $zero, 0x110($s3)
    ctx->pc = 0x35df30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 0));
label_35df34:
    // 0x35df34: 0xc0ab808  jal         func_2AE020
label_35df38:
    if (ctx->pc == 0x35DF38u) {
        ctx->pc = 0x35DF38u;
            // 0x35df38: 0xae60010c  sw          $zero, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x35DF3Cu;
        goto label_35df3c;
    }
    ctx->pc = 0x35DF34u;
    SET_GPR_U32(ctx, 31, 0x35DF3Cu);
    ctx->pc = 0x35DF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DF34u;
            // 0x35df38: 0xae60010c  sw          $zero, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DF3Cu; }
        if (ctx->pc != 0x35DF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DF3Cu; }
        if (ctx->pc != 0x35DF3Cu) { return; }
    }
    ctx->pc = 0x35DF3Cu;
label_35df3c:
    // 0x35df3c: 0x8e820e34  lw          $v0, 0xE34($s4)
    ctx->pc = 0x35df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_35df40:
    // 0x35df40: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x35df40u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_35df44:
    // 0x35df44: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_35df48:
    if (ctx->pc == 0x35DF48u) {
        ctx->pc = 0x35DF48u;
            // 0x35df48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35DF4Cu;
        goto label_35df4c;
    }
    ctx->pc = 0x35DF44u;
    {
        const bool branch_taken_0x35df44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x35DF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35DF44u;
            // 0x35df48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35df44) {
            ctx->pc = 0x35DF5Cu;
            goto label_35df5c;
        }
    }
    ctx->pc = 0x35DF4Cu;
label_35df4c:
    // 0x35df4c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x35df4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_35df50:
    // 0x35df50: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_35df54:
    if (ctx->pc == 0x35DF54u) {
        ctx->pc = 0x35DF58u;
        goto label_35df58;
    }
    ctx->pc = 0x35DF50u;
    {
        const bool branch_taken_0x35df50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35df50) {
            ctx->pc = 0x35DF5Cu;
            goto label_35df5c;
        }
    }
    ctx->pc = 0x35DF58u;
label_35df58:
    // 0x35df58: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x35df58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35df5c:
    // 0x35df5c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_35df60:
    if (ctx->pc == 0x35DF60u) {
        ctx->pc = 0x35DF64u;
        goto label_35df64;
    }
    ctx->pc = 0x35DF5Cu;
    {
        const bool branch_taken_0x35df5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35df5c) {
            ctx->pc = 0x35DF78u;
            goto label_35df78;
        }
    }
    ctx->pc = 0x35DF64u;
label_35df64:
    // 0x35df64: 0xc075eb4  jal         func_1D7AD0
label_35df68:
    if (ctx->pc == 0x35DF68u) {
        ctx->pc = 0x35DF68u;
            // 0x35df68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35DF6Cu;
        goto label_35df6c;
    }
    ctx->pc = 0x35DF64u;
    SET_GPR_U32(ctx, 31, 0x35DF6Cu);
    ctx->pc = 0x35DF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DF64u;
            // 0x35df68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DF6Cu; }
        if (ctx->pc != 0x35DF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DF6Cu; }
        if (ctx->pc != 0x35DF6Cu) { return; }
    }
    ctx->pc = 0x35DF6Cu;
label_35df6c:
    // 0x35df6c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_35df70:
    if (ctx->pc == 0x35DF70u) {
        ctx->pc = 0x35DF74u;
        goto label_35df74;
    }
    ctx->pc = 0x35DF6Cu;
    {
        const bool branch_taken_0x35df6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35df6c) {
            ctx->pc = 0x35DF78u;
            goto label_35df78;
        }
    }
    ctx->pc = 0x35DF74u;
label_35df74:
    // 0x35df74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35df74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35df78:
    // 0x35df78: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_35df7c:
    if (ctx->pc == 0x35DF7Cu) {
        ctx->pc = 0x35DF7Cu;
            // 0x35df7c: 0x8ea3006c  lw          $v1, 0x6C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
        ctx->pc = 0x35DF80u;
        goto label_35df80;
    }
    ctx->pc = 0x35DF78u;
    {
        const bool branch_taken_0x35df78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x35df78) {
            ctx->pc = 0x35DF7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35DF78u;
            // 0x35df7c: 0x8ea3006c  lw          $v1, 0x6C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35DF94u;
            goto label_35df94;
        }
    }
    ctx->pc = 0x35DF80u;
label_35df80:
    // 0x35df80: 0x8e830e34  lw          $v1, 0xE34($s4)
    ctx->pc = 0x35df80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_35df84:
    // 0x35df84: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x35df84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_35df88:
    // 0x35df88: 0x5462001c  bnel        $v1, $v0, . + 4 + (0x1C << 2)
label_35df8c:
    if (ctx->pc == 0x35DF8Cu) {
        ctx->pc = 0x35DF8Cu;
            // 0x35df8c: 0x8ea2006c  lw          $v0, 0x6C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
        ctx->pc = 0x35DF90u;
        goto label_35df90;
    }
    ctx->pc = 0x35DF88u;
    {
        const bool branch_taken_0x35df88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35df88) {
            ctx->pc = 0x35DF8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35DF88u;
            // 0x35df8c: 0x8ea2006c  lw          $v0, 0x6C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35DFFCu;
            goto label_35dffc;
        }
    }
    ctx->pc = 0x35DF90u;
label_35df90:
    // 0x35df90: 0x8ea3006c  lw          $v1, 0x6C($s5)
    ctx->pc = 0x35df90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_35df94:
    // 0x35df94: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x35df94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_35df98:
    // 0x35df98: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_35df9c:
    if (ctx->pc == 0x35DF9Cu) {
        ctx->pc = 0x35DF9Cu;
            // 0x35df9c: 0xc4600090  lwc1        $f0, 0x90($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x35DFA0u;
        goto label_35dfa0;
    }
    ctx->pc = 0x35DF98u;
    {
        const bool branch_taken_0x35df98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35df98) {
            ctx->pc = 0x35DF9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35DF98u;
            // 0x35df9c: 0xc4600090  lwc1        $f0, 0x90($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x35DFDCu;
            goto label_35dfdc;
        }
    }
    ctx->pc = 0x35DFA0u;
label_35dfa0:
    // 0x35dfa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35dfa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35dfa4:
    // 0x35dfa4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x35dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_35dfa8:
    // 0x35dfa8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x35dfa8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_35dfac:
    // 0x35dfac: 0xc04cbd8  jal         func_132F60
label_35dfb0:
    if (ctx->pc == 0x35DFB0u) {
        ctx->pc = 0x35DFB0u;
            // 0x35dfb0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x35DFB4u;
        goto label_35dfb4;
    }
    ctx->pc = 0x35DFACu;
    SET_GPR_U32(ctx, 31, 0x35DFB4u);
    ctx->pc = 0x35DFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35DFACu;
            // 0x35dfb0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DFB4u; }
        if (ctx->pc != 0x35DFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35DFB4u; }
        if (ctx->pc != 0x35DFB4u) { return; }
    }
    ctx->pc = 0x35DFB4u;
label_35dfb4:
    // 0x35dfb4: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x35dfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35dfb8:
    // 0x35dfb8: 0xe68003b0  swc1        $f0, 0x3B0($s4)
    ctx->pc = 0x35dfb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 944), bits); }
label_35dfbc:
    // 0x35dfbc: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x35dfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35dfc0:
    // 0x35dfc0: 0xe68003b4  swc1        $f0, 0x3B4($s4)
    ctx->pc = 0x35dfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 948), bits); }
label_35dfc4:
    // 0x35dfc4: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x35dfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35dfc8:
    // 0x35dfc8: 0xe68003b8  swc1        $f0, 0x3B8($s4)
    ctx->pc = 0x35dfc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 952), bits); }
label_35dfcc:
    // 0x35dfcc: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x35dfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35dfd0:
    // 0x35dfd0: 0x10000009  b           . + 4 + (0x9 << 2)
label_35dfd4:
    if (ctx->pc == 0x35DFD4u) {
        ctx->pc = 0x35DFD4u;
            // 0x35dfd4: 0xe68003bc  swc1        $f0, 0x3BC($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 956), bits); }
        ctx->pc = 0x35DFD8u;
        goto label_35dfd8;
    }
    ctx->pc = 0x35DFD0u;
    {
        const bool branch_taken_0x35dfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35DFD0u;
            // 0x35dfd4: 0xe68003bc  swc1        $f0, 0x3BC($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 956), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dfd0) {
            ctx->pc = 0x35DFF8u;
            goto label_35dff8;
        }
    }
    ctx->pc = 0x35DFD8u;
label_35dfd8:
    // 0x35dfd8: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x35dfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35dfdc:
    // 0x35dfdc: 0xe68003b0  swc1        $f0, 0x3B0($s4)
    ctx->pc = 0x35dfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 944), bits); }
label_35dfe0:
    // 0x35dfe0: 0xc4600094  lwc1        $f0, 0x94($v1)
    ctx->pc = 0x35dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35dfe4:
    // 0x35dfe4: 0xe68003b4  swc1        $f0, 0x3B4($s4)
    ctx->pc = 0x35dfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 948), bits); }
label_35dfe8:
    // 0x35dfe8: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x35dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35dfec:
    // 0x35dfec: 0xe68003b8  swc1        $f0, 0x3B8($s4)
    ctx->pc = 0x35dfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 952), bits); }
label_35dff0:
    // 0x35dff0: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x35dff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35dff4:
    // 0x35dff4: 0xe68003bc  swc1        $f0, 0x3BC($s4)
    ctx->pc = 0x35dff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 956), bits); }
label_35dff8:
    // 0x35dff8: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x35dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
label_35dffc:
    // 0x35dffc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x35dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_35e000:
    // 0x35e000: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x35e000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_35e004:
    // 0x35e004: 0xc04cc90  jal         func_133240
label_35e008:
    if (ctx->pc == 0x35E008u) {
        ctx->pc = 0x35E008u;
            // 0x35e008: 0x24450090  addiu       $a1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->pc = 0x35E00Cu;
        goto label_35e00c;
    }
    ctx->pc = 0x35E004u;
    SET_GPR_U32(ctx, 31, 0x35E00Cu);
    ctx->pc = 0x35E008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E004u;
            // 0x35e008: 0x24450090  addiu       $a1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E00Cu; }
        if (ctx->pc != 0x35E00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E00Cu; }
        if (ctx->pc != 0x35E00Cu) { return; }
    }
    ctx->pc = 0x35E00Cu;
label_35e00c:
    // 0x35e00c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x35e00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_35e010:
    // 0x35e010: 0xc04cc44  jal         func_133110
label_35e014:
    if (ctx->pc == 0x35E014u) {
        ctx->pc = 0x35E014u;
            // 0x35e014: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E018u;
        goto label_35e018;
    }
    ctx->pc = 0x35E010u;
    SET_GPR_U32(ctx, 31, 0x35E018u);
    ctx->pc = 0x35E014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E010u;
            // 0x35e014: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E018u; }
        if (ctx->pc != 0x35E018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E018u; }
        if (ctx->pc != 0x35E018u) { return; }
    }
    ctx->pc = 0x35E018u;
label_35e018:
    // 0x35e018: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x35e018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_35e01c:
    // 0x35e01c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x35e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_35e020:
    // 0x35e020: 0xae830db8  sw          $v1, 0xDB8($s4)
    ctx->pc = 0x35e020u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3512), GPR_U32(ctx, 3));
label_35e024:
    // 0x35e024: 0x26840340  addiu       $a0, $s4, 0x340
    ctx->pc = 0x35e024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 832));
label_35e028:
    // 0x35e028: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x35e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_35e02c:
    // 0x35e02c: 0xc6a30068  lwc1        $f3, 0x68($s5)
    ctx->pc = 0x35e02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35e030:
    // 0x35e030: 0xc7a20120  lwc1        $f2, 0x120($sp)
    ctx->pc = 0x35e030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35e034:
    // 0x35e034: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x35e034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35e038:
    // 0x35e038: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x35e038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_35e03c:
    // 0x35e03c: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x35e03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e040:
    // 0x35e040: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x35e040u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_35e044:
    // 0x35e044: 0x46031302  mul.s       $f12, $f2, $f3
    ctx->pc = 0x35e044u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_35e048:
    // 0x35e048: 0x46030b42  mul.s       $f13, $f1, $f3
    ctx->pc = 0x35e048u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_35e04c:
    // 0x35e04c: 0xc04cbd8  jal         func_132F60
label_35e050:
    if (ctx->pc == 0x35E050u) {
        ctx->pc = 0x35E050u;
            // 0x35e050: 0x46030382  mul.s       $f14, $f0, $f3 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->pc = 0x35E054u;
        goto label_35e054;
    }
    ctx->pc = 0x35E04Cu;
    SET_GPR_U32(ctx, 31, 0x35E054u);
    ctx->pc = 0x35E050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E04Cu;
            // 0x35e050: 0x46030382  mul.s       $f14, $f0, $f3 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E054u; }
        if (ctx->pc != 0x35E054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E054u; }
        if (ctx->pc != 0x35E054u) { return; }
    }
    ctx->pc = 0x35E054u;
label_35e054:
    // 0x35e054: 0x8e820d60  lw          $v0, 0xD60($s4)
    ctx->pc = 0x35e054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3424)));
label_35e058:
    // 0x35e058: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35e058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35e05c:
    // 0x35e05c: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x35e05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_35e060:
    // 0x35e060: 0xc07649c  jal         func_1D9270
label_35e064:
    if (ctx->pc == 0x35E064u) {
        ctx->pc = 0x35E064u;
            // 0x35e064: 0xa040001c  sb          $zero, 0x1C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x35E068u;
        goto label_35e068;
    }
    ctx->pc = 0x35E060u;
    SET_GPR_U32(ctx, 31, 0x35E068u);
    ctx->pc = 0x35E064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E060u;
            // 0x35e064: 0xa040001c  sb          $zero, 0x1C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E068u; }
        if (ctx->pc != 0x35E068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E068u; }
        if (ctx->pc != 0x35E068u) { return; }
    }
    ctx->pc = 0x35E068u;
label_35e068:
    // 0x35e068: 0x8e820e34  lw          $v0, 0xE34($s4)
    ctx->pc = 0x35e068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_35e06c:
    // 0x35e06c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x35e06cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_35e070:
    // 0x35e070: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_35e074:
    if (ctx->pc == 0x35E074u) {
        ctx->pc = 0x35E074u;
            // 0x35e074: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E078u;
        goto label_35e078;
    }
    ctx->pc = 0x35E070u;
    {
        const bool branch_taken_0x35e070 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x35E074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E070u;
            // 0x35e074: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e070) {
            ctx->pc = 0x35E088u;
            goto label_35e088;
        }
    }
    ctx->pc = 0x35E078u;
label_35e078:
    // 0x35e078: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x35e078u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_35e07c:
    // 0x35e07c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_35e080:
    if (ctx->pc == 0x35E080u) {
        ctx->pc = 0x35E084u;
        goto label_35e084;
    }
    ctx->pc = 0x35E07Cu;
    {
        const bool branch_taken_0x35e07c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e07c) {
            ctx->pc = 0x35E088u;
            goto label_35e088;
        }
    }
    ctx->pc = 0x35E084u;
label_35e084:
    // 0x35e084: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x35e084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35e088:
    // 0x35e088: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_35e08c:
    if (ctx->pc == 0x35E08Cu) {
        ctx->pc = 0x35E090u;
        goto label_35e090;
    }
    ctx->pc = 0x35E088u;
    {
        const bool branch_taken_0x35e088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e088) {
            ctx->pc = 0x35E0A4u;
            goto label_35e0a4;
        }
    }
    ctx->pc = 0x35E090u;
label_35e090:
    // 0x35e090: 0xc075eb4  jal         func_1D7AD0
label_35e094:
    if (ctx->pc == 0x35E094u) {
        ctx->pc = 0x35E094u;
            // 0x35e094: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E098u;
        goto label_35e098;
    }
    ctx->pc = 0x35E090u;
    SET_GPR_U32(ctx, 31, 0x35E098u);
    ctx->pc = 0x35E094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E090u;
            // 0x35e094: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E098u; }
        if (ctx->pc != 0x35E098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E098u; }
        if (ctx->pc != 0x35E098u) { return; }
    }
    ctx->pc = 0x35E098u;
label_35e098:
    // 0x35e098: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_35e09c:
    if (ctx->pc == 0x35E09Cu) {
        ctx->pc = 0x35E0A0u;
        goto label_35e0a0;
    }
    ctx->pc = 0x35E098u;
    {
        const bool branch_taken_0x35e098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e098) {
            ctx->pc = 0x35E0A4u;
            goto label_35e0a4;
        }
    }
    ctx->pc = 0x35E0A0u;
label_35e0a0:
    // 0x35e0a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35e0a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35e0a4:
    // 0x35e0a4: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_35e0a8:
    if (ctx->pc == 0x35E0A8u) {
        ctx->pc = 0x35E0A8u;
            // 0x35e0a8: 0x8e860d98  lw          $a2, 0xD98($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3480)));
        ctx->pc = 0x35E0ACu;
        goto label_35e0ac;
    }
    ctx->pc = 0x35E0A4u;
    {
        const bool branch_taken_0x35e0a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e0a4) {
            ctx->pc = 0x35E0A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35E0A4u;
            // 0x35e0a8: 0x8e860d98  lw          $a2, 0xD98($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3480)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35E0C0u;
            goto label_35e0c0;
        }
    }
    ctx->pc = 0x35E0ACu;
label_35e0ac:
    // 0x35e0ac: 0x8e830e34  lw          $v1, 0xE34($s4)
    ctx->pc = 0x35e0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_35e0b0:
    // 0x35e0b0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x35e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_35e0b4:
    // 0x35e0b4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_35e0b8:
    if (ctx->pc == 0x35E0B8u) {
        ctx->pc = 0x35E0BCu;
        goto label_35e0bc;
    }
    ctx->pc = 0x35E0B4u;
    {
        const bool branch_taken_0x35e0b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35e0b4) {
            ctx->pc = 0x35E0D4u;
            goto label_35e0d4;
        }
    }
    ctx->pc = 0x35E0BCu;
label_35e0bc:
    // 0x35e0bc: 0x8e860d98  lw          $a2, 0xD98($s4)
    ctx->pc = 0x35e0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3480)));
label_35e0c0:
    // 0x35e0c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35e0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_35e0c4:
    // 0x35e0c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35e0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35e0c8:
    // 0x35e0c8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x35e0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_35e0cc:
    // 0x35e0cc: 0xc0762b4  jal         func_1D8AD0
label_35e0d0:
    if (ctx->pc == 0x35E0D0u) {
        ctx->pc = 0x35E0D0u;
            // 0x35e0d0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35E0D4u;
        goto label_35e0d4;
    }
    ctx->pc = 0x35E0CCu;
    SET_GPR_U32(ctx, 31, 0x35E0D4u);
    ctx->pc = 0x35E0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E0CCu;
            // 0x35e0d0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8AD0u;
    if (runtime->hasFunction(0x1D8AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E0D4u; }
        if (ctx->pc != 0x35E0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8AD0_0x1d8ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E0D4u; }
        if (ctx->pc != 0x35E0D4u) { return; }
    }
    ctx->pc = 0x35E0D4u;
label_35e0d4:
    // 0x35e0d4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x35e0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_35e0d8:
    // 0x35e0d8: 0xc04c968  jal         func_1325A0
label_35e0dc:
    if (ctx->pc == 0x35E0DCu) {
        ctx->pc = 0x35E0E0u;
        goto label_35e0e0;
    }
    ctx->pc = 0x35E0D8u;
    SET_GPR_U32(ctx, 31, 0x35E0E0u);
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E0E0u; }
        if (ctx->pc != 0x35E0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E0E0u; }
        if (ctx->pc != 0x35E0E0u) { return; }
    }
    ctx->pc = 0x35E0E0u;
label_35e0e0:
    // 0x35e0e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35e0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35e0e4:
    // 0x35e0e4: 0xc0ab5d4  jal         func_2AD750
label_35e0e8:
    if (ctx->pc == 0x35E0E8u) {
        ctx->pc = 0x35E0E8u;
            // 0x35e0e8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x35E0ECu;
        goto label_35e0ec;
    }
    ctx->pc = 0x35E0E4u;
    SET_GPR_U32(ctx, 31, 0x35E0ECu);
    ctx->pc = 0x35E0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E0E4u;
            // 0x35e0e8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD750u;
    if (runtime->hasFunction(0x2AD750u)) {
        auto targetFn = runtime->lookupFunction(0x2AD750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E0ECu; }
        if (ctx->pc != 0x35E0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD750_0x2ad750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E0ECu; }
        if (ctx->pc != 0x35E0ECu) { return; }
    }
    ctx->pc = 0x35E0ECu;
label_35e0ec:
    // 0x35e0ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35e0f0:
    // 0x35e0f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35e0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35e0f4:
    // 0x35e0f4: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x35e0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_35e0f8:
    // 0x35e0f8: 0x26900560  addiu       $s0, $s4, 0x560
    ctx->pc = 0x35e0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
label_35e0fc:
    // 0x35e0fc: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x35e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_35e100:
    // 0x35e100: 0x8c840968  lw          $a0, 0x968($a0)
    ctx->pc = 0x35e100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_35e104:
    // 0x35e104: 0x8c424588  lw          $v0, 0x4588($v0)
    ctx->pc = 0x35e104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17800)));
label_35e108:
    // 0x35e108: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x35e108u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_35e10c:
    // 0x35e10c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x35e10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_35e110:
    // 0x35e110: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_35e114:
    if (ctx->pc == 0x35E114u) {
        ctx->pc = 0x35E114u;
            // 0x35e114: 0x269607e0  addiu       $s6, $s4, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 2016));
        ctx->pc = 0x35E118u;
        goto label_35e118;
    }
    ctx->pc = 0x35E110u;
    {
        const bool branch_taken_0x35e110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E110u;
            // 0x35e114: 0x269607e0  addiu       $s6, $s4, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 2016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e110) {
            ctx->pc = 0x35E13Cu;
            goto label_35e13c;
        }
    }
    ctx->pc = 0x35E118u;
label_35e118:
    // 0x35e118: 0x8243010f  lb          $v1, 0x10F($s2)
    ctx->pc = 0x35e118u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 271)));
label_35e11c:
    // 0x35e11c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x35e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_35e120:
    // 0x35e120: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_35e124:
    if (ctx->pc == 0x35E124u) {
        ctx->pc = 0x35E124u;
            // 0x35e124: 0x8243010f  lb          $v1, 0x10F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 271)));
        ctx->pc = 0x35E128u;
        goto label_35e128;
    }
    ctx->pc = 0x35E120u;
    {
        const bool branch_taken_0x35e120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35e120) {
            ctx->pc = 0x35E124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35E120u;
            // 0x35e124: 0x8243010f  lb          $v1, 0x10F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 271)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35E154u;
            goto label_35e154;
        }
    }
    ctx->pc = 0x35E128u;
label_35e128:
    // 0x35e128: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x35e128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_35e12c:
    // 0x35e12c: 0x8c424590  lw          $v0, 0x4590($v0)
    ctx->pc = 0x35e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17808)));
label_35e130:
    // 0x35e130: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x35e130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_35e134:
    // 0x35e134: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_35e138:
    if (ctx->pc == 0x35E138u) {
        ctx->pc = 0x35E13Cu;
        goto label_35e13c;
    }
    ctx->pc = 0x35E134u;
    {
        const bool branch_taken_0x35e134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e134) {
            ctx->pc = 0x35E150u;
            goto label_35e150;
        }
    }
    ctx->pc = 0x35E13Cu;
label_35e13c:
    // 0x35e13c: 0xc0ab63c  jal         func_2AD8F0
label_35e140:
    if (ctx->pc == 0x35E140u) {
        ctx->pc = 0x35E140u;
            // 0x35e140: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E144u;
        goto label_35e144;
    }
    ctx->pc = 0x35E13Cu;
    SET_GPR_U32(ctx, 31, 0x35E144u);
    ctx->pc = 0x35E140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E13Cu;
            // 0x35e140: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD8F0u;
    if (runtime->hasFunction(0x2AD8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2AD8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E144u; }
        if (ctx->pc != 0x35E144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD8F0_0x2ad8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E144u; }
        if (ctx->pc != 0x35E144u) { return; }
    }
    ctx->pc = 0x35E144u;
label_35e144:
    // 0x35e144: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x35e144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_35e148:
    // 0x35e148: 0xc04cc04  jal         func_133010
label_35e14c:
    if (ctx->pc == 0x35E14Cu) {
        ctx->pc = 0x35E14Cu;
            // 0x35e14c: 0x268402e0  addiu       $a0, $s4, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
        ctx->pc = 0x35E150u;
        goto label_35e150;
    }
    ctx->pc = 0x35E148u;
    SET_GPR_U32(ctx, 31, 0x35E150u);
    ctx->pc = 0x35E14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E148u;
            // 0x35e14c: 0x268402e0  addiu       $a0, $s4, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E150u; }
        if (ctx->pc != 0x35E150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E150u; }
        if (ctx->pc != 0x35E150u) { return; }
    }
    ctx->pc = 0x35E150u;
label_35e150:
    // 0x35e150: 0x8243010f  lb          $v1, 0x10F($s2)
    ctx->pc = 0x35e150u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 271)));
label_35e154:
    // 0x35e154: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x35e154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_35e158:
    // 0x35e158: 0x50620043  beql        $v1, $v0, . + 4 + (0x43 << 2)
label_35e15c:
    if (ctx->pc == 0x35E15Cu) {
        ctx->pc = 0x35E15Cu;
            // 0x35e15c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E160u;
        goto label_35e160;
    }
    ctx->pc = 0x35E158u;
    {
        const bool branch_taken_0x35e158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35e158) {
            ctx->pc = 0x35E15Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35E158u;
            // 0x35e15c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35E268u;
            goto label_35e268;
        }
    }
    ctx->pc = 0x35E160u;
label_35e160:
    // 0x35e160: 0x8e840d70  lw          $a0, 0xD70($s4)
    ctx->pc = 0x35e160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3440)));
label_35e164:
    // 0x35e164: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35e164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35e168:
    // 0x35e168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35e168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35e16c:
    // 0x35e16c: 0xc0bdf9c  jal         func_2F7E70
label_35e170:
    if (ctx->pc == 0x35E170u) {
        ctx->pc = 0x35E170u;
            // 0x35e170: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E174u;
        goto label_35e174;
    }
    ctx->pc = 0x35E16Cu;
    SET_GPR_U32(ctx, 31, 0x35E174u);
    ctx->pc = 0x35E170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E16Cu;
            // 0x35e170: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E174u; }
        if (ctx->pc != 0x35E174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E174u; }
        if (ctx->pc != 0x35E174u) { return; }
    }
    ctx->pc = 0x35E174u;
label_35e174:
    // 0x35e174: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x35e174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_35e178:
    // 0x35e178: 0x3c02ebfa  lui         $v0, 0xEBFA
    ctx->pc = 0x35e178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60410 << 16));
label_35e17c:
    // 0x35e17c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x35e17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_35e180:
    // 0x35e180: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x35e180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_35e184:
    // 0x35e184: 0x8e2202c8  lw          $v0, 0x2C8($s1)
    ctx->pc = 0x35e184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_35e188:
    // 0x35e188: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x35e188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_35e18c:
    // 0x35e18c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x35e18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_35e190:
    // 0x35e190: 0xc0a545c  jal         func_295170
label_35e194:
    if (ctx->pc == 0x35E194u) {
        ctx->pc = 0x35E194u;
            // 0x35e194: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x35E198u;
        goto label_35e198;
    }
    ctx->pc = 0x35E190u;
    SET_GPR_U32(ctx, 31, 0x35E198u);
    ctx->pc = 0x35E194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E190u;
            // 0x35e194: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E198u; }
        if (ctx->pc != 0x35E198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E198u; }
        if (ctx->pc != 0x35E198u) { return; }
    }
    ctx->pc = 0x35E198u;
label_35e198:
    // 0x35e198: 0xac53002c  sw          $s3, 0x2C($v0)
    ctx->pc = 0x35e198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 19));
label_35e19c:
    // 0x35e19c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35e1a0:
    // 0x35e1a0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x35e1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_35e1a4:
    // 0x35e1a4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x35e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_35e1a8:
    // 0x35e1a8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35e1ac:
    // 0x35e1ac: 0xc08bf20  jal         func_22FC80
label_35e1b0:
    if (ctx->pc == 0x35E1B0u) {
        ctx->pc = 0x35E1B0u;
            // 0x35e1b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E1B4u;
        goto label_35e1b4;
    }
    ctx->pc = 0x35E1ACu;
    SET_GPR_U32(ctx, 31, 0x35E1B4u);
    ctx->pc = 0x35E1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E1ACu;
            // 0x35e1b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E1B4u; }
        if (ctx->pc != 0x35E1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E1B4u; }
        if (ctx->pc != 0x35E1B4u) { return; }
    }
    ctx->pc = 0x35E1B4u;
label_35e1b4:
    // 0x35e1b4: 0x8245010c  lb          $a1, 0x10C($s2)
    ctx->pc = 0x35e1b4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 268)));
label_35e1b8:
    // 0x35e1b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35e1bc:
    // 0x35e1bc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x35e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_35e1c0:
    // 0x35e1c0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x35e1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_35e1c4:
    // 0x35e1c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x35e1c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_35e1c8:
    // 0x35e1c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35e1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35e1cc:
    // 0x35e1cc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x35e1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_35e1d0:
    // 0x35e1d0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x35e1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_35e1d4:
    // 0x35e1d4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x35e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_35e1d8:
    // 0x35e1d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35e1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35e1dc:
    // 0x35e1dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35e1e0:
    // 0x35e1e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x35e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_35e1e4:
    // 0x35e1e4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x35e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_35e1e8:
    // 0x35e1e8: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x35e1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_35e1ec:
    // 0x35e1ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35e1ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35e1f0:
    // 0x35e1f0: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x35e1f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_35e1f4:
    // 0x35e1f4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x35e1f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_35e1f8:
    // 0x35e1f8: 0x320f809  jalr        $t9
label_35e1fc:
    if (ctx->pc == 0x35E1FCu) {
        ctx->pc = 0x35E1FCu;
            // 0x35e1fc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x35E200u;
        goto label_35e200;
    }
    ctx->pc = 0x35E1F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35E200u);
        ctx->pc = 0x35E1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E1F8u;
            // 0x35e1fc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35E200u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35E200u; }
            if (ctx->pc != 0x35E200u) { return; }
        }
        }
    }
    ctx->pc = 0x35E200u;
label_35e200:
    // 0x35e200: 0x8e590058  lw          $t9, 0x58($s2)
    ctx->pc = 0x35e200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_35e204:
    // 0x35e204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35e204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35e208:
    // 0x35e208: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35e208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_35e20c:
    // 0x35e20c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x35e20cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_35e210:
    // 0x35e210: 0x320f809  jalr        $t9
label_35e214:
    if (ctx->pc == 0x35E214u) {
        ctx->pc = 0x35E214u;
            // 0x35e214: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x35E218u;
        goto label_35e218;
    }
    ctx->pc = 0x35E210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35E218u);
        ctx->pc = 0x35E214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E210u;
            // 0x35e214: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35E218u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35E218u; }
            if (ctx->pc != 0x35E218u) { return; }
        }
        }
    }
    ctx->pc = 0x35E218u;
label_35e218:
    // 0x35e218: 0x8e820e38  lw          $v0, 0xE38($s4)
    ctx->pc = 0x35e218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3640)));
label_35e21c:
    // 0x35e21c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x35e21cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_35e220:
    // 0x35e220: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_35e224:
    if (ctx->pc == 0x35E224u) {
        ctx->pc = 0x35E224u;
            // 0x35e224: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E228u;
        goto label_35e228;
    }
    ctx->pc = 0x35E220u;
    {
        const bool branch_taken_0x35e220 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x35E224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E220u;
            // 0x35e224: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e220) {
            ctx->pc = 0x35E238u;
            goto label_35e238;
        }
    }
    ctx->pc = 0x35E228u;
label_35e228:
    // 0x35e228: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x35e228u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_35e22c:
    // 0x35e22c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_35e230:
    if (ctx->pc == 0x35E230u) {
        ctx->pc = 0x35E234u;
        goto label_35e234;
    }
    ctx->pc = 0x35E22Cu;
    {
        const bool branch_taken_0x35e22c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e22c) {
            ctx->pc = 0x35E238u;
            goto label_35e238;
        }
    }
    ctx->pc = 0x35E234u;
label_35e234:
    // 0x35e234: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x35e234u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35e238:
    // 0x35e238: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_35e23c:
    if (ctx->pc == 0x35E23Cu) {
        ctx->pc = 0x35E240u;
        goto label_35e240;
    }
    ctx->pc = 0x35E238u;
    {
        const bool branch_taken_0x35e238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e238) {
            ctx->pc = 0x35E254u;
            goto label_35e254;
        }
    }
    ctx->pc = 0x35E240u;
label_35e240:
    // 0x35e240: 0xc075eb4  jal         func_1D7AD0
label_35e244:
    if (ctx->pc == 0x35E244u) {
        ctx->pc = 0x35E244u;
            // 0x35e244: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E248u;
        goto label_35e248;
    }
    ctx->pc = 0x35E240u;
    SET_GPR_U32(ctx, 31, 0x35E248u);
    ctx->pc = 0x35E244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E240u;
            // 0x35e244: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E248u; }
        if (ctx->pc != 0x35E248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E248u; }
        if (ctx->pc != 0x35E248u) { return; }
    }
    ctx->pc = 0x35E248u;
label_35e248:
    // 0x35e248: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_35e24c:
    if (ctx->pc == 0x35E24Cu) {
        ctx->pc = 0x35E250u;
        goto label_35e250;
    }
    ctx->pc = 0x35E248u;
    {
        const bool branch_taken_0x35e248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e248) {
            ctx->pc = 0x35E254u;
            goto label_35e254;
        }
    }
    ctx->pc = 0x35E250u;
label_35e250:
    // 0x35e250: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35e250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35e254:
    // 0x35e254: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_35e258:
    if (ctx->pc == 0x35E258u) {
        ctx->pc = 0x35E25Cu;
        goto label_35e25c;
    }
    ctx->pc = 0x35E254u;
    {
        const bool branch_taken_0x35e254 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e254) {
            ctx->pc = 0x35E264u;
            goto label_35e264;
        }
    }
    ctx->pc = 0x35E25Cu;
label_35e25c:
    // 0x35e25c: 0xc072a56  jal         func_1CA958
label_35e260:
    if (ctx->pc == 0x35E260u) {
        ctx->pc = 0x35E260u;
            // 0x35e260: 0x9284005c  lbu         $a0, 0x5C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->pc = 0x35E264u;
        goto label_35e264;
    }
    ctx->pc = 0x35E25Cu;
    SET_GPR_U32(ctx, 31, 0x35E264u);
    ctx->pc = 0x35E260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E25Cu;
            // 0x35e260: 0x9284005c  lbu         $a0, 0x5C($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E264u; }
        if (ctx->pc != 0x35E264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E264u; }
        if (ctx->pc != 0x35E264u) { return; }
    }
    ctx->pc = 0x35E264u;
label_35e264:
    // 0x35e264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35e268:
    // 0x35e268: 0xc075318  jal         func_1D4C60
label_35e26c:
    if (ctx->pc == 0x35E26Cu) {
        ctx->pc = 0x35E26Cu;
            // 0x35e26c: 0x268502e0  addiu       $a1, $s4, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
        ctx->pc = 0x35E270u;
        goto label_35e270;
    }
    ctx->pc = 0x35E268u;
    SET_GPR_U32(ctx, 31, 0x35E270u);
    ctx->pc = 0x35E26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E268u;
            // 0x35e26c: 0x268502e0  addiu       $a1, $s4, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E270u; }
        if (ctx->pc != 0x35E270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E270u; }
        if (ctx->pc != 0x35E270u) { return; }
    }
    ctx->pc = 0x35E270u;
label_35e270:
    // 0x35e270: 0x26c40060  addiu       $a0, $s6, 0x60
    ctx->pc = 0x35e270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
label_35e274:
    // 0x35e274: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35e274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35e278:
    // 0x35e278: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35e278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35e27c:
    // 0x35e27c: 0xc0c6250  jal         func_318940
label_35e280:
    if (ctx->pc == 0x35E280u) {
        ctx->pc = 0x35E280u;
            // 0x35e280: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E284u;
        goto label_35e284;
    }
    ctx->pc = 0x35E27Cu;
    SET_GPR_U32(ctx, 31, 0x35E284u);
    ctx->pc = 0x35E280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E27Cu;
            // 0x35e280: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E284u; }
        if (ctx->pc != 0x35E284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E284u; }
        if (ctx->pc != 0x35E284u) { return; }
    }
    ctx->pc = 0x35E284u;
label_35e284:
    // 0x35e284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35e288:
    // 0x35e288: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x35e288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_35e28c:
    // 0x35e28c: 0xc075378  jal         func_1D4DE0
label_35e290:
    if (ctx->pc == 0x35E290u) {
        ctx->pc = 0x35E290u;
            // 0x35e290: 0x26860830  addiu       $a2, $s4, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2096));
        ctx->pc = 0x35E294u;
        goto label_35e294;
    }
    ctx->pc = 0x35E28Cu;
    SET_GPR_U32(ctx, 31, 0x35E294u);
    ctx->pc = 0x35E290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E28Cu;
            // 0x35e290: 0x26860830  addiu       $a2, $s4, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E294u; }
        if (ctx->pc != 0x35E294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E294u; }
        if (ctx->pc != 0x35E294u) { return; }
    }
    ctx->pc = 0x35E294u;
label_35e294:
    // 0x35e294: 0xc6810880  lwc1        $f1, 0x880($s4)
    ctx->pc = 0x35e294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35e298:
    // 0x35e298: 0x2684087c  addiu       $a0, $s4, 0x87C
    ctx->pc = 0x35e298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2172));
label_35e29c:
    // 0x35e29c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x35e29cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_35e2a0:
    // 0x35e2a0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x35e2a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_35e2a4:
    // 0x35e2a4: 0xc0c753c  jal         func_31D4F0
label_35e2a8:
    if (ctx->pc == 0x35E2A8u) {
        ctx->pc = 0x35E2A8u;
            // 0x35e2a8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x35E2ACu;
        goto label_35e2ac;
    }
    ctx->pc = 0x35E2A4u;
    SET_GPR_U32(ctx, 31, 0x35E2ACu);
    ctx->pc = 0x35E2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E2A4u;
            // 0x35e2a8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E2ACu; }
        if (ctx->pc != 0x35E2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E2ACu; }
        if (ctx->pc != 0x35E2ACu) { return; }
    }
    ctx->pc = 0x35E2ACu;
label_35e2ac:
    // 0x35e2ac: 0xc68c0930  lwc1        $f12, 0x930($s4)
    ctx->pc = 0x35e2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_35e2b0:
    // 0x35e2b0: 0x26910890  addiu       $s1, $s4, 0x890
    ctx->pc = 0x35e2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
label_35e2b4:
    // 0x35e2b4: 0xc68d0880  lwc1        $f13, 0x880($s4)
    ctx->pc = 0x35e2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_35e2b8:
    // 0x35e2b8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x35e2b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_35e2bc:
    // 0x35e2bc: 0xc0c753c  jal         func_31D4F0
label_35e2c0:
    if (ctx->pc == 0x35E2C0u) {
        ctx->pc = 0x35E2C0u;
            // 0x35e2c0: 0x2624009c  addiu       $a0, $s1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
        ctx->pc = 0x35E2C4u;
        goto label_35e2c4;
    }
    ctx->pc = 0x35E2BCu;
    SET_GPR_U32(ctx, 31, 0x35E2C4u);
    ctx->pc = 0x35E2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E2BCu;
            // 0x35e2c0: 0x2624009c  addiu       $a0, $s1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E2C4u; }
        if (ctx->pc != 0x35E2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E2C4u; }
        if (ctx->pc != 0x35E2C4u) { return; }
    }
    ctx->pc = 0x35E2C4u;
label_35e2c4:
    // 0x35e2c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_35e2c8:
    // 0x35e2c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35e2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35e2cc:
    // 0x35e2cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35e2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35e2d0:
    // 0x35e2d0: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x35e2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_35e2d4:
    // 0x35e2d4: 0xc0c6250  jal         func_318940
label_35e2d8:
    if (ctx->pc == 0x35E2D8u) {
        ctx->pc = 0x35E2D8u;
            // 0x35e2d8: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x35E2DCu;
        goto label_35e2dc;
    }
    ctx->pc = 0x35E2D4u;
    SET_GPR_U32(ctx, 31, 0x35E2DCu);
    ctx->pc = 0x35E2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E2D4u;
            // 0x35e2d8: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E2DCu; }
        if (ctx->pc != 0x35E2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E2DCu; }
        if (ctx->pc != 0x35E2DCu) { return; }
    }
    ctx->pc = 0x35E2DCu;
label_35e2dc:
    // 0x35e2dc: 0xc0c7550  jal         func_31D540
label_35e2e0:
    if (ctx->pc == 0x35E2E0u) {
        ctx->pc = 0x35E2E0u;
            // 0x35e2e0: 0x2624009c  addiu       $a0, $s1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
        ctx->pc = 0x35E2E4u;
        goto label_35e2e4;
    }
    ctx->pc = 0x35E2DCu;
    SET_GPR_U32(ctx, 31, 0x35E2E4u);
    ctx->pc = 0x35E2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E2DCu;
            // 0x35e2e0: 0x2624009c  addiu       $a0, $s1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D540u;
    if (runtime->hasFunction(0x31D540u)) {
        auto targetFn = runtime->lookupFunction(0x31D540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E2E4u; }
        if (ctx->pc != 0x35E2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D540_0x31d540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E2E4u; }
        if (ctx->pc != 0x35E2E4u) { return; }
    }
    ctx->pc = 0x35E2E4u;
label_35e2e4:
    // 0x35e2e4: 0xc0b9210  jal         func_2E4840
label_35e2e8:
    if (ctx->pc == 0x35E2E8u) {
        ctx->pc = 0x35E2E8u;
            // 0x35e2e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E2ECu;
        goto label_35e2ec;
    }
    ctx->pc = 0x35E2E4u;
    SET_GPR_U32(ctx, 31, 0x35E2ECu);
    ctx->pc = 0x35E2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E2E4u;
            // 0x35e2e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E2ECu; }
        if (ctx->pc != 0x35E2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E2ECu; }
        if (ctx->pc != 0x35E2ECu) { return; }
    }
    ctx->pc = 0x35E2ECu;
label_35e2ec:
    // 0x35e2ec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x35e2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_35e2f0:
    // 0x35e2f0: 0xc04ccf4  jal         func_1333D0
label_35e2f4:
    if (ctx->pc == 0x35E2F4u) {
        ctx->pc = 0x35E2F4u;
            // 0x35e2f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E2F8u;
        goto label_35e2f8;
    }
    ctx->pc = 0x35E2F0u;
    SET_GPR_U32(ctx, 31, 0x35E2F8u);
    ctx->pc = 0x35E2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E2F0u;
            // 0x35e2f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E2F8u; }
        if (ctx->pc != 0x35E2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E2F8u; }
        if (ctx->pc != 0x35E2F8u) { return; }
    }
    ctx->pc = 0x35E2F8u;
label_35e2f8:
    // 0x35e2f8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x35e2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_35e2fc:
    // 0x35e2fc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x35e2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_35e300:
    // 0x35e300: 0xc04cca0  jal         func_133280
label_35e304:
    if (ctx->pc == 0x35E304u) {
        ctx->pc = 0x35E304u;
            // 0x35e304: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x35E308u;
        goto label_35e308;
    }
    ctx->pc = 0x35E300u;
    SET_GPR_U32(ctx, 31, 0x35E308u);
    ctx->pc = 0x35E304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E300u;
            // 0x35e304: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E308u; }
        if (ctx->pc != 0x35E308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E308u; }
        if (ctx->pc != 0x35E308u) { return; }
    }
    ctx->pc = 0x35E308u;
label_35e308:
    // 0x35e308: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x35e308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_35e30c:
    // 0x35e30c: 0xc04cc44  jal         func_133110
label_35e310:
    if (ctx->pc == 0x35E310u) {
        ctx->pc = 0x35E310u;
            // 0x35e310: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E314u;
        goto label_35e314;
    }
    ctx->pc = 0x35E30Cu;
    SET_GPR_U32(ctx, 31, 0x35E314u);
    ctx->pc = 0x35E310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E30Cu;
            // 0x35e310: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E314u; }
        if (ctx->pc != 0x35E314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E314u; }
        if (ctx->pc != 0x35E314u) { return; }
    }
    ctx->pc = 0x35E314u;
label_35e314:
    // 0x35e314: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x35e314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35e318:
    // 0x35e318: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x35e318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e31c:
    // 0x35e31c: 0xc7ac00e4  lwc1        $f12, 0xE4($sp)
    ctx->pc = 0x35e31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_35e320:
    // 0x35e320: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x35e320u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_35e324:
    // 0x35e324: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x35e324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_35e328:
    // 0x35e328: 0x46000344  c1          0x344
    ctx->pc = 0x35e328u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_35e32c:
    // 0x35e32c: 0x0  nop
    ctx->pc = 0x35e32cu;
    // NOP
label_35e330:
    // 0x35e330: 0x0  nop
    ctx->pc = 0x35e330u;
    // NOP
label_35e334:
    // 0x35e334: 0xc04780a  jal         func_11E028
label_35e338:
    if (ctx->pc == 0x35E338u) {
        ctx->pc = 0x35E33Cu;
        goto label_35e33c;
    }
    ctx->pc = 0x35E334u;
    SET_GPR_U32(ctx, 31, 0x35E33Cu);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E33Cu; }
        if (ctx->pc != 0x35E33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E33Cu; }
        if (ctx->pc != 0x35E33Cu) { return; }
    }
    ctx->pc = 0x35E33Cu;
label_35e33c:
    // 0x35e33c: 0x3c024265  lui         $v0, 0x4265
    ctx->pc = 0x35e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16997 << 16));
label_35e340:
    // 0x35e340: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x35e340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
label_35e344:
    // 0x35e344: 0x34442ee1  ori         $a0, $v0, 0x2EE1
    ctx->pc = 0x35e344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12001);
label_35e348:
    // 0x35e348: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35e348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35e34c:
    // 0x35e34c: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x35e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_35e350:
    // 0x35e350: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x35e350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_35e354:
    // 0x35e354: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x35e354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_35e358:
    // 0x35e358: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x35e358u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_35e35c:
    // 0x35e35c: 0x0  nop
    ctx->pc = 0x35e35cu;
    // NOP
label_35e360:
    // 0x35e360: 0x46026018  adda.s      $f12, $f2
    ctx->pc = 0x35e360u;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_35e364:
    // 0x35e364: 0x26840b10  addiu       $a0, $s4, 0xB10
    ctx->pc = 0x35e364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2832));
label_35e368:
    // 0x35e368: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x35e368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35e36c:
    // 0x35e36c: 0x0  nop
    ctx->pc = 0x35e36cu;
    // NOP
label_35e370:
    // 0x35e370: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x35e370u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_35e374:
    // 0x35e374: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x35e374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_35e378:
    // 0x35e378: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35e378u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_35e37c:
    // 0x35e37c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x35e37cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_35e380:
    // 0x35e380: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x35e380u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_35e384:
    // 0x35e384: 0xae820af0  sw          $v0, 0xAF0($s4)
    ctx->pc = 0x35e384u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2800), GPR_U32(ctx, 2));
label_35e388:
    // 0x35e388: 0xc04cbd8  jal         func_132F60
label_35e38c:
    if (ctx->pc == 0x35E38Cu) {
        ctx->pc = 0x35E38Cu;
            // 0x35e38c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x35E390u;
        goto label_35e390;
    }
    ctx->pc = 0x35E388u;
    SET_GPR_U32(ctx, 31, 0x35E390u);
    ctx->pc = 0x35E38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E388u;
            // 0x35e38c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E390u; }
        if (ctx->pc != 0x35E390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E390u; }
        if (ctx->pc != 0x35E390u) { return; }
    }
    ctx->pc = 0x35E390u;
label_35e390:
    // 0x35e390: 0x8e900d60  lw          $s0, 0xD60($s4)
    ctx->pc = 0x35e390u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3424)));
label_35e394:
    // 0x35e394: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x35e394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
label_35e398:
    // 0x35e398: 0x344501a9  ori         $a1, $v0, 0x1A9
    ctx->pc = 0x35e398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
label_35e39c:
    // 0x35e39c: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x35e39cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_35e3a0:
    // 0x35e3a0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x35e3a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_35e3a4:
    // 0x35e3a4: 0x320f809  jalr        $t9
label_35e3a8:
    if (ctx->pc == 0x35E3A8u) {
        ctx->pc = 0x35E3A8u;
            // 0x35e3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E3ACu;
        goto label_35e3ac;
    }
    ctx->pc = 0x35E3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35E3ACu);
        ctx->pc = 0x35E3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E3A4u;
            // 0x35e3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35E3ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35E3ACu; }
            if (ctx->pc != 0x35E3ACu) { return; }
        }
        }
    }
    ctx->pc = 0x35E3ACu;
label_35e3ac:
    // 0x35e3ac: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x35e3acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_35e3b0:
    // 0x35e3b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35e3b4:
    // 0x35e3b4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x35e3b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_35e3b8:
    // 0x35e3b8: 0x320f809  jalr        $t9
label_35e3bc:
    if (ctx->pc == 0x35E3BCu) {
        ctx->pc = 0x35E3BCu;
            // 0x35e3bc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x35E3C0u;
        goto label_35e3c0;
    }
    ctx->pc = 0x35E3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35E3C0u);
        ctx->pc = 0x35E3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E3B8u;
            // 0x35e3bc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35E3C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35E3C0u; }
            if (ctx->pc != 0x35E3C0u) { return; }
        }
        }
    }
    ctx->pc = 0x35E3C0u;
label_35e3c0:
    // 0x35e3c0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x35e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_35e3c4:
    // 0x35e3c4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x35e3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_35e3c8:
    // 0x35e3c8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x35e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_35e3cc:
    // 0x35e3cc: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x35e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_35e3d0:
    // 0x35e3d0: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
label_35e3d4:
    if (ctx->pc == 0x35E3D4u) {
        ctx->pc = 0x35E3D8u;
        goto label_35e3d8;
    }
    ctx->pc = 0x35E3D0u;
    {
        const bool branch_taken_0x35e3d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x35e3d0) {
            ctx->pc = 0x35E3ECu;
            goto label_35e3ec;
        }
    }
    ctx->pc = 0x35E3D8u;
label_35e3d8:
    // 0x35e3d8: 0x8ea400a8  lw          $a0, 0xA8($s5)
    ctx->pc = 0x35e3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 168)));
label_35e3dc:
    // 0x35e3dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_35e3e0:
    if (ctx->pc == 0x35E3E0u) {
        ctx->pc = 0x35E3E4u;
        goto label_35e3e4;
    }
    ctx->pc = 0x35E3DCu;
    {
        const bool branch_taken_0x35e3dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e3dc) {
            ctx->pc = 0x35E3ECu;
            goto label_35e3ec;
        }
    }
    ctx->pc = 0x35E3E4u;
label_35e3e4:
    // 0x35e3e4: 0xc135fb8  jal         func_4D7EE0
label_35e3e8:
    if (ctx->pc == 0x35E3E8u) {
        ctx->pc = 0x35E3ECu;
        goto label_35e3ec;
    }
    ctx->pc = 0x35E3E4u;
    SET_GPR_U32(ctx, 31, 0x35E3ECu);
    ctx->pc = 0x4D7EE0u;
    if (runtime->hasFunction(0x4D7EE0u)) {
        auto targetFn = runtime->lookupFunction(0x4D7EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E3ECu; }
        if (ctx->pc != 0x35E3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D7EE0_0x4d7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E3ECu; }
        if (ctx->pc != 0x35E3ECu) { return; }
    }
    ctx->pc = 0x35E3ECu;
label_35e3ec:
    // 0x35e3ec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x35e3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_35e3f0:
    // 0x35e3f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x35e3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35e3f4:
    // 0x35e3f4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x35e3f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_35e3f8:
    // 0x35e3f8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x35e3f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_35e3fc:
    // 0x35e3fc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x35e3fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35e400:
    // 0x35e400: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x35e400u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35e404:
    // 0x35e404: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x35e404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35e408:
    // 0x35e408: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35e408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35e40c:
    // 0x35e40c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35e40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35e410:
    // 0x35e410: 0x3e00008  jr          $ra
label_35e414:
    if (ctx->pc == 0x35E414u) {
        ctx->pc = 0x35E414u;
            // 0x35e414: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x35E418u;
        goto label_35e418;
    }
    ctx->pc = 0x35E410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E410u;
            // 0x35e414: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35E418u;
label_35e418:
    // 0x35e418: 0x0  nop
    ctx->pc = 0x35e418u;
    // NOP
label_35e41c:
    // 0x35e41c: 0x0  nop
    ctx->pc = 0x35e41cu;
    // NOP
label_35e420:
    // 0x35e420: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35e420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35e424:
    // 0x35e424: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x35e424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_35e428:
    // 0x35e428: 0x3200008  jr          $t9
label_35e42c:
    if (ctx->pc == 0x35E42Cu) {
        ctx->pc = 0x35E430u;
        goto label_35e430;
    }
    ctx->pc = 0x35E428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35E430u;
label_35e430:
    // 0x35e430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35e434:
    // 0x35e434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35e434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_35e438:
    // 0x35e438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35e438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35e43c:
    // 0x35e43c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35e43cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35e440:
    // 0x35e440: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x35e440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_35e444:
    // 0x35e444: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_35e448:
    if (ctx->pc == 0x35E448u) {
        ctx->pc = 0x35E448u;
            // 0x35e448: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x35E44Cu;
        goto label_35e44c;
    }
    ctx->pc = 0x35E444u;
    {
        const bool branch_taken_0x35e444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e444) {
            ctx->pc = 0x35E448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35E444u;
            // 0x35e448: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35E46Cu;
            goto label_35e46c;
        }
    }
    ctx->pc = 0x35E44Cu;
label_35e44c:
    // 0x35e44c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_35e450:
    if (ctx->pc == 0x35E450u) {
        ctx->pc = 0x35E450u;
            // 0x35e450: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x35E454u;
        goto label_35e454;
    }
    ctx->pc = 0x35E44Cu;
    {
        const bool branch_taken_0x35e44c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e44c) {
            ctx->pc = 0x35E450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35E44Cu;
            // 0x35e450: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35E468u;
            goto label_35e468;
        }
    }
    ctx->pc = 0x35E454u;
label_35e454:
    // 0x35e454: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35e454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35e458:
    // 0x35e458: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x35e458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_35e45c:
    // 0x35e45c: 0x320f809  jalr        $t9
label_35e460:
    if (ctx->pc == 0x35E460u) {
        ctx->pc = 0x35E460u;
            // 0x35e460: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35E464u;
        goto label_35e464;
    }
    ctx->pc = 0x35E45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35E464u);
        ctx->pc = 0x35E460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E45Cu;
            // 0x35e460: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35E464u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35E464u; }
            if (ctx->pc != 0x35E464u) { return; }
        }
        }
    }
    ctx->pc = 0x35E464u;
label_35e464:
    // 0x35e464: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x35e464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_35e468:
    // 0x35e468: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35e468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35e46c:
    // 0x35e46c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35e46cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35e470:
    // 0x35e470: 0x3e00008  jr          $ra
label_35e474:
    if (ctx->pc == 0x35E474u) {
        ctx->pc = 0x35E474u;
            // 0x35e474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x35E478u;
        goto label_35e478;
    }
    ctx->pc = 0x35E470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E470u;
            // 0x35e474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35E478u;
label_35e478:
    // 0x35e478: 0x0  nop
    ctx->pc = 0x35e478u;
    // NOP
label_35e47c:
    // 0x35e47c: 0x0  nop
    ctx->pc = 0x35e47cu;
    // NOP
label_35e480:
    // 0x35e480: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x35e480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35e484:
    // 0x35e484: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x35e484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_35e488:
    // 0x35e488: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35e488u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35e48c:
    // 0x35e48c: 0x0  nop
    ctx->pc = 0x35e48cu;
    // NOP
label_35e490:
    // 0x35e490: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x35e490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35e494:
    // 0x35e494: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_35e498:
    if (ctx->pc == 0x35E498u) {
        ctx->pc = 0x35E498u;
            // 0x35e498: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x35E49Cu;
        goto label_35e49c;
    }
    ctx->pc = 0x35E494u;
    {
        const bool branch_taken_0x35e494 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35e494) {
            ctx->pc = 0x35E498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35E494u;
            // 0x35e498: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x35E4ACu;
            goto label_35e4ac;
        }
    }
    ctx->pc = 0x35E49Cu;
label_35e49c:
    // 0x35e49c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35e49cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_35e4a0:
    // 0x35e4a0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x35e4a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_35e4a4:
    // 0x35e4a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_35e4a8:
    if (ctx->pc == 0x35E4A8u) {
        ctx->pc = 0x35E4A8u;
            // 0x35e4a8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x35E4ACu;
        goto label_35e4ac;
    }
    ctx->pc = 0x35E4A4u;
    {
        const bool branch_taken_0x35e4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E4A4u;
            // 0x35e4a8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e4a4) {
            ctx->pc = 0x35E4C4u;
            goto label_35e4c4;
        }
    }
    ctx->pc = 0x35E4ACu;
label_35e4ac:
    // 0x35e4ac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_35e4b0:
    // 0x35e4b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35e4b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_35e4b4:
    // 0x35e4b4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x35e4b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_35e4b8:
    // 0x35e4b8: 0x0  nop
    ctx->pc = 0x35e4b8u;
    // NOP
label_35e4bc:
    // 0x35e4bc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x35e4bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_35e4c0:
    // 0x35e4c0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x35e4c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_35e4c4:
    // 0x35e4c4: 0xa48500a4  sh          $a1, 0xA4($a0)
    ctx->pc = 0x35e4c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 164), (uint16_t)GPR_U32(ctx, 5));
label_35e4c8:
    // 0x35e4c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35e4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35e4cc:
    // 0x35e4cc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x35e4ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_35e4d0:
    // 0x35e4d0: 0x54a30004  bnel        $a1, $v1, . + 4 + (0x4 << 2)
label_35e4d4:
    if (ctx->pc == 0x35E4D4u) {
        ctx->pc = 0x35E4D4u;
            // 0x35e4d4: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x35E4D8u;
        goto label_35e4d8;
    }
    ctx->pc = 0x35E4D0u;
    {
        const bool branch_taken_0x35e4d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x35e4d0) {
            ctx->pc = 0x35E4D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35E4D0u;
            // 0x35e4d4: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35E4E4u;
            goto label_35e4e4;
        }
    }
    ctx->pc = 0x35E4D8u;
label_35e4d8:
    // 0x35e4d8: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x35e4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e4dc:
    // 0x35e4dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_35e4e0:
    if (ctx->pc == 0x35E4E0u) {
        ctx->pc = 0x35E4E0u;
            // 0x35e4e0: 0xe48000a0  swc1        $f0, 0xA0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
        ctx->pc = 0x35E4E4u;
        goto label_35e4e4;
    }
    ctx->pc = 0x35E4DCu;
    {
        const bool branch_taken_0x35e4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E4DCu;
            // 0x35e4e0: 0xe48000a0  swc1        $f0, 0xA0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e4dc) {
            ctx->pc = 0x35E4E8u;
            goto label_35e4e8;
        }
    }
    ctx->pc = 0x35E4E4u;
label_35e4e4:
    // 0x35e4e4: 0xac8300a0  sw          $v1, 0xA0($a0)
    ctx->pc = 0x35e4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 3));
label_35e4e8:
    // 0x35e4e8: 0x3e00008  jr          $ra
label_35e4ec:
    if (ctx->pc == 0x35E4ECu) {
        ctx->pc = 0x35E4F0u;
        goto label_35e4f0;
    }
    ctx->pc = 0x35E4E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35E4F0u;
label_35e4f0:
    // 0x35e4f0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x35e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_35e4f4:
    // 0x35e4f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35e4f8:
    // 0x35e4f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35e4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_35e4fc:
    // 0x35e4fc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x35e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_35e500:
    // 0x35e500: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35e500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35e504:
    // 0x35e504: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35e504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35e508:
    // 0x35e508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35e508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35e50c:
    // 0x35e50c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x35e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_35e510:
    // 0x35e510: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x35e510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_35e514:
    // 0x35e514: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_35e518:
    if (ctx->pc == 0x35E518u) {
        ctx->pc = 0x35E518u;
            // 0x35e518: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E51Cu;
        goto label_35e51c;
    }
    ctx->pc = 0x35E514u;
    {
        const bool branch_taken_0x35e514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35E518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E514u;
            // 0x35e518: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e514) {
            ctx->pc = 0x35E52Cu;
            goto label_35e52c;
        }
    }
    ctx->pc = 0x35E51Cu;
label_35e51c:
    // 0x35e51c: 0x3c023f6d  lui         $v0, 0x3F6D
    ctx->pc = 0x35e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16237 << 16));
label_35e520:
    // 0x35e520: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x35e520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_35e524:
    // 0x35e524: 0x1000000b  b           . + 4 + (0xB << 2)
label_35e528:
    if (ctx->pc == 0x35E528u) {
        ctx->pc = 0x35E528u;
            // 0x35e528: 0xae420068  sw          $v0, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
        ctx->pc = 0x35E52Cu;
        goto label_35e52c;
    }
    ctx->pc = 0x35E524u;
    {
        const bool branch_taken_0x35e524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E524u;
            // 0x35e528: 0xae420068  sw          $v0, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e524) {
            ctx->pc = 0x35E554u;
            goto label_35e554;
        }
    }
    ctx->pc = 0x35E52Cu;
label_35e52c:
    // 0x35e52c: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x35e52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35e530:
    // 0x35e530: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x35e530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_35e534:
    // 0x35e534: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x35e534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_35e538:
    // 0x35e538: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x35e538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_35e53c:
    // 0x35e53c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x35e53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_35e540:
    // 0x35e540: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x35e540u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_35e544:
    // 0x35e544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35e544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35e548:
    // 0x35e548: 0x0  nop
    ctx->pc = 0x35e548u;
    // NOP
label_35e54c:
    // 0x35e54c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x35e54cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_35e550:
    // 0x35e550: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x35e550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
label_35e554:
    // 0x35e554: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x35e554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35e558:
    // 0x35e558: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35e558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35e55c:
    // 0x35e55c: 0x0  nop
    ctx->pc = 0x35e55cu;
    // NOP
label_35e560:
    // 0x35e560: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35e560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35e564:
    // 0x35e564: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
label_35e568:
    if (ctx->pc == 0x35E568u) {
        ctx->pc = 0x35E568u;
            // 0x35e568: 0x964300a4  lhu         $v1, 0xA4($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 164)));
        ctx->pc = 0x35E56Cu;
        goto label_35e56c;
    }
    ctx->pc = 0x35E564u;
    {
        const bool branch_taken_0x35e564 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35e564) {
            ctx->pc = 0x35E568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35E564u;
            // 0x35e568: 0x964300a4  lhu         $v1, 0xA4($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35E59Cu;
            goto label_35e59c;
        }
    }
    ctx->pc = 0x35E56Cu;
label_35e56c:
    // 0x35e56c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x35e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_35e570:
    // 0x35e570: 0xc04f26c  jal         func_13C9B0
label_35e574:
    if (ctx->pc == 0x35E574u) {
        ctx->pc = 0x35E574u;
            // 0x35e574: 0xae40006c  sw          $zero, 0x6C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x35E578u;
        goto label_35e578;
    }
    ctx->pc = 0x35E570u;
    SET_GPR_U32(ctx, 31, 0x35E578u);
    ctx->pc = 0x35E574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E570u;
            // 0x35e574: 0xae40006c  sw          $zero, 0x6C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E578u; }
        if (ctx->pc != 0x35E578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E578u; }
        if (ctx->pc != 0x35E578u) { return; }
    }
    ctx->pc = 0x35E578u;
label_35e578:
    // 0x35e578: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x35e578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_35e57c:
    // 0x35e57c: 0xc04f278  jal         func_13C9E0
label_35e580:
    if (ctx->pc == 0x35E580u) {
        ctx->pc = 0x35E580u;
            // 0x35e580: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x35E584u;
        goto label_35e584;
    }
    ctx->pc = 0x35E57Cu;
    SET_GPR_U32(ctx, 31, 0x35E584u);
    ctx->pc = 0x35E580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E57Cu;
            // 0x35e580: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E584u; }
        if (ctx->pc != 0x35E584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E584u; }
        if (ctx->pc != 0x35E584u) { return; }
    }
    ctx->pc = 0x35E584u;
label_35e584:
    // 0x35e584: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x35e584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_35e588:
    // 0x35e588: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x35e588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_35e58c:
    // 0x35e58c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x35e58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_35e590:
    // 0x35e590: 0xc04cca0  jal         func_133280
label_35e594:
    if (ctx->pc == 0x35E594u) {
        ctx->pc = 0x35E594u;
            // 0x35e594: 0x24c645d0  addiu       $a2, $a2, 0x45D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17872));
        ctx->pc = 0x35E598u;
        goto label_35e598;
    }
    ctx->pc = 0x35E590u;
    SET_GPR_U32(ctx, 31, 0x35E598u);
    ctx->pc = 0x35E594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E590u;
            // 0x35e594: 0x24c645d0  addiu       $a2, $a2, 0x45D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E598u; }
        if (ctx->pc != 0x35E598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E598u; }
        if (ctx->pc != 0x35E598u) { return; }
    }
    ctx->pc = 0x35E598u;
label_35e598:
    // 0x35e598: 0x964300a4  lhu         $v1, 0xA4($s2)
    ctx->pc = 0x35e598u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 164)));
label_35e59c:
    // 0x35e59c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35e5a0:
    // 0x35e5a0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_35e5a4:
    if (ctx->pc == 0x35E5A4u) {
        ctx->pc = 0x35E5A8u;
        goto label_35e5a8;
    }
    ctx->pc = 0x35E5A0u;
    {
        const bool branch_taken_0x35e5a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35e5a0) {
            ctx->pc = 0x35E5F0u;
            goto label_35e5f0;
        }
    }
    ctx->pc = 0x35E5A8u;
label_35e5a8:
    // 0x35e5a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35e5ac:
    // 0x35e5ac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x35e5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_35e5b0:
    // 0x35e5b0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x35e5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_35e5b4:
    // 0x35e5b4: 0xc0a7a88  jal         func_29EA20
label_35e5b8:
    if (ctx->pc == 0x35E5B8u) {
        ctx->pc = 0x35E5B8u;
            // 0x35e5b8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x35E5BCu;
        goto label_35e5bc;
    }
    ctx->pc = 0x35E5B4u;
    SET_GPR_U32(ctx, 31, 0x35E5BCu);
    ctx->pc = 0x35E5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E5B4u;
            // 0x35e5b8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E5BCu; }
        if (ctx->pc != 0x35E5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E5BCu; }
        if (ctx->pc != 0x35E5BCu) { return; }
    }
    ctx->pc = 0x35E5BCu;
label_35e5bc:
    // 0x35e5bc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x35e5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_35e5c0:
    // 0x35e5c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35e5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35e5c4:
    // 0x35e5c4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_35e5c8:
    if (ctx->pc == 0x35E5C8u) {
        ctx->pc = 0x35E5C8u;
            // 0x35e5c8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x35E5CCu;
        goto label_35e5cc;
    }
    ctx->pc = 0x35E5C4u;
    {
        const bool branch_taken_0x35e5c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E5C4u;
            // 0x35e5c8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e5c4) {
            ctx->pc = 0x35E5E8u;
            goto label_35e5e8;
        }
    }
    ctx->pc = 0x35E5CCu;
label_35e5cc:
    // 0x35e5cc: 0x3c02404c  lui         $v0, 0x404C
    ctx->pc = 0x35e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16460 << 16));
label_35e5d0:
    // 0x35e5d0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x35e5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_35e5d4:
    // 0x35e5d4: 0xc64000a0  lwc1        $f0, 0xA0($s2)
    ctx->pc = 0x35e5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e5d8:
    // 0x35e5d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x35e5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_35e5dc:
    // 0x35e5dc: 0xc0827ac  jal         func_209EB0
label_35e5e0:
    if (ctx->pc == 0x35E5E0u) {
        ctx->pc = 0x35E5E0u;
            // 0x35e5e0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x35E5E4u;
        goto label_35e5e4;
    }
    ctx->pc = 0x35E5DCu;
    SET_GPR_U32(ctx, 31, 0x35E5E4u);
    ctx->pc = 0x35E5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E5DCu;
            // 0x35e5e0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E5E4u; }
        if (ctx->pc != 0x35E5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E5E4u; }
        if (ctx->pc != 0x35E5E4u) { return; }
    }
    ctx->pc = 0x35E5E4u;
label_35e5e4:
    // 0x35e5e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35e5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35e5e8:
    // 0x35e5e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_35e5ec:
    if (ctx->pc == 0x35E5ECu) {
        ctx->pc = 0x35E5ECu;
            // 0x35e5ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E5F0u;
        goto label_35e5f0;
    }
    ctx->pc = 0x35E5E8u;
    {
        const bool branch_taken_0x35e5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E5E8u;
            // 0x35e5ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e5e8) {
            ctx->pc = 0x35E5FCu;
            goto label_35e5fc;
        }
    }
    ctx->pc = 0x35E5F0u;
label_35e5f0:
    // 0x35e5f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35e5f4:
    // 0x35e5f4: 0x8c420e30  lw          $v0, 0xE30($v0)
    ctx->pc = 0x35e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3632)));
label_35e5f8:
    // 0x35e5f8: 0x8c51005c  lw          $s1, 0x5C($v0)
    ctx->pc = 0x35e5f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_35e5fc:
    // 0x35e5fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35e600:
    // 0x35e600: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x35e600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_35e604:
    // 0x35e604: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x35e604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_35e608:
    // 0x35e608: 0xc0a7a88  jal         func_29EA20
label_35e60c:
    if (ctx->pc == 0x35E60Cu) {
        ctx->pc = 0x35E60Cu;
            // 0x35e60c: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x35E610u;
        goto label_35e610;
    }
    ctx->pc = 0x35E608u;
    SET_GPR_U32(ctx, 31, 0x35E610u);
    ctx->pc = 0x35E60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E608u;
            // 0x35e60c: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E610u; }
        if (ctx->pc != 0x35E610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E610u; }
        if (ctx->pc != 0x35E610u) { return; }
    }
    ctx->pc = 0x35E610u;
label_35e610:
    // 0x35e610: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x35e610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_35e614:
    // 0x35e614: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35e614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35e618:
    // 0x35e618: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_35e61c:
    if (ctx->pc == 0x35E61Cu) {
        ctx->pc = 0x35E61Cu;
            // 0x35e61c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x35E620u;
        goto label_35e620;
    }
    ctx->pc = 0x35E618u;
    {
        const bool branch_taken_0x35e618 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E618u;
            // 0x35e61c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e618) {
            ctx->pc = 0x35E650u;
            goto label_35e650;
        }
    }
    ctx->pc = 0x35E620u;
label_35e620:
    // 0x35e620: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x35e620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_35e624:
    // 0x35e624: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x35e624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_35e628:
    // 0x35e628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35e62c:
    // 0x35e62c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35e62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35e630:
    // 0x35e630: 0x24c6d6e0  addiu       $a2, $a2, -0x2920
    ctx->pc = 0x35e630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956768));
label_35e634:
    // 0x35e634: 0xc08afe0  jal         func_22BF80
label_35e638:
    if (ctx->pc == 0x35E638u) {
        ctx->pc = 0x35E638u;
            // 0x35e638: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->pc = 0x35E63Cu;
        goto label_35e63c;
    }
    ctx->pc = 0x35E634u;
    SET_GPR_U32(ctx, 31, 0x35E63Cu);
    ctx->pc = 0x35E638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E634u;
            // 0x35e638: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E63Cu; }
        if (ctx->pc != 0x35E63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E63Cu; }
        if (ctx->pc != 0x35E63Cu) { return; }
    }
    ctx->pc = 0x35E63Cu;
label_35e63c:
    // 0x35e63c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x35e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_35e640:
    // 0x35e640: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x35e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_35e644:
    // 0x35e644: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x35e644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_35e648:
    // 0x35e648: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x35e648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
label_35e64c:
    // 0x35e64c: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x35e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_35e650:
    // 0x35e650: 0xae500050  sw          $s0, 0x50($s2)
    ctx->pc = 0x35e650u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 16));
label_35e654:
    // 0x35e654: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35e654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35e658:
    // 0x35e658: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x35e658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_35e65c:
    // 0x35e65c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35e65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35e660:
    // 0x35e660: 0xc08c798  jal         func_231E60
label_35e664:
    if (ctx->pc == 0x35E664u) {
        ctx->pc = 0x35E664u;
            // 0x35e664: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E668u;
        goto label_35e668;
    }
    ctx->pc = 0x35E660u;
    SET_GPR_U32(ctx, 31, 0x35E668u);
    ctx->pc = 0x35E664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E660u;
            // 0x35e664: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E668u; }
        if (ctx->pc != 0x35E668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E668u; }
        if (ctx->pc != 0x35E668u) { return; }
    }
    ctx->pc = 0x35E668u;
label_35e668:
    // 0x35e668: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x35e668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35e66c:
    // 0x35e66c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x35e66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_35e670:
    // 0x35e670: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x35e670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35e674:
    // 0x35e674: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x35e674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_35e678:
    // 0x35e678: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x35e678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35e67c:
    // 0x35e67c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x35e67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e680:
    // 0x35e680: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x35e680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_35e684:
    // 0x35e684: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x35e684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_35e688:
    // 0x35e688: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x35e688u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_35e68c:
    // 0x35e68c: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x35e68cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_35e690:
    // 0x35e690: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x35e690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35e694:
    // 0x35e694: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x35e694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35e698:
    // 0x35e698: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x35e698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35e69c:
    // 0x35e69c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x35e69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_35e6a0:
    // 0x35e6a0: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x35e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_35e6a4:
    // 0x35e6a4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x35e6a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_35e6a8:
    // 0x35e6a8: 0xc0a3830  jal         func_28E0C0
label_35e6ac:
    if (ctx->pc == 0x35E6ACu) {
        ctx->pc = 0x35E6ACu;
            // 0x35e6ac: 0xe7a20078  swc1        $f2, 0x78($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x35E6B0u;
        goto label_35e6b0;
    }
    ctx->pc = 0x35E6A8u;
    SET_GPR_U32(ctx, 31, 0x35E6B0u);
    ctx->pc = 0x35E6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E6A8u;
            // 0x35e6ac: 0xe7a20078  swc1        $f2, 0x78($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E6B0u; }
        if (ctx->pc != 0x35E6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E6B0u; }
        if (ctx->pc != 0x35E6B0u) { return; }
    }
    ctx->pc = 0x35E6B0u;
label_35e6b0:
    // 0x35e6b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35e6b4:
    // 0x35e6b4: 0xc08af10  jal         func_22BC40
label_35e6b8:
    if (ctx->pc == 0x35E6B8u) {
        ctx->pc = 0x35E6B8u;
            // 0x35e6b8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x35E6BCu;
        goto label_35e6bc;
    }
    ctx->pc = 0x35E6B4u;
    SET_GPR_U32(ctx, 31, 0x35E6BCu);
    ctx->pc = 0x35E6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E6B4u;
            // 0x35e6b8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BC40u;
    if (runtime->hasFunction(0x22BC40u)) {
        auto targetFn = runtime->lookupFunction(0x22BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E6BCu; }
        if (ctx->pc != 0x35E6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BC40_0x22bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E6BCu; }
        if (ctx->pc != 0x35E6BCu) { return; }
    }
    ctx->pc = 0x35E6BCu;
label_35e6bc:
    // 0x35e6bc: 0x964300a4  lhu         $v1, 0xA4($s2)
    ctx->pc = 0x35e6bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 164)));
label_35e6c0:
    // 0x35e6c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35e6c4:
    // 0x35e6c4: 0x54650012  bnel        $v1, $a1, . + 4 + (0x12 << 2)
label_35e6c8:
    if (ctx->pc == 0x35E6C8u) {
        ctx->pc = 0x35E6C8u;
            // 0x35e6c8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x35E6CCu;
        goto label_35e6cc;
    }
    ctx->pc = 0x35E6C4u;
    {
        const bool branch_taken_0x35e6c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x35e6c4) {
            ctx->pc = 0x35E6C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35E6C4u;
            // 0x35e6c8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35E710u;
            goto label_35e710;
        }
    }
    ctx->pc = 0x35E6CCu;
label_35e6cc:
    // 0x35e6cc: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x35e6ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_35e6d0:
    // 0x35e6d0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_35e6d4:
    if (ctx->pc == 0x35E6D4u) {
        ctx->pc = 0x35E6D8u;
        goto label_35e6d8;
    }
    ctx->pc = 0x35E6D0u;
    {
        const bool branch_taken_0x35e6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e6d0) {
            ctx->pc = 0x35E70Cu;
            goto label_35e70c;
        }
    }
    ctx->pc = 0x35E6D8u;
label_35e6d8:
    // 0x35e6d8: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x35e6d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_35e6dc:
    // 0x35e6dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_35e6e0:
    // 0x35e6e0: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x35e6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
label_35e6e4:
    // 0x35e6e4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x35e6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_35e6e8:
    // 0x35e6e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35e6e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_35e6ec:
    // 0x35e6ec: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_35e6f0:
    if (ctx->pc == 0x35E6F0u) {
        ctx->pc = 0x35E6F4u;
        goto label_35e6f4;
    }
    ctx->pc = 0x35E6ECu;
    {
        const bool branch_taken_0x35e6ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e6ec) {
            ctx->pc = 0x35E70Cu;
            goto label_35e70c;
        }
    }
    ctx->pc = 0x35E6F4u;
label_35e6f4:
    // 0x35e6f4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_35e6f8:
    if (ctx->pc == 0x35E6F8u) {
        ctx->pc = 0x35E6FCu;
        goto label_35e6fc;
    }
    ctx->pc = 0x35E6F4u;
    {
        const bool branch_taken_0x35e6f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e6f4) {
            ctx->pc = 0x35E70Cu;
            goto label_35e70c;
        }
    }
    ctx->pc = 0x35E6FCu;
label_35e6fc:
    // 0x35e6fc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x35e6fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35e700:
    // 0x35e700: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x35e700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_35e704:
    // 0x35e704: 0x320f809  jalr        $t9
label_35e708:
    if (ctx->pc == 0x35E708u) {
        ctx->pc = 0x35E708u;
            // 0x35e708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E70Cu;
        goto label_35e70c;
    }
    ctx->pc = 0x35E704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35E70Cu);
        ctx->pc = 0x35E708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E704u;
            // 0x35e708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35E70Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35E70Cu; }
            if (ctx->pc != 0x35E70Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35E70Cu;
label_35e70c:
    // 0x35e70c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35e70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_35e710:
    // 0x35e710: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35e710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35e714:
    // 0x35e714: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35e714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35e718:
    // 0x35e718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35e718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35e71c:
    // 0x35e71c: 0x3e00008  jr          $ra
label_35e720:
    if (ctx->pc == 0x35E720u) {
        ctx->pc = 0x35E720u;
            // 0x35e720: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x35E724u;
        goto label_35e724;
    }
    ctx->pc = 0x35E71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E71Cu;
            // 0x35e720: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35E724u;
label_35e724:
    // 0x35e724: 0x0  nop
    ctx->pc = 0x35e724u;
    // NOP
label_35e728:
    // 0x35e728: 0x0  nop
    ctx->pc = 0x35e728u;
    // NOP
label_35e72c:
    // 0x35e72c: 0x0  nop
    ctx->pc = 0x35e72cu;
    // NOP
label_35e730:
    // 0x35e730: 0x3e00008  jr          $ra
label_35e734:
    if (ctx->pc == 0x35E734u) {
        ctx->pc = 0x35E734u;
            // 0x35e734: 0x240207ee  addiu       $v0, $zero, 0x7EE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2030));
        ctx->pc = 0x35E738u;
        goto label_35e738;
    }
    ctx->pc = 0x35E730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E730u;
            // 0x35e734: 0x240207ee  addiu       $v0, $zero, 0x7EE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2030));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35E738u;
label_35e738:
    // 0x35e738: 0x0  nop
    ctx->pc = 0x35e738u;
    // NOP
label_35e73c:
    // 0x35e73c: 0x0  nop
    ctx->pc = 0x35e73cu;
    // NOP
label_35e740:
    // 0x35e740: 0x80b2f88  j           func_2CBE20
label_35e744:
    if (ctx->pc == 0x35E744u) {
        ctx->pc = 0x35E744u;
            // 0x35e744: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x35E748u;
        goto label_35e748;
    }
    ctx->pc = 0x35E740u;
    ctx->pc = 0x35E744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E740u;
            // 0x35e744: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CBE20u;
    {
        auto targetFn = runtime->lookupFunction(0x2CBE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x35E748u;
label_35e748:
    // 0x35e748: 0x0  nop
    ctx->pc = 0x35e748u;
    // NOP
label_35e74c:
    // 0x35e74c: 0x0  nop
    ctx->pc = 0x35e74cu;
    // NOP
label_35e750:
    // 0x35e750: 0x80d73d8  j           func_35CF60
label_35e754:
    if (ctx->pc == 0x35E754u) {
        ctx->pc = 0x35E754u;
            // 0x35e754: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x35E758u;
        goto label_35e758;
    }
    ctx->pc = 0x35E750u;
    ctx->pc = 0x35E754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E750u;
            // 0x35e754: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35CF60u;
    {
        auto targetFn = runtime->lookupFunction(0x35CF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x35E758u;
label_35e758:
    // 0x35e758: 0x0  nop
    ctx->pc = 0x35e758u;
    // NOP
label_35e75c:
    // 0x35e75c: 0x0  nop
    ctx->pc = 0x35e75cu;
    // NOP
label_35e760:
    // 0x35e760: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x35e760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_35e764:
    // 0x35e764: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x35e764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_35e768:
    // 0x35e768: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x35e768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_35e76c:
    // 0x35e76c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x35e76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_35e770:
    // 0x35e770: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x35e770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_35e774:
    // 0x35e774: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35e774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_35e778:
    // 0x35e778: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35e778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_35e77c:
    // 0x35e77c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35e77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_35e780:
    // 0x35e780: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35e780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35e784:
    // 0x35e784: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35e784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35e788:
    // 0x35e788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35e788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35e78c:
    // 0x35e78c: 0x8c9e0070  lw          $fp, 0x70($a0)
    ctx->pc = 0x35e78cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_35e790:
    // 0x35e790: 0x13c0001f  beqz        $fp, . + 4 + (0x1F << 2)
label_35e794:
    if (ctx->pc == 0x35E794u) {
        ctx->pc = 0x35E794u;
            // 0x35e794: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E798u;
        goto label_35e798;
    }
    ctx->pc = 0x35E790u;
    {
        const bool branch_taken_0x35e790 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E790u;
            // 0x35e794: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e790) {
            ctx->pc = 0x35E810u;
            goto label_35e810;
        }
    }
    ctx->pc = 0x35E798u;
label_35e798:
    // 0x35e798: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x35e798u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35e79c:
    // 0x35e79c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x35e79cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35e7a0:
    // 0x35e7a0: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x35e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_35e7a4:
    // 0x35e7a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35e7a8:
    // 0x35e7a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x35e7a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35e7ac:
    // 0x35e7ac: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x35e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_35e7b0:
    // 0x35e7b0: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x35e7b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35e7b4:
    // 0x35e7b4: 0xa2200078  sb          $zero, 0x78($s1)
    ctx->pc = 0x35e7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 0));
label_35e7b8:
    // 0x35e7b8: 0x2633008c  addiu       $s3, $s1, 0x8C
    ctx->pc = 0x35e7b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
label_35e7bc:
    // 0x35e7bc: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x35e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_35e7c0:
    // 0x35e7c0: 0x96370094  lhu         $s7, 0x94($s1)
    ctx->pc = 0x35e7c0u;
    SET_GPR_U32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 148)));
label_35e7c4:
    // 0x35e7c4: 0x8c500780  lw          $s0, 0x780($v0)
    ctx->pc = 0x35e7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1920)));
label_35e7c8:
    // 0x35e7c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35e7cc:
    // 0x35e7cc: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x35e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
label_35e7d0:
    // 0x35e7d0: 0x2e21024  and         $v0, $s7, $v0
    ctx->pc = 0x35e7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 2));
label_35e7d4:
    // 0x35e7d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_35e7d8:
    if (ctx->pc == 0x35E7D8u) {
        ctx->pc = 0x35E7DCu;
        goto label_35e7dc;
    }
    ctx->pc = 0x35E7D4u;
    {
        const bool branch_taken_0x35e7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e7d4) {
            ctx->pc = 0x35E7E8u;
            goto label_35e7e8;
        }
    }
    ctx->pc = 0x35E7DCu;
label_35e7dc:
    // 0x35e7dc: 0xc072aaa  jal         func_1CAAA8
label_35e7e0:
    if (ctx->pc == 0x35E7E0u) {
        ctx->pc = 0x35E7E0u;
            // 0x35e7e0: 0x92640000  lbu         $a0, 0x0($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x35E7E4u;
        goto label_35e7e4;
    }
    ctx->pc = 0x35E7DCu;
    SET_GPR_U32(ctx, 31, 0x35E7E4u);
    ctx->pc = 0x35E7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E7DCu;
            // 0x35e7e0: 0x92640000  lbu         $a0, 0x0($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E7E4u; }
        if (ctx->pc != 0x35E7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E7E4u; }
        if (ctx->pc != 0x35E7E4u) { return; }
    }
    ctx->pc = 0x35E7E4u;
label_35e7e4:
    // 0x35e7e4: 0x0  nop
    ctx->pc = 0x35e7e4u;
    // NOP
label_35e7e8:
    // 0x35e7e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x35e7e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_35e7ec:
    // 0x35e7ec: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x35e7ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_35e7f0:
    // 0x35e7f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_35e7f4:
    if (ctx->pc == 0x35E7F4u) {
        ctx->pc = 0x35E7F4u;
            // 0x35e7f4: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->pc = 0x35E7F8u;
        goto label_35e7f8;
    }
    ctx->pc = 0x35E7F0u;
    {
        const bool branch_taken_0x35e7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E7F0u;
            // 0x35e7f4: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e7f0) {
            ctx->pc = 0x35E7C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35e7c8;
        }
    }
    ctx->pc = 0x35E7F8u;
label_35e7f8:
    // 0x35e7f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x35e7f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_35e7fc:
    // 0x35e7fc: 0xa6200094  sh          $zero, 0x94($s1)
    ctx->pc = 0x35e7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 0));
label_35e800:
    // 0x35e800: 0x29e102b  sltu        $v0, $s4, $fp
    ctx->pc = 0x35e800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_35e804:
    // 0x35e804: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_35e808:
    if (ctx->pc == 0x35E808u) {
        ctx->pc = 0x35E808u;
            // 0x35e808: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x35E80Cu;
        goto label_35e80c;
    }
    ctx->pc = 0x35E804u;
    {
        const bool branch_taken_0x35e804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E804u;
            // 0x35e808: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e804) {
            ctx->pc = 0x35E7A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35e7a0;
        }
    }
    ctx->pc = 0x35E80Cu;
label_35e80c:
    // 0x35e80c: 0x0  nop
    ctx->pc = 0x35e80cu;
    // NOP
label_35e810:
    // 0x35e810: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x35e810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_35e814:
    // 0x35e814: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35e814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_35e818:
    // 0x35e818: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x35e818u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_35e81c:
    // 0x35e81c: 0x320f809  jalr        $t9
label_35e820:
    if (ctx->pc == 0x35E820u) {
        ctx->pc = 0x35E820u;
            // 0x35e820: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x35E824u;
        goto label_35e824;
    }
    ctx->pc = 0x35E81Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35E824u);
        ctx->pc = 0x35E820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E81Cu;
            // 0x35e820: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35E824u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35E824u; }
            if (ctx->pc != 0x35E824u) { return; }
        }
        }
    }
    ctx->pc = 0x35E824u;
label_35e824:
    // 0x35e824: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x35e824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_35e828:
    // 0x35e828: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x35e828u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_35e82c:
    // 0x35e82c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x35e82cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_35e830:
    // 0x35e830: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x35e830u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_35e834:
    // 0x35e834: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35e834u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35e838:
    // 0x35e838: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35e838u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35e83c:
    // 0x35e83c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35e83cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35e840:
    // 0x35e840: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35e840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35e844:
    // 0x35e844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35e844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35e848:
    // 0x35e848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35e848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35e84c:
    // 0x35e84c: 0x3e00008  jr          $ra
label_35e850:
    if (ctx->pc == 0x35E850u) {
        ctx->pc = 0x35E850u;
            // 0x35e850: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x35E854u;
        goto label_35e854;
    }
    ctx->pc = 0x35E84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E84Cu;
            // 0x35e850: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35E854u;
label_35e854:
    // 0x35e854: 0x0  nop
    ctx->pc = 0x35e854u;
    // NOP
label_35e858:
    // 0x35e858: 0x0  nop
    ctx->pc = 0x35e858u;
    // NOP
label_35e85c:
    // 0x35e85c: 0x0  nop
    ctx->pc = 0x35e85cu;
    // NOP
label_35e860:
    // 0x35e860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35e860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_35e864:
    // 0x35e864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35e864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_35e868:
    // 0x35e868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35e868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35e86c:
    // 0x35e86c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35e86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35e870:
    // 0x35e870: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35e870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35e874:
    // 0x35e874: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_35e878:
    if (ctx->pc == 0x35E878u) {
        ctx->pc = 0x35E878u;
            // 0x35e878: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E87Cu;
        goto label_35e87c;
    }
    ctx->pc = 0x35E874u;
    {
        const bool branch_taken_0x35e874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E874u;
            // 0x35e878: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e874) {
            ctx->pc = 0x35E914u;
            goto label_35e914;
        }
    }
    ctx->pc = 0x35E87Cu;
label_35e87c:
    // 0x35e87c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x35e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_35e880:
    // 0x35e880: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x35e880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_35e884:
    // 0x35e884: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x35e884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
label_35e888:
    // 0x35e888: 0x24426578  addiu       $v0, $v0, 0x6578
    ctx->pc = 0x35e888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25976));
label_35e88c:
    // 0x35e88c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x35e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_35e890:
    // 0x35e890: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_35e894:
    if (ctx->pc == 0x35E894u) {
        ctx->pc = 0x35E894u;
            // 0x35e894: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x35E898u;
        goto label_35e898;
    }
    ctx->pc = 0x35E890u;
    {
        const bool branch_taken_0x35e890 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E890u;
            // 0x35e894: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e890) {
            ctx->pc = 0x35E8FCu;
            goto label_35e8fc;
        }
    }
    ctx->pc = 0x35E898u;
label_35e898:
    // 0x35e898: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x35e898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_35e89c:
    // 0x35e89c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x35e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_35e8a0:
    // 0x35e8a0: 0x24630220  addiu       $v1, $v1, 0x220
    ctx->pc = 0x35e8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
label_35e8a4:
    // 0x35e8a4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x35e8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_35e8a8:
    // 0x35e8a8: 0x24420258  addiu       $v0, $v0, 0x258
    ctx->pc = 0x35e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 600));
label_35e8ac:
    // 0x35e8ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x35e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_35e8b0:
    // 0x35e8b0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x35e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_35e8b4:
    // 0x35e8b4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x35e8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_35e8b8:
    // 0x35e8b8: 0xc0407c0  jal         func_101F00
label_35e8bc:
    if (ctx->pc == 0x35E8BCu) {
        ctx->pc = 0x35E8BCu;
            // 0x35e8bc: 0x24a5b180  addiu       $a1, $a1, -0x4E80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947200));
        ctx->pc = 0x35E8C0u;
        goto label_35e8c0;
    }
    ctx->pc = 0x35E8B8u;
    SET_GPR_U32(ctx, 31, 0x35E8C0u);
    ctx->pc = 0x35E8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E8B8u;
            // 0x35e8bc: 0x24a5b180  addiu       $a1, $a1, -0x4E80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E8C0u; }
        if (ctx->pc != 0x35E8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E8C0u; }
        if (ctx->pc != 0x35E8C0u) { return; }
    }
    ctx->pc = 0x35E8C0u;
label_35e8c0:
    // 0x35e8c0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x35e8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_35e8c4:
    // 0x35e8c4: 0xc0b2bfc  jal         func_2CAFF0
label_35e8c8:
    if (ctx->pc == 0x35E8C8u) {
        ctx->pc = 0x35E8C8u;
            // 0x35e8c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x35E8CCu;
        goto label_35e8cc;
    }
    ctx->pc = 0x35E8C4u;
    SET_GPR_U32(ctx, 31, 0x35E8CCu);
    ctx->pc = 0x35E8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E8C4u;
            // 0x35e8c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CAFF0u;
    if (runtime->hasFunction(0x2CAFF0u)) {
        auto targetFn = runtime->lookupFunction(0x2CAFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E8CCu; }
        if (ctx->pc != 0x35E8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CAFF0_0x2caff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E8CCu; }
        if (ctx->pc != 0x35E8CCu) { return; }
    }
    ctx->pc = 0x35E8CCu;
label_35e8cc:
    // 0x35e8cc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x35e8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_35e8d0:
    // 0x35e8d0: 0xc0b2c20  jal         func_2CB080
label_35e8d4:
    if (ctx->pc == 0x35E8D4u) {
        ctx->pc = 0x35E8D4u;
            // 0x35e8d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x35E8D8u;
        goto label_35e8d8;
    }
    ctx->pc = 0x35E8D0u;
    SET_GPR_U32(ctx, 31, 0x35E8D8u);
    ctx->pc = 0x35E8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E8D0u;
            // 0x35e8d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB080u;
    if (runtime->hasFunction(0x2CB080u)) {
        auto targetFn = runtime->lookupFunction(0x2CB080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E8D8u; }
        if (ctx->pc != 0x35E8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CB080_0x2cb080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E8D8u; }
        if (ctx->pc != 0x35E8D8u) { return; }
    }
    ctx->pc = 0x35E8D8u;
label_35e8d8:
    // 0x35e8d8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x35e8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_35e8dc:
    // 0x35e8dc: 0xc0b2c20  jal         func_2CB080
label_35e8e0:
    if (ctx->pc == 0x35E8E0u) {
        ctx->pc = 0x35E8E0u;
            // 0x35e8e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x35E8E4u;
        goto label_35e8e4;
    }
    ctx->pc = 0x35E8DCu;
    SET_GPR_U32(ctx, 31, 0x35E8E4u);
    ctx->pc = 0x35E8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E8DCu;
            // 0x35e8e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB080u;
    if (runtime->hasFunction(0x2CB080u)) {
        auto targetFn = runtime->lookupFunction(0x2CB080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E8E4u; }
        if (ctx->pc != 0x35E8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CB080_0x2cb080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E8E4u; }
        if (ctx->pc != 0x35E8E4u) { return; }
    }
    ctx->pc = 0x35E8E4u;
label_35e8e4:
    // 0x35e8e4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x35e8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_35e8e8:
    // 0x35e8e8: 0xc0b2c3c  jal         func_2CB0F0
label_35e8ec:
    if (ctx->pc == 0x35E8ECu) {
        ctx->pc = 0x35E8ECu;
            // 0x35e8ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E8F0u;
        goto label_35e8f0;
    }
    ctx->pc = 0x35E8E8u;
    SET_GPR_U32(ctx, 31, 0x35E8F0u);
    ctx->pc = 0x35E8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E8E8u;
            // 0x35e8ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB0F0u;
    if (runtime->hasFunction(0x2CB0F0u)) {
        auto targetFn = runtime->lookupFunction(0x2CB0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E8F0u; }
        if (ctx->pc != 0x35E8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CB0F0_0x2cb0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E8F0u; }
        if (ctx->pc != 0x35E8F0u) { return; }
    }
    ctx->pc = 0x35E8F0u;
label_35e8f0:
    // 0x35e8f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35e8f4:
    // 0x35e8f4: 0xc0ae1c0  jal         func_2B8700
label_35e8f8:
    if (ctx->pc == 0x35E8F8u) {
        ctx->pc = 0x35E8F8u;
            // 0x35e8f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E8FCu;
        goto label_35e8fc;
    }
    ctx->pc = 0x35E8F4u;
    SET_GPR_U32(ctx, 31, 0x35E8FCu);
    ctx->pc = 0x35E8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E8F4u;
            // 0x35e8f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E8FCu; }
        if (ctx->pc != 0x35E8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E8FCu; }
        if (ctx->pc != 0x35E8FCu) { return; }
    }
    ctx->pc = 0x35E8FCu;
label_35e8fc:
    // 0x35e8fc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x35e8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_35e900:
    // 0x35e900: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35e900u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_35e904:
    // 0x35e904: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_35e908:
    if (ctx->pc == 0x35E908u) {
        ctx->pc = 0x35E908u;
            // 0x35e908: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E90Cu;
        goto label_35e90c;
    }
    ctx->pc = 0x35E904u;
    {
        const bool branch_taken_0x35e904 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x35e904) {
            ctx->pc = 0x35E908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35E904u;
            // 0x35e908: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35E918u;
            goto label_35e918;
        }
    }
    ctx->pc = 0x35E90Cu;
label_35e90c:
    // 0x35e90c: 0xc0400a8  jal         func_1002A0
label_35e910:
    if (ctx->pc == 0x35E910u) {
        ctx->pc = 0x35E910u;
            // 0x35e910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35E914u;
        goto label_35e914;
    }
    ctx->pc = 0x35E90Cu;
    SET_GPR_U32(ctx, 31, 0x35E914u);
    ctx->pc = 0x35E910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35E90Cu;
            // 0x35e910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E914u; }
        if (ctx->pc != 0x35E914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35E914u; }
        if (ctx->pc != 0x35E914u) { return; }
    }
    ctx->pc = 0x35E914u;
label_35e914:
    // 0x35e914: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35e914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35e918:
    // 0x35e918: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35e918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35e91c:
    // 0x35e91c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35e91cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35e920:
    // 0x35e920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35e920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35e924:
    // 0x35e924: 0x3e00008  jr          $ra
label_35e928:
    if (ctx->pc == 0x35E928u) {
        ctx->pc = 0x35E928u;
            // 0x35e928: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x35E92Cu;
        goto label_35e92c;
    }
    ctx->pc = 0x35E924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E924u;
            // 0x35e928: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35E92Cu;
label_35e92c:
    // 0x35e92c: 0x0  nop
    ctx->pc = 0x35e92cu;
    // NOP
label_35e930:
    // 0x35e930: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x35e930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_35e934:
    // 0x35e934: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x35e934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35e938:
    // 0x35e938: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x35e938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_35e93c:
    // 0x35e93c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x35e93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_35e940:
    // 0x35e940: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x35e940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_35e944:
    // 0x35e944: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x35e944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_35e948:
    // 0x35e948: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x35e948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_35e94c:
    // 0x35e94c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x35e94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_35e950:
    // 0x35e950: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x35e950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_35e954:
    // 0x35e954: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x35e954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_35e958:
    // 0x35e958: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35e958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_35e95c:
    // 0x35e95c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35e95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_35e960:
    // 0x35e960: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x35e960u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_35e964:
    // 0x35e964: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x35e964u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_35e968:
    // 0x35e968: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x35e968u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_35e96c:
    // 0x35e96c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x35e96cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_35e970:
    // 0x35e970: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x35e970u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_35e974:
    // 0x35e974: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_35e978:
    if (ctx->pc == 0x35E978u) {
        ctx->pc = 0x35E978u;
            // 0x35e978: 0xafa400cc  sw          $a0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
        ctx->pc = 0x35E97Cu;
        goto label_35e97c;
    }
    ctx->pc = 0x35E974u;
    {
        const bool branch_taken_0x35e974 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x35E978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E974u;
            // 0x35e978: 0xafa400cc  sw          $a0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e974) {
            ctx->pc = 0x35E9C4u;
            goto label_35e9c4;
        }
    }
    ctx->pc = 0x35E97Cu;
label_35e97c:
    // 0x35e97c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35e980:
    // 0x35e980: 0x10a3010d  beq         $a1, $v1, . + 4 + (0x10D << 2)
label_35e984:
    if (ctx->pc == 0x35E984u) {
        ctx->pc = 0x35E988u;
        goto label_35e988;
    }
    ctx->pc = 0x35E980u;
    {
        const bool branch_taken_0x35e980 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x35e980) {
            ctx->pc = 0x35EDB8u;
            goto label_35edb8;
        }
    }
    ctx->pc = 0x35E988u;
label_35e988:
    // 0x35e988: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35e988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35e98c:
    // 0x35e98c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_35e990:
    if (ctx->pc == 0x35E990u) {
        ctx->pc = 0x35E994u;
        goto label_35e994;
    }
    ctx->pc = 0x35E98Cu;
    {
        const bool branch_taken_0x35e98c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x35e98c) {
            ctx->pc = 0x35E99Cu;
            goto label_35e99c;
        }
    }
    ctx->pc = 0x35E994u;
label_35e994:
    // 0x35e994: 0x10000108  b           . + 4 + (0x108 << 2)
label_35e998:
    if (ctx->pc == 0x35E998u) {
        ctx->pc = 0x35E99Cu;
        goto label_35e99c;
    }
    ctx->pc = 0x35E994u;
    {
        const bool branch_taken_0x35e994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e994) {
            ctx->pc = 0x35EDB8u;
            goto label_35edb8;
        }
    }
    ctx->pc = 0x35E99Cu;
label_35e99c:
    // 0x35e99c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35e9a0:
    // 0x35e9a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35e9a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35e9a4:
    // 0x35e9a4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x35e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_35e9a8:
    // 0x35e9a8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x35e9a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_35e9ac:
    // 0x35e9ac: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x35e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_35e9b0:
    // 0x35e9b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x35e9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_35e9b4:
    // 0x35e9b4: 0x320f809  jalr        $t9
label_35e9b8:
    if (ctx->pc == 0x35E9B8u) {
        ctx->pc = 0x35E9B8u;
            // 0x35e9b8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x35E9BCu;
        goto label_35e9bc;
    }
    ctx->pc = 0x35E9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35E9BCu);
        ctx->pc = 0x35E9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E9B4u;
            // 0x35e9b8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35E9BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35E9BCu; }
            if (ctx->pc != 0x35E9BCu) { return; }
        }
        }
    }
    ctx->pc = 0x35E9BCu;
label_35e9bc:
    // 0x35e9bc: 0x100000fe  b           . + 4 + (0xFE << 2)
label_35e9c0:
    if (ctx->pc == 0x35E9C0u) {
        ctx->pc = 0x35E9C4u;
        goto label_35e9c4;
    }
    ctx->pc = 0x35E9BCu;
    {
        const bool branch_taken_0x35e9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e9bc) {
            ctx->pc = 0x35EDB8u;
            goto label_35edb8;
        }
    }
    ctx->pc = 0x35E9C4u;
label_35e9c4:
    // 0x35e9c4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x35e9c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35e9c8:
    // 0x35e9c8: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x35e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_35e9cc:
    // 0x35e9cc: 0x106000fa  beqz        $v1, . + 4 + (0xFA << 2)
label_35e9d0:
    if (ctx->pc == 0x35E9D0u) {
        ctx->pc = 0x35E9D0u;
            // 0x35e9d0: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->pc = 0x35E9D4u;
        goto label_35e9d4;
    }
    ctx->pc = 0x35E9CCu;
    {
        const bool branch_taken_0x35e9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35E9CCu;
            // 0x35e9d0: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e9cc) {
            ctx->pc = 0x35EDB8u;
            goto label_35edb8;
        }
    }
    ctx->pc = 0x35E9D4u;
label_35e9d4:
    // 0x35e9d4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x35e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_35e9d8:
    // 0x35e9d8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x35e9d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35e9dc:
    // 0x35e9dc: 0xc4744678  lwc1        $f20, 0x4678($v1)
    ctx->pc = 0x35e9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35e9e0:
    // 0x35e9e0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x35e9e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35e9e4:
    // 0x35e9e4: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x35e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_35e9e8:
    // 0x35e9e8: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x35e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_35e9ec:
    // 0x35e9ec: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x35e9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_35e9f0:
    // 0x35e9f0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x35e9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35e9f4:
    // 0x35e9f4: 0x92030078  lbu         $v1, 0x78($s0)
    ctx->pc = 0x35e9f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 120)));
label_35e9f8:
    // 0x35e9f8: 0x106000e9  beqz        $v1, . + 4 + (0xE9 << 2)
label_35e9fc:
    if (ctx->pc == 0x35E9FCu) {
        ctx->pc = 0x35EA00u;
        goto label_35ea00;
    }
    ctx->pc = 0x35E9F8u;
    {
        const bool branch_taken_0x35e9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e9f8) {
            ctx->pc = 0x35EDA0u;
            goto label_35eda0;
        }
    }
    ctx->pc = 0x35EA00u;
label_35ea00:
    // 0x35ea00: 0xc0adc70  jal         func_2B71C0
label_35ea04:
    if (ctx->pc == 0x35EA04u) {
        ctx->pc = 0x35EA08u;
        goto label_35ea08;
    }
    ctx->pc = 0x35EA00u;
    SET_GPR_U32(ctx, 31, 0x35EA08u);
    ctx->pc = 0x2B71C0u;
    if (runtime->hasFunction(0x2B71C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B71C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA08u; }
        if (ctx->pc != 0x35EA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B71C0_0x2b71c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA08u; }
        if (ctx->pc != 0x35EA08u) { return; }
    }
    ctx->pc = 0x35EA08u;
label_35ea08:
    // 0x35ea08: 0xc0d7ba0  jal         func_35EE80
label_35ea0c:
    if (ctx->pc == 0x35EA0Cu) {
        ctx->pc = 0x35EA0Cu;
            // 0x35ea0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EA10u;
        goto label_35ea10;
    }
    ctx->pc = 0x35EA08u;
    SET_GPR_U32(ctx, 31, 0x35EA10u);
    ctx->pc = 0x35EA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EA08u;
            // 0x35ea0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35EE80u;
    if (runtime->hasFunction(0x35EE80u)) {
        auto targetFn = runtime->lookupFunction(0x35EE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA10u; }
        if (ctx->pc != 0x35EA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035EE80_0x35ee80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA10u; }
        if (ctx->pc != 0x35EA10u) { return; }
    }
    ctx->pc = 0x35EA10u;
label_35ea10:
    // 0x35ea10: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x35ea10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35ea14:
    // 0x35ea14: 0xc0d1c14  jal         func_347050
label_35ea18:
    if (ctx->pc == 0x35EA18u) {
        ctx->pc = 0x35EA18u;
            // 0x35ea18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EA1Cu;
        goto label_35ea1c;
    }
    ctx->pc = 0x35EA14u;
    SET_GPR_U32(ctx, 31, 0x35EA1Cu);
    ctx->pc = 0x35EA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EA14u;
            // 0x35ea18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA1Cu; }
        if (ctx->pc != 0x35EA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA1Cu; }
        if (ctx->pc != 0x35EA1Cu) { return; }
    }
    ctx->pc = 0x35EA1Cu;
label_35ea1c:
    // 0x35ea1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35ea1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35ea20:
    // 0x35ea20: 0xc04f278  jal         func_13C9E0
label_35ea24:
    if (ctx->pc == 0x35EA24u) {
        ctx->pc = 0x35EA24u;
            // 0x35ea24: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x35EA28u;
        goto label_35ea28;
    }
    ctx->pc = 0x35EA20u;
    SET_GPR_U32(ctx, 31, 0x35EA28u);
    ctx->pc = 0x35EA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EA20u;
            // 0x35ea24: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA28u; }
        if (ctx->pc != 0x35EA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA28u; }
        if (ctx->pc != 0x35EA28u) { return; }
    }
    ctx->pc = 0x35EA28u;
label_35ea28:
    // 0x35ea28: 0xc0d1c10  jal         func_347040
label_35ea2c:
    if (ctx->pc == 0x35EA2Cu) {
        ctx->pc = 0x35EA2Cu;
            // 0x35ea2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EA30u;
        goto label_35ea30;
    }
    ctx->pc = 0x35EA28u;
    SET_GPR_U32(ctx, 31, 0x35EA30u);
    ctx->pc = 0x35EA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EA28u;
            // 0x35ea2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA30u; }
        if (ctx->pc != 0x35EA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA30u; }
        if (ctx->pc != 0x35EA30u) { return; }
    }
    ctx->pc = 0x35EA30u;
label_35ea30:
    // 0x35ea30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35ea30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35ea34:
    // 0x35ea34: 0xc04ce80  jal         func_133A00
label_35ea38:
    if (ctx->pc == 0x35EA38u) {
        ctx->pc = 0x35EA38u;
            // 0x35ea38: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x35EA3Cu;
        goto label_35ea3c;
    }
    ctx->pc = 0x35EA34u;
    SET_GPR_U32(ctx, 31, 0x35EA3Cu);
    ctx->pc = 0x35EA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EA34u;
            // 0x35ea38: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA3Cu; }
        if (ctx->pc != 0x35EA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA3Cu; }
        if (ctx->pc != 0x35EA3Cu) { return; }
    }
    ctx->pc = 0x35EA3Cu;
label_35ea3c:
    // 0x35ea3c: 0xc0d4108  jal         func_350420
label_35ea40:
    if (ctx->pc == 0x35EA40u) {
        ctx->pc = 0x35EA44u;
        goto label_35ea44;
    }
    ctx->pc = 0x35EA3Cu;
    SET_GPR_U32(ctx, 31, 0x35EA44u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA44u; }
        if (ctx->pc != 0x35EA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA44u; }
        if (ctx->pc != 0x35EA44u) { return; }
    }
    ctx->pc = 0x35EA44u;
label_35ea44:
    // 0x35ea44: 0xc0b36b4  jal         func_2CDAD0
label_35ea48:
    if (ctx->pc == 0x35EA48u) {
        ctx->pc = 0x35EA48u;
            // 0x35ea48: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EA4Cu;
        goto label_35ea4c;
    }
    ctx->pc = 0x35EA44u;
    SET_GPR_U32(ctx, 31, 0x35EA4Cu);
    ctx->pc = 0x35EA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EA44u;
            // 0x35ea48: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA4Cu; }
        if (ctx->pc != 0x35EA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA4Cu; }
        if (ctx->pc != 0x35EA4Cu) { return; }
    }
    ctx->pc = 0x35EA4Cu;
label_35ea4c:
    // 0x35ea4c: 0xc0b9c64  jal         func_2E7190
label_35ea50:
    if (ctx->pc == 0x35EA50u) {
        ctx->pc = 0x35EA50u;
            // 0x35ea50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EA54u;
        goto label_35ea54;
    }
    ctx->pc = 0x35EA4Cu;
    SET_GPR_U32(ctx, 31, 0x35EA54u);
    ctx->pc = 0x35EA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EA4Cu;
            // 0x35ea50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA54u; }
        if (ctx->pc != 0x35EA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA54u; }
        if (ctx->pc != 0x35EA54u) { return; }
    }
    ctx->pc = 0x35EA54u;
label_35ea54:
    // 0x35ea54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35ea54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35ea58:
    // 0x35ea58: 0xc0d4104  jal         func_350410
label_35ea5c:
    if (ctx->pc == 0x35EA5Cu) {
        ctx->pc = 0x35EA5Cu;
            // 0x35ea5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EA60u;
        goto label_35ea60;
    }
    ctx->pc = 0x35EA58u;
    SET_GPR_U32(ctx, 31, 0x35EA60u);
    ctx->pc = 0x35EA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EA58u;
            // 0x35ea5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA60u; }
        if (ctx->pc != 0x35EA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA60u; }
        if (ctx->pc != 0x35EA60u) { return; }
    }
    ctx->pc = 0x35EA60u;
label_35ea60:
    // 0x35ea60: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x35ea60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_35ea64:
    // 0x35ea64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35ea64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35ea68:
    // 0x35ea68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35ea68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35ea6c:
    // 0x35ea6c: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x35ea6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_35ea70:
    // 0x35ea70: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x35ea70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35ea74:
    // 0x35ea74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x35ea74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35ea78:
    // 0x35ea78: 0xc0d40ac  jal         func_3502B0
label_35ea7c:
    if (ctx->pc == 0x35EA7Cu) {
        ctx->pc = 0x35EA7Cu;
            // 0x35ea7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x35EA80u;
        goto label_35ea80;
    }
    ctx->pc = 0x35EA78u;
    SET_GPR_U32(ctx, 31, 0x35EA80u);
    ctx->pc = 0x35EA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EA78u;
            // 0x35ea7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA80u; }
        if (ctx->pc != 0x35EA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EA80u; }
        if (ctx->pc != 0x35EA80u) { return; }
    }
    ctx->pc = 0x35EA80u;
label_35ea80:
    // 0x35ea80: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x35ea80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_35ea84:
    // 0x35ea84: 0x102000c6  beqz        $at, . + 4 + (0xC6 << 2)
label_35ea88:
    if (ctx->pc == 0x35EA88u) {
        ctx->pc = 0x35EA88u;
            // 0x35ea88: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x35EA8Cu;
        goto label_35ea8c;
    }
    ctx->pc = 0x35EA84u;
    {
        const bool branch_taken_0x35ea84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35EA84u;
            // 0x35ea88: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ea84) {
            ctx->pc = 0x35EDA0u;
            goto label_35eda0;
        }
    }
    ctx->pc = 0x35EA8Cu;
label_35ea8c:
    // 0x35ea8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35ea90:
    // 0x35ea90: 0x26b60020  addiu       $s6, $s5, 0x20
    ctx->pc = 0x35ea90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_35ea94:
    // 0x35ea94: 0x8c540e80  lw          $s4, 0xE80($v0)
    ctx->pc = 0x35ea94u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_35ea98:
    // 0x35ea98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35ea9c:
    // 0x35ea9c: 0x8c52e378  lw          $s2, -0x1C88($v0)
    ctx->pc = 0x35ea9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_35eaa0:
    // 0x35eaa0: 0xc0576f4  jal         func_15DBD0
label_35eaa4:
    if (ctx->pc == 0x35EAA4u) {
        ctx->pc = 0x35EAA4u;
            // 0x35eaa4: 0x26b30040  addiu       $s3, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->pc = 0x35EAA8u;
        goto label_35eaa8;
    }
    ctx->pc = 0x35EAA0u;
    SET_GPR_U32(ctx, 31, 0x35EAA8u);
    ctx->pc = 0x35EAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EAA0u;
            // 0x35eaa4: 0x26b30040  addiu       $s3, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EAA8u; }
        if (ctx->pc != 0x35EAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EAA8u; }
        if (ctx->pc != 0x35EAA8u) { return; }
    }
    ctx->pc = 0x35EAA8u;
label_35eaa8:
    // 0x35eaa8: 0xc0b36b4  jal         func_2CDAD0
label_35eaac:
    if (ctx->pc == 0x35EAACu) {
        ctx->pc = 0x35EAACu;
            // 0x35eaac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EAB0u;
        goto label_35eab0;
    }
    ctx->pc = 0x35EAA8u;
    SET_GPR_U32(ctx, 31, 0x35EAB0u);
    ctx->pc = 0x35EAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EAA8u;
            // 0x35eaac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EAB0u; }
        if (ctx->pc != 0x35EAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EAB0u; }
        if (ctx->pc != 0x35EAB0u) { return; }
    }
    ctx->pc = 0x35EAB0u;
label_35eab0:
    // 0x35eab0: 0xc0b9c64  jal         func_2E7190
label_35eab4:
    if (ctx->pc == 0x35EAB4u) {
        ctx->pc = 0x35EAB4u;
            // 0x35eab4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EAB8u;
        goto label_35eab8;
    }
    ctx->pc = 0x35EAB0u;
    SET_GPR_U32(ctx, 31, 0x35EAB8u);
    ctx->pc = 0x35EAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EAB0u;
            // 0x35eab4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EAB8u; }
        if (ctx->pc != 0x35EAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EAB8u; }
        if (ctx->pc != 0x35EAB8u) { return; }
    }
    ctx->pc = 0x35EAB8u;
label_35eab8:
    // 0x35eab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35eab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35eabc:
    // 0x35eabc: 0xc076984  jal         func_1DA610
label_35eac0:
    if (ctx->pc == 0x35EAC0u) {
        ctx->pc = 0x35EAC0u;
            // 0x35eac0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EAC4u;
        goto label_35eac4;
    }
    ctx->pc = 0x35EABCu;
    SET_GPR_U32(ctx, 31, 0x35EAC4u);
    ctx->pc = 0x35EAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EABCu;
            // 0x35eac0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EAC4u; }
        if (ctx->pc != 0x35EAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EAC4u; }
        if (ctx->pc != 0x35EAC4u) { return; }
    }
    ctx->pc = 0x35EAC4u;
label_35eac4:
    // 0x35eac4: 0xc07697c  jal         func_1DA5F0
label_35eac8:
    if (ctx->pc == 0x35EAC8u) {
        ctx->pc = 0x35EAC8u;
            // 0x35eac8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EACCu;
        goto label_35eacc;
    }
    ctx->pc = 0x35EAC4u;
    SET_GPR_U32(ctx, 31, 0x35EACCu);
    ctx->pc = 0x35EAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EAC4u;
            // 0x35eac8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EACCu; }
        if (ctx->pc != 0x35EACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EACCu; }
        if (ctx->pc != 0x35EACCu) { return; }
    }
    ctx->pc = 0x35EACCu;
label_35eacc:
    // 0x35eacc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35eaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35ead0:
    // 0x35ead0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x35ead0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_35ead4:
    // 0x35ead4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35ead8:
    // 0x35ead8: 0x8c51e370  lw          $s1, -0x1C90($v0)
    ctx->pc = 0x35ead8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_35eadc:
    // 0x35eadc: 0xc04cd60  jal         func_133580
label_35eae0:
    if (ctx->pc == 0x35EAE0u) {
        ctx->pc = 0x35EAE0u;
            // 0x35eae0: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x35EAE4u;
        goto label_35eae4;
    }
    ctx->pc = 0x35EADCu;
    SET_GPR_U32(ctx, 31, 0x35EAE4u);
    ctx->pc = 0x35EAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EADCu;
            // 0x35eae0: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EAE4u; }
        if (ctx->pc != 0x35EAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EAE4u; }
        if (ctx->pc != 0x35EAE4u) { return; }
    }
    ctx->pc = 0x35EAE4u;
label_35eae4:
    // 0x35eae4: 0xc0770e4  jal         func_1DC390
label_35eae8:
    if (ctx->pc == 0x35EAE8u) {
        ctx->pc = 0x35EAE8u;
            // 0x35eae8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EAECu;
        goto label_35eaec;
    }
    ctx->pc = 0x35EAE4u;
    SET_GPR_U32(ctx, 31, 0x35EAECu);
    ctx->pc = 0x35EAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EAE4u;
            // 0x35eae8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EAECu; }
        if (ctx->pc != 0x35EAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EAECu; }
        if (ctx->pc != 0x35EAECu) { return; }
    }
    ctx->pc = 0x35EAECu;
label_35eaec:
    // 0x35eaec: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x35eaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_35eaf0:
    // 0x35eaf0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x35eaf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_35eaf4:
    // 0x35eaf4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_35eaf8:
    if (ctx->pc == 0x35EAF8u) {
        ctx->pc = 0x35EAF8u;
            // 0x35eaf8: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x35EAFCu;
        goto label_35eafc;
    }
    ctx->pc = 0x35EAF4u;
    {
        const bool branch_taken_0x35eaf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35eaf4) {
            ctx->pc = 0x35EAF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35EAF4u;
            // 0x35eaf8: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x35EB10u;
            goto label_35eb10;
        }
    }
    ctx->pc = 0x35EAFCu;
label_35eafc:
    // 0x35eafc: 0xc0770e4  jal         func_1DC390
label_35eb00:
    if (ctx->pc == 0x35EB00u) {
        ctx->pc = 0x35EB00u;
            // 0x35eb00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EB04u;
        goto label_35eb04;
    }
    ctx->pc = 0x35EAFCu;
    SET_GPR_U32(ctx, 31, 0x35EB04u);
    ctx->pc = 0x35EB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EAFCu;
            // 0x35eb00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EB04u; }
        if (ctx->pc != 0x35EB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EB04u; }
        if (ctx->pc != 0x35EB04u) { return; }
    }
    ctx->pc = 0x35EB04u;
label_35eb04:
    // 0x35eb04: 0x3842000d  xori        $v0, $v0, 0xD
    ctx->pc = 0x35eb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)13);
label_35eb08:
    // 0x35eb08: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x35eb08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_35eb0c:
    // 0x35eb0c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x35eb0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_35eb10:
    // 0x35eb10: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x35eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_35eb14:
    // 0x35eb14: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x35eb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35eb18:
    // 0x35eb18: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x35eb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35eb1c:
    // 0x35eb1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35eb1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35eb20:
    // 0x35eb20: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_35eb24:
    if (ctx->pc == 0x35EB24u) {
        ctx->pc = 0x35EB24u;
            // 0x35eb24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35EB28u;
        goto label_35eb28;
    }
    ctx->pc = 0x35EB20u;
    {
        const bool branch_taken_0x35eb20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35EB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35EB20u;
            // 0x35eb24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eb20) {
            ctx->pc = 0x35EB2Cu;
            goto label_35eb2c;
        }
    }
    ctx->pc = 0x35EB28u;
label_35eb28:
    // 0x35eb28: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x35eb28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35eb2c:
    // 0x35eb2c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x35eb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_35eb30:
    // 0x35eb30: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x35eb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_35eb34:
    // 0x35eb34: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x35eb34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_35eb38:
    // 0x35eb38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35eb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35eb3c:
    // 0x35eb3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35eb3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35eb40:
    // 0x35eb40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35eb40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35eb44:
    // 0x35eb44: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x35eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_35eb48:
    // 0x35eb48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35eb48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_35eb4c:
    // 0x35eb4c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x35eb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_35eb50:
    // 0x35eb50: 0xc04e4a4  jal         func_139290
label_35eb54:
    if (ctx->pc == 0x35EB54u) {
        ctx->pc = 0x35EB54u;
            // 0x35eb54: 0x46000d41  sub.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x35EB58u;
        goto label_35eb58;
    }
    ctx->pc = 0x35EB50u;
    SET_GPR_U32(ctx, 31, 0x35EB58u);
    ctx->pc = 0x35EB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EB50u;
            // 0x35eb54: 0x46000d41  sub.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EB58u; }
        if (ctx->pc != 0x35EB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EB58u; }
        if (ctx->pc != 0x35EB58u) { return; }
    }
    ctx->pc = 0x35EB58u;
label_35eb58:
    // 0x35eb58: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x35eb58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_35eb5c:
    // 0x35eb5c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x35eb5cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_35eb60:
    // 0x35eb60: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x35eb60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_35eb64:
    // 0x35eb64: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x35eb64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_35eb68:
    // 0x35eb68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35eb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35eb6c:
    // 0x35eb6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35eb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35eb70:
    // 0x35eb70: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x35eb70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_35eb74:
    // 0x35eb74: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x35eb74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_35eb78:
    // 0x35eb78: 0xc04cff4  jal         func_133FD0
label_35eb7c:
    if (ctx->pc == 0x35EB7Cu) {
        ctx->pc = 0x35EB7Cu;
            // 0x35eb7c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EB80u;
        goto label_35eb80;
    }
    ctx->pc = 0x35EB78u;
    SET_GPR_U32(ctx, 31, 0x35EB80u);
    ctx->pc = 0x35EB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EB78u;
            // 0x35eb7c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EB80u; }
        if (ctx->pc != 0x35EB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EB80u; }
        if (ctx->pc != 0x35EB80u) { return; }
    }
    ctx->pc = 0x35EB80u;
label_35eb80:
    // 0x35eb80: 0xc04e738  jal         func_139CE0
label_35eb84:
    if (ctx->pc == 0x35EB84u) {
        ctx->pc = 0x35EB84u;
            // 0x35eb84: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x35EB88u;
        goto label_35eb88;
    }
    ctx->pc = 0x35EB80u;
    SET_GPR_U32(ctx, 31, 0x35EB88u);
    ctx->pc = 0x35EB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EB80u;
            // 0x35eb84: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EB88u; }
        if (ctx->pc != 0x35EB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EB88u; }
        if (ctx->pc != 0x35EB88u) { return; }
    }
    ctx->pc = 0x35EB88u;
label_35eb88:
    // 0x35eb88: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x35eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_35eb8c:
    // 0x35eb8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35eb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35eb90:
    // 0x35eb90: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x35eb90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35eb94:
    // 0x35eb94: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x35eb94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_35eb98:
    // 0x35eb98: 0xc054c2c  jal         func_1530B0
label_35eb9c:
    if (ctx->pc == 0x35EB9Cu) {
        ctx->pc = 0x35EB9Cu;
            // 0x35eb9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EBA0u;
        goto label_35eba0;
    }
    ctx->pc = 0x35EB98u;
    SET_GPR_U32(ctx, 31, 0x35EBA0u);
    ctx->pc = 0x35EB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EB98u;
            // 0x35eb9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EBA0u; }
        if (ctx->pc != 0x35EBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EBA0u; }
        if (ctx->pc != 0x35EBA0u) { return; }
    }
    ctx->pc = 0x35EBA0u;
label_35eba0:
    // 0x35eba0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x35eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_35eba4:
    // 0x35eba4: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
label_35eba8:
    if (ctx->pc == 0x35EBA8u) {
        ctx->pc = 0x35EBACu;
        goto label_35ebac;
    }
    ctx->pc = 0x35EBA4u;
    {
        const bool branch_taken_0x35eba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35eba4) {
            ctx->pc = 0x35EDA0u;
            goto label_35eda0;
        }
    }
    ctx->pc = 0x35EBACu;
label_35ebac:
    // 0x35ebac: 0xc077250  jal         func_1DC940
label_35ebb0:
    if (ctx->pc == 0x35EBB0u) {
        ctx->pc = 0x35EBB0u;
            // 0x35ebb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EBB4u;
        goto label_35ebb4;
    }
    ctx->pc = 0x35EBACu;
    SET_GPR_U32(ctx, 31, 0x35EBB4u);
    ctx->pc = 0x35EBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EBACu;
            // 0x35ebb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC940u;
    if (runtime->hasFunction(0x1DC940u)) {
        auto targetFn = runtime->lookupFunction(0x1DC940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EBB4u; }
        if (ctx->pc != 0x35EBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC940_0x1dc940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EBB4u; }
        if (ctx->pc != 0x35EBB4u) { return; }
    }
    ctx->pc = 0x35EBB4u;
label_35ebb4:
    // 0x35ebb4: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x35ebb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_35ebb8:
    // 0x35ebb8: 0x10200079  beqz        $at, . + 4 + (0x79 << 2)
label_35ebbc:
    if (ctx->pc == 0x35EBBCu) {
        ctx->pc = 0x35EBC0u;
        goto label_35ebc0;
    }
    ctx->pc = 0x35EBB8u;
    {
        const bool branch_taken_0x35ebb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ebb8) {
            ctx->pc = 0x35EDA0u;
            goto label_35eda0;
        }
    }
    ctx->pc = 0x35EBC0u;
label_35ebc0:
    // 0x35ebc0: 0xc077250  jal         func_1DC940
label_35ebc4:
    if (ctx->pc == 0x35EBC4u) {
        ctx->pc = 0x35EBC4u;
            // 0x35ebc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EBC8u;
        goto label_35ebc8;
    }
    ctx->pc = 0x35EBC0u;
    SET_GPR_U32(ctx, 31, 0x35EBC8u);
    ctx->pc = 0x35EBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EBC0u;
            // 0x35ebc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC940u;
    if (runtime->hasFunction(0x1DC940u)) {
        auto targetFn = runtime->lookupFunction(0x1DC940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EBC8u; }
        if (ctx->pc != 0x35EBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC940_0x1dc940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EBC8u; }
        if (ctx->pc != 0x35EBC8u) { return; }
    }
    ctx->pc = 0x35EBC8u;
label_35ebc8:
    // 0x35ebc8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x35ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_35ebcc:
    // 0x35ebcc: 0x14430056  bne         $v0, $v1, . + 4 + (0x56 << 2)
label_35ebd0:
    if (ctx->pc == 0x35EBD0u) {
        ctx->pc = 0x35EBD4u;
        goto label_35ebd4;
    }
    ctx->pc = 0x35EBCCu;
    {
        const bool branch_taken_0x35ebcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35ebcc) {
            ctx->pc = 0x35ED28u;
            goto label_35ed28;
        }
    }
    ctx->pc = 0x35EBD4u;
label_35ebd4:
    // 0x35ebd4: 0xc0d7b98  jal         func_35EE60
label_35ebd8:
    if (ctx->pc == 0x35EBD8u) {
        ctx->pc = 0x35EBD8u;
            // 0x35ebd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EBDCu;
        goto label_35ebdc;
    }
    ctx->pc = 0x35EBD4u;
    SET_GPR_U32(ctx, 31, 0x35EBDCu);
    ctx->pc = 0x35EBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EBD4u;
            // 0x35ebd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35EE60u;
    if (runtime->hasFunction(0x35EE60u)) {
        auto targetFn = runtime->lookupFunction(0x35EE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EBDCu; }
        if (ctx->pc != 0x35EBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035EE60_0x35ee60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EBDCu; }
        if (ctx->pc != 0x35EBDCu) { return; }
    }
    ctx->pc = 0x35EBDCu;
label_35ebdc:
    // 0x35ebdc: 0xc0d7b94  jal         func_35EE50
label_35ebe0:
    if (ctx->pc == 0x35EBE0u) {
        ctx->pc = 0x35EBE0u;
            // 0x35ebe0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EBE4u;
        goto label_35ebe4;
    }
    ctx->pc = 0x35EBDCu;
    SET_GPR_U32(ctx, 31, 0x35EBE4u);
    ctx->pc = 0x35EBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EBDCu;
            // 0x35ebe0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35EE50u;
    if (runtime->hasFunction(0x35EE50u)) {
        auto targetFn = runtime->lookupFunction(0x35EE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EBE4u; }
        if (ctx->pc != 0x35EBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035EE50_0x35ee50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EBE4u; }
        if (ctx->pc != 0x35EBE4u) { return; }
    }
    ctx->pc = 0x35EBE4u;
label_35ebe4:
    // 0x35ebe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35ebe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35ebe8:
    // 0x35ebe8: 0xc0775b8  jal         func_1DD6E0
label_35ebec:
    if (ctx->pc == 0x35EBECu) {
        ctx->pc = 0x35EBECu;
            // 0x35ebec: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x35EBF0u;
        goto label_35ebf0;
    }
    ctx->pc = 0x35EBE8u;
    SET_GPR_U32(ctx, 31, 0x35EBF0u);
    ctx->pc = 0x35EBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EBE8u;
            // 0x35ebec: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EBF0u; }
        if (ctx->pc != 0x35EBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EBF0u; }
        if (ctx->pc != 0x35EBF0u) { return; }
    }
    ctx->pc = 0x35EBF0u;
label_35ebf0:
    // 0x35ebf0: 0xc0b6e5c  jal         func_2DB970
label_35ebf4:
    if (ctx->pc == 0x35EBF4u) {
        ctx->pc = 0x35EBF4u;
            // 0x35ebf4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x35EBF8u;
        goto label_35ebf8;
    }
    ctx->pc = 0x35EBF0u;
    SET_GPR_U32(ctx, 31, 0x35EBF8u);
    ctx->pc = 0x35EBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EBF0u;
            // 0x35ebf4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB970u;
    if (runtime->hasFunction(0x2DB970u)) {
        auto targetFn = runtime->lookupFunction(0x2DB970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EBF8u; }
        if (ctx->pc != 0x35EBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB970_0x2db970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EBF8u; }
        if (ctx->pc != 0x35EBF8u) { return; }
    }
    ctx->pc = 0x35EBF8u;
label_35ebf8:
    // 0x35ebf8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x35ebf8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_35ebfc:
    // 0x35ebfc: 0xc0d7b98  jal         func_35EE60
label_35ec00:
    if (ctx->pc == 0x35EC00u) {
        ctx->pc = 0x35EC00u;
            // 0x35ec00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EC04u;
        goto label_35ec04;
    }
    ctx->pc = 0x35EBFCu;
    SET_GPR_U32(ctx, 31, 0x35EC04u);
    ctx->pc = 0x35EC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EBFCu;
            // 0x35ec00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35EE60u;
    if (runtime->hasFunction(0x35EE60u)) {
        auto targetFn = runtime->lookupFunction(0x35EE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EC04u; }
        if (ctx->pc != 0x35EC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035EE60_0x35ee60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EC04u; }
        if (ctx->pc != 0x35EC04u) { return; }
    }
    ctx->pc = 0x35EC04u;
label_35ec04:
    // 0x35ec04: 0xc0d7b90  jal         func_35EE40
label_35ec08:
    if (ctx->pc == 0x35EC08u) {
        ctx->pc = 0x35EC08u;
            // 0x35ec08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EC0Cu;
        goto label_35ec0c;
    }
    ctx->pc = 0x35EC04u;
    SET_GPR_U32(ctx, 31, 0x35EC0Cu);
    ctx->pc = 0x35EC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EC04u;
            // 0x35ec08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35EE40u;
    if (runtime->hasFunction(0x35EE40u)) {
        auto targetFn = runtime->lookupFunction(0x35EE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EC0Cu; }
        if (ctx->pc != 0x35EC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035EE40_0x35ee40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EC0Cu; }
        if (ctx->pc != 0x35EC0Cu) { return; }
    }
    ctx->pc = 0x35EC0Cu;
label_35ec0c:
    // 0x35ec0c: 0xc0775b8  jal         func_1DD6E0
label_35ec10:
    if (ctx->pc == 0x35EC10u) {
        ctx->pc = 0x35EC10u;
            // 0x35ec10: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x35EC14u;
        goto label_35ec14;
    }
    ctx->pc = 0x35EC0Cu;
    SET_GPR_U32(ctx, 31, 0x35EC14u);
    ctx->pc = 0x35EC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EC0Cu;
            // 0x35ec10: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EC14u; }
        if (ctx->pc != 0x35EC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EC14u; }
        if (ctx->pc != 0x35EC14u) { return; }
    }
    ctx->pc = 0x35EC14u;
label_35ec14:
    // 0x35ec14: 0xc0b6e5c  jal         func_2DB970
label_35ec18:
    if (ctx->pc == 0x35EC18u) {
        ctx->pc = 0x35EC18u;
            // 0x35ec18: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x35EC1Cu;
        goto label_35ec1c;
    }
    ctx->pc = 0x35EC14u;
    SET_GPR_U32(ctx, 31, 0x35EC1Cu);
    ctx->pc = 0x35EC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EC14u;
            // 0x35ec18: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB970u;
    if (runtime->hasFunction(0x2DB970u)) {
        auto targetFn = runtime->lookupFunction(0x2DB970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EC1Cu; }
        if (ctx->pc != 0x35EC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB970_0x2db970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EC1Cu; }
        if (ctx->pc != 0x35EC1Cu) { return; }
    }
    ctx->pc = 0x35EC1Cu;
label_35ec1c:
    // 0x35ec1c: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x35ec1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_35ec20:
    // 0x35ec20: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x35ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_35ec24:
    // 0x35ec24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35ec24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35ec28:
    // 0x35ec28: 0x0  nop
    ctx->pc = 0x35ec28u;
    // NOP
label_35ec2c:
    // 0x35ec2c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x35ec2cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_35ec30:
    // 0x35ec30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35ec30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35ec34:
    // 0x35ec34: 0x0  nop
    ctx->pc = 0x35ec34u;
    // NOP
label_35ec38:
    // 0x35ec38: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x35ec38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_35ec3c:
    // 0x35ec3c: 0xc0775b8  jal         func_1DD6E0
label_35ec40:
    if (ctx->pc == 0x35EC40u) {
        ctx->pc = 0x35EC40u;
            // 0x35ec40: 0x4616bd9c  madd.s      $f22, $f23, $f22 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[23], ctx->f[22]));
        ctx->pc = 0x35EC44u;
        goto label_35ec44;
    }
    ctx->pc = 0x35EC3Cu;
    SET_GPR_U32(ctx, 31, 0x35EC44u);
    ctx->pc = 0x35EC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EC3Cu;
            // 0x35ec40: 0x4616bd9c  madd.s      $f22, $f23, $f22 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[23], ctx->f[22]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EC44u; }
        if (ctx->pc != 0x35EC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EC44u; }
        if (ctx->pc != 0x35EC44u) { return; }
    }
    ctx->pc = 0x35EC44u;
label_35ec44:
    // 0x35ec44: 0xc0b6e5c  jal         func_2DB970
label_35ec48:
    if (ctx->pc == 0x35EC48u) {
        ctx->pc = 0x35EC48u;
            // 0x35ec48: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x35EC4Cu;
        goto label_35ec4c;
    }
    ctx->pc = 0x35EC44u;
    SET_GPR_U32(ctx, 31, 0x35EC4Cu);
    ctx->pc = 0x35EC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EC44u;
            // 0x35ec48: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB970u;
    if (runtime->hasFunction(0x2DB970u)) {
        auto targetFn = runtime->lookupFunction(0x2DB970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EC4Cu; }
        if (ctx->pc != 0x35EC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB970_0x2db970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EC4Cu; }
        if (ctx->pc != 0x35EC4Cu) { return; }
    }
    ctx->pc = 0x35EC4Cu;
label_35ec4c:
    // 0x35ec4c: 0xc0d7b9c  jal         func_35EE70
label_35ec50:
    if (ctx->pc == 0x35EC50u) {
        ctx->pc = 0x35EC50u;
            // 0x35ec50: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x35EC54u;
        goto label_35ec54;
    }
    ctx->pc = 0x35EC4Cu;
    SET_GPR_U32(ctx, 31, 0x35EC54u);
    ctx->pc = 0x35EC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35EC4Cu;
            // 0x35ec50: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x35EE70u;
    if (runtime->hasFunction(0x35EE70u)) {
        auto targetFn = runtime->lookupFunction(0x35EE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EC54u; }
        if (ctx->pc != 0x35EC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035EE70_0x35ee70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EC54u; }
        if (ctx->pc != 0x35EC54u) { return; }
    }
    ctx->pc = 0x35EC54u;
label_35ec54:
    // 0x35ec54: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_35ec58:
    if (ctx->pc == 0x35EC58u) {
        ctx->pc = 0x35EC58u;
            // 0x35ec58: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x35EC5Cu;
        goto label_35ec5c;
    }
    ctx->pc = 0x35EC54u;
    {
        const bool branch_taken_0x35ec54 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35ec54) {
            ctx->pc = 0x35EC58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35EC54u;
            // 0x35ec58: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35EC68u;
            goto label_35ec68;
        }
    }
    ctx->pc = 0x35EC5Cu;
label_35ec5c:
    // 0x35ec5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35ec5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35ec60:
    // 0x35ec60: 0x10000007  b           . + 4 + (0x7 << 2)
label_35ec64:
    if (ctx->pc == 0x35EC64u) {
        ctx->pc = 0x35EC64u;
            // 0x35ec64: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x35EC68u;
        goto label_35ec68;
    }
    ctx->pc = 0x35EC60u;
    {
        const bool branch_taken_0x35ec60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35EC60u;
            // 0x35ec64: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ec60) {
            ctx->pc = 0x35EC80u;
            goto label_35ec80;
        }
    }
    ctx->pc = 0x35EC68u;
label_35ec68:
    // 0x35ec68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35ec68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_35ec6c:
    // 0x35ec6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x35ec6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_35ec70:
    // 0x35ec70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35ec70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35ec74:
    // 0x35ec74: 0x0  nop
    ctx->pc = 0x35ec74u;
    // NOP
label_35ec78:
    // 0x35ec78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35ec78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_35ec7c:
    // 0x35ec7c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x35ec7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_35ec80:
    // 0x35ec80: 0x46150042  mul.s       $f1, $f0, $f21
    ctx->pc = 0x35ec80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_35ec84:
    // 0x35ec84: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x35ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
label_35ec88:
    // 0x35ec88: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x35ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_35ec8c:
    // 0x35ec8c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x35ec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_35ec90:
    // 0x35ec90: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x35ec90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_35ec94:
    // 0x35ec94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35ec94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35ec98:
    // 0x35ec98: 0x0  nop
    ctx->pc = 0x35ec98u;
    // NOP
label_35ec9c:
    // 0x35ec9c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x35ec9cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_35eca0:
    // 0x35eca0: 0x46160042  mul.s       $f1, $f0, $f22
    ctx->pc = 0x35eca0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_35eca4:
    // 0x35eca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35eca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35eca8:
    // 0x35eca8: 0xc60d009c  lwc1        $f13, 0x9C($s0)
    ctx->pc = 0x35eca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_35ecac:
    // 0x35ecac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35ecacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35ecb0:
    // 0x35ecb0: 0xc04ce64  jal         func_133990
label_35ecb4:
    if (ctx->pc == 0x35ECB4u) {
        ctx->pc = 0x35ECB4u;
            // 0x35ecb4: 0x46010382  mul.s       $f14, $f0, $f1 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x35ECB8u;
        goto label_35ecb8;
    }
    ctx->pc = 0x35ECB0u;
    SET_GPR_U32(ctx, 31, 0x35ECB8u);
    ctx->pc = 0x35ECB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35ECB0u;
            // 0x35ecb4: 0x46010382  mul.s       $f14, $f0, $f1 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ECB8u; }
        if (ctx->pc != 0x35ECB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ECB8u; }
        if (ctx->pc != 0x35ECB8u) { return; }
    }
    ctx->pc = 0x35ECB8u;
label_35ecb8:
    // 0x35ecb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_35ecbc:
    // 0x35ecbc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x35ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_35ecc0:
    // 0x35ecc0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x35ecc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_35ecc4:
    // 0x35ecc4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35ecc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35ecc8:
    // 0x35ecc8: 0xc60c0080  lwc1        $f12, 0x80($s0)
    ctx->pc = 0x35ecc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_35eccc:
    // 0x35eccc: 0xc04ce50  jal         func_133940
label_35ecd0:
    if (ctx->pc == 0x35ECD0u) {
        ctx->pc = 0x35ECD0u;
            // 0x35ecd0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x35ECD4u;
        goto label_35ecd4;
    }
    ctx->pc = 0x35ECCCu;
    SET_GPR_U32(ctx, 31, 0x35ECD4u);
    ctx->pc = 0x35ECD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35ECCCu;
            // 0x35ecd0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ECD4u; }
        if (ctx->pc != 0x35ECD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ECD4u; }
        if (ctx->pc != 0x35ECD4u) { return; }
    }
    ctx->pc = 0x35ECD4u;
label_35ecd4:
    // 0x35ecd4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x35ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35ecd8:
    // 0x35ecd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35ecd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35ecdc:
    // 0x35ecdc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x35ecdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_35ece0:
    // 0x35ece0: 0xc04e4a4  jal         func_139290
label_35ece4:
    if (ctx->pc == 0x35ECE4u) {
        ctx->pc = 0x35ECE4u;
            // 0x35ece4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35ECE8u;
        goto label_35ece8;
    }
    ctx->pc = 0x35ECE0u;
    SET_GPR_U32(ctx, 31, 0x35ECE8u);
    ctx->pc = 0x35ECE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35ECE0u;
            // 0x35ece4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ECE8u; }
        if (ctx->pc != 0x35ECE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ECE8u; }
        if (ctx->pc != 0x35ECE8u) { return; }
    }
    ctx->pc = 0x35ECE8u;
label_35ece8:
    // 0x35ece8: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x35ece8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35ecec:
    // 0x35ecec: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x35ececu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_35ecf0:
    // 0x35ecf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35ecf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35ecf4:
    // 0x35ecf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35ecf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35ecf8:
    // 0x35ecf8: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x35ecf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_35ecfc:
    // 0x35ecfc: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x35ecfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_35ed00:
    // 0x35ed00: 0xc04cfcc  jal         func_133F30
label_35ed04:
    if (ctx->pc == 0x35ED04u) {
        ctx->pc = 0x35ED04u;
            // 0x35ed04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35ED08u;
        goto label_35ed08;
    }
    ctx->pc = 0x35ED00u;
    SET_GPR_U32(ctx, 31, 0x35ED08u);
    ctx->pc = 0x35ED04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35ED00u;
            // 0x35ed04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ED08u; }
        if (ctx->pc != 0x35ED08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ED08u; }
        if (ctx->pc != 0x35ED08u) { return; }
    }
    ctx->pc = 0x35ED08u;
label_35ed08:
    // 0x35ed08: 0xc04e738  jal         func_139CE0
label_35ed0c:
    if (ctx->pc == 0x35ED0Cu) {
        ctx->pc = 0x35ED0Cu;
            // 0x35ed0c: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x35ED10u;
        goto label_35ed10;
    }
    ctx->pc = 0x35ED08u;
    SET_GPR_U32(ctx, 31, 0x35ED10u);
    ctx->pc = 0x35ED0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35ED08u;
            // 0x35ed0c: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ED10u; }
        if (ctx->pc != 0x35ED10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ED10u; }
        if (ctx->pc != 0x35ED10u) { return; }
    }
    ctx->pc = 0x35ED10u;
label_35ed10:
    // 0x35ed10: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x35ed10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35ed14:
    // 0x35ed14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35ed14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35ed18:
    // 0x35ed18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x35ed18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35ed1c:
    // 0x35ed1c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x35ed1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_35ed20:
    // 0x35ed20: 0xc0d7b80  jal         func_35EE00
label_35ed24:
    if (ctx->pc == 0x35ED24u) {
        ctx->pc = 0x35ED24u;
            // 0x35ed24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35ED28u;
        goto label_35ed28;
    }
    ctx->pc = 0x35ED20u;
    SET_GPR_U32(ctx, 31, 0x35ED28u);
    ctx->pc = 0x35ED24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35ED20u;
            // 0x35ed24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35EE00u;
    if (runtime->hasFunction(0x35EE00u)) {
        auto targetFn = runtime->lookupFunction(0x35EE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ED28u; }
        if (ctx->pc != 0x35ED28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035EE00_0x35ee00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ED28u; }
        if (ctx->pc != 0x35ED28u) { return; }
    }
    ctx->pc = 0x35ED28u;
label_35ed28:
    // 0x35ed28: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x35ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
label_35ed2c:
    // 0x35ed2c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x35ed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_35ed30:
    // 0x35ed30: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x35ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_35ed34:
    // 0x35ed34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35ed34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35ed38:
    // 0x35ed38: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x35ed38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_35ed3c:
    // 0x35ed3c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x35ed3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_35ed40:
    // 0x35ed40: 0xc04ce64  jal         func_133990
label_35ed44:
    if (ctx->pc == 0x35ED44u) {
        ctx->pc = 0x35ED44u;
            // 0x35ed44: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x35ED48u;
        goto label_35ed48;
    }
    ctx->pc = 0x35ED40u;
    SET_GPR_U32(ctx, 31, 0x35ED48u);
    ctx->pc = 0x35ED44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35ED40u;
            // 0x35ed44: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133990u;
    if (runtime->hasFunction(0x133990u)) {
        auto targetFn = runtime->lookupFunction(0x133990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ED48u; }
        if (ctx->pc != 0x35ED48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133990_0x133990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ED48u; }
        if (ctx->pc != 0x35ED48u) { return; }
    }
    ctx->pc = 0x35ED48u;
label_35ed48:
    // 0x35ed48: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x35ed48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35ed4c:
    // 0x35ed4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_35ed50:
    // 0x35ed50: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x35ed50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35ed54:
    // 0x35ed54: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x35ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_35ed58:
    // 0x35ed58: 0xc60c007c  lwc1        $f12, 0x7C($s0)
    ctx->pc = 0x35ed58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_35ed5c:
    // 0x35ed5c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35ed5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35ed60:
    // 0x35ed60: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x35ed60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_35ed64:
    // 0x35ed64: 0xc04ce50  jal         func_133940
label_35ed68:
    if (ctx->pc == 0x35ED68u) {
        ctx->pc = 0x35ED68u;
            // 0x35ed68: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x35ED6Cu;
        goto label_35ed6c;
    }
    ctx->pc = 0x35ED64u;
    SET_GPR_U32(ctx, 31, 0x35ED6Cu);
    ctx->pc = 0x35ED68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35ED64u;
            // 0x35ed68: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ED6Cu; }
        if (ctx->pc != 0x35ED6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ED6Cu; }
        if (ctx->pc != 0x35ED6Cu) { return; }
    }
    ctx->pc = 0x35ED6Cu;
label_35ed6c:
    // 0x35ed6c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x35ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_35ed70:
    // 0x35ed70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35ed70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35ed74:
    // 0x35ed74: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x35ed74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_35ed78:
    // 0x35ed78: 0xc04e4a4  jal         func_139290
label_35ed7c:
    if (ctx->pc == 0x35ED7Cu) {
        ctx->pc = 0x35ED7Cu;
            // 0x35ed7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35ED80u;
        goto label_35ed80;
    }
    ctx->pc = 0x35ED78u;
    SET_GPR_U32(ctx, 31, 0x35ED80u);
    ctx->pc = 0x35ED7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35ED78u;
            // 0x35ed7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ED80u; }
        if (ctx->pc != 0x35ED80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ED80u; }
        if (ctx->pc != 0x35ED80u) { return; }
    }
    ctx->pc = 0x35ED80u;
label_35ed80:
    // 0x35ed80: 0xc04e738  jal         func_139CE0
label_35ed84:
    if (ctx->pc == 0x35ED84u) {
        ctx->pc = 0x35ED84u;
            // 0x35ed84: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->pc = 0x35ED88u;
        goto label_35ed88;
    }
    ctx->pc = 0x35ED80u;
    SET_GPR_U32(ctx, 31, 0x35ED88u);
    ctx->pc = 0x35ED84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35ED80u;
            // 0x35ed84: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ED88u; }
        if (ctx->pc != 0x35ED88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35ED88u; }
        if (ctx->pc != 0x35ED88u) { return; }
    }
    ctx->pc = 0x35ED88u;
label_35ed88:
    // 0x35ed88: 0x8ec40010  lw          $a0, 0x10($s6)
    ctx->pc = 0x35ed88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_35ed8c:
    // 0x35ed8c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x35ed8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35ed90:
    // 0x35ed90: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x35ed90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_35ed94:
    // 0x35ed94: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x35ed94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_35ed98:
    // 0x35ed98: 0xc054c2c  jal         func_1530B0
label_35ed9c:
    if (ctx->pc == 0x35ED9Cu) {
        ctx->pc = 0x35ED9Cu;
            // 0x35ed9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35EDA0u;
        goto label_35eda0;
    }
    ctx->pc = 0x35ED98u;
    SET_GPR_U32(ctx, 31, 0x35EDA0u);
    ctx->pc = 0x35ED9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35ED98u;
            // 0x35ed9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EDA0u; }
        if (ctx->pc != 0x35EDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35EDA0u; }
        if (ctx->pc != 0x35EDA0u) { return; }
    }
    ctx->pc = 0x35EDA0u;
label_35eda0:
    // 0x35eda0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x35eda0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_35eda4:
    // 0x35eda4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x35eda4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_35eda8:
    // 0x35eda8: 0x2e3182b  sltu        $v1, $s7, $v1
    ctx->pc = 0x35eda8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_35edac:
    // 0x35edac: 0x1460ff0d  bnez        $v1, . + 4 + (-0xF3 << 2)
label_35edb0:
    if (ctx->pc == 0x35EDB0u) {
        ctx->pc = 0x35EDB0u;
            // 0x35edb0: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->pc = 0x35EDB4u;
        goto label_35edb4;
    }
    ctx->pc = 0x35EDACu;
    {
        const bool branch_taken_0x35edac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35EDACu;
            // 0x35edb0: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35edac) {
            ctx->pc = 0x35E9E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35e9e4;
        }
    }
    ctx->pc = 0x35EDB4u;
label_35edb4:
    // 0x35edb4: 0x0  nop
    ctx->pc = 0x35edb4u;
    // NOP
label_35edb8:
    // 0x35edb8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x35edb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_35edbc:
    // 0x35edbc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x35edbcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_35edc0:
    // 0x35edc0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x35edc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_35edc4:
    // 0x35edc4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x35edc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_35edc8:
    // 0x35edc8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x35edc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_35edcc:
    // 0x35edcc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x35edccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_35edd0:
    // 0x35edd0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x35edd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_35edd4:
    // 0x35edd4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x35edd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_35edd8:
    // 0x35edd8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x35edd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35eddc:
    // 0x35eddc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x35eddcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35ede0:
    // 0x35ede0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x35ede0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35ede4:
    // 0x35ede4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x35ede4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35ede8:
    // 0x35ede8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35ede8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35edec:
    // 0x35edec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35edecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35edf0:
    // 0x35edf0: 0x3e00008  jr          $ra
label_35edf4:
    if (ctx->pc == 0x35EDF4u) {
        ctx->pc = 0x35EDF4u;
            // 0x35edf4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x35EDF8u;
        goto label_35edf8;
    }
    ctx->pc = 0x35EDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35EDF0u;
            // 0x35edf4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35EDF8u;
label_35edf8:
    // 0x35edf8: 0x0  nop
    ctx->pc = 0x35edf8u;
    // NOP
label_35edfc:
    // 0x35edfc: 0x0  nop
    ctx->pc = 0x35edfcu;
    // NOP
}
