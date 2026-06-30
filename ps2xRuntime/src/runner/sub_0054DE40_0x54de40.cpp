#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0054DE40
// Address: 0x54de40 - 0x54e4a0
void sub_0054DE40_0x54de40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0054DE40_0x54de40");
#endif

    switch (ctx->pc) {
        case 0x54de40u: goto label_54de40;
        case 0x54de44u: goto label_54de44;
        case 0x54de48u: goto label_54de48;
        case 0x54de4cu: goto label_54de4c;
        case 0x54de50u: goto label_54de50;
        case 0x54de54u: goto label_54de54;
        case 0x54de58u: goto label_54de58;
        case 0x54de5cu: goto label_54de5c;
        case 0x54de60u: goto label_54de60;
        case 0x54de64u: goto label_54de64;
        case 0x54de68u: goto label_54de68;
        case 0x54de6cu: goto label_54de6c;
        case 0x54de70u: goto label_54de70;
        case 0x54de74u: goto label_54de74;
        case 0x54de78u: goto label_54de78;
        case 0x54de7cu: goto label_54de7c;
        case 0x54de80u: goto label_54de80;
        case 0x54de84u: goto label_54de84;
        case 0x54de88u: goto label_54de88;
        case 0x54de8cu: goto label_54de8c;
        case 0x54de90u: goto label_54de90;
        case 0x54de94u: goto label_54de94;
        case 0x54de98u: goto label_54de98;
        case 0x54de9cu: goto label_54de9c;
        case 0x54dea0u: goto label_54dea0;
        case 0x54dea4u: goto label_54dea4;
        case 0x54dea8u: goto label_54dea8;
        case 0x54deacu: goto label_54deac;
        case 0x54deb0u: goto label_54deb0;
        case 0x54deb4u: goto label_54deb4;
        case 0x54deb8u: goto label_54deb8;
        case 0x54debcu: goto label_54debc;
        case 0x54dec0u: goto label_54dec0;
        case 0x54dec4u: goto label_54dec4;
        case 0x54dec8u: goto label_54dec8;
        case 0x54deccu: goto label_54decc;
        case 0x54ded0u: goto label_54ded0;
        case 0x54ded4u: goto label_54ded4;
        case 0x54ded8u: goto label_54ded8;
        case 0x54dedcu: goto label_54dedc;
        case 0x54dee0u: goto label_54dee0;
        case 0x54dee4u: goto label_54dee4;
        case 0x54dee8u: goto label_54dee8;
        case 0x54deecu: goto label_54deec;
        case 0x54def0u: goto label_54def0;
        case 0x54def4u: goto label_54def4;
        case 0x54def8u: goto label_54def8;
        case 0x54defcu: goto label_54defc;
        case 0x54df00u: goto label_54df00;
        case 0x54df04u: goto label_54df04;
        case 0x54df08u: goto label_54df08;
        case 0x54df0cu: goto label_54df0c;
        case 0x54df10u: goto label_54df10;
        case 0x54df14u: goto label_54df14;
        case 0x54df18u: goto label_54df18;
        case 0x54df1cu: goto label_54df1c;
        case 0x54df20u: goto label_54df20;
        case 0x54df24u: goto label_54df24;
        case 0x54df28u: goto label_54df28;
        case 0x54df2cu: goto label_54df2c;
        case 0x54df30u: goto label_54df30;
        case 0x54df34u: goto label_54df34;
        case 0x54df38u: goto label_54df38;
        case 0x54df3cu: goto label_54df3c;
        case 0x54df40u: goto label_54df40;
        case 0x54df44u: goto label_54df44;
        case 0x54df48u: goto label_54df48;
        case 0x54df4cu: goto label_54df4c;
        case 0x54df50u: goto label_54df50;
        case 0x54df54u: goto label_54df54;
        case 0x54df58u: goto label_54df58;
        case 0x54df5cu: goto label_54df5c;
        case 0x54df60u: goto label_54df60;
        case 0x54df64u: goto label_54df64;
        case 0x54df68u: goto label_54df68;
        case 0x54df6cu: goto label_54df6c;
        case 0x54df70u: goto label_54df70;
        case 0x54df74u: goto label_54df74;
        case 0x54df78u: goto label_54df78;
        case 0x54df7cu: goto label_54df7c;
        case 0x54df80u: goto label_54df80;
        case 0x54df84u: goto label_54df84;
        case 0x54df88u: goto label_54df88;
        case 0x54df8cu: goto label_54df8c;
        case 0x54df90u: goto label_54df90;
        case 0x54df94u: goto label_54df94;
        case 0x54df98u: goto label_54df98;
        case 0x54df9cu: goto label_54df9c;
        case 0x54dfa0u: goto label_54dfa0;
        case 0x54dfa4u: goto label_54dfa4;
        case 0x54dfa8u: goto label_54dfa8;
        case 0x54dfacu: goto label_54dfac;
        case 0x54dfb0u: goto label_54dfb0;
        case 0x54dfb4u: goto label_54dfb4;
        case 0x54dfb8u: goto label_54dfb8;
        case 0x54dfbcu: goto label_54dfbc;
        case 0x54dfc0u: goto label_54dfc0;
        case 0x54dfc4u: goto label_54dfc4;
        case 0x54dfc8u: goto label_54dfc8;
        case 0x54dfccu: goto label_54dfcc;
        case 0x54dfd0u: goto label_54dfd0;
        case 0x54dfd4u: goto label_54dfd4;
        case 0x54dfd8u: goto label_54dfd8;
        case 0x54dfdcu: goto label_54dfdc;
        case 0x54dfe0u: goto label_54dfe0;
        case 0x54dfe4u: goto label_54dfe4;
        case 0x54dfe8u: goto label_54dfe8;
        case 0x54dfecu: goto label_54dfec;
        case 0x54dff0u: goto label_54dff0;
        case 0x54dff4u: goto label_54dff4;
        case 0x54dff8u: goto label_54dff8;
        case 0x54dffcu: goto label_54dffc;
        case 0x54e000u: goto label_54e000;
        case 0x54e004u: goto label_54e004;
        case 0x54e008u: goto label_54e008;
        case 0x54e00cu: goto label_54e00c;
        case 0x54e010u: goto label_54e010;
        case 0x54e014u: goto label_54e014;
        case 0x54e018u: goto label_54e018;
        case 0x54e01cu: goto label_54e01c;
        case 0x54e020u: goto label_54e020;
        case 0x54e024u: goto label_54e024;
        case 0x54e028u: goto label_54e028;
        case 0x54e02cu: goto label_54e02c;
        case 0x54e030u: goto label_54e030;
        case 0x54e034u: goto label_54e034;
        case 0x54e038u: goto label_54e038;
        case 0x54e03cu: goto label_54e03c;
        case 0x54e040u: goto label_54e040;
        case 0x54e044u: goto label_54e044;
        case 0x54e048u: goto label_54e048;
        case 0x54e04cu: goto label_54e04c;
        case 0x54e050u: goto label_54e050;
        case 0x54e054u: goto label_54e054;
        case 0x54e058u: goto label_54e058;
        case 0x54e05cu: goto label_54e05c;
        case 0x54e060u: goto label_54e060;
        case 0x54e064u: goto label_54e064;
        case 0x54e068u: goto label_54e068;
        case 0x54e06cu: goto label_54e06c;
        case 0x54e070u: goto label_54e070;
        case 0x54e074u: goto label_54e074;
        case 0x54e078u: goto label_54e078;
        case 0x54e07cu: goto label_54e07c;
        case 0x54e080u: goto label_54e080;
        case 0x54e084u: goto label_54e084;
        case 0x54e088u: goto label_54e088;
        case 0x54e08cu: goto label_54e08c;
        case 0x54e090u: goto label_54e090;
        case 0x54e094u: goto label_54e094;
        case 0x54e098u: goto label_54e098;
        case 0x54e09cu: goto label_54e09c;
        case 0x54e0a0u: goto label_54e0a0;
        case 0x54e0a4u: goto label_54e0a4;
        case 0x54e0a8u: goto label_54e0a8;
        case 0x54e0acu: goto label_54e0ac;
        case 0x54e0b0u: goto label_54e0b0;
        case 0x54e0b4u: goto label_54e0b4;
        case 0x54e0b8u: goto label_54e0b8;
        case 0x54e0bcu: goto label_54e0bc;
        case 0x54e0c0u: goto label_54e0c0;
        case 0x54e0c4u: goto label_54e0c4;
        case 0x54e0c8u: goto label_54e0c8;
        case 0x54e0ccu: goto label_54e0cc;
        case 0x54e0d0u: goto label_54e0d0;
        case 0x54e0d4u: goto label_54e0d4;
        case 0x54e0d8u: goto label_54e0d8;
        case 0x54e0dcu: goto label_54e0dc;
        case 0x54e0e0u: goto label_54e0e0;
        case 0x54e0e4u: goto label_54e0e4;
        case 0x54e0e8u: goto label_54e0e8;
        case 0x54e0ecu: goto label_54e0ec;
        case 0x54e0f0u: goto label_54e0f0;
        case 0x54e0f4u: goto label_54e0f4;
        case 0x54e0f8u: goto label_54e0f8;
        case 0x54e0fcu: goto label_54e0fc;
        case 0x54e100u: goto label_54e100;
        case 0x54e104u: goto label_54e104;
        case 0x54e108u: goto label_54e108;
        case 0x54e10cu: goto label_54e10c;
        case 0x54e110u: goto label_54e110;
        case 0x54e114u: goto label_54e114;
        case 0x54e118u: goto label_54e118;
        case 0x54e11cu: goto label_54e11c;
        case 0x54e120u: goto label_54e120;
        case 0x54e124u: goto label_54e124;
        case 0x54e128u: goto label_54e128;
        case 0x54e12cu: goto label_54e12c;
        case 0x54e130u: goto label_54e130;
        case 0x54e134u: goto label_54e134;
        case 0x54e138u: goto label_54e138;
        case 0x54e13cu: goto label_54e13c;
        case 0x54e140u: goto label_54e140;
        case 0x54e144u: goto label_54e144;
        case 0x54e148u: goto label_54e148;
        case 0x54e14cu: goto label_54e14c;
        case 0x54e150u: goto label_54e150;
        case 0x54e154u: goto label_54e154;
        case 0x54e158u: goto label_54e158;
        case 0x54e15cu: goto label_54e15c;
        case 0x54e160u: goto label_54e160;
        case 0x54e164u: goto label_54e164;
        case 0x54e168u: goto label_54e168;
        case 0x54e16cu: goto label_54e16c;
        case 0x54e170u: goto label_54e170;
        case 0x54e174u: goto label_54e174;
        case 0x54e178u: goto label_54e178;
        case 0x54e17cu: goto label_54e17c;
        case 0x54e180u: goto label_54e180;
        case 0x54e184u: goto label_54e184;
        case 0x54e188u: goto label_54e188;
        case 0x54e18cu: goto label_54e18c;
        case 0x54e190u: goto label_54e190;
        case 0x54e194u: goto label_54e194;
        case 0x54e198u: goto label_54e198;
        case 0x54e19cu: goto label_54e19c;
        case 0x54e1a0u: goto label_54e1a0;
        case 0x54e1a4u: goto label_54e1a4;
        case 0x54e1a8u: goto label_54e1a8;
        case 0x54e1acu: goto label_54e1ac;
        case 0x54e1b0u: goto label_54e1b0;
        case 0x54e1b4u: goto label_54e1b4;
        case 0x54e1b8u: goto label_54e1b8;
        case 0x54e1bcu: goto label_54e1bc;
        case 0x54e1c0u: goto label_54e1c0;
        case 0x54e1c4u: goto label_54e1c4;
        case 0x54e1c8u: goto label_54e1c8;
        case 0x54e1ccu: goto label_54e1cc;
        case 0x54e1d0u: goto label_54e1d0;
        case 0x54e1d4u: goto label_54e1d4;
        case 0x54e1d8u: goto label_54e1d8;
        case 0x54e1dcu: goto label_54e1dc;
        case 0x54e1e0u: goto label_54e1e0;
        case 0x54e1e4u: goto label_54e1e4;
        case 0x54e1e8u: goto label_54e1e8;
        case 0x54e1ecu: goto label_54e1ec;
        case 0x54e1f0u: goto label_54e1f0;
        case 0x54e1f4u: goto label_54e1f4;
        case 0x54e1f8u: goto label_54e1f8;
        case 0x54e1fcu: goto label_54e1fc;
        case 0x54e200u: goto label_54e200;
        case 0x54e204u: goto label_54e204;
        case 0x54e208u: goto label_54e208;
        case 0x54e20cu: goto label_54e20c;
        case 0x54e210u: goto label_54e210;
        case 0x54e214u: goto label_54e214;
        case 0x54e218u: goto label_54e218;
        case 0x54e21cu: goto label_54e21c;
        case 0x54e220u: goto label_54e220;
        case 0x54e224u: goto label_54e224;
        case 0x54e228u: goto label_54e228;
        case 0x54e22cu: goto label_54e22c;
        case 0x54e230u: goto label_54e230;
        case 0x54e234u: goto label_54e234;
        case 0x54e238u: goto label_54e238;
        case 0x54e23cu: goto label_54e23c;
        case 0x54e240u: goto label_54e240;
        case 0x54e244u: goto label_54e244;
        case 0x54e248u: goto label_54e248;
        case 0x54e24cu: goto label_54e24c;
        case 0x54e250u: goto label_54e250;
        case 0x54e254u: goto label_54e254;
        case 0x54e258u: goto label_54e258;
        case 0x54e25cu: goto label_54e25c;
        case 0x54e260u: goto label_54e260;
        case 0x54e264u: goto label_54e264;
        case 0x54e268u: goto label_54e268;
        case 0x54e26cu: goto label_54e26c;
        case 0x54e270u: goto label_54e270;
        case 0x54e274u: goto label_54e274;
        case 0x54e278u: goto label_54e278;
        case 0x54e27cu: goto label_54e27c;
        case 0x54e280u: goto label_54e280;
        case 0x54e284u: goto label_54e284;
        case 0x54e288u: goto label_54e288;
        case 0x54e28cu: goto label_54e28c;
        case 0x54e290u: goto label_54e290;
        case 0x54e294u: goto label_54e294;
        case 0x54e298u: goto label_54e298;
        case 0x54e29cu: goto label_54e29c;
        case 0x54e2a0u: goto label_54e2a0;
        case 0x54e2a4u: goto label_54e2a4;
        case 0x54e2a8u: goto label_54e2a8;
        case 0x54e2acu: goto label_54e2ac;
        case 0x54e2b0u: goto label_54e2b0;
        case 0x54e2b4u: goto label_54e2b4;
        case 0x54e2b8u: goto label_54e2b8;
        case 0x54e2bcu: goto label_54e2bc;
        case 0x54e2c0u: goto label_54e2c0;
        case 0x54e2c4u: goto label_54e2c4;
        case 0x54e2c8u: goto label_54e2c8;
        case 0x54e2ccu: goto label_54e2cc;
        case 0x54e2d0u: goto label_54e2d0;
        case 0x54e2d4u: goto label_54e2d4;
        case 0x54e2d8u: goto label_54e2d8;
        case 0x54e2dcu: goto label_54e2dc;
        case 0x54e2e0u: goto label_54e2e0;
        case 0x54e2e4u: goto label_54e2e4;
        case 0x54e2e8u: goto label_54e2e8;
        case 0x54e2ecu: goto label_54e2ec;
        case 0x54e2f0u: goto label_54e2f0;
        case 0x54e2f4u: goto label_54e2f4;
        case 0x54e2f8u: goto label_54e2f8;
        case 0x54e2fcu: goto label_54e2fc;
        case 0x54e300u: goto label_54e300;
        case 0x54e304u: goto label_54e304;
        case 0x54e308u: goto label_54e308;
        case 0x54e30cu: goto label_54e30c;
        case 0x54e310u: goto label_54e310;
        case 0x54e314u: goto label_54e314;
        case 0x54e318u: goto label_54e318;
        case 0x54e31cu: goto label_54e31c;
        case 0x54e320u: goto label_54e320;
        case 0x54e324u: goto label_54e324;
        case 0x54e328u: goto label_54e328;
        case 0x54e32cu: goto label_54e32c;
        case 0x54e330u: goto label_54e330;
        case 0x54e334u: goto label_54e334;
        case 0x54e338u: goto label_54e338;
        case 0x54e33cu: goto label_54e33c;
        case 0x54e340u: goto label_54e340;
        case 0x54e344u: goto label_54e344;
        case 0x54e348u: goto label_54e348;
        case 0x54e34cu: goto label_54e34c;
        case 0x54e350u: goto label_54e350;
        case 0x54e354u: goto label_54e354;
        case 0x54e358u: goto label_54e358;
        case 0x54e35cu: goto label_54e35c;
        case 0x54e360u: goto label_54e360;
        case 0x54e364u: goto label_54e364;
        case 0x54e368u: goto label_54e368;
        case 0x54e36cu: goto label_54e36c;
        case 0x54e370u: goto label_54e370;
        case 0x54e374u: goto label_54e374;
        case 0x54e378u: goto label_54e378;
        case 0x54e37cu: goto label_54e37c;
        case 0x54e380u: goto label_54e380;
        case 0x54e384u: goto label_54e384;
        case 0x54e388u: goto label_54e388;
        case 0x54e38cu: goto label_54e38c;
        case 0x54e390u: goto label_54e390;
        case 0x54e394u: goto label_54e394;
        case 0x54e398u: goto label_54e398;
        case 0x54e39cu: goto label_54e39c;
        case 0x54e3a0u: goto label_54e3a0;
        case 0x54e3a4u: goto label_54e3a4;
        case 0x54e3a8u: goto label_54e3a8;
        case 0x54e3acu: goto label_54e3ac;
        case 0x54e3b0u: goto label_54e3b0;
        case 0x54e3b4u: goto label_54e3b4;
        case 0x54e3b8u: goto label_54e3b8;
        case 0x54e3bcu: goto label_54e3bc;
        case 0x54e3c0u: goto label_54e3c0;
        case 0x54e3c4u: goto label_54e3c4;
        case 0x54e3c8u: goto label_54e3c8;
        case 0x54e3ccu: goto label_54e3cc;
        case 0x54e3d0u: goto label_54e3d0;
        case 0x54e3d4u: goto label_54e3d4;
        case 0x54e3d8u: goto label_54e3d8;
        case 0x54e3dcu: goto label_54e3dc;
        case 0x54e3e0u: goto label_54e3e0;
        case 0x54e3e4u: goto label_54e3e4;
        case 0x54e3e8u: goto label_54e3e8;
        case 0x54e3ecu: goto label_54e3ec;
        case 0x54e3f0u: goto label_54e3f0;
        case 0x54e3f4u: goto label_54e3f4;
        case 0x54e3f8u: goto label_54e3f8;
        case 0x54e3fcu: goto label_54e3fc;
        case 0x54e400u: goto label_54e400;
        case 0x54e404u: goto label_54e404;
        case 0x54e408u: goto label_54e408;
        case 0x54e40cu: goto label_54e40c;
        case 0x54e410u: goto label_54e410;
        case 0x54e414u: goto label_54e414;
        case 0x54e418u: goto label_54e418;
        case 0x54e41cu: goto label_54e41c;
        case 0x54e420u: goto label_54e420;
        case 0x54e424u: goto label_54e424;
        case 0x54e428u: goto label_54e428;
        case 0x54e42cu: goto label_54e42c;
        case 0x54e430u: goto label_54e430;
        case 0x54e434u: goto label_54e434;
        case 0x54e438u: goto label_54e438;
        case 0x54e43cu: goto label_54e43c;
        case 0x54e440u: goto label_54e440;
        case 0x54e444u: goto label_54e444;
        case 0x54e448u: goto label_54e448;
        case 0x54e44cu: goto label_54e44c;
        case 0x54e450u: goto label_54e450;
        case 0x54e454u: goto label_54e454;
        case 0x54e458u: goto label_54e458;
        case 0x54e45cu: goto label_54e45c;
        case 0x54e460u: goto label_54e460;
        case 0x54e464u: goto label_54e464;
        case 0x54e468u: goto label_54e468;
        case 0x54e46cu: goto label_54e46c;
        case 0x54e470u: goto label_54e470;
        case 0x54e474u: goto label_54e474;
        case 0x54e478u: goto label_54e478;
        case 0x54e47cu: goto label_54e47c;
        case 0x54e480u: goto label_54e480;
        case 0x54e484u: goto label_54e484;
        case 0x54e488u: goto label_54e488;
        case 0x54e48cu: goto label_54e48c;
        case 0x54e490u: goto label_54e490;
        case 0x54e494u: goto label_54e494;
        case 0x54e498u: goto label_54e498;
        case 0x54e49cu: goto label_54e49c;
        default: break;
    }

    ctx->pc = 0x54de40u;

