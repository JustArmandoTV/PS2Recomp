#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053DC60
// Address: 0x53dc60 - 0x53e2b0
void sub_0053DC60_0x53dc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053DC60_0x53dc60");
#endif

    switch (ctx->pc) {
        case 0x53dc60u: goto label_53dc60;
        case 0x53dc64u: goto label_53dc64;
        case 0x53dc68u: goto label_53dc68;
        case 0x53dc6cu: goto label_53dc6c;
        case 0x53dc70u: goto label_53dc70;
        case 0x53dc74u: goto label_53dc74;
        case 0x53dc78u: goto label_53dc78;
        case 0x53dc7cu: goto label_53dc7c;
        case 0x53dc80u: goto label_53dc80;
        case 0x53dc84u: goto label_53dc84;
        case 0x53dc88u: goto label_53dc88;
        case 0x53dc8cu: goto label_53dc8c;
        case 0x53dc90u: goto label_53dc90;
        case 0x53dc94u: goto label_53dc94;
        case 0x53dc98u: goto label_53dc98;
        case 0x53dc9cu: goto label_53dc9c;
        case 0x53dca0u: goto label_53dca0;
        case 0x53dca4u: goto label_53dca4;
        case 0x53dca8u: goto label_53dca8;
        case 0x53dcacu: goto label_53dcac;
        case 0x53dcb0u: goto label_53dcb0;
        case 0x53dcb4u: goto label_53dcb4;
        case 0x53dcb8u: goto label_53dcb8;
        case 0x53dcbcu: goto label_53dcbc;
        case 0x53dcc0u: goto label_53dcc0;
        case 0x53dcc4u: goto label_53dcc4;
        case 0x53dcc8u: goto label_53dcc8;
        case 0x53dcccu: goto label_53dccc;
        case 0x53dcd0u: goto label_53dcd0;
        case 0x53dcd4u: goto label_53dcd4;
        case 0x53dcd8u: goto label_53dcd8;
        case 0x53dcdcu: goto label_53dcdc;
        case 0x53dce0u: goto label_53dce0;
        case 0x53dce4u: goto label_53dce4;
        case 0x53dce8u: goto label_53dce8;
        case 0x53dcecu: goto label_53dcec;
        case 0x53dcf0u: goto label_53dcf0;
        case 0x53dcf4u: goto label_53dcf4;
        case 0x53dcf8u: goto label_53dcf8;
        case 0x53dcfcu: goto label_53dcfc;
        case 0x53dd00u: goto label_53dd00;
        case 0x53dd04u: goto label_53dd04;
        case 0x53dd08u: goto label_53dd08;
        case 0x53dd0cu: goto label_53dd0c;
        case 0x53dd10u: goto label_53dd10;
        case 0x53dd14u: goto label_53dd14;
        case 0x53dd18u: goto label_53dd18;
        case 0x53dd1cu: goto label_53dd1c;
        case 0x53dd20u: goto label_53dd20;
        case 0x53dd24u: goto label_53dd24;
        case 0x53dd28u: goto label_53dd28;
        case 0x53dd2cu: goto label_53dd2c;
        case 0x53dd30u: goto label_53dd30;
        case 0x53dd34u: goto label_53dd34;
        case 0x53dd38u: goto label_53dd38;
        case 0x53dd3cu: goto label_53dd3c;
        case 0x53dd40u: goto label_53dd40;
        case 0x53dd44u: goto label_53dd44;
        case 0x53dd48u: goto label_53dd48;
        case 0x53dd4cu: goto label_53dd4c;
        case 0x53dd50u: goto label_53dd50;
        case 0x53dd54u: goto label_53dd54;
        case 0x53dd58u: goto label_53dd58;
        case 0x53dd5cu: goto label_53dd5c;
        case 0x53dd60u: goto label_53dd60;
        case 0x53dd64u: goto label_53dd64;
        case 0x53dd68u: goto label_53dd68;
        case 0x53dd6cu: goto label_53dd6c;
        case 0x53dd70u: goto label_53dd70;
        case 0x53dd74u: goto label_53dd74;
        case 0x53dd78u: goto label_53dd78;
        case 0x53dd7cu: goto label_53dd7c;
        case 0x53dd80u: goto label_53dd80;
        case 0x53dd84u: goto label_53dd84;
        case 0x53dd88u: goto label_53dd88;
        case 0x53dd8cu: goto label_53dd8c;
        case 0x53dd90u: goto label_53dd90;
        case 0x53dd94u: goto label_53dd94;
        case 0x53dd98u: goto label_53dd98;
        case 0x53dd9cu: goto label_53dd9c;
        case 0x53dda0u: goto label_53dda0;
        case 0x53dda4u: goto label_53dda4;
        case 0x53dda8u: goto label_53dda8;
        case 0x53ddacu: goto label_53ddac;
        case 0x53ddb0u: goto label_53ddb0;
        case 0x53ddb4u: goto label_53ddb4;
        case 0x53ddb8u: goto label_53ddb8;
        case 0x53ddbcu: goto label_53ddbc;
        case 0x53ddc0u: goto label_53ddc0;
        case 0x53ddc4u: goto label_53ddc4;
        case 0x53ddc8u: goto label_53ddc8;
        case 0x53ddccu: goto label_53ddcc;
        case 0x53ddd0u: goto label_53ddd0;
        case 0x53ddd4u: goto label_53ddd4;
        case 0x53ddd8u: goto label_53ddd8;
        case 0x53dddcu: goto label_53dddc;
        case 0x53dde0u: goto label_53dde0;
        case 0x53dde4u: goto label_53dde4;
        case 0x53dde8u: goto label_53dde8;
        case 0x53ddecu: goto label_53ddec;
        case 0x53ddf0u: goto label_53ddf0;
        case 0x53ddf4u: goto label_53ddf4;
        case 0x53ddf8u: goto label_53ddf8;
        case 0x53ddfcu: goto label_53ddfc;
        case 0x53de00u: goto label_53de00;
        case 0x53de04u: goto label_53de04;
        case 0x53de08u: goto label_53de08;
        case 0x53de0cu: goto label_53de0c;
        case 0x53de10u: goto label_53de10;
        case 0x53de14u: goto label_53de14;
        case 0x53de18u: goto label_53de18;
        case 0x53de1cu: goto label_53de1c;
        case 0x53de20u: goto label_53de20;
        case 0x53de24u: goto label_53de24;
        case 0x53de28u: goto label_53de28;
        case 0x53de2cu: goto label_53de2c;
        case 0x53de30u: goto label_53de30;
        case 0x53de34u: goto label_53de34;
        case 0x53de38u: goto label_53de38;
        case 0x53de3cu: goto label_53de3c;
        case 0x53de40u: goto label_53de40;
        case 0x53de44u: goto label_53de44;
        case 0x53de48u: goto label_53de48;
        case 0x53de4cu: goto label_53de4c;
        case 0x53de50u: goto label_53de50;
        case 0x53de54u: goto label_53de54;
        case 0x53de58u: goto label_53de58;
        case 0x53de5cu: goto label_53de5c;
        case 0x53de60u: goto label_53de60;
        case 0x53de64u: goto label_53de64;
        case 0x53de68u: goto label_53de68;
        case 0x53de6cu: goto label_53de6c;
        case 0x53de70u: goto label_53de70;
        case 0x53de74u: goto label_53de74;
        case 0x53de78u: goto label_53de78;
        case 0x53de7cu: goto label_53de7c;
        case 0x53de80u: goto label_53de80;
        case 0x53de84u: goto label_53de84;
        case 0x53de88u: goto label_53de88;
        case 0x53de8cu: goto label_53de8c;
        case 0x53de90u: goto label_53de90;
        case 0x53de94u: goto label_53de94;
        case 0x53de98u: goto label_53de98;
        case 0x53de9cu: goto label_53de9c;
        case 0x53dea0u: goto label_53dea0;
        case 0x53dea4u: goto label_53dea4;
        case 0x53dea8u: goto label_53dea8;
        case 0x53deacu: goto label_53deac;
        case 0x53deb0u: goto label_53deb0;
        case 0x53deb4u: goto label_53deb4;
        case 0x53deb8u: goto label_53deb8;
        case 0x53debcu: goto label_53debc;
        case 0x53dec0u: goto label_53dec0;
        case 0x53dec4u: goto label_53dec4;
        case 0x53dec8u: goto label_53dec8;
        case 0x53deccu: goto label_53decc;
        case 0x53ded0u: goto label_53ded0;
        case 0x53ded4u: goto label_53ded4;
        case 0x53ded8u: goto label_53ded8;
        case 0x53dedcu: goto label_53dedc;
        case 0x53dee0u: goto label_53dee0;
        case 0x53dee4u: goto label_53dee4;
        case 0x53dee8u: goto label_53dee8;
        case 0x53deecu: goto label_53deec;
        case 0x53def0u: goto label_53def0;
        case 0x53def4u: goto label_53def4;
        case 0x53def8u: goto label_53def8;
        case 0x53defcu: goto label_53defc;
        case 0x53df00u: goto label_53df00;
        case 0x53df04u: goto label_53df04;
        case 0x53df08u: goto label_53df08;
        case 0x53df0cu: goto label_53df0c;
        case 0x53df10u: goto label_53df10;
        case 0x53df14u: goto label_53df14;
        case 0x53df18u: goto label_53df18;
        case 0x53df1cu: goto label_53df1c;
        case 0x53df20u: goto label_53df20;
        case 0x53df24u: goto label_53df24;
        case 0x53df28u: goto label_53df28;
        case 0x53df2cu: goto label_53df2c;
        case 0x53df30u: goto label_53df30;
        case 0x53df34u: goto label_53df34;
        case 0x53df38u: goto label_53df38;
        case 0x53df3cu: goto label_53df3c;
        case 0x53df40u: goto label_53df40;
        case 0x53df44u: goto label_53df44;
        case 0x53df48u: goto label_53df48;
        case 0x53df4cu: goto label_53df4c;
        case 0x53df50u: goto label_53df50;
        case 0x53df54u: goto label_53df54;
        case 0x53df58u: goto label_53df58;
        case 0x53df5cu: goto label_53df5c;
        case 0x53df60u: goto label_53df60;
        case 0x53df64u: goto label_53df64;
        case 0x53df68u: goto label_53df68;
        case 0x53df6cu: goto label_53df6c;
        case 0x53df70u: goto label_53df70;
        case 0x53df74u: goto label_53df74;
        case 0x53df78u: goto label_53df78;
        case 0x53df7cu: goto label_53df7c;
        case 0x53df80u: goto label_53df80;
        case 0x53df84u: goto label_53df84;
        case 0x53df88u: goto label_53df88;
        case 0x53df8cu: goto label_53df8c;
        case 0x53df90u: goto label_53df90;
        case 0x53df94u: goto label_53df94;
        case 0x53df98u: goto label_53df98;
        case 0x53df9cu: goto label_53df9c;
        case 0x53dfa0u: goto label_53dfa0;
        case 0x53dfa4u: goto label_53dfa4;
        case 0x53dfa8u: goto label_53dfa8;
        case 0x53dfacu: goto label_53dfac;
        case 0x53dfb0u: goto label_53dfb0;
        case 0x53dfb4u: goto label_53dfb4;
        case 0x53dfb8u: goto label_53dfb8;
        case 0x53dfbcu: goto label_53dfbc;
        case 0x53dfc0u: goto label_53dfc0;
        case 0x53dfc4u: goto label_53dfc4;
        case 0x53dfc8u: goto label_53dfc8;
        case 0x53dfccu: goto label_53dfcc;
        case 0x53dfd0u: goto label_53dfd0;
        case 0x53dfd4u: goto label_53dfd4;
        case 0x53dfd8u: goto label_53dfd8;
        case 0x53dfdcu: goto label_53dfdc;
        case 0x53dfe0u: goto label_53dfe0;
        case 0x53dfe4u: goto label_53dfe4;
        case 0x53dfe8u: goto label_53dfe8;
        case 0x53dfecu: goto label_53dfec;
        case 0x53dff0u: goto label_53dff0;
        case 0x53dff4u: goto label_53dff4;
        case 0x53dff8u: goto label_53dff8;
        case 0x53dffcu: goto label_53dffc;
        case 0x53e000u: goto label_53e000;
        case 0x53e004u: goto label_53e004;
        case 0x53e008u: goto label_53e008;
        case 0x53e00cu: goto label_53e00c;
        case 0x53e010u: goto label_53e010;
        case 0x53e014u: goto label_53e014;
        case 0x53e018u: goto label_53e018;
        case 0x53e01cu: goto label_53e01c;
        case 0x53e020u: goto label_53e020;
        case 0x53e024u: goto label_53e024;
        case 0x53e028u: goto label_53e028;
        case 0x53e02cu: goto label_53e02c;
        case 0x53e030u: goto label_53e030;
        case 0x53e034u: goto label_53e034;
        case 0x53e038u: goto label_53e038;
        case 0x53e03cu: goto label_53e03c;
        case 0x53e040u: goto label_53e040;
        case 0x53e044u: goto label_53e044;
        case 0x53e048u: goto label_53e048;
        case 0x53e04cu: goto label_53e04c;
        case 0x53e050u: goto label_53e050;
        case 0x53e054u: goto label_53e054;
        case 0x53e058u: goto label_53e058;
        case 0x53e05cu: goto label_53e05c;
        case 0x53e060u: goto label_53e060;
        case 0x53e064u: goto label_53e064;
        case 0x53e068u: goto label_53e068;
        case 0x53e06cu: goto label_53e06c;
        case 0x53e070u: goto label_53e070;
        case 0x53e074u: goto label_53e074;
        case 0x53e078u: goto label_53e078;
        case 0x53e07cu: goto label_53e07c;
        case 0x53e080u: goto label_53e080;
        case 0x53e084u: goto label_53e084;
        case 0x53e088u: goto label_53e088;
        case 0x53e08cu: goto label_53e08c;
        case 0x53e090u: goto label_53e090;
        case 0x53e094u: goto label_53e094;
        case 0x53e098u: goto label_53e098;
        case 0x53e09cu: goto label_53e09c;
        case 0x53e0a0u: goto label_53e0a0;
        case 0x53e0a4u: goto label_53e0a4;
        case 0x53e0a8u: goto label_53e0a8;
        case 0x53e0acu: goto label_53e0ac;
        case 0x53e0b0u: goto label_53e0b0;
        case 0x53e0b4u: goto label_53e0b4;
        case 0x53e0b8u: goto label_53e0b8;
        case 0x53e0bcu: goto label_53e0bc;
        case 0x53e0c0u: goto label_53e0c0;
        case 0x53e0c4u: goto label_53e0c4;
        case 0x53e0c8u: goto label_53e0c8;
        case 0x53e0ccu: goto label_53e0cc;
        case 0x53e0d0u: goto label_53e0d0;
        case 0x53e0d4u: goto label_53e0d4;
        case 0x53e0d8u: goto label_53e0d8;
        case 0x53e0dcu: goto label_53e0dc;
        case 0x53e0e0u: goto label_53e0e0;
        case 0x53e0e4u: goto label_53e0e4;
        case 0x53e0e8u: goto label_53e0e8;
        case 0x53e0ecu: goto label_53e0ec;
        case 0x53e0f0u: goto label_53e0f0;
        case 0x53e0f4u: goto label_53e0f4;
        case 0x53e0f8u: goto label_53e0f8;
        case 0x53e0fcu: goto label_53e0fc;
        case 0x53e100u: goto label_53e100;
        case 0x53e104u: goto label_53e104;
        case 0x53e108u: goto label_53e108;
        case 0x53e10cu: goto label_53e10c;
        case 0x53e110u: goto label_53e110;
        case 0x53e114u: goto label_53e114;
        case 0x53e118u: goto label_53e118;
        case 0x53e11cu: goto label_53e11c;
        case 0x53e120u: goto label_53e120;
        case 0x53e124u: goto label_53e124;
        case 0x53e128u: goto label_53e128;
        case 0x53e12cu: goto label_53e12c;
        case 0x53e130u: goto label_53e130;
        case 0x53e134u: goto label_53e134;
        case 0x53e138u: goto label_53e138;
        case 0x53e13cu: goto label_53e13c;
        case 0x53e140u: goto label_53e140;
        case 0x53e144u: goto label_53e144;
        case 0x53e148u: goto label_53e148;
        case 0x53e14cu: goto label_53e14c;
        case 0x53e150u: goto label_53e150;
        case 0x53e154u: goto label_53e154;
        case 0x53e158u: goto label_53e158;
        case 0x53e15cu: goto label_53e15c;
        case 0x53e160u: goto label_53e160;
        case 0x53e164u: goto label_53e164;
        case 0x53e168u: goto label_53e168;
        case 0x53e16cu: goto label_53e16c;
        case 0x53e170u: goto label_53e170;
        case 0x53e174u: goto label_53e174;
        case 0x53e178u: goto label_53e178;
        case 0x53e17cu: goto label_53e17c;
        case 0x53e180u: goto label_53e180;
        case 0x53e184u: goto label_53e184;
        case 0x53e188u: goto label_53e188;
        case 0x53e18cu: goto label_53e18c;
        case 0x53e190u: goto label_53e190;
        case 0x53e194u: goto label_53e194;
        case 0x53e198u: goto label_53e198;
        case 0x53e19cu: goto label_53e19c;
        case 0x53e1a0u: goto label_53e1a0;
        case 0x53e1a4u: goto label_53e1a4;
        case 0x53e1a8u: goto label_53e1a8;
        case 0x53e1acu: goto label_53e1ac;
        case 0x53e1b0u: goto label_53e1b0;
        case 0x53e1b4u: goto label_53e1b4;
        case 0x53e1b8u: goto label_53e1b8;
        case 0x53e1bcu: goto label_53e1bc;
        case 0x53e1c0u: goto label_53e1c0;
        case 0x53e1c4u: goto label_53e1c4;
        case 0x53e1c8u: goto label_53e1c8;
        case 0x53e1ccu: goto label_53e1cc;
        case 0x53e1d0u: goto label_53e1d0;
        case 0x53e1d4u: goto label_53e1d4;
        case 0x53e1d8u: goto label_53e1d8;
        case 0x53e1dcu: goto label_53e1dc;
        case 0x53e1e0u: goto label_53e1e0;
        case 0x53e1e4u: goto label_53e1e4;
        case 0x53e1e8u: goto label_53e1e8;
        case 0x53e1ecu: goto label_53e1ec;
        case 0x53e1f0u: goto label_53e1f0;
        case 0x53e1f4u: goto label_53e1f4;
        case 0x53e1f8u: goto label_53e1f8;
        case 0x53e1fcu: goto label_53e1fc;
        case 0x53e200u: goto label_53e200;
        case 0x53e204u: goto label_53e204;
        case 0x53e208u: goto label_53e208;
        case 0x53e20cu: goto label_53e20c;
        case 0x53e210u: goto label_53e210;
        case 0x53e214u: goto label_53e214;
        case 0x53e218u: goto label_53e218;
        case 0x53e21cu: goto label_53e21c;
        case 0x53e220u: goto label_53e220;
        case 0x53e224u: goto label_53e224;
        case 0x53e228u: goto label_53e228;
        case 0x53e22cu: goto label_53e22c;
        case 0x53e230u: goto label_53e230;
        case 0x53e234u: goto label_53e234;
        case 0x53e238u: goto label_53e238;
        case 0x53e23cu: goto label_53e23c;
        case 0x53e240u: goto label_53e240;
        case 0x53e244u: goto label_53e244;
        case 0x53e248u: goto label_53e248;
        case 0x53e24cu: goto label_53e24c;
        case 0x53e250u: goto label_53e250;
        case 0x53e254u: goto label_53e254;
        case 0x53e258u: goto label_53e258;
        case 0x53e25cu: goto label_53e25c;
        case 0x53e260u: goto label_53e260;
        case 0x53e264u: goto label_53e264;
        case 0x53e268u: goto label_53e268;
        case 0x53e26cu: goto label_53e26c;
        case 0x53e270u: goto label_53e270;
        case 0x53e274u: goto label_53e274;
        case 0x53e278u: goto label_53e278;
        case 0x53e27cu: goto label_53e27c;
        case 0x53e280u: goto label_53e280;
        case 0x53e284u: goto label_53e284;
        case 0x53e288u: goto label_53e288;
        case 0x53e28cu: goto label_53e28c;
        case 0x53e290u: goto label_53e290;
        case 0x53e294u: goto label_53e294;
        case 0x53e298u: goto label_53e298;
        case 0x53e29cu: goto label_53e29c;
        case 0x53e2a0u: goto label_53e2a0;
        case 0x53e2a4u: goto label_53e2a4;
        case 0x53e2a8u: goto label_53e2a8;
        case 0x53e2acu: goto label_53e2ac;
        default: break;
    }

    ctx->pc = 0x53dc60u;

