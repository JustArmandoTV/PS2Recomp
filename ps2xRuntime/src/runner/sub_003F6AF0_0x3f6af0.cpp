#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F6AF0
// Address: 0x3f6af0 - 0x3f72c0
void sub_003F6AF0_0x3f6af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6AF0_0x3f6af0");
#endif

    switch (ctx->pc) {
        case 0x3f6af0u: goto label_3f6af0;
        case 0x3f6af4u: goto label_3f6af4;
        case 0x3f6af8u: goto label_3f6af8;
        case 0x3f6afcu: goto label_3f6afc;
        case 0x3f6b00u: goto label_3f6b00;
        case 0x3f6b04u: goto label_3f6b04;
        case 0x3f6b08u: goto label_3f6b08;
        case 0x3f6b0cu: goto label_3f6b0c;
        case 0x3f6b10u: goto label_3f6b10;
        case 0x3f6b14u: goto label_3f6b14;
        case 0x3f6b18u: goto label_3f6b18;
        case 0x3f6b1cu: goto label_3f6b1c;
        case 0x3f6b20u: goto label_3f6b20;
        case 0x3f6b24u: goto label_3f6b24;
        case 0x3f6b28u: goto label_3f6b28;
        case 0x3f6b2cu: goto label_3f6b2c;
        case 0x3f6b30u: goto label_3f6b30;
        case 0x3f6b34u: goto label_3f6b34;
        case 0x3f6b38u: goto label_3f6b38;
        case 0x3f6b3cu: goto label_3f6b3c;
        case 0x3f6b40u: goto label_3f6b40;
        case 0x3f6b44u: goto label_3f6b44;
        case 0x3f6b48u: goto label_3f6b48;
        case 0x3f6b4cu: goto label_3f6b4c;
        case 0x3f6b50u: goto label_3f6b50;
        case 0x3f6b54u: goto label_3f6b54;
        case 0x3f6b58u: goto label_3f6b58;
        case 0x3f6b5cu: goto label_3f6b5c;
        case 0x3f6b60u: goto label_3f6b60;
        case 0x3f6b64u: goto label_3f6b64;
        case 0x3f6b68u: goto label_3f6b68;
        case 0x3f6b6cu: goto label_3f6b6c;
        case 0x3f6b70u: goto label_3f6b70;
        case 0x3f6b74u: goto label_3f6b74;
        case 0x3f6b78u: goto label_3f6b78;
        case 0x3f6b7cu: goto label_3f6b7c;
        case 0x3f6b80u: goto label_3f6b80;
        case 0x3f6b84u: goto label_3f6b84;
        case 0x3f6b88u: goto label_3f6b88;
        case 0x3f6b8cu: goto label_3f6b8c;
        case 0x3f6b90u: goto label_3f6b90;
        case 0x3f6b94u: goto label_3f6b94;
        case 0x3f6b98u: goto label_3f6b98;
        case 0x3f6b9cu: goto label_3f6b9c;
        case 0x3f6ba0u: goto label_3f6ba0;
        case 0x3f6ba4u: goto label_3f6ba4;
        case 0x3f6ba8u: goto label_3f6ba8;
        case 0x3f6bacu: goto label_3f6bac;
        case 0x3f6bb0u: goto label_3f6bb0;
        case 0x3f6bb4u: goto label_3f6bb4;
        case 0x3f6bb8u: goto label_3f6bb8;
        case 0x3f6bbcu: goto label_3f6bbc;
        case 0x3f6bc0u: goto label_3f6bc0;
        case 0x3f6bc4u: goto label_3f6bc4;
        case 0x3f6bc8u: goto label_3f6bc8;
        case 0x3f6bccu: goto label_3f6bcc;
        case 0x3f6bd0u: goto label_3f6bd0;
        case 0x3f6bd4u: goto label_3f6bd4;
        case 0x3f6bd8u: goto label_3f6bd8;
        case 0x3f6bdcu: goto label_3f6bdc;
        case 0x3f6be0u: goto label_3f6be0;
        case 0x3f6be4u: goto label_3f6be4;
        case 0x3f6be8u: goto label_3f6be8;
        case 0x3f6becu: goto label_3f6bec;
        case 0x3f6bf0u: goto label_3f6bf0;
        case 0x3f6bf4u: goto label_3f6bf4;
        case 0x3f6bf8u: goto label_3f6bf8;
        case 0x3f6bfcu: goto label_3f6bfc;
        case 0x3f6c00u: goto label_3f6c00;
        case 0x3f6c04u: goto label_3f6c04;
        case 0x3f6c08u: goto label_3f6c08;
        case 0x3f6c0cu: goto label_3f6c0c;
        case 0x3f6c10u: goto label_3f6c10;
        case 0x3f6c14u: goto label_3f6c14;
        case 0x3f6c18u: goto label_3f6c18;
        case 0x3f6c1cu: goto label_3f6c1c;
        case 0x3f6c20u: goto label_3f6c20;
        case 0x3f6c24u: goto label_3f6c24;
        case 0x3f6c28u: goto label_3f6c28;
        case 0x3f6c2cu: goto label_3f6c2c;
        case 0x3f6c30u: goto label_3f6c30;
        case 0x3f6c34u: goto label_3f6c34;
        case 0x3f6c38u: goto label_3f6c38;
        case 0x3f6c3cu: goto label_3f6c3c;
        case 0x3f6c40u: goto label_3f6c40;
        case 0x3f6c44u: goto label_3f6c44;
        case 0x3f6c48u: goto label_3f6c48;
        case 0x3f6c4cu: goto label_3f6c4c;
        case 0x3f6c50u: goto label_3f6c50;
        case 0x3f6c54u: goto label_3f6c54;
        case 0x3f6c58u: goto label_3f6c58;
        case 0x3f6c5cu: goto label_3f6c5c;
        case 0x3f6c60u: goto label_3f6c60;
        case 0x3f6c64u: goto label_3f6c64;
        case 0x3f6c68u: goto label_3f6c68;
        case 0x3f6c6cu: goto label_3f6c6c;
        case 0x3f6c70u: goto label_3f6c70;
        case 0x3f6c74u: goto label_3f6c74;
        case 0x3f6c78u: goto label_3f6c78;
        case 0x3f6c7cu: goto label_3f6c7c;
        case 0x3f6c80u: goto label_3f6c80;
        case 0x3f6c84u: goto label_3f6c84;
        case 0x3f6c88u: goto label_3f6c88;
        case 0x3f6c8cu: goto label_3f6c8c;
        case 0x3f6c90u: goto label_3f6c90;
        case 0x3f6c94u: goto label_3f6c94;
        case 0x3f6c98u: goto label_3f6c98;
        case 0x3f6c9cu: goto label_3f6c9c;
        case 0x3f6ca0u: goto label_3f6ca0;
        case 0x3f6ca4u: goto label_3f6ca4;
        case 0x3f6ca8u: goto label_3f6ca8;
        case 0x3f6cacu: goto label_3f6cac;
        case 0x3f6cb0u: goto label_3f6cb0;
        case 0x3f6cb4u: goto label_3f6cb4;
        case 0x3f6cb8u: goto label_3f6cb8;
        case 0x3f6cbcu: goto label_3f6cbc;
        case 0x3f6cc0u: goto label_3f6cc0;
        case 0x3f6cc4u: goto label_3f6cc4;
        case 0x3f6cc8u: goto label_3f6cc8;
        case 0x3f6cccu: goto label_3f6ccc;
        case 0x3f6cd0u: goto label_3f6cd0;
        case 0x3f6cd4u: goto label_3f6cd4;
        case 0x3f6cd8u: goto label_3f6cd8;
        case 0x3f6cdcu: goto label_3f6cdc;
        case 0x3f6ce0u: goto label_3f6ce0;
        case 0x3f6ce4u: goto label_3f6ce4;
        case 0x3f6ce8u: goto label_3f6ce8;
        case 0x3f6cecu: goto label_3f6cec;
        case 0x3f6cf0u: goto label_3f6cf0;
        case 0x3f6cf4u: goto label_3f6cf4;
        case 0x3f6cf8u: goto label_3f6cf8;
        case 0x3f6cfcu: goto label_3f6cfc;
        case 0x3f6d00u: goto label_3f6d00;
        case 0x3f6d04u: goto label_3f6d04;
        case 0x3f6d08u: goto label_3f6d08;
        case 0x3f6d0cu: goto label_3f6d0c;
        case 0x3f6d10u: goto label_3f6d10;
        case 0x3f6d14u: goto label_3f6d14;
        case 0x3f6d18u: goto label_3f6d18;
        case 0x3f6d1cu: goto label_3f6d1c;
        case 0x3f6d20u: goto label_3f6d20;
        case 0x3f6d24u: goto label_3f6d24;
        case 0x3f6d28u: goto label_3f6d28;
        case 0x3f6d2cu: goto label_3f6d2c;
        case 0x3f6d30u: goto label_3f6d30;
        case 0x3f6d34u: goto label_3f6d34;
        case 0x3f6d38u: goto label_3f6d38;
        case 0x3f6d3cu: goto label_3f6d3c;
        case 0x3f6d40u: goto label_3f6d40;
        case 0x3f6d44u: goto label_3f6d44;
        case 0x3f6d48u: goto label_3f6d48;
        case 0x3f6d4cu: goto label_3f6d4c;
        case 0x3f6d50u: goto label_3f6d50;
        case 0x3f6d54u: goto label_3f6d54;
        case 0x3f6d58u: goto label_3f6d58;
        case 0x3f6d5cu: goto label_3f6d5c;
        case 0x3f6d60u: goto label_3f6d60;
        case 0x3f6d64u: goto label_3f6d64;
        case 0x3f6d68u: goto label_3f6d68;
        case 0x3f6d6cu: goto label_3f6d6c;
        case 0x3f6d70u: goto label_3f6d70;
        case 0x3f6d74u: goto label_3f6d74;
        case 0x3f6d78u: goto label_3f6d78;
        case 0x3f6d7cu: goto label_3f6d7c;
        case 0x3f6d80u: goto label_3f6d80;
        case 0x3f6d84u: goto label_3f6d84;
        case 0x3f6d88u: goto label_3f6d88;
        case 0x3f6d8cu: goto label_3f6d8c;
        case 0x3f6d90u: goto label_3f6d90;
        case 0x3f6d94u: goto label_3f6d94;
        case 0x3f6d98u: goto label_3f6d98;
        case 0x3f6d9cu: goto label_3f6d9c;
        case 0x3f6da0u: goto label_3f6da0;
        case 0x3f6da4u: goto label_3f6da4;
        case 0x3f6da8u: goto label_3f6da8;
        case 0x3f6dacu: goto label_3f6dac;
        case 0x3f6db0u: goto label_3f6db0;
        case 0x3f6db4u: goto label_3f6db4;
        case 0x3f6db8u: goto label_3f6db8;
        case 0x3f6dbcu: goto label_3f6dbc;
        case 0x3f6dc0u: goto label_3f6dc0;
        case 0x3f6dc4u: goto label_3f6dc4;
        case 0x3f6dc8u: goto label_3f6dc8;
        case 0x3f6dccu: goto label_3f6dcc;
        case 0x3f6dd0u: goto label_3f6dd0;
        case 0x3f6dd4u: goto label_3f6dd4;
        case 0x3f6dd8u: goto label_3f6dd8;
        case 0x3f6ddcu: goto label_3f6ddc;
        case 0x3f6de0u: goto label_3f6de0;
        case 0x3f6de4u: goto label_3f6de4;
        case 0x3f6de8u: goto label_3f6de8;
        case 0x3f6decu: goto label_3f6dec;
        case 0x3f6df0u: goto label_3f6df0;
        case 0x3f6df4u: goto label_3f6df4;
        case 0x3f6df8u: goto label_3f6df8;
        case 0x3f6dfcu: goto label_3f6dfc;
        case 0x3f6e00u: goto label_3f6e00;
        case 0x3f6e04u: goto label_3f6e04;
        case 0x3f6e08u: goto label_3f6e08;
        case 0x3f6e0cu: goto label_3f6e0c;
        case 0x3f6e10u: goto label_3f6e10;
        case 0x3f6e14u: goto label_3f6e14;
        case 0x3f6e18u: goto label_3f6e18;
        case 0x3f6e1cu: goto label_3f6e1c;
        case 0x3f6e20u: goto label_3f6e20;
        case 0x3f6e24u: goto label_3f6e24;
        case 0x3f6e28u: goto label_3f6e28;
        case 0x3f6e2cu: goto label_3f6e2c;
        case 0x3f6e30u: goto label_3f6e30;
        case 0x3f6e34u: goto label_3f6e34;
        case 0x3f6e38u: goto label_3f6e38;
        case 0x3f6e3cu: goto label_3f6e3c;
        case 0x3f6e40u: goto label_3f6e40;
        case 0x3f6e44u: goto label_3f6e44;
        case 0x3f6e48u: goto label_3f6e48;
        case 0x3f6e4cu: goto label_3f6e4c;
        case 0x3f6e50u: goto label_3f6e50;
        case 0x3f6e54u: goto label_3f6e54;
        case 0x3f6e58u: goto label_3f6e58;
        case 0x3f6e5cu: goto label_3f6e5c;
        case 0x3f6e60u: goto label_3f6e60;
        case 0x3f6e64u: goto label_3f6e64;
        case 0x3f6e68u: goto label_3f6e68;
        case 0x3f6e6cu: goto label_3f6e6c;
        case 0x3f6e70u: goto label_3f6e70;
        case 0x3f6e74u: goto label_3f6e74;
        case 0x3f6e78u: goto label_3f6e78;
        case 0x3f6e7cu: goto label_3f6e7c;
        case 0x3f6e80u: goto label_3f6e80;
        case 0x3f6e84u: goto label_3f6e84;
        case 0x3f6e88u: goto label_3f6e88;
        case 0x3f6e8cu: goto label_3f6e8c;
        case 0x3f6e90u: goto label_3f6e90;
        case 0x3f6e94u: goto label_3f6e94;
        case 0x3f6e98u: goto label_3f6e98;
        case 0x3f6e9cu: goto label_3f6e9c;
        case 0x3f6ea0u: goto label_3f6ea0;
        case 0x3f6ea4u: goto label_3f6ea4;
        case 0x3f6ea8u: goto label_3f6ea8;
        case 0x3f6eacu: goto label_3f6eac;
        case 0x3f6eb0u: goto label_3f6eb0;
        case 0x3f6eb4u: goto label_3f6eb4;
        case 0x3f6eb8u: goto label_3f6eb8;
        case 0x3f6ebcu: goto label_3f6ebc;
        case 0x3f6ec0u: goto label_3f6ec0;
        case 0x3f6ec4u: goto label_3f6ec4;
        case 0x3f6ec8u: goto label_3f6ec8;
        case 0x3f6eccu: goto label_3f6ecc;
        case 0x3f6ed0u: goto label_3f6ed0;
        case 0x3f6ed4u: goto label_3f6ed4;
        case 0x3f6ed8u: goto label_3f6ed8;
        case 0x3f6edcu: goto label_3f6edc;
        case 0x3f6ee0u: goto label_3f6ee0;
        case 0x3f6ee4u: goto label_3f6ee4;
        case 0x3f6ee8u: goto label_3f6ee8;
        case 0x3f6eecu: goto label_3f6eec;
        case 0x3f6ef0u: goto label_3f6ef0;
        case 0x3f6ef4u: goto label_3f6ef4;
        case 0x3f6ef8u: goto label_3f6ef8;
        case 0x3f6efcu: goto label_3f6efc;
        case 0x3f6f00u: goto label_3f6f00;
        case 0x3f6f04u: goto label_3f6f04;
        case 0x3f6f08u: goto label_3f6f08;
        case 0x3f6f0cu: goto label_3f6f0c;
        case 0x3f6f10u: goto label_3f6f10;
        case 0x3f6f14u: goto label_3f6f14;
        case 0x3f6f18u: goto label_3f6f18;
        case 0x3f6f1cu: goto label_3f6f1c;
        case 0x3f6f20u: goto label_3f6f20;
        case 0x3f6f24u: goto label_3f6f24;
        case 0x3f6f28u: goto label_3f6f28;
        case 0x3f6f2cu: goto label_3f6f2c;
        case 0x3f6f30u: goto label_3f6f30;
        case 0x3f6f34u: goto label_3f6f34;
        case 0x3f6f38u: goto label_3f6f38;
        case 0x3f6f3cu: goto label_3f6f3c;
        case 0x3f6f40u: goto label_3f6f40;
        case 0x3f6f44u: goto label_3f6f44;
        case 0x3f6f48u: goto label_3f6f48;
        case 0x3f6f4cu: goto label_3f6f4c;
        case 0x3f6f50u: goto label_3f6f50;
        case 0x3f6f54u: goto label_3f6f54;
        case 0x3f6f58u: goto label_3f6f58;
        case 0x3f6f5cu: goto label_3f6f5c;
        case 0x3f6f60u: goto label_3f6f60;
        case 0x3f6f64u: goto label_3f6f64;
        case 0x3f6f68u: goto label_3f6f68;
        case 0x3f6f6cu: goto label_3f6f6c;
        case 0x3f6f70u: goto label_3f6f70;
        case 0x3f6f74u: goto label_3f6f74;
        case 0x3f6f78u: goto label_3f6f78;
        case 0x3f6f7cu: goto label_3f6f7c;
        case 0x3f6f80u: goto label_3f6f80;
        case 0x3f6f84u: goto label_3f6f84;
        case 0x3f6f88u: goto label_3f6f88;
        case 0x3f6f8cu: goto label_3f6f8c;
        case 0x3f6f90u: goto label_3f6f90;
        case 0x3f6f94u: goto label_3f6f94;
        case 0x3f6f98u: goto label_3f6f98;
        case 0x3f6f9cu: goto label_3f6f9c;
        case 0x3f6fa0u: goto label_3f6fa0;
        case 0x3f6fa4u: goto label_3f6fa4;
        case 0x3f6fa8u: goto label_3f6fa8;
        case 0x3f6facu: goto label_3f6fac;
        case 0x3f6fb0u: goto label_3f6fb0;
        case 0x3f6fb4u: goto label_3f6fb4;
        case 0x3f6fb8u: goto label_3f6fb8;
        case 0x3f6fbcu: goto label_3f6fbc;
        case 0x3f6fc0u: goto label_3f6fc0;
        case 0x3f6fc4u: goto label_3f6fc4;
        case 0x3f6fc8u: goto label_3f6fc8;
        case 0x3f6fccu: goto label_3f6fcc;
        case 0x3f6fd0u: goto label_3f6fd0;
        case 0x3f6fd4u: goto label_3f6fd4;
        case 0x3f6fd8u: goto label_3f6fd8;
        case 0x3f6fdcu: goto label_3f6fdc;
        case 0x3f6fe0u: goto label_3f6fe0;
        case 0x3f6fe4u: goto label_3f6fe4;
        case 0x3f6fe8u: goto label_3f6fe8;
        case 0x3f6fecu: goto label_3f6fec;
        case 0x3f6ff0u: goto label_3f6ff0;
        case 0x3f6ff4u: goto label_3f6ff4;
        case 0x3f6ff8u: goto label_3f6ff8;
        case 0x3f6ffcu: goto label_3f6ffc;
        case 0x3f7000u: goto label_3f7000;
        case 0x3f7004u: goto label_3f7004;
        case 0x3f7008u: goto label_3f7008;
        case 0x3f700cu: goto label_3f700c;
        case 0x3f7010u: goto label_3f7010;
        case 0x3f7014u: goto label_3f7014;
        case 0x3f7018u: goto label_3f7018;
        case 0x3f701cu: goto label_3f701c;
        case 0x3f7020u: goto label_3f7020;
        case 0x3f7024u: goto label_3f7024;
        case 0x3f7028u: goto label_3f7028;
        case 0x3f702cu: goto label_3f702c;
        case 0x3f7030u: goto label_3f7030;
        case 0x3f7034u: goto label_3f7034;
        case 0x3f7038u: goto label_3f7038;
        case 0x3f703cu: goto label_3f703c;
        case 0x3f7040u: goto label_3f7040;
        case 0x3f7044u: goto label_3f7044;
        case 0x3f7048u: goto label_3f7048;
        case 0x3f704cu: goto label_3f704c;
        case 0x3f7050u: goto label_3f7050;
        case 0x3f7054u: goto label_3f7054;
        case 0x3f7058u: goto label_3f7058;
        case 0x3f705cu: goto label_3f705c;
        case 0x3f7060u: goto label_3f7060;
        case 0x3f7064u: goto label_3f7064;
        case 0x3f7068u: goto label_3f7068;
        case 0x3f706cu: goto label_3f706c;
        case 0x3f7070u: goto label_3f7070;
        case 0x3f7074u: goto label_3f7074;
        case 0x3f7078u: goto label_3f7078;
        case 0x3f707cu: goto label_3f707c;
        case 0x3f7080u: goto label_3f7080;
        case 0x3f7084u: goto label_3f7084;
        case 0x3f7088u: goto label_3f7088;
        case 0x3f708cu: goto label_3f708c;
        case 0x3f7090u: goto label_3f7090;
        case 0x3f7094u: goto label_3f7094;
        case 0x3f7098u: goto label_3f7098;
        case 0x3f709cu: goto label_3f709c;
        case 0x3f70a0u: goto label_3f70a0;
        case 0x3f70a4u: goto label_3f70a4;
        case 0x3f70a8u: goto label_3f70a8;
        case 0x3f70acu: goto label_3f70ac;
        case 0x3f70b0u: goto label_3f70b0;
        case 0x3f70b4u: goto label_3f70b4;
        case 0x3f70b8u: goto label_3f70b8;
        case 0x3f70bcu: goto label_3f70bc;
        case 0x3f70c0u: goto label_3f70c0;
        case 0x3f70c4u: goto label_3f70c4;
        case 0x3f70c8u: goto label_3f70c8;
        case 0x3f70ccu: goto label_3f70cc;
        case 0x3f70d0u: goto label_3f70d0;
        case 0x3f70d4u: goto label_3f70d4;
        case 0x3f70d8u: goto label_3f70d8;
        case 0x3f70dcu: goto label_3f70dc;
        case 0x3f70e0u: goto label_3f70e0;
        case 0x3f70e4u: goto label_3f70e4;
        case 0x3f70e8u: goto label_3f70e8;
        case 0x3f70ecu: goto label_3f70ec;
        case 0x3f70f0u: goto label_3f70f0;
        case 0x3f70f4u: goto label_3f70f4;
        case 0x3f70f8u: goto label_3f70f8;
        case 0x3f70fcu: goto label_3f70fc;
        case 0x3f7100u: goto label_3f7100;
        case 0x3f7104u: goto label_3f7104;
        case 0x3f7108u: goto label_3f7108;
        case 0x3f710cu: goto label_3f710c;
        case 0x3f7110u: goto label_3f7110;
        case 0x3f7114u: goto label_3f7114;
        case 0x3f7118u: goto label_3f7118;
        case 0x3f711cu: goto label_3f711c;
        case 0x3f7120u: goto label_3f7120;
        case 0x3f7124u: goto label_3f7124;
        case 0x3f7128u: goto label_3f7128;
        case 0x3f712cu: goto label_3f712c;
        case 0x3f7130u: goto label_3f7130;
        case 0x3f7134u: goto label_3f7134;
        case 0x3f7138u: goto label_3f7138;
        case 0x3f713cu: goto label_3f713c;
        case 0x3f7140u: goto label_3f7140;
        case 0x3f7144u: goto label_3f7144;
        case 0x3f7148u: goto label_3f7148;
        case 0x3f714cu: goto label_3f714c;
        case 0x3f7150u: goto label_3f7150;
        case 0x3f7154u: goto label_3f7154;
        case 0x3f7158u: goto label_3f7158;
        case 0x3f715cu: goto label_3f715c;
        case 0x3f7160u: goto label_3f7160;
        case 0x3f7164u: goto label_3f7164;
        case 0x3f7168u: goto label_3f7168;
        case 0x3f716cu: goto label_3f716c;
        case 0x3f7170u: goto label_3f7170;
        case 0x3f7174u: goto label_3f7174;
        case 0x3f7178u: goto label_3f7178;
        case 0x3f717cu: goto label_3f717c;
        case 0x3f7180u: goto label_3f7180;
        case 0x3f7184u: goto label_3f7184;
        case 0x3f7188u: goto label_3f7188;
        case 0x3f718cu: goto label_3f718c;
        case 0x3f7190u: goto label_3f7190;
        case 0x3f7194u: goto label_3f7194;
        case 0x3f7198u: goto label_3f7198;
        case 0x3f719cu: goto label_3f719c;
        case 0x3f71a0u: goto label_3f71a0;
        case 0x3f71a4u: goto label_3f71a4;
        case 0x3f71a8u: goto label_3f71a8;
        case 0x3f71acu: goto label_3f71ac;
        case 0x3f71b0u: goto label_3f71b0;
        case 0x3f71b4u: goto label_3f71b4;
        case 0x3f71b8u: goto label_3f71b8;
        case 0x3f71bcu: goto label_3f71bc;
        case 0x3f71c0u: goto label_3f71c0;
        case 0x3f71c4u: goto label_3f71c4;
        case 0x3f71c8u: goto label_3f71c8;
        case 0x3f71ccu: goto label_3f71cc;
        case 0x3f71d0u: goto label_3f71d0;
        case 0x3f71d4u: goto label_3f71d4;
        case 0x3f71d8u: goto label_3f71d8;
        case 0x3f71dcu: goto label_3f71dc;
        case 0x3f71e0u: goto label_3f71e0;
        case 0x3f71e4u: goto label_3f71e4;
        case 0x3f71e8u: goto label_3f71e8;
        case 0x3f71ecu: goto label_3f71ec;
        case 0x3f71f0u: goto label_3f71f0;
        case 0x3f71f4u: goto label_3f71f4;
        case 0x3f71f8u: goto label_3f71f8;
        case 0x3f71fcu: goto label_3f71fc;
        case 0x3f7200u: goto label_3f7200;
        case 0x3f7204u: goto label_3f7204;
        case 0x3f7208u: goto label_3f7208;
        case 0x3f720cu: goto label_3f720c;
        case 0x3f7210u: goto label_3f7210;
        case 0x3f7214u: goto label_3f7214;
        case 0x3f7218u: goto label_3f7218;
        case 0x3f721cu: goto label_3f721c;
        case 0x3f7220u: goto label_3f7220;
        case 0x3f7224u: goto label_3f7224;
        case 0x3f7228u: goto label_3f7228;
        case 0x3f722cu: goto label_3f722c;
        case 0x3f7230u: goto label_3f7230;
        case 0x3f7234u: goto label_3f7234;
        case 0x3f7238u: goto label_3f7238;
        case 0x3f723cu: goto label_3f723c;
        case 0x3f7240u: goto label_3f7240;
        case 0x3f7244u: goto label_3f7244;
        case 0x3f7248u: goto label_3f7248;
        case 0x3f724cu: goto label_3f724c;
        case 0x3f7250u: goto label_3f7250;
        case 0x3f7254u: goto label_3f7254;
        case 0x3f7258u: goto label_3f7258;
        case 0x3f725cu: goto label_3f725c;
        case 0x3f7260u: goto label_3f7260;
        case 0x3f7264u: goto label_3f7264;
        case 0x3f7268u: goto label_3f7268;
        case 0x3f726cu: goto label_3f726c;
        case 0x3f7270u: goto label_3f7270;
        case 0x3f7274u: goto label_3f7274;
        case 0x3f7278u: goto label_3f7278;
        case 0x3f727cu: goto label_3f727c;
        case 0x3f7280u: goto label_3f7280;
        case 0x3f7284u: goto label_3f7284;
        case 0x3f7288u: goto label_3f7288;
        case 0x3f728cu: goto label_3f728c;
        case 0x3f7290u: goto label_3f7290;
        case 0x3f7294u: goto label_3f7294;
        case 0x3f7298u: goto label_3f7298;
        case 0x3f729cu: goto label_3f729c;
        case 0x3f72a0u: goto label_3f72a0;
        case 0x3f72a4u: goto label_3f72a4;
        case 0x3f72a8u: goto label_3f72a8;
        case 0x3f72acu: goto label_3f72ac;
        case 0x3f72b0u: goto label_3f72b0;
        case 0x3f72b4u: goto label_3f72b4;
        case 0x3f72b8u: goto label_3f72b8;
        case 0x3f72bcu: goto label_3f72bc;
        default: break;
    }

    ctx->pc = 0x3f6af0u;

