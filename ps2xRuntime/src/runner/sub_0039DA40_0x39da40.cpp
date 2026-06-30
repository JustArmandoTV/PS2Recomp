#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039DA40
// Address: 0x39da40 - 0x39eb40
void sub_0039DA40_0x39da40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039DA40_0x39da40");
#endif

    switch (ctx->pc) {
        case 0x39da40u: goto label_39da40;
        case 0x39da44u: goto label_39da44;
        case 0x39da48u: goto label_39da48;
        case 0x39da4cu: goto label_39da4c;
        case 0x39da50u: goto label_39da50;
        case 0x39da54u: goto label_39da54;
        case 0x39da58u: goto label_39da58;
        case 0x39da5cu: goto label_39da5c;
        case 0x39da60u: goto label_39da60;
        case 0x39da64u: goto label_39da64;
        case 0x39da68u: goto label_39da68;
        case 0x39da6cu: goto label_39da6c;
        case 0x39da70u: goto label_39da70;
        case 0x39da74u: goto label_39da74;
        case 0x39da78u: goto label_39da78;
        case 0x39da7cu: goto label_39da7c;
        case 0x39da80u: goto label_39da80;
        case 0x39da84u: goto label_39da84;
        case 0x39da88u: goto label_39da88;
        case 0x39da8cu: goto label_39da8c;
        case 0x39da90u: goto label_39da90;
        case 0x39da94u: goto label_39da94;
        case 0x39da98u: goto label_39da98;
        case 0x39da9cu: goto label_39da9c;
        case 0x39daa0u: goto label_39daa0;
        case 0x39daa4u: goto label_39daa4;
        case 0x39daa8u: goto label_39daa8;
        case 0x39daacu: goto label_39daac;
        case 0x39dab0u: goto label_39dab0;
        case 0x39dab4u: goto label_39dab4;
        case 0x39dab8u: goto label_39dab8;
        case 0x39dabcu: goto label_39dabc;
        case 0x39dac0u: goto label_39dac0;
        case 0x39dac4u: goto label_39dac4;
        case 0x39dac8u: goto label_39dac8;
        case 0x39daccu: goto label_39dacc;
        case 0x39dad0u: goto label_39dad0;
        case 0x39dad4u: goto label_39dad4;
        case 0x39dad8u: goto label_39dad8;
        case 0x39dadcu: goto label_39dadc;
        case 0x39dae0u: goto label_39dae0;
        case 0x39dae4u: goto label_39dae4;
        case 0x39dae8u: goto label_39dae8;
        case 0x39daecu: goto label_39daec;
        case 0x39daf0u: goto label_39daf0;
        case 0x39daf4u: goto label_39daf4;
        case 0x39daf8u: goto label_39daf8;
        case 0x39dafcu: goto label_39dafc;
        case 0x39db00u: goto label_39db00;
        case 0x39db04u: goto label_39db04;
        case 0x39db08u: goto label_39db08;
        case 0x39db0cu: goto label_39db0c;
        case 0x39db10u: goto label_39db10;
        case 0x39db14u: goto label_39db14;
        case 0x39db18u: goto label_39db18;
        case 0x39db1cu: goto label_39db1c;
        case 0x39db20u: goto label_39db20;
        case 0x39db24u: goto label_39db24;
        case 0x39db28u: goto label_39db28;
        case 0x39db2cu: goto label_39db2c;
        case 0x39db30u: goto label_39db30;
        case 0x39db34u: goto label_39db34;
        case 0x39db38u: goto label_39db38;
        case 0x39db3cu: goto label_39db3c;
        case 0x39db40u: goto label_39db40;
        case 0x39db44u: goto label_39db44;
        case 0x39db48u: goto label_39db48;
        case 0x39db4cu: goto label_39db4c;
        case 0x39db50u: goto label_39db50;
        case 0x39db54u: goto label_39db54;
        case 0x39db58u: goto label_39db58;
        case 0x39db5cu: goto label_39db5c;
        case 0x39db60u: goto label_39db60;
        case 0x39db64u: goto label_39db64;
        case 0x39db68u: goto label_39db68;
        case 0x39db6cu: goto label_39db6c;
        case 0x39db70u: goto label_39db70;
        case 0x39db74u: goto label_39db74;
        case 0x39db78u: goto label_39db78;
        case 0x39db7cu: goto label_39db7c;
        case 0x39db80u: goto label_39db80;
        case 0x39db84u: goto label_39db84;
        case 0x39db88u: goto label_39db88;
        case 0x39db8cu: goto label_39db8c;
        case 0x39db90u: goto label_39db90;
        case 0x39db94u: goto label_39db94;
        case 0x39db98u: goto label_39db98;
        case 0x39db9cu: goto label_39db9c;
        case 0x39dba0u: goto label_39dba0;
        case 0x39dba4u: goto label_39dba4;
        case 0x39dba8u: goto label_39dba8;
        case 0x39dbacu: goto label_39dbac;
        case 0x39dbb0u: goto label_39dbb0;
        case 0x39dbb4u: goto label_39dbb4;
        case 0x39dbb8u: goto label_39dbb8;
        case 0x39dbbcu: goto label_39dbbc;
        case 0x39dbc0u: goto label_39dbc0;
        case 0x39dbc4u: goto label_39dbc4;
        case 0x39dbc8u: goto label_39dbc8;
        case 0x39dbccu: goto label_39dbcc;
        case 0x39dbd0u: goto label_39dbd0;
        case 0x39dbd4u: goto label_39dbd4;
        case 0x39dbd8u: goto label_39dbd8;
        case 0x39dbdcu: goto label_39dbdc;
        case 0x39dbe0u: goto label_39dbe0;
        case 0x39dbe4u: goto label_39dbe4;
        case 0x39dbe8u: goto label_39dbe8;
        case 0x39dbecu: goto label_39dbec;
        case 0x39dbf0u: goto label_39dbf0;
        case 0x39dbf4u: goto label_39dbf4;
        case 0x39dbf8u: goto label_39dbf8;
        case 0x39dbfcu: goto label_39dbfc;
        case 0x39dc00u: goto label_39dc00;
        case 0x39dc04u: goto label_39dc04;
        case 0x39dc08u: goto label_39dc08;
        case 0x39dc0cu: goto label_39dc0c;
        case 0x39dc10u: goto label_39dc10;
        case 0x39dc14u: goto label_39dc14;
        case 0x39dc18u: goto label_39dc18;
        case 0x39dc1cu: goto label_39dc1c;
        case 0x39dc20u: goto label_39dc20;
        case 0x39dc24u: goto label_39dc24;
        case 0x39dc28u: goto label_39dc28;
        case 0x39dc2cu: goto label_39dc2c;
        case 0x39dc30u: goto label_39dc30;
        case 0x39dc34u: goto label_39dc34;
        case 0x39dc38u: goto label_39dc38;
        case 0x39dc3cu: goto label_39dc3c;
        case 0x39dc40u: goto label_39dc40;
        case 0x39dc44u: goto label_39dc44;
        case 0x39dc48u: goto label_39dc48;
        case 0x39dc4cu: goto label_39dc4c;
        case 0x39dc50u: goto label_39dc50;
        case 0x39dc54u: goto label_39dc54;
        case 0x39dc58u: goto label_39dc58;
        case 0x39dc5cu: goto label_39dc5c;
        case 0x39dc60u: goto label_39dc60;
        case 0x39dc64u: goto label_39dc64;
        case 0x39dc68u: goto label_39dc68;
        case 0x39dc6cu: goto label_39dc6c;
        case 0x39dc70u: goto label_39dc70;
        case 0x39dc74u: goto label_39dc74;
        case 0x39dc78u: goto label_39dc78;
        case 0x39dc7cu: goto label_39dc7c;
        case 0x39dc80u: goto label_39dc80;
        case 0x39dc84u: goto label_39dc84;
        case 0x39dc88u: goto label_39dc88;
        case 0x39dc8cu: goto label_39dc8c;
        case 0x39dc90u: goto label_39dc90;
        case 0x39dc94u: goto label_39dc94;
        case 0x39dc98u: goto label_39dc98;
        case 0x39dc9cu: goto label_39dc9c;
        case 0x39dca0u: goto label_39dca0;
        case 0x39dca4u: goto label_39dca4;
        case 0x39dca8u: goto label_39dca8;
        case 0x39dcacu: goto label_39dcac;
        case 0x39dcb0u: goto label_39dcb0;
        case 0x39dcb4u: goto label_39dcb4;
        case 0x39dcb8u: goto label_39dcb8;
        case 0x39dcbcu: goto label_39dcbc;
        case 0x39dcc0u: goto label_39dcc0;
        case 0x39dcc4u: goto label_39dcc4;
        case 0x39dcc8u: goto label_39dcc8;
        case 0x39dcccu: goto label_39dccc;
        case 0x39dcd0u: goto label_39dcd0;
        case 0x39dcd4u: goto label_39dcd4;
        case 0x39dcd8u: goto label_39dcd8;
        case 0x39dcdcu: goto label_39dcdc;
        case 0x39dce0u: goto label_39dce0;
        case 0x39dce4u: goto label_39dce4;
        case 0x39dce8u: goto label_39dce8;
        case 0x39dcecu: goto label_39dcec;
        case 0x39dcf0u: goto label_39dcf0;
        case 0x39dcf4u: goto label_39dcf4;
        case 0x39dcf8u: goto label_39dcf8;
        case 0x39dcfcu: goto label_39dcfc;
        case 0x39dd00u: goto label_39dd00;
        case 0x39dd04u: goto label_39dd04;
        case 0x39dd08u: goto label_39dd08;
        case 0x39dd0cu: goto label_39dd0c;
        case 0x39dd10u: goto label_39dd10;
        case 0x39dd14u: goto label_39dd14;
        case 0x39dd18u: goto label_39dd18;
        case 0x39dd1cu: goto label_39dd1c;
        case 0x39dd20u: goto label_39dd20;
        case 0x39dd24u: goto label_39dd24;
        case 0x39dd28u: goto label_39dd28;
        case 0x39dd2cu: goto label_39dd2c;
        case 0x39dd30u: goto label_39dd30;
        case 0x39dd34u: goto label_39dd34;
        case 0x39dd38u: goto label_39dd38;
        case 0x39dd3cu: goto label_39dd3c;
        case 0x39dd40u: goto label_39dd40;
        case 0x39dd44u: goto label_39dd44;
        case 0x39dd48u: goto label_39dd48;
        case 0x39dd4cu: goto label_39dd4c;
        case 0x39dd50u: goto label_39dd50;
        case 0x39dd54u: goto label_39dd54;
        case 0x39dd58u: goto label_39dd58;
        case 0x39dd5cu: goto label_39dd5c;
        case 0x39dd60u: goto label_39dd60;
        case 0x39dd64u: goto label_39dd64;
        case 0x39dd68u: goto label_39dd68;
        case 0x39dd6cu: goto label_39dd6c;
        case 0x39dd70u: goto label_39dd70;
        case 0x39dd74u: goto label_39dd74;
        case 0x39dd78u: goto label_39dd78;
        case 0x39dd7cu: goto label_39dd7c;
        case 0x39dd80u: goto label_39dd80;
        case 0x39dd84u: goto label_39dd84;
        case 0x39dd88u: goto label_39dd88;
        case 0x39dd8cu: goto label_39dd8c;
        case 0x39dd90u: goto label_39dd90;
        case 0x39dd94u: goto label_39dd94;
        case 0x39dd98u: goto label_39dd98;
        case 0x39dd9cu: goto label_39dd9c;
        case 0x39dda0u: goto label_39dda0;
        case 0x39dda4u: goto label_39dda4;
        case 0x39dda8u: goto label_39dda8;
        case 0x39ddacu: goto label_39ddac;
        case 0x39ddb0u: goto label_39ddb0;
        case 0x39ddb4u: goto label_39ddb4;
        case 0x39ddb8u: goto label_39ddb8;
        case 0x39ddbcu: goto label_39ddbc;
        case 0x39ddc0u: goto label_39ddc0;
        case 0x39ddc4u: goto label_39ddc4;
        case 0x39ddc8u: goto label_39ddc8;
        case 0x39ddccu: goto label_39ddcc;
        case 0x39ddd0u: goto label_39ddd0;
        case 0x39ddd4u: goto label_39ddd4;
        case 0x39ddd8u: goto label_39ddd8;
        case 0x39dddcu: goto label_39dddc;
        case 0x39dde0u: goto label_39dde0;
        case 0x39dde4u: goto label_39dde4;
        case 0x39dde8u: goto label_39dde8;
        case 0x39ddecu: goto label_39ddec;
        case 0x39ddf0u: goto label_39ddf0;
        case 0x39ddf4u: goto label_39ddf4;
        case 0x39ddf8u: goto label_39ddf8;
        case 0x39ddfcu: goto label_39ddfc;
        case 0x39de00u: goto label_39de00;
        case 0x39de04u: goto label_39de04;
        case 0x39de08u: goto label_39de08;
        case 0x39de0cu: goto label_39de0c;
        case 0x39de10u: goto label_39de10;
        case 0x39de14u: goto label_39de14;
        case 0x39de18u: goto label_39de18;
        case 0x39de1cu: goto label_39de1c;
        case 0x39de20u: goto label_39de20;
        case 0x39de24u: goto label_39de24;
        case 0x39de28u: goto label_39de28;
        case 0x39de2cu: goto label_39de2c;
        case 0x39de30u: goto label_39de30;
        case 0x39de34u: goto label_39de34;
        case 0x39de38u: goto label_39de38;
        case 0x39de3cu: goto label_39de3c;
        case 0x39de40u: goto label_39de40;
        case 0x39de44u: goto label_39de44;
        case 0x39de48u: goto label_39de48;
        case 0x39de4cu: goto label_39de4c;
        case 0x39de50u: goto label_39de50;
        case 0x39de54u: goto label_39de54;
        case 0x39de58u: goto label_39de58;
        case 0x39de5cu: goto label_39de5c;
        case 0x39de60u: goto label_39de60;
        case 0x39de64u: goto label_39de64;
        case 0x39de68u: goto label_39de68;
        case 0x39de6cu: goto label_39de6c;
        case 0x39de70u: goto label_39de70;
        case 0x39de74u: goto label_39de74;
        case 0x39de78u: goto label_39de78;
        case 0x39de7cu: goto label_39de7c;
        case 0x39de80u: goto label_39de80;
        case 0x39de84u: goto label_39de84;
        case 0x39de88u: goto label_39de88;
        case 0x39de8cu: goto label_39de8c;
        case 0x39de90u: goto label_39de90;
        case 0x39de94u: goto label_39de94;
        case 0x39de98u: goto label_39de98;
        case 0x39de9cu: goto label_39de9c;
        case 0x39dea0u: goto label_39dea0;
        case 0x39dea4u: goto label_39dea4;
        case 0x39dea8u: goto label_39dea8;
        case 0x39deacu: goto label_39deac;
        case 0x39deb0u: goto label_39deb0;
        case 0x39deb4u: goto label_39deb4;
        case 0x39deb8u: goto label_39deb8;
        case 0x39debcu: goto label_39debc;
        case 0x39dec0u: goto label_39dec0;
        case 0x39dec4u: goto label_39dec4;
        case 0x39dec8u: goto label_39dec8;
        case 0x39deccu: goto label_39decc;
        case 0x39ded0u: goto label_39ded0;
        case 0x39ded4u: goto label_39ded4;
        case 0x39ded8u: goto label_39ded8;
        case 0x39dedcu: goto label_39dedc;
        case 0x39dee0u: goto label_39dee0;
        case 0x39dee4u: goto label_39dee4;
        case 0x39dee8u: goto label_39dee8;
        case 0x39deecu: goto label_39deec;
        case 0x39def0u: goto label_39def0;
        case 0x39def4u: goto label_39def4;
        case 0x39def8u: goto label_39def8;
        case 0x39defcu: goto label_39defc;
        case 0x39df00u: goto label_39df00;
        case 0x39df04u: goto label_39df04;
        case 0x39df08u: goto label_39df08;
        case 0x39df0cu: goto label_39df0c;
        case 0x39df10u: goto label_39df10;
        case 0x39df14u: goto label_39df14;
        case 0x39df18u: goto label_39df18;
        case 0x39df1cu: goto label_39df1c;
        case 0x39df20u: goto label_39df20;
        case 0x39df24u: goto label_39df24;
        case 0x39df28u: goto label_39df28;
        case 0x39df2cu: goto label_39df2c;
        case 0x39df30u: goto label_39df30;
        case 0x39df34u: goto label_39df34;
        case 0x39df38u: goto label_39df38;
        case 0x39df3cu: goto label_39df3c;
        case 0x39df40u: goto label_39df40;
        case 0x39df44u: goto label_39df44;
        case 0x39df48u: goto label_39df48;
        case 0x39df4cu: goto label_39df4c;
        case 0x39df50u: goto label_39df50;
        case 0x39df54u: goto label_39df54;
        case 0x39df58u: goto label_39df58;
        case 0x39df5cu: goto label_39df5c;
        case 0x39df60u: goto label_39df60;
        case 0x39df64u: goto label_39df64;
        case 0x39df68u: goto label_39df68;
        case 0x39df6cu: goto label_39df6c;
        case 0x39df70u: goto label_39df70;
        case 0x39df74u: goto label_39df74;
        case 0x39df78u: goto label_39df78;
        case 0x39df7cu: goto label_39df7c;
        case 0x39df80u: goto label_39df80;
        case 0x39df84u: goto label_39df84;
        case 0x39df88u: goto label_39df88;
        case 0x39df8cu: goto label_39df8c;
        case 0x39df90u: goto label_39df90;
        case 0x39df94u: goto label_39df94;
        case 0x39df98u: goto label_39df98;
        case 0x39df9cu: goto label_39df9c;
        case 0x39dfa0u: goto label_39dfa0;
        case 0x39dfa4u: goto label_39dfa4;
        case 0x39dfa8u: goto label_39dfa8;
        case 0x39dfacu: goto label_39dfac;
        case 0x39dfb0u: goto label_39dfb0;
        case 0x39dfb4u: goto label_39dfb4;
        case 0x39dfb8u: goto label_39dfb8;
        case 0x39dfbcu: goto label_39dfbc;
        case 0x39dfc0u: goto label_39dfc0;
        case 0x39dfc4u: goto label_39dfc4;
        case 0x39dfc8u: goto label_39dfc8;
        case 0x39dfccu: goto label_39dfcc;
        case 0x39dfd0u: goto label_39dfd0;
        case 0x39dfd4u: goto label_39dfd4;
        case 0x39dfd8u: goto label_39dfd8;
        case 0x39dfdcu: goto label_39dfdc;
        case 0x39dfe0u: goto label_39dfe0;
        case 0x39dfe4u: goto label_39dfe4;
        case 0x39dfe8u: goto label_39dfe8;
        case 0x39dfecu: goto label_39dfec;
        case 0x39dff0u: goto label_39dff0;
        case 0x39dff4u: goto label_39dff4;
        case 0x39dff8u: goto label_39dff8;
        case 0x39dffcu: goto label_39dffc;
        case 0x39e000u: goto label_39e000;
        case 0x39e004u: goto label_39e004;
        case 0x39e008u: goto label_39e008;
        case 0x39e00cu: goto label_39e00c;
        case 0x39e010u: goto label_39e010;
        case 0x39e014u: goto label_39e014;
        case 0x39e018u: goto label_39e018;
        case 0x39e01cu: goto label_39e01c;
        case 0x39e020u: goto label_39e020;
        case 0x39e024u: goto label_39e024;
        case 0x39e028u: goto label_39e028;
        case 0x39e02cu: goto label_39e02c;
        case 0x39e030u: goto label_39e030;
        case 0x39e034u: goto label_39e034;
        case 0x39e038u: goto label_39e038;
        case 0x39e03cu: goto label_39e03c;
        case 0x39e040u: goto label_39e040;
        case 0x39e044u: goto label_39e044;
        case 0x39e048u: goto label_39e048;
        case 0x39e04cu: goto label_39e04c;
        case 0x39e050u: goto label_39e050;
        case 0x39e054u: goto label_39e054;
        case 0x39e058u: goto label_39e058;
        case 0x39e05cu: goto label_39e05c;
        case 0x39e060u: goto label_39e060;
        case 0x39e064u: goto label_39e064;
        case 0x39e068u: goto label_39e068;
        case 0x39e06cu: goto label_39e06c;
        case 0x39e070u: goto label_39e070;
        case 0x39e074u: goto label_39e074;
        case 0x39e078u: goto label_39e078;
        case 0x39e07cu: goto label_39e07c;
        case 0x39e080u: goto label_39e080;
        case 0x39e084u: goto label_39e084;
        case 0x39e088u: goto label_39e088;
        case 0x39e08cu: goto label_39e08c;
        case 0x39e090u: goto label_39e090;
        case 0x39e094u: goto label_39e094;
        case 0x39e098u: goto label_39e098;
        case 0x39e09cu: goto label_39e09c;
        case 0x39e0a0u: goto label_39e0a0;
        case 0x39e0a4u: goto label_39e0a4;
        case 0x39e0a8u: goto label_39e0a8;
        case 0x39e0acu: goto label_39e0ac;
        case 0x39e0b0u: goto label_39e0b0;
        case 0x39e0b4u: goto label_39e0b4;
        case 0x39e0b8u: goto label_39e0b8;
        case 0x39e0bcu: goto label_39e0bc;
        case 0x39e0c0u: goto label_39e0c0;
        case 0x39e0c4u: goto label_39e0c4;
        case 0x39e0c8u: goto label_39e0c8;
        case 0x39e0ccu: goto label_39e0cc;
        case 0x39e0d0u: goto label_39e0d0;
        case 0x39e0d4u: goto label_39e0d4;
        case 0x39e0d8u: goto label_39e0d8;
        case 0x39e0dcu: goto label_39e0dc;
        case 0x39e0e0u: goto label_39e0e0;
        case 0x39e0e4u: goto label_39e0e4;
        case 0x39e0e8u: goto label_39e0e8;
        case 0x39e0ecu: goto label_39e0ec;
        case 0x39e0f0u: goto label_39e0f0;
        case 0x39e0f4u: goto label_39e0f4;
        case 0x39e0f8u: goto label_39e0f8;
        case 0x39e0fcu: goto label_39e0fc;
        case 0x39e100u: goto label_39e100;
        case 0x39e104u: goto label_39e104;
        case 0x39e108u: goto label_39e108;
        case 0x39e10cu: goto label_39e10c;
        case 0x39e110u: goto label_39e110;
        case 0x39e114u: goto label_39e114;
        case 0x39e118u: goto label_39e118;
        case 0x39e11cu: goto label_39e11c;
        case 0x39e120u: goto label_39e120;
        case 0x39e124u: goto label_39e124;
        case 0x39e128u: goto label_39e128;
        case 0x39e12cu: goto label_39e12c;
        case 0x39e130u: goto label_39e130;
        case 0x39e134u: goto label_39e134;
        case 0x39e138u: goto label_39e138;
        case 0x39e13cu: goto label_39e13c;
        case 0x39e140u: goto label_39e140;
        case 0x39e144u: goto label_39e144;
        case 0x39e148u: goto label_39e148;
        case 0x39e14cu: goto label_39e14c;
        case 0x39e150u: goto label_39e150;
        case 0x39e154u: goto label_39e154;
        case 0x39e158u: goto label_39e158;
        case 0x39e15cu: goto label_39e15c;
        case 0x39e160u: goto label_39e160;
        case 0x39e164u: goto label_39e164;
        case 0x39e168u: goto label_39e168;
        case 0x39e16cu: goto label_39e16c;
        case 0x39e170u: goto label_39e170;
        case 0x39e174u: goto label_39e174;
        case 0x39e178u: goto label_39e178;
        case 0x39e17cu: goto label_39e17c;
        case 0x39e180u: goto label_39e180;
        case 0x39e184u: goto label_39e184;
        case 0x39e188u: goto label_39e188;
        case 0x39e18cu: goto label_39e18c;
        case 0x39e190u: goto label_39e190;
        case 0x39e194u: goto label_39e194;
        case 0x39e198u: goto label_39e198;
        case 0x39e19cu: goto label_39e19c;
        case 0x39e1a0u: goto label_39e1a0;
        case 0x39e1a4u: goto label_39e1a4;
        case 0x39e1a8u: goto label_39e1a8;
        case 0x39e1acu: goto label_39e1ac;
        case 0x39e1b0u: goto label_39e1b0;
        case 0x39e1b4u: goto label_39e1b4;
        case 0x39e1b8u: goto label_39e1b8;
        case 0x39e1bcu: goto label_39e1bc;
        case 0x39e1c0u: goto label_39e1c0;
        case 0x39e1c4u: goto label_39e1c4;
        case 0x39e1c8u: goto label_39e1c8;
        case 0x39e1ccu: goto label_39e1cc;
        case 0x39e1d0u: goto label_39e1d0;
        case 0x39e1d4u: goto label_39e1d4;
        case 0x39e1d8u: goto label_39e1d8;
        case 0x39e1dcu: goto label_39e1dc;
        case 0x39e1e0u: goto label_39e1e0;
        case 0x39e1e4u: goto label_39e1e4;
        case 0x39e1e8u: goto label_39e1e8;
        case 0x39e1ecu: goto label_39e1ec;
        case 0x39e1f0u: goto label_39e1f0;
        case 0x39e1f4u: goto label_39e1f4;
        case 0x39e1f8u: goto label_39e1f8;
        case 0x39e1fcu: goto label_39e1fc;
        case 0x39e200u: goto label_39e200;
        case 0x39e204u: goto label_39e204;
        case 0x39e208u: goto label_39e208;
        case 0x39e20cu: goto label_39e20c;
        case 0x39e210u: goto label_39e210;
        case 0x39e214u: goto label_39e214;
        case 0x39e218u: goto label_39e218;
        case 0x39e21cu: goto label_39e21c;
        case 0x39e220u: goto label_39e220;
        case 0x39e224u: goto label_39e224;
        case 0x39e228u: goto label_39e228;
        case 0x39e22cu: goto label_39e22c;
        case 0x39e230u: goto label_39e230;
        case 0x39e234u: goto label_39e234;
        case 0x39e238u: goto label_39e238;
        case 0x39e23cu: goto label_39e23c;
        case 0x39e240u: goto label_39e240;
        case 0x39e244u: goto label_39e244;
        case 0x39e248u: goto label_39e248;
        case 0x39e24cu: goto label_39e24c;
        case 0x39e250u: goto label_39e250;
        case 0x39e254u: goto label_39e254;
        case 0x39e258u: goto label_39e258;
        case 0x39e25cu: goto label_39e25c;
        case 0x39e260u: goto label_39e260;
        case 0x39e264u: goto label_39e264;
        case 0x39e268u: goto label_39e268;
        case 0x39e26cu: goto label_39e26c;
        case 0x39e270u: goto label_39e270;
        case 0x39e274u: goto label_39e274;
        case 0x39e278u: goto label_39e278;
        case 0x39e27cu: goto label_39e27c;
        case 0x39e280u: goto label_39e280;
        case 0x39e284u: goto label_39e284;
        case 0x39e288u: goto label_39e288;
        case 0x39e28cu: goto label_39e28c;
        case 0x39e290u: goto label_39e290;
        case 0x39e294u: goto label_39e294;
        case 0x39e298u: goto label_39e298;
        case 0x39e29cu: goto label_39e29c;
        case 0x39e2a0u: goto label_39e2a0;
        case 0x39e2a4u: goto label_39e2a4;
        case 0x39e2a8u: goto label_39e2a8;
        case 0x39e2acu: goto label_39e2ac;
        case 0x39e2b0u: goto label_39e2b0;
        case 0x39e2b4u: goto label_39e2b4;
        case 0x39e2b8u: goto label_39e2b8;
        case 0x39e2bcu: goto label_39e2bc;
        case 0x39e2c0u: goto label_39e2c0;
        case 0x39e2c4u: goto label_39e2c4;
        case 0x39e2c8u: goto label_39e2c8;
        case 0x39e2ccu: goto label_39e2cc;
        case 0x39e2d0u: goto label_39e2d0;
        case 0x39e2d4u: goto label_39e2d4;
        case 0x39e2d8u: goto label_39e2d8;
        case 0x39e2dcu: goto label_39e2dc;
        case 0x39e2e0u: goto label_39e2e0;
        case 0x39e2e4u: goto label_39e2e4;
        case 0x39e2e8u: goto label_39e2e8;
        case 0x39e2ecu: goto label_39e2ec;
        case 0x39e2f0u: goto label_39e2f0;
        case 0x39e2f4u: goto label_39e2f4;
        case 0x39e2f8u: goto label_39e2f8;
        case 0x39e2fcu: goto label_39e2fc;
        case 0x39e300u: goto label_39e300;
        case 0x39e304u: goto label_39e304;
        case 0x39e308u: goto label_39e308;
        case 0x39e30cu: goto label_39e30c;
        case 0x39e310u: goto label_39e310;
        case 0x39e314u: goto label_39e314;
        case 0x39e318u: goto label_39e318;
        case 0x39e31cu: goto label_39e31c;
        case 0x39e320u: goto label_39e320;
        case 0x39e324u: goto label_39e324;
        case 0x39e328u: goto label_39e328;
        case 0x39e32cu: goto label_39e32c;
        case 0x39e330u: goto label_39e330;
        case 0x39e334u: goto label_39e334;
        case 0x39e338u: goto label_39e338;
        case 0x39e33cu: goto label_39e33c;
        case 0x39e340u: goto label_39e340;
        case 0x39e344u: goto label_39e344;
        case 0x39e348u: goto label_39e348;
        case 0x39e34cu: goto label_39e34c;
        case 0x39e350u: goto label_39e350;
        case 0x39e354u: goto label_39e354;
        case 0x39e358u: goto label_39e358;
        case 0x39e35cu: goto label_39e35c;
        case 0x39e360u: goto label_39e360;
        case 0x39e364u: goto label_39e364;
        case 0x39e368u: goto label_39e368;
        case 0x39e36cu: goto label_39e36c;
        case 0x39e370u: goto label_39e370;
        case 0x39e374u: goto label_39e374;
        case 0x39e378u: goto label_39e378;
        case 0x39e37cu: goto label_39e37c;
        case 0x39e380u: goto label_39e380;
        case 0x39e384u: goto label_39e384;
        case 0x39e388u: goto label_39e388;
        case 0x39e38cu: goto label_39e38c;
        case 0x39e390u: goto label_39e390;
        case 0x39e394u: goto label_39e394;
        case 0x39e398u: goto label_39e398;
        case 0x39e39cu: goto label_39e39c;
        case 0x39e3a0u: goto label_39e3a0;
        case 0x39e3a4u: goto label_39e3a4;
        case 0x39e3a8u: goto label_39e3a8;
        case 0x39e3acu: goto label_39e3ac;
        case 0x39e3b0u: goto label_39e3b0;
        case 0x39e3b4u: goto label_39e3b4;
        case 0x39e3b8u: goto label_39e3b8;
        case 0x39e3bcu: goto label_39e3bc;
        case 0x39e3c0u: goto label_39e3c0;
        case 0x39e3c4u: goto label_39e3c4;
        case 0x39e3c8u: goto label_39e3c8;
        case 0x39e3ccu: goto label_39e3cc;
        case 0x39e3d0u: goto label_39e3d0;
        case 0x39e3d4u: goto label_39e3d4;
        case 0x39e3d8u: goto label_39e3d8;
        case 0x39e3dcu: goto label_39e3dc;
        case 0x39e3e0u: goto label_39e3e0;
        case 0x39e3e4u: goto label_39e3e4;
        case 0x39e3e8u: goto label_39e3e8;
        case 0x39e3ecu: goto label_39e3ec;
        case 0x39e3f0u: goto label_39e3f0;
        case 0x39e3f4u: goto label_39e3f4;
        case 0x39e3f8u: goto label_39e3f8;
        case 0x39e3fcu: goto label_39e3fc;
        case 0x39e400u: goto label_39e400;
        case 0x39e404u: goto label_39e404;
        case 0x39e408u: goto label_39e408;
        case 0x39e40cu: goto label_39e40c;
        case 0x39e410u: goto label_39e410;
        case 0x39e414u: goto label_39e414;
        case 0x39e418u: goto label_39e418;
        case 0x39e41cu: goto label_39e41c;
        case 0x39e420u: goto label_39e420;
        case 0x39e424u: goto label_39e424;
        case 0x39e428u: goto label_39e428;
        case 0x39e42cu: goto label_39e42c;
        case 0x39e430u: goto label_39e430;
        case 0x39e434u: goto label_39e434;
        case 0x39e438u: goto label_39e438;
        case 0x39e43cu: goto label_39e43c;
        case 0x39e440u: goto label_39e440;
        case 0x39e444u: goto label_39e444;
        case 0x39e448u: goto label_39e448;
        case 0x39e44cu: goto label_39e44c;
        case 0x39e450u: goto label_39e450;
        case 0x39e454u: goto label_39e454;
        case 0x39e458u: goto label_39e458;
        case 0x39e45cu: goto label_39e45c;
        case 0x39e460u: goto label_39e460;
        case 0x39e464u: goto label_39e464;
        case 0x39e468u: goto label_39e468;
        case 0x39e46cu: goto label_39e46c;
        case 0x39e470u: goto label_39e470;
        case 0x39e474u: goto label_39e474;
        case 0x39e478u: goto label_39e478;
        case 0x39e47cu: goto label_39e47c;
        case 0x39e480u: goto label_39e480;
        case 0x39e484u: goto label_39e484;
        case 0x39e488u: goto label_39e488;
        case 0x39e48cu: goto label_39e48c;
        case 0x39e490u: goto label_39e490;
        case 0x39e494u: goto label_39e494;
        case 0x39e498u: goto label_39e498;
        case 0x39e49cu: goto label_39e49c;
        case 0x39e4a0u: goto label_39e4a0;
        case 0x39e4a4u: goto label_39e4a4;
        case 0x39e4a8u: goto label_39e4a8;
        case 0x39e4acu: goto label_39e4ac;
        case 0x39e4b0u: goto label_39e4b0;
        case 0x39e4b4u: goto label_39e4b4;
        case 0x39e4b8u: goto label_39e4b8;
        case 0x39e4bcu: goto label_39e4bc;
        case 0x39e4c0u: goto label_39e4c0;
        case 0x39e4c4u: goto label_39e4c4;
        case 0x39e4c8u: goto label_39e4c8;
        case 0x39e4ccu: goto label_39e4cc;
        case 0x39e4d0u: goto label_39e4d0;
        case 0x39e4d4u: goto label_39e4d4;
        case 0x39e4d8u: goto label_39e4d8;
        case 0x39e4dcu: goto label_39e4dc;
        case 0x39e4e0u: goto label_39e4e0;
        case 0x39e4e4u: goto label_39e4e4;
        case 0x39e4e8u: goto label_39e4e8;
        case 0x39e4ecu: goto label_39e4ec;
        case 0x39e4f0u: goto label_39e4f0;
        case 0x39e4f4u: goto label_39e4f4;
        case 0x39e4f8u: goto label_39e4f8;
        case 0x39e4fcu: goto label_39e4fc;
        case 0x39e500u: goto label_39e500;
        case 0x39e504u: goto label_39e504;
        case 0x39e508u: goto label_39e508;
        case 0x39e50cu: goto label_39e50c;
        case 0x39e510u: goto label_39e510;
        case 0x39e514u: goto label_39e514;
        case 0x39e518u: goto label_39e518;
        case 0x39e51cu: goto label_39e51c;
        case 0x39e520u: goto label_39e520;
        case 0x39e524u: goto label_39e524;
        case 0x39e528u: goto label_39e528;
        case 0x39e52cu: goto label_39e52c;
        case 0x39e530u: goto label_39e530;
        case 0x39e534u: goto label_39e534;
        case 0x39e538u: goto label_39e538;
        case 0x39e53cu: goto label_39e53c;
        case 0x39e540u: goto label_39e540;
        case 0x39e544u: goto label_39e544;
        case 0x39e548u: goto label_39e548;
        case 0x39e54cu: goto label_39e54c;
        case 0x39e550u: goto label_39e550;
        case 0x39e554u: goto label_39e554;
        case 0x39e558u: goto label_39e558;
        case 0x39e55cu: goto label_39e55c;
        case 0x39e560u: goto label_39e560;
        case 0x39e564u: goto label_39e564;
        case 0x39e568u: goto label_39e568;
        case 0x39e56cu: goto label_39e56c;
        case 0x39e570u: goto label_39e570;
        case 0x39e574u: goto label_39e574;
        case 0x39e578u: goto label_39e578;
        case 0x39e57cu: goto label_39e57c;
        case 0x39e580u: goto label_39e580;
        case 0x39e584u: goto label_39e584;
        case 0x39e588u: goto label_39e588;
        case 0x39e58cu: goto label_39e58c;
        case 0x39e590u: goto label_39e590;
        case 0x39e594u: goto label_39e594;
        case 0x39e598u: goto label_39e598;
        case 0x39e59cu: goto label_39e59c;
        case 0x39e5a0u: goto label_39e5a0;
        case 0x39e5a4u: goto label_39e5a4;
        case 0x39e5a8u: goto label_39e5a8;
        case 0x39e5acu: goto label_39e5ac;
        case 0x39e5b0u: goto label_39e5b0;
        case 0x39e5b4u: goto label_39e5b4;
        case 0x39e5b8u: goto label_39e5b8;
        case 0x39e5bcu: goto label_39e5bc;
        case 0x39e5c0u: goto label_39e5c0;
        case 0x39e5c4u: goto label_39e5c4;
        case 0x39e5c8u: goto label_39e5c8;
        case 0x39e5ccu: goto label_39e5cc;
        case 0x39e5d0u: goto label_39e5d0;
        case 0x39e5d4u: goto label_39e5d4;
        case 0x39e5d8u: goto label_39e5d8;
        case 0x39e5dcu: goto label_39e5dc;
        case 0x39e5e0u: goto label_39e5e0;
        case 0x39e5e4u: goto label_39e5e4;
        case 0x39e5e8u: goto label_39e5e8;
        case 0x39e5ecu: goto label_39e5ec;
        case 0x39e5f0u: goto label_39e5f0;
        case 0x39e5f4u: goto label_39e5f4;
        case 0x39e5f8u: goto label_39e5f8;
        case 0x39e5fcu: goto label_39e5fc;
        case 0x39e600u: goto label_39e600;
        case 0x39e604u: goto label_39e604;
        case 0x39e608u: goto label_39e608;
        case 0x39e60cu: goto label_39e60c;
        case 0x39e610u: goto label_39e610;
        case 0x39e614u: goto label_39e614;
        case 0x39e618u: goto label_39e618;
        case 0x39e61cu: goto label_39e61c;
        case 0x39e620u: goto label_39e620;
        case 0x39e624u: goto label_39e624;
        case 0x39e628u: goto label_39e628;
        case 0x39e62cu: goto label_39e62c;
        case 0x39e630u: goto label_39e630;
        case 0x39e634u: goto label_39e634;
        case 0x39e638u: goto label_39e638;
        case 0x39e63cu: goto label_39e63c;
        case 0x39e640u: goto label_39e640;
        case 0x39e644u: goto label_39e644;
        case 0x39e648u: goto label_39e648;
        case 0x39e64cu: goto label_39e64c;
        case 0x39e650u: goto label_39e650;
        case 0x39e654u: goto label_39e654;
        case 0x39e658u: goto label_39e658;
        case 0x39e65cu: goto label_39e65c;
        case 0x39e660u: goto label_39e660;
        case 0x39e664u: goto label_39e664;
        case 0x39e668u: goto label_39e668;
        case 0x39e66cu: goto label_39e66c;
        case 0x39e670u: goto label_39e670;
        case 0x39e674u: goto label_39e674;
        case 0x39e678u: goto label_39e678;
        case 0x39e67cu: goto label_39e67c;
        case 0x39e680u: goto label_39e680;
        case 0x39e684u: goto label_39e684;
        case 0x39e688u: goto label_39e688;
        case 0x39e68cu: goto label_39e68c;
        case 0x39e690u: goto label_39e690;
        case 0x39e694u: goto label_39e694;
        case 0x39e698u: goto label_39e698;
        case 0x39e69cu: goto label_39e69c;
        case 0x39e6a0u: goto label_39e6a0;
        case 0x39e6a4u: goto label_39e6a4;
        case 0x39e6a8u: goto label_39e6a8;
        case 0x39e6acu: goto label_39e6ac;
        case 0x39e6b0u: goto label_39e6b0;
        case 0x39e6b4u: goto label_39e6b4;
        case 0x39e6b8u: goto label_39e6b8;
        case 0x39e6bcu: goto label_39e6bc;
        case 0x39e6c0u: goto label_39e6c0;
        case 0x39e6c4u: goto label_39e6c4;
        case 0x39e6c8u: goto label_39e6c8;
        case 0x39e6ccu: goto label_39e6cc;
        case 0x39e6d0u: goto label_39e6d0;
        case 0x39e6d4u: goto label_39e6d4;
        case 0x39e6d8u: goto label_39e6d8;
        case 0x39e6dcu: goto label_39e6dc;
        case 0x39e6e0u: goto label_39e6e0;
        case 0x39e6e4u: goto label_39e6e4;
        case 0x39e6e8u: goto label_39e6e8;
        case 0x39e6ecu: goto label_39e6ec;
        case 0x39e6f0u: goto label_39e6f0;
        case 0x39e6f4u: goto label_39e6f4;
        case 0x39e6f8u: goto label_39e6f8;
        case 0x39e6fcu: goto label_39e6fc;
        case 0x39e700u: goto label_39e700;
        case 0x39e704u: goto label_39e704;
        case 0x39e708u: goto label_39e708;
        case 0x39e70cu: goto label_39e70c;
        case 0x39e710u: goto label_39e710;
        case 0x39e714u: goto label_39e714;
        case 0x39e718u: goto label_39e718;
        case 0x39e71cu: goto label_39e71c;
        case 0x39e720u: goto label_39e720;
        case 0x39e724u: goto label_39e724;
        case 0x39e728u: goto label_39e728;
        case 0x39e72cu: goto label_39e72c;
        case 0x39e730u: goto label_39e730;
        case 0x39e734u: goto label_39e734;
        case 0x39e738u: goto label_39e738;
        case 0x39e73cu: goto label_39e73c;
        case 0x39e740u: goto label_39e740;
        case 0x39e744u: goto label_39e744;
        case 0x39e748u: goto label_39e748;
        case 0x39e74cu: goto label_39e74c;
        case 0x39e750u: goto label_39e750;
        case 0x39e754u: goto label_39e754;
        case 0x39e758u: goto label_39e758;
        case 0x39e75cu: goto label_39e75c;
        case 0x39e760u: goto label_39e760;
        case 0x39e764u: goto label_39e764;
        case 0x39e768u: goto label_39e768;
        case 0x39e76cu: goto label_39e76c;
        case 0x39e770u: goto label_39e770;
        case 0x39e774u: goto label_39e774;
        case 0x39e778u: goto label_39e778;
        case 0x39e77cu: goto label_39e77c;
        case 0x39e780u: goto label_39e780;
        case 0x39e784u: goto label_39e784;
        case 0x39e788u: goto label_39e788;
        case 0x39e78cu: goto label_39e78c;
        case 0x39e790u: goto label_39e790;
        case 0x39e794u: goto label_39e794;
        case 0x39e798u: goto label_39e798;
        case 0x39e79cu: goto label_39e79c;
        case 0x39e7a0u: goto label_39e7a0;
        case 0x39e7a4u: goto label_39e7a4;
        case 0x39e7a8u: goto label_39e7a8;
        case 0x39e7acu: goto label_39e7ac;
        case 0x39e7b0u: goto label_39e7b0;
        case 0x39e7b4u: goto label_39e7b4;
        case 0x39e7b8u: goto label_39e7b8;
        case 0x39e7bcu: goto label_39e7bc;
        case 0x39e7c0u: goto label_39e7c0;
        case 0x39e7c4u: goto label_39e7c4;
        case 0x39e7c8u: goto label_39e7c8;
        case 0x39e7ccu: goto label_39e7cc;
        case 0x39e7d0u: goto label_39e7d0;
        case 0x39e7d4u: goto label_39e7d4;
        case 0x39e7d8u: goto label_39e7d8;
        case 0x39e7dcu: goto label_39e7dc;
        case 0x39e7e0u: goto label_39e7e0;
        case 0x39e7e4u: goto label_39e7e4;
        case 0x39e7e8u: goto label_39e7e8;
        case 0x39e7ecu: goto label_39e7ec;
        case 0x39e7f0u: goto label_39e7f0;
        case 0x39e7f4u: goto label_39e7f4;
        case 0x39e7f8u: goto label_39e7f8;
        case 0x39e7fcu: goto label_39e7fc;
        case 0x39e800u: goto label_39e800;
        case 0x39e804u: goto label_39e804;
        case 0x39e808u: goto label_39e808;
        case 0x39e80cu: goto label_39e80c;
        case 0x39e810u: goto label_39e810;
        case 0x39e814u: goto label_39e814;
        case 0x39e818u: goto label_39e818;
        case 0x39e81cu: goto label_39e81c;
        case 0x39e820u: goto label_39e820;
        case 0x39e824u: goto label_39e824;
        case 0x39e828u: goto label_39e828;
        case 0x39e82cu: goto label_39e82c;
        case 0x39e830u: goto label_39e830;
        case 0x39e834u: goto label_39e834;
        case 0x39e838u: goto label_39e838;
        case 0x39e83cu: goto label_39e83c;
        case 0x39e840u: goto label_39e840;
        case 0x39e844u: goto label_39e844;
        case 0x39e848u: goto label_39e848;
        case 0x39e84cu: goto label_39e84c;
        case 0x39e850u: goto label_39e850;
        case 0x39e854u: goto label_39e854;
        case 0x39e858u: goto label_39e858;
        case 0x39e85cu: goto label_39e85c;
        case 0x39e860u: goto label_39e860;
        case 0x39e864u: goto label_39e864;
        case 0x39e868u: goto label_39e868;
        case 0x39e86cu: goto label_39e86c;
        case 0x39e870u: goto label_39e870;
        case 0x39e874u: goto label_39e874;
        case 0x39e878u: goto label_39e878;
        case 0x39e87cu: goto label_39e87c;
        case 0x39e880u: goto label_39e880;
        case 0x39e884u: goto label_39e884;
        case 0x39e888u: goto label_39e888;
        case 0x39e88cu: goto label_39e88c;
        case 0x39e890u: goto label_39e890;
        case 0x39e894u: goto label_39e894;
        case 0x39e898u: goto label_39e898;
        case 0x39e89cu: goto label_39e89c;
        case 0x39e8a0u: goto label_39e8a0;
        case 0x39e8a4u: goto label_39e8a4;
        case 0x39e8a8u: goto label_39e8a8;
        case 0x39e8acu: goto label_39e8ac;
        case 0x39e8b0u: goto label_39e8b0;
        case 0x39e8b4u: goto label_39e8b4;
        case 0x39e8b8u: goto label_39e8b8;
        case 0x39e8bcu: goto label_39e8bc;
        case 0x39e8c0u: goto label_39e8c0;
        case 0x39e8c4u: goto label_39e8c4;
        case 0x39e8c8u: goto label_39e8c8;
        case 0x39e8ccu: goto label_39e8cc;
        case 0x39e8d0u: goto label_39e8d0;
        case 0x39e8d4u: goto label_39e8d4;
        case 0x39e8d8u: goto label_39e8d8;
        case 0x39e8dcu: goto label_39e8dc;
        case 0x39e8e0u: goto label_39e8e0;
        case 0x39e8e4u: goto label_39e8e4;
        case 0x39e8e8u: goto label_39e8e8;
        case 0x39e8ecu: goto label_39e8ec;
        case 0x39e8f0u: goto label_39e8f0;
        case 0x39e8f4u: goto label_39e8f4;
        case 0x39e8f8u: goto label_39e8f8;
        case 0x39e8fcu: goto label_39e8fc;
        case 0x39e900u: goto label_39e900;
        case 0x39e904u: goto label_39e904;
        case 0x39e908u: goto label_39e908;
        case 0x39e90cu: goto label_39e90c;
        case 0x39e910u: goto label_39e910;
        case 0x39e914u: goto label_39e914;
        case 0x39e918u: goto label_39e918;
        case 0x39e91cu: goto label_39e91c;
        case 0x39e920u: goto label_39e920;
        case 0x39e924u: goto label_39e924;
        case 0x39e928u: goto label_39e928;
        case 0x39e92cu: goto label_39e92c;
        case 0x39e930u: goto label_39e930;
        case 0x39e934u: goto label_39e934;
        case 0x39e938u: goto label_39e938;
        case 0x39e93cu: goto label_39e93c;
        case 0x39e940u: goto label_39e940;
        case 0x39e944u: goto label_39e944;
        case 0x39e948u: goto label_39e948;
        case 0x39e94cu: goto label_39e94c;
        case 0x39e950u: goto label_39e950;
        case 0x39e954u: goto label_39e954;
        case 0x39e958u: goto label_39e958;
        case 0x39e95cu: goto label_39e95c;
        case 0x39e960u: goto label_39e960;
        case 0x39e964u: goto label_39e964;
        case 0x39e968u: goto label_39e968;
        case 0x39e96cu: goto label_39e96c;
        case 0x39e970u: goto label_39e970;
        case 0x39e974u: goto label_39e974;
        case 0x39e978u: goto label_39e978;
        case 0x39e97cu: goto label_39e97c;
        case 0x39e980u: goto label_39e980;
        case 0x39e984u: goto label_39e984;
        case 0x39e988u: goto label_39e988;
        case 0x39e98cu: goto label_39e98c;
        case 0x39e990u: goto label_39e990;
        case 0x39e994u: goto label_39e994;
        case 0x39e998u: goto label_39e998;
        case 0x39e99cu: goto label_39e99c;
        case 0x39e9a0u: goto label_39e9a0;
        case 0x39e9a4u: goto label_39e9a4;
        case 0x39e9a8u: goto label_39e9a8;
        case 0x39e9acu: goto label_39e9ac;
        case 0x39e9b0u: goto label_39e9b0;
        case 0x39e9b4u: goto label_39e9b4;
        case 0x39e9b8u: goto label_39e9b8;
        case 0x39e9bcu: goto label_39e9bc;
        case 0x39e9c0u: goto label_39e9c0;
        case 0x39e9c4u: goto label_39e9c4;
        case 0x39e9c8u: goto label_39e9c8;
        case 0x39e9ccu: goto label_39e9cc;
        case 0x39e9d0u: goto label_39e9d0;
        case 0x39e9d4u: goto label_39e9d4;
        case 0x39e9d8u: goto label_39e9d8;
        case 0x39e9dcu: goto label_39e9dc;
        case 0x39e9e0u: goto label_39e9e0;
        case 0x39e9e4u: goto label_39e9e4;
        case 0x39e9e8u: goto label_39e9e8;
        case 0x39e9ecu: goto label_39e9ec;
        case 0x39e9f0u: goto label_39e9f0;
        case 0x39e9f4u: goto label_39e9f4;
        case 0x39e9f8u: goto label_39e9f8;
        case 0x39e9fcu: goto label_39e9fc;
        case 0x39ea00u: goto label_39ea00;
        case 0x39ea04u: goto label_39ea04;
        case 0x39ea08u: goto label_39ea08;
        case 0x39ea0cu: goto label_39ea0c;
        case 0x39ea10u: goto label_39ea10;
        case 0x39ea14u: goto label_39ea14;
        case 0x39ea18u: goto label_39ea18;
        case 0x39ea1cu: goto label_39ea1c;
        case 0x39ea20u: goto label_39ea20;
        case 0x39ea24u: goto label_39ea24;
        case 0x39ea28u: goto label_39ea28;
        case 0x39ea2cu: goto label_39ea2c;
        case 0x39ea30u: goto label_39ea30;
        case 0x39ea34u: goto label_39ea34;
        case 0x39ea38u: goto label_39ea38;
        case 0x39ea3cu: goto label_39ea3c;
        case 0x39ea40u: goto label_39ea40;
        case 0x39ea44u: goto label_39ea44;
        case 0x39ea48u: goto label_39ea48;
        case 0x39ea4cu: goto label_39ea4c;
        case 0x39ea50u: goto label_39ea50;
        case 0x39ea54u: goto label_39ea54;
        case 0x39ea58u: goto label_39ea58;
        case 0x39ea5cu: goto label_39ea5c;
        case 0x39ea60u: goto label_39ea60;
        case 0x39ea64u: goto label_39ea64;
        case 0x39ea68u: goto label_39ea68;
        case 0x39ea6cu: goto label_39ea6c;
        case 0x39ea70u: goto label_39ea70;
        case 0x39ea74u: goto label_39ea74;
        case 0x39ea78u: goto label_39ea78;
        case 0x39ea7cu: goto label_39ea7c;
        case 0x39ea80u: goto label_39ea80;
        case 0x39ea84u: goto label_39ea84;
        case 0x39ea88u: goto label_39ea88;
        case 0x39ea8cu: goto label_39ea8c;
        case 0x39ea90u: goto label_39ea90;
        case 0x39ea94u: goto label_39ea94;
        case 0x39ea98u: goto label_39ea98;
        case 0x39ea9cu: goto label_39ea9c;
        case 0x39eaa0u: goto label_39eaa0;
        case 0x39eaa4u: goto label_39eaa4;
        case 0x39eaa8u: goto label_39eaa8;
        case 0x39eaacu: goto label_39eaac;
        case 0x39eab0u: goto label_39eab0;
        case 0x39eab4u: goto label_39eab4;
        case 0x39eab8u: goto label_39eab8;
        case 0x39eabcu: goto label_39eabc;
        case 0x39eac0u: goto label_39eac0;
        case 0x39eac4u: goto label_39eac4;
        case 0x39eac8u: goto label_39eac8;
        case 0x39eaccu: goto label_39eacc;
        case 0x39ead0u: goto label_39ead0;
        case 0x39ead4u: goto label_39ead4;
        case 0x39ead8u: goto label_39ead8;
        case 0x39eadcu: goto label_39eadc;
        case 0x39eae0u: goto label_39eae0;
        case 0x39eae4u: goto label_39eae4;
        case 0x39eae8u: goto label_39eae8;
        case 0x39eaecu: goto label_39eaec;
        case 0x39eaf0u: goto label_39eaf0;
        case 0x39eaf4u: goto label_39eaf4;
        case 0x39eaf8u: goto label_39eaf8;
        case 0x39eafcu: goto label_39eafc;
        case 0x39eb00u: goto label_39eb00;
        case 0x39eb04u: goto label_39eb04;
        case 0x39eb08u: goto label_39eb08;
        case 0x39eb0cu: goto label_39eb0c;
        case 0x39eb10u: goto label_39eb10;
        case 0x39eb14u: goto label_39eb14;
        case 0x39eb18u: goto label_39eb18;
        case 0x39eb1cu: goto label_39eb1c;
        case 0x39eb20u: goto label_39eb20;
        case 0x39eb24u: goto label_39eb24;
        case 0x39eb28u: goto label_39eb28;
        case 0x39eb2cu: goto label_39eb2c;
        case 0x39eb30u: goto label_39eb30;
        case 0x39eb34u: goto label_39eb34;
        case 0x39eb38u: goto label_39eb38;
        case 0x39eb3cu: goto label_39eb3c;
        default: break;
    }

    ctx->pc = 0x39da40u;

