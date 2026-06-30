#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046DC20
// Address: 0x46dc20 - 0x46e360
void sub_0046DC20_0x46dc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046DC20_0x46dc20");
#endif

    switch (ctx->pc) {
        case 0x46dc20u: goto label_46dc20;
        case 0x46dc24u: goto label_46dc24;
        case 0x46dc28u: goto label_46dc28;
        case 0x46dc2cu: goto label_46dc2c;
        case 0x46dc30u: goto label_46dc30;
        case 0x46dc34u: goto label_46dc34;
        case 0x46dc38u: goto label_46dc38;
        case 0x46dc3cu: goto label_46dc3c;
        case 0x46dc40u: goto label_46dc40;
        case 0x46dc44u: goto label_46dc44;
        case 0x46dc48u: goto label_46dc48;
        case 0x46dc4cu: goto label_46dc4c;
        case 0x46dc50u: goto label_46dc50;
        case 0x46dc54u: goto label_46dc54;
        case 0x46dc58u: goto label_46dc58;
        case 0x46dc5cu: goto label_46dc5c;
        case 0x46dc60u: goto label_46dc60;
        case 0x46dc64u: goto label_46dc64;
        case 0x46dc68u: goto label_46dc68;
        case 0x46dc6cu: goto label_46dc6c;
        case 0x46dc70u: goto label_46dc70;
        case 0x46dc74u: goto label_46dc74;
        case 0x46dc78u: goto label_46dc78;
        case 0x46dc7cu: goto label_46dc7c;
        case 0x46dc80u: goto label_46dc80;
        case 0x46dc84u: goto label_46dc84;
        case 0x46dc88u: goto label_46dc88;
        case 0x46dc8cu: goto label_46dc8c;
        case 0x46dc90u: goto label_46dc90;
        case 0x46dc94u: goto label_46dc94;
        case 0x46dc98u: goto label_46dc98;
        case 0x46dc9cu: goto label_46dc9c;
        case 0x46dca0u: goto label_46dca0;
        case 0x46dca4u: goto label_46dca4;
        case 0x46dca8u: goto label_46dca8;
        case 0x46dcacu: goto label_46dcac;
        case 0x46dcb0u: goto label_46dcb0;
        case 0x46dcb4u: goto label_46dcb4;
        case 0x46dcb8u: goto label_46dcb8;
        case 0x46dcbcu: goto label_46dcbc;
        case 0x46dcc0u: goto label_46dcc0;
        case 0x46dcc4u: goto label_46dcc4;
        case 0x46dcc8u: goto label_46dcc8;
        case 0x46dcccu: goto label_46dccc;
        case 0x46dcd0u: goto label_46dcd0;
        case 0x46dcd4u: goto label_46dcd4;
        case 0x46dcd8u: goto label_46dcd8;
        case 0x46dcdcu: goto label_46dcdc;
        case 0x46dce0u: goto label_46dce0;
        case 0x46dce4u: goto label_46dce4;
        case 0x46dce8u: goto label_46dce8;
        case 0x46dcecu: goto label_46dcec;
        case 0x46dcf0u: goto label_46dcf0;
        case 0x46dcf4u: goto label_46dcf4;
        case 0x46dcf8u: goto label_46dcf8;
        case 0x46dcfcu: goto label_46dcfc;
        case 0x46dd00u: goto label_46dd00;
        case 0x46dd04u: goto label_46dd04;
        case 0x46dd08u: goto label_46dd08;
        case 0x46dd0cu: goto label_46dd0c;
        case 0x46dd10u: goto label_46dd10;
        case 0x46dd14u: goto label_46dd14;
        case 0x46dd18u: goto label_46dd18;
        case 0x46dd1cu: goto label_46dd1c;
        case 0x46dd20u: goto label_46dd20;
        case 0x46dd24u: goto label_46dd24;
        case 0x46dd28u: goto label_46dd28;
        case 0x46dd2cu: goto label_46dd2c;
        case 0x46dd30u: goto label_46dd30;
        case 0x46dd34u: goto label_46dd34;
        case 0x46dd38u: goto label_46dd38;
        case 0x46dd3cu: goto label_46dd3c;
        case 0x46dd40u: goto label_46dd40;
        case 0x46dd44u: goto label_46dd44;
        case 0x46dd48u: goto label_46dd48;
        case 0x46dd4cu: goto label_46dd4c;
        case 0x46dd50u: goto label_46dd50;
        case 0x46dd54u: goto label_46dd54;
        case 0x46dd58u: goto label_46dd58;
        case 0x46dd5cu: goto label_46dd5c;
        case 0x46dd60u: goto label_46dd60;
        case 0x46dd64u: goto label_46dd64;
        case 0x46dd68u: goto label_46dd68;
        case 0x46dd6cu: goto label_46dd6c;
        case 0x46dd70u: goto label_46dd70;
        case 0x46dd74u: goto label_46dd74;
        case 0x46dd78u: goto label_46dd78;
        case 0x46dd7cu: goto label_46dd7c;
        case 0x46dd80u: goto label_46dd80;
        case 0x46dd84u: goto label_46dd84;
        case 0x46dd88u: goto label_46dd88;
        case 0x46dd8cu: goto label_46dd8c;
        case 0x46dd90u: goto label_46dd90;
        case 0x46dd94u: goto label_46dd94;
        case 0x46dd98u: goto label_46dd98;
        case 0x46dd9cu: goto label_46dd9c;
        case 0x46dda0u: goto label_46dda0;
        case 0x46dda4u: goto label_46dda4;
        case 0x46dda8u: goto label_46dda8;
        case 0x46ddacu: goto label_46ddac;
        case 0x46ddb0u: goto label_46ddb0;
        case 0x46ddb4u: goto label_46ddb4;
        case 0x46ddb8u: goto label_46ddb8;
        case 0x46ddbcu: goto label_46ddbc;
        case 0x46ddc0u: goto label_46ddc0;
        case 0x46ddc4u: goto label_46ddc4;
        case 0x46ddc8u: goto label_46ddc8;
        case 0x46ddccu: goto label_46ddcc;
        case 0x46ddd0u: goto label_46ddd0;
        case 0x46ddd4u: goto label_46ddd4;
        case 0x46ddd8u: goto label_46ddd8;
        case 0x46dddcu: goto label_46dddc;
        case 0x46dde0u: goto label_46dde0;
        case 0x46dde4u: goto label_46dde4;
        case 0x46dde8u: goto label_46dde8;
        case 0x46ddecu: goto label_46ddec;
        case 0x46ddf0u: goto label_46ddf0;
        case 0x46ddf4u: goto label_46ddf4;
        case 0x46ddf8u: goto label_46ddf8;
        case 0x46ddfcu: goto label_46ddfc;
        case 0x46de00u: goto label_46de00;
        case 0x46de04u: goto label_46de04;
        case 0x46de08u: goto label_46de08;
        case 0x46de0cu: goto label_46de0c;
        case 0x46de10u: goto label_46de10;
        case 0x46de14u: goto label_46de14;
        case 0x46de18u: goto label_46de18;
        case 0x46de1cu: goto label_46de1c;
        case 0x46de20u: goto label_46de20;
        case 0x46de24u: goto label_46de24;
        case 0x46de28u: goto label_46de28;
        case 0x46de2cu: goto label_46de2c;
        case 0x46de30u: goto label_46de30;
        case 0x46de34u: goto label_46de34;
        case 0x46de38u: goto label_46de38;
        case 0x46de3cu: goto label_46de3c;
        case 0x46de40u: goto label_46de40;
        case 0x46de44u: goto label_46de44;
        case 0x46de48u: goto label_46de48;
        case 0x46de4cu: goto label_46de4c;
        case 0x46de50u: goto label_46de50;
        case 0x46de54u: goto label_46de54;
        case 0x46de58u: goto label_46de58;
        case 0x46de5cu: goto label_46de5c;
        case 0x46de60u: goto label_46de60;
        case 0x46de64u: goto label_46de64;
        case 0x46de68u: goto label_46de68;
        case 0x46de6cu: goto label_46de6c;
        case 0x46de70u: goto label_46de70;
        case 0x46de74u: goto label_46de74;
        case 0x46de78u: goto label_46de78;
        case 0x46de7cu: goto label_46de7c;
        case 0x46de80u: goto label_46de80;
        case 0x46de84u: goto label_46de84;
        case 0x46de88u: goto label_46de88;
        case 0x46de8cu: goto label_46de8c;
        case 0x46de90u: goto label_46de90;
        case 0x46de94u: goto label_46de94;
        case 0x46de98u: goto label_46de98;
        case 0x46de9cu: goto label_46de9c;
        case 0x46dea0u: goto label_46dea0;
        case 0x46dea4u: goto label_46dea4;
        case 0x46dea8u: goto label_46dea8;
        case 0x46deacu: goto label_46deac;
        case 0x46deb0u: goto label_46deb0;
        case 0x46deb4u: goto label_46deb4;
        case 0x46deb8u: goto label_46deb8;
        case 0x46debcu: goto label_46debc;
        case 0x46dec0u: goto label_46dec0;
        case 0x46dec4u: goto label_46dec4;
        case 0x46dec8u: goto label_46dec8;
        case 0x46deccu: goto label_46decc;
        case 0x46ded0u: goto label_46ded0;
        case 0x46ded4u: goto label_46ded4;
        case 0x46ded8u: goto label_46ded8;
        case 0x46dedcu: goto label_46dedc;
        case 0x46dee0u: goto label_46dee0;
        case 0x46dee4u: goto label_46dee4;
        case 0x46dee8u: goto label_46dee8;
        case 0x46deecu: goto label_46deec;
        case 0x46def0u: goto label_46def0;
        case 0x46def4u: goto label_46def4;
        case 0x46def8u: goto label_46def8;
        case 0x46defcu: goto label_46defc;
        case 0x46df00u: goto label_46df00;
        case 0x46df04u: goto label_46df04;
        case 0x46df08u: goto label_46df08;
        case 0x46df0cu: goto label_46df0c;
        case 0x46df10u: goto label_46df10;
        case 0x46df14u: goto label_46df14;
        case 0x46df18u: goto label_46df18;
        case 0x46df1cu: goto label_46df1c;
        case 0x46df20u: goto label_46df20;
        case 0x46df24u: goto label_46df24;
        case 0x46df28u: goto label_46df28;
        case 0x46df2cu: goto label_46df2c;
        case 0x46df30u: goto label_46df30;
        case 0x46df34u: goto label_46df34;
        case 0x46df38u: goto label_46df38;
        case 0x46df3cu: goto label_46df3c;
        case 0x46df40u: goto label_46df40;
        case 0x46df44u: goto label_46df44;
        case 0x46df48u: goto label_46df48;
        case 0x46df4cu: goto label_46df4c;
        case 0x46df50u: goto label_46df50;
        case 0x46df54u: goto label_46df54;
        case 0x46df58u: goto label_46df58;
        case 0x46df5cu: goto label_46df5c;
        case 0x46df60u: goto label_46df60;
        case 0x46df64u: goto label_46df64;
        case 0x46df68u: goto label_46df68;
        case 0x46df6cu: goto label_46df6c;
        case 0x46df70u: goto label_46df70;
        case 0x46df74u: goto label_46df74;
        case 0x46df78u: goto label_46df78;
        case 0x46df7cu: goto label_46df7c;
        case 0x46df80u: goto label_46df80;
        case 0x46df84u: goto label_46df84;
        case 0x46df88u: goto label_46df88;
        case 0x46df8cu: goto label_46df8c;
        case 0x46df90u: goto label_46df90;
        case 0x46df94u: goto label_46df94;
        case 0x46df98u: goto label_46df98;
        case 0x46df9cu: goto label_46df9c;
        case 0x46dfa0u: goto label_46dfa0;
        case 0x46dfa4u: goto label_46dfa4;
        case 0x46dfa8u: goto label_46dfa8;
        case 0x46dfacu: goto label_46dfac;
        case 0x46dfb0u: goto label_46dfb0;
        case 0x46dfb4u: goto label_46dfb4;
        case 0x46dfb8u: goto label_46dfb8;
        case 0x46dfbcu: goto label_46dfbc;
        case 0x46dfc0u: goto label_46dfc0;
        case 0x46dfc4u: goto label_46dfc4;
        case 0x46dfc8u: goto label_46dfc8;
        case 0x46dfccu: goto label_46dfcc;
        case 0x46dfd0u: goto label_46dfd0;
        case 0x46dfd4u: goto label_46dfd4;
        case 0x46dfd8u: goto label_46dfd8;
        case 0x46dfdcu: goto label_46dfdc;
        case 0x46dfe0u: goto label_46dfe0;
        case 0x46dfe4u: goto label_46dfe4;
        case 0x46dfe8u: goto label_46dfe8;
        case 0x46dfecu: goto label_46dfec;
        case 0x46dff0u: goto label_46dff0;
        case 0x46dff4u: goto label_46dff4;
        case 0x46dff8u: goto label_46dff8;
        case 0x46dffcu: goto label_46dffc;
        case 0x46e000u: goto label_46e000;
        case 0x46e004u: goto label_46e004;
        case 0x46e008u: goto label_46e008;
        case 0x46e00cu: goto label_46e00c;
        case 0x46e010u: goto label_46e010;
        case 0x46e014u: goto label_46e014;
        case 0x46e018u: goto label_46e018;
        case 0x46e01cu: goto label_46e01c;
        case 0x46e020u: goto label_46e020;
        case 0x46e024u: goto label_46e024;
        case 0x46e028u: goto label_46e028;
        case 0x46e02cu: goto label_46e02c;
        case 0x46e030u: goto label_46e030;
        case 0x46e034u: goto label_46e034;
        case 0x46e038u: goto label_46e038;
        case 0x46e03cu: goto label_46e03c;
        case 0x46e040u: goto label_46e040;
        case 0x46e044u: goto label_46e044;
        case 0x46e048u: goto label_46e048;
        case 0x46e04cu: goto label_46e04c;
        case 0x46e050u: goto label_46e050;
        case 0x46e054u: goto label_46e054;
        case 0x46e058u: goto label_46e058;
        case 0x46e05cu: goto label_46e05c;
        case 0x46e060u: goto label_46e060;
        case 0x46e064u: goto label_46e064;
        case 0x46e068u: goto label_46e068;
        case 0x46e06cu: goto label_46e06c;
        case 0x46e070u: goto label_46e070;
        case 0x46e074u: goto label_46e074;
        case 0x46e078u: goto label_46e078;
        case 0x46e07cu: goto label_46e07c;
        case 0x46e080u: goto label_46e080;
        case 0x46e084u: goto label_46e084;
        case 0x46e088u: goto label_46e088;
        case 0x46e08cu: goto label_46e08c;
        case 0x46e090u: goto label_46e090;
        case 0x46e094u: goto label_46e094;
        case 0x46e098u: goto label_46e098;
        case 0x46e09cu: goto label_46e09c;
        case 0x46e0a0u: goto label_46e0a0;
        case 0x46e0a4u: goto label_46e0a4;
        case 0x46e0a8u: goto label_46e0a8;
        case 0x46e0acu: goto label_46e0ac;
        case 0x46e0b0u: goto label_46e0b0;
        case 0x46e0b4u: goto label_46e0b4;
        case 0x46e0b8u: goto label_46e0b8;
        case 0x46e0bcu: goto label_46e0bc;
        case 0x46e0c0u: goto label_46e0c0;
        case 0x46e0c4u: goto label_46e0c4;
        case 0x46e0c8u: goto label_46e0c8;
        case 0x46e0ccu: goto label_46e0cc;
        case 0x46e0d0u: goto label_46e0d0;
        case 0x46e0d4u: goto label_46e0d4;
        case 0x46e0d8u: goto label_46e0d8;
        case 0x46e0dcu: goto label_46e0dc;
        case 0x46e0e0u: goto label_46e0e0;
        case 0x46e0e4u: goto label_46e0e4;
        case 0x46e0e8u: goto label_46e0e8;
        case 0x46e0ecu: goto label_46e0ec;
        case 0x46e0f0u: goto label_46e0f0;
        case 0x46e0f4u: goto label_46e0f4;
        case 0x46e0f8u: goto label_46e0f8;
        case 0x46e0fcu: goto label_46e0fc;
        case 0x46e100u: goto label_46e100;
        case 0x46e104u: goto label_46e104;
        case 0x46e108u: goto label_46e108;
        case 0x46e10cu: goto label_46e10c;
        case 0x46e110u: goto label_46e110;
        case 0x46e114u: goto label_46e114;
        case 0x46e118u: goto label_46e118;
        case 0x46e11cu: goto label_46e11c;
        case 0x46e120u: goto label_46e120;
        case 0x46e124u: goto label_46e124;
        case 0x46e128u: goto label_46e128;
        case 0x46e12cu: goto label_46e12c;
        case 0x46e130u: goto label_46e130;
        case 0x46e134u: goto label_46e134;
        case 0x46e138u: goto label_46e138;
        case 0x46e13cu: goto label_46e13c;
        case 0x46e140u: goto label_46e140;
        case 0x46e144u: goto label_46e144;
        case 0x46e148u: goto label_46e148;
        case 0x46e14cu: goto label_46e14c;
        case 0x46e150u: goto label_46e150;
        case 0x46e154u: goto label_46e154;
        case 0x46e158u: goto label_46e158;
        case 0x46e15cu: goto label_46e15c;
        case 0x46e160u: goto label_46e160;
        case 0x46e164u: goto label_46e164;
        case 0x46e168u: goto label_46e168;
        case 0x46e16cu: goto label_46e16c;
        case 0x46e170u: goto label_46e170;
        case 0x46e174u: goto label_46e174;
        case 0x46e178u: goto label_46e178;
        case 0x46e17cu: goto label_46e17c;
        case 0x46e180u: goto label_46e180;
        case 0x46e184u: goto label_46e184;
        case 0x46e188u: goto label_46e188;
        case 0x46e18cu: goto label_46e18c;
        case 0x46e190u: goto label_46e190;
        case 0x46e194u: goto label_46e194;
        case 0x46e198u: goto label_46e198;
        case 0x46e19cu: goto label_46e19c;
        case 0x46e1a0u: goto label_46e1a0;
        case 0x46e1a4u: goto label_46e1a4;
        case 0x46e1a8u: goto label_46e1a8;
        case 0x46e1acu: goto label_46e1ac;
        case 0x46e1b0u: goto label_46e1b0;
        case 0x46e1b4u: goto label_46e1b4;
        case 0x46e1b8u: goto label_46e1b8;
        case 0x46e1bcu: goto label_46e1bc;
        case 0x46e1c0u: goto label_46e1c0;
        case 0x46e1c4u: goto label_46e1c4;
        case 0x46e1c8u: goto label_46e1c8;
        case 0x46e1ccu: goto label_46e1cc;
        case 0x46e1d0u: goto label_46e1d0;
        case 0x46e1d4u: goto label_46e1d4;
        case 0x46e1d8u: goto label_46e1d8;
        case 0x46e1dcu: goto label_46e1dc;
        case 0x46e1e0u: goto label_46e1e0;
        case 0x46e1e4u: goto label_46e1e4;
        case 0x46e1e8u: goto label_46e1e8;
        case 0x46e1ecu: goto label_46e1ec;
        case 0x46e1f0u: goto label_46e1f0;
        case 0x46e1f4u: goto label_46e1f4;
        case 0x46e1f8u: goto label_46e1f8;
        case 0x46e1fcu: goto label_46e1fc;
        case 0x46e200u: goto label_46e200;
        case 0x46e204u: goto label_46e204;
        case 0x46e208u: goto label_46e208;
        case 0x46e20cu: goto label_46e20c;
        case 0x46e210u: goto label_46e210;
        case 0x46e214u: goto label_46e214;
        case 0x46e218u: goto label_46e218;
        case 0x46e21cu: goto label_46e21c;
        case 0x46e220u: goto label_46e220;
        case 0x46e224u: goto label_46e224;
        case 0x46e228u: goto label_46e228;
        case 0x46e22cu: goto label_46e22c;
        case 0x46e230u: goto label_46e230;
        case 0x46e234u: goto label_46e234;
        case 0x46e238u: goto label_46e238;
        case 0x46e23cu: goto label_46e23c;
        case 0x46e240u: goto label_46e240;
        case 0x46e244u: goto label_46e244;
        case 0x46e248u: goto label_46e248;
        case 0x46e24cu: goto label_46e24c;
        case 0x46e250u: goto label_46e250;
        case 0x46e254u: goto label_46e254;
        case 0x46e258u: goto label_46e258;
        case 0x46e25cu: goto label_46e25c;
        case 0x46e260u: goto label_46e260;
        case 0x46e264u: goto label_46e264;
        case 0x46e268u: goto label_46e268;
        case 0x46e26cu: goto label_46e26c;
        case 0x46e270u: goto label_46e270;
        case 0x46e274u: goto label_46e274;
        case 0x46e278u: goto label_46e278;
        case 0x46e27cu: goto label_46e27c;
        case 0x46e280u: goto label_46e280;
        case 0x46e284u: goto label_46e284;
        case 0x46e288u: goto label_46e288;
        case 0x46e28cu: goto label_46e28c;
        case 0x46e290u: goto label_46e290;
        case 0x46e294u: goto label_46e294;
        case 0x46e298u: goto label_46e298;
        case 0x46e29cu: goto label_46e29c;
        case 0x46e2a0u: goto label_46e2a0;
        case 0x46e2a4u: goto label_46e2a4;
        case 0x46e2a8u: goto label_46e2a8;
        case 0x46e2acu: goto label_46e2ac;
        case 0x46e2b0u: goto label_46e2b0;
        case 0x46e2b4u: goto label_46e2b4;
        case 0x46e2b8u: goto label_46e2b8;
        case 0x46e2bcu: goto label_46e2bc;
        case 0x46e2c0u: goto label_46e2c0;
        case 0x46e2c4u: goto label_46e2c4;
        case 0x46e2c8u: goto label_46e2c8;
        case 0x46e2ccu: goto label_46e2cc;
        case 0x46e2d0u: goto label_46e2d0;
        case 0x46e2d4u: goto label_46e2d4;
        case 0x46e2d8u: goto label_46e2d8;
        case 0x46e2dcu: goto label_46e2dc;
        case 0x46e2e0u: goto label_46e2e0;
        case 0x46e2e4u: goto label_46e2e4;
        case 0x46e2e8u: goto label_46e2e8;
        case 0x46e2ecu: goto label_46e2ec;
        case 0x46e2f0u: goto label_46e2f0;
        case 0x46e2f4u: goto label_46e2f4;
        case 0x46e2f8u: goto label_46e2f8;
        case 0x46e2fcu: goto label_46e2fc;
        case 0x46e300u: goto label_46e300;
        case 0x46e304u: goto label_46e304;
        case 0x46e308u: goto label_46e308;
        case 0x46e30cu: goto label_46e30c;
        case 0x46e310u: goto label_46e310;
        case 0x46e314u: goto label_46e314;
        case 0x46e318u: goto label_46e318;
        case 0x46e31cu: goto label_46e31c;
        case 0x46e320u: goto label_46e320;
        case 0x46e324u: goto label_46e324;
        case 0x46e328u: goto label_46e328;
        case 0x46e32cu: goto label_46e32c;
        case 0x46e330u: goto label_46e330;
        case 0x46e334u: goto label_46e334;
        case 0x46e338u: goto label_46e338;
        case 0x46e33cu: goto label_46e33c;
        case 0x46e340u: goto label_46e340;
        case 0x46e344u: goto label_46e344;
        case 0x46e348u: goto label_46e348;
        case 0x46e34cu: goto label_46e34c;
        case 0x46e350u: goto label_46e350;
        case 0x46e354u: goto label_46e354;
        case 0x46e358u: goto label_46e358;
        case 0x46e35cu: goto label_46e35c;
        default: break;
    }

    ctx->pc = 0x46dc20u;