label_3f6af0:
    // 0x3f6af0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3f6af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3f6af4:
    // 0x3f6af4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3f6af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3f6af8:
    // 0x3f6af8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3f6af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3f6afc:
    // 0x3f6afc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f6afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3f6b00:
    // 0x3f6b00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f6b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3f6b04:
    // 0x3f6b04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f6b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3f6b08:
    // 0x3f6b08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f6b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f6b0c:
    // 0x3f6b0c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3f6b0cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3f6b10:
    // 0x3f6b10: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3f6b10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3f6b14:
    // 0x3f6b14: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3f6b14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3f6b18:
    // 0x3f6b18: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3f6b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f6b1c:
    // 0x3f6b1c: 0x244507e0  addiu       $a1, $v0, 0x7E0
    ctx->pc = 0x3f6b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
label_3f6b20:
    // 0x3f6b20: 0xc04ccf4  jal         func_1333D0
label_3f6b24:
    if (ctx->pc == 0x3F6B24u) {
        ctx->pc = 0x3F6B24u;
            // 0x3f6b24: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3F6B28u;
        goto label_3f6b28;
    }
    ctx->pc = 0x3F6B20u;
    SET_GPR_U32(ctx, 31, 0x3F6B28u);
    ctx->pc = 0x3F6B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6B20u;
            // 0x3f6b24: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6B28u; }
        if (ctx->pc != 0x3F6B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6B28u; }
        if (ctx->pc != 0x3F6B28u) { return; }
    }
    ctx->pc = 0x3F6B28u;