label_53dc60:
    // 0x53dc60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x53dc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_53dc64:
    // 0x53dc64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53dc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53dc68:
    // 0x53dc68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53dc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53dc6c:
    // 0x53dc6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53dc6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53dc70:
    // 0x53dc70: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_53dc74:
    if (ctx->pc == 0x53DC74u) {
        ctx->pc = 0x53DC74u;
            // 0x53dc74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53DC78u;
        goto label_53dc78;
    }
    ctx->pc = 0x53DC70u;
    {
        const bool branch_taken_0x53dc70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x53dc70) {
            ctx->pc = 0x53DC74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53DC70u;
            // 0x53dc74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53DC9Cu;
            goto label_53dc9c;
        }
    }
    ctx->pc = 0x53DC78u;
label_53dc78:
    // 0x53dc78: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x53dc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_53dc7c:
    // 0x53dc7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53dc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_53dc80:
    // 0x53dc80: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x53dc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
label_53dc84:
    // 0x53dc84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x53dc84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_53dc88:
    // 0x53dc88: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_53dc8c:
    if (ctx->pc == 0x53DC8Cu) {
        ctx->pc = 0x53DC8Cu;
            // 0x53dc8c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x53DC90u;
        goto label_53dc90;
    }
    ctx->pc = 0x53DC88u;
    {
        const bool branch_taken_0x53dc88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x53DC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DC88u;
            // 0x53dc8c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53dc88) {
            ctx->pc = 0x53DC98u;
            goto label_53dc98;
        }
    }
    ctx->pc = 0x53DC90u;
