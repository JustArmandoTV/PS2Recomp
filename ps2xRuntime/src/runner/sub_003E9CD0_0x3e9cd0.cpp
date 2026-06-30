#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E9CD0
// Address: 0x3e9cd0 - 0x3ea6f0
void sub_003E9CD0_0x3e9cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9CD0_0x3e9cd0");
#endif

    switch (ctx->pc) {
        case 0x3e9cd0u: goto label_3e9cd0;
        case 0x3e9cd4u: goto label_3e9cd4;
        case 0x3e9cd8u: goto label_3e9cd8;
        case 0x3e9cdcu: goto label_3e9cdc;
        case 0x3e9ce0u: goto label_3e9ce0;
        case 0x3e9ce4u: goto label_3e9ce4;
        case 0x3e9ce8u: goto label_3e9ce8;
        case 0x3e9cecu: goto label_3e9cec;
        case 0x3e9cf0u: goto label_3e9cf0;
        case 0x3e9cf4u: goto label_3e9cf4;
        case 0x3e9cf8u: goto label_3e9cf8;
        case 0x3e9cfcu: goto label_3e9cfc;
        case 0x3e9d00u: goto label_3e9d00;
        case 0x3e9d04u: goto label_3e9d04;
        case 0x3e9d08u: goto label_3e9d08;
        case 0x3e9d0cu: goto label_3e9d0c;
        case 0x3e9d10u: goto label_3e9d10;
        case 0x3e9d14u: goto label_3e9d14;
        case 0x3e9d18u: goto label_3e9d18;
        case 0x3e9d1cu: goto label_3e9d1c;
        case 0x3e9d20u: goto label_3e9d20;
        case 0x3e9d24u: goto label_3e9d24;
        case 0x3e9d28u: goto label_3e9d28;
        case 0x3e9d2cu: goto label_3e9d2c;
        case 0x3e9d30u: goto label_3e9d30;
        case 0x3e9d34u: goto label_3e9d34;
        case 0x3e9d38u: goto label_3e9d38;
        case 0x3e9d3cu: goto label_3e9d3c;
        case 0x3e9d40u: goto label_3e9d40;
        case 0x3e9d44u: goto label_3e9d44;
        case 0x3e9d48u: goto label_3e9d48;
        case 0x3e9d4cu: goto label_3e9d4c;
        case 0x3e9d50u: goto label_3e9d50;
        case 0x3e9d54u: goto label_3e9d54;
        case 0x3e9d58u: goto label_3e9d58;
        case 0x3e9d5cu: goto label_3e9d5c;
        case 0x3e9d60u: goto label_3e9d60;
        case 0x3e9d64u: goto label_3e9d64;
        case 0x3e9d68u: goto label_3e9d68;
        case 0x3e9d6cu: goto label_3e9d6c;
        case 0x3e9d70u: goto label_3e9d70;
        case 0x3e9d74u: goto label_3e9d74;
        case 0x3e9d78u: goto label_3e9d78;
        case 0x3e9d7cu: goto label_3e9d7c;
        case 0x3e9d80u: goto label_3e9d80;
        case 0x3e9d84u: goto label_3e9d84;
        case 0x3e9d88u: goto label_3e9d88;
        case 0x3e9d8cu: goto label_3e9d8c;
        case 0x3e9d90u: goto label_3e9d90;
        case 0x3e9d94u: goto label_3e9d94;
        case 0x3e9d98u: goto label_3e9d98;
        case 0x3e9d9cu: goto label_3e9d9c;
        case 0x3e9da0u: goto label_3e9da0;
        case 0x3e9da4u: goto label_3e9da4;
        case 0x3e9da8u: goto label_3e9da8;
        case 0x3e9dacu: goto label_3e9dac;
        case 0x3e9db0u: goto label_3e9db0;
        case 0x3e9db4u: goto label_3e9db4;
        case 0x3e9db8u: goto label_3e9db8;
        case 0x3e9dbcu: goto label_3e9dbc;
        case 0x3e9dc0u: goto label_3e9dc0;
        case 0x3e9dc4u: goto label_3e9dc4;
        case 0x3e9dc8u: goto label_3e9dc8;
        case 0x3e9dccu: goto label_3e9dcc;
        case 0x3e9dd0u: goto label_3e9dd0;
        case 0x3e9dd4u: goto label_3e9dd4;
        case 0x3e9dd8u: goto label_3e9dd8;
        case 0x3e9ddcu: goto label_3e9ddc;
        case 0x3e9de0u: goto label_3e9de0;
        case 0x3e9de4u: goto label_3e9de4;
        case 0x3e9de8u: goto label_3e9de8;
        case 0x3e9decu: goto label_3e9dec;
        case 0x3e9df0u: goto label_3e9df0;
        case 0x3e9df4u: goto label_3e9df4;
        case 0x3e9df8u: goto label_3e9df8;
        case 0x3e9dfcu: goto label_3e9dfc;
        case 0x3e9e00u: goto label_3e9e00;
        case 0x3e9e04u: goto label_3e9e04;
        case 0x3e9e08u: goto label_3e9e08;
        case 0x3e9e0cu: goto label_3e9e0c;
        case 0x3e9e10u: goto label_3e9e10;
        case 0x3e9e14u: goto label_3e9e14;
        case 0x3e9e18u: goto label_3e9e18;
        case 0x3e9e1cu: goto label_3e9e1c;
        case 0x3e9e20u: goto label_3e9e20;
        case 0x3e9e24u: goto label_3e9e24;
        case 0x3e9e28u: goto label_3e9e28;
        case 0x3e9e2cu: goto label_3e9e2c;
        case 0x3e9e30u: goto label_3e9e30;
        case 0x3e9e34u: goto label_3e9e34;
        case 0x3e9e38u: goto label_3e9e38;
        case 0x3e9e3cu: goto label_3e9e3c;
        case 0x3e9e40u: goto label_3e9e40;
        case 0x3e9e44u: goto label_3e9e44;
        case 0x3e9e48u: goto label_3e9e48;
        case 0x3e9e4cu: goto label_3e9e4c;
        case 0x3e9e50u: goto label_3e9e50;
        case 0x3e9e54u: goto label_3e9e54;
        case 0x3e9e58u: goto label_3e9e58;
        case 0x3e9e5cu: goto label_3e9e5c;
        case 0x3e9e60u: goto label_3e9e60;
        case 0x3e9e64u: goto label_3e9e64;
        case 0x3e9e68u: goto label_3e9e68;
        case 0x3e9e6cu: goto label_3e9e6c;
        case 0x3e9e70u: goto label_3e9e70;
        case 0x3e9e74u: goto label_3e9e74;
        case 0x3e9e78u: goto label_3e9e78;
        case 0x3e9e7cu: goto label_3e9e7c;
        case 0x3e9e80u: goto label_3e9e80;
        case 0x3e9e84u: goto label_3e9e84;
        case 0x3e9e88u: goto label_3e9e88;
        case 0x3e9e8cu: goto label_3e9e8c;
        case 0x3e9e90u: goto label_3e9e90;
        case 0x3e9e94u: goto label_3e9e94;
        case 0x3e9e98u: goto label_3e9e98;
        case 0x3e9e9cu: goto label_3e9e9c;
        case 0x3e9ea0u: goto label_3e9ea0;
        case 0x3e9ea4u: goto label_3e9ea4;
        case 0x3e9ea8u: goto label_3e9ea8;
        case 0x3e9eacu: goto label_3e9eac;
        case 0x3e9eb0u: goto label_3e9eb0;
        case 0x3e9eb4u: goto label_3e9eb4;
        case 0x3e9eb8u: goto label_3e9eb8;
        case 0x3e9ebcu: goto label_3e9ebc;
        case 0x3e9ec0u: goto label_3e9ec0;
        case 0x3e9ec4u: goto label_3e9ec4;
        case 0x3e9ec8u: goto label_3e9ec8;
        case 0x3e9eccu: goto label_3e9ecc;
        case 0x3e9ed0u: goto label_3e9ed0;
        case 0x3e9ed4u: goto label_3e9ed4;
        case 0x3e9ed8u: goto label_3e9ed8;
        case 0x3e9edcu: goto label_3e9edc;
        case 0x3e9ee0u: goto label_3e9ee0;
        case 0x3e9ee4u: goto label_3e9ee4;
        case 0x3e9ee8u: goto label_3e9ee8;
        case 0x3e9eecu: goto label_3e9eec;
        case 0x3e9ef0u: goto label_3e9ef0;
        case 0x3e9ef4u: goto label_3e9ef4;
        case 0x3e9ef8u: goto label_3e9ef8;
        case 0x3e9efcu: goto label_3e9efc;
        case 0x3e9f00u: goto label_3e9f00;
        case 0x3e9f04u: goto label_3e9f04;
        case 0x3e9f08u: goto label_3e9f08;
        case 0x3e9f0cu: goto label_3e9f0c;
        case 0x3e9f10u: goto label_3e9f10;
        case 0x3e9f14u: goto label_3e9f14;
        case 0x3e9f18u: goto label_3e9f18;
        case 0x3e9f1cu: goto label_3e9f1c;
        case 0x3e9f20u: goto label_3e9f20;
        case 0x3e9f24u: goto label_3e9f24;
        case 0x3e9f28u: goto label_3e9f28;
        case 0x3e9f2cu: goto label_3e9f2c;
        case 0x3e9f30u: goto label_3e9f30;
        case 0x3e9f34u: goto label_3e9f34;
        case 0x3e9f38u: goto label_3e9f38;
        case 0x3e9f3cu: goto label_3e9f3c;
        case 0x3e9f40u: goto label_3e9f40;
        case 0x3e9f44u: goto label_3e9f44;
        case 0x3e9f48u: goto label_3e9f48;
        case 0x3e9f4cu: goto label_3e9f4c;
        case 0x3e9f50u: goto label_3e9f50;
        case 0x3e9f54u: goto label_3e9f54;
        case 0x3e9f58u: goto label_3e9f58;
        case 0x3e9f5cu: goto label_3e9f5c;
        case 0x3e9f60u: goto label_3e9f60;
        case 0x3e9f64u: goto label_3e9f64;
        case 0x3e9f68u: goto label_3e9f68;
        case 0x3e9f6cu: goto label_3e9f6c;
        case 0x3e9f70u: goto label_3e9f70;
        case 0x3e9f74u: goto label_3e9f74;
        case 0x3e9f78u: goto label_3e9f78;
        case 0x3e9f7cu: goto label_3e9f7c;
        case 0x3e9f80u: goto label_3e9f80;
        case 0x3e9f84u: goto label_3e9f84;
        case 0x3e9f88u: goto label_3e9f88;
        case 0x3e9f8cu: goto label_3e9f8c;
        case 0x3e9f90u: goto label_3e9f90;
        case 0x3e9f94u: goto label_3e9f94;
        case 0x3e9f98u: goto label_3e9f98;
        case 0x3e9f9cu: goto label_3e9f9c;
        case 0x3e9fa0u: goto label_3e9fa0;
        case 0x3e9fa4u: goto label_3e9fa4;
        case 0x3e9fa8u: goto label_3e9fa8;
        case 0x3e9facu: goto label_3e9fac;
        case 0x3e9fb0u: goto label_3e9fb0;
        case 0x3e9fb4u: goto label_3e9fb4;
        case 0x3e9fb8u: goto label_3e9fb8;
        case 0x3e9fbcu: goto label_3e9fbc;
        case 0x3e9fc0u: goto label_3e9fc0;
        case 0x3e9fc4u: goto label_3e9fc4;
        case 0x3e9fc8u: goto label_3e9fc8;
        case 0x3e9fccu: goto label_3e9fcc;
        case 0x3e9fd0u: goto label_3e9fd0;
        case 0x3e9fd4u: goto label_3e9fd4;
        case 0x3e9fd8u: goto label_3e9fd8;
        case 0x3e9fdcu: goto label_3e9fdc;
        case 0x3e9fe0u: goto label_3e9fe0;
        case 0x3e9fe4u: goto label_3e9fe4;
        case 0x3e9fe8u: goto label_3e9fe8;
        case 0x3e9fecu: goto label_3e9fec;
        case 0x3e9ff0u: goto label_3e9ff0;
        case 0x3e9ff4u: goto label_3e9ff4;
        case 0x3e9ff8u: goto label_3e9ff8;
        case 0x3e9ffcu: goto label_3e9ffc;
        case 0x3ea000u: goto label_3ea000;
        case 0x3ea004u: goto label_3ea004;
        case 0x3ea008u: goto label_3ea008;
        case 0x3ea00cu: goto label_3ea00c;
        case 0x3ea010u: goto label_3ea010;
        case 0x3ea014u: goto label_3ea014;
        case 0x3ea018u: goto label_3ea018;
        case 0x3ea01cu: goto label_3ea01c;
        case 0x3ea020u: goto label_3ea020;
        case 0x3ea024u: goto label_3ea024;
        case 0x3ea028u: goto label_3ea028;
        case 0x3ea02cu: goto label_3ea02c;
        case 0x3ea030u: goto label_3ea030;
        case 0x3ea034u: goto label_3ea034;
        case 0x3ea038u: goto label_3ea038;
        case 0x3ea03cu: goto label_3ea03c;
        case 0x3ea040u: goto label_3ea040;
        case 0x3ea044u: goto label_3ea044;
        case 0x3ea048u: goto label_3ea048;
        case 0x3ea04cu: goto label_3ea04c;
        case 0x3ea050u: goto label_3ea050;
        case 0x3ea054u: goto label_3ea054;
        case 0x3ea058u: goto label_3ea058;
        case 0x3ea05cu: goto label_3ea05c;
        case 0x3ea060u: goto label_3ea060;
        case 0x3ea064u: goto label_3ea064;
        case 0x3ea068u: goto label_3ea068;
        case 0x3ea06cu: goto label_3ea06c;
        case 0x3ea070u: goto label_3ea070;
        case 0x3ea074u: goto label_3ea074;
        case 0x3ea078u: goto label_3ea078;
        case 0x3ea07cu: goto label_3ea07c;
        case 0x3ea080u: goto label_3ea080;
        case 0x3ea084u: goto label_3ea084;
        case 0x3ea088u: goto label_3ea088;
        case 0x3ea08cu: goto label_3ea08c;
        case 0x3ea090u: goto label_3ea090;
        case 0x3ea094u: goto label_3ea094;
        case 0x3ea098u: goto label_3ea098;
        case 0x3ea09cu: goto label_3ea09c;
        case 0x3ea0a0u: goto label_3ea0a0;
        case 0x3ea0a4u: goto label_3ea0a4;
        case 0x3ea0a8u: goto label_3ea0a8;
        case 0x3ea0acu: goto label_3ea0ac;
        case 0x3ea0b0u: goto label_3ea0b0;
        case 0x3ea0b4u: goto label_3ea0b4;
        case 0x3ea0b8u: goto label_3ea0b8;
        case 0x3ea0bcu: goto label_3ea0bc;
        case 0x3ea0c0u: goto label_3ea0c0;
        case 0x3ea0c4u: goto label_3ea0c4;
        case 0x3ea0c8u: goto label_3ea0c8;
        case 0x3ea0ccu: goto label_3ea0cc;
        case 0x3ea0d0u: goto label_3ea0d0;
        case 0x3ea0d4u: goto label_3ea0d4;
        case 0x3ea0d8u: goto label_3ea0d8;
        case 0x3ea0dcu: goto label_3ea0dc;
        case 0x3ea0e0u: goto label_3ea0e0;
        case 0x3ea0e4u: goto label_3ea0e4;
        case 0x3ea0e8u: goto label_3ea0e8;
        case 0x3ea0ecu: goto label_3ea0ec;
        case 0x3ea0f0u: goto label_3ea0f0;
        case 0x3ea0f4u: goto label_3ea0f4;
        case 0x3ea0f8u: goto label_3ea0f8;
        case 0x3ea0fcu: goto label_3ea0fc;
        case 0x3ea100u: goto label_3ea100;
        case 0x3ea104u: goto label_3ea104;
        case 0x3ea108u: goto label_3ea108;
        case 0x3ea10cu: goto label_3ea10c;
        case 0x3ea110u: goto label_3ea110;
        case 0x3ea114u: goto label_3ea114;
        case 0x3ea118u: goto label_3ea118;
        case 0x3ea11cu: goto label_3ea11c;
        case 0x3ea120u: goto label_3ea120;
        case 0x3ea124u: goto label_3ea124;
        case 0x3ea128u: goto label_3ea128;
        case 0x3ea12cu: goto label_3ea12c;
        case 0x3ea130u: goto label_3ea130;
        case 0x3ea134u: goto label_3ea134;
        case 0x3ea138u: goto label_3ea138;
        case 0x3ea13cu: goto label_3ea13c;
        case 0x3ea140u: goto label_3ea140;
        case 0x3ea144u: goto label_3ea144;
        case 0x3ea148u: goto label_3ea148;
        case 0x3ea14cu: goto label_3ea14c;
        case 0x3ea150u: goto label_3ea150;
        case 0x3ea154u: goto label_3ea154;
        case 0x3ea158u: goto label_3ea158;
        case 0x3ea15cu: goto label_3ea15c;
        case 0x3ea160u: goto label_3ea160;
        case 0x3ea164u: goto label_3ea164;
        case 0x3ea168u: goto label_3ea168;
        case 0x3ea16cu: goto label_3ea16c;
        case 0x3ea170u: goto label_3ea170;
        case 0x3ea174u: goto label_3ea174;
        case 0x3ea178u: goto label_3ea178;
        case 0x3ea17cu: goto label_3ea17c;
        case 0x3ea180u: goto label_3ea180;
        case 0x3ea184u: goto label_3ea184;
        case 0x3ea188u: goto label_3ea188;
        case 0x3ea18cu: goto label_3ea18c;
        case 0x3ea190u: goto label_3ea190;
        case 0x3ea194u: goto label_3ea194;
        case 0x3ea198u: goto label_3ea198;
        case 0x3ea19cu: goto label_3ea19c;
        case 0x3ea1a0u: goto label_3ea1a0;
        case 0x3ea1a4u: goto label_3ea1a4;
        case 0x3ea1a8u: goto label_3ea1a8;
        case 0x3ea1acu: goto label_3ea1ac;
        case 0x3ea1b0u: goto label_3ea1b0;
        case 0x3ea1b4u: goto label_3ea1b4;
        case 0x3ea1b8u: goto label_3ea1b8;
        case 0x3ea1bcu: goto label_3ea1bc;
        case 0x3ea1c0u: goto label_3ea1c0;
        case 0x3ea1c4u: goto label_3ea1c4;
        case 0x3ea1c8u: goto label_3ea1c8;
        case 0x3ea1ccu: goto label_3ea1cc;
        case 0x3ea1d0u: goto label_3ea1d0;
        case 0x3ea1d4u: goto label_3ea1d4;
        case 0x3ea1d8u: goto label_3ea1d8;
        case 0x3ea1dcu: goto label_3ea1dc;
        case 0x3ea1e0u: goto label_3ea1e0;
        case 0x3ea1e4u: goto label_3ea1e4;
        case 0x3ea1e8u: goto label_3ea1e8;
        case 0x3ea1ecu: goto label_3ea1ec;
        case 0x3ea1f0u: goto label_3ea1f0;
        case 0x3ea1f4u: goto label_3ea1f4;
        case 0x3ea1f8u: goto label_3ea1f8;
        case 0x3ea1fcu: goto label_3ea1fc;
        case 0x3ea200u: goto label_3ea200;
        case 0x3ea204u: goto label_3ea204;
        case 0x3ea208u: goto label_3ea208;
        case 0x3ea20cu: goto label_3ea20c;
        case 0x3ea210u: goto label_3ea210;
        case 0x3ea214u: goto label_3ea214;
        case 0x3ea218u: goto label_3ea218;
        case 0x3ea21cu: goto label_3ea21c;
        case 0x3ea220u: goto label_3ea220;
        case 0x3ea224u: goto label_3ea224;
        case 0x3ea228u: goto label_3ea228;
        case 0x3ea22cu: goto label_3ea22c;
        case 0x3ea230u: goto label_3ea230;
        case 0x3ea234u: goto label_3ea234;
        case 0x3ea238u: goto label_3ea238;
        case 0x3ea23cu: goto label_3ea23c;
        case 0x3ea240u: goto label_3ea240;
        case 0x3ea244u: goto label_3ea244;
        case 0x3ea248u: goto label_3ea248;
        case 0x3ea24cu: goto label_3ea24c;
        case 0x3ea250u: goto label_3ea250;
        case 0x3ea254u: goto label_3ea254;
        case 0x3ea258u: goto label_3ea258;
        case 0x3ea25cu: goto label_3ea25c;
        case 0x3ea260u: goto label_3ea260;
        case 0x3ea264u: goto label_3ea264;
        case 0x3ea268u: goto label_3ea268;
        case 0x3ea26cu: goto label_3ea26c;
        case 0x3ea270u: goto label_3ea270;
        case 0x3ea274u: goto label_3ea274;
        case 0x3ea278u: goto label_3ea278;
        case 0x3ea27cu: goto label_3ea27c;
        case 0x3ea280u: goto label_3ea280;
        case 0x3ea284u: goto label_3ea284;
        case 0x3ea288u: goto label_3ea288;
        case 0x3ea28cu: goto label_3ea28c;
        case 0x3ea290u: goto label_3ea290;
        case 0x3ea294u: goto label_3ea294;
        case 0x3ea298u: goto label_3ea298;
        case 0x3ea29cu: goto label_3ea29c;
        case 0x3ea2a0u: goto label_3ea2a0;
        case 0x3ea2a4u: goto label_3ea2a4;
        case 0x3ea2a8u: goto label_3ea2a8;
        case 0x3ea2acu: goto label_3ea2ac;
        case 0x3ea2b0u: goto label_3ea2b0;
        case 0x3ea2b4u: goto label_3ea2b4;
        case 0x3ea2b8u: goto label_3ea2b8;
        case 0x3ea2bcu: goto label_3ea2bc;
        case 0x3ea2c0u: goto label_3ea2c0;
        case 0x3ea2c4u: goto label_3ea2c4;
        case 0x3ea2c8u: goto label_3ea2c8;
        case 0x3ea2ccu: goto label_3ea2cc;
        case 0x3ea2d0u: goto label_3ea2d0;
        case 0x3ea2d4u: goto label_3ea2d4;
        case 0x3ea2d8u: goto label_3ea2d8;
        case 0x3ea2dcu: goto label_3ea2dc;
        case 0x3ea2e0u: goto label_3ea2e0;
        case 0x3ea2e4u: goto label_3ea2e4;
        case 0x3ea2e8u: goto label_3ea2e8;
        case 0x3ea2ecu: goto label_3ea2ec;
        case 0x3ea2f0u: goto label_3ea2f0;
        case 0x3ea2f4u: goto label_3ea2f4;
        case 0x3ea2f8u: goto label_3ea2f8;
        case 0x3ea2fcu: goto label_3ea2fc;
        case 0x3ea300u: goto label_3ea300;
        case 0x3ea304u: goto label_3ea304;
        case 0x3ea308u: goto label_3ea308;
        case 0x3ea30cu: goto label_3ea30c;
        case 0x3ea310u: goto label_3ea310;
        case 0x3ea314u: goto label_3ea314;
        case 0x3ea318u: goto label_3ea318;
        case 0x3ea31cu: goto label_3ea31c;
        case 0x3ea320u: goto label_3ea320;
        case 0x3ea324u: goto label_3ea324;
        case 0x3ea328u: goto label_3ea328;
        case 0x3ea32cu: goto label_3ea32c;
        case 0x3ea330u: goto label_3ea330;
        case 0x3ea334u: goto label_3ea334;
        case 0x3ea338u: goto label_3ea338;
        case 0x3ea33cu: goto label_3ea33c;
        case 0x3ea340u: goto label_3ea340;
        case 0x3ea344u: goto label_3ea344;
        case 0x3ea348u: goto label_3ea348;
        case 0x3ea34cu: goto label_3ea34c;
        case 0x3ea350u: goto label_3ea350;
        case 0x3ea354u: goto label_3ea354;
        case 0x3ea358u: goto label_3ea358;
        case 0x3ea35cu: goto label_3ea35c;
        case 0x3ea360u: goto label_3ea360;
        case 0x3ea364u: goto label_3ea364;
        case 0x3ea368u: goto label_3ea368;
        case 0x3ea36cu: goto label_3ea36c;
        case 0x3ea370u: goto label_3ea370;
        case 0x3ea374u: goto label_3ea374;
        case 0x3ea378u: goto label_3ea378;
        case 0x3ea37cu: goto label_3ea37c;
        case 0x3ea380u: goto label_3ea380;
        case 0x3ea384u: goto label_3ea384;
        case 0x3ea388u: goto label_3ea388;
        case 0x3ea38cu: goto label_3ea38c;
        case 0x3ea390u: goto label_3ea390;
        case 0x3ea394u: goto label_3ea394;
        case 0x3ea398u: goto label_3ea398;
        case 0x3ea39cu: goto label_3ea39c;
        case 0x3ea3a0u: goto label_3ea3a0;
        case 0x3ea3a4u: goto label_3ea3a4;
        case 0x3ea3a8u: goto label_3ea3a8;
        case 0x3ea3acu: goto label_3ea3ac;
        case 0x3ea3b0u: goto label_3ea3b0;
        case 0x3ea3b4u: goto label_3ea3b4;
        case 0x3ea3b8u: goto label_3ea3b8;
        case 0x3ea3bcu: goto label_3ea3bc;
        case 0x3ea3c0u: goto label_3ea3c0;
        case 0x3ea3c4u: goto label_3ea3c4;
        case 0x3ea3c8u: goto label_3ea3c8;
        case 0x3ea3ccu: goto label_3ea3cc;
        case 0x3ea3d0u: goto label_3ea3d0;
        case 0x3ea3d4u: goto label_3ea3d4;
        case 0x3ea3d8u: goto label_3ea3d8;
        case 0x3ea3dcu: goto label_3ea3dc;
        case 0x3ea3e0u: goto label_3ea3e0;
        case 0x3ea3e4u: goto label_3ea3e4;
        case 0x3ea3e8u: goto label_3ea3e8;
        case 0x3ea3ecu: goto label_3ea3ec;
        case 0x3ea3f0u: goto label_3ea3f0;
        case 0x3ea3f4u: goto label_3ea3f4;
        case 0x3ea3f8u: goto label_3ea3f8;
        case 0x3ea3fcu: goto label_3ea3fc;
        case 0x3ea400u: goto label_3ea400;
        case 0x3ea404u: goto label_3ea404;
        case 0x3ea408u: goto label_3ea408;
        case 0x3ea40cu: goto label_3ea40c;
        case 0x3ea410u: goto label_3ea410;
        case 0x3ea414u: goto label_3ea414;
        case 0x3ea418u: goto label_3ea418;
        case 0x3ea41cu: goto label_3ea41c;
        case 0x3ea420u: goto label_3ea420;
        case 0x3ea424u: goto label_3ea424;
        case 0x3ea428u: goto label_3ea428;
        case 0x3ea42cu: goto label_3ea42c;
        case 0x3ea430u: goto label_3ea430;
        case 0x3ea434u: goto label_3ea434;
        case 0x3ea438u: goto label_3ea438;
        case 0x3ea43cu: goto label_3ea43c;
        case 0x3ea440u: goto label_3ea440;
        case 0x3ea444u: goto label_3ea444;
        case 0x3ea448u: goto label_3ea448;
        case 0x3ea44cu: goto label_3ea44c;
        case 0x3ea450u: goto label_3ea450;
        case 0x3ea454u: goto label_3ea454;
        case 0x3ea458u: goto label_3ea458;
        case 0x3ea45cu: goto label_3ea45c;
        case 0x3ea460u: goto label_3ea460;
        case 0x3ea464u: goto label_3ea464;
        case 0x3ea468u: goto label_3ea468;
        case 0x3ea46cu: goto label_3ea46c;
        case 0x3ea470u: goto label_3ea470;
        case 0x3ea474u: goto label_3ea474;
        case 0x3ea478u: goto label_3ea478;
        case 0x3ea47cu: goto label_3ea47c;
        case 0x3ea480u: goto label_3ea480;
        case 0x3ea484u: goto label_3ea484;
        case 0x3ea488u: goto label_3ea488;
        case 0x3ea48cu: goto label_3ea48c;
        case 0x3ea490u: goto label_3ea490;
        case 0x3ea494u: goto label_3ea494;
        case 0x3ea498u: goto label_3ea498;
        case 0x3ea49cu: goto label_3ea49c;
        case 0x3ea4a0u: goto label_3ea4a0;
        case 0x3ea4a4u: goto label_3ea4a4;
        case 0x3ea4a8u: goto label_3ea4a8;
        case 0x3ea4acu: goto label_3ea4ac;
        case 0x3ea4b0u: goto label_3ea4b0;
        case 0x3ea4b4u: goto label_3ea4b4;
        case 0x3ea4b8u: goto label_3ea4b8;
        case 0x3ea4bcu: goto label_3ea4bc;
        case 0x3ea4c0u: goto label_3ea4c0;
        case 0x3ea4c4u: goto label_3ea4c4;
        case 0x3ea4c8u: goto label_3ea4c8;
        case 0x3ea4ccu: goto label_3ea4cc;
        case 0x3ea4d0u: goto label_3ea4d0;
        case 0x3ea4d4u: goto label_3ea4d4;
        case 0x3ea4d8u: goto label_3ea4d8;
        case 0x3ea4dcu: goto label_3ea4dc;
        case 0x3ea4e0u: goto label_3ea4e0;
        case 0x3ea4e4u: goto label_3ea4e4;
        case 0x3ea4e8u: goto label_3ea4e8;
        case 0x3ea4ecu: goto label_3ea4ec;
        case 0x3ea4f0u: goto label_3ea4f0;
        case 0x3ea4f4u: goto label_3ea4f4;
        case 0x3ea4f8u: goto label_3ea4f8;
        case 0x3ea4fcu: goto label_3ea4fc;
        case 0x3ea500u: goto label_3ea500;
        case 0x3ea504u: goto label_3ea504;
        case 0x3ea508u: goto label_3ea508;
        case 0x3ea50cu: goto label_3ea50c;
        case 0x3ea510u: goto label_3ea510;
        case 0x3ea514u: goto label_3ea514;
        case 0x3ea518u: goto label_3ea518;
        case 0x3ea51cu: goto label_3ea51c;
        case 0x3ea520u: goto label_3ea520;
        case 0x3ea524u: goto label_3ea524;
        case 0x3ea528u: goto label_3ea528;
        case 0x3ea52cu: goto label_3ea52c;
        case 0x3ea530u: goto label_3ea530;
        case 0x3ea534u: goto label_3ea534;
        case 0x3ea538u: goto label_3ea538;
        case 0x3ea53cu: goto label_3ea53c;
        case 0x3ea540u: goto label_3ea540;
        case 0x3ea544u: goto label_3ea544;
        case 0x3ea548u: goto label_3ea548;
        case 0x3ea54cu: goto label_3ea54c;
        case 0x3ea550u: goto label_3ea550;
        case 0x3ea554u: goto label_3ea554;
        case 0x3ea558u: goto label_3ea558;
        case 0x3ea55cu: goto label_3ea55c;
        case 0x3ea560u: goto label_3ea560;
        case 0x3ea564u: goto label_3ea564;
        case 0x3ea568u: goto label_3ea568;
        case 0x3ea56cu: goto label_3ea56c;
        case 0x3ea570u: goto label_3ea570;
        case 0x3ea574u: goto label_3ea574;
        case 0x3ea578u: goto label_3ea578;
        case 0x3ea57cu: goto label_3ea57c;
        case 0x3ea580u: goto label_3ea580;
        case 0x3ea584u: goto label_3ea584;
        case 0x3ea588u: goto label_3ea588;
        case 0x3ea58cu: goto label_3ea58c;
        case 0x3ea590u: goto label_3ea590;
        case 0x3ea594u: goto label_3ea594;
        case 0x3ea598u: goto label_3ea598;
        case 0x3ea59cu: goto label_3ea59c;
        case 0x3ea5a0u: goto label_3ea5a0;
        case 0x3ea5a4u: goto label_3ea5a4;
        case 0x3ea5a8u: goto label_3ea5a8;
        case 0x3ea5acu: goto label_3ea5ac;
        case 0x3ea5b0u: goto label_3ea5b0;
        case 0x3ea5b4u: goto label_3ea5b4;
        case 0x3ea5b8u: goto label_3ea5b8;
        case 0x3ea5bcu: goto label_3ea5bc;
        case 0x3ea5c0u: goto label_3ea5c0;
        case 0x3ea5c4u: goto label_3ea5c4;
        case 0x3ea5c8u: goto label_3ea5c8;
        case 0x3ea5ccu: goto label_3ea5cc;
        case 0x3ea5d0u: goto label_3ea5d0;
        case 0x3ea5d4u: goto label_3ea5d4;
        case 0x3ea5d8u: goto label_3ea5d8;
        case 0x3ea5dcu: goto label_3ea5dc;
        case 0x3ea5e0u: goto label_3ea5e0;
        case 0x3ea5e4u: goto label_3ea5e4;
        case 0x3ea5e8u: goto label_3ea5e8;
        case 0x3ea5ecu: goto label_3ea5ec;
        case 0x3ea5f0u: goto label_3ea5f0;
        case 0x3ea5f4u: goto label_3ea5f4;
        case 0x3ea5f8u: goto label_3ea5f8;
        case 0x3ea5fcu: goto label_3ea5fc;
        case 0x3ea600u: goto label_3ea600;
        case 0x3ea604u: goto label_3ea604;
        case 0x3ea608u: goto label_3ea608;
        case 0x3ea60cu: goto label_3ea60c;
        case 0x3ea610u: goto label_3ea610;
        case 0x3ea614u: goto label_3ea614;
        case 0x3ea618u: goto label_3ea618;
        case 0x3ea61cu: goto label_3ea61c;
        case 0x3ea620u: goto label_3ea620;
        case 0x3ea624u: goto label_3ea624;
        case 0x3ea628u: goto label_3ea628;
        case 0x3ea62cu: goto label_3ea62c;
        case 0x3ea630u: goto label_3ea630;
        case 0x3ea634u: goto label_3ea634;
        case 0x3ea638u: goto label_3ea638;
        case 0x3ea63cu: goto label_3ea63c;
        case 0x3ea640u: goto label_3ea640;
        case 0x3ea644u: goto label_3ea644;
        case 0x3ea648u: goto label_3ea648;
        case 0x3ea64cu: goto label_3ea64c;
        case 0x3ea650u: goto label_3ea650;
        case 0x3ea654u: goto label_3ea654;
        case 0x3ea658u: goto label_3ea658;
        case 0x3ea65cu: goto label_3ea65c;
        case 0x3ea660u: goto label_3ea660;
        case 0x3ea664u: goto label_3ea664;
        case 0x3ea668u: goto label_3ea668;
        case 0x3ea66cu: goto label_3ea66c;
        case 0x3ea670u: goto label_3ea670;
        case 0x3ea674u: goto label_3ea674;
        case 0x3ea678u: goto label_3ea678;
        case 0x3ea67cu: goto label_3ea67c;
        case 0x3ea680u: goto label_3ea680;
        case 0x3ea684u: goto label_3ea684;
        case 0x3ea688u: goto label_3ea688;
        case 0x3ea68cu: goto label_3ea68c;
        case 0x3ea690u: goto label_3ea690;
        case 0x3ea694u: goto label_3ea694;
        case 0x3ea698u: goto label_3ea698;
        case 0x3ea69cu: goto label_3ea69c;
        case 0x3ea6a0u: goto label_3ea6a0;
        case 0x3ea6a4u: goto label_3ea6a4;
        case 0x3ea6a8u: goto label_3ea6a8;
        case 0x3ea6acu: goto label_3ea6ac;
        case 0x3ea6b0u: goto label_3ea6b0;
        case 0x3ea6b4u: goto label_3ea6b4;
        case 0x3ea6b8u: goto label_3ea6b8;
        case 0x3ea6bcu: goto label_3ea6bc;
        case 0x3ea6c0u: goto label_3ea6c0;
        case 0x3ea6c4u: goto label_3ea6c4;
        case 0x3ea6c8u: goto label_3ea6c8;
        case 0x3ea6ccu: goto label_3ea6cc;
        case 0x3ea6d0u: goto label_3ea6d0;
        case 0x3ea6d4u: goto label_3ea6d4;
        case 0x3ea6d8u: goto label_3ea6d8;
        case 0x3ea6dcu: goto label_3ea6dc;
        case 0x3ea6e0u: goto label_3ea6e0;
        case 0x3ea6e4u: goto label_3ea6e4;
        case 0x3ea6e8u: goto label_3ea6e8;
        case 0x3ea6ecu: goto label_3ea6ec;
        default: break;
    }

    ctx->pc = 0x3e9cd0u;