label_3f6b28:
    // 0x3f6b28: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3f6b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f6b2c:
    // 0x3f6b2c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3f6b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3f6b30:
    // 0x3f6b30: 0xc04cca0  jal         func_133280
label_3f6b34:
    if (ctx->pc == 0x3F6B34u) {
        ctx->pc = 0x3F6B34u;
            // 0x3f6b34: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F6B38u;
        goto label_3f6b38;
    }
    ctx->pc = 0x3F6B30u;
    SET_GPR_U32(ctx, 31, 0x3F6B38u);
    ctx->pc = 0x3F6B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6B30u;
            // 0x3f6b34: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6B38u; }
        if (ctx->pc != 0x3F6B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6B38u; }
        if (ctx->pc != 0x3F6B38u) { return; }
    }
    ctx->pc = 0x3F6B38u;
label_3f6b38:
    // 0x3f6b38: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3f6b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f6b3c:
    // 0x3f6b3c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x3f6b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_3f6b40:
    // 0x3f6b40: 0xc04cc44  jal         func_133110
label_3f6b44:
    if (ctx->pc == 0x3F6B44u) {
        ctx->pc = 0x3F6B44u;
            // 0x3f6b44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F6B48u;
        goto label_3f6b48;
    }
    ctx->pc = 0x3F6B40u;
    SET_GPR_U32(ctx, 31, 0x3F6B48u);
    ctx->pc = 0x3F6B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6B40u;
            // 0x3f6b44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6B48u; }
        if (ctx->pc != 0x3F6B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6B48u; }
        if (ctx->pc != 0x3F6B48u) { return; }
    }
    ctx->pc = 0x3F6B48u;
label_3f6b48:
    // 0x3f6b48: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3f6b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f6b4c:
    // 0x3f6b4c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3f6b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f6b50:
    // 0x3f6b50: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3f6b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f6b54:
    // 0x3f6b54: 0xc04cca0  jal         func_133280
label_3f6b58:
    if (ctx->pc == 0x3F6B58u) {
        ctx->pc = 0x3F6B58u;
            // 0x3f6b58: 0x244507e0  addiu       $a1, $v0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
        ctx->pc = 0x3F6B5Cu;
        goto label_3f6b5c;
    }
    ctx->pc = 0x3F6B54u;
    SET_GPR_U32(ctx, 31, 0x3F6B5Cu);
    ctx->pc = 0x3F6B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6B54u;
            // 0x3f6b58: 0x244507e0  addiu       $a1, $v0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6B5Cu; }
        if (ctx->pc != 0x3F6B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6B5Cu; }
        if (ctx->pc != 0x3F6B5Cu) { return; }
    }
    ctx->pc = 0x3F6B5Cu;
label_3f6b5c:
    // 0x3f6b5c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3f6b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_3f6b60:
    // 0x3f6b60: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3f6b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f6b64:
    // 0x3f6b64: 0xc04cc08  jal         func_133020
label_3f6b68:
    if (ctx->pc == 0x3F6B68u) {
        ctx->pc = 0x3F6B68u;
            // 0x3f6b68: 0x2484b690  addiu       $a0, $a0, -0x4970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948496));
        ctx->pc = 0x3F6B6Cu;
        goto label_3f6b6c;
    }
    ctx->pc = 0x3F6B64u;
    SET_GPR_U32(ctx, 31, 0x3F6B6Cu);
    ctx->pc = 0x3F6B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6B64u;
            // 0x3f6b68: 0x2484b690  addiu       $a0, $a0, -0x4970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6B6Cu; }
        if (ctx->pc != 0x3F6B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6B6Cu; }
        if (ctx->pc != 0x3F6B6Cu) { return; }
    }
    ctx->pc = 0x3F6B6Cu;
label_3f6b6c:
    // 0x3f6b6c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3f6b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_3f6b70:
    // 0x3f6b70: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3f6b70u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3f6b74:
    // 0x3f6b74: 0xc04cc14  jal         func_133050
label_3f6b78:
    if (ctx->pc == 0x3F6B78u) {
        ctx->pc = 0x3F6B78u;
            // 0x3f6b78: 0x2484b690  addiu       $a0, $a0, -0x4970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948496));
        ctx->pc = 0x3F6B7Cu;
        goto label_3f6b7c;
    }
    ctx->pc = 0x3F6B74u;
    SET_GPR_U32(ctx, 31, 0x3F6B7Cu);
    ctx->pc = 0x3F6B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6B74u;
            // 0x3f6b78: 0x2484b690  addiu       $a0, $a0, -0x4970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6B7Cu; }
        if (ctx->pc != 0x3F6B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6B7Cu; }
        if (ctx->pc != 0x3F6B7Cu) { return; }
    }
    ctx->pc = 0x3F6B7Cu;
label_3f6b7c:
    // 0x3f6b7c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3f6b7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3f6b80:
    // 0x3f6b80: 0xc04cc14  jal         func_133050
label_3f6b84:
    if (ctx->pc == 0x3F6B84u) {
        ctx->pc = 0x3F6B84u;
            // 0x3f6b84: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3F6B88u;
        goto label_3f6b88;
    }
    ctx->pc = 0x3F6B80u;
    SET_GPR_U32(ctx, 31, 0x3F6B88u);
    ctx->pc = 0x3F6B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6B80u;
            // 0x3f6b84: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6B88u; }
        if (ctx->pc != 0x3F6B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6B88u; }
        if (ctx->pc != 0x3F6B88u) { return; }
    }
    ctx->pc = 0x3F6B88u;
label_3f6b88:
    // 0x3f6b88: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3f6b88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3f6b8c:
    // 0x3f6b8c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3f6b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3f6b90:
    // 0x3f6b90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f6b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f6b94:
    // 0x3f6b94: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x3f6b94u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
label_3f6b98:
    // 0x3f6b98: 0x0  nop
    ctx->pc = 0x3f6b98u;
    // NOP
label_3f6b9c:
    // 0x3f6b9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f6b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6ba0:
    // 0x3f6ba0: 0x0  nop
    ctx->pc = 0x3f6ba0u;
    // NOP
label_3f6ba4:
    // 0x3f6ba4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f6ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f6ba8:
    // 0x3f6ba8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3f6bac:
    if (ctx->pc == 0x3F6BACu) {
        ctx->pc = 0x3F6BACu;
            // 0x3f6bac: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x3F6BB0u;
        goto label_3f6bb0;
    }
    ctx->pc = 0x3F6BA8u;
    {
        const bool branch_taken_0x3f6ba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f6ba8) {
            ctx->pc = 0x3F6BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6BA8u;
            // 0x3f6bac: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F6BB8u;
            goto label_3f6bb8;
        }
    }
    ctx->pc = 0x3F6BB0u;
label_3f6bb0:
    // 0x3f6bb0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3f6bb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f6bb4:
    // 0x3f6bb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3f6bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3f6bb8:
    // 0x3f6bb8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3f6bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3f6bbc:
    // 0x3f6bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f6bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6bc0:
    // 0x3f6bc0: 0x0  nop
    ctx->pc = 0x3f6bc0u;
    // NOP
label_3f6bc4:
    // 0x3f6bc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3f6bc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f6bc8:
    // 0x3f6bc8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3f6bcc:
    if (ctx->pc == 0x3F6BCCu) {
        ctx->pc = 0x3F6BCCu;
            // 0x3f6bcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F6BD0u;
        goto label_3f6bd0;
    }
    ctx->pc = 0x3F6BC8u;
    {
        const bool branch_taken_0x3f6bc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F6BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6BC8u;
            // 0x3f6bcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6bc8) {
            ctx->pc = 0x3F6BD4u;
            goto label_3f6bd4;
        }
    }
    ctx->pc = 0x3F6BD0u;
label_3f6bd0:
    // 0x3f6bd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f6bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f6bd4:
    // 0x3f6bd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3f6bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3f6bd8:
    // 0x3f6bd8: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x3f6bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_3f6bdc:
    // 0x3f6bdc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3f6bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3f6be0:
    // 0x3f6be0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f6be0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6be4:
    // 0x3f6be4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3f6be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3f6be8:
    // 0x3f6be8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f6be8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3f6bec:
    // 0x3f6bec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3f6becu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3f6bf0:
    // 0x3f6bf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f6bf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6bf4:
    // 0x3f6bf4: 0x0  nop
    ctx->pc = 0x3f6bf4u;
    // NOP
label_3f6bf8:
    // 0x3f6bf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f6bf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3f6bfc:
    // 0x3f6bfc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f6bfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3f6c00:
    // 0x3f6c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f6c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6c04:
    // 0x3f6c04: 0x0  nop
    ctx->pc = 0x3f6c04u;
    // NOP
label_3f6c08:
    // 0x3f6c08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f6c08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3f6c0c:
    // 0x3f6c0c: 0xc0477fe  jal         func_11DFF8
label_3f6c10:
    if (ctx->pc == 0x3F6C10u) {
        ctx->pc = 0x3F6C10u;
            // 0x3f6c10: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x3F6C14u;
        goto label_3f6c14;
    }
    ctx->pc = 0x3F6C0Cu;
    SET_GPR_U32(ctx, 31, 0x3F6C14u);
    ctx->pc = 0x3F6C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6C0Cu;
            // 0x3f6c10: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6C14u; }
        if (ctx->pc != 0x3F6C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6C14u; }
        if (ctx->pc != 0x3F6C14u) { return; }
    }
    ctx->pc = 0x3F6C14u;
