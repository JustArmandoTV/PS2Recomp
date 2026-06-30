#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F9BD0
// Address: 0x1f9bd0 - 0x1fa4d0
void sub_001F9BD0_0x1f9bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9BD0_0x1f9bd0");
#endif

    switch (ctx->pc) {
        case 0x1f9bd0u: goto label_1f9bd0;
        case 0x1f9bd4u: goto label_1f9bd4;
        case 0x1f9bd8u: goto label_1f9bd8;
        case 0x1f9bdcu: goto label_1f9bdc;
        case 0x1f9be0u: goto label_1f9be0;
        case 0x1f9be4u: goto label_1f9be4;
        case 0x1f9be8u: goto label_1f9be8;
        case 0x1f9becu: goto label_1f9bec;
        case 0x1f9bf0u: goto label_1f9bf0;
        case 0x1f9bf4u: goto label_1f9bf4;
        case 0x1f9bf8u: goto label_1f9bf8;
        case 0x1f9bfcu: goto label_1f9bfc;
        case 0x1f9c00u: goto label_1f9c00;
        case 0x1f9c04u: goto label_1f9c04;
        case 0x1f9c08u: goto label_1f9c08;
        case 0x1f9c0cu: goto label_1f9c0c;
        case 0x1f9c10u: goto label_1f9c10;
        case 0x1f9c14u: goto label_1f9c14;
        case 0x1f9c18u: goto label_1f9c18;
        case 0x1f9c1cu: goto label_1f9c1c;
        case 0x1f9c20u: goto label_1f9c20;
        case 0x1f9c24u: goto label_1f9c24;
        case 0x1f9c28u: goto label_1f9c28;
        case 0x1f9c2cu: goto label_1f9c2c;
        case 0x1f9c30u: goto label_1f9c30;
        case 0x1f9c34u: goto label_1f9c34;
        case 0x1f9c38u: goto label_1f9c38;
        case 0x1f9c3cu: goto label_1f9c3c;
        case 0x1f9c40u: goto label_1f9c40;
        case 0x1f9c44u: goto label_1f9c44;
        case 0x1f9c48u: goto label_1f9c48;
        case 0x1f9c4cu: goto label_1f9c4c;
        case 0x1f9c50u: goto label_1f9c50;
        case 0x1f9c54u: goto label_1f9c54;
        case 0x1f9c58u: goto label_1f9c58;
        case 0x1f9c5cu: goto label_1f9c5c;
        case 0x1f9c60u: goto label_1f9c60;
        case 0x1f9c64u: goto label_1f9c64;
        case 0x1f9c68u: goto label_1f9c68;
        case 0x1f9c6cu: goto label_1f9c6c;
        case 0x1f9c70u: goto label_1f9c70;
        case 0x1f9c74u: goto label_1f9c74;
        case 0x1f9c78u: goto label_1f9c78;
        case 0x1f9c7cu: goto label_1f9c7c;
        case 0x1f9c80u: goto label_1f9c80;
        case 0x1f9c84u: goto label_1f9c84;
        case 0x1f9c88u: goto label_1f9c88;
        case 0x1f9c8cu: goto label_1f9c8c;
        case 0x1f9c90u: goto label_1f9c90;
        case 0x1f9c94u: goto label_1f9c94;
        case 0x1f9c98u: goto label_1f9c98;
        case 0x1f9c9cu: goto label_1f9c9c;
        case 0x1f9ca0u: goto label_1f9ca0;
        case 0x1f9ca4u: goto label_1f9ca4;
        case 0x1f9ca8u: goto label_1f9ca8;
        case 0x1f9cacu: goto label_1f9cac;
        case 0x1f9cb0u: goto label_1f9cb0;
        case 0x1f9cb4u: goto label_1f9cb4;
        case 0x1f9cb8u: goto label_1f9cb8;
        case 0x1f9cbcu: goto label_1f9cbc;
        case 0x1f9cc0u: goto label_1f9cc0;
        case 0x1f9cc4u: goto label_1f9cc4;
        case 0x1f9cc8u: goto label_1f9cc8;
        case 0x1f9cccu: goto label_1f9ccc;
        case 0x1f9cd0u: goto label_1f9cd0;
        case 0x1f9cd4u: goto label_1f9cd4;
        case 0x1f9cd8u: goto label_1f9cd8;
        case 0x1f9cdcu: goto label_1f9cdc;
        case 0x1f9ce0u: goto label_1f9ce0;
        case 0x1f9ce4u: goto label_1f9ce4;
        case 0x1f9ce8u: goto label_1f9ce8;
        case 0x1f9cecu: goto label_1f9cec;
        case 0x1f9cf0u: goto label_1f9cf0;
        case 0x1f9cf4u: goto label_1f9cf4;
        case 0x1f9cf8u: goto label_1f9cf8;
        case 0x1f9cfcu: goto label_1f9cfc;
        case 0x1f9d00u: goto label_1f9d00;
        case 0x1f9d04u: goto label_1f9d04;
        case 0x1f9d08u: goto label_1f9d08;
        case 0x1f9d0cu: goto label_1f9d0c;
        case 0x1f9d10u: goto label_1f9d10;
        case 0x1f9d14u: goto label_1f9d14;
        case 0x1f9d18u: goto label_1f9d18;
        case 0x1f9d1cu: goto label_1f9d1c;
        case 0x1f9d20u: goto label_1f9d20;
        case 0x1f9d24u: goto label_1f9d24;
        case 0x1f9d28u: goto label_1f9d28;
        case 0x1f9d2cu: goto label_1f9d2c;
        case 0x1f9d30u: goto label_1f9d30;
        case 0x1f9d34u: goto label_1f9d34;
        case 0x1f9d38u: goto label_1f9d38;
        case 0x1f9d3cu: goto label_1f9d3c;
        case 0x1f9d40u: goto label_1f9d40;
        case 0x1f9d44u: goto label_1f9d44;
        case 0x1f9d48u: goto label_1f9d48;
        case 0x1f9d4cu: goto label_1f9d4c;
        case 0x1f9d50u: goto label_1f9d50;
        case 0x1f9d54u: goto label_1f9d54;
        case 0x1f9d58u: goto label_1f9d58;
        case 0x1f9d5cu: goto label_1f9d5c;
        case 0x1f9d60u: goto label_1f9d60;
        case 0x1f9d64u: goto label_1f9d64;
        case 0x1f9d68u: goto label_1f9d68;
        case 0x1f9d6cu: goto label_1f9d6c;
        case 0x1f9d70u: goto label_1f9d70;
        case 0x1f9d74u: goto label_1f9d74;
        case 0x1f9d78u: goto label_1f9d78;
        case 0x1f9d7cu: goto label_1f9d7c;
        case 0x1f9d80u: goto label_1f9d80;
        case 0x1f9d84u: goto label_1f9d84;
        case 0x1f9d88u: goto label_1f9d88;
        case 0x1f9d8cu: goto label_1f9d8c;
        case 0x1f9d90u: goto label_1f9d90;
        case 0x1f9d94u: goto label_1f9d94;
        case 0x1f9d98u: goto label_1f9d98;
        case 0x1f9d9cu: goto label_1f9d9c;
        case 0x1f9da0u: goto label_1f9da0;
        case 0x1f9da4u: goto label_1f9da4;
        case 0x1f9da8u: goto label_1f9da8;
        case 0x1f9dacu: goto label_1f9dac;
        case 0x1f9db0u: goto label_1f9db0;
        case 0x1f9db4u: goto label_1f9db4;
        case 0x1f9db8u: goto label_1f9db8;
        case 0x1f9dbcu: goto label_1f9dbc;
        case 0x1f9dc0u: goto label_1f9dc0;
        case 0x1f9dc4u: goto label_1f9dc4;
        case 0x1f9dc8u: goto label_1f9dc8;
        case 0x1f9dccu: goto label_1f9dcc;
        case 0x1f9dd0u: goto label_1f9dd0;
        case 0x1f9dd4u: goto label_1f9dd4;
        case 0x1f9dd8u: goto label_1f9dd8;
        case 0x1f9ddcu: goto label_1f9ddc;
        case 0x1f9de0u: goto label_1f9de0;
        case 0x1f9de4u: goto label_1f9de4;
        case 0x1f9de8u: goto label_1f9de8;
        case 0x1f9decu: goto label_1f9dec;
        case 0x1f9df0u: goto label_1f9df0;
        case 0x1f9df4u: goto label_1f9df4;
        case 0x1f9df8u: goto label_1f9df8;
        case 0x1f9dfcu: goto label_1f9dfc;
        case 0x1f9e00u: goto label_1f9e00;
        case 0x1f9e04u: goto label_1f9e04;
        case 0x1f9e08u: goto label_1f9e08;
        case 0x1f9e0cu: goto label_1f9e0c;
        case 0x1f9e10u: goto label_1f9e10;
        case 0x1f9e14u: goto label_1f9e14;
        case 0x1f9e18u: goto label_1f9e18;
        case 0x1f9e1cu: goto label_1f9e1c;
        case 0x1f9e20u: goto label_1f9e20;
        case 0x1f9e24u: goto label_1f9e24;
        case 0x1f9e28u: goto label_1f9e28;
        case 0x1f9e2cu: goto label_1f9e2c;
        case 0x1f9e30u: goto label_1f9e30;
        case 0x1f9e34u: goto label_1f9e34;
        case 0x1f9e38u: goto label_1f9e38;
        case 0x1f9e3cu: goto label_1f9e3c;
        case 0x1f9e40u: goto label_1f9e40;
        case 0x1f9e44u: goto label_1f9e44;
        case 0x1f9e48u: goto label_1f9e48;
        case 0x1f9e4cu: goto label_1f9e4c;
        case 0x1f9e50u: goto label_1f9e50;
        case 0x1f9e54u: goto label_1f9e54;
        case 0x1f9e58u: goto label_1f9e58;
        case 0x1f9e5cu: goto label_1f9e5c;
        case 0x1f9e60u: goto label_1f9e60;
        case 0x1f9e64u: goto label_1f9e64;
        case 0x1f9e68u: goto label_1f9e68;
        case 0x1f9e6cu: goto label_1f9e6c;
        case 0x1f9e70u: goto label_1f9e70;
        case 0x1f9e74u: goto label_1f9e74;
        case 0x1f9e78u: goto label_1f9e78;
        case 0x1f9e7cu: goto label_1f9e7c;
        case 0x1f9e80u: goto label_1f9e80;
        case 0x1f9e84u: goto label_1f9e84;
        case 0x1f9e88u: goto label_1f9e88;
        case 0x1f9e8cu: goto label_1f9e8c;
        case 0x1f9e90u: goto label_1f9e90;
        case 0x1f9e94u: goto label_1f9e94;
        case 0x1f9e98u: goto label_1f9e98;
        case 0x1f9e9cu: goto label_1f9e9c;
        case 0x1f9ea0u: goto label_1f9ea0;
        case 0x1f9ea4u: goto label_1f9ea4;
        case 0x1f9ea8u: goto label_1f9ea8;
        case 0x1f9eacu: goto label_1f9eac;
        case 0x1f9eb0u: goto label_1f9eb0;
        case 0x1f9eb4u: goto label_1f9eb4;
        case 0x1f9eb8u: goto label_1f9eb8;
        case 0x1f9ebcu: goto label_1f9ebc;
        case 0x1f9ec0u: goto label_1f9ec0;
        case 0x1f9ec4u: goto label_1f9ec4;
        case 0x1f9ec8u: goto label_1f9ec8;
        case 0x1f9eccu: goto label_1f9ecc;
        case 0x1f9ed0u: goto label_1f9ed0;
        case 0x1f9ed4u: goto label_1f9ed4;
        case 0x1f9ed8u: goto label_1f9ed8;
        case 0x1f9edcu: goto label_1f9edc;
        case 0x1f9ee0u: goto label_1f9ee0;
        case 0x1f9ee4u: goto label_1f9ee4;
        case 0x1f9ee8u: goto label_1f9ee8;
        case 0x1f9eecu: goto label_1f9eec;
        case 0x1f9ef0u: goto label_1f9ef0;
        case 0x1f9ef4u: goto label_1f9ef4;
        case 0x1f9ef8u: goto label_1f9ef8;
        case 0x1f9efcu: goto label_1f9efc;
        case 0x1f9f00u: goto label_1f9f00;
        case 0x1f9f04u: goto label_1f9f04;
        case 0x1f9f08u: goto label_1f9f08;
        case 0x1f9f0cu: goto label_1f9f0c;
        case 0x1f9f10u: goto label_1f9f10;
        case 0x1f9f14u: goto label_1f9f14;
        case 0x1f9f18u: goto label_1f9f18;
        case 0x1f9f1cu: goto label_1f9f1c;
        case 0x1f9f20u: goto label_1f9f20;
        case 0x1f9f24u: goto label_1f9f24;
        case 0x1f9f28u: goto label_1f9f28;
        case 0x1f9f2cu: goto label_1f9f2c;
        case 0x1f9f30u: goto label_1f9f30;
        case 0x1f9f34u: goto label_1f9f34;
        case 0x1f9f38u: goto label_1f9f38;
        case 0x1f9f3cu: goto label_1f9f3c;
        case 0x1f9f40u: goto label_1f9f40;
        case 0x1f9f44u: goto label_1f9f44;
        case 0x1f9f48u: goto label_1f9f48;
        case 0x1f9f4cu: goto label_1f9f4c;
        case 0x1f9f50u: goto label_1f9f50;
        case 0x1f9f54u: goto label_1f9f54;
        case 0x1f9f58u: goto label_1f9f58;
        case 0x1f9f5cu: goto label_1f9f5c;
        case 0x1f9f60u: goto label_1f9f60;
        case 0x1f9f64u: goto label_1f9f64;
        case 0x1f9f68u: goto label_1f9f68;
        case 0x1f9f6cu: goto label_1f9f6c;
        case 0x1f9f70u: goto label_1f9f70;
        case 0x1f9f74u: goto label_1f9f74;
        case 0x1f9f78u: goto label_1f9f78;
        case 0x1f9f7cu: goto label_1f9f7c;
        case 0x1f9f80u: goto label_1f9f80;
        case 0x1f9f84u: goto label_1f9f84;
        case 0x1f9f88u: goto label_1f9f88;
        case 0x1f9f8cu: goto label_1f9f8c;
        case 0x1f9f90u: goto label_1f9f90;
        case 0x1f9f94u: goto label_1f9f94;
        case 0x1f9f98u: goto label_1f9f98;
        case 0x1f9f9cu: goto label_1f9f9c;
        case 0x1f9fa0u: goto label_1f9fa0;
        case 0x1f9fa4u: goto label_1f9fa4;
        case 0x1f9fa8u: goto label_1f9fa8;
        case 0x1f9facu: goto label_1f9fac;
        case 0x1f9fb0u: goto label_1f9fb0;
        case 0x1f9fb4u: goto label_1f9fb4;
        case 0x1f9fb8u: goto label_1f9fb8;
        case 0x1f9fbcu: goto label_1f9fbc;
        case 0x1f9fc0u: goto label_1f9fc0;
        case 0x1f9fc4u: goto label_1f9fc4;
        case 0x1f9fc8u: goto label_1f9fc8;
        case 0x1f9fccu: goto label_1f9fcc;
        case 0x1f9fd0u: goto label_1f9fd0;
        case 0x1f9fd4u: goto label_1f9fd4;
        case 0x1f9fd8u: goto label_1f9fd8;
        case 0x1f9fdcu: goto label_1f9fdc;
        case 0x1f9fe0u: goto label_1f9fe0;
        case 0x1f9fe4u: goto label_1f9fe4;
        case 0x1f9fe8u: goto label_1f9fe8;
        case 0x1f9fecu: goto label_1f9fec;
        case 0x1f9ff0u: goto label_1f9ff0;
        case 0x1f9ff4u: goto label_1f9ff4;
        case 0x1f9ff8u: goto label_1f9ff8;
        case 0x1f9ffcu: goto label_1f9ffc;
        case 0x1fa000u: goto label_1fa000;
        case 0x1fa004u: goto label_1fa004;
        case 0x1fa008u: goto label_1fa008;
        case 0x1fa00cu: goto label_1fa00c;
        case 0x1fa010u: goto label_1fa010;
        case 0x1fa014u: goto label_1fa014;
        case 0x1fa018u: goto label_1fa018;
        case 0x1fa01cu: goto label_1fa01c;
        case 0x1fa020u: goto label_1fa020;
        case 0x1fa024u: goto label_1fa024;
        case 0x1fa028u: goto label_1fa028;
        case 0x1fa02cu: goto label_1fa02c;
        case 0x1fa030u: goto label_1fa030;
        case 0x1fa034u: goto label_1fa034;
        case 0x1fa038u: goto label_1fa038;
        case 0x1fa03cu: goto label_1fa03c;
        case 0x1fa040u: goto label_1fa040;
        case 0x1fa044u: goto label_1fa044;
        case 0x1fa048u: goto label_1fa048;
        case 0x1fa04cu: goto label_1fa04c;
        case 0x1fa050u: goto label_1fa050;
        case 0x1fa054u: goto label_1fa054;
        case 0x1fa058u: goto label_1fa058;
        case 0x1fa05cu: goto label_1fa05c;
        case 0x1fa060u: goto label_1fa060;
        case 0x1fa064u: goto label_1fa064;
        case 0x1fa068u: goto label_1fa068;
        case 0x1fa06cu: goto label_1fa06c;
        case 0x1fa070u: goto label_1fa070;
        case 0x1fa074u: goto label_1fa074;
        case 0x1fa078u: goto label_1fa078;
        case 0x1fa07cu: goto label_1fa07c;
        case 0x1fa080u: goto label_1fa080;
        case 0x1fa084u: goto label_1fa084;
        case 0x1fa088u: goto label_1fa088;
        case 0x1fa08cu: goto label_1fa08c;
        case 0x1fa090u: goto label_1fa090;
        case 0x1fa094u: goto label_1fa094;
        case 0x1fa098u: goto label_1fa098;
        case 0x1fa09cu: goto label_1fa09c;
        case 0x1fa0a0u: goto label_1fa0a0;
        case 0x1fa0a4u: goto label_1fa0a4;
        case 0x1fa0a8u: goto label_1fa0a8;
        case 0x1fa0acu: goto label_1fa0ac;
        case 0x1fa0b0u: goto label_1fa0b0;
        case 0x1fa0b4u: goto label_1fa0b4;
        case 0x1fa0b8u: goto label_1fa0b8;
        case 0x1fa0bcu: goto label_1fa0bc;
        case 0x1fa0c0u: goto label_1fa0c0;
        case 0x1fa0c4u: goto label_1fa0c4;
        case 0x1fa0c8u: goto label_1fa0c8;
        case 0x1fa0ccu: goto label_1fa0cc;
        case 0x1fa0d0u: goto label_1fa0d0;
        case 0x1fa0d4u: goto label_1fa0d4;
        case 0x1fa0d8u: goto label_1fa0d8;
        case 0x1fa0dcu: goto label_1fa0dc;
        case 0x1fa0e0u: goto label_1fa0e0;
        case 0x1fa0e4u: goto label_1fa0e4;
        case 0x1fa0e8u: goto label_1fa0e8;
        case 0x1fa0ecu: goto label_1fa0ec;
        case 0x1fa0f0u: goto label_1fa0f0;
        case 0x1fa0f4u: goto label_1fa0f4;
        case 0x1fa0f8u: goto label_1fa0f8;
        case 0x1fa0fcu: goto label_1fa0fc;
        case 0x1fa100u: goto label_1fa100;
        case 0x1fa104u: goto label_1fa104;
        case 0x1fa108u: goto label_1fa108;
        case 0x1fa10cu: goto label_1fa10c;
        case 0x1fa110u: goto label_1fa110;
        case 0x1fa114u: goto label_1fa114;
        case 0x1fa118u: goto label_1fa118;
        case 0x1fa11cu: goto label_1fa11c;
        case 0x1fa120u: goto label_1fa120;
        case 0x1fa124u: goto label_1fa124;
        case 0x1fa128u: goto label_1fa128;
        case 0x1fa12cu: goto label_1fa12c;
        case 0x1fa130u: goto label_1fa130;
        case 0x1fa134u: goto label_1fa134;
        case 0x1fa138u: goto label_1fa138;
        case 0x1fa13cu: goto label_1fa13c;
        case 0x1fa140u: goto label_1fa140;
        case 0x1fa144u: goto label_1fa144;
        case 0x1fa148u: goto label_1fa148;
        case 0x1fa14cu: goto label_1fa14c;
        case 0x1fa150u: goto label_1fa150;
        case 0x1fa154u: goto label_1fa154;
        case 0x1fa158u: goto label_1fa158;
        case 0x1fa15cu: goto label_1fa15c;
        case 0x1fa160u: goto label_1fa160;
        case 0x1fa164u: goto label_1fa164;
        case 0x1fa168u: goto label_1fa168;
        case 0x1fa16cu: goto label_1fa16c;
        case 0x1fa170u: goto label_1fa170;
        case 0x1fa174u: goto label_1fa174;
        case 0x1fa178u: goto label_1fa178;
        case 0x1fa17cu: goto label_1fa17c;
        case 0x1fa180u: goto label_1fa180;
        case 0x1fa184u: goto label_1fa184;
        case 0x1fa188u: goto label_1fa188;
        case 0x1fa18cu: goto label_1fa18c;
        case 0x1fa190u: goto label_1fa190;
        case 0x1fa194u: goto label_1fa194;
        case 0x1fa198u: goto label_1fa198;
        case 0x1fa19cu: goto label_1fa19c;
        case 0x1fa1a0u: goto label_1fa1a0;
        case 0x1fa1a4u: goto label_1fa1a4;
        case 0x1fa1a8u: goto label_1fa1a8;
        case 0x1fa1acu: goto label_1fa1ac;
        case 0x1fa1b0u: goto label_1fa1b0;
        case 0x1fa1b4u: goto label_1fa1b4;
        case 0x1fa1b8u: goto label_1fa1b8;
        case 0x1fa1bcu: goto label_1fa1bc;
        case 0x1fa1c0u: goto label_1fa1c0;
        case 0x1fa1c4u: goto label_1fa1c4;
        case 0x1fa1c8u: goto label_1fa1c8;
        case 0x1fa1ccu: goto label_1fa1cc;
        case 0x1fa1d0u: goto label_1fa1d0;
        case 0x1fa1d4u: goto label_1fa1d4;
        case 0x1fa1d8u: goto label_1fa1d8;
        case 0x1fa1dcu: goto label_1fa1dc;
        case 0x1fa1e0u: goto label_1fa1e0;
        case 0x1fa1e4u: goto label_1fa1e4;
        case 0x1fa1e8u: goto label_1fa1e8;
        case 0x1fa1ecu: goto label_1fa1ec;
        case 0x1fa1f0u: goto label_1fa1f0;
        case 0x1fa1f4u: goto label_1fa1f4;
        case 0x1fa1f8u: goto label_1fa1f8;
        case 0x1fa1fcu: goto label_1fa1fc;
        case 0x1fa200u: goto label_1fa200;
        case 0x1fa204u: goto label_1fa204;
        case 0x1fa208u: goto label_1fa208;
        case 0x1fa20cu: goto label_1fa20c;
        case 0x1fa210u: goto label_1fa210;
        case 0x1fa214u: goto label_1fa214;
        case 0x1fa218u: goto label_1fa218;
        case 0x1fa21cu: goto label_1fa21c;
        case 0x1fa220u: goto label_1fa220;
        case 0x1fa224u: goto label_1fa224;
        case 0x1fa228u: goto label_1fa228;
        case 0x1fa22cu: goto label_1fa22c;
        case 0x1fa230u: goto label_1fa230;
        case 0x1fa234u: goto label_1fa234;
        case 0x1fa238u: goto label_1fa238;
        case 0x1fa23cu: goto label_1fa23c;
        case 0x1fa240u: goto label_1fa240;
        case 0x1fa244u: goto label_1fa244;
        case 0x1fa248u: goto label_1fa248;
        case 0x1fa24cu: goto label_1fa24c;
        case 0x1fa250u: goto label_1fa250;
        case 0x1fa254u: goto label_1fa254;
        case 0x1fa258u: goto label_1fa258;
        case 0x1fa25cu: goto label_1fa25c;
        case 0x1fa260u: goto label_1fa260;
        case 0x1fa264u: goto label_1fa264;
        case 0x1fa268u: goto label_1fa268;
        case 0x1fa26cu: goto label_1fa26c;
        case 0x1fa270u: goto label_1fa270;
        case 0x1fa274u: goto label_1fa274;
        case 0x1fa278u: goto label_1fa278;
        case 0x1fa27cu: goto label_1fa27c;
        case 0x1fa280u: goto label_1fa280;
        case 0x1fa284u: goto label_1fa284;
        case 0x1fa288u: goto label_1fa288;
        case 0x1fa28cu: goto label_1fa28c;
        case 0x1fa290u: goto label_1fa290;
        case 0x1fa294u: goto label_1fa294;
        case 0x1fa298u: goto label_1fa298;
        case 0x1fa29cu: goto label_1fa29c;
        case 0x1fa2a0u: goto label_1fa2a0;
        case 0x1fa2a4u: goto label_1fa2a4;
        case 0x1fa2a8u: goto label_1fa2a8;
        case 0x1fa2acu: goto label_1fa2ac;
        case 0x1fa2b0u: goto label_1fa2b0;
        case 0x1fa2b4u: goto label_1fa2b4;
        case 0x1fa2b8u: goto label_1fa2b8;
        case 0x1fa2bcu: goto label_1fa2bc;
        case 0x1fa2c0u: goto label_1fa2c0;
        case 0x1fa2c4u: goto label_1fa2c4;
        case 0x1fa2c8u: goto label_1fa2c8;
        case 0x1fa2ccu: goto label_1fa2cc;
        case 0x1fa2d0u: goto label_1fa2d0;
        case 0x1fa2d4u: goto label_1fa2d4;
        case 0x1fa2d8u: goto label_1fa2d8;
        case 0x1fa2dcu: goto label_1fa2dc;
        case 0x1fa2e0u: goto label_1fa2e0;
        case 0x1fa2e4u: goto label_1fa2e4;
        case 0x1fa2e8u: goto label_1fa2e8;
        case 0x1fa2ecu: goto label_1fa2ec;
        case 0x1fa2f0u: goto label_1fa2f0;
        case 0x1fa2f4u: goto label_1fa2f4;
        case 0x1fa2f8u: goto label_1fa2f8;
        case 0x1fa2fcu: goto label_1fa2fc;
        case 0x1fa300u: goto label_1fa300;
        case 0x1fa304u: goto label_1fa304;
        case 0x1fa308u: goto label_1fa308;
        case 0x1fa30cu: goto label_1fa30c;
        case 0x1fa310u: goto label_1fa310;
        case 0x1fa314u: goto label_1fa314;
        case 0x1fa318u: goto label_1fa318;
        case 0x1fa31cu: goto label_1fa31c;
        case 0x1fa320u: goto label_1fa320;
        case 0x1fa324u: goto label_1fa324;
        case 0x1fa328u: goto label_1fa328;
        case 0x1fa32cu: goto label_1fa32c;
        case 0x1fa330u: goto label_1fa330;
        case 0x1fa334u: goto label_1fa334;
        case 0x1fa338u: goto label_1fa338;
        case 0x1fa33cu: goto label_1fa33c;
        case 0x1fa340u: goto label_1fa340;
        case 0x1fa344u: goto label_1fa344;
        case 0x1fa348u: goto label_1fa348;
        case 0x1fa34cu: goto label_1fa34c;
        case 0x1fa350u: goto label_1fa350;
        case 0x1fa354u: goto label_1fa354;
        case 0x1fa358u: goto label_1fa358;
        case 0x1fa35cu: goto label_1fa35c;
        case 0x1fa360u: goto label_1fa360;
        case 0x1fa364u: goto label_1fa364;
        case 0x1fa368u: goto label_1fa368;
        case 0x1fa36cu: goto label_1fa36c;
        case 0x1fa370u: goto label_1fa370;
        case 0x1fa374u: goto label_1fa374;
        case 0x1fa378u: goto label_1fa378;
        case 0x1fa37cu: goto label_1fa37c;
        case 0x1fa380u: goto label_1fa380;
        case 0x1fa384u: goto label_1fa384;
        case 0x1fa388u: goto label_1fa388;
        case 0x1fa38cu: goto label_1fa38c;
        case 0x1fa390u: goto label_1fa390;
        case 0x1fa394u: goto label_1fa394;
        case 0x1fa398u: goto label_1fa398;
        case 0x1fa39cu: goto label_1fa39c;
        case 0x1fa3a0u: goto label_1fa3a0;
        case 0x1fa3a4u: goto label_1fa3a4;
        case 0x1fa3a8u: goto label_1fa3a8;
        case 0x1fa3acu: goto label_1fa3ac;
        case 0x1fa3b0u: goto label_1fa3b0;
        case 0x1fa3b4u: goto label_1fa3b4;
        case 0x1fa3b8u: goto label_1fa3b8;
        case 0x1fa3bcu: goto label_1fa3bc;
        case 0x1fa3c0u: goto label_1fa3c0;
        case 0x1fa3c4u: goto label_1fa3c4;
        case 0x1fa3c8u: goto label_1fa3c8;
        case 0x1fa3ccu: goto label_1fa3cc;
        case 0x1fa3d0u: goto label_1fa3d0;
        case 0x1fa3d4u: goto label_1fa3d4;
        case 0x1fa3d8u: goto label_1fa3d8;
        case 0x1fa3dcu: goto label_1fa3dc;
        case 0x1fa3e0u: goto label_1fa3e0;
        case 0x1fa3e4u: goto label_1fa3e4;
        case 0x1fa3e8u: goto label_1fa3e8;
        case 0x1fa3ecu: goto label_1fa3ec;
        case 0x1fa3f0u: goto label_1fa3f0;
        case 0x1fa3f4u: goto label_1fa3f4;
        case 0x1fa3f8u: goto label_1fa3f8;
        case 0x1fa3fcu: goto label_1fa3fc;
        case 0x1fa400u: goto label_1fa400;
        case 0x1fa404u: goto label_1fa404;
        case 0x1fa408u: goto label_1fa408;
        case 0x1fa40cu: goto label_1fa40c;
        case 0x1fa410u: goto label_1fa410;
        case 0x1fa414u: goto label_1fa414;
        case 0x1fa418u: goto label_1fa418;
        case 0x1fa41cu: goto label_1fa41c;
        case 0x1fa420u: goto label_1fa420;
        case 0x1fa424u: goto label_1fa424;
        case 0x1fa428u: goto label_1fa428;
        case 0x1fa42cu: goto label_1fa42c;
        case 0x1fa430u: goto label_1fa430;
        case 0x1fa434u: goto label_1fa434;
        case 0x1fa438u: goto label_1fa438;
        case 0x1fa43cu: goto label_1fa43c;
        case 0x1fa440u: goto label_1fa440;
        case 0x1fa444u: goto label_1fa444;
        case 0x1fa448u: goto label_1fa448;
        case 0x1fa44cu: goto label_1fa44c;
        case 0x1fa450u: goto label_1fa450;
        case 0x1fa454u: goto label_1fa454;
        case 0x1fa458u: goto label_1fa458;
        case 0x1fa45cu: goto label_1fa45c;
        case 0x1fa460u: goto label_1fa460;
        case 0x1fa464u: goto label_1fa464;
        case 0x1fa468u: goto label_1fa468;
        case 0x1fa46cu: goto label_1fa46c;
        case 0x1fa470u: goto label_1fa470;
        case 0x1fa474u: goto label_1fa474;
        case 0x1fa478u: goto label_1fa478;
        case 0x1fa47cu: goto label_1fa47c;
        case 0x1fa480u: goto label_1fa480;
        case 0x1fa484u: goto label_1fa484;
        case 0x1fa488u: goto label_1fa488;
        case 0x1fa48cu: goto label_1fa48c;
        case 0x1fa490u: goto label_1fa490;
        case 0x1fa494u: goto label_1fa494;
        case 0x1fa498u: goto label_1fa498;
        case 0x1fa49cu: goto label_1fa49c;
        case 0x1fa4a0u: goto label_1fa4a0;
        case 0x1fa4a4u: goto label_1fa4a4;
        case 0x1fa4a8u: goto label_1fa4a8;
        case 0x1fa4acu: goto label_1fa4ac;
        case 0x1fa4b0u: goto label_1fa4b0;
        case 0x1fa4b4u: goto label_1fa4b4;
        case 0x1fa4b8u: goto label_1fa4b8;
        case 0x1fa4bcu: goto label_1fa4bc;
        case 0x1fa4c0u: goto label_1fa4c0;
        case 0x1fa4c4u: goto label_1fa4c4;
        case 0x1fa4c8u: goto label_1fa4c8;
        case 0x1fa4ccu: goto label_1fa4cc;
        default: break;
    }

    ctx->pc = 0x1f9bd0u;