label_53dc90:
    // 0x53dc90: 0xc0400a8  jal         func_1002A0
label_53dc94:
    if (ctx->pc == 0x53DC94u) {
        ctx->pc = 0x53DC98u;
        goto label_53dc98;
    }
    ctx->pc = 0x53DC90u;
    SET_GPR_U32(ctx, 31, 0x53DC98u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DC98u; }
        if (ctx->pc != 0x53DC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DC98u; }
        if (ctx->pc != 0x53DC98u) { return; }
    }
    ctx->pc = 0x53DC98u;
label_53dc98:
    // 0x53dc98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x53dc98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53dc9c:
    // 0x53dc9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53dc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53dca0:
    // 0x53dca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53dca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53dca4:
    // 0x53dca4: 0x3e00008  jr          $ra
label_53dca8:
    if (ctx->pc == 0x53DCA8u) {
        ctx->pc = 0x53DCA8u;
            // 0x53dca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x53DCACu;
        goto label_53dcac;
    }
    ctx->pc = 0x53DCA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53DCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DCA4u;
            // 0x53dca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53DCACu;
label_53dcac:
    // 0x53dcac: 0x0  nop
    ctx->pc = 0x53dcacu;
    // NOP
label_53dcb0:
    // 0x53dcb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53dcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_53dcb4:
    // 0x53dcb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x53dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_53dcb8:
    // 0x53dcb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53dcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53dcbc:
    // 0x53dcbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53dcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53dcc0:
    // 0x53dcc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x53dcc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53dcc4:
    // 0x53dcc4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_53dcc8:
    if (ctx->pc == 0x53DCC8u) {
        ctx->pc = 0x53DCC8u;
            // 0x53dcc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53DCCCu;
        goto label_53dccc;
    }
    ctx->pc = 0x53DCC4u;
    {
        const bool branch_taken_0x53dcc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x53DCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DCC4u;
            // 0x53dcc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53dcc4) {
            ctx->pc = 0x53DD24u;
            goto label_53dd24;
        }
    }
    ctx->pc = 0x53DCCCu;
label_53dccc:
    // 0x53dccc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_53dcd0:
    // 0x53dcd0: 0x244274b0  addiu       $v0, $v0, 0x74B0
    ctx->pc = 0x53dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29872));
label_53dcd4:
    // 0x53dcd4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x53dcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_53dcd8:
    // 0x53dcd8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53dcd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53dcdc:
    // 0x53dcdc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x53dcdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_53dce0:
    // 0x53dce0: 0x320f809  jalr        $t9
label_53dce4:
    if (ctx->pc == 0x53DCE4u) {
        ctx->pc = 0x53DCE8u;
        goto label_53dce8;
    }
    ctx->pc = 0x53DCE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53DCE8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53DCE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53DCE8u; }
            if (ctx->pc != 0x53DCE8u) { return; }
        }
        }
    }
    ctx->pc = 0x53DCE8u;
label_53dce8:
    // 0x53dce8: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_53dcec:
    if (ctx->pc == 0x53DCECu) {
        ctx->pc = 0x53DCECu;
            // 0x53dcec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x53DCF0u;
        goto label_53dcf0;
    }
    ctx->pc = 0x53DCE8u;
    {
        const bool branch_taken_0x53dce8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x53dce8) {
            ctx->pc = 0x53DCECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53DCE8u;
            // 0x53dcec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53DD10u;
            goto label_53dd10;
        }
    }
    ctx->pc = 0x53DCF0u;
label_53dcf0:
    // 0x53dcf0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x53dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_53dcf4:
    // 0x53dcf4: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x53dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_53dcf8:
    // 0x53dcf8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_53dcfc:
    if (ctx->pc == 0x53DCFCu) {
        ctx->pc = 0x53DCFCu;
            // 0x53dcfc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x53DD00u;
        goto label_53dd00;
    }
    ctx->pc = 0x53DCF8u;
    {
        const bool branch_taken_0x53dcf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x53DCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DCF8u;
            // 0x53dcfc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53dcf8) {
            ctx->pc = 0x53DD0Cu;
            goto label_53dd0c;
        }
    }
    ctx->pc = 0x53DD00u;
label_53dd00:
    // 0x53dd00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x53dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_53dd04:
    // 0x53dd04: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x53dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_53dd08:
    // 0x53dd08: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x53dd08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_53dd0c:
    // 0x53dd0c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x53dd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_53dd10:
    // 0x53dd10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x53dd10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_53dd14:
    // 0x53dd14: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_53dd18:
    if (ctx->pc == 0x53DD18u) {
        ctx->pc = 0x53DD18u;
            // 0x53dd18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53DD1Cu;
        goto label_53dd1c;
    }
    ctx->pc = 0x53DD14u;
    {
        const bool branch_taken_0x53dd14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x53dd14) {
            ctx->pc = 0x53DD18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53DD14u;
            // 0x53dd18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53DD28u;
            goto label_53dd28;
        }
    }
    ctx->pc = 0x53DD1Cu;
label_53dd1c:
    // 0x53dd1c: 0xc0400a8  jal         func_1002A0
label_53dd20:
    if (ctx->pc == 0x53DD20u) {
        ctx->pc = 0x53DD20u;
            // 0x53dd20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53DD24u;
        goto label_53dd24;
    }
    ctx->pc = 0x53DD1Cu;
    SET_GPR_U32(ctx, 31, 0x53DD24u);
    ctx->pc = 0x53DD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DD1Cu;
            // 0x53dd20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DD24u; }
        if (ctx->pc != 0x53DD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DD24u; }
        if (ctx->pc != 0x53DD24u) { return; }
    }
    ctx->pc = 0x53DD24u;
label_53dd24:
    // 0x53dd24: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x53dd24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53dd28:
    // 0x53dd28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53dd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_53dd2c:
    // 0x53dd2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53dd2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53dd30:
    // 0x53dd30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53dd30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53dd34:
    // 0x53dd34: 0x3e00008  jr          $ra
label_53dd38:
    if (ctx->pc == 0x53DD38u) {
        ctx->pc = 0x53DD38u;
            // 0x53dd38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53DD3Cu;
        goto label_53dd3c;
    }
    ctx->pc = 0x53DD34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53DD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DD34u;
            // 0x53dd38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53DD3Cu;
label_53dd3c:
    // 0x53dd3c: 0x0  nop
    ctx->pc = 0x53dd3cu;
    // NOP
label_53dd40:
    // 0x53dd40: 0x3e00008  jr          $ra
label_53dd44:
    if (ctx->pc == 0x53DD44u) {
        ctx->pc = 0x53DD44u;
            // 0x53dd44: 0x240208ac  addiu       $v0, $zero, 0x8AC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2220));
        ctx->pc = 0x53DD48u;
        goto label_53dd48;
    }
    ctx->pc = 0x53DD40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53DD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DD40u;
            // 0x53dd44: 0x240208ac  addiu       $v0, $zero, 0x8AC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2220));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53DD48u;
label_53dd48:
    // 0x53dd48: 0x0  nop
    ctx->pc = 0x53dd48u;
    // NOP
label_53dd4c:
    // 0x53dd4c: 0x0  nop
    ctx->pc = 0x53dd4cu;
    // NOP
label_53dd50:
    // 0x53dd50: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x53dd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_53dd54:
    // 0x53dd54: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x53dd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_53dd58:
    // 0x53dd58: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x53dd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_53dd5c:
    // 0x53dd5c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x53dd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_53dd60:
    // 0x53dd60: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x53dd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_53dd64:
    // 0x53dd64: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x53dd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_53dd68:
    // 0x53dd68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x53dd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_53dd6c:
    // 0x53dd6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x53dd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_53dd70:
    // 0x53dd70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x53dd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_53dd74:
    // 0x53dd74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53dd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53dd78:
    // 0x53dd78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53dd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53dd7c:
    // 0x53dd7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53dd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53dd80:
    // 0x53dd80: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x53dd80u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53dd84:
    // 0x53dd84: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_53dd88:
    if (ctx->pc == 0x53DD88u) {
        ctx->pc = 0x53DD88u;
            // 0x53dd88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53DD8Cu;
        goto label_53dd8c;
    }
    ctx->pc = 0x53DD84u;
    {
        const bool branch_taken_0x53dd84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x53DD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DD84u;
            // 0x53dd88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53dd84) {
            ctx->pc = 0x53DDD4u;
            goto label_53ddd4;
        }
    }
    ctx->pc = 0x53DD8Cu;