label_46dc20:
    // 0x46dc20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x46dc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_46dc24:
    // 0x46dc24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46dc24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46dc28:
    // 0x46dc28: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x46dc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_46dc2c:
    // 0x46dc2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x46dc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_46dc30:
    // 0x46dc30: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x46dc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_46dc34:
    // 0x46dc34: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46dc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_46dc38:
    // 0x46dc38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46dc3c:
    // 0x46dc3c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x46dc3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46dc40:
    // 0x46dc40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46dc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46dc44:
    // 0x46dc44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46dc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46dc48:
    // 0x46dc48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x46dc48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46dc4c:
    // 0x46dc4c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x46dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_46dc50:
    // 0x46dc50: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x46dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_46dc54:
    // 0x46dc54: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x46dc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46dc58:
    // 0x46dc58: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x46dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46dc5c:
    // 0x46dc5c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x46dc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_46dc60:
    // 0x46dc60: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x46dc60u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_46dc64:
    // 0x46dc64: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x46dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_46dc68:
    // 0x46dc68: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x46dc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_46dc6c:
    // 0x46dc6c: 0x1062009e  beq         $v1, $v0, . + 4 + (0x9E << 2)
label_46dc70:
    if (ctx->pc == 0x46DC70u) {
        ctx->pc = 0x46DC70u;
            // 0x46dc70: 0x24900070  addiu       $s0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->pc = 0x46DC74u;
        goto label_46dc74;
    }
    ctx->pc = 0x46DC6Cu;
    {
        const bool branch_taken_0x46dc6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x46DC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46DC6Cu;
            // 0x46dc70: 0x24900070  addiu       $s0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46dc6c) {
            ctx->pc = 0x46DEE8u;
            goto label_46dee8;
        }
    }
    ctx->pc = 0x46DC74u;