label_1f9bd0:
    // 0x1f9bd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f9bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f9bd4:
    // 0x1f9bd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f9bd8:
    // 0x1f9bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f9bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f9bdc:
    // 0x1f9bdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f9bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f9be0:
    // 0x1f9be0: 0xa3a00030  sb          $zero, 0x30($sp)
    ctx->pc = 0x1f9be0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
label_1f9be4:
    // 0x1f9be4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f9be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f9be8:
    // 0x1f9be8: 0xc07e6e4  jal         func_1F9B90
label_1f9bec:
    if (ctx->pc == 0x1F9BECu) {
        ctx->pc = 0x1F9BECu;
            // 0x1f9bec: 0xa3a00031  sb          $zero, 0x31($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1F9BF0u;
        goto label_1f9bf0;
    }
    ctx->pc = 0x1F9BE8u;
    SET_GPR_U32(ctx, 31, 0x1F9BF0u);
    ctx->pc = 0x1F9BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9BE8u;
            // 0x1f9bec: 0xa3a00031  sb          $zero, 0x31($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B90u;
    if (runtime->hasFunction(0x1F9B90u)) {
        auto targetFn = runtime->lookupFunction(0x1F9B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9BF0u; }
        if (ctx->pc != 0x1F9BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9B90_0x1f9b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9BF0u; }
        if (ctx->pc != 0x1F9BF0u) { return; }
    }
    ctx->pc = 0x1F9BF0u;