label_54de40:
    // 0x54de40: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x54de40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_54de44:
    // 0x54de44: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54de44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54de48:
    // 0x54de48: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x54de48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_54de4c:
    // 0x54de4c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x54de4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_54de50:
    // 0x54de50: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x54de50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_54de54:
    // 0x54de54: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x54de54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_54de58:
    // 0x54de58: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x54de58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_54de5c:
    // 0x54de5c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x54de5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_54de60:
    // 0x54de60: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x54de60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_54de64:
    // 0x54de64: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x54de64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_54de68:
    // 0x54de68: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x54de68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_54de6c:
    // 0x54de6c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x54de6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_54de70:
    // 0x54de70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x54de70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_54de74:
    // 0x54de74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x54de74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_54de78:
    // 0x54de78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x54de78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54de7c:
    // 0x54de7c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x54de7cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_54de80:
    // 0x54de80: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x54de80u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_54de84:
    // 0x54de84: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x54de84u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_54de88:
    // 0x54de88: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x54de88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_54de8c:
    // 0x54de8c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x54de8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_54de90:
    // 0x54de90: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x54de90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_54de94:
    // 0x54de94: 0x9451db18  lhu         $s1, -0x24E8($v0)
    ctx->pc = 0x54de94u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957848)));
label_54de98:
    // 0x54de98: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x54de98u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_54de9c:
    // 0x54de9c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54dea0:
    // 0x54dea0: 0x9450db1a  lhu         $s0, -0x24E6($v0)
    ctx->pc = 0x54dea0u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957850)));
