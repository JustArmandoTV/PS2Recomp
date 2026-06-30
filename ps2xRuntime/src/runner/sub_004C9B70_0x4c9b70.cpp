#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C9B70
// Address: 0x4c9b70 - 0x4ca130
void sub_004C9B70_0x4c9b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C9B70_0x4c9b70");
#endif

    switch (ctx->pc) {
        case 0x4c9b70u: goto label_4c9b70;
        case 0x4c9b74u: goto label_4c9b74;
        case 0x4c9b78u: goto label_4c9b78;
        case 0x4c9b7cu: goto label_4c9b7c;
        case 0x4c9b80u: goto label_4c9b80;
        case 0x4c9b84u: goto label_4c9b84;
        case 0x4c9b88u: goto label_4c9b88;
        case 0x4c9b8cu: goto label_4c9b8c;
        case 0x4c9b90u: goto label_4c9b90;
        case 0x4c9b94u: goto label_4c9b94;
        case 0x4c9b98u: goto label_4c9b98;
        case 0x4c9b9cu: goto label_4c9b9c;
        case 0x4c9ba0u: goto label_4c9ba0;
        case 0x4c9ba4u: goto label_4c9ba4;
        case 0x4c9ba8u: goto label_4c9ba8;
        case 0x4c9bacu: goto label_4c9bac;
        case 0x4c9bb0u: goto label_4c9bb0;
        case 0x4c9bb4u: goto label_4c9bb4;
        case 0x4c9bb8u: goto label_4c9bb8;
        case 0x4c9bbcu: goto label_4c9bbc;
        case 0x4c9bc0u: goto label_4c9bc0;
        case 0x4c9bc4u: goto label_4c9bc4;
        case 0x4c9bc8u: goto label_4c9bc8;
        case 0x4c9bccu: goto label_4c9bcc;
        case 0x4c9bd0u: goto label_4c9bd0;
        case 0x4c9bd4u: goto label_4c9bd4;
        case 0x4c9bd8u: goto label_4c9bd8;
        case 0x4c9bdcu: goto label_4c9bdc;
        case 0x4c9be0u: goto label_4c9be0;
        case 0x4c9be4u: goto label_4c9be4;
        case 0x4c9be8u: goto label_4c9be8;
        case 0x4c9becu: goto label_4c9bec;
        case 0x4c9bf0u: goto label_4c9bf0;
        case 0x4c9bf4u: goto label_4c9bf4;
        case 0x4c9bf8u: goto label_4c9bf8;
        case 0x4c9bfcu: goto label_4c9bfc;
        case 0x4c9c00u: goto label_4c9c00;
        case 0x4c9c04u: goto label_4c9c04;
        case 0x4c9c08u: goto label_4c9c08;
        case 0x4c9c0cu: goto label_4c9c0c;
        case 0x4c9c10u: goto label_4c9c10;
        case 0x4c9c14u: goto label_4c9c14;
        case 0x4c9c18u: goto label_4c9c18;
        case 0x4c9c1cu: goto label_4c9c1c;
        case 0x4c9c20u: goto label_4c9c20;
        case 0x4c9c24u: goto label_4c9c24;
        case 0x4c9c28u: goto label_4c9c28;
        case 0x4c9c2cu: goto label_4c9c2c;
        case 0x4c9c30u: goto label_4c9c30;
        case 0x4c9c34u: goto label_4c9c34;
        case 0x4c9c38u: goto label_4c9c38;
        case 0x4c9c3cu: goto label_4c9c3c;
        case 0x4c9c40u: goto label_4c9c40;
        case 0x4c9c44u: goto label_4c9c44;
        case 0x4c9c48u: goto label_4c9c48;
        case 0x4c9c4cu: goto label_4c9c4c;
        case 0x4c9c50u: goto label_4c9c50;
        case 0x4c9c54u: goto label_4c9c54;
        case 0x4c9c58u: goto label_4c9c58;
        case 0x4c9c5cu: goto label_4c9c5c;
        case 0x4c9c60u: goto label_4c9c60;
        case 0x4c9c64u: goto label_4c9c64;
        case 0x4c9c68u: goto label_4c9c68;
        case 0x4c9c6cu: goto label_4c9c6c;
        case 0x4c9c70u: goto label_4c9c70;
        case 0x4c9c74u: goto label_4c9c74;
        case 0x4c9c78u: goto label_4c9c78;
        case 0x4c9c7cu: goto label_4c9c7c;
        case 0x4c9c80u: goto label_4c9c80;
        case 0x4c9c84u: goto label_4c9c84;
        case 0x4c9c88u: goto label_4c9c88;
        case 0x4c9c8cu: goto label_4c9c8c;
        case 0x4c9c90u: goto label_4c9c90;
        case 0x4c9c94u: goto label_4c9c94;
        case 0x4c9c98u: goto label_4c9c98;
        case 0x4c9c9cu: goto label_4c9c9c;
        case 0x4c9ca0u: goto label_4c9ca0;
        case 0x4c9ca4u: goto label_4c9ca4;
        case 0x4c9ca8u: goto label_4c9ca8;
        case 0x4c9cacu: goto label_4c9cac;
        case 0x4c9cb0u: goto label_4c9cb0;
        case 0x4c9cb4u: goto label_4c9cb4;
        case 0x4c9cb8u: goto label_4c9cb8;
        case 0x4c9cbcu: goto label_4c9cbc;
        case 0x4c9cc0u: goto label_4c9cc0;
        case 0x4c9cc4u: goto label_4c9cc4;
        case 0x4c9cc8u: goto label_4c9cc8;
        case 0x4c9cccu: goto label_4c9ccc;
        case 0x4c9cd0u: goto label_4c9cd0;
        case 0x4c9cd4u: goto label_4c9cd4;
        case 0x4c9cd8u: goto label_4c9cd8;
        case 0x4c9cdcu: goto label_4c9cdc;
        case 0x4c9ce0u: goto label_4c9ce0;
        case 0x4c9ce4u: goto label_4c9ce4;
        case 0x4c9ce8u: goto label_4c9ce8;
        case 0x4c9cecu: goto label_4c9cec;
        case 0x4c9cf0u: goto label_4c9cf0;
        case 0x4c9cf4u: goto label_4c9cf4;
        case 0x4c9cf8u: goto label_4c9cf8;
        case 0x4c9cfcu: goto label_4c9cfc;
        case 0x4c9d00u: goto label_4c9d00;
        case 0x4c9d04u: goto label_4c9d04;
        case 0x4c9d08u: goto label_4c9d08;
        case 0x4c9d0cu: goto label_4c9d0c;
        case 0x4c9d10u: goto label_4c9d10;
        case 0x4c9d14u: goto label_4c9d14;
        case 0x4c9d18u: goto label_4c9d18;
        case 0x4c9d1cu: goto label_4c9d1c;
        case 0x4c9d20u: goto label_4c9d20;
        case 0x4c9d24u: goto label_4c9d24;
        case 0x4c9d28u: goto label_4c9d28;
        case 0x4c9d2cu: goto label_4c9d2c;
        case 0x4c9d30u: goto label_4c9d30;
        case 0x4c9d34u: goto label_4c9d34;
        case 0x4c9d38u: goto label_4c9d38;
        case 0x4c9d3cu: goto label_4c9d3c;
        case 0x4c9d40u: goto label_4c9d40;
        case 0x4c9d44u: goto label_4c9d44;
        case 0x4c9d48u: goto label_4c9d48;
        case 0x4c9d4cu: goto label_4c9d4c;
        case 0x4c9d50u: goto label_4c9d50;
        case 0x4c9d54u: goto label_4c9d54;
        case 0x4c9d58u: goto label_4c9d58;
        case 0x4c9d5cu: goto label_4c9d5c;
        case 0x4c9d60u: goto label_4c9d60;
        case 0x4c9d64u: goto label_4c9d64;
        case 0x4c9d68u: goto label_4c9d68;
        case 0x4c9d6cu: goto label_4c9d6c;
        case 0x4c9d70u: goto label_4c9d70;
        case 0x4c9d74u: goto label_4c9d74;
        case 0x4c9d78u: goto label_4c9d78;
        case 0x4c9d7cu: goto label_4c9d7c;
        case 0x4c9d80u: goto label_4c9d80;
        case 0x4c9d84u: goto label_4c9d84;
        case 0x4c9d88u: goto label_4c9d88;
        case 0x4c9d8cu: goto label_4c9d8c;
        case 0x4c9d90u: goto label_4c9d90;
        case 0x4c9d94u: goto label_4c9d94;
        case 0x4c9d98u: goto label_4c9d98;
        case 0x4c9d9cu: goto label_4c9d9c;
        case 0x4c9da0u: goto label_4c9da0;
        case 0x4c9da4u: goto label_4c9da4;
        case 0x4c9da8u: goto label_4c9da8;
        case 0x4c9dacu: goto label_4c9dac;
        case 0x4c9db0u: goto label_4c9db0;
        case 0x4c9db4u: goto label_4c9db4;
        case 0x4c9db8u: goto label_4c9db8;
        case 0x4c9dbcu: goto label_4c9dbc;
        case 0x4c9dc0u: goto label_4c9dc0;
        case 0x4c9dc4u: goto label_4c9dc4;
        case 0x4c9dc8u: goto label_4c9dc8;
        case 0x4c9dccu: goto label_4c9dcc;
        case 0x4c9dd0u: goto label_4c9dd0;
        case 0x4c9dd4u: goto label_4c9dd4;
        case 0x4c9dd8u: goto label_4c9dd8;
        case 0x4c9ddcu: goto label_4c9ddc;
        case 0x4c9de0u: goto label_4c9de0;
        case 0x4c9de4u: goto label_4c9de4;
        case 0x4c9de8u: goto label_4c9de8;
        case 0x4c9decu: goto label_4c9dec;
        case 0x4c9df0u: goto label_4c9df0;
        case 0x4c9df4u: goto label_4c9df4;
        case 0x4c9df8u: goto label_4c9df8;
        case 0x4c9dfcu: goto label_4c9dfc;
        case 0x4c9e00u: goto label_4c9e00;
        case 0x4c9e04u: goto label_4c9e04;
        case 0x4c9e08u: goto label_4c9e08;
        case 0x4c9e0cu: goto label_4c9e0c;
        case 0x4c9e10u: goto label_4c9e10;
        case 0x4c9e14u: goto label_4c9e14;
        case 0x4c9e18u: goto label_4c9e18;
        case 0x4c9e1cu: goto label_4c9e1c;
        case 0x4c9e20u: goto label_4c9e20;
        case 0x4c9e24u: goto label_4c9e24;
        case 0x4c9e28u: goto label_4c9e28;
        case 0x4c9e2cu: goto label_4c9e2c;
        case 0x4c9e30u: goto label_4c9e30;
        case 0x4c9e34u: goto label_4c9e34;
        case 0x4c9e38u: goto label_4c9e38;
        case 0x4c9e3cu: goto label_4c9e3c;
        case 0x4c9e40u: goto label_4c9e40;
        case 0x4c9e44u: goto label_4c9e44;
        case 0x4c9e48u: goto label_4c9e48;
        case 0x4c9e4cu: goto label_4c9e4c;
        case 0x4c9e50u: goto label_4c9e50;
        case 0x4c9e54u: goto label_4c9e54;
        case 0x4c9e58u: goto label_4c9e58;
        case 0x4c9e5cu: goto label_4c9e5c;
        case 0x4c9e60u: goto label_4c9e60;
        case 0x4c9e64u: goto label_4c9e64;
        case 0x4c9e68u: goto label_4c9e68;
        case 0x4c9e6cu: goto label_4c9e6c;
        case 0x4c9e70u: goto label_4c9e70;
        case 0x4c9e74u: goto label_4c9e74;
        case 0x4c9e78u: goto label_4c9e78;
        case 0x4c9e7cu: goto label_4c9e7c;
        case 0x4c9e80u: goto label_4c9e80;
        case 0x4c9e84u: goto label_4c9e84;
        case 0x4c9e88u: goto label_4c9e88;
        case 0x4c9e8cu: goto label_4c9e8c;
        case 0x4c9e90u: goto label_4c9e90;
        case 0x4c9e94u: goto label_4c9e94;
        case 0x4c9e98u: goto label_4c9e98;
        case 0x4c9e9cu: goto label_4c9e9c;
        case 0x4c9ea0u: goto label_4c9ea0;
        case 0x4c9ea4u: goto label_4c9ea4;
        case 0x4c9ea8u: goto label_4c9ea8;
        case 0x4c9eacu: goto label_4c9eac;
        case 0x4c9eb0u: goto label_4c9eb0;
        case 0x4c9eb4u: goto label_4c9eb4;
        case 0x4c9eb8u: goto label_4c9eb8;
        case 0x4c9ebcu: goto label_4c9ebc;
        case 0x4c9ec0u: goto label_4c9ec0;
        case 0x4c9ec4u: goto label_4c9ec4;
        case 0x4c9ec8u: goto label_4c9ec8;
        case 0x4c9eccu: goto label_4c9ecc;
        case 0x4c9ed0u: goto label_4c9ed0;
        case 0x4c9ed4u: goto label_4c9ed4;
        case 0x4c9ed8u: goto label_4c9ed8;
        case 0x4c9edcu: goto label_4c9edc;
        case 0x4c9ee0u: goto label_4c9ee0;
        case 0x4c9ee4u: goto label_4c9ee4;
        case 0x4c9ee8u: goto label_4c9ee8;
        case 0x4c9eecu: goto label_4c9eec;
        case 0x4c9ef0u: goto label_4c9ef0;
        case 0x4c9ef4u: goto label_4c9ef4;
        case 0x4c9ef8u: goto label_4c9ef8;
        case 0x4c9efcu: goto label_4c9efc;
        case 0x4c9f00u: goto label_4c9f00;
        case 0x4c9f04u: goto label_4c9f04;
        case 0x4c9f08u: goto label_4c9f08;
        case 0x4c9f0cu: goto label_4c9f0c;
        case 0x4c9f10u: goto label_4c9f10;
        case 0x4c9f14u: goto label_4c9f14;
        case 0x4c9f18u: goto label_4c9f18;
        case 0x4c9f1cu: goto label_4c9f1c;
        case 0x4c9f20u: goto label_4c9f20;
        case 0x4c9f24u: goto label_4c9f24;
        case 0x4c9f28u: goto label_4c9f28;
        case 0x4c9f2cu: goto label_4c9f2c;
        case 0x4c9f30u: goto label_4c9f30;
        case 0x4c9f34u: goto label_4c9f34;
        case 0x4c9f38u: goto label_4c9f38;
        case 0x4c9f3cu: goto label_4c9f3c;
        case 0x4c9f40u: goto label_4c9f40;
        case 0x4c9f44u: goto label_4c9f44;
        case 0x4c9f48u: goto label_4c9f48;
        case 0x4c9f4cu: goto label_4c9f4c;
        case 0x4c9f50u: goto label_4c9f50;
        case 0x4c9f54u: goto label_4c9f54;
        case 0x4c9f58u: goto label_4c9f58;
        case 0x4c9f5cu: goto label_4c9f5c;
        case 0x4c9f60u: goto label_4c9f60;
        case 0x4c9f64u: goto label_4c9f64;
        case 0x4c9f68u: goto label_4c9f68;
        case 0x4c9f6cu: goto label_4c9f6c;
        case 0x4c9f70u: goto label_4c9f70;
        case 0x4c9f74u: goto label_4c9f74;
        case 0x4c9f78u: goto label_4c9f78;
        case 0x4c9f7cu: goto label_4c9f7c;
        case 0x4c9f80u: goto label_4c9f80;
        case 0x4c9f84u: goto label_4c9f84;
        case 0x4c9f88u: goto label_4c9f88;
        case 0x4c9f8cu: goto label_4c9f8c;
        case 0x4c9f90u: goto label_4c9f90;
        case 0x4c9f94u: goto label_4c9f94;
        case 0x4c9f98u: goto label_4c9f98;
        case 0x4c9f9cu: goto label_4c9f9c;
        case 0x4c9fa0u: goto label_4c9fa0;
        case 0x4c9fa4u: goto label_4c9fa4;
        case 0x4c9fa8u: goto label_4c9fa8;
        case 0x4c9facu: goto label_4c9fac;
        case 0x4c9fb0u: goto label_4c9fb0;
        case 0x4c9fb4u: goto label_4c9fb4;
        case 0x4c9fb8u: goto label_4c9fb8;
        case 0x4c9fbcu: goto label_4c9fbc;
        case 0x4c9fc0u: goto label_4c9fc0;
        case 0x4c9fc4u: goto label_4c9fc4;
        case 0x4c9fc8u: goto label_4c9fc8;
        case 0x4c9fccu: goto label_4c9fcc;
        case 0x4c9fd0u: goto label_4c9fd0;
        case 0x4c9fd4u: goto label_4c9fd4;
        case 0x4c9fd8u: goto label_4c9fd8;
        case 0x4c9fdcu: goto label_4c9fdc;
        case 0x4c9fe0u: goto label_4c9fe0;
        case 0x4c9fe4u: goto label_4c9fe4;
        case 0x4c9fe8u: goto label_4c9fe8;
        case 0x4c9fecu: goto label_4c9fec;
        case 0x4c9ff0u: goto label_4c9ff0;
        case 0x4c9ff4u: goto label_4c9ff4;
        case 0x4c9ff8u: goto label_4c9ff8;
        case 0x4c9ffcu: goto label_4c9ffc;
        case 0x4ca000u: goto label_4ca000;
        case 0x4ca004u: goto label_4ca004;
        case 0x4ca008u: goto label_4ca008;
        case 0x4ca00cu: goto label_4ca00c;
        case 0x4ca010u: goto label_4ca010;
        case 0x4ca014u: goto label_4ca014;
        case 0x4ca018u: goto label_4ca018;
        case 0x4ca01cu: goto label_4ca01c;
        case 0x4ca020u: goto label_4ca020;
        case 0x4ca024u: goto label_4ca024;
        case 0x4ca028u: goto label_4ca028;
        case 0x4ca02cu: goto label_4ca02c;
        case 0x4ca030u: goto label_4ca030;
        case 0x4ca034u: goto label_4ca034;
        case 0x4ca038u: goto label_4ca038;
        case 0x4ca03cu: goto label_4ca03c;
        case 0x4ca040u: goto label_4ca040;
        case 0x4ca044u: goto label_4ca044;
        case 0x4ca048u: goto label_4ca048;
        case 0x4ca04cu: goto label_4ca04c;
        case 0x4ca050u: goto label_4ca050;
        case 0x4ca054u: goto label_4ca054;
        case 0x4ca058u: goto label_4ca058;
        case 0x4ca05cu: goto label_4ca05c;
        case 0x4ca060u: goto label_4ca060;
        case 0x4ca064u: goto label_4ca064;
        case 0x4ca068u: goto label_4ca068;
        case 0x4ca06cu: goto label_4ca06c;
        case 0x4ca070u: goto label_4ca070;
        case 0x4ca074u: goto label_4ca074;
        case 0x4ca078u: goto label_4ca078;
        case 0x4ca07cu: goto label_4ca07c;
        case 0x4ca080u: goto label_4ca080;
        case 0x4ca084u: goto label_4ca084;
        case 0x4ca088u: goto label_4ca088;
        case 0x4ca08cu: goto label_4ca08c;
        case 0x4ca090u: goto label_4ca090;
        case 0x4ca094u: goto label_4ca094;
        case 0x4ca098u: goto label_4ca098;
        case 0x4ca09cu: goto label_4ca09c;
        case 0x4ca0a0u: goto label_4ca0a0;
        case 0x4ca0a4u: goto label_4ca0a4;
        case 0x4ca0a8u: goto label_4ca0a8;
        case 0x4ca0acu: goto label_4ca0ac;
        case 0x4ca0b0u: goto label_4ca0b0;
        case 0x4ca0b4u: goto label_4ca0b4;
        case 0x4ca0b8u: goto label_4ca0b8;
        case 0x4ca0bcu: goto label_4ca0bc;
        case 0x4ca0c0u: goto label_4ca0c0;
        case 0x4ca0c4u: goto label_4ca0c4;
        case 0x4ca0c8u: goto label_4ca0c8;
        case 0x4ca0ccu: goto label_4ca0cc;
        case 0x4ca0d0u: goto label_4ca0d0;
        case 0x4ca0d4u: goto label_4ca0d4;
        case 0x4ca0d8u: goto label_4ca0d8;
        case 0x4ca0dcu: goto label_4ca0dc;
        case 0x4ca0e0u: goto label_4ca0e0;
        case 0x4ca0e4u: goto label_4ca0e4;
        case 0x4ca0e8u: goto label_4ca0e8;
        case 0x4ca0ecu: goto label_4ca0ec;
        case 0x4ca0f0u: goto label_4ca0f0;
        case 0x4ca0f4u: goto label_4ca0f4;
        case 0x4ca0f8u: goto label_4ca0f8;
        case 0x4ca0fcu: goto label_4ca0fc;
        case 0x4ca100u: goto label_4ca100;
        case 0x4ca104u: goto label_4ca104;
        case 0x4ca108u: goto label_4ca108;
        case 0x4ca10cu: goto label_4ca10c;
        case 0x4ca110u: goto label_4ca110;
        case 0x4ca114u: goto label_4ca114;
        case 0x4ca118u: goto label_4ca118;
        case 0x4ca11cu: goto label_4ca11c;
        case 0x4ca120u: goto label_4ca120;
        case 0x4ca124u: goto label_4ca124;
        case 0x4ca128u: goto label_4ca128;
        case 0x4ca12cu: goto label_4ca12c;
        default: break;
    }

    ctx->pc = 0x4c9b70u;