label_1f9bf0:
    // 0x1f9bf0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f9bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f9bf4:
    // 0x1f9bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9bf8:
    // 0x1f9bf8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f9bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f9bfc:
    // 0x1f9bfc: 0xc07ff48  jal         func_1FFD20
label_1f9c00:
    if (ctx->pc == 0x1F9C00u) {
        ctx->pc = 0x1F9C00u;
            // 0x1f9c00: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C04u;
        goto label_1f9c04;
    }
    ctx->pc = 0x1F9BFCu;
    SET_GPR_U32(ctx, 31, 0x1F9C04u);
    ctx->pc = 0x1F9C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9BFCu;
            // 0x1f9c00: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C04u; }
        if (ctx->pc != 0x1F9C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C04u; }
        if (ctx->pc != 0x1F9C04u) { return; }
    }
    ctx->pc = 0x1F9C04u;
label_1f9c04:
    // 0x1f9c04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f9c08:
    // 0x1f9c08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9c0c:
    // 0x1f9c0c: 0x3e00008  jr          $ra
label_1f9c10:
    if (ctx->pc == 0x1F9C10u) {
        ctx->pc = 0x1F9C10u;
            // 0x1f9c10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1F9C14u;
        goto label_1f9c14;
    }
    ctx->pc = 0x1F9C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9C0Cu;
            // 0x1f9c10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9C14u;
label_1f9c14:
    // 0x1f9c14: 0x0  nop
    ctx->pc = 0x1f9c14u;
    // NOP
label_1f9c18:
    // 0x1f9c18: 0x0  nop
    ctx->pc = 0x1f9c18u;
    // NOP
label_1f9c1c:
    // 0x1f9c1c: 0x0  nop
    ctx->pc = 0x1f9c1cu;
    // NOP
label_1f9c20:
    // 0x1f9c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f9c24:
    // 0x1f9c24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f9c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f9c28:
    // 0x1f9c28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f9c2c:
    // 0x1f9c2c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1f9c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f9c30:
    // 0x1f9c30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f9c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f9c34:
    // 0x1f9c34: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x1f9c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1f9c38:
    // 0x1f9c38: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f9c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1f9c3c:
    // 0x1f9c3c: 0xc0a7a88  jal         func_29EA20
label_1f9c40:
    if (ctx->pc == 0x1F9C40u) {
        ctx->pc = 0x1F9C40u;
            // 0x1f9c40: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C44u;
        goto label_1f9c44;
    }
    ctx->pc = 0x1F9C3Cu;
    SET_GPR_U32(ctx, 31, 0x1F9C44u);
    ctx->pc = 0x1F9C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9C3Cu;
            // 0x1f9c40: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C44u; }
        if (ctx->pc != 0x1F9C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9C44u; }
        if (ctx->pc != 0x1F9C44u) { return; }
    }
    ctx->pc = 0x1F9C44u;