label_39da40:
    // 0x39da40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39da40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_39da44:
    // 0x39da44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39da44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39da48:
    // 0x39da48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x39da48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_39da4c:
    // 0x39da4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39da4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39da50:
    // 0x39da50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39da50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39da54:
    // 0x39da54: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x39da54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_39da58:
    // 0x39da58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39da58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39da5c:
    // 0x39da5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39da5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39da60:
    // 0x39da60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39da60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39da64:
    // 0x39da64: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x39da64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_39da68:
    // 0x39da68: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x39da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_39da6c:
    // 0x39da6c: 0x8c51012c  lw          $s1, 0x12C($v0)
    ctx->pc = 0x39da6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_39da70:
    // 0x39da70: 0xa7a00050  sh          $zero, 0x50($sp)
    ctx->pc = 0x39da70u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 0));
label_39da74:
    // 0x39da74: 0xa7a00052  sh          $zero, 0x52($sp)
    ctx->pc = 0x39da74u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 82), (uint16_t)GPR_U32(ctx, 0));
label_39da78:
    // 0x39da78: 0xc04a576  jal         func_1295D8
label_39da7c:
    if (ctx->pc == 0x39DA7Cu) {
        ctx->pc = 0x39DA7Cu;
            // 0x39da7c: 0xa7a00054  sh          $zero, 0x54($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x39DA80u;
        goto label_39da80;
    }
    ctx->pc = 0x39DA78u;
    SET_GPR_U32(ctx, 31, 0x39DA80u);
    ctx->pc = 0x39DA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DA78u;
            // 0x39da7c: 0xa7a00054  sh          $zero, 0x54($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DA80u; }
        if (ctx->pc != 0x39DA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DA80u; }
        if (ctx->pc != 0x39DA80u) { return; }
    }
    ctx->pc = 0x39DA80u;