label_46dc74:
    // 0x46dc74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x46dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46dc78:
    // 0x46dc78: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_46dc7c:
    if (ctx->pc == 0x46DC7Cu) {
        ctx->pc = 0x46DC7Cu;
            // 0x46dc7c: 0x111840  sll         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x46DC80u;
        goto label_46dc80;
    }
    ctx->pc = 0x46DC78u;
    {
        const bool branch_taken_0x46dc78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46dc78) {
            ctx->pc = 0x46DC7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46DC78u;
            // 0x46dc7c: 0x111840  sll         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46DC98u;
            goto label_46dc98;
        }
    }
    ctx->pc = 0x46DC80u;
label_46dc80:
    // 0x46dc80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x46dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46dc84:
    // 0x46dc84: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_46dc88:
    if (ctx->pc == 0x46DC88u) {
        ctx->pc = 0x46DC8Cu;
        goto label_46dc8c;
    }
    ctx->pc = 0x46DC84u;
    {
        const bool branch_taken_0x46dc84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46dc84) {
            ctx->pc = 0x46DC94u;
            goto label_46dc94;
        }
    }
    ctx->pc = 0x46DC8Cu;
label_46dc8c:
    // 0x46dc8c: 0x100001a8  b           . + 4 + (0x1A8 << 2)
label_46dc90:
    if (ctx->pc == 0x46DC90u) {
        ctx->pc = 0x46DC90u;
            // 0x46dc90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46DC94u;
        goto label_46dc94;
    }
    ctx->pc = 0x46DC8Cu;
    {
        const bool branch_taken_0x46dc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46DC8Cu;
            // 0x46dc90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46dc8c) {
            ctx->pc = 0x46E330u;
            goto label_46e330;
        }
    }
    ctx->pc = 0x46DC94u;
label_46dc94:
    // 0x46dc94: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x46dc94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_46dc98:
    // 0x46dc98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x46dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_46dc9c:
    // 0x46dc9c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x46dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_46dca0:
    // 0x46dca0: 0x24429764  addiu       $v0, $v0, -0x689C
    ctx->pc = 0x46dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940516));
label_46dca4:
    // 0x46dca4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x46dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_46dca8:
    // 0x46dca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46dcac:
    // 0x46dcac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46dcb0:
    // 0x46dcb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x46dcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_46dcb4:
    // 0x46dcb4: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
label_46dcb8:
    if (ctx->pc == 0x46DCB8u) {
        ctx->pc = 0x46DCB8u;
            // 0x46dcb8: 0x92630070  lbu         $v1, 0x70($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->pc = 0x46DCBCu;
        goto label_46dcbc;
    }
    ctx->pc = 0x46DCB4u;
    {
        const bool branch_taken_0x46dcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46dcb4) {
            ctx->pc = 0x46DCB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46DCB4u;
            // 0x46dcb8: 0x92630070  lbu         $v1, 0x70($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46DDF4u;
            goto label_46ddf4;
        }
    }
    ctx->pc = 0x46DCBCu;
label_46dcbc:
    // 0x46dcbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x46dcbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46dcc0:
    // 0x46dcc0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x46dcc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46dcc4:
    // 0x46dcc4: 0x92230070  lbu         $v1, 0x70($s1)
    ctx->pc = 0x46dcc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_46dcc8:
    // 0x46dcc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x46dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46dccc:
    // 0x46dccc: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_46dcd0:
    if (ctx->pc == 0x46DCD0u) {
        ctx->pc = 0x46DCD0u;
            // 0x46dcd0: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x46DCD4u;
        goto label_46dcd4;
    }
    ctx->pc = 0x46DCCCu;
    {
        const bool branch_taken_0x46dccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x46DCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46DCCCu;
            // 0x46dcd0: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46dccc) {
            ctx->pc = 0x46DD48u;
            goto label_46dd48;
        }
    }
    ctx->pc = 0x46DCD4u;