label_1f9c44:
    // 0x1f9c44: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f9c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f9c48:
    // 0x1f9c48: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1f9c4c:
    if (ctx->pc == 0x1F9C4Cu) {
        ctx->pc = 0x1F9C4Cu;
            // 0x1f9c4c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1F9C50u;
        goto label_1f9c50;
    }
    ctx->pc = 0x1F9C48u;
    {
        const bool branch_taken_0x1f9c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9C48u;
            // 0x1f9c4c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c48) {
            ctx->pc = 0x1F9CA0u;
            goto label_1f9ca0;
        }
    }
    ctx->pc = 0x1F9C50u;
label_1f9c50:
    // 0x1f9c50: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1f9c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_1f9c54:
    // 0x1f9c54: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f9c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f9c58:
    // 0x1f9c58: 0x2484d420  addiu       $a0, $a0, -0x2BE0
    ctx->pc = 0x1f9c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
label_1f9c5c:
    // 0x1f9c5c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1f9c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1f9c60:
    // 0x1f9c60: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1f9c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1f9c64:
    // 0x1f9c64: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x1f9c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
label_1f9c68:
    // 0x1f9c68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f9c68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f9c6c:
    // 0x1f9c6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f9c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9c70:
    // 0x1f9c70: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f9c74:
    // 0x1f9c74: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x1f9c74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
label_1f9c78:
    // 0x1f9c78: 0x2463d9e0  addiu       $v1, $v1, -0x2620
    ctx->pc = 0x1f9c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957536));
label_1f9c7c:
    // 0x1f9c7c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1f9c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_1f9c80:
    // 0x1f9c80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f9c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f9c84:
    // 0x1f9c84: 0x24a5da20  addiu       $a1, $a1, -0x25E0
    ctx->pc = 0x1f9c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957600));
label_1f9c88:
    // 0x1f9c88: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x1f9c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
label_1f9c8c:
    // 0x1f9c8c: 0x2484ddd0  addiu       $a0, $a0, -0x2230
    ctx->pc = 0x1f9c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958544));
label_1f9c90:
    // 0x1f9c90: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1f9c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1f9c94:
    // 0x1f9c94: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f9c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f9c98:
    // 0x1f9c98: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1f9c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1f9c9c:
    // 0x1f9c9c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1f9c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
label_1f9ca0:
    // 0x1f9ca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f9ca4:
    // 0x1f9ca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9ca8:
    // 0x1f9ca8: 0x3e00008  jr          $ra
label_1f9cac:
    if (ctx->pc == 0x1F9CACu) {
        ctx->pc = 0x1F9CACu;
            // 0x1f9cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F9CB0u;
        goto label_1f9cb0;
    }
    ctx->pc = 0x1F9CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9CA8u;
            // 0x1f9cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9CB0u;
label_1f9cb0:
    // 0x1f9cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f9cb4:
    // 0x1f9cb4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1f9cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f9cb8:
    // 0x1f9cb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f9cbc:
    // 0x1f9cbc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f9cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f9cc0:
    // 0x1f9cc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f9cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f9cc4:
    // 0x1f9cc4: 0x9485000c  lhu         $a1, 0xC($a0)
    ctx->pc = 0x1f9cc4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_1f9cc8:
    // 0x1f9cc8: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_1f9ccc:
    if (ctx->pc == 0x1F9CCCu) {
        ctx->pc = 0x1F9CCCu;
            // 0x1f9ccc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F9CD0u;
        goto label_1f9cd0;
    }
    ctx->pc = 0x1F9CC8u;
    {
        const bool branch_taken_0x1f9cc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F9CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9CC8u;
            // 0x1f9ccc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9cc8) {
            ctx->pc = 0x1F9CECu;
            goto label_1f9cec;
        }
    }
    ctx->pc = 0x1F9CD0u;
label_1f9cd0:
    // 0x1f9cd0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1f9cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f9cd4:
    // 0x1f9cd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f9cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9cd8:
    // 0x1f9cd8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f9cd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f9cdc:
    // 0x1f9cdc: 0x320f809  jalr        $t9
label_1f9ce0:
    if (ctx->pc == 0x1F9CE0u) {
        ctx->pc = 0x1F9CE4u;
        goto label_1f9ce4;
    }
    ctx->pc = 0x1F9CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F9CE4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9CE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9CE4u; }
            if (ctx->pc != 0x1F9CE4u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9CE4u;
label_1f9ce4:
    // 0x1f9ce4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f9ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f9ce8:
    // 0x1f9ce8: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x1f9ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_1f9cec:
    // 0x1f9cec: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_1f9cf0:
    if (ctx->pc == 0x1F9CF0u) {
        ctx->pc = 0x1F9CF0u;
            // 0x1f9cf0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1F9CF4u;
        goto label_1f9cf4;
    }
    ctx->pc = 0x1F9CECu;
    {
        const bool branch_taken_0x1f9cec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9cec) {
            ctx->pc = 0x1F9CF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9CECu;
            // 0x1f9cf0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9D0Cu;
            goto label_1f9d0c;
        }
    }
    ctx->pc = 0x1F9CF4u;
label_1f9cf4:
    // 0x1f9cf4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1f9cf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f9cf8:
    // 0x1f9cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9cfc:
    // 0x1f9cfc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1f9cfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1f9d00:
    // 0x1f9d00: 0x320f809  jalr        $t9
label_1f9d04:
    if (ctx->pc == 0x1F9D04u) {
        ctx->pc = 0x1F9D04u;
            // 0x1f9d04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F9D08u;
        goto label_1f9d08;
    }
    ctx->pc = 0x1F9D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F9D08u);
        ctx->pc = 0x1F9D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D00u;
            // 0x1f9d04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9D08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D08u; }
            if (ctx->pc != 0x1F9D08u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9D08u;
label_1f9d08:
    // 0x1f9d08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f9d0c:
    // 0x1f9d0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9d10:
    // 0x1f9d10: 0x3e00008  jr          $ra
label_1f9d14:
    if (ctx->pc == 0x1F9D14u) {
        ctx->pc = 0x1F9D14u;
            // 0x1f9d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F9D18u;
        goto label_1f9d18;
    }
    ctx->pc = 0x1F9D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D10u;
            // 0x1f9d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9D18u;
label_1f9d18:
    // 0x1f9d18: 0x0  nop
    ctx->pc = 0x1f9d18u;
    // NOP
label_1f9d1c:
    // 0x1f9d1c: 0x0  nop
    ctx->pc = 0x1f9d1cu;
    // NOP
label_1f9d20:
    // 0x1f9d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f9d24:
    // 0x1f9d24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f9d28:
    // 0x1f9d28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f9d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f9d2c:
    // 0x1f9d2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f9d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f9d30:
    // 0x1f9d30: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
label_1f9d34:
    if (ctx->pc == 0x1F9D34u) {
        ctx->pc = 0x1F9D34u;
            // 0x1f9d34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D38u;
        goto label_1f9d38;
    }
    ctx->pc = 0x1F9D30u;
    {
        const bool branch_taken_0x1f9d30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9d30) {
            ctx->pc = 0x1F9D34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D30u;
            // 0x1f9d34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9DB0u;
            goto label_1f9db0;
        }
    }
    ctx->pc = 0x1F9D38u;
label_1f9d38:
    // 0x1f9d38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f9d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f9d3c:
    // 0x1f9d3c: 0x2442ddd0  addiu       $v0, $v0, -0x2230
    ctx->pc = 0x1f9d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958544));
label_1f9d40:
    // 0x1f9d40: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_1f9d44:
    if (ctx->pc == 0x1F9D44u) {
        ctx->pc = 0x1F9D44u;
            // 0x1f9d44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F9D48u;
        goto label_1f9d48;
    }
    ctx->pc = 0x1F9D40u;
    {
        const bool branch_taken_0x1f9d40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D40u;
            // 0x1f9d44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d40) {
            ctx->pc = 0x1F9D84u;
            goto label_1f9d84;
        }
    }
    ctx->pc = 0x1F9D48u;
label_1f9d48:
    // 0x1f9d48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f9d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f9d4c:
    // 0x1f9d4c: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x1f9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
label_1f9d50:
    // 0x1f9d50: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1f9d54:
    if (ctx->pc == 0x1F9D54u) {
        ctx->pc = 0x1F9D54u;
            // 0x1f9d54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F9D58u;
        goto label_1f9d58;
    }
    ctx->pc = 0x1F9D50u;
    {
        const bool branch_taken_0x1f9d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D50u;
            // 0x1f9d54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d50) {
            ctx->pc = 0x1F9D84u;
            goto label_1f9d84;
        }
    }
    ctx->pc = 0x1F9D58u;
label_1f9d58:
    // 0x1f9d58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f9d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f9d5c:
    // 0x1f9d5c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1f9d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1f9d60:
    // 0x1f9d60: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1f9d64:
    if (ctx->pc == 0x1F9D64u) {
        ctx->pc = 0x1F9D64u;
            // 0x1f9d64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F9D68u;
        goto label_1f9d68;
    }
    ctx->pc = 0x1F9D60u;
    {
        const bool branch_taken_0x1f9d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D60u;
            // 0x1f9d64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d60) {
            ctx->pc = 0x1F9D84u;
            goto label_1f9d84;
        }
    }
    ctx->pc = 0x1F9D68u;
label_1f9d68:
    // 0x1f9d68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f9d6c:
    // 0x1f9d6c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1f9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1f9d70:
    // 0x1f9d70: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1f9d74:
    if (ctx->pc == 0x1F9D74u) {
        ctx->pc = 0x1F9D74u;
            // 0x1f9d74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F9D78u;
        goto label_1f9d78;
    }
    ctx->pc = 0x1F9D70u;
    {
        const bool branch_taken_0x1f9d70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D70u;
            // 0x1f9d74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d70) {
            ctx->pc = 0x1F9D84u;
            goto label_1f9d84;
        }
    }
    ctx->pc = 0x1F9D78u;
label_1f9d78:
    // 0x1f9d78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f9d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1f9d7c:
    // 0x1f9d7c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1f9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1f9d80:
    // 0x1f9d80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f9d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f9d84:
    // 0x1f9d84: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1f9d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1f9d88:
    // 0x1f9d88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f9d88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1f9d8c:
    // 0x1f9d8c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1f9d90:
    if (ctx->pc == 0x1F9D90u) {
        ctx->pc = 0x1F9D94u;
        goto label_1f9d94;
    }
    ctx->pc = 0x1F9D8Cu;
    {
        const bool branch_taken_0x1f9d8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f9d8c) {
            ctx->pc = 0x1F9DACu;
            goto label_1f9dac;
        }
    }
    ctx->pc = 0x1F9D94u;
label_1f9d94:
    // 0x1f9d94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f9d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f9d98:
    // 0x1f9d98: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1f9d98u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1f9d9c:
    // 0x1f9d9c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1f9d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1f9da0:
    // 0x1f9da0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f9da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9da4:
    // 0x1f9da4: 0xc0a7ab4  jal         func_29EAD0
label_1f9da8:
    if (ctx->pc == 0x1F9DA8u) {
        ctx->pc = 0x1F9DA8u;
            // 0x1f9da8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1F9DACu;
        goto label_1f9dac;
    }
    ctx->pc = 0x1F9DA4u;
    SET_GPR_U32(ctx, 31, 0x1F9DACu);
    ctx->pc = 0x1F9DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9DA4u;
            // 0x1f9da8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9DACu; }
        if (ctx->pc != 0x1F9DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9DACu; }
        if (ctx->pc != 0x1F9DACu) { return; }
    }
    ctx->pc = 0x1F9DACu;
label_1f9dac:
    // 0x1f9dac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f9dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9db0:
    // 0x1f9db0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f9db4:
    // 0x1f9db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9db8:
    // 0x1f9db8: 0x3e00008  jr          $ra
label_1f9dbc:
    if (ctx->pc == 0x1F9DBCu) {
        ctx->pc = 0x1F9DBCu;
            // 0x1f9dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F9DC0u;
        goto label_1f9dc0;
    }
    ctx->pc = 0x1F9DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9DB8u;
            // 0x1f9dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9DC0u;