label_3e9cd0:
    // 0x3e9cd0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3e9cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3e9cd4:
    // 0x3e9cd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3e9cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e9cd8:
    // 0x3e9cd8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3e9cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3e9cdc:
    // 0x3e9cdc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3e9cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3e9ce0:
    // 0x3e9ce0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3e9ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3e9ce4:
    // 0x3e9ce4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3e9ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3e9ce8:
    // 0x3e9ce8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3e9ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3e9cec:
    // 0x3e9cec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e9cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3e9cf0:
    // 0x3e9cf0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3e9cf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e9cf4:
    // 0x3e9cf4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e9cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e9cf8:
    // 0x3e9cf8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3e9cf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e9cfc:
    // 0x3e9cfc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e9cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e9d00:
    // 0x3e9d00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e9d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e9d04:
    // 0x3e9d04: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3e9d04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9d08:
    // 0x3e9d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e9d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e9d0c:
    // 0x3e9d0c: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x3e9d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e9d10:
    // 0x3e9d10: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x3e9d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
label_3e9d14:
    // 0x3e9d14: 0xafa600fc  sw          $a2, 0xFC($sp)
    ctx->pc = 0x3e9d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 6));
label_3e9d18:
    // 0x3e9d18: 0xafa700f8  sw          $a3, 0xF8($sp)
    ctx->pc = 0x3e9d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 7));