label_3f6c14:
    // 0x3f6c14: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x3f6c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_3f6c18:
    // 0x3f6c18: 0x34660fdb  ori         $a2, $v1, 0xFDB
    ctx->pc = 0x3f6c18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_3f6c1c:
    // 0x3f6c1c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3f6c1cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f6c20:
    // 0x3f6c20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f6c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f6c24:
    // 0x3f6c24: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x3f6c24u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3f6c28:
    // 0x3f6c28: 0xc7a40070  lwc1        $f4, 0x70($sp)
    ctx->pc = 0x3f6c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3f6c2c:
    // 0x3f6c2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3f6c2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6c30:
    // 0x3f6c30: 0x0  nop
    ctx->pc = 0x3f6c30u;
    // NOP
label_3f6c34:
    // 0x3f6c34: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x3f6c34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f6c38:
    // 0x3f6c38: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3f6c3c:
    if (ctx->pc == 0x3F6C3Cu) {
        ctx->pc = 0x3F6C3Cu;
            // 0x3f6c3c: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3F6C40u;
        goto label_3f6c40;
    }
    ctx->pc = 0x3F6C38u;
    {
        const bool branch_taken_0x3f6c38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F6C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6C38u;
            // 0x3f6c3c: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6c38) {
            ctx->pc = 0x3F6C44u;
            goto label_3f6c44;
        }
    }
    ctx->pc = 0x3F6C40u;
label_3f6c40:
    // 0x3f6c40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3f6c40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f6c44:
    // 0x3f6c44: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_3f6c48:
    if (ctx->pc == 0x3F6C48u) {
        ctx->pc = 0x3F6C48u;
            // 0x3f6c48: 0x33042  srl         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3F6C4Cu;
        goto label_3f6c4c;
    }
    ctx->pc = 0x3F6C44u;
    {
        const bool branch_taken_0x3f6c44 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3f6c44) {
            ctx->pc = 0x3F6C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6C44u;
            // 0x3f6c48: 0x33042  srl         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F6C58u;
            goto label_3f6c58;
        }
    }
    ctx->pc = 0x3F6C4Cu;
label_3f6c4c:
    // 0x3f6c4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f6c4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6c50:
    // 0x3f6c50: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f6c54:
    if (ctx->pc == 0x3F6C54u) {
        ctx->pc = 0x3F6C54u;
            // 0x3f6c54: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3F6C58u;
        goto label_3f6c58;
    }
    ctx->pc = 0x3F6C50u;
    {
        const bool branch_taken_0x3f6c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6C50u;
            // 0x3f6c54: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6c50) {
            ctx->pc = 0x3F6C70u;
            goto label_3f6c70;
        }
    }
    ctx->pc = 0x3F6C58u;
label_3f6c58:
    // 0x3f6c58: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3f6c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3f6c5c:
    // 0x3f6c5c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3f6c5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_3f6c60:
    // 0x3f6c60: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3f6c60u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6c64:
    // 0x3f6c64: 0x0  nop
    ctx->pc = 0x3f6c64u;
    // NOP
label_3f6c68:
    // 0x3f6c68: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3f6c68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3f6c6c:
    // 0x3f6c6c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3f6c6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3f6c70:
    // 0x3f6c70: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3f6c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3f6c74:
    // 0x3f6c74: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x3f6c74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
label_3f6c78:
    // 0x3f6c78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f6c78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6c7c:
    // 0x3f6c7c: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x3f6c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f6c80:
    // 0x3f6c80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3f6c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f6c84:
    // 0x3f6c84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3f6c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f6c88:
    // 0x3f6c88: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x3f6c88u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f6c8c:
    // 0x3f6c8c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x3f6c8cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3f6c90:
    // 0x3f6c90: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x3f6c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3f6c94:
    // 0x3f6c94: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x3f6c94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_3f6c98:
    // 0x3f6c98: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x3f6c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_3f6c9c:
    // 0x3f6c9c: 0xc6160880  lwc1        $f22, 0x880($s0)
    ctx->pc = 0x3f6c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3f6ca0:
    // 0x3f6ca0: 0x10c300aa  beq         $a2, $v1, . + 4 + (0xAA << 2)
label_3f6ca4:
    if (ctx->pc == 0x3F6CA4u) {
        ctx->pc = 0x3F6CA4u;
            // 0x3f6ca4: 0x46160540  add.s       $f21, $f0, $f22 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->pc = 0x3F6CA8u;
        goto label_3f6ca8;
    }
    ctx->pc = 0x3F6CA0u;
    {
        const bool branch_taken_0x3f6ca0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F6CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6CA0u;
            // 0x3f6ca4: 0x46160540  add.s       $f21, $f0, $f22 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6ca0) {
            ctx->pc = 0x3F6F4Cu;
            goto label_3f6f4c;
        }
    }
    ctx->pc = 0x3F6CA8u;
label_3f6ca8:
    // 0x3f6ca8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f6ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f6cac:
    // 0x3f6cac: 0x10c3003c  beq         $a2, $v1, . + 4 + (0x3C << 2)
label_3f6cb0:
    if (ctx->pc == 0x3F6CB0u) {
        ctx->pc = 0x3F6CB4u;
        goto label_3f6cb4;
    }
    ctx->pc = 0x3F6CACu;
    {
        const bool branch_taken_0x3f6cac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f6cac) {
            ctx->pc = 0x3F6DA0u;
            goto label_3f6da0;
        }
    }
    ctx->pc = 0x3F6CB4u;
label_3f6cb4:
    // 0x3f6cb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f6cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f6cb8:
    // 0x3f6cb8: 0x50c30006  beql        $a2, $v1, . + 4 + (0x6 << 2)
label_3f6cbc:
    if (ctx->pc == 0x3F6CBCu) {
        ctx->pc = 0x3F6CBCu;
            // 0x3f6cbc: 0x3c023fb2  lui         $v0, 0x3FB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16306 << 16));
        ctx->pc = 0x3F6CC0u;
        goto label_3f6cc0;
    }
    ctx->pc = 0x3F6CB8u;
    {
        const bool branch_taken_0x3f6cb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f6cb8) {
            ctx->pc = 0x3F6CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6CB8u;
            // 0x3f6cbc: 0x3c023fb2  lui         $v0, 0x3FB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16306 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F6CD4u;
            goto label_3f6cd4;
        }
    }
    ctx->pc = 0x3F6CC0u;
label_3f6cc0:
    // 0x3f6cc0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_3f6cc4:
    if (ctx->pc == 0x3F6CC4u) {
        ctx->pc = 0x3F6CC8u;
        goto label_3f6cc8;
    }
    ctx->pc = 0x3F6CC0u;
    {
        const bool branch_taken_0x3f6cc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6cc0) {
            ctx->pc = 0x3F6CD0u;
            goto label_3f6cd0;
        }
    }
    ctx->pc = 0x3F6CC8u;
label_3f6cc8:
    // 0x3f6cc8: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_3f6ccc:
    if (ctx->pc == 0x3F6CCCu) {
        ctx->pc = 0x3F6CCCu;
            // 0x3f6ccc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x3F6CD0u;
        goto label_3f6cd0;
    }
    ctx->pc = 0x3F6CC8u;
    {
        const bool branch_taken_0x3f6cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6CC8u;
            // 0x3f6ccc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6cc8) {
            ctx->pc = 0x3F6F70u;
            goto label_3f6f70;
        }
    }
    ctx->pc = 0x3F6CD0u;
label_3f6cd0:
    // 0x3f6cd0: 0x3c023fb2  lui         $v0, 0x3FB2
    ctx->pc = 0x3f6cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16306 << 16));
label_3f6cd4:
    // 0x3f6cd4: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x3f6cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_3f6cd8:
    // 0x3f6cd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f6cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6cdc:
    // 0x3f6cdc: 0x0  nop
    ctx->pc = 0x3f6cdcu;
    // NOP
label_3f6ce0:
    // 0x3f6ce0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3f6ce0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f6ce4:
    // 0x3f6ce4: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_3f6ce8:
    if (ctx->pc == 0x3F6CE8u) {
        ctx->pc = 0x3F6CE8u;
            // 0x3f6ce8: 0x3c023fb2  lui         $v0, 0x3FB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16306 << 16));
        ctx->pc = 0x3F6CECu;
        goto label_3f6cec;
    }
    ctx->pc = 0x3F6CE4u;
    {
        const bool branch_taken_0x3f6ce4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f6ce4) {
            ctx->pc = 0x3F6CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6CE4u;
            // 0x3f6ce8: 0x3c023fb2  lui         $v0, 0x3FB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16306 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F6D2Cu;
            goto label_3f6d2c;
        }
    }
    ctx->pc = 0x3F6CECu;
label_3f6cec:
    // 0x3f6cec: 0x8e030db0  lw          $v1, 0xDB0($s0)
    ctx->pc = 0x3f6cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_3f6cf0:
    // 0x3f6cf0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x3f6cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3f6cf4:
    // 0x3f6cf4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_3f6cf8:
    if (ctx->pc == 0x3F6CF8u) {
        ctx->pc = 0x3F6CFCu;
        goto label_3f6cfc;
    }
    ctx->pc = 0x3F6CF4u;
    {
        const bool branch_taken_0x3f6cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3f6cf4) {
            ctx->pc = 0x3F6D28u;
            goto label_3f6d28;
        }
    }
    ctx->pc = 0x3F6CFCu;
label_3f6cfc:
    // 0x3f6cfc: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x3f6cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
label_3f6d00:
    // 0x3f6d00: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3f6d00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3f6d04:
    // 0x3f6d04: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3f6d04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3f6d08:
    // 0x3f6d08: 0xc0c753c  jal         func_31D4F0
label_3f6d0c:
    if (ctx->pc == 0x3F6D0Cu) {
        ctx->pc = 0x3F6D0Cu;
            // 0x3f6d0c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3F6D10u;
        goto label_3f6d10;
    }
    ctx->pc = 0x3F6D08u;
    SET_GPR_U32(ctx, 31, 0x3F6D10u);
    ctx->pc = 0x3F6D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6D08u;
            // 0x3f6d0c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6D10u; }
        if (ctx->pc != 0x3F6D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6D10u; }
        if (ctx->pc != 0x3F6D10u) { return; }
    }
    ctx->pc = 0x3F6D10u;
label_3f6d10:
    // 0x3f6d10: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3f6d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f6d14:
    // 0x3f6d14: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3f6d14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3f6d18:
    // 0x3f6d18: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3f6d18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3f6d1c:
    // 0x3f6d1c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3f6d1cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3f6d20:
    // 0x3f6d20: 0xc0c753c  jal         func_31D4F0
label_3f6d24:
    if (ctx->pc == 0x3F6D24u) {
        ctx->pc = 0x3F6D24u;
            // 0x3f6d24: 0x2444092c  addiu       $a0, $v0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2348));
        ctx->pc = 0x3F6D28u;
        goto label_3f6d28;
    }
    ctx->pc = 0x3F6D20u;
    SET_GPR_U32(ctx, 31, 0x3F6D28u);
    ctx->pc = 0x3F6D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6D20u;
            // 0x3f6d24: 0x2444092c  addiu       $a0, $v0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6D28u; }
        if (ctx->pc != 0x3F6D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6D28u; }
        if (ctx->pc != 0x3F6D28u) { return; }
    }
    ctx->pc = 0x3F6D28u;
label_3f6d28:
    // 0x3f6d28: 0x3c023fb2  lui         $v0, 0x3FB2
    ctx->pc = 0x3f6d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16306 << 16));
label_3f6d2c:
    // 0x3f6d2c: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x3f6d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_3f6d30:
    // 0x3f6d30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f6d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6d34:
    // 0x3f6d34: 0x0  nop
    ctx->pc = 0x3f6d34u;
    // NOP
label_3f6d38:
    // 0x3f6d38: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3f6d38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f6d3c:
    // 0x3f6d3c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_3f6d40:
    if (ctx->pc == 0x3F6D40u) {
        ctx->pc = 0x3F6D40u;
            // 0x3f6d40: 0x3c033ed5  lui         $v1, 0x3ED5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16085 << 16));
        ctx->pc = 0x3F6D44u;
        goto label_3f6d44;
    }
    ctx->pc = 0x3F6D3Cu;
    {
        const bool branch_taken_0x3f6d3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f6d3c) {
            ctx->pc = 0x3F6D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6D3Cu;
            // 0x3f6d40: 0x3c033ed5  lui         $v1, 0x3ED5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16085 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F6D5Cu;
            goto label_3f6d5c;
        }
    }
    ctx->pc = 0x3F6D44u;
label_3f6d44:
    // 0x3f6d44: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3f6d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f6d48:
    // 0x3f6d48: 0x8c820da0  lw          $v0, 0xDA0($a0)
    ctx->pc = 0x3f6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_3f6d4c:
    // 0x3f6d4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f6d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3f6d50:
    // 0x3f6d50: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3f6d54:
    if (ctx->pc == 0x3F6D54u) {
        ctx->pc = 0x3F6D54u;
            // 0x3f6d54: 0x3c033e3d  lui         $v1, 0x3E3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15933 << 16));
        ctx->pc = 0x3F6D58u;
        goto label_3f6d58;
    }
    ctx->pc = 0x3F6D50u;
    {
        const bool branch_taken_0x3f6d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6d50) {
            ctx->pc = 0x3F6D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6D50u;
            // 0x3f6d54: 0x3c033e3d  lui         $v1, 0x3E3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15933 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F6D80u;
            goto label_3f6d80;
        }
    }
    ctx->pc = 0x3F6D58u;