label_46dcd4:
    // 0x46dcd4: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x46dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46dcd8:
    // 0x46dcd8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x46dcd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46dcdc:
    // 0x46dcdc: 0x8c750004  lw          $s5, 0x4($v1)
    ctx->pc = 0x46dcdcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46dce0:
    // 0x46dce0: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x46dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_46dce4:
    // 0x46dce4: 0x2a080  sll         $s4, $v0, 2
    ctx->pc = 0x46dce4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46dce8:
    // 0x46dce8: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x46dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_46dcec:
    // 0x46dcec: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x46dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_46dcf0:
    // 0x46dcf0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46dcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46dcf4:
    // 0x46dcf4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46dcf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46dcf8:
    // 0x46dcf8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46dcf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46dcfc:
    // 0x46dcfc: 0x320f809  jalr        $t9
label_46dd00:
    if (ctx->pc == 0x46DD00u) {
        ctx->pc = 0x46DD00u;
            // 0x46dd00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46DD04u;
        goto label_46dd04;
    }
    ctx->pc = 0x46DCFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46DD04u);
        ctx->pc = 0x46DD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46DCFCu;
            // 0x46dd00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46DD04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46DD04u; }
            if (ctx->pc != 0x46DD04u) { return; }
        }
        }
    }
    ctx->pc = 0x46DD04u;
label_46dd04:
    // 0x46dd04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46dd08:
    // 0x46dd08: 0xa2a2007c  sb          $v0, 0x7C($s5)
    ctx->pc = 0x46dd08u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 124), (uint8_t)GPR_U32(ctx, 2));
label_46dd0c:
    // 0x46dd0c: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x46dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_46dd10:
    // 0x46dd10: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x46dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_46dd14:
    // 0x46dd14: 0xc123848  jal         func_48E120
label_46dd18:
    if (ctx->pc == 0x46DD18u) {
        ctx->pc = 0x46DD18u;
            // 0x46dd18: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46DD1Cu;
        goto label_46dd1c;
    }
    ctx->pc = 0x46DD14u;
    SET_GPR_U32(ctx, 31, 0x46DD1Cu);
    ctx->pc = 0x46DD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46DD14u;
            // 0x46dd18: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DD1Cu; }
        if (ctx->pc != 0x46DD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DD1Cu; }
        if (ctx->pc != 0x46DD1Cu) { return; }
    }
    ctx->pc = 0x46DD1Cu;
label_46dd1c:
    // 0x46dd1c: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x46dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_46dd20:
    // 0x46dd20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46dd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46dd24:
    // 0x46dd24: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x46dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_46dd28:
    // 0x46dd28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46dd2c:
    // 0x46dd2c: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46dd2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46dd30:
    // 0x46dd30: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46dd34:
    // 0x46dd34: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46dd38:
    // 0x46dd38: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46dd3c:
    // 0x46dd3c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x46dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_46dd40:
    // 0x46dd40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46dd44:
    // 0x46dd44: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x46dd44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_46dd48:
    // 0x46dd48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46dd4c:
    // 0x46dd4c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x46dd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_46dd50:
    // 0x46dd50: 0x26420024  addiu       $v0, $s2, 0x24
    ctx->pc = 0x46dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_46dd54:
    // 0x46dd54: 0x2a080  sll         $s4, $v0, 2
    ctx->pc = 0x46dd54u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46dd58:
    // 0x46dd58: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46dd5c:
    // 0x46dd5c: 0x8c550004  lw          $s5, 0x4($v0)
    ctx->pc = 0x46dd5cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46dd60:
    // 0x46dd60: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x46dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_46dd64:
    // 0x46dd64: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x46dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_46dd68:
    // 0x46dd68: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46dd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46dd6c:
    // 0x46dd6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46dd6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46dd70:
    // 0x46dd70: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46dd70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46dd74:
    // 0x46dd74: 0x320f809  jalr        $t9
label_46dd78:
    if (ctx->pc == 0x46DD78u) {
        ctx->pc = 0x46DD78u;
            // 0x46dd78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46DD7Cu;
        goto label_46dd7c;
    }
    ctx->pc = 0x46DD74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46DD7Cu);
        ctx->pc = 0x46DD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46DD74u;
            // 0x46dd78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46DD7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46DD7Cu; }
            if (ctx->pc != 0x46DD7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x46DD7Cu;
label_46dd7c:
    // 0x46dd7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46dd80:
    // 0x46dd80: 0xa2a2007c  sb          $v0, 0x7C($s5)
    ctx->pc = 0x46dd80u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 124), (uint8_t)GPR_U32(ctx, 2));
label_46dd84:
    // 0x46dd84: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x46dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_46dd88:
    // 0x46dd88: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x46dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_46dd8c:
    // 0x46dd8c: 0xc123848  jal         func_48E120
label_46dd90:
    if (ctx->pc == 0x46DD90u) {
        ctx->pc = 0x46DD90u;
            // 0x46dd90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46DD94u;
        goto label_46dd94;
    }
    ctx->pc = 0x46DD8Cu;
    SET_GPR_U32(ctx, 31, 0x46DD94u);
    ctx->pc = 0x46DD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46DD8Cu;
            // 0x46dd90: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DD94u; }
        if (ctx->pc != 0x46DD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DD94u; }
        if (ctx->pc != 0x46DD94u) { return; }
    }
    ctx->pc = 0x46DD94u;
label_46dd94:
    // 0x46dd94: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x46dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_46dd98:
    // 0x46dd98: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x46dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46dd9c:
    // 0x46dd9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46dda0:
    // 0x46dda0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x46dda0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_46dda4:
    // 0x46dda4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x46dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_46dda8:
    // 0x46dda8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46ddac:
    // 0x46ddac: 0xa4640046  sh          $a0, 0x46($v1)
    ctx->pc = 0x46ddacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 4));
label_46ddb0:
    // 0x46ddb0: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x46ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46ddb4:
    // 0x46ddb4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x46ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46ddb8:
    // 0x46ddb8: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x46ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_46ddbc:
    // 0x46ddbc: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x46ddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_46ddc0:
    // 0x46ddc0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46ddc4:
    // 0x46ddc4: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x46ddc4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
label_46ddc8:
    // 0x46ddc8: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x46ddc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
label_46ddcc:
    // 0x46ddcc: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x46ddccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_46ddd0:
    // 0x46ddd0: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x46ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_46ddd4:
    // 0x46ddd4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x46ddd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46ddd8:
    // 0x46ddd8: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_46dddc:
    if (ctx->pc == 0x46DDDCu) {
        ctx->pc = 0x46DDDCu;
            // 0x46dddc: 0x2631005c  addiu       $s1, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->pc = 0x46DDE0u;
        goto label_46dde0;
    }
    ctx->pc = 0x46DDD8u;
    {
        const bool branch_taken_0x46ddd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46DDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46DDD8u;
            // 0x46dddc: 0x2631005c  addiu       $s1, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ddd8) {
            ctx->pc = 0x46DCC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_46dcc4;
        }
    }
    ctx->pc = 0x46DDE0u;
label_46dde0:
    // 0x46dde0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x46dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_46dde4:
    // 0x46dde4: 0xc073234  jal         func_1CC8D0
label_46dde8:
    if (ctx->pc == 0x46DDE8u) {
        ctx->pc = 0x46DDE8u;
            // 0x46dde8: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x46DDECu;
        goto label_46ddec;
    }
    ctx->pc = 0x46DDE4u;
    SET_GPR_U32(ctx, 31, 0x46DDECu);
    ctx->pc = 0x46DDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46DDE4u;
            // 0x46dde8: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DDECu; }
        if (ctx->pc != 0x46DDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DDECu; }
        if (ctx->pc != 0x46DDECu) { return; }
    }
    ctx->pc = 0x46DDECu;
label_46ddec:
    // 0x46ddec: 0x10000150  b           . + 4 + (0x150 << 2)
label_46ddf0:
    if (ctx->pc == 0x46DDF0u) {
        ctx->pc = 0x46DDF0u;
            // 0x46ddf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46DDF4u;
        goto label_46ddf4;
    }
    ctx->pc = 0x46DDECu;
    {
        const bool branch_taken_0x46ddec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46DDECu;
            // 0x46ddf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ddec) {
            ctx->pc = 0x46E330u;
            goto label_46e330;
        }
    }
    ctx->pc = 0x46DDF4u;
label_46ddf4:
    // 0x46ddf4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x46ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_46ddf8:
    // 0x46ddf8: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_46ddfc:
    if (ctx->pc == 0x46DDFCu) {
        ctx->pc = 0x46DDFCu;
            // 0x46ddfc: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46DE00u;
        goto label_46de00;
    }
    ctx->pc = 0x46DDF8u;
    {
        const bool branch_taken_0x46ddf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46ddf8) {
            ctx->pc = 0x46DDFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46DDF8u;
            // 0x46ddfc: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46DE08u;
            goto label_46de08;
        }
    }
    ctx->pc = 0x46DE00u;
label_46de00:
    // 0x46de00: 0x1000014a  b           . + 4 + (0x14A << 2)
label_46de04:
    if (ctx->pc == 0x46DE04u) {
        ctx->pc = 0x46DE08u;
        goto label_46de08;
    }
    ctx->pc = 0x46DE00u;
    {
        const bool branch_taken_0x46de00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46de00) {
            ctx->pc = 0x46E32Cu;
            goto label_46e32c;
        }
    }
    ctx->pc = 0x46DE08u;
label_46de08:
    // 0x46de08: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46de08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46de0c:
    // 0x46de0c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x46de0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_46de10:
    // 0x46de10: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x46de10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_46de14:
    // 0x46de14: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x46de14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_46de18:
    // 0x46de18: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46de18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46de1c:
    // 0x46de1c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x46de1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46de20:
    // 0x46de20: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46de20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46de24:
    // 0x46de24: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x46de24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_46de28:
    // 0x46de28: 0x3a080  sll         $s4, $v1, 2
    ctx->pc = 0x46de28u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_46de2c:
    // 0x46de2c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46de30:
    // 0x46de30: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x46de30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_46de34:
    // 0x46de34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46de34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46de38:
    // 0x46de38: 0xc12512c  jal         func_4944B0