label_53dd8c:
    // 0x53dd8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x53dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_53dd90:
    // 0x53dd90: 0x10a30083  beq         $a1, $v1, . + 4 + (0x83 << 2)
label_53dd94:
    if (ctx->pc == 0x53DD94u) {
        ctx->pc = 0x53DD98u;
        goto label_53dd98;
    }
    ctx->pc = 0x53DD90u;
    {
        const bool branch_taken_0x53dd90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53dd90) {
            ctx->pc = 0x53DFA0u;
            goto label_53dfa0;
        }
    }
    ctx->pc = 0x53DD98u;
label_53dd98:
    // 0x53dd98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x53dd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53dd9c:
    // 0x53dd9c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_53dda0:
    if (ctx->pc == 0x53DDA0u) {
        ctx->pc = 0x53DDA4u;
        goto label_53dda4;
    }
    ctx->pc = 0x53DD9Cu;
    {
        const bool branch_taken_0x53dd9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53dd9c) {
            ctx->pc = 0x53DDACu;
            goto label_53ddac;
        }
    }
    ctx->pc = 0x53DDA4u;
label_53dda4:
    // 0x53dda4: 0x1000007e  b           . + 4 + (0x7E << 2)
label_53dda8:
    if (ctx->pc == 0x53DDA8u) {
        ctx->pc = 0x53DDACu;
        goto label_53ddac;
    }
    ctx->pc = 0x53DDA4u;
    {
        const bool branch_taken_0x53dda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53dda4) {
            ctx->pc = 0x53DFA0u;
            goto label_53dfa0;
        }
    }
    ctx->pc = 0x53DDACu;
label_53ddac:
    // 0x53ddac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53ddb0:
    // 0x53ddb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53ddb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53ddb4:
    // 0x53ddb4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x53ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_53ddb8:
    // 0x53ddb8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x53ddb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_53ddbc:
    // 0x53ddbc: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x53ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_53ddc0:
    // 0x53ddc0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x53ddc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_53ddc4:
    // 0x53ddc4: 0x320f809  jalr        $t9
label_53ddc8:
    if (ctx->pc == 0x53DDC8u) {
        ctx->pc = 0x53DDC8u;
            // 0x53ddc8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x53DDCCu;
        goto label_53ddcc;
    }
    ctx->pc = 0x53DDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53DDCCu);
        ctx->pc = 0x53DDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DDC4u;
            // 0x53ddc8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53DDCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53DDCCu; }
            if (ctx->pc != 0x53DDCCu) { return; }
        }
        }
    }
    ctx->pc = 0x53DDCCu;
label_53ddcc:
    // 0x53ddcc: 0x10000074  b           . + 4 + (0x74 << 2)
label_53ddd0:
    if (ctx->pc == 0x53DDD0u) {
        ctx->pc = 0x53DDD4u;
        goto label_53ddd4;
    }
    ctx->pc = 0x53DDCCu;
    {
        const bool branch_taken_0x53ddcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ddcc) {
            ctx->pc = 0x53DFA0u;
            goto label_53dfa0;
        }
    }
    ctx->pc = 0x53DDD4u;
label_53ddd4:
    // 0x53ddd4: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x53ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_53ddd8:
    // 0x53ddd8: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
label_53dddc:
    if (ctx->pc == 0x53DDDCu) {
        ctx->pc = 0x53DDE0u;
        goto label_53dde0;
    }
    ctx->pc = 0x53DDD8u;
    {
        const bool branch_taken_0x53ddd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ddd8) {
            ctx->pc = 0x53DFA0u;
            goto label_53dfa0;
        }
    }
    ctx->pc = 0x53DDE0u;
label_53dde0:
    // 0x53dde0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53dde4:
    // 0x53dde4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x53dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_53dde8:
    // 0x53dde8: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x53dde8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_53ddec:
    // 0x53ddec: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x53ddecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_53ddf0:
    // 0x53ddf0: 0x8c75e378  lw          $s5, -0x1C88($v1)
    ctx->pc = 0x53ddf0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_53ddf4:
    // 0x53ddf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x53ddf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53ddf8:
    // 0x53ddf8: 0x26110084  addiu       $s1, $s0, 0x84
    ctx->pc = 0x53ddf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_53ddfc:
    // 0x53ddfc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_53de00:
    // 0x53de00: 0x8ca70130  lw          $a3, 0x130($a1)
    ctx->pc = 0x53de00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_53de04:
    // 0x53de04: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x53de04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_53de08:
    // 0x53de08: 0x8c56e370  lw          $s6, -0x1C90($v0)
    ctx->pc = 0x53de08u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_53de0c:
    // 0x53de0c: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x53de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_53de10:
    // 0x53de10: 0x7f080  sll         $fp, $a3, 2
    ctx->pc = 0x53de10u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_53de14:
    // 0x53de14: 0x260500a8  addiu       $a1, $s0, 0xA8
    ctx->pc = 0x53de14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
label_53de18:
    // 0x53de18: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x53de18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_53de1c:
    // 0x53de1c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x53de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_53de20:
    // 0x53de20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x53de20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_53de24:
    // 0x53de24: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x53de24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_53de28:
    // 0x53de28: 0xc12a7a0  jal         func_4A9E80
label_53de2c:
    if (ctx->pc == 0x53DE2Cu) {
        ctx->pc = 0x53DE2Cu;
            // 0x53de2c: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->pc = 0x53DE30u;
        goto label_53de30;
    }
    ctx->pc = 0x53DE28u;
    SET_GPR_U32(ctx, 31, 0x53DE30u);
    ctx->pc = 0x53DE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DE28u;
            // 0x53de2c: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DE30u; }
        if (ctx->pc != 0x53DE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DE30u; }
        if (ctx->pc != 0x53DE30u) { return; }
    }
    ctx->pc = 0x53DE30u;
label_53de30:
    // 0x53de30: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x53de30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_53de34:
    // 0x53de34: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x53de34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_53de38:
    // 0x53de38: 0x8e0600c4  lw          $a2, 0xC4($s0)
    ctx->pc = 0x53de38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_53de3c:
    // 0x53de3c: 0x260500a8  addiu       $a1, $s0, 0xA8
    ctx->pc = 0x53de3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
label_53de40:
    // 0x53de40: 0x8fb20140  lw          $s2, 0x140($sp)
    ctx->pc = 0x53de40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_53de44:
    // 0x53de44: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x53de44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_53de48:
    // 0x53de48: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x53de48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_53de4c:
    // 0x53de4c: 0x8fb30150  lw          $s3, 0x150($sp)
    ctx->pc = 0x53de4cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_53de50:
    // 0x53de50: 0x8fb70154  lw          $s7, 0x154($sp)
    ctx->pc = 0x53de50u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_53de54:
    // 0x53de54: 0xc12a7a0  jal         func_4A9E80
label_53de58:
    if (ctx->pc == 0x53DE58u) {
        ctx->pc = 0x53DE58u;
            // 0x53de58: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->pc = 0x53DE5Cu;
        goto label_53de5c;
    }
    ctx->pc = 0x53DE54u;
    SET_GPR_U32(ctx, 31, 0x53DE5Cu);
    ctx->pc = 0x53DE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DE54u;
            // 0x53de58: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DE5Cu; }
        if (ctx->pc != 0x53DE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DE5Cu; }
        if (ctx->pc != 0x53DE5Cu) { return; }
    }
    ctx->pc = 0x53DE5Cu;
label_53de5c:
    // 0x53de5c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x53de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_53de60:
    // 0x53de60: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x53de60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_53de64:
    // 0x53de64: 0xc04e738  jal         func_139CE0
label_53de68:
    if (ctx->pc == 0x53DE68u) {
        ctx->pc = 0x53DE68u;
            // 0x53de68: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->pc = 0x53DE6Cu;
        goto label_53de6c;
    }
    ctx->pc = 0x53DE64u;
    SET_GPR_U32(ctx, 31, 0x53DE6Cu);
    ctx->pc = 0x53DE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DE64u;
            // 0x53de68: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DE6Cu; }
        if (ctx->pc != 0x53DE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DE6Cu; }
        if (ctx->pc != 0x53DE6Cu) { return; }
    }
    ctx->pc = 0x53DE6Cu;
label_53de6c:
    // 0x53de6c: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x53de6cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_53de70:
    // 0x53de70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x53de70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53de74:
    // 0x53de74: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x53de74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_53de78:
    // 0x53de78: 0x1483003b  bne         $a0, $v1, . + 4 + (0x3B << 2)
label_53de7c:
    if (ctx->pc == 0x53DE7Cu) {
        ctx->pc = 0x53DE80u;
        goto label_53de80;
    }
    ctx->pc = 0x53DE78u;
    {
        const bool branch_taken_0x53de78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x53de78) {
            ctx->pc = 0x53DF68u;
            goto label_53df68;
        }
    }
    ctx->pc = 0x53DE80u;
label_53de80:
    // 0x53de80: 0x8e900054  lw          $s0, 0x54($s4)
    ctx->pc = 0x53de80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_53de84:
    // 0x53de84: 0x3d01821  addu        $v1, $fp, $s0
    ctx->pc = 0x53de84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
label_53de88:
    // 0x53de88: 0x8c631160  lw          $v1, 0x1160($v1)
    ctx->pc = 0x53de88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4448)));
label_53de8c:
    // 0x53de8c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x53de8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_53de90:
    // 0x53de90: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
label_53de94:
    if (ctx->pc == 0x53DE94u) {
        ctx->pc = 0x53DE98u;
        goto label_53de98;
    }
    ctx->pc = 0x53DE90u;
    {
        const bool branch_taken_0x53de90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x53de90) {
            ctx->pc = 0x53DF68u;
            goto label_53df68;
        }
    }
    ctx->pc = 0x53DE98u;