label_3e9d1c:
    // 0x3e9d1c: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x3e9d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
label_3e9d20:
    // 0x3e9d20: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3e9d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_3e9d24:
    // 0x3e9d24: 0x1000023c  b           . + 4 + (0x23C << 2)
label_3e9d28:
    if (ctx->pc == 0x3E9D28u) {
        ctx->pc = 0x3E9D28u;
            // 0x3e9d28: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x3E9D2Cu;
        goto label_3e9d2c;
    }
    ctx->pc = 0x3E9D24u;
    {
        const bool branch_taken_0x3e9d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9D24u;
            // 0x3e9d28: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9d24) {
            ctx->pc = 0x3EA618u;
            goto label_3ea618;
        }
    }
    ctx->pc = 0x3E9D2Cu;
label_3e9d2c:
    // 0x3e9d2c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3e9d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3e9d30:
    // 0x3e9d30: 0x92a50006  lbu         $a1, 0x6($s5)
    ctx->pc = 0x3e9d30u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
label_3e9d34:
    // 0x3e9d34: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x3e9d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3e9d38:
    // 0x3e9d38: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x3e9d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3e9d3c:
    // 0x3e9d3c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x3e9d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3e9d40:
    // 0x3e9d40: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3e9d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_3e9d44:
    // 0x3e9d44: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3e9d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3e9d48:
    // 0x3e9d48: 0x8c560010  lw          $s6, 0x10($v0)
    ctx->pc = 0x3e9d48u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3e9d4c:
    // 0x3e9d4c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3e9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3e9d50:
    // 0x3e9d50: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x3e9d50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e9d54:
    // 0x3e9d54: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3e9d58:
    if (ctx->pc == 0x3E9D58u) {
        ctx->pc = 0x3E9D58u;
            // 0x3e9d58: 0x64f023  subu        $fp, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x3E9D5Cu;
        goto label_3e9d5c;
    }
    ctx->pc = 0x3E9D54u;
    {
        const bool branch_taken_0x3e9d54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9D54u;
            // 0x3e9d58: 0x64f023  subu        $fp, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9d54) {
            ctx->pc = 0x3E9D60u;
            goto label_3e9d60;
        }
    }
    ctx->pc = 0x3E9D5Cu;
label_3e9d5c:
    // 0x3e9d5c: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x3e9d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_3e9d60:
    // 0x3e9d60: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3e9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3e9d64:
    // 0x3e9d64: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3e9d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3e9d68:
    // 0x3e9d68: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x3e9d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_3e9d6c:
    // 0x3e9d6c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3e9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3e9d70:
    // 0x3e9d70: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x3e9d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_3e9d74:
    // 0x3e9d74: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x3e9d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3e9d78:
    // 0x3e9d78: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x3e9d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_3e9d7c:
    // 0x3e9d7c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3e9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3e9d80:
    // 0x3e9d80: 0x1fc00011  bgtz        $fp, . + 4 + (0x11 << 2)
label_3e9d84:
    if (ctx->pc == 0x3E9D84u) {
        ctx->pc = 0x3E9D84u;
            // 0x3e9d84: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->pc = 0x3E9D88u;
        goto label_3e9d88;
    }
    ctx->pc = 0x3E9D80u;
    {
        const bool branch_taken_0x3e9d80 = (GPR_S32(ctx, 30) > 0);
        ctx->pc = 0x3E9D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9D80u;
            // 0x3e9d84: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9d80) {
            ctx->pc = 0x3E9DC8u;
            goto label_3e9dc8;
        }
    }
    ctx->pc = 0x3E9D88u;
label_3e9d88:
    // 0x3e9d88: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x3e9d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3e9d8c:
    // 0x3e9d8c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3e9d90:
    if (ctx->pc == 0x3E9D90u) {
        ctx->pc = 0x3E9D94u;
        goto label_3e9d94;
    }
    ctx->pc = 0x3E9D8Cu;
    {
        const bool branch_taken_0x3e9d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9d8c) {
            ctx->pc = 0x3E9DB8u;
            goto label_3e9db8;
        }
    }
    ctx->pc = 0x3E9D94u;
label_3e9d94:
    // 0x3e9d94: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3e9d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3e9d98:
    // 0x3e9d98: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3e9d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3e9d9c:
    // 0x3e9d9c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x3e9d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3e9da0:
    // 0x3e9da0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3e9da0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3e9da4:
    // 0x3e9da4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3e9da8:
    if (ctx->pc == 0x3E9DA8u) {
        ctx->pc = 0x3E9DACu;
        goto label_3e9dac;
    }
    ctx->pc = 0x3E9DA4u;
    {
        const bool branch_taken_0x3e9da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9da4) {
            ctx->pc = 0x3E9DB8u;
            goto label_3e9db8;
        }
    }
    ctx->pc = 0x3E9DACu;
label_3e9dac:
    // 0x3e9dac: 0x10000004  b           . + 4 + (0x4 << 2)
label_3e9db0:
    if (ctx->pc == 0x3E9DB0u) {
        ctx->pc = 0x3E9DB0u;
            // 0x3e9db0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E9DB4u;
        goto label_3e9db4;
    }
    ctx->pc = 0x3E9DACu;
    {
        const bool branch_taken_0x3e9dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9DACu;
            // 0x3e9db0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9dac) {
            ctx->pc = 0x3E9DC0u;
            goto label_3e9dc0;
        }
    }
    ctx->pc = 0x3E9DB4u;
label_3e9db4:
    // 0x3e9db4: 0x0  nop
    ctx->pc = 0x3e9db4u;
    // NOP
label_3e9db8:
    // 0x3e9db8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e9db8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9dbc:
    // 0x3e9dbc: 0x0  nop
    ctx->pc = 0x3e9dbcu;
    // NOP
label_3e9dc0:
    // 0x3e9dc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3e9dc4:
    if (ctx->pc == 0x3E9DC4u) {
        ctx->pc = 0x3E9DC8u;
        goto label_3e9dc8;
    }
    ctx->pc = 0x3E9DC0u;
    {
        const bool branch_taken_0x3e9dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9dc0) {
            ctx->pc = 0x3E9DD0u;
            goto label_3e9dd0;
        }
    }
    ctx->pc = 0x3E9DC8u;
label_3e9dc8:
    // 0x3e9dc8: 0x1000000f  b           . + 4 + (0xF << 2)
label_3e9dcc:
    if (ctx->pc == 0x3E9DCCu) {
        ctx->pc = 0x3E9DD0u;
        goto label_3e9dd0;
    }
    ctx->pc = 0x3E9DC8u;
    {
        const bool branch_taken_0x3e9dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9dc8) {
            ctx->pc = 0x3E9E08u;
            goto label_3e9e08;
        }
    }
    ctx->pc = 0x3E9DD0u;
label_3e9dd0:
    // 0x3e9dd0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e9dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e9dd4:
    // 0x3e9dd4: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x3e9dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_3e9dd8:
    // 0x3e9dd8: 0x40f809  jalr        $v0
label_3e9ddc:
    if (ctx->pc == 0x3E9DDCu) {
        ctx->pc = 0x3E9DDCu;
            // 0x3e9ddc: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x3E9DE0u;
        goto label_3e9de0;
    }
    ctx->pc = 0x3E9DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9DE0u);
        ctx->pc = 0x3E9DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9DD8u;
            // 0x3e9ddc: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E9DE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E9DE0u; }
            if (ctx->pc != 0x3E9DE0u) { return; }
        }
        }
    }
    ctx->pc = 0x3E9DE0u;
label_3e9de0:
    // 0x3e9de0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x3e9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_3e9de4:
    // 0x3e9de4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3e9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9de8:
    // 0x3e9de8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3e9de8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e9dec:
    // 0x3e9dec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3e9decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3e9df0:
    // 0x3e9df0: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
label_3e9df4:
    if (ctx->pc == 0x3E9DF4u) {
        ctx->pc = 0x3E9DF4u;
            // 0x3e9df4: 0x8fa200fc  lw          $v0, 0xFC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
        ctx->pc = 0x3E9DF8u;
        goto label_3e9df8;
    }
    ctx->pc = 0x3E9DF0u;
    {
        const bool branch_taken_0x3e9df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9df0) {
            ctx->pc = 0x3E9DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9DF0u;
            // 0x3e9df4: 0x8fa200fc  lw          $v0, 0xFC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E9D30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e9d30;
        }
    }
    ctx->pc = 0x3E9DF8u;
label_3e9df8:
    // 0x3e9df8: 0x2402ff3c  addiu       $v0, $zero, -0xC4
    ctx->pc = 0x3e9df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967100));
label_3e9dfc:
    // 0x3e9dfc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3e9dfcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9e00:
    // 0x3e9e00: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3e9e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3e9e04:
    // 0x3e9e04: 0x0  nop
    ctx->pc = 0x3e9e04u;
    // NOP
label_3e9e08:
    // 0x3e9e08: 0x52c0022a  beql        $s6, $zero, . + 4 + (0x22A << 2)
label_3e9e0c:
    if (ctx->pc == 0x3E9E0Cu) {
        ctx->pc = 0x3E9E0Cu;
            // 0x3e9e0c: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x3E9E10u;
        goto label_3e9e10;
    }
    ctx->pc = 0x3E9E08u;
    {
        const bool branch_taken_0x3e9e08 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9e08) {
            ctx->pc = 0x3E9E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9E08u;
            // 0x3e9e0c: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EA6B4u;
            goto label_3ea6b4;
        }
    }
    ctx->pc = 0x3E9E10u;
label_3e9e10:
    // 0x3e9e10: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3e9e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3e9e14:
    // 0x3e9e14: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x3e9e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3e9e18:
    // 0x3e9e18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3e9e1c:
    if (ctx->pc == 0x3E9E1Cu) {
        ctx->pc = 0x3E9E20u;
        goto label_3e9e20;
    }
    ctx->pc = 0x3E9E18u;
    {
        const bool branch_taken_0x3e9e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9e18) {
            ctx->pc = 0x3E9E40u;
            goto label_3e9e40;
        }
    }
    ctx->pc = 0x3E9E20u;
label_3e9e20:
    // 0x3e9e20: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3e9e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3e9e24:
    // 0x3e9e24: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3e9e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3e9e28:
    // 0x3e9e28: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x3e9e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3e9e2c:
    // 0x3e9e2c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3e9e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3e9e30:
    // 0x3e9e30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3e9e34:
    if (ctx->pc == 0x3E9E34u) {
        ctx->pc = 0x3E9E38u;
        goto label_3e9e38;
    }
    ctx->pc = 0x3E9E30u;
    {
        const bool branch_taken_0x3e9e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9e30) {
            ctx->pc = 0x3E9E40u;
            goto label_3e9e40;
        }
    }
    ctx->pc = 0x3E9E38u;
label_3e9e38:
    // 0x3e9e38: 0x10000003  b           . + 4 + (0x3 << 2)
label_3e9e3c:
    if (ctx->pc == 0x3E9E3Cu) {
        ctx->pc = 0x3E9E3Cu;
            // 0x3e9e3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E9E40u;
        goto label_3e9e40;
    }
    ctx->pc = 0x3E9E38u;
    {
        const bool branch_taken_0x3e9e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9E38u;
            // 0x3e9e3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9e38) {
            ctx->pc = 0x3E9E48u;
            goto label_3e9e48;
        }
    }
    ctx->pc = 0x3E9E40u;
label_3e9e40:
    // 0x3e9e40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e9e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9e44:
    // 0x3e9e44: 0x0  nop
    ctx->pc = 0x3e9e44u;
    // NOP