label_4c9b70:
    // 0x4c9b70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c9b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c9b74:
    // 0x4c9b74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c9b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c9b78:
    // 0x4c9b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c9b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c9b7c:
    // 0x4c9b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c9b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c9b80:
    // 0x4c9b80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c9b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c9b84:
    // 0x4c9b84: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_4c9b88:
    if (ctx->pc == 0x4C9B88u) {
        ctx->pc = 0x4C9B88u;
            // 0x4c9b88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9B8Cu;
        goto label_4c9b8c;
    }
    ctx->pc = 0x4C9B84u;
    {
        const bool branch_taken_0x4c9b84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9B84u;
            // 0x4c9b88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9b84) {
            ctx->pc = 0x4C9BB4u;
            goto label_4c9bb4;
        }
    }
    ctx->pc = 0x4C9B8Cu;
label_4c9b8c:
    // 0x4c9b8c: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_4c9b90:
    if (ctx->pc == 0x4C9B90u) {
        ctx->pc = 0x4C9B90u;
            // 0x4c9b90: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4C9B94u;
        goto label_4c9b94;
    }
    ctx->pc = 0x4C9B8Cu;
    {
        const bool branch_taken_0x4c9b8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9b8c) {
            ctx->pc = 0x4C9B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9B8Cu;
            // 0x4c9b90: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C9BA0u;
            goto label_4c9ba0;
        }
    }
    ctx->pc = 0x4C9B94u;
