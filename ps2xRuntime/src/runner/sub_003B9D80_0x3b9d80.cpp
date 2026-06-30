#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B9D80
// Address: 0x3b9d80 - 0x3ba5f0
void sub_003B9D80_0x3b9d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9D80_0x3b9d80");
#endif

    switch (ctx->pc) {
        case 0x3b9d80u: goto label_3b9d80;
        case 0x3b9d84u: goto label_3b9d84;
        case 0x3b9d88u: goto label_3b9d88;
        case 0x3b9d8cu: goto label_3b9d8c;
        case 0x3b9d90u: goto label_3b9d90;
        case 0x3b9d94u: goto label_3b9d94;
        case 0x3b9d98u: goto label_3b9d98;
        case 0x3b9d9cu: goto label_3b9d9c;
        case 0x3b9da0u: goto label_3b9da0;
        case 0x3b9da4u: goto label_3b9da4;
        case 0x3b9da8u: goto label_3b9da8;
        case 0x3b9dacu: goto label_3b9dac;
        case 0x3b9db0u: goto label_3b9db0;
        case 0x3b9db4u: goto label_3b9db4;
        case 0x3b9db8u: goto label_3b9db8;
        case 0x3b9dbcu: goto label_3b9dbc;
        case 0x3b9dc0u: goto label_3b9dc0;
        case 0x3b9dc4u: goto label_3b9dc4;
        case 0x3b9dc8u: goto label_3b9dc8;
        case 0x3b9dccu: goto label_3b9dcc;
        case 0x3b9dd0u: goto label_3b9dd0;
        case 0x3b9dd4u: goto label_3b9dd4;
        case 0x3b9dd8u: goto label_3b9dd8;
        case 0x3b9ddcu: goto label_3b9ddc;
        case 0x3b9de0u: goto label_3b9de0;
        case 0x3b9de4u: goto label_3b9de4;
        case 0x3b9de8u: goto label_3b9de8;
        case 0x3b9decu: goto label_3b9dec;
        case 0x3b9df0u: goto label_3b9df0;
        case 0x3b9df4u: goto label_3b9df4;
        case 0x3b9df8u: goto label_3b9df8;
        case 0x3b9dfcu: goto label_3b9dfc;
        case 0x3b9e00u: goto label_3b9e00;
        case 0x3b9e04u: goto label_3b9e04;
        case 0x3b9e08u: goto label_3b9e08;
        case 0x3b9e0cu: goto label_3b9e0c;
        case 0x3b9e10u: goto label_3b9e10;
        case 0x3b9e14u: goto label_3b9e14;
        case 0x3b9e18u: goto label_3b9e18;
        case 0x3b9e1cu: goto label_3b9e1c;
        case 0x3b9e20u: goto label_3b9e20;
        case 0x3b9e24u: goto label_3b9e24;
        case 0x3b9e28u: goto label_3b9e28;
        case 0x3b9e2cu: goto label_3b9e2c;
        case 0x3b9e30u: goto label_3b9e30;
        case 0x3b9e34u: goto label_3b9e34;
        case 0x3b9e38u: goto label_3b9e38;
        case 0x3b9e3cu: goto label_3b9e3c;
        case 0x3b9e40u: goto label_3b9e40;
        case 0x3b9e44u: goto label_3b9e44;
        case 0x3b9e48u: goto label_3b9e48;
        case 0x3b9e4cu: goto label_3b9e4c;
        case 0x3b9e50u: goto label_3b9e50;
        case 0x3b9e54u: goto label_3b9e54;
        case 0x3b9e58u: goto label_3b9e58;
        case 0x3b9e5cu: goto label_3b9e5c;
        case 0x3b9e60u: goto label_3b9e60;
        case 0x3b9e64u: goto label_3b9e64;
        case 0x3b9e68u: goto label_3b9e68;
        case 0x3b9e6cu: goto label_3b9e6c;
        case 0x3b9e70u: goto label_3b9e70;
        case 0x3b9e74u: goto label_3b9e74;
        case 0x3b9e78u: goto label_3b9e78;
        case 0x3b9e7cu: goto label_3b9e7c;
        case 0x3b9e80u: goto label_3b9e80;
        case 0x3b9e84u: goto label_3b9e84;
        case 0x3b9e88u: goto label_3b9e88;
        case 0x3b9e8cu: goto label_3b9e8c;
        case 0x3b9e90u: goto label_3b9e90;
        case 0x3b9e94u: goto label_3b9e94;
        case 0x3b9e98u: goto label_3b9e98;
        case 0x3b9e9cu: goto label_3b9e9c;
        case 0x3b9ea0u: goto label_3b9ea0;
        case 0x3b9ea4u: goto label_3b9ea4;
        case 0x3b9ea8u: goto label_3b9ea8;
        case 0x3b9eacu: goto label_3b9eac;
        case 0x3b9eb0u: goto label_3b9eb0;
        case 0x3b9eb4u: goto label_3b9eb4;
        case 0x3b9eb8u: goto label_3b9eb8;
        case 0x3b9ebcu: goto label_3b9ebc;
        case 0x3b9ec0u: goto label_3b9ec0;
        case 0x3b9ec4u: goto label_3b9ec4;
        case 0x3b9ec8u: goto label_3b9ec8;
        case 0x3b9eccu: goto label_3b9ecc;
        case 0x3b9ed0u: goto label_3b9ed0;
        case 0x3b9ed4u: goto label_3b9ed4;
        case 0x3b9ed8u: goto label_3b9ed8;
        case 0x3b9edcu: goto label_3b9edc;
        case 0x3b9ee0u: goto label_3b9ee0;
        case 0x3b9ee4u: goto label_3b9ee4;
        case 0x3b9ee8u: goto label_3b9ee8;
        case 0x3b9eecu: goto label_3b9eec;
        case 0x3b9ef0u: goto label_3b9ef0;
        case 0x3b9ef4u: goto label_3b9ef4;
        case 0x3b9ef8u: goto label_3b9ef8;
        case 0x3b9efcu: goto label_3b9efc;
        case 0x3b9f00u: goto label_3b9f00;
        case 0x3b9f04u: goto label_3b9f04;
        case 0x3b9f08u: goto label_3b9f08;
        case 0x3b9f0cu: goto label_3b9f0c;
        case 0x3b9f10u: goto label_3b9f10;
        case 0x3b9f14u: goto label_3b9f14;
        case 0x3b9f18u: goto label_3b9f18;
        case 0x3b9f1cu: goto label_3b9f1c;
        case 0x3b9f20u: goto label_3b9f20;
        case 0x3b9f24u: goto label_3b9f24;
        case 0x3b9f28u: goto label_3b9f28;
        case 0x3b9f2cu: goto label_3b9f2c;
        case 0x3b9f30u: goto label_3b9f30;
        case 0x3b9f34u: goto label_3b9f34;
        case 0x3b9f38u: goto label_3b9f38;
        case 0x3b9f3cu: goto label_3b9f3c;
        case 0x3b9f40u: goto label_3b9f40;
        case 0x3b9f44u: goto label_3b9f44;
        case 0x3b9f48u: goto label_3b9f48;
        case 0x3b9f4cu: goto label_3b9f4c;
        case 0x3b9f50u: goto label_3b9f50;
        case 0x3b9f54u: goto label_3b9f54;
        case 0x3b9f58u: goto label_3b9f58;
        case 0x3b9f5cu: goto label_3b9f5c;
        case 0x3b9f60u: goto label_3b9f60;
        case 0x3b9f64u: goto label_3b9f64;
        case 0x3b9f68u: goto label_3b9f68;
        case 0x3b9f6cu: goto label_3b9f6c;
        case 0x3b9f70u: goto label_3b9f70;
        case 0x3b9f74u: goto label_3b9f74;
        case 0x3b9f78u: goto label_3b9f78;
        case 0x3b9f7cu: goto label_3b9f7c;
        case 0x3b9f80u: goto label_3b9f80;
        case 0x3b9f84u: goto label_3b9f84;
        case 0x3b9f88u: goto label_3b9f88;
        case 0x3b9f8cu: goto label_3b9f8c;
        case 0x3b9f90u: goto label_3b9f90;
        case 0x3b9f94u: goto label_3b9f94;
        case 0x3b9f98u: goto label_3b9f98;
        case 0x3b9f9cu: goto label_3b9f9c;
        case 0x3b9fa0u: goto label_3b9fa0;
        case 0x3b9fa4u: goto label_3b9fa4;
        case 0x3b9fa8u: goto label_3b9fa8;
        case 0x3b9facu: goto label_3b9fac;
        case 0x3b9fb0u: goto label_3b9fb0;
        case 0x3b9fb4u: goto label_3b9fb4;
        case 0x3b9fb8u: goto label_3b9fb8;
        case 0x3b9fbcu: goto label_3b9fbc;
        case 0x3b9fc0u: goto label_3b9fc0;
        case 0x3b9fc4u: goto label_3b9fc4;
        case 0x3b9fc8u: goto label_3b9fc8;
        case 0x3b9fccu: goto label_3b9fcc;
        case 0x3b9fd0u: goto label_3b9fd0;
        case 0x3b9fd4u: goto label_3b9fd4;
        case 0x3b9fd8u: goto label_3b9fd8;
        case 0x3b9fdcu: goto label_3b9fdc;
        case 0x3b9fe0u: goto label_3b9fe0;
        case 0x3b9fe4u: goto label_3b9fe4;
        case 0x3b9fe8u: goto label_3b9fe8;
        case 0x3b9fecu: goto label_3b9fec;
        case 0x3b9ff0u: goto label_3b9ff0;
        case 0x3b9ff4u: goto label_3b9ff4;
        case 0x3b9ff8u: goto label_3b9ff8;
        case 0x3b9ffcu: goto label_3b9ffc;
        case 0x3ba000u: goto label_3ba000;
        case 0x3ba004u: goto label_3ba004;
        case 0x3ba008u: goto label_3ba008;
        case 0x3ba00cu: goto label_3ba00c;
        case 0x3ba010u: goto label_3ba010;
        case 0x3ba014u: goto label_3ba014;
        case 0x3ba018u: goto label_3ba018;
        case 0x3ba01cu: goto label_3ba01c;
        case 0x3ba020u: goto label_3ba020;
        case 0x3ba024u: goto label_3ba024;
        case 0x3ba028u: goto label_3ba028;
        case 0x3ba02cu: goto label_3ba02c;
        case 0x3ba030u: goto label_3ba030;
        case 0x3ba034u: goto label_3ba034;
        case 0x3ba038u: goto label_3ba038;
        case 0x3ba03cu: goto label_3ba03c;
        case 0x3ba040u: goto label_3ba040;
        case 0x3ba044u: goto label_3ba044;
        case 0x3ba048u: goto label_3ba048;
        case 0x3ba04cu: goto label_3ba04c;
        case 0x3ba050u: goto label_3ba050;
        case 0x3ba054u: goto label_3ba054;
        case 0x3ba058u: goto label_3ba058;
        case 0x3ba05cu: goto label_3ba05c;
        case 0x3ba060u: goto label_3ba060;
        case 0x3ba064u: goto label_3ba064;
        case 0x3ba068u: goto label_3ba068;
        case 0x3ba06cu: goto label_3ba06c;
        case 0x3ba070u: goto label_3ba070;
        case 0x3ba074u: goto label_3ba074;
        case 0x3ba078u: goto label_3ba078;
        case 0x3ba07cu: goto label_3ba07c;
        case 0x3ba080u: goto label_3ba080;
        case 0x3ba084u: goto label_3ba084;
        case 0x3ba088u: goto label_3ba088;
        case 0x3ba08cu: goto label_3ba08c;
        case 0x3ba090u: goto label_3ba090;
        case 0x3ba094u: goto label_3ba094;
        case 0x3ba098u: goto label_3ba098;
        case 0x3ba09cu: goto label_3ba09c;
        case 0x3ba0a0u: goto label_3ba0a0;
        case 0x3ba0a4u: goto label_3ba0a4;
        case 0x3ba0a8u: goto label_3ba0a8;
        case 0x3ba0acu: goto label_3ba0ac;
        case 0x3ba0b0u: goto label_3ba0b0;
        case 0x3ba0b4u: goto label_3ba0b4;
        case 0x3ba0b8u: goto label_3ba0b8;
        case 0x3ba0bcu: goto label_3ba0bc;
        case 0x3ba0c0u: goto label_3ba0c0;
        case 0x3ba0c4u: goto label_3ba0c4;
        case 0x3ba0c8u: goto label_3ba0c8;
        case 0x3ba0ccu: goto label_3ba0cc;
        case 0x3ba0d0u: goto label_3ba0d0;
        case 0x3ba0d4u: goto label_3ba0d4;
        case 0x3ba0d8u: goto label_3ba0d8;
        case 0x3ba0dcu: goto label_3ba0dc;
        case 0x3ba0e0u: goto label_3ba0e0;
        case 0x3ba0e4u: goto label_3ba0e4;
        case 0x3ba0e8u: goto label_3ba0e8;
        case 0x3ba0ecu: goto label_3ba0ec;
        case 0x3ba0f0u: goto label_3ba0f0;
        case 0x3ba0f4u: goto label_3ba0f4;
        case 0x3ba0f8u: goto label_3ba0f8;
        case 0x3ba0fcu: goto label_3ba0fc;
        case 0x3ba100u: goto label_3ba100;
        case 0x3ba104u: goto label_3ba104;
        case 0x3ba108u: goto label_3ba108;
        case 0x3ba10cu: goto label_3ba10c;
        case 0x3ba110u: goto label_3ba110;
        case 0x3ba114u: goto label_3ba114;
        case 0x3ba118u: goto label_3ba118;
        case 0x3ba11cu: goto label_3ba11c;
        case 0x3ba120u: goto label_3ba120;
        case 0x3ba124u: goto label_3ba124;
        case 0x3ba128u: goto label_3ba128;
        case 0x3ba12cu: goto label_3ba12c;
        case 0x3ba130u: goto label_3ba130;
        case 0x3ba134u: goto label_3ba134;
        case 0x3ba138u: goto label_3ba138;
        case 0x3ba13cu: goto label_3ba13c;
        case 0x3ba140u: goto label_3ba140;
        case 0x3ba144u: goto label_3ba144;
        case 0x3ba148u: goto label_3ba148;
        case 0x3ba14cu: goto label_3ba14c;
        case 0x3ba150u: goto label_3ba150;
        case 0x3ba154u: goto label_3ba154;
        case 0x3ba158u: goto label_3ba158;
        case 0x3ba15cu: goto label_3ba15c;
        case 0x3ba160u: goto label_3ba160;
        case 0x3ba164u: goto label_3ba164;
        case 0x3ba168u: goto label_3ba168;
        case 0x3ba16cu: goto label_3ba16c;
        case 0x3ba170u: goto label_3ba170;
        case 0x3ba174u: goto label_3ba174;
        case 0x3ba178u: goto label_3ba178;
        case 0x3ba17cu: goto label_3ba17c;
        case 0x3ba180u: goto label_3ba180;
        case 0x3ba184u: goto label_3ba184;
        case 0x3ba188u: goto label_3ba188;
        case 0x3ba18cu: goto label_3ba18c;
        case 0x3ba190u: goto label_3ba190;
        case 0x3ba194u: goto label_3ba194;
        case 0x3ba198u: goto label_3ba198;
        case 0x3ba19cu: goto label_3ba19c;
        case 0x3ba1a0u: goto label_3ba1a0;
        case 0x3ba1a4u: goto label_3ba1a4;
        case 0x3ba1a8u: goto label_3ba1a8;
        case 0x3ba1acu: goto label_3ba1ac;
        case 0x3ba1b0u: goto label_3ba1b0;
        case 0x3ba1b4u: goto label_3ba1b4;
        case 0x3ba1b8u: goto label_3ba1b8;
        case 0x3ba1bcu: goto label_3ba1bc;
        case 0x3ba1c0u: goto label_3ba1c0;
        case 0x3ba1c4u: goto label_3ba1c4;
        case 0x3ba1c8u: goto label_3ba1c8;
        case 0x3ba1ccu: goto label_3ba1cc;
        case 0x3ba1d0u: goto label_3ba1d0;
        case 0x3ba1d4u: goto label_3ba1d4;
        case 0x3ba1d8u: goto label_3ba1d8;
        case 0x3ba1dcu: goto label_3ba1dc;
        case 0x3ba1e0u: goto label_3ba1e0;
        case 0x3ba1e4u: goto label_3ba1e4;
        case 0x3ba1e8u: goto label_3ba1e8;
        case 0x3ba1ecu: goto label_3ba1ec;
        case 0x3ba1f0u: goto label_3ba1f0;
        case 0x3ba1f4u: goto label_3ba1f4;
        case 0x3ba1f8u: goto label_3ba1f8;
        case 0x3ba1fcu: goto label_3ba1fc;
        case 0x3ba200u: goto label_3ba200;
        case 0x3ba204u: goto label_3ba204;
        case 0x3ba208u: goto label_3ba208;
        case 0x3ba20cu: goto label_3ba20c;
        case 0x3ba210u: goto label_3ba210;
        case 0x3ba214u: goto label_3ba214;
        case 0x3ba218u: goto label_3ba218;
        case 0x3ba21cu: goto label_3ba21c;
        case 0x3ba220u: goto label_3ba220;
        case 0x3ba224u: goto label_3ba224;
        case 0x3ba228u: goto label_3ba228;
        case 0x3ba22cu: goto label_3ba22c;
        case 0x3ba230u: goto label_3ba230;
        case 0x3ba234u: goto label_3ba234;
        case 0x3ba238u: goto label_3ba238;
        case 0x3ba23cu: goto label_3ba23c;
        case 0x3ba240u: goto label_3ba240;
        case 0x3ba244u: goto label_3ba244;
        case 0x3ba248u: goto label_3ba248;
        case 0x3ba24cu: goto label_3ba24c;
        case 0x3ba250u: goto label_3ba250;
        case 0x3ba254u: goto label_3ba254;
        case 0x3ba258u: goto label_3ba258;
        case 0x3ba25cu: goto label_3ba25c;
        case 0x3ba260u: goto label_3ba260;
        case 0x3ba264u: goto label_3ba264;
        case 0x3ba268u: goto label_3ba268;
        case 0x3ba26cu: goto label_3ba26c;
        case 0x3ba270u: goto label_3ba270;
        case 0x3ba274u: goto label_3ba274;
        case 0x3ba278u: goto label_3ba278;
        case 0x3ba27cu: goto label_3ba27c;
        case 0x3ba280u: goto label_3ba280;
        case 0x3ba284u: goto label_3ba284;
        case 0x3ba288u: goto label_3ba288;
        case 0x3ba28cu: goto label_3ba28c;
        case 0x3ba290u: goto label_3ba290;
        case 0x3ba294u: goto label_3ba294;
        case 0x3ba298u: goto label_3ba298;
        case 0x3ba29cu: goto label_3ba29c;
        case 0x3ba2a0u: goto label_3ba2a0;
        case 0x3ba2a4u: goto label_3ba2a4;
        case 0x3ba2a8u: goto label_3ba2a8;
        case 0x3ba2acu: goto label_3ba2ac;
        case 0x3ba2b0u: goto label_3ba2b0;
        case 0x3ba2b4u: goto label_3ba2b4;
        case 0x3ba2b8u: goto label_3ba2b8;
        case 0x3ba2bcu: goto label_3ba2bc;
        case 0x3ba2c0u: goto label_3ba2c0;
        case 0x3ba2c4u: goto label_3ba2c4;
        case 0x3ba2c8u: goto label_3ba2c8;
        case 0x3ba2ccu: goto label_3ba2cc;
        case 0x3ba2d0u: goto label_3ba2d0;
        case 0x3ba2d4u: goto label_3ba2d4;
        case 0x3ba2d8u: goto label_3ba2d8;
        case 0x3ba2dcu: goto label_3ba2dc;
        case 0x3ba2e0u: goto label_3ba2e0;
        case 0x3ba2e4u: goto label_3ba2e4;
        case 0x3ba2e8u: goto label_3ba2e8;
        case 0x3ba2ecu: goto label_3ba2ec;
        case 0x3ba2f0u: goto label_3ba2f0;
        case 0x3ba2f4u: goto label_3ba2f4;
        case 0x3ba2f8u: goto label_3ba2f8;
        case 0x3ba2fcu: goto label_3ba2fc;
        case 0x3ba300u: goto label_3ba300;
        case 0x3ba304u: goto label_3ba304;
        case 0x3ba308u: goto label_3ba308;
        case 0x3ba30cu: goto label_3ba30c;
        case 0x3ba310u: goto label_3ba310;
        case 0x3ba314u: goto label_3ba314;
        case 0x3ba318u: goto label_3ba318;
        case 0x3ba31cu: goto label_3ba31c;
        case 0x3ba320u: goto label_3ba320;
        case 0x3ba324u: goto label_3ba324;
        case 0x3ba328u: goto label_3ba328;
        case 0x3ba32cu: goto label_3ba32c;
        case 0x3ba330u: goto label_3ba330;
        case 0x3ba334u: goto label_3ba334;
        case 0x3ba338u: goto label_3ba338;
        case 0x3ba33cu: goto label_3ba33c;
        case 0x3ba340u: goto label_3ba340;
        case 0x3ba344u: goto label_3ba344;
        case 0x3ba348u: goto label_3ba348;
        case 0x3ba34cu: goto label_3ba34c;
        case 0x3ba350u: goto label_3ba350;
        case 0x3ba354u: goto label_3ba354;
        case 0x3ba358u: goto label_3ba358;
        case 0x3ba35cu: goto label_3ba35c;
        case 0x3ba360u: goto label_3ba360;
        case 0x3ba364u: goto label_3ba364;
        case 0x3ba368u: goto label_3ba368;
        case 0x3ba36cu: goto label_3ba36c;
        case 0x3ba370u: goto label_3ba370;
        case 0x3ba374u: goto label_3ba374;
        case 0x3ba378u: goto label_3ba378;
        case 0x3ba37cu: goto label_3ba37c;
        case 0x3ba380u: goto label_3ba380;
        case 0x3ba384u: goto label_3ba384;
        case 0x3ba388u: goto label_3ba388;
        case 0x3ba38cu: goto label_3ba38c;
        case 0x3ba390u: goto label_3ba390;
        case 0x3ba394u: goto label_3ba394;
        case 0x3ba398u: goto label_3ba398;
        case 0x3ba39cu: goto label_3ba39c;
        case 0x3ba3a0u: goto label_3ba3a0;
        case 0x3ba3a4u: goto label_3ba3a4;
        case 0x3ba3a8u: goto label_3ba3a8;
        case 0x3ba3acu: goto label_3ba3ac;
        case 0x3ba3b0u: goto label_3ba3b0;
        case 0x3ba3b4u: goto label_3ba3b4;
        case 0x3ba3b8u: goto label_3ba3b8;
        case 0x3ba3bcu: goto label_3ba3bc;
        case 0x3ba3c0u: goto label_3ba3c0;
        case 0x3ba3c4u: goto label_3ba3c4;
        case 0x3ba3c8u: goto label_3ba3c8;
        case 0x3ba3ccu: goto label_3ba3cc;
        case 0x3ba3d0u: goto label_3ba3d0;
        case 0x3ba3d4u: goto label_3ba3d4;
        case 0x3ba3d8u: goto label_3ba3d8;
        case 0x3ba3dcu: goto label_3ba3dc;
        case 0x3ba3e0u: goto label_3ba3e0;
        case 0x3ba3e4u: goto label_3ba3e4;
        case 0x3ba3e8u: goto label_3ba3e8;
        case 0x3ba3ecu: goto label_3ba3ec;
        case 0x3ba3f0u: goto label_3ba3f0;
        case 0x3ba3f4u: goto label_3ba3f4;
        case 0x3ba3f8u: goto label_3ba3f8;
        case 0x3ba3fcu: goto label_3ba3fc;
        case 0x3ba400u: goto label_3ba400;
        case 0x3ba404u: goto label_3ba404;
        case 0x3ba408u: goto label_3ba408;
        case 0x3ba40cu: goto label_3ba40c;
        case 0x3ba410u: goto label_3ba410;
        case 0x3ba414u: goto label_3ba414;
        case 0x3ba418u: goto label_3ba418;
        case 0x3ba41cu: goto label_3ba41c;
        case 0x3ba420u: goto label_3ba420;
        case 0x3ba424u: goto label_3ba424;
        case 0x3ba428u: goto label_3ba428;
        case 0x3ba42cu: goto label_3ba42c;
        case 0x3ba430u: goto label_3ba430;
        case 0x3ba434u: goto label_3ba434;
        case 0x3ba438u: goto label_3ba438;
        case 0x3ba43cu: goto label_3ba43c;
        case 0x3ba440u: goto label_3ba440;
        case 0x3ba444u: goto label_3ba444;
        case 0x3ba448u: goto label_3ba448;
        case 0x3ba44cu: goto label_3ba44c;
        case 0x3ba450u: goto label_3ba450;
        case 0x3ba454u: goto label_3ba454;
        case 0x3ba458u: goto label_3ba458;
        case 0x3ba45cu: goto label_3ba45c;
        case 0x3ba460u: goto label_3ba460;
        case 0x3ba464u: goto label_3ba464;
        case 0x3ba468u: goto label_3ba468;
        case 0x3ba46cu: goto label_3ba46c;
        case 0x3ba470u: goto label_3ba470;
        case 0x3ba474u: goto label_3ba474;
        case 0x3ba478u: goto label_3ba478;
        case 0x3ba47cu: goto label_3ba47c;
        case 0x3ba480u: goto label_3ba480;
        case 0x3ba484u: goto label_3ba484;
        case 0x3ba488u: goto label_3ba488;
        case 0x3ba48cu: goto label_3ba48c;
        case 0x3ba490u: goto label_3ba490;
        case 0x3ba494u: goto label_3ba494;
        case 0x3ba498u: goto label_3ba498;
        case 0x3ba49cu: goto label_3ba49c;
        case 0x3ba4a0u: goto label_3ba4a0;
        case 0x3ba4a4u: goto label_3ba4a4;
        case 0x3ba4a8u: goto label_3ba4a8;
        case 0x3ba4acu: goto label_3ba4ac;
        case 0x3ba4b0u: goto label_3ba4b0;
        case 0x3ba4b4u: goto label_3ba4b4;
        case 0x3ba4b8u: goto label_3ba4b8;
        case 0x3ba4bcu: goto label_3ba4bc;
        case 0x3ba4c0u: goto label_3ba4c0;
        case 0x3ba4c4u: goto label_3ba4c4;
        case 0x3ba4c8u: goto label_3ba4c8;
        case 0x3ba4ccu: goto label_3ba4cc;
        case 0x3ba4d0u: goto label_3ba4d0;
        case 0x3ba4d4u: goto label_3ba4d4;
        case 0x3ba4d8u: goto label_3ba4d8;
        case 0x3ba4dcu: goto label_3ba4dc;
        case 0x3ba4e0u: goto label_3ba4e0;
        case 0x3ba4e4u: goto label_3ba4e4;
        case 0x3ba4e8u: goto label_3ba4e8;
        case 0x3ba4ecu: goto label_3ba4ec;
        case 0x3ba4f0u: goto label_3ba4f0;
        case 0x3ba4f4u: goto label_3ba4f4;
        case 0x3ba4f8u: goto label_3ba4f8;
        case 0x3ba4fcu: goto label_3ba4fc;
        case 0x3ba500u: goto label_3ba500;
        case 0x3ba504u: goto label_3ba504;
        case 0x3ba508u: goto label_3ba508;
        case 0x3ba50cu: goto label_3ba50c;
        case 0x3ba510u: goto label_3ba510;
        case 0x3ba514u: goto label_3ba514;
        case 0x3ba518u: goto label_3ba518;
        case 0x3ba51cu: goto label_3ba51c;
        case 0x3ba520u: goto label_3ba520;
        case 0x3ba524u: goto label_3ba524;
        case 0x3ba528u: goto label_3ba528;
        case 0x3ba52cu: goto label_3ba52c;
        case 0x3ba530u: goto label_3ba530;
        case 0x3ba534u: goto label_3ba534;
        case 0x3ba538u: goto label_3ba538;
        case 0x3ba53cu: goto label_3ba53c;
        case 0x3ba540u: goto label_3ba540;
        case 0x3ba544u: goto label_3ba544;
        case 0x3ba548u: goto label_3ba548;
        case 0x3ba54cu: goto label_3ba54c;
        case 0x3ba550u: goto label_3ba550;
        case 0x3ba554u: goto label_3ba554;
        case 0x3ba558u: goto label_3ba558;
        case 0x3ba55cu: goto label_3ba55c;
        case 0x3ba560u: goto label_3ba560;
        case 0x3ba564u: goto label_3ba564;
        case 0x3ba568u: goto label_3ba568;
        case 0x3ba56cu: goto label_3ba56c;
        case 0x3ba570u: goto label_3ba570;
        case 0x3ba574u: goto label_3ba574;
        case 0x3ba578u: goto label_3ba578;
        case 0x3ba57cu: goto label_3ba57c;
        case 0x3ba580u: goto label_3ba580;
        case 0x3ba584u: goto label_3ba584;
        case 0x3ba588u: goto label_3ba588;
        case 0x3ba58cu: goto label_3ba58c;
        case 0x3ba590u: goto label_3ba590;
        case 0x3ba594u: goto label_3ba594;
        case 0x3ba598u: goto label_3ba598;
        case 0x3ba59cu: goto label_3ba59c;
        case 0x3ba5a0u: goto label_3ba5a0;
        case 0x3ba5a4u: goto label_3ba5a4;
        case 0x3ba5a8u: goto label_3ba5a8;
        case 0x3ba5acu: goto label_3ba5ac;
        case 0x3ba5b0u: goto label_3ba5b0;
        case 0x3ba5b4u: goto label_3ba5b4;
        case 0x3ba5b8u: goto label_3ba5b8;
        case 0x3ba5bcu: goto label_3ba5bc;
        case 0x3ba5c0u: goto label_3ba5c0;
        case 0x3ba5c4u: goto label_3ba5c4;
        case 0x3ba5c8u: goto label_3ba5c8;
        case 0x3ba5ccu: goto label_3ba5cc;
        case 0x3ba5d0u: goto label_3ba5d0;
        case 0x3ba5d4u: goto label_3ba5d4;
        case 0x3ba5d8u: goto label_3ba5d8;
        case 0x3ba5dcu: goto label_3ba5dc;
        case 0x3ba5e0u: goto label_3ba5e0;
        case 0x3ba5e4u: goto label_3ba5e4;
        case 0x3ba5e8u: goto label_3ba5e8;
        case 0x3ba5ecu: goto label_3ba5ec;
        default: break;
    }

    ctx->pc = 0x3b9d80u;