label_1f9dc0:
    // 0x1f9dc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f9dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f9dc4:
    // 0x1f9dc4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f9dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f9dc8:
    // 0x1f9dc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f9dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1f9dcc:
    // 0x1f9dcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f9dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f9dd0:
    // 0x1f9dd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f9dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f9dd4:
    // 0x1f9dd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f9dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f9dd8:
    // 0x1f9dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f9dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f9ddc:
    // 0x1f9ddc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f9ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f9de0:
    // 0x1f9de0: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x1f9de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_1f9de4:
    // 0x1f9de4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1f9de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f9de8:
    // 0x1f9de8: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1f9de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1f9dec:
    // 0x1f9dec: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x1f9decu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_1f9df0:
    // 0x1f9df0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f9df0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f9df4:
    // 0x1f9df4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f9df8:
    if (ctx->pc == 0x1F9DF8u) {
        ctx->pc = 0x1F9DF8u;
            // 0x1f9df8: 0x2508ea60  addiu       $t0, $t0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961760));
        ctx->pc = 0x1F9DFCu;
        goto label_1f9dfc;
    }
    ctx->pc = 0x1F9DF4u;
    {
        const bool branch_taken_0x1f9df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9DF4u;
            // 0x1f9df8: 0x2508ea60  addiu       $t0, $t0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9df4) {
            ctx->pc = 0x1F9E24u;
            goto label_1f9e24;
        }
    }
    ctx->pc = 0x1F9DFCu;
label_1f9dfc:
    // 0x1f9dfc: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x1f9dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1f9e00:
    // 0x1f9e00: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f9e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1f9e04:
    // 0x1f9e04: 0x2463b078  addiu       $v1, $v1, -0x4F88
    ctx->pc = 0x1f9e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946936));
label_1f9e08:
    // 0x1f9e08: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f9e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f9e0c:
    // 0x1f9e0c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f9e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1f9e10:
    // 0x1f9e10: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f9e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f9e14:
    // 0x1f9e14: 0x4009c803  .word       0x4009C803                   # mfc0        $t1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f9e14u;
    SET_GPR_S32(ctx, 9, (int32_t)ctx->cop0_perf);
label_1f9e18:
    // 0x1f9e18: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f9e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1f9e1c:
    // 0x1f9e1c: 0xac890008  sw          $t1, 0x8($a0)
    ctx->pc = 0x1f9e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
label_1f9e20:
    // 0x1f9e20: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x1f9e20u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_1f9e24:
    // 0x1f9e24: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x1f9e24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f9e28:
    // 0x1f9e28: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1f9e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9e2c:
    // 0x1f9e2c: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x1f9e2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f9e30:
    // 0x1f9e30: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1f9e30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f9e34:
    // 0x1f9e34: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1f9e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1f9e38:
    // 0x1f9e38: 0xc5420010  lwc1        $f2, 0x10($t2)
    ctx->pc = 0x1f9e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9e3c:
    // 0x1f9e3c: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x1f9e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f9e40:
    // 0x1f9e40: 0xc5210010  lwc1        $f1, 0x10($t1)
    ctx->pc = 0x1f9e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9e44:
    // 0x1f9e44: 0xc4640030  lwc1        $f4, 0x30($v1)
    ctx->pc = 0x1f9e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f9e48:
    // 0x1f9e48: 0xc5050030  lwc1        $f5, 0x30($t0)
    ctx->pc = 0x1f9e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f9e4c:
    // 0x1f9e4c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1f9e4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1f9e50:
    // 0x1f9e50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f9e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f9e54:
    // 0x1f9e54: 0xc5020034  lwc1        $f2, 0x34($t0)
    ctx->pc = 0x1f9e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9e58:
    // 0x1f9e58: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x1f9e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9e5c:
    // 0x1f9e5c: 0x460429c1  sub.s       $f7, $f5, $f4
    ctx->pc = 0x1f9e5cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1f9e60:
    // 0x1f9e60: 0x46011181  sub.s       $f6, $f2, $f1
    ctx->pc = 0x1f9e60u;
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f9e64:
    // 0x1f9e64: 0xc5050038  lwc1        $f5, 0x38($t0)
    ctx->pc = 0x1f9e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f9e68:
    // 0x1f9e68: 0xc4640038  lwc1        $f4, 0x38($v1)
    ctx->pc = 0x1f9e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f9e6c:
    // 0x1f9e6c: 0x4606301a  mula.s      $f6, $f6
    ctx->pc = 0x1f9e6cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_1f9e70:
    // 0x1f9e70: 0xc502003c  lwc1        $f2, 0x3C($t0)
    ctx->pc = 0x1f9e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f9e74:
    // 0x1f9e74: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1f9e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9e78:
    // 0x1f9e78: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1f9e78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1f9e7c:
    // 0x1f9e7c: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x1f9e7cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1f9e80:
    // 0x1f9e80: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1f9e80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f9e84:
    // 0x1f9e84: 0x4607381e  madda.s     $f7, $f7
    ctx->pc = 0x1f9e84u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[7]));
label_1f9e88:
    // 0x1f9e88: 0x4604209c  madd.s      $f2, $f4, $f4
    ctx->pc = 0x1f9e88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_1f9e8c:
    // 0x1f9e8c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f9e8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9e90:
    // 0x1f9e90: 0x45000050  bc1f        . + 4 + (0x50 << 2)
label_1f9e94:
    if (ctx->pc == 0x1F9E94u) {
        ctx->pc = 0x1F9E94u;
            // 0x1f9e94: 0x24640030  addiu       $a0, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->pc = 0x1F9E98u;
        goto label_1f9e98;
    }
    ctx->pc = 0x1F9E90u;
    {
        const bool branch_taken_0x1f9e90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F9E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9E90u;
            // 0x1f9e94: 0x24640030  addiu       $a0, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e90) {
            ctx->pc = 0x1F9FD4u;
            goto label_1f9fd4;
        }
    }
    ctx->pc = 0x1F9E98u;
label_1f9e98:
    // 0x1f9e98: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x1f9e98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9e9c:
    // 0x1f9e9c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_1f9ea0:
    if (ctx->pc == 0x1F9EA0u) {
        ctx->pc = 0x1F9EA0u;
            // 0x1f9ea0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1F9EA4u;
        goto label_1f9ea4;
    }
    ctx->pc = 0x1F9E9Cu;
    {
        const bool branch_taken_0x1f9e9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F9EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9E9Cu;
            // 0x1f9ea0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e9c) {
            ctx->pc = 0x1F9EECu;
            goto label_1f9eec;
        }
    }
    ctx->pc = 0x1F9EA4u;
label_1f9ea4:
    // 0x1f9ea4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f9ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1f9ea8:
    // 0x1f9ea8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9ea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f9eac:
    // 0x1f9eac: 0x0  nop
    ctx->pc = 0x1f9eacu;
    // NOP
label_1f9eb0:
    // 0x1f9eb0: 0x460200d6  rsqrt.s     $f3, $f0, $f2
    ctx->pc = 0x1f9eb0u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[0]);
label_1f9eb4:
    // 0x1f9eb4: 0x46071802  mul.s       $f0, $f3, $f7
    ctx->pc = 0x1f9eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
label_1f9eb8:
    // 0x1f9eb8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1f9eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_1f9ebc:
    // 0x1f9ebc: 0x46061802  mul.s       $f0, $f3, $f6
    ctx->pc = 0x1f9ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_1f9ec0:
    // 0x1f9ec0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1f9ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_1f9ec4:
    // 0x1f9ec4: 0x46041802  mul.s       $f0, $f3, $f4
    ctx->pc = 0x1f9ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_1f9ec8:
    // 0x1f9ec8: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1f9ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_1f9ecc:
    // 0x1f9ecc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1f9eccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1f9ed0:
    // 0x1f9ed0: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x1f9ed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_1f9ed4:
    // 0x1f9ed4: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x1f9ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1f9ed8:
    // 0x1f9ed8: 0xc5230010  lwc1        $f3, 0x10($t1)
    ctx->pc = 0x1f9ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f9edc:
    // 0x1f9edc: 0xc5410010  lwc1        $f1, 0x10($t2)
    ctx->pc = 0x1f9edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9ee0:
    // 0x1f9ee0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1f9ee0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1f9ee4:
    // 0x1f9ee4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f9ee8:
    if (ctx->pc == 0x1F9EE8u) {
        ctx->pc = 0x1F9EE8u;
            // 0x1f9ee8: 0x46010101  sub.s       $f4, $f0, $f1 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1F9EECu;
        goto label_1f9eec;
    }
    ctx->pc = 0x1F9EE4u;
    {
        const bool branch_taken_0x1f9ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9EE4u;
            // 0x1f9ee8: 0x46010101  sub.s       $f4, $f0, $f1 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ee4) {
            ctx->pc = 0x1F9F24u;
            goto label_1f9f24;
        }
    }
    ctx->pc = 0x1F9EECu;
label_1f9eec:
    // 0x1f9eec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f9eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1f9ef0:
    // 0x1f9ef0: 0x2463d6e0  addiu       $v1, $v1, -0x2920
    ctx->pc = 0x1f9ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956768));
label_1f9ef4:
    // 0x1f9ef4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f9ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9ef8:
    // 0x1f9ef8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1f9ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_1f9efc:
    // 0x1f9efc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1f9efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9f00:
    // 0x1f9f00: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1f9f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_1f9f04:
    // 0x1f9f04: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1f9f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9f08:
    // 0x1f9f08: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1f9f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_1f9f0c:
    // 0x1f9f0c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1f9f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9f10:
    // 0x1f9f10: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1f9f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_1f9f14:
    // 0x1f9f14: 0xc5230010  lwc1        $f3, 0x10($t1)
    ctx->pc = 0x1f9f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f9f18:
    // 0x1f9f18: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x1f9f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9f1c:
    // 0x1f9f1c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1f9f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1f9f20:
    // 0x1f9f20: 0x46000107  neg.s       $f4, $f0
    ctx->pc = 0x1f9f20u;
    ctx->f[4] = FPU_NEG_S(ctx->f[0]);
label_1f9f24:
    // 0x1f9f24: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1f9f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9f28:
    // 0x1f9f28: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f9f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f9f2c:
    // 0x1f9f2c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1f9f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9f30:
    // 0x1f9f30: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1f9f30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f9f34:
    // 0x1f9f34: 0x0  nop
    ctx->pc = 0x1f9f34u;
    // NOP
label_1f9f38:
    // 0x1f9f38: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f9f38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f9f3c:
    // 0x1f9f3c: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1f9f3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_1f9f40:
    // 0x1f9f40: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1f9f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1f9f44:
    // 0x1f9f44: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1f9f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9f48:
    // 0x1f9f48: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1f9f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9f4c:
    // 0x1f9f4c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f9f4cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f9f50:
    // 0x1f9f50: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1f9f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_1f9f54:
    // 0x1f9f54: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1f9f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1f9f58:
    // 0x1f9f58: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1f9f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9f5c:
    // 0x1f9f5c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1f9f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9f60:
    // 0x1f9f60: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f9f60u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f9f64:
    // 0x1f9f64: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1f9f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_1f9f68:
    // 0x1f9f68: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1f9f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1f9f6c:
    // 0x1f9f6c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1f9f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f9f70:
    // 0x1f9f70: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1f9f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f9f74:
    // 0x1f9f74: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1f9f74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f9f78:
    // 0x1f9f78: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x1f9f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_1f9f7c:
    // 0x1f9f7c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1f9f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1f9f80:
    // 0x1f9f80: 0xe604001c  swc1        $f4, 0x1C($s0)
    ctx->pc = 0x1f9f80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_1f9f84:
    // 0x1f9f84: 0x9644000c  lhu         $a0, 0xC($s2)
    ctx->pc = 0x1f9f84u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_1f9f88:
    // 0x1f9f88: 0x5483000a  bnel        $a0, $v1, . + 4 + (0xA << 2)
label_1f9f8c:
    if (ctx->pc == 0x1F9F8Cu) {
        ctx->pc = 0x1F9F8Cu;
            // 0x1f9f8c: 0x9644000c  lhu         $a0, 0xC($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x1F9F90u;
        goto label_1f9f90;
    }
    ctx->pc = 0x1F9F88u;
    {
        const bool branch_taken_0x1f9f88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f9f88) {
            ctx->pc = 0x1F9F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9F88u;
            // 0x1f9f8c: 0x9644000c  lhu         $a0, 0xC($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9FB4u;
            goto label_1f9fb4;
        }
    }
    ctx->pc = 0x1F9F90u;
label_1f9f90:
    // 0x1f9f90: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1f9f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f9f94:
    // 0x1f9f94: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1f9f94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f9f98:
    // 0x1f9f98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f9f98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9f9c:
    // 0x1f9f9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f9f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9fa0:
    // 0x1f9fa0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1f9fa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1f9fa4:
    // 0x1f9fa4: 0x320f809  jalr        $t9