label_39da80:
    // 0x39da80: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x39da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_39da84:
    // 0x39da84: 0x3c070065  lui         $a3, 0x65
    ctx->pc = 0x39da84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)101 << 16));
label_39da88:
    // 0x39da88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39da88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39da8c:
    // 0x39da8c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x39da8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_39da90:
    // 0x39da90: 0x24e77240  addiu       $a3, $a3, 0x7240
    ctx->pc = 0x39da90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29248));
label_39da94:
    // 0x39da94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39da94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39da98:
    // 0x39da98: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x39da98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_39da9c:
    // 0x39da9c: 0xc0c614c  jal         func_318530
label_39daa0:
    if (ctx->pc == 0x39DAA0u) {
        ctx->pc = 0x39DAA0u;
            // 0x39daa0: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x39DAA4u;
        goto label_39daa4;
    }
    ctx->pc = 0x39DA9Cu;
    SET_GPR_U32(ctx, 31, 0x39DAA4u);
    ctx->pc = 0x39DAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DA9Cu;
            // 0x39daa0: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318530u;
    if (runtime->hasFunction(0x318530u)) {
        auto targetFn = runtime->lookupFunction(0x318530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DAA4u; }
        if (ctx->pc != 0x39DAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318530_0x318530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DAA4u; }
        if (ctx->pc != 0x39DAA4u) { return; }
    }
    ctx->pc = 0x39DAA4u;
label_39daa4:
    // 0x39daa4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x39daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_39daa8:
    // 0x39daa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39daa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39daac:
    // 0x39daac: 0x97a50052  lhu         $a1, 0x52($sp)
    ctx->pc = 0x39daacu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 82)));
label_39dab0:
    // 0x39dab0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x39dab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_39dab4:
    // 0x39dab4: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x39dab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_39dab8:
    // 0x39dab8: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x39dab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_39dabc:
    // 0x39dabc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x39dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_39dac0:
    // 0x39dac0: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x39dac0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_39dac4:
    // 0x39dac4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x39dac4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_39dac8:
    // 0x39dac8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x39dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_39dacc:
    // 0x39dacc: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x39daccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_39dad0:
    // 0x39dad0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x39dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_39dad4:
    // 0x39dad4: 0xc04cc90  jal         func_133240
label_39dad8:
    if (ctx->pc == 0x39DAD8u) {
        ctx->pc = 0x39DAD8u;
            // 0x39dad8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x39DADCu;
        goto label_39dadc;
    }
    ctx->pc = 0x39DAD4u;
    SET_GPR_U32(ctx, 31, 0x39DADCu);
    ctx->pc = 0x39DAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DAD4u;
            // 0x39dad8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DADCu; }
        if (ctx->pc != 0x39DADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DADCu; }
        if (ctx->pc != 0x39DADCu) { return; }
    }
    ctx->pc = 0x39DADCu;
label_39dadc:
    // 0x39dadc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39dadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39dae0:
    // 0x39dae0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39dae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39dae4:
    // 0x39dae4: 0xc04cc44  jal         func_133110
label_39dae8:
    if (ctx->pc == 0x39DAE8u) {
        ctx->pc = 0x39DAE8u;
            // 0x39dae8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x39DAECu;
        goto label_39daec;
    }
    ctx->pc = 0x39DAE4u;
    SET_GPR_U32(ctx, 31, 0x39DAECu);
    ctx->pc = 0x39DAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DAE4u;
            // 0x39dae8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DAECu; }
        if (ctx->pc != 0x39DAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DAECu; }
        if (ctx->pc != 0x39DAECu) { return; }
    }
    ctx->pc = 0x39DAECu;
label_39daec:
    // 0x39daec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39daecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39daf0:
    // 0x39daf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39daf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39daf4:
    // 0x39daf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39daf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39daf8:
    // 0x39daf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39daf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39dafc:
    // 0x39dafc: 0x3e00008  jr          $ra
label_39db00:
    if (ctx->pc == 0x39DB00u) {
        ctx->pc = 0x39DB00u;
            // 0x39db00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x39DB04u;
        goto label_39db04;
    }
    ctx->pc = 0x39DAFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39DB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39DAFCu;
            // 0x39db00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39DB04u;
label_39db04:
    // 0x39db04: 0x0  nop
    ctx->pc = 0x39db04u;
    // NOP
label_39db08:
    // 0x39db08: 0x0  nop
    ctx->pc = 0x39db08u;
    // NOP
label_39db0c:
    // 0x39db0c: 0x0  nop
    ctx->pc = 0x39db0cu;
    // NOP
label_39db10:
    // 0x39db10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39db10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39db14:
    // 0x39db14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39db14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39db18:
    // 0x39db18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x39db18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39db1c:
    // 0x39db1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39db1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39db20:
    // 0x39db20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39db20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39db24:
    // 0x39db24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39db24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39db28:
    // 0x39db28: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x39db28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39db2c:
    // 0x39db2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x39db2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39db30:
    // 0x39db30: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_39db34:
    if (ctx->pc == 0x39DB34u) {
        ctx->pc = 0x39DB34u;
            // 0x39db34: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39DB38u;
        goto label_39db38;
    }
    ctx->pc = 0x39DB30u;
    {
        const bool branch_taken_0x39db30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39DB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39DB30u;
            // 0x39db34: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39db30) {
            ctx->pc = 0x39DBE8u;
            goto label_39dbe8;
        }
    }
    ctx->pc = 0x39DB38u;
label_39db38:
    // 0x39db38: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x39db38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_39db3c:
    // 0x39db3c: 0xc04cc08  jal         func_133020
label_39db40:
    if (ctx->pc == 0x39DB40u) {
        ctx->pc = 0x39DB40u;
            // 0x39db40: 0x26050820  addiu       $a1, $s0, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
        ctx->pc = 0x39DB44u;
        goto label_39db44;
    }
    ctx->pc = 0x39DB3Cu;
    SET_GPR_U32(ctx, 31, 0x39DB44u);
    ctx->pc = 0x39DB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DB3Cu;
            // 0x39db40: 0x26050820  addiu       $a1, $s0, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DB44u; }
        if (ctx->pc != 0x39DB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DB44u; }
        if (ctx->pc != 0x39DB44u) { return; }
    }
    ctx->pc = 0x39DB44u;
label_39db44:
    // 0x39db44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x39db44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39db48:
    // 0x39db48: 0x0  nop
    ctx->pc = 0x39db48u;
    // NOP
label_39db4c:
    // 0x39db4c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x39db4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39db50:
    // 0x39db50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_39db54:
    if (ctx->pc == 0x39DB54u) {
        ctx->pc = 0x39DB58u;
        goto label_39db58;
    }
    ctx->pc = 0x39DB50u;
    {
        const bool branch_taken_0x39db50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39db50) {
            ctx->pc = 0x39DB60u;
            goto label_39db60;
        }
    }
    ctx->pc = 0x39DB58u;
label_39db58:
    // 0x39db58: 0x10000024  b           . + 4 + (0x24 << 2)
label_39db5c:
    if (ctx->pc == 0x39DB5Cu) {
        ctx->pc = 0x39DB5Cu;
            // 0x39db5c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x39DB60u;
        goto label_39db60;
    }
    ctx->pc = 0x39DB58u;
    {
        const bool branch_taken_0x39db58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39DB58u;
            // 0x39db5c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39db58) {
            ctx->pc = 0x39DBECu;
            goto label_39dbec;
        }
    }
    ctx->pc = 0x39DB60u;
label_39db60:
    // 0x39db60: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x39db60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_39db64:
    // 0x39db64: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x39db64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_39db68:
    // 0x39db68: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x39db68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_39db6c:
    // 0x39db6c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x39db6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_39db70:
    // 0x39db70: 0x50a40017  beql        $a1, $a0, . + 4 + (0x17 << 2)
label_39db74:
    if (ctx->pc == 0x39DB74u) {
        ctx->pc = 0x39DB74u;
            // 0x39db74: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x39DB78u;
        goto label_39db78;
    }
    ctx->pc = 0x39DB70u;
    {
        const bool branch_taken_0x39db70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x39db70) {
            ctx->pc = 0x39DB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39DB70u;
            // 0x39db74: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x39DBD0u;
            goto label_39dbd0;
        }
    }
    ctx->pc = 0x39DB78u;
label_39db78:
    // 0x39db78: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x39db78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_39db7c:
    // 0x39db7c: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_39db80:
    if (ctx->pc == 0x39DB80u) {
        ctx->pc = 0x39DB84u;
        goto label_39db84;
    }
    ctx->pc = 0x39DB7Cu;
    {
        const bool branch_taken_0x39db7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x39db7c) {
            ctx->pc = 0x39DB90u;
            goto label_39db90;
        }
    }
    ctx->pc = 0x39DB84u;
label_39db84:
    // 0x39db84: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x39db84u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_39db88:
    // 0x39db88: 0x10000011  b           . + 4 + (0x11 << 2)
label_39db8c:
    if (ctx->pc == 0x39DB8Cu) {
        ctx->pc = 0x39DB90u;
        goto label_39db90;
    }
    ctx->pc = 0x39DB88u;
    {
        const bool branch_taken_0x39db88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39db88) {
            ctx->pc = 0x39DBD0u;
            goto label_39dbd0;
        }
    }
    ctx->pc = 0x39DB90u;
label_39db90:
    // 0x39db90: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x39db90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_39db94:
    // 0x39db94: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x39db94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_39db98:
    // 0x39db98: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x39db98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_39db9c:
    // 0x39db9c: 0x24a57210  addiu       $a1, $a1, 0x7210
    ctx->pc = 0x39db9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29200));
label_39dba0:
    // 0x39dba0: 0x82040e3f  lb          $a0, 0xE3F($s0)
    ctx->pc = 0x39dba0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3647)));
label_39dba4:
    // 0x39dba4: 0x8cc6077c  lw          $a2, 0x77C($a2)
    ctx->pc = 0x39dba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1916)));
label_39dba8:
    // 0x39dba8: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x39dba8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_39dbac:
    // 0x39dbac: 0x38c60008  xori        $a2, $a2, 0x8
    ctx->pc = 0x39dbacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)8);
label_39dbb0:
    // 0x39dbb0: 0x6382b  sltu        $a3, $zero, $a2
    ctx->pc = 0x39dbb0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_39dbb4:
    // 0x39dbb4: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x39dbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_39dbb8:
    // 0x39dbb8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x39dbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_39dbbc:
    // 0x39dbbc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x39dbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_39dbc0:
    // 0x39dbc0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x39dbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_39dbc4:
    // 0x39dbc4: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x39dbc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_39dbc8:
    // 0x39dbc8: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x39dbc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_39dbcc:
    // 0x39dbcc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x39dbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_39dbd0:
    // 0x39dbd0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_39dbd4:
    if (ctx->pc == 0x39DBD4u) {
        ctx->pc = 0x39DBD8u;
        goto label_39dbd8;
    }
    ctx->pc = 0x39DBD0u;
    {
        const bool branch_taken_0x39dbd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dbd0) {
            ctx->pc = 0x39DBE8u;
            goto label_39dbe8;
        }
    }
    ctx->pc = 0x39DBD8u;
label_39dbd8:
    // 0x39dbd8: 0xc0e6d54  jal         func_39B550
label_39dbdc:
    if (ctx->pc == 0x39DBDCu) {
        ctx->pc = 0x39DBDCu;
            // 0x39dbdc: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->pc = 0x39DBE0u;
        goto label_39dbe0;
    }
    ctx->pc = 0x39DBD8u;
    SET_GPR_U32(ctx, 31, 0x39DBE0u);
    ctx->pc = 0x39DBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DBD8u;
            // 0x39dbdc: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39B550u;
    if (runtime->hasFunction(0x39B550u)) {
        auto targetFn = runtime->lookupFunction(0x39B550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DBE0u; }
        if (ctx->pc != 0x39DBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039B550_0x39b550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DBE0u; }
        if (ctx->pc != 0x39DBE0u) { return; }
    }
    ctx->pc = 0x39DBE0u;
label_39dbe0:
    // 0x39dbe0: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x39dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_39dbe4:
    // 0x39dbe4: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x39dbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_39dbe8:
    // 0x39dbe8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39dbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39dbec:
    // 0x39dbec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39dbecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39dbf0:
    // 0x39dbf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39dbf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39dbf4:
    // 0x39dbf4: 0x3e00008  jr          $ra
label_39dbf8:
    if (ctx->pc == 0x39DBF8u) {
        ctx->pc = 0x39DBF8u;
            // 0x39dbf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x39DBFCu;
        goto label_39dbfc;
    }
    ctx->pc = 0x39DBF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39DBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39DBF4u;
            // 0x39dbf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39DBFCu;
label_39dbfc:
    // 0x39dbfc: 0x0  nop
    ctx->pc = 0x39dbfcu;
    // NOP
label_39dc00:
    // 0x39dc00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39dc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_39dc04:
    // 0x39dc04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x39dc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_39dc08:
    // 0x39dc08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39dc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39dc0c:
    // 0x39dc0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39dc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39dc10:
    // 0x39dc10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39dc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39dc14:
    // 0x39dc14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39dc14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39dc18:
    // 0x39dc18: 0x8ca30a6c  lw          $v1, 0xA6C($a1)
    ctx->pc = 0x39dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2668)));
label_39dc1c:
    // 0x39dc1c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_39dc20:
    if (ctx->pc == 0x39DC20u) {
        ctx->pc = 0x39DC20u;
            // 0x39dc20: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39DC24u;
        goto label_39dc24;
    }
    ctx->pc = 0x39DC1Cu;
    {
        const bool branch_taken_0x39dc1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39DC1Cu;
            // 0x39dc20: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc1c) {
            ctx->pc = 0x39DC98u;
            goto label_39dc98;
        }
    }
    ctx->pc = 0x39DC24u;
label_39dc24:
    // 0x39dc24: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x39dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_39dc28:
    // 0x39dc28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39dc2c:
    // 0x39dc2c: 0x8c840098  lw          $a0, 0x98($a0)
    ctx->pc = 0x39dc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_39dc30:
    // 0x39dc30: 0x5483001a  bnel        $a0, $v1, . + 4 + (0x1A << 2)
label_39dc34:
    if (ctx->pc == 0x39DC34u) {
        ctx->pc = 0x39DC34u;
            // 0x39dc34: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x39DC38u;
        goto label_39dc38;
    }
    ctx->pc = 0x39DC30u;
    {
        const bool branch_taken_0x39dc30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x39dc30) {
            ctx->pc = 0x39DC34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39DC30u;
            // 0x39dc34: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39DC9Cu;
            goto label_39dc9c;
        }
    }
    ctx->pc = 0x39DC38u;
label_39dc38:
    // 0x39dc38: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x39dc38u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_39dc3c:
    // 0x39dc3c: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x39dc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_39dc40:
    // 0x39dc40: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_39dc44:
    if (ctx->pc == 0x39DC44u) {
        ctx->pc = 0x39DC44u;
            // 0x39dc44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39DC48u;
        goto label_39dc48;
    }
    ctx->pc = 0x39DC40u;
    {
        const bool branch_taken_0x39dc40 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x39DC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39DC40u;
            // 0x39dc44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dc40) {
            ctx->pc = 0x39DC58u;
            goto label_39dc58;
        }
    }
    ctx->pc = 0x39DC48u;
label_39dc48:
    // 0x39dc48: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x39dc48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_39dc4c:
    // 0x39dc4c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_39dc50:
    if (ctx->pc == 0x39DC50u) {
        ctx->pc = 0x39DC54u;
        goto label_39dc54;
    }
    ctx->pc = 0x39DC4Cu;
    {
        const bool branch_taken_0x39dc4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dc4c) {
            ctx->pc = 0x39DC58u;
            goto label_39dc58;
        }
    }
    ctx->pc = 0x39DC54u;
label_39dc54:
    // 0x39dc54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39dc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39dc58:
    // 0x39dc58: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_39dc5c:
    if (ctx->pc == 0x39DC5Cu) {
        ctx->pc = 0x39DC60u;
        goto label_39dc60;
    }
    ctx->pc = 0x39DC58u;
    {
        const bool branch_taken_0x39dc58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x39dc58) {
            ctx->pc = 0x39DC74u;
            goto label_39dc74;
        }
    }
    ctx->pc = 0x39DC60u;
label_39dc60:
    // 0x39dc60: 0xc075eb4  jal         func_1D7AD0
label_39dc64:
    if (ctx->pc == 0x39DC64u) {
        ctx->pc = 0x39DC64u;
            // 0x39dc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39DC68u;
        goto label_39dc68;
    }
    ctx->pc = 0x39DC60u;
    SET_GPR_U32(ctx, 31, 0x39DC68u);
    ctx->pc = 0x39DC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DC60u;
            // 0x39dc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DC68u; }
        if (ctx->pc != 0x39DC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DC68u; }
        if (ctx->pc != 0x39DC68u) { return; }
    }
    ctx->pc = 0x39DC68u;
label_39dc68:
    // 0x39dc68: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_39dc6c:
    if (ctx->pc == 0x39DC6Cu) {
        ctx->pc = 0x39DC70u;
        goto label_39dc70;
    }
    ctx->pc = 0x39DC68u;
    {
        const bool branch_taken_0x39dc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39dc68) {
            ctx->pc = 0x39DC74u;
            goto label_39dc74;
        }
    }
    ctx->pc = 0x39DC70u;
label_39dc70:
    // 0x39dc70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39dc70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39dc74:
    // 0x39dc74: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
label_39dc78:
    if (ctx->pc == 0x39DC78u) {
        ctx->pc = 0x39DC78u;
            // 0x39dc78: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x39DC7Cu;
        goto label_39dc7c;
    }
    ctx->pc = 0x39DC74u;
    {
        const bool branch_taken_0x39dc74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x39dc74) {
            ctx->pc = 0x39DC78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39DC74u;
            // 0x39dc78: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39DC90u;
            goto label_39dc90;
        }
    }
    ctx->pc = 0x39DC7Cu;
label_39dc7c:
    // 0x39dc7c: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x39dc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_39dc80:
    // 0x39dc80: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x39dc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_39dc84:
    // 0x39dc84: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_39dc88:
    if (ctx->pc == 0x39DC88u) {
        ctx->pc = 0x39DC8Cu;
        goto label_39dc8c;
    }
    ctx->pc = 0x39DC84u;
    {
        const bool branch_taken_0x39dc84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x39dc84) {
            ctx->pc = 0x39DC98u;
            goto label_39dc98;
        }
    }
    ctx->pc = 0x39DC8Cu;
label_39dc8c:
    // 0x39dc8c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x39dc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_39dc90:
    // 0x39dc90: 0xc0e6eb0  jal         func_39BAC0
label_39dc94:
    if (ctx->pc == 0x39DC94u) {
        ctx->pc = 0x39DC94u;
            // 0x39dc94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39DC98u;
        goto label_39dc98;
    }
    ctx->pc = 0x39DC90u;
    SET_GPR_U32(ctx, 31, 0x39DC98u);
    ctx->pc = 0x39DC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DC90u;
            // 0x39dc94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39BAC0u;
    if (runtime->hasFunction(0x39BAC0u)) {
        auto targetFn = runtime->lookupFunction(0x39BAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DC98u; }
        if (ctx->pc != 0x39DC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039BAC0_0x39bac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DC98u; }
        if (ctx->pc != 0x39DC98u) { return; }
    }
    ctx->pc = 0x39DC98u;
label_39dc98:
    // 0x39dc98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39dc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39dc9c:
    // 0x39dc9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39dc9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39dca0:
    // 0x39dca0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39dca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39dca4:
    // 0x39dca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39dca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39dca8:
    // 0x39dca8: 0x3e00008  jr          $ra
label_39dcac:
    if (ctx->pc == 0x39DCACu) {
        ctx->pc = 0x39DCACu;
            // 0x39dcac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x39DCB0u;
        goto label_39dcb0;
    }
    ctx->pc = 0x39DCA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39DCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39DCA8u;
            // 0x39dcac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39DCB0u;
label_39dcb0:
    // 0x39dcb0: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x39dcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_39dcb4:
    // 0x39dcb4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x39dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_39dcb8:
    // 0x39dcb8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x39dcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_39dcbc:
    // 0x39dcbc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x39dcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_39dcc0:
    // 0x39dcc0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39dcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_39dcc4:
    // 0x39dcc4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39dcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_39dcc8:
    // 0x39dcc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39dcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_39dccc:
    // 0x39dccc: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x39dcccu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_39dcd0:
    // 0x39dcd0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x39dcd0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_39dcd4:
    // 0x39dcd4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x39dcd4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_39dcd8:
    // 0x39dcd8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x39dcd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_39dcdc:
    // 0x39dcdc: 0x8c920020  lw          $s2, 0x20($a0)
    ctx->pc = 0x39dcdcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_39dce0:
    // 0x39dce0: 0x8c930024  lw          $s3, 0x24($a0)
    ctx->pc = 0x39dce0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_39dce4:
    // 0x39dce4: 0x8e430a68  lw          $v1, 0xA68($s2)
    ctx->pc = 0x39dce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
label_39dce8:
    // 0x39dce8: 0x26510a50  addiu       $s1, $s2, 0xA50
    ctx->pc = 0x39dce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
label_39dcec:
    // 0x39dcec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39dcecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_39dcf0:
    // 0x39dcf0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x39dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_39dcf4:
    // 0x39dcf4: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x39dcf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_39dcf8:
    // 0x39dcf8: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_39dcfc:
    if (ctx->pc == 0x39DCFCu) {
        ctx->pc = 0x39DCFCu;
            // 0x39dcfc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39DD00u;
        goto label_39dd00;
    }
    ctx->pc = 0x39DCF8u;
    {
        const bool branch_taken_0x39dcf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39DCF8u;
            // 0x39dcfc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dcf8) {
            ctx->pc = 0x39DD24u;
            goto label_39dd24;
        }
    }
    ctx->pc = 0x39DD00u;