label_4c9b94:
    // 0x4c9b94: 0xc07507c  jal         func_1D41F0
label_4c9b98:
    if (ctx->pc == 0x4C9B98u) {
        ctx->pc = 0x4C9B98u;
            // 0x4c9b98: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x4C9B9Cu;
        goto label_4c9b9c;
    }
    ctx->pc = 0x4C9B94u;
    SET_GPR_U32(ctx, 31, 0x4C9B9Cu);
    ctx->pc = 0x4C9B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9B94u;
            // 0x4c9b98: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9B9Cu; }
        if (ctx->pc != 0x4C9B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9B9Cu; }
        if (ctx->pc != 0x4C9B9Cu) { return; }
    }
    ctx->pc = 0x4C9B9Cu;
label_4c9b9c:
    // 0x4c9b9c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4c9b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4c9ba0:
    // 0x4c9ba0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c9ba0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4c9ba4:
    // 0x4c9ba4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4c9ba8:
    if (ctx->pc == 0x4C9BA8u) {
        ctx->pc = 0x4C9BA8u;
            // 0x4c9ba8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9BACu;
        goto label_4c9bac;
    }
    ctx->pc = 0x4C9BA4u;
    {
        const bool branch_taken_0x4c9ba4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c9ba4) {
            ctx->pc = 0x4C9BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9BA4u;
            // 0x4c9ba8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C9BB8u;
            goto label_4c9bb8;
        }
    }
    ctx->pc = 0x4C9BACu;
label_4c9bac:
    // 0x4c9bac: 0xc0400a8  jal         func_1002A0
label_4c9bb0:
    if (ctx->pc == 0x4C9BB0u) {
        ctx->pc = 0x4C9BB0u;
            // 0x4c9bb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9BB4u;
        goto label_4c9bb4;
    }
    ctx->pc = 0x4C9BACu;
    SET_GPR_U32(ctx, 31, 0x4C9BB4u);
    ctx->pc = 0x4C9BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9BACu;
            // 0x4c9bb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9BB4u; }
        if (ctx->pc != 0x4C9BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9BB4u; }
        if (ctx->pc != 0x4C9BB4u) { return; }
    }
    ctx->pc = 0x4C9BB4u;
label_4c9bb4:
    // 0x4c9bb4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4c9bb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c9bb8:
    // 0x4c9bb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c9bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c9bbc:
    // 0x4c9bbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c9bbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c9bc0:
    // 0x4c9bc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c9bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c9bc4:
    // 0x4c9bc4: 0x3e00008  jr          $ra
label_4c9bc8:
    if (ctx->pc == 0x4C9BC8u) {
        ctx->pc = 0x4C9BC8u;
            // 0x4c9bc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C9BCCu;
        goto label_4c9bcc;
    }
    ctx->pc = 0x4C9BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C9BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9BC4u;
            // 0x4c9bc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C9BCCu;
label_4c9bcc:
    // 0x4c9bcc: 0x0  nop
    ctx->pc = 0x4c9bccu;
    // NOP
label_4c9bd0:
    // 0x4c9bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c9bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c9bd4:
    // 0x4c9bd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c9bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c9bd8:
    // 0x4c9bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c9bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c9bdc:
    // 0x4c9bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c9bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c9be0:
    // 0x4c9be0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c9be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c9be4:
    // 0x4c9be4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_4c9be8:
    if (ctx->pc == 0x4C9BE8u) {
        ctx->pc = 0x4C9BE8u;
            // 0x4c9be8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9BECu;
        goto label_4c9bec;
    }
    ctx->pc = 0x4C9BE4u;
    {
        const bool branch_taken_0x4c9be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9BE4u;
            // 0x4c9be8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9be4) {
            ctx->pc = 0x4C9CACu;
            goto label_4c9cac;
        }
    }
    ctx->pc = 0x4C9BECu;
label_4c9bec:
    // 0x4c9bec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c9becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c9bf0:
    // 0x4c9bf0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c9bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c9bf4:
    // 0x4c9bf4: 0x24631a50  addiu       $v1, $v1, 0x1A50
    ctx->pc = 0x4c9bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6736));
label_4c9bf8:
    // 0x4c9bf8: 0x24421a90  addiu       $v0, $v0, 0x1A90
    ctx->pc = 0x4c9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6800));
label_4c9bfc:
    // 0x4c9bfc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c9bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c9c00:
    // 0x4c9c00: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4c9c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4c9c04:
    // 0x4c9c04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c9c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c9c08:
    // 0x4c9c08: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4c9c08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4c9c0c:
    // 0x4c9c0c: 0x320f809  jalr        $t9
label_4c9c10:
    if (ctx->pc == 0x4C9C10u) {
        ctx->pc = 0x4C9C14u;
        goto label_4c9c14;
    }
    ctx->pc = 0x4C9C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C9C14u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C9C14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C9C14u; }
            if (ctx->pc != 0x4C9C14u) { return; }
        }
        }
    }
    ctx->pc = 0x4C9C14u;
label_4c9c14:
    // 0x4c9c14: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_4c9c18:
    if (ctx->pc == 0x4C9C18u) {
        ctx->pc = 0x4C9C18u;
            // 0x4c9c18: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4C9C1Cu;
        goto label_4c9c1c;
    }
    ctx->pc = 0x4C9C14u;
    {
        const bool branch_taken_0x4c9c14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9c14) {
            ctx->pc = 0x4C9C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9C14u;
            // 0x4c9c18: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C9C98u;
            goto label_4c9c98;
        }
    }
    ctx->pc = 0x4C9C1Cu;
label_4c9c1c:
    // 0x4c9c1c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4c9c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4c9c20:
    // 0x4c9c20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c9c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c9c24:
    // 0x4c9c24: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4c9c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4c9c28:
    // 0x4c9c28: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4c9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4c9c2c:
    // 0x4c9c2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c9c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c9c30:
    // 0x4c9c30: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4c9c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4c9c34:
    // 0x4c9c34: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x4c9c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_4c9c38:
    // 0x4c9c38: 0xc0aecc4  jal         func_2BB310
label_4c9c3c:
    if (ctx->pc == 0x4C9C3Cu) {
        ctx->pc = 0x4C9C3Cu;
            // 0x4c9c3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C9C40u;
        goto label_4c9c40;
    }
    ctx->pc = 0x4C9C38u;
    SET_GPR_U32(ctx, 31, 0x4C9C40u);
    ctx->pc = 0x4C9C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9C38u;
            // 0x4c9c3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9C40u; }
        if (ctx->pc != 0x4C9C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9C40u; }
        if (ctx->pc != 0x4C9C40u) { return; }
    }
    ctx->pc = 0x4C9C40u;
label_4c9c40:
    // 0x4c9c40: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4c9c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4c9c44:
    // 0x4c9c44: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4c9c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4c9c48:
    // 0x4c9c48: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c9c4c:
    if (ctx->pc == 0x4C9C4Cu) {
        ctx->pc = 0x4C9C4Cu;
            // 0x4c9c4c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4C9C50u;
        goto label_4c9c50;
    }
    ctx->pc = 0x4C9C48u;
    {
        const bool branch_taken_0x4c9c48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9c48) {
            ctx->pc = 0x4C9C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9C48u;
            // 0x4c9c4c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C9C64u;
            goto label_4c9c64;
        }
    }
    ctx->pc = 0x4C9C50u;
label_4c9c50:
    // 0x4c9c50: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4c9c50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4c9c54:
    // 0x4c9c54: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c9c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c9c58:
    // 0x4c9c58: 0x320f809  jalr        $t9
label_4c9c5c:
    if (ctx->pc == 0x4C9C5Cu) {
        ctx->pc = 0x4C9C5Cu;
            // 0x4c9c5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C9C60u;
        goto label_4c9c60;
    }
    ctx->pc = 0x4C9C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C9C60u);
        ctx->pc = 0x4C9C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9C58u;
            // 0x4c9c5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C9C60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C9C60u; }
            if (ctx->pc != 0x4C9C60u) { return; }
        }
        }
    }
    ctx->pc = 0x4C9C60u;
label_4c9c60:
    // 0x4c9c60: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4c9c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4c9c64:
    // 0x4c9c64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4c9c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4c9c68:
    // 0x4c9c68: 0xc0aec9c  jal         func_2BB270
label_4c9c6c:
    if (ctx->pc == 0x4C9C6Cu) {
        ctx->pc = 0x4C9C6Cu;
            // 0x4c9c6c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4C9C70u;
        goto label_4c9c70;
    }
    ctx->pc = 0x4C9C68u;
    SET_GPR_U32(ctx, 31, 0x4C9C70u);
    ctx->pc = 0x4C9C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9C68u;
            // 0x4c9c6c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9C70u; }
        if (ctx->pc != 0x4C9C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9C70u; }
        if (ctx->pc != 0x4C9C70u) { return; }
    }
    ctx->pc = 0x4C9C70u;
label_4c9c70:
    // 0x4c9c70: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4c9c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4c9c74:
    // 0x4c9c74: 0xc0aec88  jal         func_2BB220
label_4c9c78:
    if (ctx->pc == 0x4C9C78u) {
        ctx->pc = 0x4C9C78u;
            // 0x4c9c78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4C9C7Cu;
        goto label_4c9c7c;
    }
    ctx->pc = 0x4C9C74u;
    SET_GPR_U32(ctx, 31, 0x4C9C7Cu);
    ctx->pc = 0x4C9C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9C74u;
            // 0x4c9c78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9C7Cu; }
        if (ctx->pc != 0x4C9C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9C7Cu; }
        if (ctx->pc != 0x4C9C7Cu) { return; }
    }
    ctx->pc = 0x4C9C7Cu;
label_4c9c7c:
    // 0x4c9c7c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4c9c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4c9c80:
    // 0x4c9c80: 0xc0aec0c  jal         func_2BB030
label_4c9c84:
    if (ctx->pc == 0x4C9C84u) {
        ctx->pc = 0x4C9C84u;
            // 0x4c9c84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9C88u;
        goto label_4c9c88;
    }
    ctx->pc = 0x4C9C80u;
    SET_GPR_U32(ctx, 31, 0x4C9C88u);
    ctx->pc = 0x4C9C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9C80u;
            // 0x4c9c84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9C88u; }
        if (ctx->pc != 0x4C9C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9C88u; }
        if (ctx->pc != 0x4C9C88u) { return; }
    }
    ctx->pc = 0x4C9C88u;
label_4c9c88:
    // 0x4c9c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c9c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c9c8c:
    // 0x4c9c8c: 0xc0aeaa8  jal         func_2BAAA0