label_3f6d58:
    // 0x3f6d58: 0x3c033ed5  lui         $v1, 0x3ED5
    ctx->pc = 0x3f6d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16085 << 16));
label_3f6d5c:
    // 0x3f6d5c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3f6d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f6d60:
    // 0x3f6d60: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3f6d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3f6d64:
    // 0x3f6d64: 0x34635555  ori         $v1, $v1, 0x5555
    ctx->pc = 0x3f6d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21845);
label_3f6d68:
    // 0x3f6d68: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3f6d68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f6d6c:
    // 0x3f6d6c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3f6d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f6d70:
    // 0x3f6d70: 0xc0767f0  jal         func_1D9FC0
label_3f6d74:
    if (ctx->pc == 0x3F6D74u) {
        ctx->pc = 0x3F6D74u;
            // 0x3f6d74: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3F6D78u;
        goto label_3f6d78;
    }
    ctx->pc = 0x3F6D70u;
    SET_GPR_U32(ctx, 31, 0x3F6D78u);
    ctx->pc = 0x3F6D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6D70u;
            // 0x3f6d74: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6D78u; }
        if (ctx->pc != 0x3F6D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6D78u; }
        if (ctx->pc != 0x3F6D78u) { return; }
    }
    ctx->pc = 0x3F6D78u;
label_3f6d78:
    // 0x3f6d78: 0x1000007c  b           . + 4 + (0x7C << 2)
label_3f6d7c:
    if (ctx->pc == 0x3F6D7Cu) {
        ctx->pc = 0x3F6D80u;
        goto label_3f6d80;
    }
    ctx->pc = 0x3F6D78u;
    {
        const bool branch_taken_0x3f6d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6d78) {
            ctx->pc = 0x3F6F6Cu;
            goto label_3f6f6c;
        }
    }
    ctx->pc = 0x3F6D80u;
label_3f6d80:
    // 0x3f6d80: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3f6d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3f6d84:
    // 0x3f6d84: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x3f6d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_3f6d88:
    // 0x3f6d88: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3f6d88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f6d8c:
    // 0x3f6d8c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3f6d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f6d90:
    // 0x3f6d90: 0xc0767f0  jal         func_1D9FC0
label_3f6d94:
    if (ctx->pc == 0x3F6D94u) {
        ctx->pc = 0x3F6D94u;
            // 0x3f6d94: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3F6D98u;
        goto label_3f6d98;
    }
    ctx->pc = 0x3F6D90u;
    SET_GPR_U32(ctx, 31, 0x3F6D98u);
    ctx->pc = 0x3F6D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6D90u;
            // 0x3f6d94: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6D98u; }
        if (ctx->pc != 0x3F6D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6D98u; }
        if (ctx->pc != 0x3F6D98u) { return; }
    }
    ctx->pc = 0x3F6D98u;
label_3f6d98:
    // 0x3f6d98: 0x10000074  b           . + 4 + (0x74 << 2)
label_3f6d9c:
    if (ctx->pc == 0x3F6D9Cu) {
        ctx->pc = 0x3F6DA0u;
        goto label_3f6da0;
    }
    ctx->pc = 0x3F6D98u;
    {
        const bool branch_taken_0x3f6d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6d98) {
            ctx->pc = 0x3F6F6Cu;
            goto label_3f6f6c;
        }
    }
    ctx->pc = 0x3F6DA0u;
label_3f6da0:
    // 0x3f6da0: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x3f6da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f6da4:
    // 0x3f6da4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3f6da8:
    if (ctx->pc == 0x3F6DA8u) {
        ctx->pc = 0x3F6DA8u;
            // 0x3f6da8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F6DACu;
        goto label_3f6dac;
    }
    ctx->pc = 0x3F6DA4u;
    {
        const bool branch_taken_0x3f6da4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F6DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6DA4u;
            // 0x3f6da8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6da4) {
            ctx->pc = 0x3F6DB0u;
            goto label_3f6db0;
        }
    }
    ctx->pc = 0x3F6DACu;
label_3f6dac:
    // 0x3f6dac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f6dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f6db0:
    // 0x3f6db0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3f6db4:
    if (ctx->pc == 0x3F6DB4u) {
        ctx->pc = 0x3F6DB4u;
            // 0x3f6db4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3F6DB8u;
        goto label_3f6db8;
    }
    ctx->pc = 0x3F6DB0u;
    {
        const bool branch_taken_0x3f6db0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f6db0) {
            ctx->pc = 0x3F6DB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6DB0u;
            // 0x3f6db4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F6DC4u;
            goto label_3f6dc4;
        }
    }
    ctx->pc = 0x3F6DB8u;
label_3f6db8:
    // 0x3f6db8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f6db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6dbc:
    // 0x3f6dbc: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f6dc0:
    if (ctx->pc == 0x3F6DC0u) {
        ctx->pc = 0x3F6DC0u;
            // 0x3f6dc0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3F6DC4u;
        goto label_3f6dc4;
    }
    ctx->pc = 0x3F6DBCu;
    {
        const bool branch_taken_0x3f6dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6DBCu;
            // 0x3f6dc0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6dbc) {
            ctx->pc = 0x3F6DDCu;
            goto label_3f6ddc;
        }
    }
    ctx->pc = 0x3F6DC4u;
label_3f6dc4:
    // 0x3f6dc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f6dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3f6dc8:
    // 0x3f6dc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f6dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3f6dcc:
    // 0x3f6dcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f6dccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6dd0:
    // 0x3f6dd0: 0x0  nop
    ctx->pc = 0x3f6dd0u;
    // NOP
label_3f6dd4:
    // 0x3f6dd4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3f6dd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3f6dd8:
    // 0x3f6dd8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3f6dd8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3f6ddc:
    // 0x3f6ddc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3f6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3f6de0:
    // 0x3f6de0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3f6de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_3f6de4:
    // 0x3f6de4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f6de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f6de8:
    // 0x3f6de8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3f6de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6dec:
    // 0x3f6dec: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3f6decu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f6df0:
    // 0x3f6df0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3f6df0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3f6df4:
    // 0x3f6df4: 0xc049514  jal         func_125450
label_3f6df8:
    if (ctx->pc == 0x3F6DF8u) {
        ctx->pc = 0x3F6DF8u;
            // 0x3f6df8: 0x4603131d  msub.s      $f12, $f2, $f3 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->pc = 0x3F6DFCu;
        goto label_3f6dfc;
    }
    ctx->pc = 0x3F6DF4u;
    SET_GPR_U32(ctx, 31, 0x3F6DFCu);
    ctx->pc = 0x3F6DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6DF4u;
            // 0x3f6df8: 0x4603131d  msub.s      $f12, $f2, $f3 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6DFCu; }
        if (ctx->pc != 0x3F6DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6DFCu; }
        if (ctx->pc != 0x3F6DFCu) { return; }
    }
    ctx->pc = 0x3F6DFCu;
label_3f6dfc:
    // 0x3f6dfc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f6dfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f6e00:
    // 0x3f6e00: 0x3c023fe8  lui         $v0, 0x3FE8
    ctx->pc = 0x3f6e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16360 << 16));
label_3f6e04:
    // 0x3f6e04: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x3f6e04u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
label_3f6e08:
    // 0x3f6e08: 0xc049514  jal         func_125450
label_3f6e0c:
    if (ctx->pc == 0x3F6E0Cu) {
        ctx->pc = 0x3F6E0Cu;
            // 0x3f6e0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3F6E10u;
        goto label_3f6e10;
    }
    ctx->pc = 0x3F6E08u;
    SET_GPR_U32(ctx, 31, 0x3F6E10u);
    ctx->pc = 0x3F6E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6E08u;
            // 0x3f6e0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6E10u; }
        if (ctx->pc != 0x3F6E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6E10u; }
        if (ctx->pc != 0x3F6E10u) { return; }
    }
    ctx->pc = 0x3F6E10u;
label_3f6e10:
    // 0x3f6e10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f6e14:
    // 0x3f6e14: 0xc04963e  jal         func_1258F8
label_3f6e18:
    if (ctx->pc == 0x3F6E18u) {
        ctx->pc = 0x3F6E18u;
            // 0x3f6e18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F6E1Cu;
        goto label_3f6e1c;
    }
    ctx->pc = 0x3F6E14u;
    SET_GPR_U32(ctx, 31, 0x3F6E1Cu);
    ctx->pc = 0x3F6E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6E14u;
            // 0x3f6e18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6E1Cu; }
        if (ctx->pc != 0x3F6E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6E1Cu; }
        if (ctx->pc != 0x3F6E1Cu) { return; }
    }
    ctx->pc = 0x3F6E1Cu;
label_3f6e1c:
    // 0x3f6e1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f6e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f6e20:
    // 0x3f6e20: 0xc04963e  jal         func_1258F8
label_3f6e24:
    if (ctx->pc == 0x3F6E24u) {
        ctx->pc = 0x3F6E24u;
            // 0x3f6e24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F6E28u;
        goto label_3f6e28;
    }
    ctx->pc = 0x3F6E20u;
    SET_GPR_U32(ctx, 31, 0x3F6E28u);
    ctx->pc = 0x3F6E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6E20u;
            // 0x3f6e24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6E28u; }
        if (ctx->pc != 0x3F6E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6E28u; }
        if (ctx->pc != 0x3F6E28u) { return; }
    }
    ctx->pc = 0x3F6E28u;
label_3f6e28:
    // 0x3f6e28: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3f6e28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3f6e2c:
    // 0x3f6e2c: 0xc049514  jal         func_125450
label_3f6e30:
    if (ctx->pc == 0x3F6E30u) {
        ctx->pc = 0x3F6E30u;
            // 0x3f6e30: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F6E34u;
        goto label_3f6e34;
    }
    ctx->pc = 0x3F6E2Cu;
    SET_GPR_U32(ctx, 31, 0x3F6E34u);
    ctx->pc = 0x3F6E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6E2Cu;
            // 0x3f6e30: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6E34u; }
        if (ctx->pc != 0x3F6E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6E34u; }
        if (ctx->pc != 0x3F6E34u) { return; }
    }
    ctx->pc = 0x3F6E34u;
label_3f6e34:
    // 0x3f6e34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f6e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f6e38:
    // 0x3f6e38: 0xc04960a  jal         func_125828
label_3f6e3c:
    if (ctx->pc == 0x3F6E3Cu) {
        ctx->pc = 0x3F6E3Cu;
            // 0x3f6e3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F6E40u;
        goto label_3f6e40;
    }
    ctx->pc = 0x3F6E38u;
    SET_GPR_U32(ctx, 31, 0x3F6E40u);
    ctx->pc = 0x3F6E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6E38u;
            // 0x3f6e3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6E40u; }
        if (ctx->pc != 0x3F6E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6E40u; }
        if (ctx->pc != 0x3F6E40u) { return; }
    }
    ctx->pc = 0x3F6E40u;
label_3f6e40:
    // 0x3f6e40: 0xc0497dc  jal         func_125F70
label_3f6e44:
    if (ctx->pc == 0x3F6E44u) {
        ctx->pc = 0x3F6E44u;
            // 0x3f6e44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F6E48u;
        goto label_3f6e48;
    }
    ctx->pc = 0x3F6E40u;
    SET_GPR_U32(ctx, 31, 0x3F6E48u);
    ctx->pc = 0x3F6E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6E40u;
            // 0x3f6e44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6E48u; }
        if (ctx->pc != 0x3F6E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6E48u; }
        if (ctx->pc != 0x3F6E48u) { return; }
    }
    ctx->pc = 0x3F6E48u;
label_3f6e48:
    // 0x3f6e48: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3f6e48u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3f6e4c:
    // 0x3f6e4c: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x3f6e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
label_3f6e50:
    // 0x3f6e50: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3f6e50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3f6e54:
    // 0x3f6e54: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3f6e54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3f6e58:
    // 0x3f6e58: 0xc0c753c  jal         func_31D4F0
label_3f6e5c:
    if (ctx->pc == 0x3F6E5Cu) {
        ctx->pc = 0x3F6E5Cu;
            // 0x3f6e5c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3F6E60u;
        goto label_3f6e60;
    }
    ctx->pc = 0x3F6E58u;
    SET_GPR_U32(ctx, 31, 0x3F6E60u);
    ctx->pc = 0x3F6E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6E58u;
            // 0x3f6e5c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6E60u; }
        if (ctx->pc != 0x3F6E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6E60u; }
        if (ctx->pc != 0x3F6E60u) { return; }
    }
    ctx->pc = 0x3F6E60u;
label_3f6e60:
    // 0x3f6e60: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3f6e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f6e64:
    // 0x3f6e64: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3f6e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3f6e68:
    // 0x3f6e68: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3f6e68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3f6e6c:
    // 0x3f6e6c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3f6e6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3f6e70:
    // 0x3f6e70: 0xc0c753c  jal         func_31D4F0