label_39dd00:
    // 0x39dd00: 0x8e660214  lw          $a2, 0x214($s3)
    ctx->pc = 0x39dd00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_39dd04:
    // 0x39dd04: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x39dd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_39dd08:
    // 0x39dd08: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x39dd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_39dd0c:
    // 0x39dd0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39dd10:
    // 0x39dd10: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x39dd10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_39dd14:
    // 0x39dd14: 0xae650214  sw          $a1, 0x214($s3)
    ctx->pc = 0x39dd14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 532), GPR_U32(ctx, 5));
label_39dd18:
    // 0x39dd18: 0xae840034  sw          $a0, 0x34($s4)
    ctx->pc = 0x39dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 4));
label_39dd1c:
    // 0x39dd1c: 0x1000037b  b           . + 4 + (0x37B << 2)
label_39dd20:
    if (ctx->pc == 0x39DD20u) {
        ctx->pc = 0x39DD20u;
            // 0x39dd20: 0xae830038  sw          $v1, 0x38($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 3));
        ctx->pc = 0x39DD24u;
        goto label_39dd24;
    }
    ctx->pc = 0x39DD1Cu;
    {
        const bool branch_taken_0x39dd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39DD1Cu;
            // 0x39dd20: 0xae830038  sw          $v1, 0x38($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dd1c) {
            ctx->pc = 0x39EB0Cu;
            goto label_39eb0c;
        }
    }
    ctx->pc = 0x39DD24u;
label_39dd24:
    // 0x39dd24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39dd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39dd28:
    // 0x39dd28: 0xc0dc9bc  jal         func_3726F0
label_39dd2c:
    if (ctx->pc == 0x39DD2Cu) {
        ctx->pc = 0x39DD2Cu;
            // 0x39dd2c: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x39DD30u;
        goto label_39dd30;
    }
    ctx->pc = 0x39DD28u;
    SET_GPR_U32(ctx, 31, 0x39DD30u);
    ctx->pc = 0x39DD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DD28u;
            // 0x39dd2c: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DD30u; }
        if (ctx->pc != 0x39DD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DD30u; }
        if (ctx->pc != 0x39DD30u) { return; }
    }
    ctx->pc = 0x39DD30u;
label_39dd30:
    // 0x39dd30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39dd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39dd34:
    // 0x39dd34: 0xc0dc9a0  jal         func_372680
label_39dd38:
    if (ctx->pc == 0x39DD38u) {
        ctx->pc = 0x39DD38u;
            // 0x39dd38: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x39DD3Cu;
        goto label_39dd3c;
    }
    ctx->pc = 0x39DD34u;
    SET_GPR_U32(ctx, 31, 0x39DD3Cu);
    ctx->pc = 0x39DD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DD34u;
            // 0x39dd38: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DD3Cu; }
        if (ctx->pc != 0x39DD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DD3Cu; }
        if (ctx->pc != 0x39DD3Cu) { return; }
    }
    ctx->pc = 0x39DD3Cu;
label_39dd3c:
    // 0x39dd3c: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x39dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_39dd40:
    // 0x39dd40: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x39dd40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_39dd44:
    // 0x39dd44: 0x50200372  beql        $at, $zero, . + 4 + (0x372 << 2)
label_39dd48:
    if (ctx->pc == 0x39DD48u) {
        ctx->pc = 0x39DD48u;
            // 0x39dd48: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x39DD4Cu;
        goto label_39dd4c;
    }
    ctx->pc = 0x39DD44u;
    {
        const bool branch_taken_0x39dd44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39dd44) {
            ctx->pc = 0x39DD48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39DD44u;
            // 0x39dd48: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39EB10u;
            goto label_39eb10;
        }
    }
    ctx->pc = 0x39DD4Cu;
label_39dd4c:
    // 0x39dd4c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x39dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_39dd50:
    // 0x39dd50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39dd50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_39dd54:
    // 0x39dd54: 0x248472d0  addiu       $a0, $a0, 0x72D0
    ctx->pc = 0x39dd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29392));
label_39dd58:
    // 0x39dd58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_39dd5c:
    // 0x39dd5c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x39dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39dd60:
    // 0x39dd60: 0x600008  jr          $v1
label_39dd64:
    if (ctx->pc == 0x39DD64u) {
        ctx->pc = 0x39DD68u;
        goto label_39dd68;
    }
    ctx->pc = 0x39DD60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39DD68u: goto label_39dd68;
            case 0x39E304u: goto label_39e304;
            case 0x39E4F8u: goto label_39e4f8;
            case 0x39E734u: goto label_39e734;
            case 0x39EB0Cu: goto label_39eb0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x39DD68u;
label_39dd68:
    // 0x39dd68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39dd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39dd6c:
    // 0x39dd6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39dd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39dd70:
    // 0x39dd70: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x39dd70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39dd74:
    // 0x39dd74: 0xc08914c  jal         func_224530
label_39dd78:
    if (ctx->pc == 0x39DD78u) {
        ctx->pc = 0x39DD78u;
            // 0x39dd78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39DD7Cu;
        goto label_39dd7c;
    }
    ctx->pc = 0x39DD74u;
    SET_GPR_U32(ctx, 31, 0x39DD7Cu);
    ctx->pc = 0x39DD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DD74u;
            // 0x39dd78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DD7Cu; }
        if (ctx->pc != 0x39DD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DD7Cu; }
        if (ctx->pc != 0x39DD7Cu) { return; }
    }
    ctx->pc = 0x39DD7Cu;
label_39dd7c:
    // 0x39dd7c: 0x8e64002c  lw          $a0, 0x2C($s3)
    ctx->pc = 0x39dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_39dd80:
    // 0x39dd80: 0x3c02fefb  lui         $v0, 0xFEFB
    ctx->pc = 0x39dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65275 << 16));
label_39dd84:
    // 0x39dd84: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x39dd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_39dd88:
    // 0x39dd88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39dd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39dd8c:
    // 0x39dd8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39dd90:
    // 0x39dd90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39dd90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39dd94:
    // 0x39dd94: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x39dd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_39dd98:
    // 0x39dd98: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x39dd98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
label_39dd9c:
    // 0x39dd9c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39dda0:
    // 0x39dda0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x39dda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_39dda4:
    // 0x39dda4: 0xc08bff0  jal         func_22FFC0
label_39dda8:
    if (ctx->pc == 0x39DDA8u) {
        ctx->pc = 0x39DDA8u;
            // 0x39dda8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39DDACu;
        goto label_39ddac;
    }
    ctx->pc = 0x39DDA4u;
    SET_GPR_U32(ctx, 31, 0x39DDACu);
    ctx->pc = 0x39DDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DDA4u;
            // 0x39dda8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DDACu; }
        if (ctx->pc != 0x39DDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DDACu; }
        if (ctx->pc != 0x39DDACu) { return; }
    }
    ctx->pc = 0x39DDACu;
label_39ddac:
    // 0x39ddac: 0x8e650214  lw          $a1, 0x214($s3)
    ctx->pc = 0x39ddacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_39ddb0:
    // 0x39ddb0: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x39ddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_39ddb4:
    // 0x39ddb4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x39ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_39ddb8:
    // 0x39ddb8: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x39ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_39ddbc:
    // 0x39ddbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x39ddbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39ddc0:
    // 0x39ddc0: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x39ddc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_39ddc4:
    // 0x39ddc4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x39ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_39ddc8:
    // 0x39ddc8: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x39ddc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_39ddcc:
    // 0x39ddcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39ddccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39ddd0:
    // 0x39ddd0: 0xae650214  sw          $a1, 0x214($s3)
    ctx->pc = 0x39ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 532), GPR_U32(ctx, 5));
label_39ddd4:
    // 0x39ddd4: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x39ddd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39ddd8:
    // 0x39ddd8: 0xc4a00064  lwc1        $f0, 0x64($a1)
    ctx->pc = 0x39ddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39dddc:
    // 0x39dddc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x39dddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_39dde0:
    // 0x39dde0: 0xe6600154  swc1        $f0, 0x154($s3)
    ctx->pc = 0x39dde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 340), bits); }
label_39dde4:
    // 0x39dde4: 0xae63015c  sw          $v1, 0x15C($s3)
    ctx->pc = 0x39dde4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 348), GPR_U32(ctx, 3));
label_39dde8:
    // 0x39dde8: 0x8e830060  lw          $v1, 0x60($s4)
    ctx->pc = 0x39dde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_39ddec:
    // 0x39ddec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x39ddecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_39ddf0:
    // 0x39ddf0: 0xae820060  sw          $v0, 0x60($s4)
    ctx->pc = 0x39ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 2));
label_39ddf4:
    // 0x39ddf4: 0xafa001d0  sw          $zero, 0x1D0($sp)
    ctx->pc = 0x39ddf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 0));
label_39ddf8:
    // 0x39ddf8: 0xafa001d4  sw          $zero, 0x1D4($sp)
    ctx->pc = 0x39ddf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 0));
label_39ddfc:
    // 0x39ddfc: 0xafa001d8  sw          $zero, 0x1D8($sp)
    ctx->pc = 0x39ddfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
label_39de00:
    // 0x39de00: 0xc088b74  jal         func_222DD0
label_39de04:
    if (ctx->pc == 0x39DE04u) {
        ctx->pc = 0x39DE04u;
            // 0x39de04: 0xafa001dc  sw          $zero, 0x1DC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 0));
        ctx->pc = 0x39DE08u;
        goto label_39de08;
    }
    ctx->pc = 0x39DE00u;
    SET_GPR_U32(ctx, 31, 0x39DE08u);
    ctx->pc = 0x39DE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DE00u;
            // 0x39de04: 0xafa001dc  sw          $zero, 0x1DC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DE08u; }
        if (ctx->pc != 0x39DE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DE08u; }
        if (ctx->pc != 0x39DE08u) { return; }
    }
    ctx->pc = 0x39DE08u;
label_39de08:
    // 0x39de08: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x39de08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39de0c:
    // 0x39de0c: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x39de0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_39de10:
    // 0x39de10: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x39de10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_39de14:
    // 0x39de14: 0x320f809  jalr        $t9
label_39de18:
    if (ctx->pc == 0x39DE18u) {
        ctx->pc = 0x39DE18u;
            // 0x39de18: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x39DE1Cu;
        goto label_39de1c;
    }
    ctx->pc = 0x39DE14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39DE1Cu);
        ctx->pc = 0x39DE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39DE14u;
            // 0x39de18: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39DE1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39DE1Cu; }
            if (ctx->pc != 0x39DE1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39DE1Cu;
label_39de1c:
    // 0x39de1c: 0xc088b74  jal         func_222DD0
label_39de20:
    if (ctx->pc == 0x39DE20u) {
        ctx->pc = 0x39DE20u;
            // 0x39de20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39DE24u;
        goto label_39de24;
    }
    ctx->pc = 0x39DE1Cu;
    SET_GPR_U32(ctx, 31, 0x39DE24u);
    ctx->pc = 0x39DE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DE1Cu;
            // 0x39de20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DE24u; }
        if (ctx->pc != 0x39DE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DE24u; }
        if (ctx->pc != 0x39DE24u) { return; }
    }
    ctx->pc = 0x39DE24u;
label_39de24:
    // 0x39de24: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x39de24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39de28:
    // 0x39de28: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x39de28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_39de2c:
    // 0x39de2c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x39de2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_39de30:
    // 0x39de30: 0x320f809  jalr        $t9
label_39de34:
    if (ctx->pc == 0x39DE34u) {
        ctx->pc = 0x39DE34u;
            // 0x39de34: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x39DE38u;
        goto label_39de38;
    }
    ctx->pc = 0x39DE30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39DE38u);
        ctx->pc = 0x39DE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39DE30u;
            // 0x39de34: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39DE38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39DE38u; }
            if (ctx->pc != 0x39DE38u) { return; }
        }
        }
    }
    ctx->pc = 0x39DE38u;
label_39de38:
    // 0x39de38: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x39de38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_39de3c:
    // 0x39de3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39de40:
    // 0x39de40: 0x8e830040  lw          $v1, 0x40($s4)
    ctx->pc = 0x39de40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_39de44:
    // 0x39de44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39de44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39de48:
    // 0x39de48: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x39de48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_39de4c:
    // 0x39de4c: 0x601827  not         $v1, $v1
    ctx->pc = 0x39de4cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_39de50:
    // 0x39de50: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x39de50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_39de54:
    // 0x39de54: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x39de54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_39de58:
    // 0x39de58: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39de58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39de5c:
    // 0x39de5c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x39de5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_39de60:
    // 0x39de60: 0xc08bff0  jal         func_22FFC0
label_39de64:
    if (ctx->pc == 0x39DE64u) {
        ctx->pc = 0x39DE64u;
            // 0x39de64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39DE68u;
        goto label_39de68;
    }
    ctx->pc = 0x39DE60u;
    SET_GPR_U32(ctx, 31, 0x39DE68u);
    ctx->pc = 0x39DE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DE60u;
            // 0x39de64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DE68u; }
        if (ctx->pc != 0x39DE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DE68u; }
        if (ctx->pc != 0x39DE68u) { return; }
    }
    ctx->pc = 0x39DE68u;
label_39de68:
    // 0x39de68: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x39de68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_39de6c:
    // 0x39de6c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x39de6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_39de70:
    // 0x39de70: 0x102000b3  beqz        $at, . + 4 + (0xB3 << 2)
label_39de74:
    if (ctx->pc == 0x39DE74u) {
        ctx->pc = 0x39DE78u;
        goto label_39de78;
    }
    ctx->pc = 0x39DE70u;
    {
        const bool branch_taken_0x39de70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x39de70) {
            ctx->pc = 0x39E140u;
            goto label_39e140;
        }
    }
    ctx->pc = 0x39DE78u;
label_39de78:
    // 0x39de78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39de78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39de7c:
    // 0x39de7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39de80:
    // 0x39de80: 0xae830034  sw          $v1, 0x34($s4)
    ctx->pc = 0x39de80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
label_39de84:
    // 0x39de84: 0xae800044  sw          $zero, 0x44($s4)
    ctx->pc = 0x39de84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 0));
label_39de88:
    // 0x39de88: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x39de88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_39de8c:
    // 0x39de8c: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x39de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39de90:
    // 0x39de90: 0xc074740  jal         func_1D1D00
label_39de94:
    if (ctx->pc == 0x39DE94u) {
        ctx->pc = 0x39DE94u;
            // 0x39de94: 0xc4540060  lwc1        $f20, 0x60($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x39DE98u;
        goto label_39de98;
    }
    ctx->pc = 0x39DE90u;
    SET_GPR_U32(ctx, 31, 0x39DE98u);
    ctx->pc = 0x39DE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DE90u;
            // 0x39de94: 0xc4540060  lwc1        $f20, 0x60($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DE98u; }
        if (ctx->pc != 0x39DE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DE98u; }
        if (ctx->pc != 0x39DE98u) { return; }
    }
    ctx->pc = 0x39DE98u;
label_39de98:
    // 0x39de98: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_39de9c:
    if (ctx->pc == 0x39DE9Cu) {
        ctx->pc = 0x39DE9Cu;
            // 0x39de9c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x39DEA0u;
        goto label_39dea0;
    }
    ctx->pc = 0x39DE98u;
    {
        const bool branch_taken_0x39de98 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x39de98) {
            ctx->pc = 0x39DE9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39DE98u;
            // 0x39de9c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39DEACu;
            goto label_39deac;
        }
    }
    ctx->pc = 0x39DEA0u;
label_39dea0:
    // 0x39dea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39dea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39dea4:
    // 0x39dea4: 0x10000007  b           . + 4 + (0x7 << 2)
label_39dea8:
    if (ctx->pc == 0x39DEA8u) {
        ctx->pc = 0x39DEA8u;
            // 0x39dea8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x39DEACu;
        goto label_39deac;
    }
    ctx->pc = 0x39DEA4u;
    {
        const bool branch_taken_0x39dea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39DEA4u;
            // 0x39dea8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dea4) {
            ctx->pc = 0x39DEC4u;
            goto label_39dec4;
        }
    }
    ctx->pc = 0x39DEACu;
label_39deac:
    // 0x39deac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39deacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39deb0:
    // 0x39deb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39deb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39deb4:
    // 0x39deb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39deb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39deb8:
    // 0x39deb8: 0x0  nop
    ctx->pc = 0x39deb8u;
    // NOP
label_39debc:
    // 0x39debc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x39debcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_39dec0:
    // 0x39dec0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x39dec0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_39dec4:
    // 0x39dec4: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x39dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_39dec8:
    // 0x39dec8: 0x8e83003c  lw          $v1, 0x3C($s4)
    ctx->pc = 0x39dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39decc:
    // 0x39decc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39deccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39ded0:
    // 0x39ded0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x39ded0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_39ded4:
    // 0x39ded4: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x39ded4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_39ded8:
    // 0x39ded8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x39ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_39dedc:
    // 0x39dedc: 0xc461005c  lwc1        $f1, 0x5C($v1)
    ctx->pc = 0x39dedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39dee0:
    // 0x39dee0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x39dee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39dee4:
    // 0x39dee4: 0xc4407310  lwc1        $f0, 0x7310($v0)
    ctx->pc = 0x39dee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39dee8:
    // 0x39dee8: 0x46016018  adda.s      $f12, $f1
    ctx->pc = 0x39dee8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_39deec:
    // 0x39deec: 0x4602a05c  madd.s      $f1, $f20, $f2
    ctx->pc = 0x39deecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
label_39def0:
    // 0x39def0: 0x46000b43  div.s       $f13, $f1, $f0
    ctx->pc = 0x39def0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[13] = ctx->f[1] / ctx->f[0];
label_39def4:
    // 0x39def4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x39def4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_39def8:
    // 0x39def8: 0x0  nop
    ctx->pc = 0x39def8u;
    // NOP
label_39defc:
    // 0x39defc: 0x0  nop
    ctx->pc = 0x39defcu;
    // NOP
label_39df00:
    // 0x39df00: 0xc04cbd8  jal         func_132F60
label_39df04:
    if (ctx->pc == 0x39DF04u) {
        ctx->pc = 0x39DF08u;
        goto label_39df08;
    }
    ctx->pc = 0x39DF00u;
    SET_GPR_U32(ctx, 31, 0x39DF08u);
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DF08u; }
        if (ctx->pc != 0x39DF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DF08u; }
        if (ctx->pc != 0x39DF08u) { return; }
    }
    ctx->pc = 0x39DF08u;
label_39df08:
    // 0x39df08: 0x26450580  addiu       $a1, $s2, 0x580
    ctx->pc = 0x39df08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
label_39df0c:
    // 0x39df0c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x39df0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_39df10:
    // 0x39df10: 0xc04cca0  jal         func_133280
label_39df14:
    if (ctx->pc == 0x39DF14u) {
        ctx->pc = 0x39DF14u;
            // 0x39df14: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x39DF18u;
        goto label_39df18;
    }
    ctx->pc = 0x39DF10u;
    SET_GPR_U32(ctx, 31, 0x39DF18u);
    ctx->pc = 0x39DF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DF10u;
            // 0x39df14: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DF18u; }
        if (ctx->pc != 0x39DF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DF18u; }
        if (ctx->pc != 0x39DF18u) { return; }
    }
    ctx->pc = 0x39DF18u;
label_39df18:
    // 0x39df18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39df18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39df1c:
    // 0x39df1c: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x39df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_39df20:
    // 0x39df20: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x39df20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39df24:
    // 0x39df24: 0xc7a601b0  lwc1        $f6, 0x1B0($sp)
    ctx->pc = 0x39df24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_39df28:
    // 0x39df28: 0xc7a501b4  lwc1        $f5, 0x1B4($sp)
    ctx->pc = 0x39df28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_39df2c:
    // 0x39df2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39df2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39df30:
    // 0x39df30: 0xc7a401b8  lwc1        $f4, 0x1B8($sp)
    ctx->pc = 0x39df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_39df34:
    // 0x39df34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39df34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_39df38:
    // 0x39df38: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x39df38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_39df3c:
    // 0x39df3c: 0xe7a600a0  swc1        $f6, 0xA0($sp)
    ctx->pc = 0x39df3cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_39df40:
    // 0x39df40: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x39df40u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_39df44:
    // 0x39df44: 0xe7a400a8  swc1        $f4, 0xA8($sp)
    ctx->pc = 0x39df44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_39df48:
    // 0x39df48: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x39df48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39df4c:
    // 0x39df4c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x39df4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39df50:
    // 0x39df50: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x39df50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_39df54:
    // 0x39df54: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x39df54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_39df58:
    // 0x39df58: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x39df58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_39df5c:
    // 0x39df5c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x39df5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_39df60:
    // 0x39df60: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x39df60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_39df64:
    // 0x39df64: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x39df64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_39df68:
    // 0x39df68: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x39df68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_39df6c:
    // 0x39df6c: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x39df6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_39df70:
    // 0x39df70: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x39df70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_39df74:
    // 0x39df74: 0xc088b74  jal         func_222DD0
label_39df78:
    if (ctx->pc == 0x39DF78u) {
        ctx->pc = 0x39DF78u;
            // 0x39df78: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->pc = 0x39DF7Cu;
        goto label_39df7c;
    }
    ctx->pc = 0x39DF74u;
    SET_GPR_U32(ctx, 31, 0x39DF7Cu);
    ctx->pc = 0x39DF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DF74u;
            // 0x39df78: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DF7Cu; }
        if (ctx->pc != 0x39DF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DF7Cu; }
        if (ctx->pc != 0x39DF7Cu) { return; }
    }
    ctx->pc = 0x39DF7Cu;
label_39df7c:
    // 0x39df7c: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x39df7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39df80:
    // 0x39df80: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x39df80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_39df84:
    // 0x39df84: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x39df84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_39df88:
    // 0x39df88: 0x320f809  jalr        $t9
label_39df8c:
    if (ctx->pc == 0x39DF8Cu) {
        ctx->pc = 0x39DF8Cu;
            // 0x39df8c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x39DF90u;
        goto label_39df90;
    }
    ctx->pc = 0x39DF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39DF90u);
        ctx->pc = 0x39DF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39DF88u;
            // 0x39df8c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39DF90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39DF90u; }
            if (ctx->pc != 0x39DF90u) { return; }
        }
        }
    }
    ctx->pc = 0x39DF90u;
label_39df90:
    // 0x39df90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39df90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39df94:
    // 0x39df94: 0xc074740  jal         func_1D1D00
label_39df98:
    if (ctx->pc == 0x39DF98u) {
        ctx->pc = 0x39DF98u;
            // 0x39df98: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x39DF9Cu;
        goto label_39df9c;
    }
    ctx->pc = 0x39DF94u;
    SET_GPR_U32(ctx, 31, 0x39DF9Cu);
    ctx->pc = 0x39DF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DF94u;
            // 0x39df98: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DF9Cu; }
        if (ctx->pc != 0x39DF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DF9Cu; }
        if (ctx->pc != 0x39DF9Cu) { return; }
    }
    ctx->pc = 0x39DF9Cu;
label_39df9c:
    // 0x39df9c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_39dfa0:
    if (ctx->pc == 0x39DFA0u) {
        ctx->pc = 0x39DFA0u;
            // 0x39dfa0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x39DFA4u;
        goto label_39dfa4;
    }
    ctx->pc = 0x39DF9Cu;
    {
        const bool branch_taken_0x39df9c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x39df9c) {
            ctx->pc = 0x39DFA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39DF9Cu;
            // 0x39dfa0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39DFB0u;
            goto label_39dfb0;
        }
    }
    ctx->pc = 0x39DFA4u;
label_39dfa4:
    // 0x39dfa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39dfa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39dfa8:
    // 0x39dfa8: 0x10000007  b           . + 4 + (0x7 << 2)
label_39dfac:
    if (ctx->pc == 0x39DFACu) {
        ctx->pc = 0x39DFACu;
            // 0x39dfac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x39DFB0u;
        goto label_39dfb0;
    }
    ctx->pc = 0x39DFA8u;
    {
        const bool branch_taken_0x39dfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39DFA8u;
            // 0x39dfac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dfa8) {
            ctx->pc = 0x39DFC8u;
            goto label_39dfc8;
        }
    }
    ctx->pc = 0x39DFB0u;
label_39dfb0:
    // 0x39dfb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39dfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39dfb4:
    // 0x39dfb4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39dfb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39dfb8:
    // 0x39dfb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39dfb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39dfbc:
    // 0x39dfbc: 0x0  nop
    ctx->pc = 0x39dfbcu;
    // NOP
label_39dfc0:
    // 0x39dfc0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x39dfc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_39dfc4:
    // 0x39dfc4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x39dfc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_39dfc8:
    // 0x39dfc8: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x39dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_39dfcc:
    // 0x39dfcc: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x39dfccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39dfd0:
    // 0x39dfd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39dfd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39dfd4:
    // 0x39dfd4: 0x0  nop
    ctx->pc = 0x39dfd4u;
    // NOP
label_39dfd8:
    // 0x39dfd8: 0x460105c2  mul.s       $f23, $f0, $f1
    ctx->pc = 0x39dfd8u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_39dfdc:
    // 0x39dfdc: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x39dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_39dfe0:
    // 0x39dfe0: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x39dfe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_39dfe4:
    // 0x39dfe4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39dfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39dfe8:
    // 0x39dfe8: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x39dfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_39dfec:
    // 0x39dfec: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x39dfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39dff0:
    // 0x39dff0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39dff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39dff4:
    // 0x39dff4: 0xc074740  jal         func_1D1D00
label_39dff8:
    if (ctx->pc == 0x39DFF8u) {
        ctx->pc = 0x39DFF8u;
            // 0x39dff8: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x39DFFCu;
        goto label_39dffc;
    }
    ctx->pc = 0x39DFF4u;
    SET_GPR_U32(ctx, 31, 0x39DFFCu);
    ctx->pc = 0x39DFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39DFF4u;
            // 0x39dff8: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DFFCu; }
        if (ctx->pc != 0x39DFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39DFFCu; }
        if (ctx->pc != 0x39DFFCu) { return; }
    }
    ctx->pc = 0x39DFFCu;