label_54dea4:
    // 0x54dea4: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x54dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_54dea8:
    // 0x54dea8: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x54dea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_54deac:
    // 0x54deac: 0xc0506ac  jal         func_141AB0
label_54deb0:
    if (ctx->pc == 0x54DEB0u) {
        ctx->pc = 0x54DEB0u;
            // 0x54deb0: 0x46006d86  mov.s       $f22, $f13 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x54DEB4u;
        goto label_54deb4;
    }
    ctx->pc = 0x54DEACu;
    SET_GPR_U32(ctx, 31, 0x54DEB4u);
    ctx->pc = 0x54DEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54DEACu;
            // 0x54deb0: 0x46006d86  mov.s       $f22, $f13 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54DEB4u; }
        if (ctx->pc != 0x54DEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54DEB4u; }
        if (ctx->pc != 0x54DEB4u) { return; }
    }
    ctx->pc = 0x54DEB4u;
label_54deb4:
    // 0x54deb4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54deb8:
    // 0x54deb8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54debc:
    // 0x54debc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54debcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54dec0:
    // 0x54dec0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54dec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54dec4:
    // 0x54dec4: 0x320f809  jalr        $t9
label_54dec8:
    if (ctx->pc == 0x54DEC8u) {
        ctx->pc = 0x54DEC8u;
            // 0x54dec8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54DECCu;
        goto label_54decc;
    }
    ctx->pc = 0x54DEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54DECCu);
        ctx->pc = 0x54DEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DEC4u;
            // 0x54dec8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54DECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54DECCu; }
            if (ctx->pc != 0x54DECCu) { return; }
        }
        }
    }
    ctx->pc = 0x54DECCu;
label_54decc:
    // 0x54decc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54deccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54ded0:
    // 0x54ded0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54ded0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54ded4:
    // 0x54ded4: 0x8464d97c  lh          $a0, -0x2684($v1)
    ctx->pc = 0x54ded4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957436)));
label_54ded8:
    // 0x54ded8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54dedc:
    // 0x54dedc: 0x24a5e110  addiu       $a1, $a1, -0x1EF0
    ctx->pc = 0x54dedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959376));
label_54dee0:
    // 0x54dee0: 0xc4b40008  lwc1        $f20, 0x8($a1)
    ctx->pc = 0x54dee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54dee4:
    // 0x54dee4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x54dee4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54dee8:
    // 0x54dee8: 0x8443d97e  lh          $v1, -0x2682($v0)
    ctx->pc = 0x54dee8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957438)));
label_54deec:
    // 0x54deec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54deecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54def0:
    // 0x54def0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54def0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54def4:
    // 0x54def4: 0x4600bd40  add.s       $f21, $f23, $f0
    ctx->pc = 0x54def4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_54def8:
    // 0x54def8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54def8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54defc:
    // 0x54defc: 0x0  nop
    ctx->pc = 0x54defcu;
    // NOP
label_54df00:
    // 0x54df00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54df00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54df04:
    // 0x54df04: 0x4600b018  adda.s      $f22, $f0
    ctx->pc = 0x54df04u;
    ctx->f[31] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_54df08:
    // 0x54df08: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x54df08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54df0c:
    // 0x54df0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x54df0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54df10:
    // 0x54df10: 0x0  nop
    ctx->pc = 0x54df10u;
    // NOP