label_3b9d80:
    // 0x3b9d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b9d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b9d84:
    // 0x3b9d84: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x3b9d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3b9d88:
    // 0x3b9d88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b9d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3b9d8c:
    // 0x3b9d8c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x3b9d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b9d90:
    // 0x3b9d90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b9d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b9d94:
    // 0x3b9d94: 0xc10ca38  jal         func_4328E0
label_3b9d98:
    if (ctx->pc == 0x3B9D98u) {
        ctx->pc = 0x3B9D98u;
            // 0x3b9d98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B9D9Cu;
        goto label_3b9d9c;
    }
    ctx->pc = 0x3B9D94u;
    SET_GPR_U32(ctx, 31, 0x3B9D9Cu);
    ctx->pc = 0x3B9D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9D94u;
            // 0x3b9d98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4328E0u;
    if (runtime->hasFunction(0x4328E0u)) {
        auto targetFn = runtime->lookupFunction(0x4328E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9D9Cu; }
        if (ctx->pc != 0x3B9D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004328E0_0x4328e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9D9Cu; }
        if (ctx->pc != 0x3B9D9Cu) { return; }
    }
    ctx->pc = 0x3B9D9Cu;
label_3b9d9c:
    // 0x3b9d9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3b9d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3b9da0:
    // 0x3b9da0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b9da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3b9da4:
    // 0x3b9da4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3b9da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3b9da8:
    // 0x3b9da8: 0x24638c10  addiu       $v1, $v1, -0x73F0
    ctx->pc = 0x3b9da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937616));