label_39dffc:
    // 0x39dffc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_39e000:
    if (ctx->pc == 0x39E000u) {
        ctx->pc = 0x39E000u;
            // 0x39e000: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x39E004u;
        goto label_39e004;
    }
    ctx->pc = 0x39DFFCu;
    {
        const bool branch_taken_0x39dffc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x39dffc) {
            ctx->pc = 0x39E000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39DFFCu;
            // 0x39e000: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39E010u;
            goto label_39e010;
        }
    }
    ctx->pc = 0x39E004u;
label_39e004:
    // 0x39e004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e008:
    // 0x39e008: 0x10000007  b           . + 4 + (0x7 << 2)
label_39e00c:
    if (ctx->pc == 0x39E00Cu) {
        ctx->pc = 0x39E00Cu;
            // 0x39e00c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x39E010u;
        goto label_39e010;
    }
    ctx->pc = 0x39E008u;
    {
        const bool branch_taken_0x39e008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E008u;
            // 0x39e00c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e008) {
            ctx->pc = 0x39E028u;
            goto label_39e028;
        }
    }
    ctx->pc = 0x39E010u;
label_39e010:
    // 0x39e010: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39e010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39e014:
    // 0x39e014: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39e014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39e018:
    // 0x39e018: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39e018u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e01c:
    // 0x39e01c: 0x0  nop
    ctx->pc = 0x39e01cu;
    // NOP
label_39e020:
    // 0x39e020: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x39e020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_39e024:
    // 0x39e024: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x39e024u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_39e028:
    // 0x39e028: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x39e028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_39e02c:
    // 0x39e02c: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x39e02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39e030:
    // 0x39e030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e034:
    // 0x39e034: 0x0  nop
    ctx->pc = 0x39e034u;
    // NOP
label_39e038:
    // 0x39e038: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x39e038u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_39e03c:
    // 0x39e03c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x39e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_39e040:
    // 0x39e040: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x39e040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_39e044:
    // 0x39e044: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39e044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39e048:
    // 0x39e048: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x39e048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_39e04c:
    // 0x39e04c: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x39e04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39e050:
    // 0x39e050: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39e050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39e054:
    // 0x39e054: 0xc074740  jal         func_1D1D00
label_39e058:
    if (ctx->pc == 0x39E058u) {
        ctx->pc = 0x39E058u;
            // 0x39e058: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x39E05Cu;
        goto label_39e05c;
    }
    ctx->pc = 0x39E054u;
    SET_GPR_U32(ctx, 31, 0x39E05Cu);
    ctx->pc = 0x39E058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E054u;
            // 0x39e058: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E05Cu; }
        if (ctx->pc != 0x39E05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E05Cu; }
        if (ctx->pc != 0x39E05Cu) { return; }
    }
    ctx->pc = 0x39E05Cu;
label_39e05c:
    // 0x39e05c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_39e060:
    if (ctx->pc == 0x39E060u) {
        ctx->pc = 0x39E060u;
            // 0x39e060: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x39E064u;
        goto label_39e064;
    }
    ctx->pc = 0x39E05Cu;
    {
        const bool branch_taken_0x39e05c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x39e05c) {
            ctx->pc = 0x39E060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39E05Cu;
            // 0x39e060: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39E070u;
            goto label_39e070;
        }
    }
    ctx->pc = 0x39E064u;
label_39e064:
    // 0x39e064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e068:
    // 0x39e068: 0x10000007  b           . + 4 + (0x7 << 2)
label_39e06c:
    if (ctx->pc == 0x39E06Cu) {
        ctx->pc = 0x39E06Cu;
            // 0x39e06c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x39E070u;
        goto label_39e070;
    }
    ctx->pc = 0x39E068u;
    {
        const bool branch_taken_0x39e068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E068u;
            // 0x39e06c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e068) {
            ctx->pc = 0x39E088u;
            goto label_39e088;
        }
    }
    ctx->pc = 0x39E070u;
label_39e070:
    // 0x39e070: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39e070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39e074:
    // 0x39e074: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39e074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39e078:
    // 0x39e078: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39e078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e07c:
    // 0x39e07c: 0x0  nop
    ctx->pc = 0x39e07cu;
    // NOP
label_39e080:
    // 0x39e080: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x39e080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_39e084:
    // 0x39e084: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x39e084u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_39e088:
    // 0x39e088: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x39e088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_39e08c:
    // 0x39e08c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x39e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_39e090:
    // 0x39e090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e094:
    // 0x39e094: 0x8e86003c  lw          $a2, 0x3C($s4)
    ctx->pc = 0x39e094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39e098:
    // 0x39e098: 0x46010142  mul.s       $f5, $f0, $f1
    ctx->pc = 0x39e098u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_39e09c:
    // 0x39e09c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x39e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_39e0a0:
    // 0x39e0a0: 0x3445fa35  ori         $a1, $v0, 0xFA35
    ctx->pc = 0x39e0a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_39e0a4:
    // 0x39e0a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39e0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39e0a8:
    // 0x39e0a8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x39e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_39e0ac:
    // 0x39e0ac: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x39e0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39e0b0:
    // 0x39e0b0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x39e0b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39e0b4:
    // 0x39e0b4: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x39e0b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_39e0b8:
    // 0x39e0b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x39e0b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_39e0bc:
    // 0x39e0bc: 0xafa001ac  sw          $zero, 0x1AC($sp)
    ctx->pc = 0x39e0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 0));
label_39e0c0:
    // 0x39e0c0: 0x46012002  mul.s       $f0, $f4, $f1
    ctx->pc = 0x39e0c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_39e0c4:
    // 0x39e0c4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x39e0c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_39e0c8:
    // 0x39e0c8: 0x0  nop
    ctx->pc = 0x39e0c8u;
    // NOP
label_39e0cc:
    // 0x39e0cc: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x39e0ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_39e0d0:
    // 0x39e0d0: 0x4605001d  msub.s      $f0, $f0, $f5
    ctx->pc = 0x39e0d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
label_39e0d4:
    // 0x39e0d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x39e0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_39e0d8:
    // 0x39e0d8: 0x0  nop
    ctx->pc = 0x39e0d8u;
    // NOP
label_39e0dc:
    // 0x39e0dc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x39e0dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_39e0e0:
    // 0x39e0e0: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x39e0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_39e0e4:
    // 0x39e0e4: 0x46142002  mul.s       $f0, $f4, $f20
    ctx->pc = 0x39e0e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_39e0e8:
    // 0x39e0e8: 0x46141818  adda.s      $f3, $f20
    ctx->pc = 0x39e0e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
label_39e0ec:
    // 0x39e0ec: 0x4616005d  msub.s      $f1, $f0, $f22
    ctx->pc = 0x39e0ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[22]));
label_39e0f0:
    // 0x39e0f0: 0x46152002  mul.s       $f0, $f4, $f21
    ctx->pc = 0x39e0f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_39e0f4:
    // 0x39e0f4: 0x46151818  adda.s      $f3, $f21
    ctx->pc = 0x39e0f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
label_39e0f8:
    // 0x39e0f8: 0x4617001d  msub.s      $f0, $f0, $f23
    ctx->pc = 0x39e0f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[23]));
label_39e0fc:
    // 0x39e0fc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x39e0fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_39e100:
    // 0x39e100: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x39e100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_39e104:
    // 0x39e104: 0xe7a101a4  swc1        $f1, 0x1A4($sp)
    ctx->pc = 0x39e104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_39e108:
    // 0x39e108: 0xc088b74  jal         func_222DD0
label_39e10c:
    if (ctx->pc == 0x39E10Cu) {
        ctx->pc = 0x39E10Cu;
            // 0x39e10c: 0xe7a001a8  swc1        $f0, 0x1A8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
        ctx->pc = 0x39E110u;
        goto label_39e110;
    }
    ctx->pc = 0x39E108u;
    SET_GPR_U32(ctx, 31, 0x39E110u);
    ctx->pc = 0x39E10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E108u;
            // 0x39e10c: 0xe7a001a8  swc1        $f0, 0x1A8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E110u; }
        if (ctx->pc != 0x39E110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E110u; }
        if (ctx->pc != 0x39E110u) { return; }
    }
    ctx->pc = 0x39E110u;
label_39e110:
    // 0x39e110: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x39e110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e114:
    // 0x39e114: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x39e114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_39e118:
    // 0x39e118: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x39e118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_39e11c:
    // 0x39e11c: 0x320f809  jalr        $t9
label_39e120:
    if (ctx->pc == 0x39E120u) {
        ctx->pc = 0x39E120u;
            // 0x39e120: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x39E124u;
        goto label_39e124;
    }
    ctx->pc = 0x39E11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39E124u);
        ctx->pc = 0x39E120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E11Cu;
            // 0x39e120: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39E124u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39E124u; }
            if (ctx->pc != 0x39E124u) { return; }
        }
        }
    }
    ctx->pc = 0x39E124u;
label_39e124:
    // 0x39e124: 0x3c043f86  lui         $a0, 0x3F86
    ctx->pc = 0x39e124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16262 << 16));
label_39e128:
    // 0x39e128: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x39e128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
label_39e12c:
    // 0x39e12c: 0x34840a92  ori         $a0, $a0, 0xA92
    ctx->pc = 0x39e12cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2706);
label_39e130:
    // 0x39e130: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x39e130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_39e134:
    // 0x39e134: 0xae640158  sw          $a0, 0x158($s3)
    ctx->pc = 0x39e134u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 344), GPR_U32(ctx, 4));
label_39e138:
    // 0x39e138: 0x10000274  b           . + 4 + (0x274 << 2)
label_39e13c:
    if (ctx->pc == 0x39E13Cu) {
        ctx->pc = 0x39E13Cu;
            // 0x39e13c: 0xae630160  sw          $v1, 0x160($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 352), GPR_U32(ctx, 3));
        ctx->pc = 0x39E140u;
        goto label_39e140;
    }
    ctx->pc = 0x39E138u;
    {
        const bool branch_taken_0x39e138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E138u;
            // 0x39e13c: 0xae630160  sw          $v1, 0x160($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 352), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e138) {
            ctx->pc = 0x39EB0Cu;
            goto label_39eb0c;
        }
    }
    ctx->pc = 0x39E140u;
label_39e140:
    // 0x39e140: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39e140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39e144:
    // 0x39e144: 0xc074740  jal         func_1D1D00
label_39e148:
    if (ctx->pc == 0x39E148u) {
        ctx->pc = 0x39E148u;
            // 0x39e148: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x39E14Cu;
        goto label_39e14c;
    }
    ctx->pc = 0x39E144u;
    SET_GPR_U32(ctx, 31, 0x39E14Cu);
    ctx->pc = 0x39E148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E144u;
            // 0x39e148: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E14Cu; }
        if (ctx->pc != 0x39E14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E14Cu; }
        if (ctx->pc != 0x39E14Cu) { return; }
    }
    ctx->pc = 0x39E14Cu;
label_39e14c:
    // 0x39e14c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_39e150:
    if (ctx->pc == 0x39E150u) {
        ctx->pc = 0x39E150u;
            // 0x39e150: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x39E154u;
        goto label_39e154;
    }
    ctx->pc = 0x39E14Cu;
    {
        const bool branch_taken_0x39e14c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x39e14c) {
            ctx->pc = 0x39E150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39E14Cu;
            // 0x39e150: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39E160u;
            goto label_39e160;
        }
    }
    ctx->pc = 0x39E154u;
label_39e154:
    // 0x39e154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e158:
    // 0x39e158: 0x10000007  b           . + 4 + (0x7 << 2)
label_39e15c:
    if (ctx->pc == 0x39E15Cu) {
        ctx->pc = 0x39E15Cu;
            // 0x39e15c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x39E160u;
        goto label_39e160;
    }
    ctx->pc = 0x39E158u;
    {
        const bool branch_taken_0x39e158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E158u;
            // 0x39e15c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e158) {
            ctx->pc = 0x39E178u;
            goto label_39e178;
        }
    }
    ctx->pc = 0x39E160u;
label_39e160:
    // 0x39e160: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39e160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39e164:
    // 0x39e164: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39e164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39e168:
    // 0x39e168: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39e168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e16c:
    // 0x39e16c: 0x0  nop
    ctx->pc = 0x39e16cu;
    // NOP
label_39e170:
    // 0x39e170: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x39e170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_39e174:
    // 0x39e174: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x39e174u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_39e178:
    // 0x39e178: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x39e178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_39e17c:
    // 0x39e17c: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x39e17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39e180:
    // 0x39e180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e184:
    // 0x39e184: 0x0  nop
    ctx->pc = 0x39e184u;
    // NOP
label_39e188:
    // 0x39e188: 0x460105c2  mul.s       $f23, $f0, $f1
    ctx->pc = 0x39e188u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_39e18c:
    // 0x39e18c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x39e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_39e190:
    // 0x39e190: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x39e190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_39e194:
    // 0x39e194: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39e194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39e198:
    // 0x39e198: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x39e198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_39e19c:
    // 0x39e19c: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x39e19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39e1a0:
    // 0x39e1a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39e1a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39e1a4:
    // 0x39e1a4: 0xc074740  jal         func_1D1D00
label_39e1a8:
    if (ctx->pc == 0x39E1A8u) {
        ctx->pc = 0x39E1A8u;
            // 0x39e1a8: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x39E1ACu;
        goto label_39e1ac;
    }
    ctx->pc = 0x39E1A4u;
    SET_GPR_U32(ctx, 31, 0x39E1ACu);
    ctx->pc = 0x39E1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E1A4u;
            // 0x39e1a8: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E1ACu; }
        if (ctx->pc != 0x39E1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E1ACu; }
        if (ctx->pc != 0x39E1ACu) { return; }
    }
    ctx->pc = 0x39E1ACu;
label_39e1ac:
    // 0x39e1ac: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_39e1b0:
    if (ctx->pc == 0x39E1B0u) {
        ctx->pc = 0x39E1B0u;
            // 0x39e1b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x39E1B4u;
        goto label_39e1b4;
    }
    ctx->pc = 0x39E1ACu;
    {
        const bool branch_taken_0x39e1ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x39e1ac) {
            ctx->pc = 0x39E1B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39E1ACu;
            // 0x39e1b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39E1C0u;
            goto label_39e1c0;
        }
    }
    ctx->pc = 0x39E1B4u;
label_39e1b4:
    // 0x39e1b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e1b8:
    // 0x39e1b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_39e1bc:
    if (ctx->pc == 0x39E1BCu) {
        ctx->pc = 0x39E1BCu;
            // 0x39e1bc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x39E1C0u;
        goto label_39e1c0;
    }
    ctx->pc = 0x39E1B8u;
    {
        const bool branch_taken_0x39e1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E1B8u;
            // 0x39e1bc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e1b8) {
            ctx->pc = 0x39E1D8u;
            goto label_39e1d8;
        }
    }
    ctx->pc = 0x39E1C0u;
label_39e1c0:
    // 0x39e1c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39e1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39e1c4:
    // 0x39e1c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39e1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39e1c8:
    // 0x39e1c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39e1c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e1cc:
    // 0x39e1cc: 0x0  nop
    ctx->pc = 0x39e1ccu;
    // NOP
label_39e1d0:
    // 0x39e1d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x39e1d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_39e1d4:
    // 0x39e1d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x39e1d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_39e1d8:
    // 0x39e1d8: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x39e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_39e1dc:
    // 0x39e1dc: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x39e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39e1e0:
    // 0x39e1e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e1e4:
    // 0x39e1e4: 0x0  nop
    ctx->pc = 0x39e1e4u;
    // NOP
label_39e1e8:
    // 0x39e1e8: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x39e1e8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_39e1ec:
    // 0x39e1ec: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x39e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_39e1f0:
    // 0x39e1f0: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x39e1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_39e1f4:
    // 0x39e1f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39e1f8:
    // 0x39e1f8: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x39e1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_39e1fc:
    // 0x39e1fc: 0xc4a00054  lwc1        $f0, 0x54($a1)
    ctx->pc = 0x39e1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39e200:
    // 0x39e200: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39e200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39e204:
    // 0x39e204: 0xc074740  jal         func_1D1D00
label_39e208:
    if (ctx->pc == 0x39E208u) {
        ctx->pc = 0x39E208u;
            // 0x39e208: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x39E20Cu;
        goto label_39e20c;
    }
    ctx->pc = 0x39E204u;
    SET_GPR_U32(ctx, 31, 0x39E20Cu);
    ctx->pc = 0x39E208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E204u;
            // 0x39e208: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E20Cu; }
        if (ctx->pc != 0x39E20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E20Cu; }
        if (ctx->pc != 0x39E20Cu) { return; }
    }
    ctx->pc = 0x39E20Cu;
label_39e20c:
    // 0x39e20c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_39e210:
    if (ctx->pc == 0x39E210u) {
        ctx->pc = 0x39E210u;
            // 0x39e210: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x39E214u;
        goto label_39e214;
    }
    ctx->pc = 0x39E20Cu;
    {
        const bool branch_taken_0x39e20c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x39e20c) {
            ctx->pc = 0x39E210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39E20Cu;
            // 0x39e210: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39E220u;
            goto label_39e220;
        }
    }
    ctx->pc = 0x39E214u;
label_39e214:
    // 0x39e214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e218:
    // 0x39e218: 0x10000007  b           . + 4 + (0x7 << 2)
label_39e21c:
    if (ctx->pc == 0x39E21Cu) {
        ctx->pc = 0x39E21Cu;
            // 0x39e21c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x39E220u;
        goto label_39e220;
    }
    ctx->pc = 0x39E218u;
    {
        const bool branch_taken_0x39e218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E218u;
            // 0x39e21c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e218) {
            ctx->pc = 0x39E238u;
            goto label_39e238;
        }
    }
    ctx->pc = 0x39E220u;
label_39e220:
    // 0x39e220: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39e220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39e224:
    // 0x39e224: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39e224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39e228:
    // 0x39e228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39e228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e22c:
    // 0x39e22c: 0x0  nop
    ctx->pc = 0x39e22cu;
    // NOP
label_39e230:
    // 0x39e230: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x39e230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_39e234:
    // 0x39e234: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x39e234u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_39e238:
    // 0x39e238: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x39e238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_39e23c:
    // 0x39e23c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x39e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_39e240:
    // 0x39e240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e244:
    // 0x39e244: 0x8e86003c  lw          $a2, 0x3C($s4)
    ctx->pc = 0x39e244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39e248:
    // 0x39e248: 0x46010142  mul.s       $f5, $f0, $f1
    ctx->pc = 0x39e248u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_39e24c:
    // 0x39e24c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x39e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_39e250:
    // 0x39e250: 0x3445fa35  ori         $a1, $v0, 0xFA35
    ctx->pc = 0x39e250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_39e254:
    // 0x39e254: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39e254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39e258:
    // 0x39e258: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x39e258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_39e25c:
    // 0x39e25c: 0xc4c00050  lwc1        $f0, 0x50($a2)
    ctx->pc = 0x39e25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39e260:
    // 0x39e260: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x39e260u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39e264:
    // 0x39e264: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x39e264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_39e268:
    // 0x39e268: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x39e268u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_39e26c:
    // 0x39e26c: 0xafa0019c  sw          $zero, 0x19C($sp)
    ctx->pc = 0x39e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
label_39e270:
    // 0x39e270: 0x46012002  mul.s       $f0, $f4, $f1
    ctx->pc = 0x39e270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_39e274:
    // 0x39e274: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x39e274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_39e278:
    // 0x39e278: 0x0  nop
    ctx->pc = 0x39e278u;
    // NOP
label_39e27c:
    // 0x39e27c: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x39e27cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_39e280:
    // 0x39e280: 0x4605001d  msub.s      $f0, $f0, $f5
    ctx->pc = 0x39e280u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
label_39e284:
    // 0x39e284: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x39e284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_39e288:
    // 0x39e288: 0x0  nop
    ctx->pc = 0x39e288u;
    // NOP
label_39e28c:
    // 0x39e28c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x39e28cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_39e290:
    // 0x39e290: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x39e290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_39e294:
    // 0x39e294: 0x46142002  mul.s       $f0, $f4, $f20
    ctx->pc = 0x39e294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_39e298:
    // 0x39e298: 0x46141818  adda.s      $f3, $f20
    ctx->pc = 0x39e298u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
label_39e29c:
    // 0x39e29c: 0x4616005d  msub.s      $f1, $f0, $f22
    ctx->pc = 0x39e29cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[22]));
label_39e2a0:
    // 0x39e2a0: 0x46152002  mul.s       $f0, $f4, $f21
    ctx->pc = 0x39e2a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_39e2a4:
    // 0x39e2a4: 0x46151818  adda.s      $f3, $f21
    ctx->pc = 0x39e2a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
label_39e2a8:
    // 0x39e2a8: 0x4617001d  msub.s      $f0, $f0, $f23
    ctx->pc = 0x39e2a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[23]));
label_39e2ac:
    // 0x39e2ac: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x39e2acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_39e2b0:
    // 0x39e2b0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x39e2b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_39e2b4:
    // 0x39e2b4: 0xe7a10194  swc1        $f1, 0x194($sp)
    ctx->pc = 0x39e2b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_39e2b8:
    // 0x39e2b8: 0xc088b74  jal         func_222DD0
label_39e2bc:
    if (ctx->pc == 0x39E2BCu) {
        ctx->pc = 0x39E2BCu;
            // 0x39e2bc: 0xe7a00198  swc1        $f0, 0x198($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
        ctx->pc = 0x39E2C0u;
        goto label_39e2c0;
    }
    ctx->pc = 0x39E2B8u;
    SET_GPR_U32(ctx, 31, 0x39E2C0u);
    ctx->pc = 0x39E2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E2B8u;
            // 0x39e2bc: 0xe7a00198  swc1        $f0, 0x198($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E2C0u; }
        if (ctx->pc != 0x39E2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E2C0u; }
        if (ctx->pc != 0x39E2C0u) { return; }
    }
    ctx->pc = 0x39E2C0u;
label_39e2c0:
    // 0x39e2c0: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x39e2c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e2c4:
    // 0x39e2c4: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x39e2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_39e2c8:
    // 0x39e2c8: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x39e2c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_39e2cc:
    // 0x39e2cc: 0x320f809  jalr        $t9
label_39e2d0:
    if (ctx->pc == 0x39E2D0u) {
        ctx->pc = 0x39E2D0u;
            // 0x39e2d0: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x39E2D4u;
        goto label_39e2d4;
    }
    ctx->pc = 0x39E2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39E2D4u);
        ctx->pc = 0x39E2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E2CCu;
            // 0x39e2d0: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39E2D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39E2D4u; }
            if (ctx->pc != 0x39E2D4u) { return; }
        }
        }
    }
    ctx->pc = 0x39E2D4u;
label_39e2d4:
    // 0x39e2d4: 0x3c04423c  lui         $a0, 0x423C
    ctx->pc = 0x39e2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16956 << 16));
label_39e2d8:
    // 0x39e2d8: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x39e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_39e2dc:
    // 0x39e2dc: 0x34847edd  ori         $a0, $a0, 0x7EDD
    ctx->pc = 0x39e2dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32477);
label_39e2e0:
    // 0x39e2e0: 0x3466cccd  ori         $a2, $v1, 0xCCCD
    ctx->pc = 0x39e2e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_39e2e4:
    // 0x39e2e4: 0xae640158  sw          $a0, 0x158($s3)
    ctx->pc = 0x39e2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 344), GPR_U32(ctx, 4));
label_39e2e8:
    // 0x39e2e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39e2ec:
    // 0x39e2ec: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x39e2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_39e2f0:
    // 0x39e2f0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x39e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39e2f4:
    // 0x39e2f4: 0xaca60160  sw          $a2, 0x160($a1)
    ctx->pc = 0x39e2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 352), GPR_U32(ctx, 6));
label_39e2f8:
    // 0x39e2f8: 0xae840034  sw          $a0, 0x34($s4)
    ctx->pc = 0x39e2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 4));
label_39e2fc:
    // 0x39e2fc: 0x10000203  b           . + 4 + (0x203 << 2)
label_39e300:
    if (ctx->pc == 0x39E300u) {
        ctx->pc = 0x39E300u;
            // 0x39e300: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x39E304u;
        goto label_39e304;
    }
    ctx->pc = 0x39E2FCu;
    {
        const bool branch_taken_0x39e2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E2FCu;
            // 0x39e300: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e2fc) {
            ctx->pc = 0x39EB0Cu;
            goto label_39eb0c;
        }
    }
    ctx->pc = 0x39E304u;
label_39e304:
    // 0x39e304: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x39e304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_39e308:
    // 0x39e308: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x39e308u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_39e30c:
    // 0x39e30c: 0x146001ff  bnez        $v1, . + 4 + (0x1FF << 2)
label_39e310:
    if (ctx->pc == 0x39E310u) {
        ctx->pc = 0x39E314u;
        goto label_39e314;
    }
    ctx->pc = 0x39E30Cu;
    {
        const bool branch_taken_0x39e30c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e30c) {
            ctx->pc = 0x39EB0Cu;
            goto label_39eb0c;
        }
    }
    ctx->pc = 0x39E314u;
label_39e314:
    // 0x39e314: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39e314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39e318:
    // 0x39e318: 0xafa00180  sw          $zero, 0x180($sp)
    ctx->pc = 0x39e318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
label_39e31c:
    // 0x39e31c: 0xafa00184  sw          $zero, 0x184($sp)
    ctx->pc = 0x39e31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 0));
label_39e320:
    // 0x39e320: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x39e320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
label_39e324:
    // 0x39e324: 0xc088b74  jal         func_222DD0
label_39e328:
    if (ctx->pc == 0x39E328u) {
        ctx->pc = 0x39E328u;
            // 0x39e328: 0xafa0018c  sw          $zero, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
        ctx->pc = 0x39E32Cu;
        goto label_39e32c;
    }
    ctx->pc = 0x39E324u;
    SET_GPR_U32(ctx, 31, 0x39E32Cu);
    ctx->pc = 0x39E328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E324u;
            // 0x39e328: 0xafa0018c  sw          $zero, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E32Cu; }
        if (ctx->pc != 0x39E32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E32Cu; }
        if (ctx->pc != 0x39E32Cu) { return; }
    }
    ctx->pc = 0x39E32Cu;
label_39e32c:
    // 0x39e32c: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x39e32cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e330:
    // 0x39e330: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x39e330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_39e334:
    // 0x39e334: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x39e334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_39e338:
    // 0x39e338: 0x320f809  jalr        $t9