label_1f9fa8:
    if (ctx->pc == 0x1F9FA8u) {
        ctx->pc = 0x1F9FA8u;
            // 0x1f9fa8: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FACu;
        goto label_1f9fac;
    }
    ctx->pc = 0x1F9FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F9FACu);
        ctx->pc = 0x1F9FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9FA4u;
            // 0x1f9fa8: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9FACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9FACu; }
            if (ctx->pc != 0x1F9FACu) { return; }
        }
        }
    }
    ctx->pc = 0x1F9FACu;
label_1f9fac:
    // 0x1f9fac: 0xa642000c  sh          $v0, 0xC($s2)
    ctx->pc = 0x1f9facu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 2));
label_1f9fb0:
    // 0x1f9fb0: 0x9644000c  lhu         $a0, 0xC($s2)
    ctx->pc = 0x1f9fb0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_1f9fb4:
    // 0x1f9fb4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f9fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f9fb8:
    // 0x1f9fb8: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_1f9fbc:
    if (ctx->pc == 0x1F9FBCu) {
        ctx->pc = 0x1F9FC0u;
        goto label_1f9fc0;
    }
    ctx->pc = 0x1F9FB8u;
    {
        const bool branch_taken_0x1f9fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9fb8) {
            ctx->pc = 0x1FA000u;
            goto label_1fa000;
        }
    }
    ctx->pc = 0x1F9FC0u;
label_1f9fc0:
    // 0x1f9fc0: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x1f9fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
label_1f9fc4:
    // 0x1f9fc4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f9fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f9fc8:
    // 0x1f9fc8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1f9fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1f9fcc:
    // 0x1f9fcc: 0x1000000c  b           . + 4 + (0xC << 2)
label_1f9fd0:
    if (ctx->pc == 0x1F9FD0u) {
        ctx->pc = 0x1F9FD0u;
            // 0x1f9fd0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1F9FD4u;
        goto label_1f9fd4;
    }
    ctx->pc = 0x1F9FCCu;
    {
        const bool branch_taken_0x1f9fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9FCCu;
            // 0x1f9fd0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9fcc) {
            ctx->pc = 0x1FA000u;
            goto label_1fa000;
        }
    }
    ctx->pc = 0x1F9FD4u;
label_1f9fd4:
    // 0x1f9fd4: 0x9645000c  lhu         $a1, 0xC($s2)
    ctx->pc = 0x1f9fd4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_1f9fd8:
    // 0x1f9fd8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f9fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f9fdc:
    // 0x1f9fdc: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_1f9fe0:
    if (ctx->pc == 0x1F9FE0u) {
        ctx->pc = 0x1F9FE4u;
        goto label_1f9fe4;
    }
    ctx->pc = 0x1F9FDCu;
    {
        const bool branch_taken_0x1f9fdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f9fdc) {
            ctx->pc = 0x1FA000u;
            goto label_1fa000;
        }
    }
    ctx->pc = 0x1F9FE4u;
label_1f9fe4:
    // 0x1f9fe4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1f9fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f9fe8:
    // 0x1f9fe8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f9fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9fec:
    // 0x1f9fec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f9fecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f9ff0:
    // 0x1f9ff0: 0x320f809  jalr        $t9
label_1f9ff4:
    if (ctx->pc == 0x1F9FF4u) {
        ctx->pc = 0x1F9FF4u;
            // 0x1f9ff4: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x1F9FF8u;
        goto label_1f9ff8;
    }
    ctx->pc = 0x1F9FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F9FF8u);
        ctx->pc = 0x1F9FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9FF0u;
            // 0x1f9ff4: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9FF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9FF8u; }
            if (ctx->pc != 0x1F9FF8u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9FF8u;
label_1f9ff8:
    // 0x1f9ff8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f9ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f9ffc:
    // 0x1f9ffc: 0xa643000c  sh          $v1, 0xC($s2)
    ctx->pc = 0x1f9ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 3));
label_1fa000:
    // 0x1fa000: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fa000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fa004:
    // 0x1fa004: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1fa004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1fa008:
    // 0x1fa008: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1fa008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1fa00c:
    // 0x1fa00c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fa00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fa010:
    // 0x1fa010: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1fa010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1fa014:
    // 0x1fa014: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1fa014u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fa018:
    // 0x1fa018: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1fa01c:
    if (ctx->pc == 0x1FA01Cu) {
        ctx->pc = 0x1FA01Cu;
            // 0x1fa01c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1FA020u;
        goto label_1fa020;
    }
    ctx->pc = 0x1FA018u;
    {
        const bool branch_taken_0x1fa018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA018u;
            // 0x1fa01c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa018) {
            ctx->pc = 0x1FA048u;
            goto label_1fa048;
        }
    }
    ctx->pc = 0x1FA020u;
label_1fa020:
    // 0x1fa020: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1fa020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1fa024:
    // 0x1fa024: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1fa024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1fa028:
    // 0x1fa028: 0x2463b088  addiu       $v1, $v1, -0x4F78
    ctx->pc = 0x1fa028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946952));
label_1fa02c:
    // 0x1fa02c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fa02cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fa030:
    // 0x1fa030: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fa030u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1fa034:
    // 0x1fa034: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1fa034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1fa038:
    // 0x1fa038: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fa038u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1fa03c:
    // 0x1fa03c: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1fa03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1fa040:
    // 0x1fa040: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1fa040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1fa044:
    // 0x1fa044: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1fa044u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1fa048:
    // 0x1fa048: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fa048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fa04c:
    // 0x1fa04c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fa04cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fa050:
    // 0x1fa050: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fa050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa054:
    // 0x1fa054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fa054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa058:
    // 0x1fa058: 0x3e00008  jr          $ra
label_1fa05c:
    if (ctx->pc == 0x1FA05Cu) {
        ctx->pc = 0x1FA05Cu;
            // 0x1fa05c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1FA060u;
        goto label_1fa060;
    }
    ctx->pc = 0x1FA058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA058u;
            // 0x1fa05c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA060u;
label_1fa060:
    // 0x1fa060: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fa060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1fa064:
    // 0x1fa064: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x1fa064u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_1fa068:
    // 0x1fa068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fa068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fa06c:
    // 0x1fa06c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1fa06cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1fa070:
    // 0x1fa070: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fa070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fa074:
    // 0x1fa074: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x1fa074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_1fa078:
    // 0x1fa078: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1fa078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1fa07c:
    // 0x1fa07c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1fa07cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fa080:
    // 0x1fa080: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1fa084:
    if (ctx->pc == 0x1FA084u) {
        ctx->pc = 0x1FA084u;
            // 0x1fa084: 0x2529ea60  addiu       $t1, $t1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961760));
        ctx->pc = 0x1FA088u;
        goto label_1fa088;
    }
    ctx->pc = 0x1FA080u;
    {
        const bool branch_taken_0x1fa080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA080u;
            // 0x1fa084: 0x2529ea60  addiu       $t1, $t1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa080) {
            ctx->pc = 0x1FA0B0u;
            goto label_1fa0b0;
        }
    }
    ctx->pc = 0x1FA088u;
label_1fa088:
    // 0x1fa088: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x1fa088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1fa08c:
    // 0x1fa08c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1fa08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1fa090:
    // 0x1fa090: 0x2463b078  addiu       $v1, $v1, -0x4F88
    ctx->pc = 0x1fa090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946936));
label_1fa094:
    // 0x1fa094: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fa094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fa098:
    // 0x1fa098: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fa098u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1fa09c:
    // 0x1fa09c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1fa09cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1fa0a0:
    // 0x1fa0a0: 0x400ac803  .word       0x400AC803                   # mfc0        $t2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fa0a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ctx->cop0_perf);
label_1fa0a4:
    // 0x1fa0a4: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1fa0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1fa0a8:
    // 0x1fa0a8: 0xac8a0008  sw          $t2, 0x8($a0)
    ctx->pc = 0x1fa0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
label_1fa0ac:
    // 0x1fa0ac: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x1fa0acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
label_1fa0b0:
    // 0x1fa0b0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1fa0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_1fa0b4:
    // 0x1fa0b4: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x1fa0b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1fa0b8:
    // 0x1fa0b8: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x1fa0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
label_1fa0bc:
    // 0x1fa0bc: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x1fa0bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fa0c0:
    // 0x1fa0c0: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1fa0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa0c4:
    // 0x1fa0c4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1fa0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1fa0c8:
    // 0x1fa0c8: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x1fa0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1fa0cc:
    // 0x1fa0cc: 0xc5220010  lwc1        $f2, 0x10($t1)
    ctx->pc = 0x1fa0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fa0d0:
    // 0x1fa0d0: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x1fa0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa0d4:
    // 0x1fa0d4: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x1fa0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fa0d8:
    // 0x1fa0d8: 0xc4640030  lwc1        $f4, 0x30($v1)
    ctx->pc = 0x1fa0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fa0dc:
    // 0x1fa0dc: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x1fa0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1fa0e0:
    // 0x1fa0e0: 0xc4a30034  lwc1        $f3, 0x34($a1)
    ctx->pc = 0x1fa0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fa0e4:
    // 0x1fa0e4: 0xc4a50030  lwc1        $f5, 0x30($a1)
    ctx->pc = 0x1fa0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fa0e8:
    // 0x1fa0e8: 0xc4a60038  lwc1        $f6, 0x38($a1)
    ctx->pc = 0x1fa0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1fa0ec:
    // 0x1fa0ec: 0x460119c1  sub.s       $f7, $f3, $f1
    ctx->pc = 0x1fa0ecu;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_1fa0f0:
    // 0x1fa0f0: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x1fa0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa0f4:
    // 0x1fa0f4: 0x46042a01  sub.s       $f8, $f5, $f4
    ctx->pc = 0x1fa0f4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1fa0f8:
    // 0x1fa0f8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1fa0f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1fa0fc:
    // 0x1fa0fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fa0fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1fa100:
    // 0x1fa100: 0xc4650038  lwc1        $f5, 0x38($v1)
    ctx->pc = 0x1fa100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fa104:
    // 0x1fa104: 0x4607381a  mula.s      $f7, $f7
    ctx->pc = 0x1fa104u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_1fa108:
    // 0x1fa108: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1fa108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1fa10c:
    // 0x1fa10c: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x1fa10cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_1fa110:
    // 0x1fa110: 0x4608401e  madda.s     $f8, $f8
    ctx->pc = 0x1fa110u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[8]));
label_1fa114:
    // 0x1fa114: 0x4605285c  madd.s      $f1, $f5, $f5
    ctx->pc = 0x1fa114u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
label_1fa118:
    // 0x1fa118: 0xc4a4003c  lwc1        $f4, 0x3C($a1)
    ctx->pc = 0x1fa118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fa11c:
    // 0x1fa11c: 0xc463003c  lwc1        $f3, 0x3C($v1)
    ctx->pc = 0x1fa11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fa120:
    // 0x1fa120: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fa120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fa124:
    // 0x1fa124: 0x45000035  bc1f        . + 4 + (0x35 << 2)
label_1fa128:
    if (ctx->pc == 0x1FA128u) {
        ctx->pc = 0x1FA128u;
            // 0x1fa128: 0x460320c1  sub.s       $f3, $f4, $f3 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
        ctx->pc = 0x1FA12Cu;
        goto label_1fa12c;
    }
    ctx->pc = 0x1FA124u;
    {
        const bool branch_taken_0x1fa124 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FA128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA124u;
            // 0x1fa128: 0x460320c1  sub.s       $f3, $f4, $f3 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa124) {
            ctx->pc = 0x1FA1FCu;
            goto label_1fa1fc;
        }
    }
    ctx->pc = 0x1FA12Cu;
label_1fa12c:
    // 0x1fa12c: 0x46090836  c.le.s      $f1, $f9
    ctx->pc = 0x1fa12cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fa130:
    // 0x1fa130: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
label_1fa134:
    if (ctx->pc == 0x1FA134u) {
        ctx->pc = 0x1FA134u;
            // 0x1fa134: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->pc = 0x1FA138u;
        goto label_1fa138;
    }
    ctx->pc = 0x1FA130u;
    {
        const bool branch_taken_0x1fa130 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa130) {
            ctx->pc = 0x1FA134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA130u;
            // 0x1fa134: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FA170u;
            goto label_1fa170;
        }
    }
    ctx->pc = 0x1FA138u;
label_1fa138:
    // 0x1fa138: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fa138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1fa13c:
    // 0x1fa13c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fa13cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa140:
    // 0x1fa140: 0x0  nop
    ctx->pc = 0x1fa140u;
    // NOP
label_1fa144:
    // 0x1fa144: 0x46010096  rsqrt.s     $f2, $f0, $f1
    ctx->pc = 0x1fa144u;
    ctx->f[2] = 1.0f / sqrtf(ctx->f[0]);