label_3b9dac:
    // 0x3b9dac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b9dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3b9db0:
    // 0x3b9db0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3b9db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3b9db4:
    // 0x3b9db4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b9db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b9db8:
    // 0x3b9db8: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x3b9db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_3b9dbc:
    // 0x3b9dbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b9dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b9dc0:
    // 0x3b9dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b9dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b9dc4:
    // 0x3b9dc4: 0x3e00008  jr          $ra
label_3b9dc8:
    if (ctx->pc == 0x3B9DC8u) {
        ctx->pc = 0x3B9DC8u;
            // 0x3b9dc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3B9DCCu;
        goto label_3b9dcc;
    }
    ctx->pc = 0x3B9DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9DC4u;
            // 0x3b9dc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B9DCCu;
label_3b9dcc:
    // 0x3b9dcc: 0x0  nop
    ctx->pc = 0x3b9dccu;
    // NOP
label_3b9dd0:
    // 0x3b9dd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3b9dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3b9dd4:
    // 0x3b9dd4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3b9dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3b9dd8:
    // 0x3b9dd8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3b9dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3b9ddc:
    // 0x3b9ddc: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3b9ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_3b9de0:
    // 0x3b9de0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3b9de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3b9de4:
    // 0x3b9de4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3b9de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3b9de8:
    // 0x3b9de8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3b9de8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b9dec:
    // 0x3b9dec: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3b9decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3b9df0:
    // 0x3b9df0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3b9df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3b9df4:
    // 0x3b9df4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3b9df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3b9df8:
    // 0x3b9df8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b9df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3b9dfc:
    // 0x3b9dfc: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x3b9dfcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3b9e00:
    // 0x3b9e00: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x3b9e00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3b9e04:
    // 0x3b9e04: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x3b9e04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3b9e08:
    // 0x3b9e08: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3b9e08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3b9e0c:
    // 0x3b9e0c: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_3b9e10:
    if (ctx->pc == 0x3B9E10u) {
        ctx->pc = 0x3B9E14u;
        goto label_3b9e14;
    }
    ctx->pc = 0x3B9E0Cu;
    {
        const bool branch_taken_0x3b9e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b9e0c) {
            ctx->pc = 0x3B9E34u;
            goto label_3b9e34;
        }
    }
    ctx->pc = 0x3B9E14u;
label_3b9e14:
    // 0x3b9e14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b9e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b9e18:
    // 0x3b9e18: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_3b9e1c:
    if (ctx->pc == 0x3B9E1Cu) {
        ctx->pc = 0x3B9E20u;
        goto label_3b9e20;
    }
    ctx->pc = 0x3B9E18u;
    {
        const bool branch_taken_0x3b9e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b9e18) {
            ctx->pc = 0x3B9E34u;
            goto label_3b9e34;
        }
    }
    ctx->pc = 0x3B9E20u;
label_3b9e20:
    // 0x3b9e20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b9e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b9e24:
    // 0x3b9e24: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_3b9e28:
    if (ctx->pc == 0x3B9E28u) {
        ctx->pc = 0x3B9E2Cu;
        goto label_3b9e2c;
    }
    ctx->pc = 0x3B9E24u;
    {
        const bool branch_taken_0x3b9e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b9e24) {
            ctx->pc = 0x3B9E34u;
            goto label_3b9e34;
        }
    }
    ctx->pc = 0x3B9E2Cu;
label_3b9e2c:
    // 0x3b9e2c: 0x10000136  b           . + 4 + (0x136 << 2)
label_3b9e30:
    if (ctx->pc == 0x3B9E30u) {
        ctx->pc = 0x3B9E30u;
            // 0x3b9e30: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x3B9E34u;
        goto label_3b9e34;
    }
    ctx->pc = 0x3B9E2Cu;
    {
        const bool branch_taken_0x3b9e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9E2Cu;
            // 0x3b9e30: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9e2c) {
            ctx->pc = 0x3BA308u;
            goto label_3ba308;
        }
    }
    ctx->pc = 0x3B9E34u;
label_3b9e34:
    // 0x3b9e34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3b9e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3b9e38:
    // 0x3b9e38: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3b9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3b9e3c:
    // 0x3b9e3c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3b9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3b9e40:
    // 0x3b9e40: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3b9e40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3b9e44:
    // 0x3b9e44: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_3b9e48:
    if (ctx->pc == 0x3B9E48u) {
        ctx->pc = 0x3B9E48u;
            // 0x3b9e48: 0x92a20058  lbu         $v0, 0x58($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->pc = 0x3B9E4Cu;
        goto label_3b9e4c;
    }
    ctx->pc = 0x3B9E44u;
    {
        const bool branch_taken_0x3b9e44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9e44) {
            ctx->pc = 0x3B9E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9E44u;
            // 0x3b9e48: 0x92a20058  lbu         $v0, 0x58($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B9E68u;
            goto label_3b9e68;
        }
    }
    ctx->pc = 0x3B9E4Cu;
label_3b9e4c:
    // 0x3b9e4c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3b9e4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3b9e50:
    // 0x3b9e50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3b9e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b9e54:
    // 0x3b9e54: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3b9e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3b9e58:
    // 0x3b9e58: 0x320f809  jalr        $t9
label_3b9e5c:
    if (ctx->pc == 0x3B9E5Cu) {
        ctx->pc = 0x3B9E5Cu;
            // 0x3b9e5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B9E60u;
        goto label_3b9e60;
    }
    ctx->pc = 0x3B9E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B9E60u);
        ctx->pc = 0x3B9E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9E58u;
            // 0x3b9e5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B9E60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B9E60u; }
            if (ctx->pc != 0x3B9E60u) { return; }
        }
        }
    }
    ctx->pc = 0x3B9E60u;
label_3b9e60:
    // 0x3b9e60: 0x10000128  b           . + 4 + (0x128 << 2)
label_3b9e64:
    if (ctx->pc == 0x3B9E64u) {
        ctx->pc = 0x3B9E68u;
        goto label_3b9e68;
    }
    ctx->pc = 0x3B9E60u;
    {
        const bool branch_taken_0x3b9e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9e60) {
            ctx->pc = 0x3BA304u;
            goto label_3ba304;
        }
    }
    ctx->pc = 0x3B9E68u;