label_46de3c:
    if (ctx->pc == 0x46DE3Cu) {
        ctx->pc = 0x46DE3Cu;
            // 0x46de3c: 0x24a5f1c8  addiu       $a1, $a1, -0xE38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963656));
        ctx->pc = 0x46DE40u;
        goto label_46de40;
    }
    ctx->pc = 0x46DE38u;
    SET_GPR_U32(ctx, 31, 0x46DE40u);
    ctx->pc = 0x46DE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46DE38u;
            // 0x46de3c: 0x24a5f1c8  addiu       $a1, $a1, -0xE38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DE40u; }
        if (ctx->pc != 0x46DE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DE40u; }
        if (ctx->pc != 0x46DE40u) { return; }
    }
    ctx->pc = 0x46DE40u;
label_46de40:
    // 0x46de40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46de40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46de44:
    // 0x46de44: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46de44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46de48:
    // 0x46de48: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x46de48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46de4c:
    // 0x46de4c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x46de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_46de50:
    // 0x46de50: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x46de50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_46de54:
    // 0x46de54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46de54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46de58:
    // 0x46de58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46de58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46de5c:
    // 0x46de5c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46de5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46de60:
    // 0x46de60: 0x320f809  jalr        $t9
label_46de64:
    if (ctx->pc == 0x46DE64u) {
        ctx->pc = 0x46DE68u;
        goto label_46de68;
    }
    ctx->pc = 0x46DE60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46DE68u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46DE68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46DE68u; }
            if (ctx->pc != 0x46DE68u) { return; }
        }
        }
    }
    ctx->pc = 0x46DE68u;
label_46de68:
    // 0x46de68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46de68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46de6c:
    // 0x46de6c: 0xa242007c  sb          $v0, 0x7C($s2)
    ctx->pc = 0x46de6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 124), (uint8_t)GPR_U32(ctx, 2));
label_46de70:
    // 0x46de70: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x46de70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_46de74:
    // 0x46de74: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x46de74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_46de78:
    // 0x46de78: 0xc123848  jal         func_48E120
label_46de7c:
    if (ctx->pc == 0x46DE7Cu) {
        ctx->pc = 0x46DE7Cu;
            // 0x46de7c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46DE80u;
        goto label_46de80;
    }
    ctx->pc = 0x46DE78u;
    SET_GPR_U32(ctx, 31, 0x46DE80u);
    ctx->pc = 0x46DE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46DE78u;
            // 0x46de7c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DE80u; }
        if (ctx->pc != 0x46DE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DE80u; }
        if (ctx->pc != 0x46DE80u) { return; }
    }
    ctx->pc = 0x46DE80u;
label_46de80:
    // 0x46de80: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x46de80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_46de84:
    // 0x46de84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46de84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46de88:
    // 0x46de88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46de88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46de8c:
    // 0x46de8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46de8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46de90:
    // 0x46de90: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x46de90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_46de94:
    // 0x46de94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46de94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46de98:
    // 0x46de98: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46de98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46de9c:
    // 0x46de9c: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x46de9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46dea0:
    // 0x46dea0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x46dea0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46dea4:
    // 0x46dea4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46dea8:
    // 0x46dea8: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x46dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_46deac:
    // 0x46deac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x46deacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46deb0:
    // 0x46deb0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x46deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_46deb4:
    // 0x46deb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46deb8:
    // 0x46deb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46debc:
    // 0x46debc: 0xa4450046  sh          $a1, 0x46($v0)
    ctx->pc = 0x46debcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 5));
label_46dec0:
    // 0x46dec0: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x46dec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46dec4:
    // 0x46dec4: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x46dec4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46dec8:
    // 0x46dec8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46dec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46decc:
    // 0x46decc: 0xc12326c  jal         func_48C9B0
label_46ded0:
    if (ctx->pc == 0x46DED0u) {
        ctx->pc = 0x46DED0u;
            // 0x46ded0: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x46DED4u;
        goto label_46ded4;
    }
    ctx->pc = 0x46DECCu;
    SET_GPR_U32(ctx, 31, 0x46DED4u);
    ctx->pc = 0x46DED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46DECCu;
            // 0x46ded0: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DED4u; }
        if (ctx->pc != 0x46DED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DED4u; }
        if (ctx->pc != 0x46DED4u) { return; }
    }
    ctx->pc = 0x46DED4u;
label_46ded4:
    // 0x46ded4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x46ded4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46ded8:
    // 0x46ded8: 0xc11c710  jal         func_471C40
label_46dedc:
    if (ctx->pc == 0x46DEDCu) {
        ctx->pc = 0x46DEDCu;
            // 0x46dedc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46DEE0u;
        goto label_46dee0;
    }
    ctx->pc = 0x46DED8u;
    SET_GPR_U32(ctx, 31, 0x46DEE0u);
    ctx->pc = 0x46DEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46DED8u;
            // 0x46dedc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471C40u;
    if (runtime->hasFunction(0x471C40u)) {
        auto targetFn = runtime->lookupFunction(0x471C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DEE0u; }
        if (ctx->pc != 0x46DEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471C40_0x471c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DEE0u; }
        if (ctx->pc != 0x46DEE0u) { return; }
    }
    ctx->pc = 0x46DEE0u;
label_46dee0:
    // 0x46dee0: 0x10000112  b           . + 4 + (0x112 << 2)
label_46dee4:
    if (ctx->pc == 0x46DEE4u) {
        ctx->pc = 0x46DEE8u;
        goto label_46dee8;
    }
    ctx->pc = 0x46DEE0u;
    {
        const bool branch_taken_0x46dee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46dee0) {
            ctx->pc = 0x46E32Cu;
            goto label_46e32c;
        }
    }
    ctx->pc = 0x46DEE8u;
label_46dee8:
    // 0x46dee8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x46dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_46deec:
    // 0x46deec: 0x1222006b  beq         $s1, $v0, . + 4 + (0x6B << 2)
label_46def0:
    if (ctx->pc == 0x46DEF0u) {
        ctx->pc = 0x46DEF4u;
        goto label_46def4;
    }
    ctx->pc = 0x46DEECu;
    {
        const bool branch_taken_0x46deec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x46deec) {
            ctx->pc = 0x46E09Cu;
            goto label_46e09c;
        }
    }
    ctx->pc = 0x46DEF4u;
label_46def4:
    // 0x46def4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x46def4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46def8:
    // 0x46def8: 0x12240003  beq         $s1, $a0, . + 4 + (0x3 << 2)
label_46defc:
    if (ctx->pc == 0x46DEFCu) {
        ctx->pc = 0x46DF00u;
        goto label_46df00;
    }
    ctx->pc = 0x46DEF8u;
    {
        const bool branch_taken_0x46def8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x46def8) {
            ctx->pc = 0x46DF08u;
            goto label_46df08;
        }
    }
    ctx->pc = 0x46DF00u;
label_46df00:
    // 0x46df00: 0x100000cc  b           . + 4 + (0xCC << 2)
label_46df04:
    if (ctx->pc == 0x46DF04u) {
        ctx->pc = 0x46DF08u;
        goto label_46df08;
    }
    ctx->pc = 0x46DF00u;
    {
        const bool branch_taken_0x46df00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46df00) {
            ctx->pc = 0x46E234u;
            goto label_46e234;
        }
    }
    ctx->pc = 0x46DF08u;
label_46df08:
    // 0x46df08: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x46df08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_46df0c:
    // 0x46df0c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x46df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_46df10:
    // 0x46df10: 0x24429764  addiu       $v0, $v0, -0x689C
    ctx->pc = 0x46df10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940516));
label_46df14:
    // 0x46df14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46df14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46df18:
    // 0x46df18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46df18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46df1c:
    // 0x46df1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x46df1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_46df20:
    // 0x46df20: 0x504000c4  beql        $v0, $zero, . + 4 + (0xC4 << 2)
label_46df24:
    if (ctx->pc == 0x46DF24u) {
        ctx->pc = 0x46DF24u;
            // 0x46df24: 0x26660070  addiu       $a2, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->pc = 0x46DF28u;
        goto label_46df28;
    }
    ctx->pc = 0x46DF20u;
    {
        const bool branch_taken_0x46df20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46df20) {
            ctx->pc = 0x46DF24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46DF20u;
            // 0x46df24: 0x26660070  addiu       $a2, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46E234u;
            goto label_46e234;
        }
    }
    ctx->pc = 0x46DF28u;
label_46df28:
    // 0x46df28: 0x26220024  addiu       $v0, $s1, 0x24
    ctx->pc = 0x46df28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_46df2c:
    // 0x46df2c: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x46df2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
label_46df30:
    // 0x46df30: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x46df30u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46df34:
    // 0x46df34: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46df34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46df38:
    // 0x46df38: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x46df38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46df3c:
    // 0x46df3c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x46df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_46df40:
    // 0x46df40: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46df40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46df44:
    // 0x46df44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46df44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46df48:
    // 0x46df48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46df48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46df4c:
    // 0x46df4c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46df4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46df50:
    // 0x46df50: 0x320f809  jalr        $t9
label_46df54:
    if (ctx->pc == 0x46DF54u) {
        ctx->pc = 0x46DF54u;
            // 0x46df54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46DF58u;
        goto label_46df58;
    }
    ctx->pc = 0x46DF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46DF58u);
        ctx->pc = 0x46DF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46DF50u;
            // 0x46df54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46DF58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46DF58u; }
            if (ctx->pc != 0x46DF58u) { return; }
        }
        }
    }
    ctx->pc = 0x46DF58u;