label_54df14:
    // 0x54df14: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x54df14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_54df18:
    // 0x54df18: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54df1c:
    if (ctx->pc == 0x54DF1Cu) {
        ctx->pc = 0x54DF1Cu;
            // 0x54df1c: 0x46000d9c  madd.s      $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->pc = 0x54DF20u;
        goto label_54df20;
    }
    ctx->pc = 0x54DF18u;
    {
        const bool branch_taken_0x54df18 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54DF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DF18u;
            // 0x54df1c: 0x46000d9c  madd.s      $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54df18) {
            ctx->pc = 0x54DF2Cu;
            goto label_54df2c;
        }
    }
    ctx->pc = 0x54DF20u;
label_54df20:
    // 0x54df20: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54df20u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54df24:
    // 0x54df24: 0x10000008  b           . + 4 + (0x8 << 2)
label_54df28:
    if (ctx->pc == 0x54DF28u) {
        ctx->pc = 0x54DF28u;
            // 0x54df28: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54DF2Cu;
        goto label_54df2c;
    }
    ctx->pc = 0x54DF24u;
    {
        const bool branch_taken_0x54df24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DF24u;
            // 0x54df28: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54df24) {
            ctx->pc = 0x54DF48u;
            goto label_54df48;
        }
    }
    ctx->pc = 0x54DF2Cu;
label_54df2c:
    // 0x54df2c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54df2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54df30:
    // 0x54df30: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54df30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54df34:
    // 0x54df34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54df34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54df38:
    // 0x54df38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54df38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54df3c:
    // 0x54df3c: 0x0  nop
    ctx->pc = 0x54df3cu;
    // NOP
label_54df40:
    // 0x54df40: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54df40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54df44:
    // 0x54df44: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54df44u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54df48:
    // 0x54df48: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54df4c:
    if (ctx->pc == 0x54DF4Cu) {
        ctx->pc = 0x54DF4Cu;
            // 0x54df4c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54DF50u;
        goto label_54df50;
    }
    ctx->pc = 0x54DF48u;
    {
        const bool branch_taken_0x54df48 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54df48) {
            ctx->pc = 0x54DF4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54DF48u;
            // 0x54df4c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54DF5Cu;
            goto label_54df5c;
        }
    }
    ctx->pc = 0x54DF50u;
label_54df50:
    // 0x54df50: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54df50u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54df54:
    // 0x54df54: 0x10000007  b           . + 4 + (0x7 << 2)
label_54df58:
    if (ctx->pc == 0x54DF58u) {
        ctx->pc = 0x54DF58u;
            // 0x54df58: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54DF5Cu;
        goto label_54df5c;
    }
    ctx->pc = 0x54DF54u;
    {
        const bool branch_taken_0x54df54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DF54u;
            // 0x54df58: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54df54) {
            ctx->pc = 0x54DF74u;
            goto label_54df74;
        }
    }
    ctx->pc = 0x54DF5Cu;
label_54df5c:
    // 0x54df5c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54df5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54df60:
    // 0x54df60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54df60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54df64:
    // 0x54df64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54df64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54df68:
    // 0x54df68: 0x0  nop
    ctx->pc = 0x54df68u;
    // NOP
label_54df6c:
    // 0x54df6c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54df6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54df70:
    // 0x54df70: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54df70u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54df74:
    // 0x54df74: 0x4602b341  sub.s       $f13, $f22, $f2
    ctx->pc = 0x54df74u;
    ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[2]);
label_54df78:
    // 0x54df78: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54df78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54df7c:
    // 0x54df7c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54df80:
    // 0x54df80: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54df80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54df84:
    // 0x54df84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54df84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54df88:
    // 0x54df88: 0x4602b3c0  add.s       $f15, $f22, $f2
    ctx->pc = 0x54df88u;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[2]);
label_54df8c:
    // 0x54df8c: 0x4614ab80  add.s       $f14, $f21, $f20
    ctx->pc = 0x54df8cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_54df90:
    // 0x54df90: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54df90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54df94:
    // 0x54df94: 0xc0bc284  jal         func_2F0A10
label_54df98:
    if (ctx->pc == 0x54DF98u) {
        ctx->pc = 0x54DF98u;
            // 0x54df98: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x54DF9Cu;
        goto label_54df9c;
    }
    ctx->pc = 0x54DF94u;
    SET_GPR_U32(ctx, 31, 0x54DF9Cu);
    ctx->pc = 0x54DF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54DF94u;
            // 0x54df98: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54DF9Cu; }
        if (ctx->pc != 0x54DF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54DF9Cu; }
        if (ctx->pc != 0x54DF9Cu) { return; }
    }
    ctx->pc = 0x54DF9Cu;
label_54df9c:
    // 0x54df9c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54df9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54dfa0:
    // 0x54dfa0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x54dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_54dfa4:
    // 0x54dfa4: 0x24a5e160  addiu       $a1, $a1, -0x1EA0
    ctx->pc = 0x54dfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959456));
label_54dfa8:
    // 0x54dfa8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54dfac:
    // 0x54dfac: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x54dfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54dfb0:
    // 0x54dfb0: 0x9042d996  lbu         $v0, -0x266A($v0)
    ctx->pc = 0x54dfb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957462)));
label_54dfb4:
    // 0x54dfb4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x54dfb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54dfb8:
    // 0x54dfb8: 0x4614ad40  add.s       $f21, $f21, $f20
    ctx->pc = 0x54dfb8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_54dfbc:
    // 0x54dfbc: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x54dfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_54dfc0:
    // 0x54dfc0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_54dfc4:
    if (ctx->pc == 0x54DFC4u) {
        ctx->pc = 0x54DFC4u;
            // 0x54dfc4: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x54DFC8u;
        goto label_54dfc8;
    }
    ctx->pc = 0x54DFC0u;
    {
        const bool branch_taken_0x54dfc0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x54DFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DFC0u;
            // 0x54dfc4: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dfc0) {
            ctx->pc = 0x54DFD4u;
            goto label_54dfd4;
        }
    }
    ctx->pc = 0x54DFC8u;
label_54dfc8:
    // 0x54dfc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x54dfc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54dfcc:
    // 0x54dfcc: 0x10000008  b           . + 4 + (0x8 << 2)
label_54dfd0:
    if (ctx->pc == 0x54DFD0u) {
        ctx->pc = 0x54DFD0u;
            // 0x54dfd0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54DFD4u;
        goto label_54dfd4;
    }
    ctx->pc = 0x54DFCCu;
    {
        const bool branch_taken_0x54dfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54DFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DFCCu;
            // 0x54dfd0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dfcc) {
            ctx->pc = 0x54DFF0u;
            goto label_54dff0;
        }
    }
    ctx->pc = 0x54DFD4u;
label_54dfd4:
    // 0x54dfd4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x54dfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_54dfd8:
    // 0x54dfd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x54dfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_54dfdc:
    // 0x54dfdc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54dfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54dfe0:
    // 0x54dfe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54dfe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54dfe4:
    // 0x54dfe4: 0x0  nop
    ctx->pc = 0x54dfe4u;
    // NOP
label_54dfe8:
    // 0x54dfe8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54dfe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54dfec:
    // 0x54dfec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x54dfecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_54dff0:
    // 0x54dff0: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54dff4:
    if (ctx->pc == 0x54DFF4u) {
        ctx->pc = 0x54DFF4u;
            // 0x54dff4: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x54DFF8u;
        goto label_54dff8;
    }
    ctx->pc = 0x54DFF0u;
    {
        const bool branch_taken_0x54dff0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54DFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DFF0u;
            // 0x54dff4: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dff0) {
            ctx->pc = 0x54E004u;
            goto label_54e004;
        }
    }
    ctx->pc = 0x54DFF8u;
label_54dff8:
    // 0x54dff8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54dff8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54dffc:
    // 0x54dffc: 0x10000008  b           . + 4 + (0x8 << 2)
label_54e000:
    if (ctx->pc == 0x54E000u) {
        ctx->pc = 0x54E000u;
            // 0x54e000: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54E004u;
        goto label_54e004;
    }
    ctx->pc = 0x54DFFCu;
    {
        const bool branch_taken_0x54dffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54DFFCu;
            // 0x54e000: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54dffc) {
            ctx->pc = 0x54E020u;
            goto label_54e020;
        }
    }
    ctx->pc = 0x54E004u;