label_53de98:
    // 0x53de98: 0x92820060  lbu         $v0, 0x60($s4)
    ctx->pc = 0x53de98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 96)));
label_53de9c:
    // 0x53de9c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x53de9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_53dea0:
    // 0x53dea0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x53dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_53dea4:
    // 0x53dea4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x53dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_53dea8:
    // 0x53dea8: 0xc04cce8  jal         func_1333A0
label_53deac:
    if (ctx->pc == 0x53DEACu) {
        ctx->pc = 0x53DEACu;
            // 0x53deac: 0x24450f40  addiu       $a1, $v0, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
        ctx->pc = 0x53DEB0u;
        goto label_53deb0;
    }
    ctx->pc = 0x53DEA8u;
    SET_GPR_U32(ctx, 31, 0x53DEB0u);
    ctx->pc = 0x53DEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DEA8u;
            // 0x53deac: 0x24450f40  addiu       $a1, $v0, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DEB0u; }
        if (ctx->pc != 0x53DEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DEB0u; }
        if (ctx->pc != 0x53DEB0u) { return; }
    }
    ctx->pc = 0x53DEB0u;
label_53deb0:
    // 0x53deb0: 0xc68c005c  lwc1        $f12, 0x5C($s4)
    ctx->pc = 0x53deb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_53deb4:
    // 0x53deb4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x53deb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_53deb8:
    // 0x53deb8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x53deb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53debc:
    // 0x53debc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x53debcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_53dec0:
    // 0x53dec0: 0xc04ce50  jal         func_133940
label_53dec4:
    if (ctx->pc == 0x53DEC4u) {
        ctx->pc = 0x53DEC4u;
            // 0x53dec4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x53DEC8u;
        goto label_53dec8;
    }
    ctx->pc = 0x53DEC0u;
    SET_GPR_U32(ctx, 31, 0x53DEC8u);
    ctx->pc = 0x53DEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DEC0u;
            // 0x53dec4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DEC8u; }
        if (ctx->pc != 0x53DEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DEC8u; }
        if (ctx->pc != 0x53DEC8u) { return; }
    }
    ctx->pc = 0x53DEC8u;
label_53dec8:
    // 0x53dec8: 0x92820060  lbu         $v0, 0x60($s4)
    ctx->pc = 0x53dec8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 96)));
label_53decc:
    // 0x53decc: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x53deccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_53ded0:
    // 0x53ded0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x53ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_53ded4:
    // 0x53ded4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x53ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_53ded8:
    // 0x53ded8: 0xc04ce80  jal         func_133A00
label_53dedc:
    if (ctx->pc == 0x53DEDCu) {
        ctx->pc = 0x53DEDCu;
            // 0x53dedc: 0x24450ec0  addiu       $a1, $v0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3776));
        ctx->pc = 0x53DEE0u;
        goto label_53dee0;
    }
    ctx->pc = 0x53DED8u;
    SET_GPR_U32(ctx, 31, 0x53DEE0u);
    ctx->pc = 0x53DEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DED8u;
            // 0x53dedc: 0x24450ec0  addiu       $a1, $v0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DEE0u; }
        if (ctx->pc != 0x53DEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DEE0u; }
        if (ctx->pc != 0x53DEE0u) { return; }
    }
    ctx->pc = 0x53DEE0u;
label_53dee0:
    // 0x53dee0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x53dee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_53dee4:
    // 0x53dee4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x53dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_53dee8:
    // 0x53dee8: 0xc04cd60  jal         func_133580
label_53deec:
    if (ctx->pc == 0x53DEECu) {
        ctx->pc = 0x53DEECu;
            // 0x53deec: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x53DEF0u;
        goto label_53def0;
    }
    ctx->pc = 0x53DEE8u;
    SET_GPR_U32(ctx, 31, 0x53DEF0u);
    ctx->pc = 0x53DEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DEE8u;
            // 0x53deec: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DEF0u; }
        if (ctx->pc != 0x53DEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DEF0u; }
        if (ctx->pc != 0x53DEF0u) { return; }
    }
    ctx->pc = 0x53DEF0u;
label_53def0:
    // 0x53def0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x53def0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_53def4:
    // 0x53def4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x53def4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_53def8:
    // 0x53def8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x53def8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_53defc:
    // 0x53defc: 0xc04e4a4  jal         func_139290
label_53df00:
    if (ctx->pc == 0x53DF00u) {
        ctx->pc = 0x53DF00u;
            // 0x53df00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53DF04u;
        goto label_53df04;
    }
    ctx->pc = 0x53DEFCu;
    SET_GPR_U32(ctx, 31, 0x53DF04u);
    ctx->pc = 0x53DF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DEFCu;
            // 0x53df00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DF04u; }
        if (ctx->pc != 0x53DF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DF04u; }
        if (ctx->pc != 0x53DF04u) { return; }
    }
    ctx->pc = 0x53DF04u;
label_53df04:
    // 0x53df04: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x53df04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_53df08:
    // 0x53df08: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x53df08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_53df0c:
    // 0x53df0c: 0x320f809  jalr        $t9
label_53df10:
    if (ctx->pc == 0x53DF10u) {
        ctx->pc = 0x53DF10u;
            // 0x53df10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53DF14u;
        goto label_53df14;
    }
    ctx->pc = 0x53DF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53DF14u);
        ctx->pc = 0x53DF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DF0Cu;
            // 0x53df10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53DF14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53DF14u; }
            if (ctx->pc != 0x53DF14u) { return; }
        }
        }
    }
    ctx->pc = 0x53DF14u;
label_53df14:
    // 0x53df14: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x53df14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_53df18:
    // 0x53df18: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x53df18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_53df1c:
    // 0x53df1c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x53df1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_53df20:
    // 0x53df20: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x53df20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_53df24:
    // 0x53df24: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x53df24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_53df28:
    // 0x53df28: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x53df28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_53df2c:
    // 0x53df2c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x53df2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_53df30:
    // 0x53df30: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x53df30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_53df34:
    // 0x53df34: 0xc04cff4  jal         func_133FD0
label_53df38:
    if (ctx->pc == 0x53DF38u) {
        ctx->pc = 0x53DF38u;
            // 0x53df38: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x53DF3Cu;
        goto label_53df3c;
    }
    ctx->pc = 0x53DF34u;
    SET_GPR_U32(ctx, 31, 0x53DF3Cu);
    ctx->pc = 0x53DF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DF34u;
            // 0x53df38: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DF3Cu; }
        if (ctx->pc != 0x53DF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DF3Cu; }
        if (ctx->pc != 0x53DF3Cu) { return; }
    }
    ctx->pc = 0x53DF3Cu;
label_53df3c:
    // 0x53df3c: 0xc62c001c  lwc1        $f12, 0x1C($s1)
    ctx->pc = 0x53df3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_53df40:
    // 0x53df40: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x53df40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_53df44:
    // 0x53df44: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x53df44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_53df48:
    // 0x53df48: 0xc054bbc  jal         func_152EF0
label_53df4c:
    if (ctx->pc == 0x53DF4Cu) {
        ctx->pc = 0x53DF4Cu;
            // 0x53df4c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x53DF50u;
        goto label_53df50;
    }
    ctx->pc = 0x53DF48u;
    SET_GPR_U32(ctx, 31, 0x53DF50u);
    ctx->pc = 0x53DF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DF48u;
            // 0x53df4c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DF50u; }
        if (ctx->pc != 0x53DF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DF50u; }
        if (ctx->pc != 0x53DF50u) { return; }
    }
    ctx->pc = 0x53DF50u;
label_53df50:
    // 0x53df50: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x53df50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_53df54:
    // 0x53df54: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x53df54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_53df58:
    // 0x53df58: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x53df58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_53df5c:
    // 0x53df5c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x53df5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_53df60:
    // 0x53df60: 0xc054c2c  jal         func_1530B0
label_53df64:
    if (ctx->pc == 0x53DF64u) {
        ctx->pc = 0x53DF64u;
            // 0x53df64: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x53DF68u;
        goto label_53df68;
    }
    ctx->pc = 0x53DF60u;
    SET_GPR_U32(ctx, 31, 0x53DF68u);
    ctx->pc = 0x53DF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53DF60u;
            // 0x53df64: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DF68u; }
        if (ctx->pc != 0x53DF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53DF68u; }
        if (ctx->pc != 0x53DF68u) { return; }
    }
    ctx->pc = 0x53DF68u;
label_53df68:
    // 0x53df68: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x53df68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_53df6c:
    // 0x53df6c: 0x16770008  bne         $s3, $s7, . + 4 + (0x8 << 2)
label_53df70:
    if (ctx->pc == 0x53DF70u) {
        ctx->pc = 0x53DF74u;
        goto label_53df74;
    }
    ctx->pc = 0x53DF6Cu;
    {
        const bool branch_taken_0x53df6c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 23));
        if (branch_taken_0x53df6c) {
            ctx->pc = 0x53DF90u;
            goto label_53df90;
        }
    }
    ctx->pc = 0x53DF74u;
label_53df74:
    // 0x53df74: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x53df74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_53df78:
    // 0x53df78: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x53df78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_53df7c:
    // 0x53df7c: 0x16430002  bne         $s2, $v1, . + 4 + (0x2 << 2)
label_53df80:
    if (ctx->pc == 0x53DF80u) {
        ctx->pc = 0x53DF84u;
        goto label_53df84;
    }
    ctx->pc = 0x53DF7Cu;
    {
        const bool branch_taken_0x53df7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x53df7c) {
            ctx->pc = 0x53DF88u;
            goto label_53df88;
        }
    }
    ctx->pc = 0x53DF84u;
label_53df84:
    // 0x53df84: 0x8fb200c0  lw          $s2, 0xC0($sp)
    ctx->pc = 0x53df84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_53df88:
    // 0x53df88: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x53df88u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_53df8c:
    // 0x53df8c: 0x26770200  addiu       $s7, $s3, 0x200
    ctx->pc = 0x53df8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
label_53df90:
    // 0x53df90: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x53df90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_53df94:
    // 0x53df94: 0x5663ffb6  bnel        $s3, $v1, . + 4 + (-0x4A << 2)