label_3b9e68:
    // 0x3b9e68: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_3b9e6c:
    if (ctx->pc == 0x3B9E6Cu) {
        ctx->pc = 0x3B9E70u;
        goto label_3b9e70;
    }
    ctx->pc = 0x3B9E68u;
    {
        const bool branch_taken_0x3b9e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9e68) {
            ctx->pc = 0x3BA030u;
            goto label_3ba030;
        }
    }
    ctx->pc = 0x3B9E70u;
label_3b9e70:
    // 0x3b9e70: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x3b9e70u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_3b9e74:
    // 0x3b9e74: 0xc0bcf34  jal         func_2F3CD0
label_3b9e78:
    if (ctx->pc == 0x3B9E78u) {
        ctx->pc = 0x3B9E78u;
            // 0x3b9e78: 0x26312110  addiu       $s1, $s1, 0x2110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8464));
        ctx->pc = 0x3B9E7Cu;
        goto label_3b9e7c;
    }
    ctx->pc = 0x3B9E74u;
    SET_GPR_U32(ctx, 31, 0x3B9E7Cu);
    ctx->pc = 0x3B9E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9E74u;
            // 0x3b9e78: 0x26312110  addiu       $s1, $s1, 0x2110 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9E7Cu; }
        if (ctx->pc != 0x3B9E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9E7Cu; }
        if (ctx->pc != 0x3B9E7Cu) { return; }
    }
    ctx->pc = 0x3B9E7Cu;
label_3b9e7c:
    // 0x3b9e7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b9e7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b9e80:
    // 0x3b9e80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3b9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3b9e84:
    // 0x3b9e84: 0xc0e92f4  jal         func_3A4BD0
label_3b9e88:
    if (ctx->pc == 0x3B9E88u) {
        ctx->pc = 0x3B9E88u;
            // 0x3b9e88: 0x8c440eac  lw          $a0, 0xEAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
        ctx->pc = 0x3B9E8Cu;
        goto label_3b9e8c;
    }
    ctx->pc = 0x3B9E84u;
    SET_GPR_U32(ctx, 31, 0x3B9E8Cu);
    ctx->pc = 0x3B9E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9E84u;
            // 0x3b9e88: 0x8c440eac  lw          $a0, 0xEAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (runtime->hasFunction(0x3A4BD0u)) {
        auto targetFn = runtime->lookupFunction(0x3A4BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9E8Cu; }
        if (ctx->pc != 0x3B9E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A4BD0_0x3a4bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9E8Cu; }
        if (ctx->pc != 0x3B9E8Cu) { return; }
    }
    ctx->pc = 0x3B9E8Cu;
label_3b9e8c:
    // 0x3b9e8c: 0x86a60060  lh          $a2, 0x60($s5)
    ctx->pc = 0x3b9e8cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 96)));
label_3b9e90:
    // 0x3b9e90: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x3b9e90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3b9e94:
    // 0x3b9e94: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3b9e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3b9e98:
    // 0x3b9e98: 0x86a30064  lh          $v1, 0x64($s5)
    ctx->pc = 0x3b9e98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 100)));
label_3b9e9c:
    // 0x3b9e9c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3b9e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3b9ea0:
    // 0x3b9ea0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3b9ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b9ea4:
    // 0x3b9ea4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3b9ea4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b9ea8:
    // 0x3b9ea8: 0x0  nop
    ctx->pc = 0x3b9ea8u;
    // NOP
label_3b9eac:
    // 0x3b9eac: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x3b9eacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_3b9eb0:
    // 0x3b9eb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b9eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b9eb4:
    // 0x3b9eb4: 0xc0506ac  jal         func_141AB0
label_3b9eb8:
    if (ctx->pc == 0x3B9EB8u) {
        ctx->pc = 0x3B9EB8u;
            // 0x3b9eb8: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B9EBCu;
        goto label_3b9ebc;
    }
    ctx->pc = 0x3B9EB4u;
    SET_GPR_U32(ctx, 31, 0x3B9EBCu);
    ctx->pc = 0x3B9EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9EB4u;
            // 0x3b9eb8: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9EBCu; }
        if (ctx->pc != 0x3B9EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9EBCu; }
        if (ctx->pc != 0x3B9EBCu) { return; }
    }
    ctx->pc = 0x3B9EBCu;
label_3b9ebc:
    // 0x3b9ebc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3b9ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3b9ec0:
    // 0x3b9ec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b9ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b9ec4:
    // 0x3b9ec4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3b9ec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3b9ec8:
    // 0x3b9ec8: 0x320f809  jalr        $t9
label_3b9ecc:
    if (ctx->pc == 0x3B9ECCu) {
        ctx->pc = 0x3B9ECCu;
            // 0x3b9ecc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3B9ED0u;
        goto label_3b9ed0;
    }
    ctx->pc = 0x3B9EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B9ED0u);
        ctx->pc = 0x3B9ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9EC8u;
            // 0x3b9ecc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B9ED0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B9ED0u; }
            if (ctx->pc != 0x3B9ED0u) { return; }
        }
        }
    }
    ctx->pc = 0x3B9ED0u;
label_3b9ed0:
    // 0x3b9ed0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3b9ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3b9ed4:
    // 0x3b9ed4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3b9ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3b9ed8:
    // 0x3b9ed8: 0x24a5adb0  addiu       $a1, $a1, -0x5250
    ctx->pc = 0x3b9ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946224));
label_3b9edc:
    // 0x3b9edc: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x3b9edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3b9ee0:
    // 0x3b9ee0: 0xc6a3006c  lwc1        $f3, 0x6C($s5)
    ctx->pc = 0x3b9ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b9ee4:
    // 0x3b9ee4: 0x8ea8007c  lw          $t0, 0x7C($s5)
    ctx->pc = 0x3b9ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
label_3b9ee8:
    // 0x3b9ee8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x3b9ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b9eec:
    // 0x3b9eec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b9eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b9ef0:
    // 0x3b9ef0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x3b9ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b9ef4:
    // 0x3b9ef4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b9ef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b9ef8:
    // 0x3b9ef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b9ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b9efc:
    // 0x3b9efc: 0x46031502  mul.s       $f20, $f2, $f3
    ctx->pc = 0x3b9efcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3b9f00:
    // 0x3b9f00: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3b9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3b9f04:
    // 0x3b9f04: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x3b9f04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b9f08:
    // 0x3b9f08: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x3b9f08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3b9f0c:
    // 0x3b9f0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b9f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b9f10:
    // 0x3b9f10: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x3b9f10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3b9f14:
    // 0x3b9f14: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3b9f14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_3b9f18:
    // 0x3b9f18: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x3b9f18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3b9f1c:
    // 0x3b9f1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b9f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b9f20:
    // 0x3b9f20: 0x0  nop
    ctx->pc = 0x3b9f20u;
    // NOP
label_3b9f24:
    // 0x3b9f24: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b9f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3b9f28:
    // 0x3b9f28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b9f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b9f2c:
    // 0x3b9f2c: 0x0  nop
    ctx->pc = 0x3b9f2cu;
    // NOP
label_3b9f30:
    // 0x3b9f30: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b9f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3b9f34:
    // 0x3b9f34: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x3b9f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b9f38:
    // 0x3b9f38: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x3b9f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b9f3c:
    // 0x3b9f3c: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x3b9f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b9f40:
    // 0x3b9f40: 0x46800ce0  cvt.s.w     $f19, $f1
    ctx->pc = 0x3b9f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[19] = FPU_CVT_S_W(tmp); }
label_3b9f44:
    // 0x3b9f44: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3b9f44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b9f48:
    // 0x3b9f48: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x3b9f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b9f4c:
    // 0x3b9f4c: 0x468014a0  cvt.s.w     $f18, $f2
    ctx->pc = 0x3b9f4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[18] = FPU_CVT_S_W(tmp); }
label_3b9f50:
    // 0x3b9f50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b9f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b9f54:
    // 0x3b9f54: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3b9f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3b9f58:
    // 0x3b9f58: 0x4603ab41  sub.s       $f13, $f21, $f3
    ctx->pc = 0x3b9f58u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[3]);
label_3b9f5c:
    // 0x3b9f5c: 0x4603abc0  add.s       $f15, $f21, $f3
    ctx->pc = 0x3b9f5cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[3]);
label_3b9f60:
    // 0x3b9f60: 0x4614b380  add.s       $f14, $f22, $f20
    ctx->pc = 0x3b9f60u;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_3b9f64:
    // 0x3b9f64: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b9f64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b9f68:
    // 0x3b9f68: 0xc0bc228  jal         func_2F08A0
label_3b9f6c:
    if (ctx->pc == 0x3B9F6Cu) {
        ctx->pc = 0x3B9F6Cu;
            // 0x3b9f6c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->pc = 0x3B9F70u;
        goto label_3b9f70;
    }
    ctx->pc = 0x3B9F68u;
    SET_GPR_U32(ctx, 31, 0x3B9F70u);
    ctx->pc = 0x3B9F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9F68u;
            // 0x3b9f6c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F08A0u;
    if (runtime->hasFunction(0x2F08A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F08A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9F70u; }
        if (ctx->pc != 0x3B9F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F08A0_0x2f08a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B9F70u; }
        if (ctx->pc != 0x3B9F70u) { return; }
    }
    ctx->pc = 0x3B9F70u;
label_3b9f70:
    // 0x3b9f70: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x3b9f70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3b9f74:
    // 0x3b9f74: 0x3c074080  lui         $a3, 0x4080
    ctx->pc = 0x3b9f74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16512 << 16));
label_3b9f78:
    // 0x3b9f78: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x3b9f78u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b9f7c:
    // 0x3b9f7c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3b9f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3b9f80:
    // 0x3b9f80: 0x3c093f00  lui         $t1, 0x3F00
    ctx->pc = 0x3b9f80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16128 << 16));
label_3b9f84:
    // 0x3b9f84: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x3b9f84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3b9f88:
    // 0x3b9f88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b9f88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b9f8c:
    // 0x3b9f8c: 0x8ea8007c  lw          $t0, 0x7C($s5)
    ctx->pc = 0x3b9f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
label_3b9f90:
    // 0x3b9f90: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3b9f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3b9f94:
    // 0x3b9f94: 0x24a5ae60  addiu       $a1, $a1, -0x51A0
    ctx->pc = 0x3b9f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946400));
label_3b9f98:
    // 0x3b9f98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b9f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b9f9c:
    // 0x3b9f9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3b9f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b9fa0:
    // 0x3b9fa0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b9fa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b9fa4:
    // 0x3b9fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b9fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b9fa8:
    // 0x3b9fa8: 0x0  nop
    ctx->pc = 0x3b9fa8u;
    // NOP
label_3b9fac:
    // 0x3b9fac: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3b9facu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3b9fb0:
    // 0x3b9fb0: 0x4614b0c0  add.s       $f3, $f22, $f20
    ctx->pc = 0x3b9fb0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_3b9fb4:
    // 0x3b9fb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b9fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b9fb8:
    // 0x3b9fb8: 0x0  nop
    ctx->pc = 0x3b9fb8u;
    // NOP
label_3b9fbc:
    // 0x3b9fbc: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x3b9fbcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3b9fc0:
    // 0x3b9fc0: 0xc6a4006c  lwc1        $f4, 0x6C($s5)
    ctx->pc = 0x3b9fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3b9fc4:
    // 0x3b9fc4: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x3b9fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b9fc8:
    // 0x3b9fc8: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x3b9fc8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b9fcc:
    // 0x3b9fcc: 0x46040b1c  madd.s      $f12, $f1, $f4
    ctx->pc = 0x3b9fccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
label_3b9fd0:
    // 0x3b9fd0: 0x460c0018  adda.s      $f0, $f12
    ctx->pc = 0x3b9fd0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_3b9fd4:
    // 0x3b9fd4: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x3b9fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b9fd8:
    // 0x3b9fd8: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x3b9fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b9fdc:
    // 0x3b9fdc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3b9fdcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3b9fe0:
    // 0x3b9fe0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3b9fe0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3b9fe4:
    // 0x3b9fe4: 0x46800ca0  cvt.s.w     $f18, $f1
    ctx->pc = 0x3b9fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[18] = FPU_CVT_S_W(tmp); }
label_3b9fe8:
    // 0x3b9fe8: 0x468004e0  cvt.s.w     $f19, $f0
    ctx->pc = 0x3b9fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[19] = FPU_CVT_S_W(tmp); }
label_3b9fec:
    // 0x3b9fec: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x3b9fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b9ff0:
    // 0x3b9ff0: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x3b9ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b9ff4:
    // 0x3b9ff4: 0x4602ab41  sub.s       $f13, $f21, $f2
    ctx->pc = 0x3b9ff4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