label_3e9e48:
    // 0x3e9e48: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3e9e48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e9e4c:
    // 0x3e9e4c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3e9e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3e9e50:
    // 0x3e9e50: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x3e9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3e9e54:
    // 0x3e9e54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3e9e58:
    if (ctx->pc == 0x3E9E58u) {
        ctx->pc = 0x3E9E5Cu;
        goto label_3e9e5c;
    }
    ctx->pc = 0x3E9E54u;
    {
        const bool branch_taken_0x3e9e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9e54) {
            ctx->pc = 0x3E9E78u;
            goto label_3e9e78;
        }
    }
    ctx->pc = 0x3E9E5Cu;
label_3e9e5c:
    // 0x3e9e5c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x3e9e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3e9e60:
    // 0x3e9e60: 0x2c2b023  subu        $s6, $s6, $v0
    ctx->pc = 0x3e9e60u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_3e9e64:
    // 0x3e9e64: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x3e9e64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_3e9e68:
    // 0x3e9e68: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3e9e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_3e9e6c:
    // 0x3e9e6c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3e9e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e9e70:
    // 0x3e9e70: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x3e9e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_3e9e74:
    // 0x3e9e74: 0x0  nop
    ctx->pc = 0x3e9e74u;
    // NOP
label_3e9e78:
    // 0x3e9e78: 0x1640002d  bnez        $s2, . + 4 + (0x2D << 2)
label_3e9e7c:
    if (ctx->pc == 0x3E9E7Cu) {
        ctx->pc = 0x3E9E80u;
        goto label_3e9e80;
    }
    ctx->pc = 0x3E9E78u;
    {
        const bool branch_taken_0x3e9e78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9e78) {
            ctx->pc = 0x3E9F30u;
            goto label_3e9f30;
        }
    }
    ctx->pc = 0x3E9E80u;
label_3e9e80:
    // 0x3e9e80: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x3e9e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3e9e84:
    // 0x3e9e84: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x3e9e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3e9e88:
    // 0x3e9e88: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x3e9e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_3e9e8c:
    // 0x3e9e8c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x3e9e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3e9e90:
    // 0x3e9e90: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x3e9e90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3e9e94:
    // 0x3e9e94: 0x8e86002c  lw          $a2, 0x2C($s4)
    ctx->pc = 0x3e9e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_3e9e98:
    // 0x3e9e98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e9e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e9e9c:
    // 0x3e9e9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3e9e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e9ea0:
    // 0x3e9ea0: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x3e9ea0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3e9ea4:
    // 0x3e9ea4: 0x1012  mflo        $v0
    ctx->pc = 0x3e9ea4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_3e9ea8:
    // 0x3e9ea8: 0xc29018  mult        $s2, $a2, $v0
    ctx->pc = 0x3e9ea8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_3e9eac:
    // 0x3e9eac: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
label_3e9eb0:
    if (ctx->pc == 0x3E9EB0u) {
        ctx->pc = 0x3E9EB4u;
        goto label_3e9eb4;
    }
    ctx->pc = 0x3E9EACu;
    {
        const bool branch_taken_0x3e9eac = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3e9eac) {
            ctx->pc = 0x3E9ED8u;
            goto label_3e9ed8;
        }
    }
    ctx->pc = 0x3E9EB4u;
label_3e9eb4:
    // 0x3e9eb4: 0x8e930014  lw          $s3, 0x14($s4)
    ctx->pc = 0x3e9eb4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3e9eb8:
    // 0x3e9eb8: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x3e9eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3e9ebc:
    // 0x3e9ebc: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x3e9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_3e9ec0:
    // 0x3e9ec0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3e9ec0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e9ec4:
    // 0x3e9ec4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3e9ec8:
    if (ctx->pc == 0x3E9EC8u) {
        ctx->pc = 0x3E9ECCu;
        goto label_3e9ecc;
    }
    ctx->pc = 0x3E9EC4u;
    {
        const bool branch_taken_0x3e9ec4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9ec4) {
            ctx->pc = 0x3E9ED0u;
            goto label_3e9ed0;
        }
    }
    ctx->pc = 0x3E9ECCu;
label_3e9ecc:
    // 0x3e9ecc: 0x739023  subu        $s2, $v1, $s3
    ctx->pc = 0x3e9eccu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_3e9ed0:
    // 0x3e9ed0: 0x10000003  b           . + 4 + (0x3 << 2)
label_3e9ed4:
    if (ctx->pc == 0x3E9ED4u) {
        ctx->pc = 0x3E9ED8u;
        goto label_3e9ed8;
    }
    ctx->pc = 0x3E9ED0u;
    {
        const bool branch_taken_0x3e9ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9ed0) {
            ctx->pc = 0x3E9EE0u;
            goto label_3e9ee0;
        }
    }
    ctx->pc = 0x3E9ED8u;
label_3e9ed8:
    // 0x3e9ed8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3e9ed8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9edc:
    // 0x3e9edc: 0x0  nop
    ctx->pc = 0x3e9edcu;
    // NOP
label_3e9ee0:
    // 0x3e9ee0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_3e9ee4:
    if (ctx->pc == 0x3E9EE4u) {
        ctx->pc = 0x3E9EE8u;
        goto label_3e9ee8;
    }
    ctx->pc = 0x3E9EE0u;
    {
        const bool branch_taken_0x3e9ee0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9ee0) {
            ctx->pc = 0x3E9EF0u;
            goto label_3e9ef0;
        }
    }
    ctx->pc = 0x3E9EE8u;
label_3e9ee8:
    // 0x3e9ee8: 0x1000000f  b           . + 4 + (0xF << 2)
label_3e9eec:
    if (ctx->pc == 0x3E9EECu) {
        ctx->pc = 0x3E9EF0u;
        goto label_3e9ef0;
    }
    ctx->pc = 0x3E9EE8u;
    {
        const bool branch_taken_0x3e9ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9ee8) {
            ctx->pc = 0x3E9F28u;
            goto label_3e9f28;
        }
    }
    ctx->pc = 0x3E9EF0u;
label_3e9ef0:
    // 0x3e9ef0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e9ef4:
    // 0x3e9ef4: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x3e9ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_3e9ef8:
    // 0x3e9ef8: 0x40f809  jalr        $v0
label_3e9efc:
    if (ctx->pc == 0x3E9EFCu) {
        ctx->pc = 0x3E9EFCu;
            // 0x3e9efc: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x3E9F00u;
        goto label_3e9f00;
    }
    ctx->pc = 0x3E9EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9F00u);
        ctx->pc = 0x3E9EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9EF8u;
            // 0x3e9efc: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E9F00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E9F00u; }
            if (ctx->pc != 0x3E9F00u) { return; }
        }
        }
    }
    ctx->pc = 0x3E9F00u;
label_3e9f00:
    // 0x3e9f00: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x3e9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_3e9f04:
    // 0x3e9f04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3e9f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9f08:
    // 0x3e9f08: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3e9f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e9f0c:
    // 0x3e9f0c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3e9f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3e9f10:
    // 0x3e9f10: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_3e9f14:
    if (ctx->pc == 0x3E9F14u) {
        ctx->pc = 0x3E9F18u;
        goto label_3e9f18;
    }
    ctx->pc = 0x3E9F10u;
    {
        const bool branch_taken_0x3e9f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9f10) {
            ctx->pc = 0x3E9E80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e9e80;
        }
    }
    ctx->pc = 0x3E9F18u;
label_3e9f18:
    // 0x3e9f18: 0x2402ff3c  addiu       $v0, $zero, -0xC4
    ctx->pc = 0x3e9f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967100));
label_3e9f1c:
    // 0x3e9f1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3e9f1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9f20:
    // 0x3e9f20: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3e9f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3e9f24:
    // 0x3e9f24: 0x0  nop
    ctx->pc = 0x3e9f24u;
    // NOP
label_3e9f28:
    // 0x3e9f28: 0x126001e1  beqz        $s3, . + 4 + (0x1E1 << 2)
label_3e9f2c:
    if (ctx->pc == 0x3E9F2Cu) {
        ctx->pc = 0x3E9F30u;
        goto label_3e9f30;
    }
    ctx->pc = 0x3E9F28u;
    {
        const bool branch_taken_0x3e9f28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9f28) {
            ctx->pc = 0x3EA6B0u;
            goto label_3ea6b0;
        }
    }
    ctx->pc = 0x3E9F30u;
label_3e9f30:
    // 0x3e9f30: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x3e9f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e9f34:
    // 0x3e9f34: 0x106000a8  beqz        $v1, . + 4 + (0xA8 << 2)
label_3e9f38:
    if (ctx->pc == 0x3E9F38u) {
        ctx->pc = 0x3E9F3Cu;
        goto label_3e9f3c;
    }
    ctx->pc = 0x3E9F34u;
    {
        const bool branch_taken_0x3e9f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9f34) {
            ctx->pc = 0x3EA1D8u;
            goto label_3ea1d8;
        }
    }
    ctx->pc = 0x3E9F3Cu;
label_3e9f3c:
    // 0x3e9f3c: 0x92a20054  lbu         $v0, 0x54($s5)
    ctx->pc = 0x3e9f3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 84)));
label_3e9f40:
    // 0x3e9f40: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_3e9f44:
    if (ctx->pc == 0x3E9F44u) {
        ctx->pc = 0x3E9F48u;
        goto label_3e9f48;
    }
    ctx->pc = 0x3E9F40u;
    {
        const bool branch_taken_0x3e9f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9f40) {
            ctx->pc = 0x3E9FC8u;
            goto label_3e9fc8;
        }
    }
    ctx->pc = 0x3E9F48u;
label_3e9f48:
    // 0x3e9f48: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_3e9f4c:
    if (ctx->pc == 0x3E9F4Cu) {
        ctx->pc = 0x3E9F50u;
        goto label_3e9f50;
    }
    ctx->pc = 0x3E9F48u;
    {
        const bool branch_taken_0x3e9f48 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3e9f48) {
            ctx->pc = 0x3E9F58u;
            goto label_3e9f58;
        }
    }
    ctx->pc = 0x3E9F50u;
label_3e9f50:
    // 0x3e9f50: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_3e9f54:
    if (ctx->pc == 0x3E9F54u) {
        ctx->pc = 0x3E9F54u;
            // 0x3e9f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E9F58u;
        goto label_3e9f58;
    }
    ctx->pc = 0x3E9F50u;
    {
        const bool branch_taken_0x3e9f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9F50u;
            // 0x3e9f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9f50) {
            ctx->pc = 0x3EA1E0u;
            goto label_3ea1e0;
        }
    }
    ctx->pc = 0x3E9F58u;
label_3e9f58:
    // 0x3e9f58: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x3e9f58u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3e9f5c:
    // 0x3e9f5c: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_3e9f60:
    if (ctx->pc == 0x3E9F60u) {
        ctx->pc = 0x3E9F64u;
        goto label_3e9f64;
    }
    ctx->pc = 0x3E9F5Cu;
    {
        const bool branch_taken_0x3e9f5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9f5c) {
            ctx->pc = 0x3E9F90u;
            goto label_3e9f90;
        }
    }
    ctx->pc = 0x3E9F64u;
label_3e9f64:
    // 0x3e9f64: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e9f68:
    // 0x3e9f68: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e9f68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9f6c:
    // 0x3e9f6c: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x3e9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_3e9f70:
    // 0x3e9f70: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e9f70u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e9f74:
    // 0x3e9f74: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e9f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e9f78:
    // 0x3e9f78: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3e9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3e9f7c:
    // 0x3e9f7c: 0xaea2004c  sw          $v0, 0x4C($s5)
    ctx->pc = 0x3e9f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
label_3e9f80:
    // 0x3e9f80: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e9f84:
    // 0x3e9f84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e9f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e9f88:
    // 0x3e9f88: 0x1000000d  b           . + 4 + (0xD << 2)
label_3e9f8c:
    if (ctx->pc == 0x3E9F8Cu) {
        ctx->pc = 0x3E9F8Cu;
            // 0x3e9f8c: 0xaea20050  sw          $v0, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x3E9F90u;
        goto label_3e9f90;
    }
    ctx->pc = 0x3E9F88u;
    {
        const bool branch_taken_0x3e9f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9F88u;
            // 0x3e9f8c: 0xaea20050  sw          $v0, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9f88) {
            ctx->pc = 0x3E9FC0u;
            goto label_3e9fc0;
        }
    }
    ctx->pc = 0x3E9F90u;
label_3e9f90:
    // 0x3e9f90: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3e9f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e9f94:
    // 0x3e9f94: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x3e9f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3e9f98:
    // 0x3e9f98: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e9f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e9f9c:
    // 0x3e9f9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3e9f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e9fa0:
    // 0x3e9fa0: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3e9fa0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e9fa4:
    // 0x3e9fa4: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3e9fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3e9fa8:
    // 0x3e9fa8: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x3e9fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_3e9fac:
    // 0x3e9fac: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e9facu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e9fb0:
    // 0x3e9fb0: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e9fb4:
    // 0x3e9fb4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3e9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e9fb8:
    // 0x3e9fb8: 0x30510007  andi        $s1, $v0, 0x7
    ctx->pc = 0x3e9fb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3e9fbc:
    // 0x3e9fbc: 0x0  nop
    ctx->pc = 0x3e9fbcu;
    // NOP
label_3e9fc0:
    // 0x3e9fc0: 0xa2a00054  sb          $zero, 0x54($s5)
    ctx->pc = 0x3e9fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 0));
label_3e9fc4:
    // 0x3e9fc4: 0x0  nop
    ctx->pc = 0x3e9fc4u;
    // NOP
label_3e9fc8:
    // 0x3e9fc8: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3e9fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e9fcc:
    // 0x3e9fcc: 0x10a00082  beqz        $a1, . + 4 + (0x82 << 2)
label_3e9fd0:
    if (ctx->pc == 0x3E9FD0u) {
        ctx->pc = 0x3E9FD4u;
        goto label_3e9fd4;
    }
    ctx->pc = 0x3E9FCCu;
    {
        const bool branch_taken_0x3e9fcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9fcc) {
            ctx->pc = 0x3EA1D8u;
            goto label_3ea1d8;
        }
    }
    ctx->pc = 0x3E9FD4u;
label_3e9fd4:
    // 0x3e9fd4: 0x0  nop
    ctx->pc = 0x3e9fd4u;
    // NOP
label_3e9fd8:
    // 0x3e9fd8: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_3e9fdc:
    if (ctx->pc == 0x3E9FDCu) {
        ctx->pc = 0x3E9FE0u;
        goto label_3e9fe0;
    }
    ctx->pc = 0x3E9FD8u;
    {
        const bool branch_taken_0x3e9fd8 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3e9fd8) {
            ctx->pc = 0x3E9FE8u;
            goto label_3e9fe8;
        }
    }
    ctx->pc = 0x3E9FE0u;
label_3e9fe0:
    // 0x3e9fe0: 0x1000007f  b           . + 4 + (0x7F << 2)
label_3e9fe4:
    if (ctx->pc == 0x3E9FE4u) {
        ctx->pc = 0x3E9FE4u;
            // 0x3e9fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E9FE8u;
        goto label_3e9fe8;
    }
    ctx->pc = 0x3E9FE0u;
    {
        const bool branch_taken_0x3e9fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9FE0u;
            // 0x3e9fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9fe0) {
            ctx->pc = 0x3EA1E0u;
            goto label_3ea1e0;
        }
    }
    ctx->pc = 0x3E9FE8u;
label_3e9fe8:
    // 0x3e9fe8: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x3e9fe8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3e9fec:
    // 0x3e9fec: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
label_3e9ff0:
    if (ctx->pc == 0x3E9FF0u) {
        ctx->pc = 0x3E9FF4u;
        goto label_3e9ff4;
    }
    ctx->pc = 0x3E9FECu;
    {
        const bool branch_taken_0x3e9fec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9fec) {
            ctx->pc = 0x3EA0A8u;
            goto label_3ea0a8;
        }
    }
    ctx->pc = 0x3E9FF4u;
label_3e9ff4:
    // 0x3e9ff4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e9ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e9ff8:
    // 0x3e9ff8: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_3e9ffc:
    if (ctx->pc == 0x3E9FFCu) {
        ctx->pc = 0x3EA000u;
        goto label_3ea000;
    }
    ctx->pc = 0x3E9FF8u;
    {
        const bool branch_taken_0x3e9ff8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e9ff8) {
            ctx->pc = 0x3EA028u;
            goto label_3ea028;
        }
    }
    ctx->pc = 0x3EA000u;
label_3ea000:
    // 0x3ea000: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3ea000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea004:
    // 0x3ea004: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ea004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ea008:
    // 0x3ea008: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ea008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ea00c:
    // 0x3ea00c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3ea00cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3ea010:
    // 0x3ea010: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3ea010u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea014:
    // 0x3ea014: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ea014u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ea018:
    // 0x3ea018: 0xc0aacd0  jal         func_2AB340