label_53df98:
    if (ctx->pc == 0x53DF98u) {
        ctx->pc = 0x53DF98u;
            // 0x53df98: 0x8e740000  lw          $s4, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x53DF9Cu;
        goto label_53df9c;
    }
    ctx->pc = 0x53DF94u;
    {
        const bool branch_taken_0x53df94 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x53df94) {
            ctx->pc = 0x53DF98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53DF94u;
            // 0x53df98: 0x8e740000  lw          $s4, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53DE70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53de70;
        }
    }
    ctx->pc = 0x53DF9Cu;
label_53df9c:
    // 0x53df9c: 0x0  nop
    ctx->pc = 0x53df9cu;
    // NOP
label_53dfa0:
    // 0x53dfa0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x53dfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_53dfa4:
    // 0x53dfa4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x53dfa4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_53dfa8:
    // 0x53dfa8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x53dfa8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_53dfac:
    // 0x53dfac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x53dfacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_53dfb0:
    // 0x53dfb0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x53dfb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_53dfb4:
    // 0x53dfb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x53dfb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_53dfb8:
    // 0x53dfb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x53dfb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_53dfbc:
    // 0x53dfbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53dfbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53dfc0:
    // 0x53dfc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53dfc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53dfc4:
    // 0x53dfc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53dfc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53dfc8:
    // 0x53dfc8: 0x3e00008  jr          $ra
label_53dfcc:
    if (ctx->pc == 0x53DFCCu) {
        ctx->pc = 0x53DFCCu;
            // 0x53dfcc: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x53DFD0u;
        goto label_53dfd0;
    }
    ctx->pc = 0x53DFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53DFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53DFC8u;
            // 0x53dfcc: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53DFD0u;
label_53dfd0:
    // 0x53dfd0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x53dfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_53dfd4:
    // 0x53dfd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x53dfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_53dfd8:
    // 0x53dfd8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x53dfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_53dfdc:
    // 0x53dfdc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x53dfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_53dfe0:
    // 0x53dfe0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x53dfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_53dfe4:
    // 0x53dfe4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x53dfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_53dfe8:
    // 0x53dfe8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x53dfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_53dfec:
    // 0x53dfec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x53dfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_53dff0:
    // 0x53dff0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53dff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53dff4:
    // 0x53dff4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53dff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53dff8:
    // 0x53dff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53dff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53dffc:
    // 0x53dffc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x53dffcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53e000:
    // 0x53e000: 0x50a3000e  beql        $a1, $v1, . + 4 + (0xE << 2)
label_53e004:
    if (ctx->pc == 0x53E004u) {
        ctx->pc = 0x53E004u;
            // 0x53e004: 0x8c8300c4  lw          $v1, 0xC4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
        ctx->pc = 0x53E008u;
        goto label_53e008;
    }
    ctx->pc = 0x53E000u;
    {
        const bool branch_taken_0x53e000 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53e000) {
            ctx->pc = 0x53E004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53E000u;
            // 0x53e004: 0x8c8300c4  lw          $v1, 0xC4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53E03Cu;
            goto label_53e03c;
        }
    }
    ctx->pc = 0x53E008u;
label_53e008:
    // 0x53e008: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x53e008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_53e00c:
    // 0x53e00c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_53e010:
    if (ctx->pc == 0x53E010u) {
        ctx->pc = 0x53E010u;
            // 0x53e010: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x53E014u;
        goto label_53e014;
    }
    ctx->pc = 0x53E00Cu;
    {
        const bool branch_taken_0x53e00c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53e00c) {
            ctx->pc = 0x53E010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53E00Cu;
            // 0x53e010: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53E028u;
            goto label_53e028;
        }
    }
    ctx->pc = 0x53E014u;
label_53e014:
    // 0x53e014: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x53e014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53e018:
    // 0x53e018: 0x10a30099  beq         $a1, $v1, . + 4 + (0x99 << 2)
label_53e01c:
    if (ctx->pc == 0x53E01Cu) {
        ctx->pc = 0x53E020u;
        goto label_53e020;
    }
    ctx->pc = 0x53E018u;
    {
        const bool branch_taken_0x53e018 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53e018) {
            ctx->pc = 0x53E280u;
            goto label_53e280;
        }
    }
    ctx->pc = 0x53E020u;
label_53e020:
    // 0x53e020: 0x10000097  b           . + 4 + (0x97 << 2)
label_53e024:
    if (ctx->pc == 0x53E024u) {
        ctx->pc = 0x53E028u;
        goto label_53e028;
    }
    ctx->pc = 0x53E020u;
    {
        const bool branch_taken_0x53e020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53e020) {
            ctx->pc = 0x53E280u;
            goto label_53e280;
        }
    }
    ctx->pc = 0x53E028u;
label_53e028:
    // 0x53e028: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x53e028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_53e02c:
    // 0x53e02c: 0x320f809  jalr        $t9
label_53e030:
    if (ctx->pc == 0x53E030u) {
        ctx->pc = 0x53E034u;
        goto label_53e034;
    }
    ctx->pc = 0x53E02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53E034u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53E034u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53E034u; }
            if (ctx->pc != 0x53E034u) { return; }
        }
        }
    }
    ctx->pc = 0x53E034u;
label_53e034:
    // 0x53e034: 0x10000092  b           . + 4 + (0x92 << 2)
label_53e038:
    if (ctx->pc == 0x53E038u) {
        ctx->pc = 0x53E03Cu;
        goto label_53e03c;
    }
    ctx->pc = 0x53E034u;
    {
        const bool branch_taken_0x53e034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53e034) {
            ctx->pc = 0x53E280u;
            goto label_53e280;
        }
    }
    ctx->pc = 0x53E03Cu;
label_53e03c:
    // 0x53e03c: 0x10600090  beqz        $v1, . + 4 + (0x90 << 2)
label_53e040:
    if (ctx->pc == 0x53E040u) {
        ctx->pc = 0x53E044u;
        goto label_53e044;
    }
    ctx->pc = 0x53E03Cu;
    {
        const bool branch_taken_0x53e03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x53e03c) {
            ctx->pc = 0x53E280u;
            goto label_53e280;
        }
    }
    ctx->pc = 0x53E044u;
label_53e044:
    // 0x53e044: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x53e044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_53e048:
    // 0x53e048: 0x24880084  addiu       $t0, $a0, 0x84
    ctx->pc = 0x53e048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
label_53e04c:
    // 0x53e04c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x53e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_53e050:
    // 0x53e050: 0xc4800090  lwc1        $f0, 0x90($a0)
    ctx->pc = 0x53e050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53e054:
    // 0x53e054: 0x2506000c  addiu       $a2, $t0, 0xC
    ctx->pc = 0x53e054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_53e058:
    // 0x53e058: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x53e058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_53e05c:
    // 0x53e05c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x53e05cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_53e060:
    // 0x53e060: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x53e060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
label_53e064:
    // 0x53e064: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x53e064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
label_53e068:
    // 0x53e068: 0xc4800090  lwc1        $f0, 0x90($a0)
    ctx->pc = 0x53e068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53e06c:
    // 0x53e06c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x53e06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53e070:
    // 0x53e070: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x53e070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53e074:
    // 0x53e074: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_53e078:
    if (ctx->pc == 0x53E078u) {
        ctx->pc = 0x53E078u;
            // 0x53e078: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53E07Cu;
        goto label_53e07c;
    }
    ctx->pc = 0x53E074u;
    {
        const bool branch_taken_0x53e074 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x53E078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E074u;
            // 0x53e078: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53e074) {
            ctx->pc = 0x53E080u;
            goto label_53e080;
        }
    }
    ctx->pc = 0x53E07Cu;
label_53e07c:
    // 0x53e07c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x53e07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53e080:
    // 0x53e080: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_53e084:
    if (ctx->pc == 0x53E084u) {
        ctx->pc = 0x53E084u;
            // 0x53e084: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x53E088u;
        goto label_53e088;
    }
    ctx->pc = 0x53E080u;
    {
        const bool branch_taken_0x53e080 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x53e080) {
            ctx->pc = 0x53E084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53E080u;
            // 0x53e084: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53E094u;
            goto label_53e094;
        }
    }
    ctx->pc = 0x53E088u;
label_53e088:
    // 0x53e088: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x53e088u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53e08c:
    // 0x53e08c: 0x10000007  b           . + 4 + (0x7 << 2)
label_53e090:
    if (ctx->pc == 0x53E090u) {
        ctx->pc = 0x53E090u;
            // 0x53e090: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x53E094u;
        goto label_53e094;
    }
    ctx->pc = 0x53E08Cu;
    {
        const bool branch_taken_0x53e08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53E090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E08Cu;
            // 0x53e090: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x53e08c) {
            ctx->pc = 0x53E0ACu;
            goto label_53e0ac;
        }
    }
    ctx->pc = 0x53E094u;
label_53e094:
    // 0x53e094: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x53e094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_53e098:
    // 0x53e098: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x53e098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_53e09c:
    // 0x53e09c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x53e09cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53e0a0:
    // 0x53e0a0: 0x0  nop
    ctx->pc = 0x53e0a0u;
    // NOP
label_53e0a4:
    // 0x53e0a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x53e0a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_53e0a8:
    // 0x53e0a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x53e0a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_53e0ac:
    // 0x53e0ac: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x53e0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53e0b0:
    // 0x53e0b0: 0x2507001c  addiu       $a3, $t0, 0x1C
    ctx->pc = 0x53e0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
label_53e0b4:
    // 0x53e0b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x53e0b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_53e0b8:
    // 0x53e0b8: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x53e0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_53e0bc:
    // 0x53e0bc: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x53e0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53e0c0:
    // 0x53e0c0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x53e0c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_53e0c4:
    // 0x53e0c4: 0xe500001c  swc1        $f0, 0x1C($t0)
    ctx->pc = 0x53e0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