label_54e004:
    // 0x54e004: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54e004u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54e008:
    // 0x54e008: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54e008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54e00c:
    // 0x54e00c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54e00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54e010:
    // 0x54e010: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54e010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e014:
    // 0x54e014: 0x0  nop
    ctx->pc = 0x54e014u;
    // NOP
label_54e018:
    // 0x54e018: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54e018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54e01c:
    // 0x54e01c: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54e01cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54e020:
    // 0x54e020: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54e024:
    if (ctx->pc == 0x54E024u) {
        ctx->pc = 0x54E024u;
            // 0x54e024: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54E028u;
        goto label_54e028;
    }
    ctx->pc = 0x54E020u;
    {
        const bool branch_taken_0x54e020 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54e020) {
            ctx->pc = 0x54E024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54E020u;
            // 0x54e024: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54E034u;
            goto label_54e034;
        }
    }
    ctx->pc = 0x54E028u;
label_54e028:
    // 0x54e028: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54e028u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e02c:
    // 0x54e02c: 0x10000007  b           . + 4 + (0x7 << 2)
label_54e030:
    if (ctx->pc == 0x54E030u) {
        ctx->pc = 0x54E030u;
            // 0x54e030: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54E034u;
        goto label_54e034;
    }
    ctx->pc = 0x54E02Cu;
    {
        const bool branch_taken_0x54e02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E02Cu;
            // 0x54e030: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e02c) {
            ctx->pc = 0x54E04Cu;
            goto label_54e04c;
        }
    }
    ctx->pc = 0x54E034u;
label_54e034:
    // 0x54e034: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54e034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54e038:
    // 0x54e038: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54e038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54e03c:
    // 0x54e03c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54e03cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e040:
    // 0x54e040: 0x0  nop
    ctx->pc = 0x54e040u;
    // NOP
label_54e044:
    // 0x54e044: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54e044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54e048:
    // 0x54e048: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54e048u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54e04c:
    // 0x54e04c: 0x460c1380  add.s       $f14, $f2, $f12
    ctx->pc = 0x54e04cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
label_54e050:
    // 0x54e050: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54e050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54e054:
    // 0x54e054: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54e054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54e058:
    // 0x54e058: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54e058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54e05c:
    // 0x54e05c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54e05cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54e060:
    // 0x54e060: 0x4601b341  sub.s       $f13, $f22, $f1
    ctx->pc = 0x54e060u;
    ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
label_54e064:
    // 0x54e064: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54e064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54e068:
    // 0x54e068: 0xc0bc284  jal         func_2F0A10
label_54e06c:
    if (ctx->pc == 0x54E06Cu) {
        ctx->pc = 0x54E06Cu;
            // 0x54e06c: 0x4601b3c0  add.s       $f15, $f22, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
        ctx->pc = 0x54E070u;
        goto label_54e070;
    }
    ctx->pc = 0x54E068u;
    SET_GPR_U32(ctx, 31, 0x54E070u);
    ctx->pc = 0x54E06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54E068u;
            // 0x54e06c: 0x4601b3c0  add.s       $f15, $f22, $f1 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E070u; }
        if (ctx->pc != 0x54E070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E070u; }
        if (ctx->pc != 0x54E070u) { return; }
    }
    ctx->pc = 0x54E070u;
label_54e070:
    // 0x54e070: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54e070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54e074:
    // 0x54e074: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54e074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54e078:
    // 0x54e078: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54e078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54e07c:
    // 0x54e07c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x54e07cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_54e080:
    // 0x54e080: 0x320f809  jalr        $t9
label_54e084:
    if (ctx->pc == 0x54E084u) {
        ctx->pc = 0x54E088u;
        goto label_54e088;
    }
    ctx->pc = 0x54E080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54E088u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54E088u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54E088u; }
            if (ctx->pc != 0x54E088u) { return; }
        }
        }
    }
    ctx->pc = 0x54E088u;
label_54e088:
    // 0x54e088: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x54e088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_54e08c:
    // 0x54e08c: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x54e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_54e090:
    // 0x54e090: 0x246398e0  addiu       $v1, $v1, -0x6720
    ctx->pc = 0x54e090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940896));
label_54e094:
    // 0x54e094: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x54e094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_54e098:
    // 0x54e098: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x54e098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
label_54e09c:
    // 0x54e09c: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x54e09cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_54e0a0:
    // 0x54e0a0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x54e0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_54e0a4:
    // 0x54e0a4: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x54e0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_54e0a8:
    // 0x54e0a8: 0x2463a2a0  addiu       $v1, $v1, -0x5D60
    ctx->pc = 0x54e0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943392));
label_54e0ac:
    // 0x54e0ac: 0x3c1e0064  lui         $fp, 0x64
    ctx->pc = 0x54e0acu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)100 << 16));
label_54e0b0:
    // 0x54e0b0: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x54e0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_54e0b4:
    // 0x54e0b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x54e0b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e0b8:
    // 0x54e0b8: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x54e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_54e0bc:
    // 0x54e0bc: 0x27de2114  addiu       $fp, $fp, 0x2114
    ctx->pc = 0x54e0bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8468));
label_54e0c0:
    // 0x54e0c0: 0x2463211c  addiu       $v1, $v1, 0x211C
    ctx->pc = 0x54e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8476));
label_54e0c4:
    // 0x54e0c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x54e0c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54e0c8:
    // 0x54e0c8: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x54e0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
label_54e0cc:
    // 0x54e0cc: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x54e0ccu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_54e0d0:
    // 0x54e0d0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x54e0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_54e0d4:
    // 0x54e0d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x54e0d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54e0d8:
    // 0x54e0d8: 0x2463a3e0  addiu       $v1, $v1, -0x5C20
    ctx->pc = 0x54e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943712));
label_54e0dc:
    // 0x54e0dc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x54e0dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54e0e0:
    // 0x54e0e0: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x54e0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_54e0e4:
    // 0x54e0e4: 0x24170018  addiu       $s7, $zero, 0x18
    ctx->pc = 0x54e0e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_54e0e8:
    // 0x54e0e8: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x54e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_54e0ec:
    // 0x54e0ec: 0x24632120  addiu       $v1, $v1, 0x2120
    ctx->pc = 0x54e0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8480));
label_54e0f0:
    // 0x54e0f0: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x54e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_54e0f4:
    // 0x54e0f4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x54e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_54e0f8:
    // 0x54e0f8: 0x24631490  addiu       $v1, $v1, 0x1490
    ctx->pc = 0x54e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5264));
label_54e0fc:
    // 0x54e0fc: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x54e0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_54e100:
    // 0x54e100: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x54e100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_54e104:
    // 0x54e104: 0x24b60004  addiu       $s6, $a1, 0x4
    ctx->pc = 0x54e104u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_54e108:
    // 0x54e108: 0x8463d980  lh          $v1, -0x2680($v1)
    ctx->pc = 0x54e108u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957440)));
label_54e10c:
    // 0x54e10c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54e10cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e110:
    // 0x54e110: 0x0  nop
    ctx->pc = 0x54e110u;
    // NOP
label_54e114:
    // 0x54e114: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54e114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54e118:
    // 0x54e118: 0x4600bd00  add.s       $f20, $f23, $f0
    ctx->pc = 0x54e118u;
    ctx->f[20] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_54e11c:
    // 0x54e11c: 0x8ec4002c  lw          $a0, 0x2C($s6)
    ctx->pc = 0x54e11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
label_54e120:
    // 0x54e120: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x54e120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54e124:
    // 0x54e124: 0x1083007c  beq         $a0, $v1, . + 4 + (0x7C << 2)
label_54e128:
    if (ctx->pc == 0x54E128u) {
        ctx->pc = 0x54E12Cu;
        goto label_54e12c;
    }
    ctx->pc = 0x54E124u;
    {
        const bool branch_taken_0x54e124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x54e124) {
            ctx->pc = 0x54E318u;
            goto label_54e318;
        }
    }
    ctx->pc = 0x54E12Cu;
label_54e12c:
    // 0x54e12c: 0xc078cf0  jal         func_1E33C0
label_54e130:
    if (ctx->pc == 0x54E130u) {
        ctx->pc = 0x54E134u;
        goto label_54e134;
    }
    ctx->pc = 0x54E12Cu;
    SET_GPR_U32(ctx, 31, 0x54E134u);
    ctx->pc = 0x1E33C0u;
    if (runtime->hasFunction(0x1E33C0u)) {
        auto targetFn = runtime->lookupFunction(0x1E33C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E134u; }
        if (ctx->pc != 0x54E134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E33C0_0x1e33c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E134u; }
        if (ctx->pc != 0x54E134u) { return; }
    }
    ctx->pc = 0x54E134u;