label_3ea01c:
    if (ctx->pc == 0x3EA01Cu) {
        ctx->pc = 0x3EA01Cu;
            // 0x3ea01c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3EA020u;
        goto label_3ea020;
    }
    ctx->pc = 0x3EA018u;
    SET_GPR_U32(ctx, 31, 0x3EA020u);
    ctx->pc = 0x3EA01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA018u;
            // 0x3ea01c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB340u;
    if (runtime->hasFunction(0x2AB340u)) {
        auto targetFn = runtime->lookupFunction(0x2AB340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA020u; }
        if (ctx->pc != 0x3EA020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB340_0x2ab340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA020u; }
        if (ctx->pc != 0x3EA020u) { return; }
    }
    ctx->pc = 0x3EA020u;
label_3ea020:
    // 0x3ea020: 0x10000019  b           . + 4 + (0x19 << 2)
label_3ea024:
    if (ctx->pc == 0x3EA024u) {
        ctx->pc = 0x3EA028u;
        goto label_3ea028;
    }
    ctx->pc = 0x3EA020u;
    {
        const bool branch_taken_0x3ea020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea020) {
            ctx->pc = 0x3EA088u;
            goto label_3ea088;
        }
    }
    ctx->pc = 0x3EA028u;
label_3ea028:
    // 0x3ea028: 0x8ea60050  lw          $a2, 0x50($s5)
    ctx->pc = 0x3ea028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea02c:
    // 0x3ea02c: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x3ea02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3ea030:
    // 0x3ea030: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ea030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ea034:
    // 0x3ea034: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3ea034u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3ea038:
    // 0x3ea038: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ea038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ea03c:
    // 0x3ea03c: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x3ea03cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3ea040:
    // 0x3ea040: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3ea040u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3ea044:
    // 0x3ea044: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x3ea044u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_3ea048:
    // 0x3ea048: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ea048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3ea04c:
    // 0x3ea04c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ea04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3ea050:
    // 0x3ea050: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ea050u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ea054:
    // 0x3ea054: 0xc0aacd0  jal         func_2AB340
label_3ea058:
    if (ctx->pc == 0x3EA058u) {
        ctx->pc = 0x3EA058u;
            // 0x3ea058: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3EA05Cu;
        goto label_3ea05c;
    }
    ctx->pc = 0x3EA054u;
    SET_GPR_U32(ctx, 31, 0x3EA05Cu);
    ctx->pc = 0x3EA058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA054u;
            // 0x3ea058: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB340u;
    if (runtime->hasFunction(0x2AB340u)) {
        auto targetFn = runtime->lookupFunction(0x2AB340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA05Cu; }
        if (ctx->pc != 0x3EA05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB340_0x2ab340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA05Cu; }
        if (ctx->pc != 0x3EA05Cu) { return; }
    }
    ctx->pc = 0x3EA05Cu;
label_3ea05c:
    // 0x3ea05c: 0x1a400006  blez        $s2, . + 4 + (0x6 << 2)
label_3ea060:
    if (ctx->pc == 0x3EA060u) {
        ctx->pc = 0x3EA064u;
        goto label_3ea064;
    }
    ctx->pc = 0x3EA05Cu;
    {
        const bool branch_taken_0x3ea05c = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3ea05c) {
            ctx->pc = 0x3EA078u;
            goto label_3ea078;
        }
    }
    ctx->pc = 0x3EA064u;
label_3ea064:
    // 0x3ea064: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3ea064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea068:
    // 0x3ea068: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3ea068u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea06c:
    // 0x3ea06c: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x3ea06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_3ea070:
    // 0x3ea070: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ea074:
    if (ctx->pc == 0x3EA074u) {
        ctx->pc = 0x3EA074u;
            // 0x3ea074: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3EA078u;
        goto label_3ea078;
    }
    ctx->pc = 0x3EA070u;
    {
        const bool branch_taken_0x3ea070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA070u;
            // 0x3ea074: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea070) {
            ctx->pc = 0x3EA088u;
            goto label_3ea088;
        }
    }
    ctx->pc = 0x3EA078u;
label_3ea078:
    // 0x3ea078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ea078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ea07c:
    // 0x3ea07c: 0xa2a20054  sb          $v0, 0x54($s5)
    ctx->pc = 0x3ea07cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 2));
label_3ea080:
    // 0x3ea080: 0x10000057  b           . + 4 + (0x57 << 2)
label_3ea084:
    if (ctx->pc == 0x3EA084u) {
        ctx->pc = 0x3EA084u;
            // 0x3ea084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EA088u;
        goto label_3ea088;
    }
    ctx->pc = 0x3EA080u;
    {
        const bool branch_taken_0x3ea080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA080u;
            // 0x3ea084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea080) {
            ctx->pc = 0x3EA1E0u;
            goto label_3ea1e0;
        }
    }
    ctx->pc = 0x3EA088u;
label_3ea088:
    // 0x3ea088: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3ea088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea08c:
    // 0x3ea08c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ea08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ea090:
    // 0x3ea090: 0xaea20050  sw          $v0, 0x50($s5)
    ctx->pc = 0x3ea090u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
label_3ea094:
    // 0x3ea094: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3ea094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ea098:
    // 0x3ea098: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3ea098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3ea09c:
    // 0x3ea09c: 0x1000004a  b           . + 4 + (0x4A << 2)
label_3ea0a0:
    if (ctx->pc == 0x3EA0A0u) {
        ctx->pc = 0x3EA0A0u;
            // 0x3ea0a0: 0xaea2004c  sw          $v0, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x3EA0A4u;
        goto label_3ea0a4;
    }
    ctx->pc = 0x3EA09Cu;
    {
        const bool branch_taken_0x3ea09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA09Cu;
            // 0x3ea0a0: 0xaea2004c  sw          $v0, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea09c) {
            ctx->pc = 0x3EA1C8u;
            goto label_3ea1c8;
        }
    }
    ctx->pc = 0x3EA0A4u;
label_3ea0a4:
    // 0x3ea0a4: 0x0  nop
    ctx->pc = 0x3ea0a4u;
    // NOP
label_3ea0a8:
    // 0x3ea0a8: 0x225082b  sltu        $at, $s1, $a1
    ctx->pc = 0x3ea0a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3ea0ac:
    // 0x3ea0ac: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_3ea0b0:
    if (ctx->pc == 0x3EA0B0u) {
        ctx->pc = 0x3EA0B4u;
        goto label_3ea0b4;
    }
    ctx->pc = 0x3EA0ACu;
    {
        const bool branch_taken_0x3ea0ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea0ac) {
            ctx->pc = 0x3EA138u;
            goto label_3ea138;
        }
    }
    ctx->pc = 0x3EA0B4u;
label_3ea0b4:
    // 0x3ea0b4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ea0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ea0b8:
    // 0x3ea0b8: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_3ea0bc:
    if (ctx->pc == 0x3EA0BCu) {
        ctx->pc = 0x3EA0C0u;
        goto label_3ea0c0;
    }
    ctx->pc = 0x3EA0B8u;
    {
        const bool branch_taken_0x3ea0b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ea0b8) {
            ctx->pc = 0x3EA0E0u;
            goto label_3ea0e0;
        }
    }
    ctx->pc = 0x3EA0C0u;
label_3ea0c0:
    // 0x3ea0c0: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3ea0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea0c4:
    // 0x3ea0c4: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x3ea0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3ea0c8:
    // 0x3ea0c8: 0x2251023  subu        $v0, $s1, $a1
    ctx->pc = 0x3ea0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3ea0cc:
    // 0x3ea0cc: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3ea0ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ea0d0:
    // 0x3ea0d0: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x3ea0d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_3ea0d4:
    // 0x3ea0d4: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x3ea0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_3ea0d8:
    // 0x3ea0d8: 0x1000000b  b           . + 4 + (0xB << 2)
label_3ea0dc:
    if (ctx->pc == 0x3EA0DCu) {
        ctx->pc = 0x3EA0DCu;
            // 0x3ea0dc: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3EA0E0u;
        goto label_3ea0e0;
    }
    ctx->pc = 0x3EA0D8u;
    {
        const bool branch_taken_0x3ea0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA0D8u;
            // 0x3ea0dc: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea0d8) {
            ctx->pc = 0x3EA108u;
            goto label_3ea108;
        }
    }
    ctx->pc = 0x3EA0E0u;
label_3ea0e0:
    // 0x3ea0e0: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x3ea0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3ea0e4:
    // 0x3ea0e4: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x3ea0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3ea0e8:
    // 0x3ea0e8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3ea0e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3ea0ec:
    // 0x3ea0ec: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x3ea0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea0f0:
    // 0x3ea0f0: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x3ea0f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3ea0f4:
    // 0x3ea0f4: 0x852007  srav        $a0, $a1, $a0
    ctx->pc = 0x3ea0f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_3ea0f8:
    // 0x3ea0f8: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x3ea0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_3ea0fc:
    // 0x3ea0fc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ea0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3ea100:
    // 0x3ea100: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ea100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3ea104:
    // 0x3ea104: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ea104u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ea108:
    // 0x3ea108: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3ea108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ea10c:
    // 0x3ea10c: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x3ea10cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3ea110:
    // 0x3ea110: 0x1e20002b  bgtz        $s1, . + 4 + (0x2B << 2)
label_3ea114:
    if (ctx->pc == 0x3EA114u) {
        ctx->pc = 0x3EA118u;
        goto label_3ea118;
    }
    ctx->pc = 0x3EA110u;
    {
        const bool branch_taken_0x3ea110 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x3ea110) {
            ctx->pc = 0x3EA1C0u;
            goto label_3ea1c0;
        }
    }
    ctx->pc = 0x3EA118u;
label_3ea118:
    // 0x3ea118: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ea118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ea11c:
    // 0x3ea11c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ea11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ea120:
    // 0x3ea120: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ea120u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3ea124:
    // 0x3ea124: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3ea124u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3ea128:
    // 0x3ea128: 0xc0aacd0  jal         func_2AB340
label_3ea12c:
    if (ctx->pc == 0x3EA12Cu) {
        ctx->pc = 0x3EA12Cu;
            // 0x3ea12c: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3EA130u;
        goto label_3ea130;
    }
    ctx->pc = 0x3EA128u;
    SET_GPR_U32(ctx, 31, 0x3EA130u);
    ctx->pc = 0x3EA12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA128u;
            // 0x3ea12c: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB340u;
    if (runtime->hasFunction(0x2AB340u)) {
        auto targetFn = runtime->lookupFunction(0x2AB340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA130u; }
        if (ctx->pc != 0x3EA130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB340_0x2ab340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA130u; }
        if (ctx->pc != 0x3EA130u) { return; }
    }
    ctx->pc = 0x3EA130u;
label_3ea130:
    // 0x3ea130: 0x10000023  b           . + 4 + (0x23 << 2)
label_3ea134:
    if (ctx->pc == 0x3EA134u) {
        ctx->pc = 0x3EA138u;
        goto label_3ea138;
    }
    ctx->pc = 0x3EA130u;
    {
        const bool branch_taken_0x3ea130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea130) {
            ctx->pc = 0x3EA1C0u;
            goto label_3ea1c0;
        }
    }
    ctx->pc = 0x3EA138u;
label_3ea138:
    // 0x3ea138: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3ea138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea13c:
    // 0x3ea13c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3ea13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ea140:
    // 0x3ea140: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3ea140u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3ea144:
    // 0x3ea144: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x3ea144u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3ea148:
    // 0x3ea148: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ea148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ea14c:
    // 0x3ea14c: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x3ea14cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ea150:
    // 0x3ea150: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3ea150u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3ea154:
    // 0x3ea154: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x3ea154u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_3ea158:
    // 0x3ea158: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ea158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ea15c:
    // 0x3ea15c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ea15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3ea160:
    // 0x3ea160: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ea160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3ea164:
    // 0x3ea164: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ea164u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ea168:
    // 0x3ea168: 0xc0aacd0  jal         func_2AB340
label_3ea16c:
    if (ctx->pc == 0x3EA16Cu) {
        ctx->pc = 0x3EA16Cu;
            // 0x3ea16c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3EA170u;
        goto label_3ea170;
    }
    ctx->pc = 0x3EA168u;
    SET_GPR_U32(ctx, 31, 0x3EA170u);
    ctx->pc = 0x3EA16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA168u;
            // 0x3ea16c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB340u;
    if (runtime->hasFunction(0x2AB340u)) {
        auto targetFn = runtime->lookupFunction(0x2AB340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA170u; }
        if (ctx->pc != 0x3EA170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB340_0x2ab340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA170u; }
        if (ctx->pc != 0x3EA170u) { return; }
    }
    ctx->pc = 0x3EA170u;
label_3ea170:
    // 0x3ea170: 0x1a40000f  blez        $s2, . + 4 + (0xF << 2)
label_3ea174:
    if (ctx->pc == 0x3EA174u) {
        ctx->pc = 0x3EA178u;
        goto label_3ea178;
    }
    ctx->pc = 0x3EA170u;
    {
        const bool branch_taken_0x3ea170 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3ea170) {
            ctx->pc = 0x3EA1B0u;
            goto label_3ea1b0;
        }
    }
    ctx->pc = 0x3EA178u;
label_3ea178:
    // 0x3ea178: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3ea178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ea17c:
    // 0x3ea17c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3ea17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ea180:
    // 0x3ea180: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3ea180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea184:
    // 0x3ea184: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3ea184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3ea188:
    // 0x3ea188: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x3ea188u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3ea18c:
    // 0x3ea18c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3ea18cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea190:
    // 0x3ea190: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x3ea190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_3ea194:
    // 0x3ea194: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x3ea194u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_3ea198:
    // 0x3ea198: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x3ea198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_3ea19c:
    // 0x3ea19c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ea19cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ea1a0:
    // 0x3ea1a0: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3ea1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ea1a4:
    // 0x3ea1a4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3ea1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ea1a8:
    // 0x3ea1a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ea1ac:
    if (ctx->pc == 0x3EA1ACu) {
        ctx->pc = 0x3EA1ACu;
            // 0x3ea1ac: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->pc = 0x3EA1B0u;
        goto label_3ea1b0;
    }
    ctx->pc = 0x3EA1A8u;
    {
        const bool branch_taken_0x3ea1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA1A8u;
            // 0x3ea1ac: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea1a8) {
            ctx->pc = 0x3EA1C0u;
            goto label_3ea1c0;
        }
    }
    ctx->pc = 0x3EA1B0u;
label_3ea1b0:
    // 0x3ea1b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ea1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ea1b4:
    // 0x3ea1b4: 0xa2a20054  sb          $v0, 0x54($s5)
    ctx->pc = 0x3ea1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 2));
label_3ea1b8:
    // 0x3ea1b8: 0x10000009  b           . + 4 + (0x9 << 2)
label_3ea1bc:
    if (ctx->pc == 0x3EA1BCu) {
        ctx->pc = 0x3EA1BCu;
            // 0x3ea1bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EA1C0u;
        goto label_3ea1c0;
    }
    ctx->pc = 0x3EA1B8u;
    {
        const bool branch_taken_0x3ea1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA1B8u;
            // 0x3ea1bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea1b8) {
            ctx->pc = 0x3EA1E0u;
            goto label_3ea1e0;
        }
    }
    ctx->pc = 0x3EA1C0u;
label_3ea1c0:
    // 0x3ea1c0: 0xaea0004c  sw          $zero, 0x4C($s5)
    ctx->pc = 0x3ea1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 0));
label_3ea1c4:
    // 0x3ea1c4: 0x0  nop
    ctx->pc = 0x3ea1c4u;
    // NOP
label_3ea1c8:
    // 0x3ea1c8: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3ea1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ea1cc:
    // 0x3ea1cc: 0x14a0ff82  bnez        $a1, . + 4 + (-0x7E << 2)
label_3ea1d0:
    if (ctx->pc == 0x3EA1D0u) {
        ctx->pc = 0x3EA1D4u;
        goto label_3ea1d4;
    }
    ctx->pc = 0x3EA1CCu;
    {
        const bool branch_taken_0x3ea1cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea1cc) {
            ctx->pc = 0x3E9FD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e9fd8;
        }
    }
    ctx->pc = 0x3EA1D4u;
label_3ea1d4:
    // 0x3ea1d4: 0x0  nop
    ctx->pc = 0x3ea1d4u;
    // NOP
label_3ea1d8:
    // 0x3ea1d8: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3ea1d8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3ea1dc:
    // 0x3ea1dc: 0x0  nop
    ctx->pc = 0x3ea1dcu;
    // NOP
label_3ea1e0:
    // 0x3ea1e0: 0x1040ff25  beqz        $v0, . + 4 + (-0xDB << 2)