label_3f6e74:
    if (ctx->pc == 0x3F6E74u) {
        ctx->pc = 0x3F6E74u;
            // 0x3f6e74: 0x2444092c  addiu       $a0, $v0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2348));
        ctx->pc = 0x3F6E78u;
        goto label_3f6e78;
    }
    ctx->pc = 0x3F6E70u;
    SET_GPR_U32(ctx, 31, 0x3F6E78u);
    ctx->pc = 0x3F6E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6E70u;
            // 0x3f6e74: 0x2444092c  addiu       $a0, $v0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6E78u; }
        if (ctx->pc != 0x3F6E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6E78u; }
        if (ctx->pc != 0x3F6E78u) { return; }
    }
    ctx->pc = 0x3F6E78u;
label_3f6e78:
    // 0x3f6e78: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x3f6e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
label_3f6e7c:
    // 0x3f6e7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3f6e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3f6e80:
    // 0x3f6e80: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3f6e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_3f6e84:
    // 0x3f6e84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f6e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6e88:
    // 0x3f6e88: 0x0  nop
    ctx->pc = 0x3f6e88u;
    // NOP
label_3f6e8c:
    // 0x3f6e8c: 0x4600a0c3  div.s       $f3, $f20, $f0
    ctx->pc = 0x3f6e8cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[3] = ctx->f[20] / ctx->f[0];
label_3f6e90:
    // 0x3f6e90: 0x0  nop
    ctx->pc = 0x3f6e90u;
    // NOP
label_3f6e94:
    // 0x3f6e94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f6e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6e98:
    // 0x3f6e98: 0x0  nop
    ctx->pc = 0x3f6e98u;
    // NOP
label_3f6e9c:
    // 0x3f6e9c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x3f6e9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f6ea0:
    // 0x3f6ea0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_3f6ea4:
    if (ctx->pc == 0x3F6EA4u) {
        ctx->pc = 0x3F6EA8u;
        goto label_3f6ea8;
    }
    ctx->pc = 0x3F6EA0u;
    {
        const bool branch_taken_0x3f6ea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f6ea0) {
            ctx->pc = 0x3F6EB0u;
            goto label_3f6eb0;
        }
    }
    ctx->pc = 0x3F6EA8u;
label_3f6ea8:
    // 0x3f6ea8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f6eac:
    if (ctx->pc == 0x3F6EACu) {
        ctx->pc = 0x3F6EACu;
            // 0x3f6eac: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3F6EB0u;
        goto label_3f6eb0;
    }
    ctx->pc = 0x3F6EA8u;
    {
        const bool branch_taken_0x3f6ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6EA8u;
            // 0x3f6eac: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6ea8) {
            ctx->pc = 0x3F6EC8u;
            goto label_3f6ec8;
        }
    }
    ctx->pc = 0x3F6EB0u;
label_3f6eb0:
    // 0x3f6eb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3f6eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6eb4:
    // 0x3f6eb4: 0x0  nop
    ctx->pc = 0x3f6eb4u;
    // NOP
label_3f6eb8:
    // 0x3f6eb8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3f6eb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f6ebc:
    // 0x3f6ebc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3f6ec0:
    if (ctx->pc == 0x3F6EC0u) {
        ctx->pc = 0x3F6EC0u;
            // 0x3f6ec0: 0x3c023f86  lui         $v0, 0x3F86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
        ctx->pc = 0x3F6EC4u;
        goto label_3f6ec4;
    }
    ctx->pc = 0x3F6EBCu;
    {
        const bool branch_taken_0x3f6ebc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f6ebc) {
            ctx->pc = 0x3F6EC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6EBCu;
            // 0x3f6ec0: 0x3c023f86  lui         $v0, 0x3F86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F6ECCu;
            goto label_3f6ecc;
        }
    }
    ctx->pc = 0x3F6EC4u;
label_3f6ec4:
    // 0x3f6ec4: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x3f6ec4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_3f6ec8:
    // 0x3f6ec8: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x3f6ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
label_3f6ecc:
    // 0x3f6ecc: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3f6eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_3f6ed0:
    // 0x3f6ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f6ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6ed4:
    // 0x3f6ed4: 0x0  nop
    ctx->pc = 0x3f6ed4u;
    // NOP
label_3f6ed8:
    // 0x3f6ed8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3f6ed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f6edc:
    // 0x3f6edc: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_3f6ee0:
    if (ctx->pc == 0x3F6EE0u) {
        ctx->pc = 0x3F6EE0u;
            // 0x3f6ee0: 0x3c033ebd  lui         $v1, 0x3EBD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16061 << 16));
        ctx->pc = 0x3F6EE4u;
        goto label_3f6ee4;
    }
    ctx->pc = 0x3F6EDCu;
    {
        const bool branch_taken_0x3f6edc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f6edc) {
            ctx->pc = 0x3F6EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6EDCu;
            // 0x3f6ee0: 0x3c033ebd  lui         $v1, 0x3EBD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16061 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F6F0Cu;
            goto label_3f6f0c;
        }
    }
    ctx->pc = 0x3F6EE4u;
label_3f6ee4:
    // 0x3f6ee4: 0x3c033ed5  lui         $v1, 0x3ED5
    ctx->pc = 0x3f6ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16085 << 16));
label_3f6ee8:
    // 0x3f6ee8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3f6ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f6eec:
    // 0x3f6eec: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3f6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3f6ef0:
    // 0x3f6ef0: 0x34635555  ori         $v1, $v1, 0x5555
    ctx->pc = 0x3f6ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21845);
label_3f6ef4:
    // 0x3f6ef4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3f6ef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f6ef8:
    // 0x3f6ef8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3f6ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f6efc:
    // 0x3f6efc: 0xc0767f0  jal         func_1D9FC0
label_3f6f00:
    if (ctx->pc == 0x3F6F00u) {
        ctx->pc = 0x3F6F00u;
            // 0x3f6f00: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3F6F04u;
        goto label_3f6f04;
    }
    ctx->pc = 0x3F6EFCu;
    SET_GPR_U32(ctx, 31, 0x3F6F04u);
    ctx->pc = 0x3F6F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6EFCu;
            // 0x3f6f00: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6F04u; }
        if (ctx->pc != 0x3F6F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6F04u; }
        if (ctx->pc != 0x3F6F04u) { return; }
    }
    ctx->pc = 0x3F6F04u;
label_3f6f04:
    // 0x3f6f04: 0x10000019  b           . + 4 + (0x19 << 2)
label_3f6f08:
    if (ctx->pc == 0x3F6F08u) {
        ctx->pc = 0x3F6F0Cu;
        goto label_3f6f0c;
    }
    ctx->pc = 0x3F6F04u;
    {
        const bool branch_taken_0x3f6f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6f04) {
            ctx->pc = 0x3F6F6Cu;
            goto label_3f6f6c;
        }
    }
    ctx->pc = 0x3F6F0Cu;
label_3f6f0c:
    // 0x3f6f0c: 0x3c023d3d  lui         $v0, 0x3D3D
    ctx->pc = 0x3f6f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15677 << 16));
label_3f6f10:
    // 0x3f6f10: 0x3464a12f  ori         $a0, $v1, 0xA12F
    ctx->pc = 0x3f6f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_3f6f14:
    // 0x3f6f14: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3f6f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f6f18:
    // 0x3f6f18: 0x3443a12f  ori         $v1, $v0, 0xA12F
    ctx->pc = 0x3f6f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_3f6f1c:
    // 0x3f6f1c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3f6f1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f6f20:
    // 0x3f6f20: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3f6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3f6f24:
    // 0x3f6f24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f6f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f6f28:
    // 0x3f6f28: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3f6f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f6f2c:
    // 0x3f6f2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3f6f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6f30:
    // 0x3f6f30: 0x0  nop
    ctx->pc = 0x3f6f30u;
    // NOP
label_3f6f34:
    // 0x3f6f34: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3f6f34u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3f6f38:
    // 0x3f6f38: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3f6f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f6f3c:
    // 0x3f6f3c: 0xc0767f0  jal         func_1D9FC0
label_3f6f40:
    if (ctx->pc == 0x3F6F40u) {
        ctx->pc = 0x3F6F40u;
            // 0x3f6f40: 0x4603131c  madd.s      $f12, $f2, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->pc = 0x3F6F44u;
        goto label_3f6f44;
    }
    ctx->pc = 0x3F6F3Cu;
    SET_GPR_U32(ctx, 31, 0x3F6F44u);
    ctx->pc = 0x3F6F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6F3Cu;
            // 0x3f6f40: 0x4603131c  madd.s      $f12, $f2, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6F44u; }
        if (ctx->pc != 0x3F6F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6F44u; }
        if (ctx->pc != 0x3F6F44u) { return; }
    }
    ctx->pc = 0x3F6F44u;
label_3f6f44:
    // 0x3f6f44: 0x10000009  b           . + 4 + (0x9 << 2)
label_3f6f48:
    if (ctx->pc == 0x3F6F48u) {
        ctx->pc = 0x3F6F4Cu;
        goto label_3f6f4c;
    }
    ctx->pc = 0x3F6F44u;
    {
        const bool branch_taken_0x3f6f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6f44) {
            ctx->pc = 0x3F6F6Cu;
            goto label_3f6f6c;
        }
    }
    ctx->pc = 0x3F6F4Cu;
label_3f6f4c:
    // 0x3f6f4c: 0x3c023ed5  lui         $v0, 0x3ED5
    ctx->pc = 0x3f6f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16085 << 16));
label_3f6f50:
    // 0x3f6f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f6f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f6f54:
    // 0x3f6f54: 0x34435555  ori         $v1, $v0, 0x5555
    ctx->pc = 0x3f6f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
label_3f6f58:
    // 0x3f6f58: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3f6f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3f6f5c:
    // 0x3f6f5c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3f6f5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f6f60:
    // 0x3f6f60: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3f6f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f6f64:
    // 0x3f6f64: 0xc0767f0  jal         func_1D9FC0
label_3f6f68:
    if (ctx->pc == 0x3F6F68u) {
        ctx->pc = 0x3F6F68u;
            // 0x3f6f68: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3F6F6Cu;
        goto label_3f6f6c;
    }
    ctx->pc = 0x3F6F64u;
    SET_GPR_U32(ctx, 31, 0x3F6F6Cu);
    ctx->pc = 0x3F6F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6F64u;
            // 0x3f6f68: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6F6Cu; }
        if (ctx->pc != 0x3F6F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F6F6Cu; }
        if (ctx->pc != 0x3F6F6Cu) { return; }
    }
    ctx->pc = 0x3F6F6Cu;
label_3f6f6c:
    // 0x3f6f6c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3f6f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f6f70:
    // 0x3f6f70: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x3f6f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3f6f74:
    // 0x3f6f74: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x3f6f74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_3f6f78:
    // 0x3f6f78: 0x8205010f  lb          $a1, 0x10F($s0)
    ctx->pc = 0x3f6f78u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 271)));
label_3f6f7c:
    // 0x3f6f7c: 0x50a30049  beql        $a1, $v1, . + 4 + (0x49 << 2)
label_3f6f80:
    if (ctx->pc == 0x3F6F80u) {
        ctx->pc = 0x3F6F80u;
            // 0x3f6f80: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x3F6F84u;
        goto label_3f6f84;
    }
    ctx->pc = 0x3F6F7Cu;
    {
        const bool branch_taken_0x3f6f7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f6f7c) {
            ctx->pc = 0x3F6F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6F7Cu;
            // 0x3f6f80: 0x8e260010  lw          $a2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F70A4u;
            goto label_3f70a4;
        }
    }
    ctx->pc = 0x3F6F84u;
label_3f6f84:
    // 0x3f6f84: 0x8c850d70  lw          $a1, 0xD70($a0)
    ctx->pc = 0x3f6f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_3f6f88:
    // 0x3f6f88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f6f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f6f8c:
    // 0x3f6f8c: 0x8ca500cc  lw          $a1, 0xCC($a1)
    ctx->pc = 0x3f6f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
label_3f6f90:
    // 0x3f6f90: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x3f6f90u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3f6f94:
    // 0x3f6f94: 0x14a30042  bne         $a1, $v1, . + 4 + (0x42 << 2)
label_3f6f98:
    if (ctx->pc == 0x3F6F98u) {
        ctx->pc = 0x3F6F9Cu;
        goto label_3f6f9c;
    }
    ctx->pc = 0x3F6F94u;
    {
        const bool branch_taken_0x3f6f94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f6f94) {
            ctx->pc = 0x3F70A0u;
            goto label_3f70a0;
        }
    }
    ctx->pc = 0x3F6F9Cu;
label_3f6f9c:
    // 0x3f6f9c: 0x8c830a6c  lw          $v1, 0xA6C($a0)
    ctx->pc = 0x3f6f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2668)));
label_3f6fa0:
    // 0x3f6fa0: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
label_3f6fa4:
    if (ctx->pc == 0x3F6FA4u) {
        ctx->pc = 0x3F6FA8u;
        goto label_3f6fa8;
    }
    ctx->pc = 0x3F6FA0u;
    {
        const bool branch_taken_0x3f6fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6fa0) {
            ctx->pc = 0x3F70A0u;
            goto label_3f70a0;
        }
    }
    ctx->pc = 0x3F6FA8u;
label_3f6fa8:
    // 0x3f6fa8: 0x3c033ed5  lui         $v1, 0x3ED5
    ctx->pc = 0x3f6fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16085 << 16));