label_4c9c90:
    if (ctx->pc == 0x4C9C90u) {
        ctx->pc = 0x4C9C90u;
            // 0x4c9c90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9C94u;
        goto label_4c9c94;
    }
    ctx->pc = 0x4C9C8Cu;
    SET_GPR_U32(ctx, 31, 0x4C9C94u);
    ctx->pc = 0x4C9C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9C8Cu;
            // 0x4c9c90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9C94u; }
        if (ctx->pc != 0x4C9C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9C94u; }
        if (ctx->pc != 0x4C9C94u) { return; }
    }
    ctx->pc = 0x4C9C94u;
label_4c9c94:
    // 0x4c9c94: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4c9c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4c9c98:
    // 0x4c9c98: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c9c98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4c9c9c:
    // 0x4c9c9c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4c9ca0:
    if (ctx->pc == 0x4C9CA0u) {
        ctx->pc = 0x4C9CA0u;
            // 0x4c9ca0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9CA4u;
        goto label_4c9ca4;
    }
    ctx->pc = 0x4C9C9Cu;
    {
        const bool branch_taken_0x4c9c9c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c9c9c) {
            ctx->pc = 0x4C9CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9C9Cu;
            // 0x4c9ca0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C9CB0u;
            goto label_4c9cb0;
        }
    }
    ctx->pc = 0x4C9CA4u;
label_4c9ca4:
    // 0x4c9ca4: 0xc0400a8  jal         func_1002A0
label_4c9ca8:
    if (ctx->pc == 0x4C9CA8u) {
        ctx->pc = 0x4C9CA8u;
            // 0x4c9ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9CACu;
        goto label_4c9cac;
    }
    ctx->pc = 0x4C9CA4u;
    SET_GPR_U32(ctx, 31, 0x4C9CACu);
    ctx->pc = 0x4C9CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9CA4u;
            // 0x4c9ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9CACu; }
        if (ctx->pc != 0x4C9CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9CACu; }
        if (ctx->pc != 0x4C9CACu) { return; }
    }
    ctx->pc = 0x4C9CACu;
label_4c9cac:
    // 0x4c9cac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c9cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c9cb0:
    // 0x4c9cb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c9cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c9cb4:
    // 0x4c9cb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c9cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c9cb8:
    // 0x4c9cb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c9cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c9cbc:
    // 0x4c9cbc: 0x3e00008  jr          $ra
label_4c9cc0:
    if (ctx->pc == 0x4C9CC0u) {
        ctx->pc = 0x4C9CC0u;
            // 0x4c9cc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C9CC4u;
        goto label_4c9cc4;
    }
    ctx->pc = 0x4C9CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C9CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9CBCu;
            // 0x4c9cc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C9CC4u;
label_4c9cc4:
    // 0x4c9cc4: 0x0  nop
    ctx->pc = 0x4c9cc4u;
    // NOP
label_4c9cc8:
    // 0x4c9cc8: 0x0  nop
    ctx->pc = 0x4c9cc8u;
    // NOP
label_4c9ccc:
    // 0x4c9ccc: 0x0  nop
    ctx->pc = 0x4c9cccu;
    // NOP
label_4c9cd0:
    // 0x4c9cd0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x4c9cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_4c9cd4:
    // 0x4c9cd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c9cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c9cd8:
    // 0x4c9cd8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4c9cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4c9cdc:
    // 0x4c9cdc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4c9cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4c9ce0:
    // 0x4c9ce0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4c9ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4c9ce4:
    // 0x4c9ce4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4c9ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4c9ce8:
    // 0x4c9ce8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4c9ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4c9cec:
    // 0x4c9cec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4c9cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4c9cf0:
    // 0x4c9cf0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4c9cf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c9cf4:
    // 0x4c9cf4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4c9cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4c9cf8:
    // 0x4c9cf8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4c9cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4c9cfc:
    // 0x4c9cfc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4c9cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4c9d00:
    // 0x4c9d00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4c9d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4c9d04:
    // 0x4c9d04: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4c9d04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4c9d08:
    // 0x4c9d08: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4c9d08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4c9d0c:
    // 0x4c9d0c: 0x9084001c  lbu         $a0, 0x1C($a0)
    ctx->pc = 0x4c9d0cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_4c9d10:
    // 0x4c9d10: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
label_4c9d14:
    if (ctx->pc == 0x4C9D14u) {
        ctx->pc = 0x4C9D14u;
            // 0x4c9d14: 0xc7b50130  lwc1        $f21, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->pc = 0x4C9D18u;
        goto label_4c9d18;
    }
    ctx->pc = 0x4C9D10u;
    {
        const bool branch_taken_0x4c9d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4C9D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9D10u;
            // 0x4c9d14: 0xc7b50130  lwc1        $f21, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9d10) {
            ctx->pc = 0x4C9D64u;
            goto label_4c9d64;
        }
    }
    ctx->pc = 0x4C9D18u;
label_4c9d18:
    // 0x4c9d18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4c9d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c9d1c:
    // 0x4c9d1c: 0x508300f4  beql        $a0, $v1, . + 4 + (0xF4 << 2)
label_4c9d20:
    if (ctx->pc == 0x4C9D20u) {
        ctx->pc = 0x4C9D20u;
            // 0x4c9d20: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4C9D24u;
        goto label_4c9d24;
    }
    ctx->pc = 0x4C9D1Cu;
    {
        const bool branch_taken_0x4c9d1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c9d1c) {
            ctx->pc = 0x4C9D20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9D1Cu;
            // 0x4c9d20: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CA0F0u;
            goto label_4ca0f0;
        }
    }
    ctx->pc = 0x4C9D24u;
label_4c9d24:
    // 0x4c9d24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c9d28:
    // 0x4c9d28: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_4c9d2c:
    if (ctx->pc == 0x4C9D2Cu) {
        ctx->pc = 0x4C9D30u;
        goto label_4c9d30;
    }
    ctx->pc = 0x4C9D28u;
    {
        const bool branch_taken_0x4c9d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c9d28) {
            ctx->pc = 0x4C9D38u;
            goto label_4c9d38;
        }
    }
    ctx->pc = 0x4C9D30u;
label_4c9d30:
    // 0x4c9d30: 0x100000ee  b           . + 4 + (0xEE << 2)
label_4c9d34:
    if (ctx->pc == 0x4C9D34u) {
        ctx->pc = 0x4C9D38u;
        goto label_4c9d38;
    }
    ctx->pc = 0x4C9D30u;
    {
        const bool branch_taken_0x4c9d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9d30) {
            ctx->pc = 0x4CA0ECu;
            goto label_4ca0ec;
        }
    }
    ctx->pc = 0x4C9D38u;
label_4c9d38:
    // 0x4c9d38: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c9d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4c9d3c:
    // 0x4c9d3c: 0x8eb9000c  lw          $t9, 0xC($s5)
    ctx->pc = 0x4c9d3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_4c9d40:
    // 0x4c9d40: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4c9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4c9d44:
    // 0x4c9d44: 0x26a4000c  addiu       $a0, $s5, 0xC
    ctx->pc = 0x4c9d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_4c9d48:
    // 0x4c9d48: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4c9d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4c9d4c:
    // 0x4c9d4c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4c9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4c9d50:
    // 0x4c9d50: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4c9d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4c9d54:
    // 0x4c9d54: 0x320f809  jalr        $t9
label_4c9d58:
    if (ctx->pc == 0x4C9D58u) {
        ctx->pc = 0x4C9D58u;
            // 0x4c9d58: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4C9D5Cu;
        goto label_4c9d5c;
    }
    ctx->pc = 0x4C9D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C9D5Cu);
        ctx->pc = 0x4C9D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9D54u;
            // 0x4c9d58: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C9D5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C9D5Cu; }
            if (ctx->pc != 0x4C9D5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C9D5Cu;
label_4c9d5c:
    // 0x4c9d5c: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_4c9d60:
    if (ctx->pc == 0x4C9D60u) {
        ctx->pc = 0x4C9D64u;
        goto label_4c9d64;
    }
    ctx->pc = 0x4C9D5Cu;
    {
        const bool branch_taken_0x4c9d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9d5c) {
            ctx->pc = 0x4CA0ECu;
            goto label_4ca0ec;
        }
    }
    ctx->pc = 0x4C9D64u;
label_4c9d64:
    // 0x4c9d64: 0x8ebe007c  lw          $fp, 0x7C($s5)
    ctx->pc = 0x4c9d64u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
label_4c9d68:
    // 0x4c9d68: 0x13c000e0  beqz        $fp, . + 4 + (0xE0 << 2)
label_4c9d6c:
    if (ctx->pc == 0x4C9D6Cu) {
        ctx->pc = 0x4C9D70u;
        goto label_4c9d70;
    }
    ctx->pc = 0x4C9D68u;
    {
        const bool branch_taken_0x4c9d68 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9d68) {
            ctx->pc = 0x4CA0ECu;
            goto label_4ca0ec;
        }
    }
    ctx->pc = 0x4C9D70u;
label_4c9d70:
    // 0x4c9d70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c9d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c9d74:
    // 0x4c9d74: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x4c9d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_4c9d78:
    // 0x4c9d78: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x4c9d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_4c9d7c:
    // 0x4c9d7c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4c9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4c9d80:
    // 0x4c9d80: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x4c9d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4c9d84:
    // 0x4c9d84: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4c9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4c9d88:
    // 0x4c9d88: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x4c9d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4c9d8c:
    // 0x4c9d8c: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x4c9d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4c9d90:
    // 0x4c9d90: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4c9d90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4c9d94:
    // 0x4c9d94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c9d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c9d98:
    // 0x4c9d98: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4c9d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4c9d9c:
    // 0x4c9d9c: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x4c9d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4c9da0:
    // 0x4c9da0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4c9da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4c9da4:
    // 0x4c9da4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x4c9da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_4c9da8:
    // 0x4c9da8: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x4c9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_4c9dac:
    // 0x4c9dac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4c9dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c9db0:
    // 0x4c9db0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4c9db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c9db4:
    // 0x4c9db4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x4c9db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4c9db8:
    // 0x4c9db8: 0x8c700040  lw          $s0, 0x40($v1)
    ctx->pc = 0x4c9db8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_4c9dbc:
    // 0x4c9dbc: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x4c9dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_4c9dc0:
    // 0x4c9dc0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4c9dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4c9dc4:
    // 0x4c9dc4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4c9dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4c9dc8:
    // 0x4c9dc8: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x4c9dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_4c9dcc:
    // 0x4c9dcc: 0xc04e738  jal         func_139CE0
label_4c9dd0:
    if (ctx->pc == 0x4C9DD0u) {
        ctx->pc = 0x4C9DD0u;
            // 0x4c9dd0: 0x26b40090  addiu       $s4, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->pc = 0x4C9DD4u;
        goto label_4c9dd4;
    }
    ctx->pc = 0x4C9DCCu;
    SET_GPR_U32(ctx, 31, 0x4C9DD4u);
    ctx->pc = 0x4C9DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9DCCu;
            // 0x4c9dd0: 0x26b40090  addiu       $s4, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9DD4u; }
        if (ctx->pc != 0x4C9DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9DD4u; }
        if (ctx->pc != 0x4C9DD4u) { return; }
    }
    ctx->pc = 0x4C9DD4u;