label_39e33c:
    if (ctx->pc == 0x39E33Cu) {
        ctx->pc = 0x39E33Cu;
            // 0x39e33c: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x39E340u;
        goto label_39e340;
    }
    ctx->pc = 0x39E338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39E340u);
        ctx->pc = 0x39E33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E338u;
            // 0x39e33c: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39E340u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39E340u; }
            if (ctx->pc != 0x39E340u) { return; }
        }
        }
    }
    ctx->pc = 0x39E340u;
label_39e340:
    // 0x39e340: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39e340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39e344:
    // 0x39e344: 0xc074740  jal         func_1D1D00
label_39e348:
    if (ctx->pc == 0x39E348u) {
        ctx->pc = 0x39E348u;
            // 0x39e348: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x39E34Cu;
        goto label_39e34c;
    }
    ctx->pc = 0x39E344u;
    SET_GPR_U32(ctx, 31, 0x39E34Cu);
    ctx->pc = 0x39E348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E344u;
            // 0x39e348: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E34Cu; }
        if (ctx->pc != 0x39E34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E34Cu; }
        if (ctx->pc != 0x39E34Cu) { return; }
    }
    ctx->pc = 0x39E34Cu;
label_39e34c:
    // 0x39e34c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_39e350:
    if (ctx->pc == 0x39E350u) {
        ctx->pc = 0x39E350u;
            // 0x39e350: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x39E354u;
        goto label_39e354;
    }
    ctx->pc = 0x39E34Cu;
    {
        const bool branch_taken_0x39e34c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x39e34c) {
            ctx->pc = 0x39E350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39E34Cu;
            // 0x39e350: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39E360u;
            goto label_39e360;
        }
    }
    ctx->pc = 0x39E354u;
label_39e354:
    // 0x39e354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e358:
    // 0x39e358: 0x10000007  b           . + 4 + (0x7 << 2)
label_39e35c:
    if (ctx->pc == 0x39E35Cu) {
        ctx->pc = 0x39E35Cu;
            // 0x39e35c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x39E360u;
        goto label_39e360;
    }
    ctx->pc = 0x39E358u;
    {
        const bool branch_taken_0x39e358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E358u;
            // 0x39e35c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e358) {
            ctx->pc = 0x39E378u;
            goto label_39e378;
        }
    }
    ctx->pc = 0x39E360u;
label_39e360:
    // 0x39e360: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39e360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39e364:
    // 0x39e364: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39e364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39e368:
    // 0x39e368: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39e368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e36c:
    // 0x39e36c: 0x0  nop
    ctx->pc = 0x39e36cu;
    // NOP
label_39e370:
    // 0x39e370: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x39e370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_39e374:
    // 0x39e374: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x39e374u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_39e378:
    // 0x39e378: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x39e378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_39e37c:
    // 0x39e37c: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x39e37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39e380:
    // 0x39e380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e384:
    // 0x39e384: 0x0  nop
    ctx->pc = 0x39e384u;
    // NOP
label_39e388:
    // 0x39e388: 0x460105c2  mul.s       $f23, $f0, $f1
    ctx->pc = 0x39e388u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_39e38c:
    // 0x39e38c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x39e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_39e390:
    // 0x39e390: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x39e390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_39e394:
    // 0x39e394: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39e394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39e398:
    // 0x39e398: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x39e398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_39e39c:
    // 0x39e39c: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x39e39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39e3a0:
    // 0x39e3a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39e3a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39e3a4:
    // 0x39e3a4: 0xc074740  jal         func_1D1D00
label_39e3a8:
    if (ctx->pc == 0x39E3A8u) {
        ctx->pc = 0x39E3A8u;
            // 0x39e3a8: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x39E3ACu;
        goto label_39e3ac;
    }
    ctx->pc = 0x39E3A4u;
    SET_GPR_U32(ctx, 31, 0x39E3ACu);
    ctx->pc = 0x39E3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E3A4u;
            // 0x39e3a8: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E3ACu; }
        if (ctx->pc != 0x39E3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E3ACu; }
        if (ctx->pc != 0x39E3ACu) { return; }
    }
    ctx->pc = 0x39E3ACu;
label_39e3ac:
    // 0x39e3ac: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_39e3b0:
    if (ctx->pc == 0x39E3B0u) {
        ctx->pc = 0x39E3B0u;
            // 0x39e3b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x39E3B4u;
        goto label_39e3b4;
    }
    ctx->pc = 0x39E3ACu;
    {
        const bool branch_taken_0x39e3ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x39e3ac) {
            ctx->pc = 0x39E3B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39E3ACu;
            // 0x39e3b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39E3C0u;
            goto label_39e3c0;
        }
    }
    ctx->pc = 0x39E3B4u;
label_39e3b4:
    // 0x39e3b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e3b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e3b8:
    // 0x39e3b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_39e3bc:
    if (ctx->pc == 0x39E3BCu) {
        ctx->pc = 0x39E3BCu;
            // 0x39e3bc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x39E3C0u;
        goto label_39e3c0;
    }
    ctx->pc = 0x39E3B8u;
    {
        const bool branch_taken_0x39e3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E3B8u;
            // 0x39e3bc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e3b8) {
            ctx->pc = 0x39E3D8u;
            goto label_39e3d8;
        }
    }
    ctx->pc = 0x39E3C0u;
label_39e3c0:
    // 0x39e3c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39e3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39e3c4:
    // 0x39e3c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39e3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39e3c8:
    // 0x39e3c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39e3c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e3cc:
    // 0x39e3cc: 0x0  nop
    ctx->pc = 0x39e3ccu;
    // NOP
label_39e3d0:
    // 0x39e3d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x39e3d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_39e3d4:
    // 0x39e3d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x39e3d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_39e3d8:
    // 0x39e3d8: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x39e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_39e3dc:
    // 0x39e3dc: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x39e3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39e3e0:
    // 0x39e3e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e3e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e3e4:
    // 0x39e3e4: 0x0  nop
    ctx->pc = 0x39e3e4u;
    // NOP
label_39e3e8:
    // 0x39e3e8: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x39e3e8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_39e3ec:
    // 0x39e3ec: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x39e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_39e3f0:
    // 0x39e3f0: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x39e3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_39e3f4:
    // 0x39e3f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39e3f8:
    // 0x39e3f8: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x39e3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_39e3fc:
    // 0x39e3fc: 0xc4a00048  lwc1        $f0, 0x48($a1)
    ctx->pc = 0x39e3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39e400:
    // 0x39e400: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39e400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39e404:
    // 0x39e404: 0xc074740  jal         func_1D1D00
label_39e408:
    if (ctx->pc == 0x39E408u) {
        ctx->pc = 0x39E408u;
            // 0x39e408: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x39E40Cu;
        goto label_39e40c;
    }
    ctx->pc = 0x39E404u;
    SET_GPR_U32(ctx, 31, 0x39E40Cu);
    ctx->pc = 0x39E408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E404u;
            // 0x39e408: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E40Cu; }
        if (ctx->pc != 0x39E40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E40Cu; }
        if (ctx->pc != 0x39E40Cu) { return; }
    }
    ctx->pc = 0x39E40Cu;
label_39e40c:
    // 0x39e40c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_39e410:
    if (ctx->pc == 0x39E410u) {
        ctx->pc = 0x39E410u;
            // 0x39e410: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x39E414u;
        goto label_39e414;
    }
    ctx->pc = 0x39E40Cu;
    {
        const bool branch_taken_0x39e40c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x39e40c) {
            ctx->pc = 0x39E410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39E40Cu;
            // 0x39e410: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39E420u;
            goto label_39e420;
        }
    }
    ctx->pc = 0x39E414u;
label_39e414:
    // 0x39e414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e418:
    // 0x39e418: 0x10000007  b           . + 4 + (0x7 << 2)
label_39e41c:
    if (ctx->pc == 0x39E41Cu) {
        ctx->pc = 0x39E41Cu;
            // 0x39e41c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x39E420u;
        goto label_39e420;
    }
    ctx->pc = 0x39E418u;
    {
        const bool branch_taken_0x39e418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E418u;
            // 0x39e41c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e418) {
            ctx->pc = 0x39E438u;
            goto label_39e438;
        }
    }
    ctx->pc = 0x39E420u;
label_39e420:
    // 0x39e420: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39e420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39e424:
    // 0x39e424: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39e424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39e428:
    // 0x39e428: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39e428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e42c:
    // 0x39e42c: 0x0  nop
    ctx->pc = 0x39e42cu;
    // NOP
label_39e430:
    // 0x39e430: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x39e430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_39e434:
    // 0x39e434: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x39e434u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_39e438:
    // 0x39e438: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x39e438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_39e43c:
    // 0x39e43c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x39e43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_39e440:
    // 0x39e440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e444:
    // 0x39e444: 0x8e86003c  lw          $a2, 0x3C($s4)
    ctx->pc = 0x39e444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39e448:
    // 0x39e448: 0x46010142  mul.s       $f5, $f0, $f1
    ctx->pc = 0x39e448u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_39e44c:
    // 0x39e44c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x39e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_39e450:
    // 0x39e450: 0x3445fa35  ori         $a1, $v0, 0xFA35
    ctx->pc = 0x39e450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_39e454:
    // 0x39e454: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39e454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39e458:
    // 0x39e458: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x39e458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_39e45c:
    // 0x39e45c: 0xc4c00044  lwc1        $f0, 0x44($a2)
    ctx->pc = 0x39e45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39e460:
    // 0x39e460: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x39e460u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39e464:
    // 0x39e464: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x39e464u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_39e468:
    // 0x39e468: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x39e468u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_39e46c:
    // 0x39e46c: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x39e46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
label_39e470:
    // 0x39e470: 0x46012002  mul.s       $f0, $f4, $f1
    ctx->pc = 0x39e470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_39e474:
    // 0x39e474: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x39e474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_39e478:
    // 0x39e478: 0x0  nop
    ctx->pc = 0x39e478u;
    // NOP
label_39e47c:
    // 0x39e47c: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x39e47cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_39e480:
    // 0x39e480: 0x4605001d  msub.s      $f0, $f0, $f5
    ctx->pc = 0x39e480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
label_39e484:
    // 0x39e484: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x39e484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_39e488:
    // 0x39e488: 0x0  nop
    ctx->pc = 0x39e488u;
    // NOP
label_39e48c:
    // 0x39e48c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x39e48cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_39e490:
    // 0x39e490: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x39e490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_39e494:
    // 0x39e494: 0x46142002  mul.s       $f0, $f4, $f20
    ctx->pc = 0x39e494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_39e498:
    // 0x39e498: 0x46141818  adda.s      $f3, $f20
    ctx->pc = 0x39e498u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
label_39e49c:
    // 0x39e49c: 0x4616005d  msub.s      $f1, $f0, $f22
    ctx->pc = 0x39e49cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[22]));
label_39e4a0:
    // 0x39e4a0: 0x46152002  mul.s       $f0, $f4, $f21
    ctx->pc = 0x39e4a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_39e4a4:
    // 0x39e4a4: 0x46151818  adda.s      $f3, $f21
    ctx->pc = 0x39e4a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
label_39e4a8:
    // 0x39e4a8: 0x4617001d  msub.s      $f0, $f0, $f23
    ctx->pc = 0x39e4a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[23]));
label_39e4ac:
    // 0x39e4ac: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x39e4acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_39e4b0:
    // 0x39e4b0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x39e4b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_39e4b4:
    // 0x39e4b4: 0xe7a10174  swc1        $f1, 0x174($sp)
    ctx->pc = 0x39e4b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_39e4b8:
    // 0x39e4b8: 0xc088b74  jal         func_222DD0
label_39e4bc:
    if (ctx->pc == 0x39E4BCu) {
        ctx->pc = 0x39E4BCu;
            // 0x39e4bc: 0xe7a00178  swc1        $f0, 0x178($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
        ctx->pc = 0x39E4C0u;
        goto label_39e4c0;
    }
    ctx->pc = 0x39E4B8u;
    SET_GPR_U32(ctx, 31, 0x39E4C0u);
    ctx->pc = 0x39E4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E4B8u;
            // 0x39e4bc: 0xe7a00178  swc1        $f0, 0x178($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E4C0u; }
        if (ctx->pc != 0x39E4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E4C0u; }
        if (ctx->pc != 0x39E4C0u) { return; }
    }
    ctx->pc = 0x39E4C0u;
label_39e4c0:
    // 0x39e4c0: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x39e4c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e4c4:
    // 0x39e4c4: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x39e4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_39e4c8:
    // 0x39e4c8: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x39e4c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_39e4cc:
    // 0x39e4cc: 0x320f809  jalr        $t9
label_39e4d0:
    if (ctx->pc == 0x39E4D0u) {
        ctx->pc = 0x39E4D0u;
            // 0x39e4d0: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x39E4D4u;
        goto label_39e4d4;
    }
    ctx->pc = 0x39E4CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39E4D4u);
        ctx->pc = 0x39E4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E4CCu;
            // 0x39e4d0: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39E4D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39E4D4u; }
            if (ctx->pc != 0x39E4D4u) { return; }
        }
        }
    }
    ctx->pc = 0x39E4D4u;
label_39e4d4:
    // 0x39e4d4: 0x3c04423c  lui         $a0, 0x423C
    ctx->pc = 0x39e4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16956 << 16));
label_39e4d8:
    // 0x39e4d8: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x39e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_39e4dc:
    // 0x39e4dc: 0x34857edd  ori         $a1, $a0, 0x7EDD
    ctx->pc = 0x39e4dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32477);
label_39e4e0:
    // 0x39e4e0: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x39e4e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_39e4e4:
    // 0x39e4e4: 0xae650158  sw          $a1, 0x158($s3)
    ctx->pc = 0x39e4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 344), GPR_U32(ctx, 5));
label_39e4e8:
    // 0x39e4e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39e4ec:
    // 0x39e4ec: 0xae640160  sw          $a0, 0x160($s3)
    ctx->pc = 0x39e4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 352), GPR_U32(ctx, 4));
label_39e4f0:
    // 0x39e4f0: 0x10000186  b           . + 4 + (0x186 << 2)
label_39e4f4:
    if (ctx->pc == 0x39E4F4u) {
        ctx->pc = 0x39E4F4u;
            // 0x39e4f4: 0xae830034  sw          $v1, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
        ctx->pc = 0x39E4F8u;
        goto label_39e4f8;
    }
    ctx->pc = 0x39E4F0u;
    {
        const bool branch_taken_0x39e4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E4F0u;
            // 0x39e4f4: 0xae830034  sw          $v1, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e4f0) {
            ctx->pc = 0x39EB0Cu;
            goto label_39eb0c;
        }
    }
    ctx->pc = 0x39E4F8u;
label_39e4f8:
    // 0x39e4f8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x39e4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_39e4fc:
    // 0x39e4fc: 0xc04cce8  jal         func_1333A0
label_39e500:
    if (ctx->pc == 0x39E500u) {
        ctx->pc = 0x39E500u;
            // 0x39e500: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x39E504u;
        goto label_39e504;
    }
    ctx->pc = 0x39E4FCu;
    SET_GPR_U32(ctx, 31, 0x39E504u);
    ctx->pc = 0x39E500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E4FCu;
            // 0x39e500: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E504u; }
        if (ctx->pc != 0x39E504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E504u; }
        if (ctx->pc != 0x39E504u) { return; }
    }
    ctx->pc = 0x39E504u;
label_39e504:
    // 0x39e504: 0x264502c0  addiu       $a1, $s2, 0x2C0
    ctx->pc = 0x39e504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_39e508:
    // 0x39e508: 0xc04ce80  jal         func_133A00
label_39e50c:
    if (ctx->pc == 0x39E50Cu) {
        ctx->pc = 0x39E50Cu;
            // 0x39e50c: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x39E510u;
        goto label_39e510;
    }
    ctx->pc = 0x39E508u;
    SET_GPR_U32(ctx, 31, 0x39E510u);
    ctx->pc = 0x39E50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E508u;
            // 0x39e50c: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E510u; }
        if (ctx->pc != 0x39E510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E510u; }
        if (ctx->pc != 0x39E510u) { return; }
    }
    ctx->pc = 0x39E510u;
label_39e510:
    // 0x39e510: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x39e510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_39e514:
    // 0x39e514: 0xc04ccf4  jal         func_1333D0
label_39e518:
    if (ctx->pc == 0x39E518u) {
        ctx->pc = 0x39E518u;
            // 0x39e518: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x39E51Cu;
        goto label_39e51c;
    }
    ctx->pc = 0x39E514u;
    SET_GPR_U32(ctx, 31, 0x39E51Cu);
    ctx->pc = 0x39E518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E514u;
            // 0x39e518: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E51Cu; }
        if (ctx->pc != 0x39E51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E51Cu; }
        if (ctx->pc != 0x39E51Cu) { return; }
    }
    ctx->pc = 0x39E51Cu;
label_39e51c:
    // 0x39e51c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x39e51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_39e520:
    // 0x39e520: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x39e520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_39e524:
    // 0x39e524: 0xc04cca0  jal         func_133280
label_39e528:
    if (ctx->pc == 0x39E528u) {
        ctx->pc = 0x39E528u;
            // 0x39e528: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x39E52Cu;
        goto label_39e52c;
    }
    ctx->pc = 0x39E524u;
    SET_GPR_U32(ctx, 31, 0x39E52Cu);
    ctx->pc = 0x39E528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E524u;
            // 0x39e528: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E52Cu; }
        if (ctx->pc != 0x39E52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E52Cu; }
        if (ctx->pc != 0x39E52Cu) { return; }
    }
    ctx->pc = 0x39E52Cu;
label_39e52c:
    // 0x39e52c: 0xc6810064  lwc1        $f1, 0x64($s4)
    ctx->pc = 0x39e52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39e530:
    // 0x39e530: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39e530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39e534:
    // 0x39e534: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x39e534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39e538:
    // 0x39e538: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x39e538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_39e53c:
    // 0x39e53c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x39e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_39e540:
    // 0x39e540: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x39e540u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_39e544:
    // 0x39e544: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x39e544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_39e548:
    // 0x39e548: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x39e548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_39e54c:
    // 0x39e54c: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x39e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_39e550:
    // 0x39e550: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_39e554:
    if (ctx->pc == 0x39E554u) {
        ctx->pc = 0x39E554u;
            // 0x39e554: 0x3c02bf66  lui         $v0, 0xBF66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48998 << 16));
        ctx->pc = 0x39E558u;
        goto label_39e558;
    }
    ctx->pc = 0x39E550u;
    {
        const bool branch_taken_0x39e550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39e550) {
            ctx->pc = 0x39E554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39E550u;
            // 0x39e554: 0x3c02bf66  lui         $v0, 0xBF66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48998 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39E574u;
            goto label_39e574;
        }
    }
    ctx->pc = 0x39E558u;
label_39e558:
    // 0x39e558: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x39e558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39e55c:
    // 0x39e55c: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x39e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
label_39e560:
    // 0x39e560: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x39e560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39e564:
    // 0x39e564: 0x0  nop
    ctx->pc = 0x39e564u;
    // NOP
label_39e568:
    // 0x39e568: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x39e568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_39e56c:
    // 0x39e56c: 0x10000007  b           . + 4 + (0x7 << 2)
label_39e570:
    if (ctx->pc == 0x39E570u) {
        ctx->pc = 0x39E570u;
            // 0x39e570: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x39E574u;
        goto label_39e574;
    }
    ctx->pc = 0x39E56Cu;
    {
        const bool branch_taken_0x39e56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E56Cu;
            // 0x39e570: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e56c) {
            ctx->pc = 0x39E58Cu;
            goto label_39e58c;
        }
    }
    ctx->pc = 0x39E574u;
label_39e574:
    // 0x39e574: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x39e574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_39e578:
    // 0x39e578: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x39e578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39e57c:
    // 0x39e57c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x39e57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39e580:
    // 0x39e580: 0x0  nop
    ctx->pc = 0x39e580u;
    // NOP
label_39e584:
    // 0x39e584: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x39e584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_39e588:
    // 0x39e588: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x39e588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_39e58c:
    // 0x39e58c: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x39e58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39e590:
    // 0x39e590: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x39e590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e594:
    // 0x39e594: 0x0  nop
    ctx->pc = 0x39e594u;
    // NOP
label_39e598:
    // 0x39e598: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x39e598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39e59c:
    // 0x39e59c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_39e5a0:
    if (ctx->pc == 0x39E5A0u) {
        ctx->pc = 0x39E5A0u;
            // 0x39e5a0: 0x8e82003c  lw          $v0, 0x3C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
        ctx->pc = 0x39E5A4u;
        goto label_39e5a4;
    }
    ctx->pc = 0x39E59Cu;
    {
        const bool branch_taken_0x39e59c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39e59c) {
            ctx->pc = 0x39E5A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39E59Cu;
            // 0x39e5a0: 0x8e82003c  lw          $v0, 0x3C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39E5B8u;
            goto label_39e5b8;
        }
    }
    ctx->pc = 0x39E5A4u;
label_39e5a4:
    // 0x39e5a4: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x39e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39e5a8:
    // 0x39e5a8: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x39e5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39e5ac:
    // 0x39e5ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x39e5acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_39e5b0:
    // 0x39e5b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_39e5b4:
    if (ctx->pc == 0x39E5B4u) {
        ctx->pc = 0x39E5B4u;
            // 0x39e5b4: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->pc = 0x39E5B8u;
        goto label_39e5b8;
    }
    ctx->pc = 0x39E5B0u;
    {
        const bool branch_taken_0x39e5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E5B0u;
            // 0x39e5b4: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e5b0) {
            ctx->pc = 0x39E5C0u;
            goto label_39e5c0;
        }
    }
    ctx->pc = 0x39E5B8u;
label_39e5b8:
    // 0x39e5b8: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x39e5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39e5bc:
    // 0x39e5bc: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x39e5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_39e5c0:
    // 0x39e5c0: 0xc04cc14  jal         func_133050
label_39e5c4:
    if (ctx->pc == 0x39E5C4u) {
        ctx->pc = 0x39E5C4u;
            // 0x39e5c4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x39E5C8u;
        goto label_39e5c8;
    }
    ctx->pc = 0x39E5C0u;
    SET_GPR_U32(ctx, 31, 0x39E5C8u);
    ctx->pc = 0x39E5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E5C0u;
            // 0x39e5c4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E5C8u; }
        if (ctx->pc != 0x39E5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E5C8u; }
        if (ctx->pc != 0x39E5C8u) { return; }
    }
    ctx->pc = 0x39E5C8u;
label_39e5c8:
    // 0x39e5c8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x39e5c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_39e5cc:
    // 0x39e5cc: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x39e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_39e5d0:
    // 0x39e5d0: 0xc04cc44  jal         func_133110
label_39e5d4:
    if (ctx->pc == 0x39E5D4u) {
        ctx->pc = 0x39E5D4u;
            // 0x39e5d4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x39E5D8u;
        goto label_39e5d8;
    }
    ctx->pc = 0x39E5D0u;
    SET_GPR_U32(ctx, 31, 0x39E5D8u);
    ctx->pc = 0x39E5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E5D0u;
            // 0x39e5d4: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E5D8u; }
        if (ctx->pc != 0x39E5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E5D8u; }
        if (ctx->pc != 0x39E5D8u) { return; }
    }
    ctx->pc = 0x39E5D8u;
label_39e5d8:
    // 0x39e5d8: 0x8e83003c  lw          $v1, 0x3C($s4)
    ctx->pc = 0x39e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39e5dc:
    // 0x39e5dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_39e5e0:
    // 0x39e5e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x39e5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39e5e4:
    // 0x39e5e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39e5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39e5e8:
    // 0x39e5e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x39e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_39e5ec:
    // 0x39e5ec: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x39e5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_39e5f0:
    // 0x39e5f0: 0xc4640068  lwc1        $f4, 0x68($v1)
    ctx->pc = 0x39e5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_39e5f4:
    // 0x39e5f4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x39e5f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_39e5f8:
    // 0x39e5f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e5f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e5fc:
    // 0x39e5fc: 0x0  nop
    ctx->pc = 0x39e5fcu;
    // NOP
label_39e600:
    // 0x39e600: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x39e600u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_39e604:
    // 0x39e604: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x39e604u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_39e608:
    // 0x39e608: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x39e608u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_39e60c:
    // 0x39e60c: 0xc4630064  lwc1        $f3, 0x64($v1)
    ctx->pc = 0x39e60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39e610:
    // 0x39e610: 0x46141018  adda.s      $f2, $f20
    ctx->pc = 0x39e610u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
label_39e614:
    // 0x39e614: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x39e614u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_39e618:
    // 0x39e618: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x39e618u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_39e61c:
    // 0x39e61c: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x39e61cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_39e620:
    // 0x39e620: 0x0  nop
    ctx->pc = 0x39e620u;
    // NOP
label_39e624:
    // 0x39e624: 0x0  nop
    ctx->pc = 0x39e624u;
    // NOP
label_39e628:
    // 0x39e628: 0xc04cc70  jal         func_1331C0
label_39e62c:
    if (ctx->pc == 0x39E62Cu) {
        ctx->pc = 0x39E62Cu;
            // 0x39e62c: 0x4604a31c  madd.s      $f12, $f20, $f4 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[4]));
        ctx->pc = 0x39E630u;
        goto label_39e630;
    }
    ctx->pc = 0x39E628u;
    SET_GPR_U32(ctx, 31, 0x39E630u);
    ctx->pc = 0x39E62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E628u;
            // 0x39e62c: 0x4604a31c  madd.s      $f12, $f20, $f4 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E630u; }
        if (ctx->pc != 0x39E630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E630u; }
        if (ctx->pc != 0x39E630u) { return; }
    }
    ctx->pc = 0x39E630u;
label_39e630:
    // 0x39e630: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x39e630u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
label_39e634:
    // 0x39e634: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x39e634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_39e638:
    // 0x39e638: 0xc04cc70  jal         func_1331C0
label_39e63c:
    if (ctx->pc == 0x39E63Cu) {
        ctx->pc = 0x39E63Cu;
            // 0x39e63c: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x39E640u;
        goto label_39e640;
    }
    ctx->pc = 0x39E638u;
    SET_GPR_U32(ctx, 31, 0x39E640u);
    ctx->pc = 0x39E63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E638u;
            // 0x39e63c: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E640u; }
        if (ctx->pc != 0x39E640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E640u; }
        if (ctx->pc != 0x39E640u) { return; }
    }
    ctx->pc = 0x39E640u;
label_39e640:
    // 0x39e640: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x39e640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_39e644:
    // 0x39e644: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x39e644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_39e648:
    // 0x39e648: 0xc04cca0  jal         func_133280