label_46df58:
    // 0x46df58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46df58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46df5c:
    // 0x46df5c: 0xa242007c  sb          $v0, 0x7C($s2)
    ctx->pc = 0x46df5cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 124), (uint8_t)GPR_U32(ctx, 2));
label_46df60:
    // 0x46df60: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x46df60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_46df64:
    // 0x46df64: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46df64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46df68:
    // 0x46df68: 0xc123848  jal         func_48E120
label_46df6c:
    if (ctx->pc == 0x46DF6Cu) {
        ctx->pc = 0x46DF6Cu;
            // 0x46df6c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46DF70u;
        goto label_46df70;
    }
    ctx->pc = 0x46DF68u;
    SET_GPR_U32(ctx, 31, 0x46DF70u);
    ctx->pc = 0x46DF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46DF68u;
            // 0x46df6c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DF70u; }
        if (ctx->pc != 0x46DF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DF70u; }
        if (ctx->pc != 0x46DF70u) { return; }
    }
    ctx->pc = 0x46DF70u;
label_46df70:
    // 0x46df70: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x46df70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_46df74:
    // 0x46df74: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x46df74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46df78:
    // 0x46df78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46df78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46df7c:
    // 0x46df7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46df7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46df80:
    // 0x46df80: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x46df80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_46df84:
    // 0x46df84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46df84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46df88:
    // 0x46df88: 0xa4640046  sh          $a0, 0x46($v1)
    ctx->pc = 0x46df88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 4));
label_46df8c:
    // 0x46df8c: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x46df8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46df90:
    // 0x46df90: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x46df90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46df94:
    // 0x46df94: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x46df94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_46df98:
    // 0x46df98: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x46df98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_46df9c:
    // 0x46df9c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46dfa0:
    // 0x46dfa0: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x46dfa0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
label_46dfa4:
    // 0x46dfa4: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x46dfa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
label_46dfa8:
    // 0x46dfa8: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x46dfa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_46dfac:
    // 0x46dfac: 0xa2620070  sb          $v0, 0x70($s3)
    ctx->pc = 0x46dfacu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 2));
label_46dfb0:
    // 0x46dfb0: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x46dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46dfb4:
    // 0x46dfb4: 0x92620071  lbu         $v0, 0x71($s3)
    ctx->pc = 0x46dfb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 113)));
label_46dfb8:
    // 0x46dfb8: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x46dfb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46dfbc:
    // 0x46dfbc: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x46dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_46dfc0:
    // 0x46dfc0: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x46dfc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46dfc4:
    // 0x46dfc4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46dfc8:
    // 0x46dfc8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46dfcc:
    // 0x46dfcc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46dfd0:
    // 0x46dfd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46dfd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46dfd4:
    // 0x46dfd4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46dfd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46dfd8:
    // 0x46dfd8: 0x320f809  jalr        $t9
label_46dfdc:
    if (ctx->pc == 0x46DFDCu) {
        ctx->pc = 0x46DFDCu;
            // 0x46dfdc: 0x26720070  addiu       $s2, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->pc = 0x46DFE0u;
        goto label_46dfe0;
    }
    ctx->pc = 0x46DFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46DFE0u);
        ctx->pc = 0x46DFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46DFD8u;
            // 0x46dfdc: 0x26720070  addiu       $s2, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46DFE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46DFE0u; }
            if (ctx->pc != 0x46DFE0u) { return; }
        }
        }
    }
    ctx->pc = 0x46DFE0u;
label_46dfe0:
    // 0x46dfe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46dfe4:
    // 0x46dfe4: 0xa222007c  sb          $v0, 0x7C($s1)
    ctx->pc = 0x46dfe4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 2));
label_46dfe8:
    // 0x46dfe8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46dfec:
    // 0x46dfec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46dff0:
    // 0x46dff0: 0xc123848  jal         func_48E120
label_46dff4:
    if (ctx->pc == 0x46DFF4u) {
        ctx->pc = 0x46DFF4u;
            // 0x46dff4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46DFF8u;
        goto label_46dff8;
    }
    ctx->pc = 0x46DFF0u;
    SET_GPR_U32(ctx, 31, 0x46DFF8u);
    ctx->pc = 0x46DFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46DFF0u;
            // 0x46dff4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DFF8u; }
        if (ctx->pc != 0x46DFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46DFF8u; }
        if (ctx->pc != 0x46DFF8u) { return; }
    }
    ctx->pc = 0x46DFF8u;
label_46dff8:
    // 0x46dff8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46dffc:
    // 0x46dffc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46e000:
    // 0x46e000: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46e000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46e004:
    // 0x46e004: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46e004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e008:
    // 0x46e008: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46e008u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46e00c:
    // 0x46e00c: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46e010:
    // 0x46e010: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46e010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46e014:
    // 0x46e014: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46e014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46e018:
    // 0x46e018: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46e018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46e01c:
    // 0x46e01c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e020:
    // 0x46e020: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x46e020u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_46e024:
    // 0x46e024: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46e024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46e028:
    // 0x46e028: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x46e028u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46e02c:
    // 0x46e02c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46e030:
    // 0x46e030: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x46e030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_46e034:
    // 0x46e034: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46e034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46e038:
    // 0x46e038: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46e038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46e03c:
    // 0x46e03c: 0x320f809  jalr        $t9
label_46e040:
    if (ctx->pc == 0x46E040u) {
        ctx->pc = 0x46E040u;
            // 0x46e040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46E044u;
        goto label_46e044;
    }
    ctx->pc = 0x46E03Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46E044u);
        ctx->pc = 0x46E040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E03Cu;
            // 0x46e040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46E044u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46E044u; }
            if (ctx->pc != 0x46E044u) { return; }
        }
        }
    }
    ctx->pc = 0x46E044u;
label_46e044:
    // 0x46e044: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46e044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e048:
    // 0x46e048: 0xa202007c  sb          $v0, 0x7C($s0)
    ctx->pc = 0x46e048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
label_46e04c:
    // 0x46e04c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46e050:
    // 0x46e050: 0xc123848  jal         func_48E120
label_46e054:
    if (ctx->pc == 0x46E054u) {
        ctx->pc = 0x46E054u;
            // 0x46e054: 0x8c440090  lw          $a0, 0x90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
        ctx->pc = 0x46E058u;
        goto label_46e058;
    }
    ctx->pc = 0x46E050u;
    SET_GPR_U32(ctx, 31, 0x46E058u);
    ctx->pc = 0x46E054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E050u;
            // 0x46e054: 0x8c440090  lw          $a0, 0x90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E058u; }
        if (ctx->pc != 0x46E058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E058u; }
        if (ctx->pc != 0x46E058u) { return; }
    }
    ctx->pc = 0x46E058u;
label_46e058:
    // 0x46e058: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x46e058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46e05c:
    // 0x46e05c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x46e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_46e060:
    // 0x46e060: 0x344400a9  ori         $a0, $v0, 0xA9
    ctx->pc = 0x46e060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
label_46e064:
    // 0x46e064: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x46e064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46e068:
    // 0x46e068: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46e068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e06c:
    // 0x46e06c: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x46e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_46e070:
    // 0x46e070: 0xa4460046  sh          $a2, 0x46($v0)
    ctx->pc = 0x46e070u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 6));
label_46e074:
    // 0x46e074: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46e074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46e078:
    // 0x46e078: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46e078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46e07c:
    // 0x46e07c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46e080:
    // 0x46e080: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x46e080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_46e084:
    // 0x46e084: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x46e084u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_46e088:
    // 0x46e088: 0xa6400004  sh          $zero, 0x4($s2)
    ctx->pc = 0x46e088u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 0));
label_46e08c:
    // 0x46e08c: 0xc073234  jal         func_1CC8D0
label_46e090:
    if (ctx->pc == 0x46E090u) {
        ctx->pc = 0x46E090u;
            // 0x46e090: 0xa6430006  sh          $v1, 0x6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x46E094u;
        goto label_46e094;
    }
    ctx->pc = 0x46E08Cu;
    SET_GPR_U32(ctx, 31, 0x46E094u);
    ctx->pc = 0x46E090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E08Cu;
            // 0x46e090: 0xa6430006  sh          $v1, 0x6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E094u; }
        if (ctx->pc != 0x46E094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E094u; }
        if (ctx->pc != 0x46E094u) { return; }
    }
    ctx->pc = 0x46E094u;
label_46e094:
    // 0x46e094: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_46e098:
    if (ctx->pc == 0x46E098u) {
        ctx->pc = 0x46E098u;
            // 0x46e098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46E09Cu;
        goto label_46e09c;
    }
    ctx->pc = 0x46E094u;
    {
        const bool branch_taken_0x46e094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E094u;
            // 0x46e098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e094) {
            ctx->pc = 0x46E330u;
            goto label_46e330;
        }
    }
    ctx->pc = 0x46E09Cu;
label_46e09c:
    // 0x46e09c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x46e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_46e0a0:
    // 0x46e0a0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x46e0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_46e0a4:
    // 0x46e0a4: 0x24429764  addiu       $v0, $v0, -0x689C
    ctx->pc = 0x46e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940516));
label_46e0a8:
    // 0x46e0a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46e0ac:
    // 0x46e0ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e0b0:
    // 0x46e0b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x46e0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_46e0b4:
    // 0x46e0b4: 0x5040005f  beql        $v0, $zero, . + 4 + (0x5F << 2)
label_46e0b8:
    if (ctx->pc == 0x46E0B8u) {
        ctx->pc = 0x46E0B8u;
            // 0x46e0b8: 0x26660128  addiu       $a2, $s3, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 296));
        ctx->pc = 0x46E0BCu;
        goto label_46e0bc;
    }
    ctx->pc = 0x46E0B4u;
    {
        const bool branch_taken_0x46e0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e0b4) {
            ctx->pc = 0x46E0B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46E0B4u;
            // 0x46e0b8: 0x26660128  addiu       $a2, $s3, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 296));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46E234u;
            goto label_46e234;
        }
    }
    ctx->pc = 0x46E0BCu;