label_1fa148:
    // 0x1fa148: 0x46081002  mul.s       $f0, $f2, $f8
    ctx->pc = 0x1fa148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
label_1fa14c:
    // 0x1fa14c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1fa14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1fa150:
    // 0x1fa150: 0x46071002  mul.s       $f0, $f2, $f7
    ctx->pc = 0x1fa150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_1fa154:
    // 0x1fa154: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1fa154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1fa158:
    // 0x1fa158: 0x46051002  mul.s       $f0, $f2, $f5
    ctx->pc = 0x1fa158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_1fa15c:
    // 0x1fa15c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1fa15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1fa160:
    // 0x1fa160: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x1fa160u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1fa164:
    // 0x1fa164: 0x46020a42  mul.s       $f9, $f1, $f2
    ctx->pc = 0x1fa164u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1fa168:
    // 0x1fa168: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fa16c:
    if (ctx->pc == 0x1FA16Cu) {
        ctx->pc = 0x1FA16Cu;
            // 0x1fa16c: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x1FA170u;
        goto label_1fa170;
    }
    ctx->pc = 0x1FA168u;
    {
        const bool branch_taken_0x1fa168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA168u;
            // 0x1fa16c: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa168) {
            ctx->pc = 0x1FA18Cu;
            goto label_1fa18c;
        }
    }
    ctx->pc = 0x1FA170u;
label_1fa170:
    // 0x1fa170: 0x2463d6e0  addiu       $v1, $v1, -0x2920
    ctx->pc = 0x1fa170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956768));
label_1fa174:
    // 0x1fa174: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1fa174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fa178:
    // 0x1fa178: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1fa178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa17c:
    // 0x1fa17c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1fa17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa180:
    // 0x1fa180: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1fa180u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1fa184:
    // 0x1fa184: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1fa184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1fa188:
    // 0x1fa188: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1fa188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1fa18c:
    // 0x1fa18c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1fa18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa190:
    // 0x1fa190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fa190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa194:
    // 0x1fa194: 0xc4e40010  lwc1        $f4, 0x10($a3)
    ctx->pc = 0x1fa194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fa198:
    // 0x1fa198: 0xc5230010  lwc1        $f3, 0x10($t1)
    ctx->pc = 0x1fa198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fa19c:
    // 0x1fa19c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1fa19cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fa1a0:
    // 0x1fa1a0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1fa1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa1a4:
    // 0x1fa1a4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fa1a4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fa1a8:
    // 0x1fa1a8: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x1fa1a8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_1fa1ac:
    // 0x1fa1ac: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x1fa1acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_1fa1b0:
    // 0x1fa1b0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1fa1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1fa1b4:
    // 0x1fa1b4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1fa1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa1b8:
    // 0x1fa1b8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1fa1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa1bc:
    // 0x1fa1bc: 0x460348c1  sub.s       $f3, $f9, $f3
    ctx->pc = 0x1fa1bcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
label_1fa1c0:
    // 0x1fa1c0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fa1c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fa1c4:
    // 0x1fa1c4: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x1fa1c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_1fa1c8:
    // 0x1fa1c8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1fa1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1fa1cc:
    // 0x1fa1cc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1fa1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa1d0:
    // 0x1fa1d0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1fa1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa1d4:
    // 0x1fa1d4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fa1d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fa1d8:
    // 0x1fa1d8: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x1fa1d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_1fa1dc:
    // 0x1fa1dc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1fa1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1fa1e0:
    // 0x1fa1e0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1fa1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa1e4:
    // 0x1fa1e4: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1fa1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa1e8:
    // 0x1fa1e8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fa1e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fa1ec:
    // 0x1fa1ec: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x1fa1ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_1fa1f0:
    // 0x1fa1f0: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x1fa1f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1fa1f4:
    // 0x1fa1f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fa1f8:
    if (ctx->pc == 0x1FA1F8u) {
        ctx->pc = 0x1FA1F8u;
            // 0x1fa1f8: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->pc = 0x1FA1FCu;
        goto label_1fa1fc;
    }
    ctx->pc = 0x1FA1F4u;
    {
        const bool branch_taken_0x1fa1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA1F4u;
            // 0x1fa1f8: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa1f4) {
            ctx->pc = 0x1FA200u;
            goto label_1fa200;
        }
    }
    ctx->pc = 0x1FA1FCu;
label_1fa1fc:
    // 0x1fa1fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1fa1fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa200:
    // 0x1fa200: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1fa200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_1fa204:
    // 0x1fa204: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1fa204u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1fa208:
    // 0x1fa208: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1fa20c:
    if (ctx->pc == 0x1FA20Cu) {
        ctx->pc = 0x1FA210u;
        goto label_1fa210;
    }
    ctx->pc = 0x1FA208u;
    {
        const bool branch_taken_0x1fa208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa208) {
            ctx->pc = 0x1FA224u;
            goto label_1fa224;
        }
    }
    ctx->pc = 0x1FA210u;
label_1fa210:
    // 0x1fa210: 0x8d190000  lw          $t9, 0x0($t0)
    ctx->pc = 0x1fa210u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1fa214:
    // 0x1fa214: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1fa214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fa218:
    // 0x1fa218: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1fa218u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1fa21c:
    // 0x1fa21c: 0x320f809  jalr        $t9
label_1fa220:
    if (ctx->pc == 0x1FA220u) {
        ctx->pc = 0x1FA220u;
            // 0x1fa220: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FA224u;
        goto label_1fa224;
    }
    ctx->pc = 0x1FA21Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FA224u);
        ctx->pc = 0x1FA220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA21Cu;
            // 0x1fa220: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FA224u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FA224u; }
            if (ctx->pc != 0x1FA224u) { return; }
        }
        }
    }
    ctx->pc = 0x1FA224u;
label_1fa224:
    // 0x1fa224: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fa224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fa228:
    // 0x1fa228: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1fa228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1fa22c:
    // 0x1fa22c: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1fa22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1fa230:
    // 0x1fa230: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fa230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fa234:
    // 0x1fa234: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1fa234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1fa238:
    // 0x1fa238: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1fa238u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fa23c:
    // 0x1fa23c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1fa240:
    if (ctx->pc == 0x1FA240u) {
        ctx->pc = 0x1FA240u;
            // 0x1fa240: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1FA244u;
        goto label_1fa244;
    }
    ctx->pc = 0x1FA23Cu;
    {
        const bool branch_taken_0x1fa23c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA23Cu;
            // 0x1fa240: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa23c) {
            ctx->pc = 0x1FA26Cu;
            goto label_1fa26c;
        }
    }
    ctx->pc = 0x1FA244u;
label_1fa244:
    // 0x1fa244: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1fa244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1fa248:
    // 0x1fa248: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1fa248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1fa24c:
    // 0x1fa24c: 0x2463b088  addiu       $v1, $v1, -0x4F78
    ctx->pc = 0x1fa24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946952));
label_1fa250:
    // 0x1fa250: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fa250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fa254:
    // 0x1fa254: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fa254u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1fa258:
    // 0x1fa258: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1fa258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1fa25c:
    // 0x1fa25c: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fa25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1fa260:
    // 0x1fa260: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1fa260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1fa264:
    // 0x1fa264: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1fa264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1fa268:
    // 0x1fa268: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1fa268u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1fa26c:
    // 0x1fa26c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fa26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa270:
    // 0x1fa270: 0x3e00008  jr          $ra
label_1fa274:
    if (ctx->pc == 0x1FA274u) {
        ctx->pc = 0x1FA274u;
            // 0x1fa274: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1FA278u;
        goto label_1fa278;
    }
    ctx->pc = 0x1FA270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA270u;
            // 0x1fa274: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA278u;
label_1fa278:
    // 0x1fa278: 0x0  nop
    ctx->pc = 0x1fa278u;
    // NOP
label_1fa27c:
    // 0x1fa27c: 0x0  nop
    ctx->pc = 0x1fa27cu;
    // NOP
label_1fa280:
    // 0x1fa280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fa280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1fa284:
    // 0x1fa284: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x1fa284u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_1fa288:
    // 0x1fa288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fa288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fa28c:
    // 0x1fa28c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x1fa28cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_1fa290:
    // 0x1fa290: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fa290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fa294:
    // 0x1fa294: 0x8d08ea64  lw          $t0, -0x159C($t0)
    ctx->pc = 0x1fa294u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294961764)));
label_1fa298:
    // 0x1fa298: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1fa298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1fa29c:
    // 0x1fa29c: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x1fa29cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fa2a0:
    // 0x1fa2a0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1fa2a4:
    if (ctx->pc == 0x1FA2A4u) {
        ctx->pc = 0x1FA2A4u;
            // 0x1fa2a4: 0x2529ea60  addiu       $t1, $t1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961760));
        ctx->pc = 0x1FA2A8u;
        goto label_1fa2a8;
    }
    ctx->pc = 0x1FA2A0u;
    {
        const bool branch_taken_0x1fa2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA2A0u;
            // 0x1fa2a4: 0x2529ea60  addiu       $t1, $t1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2a0) {
            ctx->pc = 0x1FA2D0u;
            goto label_1fa2d0;
        }
    }
    ctx->pc = 0x1FA2A8u;
label_1fa2a8:
    // 0x1fa2a8: 0x8d280004  lw          $t0, 0x4($t1)
    ctx->pc = 0x1fa2a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1fa2ac:
    // 0x1fa2ac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1fa2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1fa2b0:
    // 0x1fa2b0: 0x2463b078  addiu       $v1, $v1, -0x4F88
    ctx->pc = 0x1fa2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946936));
label_1fa2b4:
    // 0x1fa2b4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1fa2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_1fa2b8:
    // 0x1fa2b8: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fa2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1fa2bc:
    // 0x1fa2bc: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x1fa2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_1fa2c0:
    // 0x1fa2c0: 0x400ac803  .word       0x400AC803                   # mfc0        $t2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fa2c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ctx->cop0_perf);
label_1fa2c4:
    // 0x1fa2c4: 0x2503000c  addiu       $v1, $t0, 0xC
    ctx->pc = 0x1fa2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_1fa2c8:
    // 0x1fa2c8: 0xad0a0008  sw          $t2, 0x8($t0)
    ctx->pc = 0x1fa2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 10));
label_1fa2cc:
    // 0x1fa2cc: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x1fa2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
label_1fa2d0:
    // 0x1fa2d0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1fa2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1fa2d4:
    // 0x1fa2d4: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x1fa2d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1fa2d8:
    // 0x1fa2d8: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x1fa2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
label_1fa2dc:
    // 0x1fa2dc: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1fa2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa2e0:
    // 0x1fa2e0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1fa2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1fa2e4:
    // 0x1fa2e4: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x1fa2e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fa2e8:
    // 0x1fa2e8: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1fa2e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fa2ec:
    // 0x1fa2ec: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1fa2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fa2f0:
    // 0x1fa2f0: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x1fa2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa2f4:
    // 0x1fa2f4: 0xc5220010  lwc1        $f2, 0x10($t1)
    ctx->pc = 0x1fa2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fa2f8:
    // 0x1fa2f8: 0xc4640030  lwc1        $f4, 0x30($v1)
    ctx->pc = 0x1fa2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fa2fc:
    // 0x1fa2fc: 0xc4c30034  lwc1        $f3, 0x34($a2)
    ctx->pc = 0x1fa2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fa300:
    // 0x1fa300: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x1fa300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1fa304:
    // 0x1fa304: 0xc4c50030  lwc1        $f5, 0x30($a2)
    ctx->pc = 0x1fa304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fa308:
    // 0x1fa308: 0xc4c60038  lwc1        $f6, 0x38($a2)
    ctx->pc = 0x1fa308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1fa30c:
    // 0x1fa30c: 0x460119c1  sub.s       $f7, $f3, $f1
    ctx->pc = 0x1fa30cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_1fa310:
    // 0x1fa310: 0xc5010010  lwc1        $f1, 0x10($t0)
    ctx->pc = 0x1fa310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa314:
    // 0x1fa314: 0x46042a01  sub.s       $f8, $f5, $f4
    ctx->pc = 0x1fa314u;
    ctx->f[8] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1fa318:
    // 0x1fa318: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1fa318u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1fa31c:
    // 0x1fa31c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fa31cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1fa320:
    // 0x1fa320: 0xc4650038  lwc1        $f5, 0x38($v1)
    ctx->pc = 0x1fa320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fa324:
    // 0x1fa324: 0x4607381a  mula.s      $f7, $f7
    ctx->pc = 0x1fa324u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_1fa328:
    // 0x1fa328: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1fa328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1fa32c:
    // 0x1fa32c: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x1fa32cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_1fa330:
    // 0x1fa330: 0x4608401e  madda.s     $f8, $f8
    ctx->pc = 0x1fa330u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[8]));