label_3ea1e4:
    if (ctx->pc == 0x3EA1E4u) {
        ctx->pc = 0x3EA1E8u;
        goto label_3ea1e8;
    }
    ctx->pc = 0x3EA1E0u;
    {
        const bool branch_taken_0x3ea1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea1e0) {
            ctx->pc = 0x3E9E78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e9e78;
        }
    }
    ctx->pc = 0x3EA1E8u;
label_3ea1e8:
    // 0x3ea1e8: 0x1bc0010b  blez        $fp, . + 4 + (0x10B << 2)
label_3ea1ec:
    if (ctx->pc == 0x3EA1ECu) {
        ctx->pc = 0x3EA1F0u;
        goto label_3ea1f0;
    }
    ctx->pc = 0x3EA1E8u;
    {
        const bool branch_taken_0x3ea1e8 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x3ea1e8) {
            ctx->pc = 0x3EA618u;
            goto label_3ea618;
        }
    }
    ctx->pc = 0x3EA1F0u;
label_3ea1f0:
    // 0x3ea1f0: 0x92a40006  lbu         $a0, 0x6($s5)
    ctx->pc = 0x3ea1f0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
label_3ea1f4:
    // 0x3ea1f4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x3ea1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3ea1f8:
    // 0x3ea1f8: 0x2de1021  addu        $v0, $s6, $fp
    ctx->pc = 0x3ea1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
label_3ea1fc:
    // 0x3ea1fc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3ea1fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3ea200:
    // 0x3ea200: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3ea204:
    if (ctx->pc == 0x3EA204u) {
        ctx->pc = 0x3EA204u;
            // 0x3ea204: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EA208u;
        goto label_3ea208;
    }
    ctx->pc = 0x3EA200u;
    {
        const bool branch_taken_0x3ea200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA200u;
            // 0x3ea204: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea200) {
            ctx->pc = 0x3EA210u;
            goto label_3ea210;
        }
    }
    ctx->pc = 0x3EA208u;
label_3ea208:
    // 0x3ea208: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ea20c:
    if (ctx->pc == 0x3EA20Cu) {
        ctx->pc = 0x3EA20Cu;
            // 0x3ea20c: 0x2c41823  subu        $v1, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->pc = 0x3EA210u;
        goto label_3ea210;
    }
    ctx->pc = 0x3EA208u;
    {
        const bool branch_taken_0x3ea208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA208u;
            // 0x3ea20c: 0x2c41823  subu        $v1, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea208) {
            ctx->pc = 0x3EA218u;
            goto label_3ea218;
        }
    }
    ctx->pc = 0x3EA210u;
label_3ea210:
    // 0x3ea210: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x3ea210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3ea214:
    // 0x3ea214: 0x2c31823  subu        $v1, $s6, $v1
    ctx->pc = 0x3ea214u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_3ea218:
    // 0x3ea218: 0x76082b  sltu        $at, $v1, $s6
    ctx->pc = 0x3ea218u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3ea21c:
    // 0x3ea21c: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
label_3ea220:
    if (ctx->pc == 0x3EA220u) {
        ctx->pc = 0x3EA224u;
        goto label_3ea224;
    }
    ctx->pc = 0x3EA21Cu;
    {
        const bool branch_taken_0x3ea21c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea21c) {
            ctx->pc = 0x3EA2E0u;
            goto label_3ea2e0;
        }
    }
    ctx->pc = 0x3EA224u;
label_3ea224:
    // 0x3ea224: 0x92c80000  lbu         $t0, 0x0($s6)
    ctx->pc = 0x3ea224u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3ea228:
    // 0x3ea228: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x3ea228u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea22c:
    // 0x3ea22c: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x3ea22cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3ea230:
    // 0x3ea230: 0x14880027  bne         $a0, $t0, . + 4 + (0x27 << 2)
label_3ea234:
    if (ctx->pc == 0x3EA234u) {
        ctx->pc = 0x3EA234u;
            // 0x3ea234: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EA238u;
        goto label_3ea238;
    }
    ctx->pc = 0x3EA230u;
    {
        const bool branch_taken_0x3ea230 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x3EA234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA230u;
            // 0x3ea234: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea230) {
            ctx->pc = 0x3EA2D0u;
            goto label_3ea2d0;
        }
    }
    ctx->pc = 0x3EA238u;
label_3ea238:
    // 0x3ea238: 0x92a70008  lbu         $a3, 0x8($s5)
    ctx->pc = 0x3ea238u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 8)));
label_3ea23c:
    // 0x3ea23c: 0x2c32823  subu        $a1, $s6, $v1
    ctx->pc = 0x3ea23cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_3ea240:
    // 0x3ea240: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3ea240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3ea244:
    // 0x3ea244: 0x207202b  sltu        $a0, $s0, $a3
    ctx->pc = 0x3ea244u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_3ea248:
    // 0x3ea248: 0x14800013  bnez        $a0, . + 4 + (0x13 << 2)
label_3ea24c:
    if (ctx->pc == 0x3EA24Cu) {
        ctx->pc = 0x3EA250u;
        goto label_3ea250;
    }
    ctx->pc = 0x3EA248u;
    {
        const bool branch_taken_0x3ea248 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea248) {
            ctx->pc = 0x3EA298u;
            goto label_3ea298;
        }
    }
    ctx->pc = 0x3EA250u;
label_3ea250:
    // 0x3ea250: 0x2f0082b  sltu        $at, $s7, $s0
    ctx->pc = 0x3ea250u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3ea254:
    // 0x3ea254: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_3ea258:
    if (ctx->pc == 0x3EA258u) {
        ctx->pc = 0x3EA25Cu;
        goto label_3ea25c;
    }
    ctx->pc = 0x3EA254u;
    {
        const bool branch_taken_0x3ea254 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea254) {
            ctx->pc = 0x3EA298u;
            goto label_3ea298;
        }
    }
    ctx->pc = 0x3EA25Cu;
label_3ea25c:
    // 0x3ea25c: 0x92a40007  lbu         $a0, 0x7($s5)
    ctx->pc = 0x3ea25cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 7)));
label_3ea260:
    // 0x3ea260: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x3ea260u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ea264:
    // 0x3ea264: 0x204202b  sltu        $a0, $s0, $a0
    ctx->pc = 0x3ea264u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3ea268:
    // 0x3ea268: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_3ea26c:
    if (ctx->pc == 0x3EA26Cu) {
        ctx->pc = 0x3EA26Cu;
            // 0x3ea26c: 0xafa500bc  sw          $a1, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
        ctx->pc = 0x3EA270u;
        goto label_3ea270;
    }
    ctx->pc = 0x3EA268u;
    {
        const bool branch_taken_0x3ea268 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA268u;
            // 0x3ea26c: 0xafa500bc  sw          $a1, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea268) {
            ctx->pc = 0x3EA298u;
            goto label_3ea298;
        }
    }
    ctx->pc = 0x3EA270u;
label_3ea270:
    // 0x3ea270: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ea270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ea274:
    // 0x3ea274: 0xc0fa458  jal         func_3E9160
label_3ea278:
    if (ctx->pc == 0x3EA278u) {
        ctx->pc = 0x3EA278u;
            // 0x3ea278: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EA27Cu;
        goto label_3ea27c;
    }
    ctx->pc = 0x3EA274u;
    SET_GPR_U32(ctx, 31, 0x3EA27Cu);
    ctx->pc = 0x3EA278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA274u;
            // 0x3ea278: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9160u;
    if (runtime->hasFunction(0x3E9160u)) {
        auto targetFn = runtime->lookupFunction(0x3E9160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA27Cu; }
        if (ctx->pc != 0x3EA27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9160_0x3e9160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA27Cu; }
        if (ctx->pc != 0x3EA27Cu) { return; }
    }
    ctx->pc = 0x3EA27Cu;
label_3ea27c:
    // 0x3ea27c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3ea27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3ea280:
    // 0x3ea280: 0x3d0f023  subu        $fp, $fp, $s0
    ctx->pc = 0x3ea280u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
label_3ea284:
    // 0x3ea284: 0x2d0b021  addu        $s6, $s6, $s0
    ctx->pc = 0x3ea284u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_3ea288:
    // 0x3ea288: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3ea288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3ea28c:
    // 0x3ea28c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3ea28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_3ea290:
    // 0x3ea290: 0x10000029  b           . + 4 + (0x29 << 2)
label_3ea294:
    if (ctx->pc == 0x3EA294u) {
        ctx->pc = 0x3EA294u;
            // 0x3ea294: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3EA298u;
        goto label_3ea298;
    }
    ctx->pc = 0x3EA290u;
    {
        const bool branch_taken_0x3ea290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA290u;
            // 0x3ea294: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea290) {
            ctx->pc = 0x3EA338u;
            goto label_3ea338;
        }
    }
    ctx->pc = 0x3EA298u;
label_3ea298:
    // 0x3ea298: 0x2d03021  addu        $a2, $s6, $s0
    ctx->pc = 0x3ea298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_3ea29c:
    // 0x3ea29c: 0xc2202b  sltu        $a0, $a2, $v0
    ctx->pc = 0x3ea29cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ea2a0:
    // 0x3ea2a0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_3ea2a4:
    if (ctx->pc == 0x3EA2A4u) {
        ctx->pc = 0x3EA2A4u;
            // 0x3ea2a4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->pc = 0x3EA2A8u;
        goto label_3ea2a8;
    }
    ctx->pc = 0x3EA2A0u;
    {
        const bool branch_taken_0x3ea2a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA2A0u;
            // 0x3ea2a4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea2a0) {
            ctx->pc = 0x3EA2C0u;
            goto label_3ea2c0;
        }
    }
    ctx->pc = 0x3EA2A8u;
label_3ea2a8:
    // 0x3ea2a8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3ea2a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3ea2ac:
    // 0x3ea2ac: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3ea2b0:
    if (ctx->pc == 0x3EA2B0u) {
        ctx->pc = 0x3EA2B4u;
        goto label_3ea2b4;
    }
    ctx->pc = 0x3EA2ACu;
    {
        const bool branch_taken_0x3ea2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea2ac) {
            ctx->pc = 0x3EA2E0u;
            goto label_3ea2e0;
        }
    }
    ctx->pc = 0x3EA2B4u;
label_3ea2b4:
    // 0x3ea2b4: 0x10000020  b           . + 4 + (0x20 << 2)
label_3ea2b8:
    if (ctx->pc == 0x3EA2B8u) {
        ctx->pc = 0x3EA2B8u;
            // 0x3ea2b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EA2BCu;
        goto label_3ea2bc;
    }
    ctx->pc = 0x3EA2B4u;
    {
        const bool branch_taken_0x3ea2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA2B4u;
            // 0x3ea2b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea2b4) {
            ctx->pc = 0x3EA338u;
            goto label_3ea338;
        }
    }
    ctx->pc = 0x3EA2BCu;
label_3ea2bc:
    // 0x3ea2bc: 0x0  nop
    ctx->pc = 0x3ea2bcu;
    // NOP
label_3ea2c0:
    // 0x3ea2c0: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3ea2c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3ea2c4:
    // 0x3ea2c4: 0x91260000  lbu         $a2, 0x0($t1)
    ctx->pc = 0x3ea2c4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_3ea2c8:
    // 0x3ea2c8: 0x10c4ffdd  beq         $a2, $a0, . + 4 + (-0x23 << 2)
label_3ea2cc:
    if (ctx->pc == 0x3EA2CCu) {
        ctx->pc = 0x3EA2D0u;
        goto label_3ea2d0;
    }
    ctx->pc = 0x3EA2C8u;
    {
        const bool branch_taken_0x3ea2c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x3ea2c8) {
            ctx->pc = 0x3EA240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ea240;
        }
    }
    ctx->pc = 0x3EA2D0u;
label_3ea2d0:
    // 0x3ea2d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ea2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ea2d4:
    // 0x3ea2d4: 0x76202b  sltu        $a0, $v1, $s6
    ctx->pc = 0x3ea2d4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3ea2d8:
    // 0x3ea2d8: 0x1480ffd3  bnez        $a0, . + 4 + (-0x2D << 2)
label_3ea2dc:
    if (ctx->pc == 0x3EA2DCu) {
        ctx->pc = 0x3EA2E0u;
        goto label_3ea2e0;
    }
    ctx->pc = 0x3EA2D8u;
    {
        const bool branch_taken_0x3ea2d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea2d8) {
            ctx->pc = 0x3EA228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ea228;
        }
    }
    ctx->pc = 0x3EA2E0u;
label_3ea2e0:
    // 0x3ea2e0: 0x12e0000b  beqz        $s7, . + 4 + (0xB << 2)
label_3ea2e4:
    if (ctx->pc == 0x3EA2E4u) {
        ctx->pc = 0x3EA2E8u;
        goto label_3ea2e8;
    }
    ctx->pc = 0x3EA2E0u;
    {
        const bool branch_taken_0x3ea2e0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea2e0) {
            ctx->pc = 0x3EA310u;
            goto label_3ea310;
        }
    }
    ctx->pc = 0x3EA2E8u;
label_3ea2e8:
    // 0x3ea2e8: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x3ea2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_3ea2ec:
    // 0x3ea2ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ea2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ea2f0:
    // 0x3ea2f0: 0xc0fa458  jal         func_3E9160
label_3ea2f4:
    if (ctx->pc == 0x3EA2F4u) {
        ctx->pc = 0x3EA2F4u;
            // 0x3ea2f4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EA2F8u;
        goto label_3ea2f8;
    }
    ctx->pc = 0x3EA2F0u;
    SET_GPR_U32(ctx, 31, 0x3EA2F8u);
    ctx->pc = 0x3EA2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA2F0u;
            // 0x3ea2f4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9160u;
    if (runtime->hasFunction(0x3E9160u)) {
        auto targetFn = runtime->lookupFunction(0x3E9160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA2F8u; }
        if (ctx->pc != 0x3EA2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9160_0x3e9160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA2F8u; }
        if (ctx->pc != 0x3EA2F8u) { return; }
    }
    ctx->pc = 0x3EA2F8u;
label_3ea2f8:
    // 0x3ea2f8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3ea2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3ea2fc:
    // 0x3ea2fc: 0x3d7f023  subu        $fp, $fp, $s7
    ctx->pc = 0x3ea2fcu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
label_3ea300:
    // 0x3ea300: 0x2d7b021  addu        $s6, $s6, $s7
    ctx->pc = 0x3ea300u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
label_3ea304:
    // 0x3ea304: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x3ea304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_3ea308:
    // 0x3ea308: 0x10000009  b           . + 4 + (0x9 << 2)
label_3ea30c:
    if (ctx->pc == 0x3EA30Cu) {
        ctx->pc = 0x3EA30Cu;
            // 0x3ea30c: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x3EA310u;
        goto label_3ea310;
    }
    ctx->pc = 0x3EA308u;
    {
        const bool branch_taken_0x3ea308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA308u;
            // 0x3ea30c: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea308) {
            ctx->pc = 0x3EA330u;
            goto label_3ea330;
        }
    }
    ctx->pc = 0x3EA310u;
label_3ea310:
    // 0x3ea310: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x3ea310u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3ea314:
    // 0x3ea314: 0xc0fa44c  jal         func_3E9130
label_3ea318:
    if (ctx->pc == 0x3EA318u) {
        ctx->pc = 0x3EA318u;
            // 0x3ea318: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EA31Cu;
        goto label_3ea31c;
    }
    ctx->pc = 0x3EA314u;
    SET_GPR_U32(ctx, 31, 0x3EA31Cu);
    ctx->pc = 0x3EA318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA314u;
            // 0x3ea318: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9130u;
    if (runtime->hasFunction(0x3E9130u)) {
        auto targetFn = runtime->lookupFunction(0x3E9130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA31Cu; }
        if (ctx->pc != 0x3EA31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9130_0x3e9130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA31Cu; }
        if (ctx->pc != 0x3EA31Cu) { return; }
    }
    ctx->pc = 0x3EA31Cu;
label_3ea31c:
    // 0x3ea31c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x3ea31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_3ea320:
    // 0x3ea320: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x3ea320u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_3ea324:
    // 0x3ea324: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3ea324u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3ea328:
    // 0x3ea328: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ea328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ea32c:
    // 0x3ea32c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x3ea32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_3ea330:
    // 0x3ea330: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3ea330u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3ea334:
    // 0x3ea334: 0x0  nop
    ctx->pc = 0x3ea334u;
    // NOP
label_3ea338:
    // 0x3ea338: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3ea33c:
    if (ctx->pc == 0x3EA33Cu) {
        ctx->pc = 0x3EA340u;
        goto label_3ea340;
    }
    ctx->pc = 0x3EA338u;
    {
        const bool branch_taken_0x3ea338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea338) {
            ctx->pc = 0x3EA348u;
            goto label_3ea348;
        }
    }
    ctx->pc = 0x3EA340u;