label_46e0bc:
    // 0x46e0bc: 0x26220024  addiu       $v0, $s1, 0x24
    ctx->pc = 0x46e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_46e0c0:
    // 0x46e0c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e0c4:
    // 0x46e0c4: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x46e0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_46e0c8:
    // 0x46e0c8: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x46e0c8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46e0cc:
    // 0x46e0cc: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46e0d0:
    // 0x46e0d0: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x46e0d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46e0d4:
    // 0x46e0d4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x46e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_46e0d8:
    // 0x46e0d8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46e0dc:
    // 0x46e0dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46e0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e0e0:
    // 0x46e0e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46e0e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46e0e4:
    // 0x46e0e4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46e0e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46e0e8:
    // 0x46e0e8: 0x320f809  jalr        $t9
label_46e0ec:
    if (ctx->pc == 0x46E0ECu) {
        ctx->pc = 0x46E0ECu;
            // 0x46e0ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46E0F0u;
        goto label_46e0f0;
    }
    ctx->pc = 0x46E0E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46E0F0u);
        ctx->pc = 0x46E0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E0E8u;
            // 0x46e0ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46E0F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46E0F0u; }
            if (ctx->pc != 0x46E0F0u) { return; }
        }
        }
    }
    ctx->pc = 0x46E0F0u;
label_46e0f0:
    // 0x46e0f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e0f4:
    // 0x46e0f4: 0xa242007c  sb          $v0, 0x7C($s2)
    ctx->pc = 0x46e0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 124), (uint8_t)GPR_U32(ctx, 2));
label_46e0f8:
    // 0x46e0f8: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x46e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_46e0fc:
    // 0x46e0fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x46e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_46e100:
    // 0x46e100: 0xc123848  jal         func_48E120
label_46e104:
    if (ctx->pc == 0x46E104u) {
        ctx->pc = 0x46E104u;
            // 0x46e104: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46E108u;
        goto label_46e108;
    }
    ctx->pc = 0x46E100u;
    SET_GPR_U32(ctx, 31, 0x46E108u);
    ctx->pc = 0x46E104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E100u;
            // 0x46e104: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E108u; }
        if (ctx->pc != 0x46E108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E108u; }
        if (ctx->pc != 0x46E108u) { return; }
    }
    ctx->pc = 0x46E108u;
label_46e108:
    // 0x46e108: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x46e108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_46e10c:
    // 0x46e10c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x46e10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46e110:
    // 0x46e110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46e110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e114:
    // 0x46e114: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46e114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e118:
    // 0x46e118: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x46e118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_46e11c:
    // 0x46e11c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46e120:
    // 0x46e120: 0xa4640046  sh          $a0, 0x46($v1)
    ctx->pc = 0x46e120u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 4));
label_46e124:
    // 0x46e124: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x46e124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46e128:
    // 0x46e128: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x46e128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46e12c:
    // 0x46e12c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x46e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_46e130:
    // 0x46e130: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x46e130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_46e134:
    // 0x46e134: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x46e134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_46e138:
    // 0x46e138: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x46e138u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
label_46e13c:
    // 0x46e13c: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x46e13cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
label_46e140:
    // 0x46e140: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x46e140u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_46e144:
    // 0x46e144: 0xa2620128  sb          $v0, 0x128($s3)
    ctx->pc = 0x46e144u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 296), (uint8_t)GPR_U32(ctx, 2));
label_46e148:
    // 0x46e148: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x46e148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46e14c:
    // 0x46e14c: 0x92620129  lbu         $v0, 0x129($s3)
    ctx->pc = 0x46e14cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 297)));
label_46e150:
    // 0x46e150: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x46e150u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46e154:
    // 0x46e154: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x46e154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_46e158:
    // 0x46e158: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x46e158u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46e15c:
    // 0x46e15c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46e160:
    // 0x46e160: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46e160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46e164:
    // 0x46e164: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46e164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e168:
    // 0x46e168: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46e168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46e16c:
    // 0x46e16c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46e16cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46e170:
    // 0x46e170: 0x320f809  jalr        $t9
label_46e174:
    if (ctx->pc == 0x46E174u) {
        ctx->pc = 0x46E174u;
            // 0x46e174: 0x26720128  addiu       $s2, $s3, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 296));
        ctx->pc = 0x46E178u;
        goto label_46e178;
    }
    ctx->pc = 0x46E170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46E178u);
        ctx->pc = 0x46E174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E170u;
            // 0x46e174: 0x26720128  addiu       $s2, $s3, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 296));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46E178u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46E178u; }
            if (ctx->pc != 0x46E178u) { return; }
        }
        }
    }
    ctx->pc = 0x46E178u;
label_46e178:
    // 0x46e178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46e178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e17c:
    // 0x46e17c: 0xa222007c  sb          $v0, 0x7C($s1)
    ctx->pc = 0x46e17cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 2));
label_46e180:
    // 0x46e180: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46e180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46e184:
    // 0x46e184: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46e184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46e188:
    // 0x46e188: 0xc123848  jal         func_48E120
label_46e18c:
    if (ctx->pc == 0x46E18Cu) {
        ctx->pc = 0x46E18Cu;
            // 0x46e18c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46E190u;
        goto label_46e190;
    }
    ctx->pc = 0x46E188u;
    SET_GPR_U32(ctx, 31, 0x46E190u);
    ctx->pc = 0x46E18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E188u;
            // 0x46e18c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E190u; }
        if (ctx->pc != 0x46E190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E190u; }
        if (ctx->pc != 0x46E190u) { return; }
    }
    ctx->pc = 0x46E190u;
label_46e190:
    // 0x46e190: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x46e190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46e194:
    // 0x46e194: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46e194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46e198:
    // 0x46e198: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46e198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46e19c:
    // 0x46e19c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e1a0:
    // 0x46e1a0: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46e1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46e1a4:
    // 0x46e1a4: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46e1a8:
    // 0x46e1a8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46e1ac:
    // 0x46e1ac: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46e1b0:
    // 0x46e1b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x46e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46e1b4:
    // 0x46e1b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e1b8:
    // 0x46e1b8: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x46e1b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_46e1bc:
    // 0x46e1bc: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46e1c0:
    // 0x46e1c0: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x46e1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46e1c4:
    // 0x46e1c4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46e1c8:
    // 0x46e1c8: 0x8c440098  lw          $a0, 0x98($v0)
    ctx->pc = 0x46e1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_46e1cc:
    // 0x46e1cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46e1ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46e1d0:
    // 0x46e1d0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46e1d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46e1d4:
    // 0x46e1d4: 0x320f809  jalr        $t9
label_46e1d8:
    if (ctx->pc == 0x46E1D8u) {
        ctx->pc = 0x46E1D8u;
            // 0x46e1d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46E1DCu;
        goto label_46e1dc;
    }
    ctx->pc = 0x46E1D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46E1DCu);
        ctx->pc = 0x46E1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E1D4u;
            // 0x46e1d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x46E1DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46E1DCu; }
            if (ctx->pc != 0x46E1DCu) { return; }
        }
        }
    }
    ctx->pc = 0x46E1DCu;
label_46e1dc:
    // 0x46e1dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e1e0:
    // 0x46e1e0: 0xa202007c  sb          $v0, 0x7C($s0)
    ctx->pc = 0x46e1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
label_46e1e4:
    // 0x46e1e4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x46e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46e1e8:
    // 0x46e1e8: 0xc123848  jal         func_48E120
label_46e1ec:
    if (ctx->pc == 0x46E1ECu) {
        ctx->pc = 0x46E1ECu;
            // 0x46e1ec: 0x8c440098  lw          $a0, 0x98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
        ctx->pc = 0x46E1F0u;
        goto label_46e1f0;
    }
    ctx->pc = 0x46E1E8u;
    SET_GPR_U32(ctx, 31, 0x46E1F0u);
    ctx->pc = 0x46E1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E1E8u;
            // 0x46e1ec: 0x8c440098  lw          $a0, 0x98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E1F0u; }
        if (ctx->pc != 0x46E1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E1F0u; }
        if (ctx->pc != 0x46E1F0u) { return; }
    }
    ctx->pc = 0x46E1F0u;
label_46e1f0:
    // 0x46e1f0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x46e1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_46e1f4:
    // 0x46e1f4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x46e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_46e1f8:
    // 0x46e1f8: 0x344400a9  ori         $a0, $v0, 0xA9
    ctx->pc = 0x46e1f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
label_46e1fc:
    // 0x46e1fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x46e1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46e200:
    // 0x46e200: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46e200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e204:
    // 0x46e204: 0x8ca20098  lw          $v0, 0x98($a1)
    ctx->pc = 0x46e204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 152)));
label_46e208:
    // 0x46e208: 0xa4460046  sh          $a2, 0x46($v0)
    ctx->pc = 0x46e208u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 6));
label_46e20c:
    // 0x46e20c: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46e210:
    // 0x46e210: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46e210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46e214:
    // 0x46e214: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46e214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46e218:
    // 0x46e218: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x46e218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_46e21c:
    // 0x46e21c: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x46e21cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_46e220:
    // 0x46e220: 0xa6400004  sh          $zero, 0x4($s2)
    ctx->pc = 0x46e220u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 0));
label_46e224:
    // 0x46e224: 0xc073234  jal         func_1CC8D0
label_46e228:
    if (ctx->pc == 0x46E228u) {
        ctx->pc = 0x46E228u;
            // 0x46e228: 0xa6430006  sh          $v1, 0x6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x46E22Cu;
        goto label_46e22c;
    }
    ctx->pc = 0x46E224u;
    SET_GPR_U32(ctx, 31, 0x46E22Cu);
    ctx->pc = 0x46E228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E224u;
            // 0x46e228: 0xa6430006  sh          $v1, 0x6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E22Cu; }
        if (ctx->pc != 0x46E22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E22Cu; }
        if (ctx->pc != 0x46E22Cu) { return; }
    }
    ctx->pc = 0x46E22Cu;