label_4c9dd4:
    // 0x4c9dd4: 0xaeb000c4  sw          $s0, 0xC4($s5)
    ctx->pc = 0x4c9dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 196), GPR_U32(ctx, 16));
label_4c9dd8:
    // 0x4c9dd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c9dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c9ddc:
    // 0x4c9ddc: 0xac40e3d8  sw          $zero, -0x1C28($v0)
    ctx->pc = 0x4c9ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960088), GPR_U32(ctx, 0));
label_4c9de0:
    // 0x4c9de0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4c9de0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c9de4:
    // 0x4c9de4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c9de8:
    // 0x4c9de8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4c9de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c9dec:
    // 0x4c9dec: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4c9decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4c9df0:
    // 0x4c9df0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c9df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4c9df4:
    // 0x4c9df4: 0xc45474d8  lwc1        $f20, 0x74D8($v0)
    ctx->pc = 0x4c9df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4c9df8:
    // 0x4c9df8: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x4c9df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_4c9dfc:
    // 0x4c9dfc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4c9dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4c9e00:
    // 0x4c9e00: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x4c9e00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c9e04:
    // 0x4c9e04: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x4c9e04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4c9e08:
    // 0x4c9e08: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x4c9e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_4c9e0c:
    // 0x4c9e0c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x4c9e0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4c9e10:
    // 0x4c9e10: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x4c9e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_4c9e14:
    // 0x4c9e14: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x4c9e14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4c9e18:
    // 0x4c9e18: 0xc0d639c  jal         func_358E70
label_4c9e1c:
    if (ctx->pc == 0x4C9E1Cu) {
        ctx->pc = 0x4C9E1Cu;
            // 0x4c9e1c: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->pc = 0x4C9E20u;
        goto label_4c9e20;
    }
    ctx->pc = 0x4C9E18u;
    SET_GPR_U32(ctx, 31, 0x4C9E20u);
    ctx->pc = 0x4C9E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9E18u;
            // 0x4c9e1c: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E20u; }
        if (ctx->pc != 0x4C9E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E20u; }
        if (ctx->pc != 0x4C9E20u) { return; }
    }
    ctx->pc = 0x4C9E20u;
label_4c9e20:
    // 0x4c9e20: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_4c9e24:
    if (ctx->pc == 0x4C9E24u) {
        ctx->pc = 0x4C9E28u;
        goto label_4c9e28;
    }
    ctx->pc = 0x4C9E20u;
    {
        const bool branch_taken_0x4c9e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9e20) {
            ctx->pc = 0x4C9FD0u;
            goto label_4c9fd0;
        }
    }
    ctx->pc = 0x4C9E28u;
label_4c9e28:
    // 0x4c9e28: 0xc0d1c14  jal         func_347050
label_4c9e2c:
    if (ctx->pc == 0x4C9E2Cu) {
        ctx->pc = 0x4C9E2Cu;
            // 0x4c9e2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9E30u;
        goto label_4c9e30;
    }
    ctx->pc = 0x4C9E28u;
    SET_GPR_U32(ctx, 31, 0x4C9E30u);
    ctx->pc = 0x4C9E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9E28u;
            // 0x4c9e2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E30u; }
        if (ctx->pc != 0x4C9E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E30u; }
        if (ctx->pc != 0x4C9E30u) { return; }
    }
    ctx->pc = 0x4C9E30u;
label_4c9e30:
    // 0x4c9e30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4c9e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c9e34:
    // 0x4c9e34: 0xc04f278  jal         func_13C9E0
label_4c9e38:
    if (ctx->pc == 0x4C9E38u) {
        ctx->pc = 0x4C9E38u;
            // 0x4c9e38: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4C9E3Cu;
        goto label_4c9e3c;
    }
    ctx->pc = 0x4C9E34u;
    SET_GPR_U32(ctx, 31, 0x4C9E3Cu);
    ctx->pc = 0x4C9E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9E34u;
            // 0x4c9e38: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E3Cu; }
        if (ctx->pc != 0x4C9E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E3Cu; }
        if (ctx->pc != 0x4C9E3Cu) { return; }
    }
    ctx->pc = 0x4C9E3Cu;
label_4c9e3c:
    // 0x4c9e3c: 0xc0d1c10  jal         func_347040
label_4c9e40:
    if (ctx->pc == 0x4C9E40u) {
        ctx->pc = 0x4C9E40u;
            // 0x4c9e40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9E44u;
        goto label_4c9e44;
    }
    ctx->pc = 0x4C9E3Cu;
    SET_GPR_U32(ctx, 31, 0x4C9E44u);
    ctx->pc = 0x4C9E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9E3Cu;
            // 0x4c9e40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E44u; }
        if (ctx->pc != 0x4C9E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E44u; }
        if (ctx->pc != 0x4C9E44u) { return; }
    }
    ctx->pc = 0x4C9E44u;
label_4c9e44:
    // 0x4c9e44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4c9e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c9e48:
    // 0x4c9e48: 0xc04ce80  jal         func_133A00
label_4c9e4c:
    if (ctx->pc == 0x4C9E4Cu) {
        ctx->pc = 0x4C9E4Cu;
            // 0x4c9e4c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4C9E50u;
        goto label_4c9e50;
    }
    ctx->pc = 0x4C9E48u;
    SET_GPR_U32(ctx, 31, 0x4C9E50u);
    ctx->pc = 0x4C9E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9E48u;
            // 0x4c9e4c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E50u; }
        if (ctx->pc != 0x4C9E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E50u; }
        if (ctx->pc != 0x4C9E50u) { return; }
    }
    ctx->pc = 0x4C9E50u;
label_4c9e50:
    // 0x4c9e50: 0xc64c00dc  lwc1        $f12, 0xDC($s2)
    ctx->pc = 0x4c9e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c9e54:
    // 0x4c9e54: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4c9e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4c9e58:
    // 0x4c9e58: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4c9e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c9e5c:
    // 0x4c9e5c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4c9e5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4c9e60:
    // 0x4c9e60: 0xc04ce50  jal         func_133940
label_4c9e64:
    if (ctx->pc == 0x4C9E64u) {
        ctx->pc = 0x4C9E64u;
            // 0x4c9e64: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4C9E68u;
        goto label_4c9e68;
    }
    ctx->pc = 0x4C9E60u;
    SET_GPR_U32(ctx, 31, 0x4C9E68u);
    ctx->pc = 0x4C9E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9E60u;
            // 0x4c9e64: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E68u; }
        if (ctx->pc != 0x4C9E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E68u; }
        if (ctx->pc != 0x4C9E68u) { return; }
    }
    ctx->pc = 0x4C9E68u;
label_4c9e68:
    // 0x4c9e68: 0xc0d4108  jal         func_350420
label_4c9e6c:
    if (ctx->pc == 0x4C9E6Cu) {
        ctx->pc = 0x4C9E70u;
        goto label_4c9e70;
    }
    ctx->pc = 0x4C9E68u;
    SET_GPR_U32(ctx, 31, 0x4C9E70u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E70u; }
        if (ctx->pc != 0x4C9E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E70u; }
        if (ctx->pc != 0x4C9E70u) { return; }
    }
    ctx->pc = 0x4C9E70u;
label_4c9e70:
    // 0x4c9e70: 0xc0b36b4  jal         func_2CDAD0
label_4c9e74:
    if (ctx->pc == 0x4C9E74u) {
        ctx->pc = 0x4C9E74u;
            // 0x4c9e74: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9E78u;
        goto label_4c9e78;
    }
    ctx->pc = 0x4C9E70u;
    SET_GPR_U32(ctx, 31, 0x4C9E78u);
    ctx->pc = 0x4C9E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9E70u;
            // 0x4c9e74: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E78u; }
        if (ctx->pc != 0x4C9E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E78u; }
        if (ctx->pc != 0x4C9E78u) { return; }
    }
    ctx->pc = 0x4C9E78u;
label_4c9e78:
    // 0x4c9e78: 0xc0b9c64  jal         func_2E7190
label_4c9e7c:
    if (ctx->pc == 0x4C9E7Cu) {
        ctx->pc = 0x4C9E7Cu;
            // 0x4c9e7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9E80u;
        goto label_4c9e80;
    }
    ctx->pc = 0x4C9E78u;
    SET_GPR_U32(ctx, 31, 0x4C9E80u);
    ctx->pc = 0x4C9E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9E78u;
            // 0x4c9e7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E80u; }
        if (ctx->pc != 0x4C9E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E80u; }
        if (ctx->pc != 0x4C9E80u) { return; }
    }
    ctx->pc = 0x4C9E80u;
label_4c9e80:
    // 0x4c9e80: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4c9e80u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c9e84:
    // 0x4c9e84: 0xc0d4104  jal         func_350410
label_4c9e88:
    if (ctx->pc == 0x4C9E88u) {
        ctx->pc = 0x4C9E88u;
            // 0x4c9e88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9E8Cu;
        goto label_4c9e8c;
    }
    ctx->pc = 0x4C9E84u;
    SET_GPR_U32(ctx, 31, 0x4C9E8Cu);
    ctx->pc = 0x4C9E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9E84u;
            // 0x4c9e88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E8Cu; }
        if (ctx->pc != 0x4C9E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9E8Cu; }
        if (ctx->pc != 0x4C9E8Cu) { return; }
    }
    ctx->pc = 0x4C9E8Cu;
label_4c9e8c:
    // 0x4c9e8c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4c9e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4c9e90:
    // 0x4c9e90: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4c9e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4c9e94:
    // 0x4c9e94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4c9e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c9e98:
    // 0x4c9e98: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x4c9e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4c9e9c:
    // 0x4c9e9c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4c9e9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c9ea0:
    // 0x4c9ea0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4c9ea0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c9ea4:
    // 0x4c9ea4: 0xc0d40ac  jal         func_3502B0
label_4c9ea8:
    if (ctx->pc == 0x4C9EA8u) {
        ctx->pc = 0x4C9EA8u;
            // 0x4c9ea8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4C9EACu;
        goto label_4c9eac;
    }
    ctx->pc = 0x4C9EA4u;
    SET_GPR_U32(ctx, 31, 0x4C9EACu);
    ctx->pc = 0x4C9EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9EA4u;
            // 0x4c9ea8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9EACu; }
        if (ctx->pc != 0x4C9EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9EACu; }
        if (ctx->pc != 0x4C9EACu) { return; }
    }
    ctx->pc = 0x4C9EACu;
label_4c9eac:
    // 0x4c9eac: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4c9eacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4c9eb0:
    // 0x4c9eb0: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_4c9eb4:
    if (ctx->pc == 0x4C9EB4u) {
        ctx->pc = 0x4C9EB4u;
            // 0x4c9eb4: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4C9EB8u;
        goto label_4c9eb8;
    }
    ctx->pc = 0x4C9EB0u;
    {
        const bool branch_taken_0x4c9eb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C9EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9EB0u;
            // 0x4c9eb4: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9eb0) {
            ctx->pc = 0x4C9ED8u;
            goto label_4c9ed8;
        }
    }
    ctx->pc = 0x4C9EB8u;
label_4c9eb8:
    // 0x4c9eb8: 0x8e440130  lw          $a0, 0x130($s2)
    ctx->pc = 0x4c9eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