label_3ea340:
    // 0x3ea340: 0xafbe00dc  sw          $fp, 0xDC($sp)
    ctx->pc = 0x3ea340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 30));
label_3ea344:
    // 0x3ea344: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3ea344u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea348:
    // 0x3ea348: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x3ea348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ea34c:
    // 0x3ea34c: 0x106000a8  beqz        $v1, . + 4 + (0xA8 << 2)
label_3ea350:
    if (ctx->pc == 0x3EA350u) {
        ctx->pc = 0x3EA354u;
        goto label_3ea354;
    }
    ctx->pc = 0x3EA34Cu;
    {
        const bool branch_taken_0x3ea34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea34c) {
            ctx->pc = 0x3EA5F0u;
            goto label_3ea5f0;
        }
    }
    ctx->pc = 0x3EA354u;
label_3ea354:
    // 0x3ea354: 0x92a20054  lbu         $v0, 0x54($s5)
    ctx->pc = 0x3ea354u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 84)));
label_3ea358:
    // 0x3ea358: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_3ea35c:
    if (ctx->pc == 0x3EA35Cu) {
        ctx->pc = 0x3EA360u;
        goto label_3ea360;
    }
    ctx->pc = 0x3EA358u;
    {
        const bool branch_taken_0x3ea358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea358) {
            ctx->pc = 0x3EA3E0u;
            goto label_3ea3e0;
        }
    }
    ctx->pc = 0x3EA360u;
label_3ea360:
    // 0x3ea360: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_3ea364:
    if (ctx->pc == 0x3EA364u) {
        ctx->pc = 0x3EA368u;
        goto label_3ea368;
    }
    ctx->pc = 0x3EA360u;
    {
        const bool branch_taken_0x3ea360 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3ea360) {
            ctx->pc = 0x3EA370u;
            goto label_3ea370;
        }
    }
    ctx->pc = 0x3EA368u;
label_3ea368:
    // 0x3ea368: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_3ea36c:
    if (ctx->pc == 0x3EA36Cu) {
        ctx->pc = 0x3EA36Cu;
            // 0x3ea36c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EA370u;
        goto label_3ea370;
    }
    ctx->pc = 0x3EA368u;
    {
        const bool branch_taken_0x3ea368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA368u;
            // 0x3ea36c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea368) {
            ctx->pc = 0x3EA5F8u;
            goto label_3ea5f8;
        }
    }
    ctx->pc = 0x3EA370u;
label_3ea370:
    // 0x3ea370: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x3ea370u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3ea374:
    // 0x3ea374: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_3ea378:
    if (ctx->pc == 0x3EA378u) {
        ctx->pc = 0x3EA37Cu;
        goto label_3ea37c;
    }
    ctx->pc = 0x3EA374u;
    {
        const bool branch_taken_0x3ea374 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea374) {
            ctx->pc = 0x3EA3A8u;
            goto label_3ea3a8;
        }
    }
    ctx->pc = 0x3EA37Cu;
label_3ea37c:
    // 0x3ea37c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3ea37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea380:
    // 0x3ea380: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3ea380u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea384:
    // 0x3ea384: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x3ea384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_3ea388:
    // 0x3ea388: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ea388u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ea38c:
    // 0x3ea38c: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3ea38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ea390:
    // 0x3ea390: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3ea390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3ea394:
    // 0x3ea394: 0xaea2004c  sw          $v0, 0x4C($s5)
    ctx->pc = 0x3ea394u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
label_3ea398:
    // 0x3ea398: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3ea398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea39c:
    // 0x3ea39c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ea39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ea3a0:
    // 0x3ea3a0: 0x1000000d  b           . + 4 + (0xD << 2)
label_3ea3a4:
    if (ctx->pc == 0x3EA3A4u) {
        ctx->pc = 0x3EA3A4u;
            // 0x3ea3a4: 0xaea20050  sw          $v0, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x3EA3A8u;
        goto label_3ea3a8;
    }
    ctx->pc = 0x3EA3A0u;
    {
        const bool branch_taken_0x3ea3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA3A0u;
            // 0x3ea3a4: 0xaea20050  sw          $v0, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea3a0) {
            ctx->pc = 0x3EA3D8u;
            goto label_3ea3d8;
        }
    }
    ctx->pc = 0x3EA3A8u;
label_3ea3a8:
    // 0x3ea3a8: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3ea3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea3ac:
    // 0x3ea3ac: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x3ea3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3ea3b0:
    // 0x3ea3b0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ea3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ea3b4:
    // 0x3ea3b4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3ea3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ea3b8:
    // 0x3ea3b8: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3ea3b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ea3bc:
    // 0x3ea3bc: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3ea3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3ea3c0:
    // 0x3ea3c0: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x3ea3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_3ea3c4:
    // 0x3ea3c4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ea3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ea3c8:
    // 0x3ea3c8: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3ea3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ea3cc:
    // 0x3ea3cc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3ea3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ea3d0:
    // 0x3ea3d0: 0x30510007  andi        $s1, $v0, 0x7
    ctx->pc = 0x3ea3d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3ea3d4:
    // 0x3ea3d4: 0x0  nop
    ctx->pc = 0x3ea3d4u;
    // NOP
label_3ea3d8:
    // 0x3ea3d8: 0xa2a00054  sb          $zero, 0x54($s5)
    ctx->pc = 0x3ea3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 0));
label_3ea3dc:
    // 0x3ea3dc: 0x0  nop
    ctx->pc = 0x3ea3dcu;
    // NOP
label_3ea3e0:
    // 0x3ea3e0: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3ea3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ea3e4:
    // 0x3ea3e4: 0x10a00082  beqz        $a1, . + 4 + (0x82 << 2)
label_3ea3e8:
    if (ctx->pc == 0x3EA3E8u) {
        ctx->pc = 0x3EA3ECu;
        goto label_3ea3ec;
    }
    ctx->pc = 0x3EA3E4u;
    {
        const bool branch_taken_0x3ea3e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea3e4) {
            ctx->pc = 0x3EA5F0u;
            goto label_3ea5f0;
        }
    }
    ctx->pc = 0x3EA3ECu;
label_3ea3ec:
    // 0x3ea3ec: 0x0  nop
    ctx->pc = 0x3ea3ecu;
    // NOP
label_3ea3f0:
    // 0x3ea3f0: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_3ea3f4:
    if (ctx->pc == 0x3EA3F4u) {
        ctx->pc = 0x3EA3F8u;
        goto label_3ea3f8;
    }
    ctx->pc = 0x3EA3F0u;
    {
        const bool branch_taken_0x3ea3f0 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3ea3f0) {
            ctx->pc = 0x3EA400u;
            goto label_3ea400;
        }
    }
    ctx->pc = 0x3EA3F8u;
label_3ea3f8:
    // 0x3ea3f8: 0x1000007f  b           . + 4 + (0x7F << 2)
label_3ea3fc:
    if (ctx->pc == 0x3EA3FCu) {
        ctx->pc = 0x3EA3FCu;
            // 0x3ea3fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EA400u;
        goto label_3ea400;
    }
    ctx->pc = 0x3EA3F8u;
    {
        const bool branch_taken_0x3ea3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA3F8u;
            // 0x3ea3fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea3f8) {
            ctx->pc = 0x3EA5F8u;
            goto label_3ea5f8;
        }
    }
    ctx->pc = 0x3EA400u;
label_3ea400:
    // 0x3ea400: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x3ea400u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3ea404:
    // 0x3ea404: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
label_3ea408:
    if (ctx->pc == 0x3EA408u) {
        ctx->pc = 0x3EA40Cu;
        goto label_3ea40c;
    }
    ctx->pc = 0x3EA404u;
    {
        const bool branch_taken_0x3ea404 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea404) {
            ctx->pc = 0x3EA4C0u;
            goto label_3ea4c0;
        }
    }
    ctx->pc = 0x3EA40Cu;
label_3ea40c:
    // 0x3ea40c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ea40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ea410:
    // 0x3ea410: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_3ea414:
    if (ctx->pc == 0x3EA414u) {
        ctx->pc = 0x3EA418u;
        goto label_3ea418;
    }
    ctx->pc = 0x3EA410u;
    {
        const bool branch_taken_0x3ea410 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ea410) {
            ctx->pc = 0x3EA440u;
            goto label_3ea440;
        }
    }
    ctx->pc = 0x3EA418u;
label_3ea418:
    // 0x3ea418: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3ea418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea41c:
    // 0x3ea41c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ea41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ea420:
    // 0x3ea420: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ea420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ea424:
    // 0x3ea424: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3ea424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3ea428:
    // 0x3ea428: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3ea428u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea42c:
    // 0x3ea42c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ea42cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ea430:
    // 0x3ea430: 0xc0aacd0  jal         func_2AB340
label_3ea434:
    if (ctx->pc == 0x3EA434u) {
        ctx->pc = 0x3EA434u;
            // 0x3ea434: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3EA438u;
        goto label_3ea438;
    }
    ctx->pc = 0x3EA430u;
    SET_GPR_U32(ctx, 31, 0x3EA438u);
    ctx->pc = 0x3EA434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA430u;
            // 0x3ea434: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB340u;
    if (runtime->hasFunction(0x2AB340u)) {
        auto targetFn = runtime->lookupFunction(0x2AB340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA438u; }
        if (ctx->pc != 0x3EA438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB340_0x2ab340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA438u; }
        if (ctx->pc != 0x3EA438u) { return; }
    }
    ctx->pc = 0x3EA438u;
label_3ea438:
    // 0x3ea438: 0x10000019  b           . + 4 + (0x19 << 2)
label_3ea43c:
    if (ctx->pc == 0x3EA43Cu) {
        ctx->pc = 0x3EA440u;
        goto label_3ea440;
    }
    ctx->pc = 0x3EA438u;
    {
        const bool branch_taken_0x3ea438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea438) {
            ctx->pc = 0x3EA4A0u;
            goto label_3ea4a0;
        }
    }
    ctx->pc = 0x3EA440u;
label_3ea440:
    // 0x3ea440: 0x8ea60050  lw          $a2, 0x50($s5)
    ctx->pc = 0x3ea440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea444:
    // 0x3ea444: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x3ea444u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3ea448:
    // 0x3ea448: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ea448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ea44c:
    // 0x3ea44c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3ea44cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3ea450:
    // 0x3ea450: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ea450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ea454:
    // 0x3ea454: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x3ea454u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3ea458:
    // 0x3ea458: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3ea458u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3ea45c:
    // 0x3ea45c: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x3ea45cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_3ea460:
    // 0x3ea460: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ea460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3ea464:
    // 0x3ea464: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ea464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3ea468:
    // 0x3ea468: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ea468u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ea46c:
    // 0x3ea46c: 0xc0aacd0  jal         func_2AB340
label_3ea470:
    if (ctx->pc == 0x3EA470u) {
        ctx->pc = 0x3EA470u;
            // 0x3ea470: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3EA474u;
        goto label_3ea474;
    }
    ctx->pc = 0x3EA46Cu;
    SET_GPR_U32(ctx, 31, 0x3EA474u);
    ctx->pc = 0x3EA470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA46Cu;
            // 0x3ea470: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB340u;
    if (runtime->hasFunction(0x2AB340u)) {
        auto targetFn = runtime->lookupFunction(0x2AB340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA474u; }
        if (ctx->pc != 0x3EA474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB340_0x2ab340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA474u; }
        if (ctx->pc != 0x3EA474u) { return; }
    }
    ctx->pc = 0x3EA474u;
label_3ea474:
    // 0x3ea474: 0x1a400006  blez        $s2, . + 4 + (0x6 << 2)
label_3ea478:
    if (ctx->pc == 0x3EA478u) {
        ctx->pc = 0x3EA47Cu;
        goto label_3ea47c;
    }
    ctx->pc = 0x3EA474u;
    {
        const bool branch_taken_0x3ea474 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3ea474) {
            ctx->pc = 0x3EA490u;
            goto label_3ea490;
        }
    }
    ctx->pc = 0x3EA47Cu;
label_3ea47c:
    // 0x3ea47c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3ea47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea480:
    // 0x3ea480: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3ea480u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea484:
    // 0x3ea484: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x3ea484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_3ea488:
    // 0x3ea488: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ea48c:
    if (ctx->pc == 0x3EA48Cu) {
        ctx->pc = 0x3EA48Cu;
            // 0x3ea48c: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3EA490u;
        goto label_3ea490;
    }
    ctx->pc = 0x3EA488u;
    {
        const bool branch_taken_0x3ea488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA488u;
            // 0x3ea48c: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea488) {
            ctx->pc = 0x3EA4A0u;
            goto label_3ea4a0;
        }
    }
    ctx->pc = 0x3EA490u;
label_3ea490:
    // 0x3ea490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ea490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ea494:
    // 0x3ea494: 0xa2a20054  sb          $v0, 0x54($s5)
    ctx->pc = 0x3ea494u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 2));
label_3ea498:
    // 0x3ea498: 0x10000057  b           . + 4 + (0x57 << 2)
label_3ea49c:
    if (ctx->pc == 0x3EA49Cu) {
        ctx->pc = 0x3EA49Cu;
            // 0x3ea49c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EA4A0u;
        goto label_3ea4a0;
    }
    ctx->pc = 0x3EA498u;
    {
        const bool branch_taken_0x3ea498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA498u;
            // 0x3ea49c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea498) {
            ctx->pc = 0x3EA5F8u;
            goto label_3ea5f8;
        }
    }
    ctx->pc = 0x3EA4A0u;
label_3ea4a0:
    // 0x3ea4a0: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3ea4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea4a4:
    // 0x3ea4a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ea4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ea4a8:
    // 0x3ea4a8: 0xaea20050  sw          $v0, 0x50($s5)
    ctx->pc = 0x3ea4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
label_3ea4ac:
    // 0x3ea4ac: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3ea4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ea4b0:
    // 0x3ea4b0: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3ea4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3ea4b4:
    // 0x3ea4b4: 0x1000004a  b           . + 4 + (0x4A << 2)
label_3ea4b8:
    if (ctx->pc == 0x3EA4B8u) {
        ctx->pc = 0x3EA4B8u;
            // 0x3ea4b8: 0xaea2004c  sw          $v0, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x3EA4BCu;
        goto label_3ea4bc;
    }
    ctx->pc = 0x3EA4B4u;
    {
        const bool branch_taken_0x3ea4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA4B4u;
            // 0x3ea4b8: 0xaea2004c  sw          $v0, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea4b4) {
            ctx->pc = 0x3EA5E0u;
            goto label_3ea5e0;
        }
    }
    ctx->pc = 0x3EA4BCu;
label_3ea4bc:
    // 0x3ea4bc: 0x0  nop
    ctx->pc = 0x3ea4bcu;
    // NOP
label_3ea4c0:
    // 0x3ea4c0: 0x225082b  sltu        $at, $s1, $a1
    ctx->pc = 0x3ea4c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3ea4c4:
    // 0x3ea4c4: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_3ea4c8:
    if (ctx->pc == 0x3EA4C8u) {
        ctx->pc = 0x3EA4CCu;
        goto label_3ea4cc;
    }
    ctx->pc = 0x3EA4C4u;
    {
        const bool branch_taken_0x3ea4c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea4c4) {
            ctx->pc = 0x3EA550u;
            goto label_3ea550;
        }
    }
    ctx->pc = 0x3EA4CCu;
label_3ea4cc:
    // 0x3ea4cc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ea4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ea4d0:
    // 0x3ea4d0: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_3ea4d4:
    if (ctx->pc == 0x3EA4D4u) {
        ctx->pc = 0x3EA4D8u;
        goto label_3ea4d8;
    }
    ctx->pc = 0x3EA4D0u;
    {
        const bool branch_taken_0x3ea4d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ea4d0) {
            ctx->pc = 0x3EA4F8u;
            goto label_3ea4f8;
        }
    }
    ctx->pc = 0x3EA4D8u;
label_3ea4d8:
    // 0x3ea4d8: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3ea4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea4dc:
    // 0x3ea4dc: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x3ea4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3ea4e0:
    // 0x3ea4e0: 0x2251023  subu        $v0, $s1, $a1
    ctx->pc = 0x3ea4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3ea4e4:
    // 0x3ea4e4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3ea4e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ea4e8:
    // 0x3ea4e8: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x3ea4e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_3ea4ec:
    // 0x3ea4ec: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x3ea4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_3ea4f0:
    // 0x3ea4f0: 0x1000000b  b           . + 4 + (0xB << 2)