label_3b9ff8:
    // 0x3b9ff8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b9ff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b9ffc:
    // 0x3b9ffc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b9ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ba000:
    // 0x3ba000: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3ba000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3ba004:
    // 0x3ba004: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3ba004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3ba008:
    // 0x3ba008: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3ba008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ba00c:
    // 0x3ba00c: 0x4602abc0  add.s       $f15, $f21, $f2
    ctx->pc = 0x3ba00cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_3ba010:
    // 0x3ba010: 0xc0bc228  jal         func_2F08A0
label_3ba014:
    if (ctx->pc == 0x3BA014u) {
        ctx->pc = 0x3BA014u;
            // 0x3ba014: 0x4604039c  madd.s      $f14, $f0, $f4 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
        ctx->pc = 0x3BA018u;
        goto label_3ba018;
    }
    ctx->pc = 0x3BA010u;
    SET_GPR_U32(ctx, 31, 0x3BA018u);
    ctx->pc = 0x3BA014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA010u;
            // 0x3ba014: 0x4604039c  madd.s      $f14, $f0, $f4 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F08A0u;
    if (runtime->hasFunction(0x2F08A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F08A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA018u; }
        if (ctx->pc != 0x3BA018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F08A0_0x2f08a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA018u; }
        if (ctx->pc != 0x3BA018u) { return; }
    }
    ctx->pc = 0x3BA018u;
label_3ba018:
    // 0x3ba018: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3ba018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ba01c:
    // 0x3ba01c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ba01cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ba020:
    // 0x3ba020: 0x320f809  jalr        $t9
label_3ba024:
    if (ctx->pc == 0x3BA024u) {
        ctx->pc = 0x3BA024u;
            // 0x3ba024: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BA028u;
        goto label_3ba028;
    }
    ctx->pc = 0x3BA020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BA028u);
        ctx->pc = 0x3BA024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA020u;
            // 0x3ba024: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BA028u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BA028u; }
            if (ctx->pc != 0x3BA028u) { return; }
        }
        }
    }
    ctx->pc = 0x3BA028u;
label_3ba028:
    // 0x3ba028: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_3ba02c:
    if (ctx->pc == 0x3BA02Cu) {
        ctx->pc = 0x3BA030u;
        goto label_3ba030;
    }
    ctx->pc = 0x3BA028u;
    {
        const bool branch_taken_0x3ba028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba028) {
            ctx->pc = 0x3BA304u;
            goto label_3ba304;
        }
    }
    ctx->pc = 0x3BA030u;
label_3ba030:
    // 0x3ba030: 0xc0bcf34  jal         func_2F3CD0
label_3ba034:
    if (ctx->pc == 0x3BA034u) {
        ctx->pc = 0x3BA038u;
        goto label_3ba038;
    }
    ctx->pc = 0x3BA030u;
    SET_GPR_U32(ctx, 31, 0x3BA038u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA038u; }
        if (ctx->pc != 0x3BA038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA038u; }
        if (ctx->pc != 0x3BA038u) { return; }
    }
    ctx->pc = 0x3BA038u;
label_3ba038:
    // 0x3ba038: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3ba038u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ba03c:
    // 0x3ba03c: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x3ba03cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_3ba040:
    // 0x3ba040: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ba040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ba044:
    // 0x3ba044: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x3ba044u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_3ba048:
    // 0x3ba048: 0x8c440eac  lw          $a0, 0xEAC($v0)
    ctx->pc = 0x3ba048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_3ba04c:
    // 0x3ba04c: 0x3c160064  lui         $s6, 0x64
    ctx->pc = 0x3ba04cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)100 << 16));
label_3ba050:
    // 0x3ba050: 0x26529bc0  addiu       $s2, $s2, -0x6440
    ctx->pc = 0x3ba050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941632));
label_3ba054:
    // 0x3ba054: 0x26312100  addiu       $s1, $s1, 0x2100
    ctx->pc = 0x3ba054u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8448));
label_3ba058:
    // 0x3ba058: 0xc0e92f4  jal         func_3A4BD0
label_3ba05c:
    if (ctx->pc == 0x3BA05Cu) {
        ctx->pc = 0x3BA05Cu;
            // 0x3ba05c: 0x26d62110  addiu       $s6, $s6, 0x2110 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8464));
        ctx->pc = 0x3BA060u;
        goto label_3ba060;
    }
    ctx->pc = 0x3BA058u;
    SET_GPR_U32(ctx, 31, 0x3BA060u);
    ctx->pc = 0x3BA05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA058u;
            // 0x3ba05c: 0x26d62110  addiu       $s6, $s6, 0x2110 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (runtime->hasFunction(0x3A4BD0u)) {
        auto targetFn = runtime->lookupFunction(0x3A4BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA060u; }
        if (ctx->pc != 0x3BA060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A4BD0_0x3a4bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA060u; }
        if (ctx->pc != 0x3BA060u) { return; }
    }
    ctx->pc = 0x3BA060u;
label_3ba060:
    // 0x3ba060: 0x86a30060  lh          $v1, 0x60($s5)
    ctx->pc = 0x3ba060u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 96)));
label_3ba064:
    // 0x3ba064: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x3ba064u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3ba068:
    // 0x3ba068: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ba068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ba06c:
    // 0x3ba06c: 0x8eb0005c  lw          $s0, 0x5C($s5)
    ctx->pc = 0x3ba06cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
label_3ba070:
    // 0x3ba070: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3ba070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3ba074:
    // 0x3ba074: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3ba074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ba078:
    // 0x3ba078: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ba078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ba07c:
    // 0x3ba07c: 0x0  nop
    ctx->pc = 0x3ba07cu;
    // NOP
label_3ba080:
    // 0x3ba080: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x3ba080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_3ba084:
    // 0x3ba084: 0x86a20064  lh          $v0, 0x64($s5)
    ctx->pc = 0x3ba084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 100)));
label_3ba088:
    // 0x3ba088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ba088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ba08c:
    // 0x3ba08c: 0xc0506ac  jal         func_141AB0
label_3ba090:
    if (ctx->pc == 0x3BA090u) {
        ctx->pc = 0x3BA090u;
            // 0x3ba090: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3BA094u;
        goto label_3ba094;
    }
    ctx->pc = 0x3BA08Cu;
    SET_GPR_U32(ctx, 31, 0x3BA094u);
    ctx->pc = 0x3BA090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA08Cu;
            // 0x3ba090: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA094u; }
        if (ctx->pc != 0x3BA094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA094u; }
        if (ctx->pc != 0x3BA094u) { return; }
    }
    ctx->pc = 0x3BA094u;
label_3ba094:
    // 0x3ba094: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3ba094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ba098:
    // 0x3ba098: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ba098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ba09c:
    // 0x3ba09c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3ba09cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3ba0a0:
    // 0x3ba0a0: 0x320f809  jalr        $t9
label_3ba0a4:
    if (ctx->pc == 0x3BA0A4u) {
        ctx->pc = 0x3BA0A4u;
            // 0x3ba0a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3BA0A8u;
        goto label_3ba0a8;
    }
    ctx->pc = 0x3BA0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BA0A8u);
        ctx->pc = 0x3BA0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA0A0u;
            // 0x3ba0a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BA0A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BA0A8u; }
            if (ctx->pc != 0x3BA0A8u) { return; }
        }
        }
    }
    ctx->pc = 0x3BA0A8u;
label_3ba0a8:
    // 0x3ba0a8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3ba0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_3ba0ac:
    // 0x3ba0ac: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3ba0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3ba0b0:
    // 0x3ba0b0: 0x24a5ae60  addiu       $a1, $a1, -0x51A0
    ctx->pc = 0x3ba0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946400));
label_3ba0b4:
    // 0x3ba0b4: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x3ba0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_3ba0b8:
    // 0x3ba0b8: 0xc6a3006c  lwc1        $f3, 0x6C($s5)
    ctx->pc = 0x3ba0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3ba0bc:
    // 0x3ba0bc: 0x8ea8007c  lw          $t0, 0x7C($s5)
    ctx->pc = 0x3ba0bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
label_3ba0c0:
    // 0x3ba0c0: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x3ba0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ba0c4:
    // 0x3ba0c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ba0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ba0c8:
    // 0x3ba0c8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x3ba0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ba0cc:
    // 0x3ba0cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ba0ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ba0d0:
    // 0x3ba0d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ba0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ba0d4:
    // 0x3ba0d4: 0x46031502  mul.s       $f20, $f2, $f3
    ctx->pc = 0x3ba0d4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3ba0d8:
    // 0x3ba0d8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3ba0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3ba0dc:
    // 0x3ba0dc: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x3ba0dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3ba0e0:
    // 0x3ba0e0: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x3ba0e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_3ba0e4:
    // 0x3ba0e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3ba0e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ba0e8:
    // 0x3ba0e8: 0x86c20002  lh          $v0, 0x2($s6)
    ctx->pc = 0x3ba0e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_3ba0ec:
    // 0x3ba0ec: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3ba0ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_3ba0f0:
    // 0x3ba0f0: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x3ba0f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3ba0f4:
    // 0x3ba0f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ba0f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ba0f8:
    // 0x3ba0f8: 0x0  nop
    ctx->pc = 0x3ba0f8u;
    // NOP
label_3ba0fc:
    // 0x3ba0fc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ba0fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3ba100:
    // 0x3ba100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ba100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ba104:
    // 0x3ba104: 0x0  nop
    ctx->pc = 0x3ba104u;
    // NOP
label_3ba108:
    // 0x3ba108: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ba108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3ba10c:
    // 0x3ba10c: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x3ba10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ba110:
    // 0x3ba110: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x3ba110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ba114:
    // 0x3ba114: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x3ba114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ba118:
    // 0x3ba118: 0x46800ce0  cvt.s.w     $f19, $f1
    ctx->pc = 0x3ba118u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[19] = FPU_CVT_S_W(tmp); }
label_3ba11c:
    // 0x3ba11c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3ba11cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ba120:
    // 0x3ba120: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x3ba120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ba124:
    // 0x3ba124: 0x468014a0  cvt.s.w     $f18, $f2
    ctx->pc = 0x3ba124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[18] = FPU_CVT_S_W(tmp); }
label_3ba128:
    // 0x3ba128: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ba128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ba12c:
    // 0x3ba12c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3ba12cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3ba130:
    // 0x3ba130: 0x4603ab41  sub.s       $f13, $f21, $f3
    ctx->pc = 0x3ba130u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[3]);
label_3ba134:
    // 0x3ba134: 0x4603abc0  add.s       $f15, $f21, $f3
    ctx->pc = 0x3ba134u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[3]);
label_3ba138:
    // 0x3ba138: 0x4614b380  add.s       $f14, $f22, $f20
    ctx->pc = 0x3ba138u;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_3ba13c:
    // 0x3ba13c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3ba13cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3ba140:
    // 0x3ba140: 0xc0bc228  jal         func_2F08A0
label_3ba144:
    if (ctx->pc == 0x3BA144u) {
        ctx->pc = 0x3BA144u;
            // 0x3ba144: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->pc = 0x3BA148u;
        goto label_3ba148;
    }
    ctx->pc = 0x3BA140u;
    SET_GPR_U32(ctx, 31, 0x3BA148u);
    ctx->pc = 0x3BA144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA140u;
            // 0x3ba144: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F08A0u;
    if (runtime->hasFunction(0x2F08A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F08A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA148u; }
        if (ctx->pc != 0x3BA148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F08A0_0x2f08a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA148u; }
        if (ctx->pc != 0x3BA148u) { return; }
    }
    ctx->pc = 0x3BA148u;
label_3ba148:
    // 0x3ba148: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3ba148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ba14c:
    // 0x3ba14c: 0x4614b580  add.s       $f22, $f22, $f20
    ctx->pc = 0x3ba14cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_3ba150:
    // 0x3ba150: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ba150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ba154:
    // 0x3ba154: 0x320f809  jalr        $t9
label_3ba158:
    if (ctx->pc == 0x3BA158u) {
        ctx->pc = 0x3BA158u;
            // 0x3ba158: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BA15Cu;
        goto label_3ba15c;
    }
    ctx->pc = 0x3BA154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BA15Cu);
        ctx->pc = 0x3BA158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA154u;
            // 0x3ba158: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BA15Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BA15Cu; }
            if (ctx->pc != 0x3BA15Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3BA15Cu;
label_3ba15c:
    // 0x3ba15c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3ba15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_3ba160:
    // 0x3ba160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ba160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ba164:
    // 0x3ba164: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ba164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ba168:
    // 0x3ba168: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ba168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ba16c:
    // 0x3ba16c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ba16cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ba170:
    // 0x3ba170: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3ba170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3ba174:
    // 0x3ba174: 0xc6a2006c  lwc1        $f2, 0x6C($s5)
    ctx->pc = 0x3ba174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ba178:
    // 0x3ba178: 0x46160018  adda.s      $f0, $f22
    ctx->pc = 0x3ba178u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_3ba17c:
    // 0x3ba17c: 0xc0506ac  jal         func_141AB0
label_3ba180:
    if (ctx->pc == 0x3BA180u) {
        ctx->pc = 0x3BA180u;
            // 0x3ba180: 0x46020d9c  madd.s      $f22, $f1, $f2 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x3BA184u;
        goto label_3ba184;
    }
    ctx->pc = 0x3BA17Cu;
    SET_GPR_U32(ctx, 31, 0x3BA184u);
    ctx->pc = 0x3BA180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA17Cu;
            // 0x3ba180: 0x46020d9c  madd.s      $f22, $f1, $f2 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA184u; }
        if (ctx->pc != 0x3BA184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA184u; }
        if (ctx->pc != 0x3BA184u) { return; }
    }
    ctx->pc = 0x3BA184u;