label_54e134:
    // 0x54e134: 0x26e3ffe8  addiu       $v1, $s7, -0x18
    ctx->pc = 0x54e134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967272));
label_54e138:
    // 0x54e138: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x54e138u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_54e13c:
    // 0x54e13c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54e13cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e140:
    // 0x54e140: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x54e140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_54e144:
    // 0x54e144: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54e144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54e148:
    // 0x54e148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x54e148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54e14c:
    // 0x54e14c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x54e14cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_54e150:
    // 0x54e150: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x54e150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_54e154:
    // 0x54e154: 0xc0506ac  jal         func_141AB0
label_54e158:
    if (ctx->pc == 0x54E158u) {
        ctx->pc = 0x54E158u;
            // 0x54e158: 0x4600b540  add.s       $f21, $f22, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->pc = 0x54E15Cu;
        goto label_54e15c;
    }
    ctx->pc = 0x54E154u;
    SET_GPR_U32(ctx, 31, 0x54E15Cu);
    ctx->pc = 0x54E158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54E154u;
            // 0x54e158: 0x4600b540  add.s       $f21, $f22, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E15Cu; }
        if (ctx->pc != 0x54E15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E15Cu; }
        if (ctx->pc != 0x54E15Cu) { return; }
    }
    ctx->pc = 0x54E15Cu;
label_54e15c:
    // 0x54e15c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54e160:
    // 0x54e160: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54e160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54e164:
    // 0x54e164: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54e164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54e168:
    // 0x54e168: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54e168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54e16c:
    // 0x54e16c: 0x320f809  jalr        $t9
label_54e170:
    if (ctx->pc == 0x54E170u) {
        ctx->pc = 0x54E170u;
            // 0x54e170: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54E174u;
        goto label_54e174;
    }
    ctx->pc = 0x54E16Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54E174u);
        ctx->pc = 0x54E170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E16Cu;
            // 0x54e170: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54E174u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54E174u; }
            if (ctx->pc != 0x54E174u) { return; }
        }
        }
    }
    ctx->pc = 0x54E174u;
label_54e174:
    // 0x54e174: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x54e174u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_54e178:
    // 0x54e178: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x54e178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_54e17c:
    // 0x54e17c: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x54e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_54e180:
    // 0x54e180: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54e180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54e184:
    // 0x54e184: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x54e184u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_54e188:
    // 0x54e188: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54e188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54e18c:
    // 0x54e18c: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x54e18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_54e190:
    // 0x54e190: 0x87c40000  lh          $a0, 0x0($fp)
    ctx->pc = 0x54e190u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
label_54e194:
    // 0x54e194: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x54e194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_54e198:
    // 0x54e198: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x54e198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_54e19c:
    // 0x54e19c: 0x87c30002  lh          $v1, 0x2($fp)
    ctx->pc = 0x54e19cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_54e1a0:
    // 0x54e1a0: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x54e1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_54e1a4:
    // 0x54e1a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54e1a8:
    // 0x54e1a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x54e1a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e1ac:
    // 0x54e1ac: 0x0  nop
    ctx->pc = 0x54e1acu;
    // NOP
label_54e1b0:
    // 0x54e1b0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54e1b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54e1b4:
    // 0x54e1b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54e1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54e1b8:
    // 0x54e1b8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x54e1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_54e1bc:
    // 0x54e1bc: 0x46031602  mul.s       $f24, $f2, $f3
    ctx->pc = 0x54e1bcu;
    ctx->f[24] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_54e1c0:
    // 0x54e1c0: 0x46030dc2  mul.s       $f23, $f1, $f3
    ctx->pc = 0x54e1c0u;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_54e1c4:
    // 0x54e1c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54e1c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e1c8:
    // 0x54e1c8: 0x0  nop
    ctx->pc = 0x54e1c8u;
    // NOP
label_54e1cc:
    // 0x54e1cc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54e1ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54e1d0:
    // 0x54e1d0: 0x4618a380  add.s       $f14, $f20, $f24
    ctx->pc = 0x54e1d0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
label_54e1d4:
    // 0x54e1d4: 0x4617abc0  add.s       $f15, $f21, $f23
    ctx->pc = 0x54e1d4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_54e1d8:
    // 0x54e1d8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54e1d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54e1dc:
    // 0x54e1dc: 0xc0bc284  jal         func_2F0A10
label_54e1e0:
    if (ctx->pc == 0x54E1E0u) {
        ctx->pc = 0x54E1E0u;
            // 0x54e1e0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x54E1E4u;
        goto label_54e1e4;
    }
    ctx->pc = 0x54E1DCu;
    SET_GPR_U32(ctx, 31, 0x54E1E4u);
    ctx->pc = 0x54E1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54E1DCu;
            // 0x54e1e0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E1E4u; }
        if (ctx->pc != 0x54E1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E1E4u; }
        if (ctx->pc != 0x54E1E4u) { return; }
    }
    ctx->pc = 0x54E1E4u;
label_54e1e4:
    // 0x54e1e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54e1e8:
    // 0x54e1e8: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54e1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54e1ec:
    // 0x54e1ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54e1ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54e1f0:
    // 0x54e1f0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x54e1f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_54e1f4:
    // 0x54e1f4: 0x320f809  jalr        $t9
label_54e1f8:
    if (ctx->pc == 0x54E1F8u) {
        ctx->pc = 0x54E1FCu;
        goto label_54e1fc;
    }
    ctx->pc = 0x54E1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54E1FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54E1FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54E1FCu; }
            if (ctx->pc != 0x54E1FCu) { return; }
        }
        }
    }
    ctx->pc = 0x54E1FCu;
label_54e1fc:
    // 0x54e1fc: 0x4618a640  add.s       $f25, $f20, $f24
    ctx->pc = 0x54e1fcu;
    ctx->f[25] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
label_54e200:
    // 0x54e200: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54e200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54e204:
    // 0x54e204: 0x2a61000e  slti        $at, $s3, 0xE
    ctx->pc = 0x54e204u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)14) ? 1 : 0);
label_54e208:
    // 0x54e208: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x54e208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e20c:
    // 0x54e20c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x54e20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54e210:
    // 0x54e210: 0x0  nop
    ctx->pc = 0x54e210u;
    // NOP
label_54e214:
    // 0x54e214: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x54e214u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_54e218:
    // 0x54e218: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_54e21c:
    if (ctx->pc == 0x54E21Cu) {
        ctx->pc = 0x54E21Cu;
            // 0x54e21c: 0x46170e1c  madd.s      $f24, $f1, $f23 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[23]));
        ctx->pc = 0x54E220u;
        goto label_54e220;
    }
    ctx->pc = 0x54E218u;
    {
        const bool branch_taken_0x54e218 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E218u;
            // 0x54e21c: 0x46170e1c  madd.s      $f24, $f1, $f23 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[23]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e218) {
            ctx->pc = 0x54E248u;
            goto label_54e248;
        }
    }
    ctx->pc = 0x54E220u;
label_54e220:
    // 0x54e220: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x54e220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_54e224:
    // 0x54e224: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x54e224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_54e228:
    // 0x54e228: 0xc0506ac  jal         func_141AB0
label_54e22c:
    if (ctx->pc == 0x54E22Cu) {
        ctx->pc = 0x54E22Cu;
            // 0x54e22c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x54E230u;
        goto label_54e230;
    }
    ctx->pc = 0x54E228u;
    SET_GPR_U32(ctx, 31, 0x54E230u);
    ctx->pc = 0x54E22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54E228u;
            // 0x54e22c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E230u; }
        if (ctx->pc != 0x54E230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E230u; }
        if (ctx->pc != 0x54E230u) { return; }
    }
    ctx->pc = 0x54E230u;
label_54e230:
    // 0x54e230: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x54e230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_54e234:
    // 0x54e234: 0x8fb40100  lw          $s4, 0x100($sp)
    ctx->pc = 0x54e234u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_54e238:
    // 0x54e238: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x54e238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_54e23c:
    // 0x54e23c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x54e23cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_54e240:
    // 0x54e240: 0x1000000b  b           . + 4 + (0xB << 2)
label_54e244:
    if (ctx->pc == 0x54E244u) {
        ctx->pc = 0x54E244u;
            // 0x54e244: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x54E248u;
        goto label_54e248;
    }
    ctx->pc = 0x54E240u;
    {
        const bool branch_taken_0x54e240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E240u;
            // 0x54e244: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e240) {
            ctx->pc = 0x54E270u;
            goto label_54e270;
        }
    }
    ctx->pc = 0x54E248u;