label_1fa334:
    // 0x1fa334: 0x4605285c  madd.s      $f1, $f5, $f5
    ctx->pc = 0x1fa334u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
label_1fa338:
    // 0x1fa338: 0xc4c4003c  lwc1        $f4, 0x3C($a2)
    ctx->pc = 0x1fa338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fa33c:
    // 0x1fa33c: 0xc463003c  lwc1        $f3, 0x3C($v1)
    ctx->pc = 0x1fa33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fa340:
    // 0x1fa340: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fa340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fa344:
    // 0x1fa344: 0x45000035  bc1f        . + 4 + (0x35 << 2)
label_1fa348:
    if (ctx->pc == 0x1FA348u) {
        ctx->pc = 0x1FA348u;
            // 0x1fa348: 0x460320c1  sub.s       $f3, $f4, $f3 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
        ctx->pc = 0x1FA34Cu;
        goto label_1fa34c;
    }
    ctx->pc = 0x1FA344u;
    {
        const bool branch_taken_0x1fa344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FA348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA344u;
            // 0x1fa348: 0x460320c1  sub.s       $f3, $f4, $f3 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa344) {
            ctx->pc = 0x1FA41Cu;
            goto label_1fa41c;
        }
    }
    ctx->pc = 0x1FA34Cu;
label_1fa34c:
    // 0x1fa34c: 0x46090836  c.le.s      $f1, $f9
    ctx->pc = 0x1fa34cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fa350:
    // 0x1fa350: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
label_1fa354:
    if (ctx->pc == 0x1FA354u) {
        ctx->pc = 0x1FA354u;
            // 0x1fa354: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->pc = 0x1FA358u;
        goto label_1fa358;
    }
    ctx->pc = 0x1FA350u;
    {
        const bool branch_taken_0x1fa350 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa350) {
            ctx->pc = 0x1FA354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA350u;
            // 0x1fa354: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FA390u;
            goto label_1fa390;
        }
    }
    ctx->pc = 0x1FA358u;
label_1fa358:
    // 0x1fa358: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fa358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1fa35c:
    // 0x1fa35c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fa35cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa360:
    // 0x1fa360: 0x0  nop
    ctx->pc = 0x1fa360u;
    // NOP
label_1fa364:
    // 0x1fa364: 0x46010096  rsqrt.s     $f2, $f0, $f1
    ctx->pc = 0x1fa364u;
    ctx->f[2] = 1.0f / sqrtf(ctx->f[0]);
label_1fa368:
    // 0x1fa368: 0x46081002  mul.s       $f0, $f2, $f8
    ctx->pc = 0x1fa368u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
label_1fa36c:
    // 0x1fa36c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1fa36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1fa370:
    // 0x1fa370: 0x46071002  mul.s       $f0, $f2, $f7
    ctx->pc = 0x1fa370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_1fa374:
    // 0x1fa374: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1fa374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1fa378:
    // 0x1fa378: 0x46051002  mul.s       $f0, $f2, $f5
    ctx->pc = 0x1fa378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_1fa37c:
    // 0x1fa37c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1fa37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1fa380:
    // 0x1fa380: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x1fa380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1fa384:
    // 0x1fa384: 0x46020a42  mul.s       $f9, $f1, $f2
    ctx->pc = 0x1fa384u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1fa388:
    // 0x1fa388: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fa38c:
    if (ctx->pc == 0x1FA38Cu) {
        ctx->pc = 0x1FA38Cu;
            // 0x1fa38c: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x1FA390u;
        goto label_1fa390;
    }
    ctx->pc = 0x1FA388u;
    {
        const bool branch_taken_0x1fa388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA388u;
            // 0x1fa38c: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa388) {
            ctx->pc = 0x1FA3ACu;
            goto label_1fa3ac;
        }
    }
    ctx->pc = 0x1FA390u;
label_1fa390:
    // 0x1fa390: 0x2463d6e0  addiu       $v1, $v1, -0x2920
    ctx->pc = 0x1fa390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956768));
label_1fa394:
    // 0x1fa394: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1fa394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fa398:
    // 0x1fa398: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1fa398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa39c:
    // 0x1fa39c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1fa39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa3a0:
    // 0x1fa3a0: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1fa3a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1fa3a4:
    // 0x1fa3a4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1fa3a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1fa3a8:
    // 0x1fa3a8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1fa3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1fa3ac:
    // 0x1fa3ac: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1fa3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa3b0:
    // 0x1fa3b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fa3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa3b4:
    // 0x1fa3b4: 0xc5040010  lwc1        $f4, 0x10($t0)
    ctx->pc = 0x1fa3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fa3b8:
    // 0x1fa3b8: 0xc5230010  lwc1        $f3, 0x10($t1)
    ctx->pc = 0x1fa3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fa3bc:
    // 0x1fa3bc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1fa3bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fa3c0:
    // 0x1fa3c0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1fa3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa3c4:
    // 0x1fa3c4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fa3c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fa3c8:
    // 0x1fa3c8: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x1fa3c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_1fa3cc:
    // 0x1fa3cc: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x1fa3ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_1fa3d0:
    // 0x1fa3d0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1fa3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1fa3d4:
    // 0x1fa3d4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1fa3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa3d8:
    // 0x1fa3d8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1fa3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa3dc:
    // 0x1fa3dc: 0x460348c1  sub.s       $f3, $f9, $f3
    ctx->pc = 0x1fa3dcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
label_1fa3e0:
    // 0x1fa3e0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fa3e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fa3e4:
    // 0x1fa3e4: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x1fa3e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_1fa3e8:
    // 0x1fa3e8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1fa3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1fa3ec:
    // 0x1fa3ec: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1fa3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa3f0:
    // 0x1fa3f0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1fa3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa3f4:
    // 0x1fa3f4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fa3f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fa3f8:
    // 0x1fa3f8: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x1fa3f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_1fa3fc:
    // 0x1fa3fc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1fa3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1fa400:
    // 0x1fa400: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1fa400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa404:
    // 0x1fa404: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1fa404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa408:
    // 0x1fa408: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1fa408u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fa40c:
    // 0x1fa40c: 0x4601201c  madd.s      $f0, $f4, $f1
    ctx->pc = 0x1fa40cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[1]));
label_1fa410:
    // 0x1fa410: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x1fa410u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1fa414:
    // 0x1fa414: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fa418:
    if (ctx->pc == 0x1FA418u) {
        ctx->pc = 0x1FA418u;
            // 0x1fa418: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->pc = 0x1FA41Cu;
        goto label_1fa41c;
    }
    ctx->pc = 0x1FA414u;
    {
        const bool branch_taken_0x1fa414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA414u;
            // 0x1fa418: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa414) {
            ctx->pc = 0x1FA420u;
            goto label_1fa420;
        }
    }
    ctx->pc = 0x1FA41Cu;
label_1fa41c:
    // 0x1fa41c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1fa41cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa420:
    // 0x1fa420: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1fa420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_1fa424:
    // 0x1fa424: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1fa424u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1fa428:
    // 0x1fa428: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1fa42c:
    if (ctx->pc == 0x1FA42Cu) {
        ctx->pc = 0x1FA430u;
        goto label_1fa430;
    }
    ctx->pc = 0x1FA428u;
    {
        const bool branch_taken_0x1fa428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa428) {
            ctx->pc = 0x1FA444u;
            goto label_1fa444;
        }
    }
    ctx->pc = 0x1FA430u;
label_1fa430:
    // 0x1fa430: 0x8cf90000  lw          $t9, 0x0($a3)
    ctx->pc = 0x1fa430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fa434:
    // 0x1fa434: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1fa434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fa438:
    // 0x1fa438: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1fa438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1fa43c:
    // 0x1fa43c: 0x320f809  jalr        $t9
label_1fa440:
    if (ctx->pc == 0x1FA440u) {
        ctx->pc = 0x1FA440u;
            // 0x1fa440: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FA444u;
        goto label_1fa444;
    }
    ctx->pc = 0x1FA43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FA444u);
        ctx->pc = 0x1FA440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA43Cu;
            // 0x1fa440: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FA444u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FA444u; }
            if (ctx->pc != 0x1FA444u) { return; }
        }
        }
    }
    ctx->pc = 0x1FA444u;
label_1fa444:
    // 0x1fa444: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fa444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fa448:
    // 0x1fa448: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1fa448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1fa44c:
    // 0x1fa44c: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1fa44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1fa450:
    // 0x1fa450: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fa450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fa454:
    // 0x1fa454: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1fa454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1fa458:
    // 0x1fa458: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1fa458u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fa45c:
    // 0x1fa45c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1fa460:
    if (ctx->pc == 0x1FA460u) {
        ctx->pc = 0x1FA460u;
            // 0x1fa460: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1FA464u;
        goto label_1fa464;
    }
    ctx->pc = 0x1FA45Cu;
    {
        const bool branch_taken_0x1fa45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA45Cu;
            // 0x1fa460: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa45c) {
            ctx->pc = 0x1FA48Cu;
            goto label_1fa48c;
        }
    }
    ctx->pc = 0x1FA464u;
label_1fa464:
    // 0x1fa464: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1fa464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1fa468:
    // 0x1fa468: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1fa468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1fa46c:
    // 0x1fa46c: 0x2463b088  addiu       $v1, $v1, -0x4F78
    ctx->pc = 0x1fa46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946952));
label_1fa470:
    // 0x1fa470: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fa470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fa474:
    // 0x1fa474: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fa474u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1fa478:
    // 0x1fa478: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1fa478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1fa47c:
    // 0x1fa47c: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fa47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1fa480:
    // 0x1fa480: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1fa480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1fa484:
    // 0x1fa484: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1fa484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1fa488:
    // 0x1fa488: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1fa488u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1fa48c:
    // 0x1fa48c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fa48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa490:
    // 0x1fa490: 0x3e00008  jr          $ra
label_1fa494:
    if (ctx->pc == 0x1FA494u) {
        ctx->pc = 0x1FA494u;
            // 0x1fa494: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1FA498u;
        goto label_1fa498;
    }
    ctx->pc = 0x1FA490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA490u;
            // 0x1fa494: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA498u;
label_1fa498:
    // 0x1fa498: 0x0  nop
    ctx->pc = 0x1fa498u;
    // NOP
label_1fa49c:
    // 0x1fa49c: 0x0  nop
    ctx->pc = 0x1fa49cu;
    // NOP
label_1fa4a0:
    // 0x1fa4a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fa4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fa4a4:
    // 0x1fa4a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fa4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fa4a8:
    // 0x1fa4a8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1fa4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fa4ac:
    // 0x1fa4ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fa4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fa4b0:
    // 0x1fa4b0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1fa4b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fa4b4:
    // 0x1fa4b4: 0xc07e934  jal         func_1FA4D0
label_1fa4b8:
    if (ctx->pc == 0x1FA4B8u) {
        ctx->pc = 0x1FA4B8u;
            // 0x1fa4b8: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FA4BCu;
        goto label_1fa4bc;
    }
    ctx->pc = 0x1FA4B4u;
    SET_GPR_U32(ctx, 31, 0x1FA4BCu);
    ctx->pc = 0x1FA4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA4B4u;
            // 0x1fa4b8: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FA4D0u;
    if (runtime->hasFunction(0x1FA4D0u)) {
        auto targetFn = runtime->lookupFunction(0x1FA4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA4BCu; }
        if (ctx->pc != 0x1FA4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FA4D0_0x1fa4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA4BCu; }
        if (ctx->pc != 0x1FA4BCu) { return; }
    }
    ctx->pc = 0x1FA4BCu;
label_1fa4bc:
    // 0x1fa4bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fa4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa4c0:
    // 0x1fa4c0: 0x3e00008  jr          $ra
label_1fa4c4:
    if (ctx->pc == 0x1FA4C4u) {
        ctx->pc = 0x1FA4C4u;
            // 0x1fa4c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FA4C8u;
        goto label_1fa4c8;
    }
    ctx->pc = 0x1FA4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA4C0u;
            // 0x1fa4c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA4C8u;
label_1fa4c8:
    // 0x1fa4c8: 0x0  nop
    ctx->pc = 0x1fa4c8u;
    // NOP
label_1fa4cc:
    // 0x1fa4cc: 0x0  nop
    ctx->pc = 0x1fa4ccu;
    // NOP
}