label_3f6fac:
    // 0x3f6fac: 0x34635555  ori         $v1, $v1, 0x5555
    ctx->pc = 0x3f6facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21845);
label_3f6fb0:
    // 0x3f6fb0: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x3f6fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f6fb4:
    // 0x3f6fb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f6fb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6fb8:
    // 0x3f6fb8: 0x0  nop
    ctx->pc = 0x3f6fb8u;
    // NOP
label_3f6fbc:
    // 0x3f6fbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f6fbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f6fc0:
    // 0x3f6fc0: 0x45010037  bc1t        . + 4 + (0x37 << 2)
label_3f6fc4:
    if (ctx->pc == 0x3F6FC4u) {
        ctx->pc = 0x3F6FC8u;
        goto label_3f6fc8;
    }
    ctx->pc = 0x3F6FC0u;
    {
        const bool branch_taken_0x3f6fc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f6fc0) {
            ctx->pc = 0x3F70A0u;
            goto label_3f70a0;
        }
    }
    ctx->pc = 0x3F6FC8u;
label_3f6fc8:
    // 0x3f6fc8: 0x3c033e86  lui         $v1, 0x3E86
    ctx->pc = 0x3f6fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16006 << 16));
label_3f6fcc:
    // 0x3f6fcc: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x3f6fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_3f6fd0:
    // 0x3f6fd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f6fd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f6fd4:
    // 0x3f6fd4: 0x0  nop
    ctx->pc = 0x3f6fd4u;
    // NOP
label_3f6fd8:
    // 0x3f6fd8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3f6fd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f6fdc:
    // 0x3f6fdc: 0x45010030  bc1t        . + 4 + (0x30 << 2)
label_3f6fe0:
    if (ctx->pc == 0x3F6FE0u) {
        ctx->pc = 0x3F6FE4u;
        goto label_3f6fe4;
    }
    ctx->pc = 0x3F6FDCu;
    {
        const bool branch_taken_0x3f6fdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f6fdc) {
            ctx->pc = 0x3F70A0u;
            goto label_3f70a0;
        }
    }
    ctx->pc = 0x3F6FE4u;
label_3f6fe4:
    // 0x3f6fe4: 0x8c8211d4  lw          $v0, 0x11D4($a0)
    ctx->pc = 0x3f6fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4564)));
label_3f6fe8:
    // 0x3f6fe8: 0x38430002  xori        $v1, $v0, 0x2
    ctx->pc = 0x3f6fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_3f6fec:
    // 0x3f6fec: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x3f6fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_3f6ff0:
    // 0x3f6ff0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3f6ff0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3f6ff4:
    // 0x3f6ff4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3f6ff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3f6ff8:
    // 0x3f6ff8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3f6ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3f6ffc:
    // 0x3f6ffc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3f7000:
    if (ctx->pc == 0x3F7000u) {
        ctx->pc = 0x3F7000u;
            // 0x3f7000: 0x8205010c  lb          $a1, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->pc = 0x3F7004u;
        goto label_3f7004;
    }
    ctx->pc = 0x3F6FFCu;
    {
        const bool branch_taken_0x3f6ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6ffc) {
            ctx->pc = 0x3F7000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F6FFCu;
            // 0x3f7000: 0x8205010c  lb          $a1, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F7018u;
            goto label_3f7018;
        }
    }
    ctx->pc = 0x3F7004u;
label_3f7004:
    // 0x3f7004: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f7004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f7008:
    // 0x3f7008: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3f7008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3f700c:
    // 0x3f700c: 0x320f809  jalr        $t9
label_3f7010:
    if (ctx->pc == 0x3F7010u) {
        ctx->pc = 0x3F7010u;
            // 0x3f7010: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x3F7014u;
        goto label_3f7014;
    }
    ctx->pc = 0x3F700Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F7014u);
        ctx->pc = 0x3F7010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F700Cu;
            // 0x3f7010: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F7014u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F7014u; }
            if (ctx->pc != 0x3F7014u) { return; }
        }
        }
    }
    ctx->pc = 0x3F7014u;
label_3f7014:
    // 0x3f7014: 0x8205010c  lb          $a1, 0x10C($s0)
    ctx->pc = 0x3f7014u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_3f7018:
    // 0x3f7018: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f7018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f701c:
    // 0x3f701c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3f701cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3f7020:
    // 0x3f7020: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3f7020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f7024:
    // 0x3f7024: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3f7024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f7028:
    // 0x3f7028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f7028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f702c:
    // 0x3f702c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3f702cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3f7030:
    // 0x3f7030: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f7030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f7034:
    // 0x3f7034: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3f7034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3f7038:
    // 0x3f7038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f7038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3f703c:
    // 0x3f703c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3f703cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3f7040:
    // 0x3f7040: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3f7040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3f7044:
    // 0x3f7044: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x3f7044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_3f7048:
    // 0x3f7048: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3f7048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f704c:
    // 0x3f704c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3f704cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3f7050:
    // 0x3f7050: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3f7050u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3f7054:
    // 0x3f7054: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3f7054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3f7058:
    // 0x3f7058: 0x320f809  jalr        $t9
label_3f705c:
    if (ctx->pc == 0x3F705Cu) {
        ctx->pc = 0x3F705Cu;
            // 0x3f705c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3F7060u;
        goto label_3f7060;
    }
    ctx->pc = 0x3F7058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F7060u);
        ctx->pc = 0x3F705Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7058u;
            // 0x3f705c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F7060u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F7060u; }
            if (ctx->pc != 0x3F7060u) { return; }
        }
        }
    }
    ctx->pc = 0x3F7060u;
label_3f7060:
    // 0x3f7060: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3f7060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3f7064:
    // 0x3f7064: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3f7064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3f7068:
    // 0x3f7068: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3f7068u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3f706c:
    // 0x3f706c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3f706cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f7070:
    // 0x3f7070: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3f7070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f7074:
    // 0x3f7074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f7074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f7078:
    // 0x3f7078: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3f7078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3f707c:
    // 0x3f707c: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x3f707cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3f7080:
    // 0x3f7080: 0x320f809  jalr        $t9
label_3f7084:
    if (ctx->pc == 0x3F7084u) {
        ctx->pc = 0x3F7084u;
            // 0x3f7084: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3F7088u;
        goto label_3f7088;
    }
    ctx->pc = 0x3F7080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F7088u);
        ctx->pc = 0x3F7084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7080u;
            // 0x3f7084: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F7088u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F7088u; }
            if (ctx->pc != 0x3F7088u) { return; }
        }
        }
    }
    ctx->pc = 0x3F7088u;
label_3f7088:
    // 0x3f7088: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3f7088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3f708c:
    // 0x3f708c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3f708cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f7090:
    // 0x3f7090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f7090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f7094:
    // 0x3f7094: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3f7094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3f7098:
    // 0x3f7098: 0x320f809  jalr        $t9
label_3f709c:
    if (ctx->pc == 0x3F709Cu) {
        ctx->pc = 0x3F709Cu;
            // 0x3f709c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F70A0u;
        goto label_3f70a0;
    }
    ctx->pc = 0x3F7098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F70A0u);
        ctx->pc = 0x3F709Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7098u;
            // 0x3f709c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F70A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F70A0u; }
            if (ctx->pc != 0x3F70A0u) { return; }
        }
        }
    }
    ctx->pc = 0x3F70A0u;
label_3f70a0:
    // 0x3f70a0: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x3f70a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f70a4:
    // 0x3f70a4: 0x3c033e6d  lui         $v1, 0x3E6D
    ctx->pc = 0x3f70a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15981 << 16));
label_3f70a8:
    // 0x3f70a8: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x3f70a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_3f70ac:
    // 0x3f70ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f70acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f70b0:
    // 0x3f70b0: 0xc4c10de4  lwc1        $f1, 0xDE4($a2)
    ctx->pc = 0x3f70b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f70b4:
    // 0x3f70b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3f70b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f70b8:
    // 0x3f70b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3f70bc:
    if (ctx->pc == 0x3F70BCu) {
        ctx->pc = 0x3F70BCu;
            // 0x3f70bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F70C0u;
        goto label_3f70c0;
    }
    ctx->pc = 0x3F70B8u;
    {
        const bool branch_taken_0x3f70b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F70BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F70B8u;
            // 0x3f70bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f70b8) {
            ctx->pc = 0x3F70C4u;
            goto label_3f70c4;
        }
    }
    ctx->pc = 0x3F70C0u;
label_3f70c0:
    // 0x3f70c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3f70c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f70c4:
    // 0x3f70c4: 0x3c033fb2  lui         $v1, 0x3FB2
    ctx->pc = 0x3f70c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
label_3f70c8:
    // 0x3f70c8: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x3f70c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3f70cc:
    // 0x3f70cc: 0x3463b8c2  ori         $v1, $v1, 0xB8C2
    ctx->pc = 0x3f70ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
label_3f70d0:
    // 0x3f70d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f70d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f70d4:
    // 0x3f70d4: 0x0  nop
    ctx->pc = 0x3f70d4u;
    // NOP
label_3f70d8:
    // 0x3f70d8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3f70d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f70dc:
    // 0x3f70dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3f70e0:
    if (ctx->pc == 0x3F70E0u) {
        ctx->pc = 0x3F70E0u;
            // 0x3f70e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F70E4u;
        goto label_3f70e4;
    }
    ctx->pc = 0x3F70DCu;
    {
        const bool branch_taken_0x3f70dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F70E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F70DCu;
            // 0x3f70e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f70dc) {
            ctx->pc = 0x3F70E8u;
            goto label_3f70e8;
        }
    }
    ctx->pc = 0x3F70E4u;
label_3f70e4:
    // 0x3f70e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3f70e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f70e8:
    // 0x3f70e8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3f70e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3f70ec:
    // 0x3f70ec: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3f70ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_3f70f0:
    // 0x3f70f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3f70f4:
    if (ctx->pc == 0x3F70F4u) {
        ctx->pc = 0x3F70F8u;
        goto label_3f70f8;
    }
    ctx->pc = 0x3F70F0u;
    {
        const bool branch_taken_0x3f70f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f70f0) {
            ctx->pc = 0x3F7104u;
            goto label_3f7104;
        }
    }
    ctx->pc = 0x3F70F8u;
label_3f70f8:
    // 0x3f70f8: 0x3c033e6d  lui         $v1, 0x3E6D
    ctx->pc = 0x3f70f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15981 << 16));
label_3f70fc:
    // 0x3f70fc: 0x3463097b  ori         $v1, $v1, 0x97B
    ctx->pc = 0x3f70fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2427);
label_3f7100:
    // 0x3f7100: 0xacc30de4  sw          $v1, 0xDE4($a2)
    ctx->pc = 0x3f7100u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3556), GPR_U32(ctx, 3));
label_3f7104:
    // 0x3f7104: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x3f7104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_3f7108:
    // 0x3f7108: 0x0  nop
    ctx->pc = 0x3f7108u;
    // NOP
label_3f710c:
    // 0x3f710c: 0x4606a034  c.lt.s      $f20, $f6
    ctx->pc = 0x3f710cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f7110:
    // 0x3f7110: 0x45020029  bc1fl       . + 4 + (0x29 << 2)
label_3f7114:
    if (ctx->pc == 0x3F7114u) {
        ctx->pc = 0x3F7114u;
            // 0x3f7114: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x3F7118u;
        goto label_3f7118;
    }
    ctx->pc = 0x3F7110u;
    {
        const bool branch_taken_0x3f7110 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f7110) {
            ctx->pc = 0x3F7114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7110u;
            // 0x3f7114: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F71B8u;
            goto label_3f71b8;
        }
    }
    ctx->pc = 0x3F7118u;
label_3f7118:
    // 0x3f7118: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3f7118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f711c:
    // 0x3f711c: 0x3c033dbd  lui         $v1, 0x3DBD
    ctx->pc = 0x3f711cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15805 << 16));
label_3f7120:
    // 0x3f7120: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x3f7120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_3f7124:
    // 0x3f7124: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f7124u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f7128:
    // 0x3f7128: 0xc4820de4  lwc1        $f2, 0xDE4($a0)
    ctx->pc = 0x3f7128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f712c:
    // 0x3f712c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x3f712cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f7130:
    // 0x3f7130: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_3f7134:
    if (ctx->pc == 0x3F7134u) {
        ctx->pc = 0x3F7134u;
            // 0x3f7134: 0x3c03bdbd  lui         $v1, 0xBDBD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48573 << 16));
        ctx->pc = 0x3F7138u;
        goto label_3f7138;
    }
    ctx->pc = 0x3F7130u;
    {
        const bool branch_taken_0x3f7130 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f7130) {
            ctx->pc = 0x3F7134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7130u;
            // 0x3f7134: 0x3c03bdbd  lui         $v1, 0xBDBD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48573 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F716Cu;
            goto label_3f716c;
        }
    }
    ctx->pc = 0x3F7138u;
label_3f7138:
    // 0x3f7138: 0x3c033d3d  lui         $v1, 0x3D3D
    ctx->pc = 0x3f7138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15677 << 16));
label_3f713c:
    // 0x3f713c: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x3f713cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_3f7140:
    // 0x3f7140: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f7140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f7144:
    // 0x3f7144: 0x0  nop
    ctx->pc = 0x3f7144u;
    // NOP