label_4c9ebc:
    // 0x4c9ebc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_4c9ec0:
    if (ctx->pc == 0x4C9EC0u) {
        ctx->pc = 0x4C9EC4u;
        goto label_4c9ec4;
    }
    ctx->pc = 0x4C9EBCu;
    {
        const bool branch_taken_0x4c9ebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9ebc) {
            ctx->pc = 0x4C9ED0u;
            goto label_4c9ed0;
        }
    }
    ctx->pc = 0x4C9EC4u;
label_4c9ec4:
    // 0x4c9ec4: 0xc1328a0  jal         func_4CA280
label_4c9ec8:
    if (ctx->pc == 0x4C9EC8u) {
        ctx->pc = 0x4C9EC8u;
            // 0x4c9ec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9ECCu;
        goto label_4c9ecc;
    }
    ctx->pc = 0x4C9EC4u;
    SET_GPR_U32(ctx, 31, 0x4C9ECCu);
    ctx->pc = 0x4C9EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9EC4u;
            // 0x4c9ec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA280u;
    if (runtime->hasFunction(0x4CA280u)) {
        auto targetFn = runtime->lookupFunction(0x4CA280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9ECCu; }
        if (ctx->pc != 0x4C9ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CA280_0x4ca280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9ECCu; }
        if (ctx->pc != 0x4C9ECCu) { return; }
    }
    ctx->pc = 0x4C9ECCu;
label_4c9ecc:
    // 0x4c9ecc: 0x0  nop
    ctx->pc = 0x4c9eccu;
    // NOP
label_4c9ed0:
    // 0x4c9ed0: 0x1000005d  b           . + 4 + (0x5D << 2)
label_4c9ed4:
    if (ctx->pc == 0x4C9ED4u) {
        ctx->pc = 0x4C9ED4u;
            // 0x4c9ed4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9ED8u;
        goto label_4c9ed8;
    }
    ctx->pc = 0x4C9ED0u;
    {
        const bool branch_taken_0x4c9ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9ED0u;
            // 0x4c9ed4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9ed0) {
            ctx->pc = 0x4CA048u;
            goto label_4ca048;
        }
    }
    ctx->pc = 0x4C9ED8u;
label_4c9ed8:
    // 0x4c9ed8: 0x264400f0  addiu       $a0, $s2, 0xF0
    ctx->pc = 0x4c9ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_4c9edc:
    // 0x4c9edc: 0xc04cce8  jal         func_1333A0
label_4c9ee0:
    if (ctx->pc == 0x4C9EE0u) {
        ctx->pc = 0x4C9EE0u;
            // 0x4c9ee0: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4C9EE4u;
        goto label_4c9ee4;
    }
    ctx->pc = 0x4C9EDCu;
    SET_GPR_U32(ctx, 31, 0x4C9EE4u);
    ctx->pc = 0x4C9EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9EDCu;
            // 0x4c9ee0: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9EE4u; }
        if (ctx->pc != 0x4C9EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9EE4u; }
        if (ctx->pc != 0x4C9EE4u) { return; }
    }
    ctx->pc = 0x4C9EE4u;
label_4c9ee4:
    // 0x4c9ee4: 0x8e440130  lw          $a0, 0x130($s2)
    ctx->pc = 0x4c9ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
label_4c9ee8:
    // 0x4c9ee8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4c9eec:
    if (ctx->pc == 0x4C9EECu) {
        ctx->pc = 0x4C9EF0u;
        goto label_4c9ef0;
    }
    ctx->pc = 0x4C9EE8u;
    {
        const bool branch_taken_0x4c9ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9ee8) {
            ctx->pc = 0x4C9EF8u;
            goto label_4c9ef8;
        }
    }
    ctx->pc = 0x4C9EF0u;
label_4c9ef0:
    // 0x4c9ef0: 0xc1328a0  jal         func_4CA280
label_4c9ef4:
    if (ctx->pc == 0x4C9EF4u) {
        ctx->pc = 0x4C9EF4u;
            // 0x4c9ef4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C9EF8u;
        goto label_4c9ef8;
    }
    ctx->pc = 0x4C9EF0u;
    SET_GPR_U32(ctx, 31, 0x4C9EF8u);
    ctx->pc = 0x4C9EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9EF0u;
            // 0x4c9ef4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA280u;
    if (runtime->hasFunction(0x4CA280u)) {
        auto targetFn = runtime->lookupFunction(0x4CA280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9EF8u; }
        if (ctx->pc != 0x4C9EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CA280_0x4ca280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9EF8u; }
        if (ctx->pc != 0x4C9EF8u) { return; }
    }
    ctx->pc = 0x4C9EF8u;
label_4c9ef8:
    // 0x4c9ef8: 0xc13289c  jal         func_4CA270
label_4c9efc:
    if (ctx->pc == 0x4C9EFCu) {
        ctx->pc = 0x4C9EFCu;
            // 0x4c9efc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9F00u;
        goto label_4c9f00;
    }
    ctx->pc = 0x4C9EF8u;
    SET_GPR_U32(ctx, 31, 0x4C9F00u);
    ctx->pc = 0x4C9EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9EF8u;
            // 0x4c9efc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA270u;
    if (runtime->hasFunction(0x4CA270u)) {
        auto targetFn = runtime->lookupFunction(0x4CA270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F00u; }
        if (ctx->pc != 0x4C9F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CA270_0x4ca270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F00u; }
        if (ctx->pc != 0x4C9F00u) { return; }
    }
    ctx->pc = 0x4C9F00u;
label_4c9f00:
    // 0x4c9f00: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4c9f00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c9f04:
    // 0x4c9f04: 0xc132898  jal         func_4CA260
label_4c9f08:
    if (ctx->pc == 0x4C9F08u) {
        ctx->pc = 0x4C9F08u;
            // 0x4c9f08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9F0Cu;
        goto label_4c9f0c;
    }
    ctx->pc = 0x4C9F04u;
    SET_GPR_U32(ctx, 31, 0x4C9F0Cu);
    ctx->pc = 0x4C9F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9F04u;
            // 0x4c9f08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA260u;
    if (runtime->hasFunction(0x4CA260u)) {
        auto targetFn = runtime->lookupFunction(0x4CA260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F0Cu; }
        if (ctx->pc != 0x4C9F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CA260_0x4ca260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F0Cu; }
        if (ctx->pc != 0x4C9F0Cu) { return; }
    }
    ctx->pc = 0x4C9F0Cu;
label_4c9f0c:
    // 0x4c9f0c: 0x12c20012  beq         $s6, $v0, . + 4 + (0x12 << 2)
label_4c9f10:
    if (ctx->pc == 0x4C9F10u) {
        ctx->pc = 0x4C9F14u;
        goto label_4c9f14;
    }
    ctx->pc = 0x4C9F0Cu;
    {
        const bool branch_taken_0x4c9f0c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x4c9f0c) {
            ctx->pc = 0x4C9F58u;
            goto label_4c9f58;
        }
    }
    ctx->pc = 0x4C9F14u;
label_4c9f14:
    // 0x4c9f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c9f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c9f18:
    // 0x4c9f18: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x4c9f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_4c9f1c:
    // 0x4c9f1c: 0xc132880  jal         func_4CA200
label_4c9f20:
    if (ctx->pc == 0x4C9F20u) {
        ctx->pc = 0x4C9F20u;
            // 0x4c9f20: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4C9F24u;
        goto label_4c9f24;
    }
    ctx->pc = 0x4C9F1Cu;
    SET_GPR_U32(ctx, 31, 0x4C9F24u);
    ctx->pc = 0x4C9F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9F1Cu;
            // 0x4c9f20: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA200u;
    if (runtime->hasFunction(0x4CA200u)) {
        auto targetFn = runtime->lookupFunction(0x4CA200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F24u; }
        if (ctx->pc != 0x4C9F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CA200_0x4ca200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F24u; }
        if (ctx->pc != 0x4C9F24u) { return; }
    }
    ctx->pc = 0x4C9F24u;
label_4c9f24:
    // 0x4c9f24: 0xc132878  jal         func_4CA1E0
label_4c9f28:
    if (ctx->pc == 0x4C9F28u) {
        ctx->pc = 0x4C9F2Cu;
        goto label_4c9f2c;
    }
    ctx->pc = 0x4C9F24u;
    SET_GPR_U32(ctx, 31, 0x4C9F2Cu);
    ctx->pc = 0x4CA1E0u;
    if (runtime->hasFunction(0x4CA1E0u)) {
        auto targetFn = runtime->lookupFunction(0x4CA1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F2Cu; }
        if (ctx->pc != 0x4C9F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CA1E0_0x4ca1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F2Cu; }
        if (ctx->pc != 0x4C9F2Cu) { return; }
    }
    ctx->pc = 0x4C9F2Cu;
label_4c9f2c:
    // 0x4c9f2c: 0xc13289c  jal         func_4CA270
label_4c9f30:
    if (ctx->pc == 0x4C9F30u) {
        ctx->pc = 0x4C9F30u;
            // 0x4c9f30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9F34u;
        goto label_4c9f34;
    }
    ctx->pc = 0x4C9F2Cu;
    SET_GPR_U32(ctx, 31, 0x4C9F34u);
    ctx->pc = 0x4C9F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9F2Cu;
            // 0x4c9f30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA270u;
    if (runtime->hasFunction(0x4CA270u)) {
        auto targetFn = runtime->lookupFunction(0x4CA270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F34u; }
        if (ctx->pc != 0x4C9F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CA270_0x4ca270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F34u; }
        if (ctx->pc != 0x4C9F34u) { return; }
    }
    ctx->pc = 0x4C9F34u;
label_4c9f34:
    // 0x4c9f34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4c9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c9f38:
    // 0x4c9f38: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4c9f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4c9f3c:
    // 0x4c9f3c: 0xc04e738  jal         func_139CE0
label_4c9f40:
    if (ctx->pc == 0x4C9F40u) {
        ctx->pc = 0x4C9F40u;
            // 0x4c9f40: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->pc = 0x4C9F44u;
        goto label_4c9f44;
    }
    ctx->pc = 0x4C9F3Cu;
    SET_GPR_U32(ctx, 31, 0x4C9F44u);
    ctx->pc = 0x4C9F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9F3Cu;
            // 0x4c9f40: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F44u; }
        if (ctx->pc != 0x4C9F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F44u; }
        if (ctx->pc != 0x4C9F44u) { return; }
    }
    ctx->pc = 0x4C9F44u;
label_4c9f44:
    // 0x4c9f44: 0xc13289c  jal         func_4CA270
label_4c9f48:
    if (ctx->pc == 0x4C9F48u) {
        ctx->pc = 0x4C9F48u;
            // 0x4c9f48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9F4Cu;
        goto label_4c9f4c;
    }
    ctx->pc = 0x4C9F44u;
    SET_GPR_U32(ctx, 31, 0x4C9F4Cu);
    ctx->pc = 0x4C9F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9F44u;
            // 0x4c9f48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA270u;
    if (runtime->hasFunction(0x4CA270u)) {
        auto targetFn = runtime->lookupFunction(0x4CA270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F4Cu; }
        if (ctx->pc != 0x4C9F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CA270_0x4ca270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F4Cu; }
        if (ctx->pc != 0x4C9F4Cu) { return; }
    }
    ctx->pc = 0x4C9F4Cu;
label_4c9f4c:
    // 0x4c9f4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4c9f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c9f50:
    // 0x4c9f50: 0xc132874  jal         func_4CA1D0