label_46e22c:
    // 0x46e22c: 0x10000040  b           . + 4 + (0x40 << 2)
label_46e230:
    if (ctx->pc == 0x46E230u) {
        ctx->pc = 0x46E230u;
            // 0x46e230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46E234u;
        goto label_46e234;
    }
    ctx->pc = 0x46E22Cu;
    {
        const bool branch_taken_0x46e22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46E230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E22Cu;
            // 0x46e230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e22c) {
            ctx->pc = 0x46E330u;
            goto label_46e330;
        }
    }
    ctx->pc = 0x46E234u;
label_46e234:
    // 0x46e234: 0x10c0003d  beqz        $a2, . + 4 + (0x3D << 2)
label_46e238:
    if (ctx->pc == 0x46E238u) {
        ctx->pc = 0x46E23Cu;
        goto label_46e23c;
    }
    ctx->pc = 0x46E234u;
    {
        const bool branch_taken_0x46e234 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e234) {
            ctx->pc = 0x46E32Cu;
            goto label_46e32c;
        }
    }
    ctx->pc = 0x46E23Cu;
label_46e23c:
    // 0x46e23c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x46e23cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_46e240:
    // 0x46e240: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x46e240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_46e244:
    // 0x46e244: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_46e248:
    if (ctx->pc == 0x46E248u) {
        ctx->pc = 0x46E248u;
            // 0x46e248: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x46E24Cu;
        goto label_46e24c;
    }
    ctx->pc = 0x46E244u;
    {
        const bool branch_taken_0x46e244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46e244) {
            ctx->pc = 0x46E248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x46E244u;
            // 0x46e248: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46E254u;
            goto label_46e254;
        }
    }
    ctx->pc = 0x46E24Cu;
label_46e24c:
    // 0x46e24c: 0x10000037  b           . + 4 + (0x37 << 2)
label_46e250:
    if (ctx->pc == 0x46E250u) {
        ctx->pc = 0x46E254u;
        goto label_46e254;
    }
    ctx->pc = 0x46E24Cu;
    {
        const bool branch_taken_0x46e24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e24c) {
            ctx->pc = 0x46E32Cu;
            goto label_46e32c;
        }
    }
    ctx->pc = 0x46E254u;
label_46e254:
    // 0x46e254: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x46e254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_46e258:
    // 0x46e258: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x46e258u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_46e25c:
    // 0x46e25c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x46e25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_46e260:
    // 0x46e260: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x46e260u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_46e264:
    // 0x46e264: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46e264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46e268:
    // 0x46e268: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x46e268u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46e26c:
    // 0x46e26c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46e270:
    // 0x46e270: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x46e270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_46e274:
    // 0x46e274: 0x3a080  sll         $s4, $v1, 2
    ctx->pc = 0x46e274u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_46e278:
    // 0x46e278: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46e278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46e27c:
    // 0x46e27c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x46e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_46e280:
    // 0x46e280: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46e280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e284:
    // 0x46e284: 0xc12512c  jal         func_4944B0
label_46e288:
    if (ctx->pc == 0x46E288u) {
        ctx->pc = 0x46E288u;
            // 0x46e288: 0x24a5f1c0  addiu       $a1, $a1, -0xE40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963648));
        ctx->pc = 0x46E28Cu;
        goto label_46e28c;
    }
    ctx->pc = 0x46E284u;
    SET_GPR_U32(ctx, 31, 0x46E28Cu);
    ctx->pc = 0x46E288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E284u;
            // 0x46e288: 0x24a5f1c0  addiu       $a1, $a1, -0xE40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4944B0u;
    if (runtime->hasFunction(0x4944B0u)) {
        auto targetFn = runtime->lookupFunction(0x4944B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E28Cu; }
        if (ctx->pc != 0x46E28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004944B0_0x4944b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E28Cu; }
        if (ctx->pc != 0x46E28Cu) { return; }
    }
    ctx->pc = 0x46E28Cu;
label_46e28c:
    // 0x46e28c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46e28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46e290:
    // 0x46e290: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x46e290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46e294:
    // 0x46e294: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x46e294u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_46e298:
    // 0x46e298: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x46e298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_46e29c:
    // 0x46e29c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x46e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_46e2a0:
    // 0x46e2a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46e2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e2a4:
    // 0x46e2a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46e2a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46e2a8:
    // 0x46e2a8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x46e2a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_46e2ac:
    // 0x46e2ac: 0x320f809  jalr        $t9
label_46e2b0:
    if (ctx->pc == 0x46E2B0u) {
        ctx->pc = 0x46E2B4u;
        goto label_46e2b4;
    }
    ctx->pc = 0x46E2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46E2B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x46E2B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x46E2B4u; }
            if (ctx->pc != 0x46E2B4u) { return; }
        }
        }
    }
    ctx->pc = 0x46E2B4u;
label_46e2b4:
    // 0x46e2b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e2b8:
    // 0x46e2b8: 0xa242007c  sb          $v0, 0x7C($s2)
    ctx->pc = 0x46e2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 124), (uint8_t)GPR_U32(ctx, 2));
label_46e2bc:
    // 0x46e2bc: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x46e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_46e2c0:
    // 0x46e2c0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x46e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_46e2c4:
    // 0x46e2c4: 0xc123848  jal         func_48E120
label_46e2c8:
    if (ctx->pc == 0x46E2C8u) {
        ctx->pc = 0x46E2C8u;
            // 0x46e2c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x46E2CCu;
        goto label_46e2cc;
    }
    ctx->pc = 0x46E2C4u;
    SET_GPR_U32(ctx, 31, 0x46E2CCu);
    ctx->pc = 0x46E2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E2C4u;
            // 0x46e2c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E120u;
    if (runtime->hasFunction(0x48E120u)) {
        auto targetFn = runtime->lookupFunction(0x48E120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E2CCu; }
        if (ctx->pc != 0x46E2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E120_0x48e120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E2CCu; }
        if (ctx->pc != 0x46E2CCu) { return; }
    }
    ctx->pc = 0x46E2CCu;
label_46e2cc:
    // 0x46e2cc: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x46e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_46e2d0:
    // 0x46e2d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46e2d4:
    // 0x46e2d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46e2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46e2d8:
    // 0x46e2d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46e2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e2dc:
    // 0x46e2dc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x46e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_46e2e0:
    // 0x46e2e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e2e4:
    // 0x46e2e4: 0xa4430046  sh          $v1, 0x46($v0)
    ctx->pc = 0x46e2e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 3));
label_46e2e8:
    // 0x46e2e8: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x46e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46e2ec:
    // 0x46e2ec: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x46e2ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46e2f0:
    // 0x46e2f0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46e2f4:
    // 0x46e2f4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x46e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_46e2f8:
    // 0x46e2f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x46e2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46e2fc:
    // 0x46e2fc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x46e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_46e300:
    // 0x46e300: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46e300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_46e304:
    // 0x46e304: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46e304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46e308:
    // 0x46e308: 0xa4450046  sh          $a1, 0x46($v0)
    ctx->pc = 0x46e308u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 5));
label_46e30c:
    // 0x46e30c: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x46e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_46e310:
    // 0x46e310: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x46e310u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_46e314:
    // 0x46e314: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46e314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_46e318:
    // 0x46e318: 0xc12326c  jal         func_48C9B0
label_46e31c:
    if (ctx->pc == 0x46E31Cu) {
        ctx->pc = 0x46E31Cu;
            // 0x46e31c: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x46E320u;
        goto label_46e320;
    }
    ctx->pc = 0x46E318u;
    SET_GPR_U32(ctx, 31, 0x46E320u);
    ctx->pc = 0x46E31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E318u;
            // 0x46e31c: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C9B0u;
    if (runtime->hasFunction(0x48C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x48C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E320u; }
        if (ctx->pc != 0x46E320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C9B0_0x48c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E320u; }
        if (ctx->pc != 0x46E320u) { return; }
    }
    ctx->pc = 0x46E320u;
label_46e320:
    // 0x46e320: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x46e320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46e324:
    // 0x46e324: 0xc11c710  jal         func_471C40
label_46e328:
    if (ctx->pc == 0x46E328u) {
        ctx->pc = 0x46E328u;
            // 0x46e328: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x46E32Cu;
        goto label_46e32c;
    }
    ctx->pc = 0x46E324u;
    SET_GPR_U32(ctx, 31, 0x46E32Cu);
    ctx->pc = 0x46E328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46E324u;
            // 0x46e328: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x471C40u;
    if (runtime->hasFunction(0x471C40u)) {
        auto targetFn = runtime->lookupFunction(0x471C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E32Cu; }
        if (ctx->pc != 0x46E32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00471C40_0x471c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x46E32Cu; }
        if (ctx->pc != 0x46E32Cu) { return; }
    }
    ctx->pc = 0x46E32Cu;
label_46e32c:
    // 0x46e32c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46e32cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46e330:
    // 0x46e330: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x46e330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_46e334:
    // 0x46e334: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x46e334u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46e338:
    // 0x46e338: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x46e338u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46e33c:
    // 0x46e33c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46e33cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46e340:
    // 0x46e340: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46e340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46e344:
    // 0x46e344: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46e344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46e348:
    // 0x46e348: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46e348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46e34c:
    // 0x46e34c: 0x3e00008  jr          $ra
label_46e350:
    if (ctx->pc == 0x46E350u) {
        ctx->pc = 0x46E350u;
            // 0x46e350: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x46E354u;
        goto label_46e354;
    }
    ctx->pc = 0x46E34Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46E350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46E34Cu;
            // 0x46e350: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46E354u;
label_46e354:
    // 0x46e354: 0x0  nop
    ctx->pc = 0x46e354u;
    // NOP
label_46e358:
    // 0x46e358: 0x0  nop
    ctx->pc = 0x46e358u;
    // NOP
label_46e35c:
    // 0x46e35c: 0x0  nop
    ctx->pc = 0x46e35cu;
    // NOP
}