label_3ba184:
    // 0x3ba184: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3ba184u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ba188:
    // 0x3ba188: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ba188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ba18c:
    // 0x3ba18c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3ba18cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3ba190:
    // 0x3ba190: 0x320f809  jalr        $t9
label_3ba194:
    if (ctx->pc == 0x3BA194u) {
        ctx->pc = 0x3BA194u;
            // 0x3ba194: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3BA198u;
        goto label_3ba198;
    }
    ctx->pc = 0x3BA190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BA198u);
        ctx->pc = 0x3BA194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA190u;
            // 0x3ba194: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BA198u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BA198u; }
            if (ctx->pc != 0x3BA198u) { return; }
        }
        }
    }
    ctx->pc = 0x3BA198u;
label_3ba198:
    // 0x3ba198: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3ba198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_3ba19c:
    // 0x3ba19c: 0x101fc2  srl         $v1, $s0, 31
    ctx->pc = 0x3ba19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
label_3ba1a0:
    // 0x3ba1a0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3ba1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_3ba1a4:
    // 0x3ba1a4: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x3ba1a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3ba1a8:
    // 0x3ba1a8: 0x1010  mfhi        $v0
    ctx->pc = 0x3ba1a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3ba1ac:
    // 0x3ba1ac: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3ba1acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_3ba1b0:
    // 0x3ba1b0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3ba1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ba1b4:
    // 0x3ba1b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3ba1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3ba1b8:
    // 0x3ba1b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ba1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ba1bc:
    // 0x3ba1bc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3ba1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3ba1c0:
    // 0x3ba1c0: 0x18600027  blez        $v1, . + 4 + (0x27 << 2)
label_3ba1c4:
    if (ctx->pc == 0x3BA1C4u) {
        ctx->pc = 0x3BA1C4u;
            // 0x3ba1c4: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x3BA1C8u;
        goto label_3ba1c8;
    }
    ctx->pc = 0x3BA1C0u;
    {
        const bool branch_taken_0x3ba1c0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3BA1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA1C0u;
            // 0x3ba1c4: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba1c0) {
            ctx->pc = 0x3BA260u;
            goto label_3ba260;
        }
    }
    ctx->pc = 0x3BA1C8u;
label_3ba1c8:
    // 0x3ba1c8: 0x2463000d  addiu       $v1, $v1, 0xD
    ctx->pc = 0x3ba1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13));
label_3ba1cc:
    // 0x3ba1cc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3ba1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3ba1d0:
    // 0x3ba1d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3ba1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3ba1d4:
    // 0x3ba1d4: 0x8ea8007c  lw          $t0, 0x7C($s5)
    ctx->pc = 0x3ba1d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
label_3ba1d8:
    // 0x3ba1d8: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x3ba1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_3ba1dc:
    // 0x3ba1dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ba1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ba1e0:
    // 0x3ba1e0: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x3ba1e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3ba1e4:
    // 0x3ba1e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ba1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ba1e8:
    // 0x3ba1e8: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x3ba1e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3ba1ec:
    // 0x3ba1ec: 0xc6a4006c  lwc1        $f4, 0x6C($s5)
    ctx->pc = 0x3ba1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3ba1f0:
    // 0x3ba1f0: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x3ba1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3ba1f4:
    // 0x3ba1f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3ba1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ba1f8:
    // 0x3ba1f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ba1f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ba1fc:
    // 0x3ba1fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ba1fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ba200:
    // 0x3ba200: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ba200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3ba204:
    // 0x3ba204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ba204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ba208:
    // 0x3ba208: 0x0  nop
    ctx->pc = 0x3ba208u;
    // NOP
label_3ba20c:
    // 0x3ba20c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ba20cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3ba210:
    // 0x3ba210: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x3ba210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ba214:
    // 0x3ba214: 0x46041d02  mul.s       $f20, $f3, $f4
    ctx->pc = 0x3ba214u;
    ctx->f[20] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3ba218:
    // 0x3ba218: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3ba218u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_3ba21c:
    // 0x3ba21c: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x3ba21cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3ba220:
    // 0x3ba220: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x3ba220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ba224:
    // 0x3ba224: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x3ba224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ba228:
    // 0x3ba228: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x3ba228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ba22c:
    // 0x3ba22c: 0x468004a0  cvt.s.w     $f18, $f0
    ctx->pc = 0x3ba22cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[18] = FPU_CVT_S_W(tmp); }
label_3ba230:
    // 0x3ba230: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x3ba230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ba234:
    // 0x3ba234: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ba234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ba238:
    // 0x3ba238: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ba238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ba23c:
    // 0x3ba23c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3ba23cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3ba240:
    // 0x3ba240: 0x468014e0  cvt.s.w     $f19, $f2
    ctx->pc = 0x3ba240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[19] = FPU_CVT_S_W(tmp); }
label_3ba244:
    // 0x3ba244: 0x4603ab41  sub.s       $f13, $f21, $f3
    ctx->pc = 0x3ba244u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[3]);
label_3ba248:
    // 0x3ba248: 0x4603abc0  add.s       $f15, $f21, $f3
    ctx->pc = 0x3ba248u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[3]);
label_3ba24c:
    // 0x3ba24c: 0x4614b380  add.s       $f14, $f22, $f20
    ctx->pc = 0x3ba24cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_3ba250:
    // 0x3ba250: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3ba250u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3ba254:
    // 0x3ba254: 0xc0bc228  jal         func_2F08A0
label_3ba258:
    if (ctx->pc == 0x3BA258u) {
        ctx->pc = 0x3BA258u;
            // 0x3ba258: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->pc = 0x3BA25Cu;
        goto label_3ba25c;
    }
    ctx->pc = 0x3BA254u;
    SET_GPR_U32(ctx, 31, 0x3BA25Cu);
    ctx->pc = 0x3BA258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA254u;
            // 0x3ba258: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F08A0u;
    if (runtime->hasFunction(0x2F08A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F08A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA25Cu; }
        if (ctx->pc != 0x3BA25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F08A0_0x2f08a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA25Cu; }
        if (ctx->pc != 0x3BA25Cu) { return; }
    }
    ctx->pc = 0x3BA25Cu;
label_3ba25c:
    // 0x3ba25c: 0x4614b580  add.s       $f22, $f22, $f20
    ctx->pc = 0x3ba25cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
label_3ba260:
    // 0x3ba260: 0x2602000d  addiu       $v0, $s0, 0xD
    ctx->pc = 0x3ba260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_3ba264:
    // 0x3ba264: 0x8ea8007c  lw          $t0, 0x7C($s5)
    ctx->pc = 0x3ba264u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
label_3ba268:
    // 0x3ba268: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3ba268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3ba26c:
    // 0x3ba26c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3ba26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ba270:
    // 0x3ba270: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x3ba270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_3ba274:
    // 0x3ba274: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3ba274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3ba278:
    // 0x3ba278: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x3ba278u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3ba27c:
    // 0x3ba27c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3ba27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3ba280:
    // 0x3ba280: 0xc6a4006c  lwc1        $f4, 0x6C($s5)
    ctx->pc = 0x3ba280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3ba284:
    // 0x3ba284: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x3ba284u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3ba288:
    // 0x3ba288: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x3ba288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3ba28c:
    // 0x3ba28c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ba28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ba290:
    // 0x3ba290: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ba290u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ba294:
    // 0x3ba294: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ba294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ba298:
    // 0x3ba298: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3ba298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3ba29c:
    // 0x3ba29c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3ba29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ba2a0:
    // 0x3ba2a0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3ba2a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3ba2a4:
    // 0x3ba2a4: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x3ba2a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_3ba2a8:
    // 0x3ba2a8: 0x4600b380  add.s       $f14, $f22, $f0
    ctx->pc = 0x3ba2a8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_3ba2ac:
    // 0x3ba2ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ba2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ba2b0:
    // 0x3ba2b0: 0x0  nop
    ctx->pc = 0x3ba2b0u;
    // NOP
label_3ba2b4:
    // 0x3ba2b4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3ba2b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3ba2b8:
    // 0x3ba2b8: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x3ba2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ba2bc:
    // 0x3ba2bc: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x3ba2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ba2c0:
    // 0x3ba2c0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3ba2c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3ba2c4:
    // 0x3ba2c4: 0x46800ca0  cvt.s.w     $f18, $f1
    ctx->pc = 0x3ba2c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[18] = FPU_CVT_S_W(tmp); }
label_3ba2c8:
    // 0x3ba2c8: 0x468004e0  cvt.s.w     $f19, $f0
    ctx->pc = 0x3ba2c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[19] = FPU_CVT_S_W(tmp); }
label_3ba2cc:
    // 0x3ba2cc: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x3ba2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ba2d0:
    // 0x3ba2d0: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x3ba2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ba2d4:
    // 0x3ba2d4: 0x4602ab41  sub.s       $f13, $f21, $f2
    ctx->pc = 0x3ba2d4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
label_3ba2d8:
    // 0x3ba2d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ba2d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ba2dc:
    // 0x3ba2dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ba2dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ba2e0:
    // 0x3ba2e0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3ba2e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3ba2e4:
    // 0x3ba2e4: 0x4602abc0  add.s       $f15, $f21, $f2
    ctx->pc = 0x3ba2e4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_3ba2e8:
    // 0x3ba2e8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3ba2e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3ba2ec:
    // 0x3ba2ec: 0xc0bc228  jal         func_2F08A0
label_3ba2f0:
    if (ctx->pc == 0x3BA2F0u) {
        ctx->pc = 0x3BA2F0u;
            // 0x3ba2f0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->pc = 0x3BA2F4u;
        goto label_3ba2f4;
    }
    ctx->pc = 0x3BA2ECu;
    SET_GPR_U32(ctx, 31, 0x3BA2F4u);
    ctx->pc = 0x3BA2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA2ECu;
            // 0x3ba2f0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F08A0u;
    if (runtime->hasFunction(0x2F08A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F08A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA2F4u; }
        if (ctx->pc != 0x3BA2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F08A0_0x2f08a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA2F4u; }
        if (ctx->pc != 0x3BA2F4u) { return; }
    }
    ctx->pc = 0x3BA2F4u;
label_3ba2f4:
    // 0x3ba2f4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3ba2f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ba2f8:
    // 0x3ba2f8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3ba2f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3ba2fc:
    // 0x3ba2fc: 0x320f809  jalr        $t9
label_3ba300:
    if (ctx->pc == 0x3BA300u) {
        ctx->pc = 0x3BA300u;
            // 0x3ba300: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BA304u;
        goto label_3ba304;
    }
    ctx->pc = 0x3BA2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BA304u);
        ctx->pc = 0x3BA300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA2FCu;
            // 0x3ba300: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BA304u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BA304u; }
            if (ctx->pc != 0x3BA304u) { return; }
        }
        }
    }
    ctx->pc = 0x3BA304u;
label_3ba304:
    // 0x3ba304: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3ba304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3ba308:
    // 0x3ba308: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x3ba308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3ba30c:
    // 0x3ba30c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3ba30cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ba310:
    // 0x3ba310: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x3ba310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ba314:
    // 0x3ba314: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3ba314u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ba318:
    // 0x3ba318: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3ba318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ba31c:
    // 0x3ba31c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3ba31cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ba320:
    // 0x3ba320: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3ba320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ba324:
    // 0x3ba324: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3ba324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ba328:
    // 0x3ba328: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3ba328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ba32c:
    // 0x3ba32c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ba32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ba330:
    // 0x3ba330: 0x3e00008  jr          $ra
label_3ba334:
    if (ctx->pc == 0x3BA334u) {
        ctx->pc = 0x3BA334u;
            // 0x3ba334: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3BA338u;
        goto label_3ba338;
    }
    ctx->pc = 0x3BA330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA330u;
            // 0x3ba334: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BA338u;
label_3ba338:
    // 0x3ba338: 0x0  nop
    ctx->pc = 0x3ba338u;
    // NOP
label_3ba33c:
    // 0x3ba33c: 0x0  nop
    ctx->pc = 0x3ba33cu;
    // NOP