label_4c9f54:
    if (ctx->pc == 0x4C9F54u) {
        ctx->pc = 0x4C9F54u;
            // 0x4c9f54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9F58u;
        goto label_4c9f58;
    }
    ctx->pc = 0x4C9F50u;
    SET_GPR_U32(ctx, 31, 0x4C9F58u);
    ctx->pc = 0x4C9F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9F50u;
            // 0x4c9f54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA1D0u;
    if (runtime->hasFunction(0x4CA1D0u)) {
        auto targetFn = runtime->lookupFunction(0x4CA1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F58u; }
        if (ctx->pc != 0x4C9F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CA1D0_0x4ca1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F58u; }
        if (ctx->pc != 0x4C9F58u) { return; }
    }
    ctx->pc = 0x4C9F58u;
label_4c9f58:
    // 0x4c9f58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c9f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c9f5c:
    // 0x4c9f5c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x4c9f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4c9f60:
    // 0x4c9f60: 0xc13284c  jal         func_4CA130
label_4c9f64:
    if (ctx->pc == 0x4C9F64u) {
        ctx->pc = 0x4C9F64u;
            // 0x4c9f64: 0x27a6013c  addiu       $a2, $sp, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
        ctx->pc = 0x4C9F68u;
        goto label_4c9f68;
    }
    ctx->pc = 0x4C9F60u;
    SET_GPR_U32(ctx, 31, 0x4C9F68u);
    ctx->pc = 0x4C9F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9F60u;
            // 0x4c9f64: 0x27a6013c  addiu       $a2, $sp, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA130u;
    if (runtime->hasFunction(0x4CA130u)) {
        auto targetFn = runtime->lookupFunction(0x4CA130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F68u; }
        if (ctx->pc != 0x4C9F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CA130_0x4ca130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F68u; }
        if (ctx->pc != 0x4C9F68u) { return; }
    }
    ctx->pc = 0x4C9F68u;
label_4c9f68:
    // 0x4c9f68: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x4c9f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4c9f6c:
    // 0x4c9f6c: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x4c9f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_4c9f70:
    // 0x4c9f70: 0xc04e4a4  jal         func_139290
label_4c9f74:
    if (ctx->pc == 0x4C9F74u) {
        ctx->pc = 0x4C9F74u;
            // 0x4c9f74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9F78u;
        goto label_4c9f78;
    }
    ctx->pc = 0x4C9F70u;
    SET_GPR_U32(ctx, 31, 0x4C9F78u);
    ctx->pc = 0x4C9F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9F70u;
            // 0x4c9f74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F78u; }
        if (ctx->pc != 0x4C9F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F78u; }
        if (ctx->pc != 0x4C9F78u) { return; }
    }
    ctx->pc = 0x4C9F78u;
label_4c9f78:
    // 0x4c9f78: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x4c9f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_4c9f7c:
    // 0x4c9f7c: 0xc65500d4  lwc1        $f21, 0xD4($s2)
    ctx->pc = 0x4c9f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4c9f80:
    // 0x4c9f80: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x4c9f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_4c9f84:
    // 0x4c9f84: 0xc04cd60  jal         func_133580
label_4c9f88:
    if (ctx->pc == 0x4C9F88u) {
        ctx->pc = 0x4C9F88u;
            // 0x4c9f88: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x4C9F8Cu;
        goto label_4c9f8c;
    }
    ctx->pc = 0x4C9F84u;
    SET_GPR_U32(ctx, 31, 0x4C9F8Cu);
    ctx->pc = 0x4C9F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9F84u;
            // 0x4c9f88: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F8Cu; }
        if (ctx->pc != 0x4C9F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9F8Cu; }
        if (ctx->pc != 0x4C9F8Cu) { return; }
    }
    ctx->pc = 0x4C9F8Cu;
label_4c9f8c:
    // 0x4c9f8c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4c9f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4c9f90:
    // 0x4c9f90: 0x8fb600e0  lw          $s6, 0xE0($sp)
    ctx->pc = 0x4c9f90u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_4c9f94:
    // 0x4c9f94: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4c9f94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4c9f98:
    // 0x4c9f98: 0x320f809  jalr        $t9
label_4c9f9c:
    if (ctx->pc == 0x4C9F9Cu) {
        ctx->pc = 0x4C9F9Cu;
            // 0x4c9f9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9FA0u;
        goto label_4c9fa0;
    }
    ctx->pc = 0x4C9F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C9FA0u);
        ctx->pc = 0x4C9F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9F98u;
            // 0x4c9f9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C9FA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C9FA0u; }
            if (ctx->pc != 0x4C9FA0u) { return; }
        }
        }
    }
    ctx->pc = 0x4C9FA0u;
label_4c9fa0:
    // 0x4c9fa0: 0xc64c00d4  lwc1        $f12, 0xD4($s2)
    ctx->pc = 0x4c9fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c9fa4:
    // 0x4c9fa4: 0x8fa5013c  lw          $a1, 0x13C($sp)
    ctx->pc = 0x4c9fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4c9fa8:
    // 0x4c9fa8: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4c9fa8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4c9fac:
    // 0x4c9fac: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x4c9facu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4c9fb0:
    // 0x4c9fb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4c9fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c9fb4:
    // 0x4c9fb4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4c9fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4c9fb8:
    // 0x4c9fb8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4c9fb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4c9fbc:
    // 0x4c9fbc: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x4c9fbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_4c9fc0:
    // 0x4c9fc0: 0xc04cff4  jal         func_133FD0
label_4c9fc4:
    if (ctx->pc == 0x4C9FC4u) {
        ctx->pc = 0x4C9FC4u;
            // 0x4c9fc4: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9FC8u;
        goto label_4c9fc8;
    }
    ctx->pc = 0x4C9FC0u;
    SET_GPR_U32(ctx, 31, 0x4C9FC8u);
    ctx->pc = 0x4C9FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9FC0u;
            // 0x4c9fc4: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9FC8u; }
        if (ctx->pc != 0x4C9FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9FC8u; }
        if (ctx->pc != 0x4C9FC8u) { return; }
    }
    ctx->pc = 0x4C9FC8u;
label_4c9fc8:
    // 0x4c9fc8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4c9fcc:
    if (ctx->pc == 0x4C9FCCu) {
        ctx->pc = 0x4C9FCCu;
            // 0x4c9fcc: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x4C9FD0u;
        goto label_4c9fd0;
    }
    ctx->pc = 0x4C9FC8u;
    {
        const bool branch_taken_0x4c9fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9FC8u;
            // 0x4c9fcc: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9fc8) {
            ctx->pc = 0x4CA048u;
            goto label_4ca048;
        }
    }
    ctx->pc = 0x4C9FD0u;
label_4c9fd0:
    // 0x4c9fd0: 0xc13289c  jal         func_4CA270
label_4c9fd4:
    if (ctx->pc == 0x4C9FD4u) {
        ctx->pc = 0x4C9FD4u;
            // 0x4c9fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9FD8u;
        goto label_4c9fd8;
    }
    ctx->pc = 0x4C9FD0u;
    SET_GPR_U32(ctx, 31, 0x4C9FD8u);
    ctx->pc = 0x4C9FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9FD0u;
            // 0x4c9fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA270u;
    if (runtime->hasFunction(0x4CA270u)) {
        auto targetFn = runtime->lookupFunction(0x4CA270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9FD8u; }
        if (ctx->pc != 0x4C9FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CA270_0x4ca270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9FD8u; }
        if (ctx->pc != 0x4C9FD8u) { return; }
    }
    ctx->pc = 0x4C9FD8u;
label_4c9fd8:
    // 0x4c9fd8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4c9fd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c9fdc:
    // 0x4c9fdc: 0xc132898  jal         func_4CA260
label_4c9fe0:
    if (ctx->pc == 0x4C9FE0u) {
        ctx->pc = 0x4C9FE0u;
            // 0x4c9fe0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9FE4u;
        goto label_4c9fe4;
    }
    ctx->pc = 0x4C9FDCu;
    SET_GPR_U32(ctx, 31, 0x4C9FE4u);
    ctx->pc = 0x4C9FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9FDCu;
            // 0x4c9fe0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA260u;
    if (runtime->hasFunction(0x4CA260u)) {
        auto targetFn = runtime->lookupFunction(0x4CA260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9FE4u; }
        if (ctx->pc != 0x4C9FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CA260_0x4ca260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9FE4u; }
        if (ctx->pc != 0x4C9FE4u) { return; }
    }
    ctx->pc = 0x4C9FE4u;
label_4c9fe4:
    // 0x4c9fe4: 0x12c20012  beq         $s6, $v0, . + 4 + (0x12 << 2)
label_4c9fe8:
    if (ctx->pc == 0x4C9FE8u) {
        ctx->pc = 0x4C9FECu;
        goto label_4c9fec;
    }
    ctx->pc = 0x4C9FE4u;
    {
        const bool branch_taken_0x4c9fe4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x4c9fe4) {
            ctx->pc = 0x4CA030u;
            goto label_4ca030;
        }
    }
    ctx->pc = 0x4C9FECu;
label_4c9fec:
    // 0x4c9fec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c9fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c9ff0:
    // 0x4c9ff0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x4c9ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_4c9ff4:
    // 0x4c9ff4: 0xc132880  jal         func_4CA200
label_4c9ff8:
    if (ctx->pc == 0x4C9FF8u) {
        ctx->pc = 0x4C9FF8u;
            // 0x4c9ff8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4C9FFCu;
        goto label_4c9ffc;
    }
    ctx->pc = 0x4C9FF4u;
    SET_GPR_U32(ctx, 31, 0x4C9FFCu);
    ctx->pc = 0x4C9FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9FF4u;
            // 0x4c9ff8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA200u;
    if (runtime->hasFunction(0x4CA200u)) {
        auto targetFn = runtime->lookupFunction(0x4CA200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9FFCu; }
        if (ctx->pc != 0x4C9FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CA200_0x4ca200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9FFCu; }
        if (ctx->pc != 0x4C9FFCu) { return; }
    }
    ctx->pc = 0x4C9FFCu;
label_4c9ffc:
    // 0x4c9ffc: 0xc132878  jal         func_4CA1E0
label_4ca000:
    if (ctx->pc == 0x4CA000u) {
        ctx->pc = 0x4CA004u;
        goto label_4ca004;
    }
    ctx->pc = 0x4C9FFCu;
    SET_GPR_U32(ctx, 31, 0x4CA004u);
    ctx->pc = 0x4CA1E0u;
    if (runtime->hasFunction(0x4CA1E0u)) {
        auto targetFn = runtime->lookupFunction(0x4CA1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA004u; }
        if (ctx->pc != 0x4CA004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CA1E0_0x4ca1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA004u; }
        if (ctx->pc != 0x4CA004u) { return; }
    }
    ctx->pc = 0x4CA004u;
label_4ca004:
    // 0x4ca004: 0xc13289c  jal         func_4CA270