label_3f7148:
    // 0x3f7148: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3f7148u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3f714c:
    // 0x3f714c: 0xe4800de4  swc1        $f0, 0xDE4($a0)
    ctx->pc = 0x3f714cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
label_3f7150:
    // 0x3f7150: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3f7150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f7154:
    // 0x3f7154: 0xc4600de4  lwc1        $f0, 0xDE4($v1)
    ctx->pc = 0x3f7154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f7158:
    // 0x3f7158: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3f7158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f715c:
    // 0x3f715c: 0x4502004e  bc1fl       . + 4 + (0x4E << 2)
label_3f7160:
    if (ctx->pc == 0x3F7160u) {
        ctx->pc = 0x3F7160u;
            // 0x3f7160: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3F7164u;
        goto label_3f7164;
    }
    ctx->pc = 0x3F715Cu;
    {
        const bool branch_taken_0x3f715c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f715c) {
            ctx->pc = 0x3F7160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F715Cu;
            // 0x3f7160: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F7298u;
            goto label_3f7298;
        }
    }
    ctx->pc = 0x3F7164u;
label_3f7164:
    // 0x3f7164: 0x1000004b  b           . + 4 + (0x4B << 2)
label_3f7168:
    if (ctx->pc == 0x3F7168u) {
        ctx->pc = 0x3F7168u;
            // 0x3f7168: 0xe4610de4  swc1        $f1, 0xDE4($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3556), bits); }
        ctx->pc = 0x3F716Cu;
        goto label_3f716c;
    }
    ctx->pc = 0x3F7164u;
    {
        const bool branch_taken_0x3f7164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7164u;
            // 0x3f7168: 0xe4610de4  swc1        $f1, 0xDE4($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7164) {
            ctx->pc = 0x3F7294u;
            goto label_3f7294;
        }
    }
    ctx->pc = 0x3F716Cu;
label_3f716c:
    // 0x3f716c: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x3f716cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_3f7170:
    // 0x3f7170: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f7170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f7174:
    // 0x3f7174: 0x0  nop
    ctx->pc = 0x3f7174u;
    // NOP
label_3f7178:
    // 0x3f7178: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3f7178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f717c:
    // 0x3f717c: 0x45000045  bc1f        . + 4 + (0x45 << 2)
label_3f7180:
    if (ctx->pc == 0x3F7180u) {
        ctx->pc = 0x3F7184u;
        goto label_3f7184;
    }
    ctx->pc = 0x3F717Cu;
    {
        const bool branch_taken_0x3f717c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f717c) {
            ctx->pc = 0x3F7294u;
            goto label_3f7294;
        }
    }
    ctx->pc = 0x3F7184u;
label_3f7184:
    // 0x3f7184: 0x3c033d3d  lui         $v1, 0x3D3D
    ctx->pc = 0x3f7184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15677 << 16));
label_3f7188:
    // 0x3f7188: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x3f7188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_3f718c:
    // 0x3f718c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f718cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f7190:
    // 0x3f7190: 0x0  nop
    ctx->pc = 0x3f7190u;
    // NOP
label_3f7194:
    // 0x3f7194: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3f7194u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3f7198:
    // 0x3f7198: 0xe4800de4  swc1        $f0, 0xDE4($a0)
    ctx->pc = 0x3f7198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
label_3f719c:
    // 0x3f719c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3f719cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f71a0:
    // 0x3f71a0: 0xc4600de4  lwc1        $f0, 0xDE4($v1)
    ctx->pc = 0x3f71a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f71a4:
    // 0x3f71a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f71a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f71a8:
    // 0x3f71a8: 0x4501003a  bc1t        . + 4 + (0x3A << 2)
label_3f71ac:
    if (ctx->pc == 0x3F71ACu) {
        ctx->pc = 0x3F71B0u;
        goto label_3f71b0;
    }
    ctx->pc = 0x3F71A8u;
    {
        const bool branch_taken_0x3f71a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f71a8) {
            ctx->pc = 0x3F7294u;
            goto label_3f7294;
        }
    }
    ctx->pc = 0x3F71B0u;
label_3f71b0:
    // 0x3f71b0: 0x10000038  b           . + 4 + (0x38 << 2)
label_3f71b4:
    if (ctx->pc == 0x3F71B4u) {
        ctx->pc = 0x3F71B4u;
            // 0x3f71b4: 0xe4610de4  swc1        $f1, 0xDE4($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3556), bits); }
        ctx->pc = 0x3F71B8u;
        goto label_3f71b8;
    }
    ctx->pc = 0x3F71B0u;
    {
        const bool branch_taken_0x3f71b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F71B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F71B0u;
            // 0x3f71b4: 0xe4610de4  swc1        $f1, 0xDE4($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f71b0) {
            ctx->pc = 0x3F7294u;
            goto label_3f7294;
        }
    }
    ctx->pc = 0x3F71B8u;
label_3f71b8:
    // 0x3f71b8: 0x3c033dbd  lui         $v1, 0x3DBD
    ctx->pc = 0x3f71b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15805 << 16));
label_3f71bc:
    // 0x3f71bc: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x3f71bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_3f71c0:
    // 0x3f71c0: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3f71c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3f71c4:
    // 0x3f71c4: 0xc4a50de4  lwc1        $f5, 0xDE4($a1)
    ctx->pc = 0x3f71c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3f71c8:
    // 0x3f71c8: 0x46042836  c.le.s      $f5, $f4
    ctx->pc = 0x3f71c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f71cc:
    // 0x3f71cc: 0x45030016  bc1tl       . + 4 + (0x16 << 2)
label_3f71d0:
    if (ctx->pc == 0x3F71D0u) {
        ctx->pc = 0x3F71D0u;
            // 0x3f71d0: 0x3c03bdbd  lui         $v1, 0xBDBD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48573 << 16));
        ctx->pc = 0x3F71D4u;
        goto label_3f71d4;
    }
    ctx->pc = 0x3F71CCu;
    {
        const bool branch_taken_0x3f71cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f71cc) {
            ctx->pc = 0x3F71D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F71CCu;
            // 0x3f71d0: 0x3c03bdbd  lui         $v1, 0xBDBD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48573 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F7228u;
            goto label_3f7228;
        }
    }
    ctx->pc = 0x3F71D4u;
label_3f71d4:
    // 0x3f71d4: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x3f71d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_3f71d8:
    // 0x3f71d8: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x3f71d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_3f71dc:
    // 0x3f71dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f71dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f71e0:
    // 0x3f71e0: 0x3c033d3d  lui         $v1, 0x3D3D
    ctx->pc = 0x3f71e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15677 << 16));
label_3f71e4:
    // 0x3f71e4: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x3f71e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[0];
label_3f71e8:
    // 0x3f71e8: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x3f71e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_3f71ec:
    // 0x3f71ec: 0xc4a20dec  lwc1        $f2, 0xDEC($a1)
    ctx->pc = 0x3f71ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f71f0:
    // 0x3f71f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f71f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f71f4:
    // 0x3f71f4: 0x0  nop
    ctx->pc = 0x3f71f4u;
    // NOP
label_3f71f8:
    // 0x3f71f8: 0x46003018  adda.s      $f6, $f0
    ctx->pc = 0x3f71f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_3f71fc:
    // 0x3f71fc: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3f71fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3f7200:
    // 0x3f7200: 0x4602081c  madd.s      $f0, $f1, $f2
    ctx->pc = 0x3f7200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_3f7204:
    // 0x3f7204: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x3f7204u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_3f7208:
    // 0x3f7208: 0xe4a00de4  swc1        $f0, 0xDE4($a1)
    ctx->pc = 0x3f7208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 3556), bits); }
label_3f720c:
    // 0x3f720c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3f720cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f7210:
    // 0x3f7210: 0xc4600de4  lwc1        $f0, 0xDE4($v1)
    ctx->pc = 0x3f7210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f7214:
    // 0x3f7214: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x3f7214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f7218:
    // 0x3f7218: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_3f721c:
    if (ctx->pc == 0x3F721Cu) {
        ctx->pc = 0x3F7220u;
        goto label_3f7220;
    }
    ctx->pc = 0x3F7218u;
    {
        const bool branch_taken_0x3f7218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f7218) {
            ctx->pc = 0x3F7294u;
            goto label_3f7294;
        }
    }
    ctx->pc = 0x3F7220u;
label_3f7220:
    // 0x3f7220: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3f7224:
    if (ctx->pc == 0x3F7224u) {
        ctx->pc = 0x3F7224u;
            // 0x3f7224: 0xe4640de4  swc1        $f4, 0xDE4($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3556), bits); }
        ctx->pc = 0x3F7228u;
        goto label_3f7228;
    }
    ctx->pc = 0x3F7220u;
    {
        const bool branch_taken_0x3f7220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7220u;
            // 0x3f7224: 0xe4640de4  swc1        $f4, 0xDE4($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7220) {
            ctx->pc = 0x3F7294u;
            goto label_3f7294;
        }
    }
    ctx->pc = 0x3F7228u;
label_3f7228:
    // 0x3f7228: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x3f7228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_3f722c:
    // 0x3f722c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3f722cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f7230:
    // 0x3f7230: 0x0  nop
    ctx->pc = 0x3f7230u;
    // NOP
label_3f7234:
    // 0x3f7234: 0x46032834  c.lt.s      $f5, $f3
    ctx->pc = 0x3f7234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f7238:
    // 0x3f7238: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_3f723c:
    if (ctx->pc == 0x3F723Cu) {
        ctx->pc = 0x3F7240u;
        goto label_3f7240;
    }
    ctx->pc = 0x3F7238u;
    {
        const bool branch_taken_0x3f7238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f7238) {
            ctx->pc = 0x3F7294u;
            goto label_3f7294;
        }
    }
    ctx->pc = 0x3F7240u;
label_3f7240:
    // 0x3f7240: 0xc4a10dec  lwc1        $f1, 0xDEC($a1)
    ctx->pc = 0x3f7240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f7244:
    // 0x3f7244: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x3f7244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_3f7248:
    // 0x3f7248: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x3f7248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_3f724c:
    // 0x3f724c: 0x3c033d3d  lui         $v1, 0x3D3D
    ctx->pc = 0x3f724cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15677 << 16));
label_3f7250:
    // 0x3f7250: 0x46012082  mul.s       $f2, $f4, $f1
    ctx->pc = 0x3f7250u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_3f7254:
    // 0x3f7254: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x3f7254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_3f7258:
    // 0x3f7258: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f7258u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f725c:
    // 0x3f725c: 0x0  nop
    ctx->pc = 0x3f725cu;
    // NOP
label_3f7260:
    // 0x3f7260: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x3f7260u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[1] = ctx->f[20] / ctx->f[0];
label_3f7264:
    // 0x3f7264: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f7264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f7268:
    // 0x3f7268: 0x0  nop
    ctx->pc = 0x3f7268u;
    // NOP
label_3f726c:
    // 0x3f726c: 0x46003018  adda.s      $f6, $f0
    ctx->pc = 0x3f726cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_3f7270:
    // 0x3f7270: 0x4602081c  madd.s      $f0, $f1, $f2
    ctx->pc = 0x3f7270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_3f7274:
    // 0x3f7274: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x3f7274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_3f7278:
    // 0x3f7278: 0xe4a00de4  swc1        $f0, 0xDE4($a1)
    ctx->pc = 0x3f7278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 3556), bits); }
label_3f727c:
    // 0x3f727c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3f727cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f7280:
    // 0x3f7280: 0xc4600de4  lwc1        $f0, 0xDE4($v1)
    ctx->pc = 0x3f7280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f7284:
    // 0x3f7284: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x3f7284u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f7288:
    // 0x3f7288: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3f728c:
    if (ctx->pc == 0x3F728Cu) {
        ctx->pc = 0x3F7290u;
        goto label_3f7290;
    }
    ctx->pc = 0x3F7288u;
    {
        const bool branch_taken_0x3f7288 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f7288) {
            ctx->pc = 0x3F7294u;
            goto label_3f7294;
        }
    }
    ctx->pc = 0x3F7290u;
label_3f7290:
    // 0x3f7290: 0xe4630de4  swc1        $f3, 0xDE4($v1)
    ctx->pc = 0x3f7290u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3556), bits); }
label_3f7294:
    // 0x3f7294: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3f7294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3f7298:
    // 0x3f7298: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3f7298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3f729c:
    // 0x3f729c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3f729cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f72a0:
    // 0x3f72a0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3f72a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3f72a4:
    // 0x3f72a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f72a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f72a8:
    // 0x3f72a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3f72a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f72ac:
    // 0x3f72ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f72acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f72b0:
    // 0x3f72b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f72b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f72b4:
    // 0x3f72b4: 0x3e00008  jr          $ra
label_3f72b8:
    if (ctx->pc == 0x3F72B8u) {
        ctx->pc = 0x3F72B8u;
            // 0x3f72b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3F72BCu;
        goto label_3f72bc;
    }
    ctx->pc = 0x3F72B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F72B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F72B4u;
            // 0x3f72b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F72BCu;
label_3f72bc:
    // 0x3f72bc: 0x0  nop
    ctx->pc = 0x3f72bcu;
    // NOP
}