label_3ba340:
    // 0x3ba340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ba340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ba344:
    // 0x3ba344: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3ba344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3ba348:
    // 0x3ba348: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ba348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ba34c:
    // 0x3ba34c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ba34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ba350:
    // 0x3ba350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ba350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ba354:
    // 0x3ba354: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3ba354u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3ba358:
    // 0x3ba358: 0x8c708a08  lw          $s0, -0x75F8($v1)
    ctx->pc = 0x3ba358u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3ba35c:
    // 0x3ba35c: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x3ba35cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3ba360:
    // 0x3ba360: 0x10200084  beqz        $at, . + 4 + (0x84 << 2)
label_3ba364:
    if (ctx->pc == 0x3BA364u) {
        ctx->pc = 0x3BA364u;
            // 0x3ba364: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BA368u;
        goto label_3ba368;
    }
    ctx->pc = 0x3BA360u;
    {
        const bool branch_taken_0x3ba360 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA360u;
            // 0x3ba364: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba360) {
            ctx->pc = 0x3BA574u;
            goto label_3ba574;
        }
    }
    ctx->pc = 0x3BA368u;
label_3ba368:
    // 0x3ba368: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3ba368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3ba36c:
    // 0x3ba36c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3ba36cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3ba370:
    // 0x3ba370: 0x24a582e0  addiu       $a1, $a1, -0x7D20
    ctx->pc = 0x3ba370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935264));
label_3ba374:
    // 0x3ba374: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3ba374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3ba378:
    // 0x3ba378: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3ba378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ba37c:
    // 0x3ba37c: 0x600008  jr          $v1
label_3ba380:
    if (ctx->pc == 0x3BA380u) {
        ctx->pc = 0x3BA384u;
        goto label_3ba384;
    }
    ctx->pc = 0x3BA37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3BA384u: goto label_3ba384;
            case 0x3BA394u: goto label_3ba394;
            case 0x3BA440u: goto label_3ba440;
            case 0x3BA4A4u: goto label_3ba4a4;
            case 0x3BA548u: goto label_3ba548;
            case 0x3BA560u: goto label_3ba560;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3BA384u;
label_3ba384:
    // 0x3ba384: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ba384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba388:
    // 0x3ba388: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3ba388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3ba38c:
    // 0x3ba38c: 0x320f809  jalr        $t9
label_3ba390:
    if (ctx->pc == 0x3BA390u) {
        ctx->pc = 0x3BA394u;
        goto label_3ba394;
    }
    ctx->pc = 0x3BA38Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BA394u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BA394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BA394u; }
            if (ctx->pc != 0x3BA394u) { return; }
        }
        }
    }
    ctx->pc = 0x3BA394u;
label_3ba394:
    // 0x3ba394: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ba394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ba398:
    // 0x3ba398: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3ba398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3ba39c:
    // 0x3ba39c: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3ba39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3ba3a0:
    // 0x3ba3a0: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3ba3a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_3ba3a4:
    // 0x3ba3a4: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_3ba3a8:
    if (ctx->pc == 0x3BA3A8u) {
        ctx->pc = 0x3BA3A8u;
            // 0x3ba3a8: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3BA3ACu;
        goto label_3ba3ac;
    }
    ctx->pc = 0x3BA3A4u;
    {
        const bool branch_taken_0x3ba3a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba3a4) {
            ctx->pc = 0x3BA3A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA3A4u;
            // 0x3ba3a8: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BA3C8u;
            goto label_3ba3c8;
        }
    }
    ctx->pc = 0x3BA3ACu;
label_3ba3ac:
    // 0x3ba3ac: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3ba3acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ba3b0:
    // 0x3ba3b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ba3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ba3b4:
    // 0x3ba3b4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ba3b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ba3b8:
    // 0x3ba3b8: 0x320f809  jalr        $t9
label_3ba3bc:
    if (ctx->pc == 0x3BA3BCu) {
        ctx->pc = 0x3BA3BCu;
            // 0x3ba3bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BA3C0u;
        goto label_3ba3c0;
    }
    ctx->pc = 0x3BA3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BA3C0u);
        ctx->pc = 0x3BA3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA3B8u;
            // 0x3ba3bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BA3C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BA3C0u; }
            if (ctx->pc != 0x3BA3C0u) { return; }
        }
        }
    }
    ctx->pc = 0x3BA3C0u;
label_3ba3c0:
    // 0x3ba3c0: 0x1000006d  b           . + 4 + (0x6D << 2)
label_3ba3c4:
    if (ctx->pc == 0x3BA3C4u) {
        ctx->pc = 0x3BA3C4u;
            // 0x3ba3c4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3BA3C8u;
        goto label_3ba3c8;
    }
    ctx->pc = 0x3BA3C0u;
    {
        const bool branch_taken_0x3ba3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA3C0u;
            // 0x3ba3c4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba3c0) {
            ctx->pc = 0x3BA578u;
            goto label_3ba578;
        }
    }
    ctx->pc = 0x3BA3C8u;
label_3ba3c8:
    // 0x3ba3c8: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x3ba3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ba3cc:
    // 0x3ba3cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ba3ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3ba3d0:
    // 0x3ba3d0: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x3ba3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_3ba3d4:
    // 0x3ba3d4: 0xc6230070  lwc1        $f3, 0x70($s1)
    ctx->pc = 0x3ba3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3ba3d8:
    // 0x3ba3d8: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x3ba3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ba3dc:
    // 0x3ba3dc: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x3ba3dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ba3e0:
    // 0x3ba3e0: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_3ba3e4:
    if (ctx->pc == 0x3BA3E4u) {
        ctx->pc = 0x3BA3E4u;
            // 0x3ba3e4: 0x86240062  lh          $a0, 0x62($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 98)));
        ctx->pc = 0x3BA3E8u;
        goto label_3ba3e8;
    }
    ctx->pc = 0x3BA3E0u;
    {
        const bool branch_taken_0x3ba3e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ba3e0) {
            ctx->pc = 0x3BA3E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA3E0u;
            // 0x3ba3e4: 0x86240062  lh          $a0, 0x62($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 98)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BA408u;
            goto label_3ba408;
        }
    }
    ctx->pc = 0x3BA3E8u;
label_3ba3e8:
    // 0x3ba3e8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3ba3e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ba3ec:
    // 0x3ba3ec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3ba3ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3ba3f0:
    // 0x3ba3f0: 0x320f809  jalr        $t9
label_3ba3f4:
    if (ctx->pc == 0x3BA3F4u) {
        ctx->pc = 0x3BA3F4u;
            // 0x3ba3f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BA3F8u;
        goto label_3ba3f8;
    }
    ctx->pc = 0x3BA3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BA3F8u);
        ctx->pc = 0x3BA3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA3F0u;
            // 0x3ba3f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BA3F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BA3F8u; }
            if (ctx->pc != 0x3BA3F8u) { return; }
        }
        }
    }
    ctx->pc = 0x3BA3F8u;
label_3ba3f8:
    // 0x3ba3f8: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x3ba3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_3ba3fc:
    // 0x3ba3fc: 0x86230066  lh          $v1, 0x66($s1)
    ctx->pc = 0x3ba3fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_3ba400:
    // 0x3ba400: 0x1000005c  b           . + 4 + (0x5C << 2)
label_3ba404:
    if (ctx->pc == 0x3BA404u) {
        ctx->pc = 0x3BA404u;
            // 0x3ba404: 0xa6230060  sh          $v1, 0x60($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3BA408u;
        goto label_3ba408;
    }
    ctx->pc = 0x3BA400u;
    {
        const bool branch_taken_0x3ba400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA400u;
            // 0x3ba404: 0xa6230060  sh          $v1, 0x60($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba400) {
            ctx->pc = 0x3BA574u;
            goto label_3ba574;
        }
    }
    ctx->pc = 0x3BA408u;
label_3ba408:
    // 0x3ba408: 0x86230066  lh          $v1, 0x66($s1)
    ctx->pc = 0x3ba408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_3ba40c:
    // 0x3ba40c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ba40cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ba410:
    // 0x3ba410: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3ba410u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ba414:
    // 0x3ba414: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ba414u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ba418:
    // 0x3ba418: 0x0  nop
    ctx->pc = 0x3ba418u;
    // NOP
label_3ba41c:
    // 0x3ba41c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ba41cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ba420:
    // 0x3ba420: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3ba420u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3ba424:
    // 0x3ba424: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x3ba424u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
label_3ba428:
    // 0x3ba428: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ba428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ba42c:
    // 0x3ba42c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ba42cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3ba430:
    // 0x3ba430: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ba430u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ba434:
    // 0x3ba434: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3ba434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3ba438:
    // 0x3ba438: 0x1000004e  b           . + 4 + (0x4E << 2)
label_3ba43c:
    if (ctx->pc == 0x3BA43Cu) {
        ctx->pc = 0x3BA43Cu;
            // 0x3ba43c: 0xa6230060  sh          $v1, 0x60($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3BA440u;
        goto label_3ba440;
    }
    ctx->pc = 0x3BA438u;
    {
        const bool branch_taken_0x3ba438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA438u;
            // 0x3ba43c: 0xa6230060  sh          $v1, 0x60($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba438) {
            ctx->pc = 0x3BA574u;
            goto label_3ba574;
        }
    }
    ctx->pc = 0x3BA440u;
label_3ba440:
    // 0x3ba440: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ba440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ba444:
    // 0x3ba444: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3ba444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3ba448:
    // 0x3ba448: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3ba448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3ba44c:
    // 0x3ba44c: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3ba44cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_3ba450:
    // 0x3ba450: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3ba454:
    if (ctx->pc == 0x3BA454u) {
        ctx->pc = 0x3BA454u;
            // 0x3ba454: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3BA458u;
        goto label_3ba458;
    }
    ctx->pc = 0x3BA450u;
    {
        const bool branch_taken_0x3ba450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba450) {
            ctx->pc = 0x3BA454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA450u;
            // 0x3ba454: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BA470u;
            goto label_3ba470;
        }
    }
    ctx->pc = 0x3BA458u;
label_3ba458:
    // 0x3ba458: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ba458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba45c:
    // 0x3ba45c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ba45cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ba460:
    // 0x3ba460: 0x320f809  jalr        $t9
label_3ba464:
    if (ctx->pc == 0x3BA464u) {
        ctx->pc = 0x3BA464u;
            // 0x3ba464: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BA468u;
        goto label_3ba468;
    }
    ctx->pc = 0x3BA460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BA468u);
        ctx->pc = 0x3BA464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA460u;
            // 0x3ba464: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BA468u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BA468u; }
            if (ctx->pc != 0x3BA468u) { return; }
        }
        }
    }
    ctx->pc = 0x3BA468u;
label_3ba468:
    // 0x3ba468: 0x10000042  b           . + 4 + (0x42 << 2)
label_3ba46c:
    if (ctx->pc == 0x3BA46Cu) {
        ctx->pc = 0x3BA470u;
        goto label_3ba470;
    }
    ctx->pc = 0x3BA468u;
    {
        const bool branch_taken_0x3ba468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba468) {
            ctx->pc = 0x3BA574u;
            goto label_3ba574;
        }
    }
    ctx->pc = 0x3BA470u;
label_3ba470:
    // 0x3ba470: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x3ba470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ba474:
    // 0x3ba474: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3ba474u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3ba478:
    // 0x3ba478: 0xe6210054  swc1        $f1, 0x54($s1)
    ctx->pc = 0x3ba478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_3ba47c:
    // 0x3ba47c: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x3ba47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ba480:
    // 0x3ba480: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ba480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ba484:
    // 0x3ba484: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
label_3ba488:
    if (ctx->pc == 0x3BA488u) {
        ctx->pc = 0x3BA48Cu;
        goto label_3ba48c;
    }
    ctx->pc = 0x3BA484u;
    {
        const bool branch_taken_0x3ba484 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ba484) {
            ctx->pc = 0x3BA574u;
            goto label_3ba574;
        }
    }
    ctx->pc = 0x3BA48Cu;
label_3ba48c:
    // 0x3ba48c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ba48cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba490:
    // 0x3ba490: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3ba490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3ba494:
    // 0x3ba494: 0x320f809  jalr        $t9
label_3ba498:
    if (ctx->pc == 0x3BA498u) {
        ctx->pc = 0x3BA49Cu;
        goto label_3ba49c;
    }
    ctx->pc = 0x3BA494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BA49Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BA49Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BA49Cu; }
            if (ctx->pc != 0x3BA49Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3BA49Cu;
label_3ba49c:
    // 0x3ba49c: 0x10000035  b           . + 4 + (0x35 << 2)
label_3ba4a0:
    if (ctx->pc == 0x3BA4A0u) {
        ctx->pc = 0x3BA4A0u;
            // 0x3ba4a0: 0xae200054  sw          $zero, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x3BA4A4u;
        goto label_3ba4a4;
    }
    ctx->pc = 0x3BA49Cu;
    {
        const bool branch_taken_0x3ba49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA49Cu;
            // 0x3ba4a0: 0xae200054  sw          $zero, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba49c) {
            ctx->pc = 0x3BA574u;
            goto label_3ba574;
        }
    }
    ctx->pc = 0x3BA4A4u;