label_4ca008:
    if (ctx->pc == 0x4CA008u) {
        ctx->pc = 0x4CA008u;
            // 0x4ca008: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CA00Cu;
        goto label_4ca00c;
    }
    ctx->pc = 0x4CA004u;
    SET_GPR_U32(ctx, 31, 0x4CA00Cu);
    ctx->pc = 0x4CA008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA004u;
            // 0x4ca008: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA270u;
    if (runtime->hasFunction(0x4CA270u)) {
        auto targetFn = runtime->lookupFunction(0x4CA270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA00Cu; }
        if (ctx->pc != 0x4CA00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CA270_0x4ca270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA00Cu; }
        if (ctx->pc != 0x4CA00Cu) { return; }
    }
    ctx->pc = 0x4CA00Cu;
label_4ca00c:
    // 0x4ca00c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4ca00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ca010:
    // 0x4ca010: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4ca010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4ca014:
    // 0x4ca014: 0xc04e738  jal         func_139CE0
label_4ca018:
    if (ctx->pc == 0x4CA018u) {
        ctx->pc = 0x4CA018u;
            // 0x4ca018: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->pc = 0x4CA01Cu;
        goto label_4ca01c;
    }
    ctx->pc = 0x4CA014u;
    SET_GPR_U32(ctx, 31, 0x4CA01Cu);
    ctx->pc = 0x4CA018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA014u;
            // 0x4ca018: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA01Cu; }
        if (ctx->pc != 0x4CA01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA01Cu; }
        if (ctx->pc != 0x4CA01Cu) { return; }
    }
    ctx->pc = 0x4CA01Cu;
label_4ca01c:
    // 0x4ca01c: 0xc13289c  jal         func_4CA270
label_4ca020:
    if (ctx->pc == 0x4CA020u) {
        ctx->pc = 0x4CA020u;
            // 0x4ca020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CA024u;
        goto label_4ca024;
    }
    ctx->pc = 0x4CA01Cu;
    SET_GPR_U32(ctx, 31, 0x4CA024u);
    ctx->pc = 0x4CA020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA01Cu;
            // 0x4ca020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA270u;
    if (runtime->hasFunction(0x4CA270u)) {
        auto targetFn = runtime->lookupFunction(0x4CA270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA024u; }
        if (ctx->pc != 0x4CA024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CA270_0x4ca270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA024u; }
        if (ctx->pc != 0x4CA024u) { return; }
    }
    ctx->pc = 0x4CA024u;
label_4ca024:
    // 0x4ca024: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ca024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ca028:
    // 0x4ca028: 0xc132874  jal         func_4CA1D0
label_4ca02c:
    if (ctx->pc == 0x4CA02Cu) {
        ctx->pc = 0x4CA02Cu;
            // 0x4ca02c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CA030u;
        goto label_4ca030;
    }
    ctx->pc = 0x4CA028u;
    SET_GPR_U32(ctx, 31, 0x4CA030u);
    ctx->pc = 0x4CA02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA028u;
            // 0x4ca02c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CA1D0u;
    if (runtime->hasFunction(0x4CA1D0u)) {
        auto targetFn = runtime->lookupFunction(0x4CA1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA030u; }
        if (ctx->pc != 0x4CA030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CA1D0_0x4ca1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA030u; }
        if (ctx->pc != 0x4CA030u) { return; }
    }
    ctx->pc = 0x4CA030u;
label_4ca030:
    // 0x4ca030: 0x8e44009c  lw          $a0, 0x9C($s2)
    ctx->pc = 0x4ca030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_4ca034:
    // 0x4ca034: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4ca034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ca038:
    // 0x4ca038: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ca038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ca03c:
    // 0x4ca03c: 0xc0e31f8  jal         func_38C7E0
label_4ca040:
    if (ctx->pc == 0x4CA040u) {
        ctx->pc = 0x4CA040u;
            // 0x4ca040: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4CA044u;
        goto label_4ca044;
    }
    ctx->pc = 0x4CA03Cu;
    SET_GPR_U32(ctx, 31, 0x4CA044u);
    ctx->pc = 0x4CA040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA03Cu;
            // 0x4ca040: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C7E0u;
    if (runtime->hasFunction(0x38C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x38C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA044u; }
        if (ctx->pc != 0x4CA044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C7E0_0x38c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA044u; }
        if (ctx->pc != 0x4CA044u) { return; }
    }
    ctx->pc = 0x4CA044u;
label_4ca044:
    // 0x4ca044: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4ca044u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ca048:
    // 0x4ca048: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_4ca04c:
    if (ctx->pc == 0x4CA04Cu) {
        ctx->pc = 0x4CA050u;
        goto label_4ca050;
    }
    ctx->pc = 0x4CA048u;
    {
        const bool branch_taken_0x4ca048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca048) {
            ctx->pc = 0x4CA0B0u;
            goto label_4ca0b0;
        }
    }
    ctx->pc = 0x4CA050u;
label_4ca050:
    // 0x4ca050: 0x8eb100c0  lw          $s1, 0xC0($s5)
    ctx->pc = 0x4ca050u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
label_4ca054:
    // 0x4ca054: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x4ca054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4ca058:
    // 0x4ca058: 0x86230066  lh          $v1, 0x66($s1)
    ctx->pc = 0x4ca058u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_4ca05c:
    // 0x4ca05c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x4ca05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_4ca060:
    // 0x4ca060: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x4ca060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_4ca064:
    // 0x4ca064: 0xc04cce8  jal         func_1333A0
label_4ca068:
    if (ctx->pc == 0x4CA068u) {
        ctx->pc = 0x4CA068u;
            // 0x4ca068: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4CA06Cu;
        goto label_4ca06c;
    }
    ctx->pc = 0x4CA064u;
    SET_GPR_U32(ctx, 31, 0x4CA06Cu);
    ctx->pc = 0x4CA068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA064u;
            // 0x4ca068: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA06Cu; }
        if (ctx->pc != 0x4CA06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA06Cu; }
        if (ctx->pc != 0x4CA06Cu) { return; }
    }
    ctx->pc = 0x4CA06Cu;
label_4ca06c:
    // 0x4ca06c: 0x86250066  lh          $a1, 0x66($s1)
    ctx->pc = 0x4ca06cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_4ca070:
    // 0x4ca070: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4ca070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4ca074:
    // 0x4ca074: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x4ca074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4ca078:
    // 0x4ca078: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4ca078u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4ca07c:
    // 0x4ca07c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4ca07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4ca080:
    // 0x4ca080: 0xe4950000  swc1        $f21, 0x0($a0)
    ctx->pc = 0x4ca080u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_4ca084:
    // 0x4ca084: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4ca084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4ca088:
    // 0x4ca088: 0x86250066  lh          $a1, 0x66($s1)
    ctx->pc = 0x4ca088u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_4ca08c:
    // 0x4ca08c: 0x86240064  lh          $a0, 0x64($s1)
    ctx->pc = 0x4ca08cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
label_4ca090:
    // 0x4ca090: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x4ca090u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_4ca094:
    // 0x4ca094: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x4ca094u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_4ca098:
    // 0x4ca098: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x4ca098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_4ca09c:
    // 0x4ca09c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4ca09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4ca0a0:
    // 0x4ca0a0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x4ca0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_4ca0a4:
    // 0x4ca0a4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4ca0a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_4ca0a8:
    // 0x4ca0a8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4ca0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4ca0ac:
    // 0x4ca0ac: 0xa6230066  sh          $v1, 0x66($s1)
    ctx->pc = 0x4ca0acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 102), (uint16_t)GPR_U32(ctx, 3));
label_4ca0b0:
    // 0x4ca0b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4ca0b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4ca0b4:
    // 0x4ca0b4: 0x27e182b  sltu        $v1, $s3, $fp
    ctx->pc = 0x4ca0b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_4ca0b8:
    // 0x4ca0b8: 0x1460ff4f  bnez        $v1, . + 4 + (-0xB1 << 2)
label_4ca0bc:
    if (ctx->pc == 0x4CA0BCu) {
        ctx->pc = 0x4CA0BCu;
            // 0x4ca0bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4CA0C0u;
        goto label_4ca0c0;
    }
    ctx->pc = 0x4CA0B8u;
    {
        const bool branch_taken_0x4ca0b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA0B8u;
            // 0x4ca0bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca0b8) {
            ctx->pc = 0x4C9DF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c9df8;
        }
    }
    ctx->pc = 0x4CA0C0u;
label_4ca0c0:
    // 0x4ca0c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ca0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ca0c4:
    // 0x4ca0c4: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x4ca0c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4ca0c8:
    // 0x4ca0c8: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_4ca0cc:
    if (ctx->pc == 0x4CA0CCu) {
        ctx->pc = 0x4CA0CCu;
            // 0x4ca0cc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x4CA0D0u;
        goto label_4ca0d0;
    }
    ctx->pc = 0x4CA0C8u;
    {
        const bool branch_taken_0x4ca0c8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4CA0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA0C8u;
            // 0x4ca0cc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca0c8) {
            ctx->pc = 0x4CA0ECu;
            goto label_4ca0ec;
        }
    }
    ctx->pc = 0x4CA0D0u;
label_4ca0d0:
    // 0x4ca0d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ca0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ca0d4:
    // 0x4ca0d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ca0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ca0d8:
    // 0x4ca0d8: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4ca0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4ca0dc:
    // 0x4ca0dc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4ca0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4ca0e0:
    // 0x4ca0e0: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4ca0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4ca0e4:
    // 0x4ca0e4: 0xc055754  jal         func_155D50
label_4ca0e8:
    if (ctx->pc == 0x4CA0E8u) {
        ctx->pc = 0x4CA0E8u;
            // 0x4ca0e8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4CA0ECu;
        goto label_4ca0ec;
    }
    ctx->pc = 0x4CA0E4u;
    SET_GPR_U32(ctx, 31, 0x4CA0ECu);
    ctx->pc = 0x4CA0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA0E4u;
            // 0x4ca0e8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA0ECu; }
        if (ctx->pc != 0x4CA0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA0ECu; }
        if (ctx->pc != 0x4CA0ECu) { return; }
    }
    ctx->pc = 0x4CA0ECu;
label_4ca0ec:
    // 0x4ca0ec: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4ca0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4ca0f0:
    // 0x4ca0f0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4ca0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4ca0f4:
    // 0x4ca0f4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4ca0f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4ca0f8:
    // 0x4ca0f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4ca0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4ca0fc:
    // 0x4ca0fc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4ca0fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4ca100:
    // 0x4ca100: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4ca100u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4ca104:
    // 0x4ca104: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4ca104u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4ca108:
    // 0x4ca108: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4ca108u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ca10c:
    // 0x4ca10c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4ca10cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ca110:
    // 0x4ca110: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ca110u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ca114:
    // 0x4ca114: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ca114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ca118:
    // 0x4ca118: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ca118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ca11c:
    // 0x4ca11c: 0x3e00008  jr          $ra
label_4ca120:
    if (ctx->pc == 0x4CA120u) {
        ctx->pc = 0x4CA120u;
            // 0x4ca120: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x4CA124u;
        goto label_4ca124;
    }
    ctx->pc = 0x4CA11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CA120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA11Cu;
            // 0x4ca120: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CA124u;
label_4ca124:
    // 0x4ca124: 0x0  nop
    ctx->pc = 0x4ca124u;
    // NOP
label_4ca128:
    // 0x4ca128: 0x0  nop
    ctx->pc = 0x4ca128u;
    // NOP
label_4ca12c:
    // 0x4ca12c: 0x0  nop
    ctx->pc = 0x4ca12cu;
    // NOP
}