label_3ea4f4:
    if (ctx->pc == 0x3EA4F4u) {
        ctx->pc = 0x3EA4F4u;
            // 0x3ea4f4: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3EA4F8u;
        goto label_3ea4f8;
    }
    ctx->pc = 0x3EA4F0u;
    {
        const bool branch_taken_0x3ea4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA4F0u;
            // 0x3ea4f4: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea4f0) {
            ctx->pc = 0x3EA520u;
            goto label_3ea520;
        }
    }
    ctx->pc = 0x3EA4F8u;
label_3ea4f8:
    // 0x3ea4f8: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x3ea4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3ea4fc:
    // 0x3ea4fc: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x3ea4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3ea500:
    // 0x3ea500: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3ea500u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3ea504:
    // 0x3ea504: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x3ea504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea508:
    // 0x3ea508: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x3ea508u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3ea50c:
    // 0x3ea50c: 0x852007  srav        $a0, $a1, $a0
    ctx->pc = 0x3ea50cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_3ea510:
    // 0x3ea510: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x3ea510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_3ea514:
    // 0x3ea514: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ea514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3ea518:
    // 0x3ea518: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ea518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3ea51c:
    // 0x3ea51c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ea51cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ea520:
    // 0x3ea520: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3ea520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ea524:
    // 0x3ea524: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x3ea524u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3ea528:
    // 0x3ea528: 0x1e20002b  bgtz        $s1, . + 4 + (0x2B << 2)
label_3ea52c:
    if (ctx->pc == 0x3EA52Cu) {
        ctx->pc = 0x3EA530u;
        goto label_3ea530;
    }
    ctx->pc = 0x3EA528u;
    {
        const bool branch_taken_0x3ea528 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x3ea528) {
            ctx->pc = 0x3EA5D8u;
            goto label_3ea5d8;
        }
    }
    ctx->pc = 0x3EA530u;
label_3ea530:
    // 0x3ea530: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ea530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ea534:
    // 0x3ea534: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ea534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ea538:
    // 0x3ea538: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ea538u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3ea53c:
    // 0x3ea53c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3ea53cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3ea540:
    // 0x3ea540: 0xc0aacd0  jal         func_2AB340
label_3ea544:
    if (ctx->pc == 0x3EA544u) {
        ctx->pc = 0x3EA544u;
            // 0x3ea544: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3EA548u;
        goto label_3ea548;
    }
    ctx->pc = 0x3EA540u;
    SET_GPR_U32(ctx, 31, 0x3EA548u);
    ctx->pc = 0x3EA544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA540u;
            // 0x3ea544: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB340u;
    if (runtime->hasFunction(0x2AB340u)) {
        auto targetFn = runtime->lookupFunction(0x2AB340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA548u; }
        if (ctx->pc != 0x3EA548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB340_0x2ab340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA548u; }
        if (ctx->pc != 0x3EA548u) { return; }
    }
    ctx->pc = 0x3EA548u;
label_3ea548:
    // 0x3ea548: 0x10000023  b           . + 4 + (0x23 << 2)
label_3ea54c:
    if (ctx->pc == 0x3EA54Cu) {
        ctx->pc = 0x3EA550u;
        goto label_3ea550;
    }
    ctx->pc = 0x3EA548u;
    {
        const bool branch_taken_0x3ea548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea548) {
            ctx->pc = 0x3EA5D8u;
            goto label_3ea5d8;
        }
    }
    ctx->pc = 0x3EA550u;
label_3ea550:
    // 0x3ea550: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3ea550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea554:
    // 0x3ea554: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3ea554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ea558:
    // 0x3ea558: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3ea558u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3ea55c:
    // 0x3ea55c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x3ea55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3ea560:
    // 0x3ea560: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ea560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ea564:
    // 0x3ea564: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x3ea564u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3ea568:
    // 0x3ea568: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3ea568u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3ea56c:
    // 0x3ea56c: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x3ea56cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_3ea570:
    // 0x3ea570: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ea570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ea574:
    // 0x3ea574: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ea574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3ea578:
    // 0x3ea578: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ea578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3ea57c:
    // 0x3ea57c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ea57cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ea580:
    // 0x3ea580: 0xc0aacd0  jal         func_2AB340
label_3ea584:
    if (ctx->pc == 0x3EA584u) {
        ctx->pc = 0x3EA584u;
            // 0x3ea584: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3EA588u;
        goto label_3ea588;
    }
    ctx->pc = 0x3EA580u;
    SET_GPR_U32(ctx, 31, 0x3EA588u);
    ctx->pc = 0x3EA584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA580u;
            // 0x3ea584: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB340u;
    if (runtime->hasFunction(0x2AB340u)) {
        auto targetFn = runtime->lookupFunction(0x2AB340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA588u; }
        if (ctx->pc != 0x3EA588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB340_0x2ab340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EA588u; }
        if (ctx->pc != 0x3EA588u) { return; }
    }
    ctx->pc = 0x3EA588u;
label_3ea588:
    // 0x3ea588: 0x1a40000f  blez        $s2, . + 4 + (0xF << 2)
label_3ea58c:
    if (ctx->pc == 0x3EA58Cu) {
        ctx->pc = 0x3EA590u;
        goto label_3ea590;
    }
    ctx->pc = 0x3EA588u;
    {
        const bool branch_taken_0x3ea588 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3ea588) {
            ctx->pc = 0x3EA5C8u;
            goto label_3ea5c8;
        }
    }
    ctx->pc = 0x3EA590u;
label_3ea590:
    // 0x3ea590: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3ea590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ea594:
    // 0x3ea594: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3ea594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ea598:
    // 0x3ea598: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3ea598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3ea59c:
    // 0x3ea59c: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3ea59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3ea5a0:
    // 0x3ea5a0: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x3ea5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3ea5a4:
    // 0x3ea5a4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3ea5a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea5a8:
    // 0x3ea5a8: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x3ea5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_3ea5ac:
    // 0x3ea5ac: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x3ea5acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_3ea5b0:
    // 0x3ea5b0: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x3ea5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_3ea5b4:
    // 0x3ea5b4: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ea5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ea5b8:
    // 0x3ea5b8: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3ea5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ea5bc:
    // 0x3ea5bc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3ea5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ea5c0:
    // 0x3ea5c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ea5c4:
    if (ctx->pc == 0x3EA5C4u) {
        ctx->pc = 0x3EA5C4u;
            // 0x3ea5c4: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->pc = 0x3EA5C8u;
        goto label_3ea5c8;
    }
    ctx->pc = 0x3EA5C0u;
    {
        const bool branch_taken_0x3ea5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA5C0u;
            // 0x3ea5c4: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea5c0) {
            ctx->pc = 0x3EA5D8u;
            goto label_3ea5d8;
        }
    }
    ctx->pc = 0x3EA5C8u;
label_3ea5c8:
    // 0x3ea5c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ea5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ea5cc:
    // 0x3ea5cc: 0xa2a20054  sb          $v0, 0x54($s5)
    ctx->pc = 0x3ea5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 2));
label_3ea5d0:
    // 0x3ea5d0: 0x10000009  b           . + 4 + (0x9 << 2)
label_3ea5d4:
    if (ctx->pc == 0x3EA5D4u) {
        ctx->pc = 0x3EA5D4u;
            // 0x3ea5d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EA5D8u;
        goto label_3ea5d8;
    }
    ctx->pc = 0x3EA5D0u;
    {
        const bool branch_taken_0x3ea5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA5D0u;
            // 0x3ea5d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea5d0) {
            ctx->pc = 0x3EA5F8u;
            goto label_3ea5f8;
        }
    }
    ctx->pc = 0x3EA5D8u;
label_3ea5d8:
    // 0x3ea5d8: 0xaea0004c  sw          $zero, 0x4C($s5)
    ctx->pc = 0x3ea5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 0));
label_3ea5dc:
    // 0x3ea5dc: 0x0  nop
    ctx->pc = 0x3ea5dcu;
    // NOP
label_3ea5e0:
    // 0x3ea5e0: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3ea5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3ea5e4:
    // 0x3ea5e4: 0x14a0ff82  bnez        $a1, . + 4 + (-0x7E << 2)
label_3ea5e8:
    if (ctx->pc == 0x3EA5E8u) {
        ctx->pc = 0x3EA5ECu;
        goto label_3ea5ec;
    }
    ctx->pc = 0x3EA5E4u;
    {
        const bool branch_taken_0x3ea5e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea5e4) {
            ctx->pc = 0x3EA3F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ea3f0;
        }
    }
    ctx->pc = 0x3EA5ECu;
label_3ea5ec:
    // 0x3ea5ec: 0x0  nop
    ctx->pc = 0x3ea5ecu;
    // NOP
label_3ea5f0:
    // 0x3ea5f0: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3ea5f0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3ea5f4:
    // 0x3ea5f4: 0x0  nop
    ctx->pc = 0x3ea5f4u;
    // NOP
label_3ea5f8:
    // 0x3ea5f8: 0x1040fe1f  beqz        $v0, . + 4 + (-0x1E1 << 2)
label_3ea5fc:
    if (ctx->pc == 0x3EA5FCu) {
        ctx->pc = 0x3EA600u;
        goto label_3ea600;
    }
    ctx->pc = 0x3EA5F8u;
    {
        const bool branch_taken_0x3ea5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea5f8) {
            ctx->pc = 0x3E9E78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e9e78;
        }
    }
    ctx->pc = 0x3EA600u;
label_3ea600:
    // 0x3ea600: 0x1bc00005  blez        $fp, . + 4 + (0x5 << 2)
label_3ea604:
    if (ctx->pc == 0x3EA604u) {
        ctx->pc = 0x3EA608u;
        goto label_3ea608;
    }
    ctx->pc = 0x3EA600u;
    {
        const bool branch_taken_0x3ea600 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x3ea600) {
            ctx->pc = 0x3EA618u;
            goto label_3ea618;
        }
    }
    ctx->pc = 0x3EA608u;
label_3ea608:
    // 0x3ea608: 0x1e40fef9  bgtz        $s2, . + 4 + (-0x107 << 2)
label_3ea60c:
    if (ctx->pc == 0x3EA60Cu) {
        ctx->pc = 0x3EA610u;
        goto label_3ea610;
    }
    ctx->pc = 0x3EA608u;
    {
        const bool branch_taken_0x3ea608 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3ea608) {
            ctx->pc = 0x3EA1F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ea1f0;
        }
    }
    ctx->pc = 0x3EA610u;
label_3ea610:
    // 0x3ea610: 0x1000fe19  b           . + 4 + (-0x1E7 << 2)
label_3ea614:
    if (ctx->pc == 0x3EA614u) {
        ctx->pc = 0x3EA618u;
        goto label_3ea618;
    }
    ctx->pc = 0x3EA610u;
    {
        const bool branch_taken_0x3ea610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea610) {
            ctx->pc = 0x3E9E78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e9e78;
        }
    }
    ctx->pc = 0x3EA618u;
label_3ea618:
    // 0x3ea618: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3ea618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3ea61c:
    // 0x3ea61c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x3ea61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3ea620:
    // 0x3ea620: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3ea620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ea624:
    // 0x3ea624: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ea624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ea628:
    // 0x3ea628: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3ea62c:
    if (ctx->pc == 0x3EA62Cu) {
        ctx->pc = 0x3EA630u;
        goto label_3ea630;
    }
    ctx->pc = 0x3EA628u;
    {
        const bool branch_taken_0x3ea628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea628) {
            ctx->pc = 0x3EA650u;
            goto label_3ea650;
        }
    }
    ctx->pc = 0x3EA630u;
label_3ea630:
    // 0x3ea630: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3ea630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_3ea634:
    // 0x3ea634: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3ea634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3ea638:
    // 0x3ea638: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x3ea638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3ea63c:
    // 0x3ea63c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3ea63cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3ea640:
    // 0x3ea640: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3ea644:
    if (ctx->pc == 0x3EA644u) {
        ctx->pc = 0x3EA648u;
        goto label_3ea648;
    }
    ctx->pc = 0x3EA640u;
    {
        const bool branch_taken_0x3ea640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea640) {
            ctx->pc = 0x3EA650u;
            goto label_3ea650;
        }
    }
    ctx->pc = 0x3EA648u;
label_3ea648:
    // 0x3ea648: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ea64c:
    if (ctx->pc == 0x3EA64Cu) {
        ctx->pc = 0x3EA64Cu;
            // 0x3ea64c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3EA650u;
        goto label_3ea650;
    }
    ctx->pc = 0x3EA648u;
    {
        const bool branch_taken_0x3ea648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA648u;
            // 0x3ea64c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea648) {
            ctx->pc = 0x3EA658u;
            goto label_3ea658;
        }
    }
    ctx->pc = 0x3EA650u;
label_3ea650:
    // 0x3ea650: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ea650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea654:
    // 0x3ea654: 0x0  nop
    ctx->pc = 0x3ea654u;
    // NOP
label_3ea658:
    // 0x3ea658: 0x1040fdb4  beqz        $v0, . + 4 + (-0x24C << 2)
label_3ea65c:
    if (ctx->pc == 0x3EA65Cu) {
        ctx->pc = 0x3EA660u;
        goto label_3ea660;
    }
    ctx->pc = 0x3EA658u;
    {
        const bool branch_taken_0x3ea658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea658) {
            ctx->pc = 0x3E9D2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e9d2c;
        }
    }
    ctx->pc = 0x3EA660u;
label_3ea660:
    // 0x3ea660: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x3ea660u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_3ea664:
    // 0x3ea664: 0x5020000f  beql        $at, $zero, . + 4 + (0xF << 2)
label_3ea668:
    if (ctx->pc == 0x3EA668u) {
        ctx->pc = 0x3EA668u;
            // 0x3ea668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3EA66Cu;
        goto label_3ea66c;
    }
    ctx->pc = 0x3EA664u;
    {
        const bool branch_taken_0x3ea664 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea664) {
            ctx->pc = 0x3EA668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA664u;
            // 0x3ea668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EA6A4u;
            goto label_3ea6a4;
        }
    }
    ctx->pc = 0x3EA66Cu;
label_3ea66c:
    // 0x3ea66c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3ea66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ea670:
    // 0x3ea670: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ea670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ea674:
    // 0x3ea674: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ea674u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ea678:
    // 0x3ea678: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3ea678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3ea67c:
    // 0x3ea67c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ea67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ea680:
    // 0x3ea680: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x3ea680u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_3ea684:
    // 0x3ea684: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x3ea684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ea688:
    // 0x3ea688: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x3ea688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ea68c:
    // 0x3ea68c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3ea68cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ea690:
    // 0x3ea690: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3ea694:
    if (ctx->pc == 0x3EA694u) {
        ctx->pc = 0x3EA698u;
        goto label_3ea698;
    }
    ctx->pc = 0x3EA690u;
    {
        const bool branch_taken_0x3ea690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ea690) {
            ctx->pc = 0x3EA6A0u;
            goto label_3ea6a0;
        }
    }
    ctx->pc = 0x3EA698u;
label_3ea698:
    // 0x3ea698: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3ea698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3ea69c:
    // 0x3ea69c: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ea69cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ea6a0:
    // 0x3ea6a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ea6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ea6a4:
    // 0x3ea6a4: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x3ea6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_3ea6a8:
    // 0x3ea6a8: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3ea6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3ea6ac:
    // 0x3ea6ac: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3ea6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3ea6b0:
    // 0x3ea6b0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3ea6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3ea6b4:
    // 0x3ea6b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3ea6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3ea6b8:
    // 0x3ea6b8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3ea6b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ea6bc:
    // 0x3ea6bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3ea6bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ea6c0:
    // 0x3ea6c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3ea6c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ea6c4:
    // 0x3ea6c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ea6c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ea6c8:
    // 0x3ea6c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ea6c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ea6cc:
    // 0x3ea6cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ea6ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ea6d0:
    // 0x3ea6d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ea6d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ea6d4:
    // 0x3ea6d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ea6d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ea6d8:
    // 0x3ea6d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ea6d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ea6dc:
    // 0x3ea6dc: 0x3e00008  jr          $ra
label_3ea6e0:
    if (ctx->pc == 0x3EA6E0u) {
        ctx->pc = 0x3EA6E0u;
            // 0x3ea6e0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3EA6E4u;
        goto label_3ea6e4;
    }
    ctx->pc = 0x3EA6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EA6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EA6DCu;
            // 0x3ea6e0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EA6E4u;
label_3ea6e4:
    // 0x3ea6e4: 0x0  nop
    ctx->pc = 0x3ea6e4u;
    // NOP
label_3ea6e8:
    // 0x3ea6e8: 0x0  nop
    ctx->pc = 0x3ea6e8u;
    // NOP
label_3ea6ec:
    // 0x3ea6ec: 0x0  nop
    ctx->pc = 0x3ea6ecu;
    // NOP
}