label_3ba4a4:
    // 0x3ba4a4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ba4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ba4a8:
    // 0x3ba4a8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3ba4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3ba4ac:
    // 0x3ba4ac: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3ba4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3ba4b0:
    // 0x3ba4b0: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3ba4b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_3ba4b4:
    // 0x3ba4b4: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
label_3ba4b8:
    if (ctx->pc == 0x3BA4B8u) {
        ctx->pc = 0x3BA4B8u;
            // 0x3ba4b8: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3BA4BCu;
        goto label_3ba4bc;
    }
    ctx->pc = 0x3BA4B4u;
    {
        const bool branch_taken_0x3ba4b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba4b4) {
            ctx->pc = 0x3BA4B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA4B4u;
            // 0x3ba4b8: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BA4D4u;
            goto label_3ba4d4;
        }
    }
    ctx->pc = 0x3BA4BCu;
label_3ba4bc:
    // 0x3ba4bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ba4bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba4c0:
    // 0x3ba4c0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ba4c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ba4c4:
    // 0x3ba4c4: 0x320f809  jalr        $t9
label_3ba4c8:
    if (ctx->pc == 0x3BA4C8u) {
        ctx->pc = 0x3BA4C8u;
            // 0x3ba4c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BA4CCu;
        goto label_3ba4cc;
    }
    ctx->pc = 0x3BA4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BA4CCu);
        ctx->pc = 0x3BA4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA4C4u;
            // 0x3ba4c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BA4CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BA4CCu; }
            if (ctx->pc != 0x3BA4CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3BA4CCu;
label_3ba4cc:
    // 0x3ba4cc: 0x10000029  b           . + 4 + (0x29 << 2)
label_3ba4d0:
    if (ctx->pc == 0x3BA4D0u) {
        ctx->pc = 0x3BA4D4u;
        goto label_3ba4d4;
    }
    ctx->pc = 0x3BA4CCu;
    {
        const bool branch_taken_0x3ba4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba4cc) {
            ctx->pc = 0x3BA574u;
            goto label_3ba574;
        }
    }
    ctx->pc = 0x3BA4D4u;
label_3ba4d4:
    // 0x3ba4d4: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x3ba4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ba4d8:
    // 0x3ba4d8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3ba4d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3ba4dc:
    // 0x3ba4dc: 0xe6210054  swc1        $f1, 0x54($s1)
    ctx->pc = 0x3ba4dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_3ba4e0:
    // 0x3ba4e0: 0xc6200078  lwc1        $f0, 0x78($s1)
    ctx->pc = 0x3ba4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ba4e4:
    // 0x3ba4e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ba4e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ba4e8:
    // 0x3ba4e8: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_3ba4ec:
    if (ctx->pc == 0x3BA4ECu) {
        ctx->pc = 0x3BA4ECu;
            // 0x3ba4ec: 0x86240066  lh          $a0, 0x66($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
        ctx->pc = 0x3BA4F0u;
        goto label_3ba4f0;
    }
    ctx->pc = 0x3BA4E8u;
    {
        const bool branch_taken_0x3ba4e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ba4e8) {
            ctx->pc = 0x3BA4ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA4E8u;
            // 0x3ba4ec: 0x86240066  lh          $a0, 0x66($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BA508u;
            goto label_3ba508;
        }
    }
    ctx->pc = 0x3BA4F0u;
label_3ba4f0:
    // 0x3ba4f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ba4f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba4f4:
    // 0x3ba4f4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ba4f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ba4f8:
    // 0x3ba4f8: 0x320f809  jalr        $t9
label_3ba4fc:
    if (ctx->pc == 0x3BA4FCu) {
        ctx->pc = 0x3BA4FCu;
            // 0x3ba4fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BA500u;
        goto label_3ba500;
    }
    ctx->pc = 0x3BA4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BA500u);
        ctx->pc = 0x3BA4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA4F8u;
            // 0x3ba4fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BA500u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BA500u; }
            if (ctx->pc != 0x3BA500u) { return; }
        }
        }
    }
    ctx->pc = 0x3BA500u;
label_3ba500:
    // 0x3ba500: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x3ba500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_3ba504:
    // 0x3ba504: 0x86240066  lh          $a0, 0x66($s1)
    ctx->pc = 0x3ba504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_3ba508:
    // 0x3ba508: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x3ba508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ba50c:
    // 0x3ba50c: 0x86230068  lh          $v1, 0x68($s1)
    ctx->pc = 0x3ba50cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 104)));
label_3ba510:
    // 0x3ba510: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x3ba510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ba514:
    // 0x3ba514: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ba514u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ba518:
    // 0x3ba518: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3ba518u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ba51c:
    // 0x3ba51c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ba51cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3ba520:
    // 0x3ba520: 0x0  nop
    ctx->pc = 0x3ba520u;
    // NOP
label_3ba524:
    // 0x3ba524: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3ba524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3ba528:
    // 0x3ba528: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3ba528u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3ba52c:
    // 0x3ba52c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3ba52cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_3ba530:
    // 0x3ba530: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ba530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ba534:
    // 0x3ba534: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ba534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3ba538:
    // 0x3ba538: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ba538u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ba53c:
    // 0x3ba53c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3ba53cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3ba540:
    // 0x3ba540: 0x1000000c  b           . + 4 + (0xC << 2)
label_3ba544:
    if (ctx->pc == 0x3BA544u) {
        ctx->pc = 0x3BA544u;
            // 0x3ba544: 0xa6230060  sh          $v1, 0x60($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3BA548u;
        goto label_3ba548;
    }
    ctx->pc = 0x3BA540u;
    {
        const bool branch_taken_0x3ba540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA540u;
            // 0x3ba544: 0xa6230060  sh          $v1, 0x60($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba540) {
            ctx->pc = 0x3BA574u;
            goto label_3ba574;
        }
    }
    ctx->pc = 0x3BA548u;
label_3ba548:
    // 0x3ba548: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ba548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba54c:
    // 0x3ba54c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3ba54cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3ba550:
    // 0x3ba550: 0x320f809  jalr        $t9
label_3ba554:
    if (ctx->pc == 0x3BA554u) {
        ctx->pc = 0x3BA558u;
        goto label_3ba558;
    }
    ctx->pc = 0x3BA550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BA558u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BA558u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BA558u; }
            if (ctx->pc != 0x3BA558u) { return; }
        }
        }
    }
    ctx->pc = 0x3BA558u;
label_3ba558:
    // 0x3ba558: 0x10000006  b           . + 4 + (0x6 << 2)
label_3ba55c:
    if (ctx->pc == 0x3BA55Cu) {
        ctx->pc = 0x3BA560u;
        goto label_3ba560;
    }
    ctx->pc = 0x3BA558u;
    {
        const bool branch_taken_0x3ba558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba558) {
            ctx->pc = 0x3BA574u;
            goto label_3ba574;
        }
    }
    ctx->pc = 0x3BA560u;
label_3ba560:
    // 0x3ba560: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3ba560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3ba564:
    // 0x3ba564: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ba564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ba568:
    // 0x3ba568: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3ba568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3ba56c:
    // 0x3ba56c: 0xc057b7c  jal         func_15EDF0
label_3ba570:
    if (ctx->pc == 0x3BA570u) {
        ctx->pc = 0x3BA570u;
            // 0x3ba570: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3BA574u;
        goto label_3ba574;
    }
    ctx->pc = 0x3BA56Cu;
    SET_GPR_U32(ctx, 31, 0x3BA574u);
    ctx->pc = 0x3BA570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA56Cu;
            // 0x3ba570: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA574u; }
        if (ctx->pc != 0x3BA574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA574u; }
        if (ctx->pc != 0x3BA574u) { return; }
    }
    ctx->pc = 0x3BA574u;
label_3ba574:
    // 0x3ba574: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ba574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ba578:
    // 0x3ba578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ba578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ba57c:
    // 0x3ba57c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ba57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ba580:
    // 0x3ba580: 0x3e00008  jr          $ra
label_3ba584:
    if (ctx->pc == 0x3BA584u) {
        ctx->pc = 0x3BA584u;
            // 0x3ba584: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3BA588u;
        goto label_3ba588;
    }
    ctx->pc = 0x3BA580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA580u;
            // 0x3ba584: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BA588u;
label_3ba588:
    // 0x3ba588: 0x0  nop
    ctx->pc = 0x3ba588u;
    // NOP
label_3ba58c:
    // 0x3ba58c: 0x0  nop
    ctx->pc = 0x3ba58cu;
    // NOP
label_3ba590:
    // 0x3ba590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ba590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ba594:
    // 0x3ba594: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ba594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ba598:
    // 0x3ba598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ba598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ba59c:
    // 0x3ba59c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ba59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ba5a0:
    // 0x3ba5a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ba5a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ba5a4:
    // 0x3ba5a4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_3ba5a8:
    if (ctx->pc == 0x3BA5A8u) {
        ctx->pc = 0x3BA5A8u;
            // 0x3ba5a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BA5ACu;
        goto label_3ba5ac;
    }
    ctx->pc = 0x3BA5A4u;
    {
        const bool branch_taken_0x3ba5a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA5A4u;
            // 0x3ba5a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba5a4) {
            ctx->pc = 0x3BA5D8u;
            goto label_3ba5d8;
        }
    }
    ctx->pc = 0x3BA5ACu;
label_3ba5ac:
    // 0x3ba5ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3ba5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3ba5b0:
    // 0x3ba5b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ba5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ba5b4:
    // 0x3ba5b4: 0x24428c40  addiu       $v0, $v0, -0x73C0
    ctx->pc = 0x3ba5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
label_3ba5b8:
    // 0x3ba5b8: 0xc0ee744  jal         func_3B9D10
label_3ba5bc:
    if (ctx->pc == 0x3BA5BCu) {
        ctx->pc = 0x3BA5BCu;
            // 0x3ba5bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3BA5C0u;
        goto label_3ba5c0;
    }
    ctx->pc = 0x3BA5B8u;
    SET_GPR_U32(ctx, 31, 0x3BA5C0u);
    ctx->pc = 0x3BA5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA5B8u;
            // 0x3ba5bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D10u;
    if (runtime->hasFunction(0x3B9D10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA5C0u; }
        if (ctx->pc != 0x3BA5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D10_0x3b9d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA5C0u; }
        if (ctx->pc != 0x3BA5C0u) { return; }
    }
    ctx->pc = 0x3BA5C0u;
label_3ba5c0:
    // 0x3ba5c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3ba5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3ba5c4:
    // 0x3ba5c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3ba5c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3ba5c8:
    // 0x3ba5c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3ba5cc:
    if (ctx->pc == 0x3BA5CCu) {
        ctx->pc = 0x3BA5CCu;
            // 0x3ba5cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BA5D0u;
        goto label_3ba5d0;
    }
    ctx->pc = 0x3BA5C8u;
    {
        const bool branch_taken_0x3ba5c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3ba5c8) {
            ctx->pc = 0x3BA5CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA5C8u;
            // 0x3ba5cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BA5DCu;
            goto label_3ba5dc;
        }
    }
    ctx->pc = 0x3BA5D0u;
label_3ba5d0:
    // 0x3ba5d0: 0xc0400a8  jal         func_1002A0
label_3ba5d4:
    if (ctx->pc == 0x3BA5D4u) {
        ctx->pc = 0x3BA5D4u;
            // 0x3ba5d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BA5D8u;
        goto label_3ba5d8;
    }
    ctx->pc = 0x3BA5D0u;
    SET_GPR_U32(ctx, 31, 0x3BA5D8u);
    ctx->pc = 0x3BA5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA5D0u;
            // 0x3ba5d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA5D8u; }
        if (ctx->pc != 0x3BA5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA5D8u; }
        if (ctx->pc != 0x3BA5D8u) { return; }
    }
    ctx->pc = 0x3BA5D8u;
label_3ba5d8:
    // 0x3ba5d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ba5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ba5dc:
    // 0x3ba5dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ba5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ba5e0:
    // 0x3ba5e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ba5e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ba5e4:
    // 0x3ba5e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ba5e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ba5e8:
    // 0x3ba5e8: 0x3e00008  jr          $ra
label_3ba5ec:
    if (ctx->pc == 0x3BA5ECu) {
        ctx->pc = 0x3BA5ECu;
            // 0x3ba5ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3BA5F0u;
        goto label_fallthrough_0x3ba5e8;
    }
    ctx->pc = 0x3BA5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA5E8u;
            // 0x3ba5ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3ba5e8:
    ctx->pc = 0x3BA5F0u;
}