label_53e0c8:
    // 0x53e0c8: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x53e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_53e0cc:
    // 0x53e0cc: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x53e0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53e0d0:
    // 0x53e0d0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x53e0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53e0d4:
    // 0x53e0d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x53e0d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53e0d8:
    // 0x53e0d8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_53e0dc:
    if (ctx->pc == 0x53E0DCu) {
        ctx->pc = 0x53E0DCu;
            // 0x53e0dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53E0E0u;
        goto label_53e0e0;
    }
    ctx->pc = 0x53E0D8u;
    {
        const bool branch_taken_0x53e0d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x53E0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E0D8u;
            // 0x53e0dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53e0d8) {
            ctx->pc = 0x53E0E4u;
            goto label_53e0e4;
        }
    }
    ctx->pc = 0x53E0E0u;
label_53e0e0:
    // 0x53e0e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x53e0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53e0e4:
    // 0x53e0e4: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_53e0e8:
    if (ctx->pc == 0x53E0E8u) {
        ctx->pc = 0x53E0E8u;
            // 0x53e0e8: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x53E0ECu;
        goto label_53e0ec;
    }
    ctx->pc = 0x53E0E4u;
    {
        const bool branch_taken_0x53e0e4 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x53e0e4) {
            ctx->pc = 0x53E0E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53E0E4u;
            // 0x53e0e8: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53E0F8u;
            goto label_53e0f8;
        }
    }
    ctx->pc = 0x53E0ECu;
label_53e0ec:
    // 0x53e0ec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x53e0ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53e0f0:
    // 0x53e0f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_53e0f4:
    if (ctx->pc == 0x53E0F4u) {
        ctx->pc = 0x53E0F4u;
            // 0x53e0f4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x53E0F8u;
        goto label_53e0f8;
    }
    ctx->pc = 0x53E0F0u;
    {
        const bool branch_taken_0x53e0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53E0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E0F0u;
            // 0x53e0f4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x53e0f0) {
            ctx->pc = 0x53E110u;
            goto label_53e110;
        }
    }
    ctx->pc = 0x53E0F8u;
label_53e0f8:
    // 0x53e0f8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x53e0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_53e0fc:
    // 0x53e0fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x53e0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_53e100:
    // 0x53e100: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x53e100u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53e104:
    // 0x53e104: 0x0  nop
    ctx->pc = 0x53e104u;
    // NOP
label_53e108:
    // 0x53e108: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x53e108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_53e10c:
    // 0x53e10c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x53e10cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_53e110:
    // 0x53e110: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x53e110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53e114:
    // 0x53e114: 0x249500a8  addiu       $s5, $a0, 0xA8
    ctx->pc = 0x53e114u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 168));
label_53e118:
    // 0x53e118: 0x249700c8  addiu       $s7, $a0, 0xC8
    ctx->pc = 0x53e118u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
label_53e11c:
    // 0x53e11c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x53e11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_53e120:
    // 0x53e120: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x53e120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_53e124:
    // 0x53e124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x53e124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53e128:
    // 0x53e128: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x53e128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_53e12c:
    // 0x53e12c: 0xc12a7a0  jal         func_4A9E80
label_53e130:
    if (ctx->pc == 0x53E130u) {
        ctx->pc = 0x53E130u;
            // 0x53e130: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->pc = 0x53E134u;
        goto label_53e134;
    }
    ctx->pc = 0x53E12Cu;
    SET_GPR_U32(ctx, 31, 0x53E134u);
    ctx->pc = 0x53E130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E12Cu;
            // 0x53e130: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E134u; }
        if (ctx->pc != 0x53E134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E134u; }
        if (ctx->pc != 0x53E134u) { return; }
    }
    ctx->pc = 0x53E134u;
label_53e134:
    // 0x53e134: 0x8ea6001c  lw          $a2, 0x1C($s5)
    ctx->pc = 0x53e134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_53e138:
    // 0x53e138: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x53e138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_53e13c:
    // 0x53e13c: 0x8fb20130  lw          $s2, 0x130($sp)
    ctx->pc = 0x53e13cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_53e140:
    // 0x53e140: 0x8fb10134  lw          $s1, 0x134($sp)
    ctx->pc = 0x53e140u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_53e144:
    // 0x53e144: 0x8fb0013c  lw          $s0, 0x13C($sp)
    ctx->pc = 0x53e144u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_53e148:
    // 0x53e148: 0x8fb30140  lw          $s3, 0x140($sp)
    ctx->pc = 0x53e148u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_53e14c:
    // 0x53e14c: 0x8fb40144  lw          $s4, 0x144($sp)
    ctx->pc = 0x53e14cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_53e150:
    // 0x53e150: 0xc12a7a0  jal         func_4A9E80
label_53e154:
    if (ctx->pc == 0x53E154u) {
        ctx->pc = 0x53E154u;
            // 0x53e154: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53E158u;
        goto label_53e158;
    }
    ctx->pc = 0x53E150u;
    SET_GPR_U32(ctx, 31, 0x53E158u);
    ctx->pc = 0x53E154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E150u;
            // 0x53e154: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E158u; }
        if (ctx->pc != 0x53E158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E158u; }
        if (ctx->pc != 0x53E158u) { return; }
    }
    ctx->pc = 0x53E158u;
label_53e158:
    // 0x53e158: 0x8fb60120  lw          $s6, 0x120($sp)
    ctx->pc = 0x53e158u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_53e15c:
    // 0x53e15c: 0xc14fb88  jal         func_53EE20
label_53e160:
    if (ctx->pc == 0x53E160u) {
        ctx->pc = 0x53E160u;
            // 0x53e160: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x53E164u;
        goto label_53e164;
    }
    ctx->pc = 0x53E15Cu;
    SET_GPR_U32(ctx, 31, 0x53E164u);
    ctx->pc = 0x53E160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E15Cu;
            // 0x53e160: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53EE20u;
    if (runtime->hasFunction(0x53EE20u)) {
        auto targetFn = runtime->lookupFunction(0x53EE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E164u; }
        if (ctx->pc != 0x53E164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053EE20_0x53ee20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E164u; }
        if (ctx->pc != 0x53E164u) { return; }
    }
    ctx->pc = 0x53E164u;
label_53e164:
    // 0x53e164: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x53e164u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_53e168:
    // 0x53e168: 0x16740007  bne         $s3, $s4, . + 4 + (0x7 << 2)
label_53e16c:
    if (ctx->pc == 0x53E16Cu) {
        ctx->pc = 0x53E170u;
        goto label_53e170;
    }
    ctx->pc = 0x53E168u;
    {
        const bool branch_taken_0x53e168 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x53e168) {
            ctx->pc = 0x53E188u;
            goto label_53e188;
        }
    }
    ctx->pc = 0x53E170u;
label_53e170:
    // 0x53e170: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x53e170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_53e174:
    // 0x53e174: 0x16500002  bne         $s2, $s0, . + 4 + (0x2 << 2)
label_53e178:
    if (ctx->pc == 0x53E178u) {
        ctx->pc = 0x53E17Cu;
        goto label_53e17c;
    }
    ctx->pc = 0x53E174u;
    {
        const bool branch_taken_0x53e174 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x53e174) {
            ctx->pc = 0x53E180u;
            goto label_53e180;
        }
    }
    ctx->pc = 0x53E17Cu;
label_53e17c:
    // 0x53e17c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x53e17cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53e180:
    // 0x53e180: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x53e180u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_53e184:
    // 0x53e184: 0x26740200  addiu       $s4, $s3, 0x200
    ctx->pc = 0x53e184u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
label_53e188:
    // 0x53e188: 0x1676fff4  bne         $s3, $s6, . + 4 + (-0xC << 2)
label_53e18c:
    if (ctx->pc == 0x53E18Cu) {
        ctx->pc = 0x53E190u;
        goto label_53e190;
    }
    ctx->pc = 0x53E188u;
    {
        const bool branch_taken_0x53e188 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 22));
        if (branch_taken_0x53e188) {
            ctx->pc = 0x53E15Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53e15c;
        }
    }
    ctx->pc = 0x53E190u;
label_53e190:
    // 0x53e190: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x53e190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_53e194:
    // 0x53e194: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x53e194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_53e198:
    // 0x53e198: 0xc12a7a0  jal         func_4A9E80
label_53e19c:
    if (ctx->pc == 0x53E19Cu) {
        ctx->pc = 0x53E19Cu;
            // 0x53e19c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53E1A0u;
        goto label_53e1a0;
    }
    ctx->pc = 0x53E198u;
    SET_GPR_U32(ctx, 31, 0x53E1A0u);
    ctx->pc = 0x53E19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E198u;
            // 0x53e19c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E1A0u; }
        if (ctx->pc != 0x53E1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E1A0u; }
        if (ctx->pc != 0x53E1A0u) { return; }
    }
    ctx->pc = 0x53E1A0u;
label_53e1a0:
    // 0x53e1a0: 0x8fb200f0  lw          $s2, 0xF0($sp)
    ctx->pc = 0x53e1a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_53e1a4:
    // 0x53e1a4: 0x8fb000f4  lw          $s0, 0xF4($sp)
    ctx->pc = 0x53e1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_53e1a8:
    // 0x53e1a8: 0x8fb600f8  lw          $s6, 0xF8($sp)
    ctx->pc = 0x53e1a8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_53e1ac:
    // 0x53e1ac: 0x8fb100fc  lw          $s1, 0xFC($sp)
    ctx->pc = 0x53e1acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_53e1b0:
    // 0x53e1b0: 0x8fb30100  lw          $s3, 0x100($sp)
    ctx->pc = 0x53e1b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_53e1b4:
    // 0x53e1b4: 0x8fb40104  lw          $s4, 0x104($sp)
    ctx->pc = 0x53e1b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_53e1b8:
    // 0x53e1b8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x53e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_53e1bc:
    // 0x53e1bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x53e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53e1c0:
    // 0x53e1c0: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x53e1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_53e1c4:
    // 0x53e1c4: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_53e1c8:
    if (ctx->pc == 0x53E1C8u) {
        ctx->pc = 0x53E1CCu;
        goto label_53e1cc;
    }
    ctx->pc = 0x53E1C4u;
    {
        const bool branch_taken_0x53e1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x53e1c4) {
            ctx->pc = 0x53E238u;
            goto label_53e238;
        }
    }
    ctx->pc = 0x53E1CCu;
label_53e1cc:
    // 0x53e1cc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x53e1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_53e1d0:
    // 0x53e1d0: 0xc12a70c  jal         func_4A9C30