label_54e248:
    // 0x54e248: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x54e248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_54e24c:
    // 0x54e24c: 0x8c44060c  lw          $a0, 0x60C($v0)
    ctx->pc = 0x54e24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1548)));
label_54e250:
    // 0x54e250: 0xc0506ac  jal         func_141AB0
label_54e254:
    if (ctx->pc == 0x54E254u) {
        ctx->pc = 0x54E254u;
            // 0x54e254: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x54E258u;
        goto label_54e258;
    }
    ctx->pc = 0x54E250u;
    SET_GPR_U32(ctx, 31, 0x54E258u);
    ctx->pc = 0x54E254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54E250u;
            // 0x54e254: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E258u; }
        if (ctx->pc != 0x54E258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E258u; }
        if (ctx->pc != 0x54E258u) { return; }
    }
    ctx->pc = 0x54E258u;
label_54e258:
    // 0x54e258: 0x2662fff2  addiu       $v0, $s3, -0xE
    ctx->pc = 0x54e258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967282));
label_54e25c:
    // 0x54e25c: 0x8fb400f0  lw          $s4, 0xF0($sp)
    ctx->pc = 0x54e25cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_54e260:
    // 0x54e260: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x54e260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_54e264:
    // 0x54e264: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x54e264u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_54e268:
    // 0x54e268: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x54e268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_54e26c:
    // 0x54e26c: 0x0  nop
    ctx->pc = 0x54e26cu;
    // NOP
label_54e270:
    // 0x54e270: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54e270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54e274:
    // 0x54e274: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x54e274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54e278:
    // 0x54e278: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x54e278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54e27c:
    // 0x54e27c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54e280:
    // 0x54e280: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54e280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54e284:
    // 0x54e284: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x54e284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54e288:
    // 0x54e288: 0xc6170008  lwc1        $f23, 0x8($s0)
    ctx->pc = 0x54e288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_54e28c:
    // 0x54e28c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54e28cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54e290:
    // 0x54e290: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54e290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54e294:
    // 0x54e294: 0x320f809  jalr        $t9
label_54e298:
    if (ctx->pc == 0x54E298u) {
        ctx->pc = 0x54E298u;
            // 0x54e298: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x54E29Cu;
        goto label_54e29c;
    }
    ctx->pc = 0x54E294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54E29Cu);
        ctx->pc = 0x54E298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E294u;
            // 0x54e298: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54E29Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54E29Cu; }
            if (ctx->pc != 0x54E29Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54E29Cu;
label_54e29c:
    // 0x54e29c: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x54e29cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_54e2a0:
    // 0x54e2a0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54e2a4:
    // 0x54e2a4: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x54e2a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_54e2a8:
    // 0x54e2a8: 0x4617cb80  add.s       $f14, $f25, $f23
    ctx->pc = 0x54e2a8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[25], ctx->f[23]);
label_54e2ac:
    // 0x54e2ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x54e2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_54e2b0:
    // 0x54e2b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54e2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54e2b4:
    // 0x54e2b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54e2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54e2b8:
    // 0x54e2b8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x54e2b8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e2bc:
    // 0x54e2bc: 0x0  nop
    ctx->pc = 0x54e2bcu;
    // NOP
label_54e2c0:
    // 0x54e2c0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54e2c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54e2c4:
    // 0x54e2c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54e2c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54e2c8:
    // 0x54e2c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54e2c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e2cc:
    // 0x54e2cc: 0x0  nop
    ctx->pc = 0x54e2ccu;
    // NOP
label_54e2d0:
    // 0x54e2d0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54e2d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54e2d4:
    // 0x54e2d4: 0x4615c341  sub.s       $f13, $f24, $f21
    ctx->pc = 0x54e2d4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[24], ctx->f[21]);
label_54e2d8:
    // 0x54e2d8: 0x4615c3c0  add.s       $f15, $f24, $f21
    ctx->pc = 0x54e2d8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
label_54e2dc:
    // 0x54e2dc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54e2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54e2e0:
    // 0x54e2e0: 0xc0bc284  jal         func_2F0A10
label_54e2e4:
    if (ctx->pc == 0x54E2E4u) {
        ctx->pc = 0x54E2E4u;
            // 0x54e2e4: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->pc = 0x54E2E8u;
        goto label_54e2e8;
    }
    ctx->pc = 0x54E2E0u;
    SET_GPR_U32(ctx, 31, 0x54E2E8u);
    ctx->pc = 0x54E2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54E2E0u;
            // 0x54e2e4: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E2E8u; }
        if (ctx->pc != 0x54E2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E2E8u; }
        if (ctx->pc != 0x54E2E8u) { return; }
    }
    ctx->pc = 0x54E2E8u;
label_54e2e8:
    // 0x54e2e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54e2ec:
    // 0x54e2ec: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54e2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54e2f0:
    // 0x54e2f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54e2f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54e2f4:
    // 0x54e2f4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x54e2f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_54e2f8:
    // 0x54e2f8: 0x320f809  jalr        $t9
label_54e2fc:
    if (ctx->pc == 0x54E2FCu) {
        ctx->pc = 0x54E300u;
        goto label_54e300;
    }
    ctx->pc = 0x54E2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54E300u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54E300u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54E300u; }
            if (ctx->pc != 0x54E300u) { return; }
        }
        }
    }
    ctx->pc = 0x54E300u;
label_54e300:
    // 0x54e300: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x54e300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_54e304:
    // 0x54e304: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x54e304u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_54e308:
    // 0x54e308: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x54e308u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_54e30c:
    // 0x54e30c: 0x1460ff83  bnez        $v1, . + 4 + (-0x7D << 2)
label_54e310:
    if (ctx->pc == 0x54E310u) {
        ctx->pc = 0x54E310u;
            // 0x54e310: 0x26f70018  addiu       $s7, $s7, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
        ctx->pc = 0x54E314u;
        goto label_54e314;
    }
    ctx->pc = 0x54E30Cu;
    {
        const bool branch_taken_0x54e30c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x54E310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E30Cu;
            // 0x54e310: 0x26f70018  addiu       $s7, $s7, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e30c) {
            ctx->pc = 0x54E11Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_54e11c;
        }
    }
    ctx->pc = 0x54E314u;
label_54e314:
    // 0x54e314: 0x0  nop
    ctx->pc = 0x54e314u;
    // NOP
label_54e318:
    // 0x54e318: 0x56400050  bnel        $s2, $zero, . + 4 + (0x50 << 2)
label_54e31c:
    if (ctx->pc == 0x54E31Cu) {
        ctx->pc = 0x54E31Cu;
            // 0x54e31c: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x54E320u;
        goto label_54e320;
    }
    ctx->pc = 0x54E318u;
    {
        const bool branch_taken_0x54e318 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x54e318) {
            ctx->pc = 0x54E31Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54E318u;
            // 0x54e31c: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54E45Cu;
            goto label_54e45c;
        }
    }
    ctx->pc = 0x54E320u;
label_54e320:
    // 0x54e320: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x54e320u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_54e324:
    // 0x54e324: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x54e324u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_54e328:
    // 0x54e328: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x54e328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_54e32c:
    // 0x54e32c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x54e32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54e330:
    // 0x54e330: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x54e330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_54e334:
    // 0x54e334: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54e334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54e338:
    // 0x54e338: 0x9451db20  lhu         $s1, -0x24E0($v0)
    ctx->pc = 0x54e338u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
label_54e33c:
    // 0x54e33c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x54e33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54e340:
    // 0x54e340: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54e340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54e344:
    // 0x54e344: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x54e344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_54e348:
    // 0x54e348: 0x9450db22  lhu         $s0, -0x24DE($v0)
    ctx->pc = 0x54e348u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957858)));
label_54e34c:
    // 0x54e34c: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x54e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_54e350:
    // 0x54e350: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x54e350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54e354:
    // 0x54e354: 0x0  nop
    ctx->pc = 0x54e354u;
    // NOP
label_54e358:
    // 0x54e358: 0x4601b0c0  add.s       $f3, $f22, $f1
    ctx->pc = 0x54e358u;
    ctx->f[3] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
label_54e35c:
    // 0x54e35c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x54e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_54e360:
    // 0x54e360: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x54e360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_54e364:
    // 0x54e364: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54e364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54e368:
    // 0x54e368: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x54e368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54e36c:
    // 0x54e36c: 0x0  nop
    ctx->pc = 0x54e36cu;
    // NOP
label_54e370:
    // 0x54e370: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x54e370u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_54e374:
    // 0x54e374: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x54e374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e378:
    // 0x54e378: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x54e378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54e37c:
    // 0x54e37c: 0x0  nop
    ctx->pc = 0x54e37cu;
    // NOP