label_39e64c:
    if (ctx->pc == 0x39E64Cu) {
        ctx->pc = 0x39E64Cu;
            // 0x39e64c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39E650u;
        goto label_39e650;
    }
    ctx->pc = 0x39E648u;
    SET_GPR_U32(ctx, 31, 0x39E650u);
    ctx->pc = 0x39E64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E648u;
            // 0x39e64c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E650u; }
        if (ctx->pc != 0x39E650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E650u; }
        if (ctx->pc != 0x39E650u) { return; }
    }
    ctx->pc = 0x39E650u;
label_39e650:
    // 0x39e650: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39e650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39e654:
    // 0x39e654: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x39e654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_39e658:
    // 0x39e658: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x39e658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39e65c:
    // 0x39e65c: 0xc7a600c0  lwc1        $f6, 0xC0($sp)
    ctx->pc = 0x39e65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_39e660:
    // 0x39e660: 0xc7a500c4  lwc1        $f5, 0xC4($sp)
    ctx->pc = 0x39e660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_39e664:
    // 0x39e664: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39e664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39e668:
    // 0x39e668: 0xc7a400c8  lwc1        $f4, 0xC8($sp)
    ctx->pc = 0x39e668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_39e66c:
    // 0x39e66c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_39e670:
    // 0x39e670: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x39e670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_39e674:
    // 0x39e674: 0xe7a60090  swc1        $f6, 0x90($sp)
    ctx->pc = 0x39e674u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_39e678:
    // 0x39e678: 0xe7a50094  swc1        $f5, 0x94($sp)
    ctx->pc = 0x39e678u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_39e67c:
    // 0x39e67c: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x39e67cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_39e680:
    // 0x39e680: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x39e680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39e684:
    // 0x39e684: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x39e684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39e688:
    // 0x39e688: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x39e688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_39e68c:
    // 0x39e68c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x39e68cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_39e690:
    // 0x39e690: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x39e690u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_39e694:
    // 0x39e694: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x39e694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_39e698:
    // 0x39e698: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x39e698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_39e69c:
    // 0x39e69c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x39e69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_39e6a0:
    // 0x39e6a0: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x39e6a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_39e6a4:
    // 0x39e6a4: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x39e6a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_39e6a8:
    // 0x39e6a8: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x39e6a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_39e6ac:
    // 0x39e6ac: 0xc088b74  jal         func_222DD0
label_39e6b0:
    if (ctx->pc == 0x39E6B0u) {
        ctx->pc = 0x39E6B0u;
            // 0x39e6b0: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->pc = 0x39E6B4u;
        goto label_39e6b4;
    }
    ctx->pc = 0x39E6ACu;
    SET_GPR_U32(ctx, 31, 0x39E6B4u);
    ctx->pc = 0x39E6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E6ACu;
            // 0x39e6b0: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E6B4u; }
        if (ctx->pc != 0x39E6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E6B4u; }
        if (ctx->pc != 0x39E6B4u) { return; }
    }
    ctx->pc = 0x39E6B4u;
label_39e6b4:
    // 0x39e6b4: 0x8e7900a0  lw          $t9, 0xA0($s3)
    ctx->pc = 0x39e6b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_39e6b8:
    // 0x39e6b8: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x39e6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_39e6bc:
    // 0x39e6bc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x39e6bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_39e6c0:
    // 0x39e6c0: 0x320f809  jalr        $t9
label_39e6c4:
    if (ctx->pc == 0x39E6C4u) {
        ctx->pc = 0x39E6C4u;
            // 0x39e6c4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x39E6C8u;
        goto label_39e6c8;
    }
    ctx->pc = 0x39E6C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39E6C8u);
        ctx->pc = 0x39E6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E6C0u;
            // 0x39e6c4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39E6C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39E6C8u; }
            if (ctx->pc != 0x39E6C8u) { return; }
        }
        }
    }
    ctx->pc = 0x39E6C8u;
label_39e6c8:
    // 0x39e6c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39e6cc:
    // 0x39e6cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_39e6d0:
    // 0x39e6d0: 0x8c63e3e0  lw          $v1, -0x1C20($v1)
    ctx->pc = 0x39e6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_39e6d4:
    // 0x39e6d4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x39e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_39e6d8:
    // 0x39e6d8: 0xc475001c  lwc1        $f21, 0x1C($v1)
    ctx->pc = 0x39e6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_39e6dc:
    // 0x39e6dc: 0xc4540018  lwc1        $f20, 0x18($v0)
    ctx->pc = 0x39e6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39e6e0:
    // 0x39e6e0: 0xc04cc14  jal         func_133050
label_39e6e4:
    if (ctx->pc == 0x39E6E4u) {
        ctx->pc = 0x39E6E4u;
            // 0x39e6e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39E6E8u;
        goto label_39e6e8;
    }
    ctx->pc = 0x39E6E0u;
    SET_GPR_U32(ctx, 31, 0x39E6E8u);
    ctx->pc = 0x39E6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E6E0u;
            // 0x39e6e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E6E8u; }
        if (ctx->pc != 0x39E6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E6E8u; }
        if (ctx->pc != 0x39E6E8u) { return; }
    }
    ctx->pc = 0x39E6E8u;
label_39e6e8:
    // 0x39e6e8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x39e6e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_39e6ec:
    // 0x39e6ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39e6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39e6f0:
    // 0x39e6f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39e6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39e6f4:
    // 0x39e6f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39e6f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e6f8:
    // 0x39e6f8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x39e6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39e6fc:
    // 0x39e6fc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x39e6fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_39e700:
    // 0x39e700: 0xc08914c  jal         func_224530
label_39e704:
    if (ctx->pc == 0x39E704u) {
        ctx->pc = 0x39E704u;
            // 0x39e704: 0xe6600154  swc1        $f0, 0x154($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 340), bits); }
        ctx->pc = 0x39E708u;
        goto label_39e708;
    }
    ctx->pc = 0x39E700u;
    SET_GPR_U32(ctx, 31, 0x39E708u);
    ctx->pc = 0x39E704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E700u;
            // 0x39e704: 0xe6600154  swc1        $f0, 0x154($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 340), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E708u; }
        if (ctx->pc != 0x39E708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E708u; }
        if (ctx->pc != 0x39E708u) { return; }
    }
    ctx->pc = 0x39E708u;
label_39e708:
    // 0x39e708: 0x8e650214  lw          $a1, 0x214($s3)
    ctx->pc = 0x39e708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_39e70c:
    // 0x39e70c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x39e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_39e710:
    // 0x39e710: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x39e710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_39e714:
    // 0x39e714: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x39e714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_39e718:
    // 0x39e718: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x39e718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_39e71c:
    // 0x39e71c: 0xae640214  sw          $a0, 0x214($s3)
    ctx->pc = 0x39e71cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 532), GPR_U32(ctx, 4));
label_39e720:
    // 0x39e720: 0x8e84003c  lw          $a0, 0x3C($s4)
    ctx->pc = 0x39e720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39e724:
    // 0x39e724: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x39e724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39e728:
    // 0x39e728: 0xe6800028  swc1        $f0, 0x28($s4)
    ctx->pc = 0x39e728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
label_39e72c:
    // 0x39e72c: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_39e730:
    if (ctx->pc == 0x39E730u) {
        ctx->pc = 0x39E730u;
            // 0x39e730: 0xae830034  sw          $v1, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
        ctx->pc = 0x39E734u;
        goto label_39e734;
    }
    ctx->pc = 0x39E72Cu;
    {
        const bool branch_taken_0x39e72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E72Cu;
            // 0x39e730: 0xae830034  sw          $v1, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e72c) {
            ctx->pc = 0x39EB0Cu;
            goto label_39eb0c;
        }
    }
    ctx->pc = 0x39E734u;
label_39e734:
    // 0x39e734: 0xc6810028  lwc1        $f1, 0x28($s4)
    ctx->pc = 0x39e734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39e738:
    // 0x39e738: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x39e738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e73c:
    // 0x39e73c: 0x0  nop
    ctx->pc = 0x39e73cu;
    // NOP
label_39e740:
    // 0x39e740: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x39e740u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39e744:
    // 0x39e744: 0x4502003a  bc1fl       . + 4 + (0x3A << 2)
label_39e748:
    if (ctx->pc == 0x39E748u) {
        ctx->pc = 0x39E748u;
            // 0x39e748: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x39E74Cu;
        goto label_39e74c;
    }
    ctx->pc = 0x39E744u;
    {
        const bool branch_taken_0x39e744 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39e744) {
            ctx->pc = 0x39E748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39E744u;
            // 0x39e748: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39E830u;
            goto label_39e830;
        }
    }
    ctx->pc = 0x39E74Cu;
label_39e74c:
    // 0x39e74c: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x39e74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_39e750:
    // 0x39e750: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39e750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39e754:
    // 0x39e754: 0x8e880040  lw          $t0, 0x40($s4)
    ctx->pc = 0x39e754u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_39e758:
    // 0x39e758: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39e758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e75c:
    // 0x39e75c: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x39e75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_39e760:
    // 0x39e760: 0x1001827  not         $v1, $t0
    ctx->pc = 0x39e760u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 8) | GPR_U64(ctx, 0)));
label_39e764:
    // 0x39e764: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x39e764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_39e768:
    // 0x39e768: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x39e768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_39e76c:
    // 0x39e76c: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x39e76cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_39e770:
    // 0x39e770: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x39e770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39e774:
    // 0x39e774: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x39e774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_39e778:
    // 0x39e778: 0xc08bff0  jal         func_22FFC0
label_39e77c:
    if (ctx->pc == 0x39E77Cu) {
        ctx->pc = 0x39E77Cu;
            // 0x39e77c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39E780u;
        goto label_39e780;
    }
    ctx->pc = 0x39E778u;
    SET_GPR_U32(ctx, 31, 0x39E780u);
    ctx->pc = 0x39E77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E778u;
            // 0x39e77c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E780u; }
        if (ctx->pc != 0x39E780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E780u; }
        if (ctx->pc != 0x39E780u) { return; }
    }
    ctx->pc = 0x39E780u;
label_39e780:
    // 0x39e780: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x39e780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_39e784:
    // 0x39e784: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39e784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39e788:
    // 0x39e788: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_39e78c:
    if (ctx->pc == 0x39E78Cu) {
        ctx->pc = 0x39E78Cu;
            // 0x39e78c: 0x8e820060  lw          $v0, 0x60($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->pc = 0x39E790u;
        goto label_39e790;
    }
    ctx->pc = 0x39E788u;
    {
        const bool branch_taken_0x39e788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e788) {
            ctx->pc = 0x39E78Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39E788u;
            // 0x39e78c: 0x8e820060  lw          $v0, 0x60($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39E7ACu;
            goto label_39e7ac;
        }
    }
    ctx->pc = 0x39E790u;
label_39e790:
    // 0x39e790: 0x8e640214  lw          $a0, 0x214($s3)
    ctx->pc = 0x39e790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_39e794:
    // 0x39e794: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x39e794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_39e798:
    // 0x39e798: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x39e798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_39e79c:
    // 0x39e79c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x39e79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_39e7a0:
    // 0x39e7a0: 0xae630214  sw          $v1, 0x214($s3)
    ctx->pc = 0x39e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 532), GPR_U32(ctx, 3));
label_39e7a4:
    // 0x39e7a4: 0x10000010  b           . + 4 + (0x10 << 2)
label_39e7a8:
    if (ctx->pc == 0x39E7A8u) {
        ctx->pc = 0x39E7A8u;
            // 0x39e7a8: 0xae820034  sw          $v0, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
        ctx->pc = 0x39E7ACu;
        goto label_39e7ac;
    }
    ctx->pc = 0x39E7A4u;
    {
        const bool branch_taken_0x39e7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E7A4u;
            // 0x39e7a8: 0xae820034  sw          $v0, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e7a4) {
            ctx->pc = 0x39E7E8u;
            goto label_39e7e8;
        }
    }
    ctx->pc = 0x39E7ACu;
label_39e7ac:
    // 0x39e7ac: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x39e7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_39e7b0:
    // 0x39e7b0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_39e7b4:
    if (ctx->pc == 0x39E7B4u) {
        ctx->pc = 0x39E7B4u;
            // 0x39e7b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39E7B8u;
        goto label_39e7b8;
    }
    ctx->pc = 0x39E7B0u;
    {
        const bool branch_taken_0x39e7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e7b0) {
            ctx->pc = 0x39E7B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39E7B0u;
            // 0x39e7b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39E7D0u;
            goto label_39e7d0;
        }
    }
    ctx->pc = 0x39E7B8u;
label_39e7b8:
    // 0x39e7b8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x39e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_39e7bc:
    // 0x39e7bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39e7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39e7c0:
    // 0x39e7c0: 0xc0e7af4  jal         func_39EBD0
label_39e7c4:
    if (ctx->pc == 0x39E7C4u) {
        ctx->pc = 0x39E7C4u;
            // 0x39e7c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39E7C8u;
        goto label_39e7c8;
    }
    ctx->pc = 0x39E7C0u;
    SET_GPR_U32(ctx, 31, 0x39E7C8u);
    ctx->pc = 0x39E7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E7C0u;
            // 0x39e7c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39EBD0u;
    if (runtime->hasFunction(0x39EBD0u)) {
        auto targetFn = runtime->lookupFunction(0x39EBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E7C8u; }
        if (ctx->pc != 0x39E7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EBD0_0x39ebd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E7C8u; }
        if (ctx->pc != 0x39E7C8u) { return; }
    }
    ctx->pc = 0x39E7C8u;
label_39e7c8:
    // 0x39e7c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_39e7cc:
    if (ctx->pc == 0x39E7CCu) {
        ctx->pc = 0x39E7CCu;
            // 0x39e7cc: 0x8e82003c  lw          $v0, 0x3C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
        ctx->pc = 0x39E7D0u;
        goto label_39e7d0;
    }
    ctx->pc = 0x39E7C8u;
    {
        const bool branch_taken_0x39e7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E7C8u;
            // 0x39e7cc: 0x8e82003c  lw          $v0, 0x3C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e7c8) {
            ctx->pc = 0x39E7ECu;
            goto label_39e7ec;
        }
    }
    ctx->pc = 0x39E7D0u;
label_39e7d0:
    // 0x39e7d0: 0xc0e7b78  jal         func_39EDE0
label_39e7d4:
    if (ctx->pc == 0x39E7D4u) {
        ctx->pc = 0x39E7D8u;
        goto label_39e7d8;
    }
    ctx->pc = 0x39E7D0u;
    SET_GPR_U32(ctx, 31, 0x39E7D8u);
    ctx->pc = 0x39EDE0u;
    if (runtime->hasFunction(0x39EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x39EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E7D8u; }
        if (ctx->pc != 0x39E7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EDE0_0x39ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E7D8u; }
        if (ctx->pc != 0x39E7D8u) { return; }
    }
    ctx->pc = 0x39E7D8u;
label_39e7d8:
    // 0x39e7d8: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x39e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39e7dc:
    // 0x39e7dc: 0xc44c0074  lwc1        $f12, 0x74($v0)
    ctx->pc = 0x39e7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39e7e0:
    // 0x39e7e0: 0xc0e7af4  jal         func_39EBD0
label_39e7e4:
    if (ctx->pc == 0x39E7E4u) {
        ctx->pc = 0x39E7E4u;
            // 0x39e7e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39E7E8u;
        goto label_39e7e8;
    }
    ctx->pc = 0x39E7E0u;
    SET_GPR_U32(ctx, 31, 0x39E7E8u);
    ctx->pc = 0x39E7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E7E0u;
            // 0x39e7e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39EBD0u;
    if (runtime->hasFunction(0x39EBD0u)) {
        auto targetFn = runtime->lookupFunction(0x39EBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E7E8u; }
        if (ctx->pc != 0x39E7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EBD0_0x39ebd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E7E8u; }
        if (ctx->pc != 0x39E7E8u) { return; }
    }
    ctx->pc = 0x39E7E8u;
label_39e7e8:
    // 0x39e7e8: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x39e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39e7ec:
    // 0x39e7ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x39e7ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39e7f0:
    // 0x39e7f0: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x39e7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_39e7f4:
    // 0x39e7f4: 0xc44e0064  lwc1        $f14, 0x64($v0)
    ctx->pc = 0x39e7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_39e7f8:
    // 0x39e7f8: 0xc04cbd8  jal         func_132F60
label_39e7fc:
    if (ctx->pc == 0x39E7FCu) {
        ctx->pc = 0x39E7FCu;
            // 0x39e7fc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x39E800u;
        goto label_39e800;
    }
    ctx->pc = 0x39E7F8u;
    SET_GPR_U32(ctx, 31, 0x39E800u);
    ctx->pc = 0x39E7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E7F8u;
            // 0x39e7fc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E800u; }
        if (ctx->pc != 0x39E800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E800u; }
        if (ctx->pc != 0x39E800u) { return; }
    }
    ctx->pc = 0x39E800u;
label_39e800:
    // 0x39e800: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39e800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39e804:
    // 0x39e804: 0x8e84003c  lw          $a0, 0x3C($s4)
    ctx->pc = 0x39e804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39e808:
    // 0x39e808: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x39e808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39e80c:
    // 0x39e80c: 0xc4810064  lwc1        $f1, 0x64($a0)
    ctx->pc = 0x39e80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39e810:
    // 0x39e810: 0xc462001c  lwc1        $f2, 0x1C($v1)
    ctx->pc = 0x39e810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39e814:
    // 0x39e814: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39e814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_39e818:
    // 0x39e818: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x39e818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_39e81c:
    // 0x39e81c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39e81cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_39e820:
    // 0x39e820: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x39e820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39e824:
    // 0x39e824: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x39e824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_39e828:
    // 0x39e828: 0x10000078  b           . + 4 + (0x78 << 2)
label_39e82c:
    if (ctx->pc == 0x39E82Cu) {
        ctx->pc = 0x39E82Cu;
            // 0x39e82c: 0xe6600154  swc1        $f0, 0x154($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 340), bits); }
        ctx->pc = 0x39E830u;
        goto label_39e830;
    }
    ctx->pc = 0x39E828u;
    {
        const bool branch_taken_0x39e828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E828u;
            // 0x39e82c: 0xe6600154  swc1        $f0, 0x154($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 340), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e828) {
            ctx->pc = 0x39EA0Cu;
            goto label_39ea0c;
        }
    }
    ctx->pc = 0x39E830u;
label_39e830:
    // 0x39e830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39e830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e834:
    // 0x39e834: 0x0  nop
    ctx->pc = 0x39e834u;
    // NOP
label_39e838:
    // 0x39e838: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x39e838u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39e83c:
    // 0x39e83c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_39e840:
    if (ctx->pc == 0x39E840u) {
        ctx->pc = 0x39E840u;
            // 0x39e840: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39E844u;
        goto label_39e844;
    }
    ctx->pc = 0x39E83Cu;
    {
        const bool branch_taken_0x39e83c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39E840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E83Cu;
            // 0x39e840: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e83c) {
            ctx->pc = 0x39E848u;
            goto label_39e848;
        }
    }
    ctx->pc = 0x39E844u;
label_39e844:
    // 0x39e844: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x39e844u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e848:
    // 0x39e848: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_39e84c:
    if (ctx->pc == 0x39E84Cu) {
        ctx->pc = 0x39E850u;
        goto label_39e850;
    }
    ctx->pc = 0x39E848u;
    {
        const bool branch_taken_0x39e848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e848) {
            ctx->pc = 0x39E868u;
            goto label_39e868;
        }
    }
    ctx->pc = 0x39E850u;
label_39e850:
    // 0x39e850: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x39e850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e854:
    // 0x39e854: 0x0  nop
    ctx->pc = 0x39e854u;
    // NOP
label_39e858:
    // 0x39e858: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x39e858u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39e85c:
    // 0x39e85c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_39e860:
    if (ctx->pc == 0x39E860u) {
        ctx->pc = 0x39E860u;
            // 0x39e860: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39E864u;
        goto label_39e864;
    }
    ctx->pc = 0x39E85Cu;
    {
        const bool branch_taken_0x39e85c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39E860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39E85Cu;
            // 0x39e860: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e85c) {
            ctx->pc = 0x39E868u;
            goto label_39e868;
        }
    }
    ctx->pc = 0x39E864u;
label_39e864:
    // 0x39e864: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x39e864u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e868:
    // 0x39e868: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_39e86c:
    if (ctx->pc == 0x39E86Cu) {
        ctx->pc = 0x39E870u;
        goto label_39e870;
    }
    ctx->pc = 0x39E868u;
    {
        const bool branch_taken_0x39e868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e868) {
            ctx->pc = 0x39E95Cu;
            goto label_39e95c;
        }
    }
    ctx->pc = 0x39E870u;
label_39e870:
    // 0x39e870: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x39e870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_39e874:
    // 0x39e874: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x39e874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_39e878:
    // 0x39e878: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_39e87c:
    if (ctx->pc == 0x39E87Cu) {
        ctx->pc = 0x39E87Cu;
            // 0x39e87c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39E880u;
        goto label_39e880;
    }
    ctx->pc = 0x39E878u;
    {
        const bool branch_taken_0x39e878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e878) {
            ctx->pc = 0x39E87Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39E878u;
            // 0x39e87c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39E898u;
            goto label_39e898;
        }
    }
    ctx->pc = 0x39E880u;
label_39e880:
    // 0x39e880: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x39e880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_39e884:
    // 0x39e884: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39e884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39e888:
    // 0x39e888: 0xc0e7af4  jal         func_39EBD0
label_39e88c:
    if (ctx->pc == 0x39E88Cu) {
        ctx->pc = 0x39E88Cu;
            // 0x39e88c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39E890u;
        goto label_39e890;
    }
    ctx->pc = 0x39E888u;
    SET_GPR_U32(ctx, 31, 0x39E890u);
    ctx->pc = 0x39E88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E888u;
            // 0x39e88c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39EBD0u;
    if (runtime->hasFunction(0x39EBD0u)) {
        auto targetFn = runtime->lookupFunction(0x39EBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E890u; }
        if (ctx->pc != 0x39E890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EBD0_0x39ebd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E890u; }
        if (ctx->pc != 0x39E890u) { return; }
    }
    ctx->pc = 0x39E890u;
label_39e890:
    // 0x39e890: 0x10000007  b           . + 4 + (0x7 << 2)
label_39e894:
    if (ctx->pc == 0x39E894u) {
        ctx->pc = 0x39E898u;
        goto label_39e898;
    }
    ctx->pc = 0x39E890u;
    {
        const bool branch_taken_0x39e890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e890) {
            ctx->pc = 0x39E8B0u;
            goto label_39e8b0;
        }
    }
    ctx->pc = 0x39E898u;
label_39e898:
    // 0x39e898: 0xc0e7b78  jal         func_39EDE0
label_39e89c:
    if (ctx->pc == 0x39E89Cu) {
        ctx->pc = 0x39E8A0u;
        goto label_39e8a0;
    }
    ctx->pc = 0x39E898u;
    SET_GPR_U32(ctx, 31, 0x39E8A0u);
    ctx->pc = 0x39EDE0u;
    if (runtime->hasFunction(0x39EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x39EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E8A0u; }
        if (ctx->pc != 0x39E8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EDE0_0x39ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E8A0u; }
        if (ctx->pc != 0x39E8A0u) { return; }
    }
    ctx->pc = 0x39E8A0u;
label_39e8a0:
    // 0x39e8a0: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x39e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39e8a4:
    // 0x39e8a4: 0xc44c0074  lwc1        $f12, 0x74($v0)
    ctx->pc = 0x39e8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39e8a8:
    // 0x39e8a8: 0xc0e7af4  jal         func_39EBD0
label_39e8ac:
    if (ctx->pc == 0x39E8ACu) {
        ctx->pc = 0x39E8ACu;
            // 0x39e8ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39E8B0u;
        goto label_39e8b0;
    }
    ctx->pc = 0x39E8A8u;
    SET_GPR_U32(ctx, 31, 0x39E8B0u);
    ctx->pc = 0x39E8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E8A8u;
            // 0x39e8ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39EBD0u;
    if (runtime->hasFunction(0x39EBD0u)) {
        auto targetFn = runtime->lookupFunction(0x39EBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E8B0u; }
        if (ctx->pc != 0x39E8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EBD0_0x39ebd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E8B0u; }
        if (ctx->pc != 0x39E8B0u) { return; }
    }
    ctx->pc = 0x39E8B0u;
label_39e8b0:
    // 0x39e8b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39e8b4:
    // 0x39e8b4: 0xc0770e4  jal         func_1DC390
label_39e8b8:
    if (ctx->pc == 0x39E8B8u) {
        ctx->pc = 0x39E8B8u;
            // 0x39e8b8: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x39E8BCu;
        goto label_39e8bc;
    }
    ctx->pc = 0x39E8B4u;
    SET_GPR_U32(ctx, 31, 0x39E8BCu);
    ctx->pc = 0x39E8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E8B4u;
            // 0x39e8b8: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC390u;
    if (runtime->hasFunction(0x1DC390u)) {
        auto targetFn = runtime->lookupFunction(0x1DC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E8BCu; }
        if (ctx->pc != 0x39E8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC390_0x1dc390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E8BCu; }
        if (ctx->pc != 0x39E8BCu) { return; }
    }
    ctx->pc = 0x39E8BCu;
label_39e8bc:
    // 0x39e8bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39e8c0:
    // 0x39e8c0: 0x54430053  bnel        $v0, $v1, . + 4 + (0x53 << 2)
label_39e8c4:
    if (ctx->pc == 0x39E8C4u) {
        ctx->pc = 0x39E8C4u;
            // 0x39e8c4: 0xc6800028  lwc1        $f0, 0x28($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x39E8C8u;
        goto label_39e8c8;
    }
    ctx->pc = 0x39E8C0u;
    {
        const bool branch_taken_0x39e8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39e8c0) {
            ctx->pc = 0x39E8C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39E8C0u;
            // 0x39e8c4: 0xc6800028  lwc1        $f0, 0x28($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x39EA10u;
            goto label_39ea10;
        }
    }
    ctx->pc = 0x39E8C8u;
label_39e8c8:
    // 0x39e8c8: 0xc0b6d04  jal         func_2DB410