label_53e1d4:
    if (ctx->pc == 0x53E1D4u) {
        ctx->pc = 0x53E1D4u;
            // 0x53e1d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53E1D8u;
        goto label_53e1d8;
    }
    ctx->pc = 0x53E1D0u;
    SET_GPR_U32(ctx, 31, 0x53E1D8u);
    ctx->pc = 0x53E1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E1D0u;
            // 0x53e1d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C30u;
    if (runtime->hasFunction(0x4A9C30u)) {
        auto targetFn = runtime->lookupFunction(0x4A9C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E1D8u; }
        if (ctx->pc != 0x53E1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9C30_0x4a9c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E1D8u; }
        if (ctx->pc != 0x53E1D8u) { return; }
    }
    ctx->pc = 0x53E1D8u;
label_53e1d8:
    // 0x53e1d8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x53e1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_53e1dc:
    // 0x53e1dc: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x53e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_53e1e0:
    // 0x53e1e0: 0xafb20150  sw          $s2, 0x150($sp)
    ctx->pc = 0x53e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 18));
label_53e1e4:
    // 0x53e1e4: 0xafb00154  sw          $s0, 0x154($sp)
    ctx->pc = 0x53e1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 16));
label_53e1e8:
    // 0x53e1e8: 0xafb60158  sw          $s6, 0x158($sp)
    ctx->pc = 0x53e1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 22));
label_53e1ec:
    // 0x53e1ec: 0xafb1015c  sw          $s1, 0x15C($sp)
    ctx->pc = 0x53e1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 17));
label_53e1f0:
    // 0x53e1f0: 0xafb30160  sw          $s3, 0x160($sp)
    ctx->pc = 0x53e1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 19));
label_53e1f4:
    // 0x53e1f4: 0xc14f8bc  jal         func_53E2F0
label_53e1f8:
    if (ctx->pc == 0x53E1F8u) {
        ctx->pc = 0x53E1F8u;
            // 0x53e1f8: 0xafb40164  sw          $s4, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 20));
        ctx->pc = 0x53E1FCu;
        goto label_53e1fc;
    }
    ctx->pc = 0x53E1F4u;
    SET_GPR_U32(ctx, 31, 0x53E1FCu);
    ctx->pc = 0x53E1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E1F4u;
            // 0x53e1f8: 0xafb40164  sw          $s4, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53E2F0u;
    if (runtime->hasFunction(0x53E2F0u)) {
        auto targetFn = runtime->lookupFunction(0x53E2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E1FCu; }
        if (ctx->pc != 0x53E1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053E2F0_0x53e2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E1FCu; }
        if (ctx->pc != 0x53E1FCu) { return; }
    }
    ctx->pc = 0x53E1FCu;
label_53e1fc:
    // 0x53e1fc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x53e1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_53e200:
    // 0x53e200: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x53e200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_53e204:
    // 0x53e204: 0xc12a3ec  jal         func_4A8FB0
label_53e208:
    if (ctx->pc == 0x53E208u) {
        ctx->pc = 0x53E208u;
            // 0x53e208: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x53E20Cu;
        goto label_53e20c;
    }
    ctx->pc = 0x53E204u;
    SET_GPR_U32(ctx, 31, 0x53E20Cu);
    ctx->pc = 0x53E208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E204u;
            // 0x53e208: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (runtime->hasFunction(0x4A8FB0u)) {
        auto targetFn = runtime->lookupFunction(0x4A8FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E20Cu; }
        if (ctx->pc != 0x53E20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A8FB0_0x4a8fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E20Cu; }
        if (ctx->pc != 0x53E20Cu) { return; }
    }
    ctx->pc = 0x53E20Cu;
label_53e20c:
    // 0x53e20c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x53e20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_53e210:
    // 0x53e210: 0xc14f8ac  jal         func_53E2B0
label_53e214:
    if (ctx->pc == 0x53E214u) {
        ctx->pc = 0x53E214u;
            // 0x53e214: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x53E218u;
        goto label_53e218;
    }
    ctx->pc = 0x53E210u;
    SET_GPR_U32(ctx, 31, 0x53E218u);
    ctx->pc = 0x53E214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E210u;
            // 0x53e214: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53E2B0u;
    if (runtime->hasFunction(0x53E2B0u)) {
        auto targetFn = runtime->lookupFunction(0x53E2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E218u; }
        if (ctx->pc != 0x53E218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053E2B0_0x53e2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E218u; }
        if (ctx->pc != 0x53E218u) { return; }
    }
    ctx->pc = 0x53E218u;
label_53e218:
    // 0x53e218: 0x8fb00174  lw          $s0, 0x174($sp)
    ctx->pc = 0x53e218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_53e21c:
    // 0x53e21c: 0x8fb60178  lw          $s6, 0x178($sp)
    ctx->pc = 0x53e21cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_53e220:
    // 0x53e220: 0x8fb1017c  lw          $s1, 0x17C($sp)
    ctx->pc = 0x53e220u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_53e224:
    // 0x53e224: 0x8fb30180  lw          $s3, 0x180($sp)
    ctx->pc = 0x53e224u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_53e228:
    // 0x53e228: 0x8fb40184  lw          $s4, 0x184($sp)
    ctx->pc = 0x53e228u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_53e22c:
    // 0x53e22c: 0x1000000c  b           . + 4 + (0xC << 2)
label_53e230:
    if (ctx->pc == 0x53E230u) {
        ctx->pc = 0x53E230u;
            // 0x53e230: 0x8fb20170  lw          $s2, 0x170($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->pc = 0x53E234u;
        goto label_53e234;
    }
    ctx->pc = 0x53E22Cu;
    {
        const bool branch_taken_0x53e22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53E230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E22Cu;
            // 0x53e230: 0x8fb20170  lw          $s2, 0x170($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53e22c) {
            ctx->pc = 0x53E260u;
            goto label_53e260;
        }
    }
    ctx->pc = 0x53E234u;
label_53e234:
    // 0x53e234: 0x0  nop
    ctx->pc = 0x53e234u;
    // NOP
label_53e238:
    // 0x53e238: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x53e238u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_53e23c:
    // 0x53e23c: 0x16740008  bne         $s3, $s4, . + 4 + (0x8 << 2)
label_53e240:
    if (ctx->pc == 0x53E240u) {
        ctx->pc = 0x53E244u;
        goto label_53e244;
    }
    ctx->pc = 0x53E23Cu;
    {
        const bool branch_taken_0x53e23c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x53e23c) {
            ctx->pc = 0x53E260u;
            goto label_53e260;
        }
    }
    ctx->pc = 0x53E244u;
label_53e244:
    // 0x53e244: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x53e244u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_53e248:
    // 0x53e248: 0x16510003  bne         $s2, $s1, . + 4 + (0x3 << 2)
label_53e24c:
    if (ctx->pc == 0x53E24Cu) {
        ctx->pc = 0x53E250u;
        goto label_53e250;
    }
    ctx->pc = 0x53E248u;
    {
        const bool branch_taken_0x53e248 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x53e248) {
            ctx->pc = 0x53E258u;
            goto label_53e258;
        }
    }
    ctx->pc = 0x53E250u;
label_53e250:
    // 0x53e250: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x53e250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53e254:
    // 0x53e254: 0x0  nop
    ctx->pc = 0x53e254u;
    // NOP
label_53e258:
    // 0x53e258: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x53e258u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_53e25c:
    // 0x53e25c: 0x26740200  addiu       $s4, $s3, 0x200
    ctx->pc = 0x53e25cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
label_53e260:
    // 0x53e260: 0x8ea6001c  lw          $a2, 0x1C($s5)
    ctx->pc = 0x53e260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_53e264:
    // 0x53e264: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x53e264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_53e268:
    // 0x53e268: 0xc12a7a0  jal         func_4A9E80
label_53e26c:
    if (ctx->pc == 0x53E26Cu) {
        ctx->pc = 0x53E26Cu;
            // 0x53e26c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53E270u;
        goto label_53e270;
    }
    ctx->pc = 0x53E268u;
    SET_GPR_U32(ctx, 31, 0x53E270u);
    ctx->pc = 0x53E26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53E268u;
            // 0x53e26c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E270u; }
        if (ctx->pc != 0x53E270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53E270u; }
        if (ctx->pc != 0x53E270u) { return; }
    }
    ctx->pc = 0x53E270u;
label_53e270:
    // 0x53e270: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x53e270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_53e274:
    // 0x53e274: 0x5663ffd1  bnel        $s3, $v1, . + 4 + (-0x2F << 2)
label_53e278:
    if (ctx->pc == 0x53E278u) {
        ctx->pc = 0x53E278u;
            // 0x53e278: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x53E27Cu;
        goto label_53e27c;
    }
    ctx->pc = 0x53E274u;
    {
        const bool branch_taken_0x53e274 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x53e274) {
            ctx->pc = 0x53E278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53E274u;
            // 0x53e278: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53E1BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53e1bc;
        }
    }
    ctx->pc = 0x53E27Cu;
label_53e27c:
    // 0x53e27c: 0x0  nop
    ctx->pc = 0x53e27cu;
    // NOP
label_53e280:
    // 0x53e280: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x53e280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_53e284:
    // 0x53e284: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x53e284u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_53e288:
    // 0x53e288: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x53e288u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_53e28c:
    // 0x53e28c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x53e28cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_53e290:
    // 0x53e290: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x53e290u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_53e294:
    // 0x53e294: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x53e294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_53e298:
    // 0x53e298: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53e298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53e29c:
    // 0x53e29c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53e29cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53e2a0:
    // 0x53e2a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53e2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53e2a4:
    // 0x53e2a4: 0x3e00008  jr          $ra
label_53e2a8:
    if (ctx->pc == 0x53E2A8u) {
        ctx->pc = 0x53E2A8u;
            // 0x53e2a8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x53E2ACu;
        goto label_53e2ac;
    }
    ctx->pc = 0x53E2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53E2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E2A4u;
            // 0x53e2a8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53E2ACu;
label_53e2ac:
    // 0x53e2ac: 0x0  nop
    ctx->pc = 0x53e2acu;
    // NOP
}