label_54e380:
    // 0x54e380: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x54e380u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_54e384:
    // 0x54e384: 0xc0506ac  jal         func_141AB0
label_54e388:
    if (ctx->pc == 0x54E388u) {
        ctx->pc = 0x54E388u;
            // 0x54e388: 0x46020d9c  madd.s      $f22, $f1, $f2 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x54E38Cu;
        goto label_54e38c;
    }
    ctx->pc = 0x54E384u;
    SET_GPR_U32(ctx, 31, 0x54E38Cu);
    ctx->pc = 0x54E388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54E384u;
            // 0x54e388: 0x46020d9c  madd.s      $f22, $f1, $f2 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E38Cu; }
        if (ctx->pc != 0x54E38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E38Cu; }
        if (ctx->pc != 0x54E38Cu) { return; }
    }
    ctx->pc = 0x54E38Cu;
label_54e38c:
    // 0x54e38c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54e390:
    // 0x54e390: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54e390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54e394:
    // 0x54e394: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54e394u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54e398:
    // 0x54e398: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54e398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54e39c:
    // 0x54e39c: 0x320f809  jalr        $t9
label_54e3a0:
    if (ctx->pc == 0x54E3A0u) {
        ctx->pc = 0x54E3A0u;
            // 0x54e3a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54E3A4u;
        goto label_54e3a4;
    }
    ctx->pc = 0x54E39Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54E3A4u);
        ctx->pc = 0x54E3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E39Cu;
            // 0x54e3a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54E3A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54E3A4u; }
            if (ctx->pc != 0x54E3A4u) { return; }
        }
        }
    }
    ctx->pc = 0x54E3A4u;
label_54e3a4:
    // 0x54e3a4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54e3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54e3a8:
    // 0x54e3a8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54e3ac:
    // 0x54e3ac: 0x24a5e410  addiu       $a1, $a1, -0x1BF0
    ctx->pc = 0x54e3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960144));
label_54e3b0:
    // 0x54e3b0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x54e3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_54e3b4:
    // 0x54e3b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x54e3b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54e3b8:
    // 0x54e3b8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x54e3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_54e3bc:
    // 0x54e3bc: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_54e3c0:
    if (ctx->pc == 0x54E3C0u) {
        ctx->pc = 0x54E3C0u;
            // 0x54e3c0: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x54E3C4u;
        goto label_54e3c4;
    }
    ctx->pc = 0x54E3BCu;
    {
        const bool branch_taken_0x54e3bc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x54E3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E3BCu;
            // 0x54e3c0: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e3bc) {
            ctx->pc = 0x54E3D0u;
            goto label_54e3d0;
        }
    }
    ctx->pc = 0x54E3C4u;
label_54e3c4:
    // 0x54e3c4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54e3c4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e3c8:
    // 0x54e3c8: 0x10000008  b           . + 4 + (0x8 << 2)
label_54e3cc:
    if (ctx->pc == 0x54E3CCu) {
        ctx->pc = 0x54E3CCu;
            // 0x54e3cc: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54E3D0u;
        goto label_54e3d0;
    }
    ctx->pc = 0x54E3C8u;
    {
        const bool branch_taken_0x54e3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E3C8u;
            // 0x54e3cc: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e3c8) {
            ctx->pc = 0x54E3ECu;
            goto label_54e3ec;
        }
    }
    ctx->pc = 0x54E3D0u;
label_54e3d0:
    // 0x54e3d0: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x54e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_54e3d4:
    // 0x54e3d4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54e3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54e3d8:
    // 0x54e3d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54e3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54e3dc:
    // 0x54e3dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54e3dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e3e0:
    // 0x54e3e0: 0x0  nop
    ctx->pc = 0x54e3e0u;
    // NOP
label_54e3e4:
    // 0x54e3e4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54e3e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54e3e8:
    // 0x54e3e8: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54e3e8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54e3ec:
    // 0x54e3ec: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54e3f0:
    if (ctx->pc == 0x54E3F0u) {
        ctx->pc = 0x54E3F0u;
            // 0x54e3f0: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54E3F4u;
        goto label_54e3f4;
    }
    ctx->pc = 0x54E3ECu;
    {
        const bool branch_taken_0x54e3ec = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54e3ec) {
            ctx->pc = 0x54E3F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54E3ECu;
            // 0x54e3f0: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54E400u;
            goto label_54e400;
        }
    }
    ctx->pc = 0x54E3F4u;
label_54e3f4:
    // 0x54e3f4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54e3f4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e3f8:
    // 0x54e3f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_54e3fc:
    if (ctx->pc == 0x54E3FCu) {
        ctx->pc = 0x54E3FCu;
            // 0x54e3fc: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54E400u;
        goto label_54e400;
    }
    ctx->pc = 0x54E3F8u;
    {
        const bool branch_taken_0x54e3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54E3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E3F8u;
            // 0x54e3fc: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54e3f8) {
            ctx->pc = 0x54E418u;
            goto label_54e418;
        }
    }
    ctx->pc = 0x54E400u;
label_54e400:
    // 0x54e400: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54e400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54e404:
    // 0x54e404: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54e404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54e408:
    // 0x54e408: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54e408u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54e40c:
    // 0x54e40c: 0x0  nop
    ctx->pc = 0x54e40cu;
    // NOP
label_54e410:
    // 0x54e410: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54e410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54e414:
    // 0x54e414: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54e414u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54e418:
    // 0x54e418: 0x4602a380  add.s       $f14, $f20, $f2
    ctx->pc = 0x54e418u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_54e41c:
    // 0x54e41c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54e41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54e420:
    // 0x54e420: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54e420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54e424:
    // 0x54e424: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54e424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54e428:
    // 0x54e428: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54e428u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54e42c:
    // 0x54e42c: 0x4601b341  sub.s       $f13, $f22, $f1
    ctx->pc = 0x54e42cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
label_54e430:
    // 0x54e430: 0x4601b3c0  add.s       $f15, $f22, $f1
    ctx->pc = 0x54e430u;
    ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
label_54e434:
    // 0x54e434: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54e434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54e438:
    // 0x54e438: 0xc0bc284  jal         func_2F0A10
label_54e43c:
    if (ctx->pc == 0x54E43Cu) {
        ctx->pc = 0x54E43Cu;
            // 0x54e43c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x54E440u;
        goto label_54e440;
    }
    ctx->pc = 0x54E438u;
    SET_GPR_U32(ctx, 31, 0x54E440u);
    ctx->pc = 0x54E43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54E438u;
            // 0x54e43c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E440u; }
        if (ctx->pc != 0x54E440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54E440u; }
        if (ctx->pc != 0x54E440u) { return; }
    }
    ctx->pc = 0x54E440u;
label_54e440:
    // 0x54e440: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54e440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54e444:
    // 0x54e444: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54e444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54e448:
    // 0x54e448: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54e448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54e44c:
    // 0x54e44c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x54e44cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_54e450:
    // 0x54e450: 0x320f809  jalr        $t9
label_54e454:
    if (ctx->pc == 0x54E454u) {
        ctx->pc = 0x54E458u;
        goto label_54e458;
    }
    ctx->pc = 0x54E450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54E458u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54E458u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54E458u; }
            if (ctx->pc != 0x54E458u) { return; }
        }
        }
    }
    ctx->pc = 0x54E458u;
label_54e458:
    // 0x54e458: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x54e458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_54e45c:
    // 0x54e45c: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x54e45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_54e460:
    // 0x54e460: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x54e460u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_54e464:
    // 0x54e464: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x54e464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_54e468:
    // 0x54e468: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x54e468u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_54e46c:
    // 0x54e46c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x54e46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_54e470:
    // 0x54e470: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x54e470u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_54e474:
    // 0x54e474: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x54e474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_54e478:
    // 0x54e478: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x54e478u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_54e47c:
    // 0x54e47c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x54e47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_54e480:
    // 0x54e480: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x54e480u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_54e484:
    // 0x54e484: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x54e484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54e488:
    // 0x54e488: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x54e488u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_54e48c:
    // 0x54e48c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x54e48cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_54e490:
    // 0x54e490: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x54e490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_54e494:
    // 0x54e494: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x54e494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_54e498:
    // 0x54e498: 0x3e00008  jr          $ra
label_54e49c:
    if (ctx->pc == 0x54E49Cu) {
        ctx->pc = 0x54E49Cu;
            // 0x54e49c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x54E4A0u;
        goto label_fallthrough_0x54e498;
    }
    ctx->pc = 0x54E498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54E49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54E498u;
            // 0x54e49c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x54e498:
    ctx->pc = 0x54E4A0u;
}