label_39e8cc:
    if (ctx->pc == 0x39E8CCu) {
        ctx->pc = 0x39E8CCu;
            // 0x39e8cc: 0x8e840024  lw          $a0, 0x24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
        ctx->pc = 0x39E8D0u;
        goto label_39e8d0;
    }
    ctx->pc = 0x39E8C8u;
    SET_GPR_U32(ctx, 31, 0x39E8D0u);
    ctx->pc = 0x39E8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E8C8u;
            // 0x39e8cc: 0x8e840024  lw          $a0, 0x24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB410u;
    if (runtime->hasFunction(0x2DB410u)) {
        auto targetFn = runtime->lookupFunction(0x2DB410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E8D0u; }
        if (ctx->pc != 0x39E8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB410_0x2db410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E8D0u; }
        if (ctx->pc != 0x39E8D0u) { return; }
    }
    ctx->pc = 0x39E8D0u;
label_39e8d0:
    // 0x39e8d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x39e8d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39e8d4:
    // 0x39e8d4: 0xc0e7af0  jal         func_39EBC0
label_39e8d8:
    if (ctx->pc == 0x39E8D8u) {
        ctx->pc = 0x39E8D8u;
            // 0x39e8d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39E8DCu;
        goto label_39e8dc;
    }
    ctx->pc = 0x39E8D4u;
    SET_GPR_U32(ctx, 31, 0x39E8DCu);
    ctx->pc = 0x39E8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E8D4u;
            // 0x39e8d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39EBC0u;
    if (runtime->hasFunction(0x39EBC0u)) {
        auto targetFn = runtime->lookupFunction(0x39EBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E8DCu; }
        if (ctx->pc != 0x39E8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EBC0_0x39ebc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E8DCu; }
        if (ctx->pc != 0x39E8DCu) { return; }
    }
    ctx->pc = 0x39E8DCu;
label_39e8dc:
    // 0x39e8dc: 0xc077570  jal         func_1DD5C0
label_39e8e0:
    if (ctx->pc == 0x39E8E0u) {
        ctx->pc = 0x39E8E0u;
            // 0x39e8e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39E8E4u;
        goto label_39e8e4;
    }
    ctx->pc = 0x39E8DCu;
    SET_GPR_U32(ctx, 31, 0x39E8E4u);
    ctx->pc = 0x39E8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E8DCu;
            // 0x39e8e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5C0u;
    if (runtime->hasFunction(0x1DD5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E8E4u; }
        if (ctx->pc != 0x39E8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5C0_0x1dd5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E8E4u; }
        if (ctx->pc != 0x39E8E4u) { return; }
    }
    ctx->pc = 0x39E8E4u;
label_39e8e4:
    // 0x39e8e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39e8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39e8e8:
    // 0x39e8e8: 0xc0e7aec  jal         func_39EBB0
label_39e8ec:
    if (ctx->pc == 0x39E8ECu) {
        ctx->pc = 0x39E8ECu;
            // 0x39e8ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39E8F0u;
        goto label_39e8f0;
    }
    ctx->pc = 0x39E8E8u;
    SET_GPR_U32(ctx, 31, 0x39E8F0u);
    ctx->pc = 0x39E8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E8E8u;
            // 0x39e8ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39EBB0u;
    if (runtime->hasFunction(0x39EBB0u)) {
        auto targetFn = runtime->lookupFunction(0x39EBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E8F0u; }
        if (ctx->pc != 0x39E8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EBB0_0x39ebb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E8F0u; }
        if (ctx->pc != 0x39E8F0u) { return; }
    }
    ctx->pc = 0x39E8F0u;
label_39e8f0:
    // 0x39e8f0: 0xc0e7ae8  jal         func_39EBA0
label_39e8f4:
    if (ctx->pc == 0x39E8F4u) {
        ctx->pc = 0x39E8F4u;
            // 0x39e8f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39E8F8u;
        goto label_39e8f8;
    }
    ctx->pc = 0x39E8F0u;
    SET_GPR_U32(ctx, 31, 0x39E8F8u);
    ctx->pc = 0x39E8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E8F0u;
            // 0x39e8f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39EBA0u;
    if (runtime->hasFunction(0x39EBA0u)) {
        auto targetFn = runtime->lookupFunction(0x39EBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E8F8u; }
        if (ctx->pc != 0x39E8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EBA0_0x39eba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E8F8u; }
        if (ctx->pc != 0x39E8F8u) { return; }
    }
    ctx->pc = 0x39E8F8u;
label_39e8f8:
    // 0x39e8f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39e8f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39e8fc:
    // 0x39e8fc: 0xc0d1c14  jal         func_347050
label_39e900:
    if (ctx->pc == 0x39E900u) {
        ctx->pc = 0x39E900u;
            // 0x39e900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39E904u;
        goto label_39e904;
    }
    ctx->pc = 0x39E8FCu;
    SET_GPR_U32(ctx, 31, 0x39E904u);
    ctx->pc = 0x39E900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E8FCu;
            // 0x39e900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E904u; }
        if (ctx->pc != 0x39E904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E904u; }
        if (ctx->pc != 0x39E904u) { return; }
    }
    ctx->pc = 0x39E904u;
label_39e904:
    // 0x39e904: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x39e904u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_39e908:
    // 0x39e908: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39e908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39e90c:
    // 0x39e90c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x39e90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_39e910:
    // 0x39e910: 0xc0e7ad4  jal         func_39EB50
label_39e914:
    if (ctx->pc == 0x39E914u) {
        ctx->pc = 0x39E914u;
            // 0x39e914: 0x24c67320  addiu       $a2, $a2, 0x7320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29472));
        ctx->pc = 0x39E918u;
        goto label_39e918;
    }
    ctx->pc = 0x39E910u;
    SET_GPR_U32(ctx, 31, 0x39E918u);
    ctx->pc = 0x39E914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E910u;
            // 0x39e914: 0x24c67320  addiu       $a2, $a2, 0x7320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39EB50u;
    if (runtime->hasFunction(0x39EB50u)) {
        auto targetFn = runtime->lookupFunction(0x39EB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E918u; }
        if (ctx->pc != 0x39E918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EB50_0x39eb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E918u; }
        if (ctx->pc != 0x39E918u) { return; }
    }
    ctx->pc = 0x39E918u;
label_39e918:
    // 0x39e918: 0xc0e7ad0  jal         func_39EB40
label_39e91c:
    if (ctx->pc == 0x39E91Cu) {
        ctx->pc = 0x39E91Cu;
            // 0x39e91c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39E920u;
        goto label_39e920;
    }
    ctx->pc = 0x39E918u;
    SET_GPR_U32(ctx, 31, 0x39E920u);
    ctx->pc = 0x39E91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E918u;
            // 0x39e91c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39EB40u;
    if (runtime->hasFunction(0x39EB40u)) {
        auto targetFn = runtime->lookupFunction(0x39EB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E920u; }
        if (ctx->pc != 0x39E920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EB40_0x39eb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E920u; }
        if (ctx->pc != 0x39E920u) { return; }
    }
    ctx->pc = 0x39E920u;
label_39e920:
    // 0x39e920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39e920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39e924:
    // 0x39e924: 0xc04cc08  jal         func_133020
label_39e928:
    if (ctx->pc == 0x39E928u) {
        ctx->pc = 0x39E928u;
            // 0x39e928: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x39E92Cu;
        goto label_39e92c;
    }
    ctx->pc = 0x39E924u;
    SET_GPR_U32(ctx, 31, 0x39E92Cu);
    ctx->pc = 0x39E928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E924u;
            // 0x39e928: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E92Cu; }
        if (ctx->pc != 0x39E92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E92Cu; }
        if (ctx->pc != 0x39E92Cu) { return; }
    }
    ctx->pc = 0x39E92Cu;
label_39e92c:
    // 0x39e92c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x39e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_39e930:
    // 0x39e930: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x39e930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_39e934:
    // 0x39e934: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x39e934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39e938:
    // 0x39e938: 0x0  nop
    ctx->pc = 0x39e938u;
    // NOP
label_39e93c:
    // 0x39e93c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x39e93cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39e940:
    // 0x39e940: 0x45000032  bc1f        . + 4 + (0x32 << 2)
label_39e944:
    if (ctx->pc == 0x39E944u) {
        ctx->pc = 0x39E948u;
        goto label_39e948;
    }
    ctx->pc = 0x39E940u;
    {
        const bool branch_taken_0x39e940 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39e940) {
            ctx->pc = 0x39EA0Cu;
            goto label_39ea0c;
        }
    }
    ctx->pc = 0x39E948u;
label_39e948:
    // 0x39e948: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39e948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39e94c:
    // 0x39e94c: 0xc0e38ec  jal         func_38E3B0
label_39e950:
    if (ctx->pc == 0x39E950u) {
        ctx->pc = 0x39E950u;
            // 0x39e950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39E954u;
        goto label_39e954;
    }
    ctx->pc = 0x39E94Cu;
    SET_GPR_U32(ctx, 31, 0x39E954u);
    ctx->pc = 0x39E950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E94Cu;
            // 0x39e950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E3B0u;
    if (runtime->hasFunction(0x38E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x38E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E954u; }
        if (ctx->pc != 0x39E954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E3B0_0x38e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E954u; }
        if (ctx->pc != 0x39E954u) { return; }
    }
    ctx->pc = 0x39E954u;
label_39e954:
    // 0x39e954: 0x1000002d  b           . + 4 + (0x2D << 2)
label_39e958:
    if (ctx->pc == 0x39E958u) {
        ctx->pc = 0x39E95Cu;
        goto label_39e95c;
    }
    ctx->pc = 0x39E954u;
    {
        const bool branch_taken_0x39e954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e954) {
            ctx->pc = 0x39EA0Cu;
            goto label_39ea0c;
        }
    }
    ctx->pc = 0x39E95Cu;
label_39e95c:
    // 0x39e95c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x39e95cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39e960:
    // 0x39e960: 0x0  nop
    ctx->pc = 0x39e960u;
    // NOP
label_39e964:
    // 0x39e964: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x39e964u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39e968:
    // 0x39e968: 0x45010028  bc1t        . + 4 + (0x28 << 2)
label_39e96c:
    if (ctx->pc == 0x39E96Cu) {
        ctx->pc = 0x39E970u;
        goto label_39e970;
    }
    ctx->pc = 0x39E968u;
    {
        const bool branch_taken_0x39e968 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39e968) {
            ctx->pc = 0x39EA0Cu;
            goto label_39ea0c;
        }
    }
    ctx->pc = 0x39E970u;
label_39e970:
    // 0x39e970: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x39e970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_39e974:
    // 0x39e974: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39e974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39e978:
    // 0x39e978: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x39e978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39e97c:
    // 0x39e97c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_39e980:
    if (ctx->pc == 0x39E980u) {
        ctx->pc = 0x39E984u;
        goto label_39e984;
    }
    ctx->pc = 0x39E97Cu;
    {
        const bool branch_taken_0x39e97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e97c) {
            ctx->pc = 0x39E9C4u;
            goto label_39e9c4;
        }
    }
    ctx->pc = 0x39E984u;
label_39e984:
    // 0x39e984: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x39e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_39e988:
    // 0x39e988: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x39e988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_39e98c:
    // 0x39e98c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_39e990:
    if (ctx->pc == 0x39E990u) {
        ctx->pc = 0x39E990u;
            // 0x39e990: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39E994u;
        goto label_39e994;
    }
    ctx->pc = 0x39E98Cu;
    {
        const bool branch_taken_0x39e98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e98c) {
            ctx->pc = 0x39E990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39E98Cu;
            // 0x39e990: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39E9ACu;
            goto label_39e9ac;
        }
    }
    ctx->pc = 0x39E994u;
label_39e994:
    // 0x39e994: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x39e994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_39e998:
    // 0x39e998: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39e998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39e99c:
    // 0x39e99c: 0xc0e7af4  jal         func_39EBD0
label_39e9a0:
    if (ctx->pc == 0x39E9A0u) {
        ctx->pc = 0x39E9A0u;
            // 0x39e9a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39E9A4u;
        goto label_39e9a4;
    }
    ctx->pc = 0x39E99Cu;
    SET_GPR_U32(ctx, 31, 0x39E9A4u);
    ctx->pc = 0x39E9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E99Cu;
            // 0x39e9a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39EBD0u;
    if (runtime->hasFunction(0x39EBD0u)) {
        auto targetFn = runtime->lookupFunction(0x39EBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E9A4u; }
        if (ctx->pc != 0x39E9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EBD0_0x39ebd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E9A4u; }
        if (ctx->pc != 0x39E9A4u) { return; }
    }
    ctx->pc = 0x39E9A4u;
label_39e9a4:
    // 0x39e9a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_39e9a8:
    if (ctx->pc == 0x39E9A8u) {
        ctx->pc = 0x39E9ACu;
        goto label_39e9ac;
    }
    ctx->pc = 0x39E9A4u;
    {
        const bool branch_taken_0x39e9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e9a4) {
            ctx->pc = 0x39E9C4u;
            goto label_39e9c4;
        }
    }
    ctx->pc = 0x39E9ACu;
label_39e9ac:
    // 0x39e9ac: 0xc0e7b78  jal         func_39EDE0
label_39e9b0:
    if (ctx->pc == 0x39E9B0u) {
        ctx->pc = 0x39E9B4u;
        goto label_39e9b4;
    }
    ctx->pc = 0x39E9ACu;
    SET_GPR_U32(ctx, 31, 0x39E9B4u);
    ctx->pc = 0x39EDE0u;
    if (runtime->hasFunction(0x39EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x39EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E9B4u; }
        if (ctx->pc != 0x39E9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EDE0_0x39ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E9B4u; }
        if (ctx->pc != 0x39E9B4u) { return; }
    }
    ctx->pc = 0x39E9B4u;
label_39e9b4:
    // 0x39e9b4: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x39e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_39e9b8:
    // 0x39e9b8: 0xc44c0074  lwc1        $f12, 0x74($v0)
    ctx->pc = 0x39e9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39e9bc:
    // 0x39e9bc: 0xc0e7af4  jal         func_39EBD0
label_39e9c0:
    if (ctx->pc == 0x39E9C0u) {
        ctx->pc = 0x39E9C0u;
            // 0x39e9c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39E9C4u;
        goto label_39e9c4;
    }
    ctx->pc = 0x39E9BCu;
    SET_GPR_U32(ctx, 31, 0x39E9C4u);
    ctx->pc = 0x39E9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E9BCu;
            // 0x39e9c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39EBD0u;
    if (runtime->hasFunction(0x39EBD0u)) {
        auto targetFn = runtime->lookupFunction(0x39EBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E9C4u; }
        if (ctx->pc != 0x39E9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EBD0_0x39ebd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E9C4u; }
        if (ctx->pc != 0x39E9C4u) { return; }
    }
    ctx->pc = 0x39E9C4u;
label_39e9c4:
    // 0x39e9c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_39e9c8:
    // 0x39e9c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39e9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39e9cc:
    // 0x39e9cc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x39e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_39e9d0:
    // 0x39e9d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x39e9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39e9d4:
    // 0x39e9d4: 0xc44c0018  lwc1        $f12, 0x18($v0)
    ctx->pc = 0x39e9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39e9d8:
    // 0x39e9d8: 0xc04cc7c  jal         func_1331F0
label_39e9dc:
    if (ctx->pc == 0x39E9DCu) {
        ctx->pc = 0x39E9DCu;
            // 0x39e9dc: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x39E9E0u;
        goto label_39e9e0;
    }
    ctx->pc = 0x39E9D8u;
    SET_GPR_U32(ctx, 31, 0x39E9E0u);
    ctx->pc = 0x39E9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E9D8u;
            // 0x39e9dc: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E9E0u; }
        if (ctx->pc != 0x39E9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39E9E0u; }
        if (ctx->pc != 0x39E9E0u) { return; }
    }
    ctx->pc = 0x39E9E0u;
label_39e9e0:
    // 0x39e9e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39e9e4:
    // 0x39e9e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_39e9e8:
    // 0x39e9e8: 0x8c63e3e0  lw          $v1, -0x1C20($v1)
    ctx->pc = 0x39e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_39e9ec:
    // 0x39e9ec: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x39e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_39e9f0:
    // 0x39e9f0: 0xc475001c  lwc1        $f21, 0x1C($v1)
    ctx->pc = 0x39e9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_39e9f4:
    // 0x39e9f4: 0xc4540018  lwc1        $f20, 0x18($v0)
    ctx->pc = 0x39e9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39e9f8:
    // 0x39e9f8: 0xc04cc14  jal         func_133050
label_39e9fc:
    if (ctx->pc == 0x39E9FCu) {
        ctx->pc = 0x39E9FCu;
            // 0x39e9fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39EA00u;
        goto label_39ea00;
    }
    ctx->pc = 0x39E9F8u;
    SET_GPR_U32(ctx, 31, 0x39EA00u);
    ctx->pc = 0x39E9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39E9F8u;
            // 0x39e9fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EA00u; }
        if (ctx->pc != 0x39EA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EA00u; }
        if (ctx->pc != 0x39EA00u) { return; }
    }
    ctx->pc = 0x39EA00u;
label_39ea00:
    // 0x39ea00: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x39ea00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_39ea04:
    // 0x39ea04: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x39ea04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_39ea08:
    // 0x39ea08: 0xe6600154  swc1        $f0, 0x154($s3)
    ctx->pc = 0x39ea08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 340), bits); }
label_39ea0c:
    // 0x39ea0c: 0xc6800028  lwc1        $f0, 0x28($s4)
    ctx->pc = 0x39ea0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ea10:
    // 0x39ea10: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x39ea10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_39ea14:
    // 0x39ea14: 0x0  nop
    ctx->pc = 0x39ea14u;
    // NOP
label_39ea18:
    // 0x39ea18: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x39ea18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39ea1c:
    // 0x39ea1c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_39ea20:
    if (ctx->pc == 0x39EA20u) {
        ctx->pc = 0x39EA24u;
        goto label_39ea24;
    }
    ctx->pc = 0x39EA1Cu;
    {
        const bool branch_taken_0x39ea1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39ea1c) {
            ctx->pc = 0x39EA4Cu;
            goto label_39ea4c;
        }
    }
    ctx->pc = 0x39EA24u;
label_39ea24:
    // 0x39ea24: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_39ea28:
    // 0x39ea28: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x39ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_39ea2c:
    // 0x39ea2c: 0xc6800028  lwc1        $f0, 0x28($s4)
    ctx->pc = 0x39ea2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ea30:
    // 0x39ea30: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x39ea30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39ea34:
    // 0x39ea34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x39ea34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_39ea38:
    // 0x39ea38: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x39ea38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39ea3c:
    // 0x39ea3c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_39ea40:
    if (ctx->pc == 0x39EA40u) {
        ctx->pc = 0x39EA40u;
            // 0x39ea40: 0xe6800028  swc1        $f0, 0x28($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
        ctx->pc = 0x39EA44u;
        goto label_39ea44;
    }
    ctx->pc = 0x39EA3Cu;
    {
        const bool branch_taken_0x39ea3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39EA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39EA3Cu;
            // 0x39ea40: 0xe6800028  swc1        $f0, 0x28($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea3c) {
            ctx->pc = 0x39EA60u;
            goto label_39ea60;
        }
    }
    ctx->pc = 0x39EA44u;
label_39ea44:
    // 0x39ea44: 0x10000006  b           . + 4 + (0x6 << 2)
label_39ea48:
    if (ctx->pc == 0x39EA48u) {
        ctx->pc = 0x39EA48u;
            // 0x39ea48: 0xe6820028  swc1        $f2, 0x28($s4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
        ctx->pc = 0x39EA4Cu;
        goto label_39ea4c;
    }
    ctx->pc = 0x39EA44u;
    {
        const bool branch_taken_0x39ea44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39EA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39EA44u;
            // 0x39ea48: 0xe6820028  swc1        $f2, 0x28($s4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ea44) {
            ctx->pc = 0x39EA60u;
            goto label_39ea60;
        }
    }
    ctx->pc = 0x39EA4Cu;
label_39ea4c:
    // 0x39ea4c: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x39ea4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39ea50:
    // 0x39ea50: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_39ea54:
    if (ctx->pc == 0x39EA54u) {
        ctx->pc = 0x39EA54u;
            // 0x39ea54: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x39EA58u;
        goto label_39ea58;
    }
    ctx->pc = 0x39EA50u;
    {
        const bool branch_taken_0x39ea50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39ea50) {
            ctx->pc = 0x39EA54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39EA50u;
            // 0x39ea54: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39EA64u;
            goto label_39ea64;
        }
    }
    ctx->pc = 0x39EA58u;
label_39ea58:
    // 0x39ea58: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x39ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_39ea5c:
    // 0x39ea5c: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x39ea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_39ea60:
    // 0x39ea60: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x39ea60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_39ea64:
    // 0x39ea64: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x39ea64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_39ea68:
    // 0x39ea68: 0xc04cca0  jal         func_133280
label_39ea6c:
    if (ctx->pc == 0x39EA6Cu) {
        ctx->pc = 0x39EA6Cu;
            // 0x39ea6c: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x39EA70u;
        goto label_39ea70;
    }
    ctx->pc = 0x39EA68u;
    SET_GPR_U32(ctx, 31, 0x39EA70u);
    ctx->pc = 0x39EA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EA68u;
            // 0x39ea6c: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EA70u; }
        if (ctx->pc != 0x39EA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EA70u; }
        if (ctx->pc != 0x39EA70u) { return; }
    }
    ctx->pc = 0x39EA70u;
label_39ea70:
    // 0x39ea70: 0x8e910024  lw          $s1, 0x24($s4)
    ctx->pc = 0x39ea70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_39ea74:
    // 0x39ea74: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x39ea74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ea78:
    // 0x39ea78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39ea7c:
    // 0x39ea7c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x39ea7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39ea80:
    // 0x39ea80: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x39ea80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_39ea84:
    // 0x39ea84: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x39ea84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_39ea88:
    // 0x39ea88: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x39ea88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_39ea8c:
    // 0x39ea8c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x39ea8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39ea90:
    // 0x39ea90: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x39ea90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_39ea94:
    // 0x39ea94: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x39ea94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_39ea98:
    // 0x39ea98: 0xc6140020  lwc1        $f20, 0x20($s0)
    ctx->pc = 0x39ea98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39ea9c:
    // 0x39ea9c: 0xc089638  jal         func_2258E0
label_39eaa0:
    if (ctx->pc == 0x39EAA0u) {
        ctx->pc = 0x39EAA0u;
            // 0x39eaa0: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x39EAA4u;
        goto label_39eaa4;
    }
    ctx->pc = 0x39EA9Cu;
    SET_GPR_U32(ctx, 31, 0x39EAA4u);
    ctx->pc = 0x39EAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EA9Cu;
            // 0x39eaa0: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EAA4u; }
        if (ctx->pc != 0x39EAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EAA4u; }
        if (ctx->pc != 0x39EAA4u) { return; }
    }
    ctx->pc = 0x39EAA4u;
label_39eaa4:
    // 0x39eaa4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x39eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_39eaa8:
    // 0x39eaa8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x39eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_39eaac:
    // 0x39eaac: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x39eaacu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_39eab0:
    // 0x39eab0: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x39eab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_39eab4:
    // 0x39eab4: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x39eab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39eab8:
    // 0x39eab8: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x39eab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39eabc:
    // 0x39eabc: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x39eabcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_39eac0:
    // 0x39eac0: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x39eac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39eac4:
    // 0x39eac4: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x39eac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39eac8:
    // 0x39eac8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x39eac8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_39eacc:
    // 0x39eacc: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x39eaccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_39ead0:
    // 0x39ead0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x39ead0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_39ead4:
    // 0x39ead4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x39ead4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_39ead8:
    // 0x39ead8: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x39ead8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_39eadc:
    // 0x39eadc: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x39eadcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_39eae0:
    // 0x39eae0: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x39eae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_39eae4:
    // 0x39eae4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x39eae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_39eae8:
    // 0x39eae8: 0xc6140018  lwc1        $f20, 0x18($s0)
    ctx->pc = 0x39eae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39eaec:
    // 0x39eaec: 0xc088b74  jal         func_222DD0
label_39eaf0:
    if (ctx->pc == 0x39EAF0u) {
        ctx->pc = 0x39EAF0u;
            // 0x39eaf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39EAF4u;
        goto label_39eaf4;
    }
    ctx->pc = 0x39EAECu;
    SET_GPR_U32(ctx, 31, 0x39EAF4u);
    ctx->pc = 0x39EAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EAECu;
            // 0x39eaf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EAF4u; }
        if (ctx->pc != 0x39EAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EAF4u; }
        if (ctx->pc != 0x39EAF4u) { return; }
    }
    ctx->pc = 0x39EAF4u;
label_39eaf4:
    // 0x39eaf4: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x39eaf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_39eaf8:
    // 0x39eaf8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x39eaf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_39eafc:
    // 0x39eafc: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x39eafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_39eb00:
    // 0x39eb00: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x39eb00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_39eb04:
    // 0x39eb04: 0x320f809  jalr        $t9
label_39eb08:
    if (ctx->pc == 0x39EB08u) {
        ctx->pc = 0x39EB08u;
            // 0x39eb08: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x39EB0Cu;
        goto label_39eb0c;
    }
    ctx->pc = 0x39EB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39EB0Cu);
        ctx->pc = 0x39EB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39EB04u;
            // 0x39eb08: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39EB0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39EB0Cu; }
            if (ctx->pc != 0x39EB0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39EB0Cu;
label_39eb0c:
    // 0x39eb0c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x39eb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_39eb10:
    // 0x39eb10: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x39eb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_39eb14:
    // 0x39eb14: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x39eb14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39eb18:
    // 0x39eb18: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x39eb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_39eb1c:
    // 0x39eb1c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x39eb1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39eb20:
    // 0x39eb20: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x39eb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_39eb24:
    // 0x39eb24: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39eb24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39eb28:
    // 0x39eb28: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x39eb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_39eb2c:
    // 0x39eb2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39eb2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39eb30:
    // 0x39eb30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39eb30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39eb34:
    // 0x39eb34: 0x3e00008  jr          $ra
label_39eb38:
    if (ctx->pc == 0x39EB38u) {
        ctx->pc = 0x39EB38u;
            // 0x39eb38: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x39EB3Cu;
        goto label_39eb3c;
    }
    ctx->pc = 0x39EB34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39EB34u;
            // 0x39eb38: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39EB3Cu;
label_39eb3c:
    // 0x39eb3c: 0x0  nop
    ctx->pc = 0x39eb3cu;
    // NOP
}
